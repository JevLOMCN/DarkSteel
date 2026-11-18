// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// StaticClass @ 14937a820

UClass * __cdecl UAsyncNiagaraCaptureSimCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"AsyncNiagaraCaptureSimCache",
               &Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.InnerSingleton,
               StaticRegisterNativesUAsyncNiagaraCaptureSimCache,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncNiagaraCaptureSimCache>,
               InternalVTableHelperCtorCaller<UAsyncNiagaraCaptureSimCache>,local_res8,
               UCancellableAsyncAction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.InnerSingleton;
}

// UAsyncNiagaraCaptureSimCache @ 149387920

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

UAsyncNiagaraCaptureSimCache * __thiscall
UAsyncNiagaraCaptureSimCache::UAsyncNiagaraCaptureSimCache
          (UAsyncNiagaraCaptureSimCache *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FNiagaraSimCacheCaptureParameters *pFVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  UCancellableAsyncAction::UCancellableAsyncAction((UCancellableAsyncAction *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncNiagaraCaptureSimCache__6B_;
  pFVar2->bAppendToSimCache = 0;
  (this->CaptureParameters).bAppendToSimCache = 0;
  pFVar2->bCaptureFixedNumberOfFrames = 1;
  (this->SimCacheCapture).CaptureParameters.bUseTimeout = 1;
  (this->SimCacheCapture).CaptureParameters.bCaptureAllFramesImmediatly = 0;
  (this->CaptureParameters).bCaptureFixedNumberOfFrames = 1;
  (this->CaptureParameters).bUseTimeout = 1;
  (this->CaptureParameters).bCaptureAllFramesImmediatly = 0;
  (this->CaptureSimCache).field0_0x0.DebugPtr = (UNiagaraSimCache *)0x0;
  puVar3 = &(this->CreateParameters).field_0x4;
  (this->CreateParameters).bAllowRebasing = 1;
  (this->CreateParameters).bIncludeDebugData = 0;
  (this->CreateParameters).bAllowSerializeLargeCache = 1;
  (this->CreateParameters).bAllowVelocityExtrapolation = 0;
  (this->CreateParameters).bInterpolateAllTypes = 1;
  (this->CreateParameters).bAllowInterpolation = 0;
  (this->CreateParameters).bAllowDataInterfaceCaching = 1;
  (this->CaptureComponent).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  *(undefined8 *)&this->CaptureComplete = 0;
  *(undefined8 *)&(this->CaptureComplete).field_0x8 = 0;
  *(undefined8 *)&(this->CaptureComplete).field_0x10 = 0;
  this->bIsRunning = false;
  (this->SimCacheCapture).WeakCaptureSimCache.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SimCacheCapture).WeakCaptureComponent.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->SimCacheCapture).CaptureComplete = 0;
  *(undefined8 *)&(this->SimCacheCapture).CaptureComplete.field_0x8 = 0;
  *(undefined8 *)&(this->SimCacheCapture).CaptureComplete.field_0x10 = 0;
  *(undefined8 *)&(this->SimCacheCapture).CaptureComplete.field_0x18 = 2;
  (this->SimCacheCapture).TickerHandle.Object = (FElement *)0x0;
  (this->SimCacheCapture).TickerHandle.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SimCacheCapture).CaptureParameters.NumFrames = 0x10;
  (this->SimCacheCapture).CaptureParameters.CaptureRate = 1;
  (this->SimCacheCapture).CaptureParameters.TimeoutFrameCount = 10;
  *(undefined8 *)&(this->SimCacheCapture).CaptureParameters.ImmediateCaptureDeltaTime = 0x3c887a8d;
  (this->SimCacheCapture).TimeOutCounter = 0;
  (this->CaptureParameters).NumFrames = 0x10;
  (this->CaptureParameters).CaptureRate = 1;
  (this->CaptureParameters).TimeoutFrameCount = 10;
  (this->CaptureParameters).ImmediateCaptureDeltaTime = 0.01666;
  (this->CreateParameters).AttributeCaptureMode = All;
  (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
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
  return this;
}

// UAsyncNiagaraCaptureSimCache @ 149387a80

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

UAsyncNiagaraCaptureSimCache * __thiscall
UAsyncNiagaraCaptureSimCache::UAsyncNiagaraCaptureSimCache
          (UAsyncNiagaraCaptureSimCache *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FNiagaraSimCacheCaptureParameters *pFVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  UCancellableAsyncAction::UCancellableAsyncAction((UCancellableAsyncAction *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncNiagaraCaptureSimCache__6B_;
  pFVar2->bAppendToSimCache = 0;
  (this->CaptureParameters).bAppendToSimCache = 0;
  pFVar2->bCaptureFixedNumberOfFrames = 1;
  (this->SimCacheCapture).CaptureParameters.bUseTimeout = 1;
  (this->SimCacheCapture).CaptureParameters.bCaptureAllFramesImmediatly = 0;
  (this->CaptureParameters).bCaptureFixedNumberOfFrames = 1;
  (this->CaptureParameters).bUseTimeout = 1;
  (this->CaptureParameters).bCaptureAllFramesImmediatly = 0;
  (this->CaptureSimCache).field0_0x0.DebugPtr = (UNiagaraSimCache *)0x0;
  puVar3 = &(this->CreateParameters).field_0x4;
  (this->CreateParameters).bAllowRebasing = 1;
  (this->CreateParameters).bIncludeDebugData = 0;
  (this->CreateParameters).bAllowSerializeLargeCache = 1;
  (this->CreateParameters).bAllowVelocityExtrapolation = 0;
  (this->CreateParameters).bInterpolateAllTypes = 1;
  (this->CreateParameters).bAllowInterpolation = 0;
  (this->CreateParameters).bAllowDataInterfaceCaching = 1;
  (this->CaptureComponent).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  *(undefined8 *)&this->CaptureComplete = 0;
  *(undefined8 *)&(this->CaptureComplete).field_0x8 = 0;
  *(undefined8 *)&(this->CaptureComplete).field_0x10 = 0;
  this->bIsRunning = false;
  (this->SimCacheCapture).WeakCaptureSimCache.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SimCacheCapture).WeakCaptureComponent.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->SimCacheCapture).CaptureComplete = 0;
  *(undefined8 *)&(this->SimCacheCapture).CaptureComplete.field_0x8 = 0;
  *(undefined8 *)&(this->SimCacheCapture).CaptureComplete.field_0x10 = 0;
  *(undefined8 *)&(this->SimCacheCapture).CaptureComplete.field_0x18 = 2;
  (this->SimCacheCapture).TickerHandle.Object = (FElement *)0x0;
  (this->SimCacheCapture).TickerHandle.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SimCacheCapture).CaptureParameters.NumFrames = 0x10;
  (this->SimCacheCapture).CaptureParameters.CaptureRate = 1;
  (this->SimCacheCapture).CaptureParameters.TimeoutFrameCount = 10;
  *(undefined8 *)&(this->SimCacheCapture).CaptureParameters.ImmediateCaptureDeltaTime = 0x3c887a8d;
  (this->SimCacheCapture).TimeOutCounter = 0;
  (this->CaptureParameters).NumFrames = 0x10;
  (this->CaptureParameters).CaptureRate = 1;
  (this->CaptureParameters).TimeoutFrameCount = 10;
  (this->CaptureParameters).ImmediateCaptureDeltaTime = 0.01666;
  (this->CreateParameters).AttributeCaptureMode = All;
  (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
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
  return this;
}

// ~UAsyncNiagaraCaptureSimCache @ 14938a790

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

void __thiscall
UAsyncNiagaraCaptureSimCache::~UAsyncNiagaraCaptureSimCache(UAsyncNiagaraCaptureSimCache *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UAsyncNiagaraCaptureSimCache__6B_;
  pFVar1 = (this->CreateParameters).ExplicitCaptureAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).InterpolationExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).InterpolationIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).RebaseExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraSimCacheCapture::~FNiagaraSimCacheCapture(&this->SimCacheCapture);
  pvVar2 = *(void **)&(this->CaptureComplete).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CaptureComplete);
  UCancellableAsyncAction::~UCancellableAsyncAction((UCancellableAsyncAction *)this);
  return;
}

// Activate @ 14938f340

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

void __thiscall UAsyncNiagaraCaptureSimCache::Activate(UAsyncNiagaraCaptureSimCache *this)

{
  float fVar1;
  UNiagaraComponent *pUVar2;
  FNiagaraSimCacheCreateParameters *pFVar3;
  longlong local_res8;
  FNiagaraSimCacheCaptureParameters local_88;
  FNiagaraSimCacheCreateParameters local_68;
  
  UBlueprintAsyncActionBase::Activate((UBlueprintAsyncActionBase *)this);
  this->bIsRunning = true;
  TMulticastDelegateRegistration<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>::
  AddUObject<UAsyncNiagaraCaptureSimCache>
            ((TMulticastDelegateRegistration<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
              *)&(this->SimCacheCapture).CaptureComplete,(UAsyncNiagaraCaptureSimCache *)&local_res8
             ,(pmf_d31017e8)this);
  local_88._0_4_ = *(undefined4 *)&(this->CaptureParameters).field_0x0;
  local_88.NumFrames = (this->CaptureParameters).NumFrames;
  local_88.CaptureRate = (this->CaptureParameters).CaptureRate;
  local_88._12_4_ = *(undefined4 *)&(this->CaptureParameters).field_0xc;
  fVar1 = (this->CaptureParameters).ImmediateCaptureDeltaTime;
  pUVar2 = (this->CaptureComponent).field0_0x0.DebugPtr;
  local_res8 = *(longlong *)&(this->CaptureParameters).TimeoutFrameCount;
  pFVar3 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters
                     (&local_68,&this->CreateParameters);
  local_88._16_8_ = local_res8;
  local_88.ImmediateCaptureDeltaTime = fVar1;
  FNiagaraSimCacheCapture::CaptureNiagaraSimCache
            (&this->SimCacheCapture,(this->CaptureSimCache).field0_0x0.DebugPtr,pFVar3,pUVar2,
             &local_88);
  return;
}

// Cancel @ 149396aa0

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

void __thiscall UAsyncNiagaraCaptureSimCache::Cancel(UAsyncNiagaraCaptureSimCache *this)

{
  if (this->bIsRunning != false) {
    FNiagaraSimCacheCapture::FinishCapture(&this->SimCacheCapture);
  }
  UCancellableAsyncAction::Cancel((UCancellableAsyncAction *)this);
  return;
}

// CaptureFinished @ 149396ad0

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

void __thiscall
UAsyncNiagaraCaptureSimCache::CaptureFinished
          (UAsyncNiagaraCaptureSimCache *this,UNiagaraSimCache *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraSimCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CaptureSimCache).field0_0x0.DebugPtr = param_1;
                    /* WARNING: Could not recover jumptable at 0x000149396b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// CaptureNiagaraSimCache @ 149396ef0

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

UAsyncNiagaraCaptureSimCache * __cdecl
UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCache
          (UNiagaraSimCache *param_1,FNiagaraSimCacheCreateParameters *param_2,
          UNiagaraComponent *param_3,FNiagaraSimCacheCaptureParameters *param_4,
          UNiagaraSimCache **param_5)

{
  FScriptContainerElement *pFVar1;
  UAsyncNiagaraCaptureSimCache *pUVar2;
  
  pUVar2 = CaptureNiagaraSimCacheImpl(param_1,param_2,param_3,param_4,param_5);
  pFVar1 = (param_2->ExplicitCaptureAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->InterpolationExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->InterpolationIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->RebaseExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->RebaseIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pUVar2;
}

// CaptureNiagaraSimCacheImpl @ 1493970c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

UAsyncNiagaraCaptureSimCache * __cdecl
UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheImpl
          (UNiagaraSimCache *param_1,FNiagaraSimCacheCreateParameters *param_2,
          UNiagaraComponent *param_3,FNiagaraSimCacheCaptureParameters *param_4,
          UNiagaraSimCache **param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UAsyncNiagaraCaptureSimCache *pUVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._8_8_ = pUVar4;
  pUVar6 = (UAsyncNiagaraCaptureSimCache *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  iVar1 = param_4->NumFrames;
  iVar2 = param_4->CaptureRate;
  uVar3 = *(undefined4 *)&param_4->field_0xc;
  *(undefined4 *)&(pUVar6->CaptureParameters).field_0x0 = *(undefined4 *)&param_4->field_0x0;
  (pUVar6->CaptureParameters).NumFrames = iVar1;
  (pUVar6->CaptureParameters).CaptureRate = iVar2;
  *(undefined4 *)&(pUVar6->CaptureParameters).field_0xc = uVar3;
  uVar3 = *(undefined4 *)&param_4->field_0x14;
  (pUVar6->CaptureParameters).TimeoutFrameCount = param_4->TimeoutFrameCount;
  *(undefined4 *)&(pUVar6->CaptureParameters).field_0x14 = uVar3;
  (pUVar6->CaptureParameters).ImmediateCaptureDeltaTime = param_4->ImmediateCaptureDeltaTime;
  FNiagaraSimCacheCreateParameters::operator=(&pUVar6->CreateParameters,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraSimCache *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pUVar6->CaptureSimCache).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (pUVar6->CaptureComponent).field0_0x0.DebugPtr = param_3;
  *param_5 = param_1;
  return pUVar6;
}

// CaptureNiagaraSimCacheMultiFrame @ 1493971f0

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

UAsyncNiagaraCaptureSimCache * __cdecl
UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheMultiFrame
          (UNiagaraSimCache *param_1,FNiagaraSimCacheCreateParameters *param_2,
          UNiagaraComponent *param_3,UNiagaraSimCache **param_4,int param_5,int param_6,bool param_7
          ,float param_8)

{
  FScriptContainerElement *pFVar1;
  UAsyncNiagaraCaptureSimCache *pUVar2;
  FNiagaraSimCacheCaptureParameters local_28;
  
  local_28.bUseTimeout = 1;
  local_28.bCaptureFixedNumberOfFrames = 1;
  local_28.bAppendToSimCache = 0;
  local_28.ImmediateCaptureDeltaTime = param_8;
  local_28.NumFrames = param_5;
  if (param_5 < 1) {
    local_28.NumFrames = 1;
  }
  local_28.TimeoutFrameCount = 10;
  local_28.CaptureRate = param_6;
  if (param_6 < 1) {
    local_28.CaptureRate = 1;
  }
  local_28._20_4_ = local_28._20_4_ & 0xfffffffe | (uint)param_7;
  pUVar2 = CaptureNiagaraSimCacheImpl(param_1,param_2,param_3,&local_28,param_4);
  pFVar1 = (param_2->ExplicitCaptureAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->InterpolationExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->InterpolationIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->RebaseExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->RebaseIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pUVar2;
}

// CaptureNiagaraSimCacheUntilComplete @ 1493972e0

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

UAsyncNiagaraCaptureSimCache * __cdecl
UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheUntilComplete
          (UNiagaraSimCache *param_1,FNiagaraSimCacheCreateParameters *param_2,
          UNiagaraComponent *param_3,UNiagaraSimCache **param_4,int param_5,bool param_6,
          float param_7)

{
  FScriptContainerElement *pFVar1;
  UAsyncNiagaraCaptureSimCache *pUVar2;
  FNiagaraSimCacheCaptureParameters local_28;
  
  local_28.bUseTimeout = 1;
  local_28.bCaptureFixedNumberOfFrames = 1;
  local_28.bAppendToSimCache = 0;
  local_28.ImmediateCaptureDeltaTime = param_7;
  local_28.CaptureRate = param_5;
  if (param_5 < 1) {
    local_28.CaptureRate = 1;
  }
  local_28.TimeoutFrameCount = 10;
  local_28._20_4_ = local_28._20_4_ & 0xfffffffe | (uint)param_6;
  local_28.NumFrames = 0;
  pUVar2 = CaptureNiagaraSimCacheImpl(param_1,param_2,param_3,&local_28,param_4);
  pFVar1 = (param_2->ExplicitCaptureAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->InterpolationExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->InterpolationIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->RebaseExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->RebaseIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pUVar2;
}

// FOnCaptureComplete_DelegateWrapper @ 1493a1160

void __cdecl
UAsyncNiagaraCaptureSimCache::FOnCaptureComplete_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,bool param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetPrivateStaticClass @ 1493a72f0

UClass * __cdecl UAsyncNiagaraCaptureSimCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"AsyncNiagaraCaptureSimCache",
               &Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.InnerSingleton,
               StaticRegisterNativesUAsyncNiagaraCaptureSimCache,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncNiagaraCaptureSimCache>,
               InternalVTableHelperCtorCaller<UAsyncNiagaraCaptureSimCache>,local_res8,
               UCancellableAsyncAction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.InnerSingleton;
}

// SetReadyToDestroy @ 1493b6c80

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

void __thiscall UAsyncNiagaraCaptureSimCache::SetReadyToDestroy(UAsyncNiagaraCaptureSimCache *this)

{
  UNiagaraSimCache *pUVar1;
  undefined1 local_res8 [32];
  
  UBlueprintAsyncActionBase::SetReadyToDestroy((UBlueprintAsyncActionBase *)this);
  if (this->bIsRunning != false) {
    pUVar1 = (this->CaptureSimCache).field0_0x0.DebugPtr;
    this->bIsRunning = false;
    if ((pUVar1 == (UNiagaraSimCache *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
      local_res8[0] = false;
    }
    else {
      local_res8[0] =
           *(longlong *)
            &(((this->CaptureSimCache).field0_0x0.DebugPtr)->SoftNiagaraSystem).SoftObjectPtr.
             field_0x8 != 0;
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->CaptureComplete,
               local_res8);
    (this->CaptureComponent).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  }
  return;
}

// StaticRegisterNativesUAsyncNiagaraCaptureSimCache @ 1493b7580

void __cdecl UAsyncNiagaraCaptureSimCache::StaticRegisterNativesUAsyncNiagaraCaptureSimCache(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 1493be990

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UAsyncNiagaraCaptureSimCache::__VTableCtorCaller(FVTableHelper *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UCancellableAsyncAction *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (UCancellableAsyncAction *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCancellableAsyncAction *)0x0) {
    UCancellableAsyncAction::UCancellableAsyncAction(this,param_1);
    this[1].field_0x28 = 0;
    *(undefined ***)this = &___7UAsyncNiagaraCaptureSimCache__6B_;
    uVar1 = *(uint *)&this[4].field_0x2c;
    *(uint *)&this[3].field_0x10 = *(uint *)&this[3].field_0x10 & 0xfffffffe;
    *(uint *)&this[4].field_0x8 = *(uint *)&this[4].field_0x8 & 0xfffffffe;
    *(uint *)&this[3].field_0x10 = *(uint *)&this[3].field_0x10 | 2;
    *(uint *)&this[3].field_0x1c = *(uint *)&this[3].field_0x1c | 1;
    *(uint *)&this[3].field_0x24 = *(uint *)&this[3].field_0x24 & 0xfffffffe;
    *(uint *)&this[4].field_0x8 = *(uint *)&this[4].field_0x8 | 2;
    *(uint *)&this[4].field_0x14 = *(uint *)&this[4].field_0x14 | 1;
    *(uint *)&this[4].field_0x1c = *(uint *)&this[4].field_0x1c & 0xfffffffe;
    *(undefined8 *)(this + 1) = 0;
    *(uint *)&this[4].field_0x2c = uVar1 & 0xffffffab | 0x2b;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 2;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x10;
    *(undefined4 *)&this[3].field_0x18 = 1;
    *(undefined4 *)&this[3].field_0x20 = 10;
    *(undefined8 *)&this[3].field_0x28 = 0x3c887a8d;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0xc = 0x10;
    *(undefined4 *)&this[4].field_0x10 = 1;
    *(undefined4 *)&this[4].field_0x18 = 10;
    *(undefined4 *)&this[4].field_0x20 = 0x3c887a8d;
    this[4].field_0x28 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execCaptureNiagaraSimCache @ 1493beb80

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

void __cdecl
UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCache
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UNiagaraComponent *pUVar5;
  float fVar6;
  void *pvVar7;
  UAsyncNiagaraCaptureSimCache *pUVar8;
  longlong lVar9;
  UNiagaraSimCache **ppUVar10;
  UNiagaraSimCache *local_res10;
  UNiagaraComponent *local_res18;
  UNiagaraSimCache *local_res20;
  uint local_158;
  int iStack_154;
  int iStack_150;
  uint uStack_14c;
  int local_148;
  uint uStack_144;
  float local_140;
  FNiagaraSimCacheCreateParameters local_138;
  ENiagaraSimCacheAttributeCaptureMode local_d8 [4];
  uint local_d4;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  FNiagaraSimCacheCaptureParameters local_78 [2];
  
  local_res20 = (UNiagaraSimCache *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_d8[0] = All;
  local_d4 = local_d4 & 0xffffffab | 0x2b;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_res18 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  uStack_14c = uStack_14c | 1;
  uStack_144 = uStack_144 & 0xfffffffe;
  local_158 = local_158 & 0xfffffffe | 2;
  iStack_154 = 0x10;
  iStack_150 = 1;
  local_148 = 10;
  local_140 = 0.01666;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_res10 = (UNiagaraSimCache *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pvVar7 = local_d0;
  fVar6 = local_140;
  pUVar5 = local_res18;
  uVar2._4_4_ = iStack_154;
  uVar2._0_4_ = local_158;
  uVar3._4_4_ = uStack_14c;
  uVar3._0_4_ = iStack_150;
  uVar4._4_4_ = uStack_144;
  uVar4._0_4_ = local_148;
  ppUVar10 = &local_res10;
  if ((UNiagaraSimCache **)param_2->MostRecentPropertyAddress != (UNiagaraSimCache **)0x0) {
    ppUVar10 = (UNiagaraSimCache **)param_2->MostRecentPropertyAddress;
  }
  local_138.RebaseIncludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_c8;
  local_138.AttributeCaptureMode = local_d8[0];
  local_138.RebaseIncludeAttributes.ArrayNum = (int)local_c8;
  local_138._4_4_ = local_138._4_4_ & 0xffffff80 | local_d4 & 0x7f;
  if ((int)local_c8 == 0) {
    local_138.RebaseIncludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_c8,0,&local_138.RebaseIncludeAttributes.AllocatorInstance,
               (int)local_c8,&local_138.RebaseIncludeAttributes.ArrayMax);
    memcpy(local_138.RebaseIncludeAttributes.AllocatorInstance.Data,pvVar7,lVar9 << 3);
  }
  pvVar7 = local_c0;
  lVar9 = (longlong)(int)local_b8;
  local_138.RebaseExcludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.RebaseExcludeAttributes.ArrayNum = (int)local_b8;
  if ((int)local_b8 == 0) {
    local_138.RebaseExcludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_b8,0,&local_138.RebaseExcludeAttributes.AllocatorInstance,
               (int)local_b8,&local_138.RebaseExcludeAttributes.ArrayMax);
    memcpy(local_138.RebaseExcludeAttributes.AllocatorInstance.Data,pvVar7,lVar9 << 3);
  }
  pvVar7 = local_b0;
  lVar9 = (longlong)(int)local_a8;
  local_138.InterpolationIncludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.InterpolationIncludeAttributes.ArrayNum = (int)local_a8;
  if ((int)local_a8 == 0) {
    local_138.InterpolationIncludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_a8,0,&local_138.InterpolationIncludeAttributes.AllocatorInstance,
               (int)local_a8,&local_138.InterpolationIncludeAttributes.ArrayMax);
    memcpy(local_138.InterpolationIncludeAttributes.AllocatorInstance.Data,pvVar7,lVar9 << 3);
  }
  pvVar7 = local_a0;
  lVar9 = (longlong)(int)local_98;
  local_138.InterpolationExcludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.InterpolationExcludeAttributes.ArrayNum = (int)local_98;
  if ((int)local_98 == 0) {
    local_138.InterpolationExcludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_98,0,&local_138.InterpolationExcludeAttributes.AllocatorInstance,
               (int)local_98,&local_138.InterpolationExcludeAttributes.ArrayMax);
    memcpy(local_138.InterpolationExcludeAttributes.AllocatorInstance.Data,pvVar7,lVar9 << 3);
  }
  pvVar7 = local_90;
  lVar9 = (longlong)(int)local_88;
  local_138.ExplicitCaptureAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ExplicitCaptureAttributes.ArrayNum = (int)local_88;
  if ((int)local_88 == 0) {
    local_138.ExplicitCaptureAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_88,0,&local_138.ExplicitCaptureAttributes.AllocatorInstance,
               (int)local_88,&local_138.ExplicitCaptureAttributes.ArrayMax);
    memcpy(local_138.ExplicitCaptureAttributes.AllocatorInstance.Data,pvVar7,lVar9 << 3);
  }
  local_78[0].ImmediateCaptureDeltaTime = fVar6;
  local_78[0]._0_8_ = uVar2;
  local_78[0]._8_8_ = uVar3;
  local_78[0]._16_8_ = uVar4;
  pUVar8 = CaptureNiagaraSimCacheImpl(local_res20,&local_138,pUVar5,local_78,ppUVar10);
  if (local_138.ExplicitCaptureAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_138.ExplicitCaptureAttributes.AllocatorInstance.Data);
  }
  if (local_138.InterpolationExcludeAttributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.InterpolationExcludeAttributes.AllocatorInstance.Data);
  }
  if (local_138.InterpolationIncludeAttributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.InterpolationIncludeAttributes.AllocatorInstance.Data);
  }
  if (local_138.RebaseExcludeAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.RebaseExcludeAttributes.AllocatorInstance.Data);
  }
  if (local_138.RebaseIncludeAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.RebaseIncludeAttributes.AllocatorInstance.Data);
  }
  *(UAsyncNiagaraCaptureSimCache **)param_3 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar10 != (UNiagaraSimCache *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar10);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  return;
}

// execCaptureNiagaraSimCacheMultiFrame @ 1493bf860

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

void __cdecl
UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheMultiFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  UNiagaraComponent *pUVar5;
  void *pvVar6;
  UAsyncNiagaraCaptureSimCache *pUVar7;
  longlong lVar8;
  UNiagaraSimCache **ppUVar9;
  bool bVar10;
  int local_res10 [2];
  undefined8 *local_res18;
  float local_res20 [2];
  int local_148;
  int local_144;
  UNiagaraSimCache *local_140;
  UNiagaraComponent *local_138;
  UNiagaraSimCache *local_130;
  FNiagaraSimCacheCreateParameters local_128;
  ENiagaraSimCacheAttributeCaptureMode local_c8 [4];
  uint local_c4;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  FNiagaraSimCacheCaptureParameters local_68;
  
  local_130 = (UNiagaraSimCache *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_c8[0] = All;
  local_c4 = local_c4 & 0xffffffab | 0x2b;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_138 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_140 = (UNiagaraSimCache *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_144 = 0;
  ppUVar9 = &local_140;
  if ((UNiagaraSimCache **)param_2->MostRecentPropertyAddress != (UNiagaraSimCache **)0x0) {
    ppUVar9 = (UNiagaraSimCache **)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_144,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_144);
  }
  local_148 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
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
  bVar10 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pvVar6 = local_c0;
  pUVar5 = local_138;
  iVar4 = local_144;
  iVar3 = local_148;
  fVar2 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_b8;
  local_128.AttributeCaptureMode = local_c8[0];
  local_128.RebaseIncludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128._4_4_ = local_128._4_4_ & 0xffffff80 | local_c4 & 0x7f;
  local_128.RebaseIncludeAttributes.ArrayNum = (int)local_b8;
  if ((int)local_b8 == 0) {
    local_128.RebaseIncludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_b8,0,&local_128.RebaseIncludeAttributes.AllocatorInstance,
               (int)local_b8,&local_128.RebaseIncludeAttributes.ArrayMax);
    memcpy(local_128.RebaseIncludeAttributes.AllocatorInstance.Data,pvVar6,lVar8 << 3);
  }
  pvVar6 = local_b0;
  lVar8 = (longlong)(int)local_a8;
  local_128.RebaseExcludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.RebaseExcludeAttributes.ArrayNum = (int)local_a8;
  if ((int)local_a8 == 0) {
    local_128.RebaseExcludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_a8,0,&local_128.RebaseExcludeAttributes.AllocatorInstance,
               (int)local_a8,&local_128.RebaseExcludeAttributes.ArrayMax);
    memcpy(local_128.RebaseExcludeAttributes.AllocatorInstance.Data,pvVar6,lVar8 << 3);
  }
  pvVar6 = local_a0;
  lVar8 = (longlong)(int)local_98;
  local_128.InterpolationIncludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.InterpolationIncludeAttributes.ArrayNum = (int)local_98;
  if ((int)local_98 == 0) {
    local_128.InterpolationIncludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_98,0,&local_128.InterpolationIncludeAttributes.AllocatorInstance,
               (int)local_98,&local_128.InterpolationIncludeAttributes.ArrayMax);
    memcpy(local_128.InterpolationIncludeAttributes.AllocatorInstance.Data,pvVar6,lVar8 << 3);
  }
  pvVar6 = local_90;
  lVar8 = (longlong)(int)local_88;
  local_128.InterpolationExcludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.InterpolationExcludeAttributes.ArrayNum = (int)local_88;
  if ((int)local_88 == 0) {
    local_128.InterpolationExcludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_88,0,&local_128.InterpolationExcludeAttributes.AllocatorInstance,
               (int)local_88,&local_128.InterpolationExcludeAttributes.ArrayMax);
    memcpy(local_128.InterpolationExcludeAttributes.AllocatorInstance.Data,pvVar6,lVar8 << 3);
  }
  pvVar6 = local_80;
  lVar8 = (longlong)(int)local_78;
  local_128.ExplicitCaptureAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ExplicitCaptureAttributes.ArrayNum = (int)local_78;
  if ((int)local_78 == 0) {
    local_128.ExplicitCaptureAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_78,0,&local_128.ExplicitCaptureAttributes.AllocatorInstance,
               (int)local_78,&local_128.ExplicitCaptureAttributes.ArrayMax);
    memcpy(local_128.ExplicitCaptureAttributes.AllocatorInstance.Data,pvVar6,lVar8 << 3);
  }
  local_68.bUseTimeout = 1;
  local_68.bCaptureFixedNumberOfFrames = 1;
  local_68.bAppendToSimCache = 0;
  local_68.ImmediateCaptureDeltaTime = fVar2;
  local_68.TimeoutFrameCount = 10;
  local_68.NumFrames = iVar4;
  if (iVar4 < 1) {
    local_68.NumFrames = 1;
  }
  local_68.CaptureRate = iVar3;
  if (iVar3 < 1) {
    local_68.CaptureRate = 1;
  }
  local_68.bCaptureAllFramesImmediatly = bVar10;
  pUVar7 = CaptureNiagaraSimCacheImpl(local_130,&local_128,pUVar5,&local_68,ppUVar9);
  if (local_128.ExplicitCaptureAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_128.ExplicitCaptureAttributes.AllocatorInstance.Data);
  }
  if (local_128.InterpolationExcludeAttributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.InterpolationExcludeAttributes.AllocatorInstance.Data);
  }
  if (local_128.InterpolationIncludeAttributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.InterpolationIncludeAttributes.AllocatorInstance.Data);
  }
  if (local_128.RebaseExcludeAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.RebaseExcludeAttributes.AllocatorInstance.Data);
  }
  if (local_128.RebaseIncludeAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.RebaseIncludeAttributes.AllocatorInstance.Data);
  }
  *local_res18 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar9 != (UNiagaraSimCache *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)*ppUVar9);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// execCaptureNiagaraSimCacheUntilComplete @ 1493bfe20

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

void __cdecl
UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheUntilComplete
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int iVar3;
  UNiagaraComponent *pUVar4;
  void *pvVar5;
  UAsyncNiagaraCaptureSimCache *pUVar6;
  longlong lVar7;
  UNiagaraSimCache **ppUVar8;
  bool bVar9;
  int local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  UNiagaraSimCache *local_138;
  UNiagaraComponent *local_130;
  UNiagaraSimCache *local_128;
  FNiagaraSimCacheCreateParameters local_120;
  ENiagaraSimCacheAttributeCaptureMode local_c8 [4];
  uint local_c4;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  FNiagaraSimCacheCaptureParameters local_68;
  
  local_128 = (UNiagaraSimCache *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_c8[0] = All;
  local_c4 = local_c4 & 0xffffffab | 0x2b;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_130 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_138 = (UNiagaraSimCache *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_res20[0] = 0;
  ppUVar8 = &local_138;
  if ((UNiagaraSimCache **)param_2->MostRecentPropertyAddress != (UNiagaraSimCache **)0x0) {
    ppUVar8 = (UNiagaraSimCache **)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  bVar9 = local_res10[0] != 0;
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pvVar5 = local_c0;
  pUVar4 = local_130;
  iVar3 = local_res20[0];
  fVar2 = local_res18[0];
  local_120.RebaseIncludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_b8;
  local_120.AttributeCaptureMode = local_c8[0];
  local_120.RebaseIncludeAttributes.ArrayNum = (int)local_b8;
  local_120._4_4_ = local_120._4_4_ & 0xffffff80 | local_c4 & 0x7f;
  if ((int)local_b8 == 0) {
    local_120.RebaseIncludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_b8,0,&local_120.RebaseIncludeAttributes.AllocatorInstance,
               (int)local_b8,&local_120.RebaseIncludeAttributes.ArrayMax);
    memcpy(local_120.RebaseIncludeAttributes.AllocatorInstance.Data,pvVar5,lVar7 << 3);
  }
  pvVar5 = local_b0;
  lVar7 = (longlong)(int)local_a8;
  local_120.RebaseExcludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.RebaseExcludeAttributes.ArrayNum = (int)local_a8;
  if ((int)local_a8 == 0) {
    local_120.RebaseExcludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_a8,0,&local_120.RebaseExcludeAttributes.AllocatorInstance,
               (int)local_a8,&local_120.RebaseExcludeAttributes.ArrayMax);
    memcpy(local_120.RebaseExcludeAttributes.AllocatorInstance.Data,pvVar5,lVar7 << 3);
  }
  pvVar5 = local_a0;
  lVar7 = (longlong)(int)local_98;
  local_120.InterpolationIncludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.InterpolationIncludeAttributes.ArrayNum = (int)local_98;
  if ((int)local_98 == 0) {
    local_120.InterpolationIncludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_98,0,&local_120.InterpolationIncludeAttributes.AllocatorInstance,
               (int)local_98,&local_120.InterpolationIncludeAttributes.ArrayMax);
    memcpy(local_120.InterpolationIncludeAttributes.AllocatorInstance.Data,pvVar5,lVar7 << 3);
  }
  pvVar5 = local_90;
  lVar7 = (longlong)(int)local_88;
  local_120.InterpolationExcludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.InterpolationExcludeAttributes.ArrayNum = (int)local_88;
  if ((int)local_88 == 0) {
    local_120.InterpolationExcludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_88,0,&local_120.InterpolationExcludeAttributes.AllocatorInstance,
               (int)local_88,&local_120.InterpolationExcludeAttributes.ArrayMax);
    memcpy(local_120.InterpolationExcludeAttributes.AllocatorInstance.Data,pvVar5,lVar7 << 3);
  }
  pvVar5 = local_80;
  lVar7 = (longlong)(int)local_78;
  local_120.ExplicitCaptureAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ExplicitCaptureAttributes.ArrayNum = (int)local_78;
  if ((int)local_78 == 0) {
    local_120.ExplicitCaptureAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_78,0,&local_120.ExplicitCaptureAttributes.AllocatorInstance,
               (int)local_78,&local_120.ExplicitCaptureAttributes.ArrayMax);
    memcpy(local_120.ExplicitCaptureAttributes.AllocatorInstance.Data,pvVar5,lVar7 << 3);
  }
  local_68.bUseTimeout = 1;
  local_68.bCaptureFixedNumberOfFrames = 1;
  local_68.bAppendToSimCache = 0;
  local_68.ImmediateCaptureDeltaTime = fVar2;
  local_68.TimeoutFrameCount = 10;
  local_68.CaptureRate = iVar3;
  if (iVar3 < 1) {
    local_68.CaptureRate = 1;
  }
  local_68.NumFrames = 0;
  local_68.bCaptureAllFramesImmediatly = bVar9;
  pUVar6 = CaptureNiagaraSimCacheImpl(local_128,&local_120,pUVar4,&local_68,ppUVar8);
  if (local_120.ExplicitCaptureAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_120.ExplicitCaptureAttributes.AllocatorInstance.Data);
  }
  if (local_120.InterpolationExcludeAttributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.InterpolationExcludeAttributes.AllocatorInstance.Data);
  }
  if (local_120.InterpolationIncludeAttributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.InterpolationIncludeAttributes.AllocatorInstance.Data);
  }
  if (local_120.RebaseExcludeAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.RebaseExcludeAttributes.AllocatorInstance.Data);
  }
  if (local_120.RebaseIncludeAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.RebaseIncludeAttributes.AllocatorInstance.Data);
  }
  *(UAsyncNiagaraCaptureSimCache **)param_3 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar8 != (UNiagaraSimCache *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)*ppUVar8);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

