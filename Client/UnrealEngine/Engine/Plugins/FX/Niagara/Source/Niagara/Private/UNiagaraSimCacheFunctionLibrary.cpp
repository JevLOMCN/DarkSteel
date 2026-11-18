// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// StaticClass @ 14937ab50

UClass * __cdecl UNiagaraSimCacheFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCacheFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUNiagaraSimCacheFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSimCacheFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraSimCacheFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.InnerSingleton;
}

// UNiagaraSimCacheFunctionLibrary @ 1493899d0

UNiagaraSimCacheFunctionLibrary * __thiscall
UNiagaraSimCacheFunctionLibrary::UNiagaraSimCacheFunctionLibrary
          (UNiagaraSimCacheFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSimCacheFunctionLibrary__6B_;
  return this;
}

// UNiagaraSimCacheFunctionLibrary @ 149389a00

UNiagaraSimCacheFunctionLibrary * __thiscall
UNiagaraSimCacheFunctionLibrary::UNiagaraSimCacheFunctionLibrary
          (UNiagaraSimCacheFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSimCacheFunctionLibrary__6B_;
  return this;
}

// ~UNiagaraSimCacheFunctionLibrary @ 14938ac70

void __thiscall
UNiagaraSimCacheFunctionLibrary::~UNiagaraSimCacheFunctionLibrary
          (UNiagaraSimCacheFunctionLibrary *this)

{
  *(undefined ***)this = &___7UNiagaraSimCacheFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CaptureNiagaraSimCacheImmediate @ 149396f70

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __cdecl
UNiagaraSimCacheFunctionLibrary::CaptureNiagaraSimCacheImmediate
          (UNiagaraSimCache *param_1,FNiagaraSimCacheCreateParameters *param_2,
          UNiagaraComponent *param_3,UNiagaraSimCache **param_4,bool param_5,float param_6)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FNiagaraSimCacheCreateParameters *pFVar3;
  FNiagaraSimCacheCapture local_c8;
  FNiagaraSimCacheCreateParameters local_60;
  
  local_c8.WeakCaptureSimCache.WeakPtr.ObjectIndex = 0;
  local_c8.WeakCaptureSimCache.WeakPtr.ObjectSerialNumber = 0;
  local_c8.WeakCaptureComponent.WeakPtr.ObjectIndex = 0;
  local_c8.WeakCaptureComponent.WeakPtr.ObjectSerialNumber = 0;
  local_c8.CaptureParameters.NumFrames = 0x10;
  local_c8.CaptureParameters.bCaptureFixedNumberOfFrames = 1;
  local_c8.CaptureParameters.bAppendToSimCache = 0;
  local_c8.CaptureComplete._16_8_ = ___xmm_00000000000000020000000000000000;
  local_c8.CaptureComplete._24_8_ = _UNK_150631d48;
  local_c8.TickerHandle.Object = (FElement *)0x0;
  local_c8.TickerHandle.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8.CaptureComplete._0_8_ = 0;
  local_c8.CaptureComplete._8_8_ = 0;
  local_c8.CaptureParameters.bUseTimeout = 1;
  local_c8.CaptureParameters.bCaptureAllFramesImmediatly = 0;
  local_c8.CaptureParameters.CaptureRate = 1;
  local_c8.CaptureParameters.TimeoutFrameCount = 10;
  local_c8.CaptureParameters.ImmediateCaptureDeltaTime = 0.01666;
  local_c8.CaptureFrameCounter = 0;
  local_c8.TimeOutCounter = 0;
  pFVar3 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters(&local_60,param_2);
  bVar2 = FNiagaraSimCacheCapture::CaptureCurrentFrameImmediate
                    (&local_c8,param_1,pFVar3,param_3,param_4,param_5,param_6);
  FNiagaraSimCacheCapture::~FNiagaraSimCacheCapture(&local_c8);
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
  return bVar2;
}

// CreateNiagaraSimCache @ 14939a960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraSimCache * __cdecl UNiagaraSimCacheFunctionLibrary::CreateNiagaraSimCache(UObject *param_1)

{
  UWorld *pUVar1;
  UClass *pUVar2;
  UNiagaraSimCache *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  pUVar3 = (UNiagaraSimCache *)0x0;
  if (pUVar1 != (UWorld *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UNiagaraSimCache::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = param_1;
    pUVar3 = (UNiagaraSimCache *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 1493a7800

UClass * __cdecl UNiagaraSimCacheFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCacheFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUNiagaraSimCacheFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSimCacheFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraSimCacheFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUNiagaraSimCacheFunctionLibrary @ 1493b7680

void __cdecl
UNiagaraSimCacheFunctionLibrary::StaticRegisterNativesUNiagaraSimCacheFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCaptureNiagaraSimCacheImmediate @ 1493bf080

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraSimCacheFunctionLibrary::execCaptureNiagaraSimCacheImmediate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  ForAnyElementType FVar3;
  UNiagaraComponent *pUVar4;
  UNiagaraSimCache *pUVar5;
  ENiagaraSimCacheAttributeCaptureMode EVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  UNiagaraSimCache **ppUVar10;
  bool bVar11;
  int local_res10 [2];
  float local_res18 [2];
  UNiagaraSimCache *local_res20;
  ForAnyElementType local_1d0;
  int local_1c8;
  int local_1c4;
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  ForAnyElementType local_1b0;
  int local_1a8;
  int local_1a4;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  ForAnyElementType local_190;
  int local_188;
  int local_184;
  UNiagaraComponent *local_180;
  UNiagaraSimCache *local_178 [2];
  ENiagaraSimCacheAttributeCaptureMode local_168 [4];
  uint local_164;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  FNiagaraSimCacheCreateParameters local_108;
  FNiagaraSimCacheCapture local_b0;
  
  local_178[0] = (UNiagaraSimCache *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_178);
  }
  local_168[0] = All;
  local_164 = local_164 & 0xffffffab | 0x2b;
  local_160 = (void *)0x0;
  local_158 = 0;
  local_150 = (void *)0x0;
  local_148 = 0;
  local_140 = (void *)0x0;
  local_138 = 0;
  local_130 = (void *)0x0;
  local_128 = 0;
  local_120 = (void *)0x0;
  local_118 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_180 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_res20 = (UNiagaraSimCache *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  ppUVar10 = &local_res20;
  if ((UNiagaraSimCache **)param_2->MostRecentPropertyAddress != (UNiagaraSimCache **)0x0) {
    ppUVar10 = (UNiagaraSimCache **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar11 = local_res10[0] != 0;
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
  pvVar7 = local_160;
  EVar6 = local_168[0];
  pUVar4 = local_180;
  fVar2 = local_res18[0];
  uVar8 = local_164 & 0x7f;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_158;
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8 = (int)local_158;
  if ((int)local_158 == 0) {
    local_1c4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_158,0,&local_1d0,(int)local_158,&local_1c4);
    memcpy(local_1d0.Data,pvVar7,lVar9 << 3);
  }
  pvVar7 = local_150;
  lVar9 = (longlong)(int)local_148;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = (int)local_148;
  if ((int)local_148 == 0) {
    local_1b4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_148,0,&local_1c0,(int)local_148,&local_1b4);
    memcpy(local_1c0.Data,pvVar7,lVar9 << 3);
  }
  pvVar7 = local_140;
  lVar9 = (longlong)(int)local_138;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = (int)local_138;
  if ((int)local_138 == 0) {
    local_1a4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_138,0,&local_1b0,(int)local_138,&local_1a4);
    memcpy(local_1b0.Data,pvVar7,lVar9 << 3);
  }
  pvVar7 = local_130;
  lVar9 = (longlong)(int)local_128;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = (int)local_128;
  if ((int)local_128 == 0) {
    local_194 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_128,0,&local_1a0,(int)local_128,&local_194);
    memcpy(local_1a0.Data,pvVar7,lVar9 << 3);
  }
  pvVar7 = local_120;
  lVar9 = (longlong)(int)local_118;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = (int)local_118;
  if ((int)local_118 == 0) {
    local_184 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_118,0,&local_190,(int)local_118,&local_184);
    memcpy(local_190.Data,pvVar7,lVar9 << 3);
  }
  pUVar5 = local_178[0];
  FVar3.Data = local_1d0.Data;
  lVar9 = (longlong)local_1c8;
  local_b0.CaptureParameters.bCaptureFixedNumberOfFrames = 1;
  local_b0.CaptureParameters.bAppendToSimCache = 0;
  local_b0.CaptureParameters.bUseTimeout = 1;
  local_b0.CaptureParameters.bCaptureAllFramesImmediatly = 0;
  local_108._4_4_ = (local_108._4_4_ ^ uVar8) & 1 ^ local_108._4_4_;
  local_108.AttributeCaptureMode = EVar6;
  local_b0.CaptureParameters.NumFrames = 0x10;
  local_b0.CaptureParameters.CaptureRate = 1;
  local_108._4_4_ = (uVar8 ^ local_108._4_4_) & 2 ^ local_108._4_4_;
  local_b0.CaptureParameters.TimeoutFrameCount = 10;
  local_b0.CaptureParameters.ImmediateCaptureDeltaTime = 0.01666;
  local_b0.CaptureFrameCounter = 0;
  local_b0.TimeOutCounter = 0;
  local_108.RebaseIncludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108._4_4_ = (uVar8 ^ local_108._4_4_) & 4 ^ local_108._4_4_;
  local_108.RebaseIncludeAttributes.ArrayNum = local_1c8;
  local_108._4_4_ = (uVar8 ^ local_108._4_4_) & 8 ^ local_108._4_4_;
  local_108._4_4_ = (uVar8 ^ local_108._4_4_) & 0x10 ^ local_108._4_4_;
  local_108._4_4_ = (uVar8 ^ local_108._4_4_) & 0x20 ^ local_108._4_4_;
  local_b0.WeakCaptureSimCache.WeakPtr.ObjectIndex = 0;
  local_b0.WeakCaptureSimCache.WeakPtr.ObjectSerialNumber = 0;
  local_b0.WeakCaptureComponent.WeakPtr.ObjectIndex = 0;
  local_b0.WeakCaptureComponent.WeakPtr.ObjectSerialNumber = 0;
  local_108._4_4_ = (uVar8 ^ local_108._4_4_) & 0x40 ^ local_108._4_4_;
  local_b0.CaptureComplete._16_8_ = ___xmm_00000000000000020000000000000000;
  local_b0.CaptureComplete._24_8_ = _UNK_150631d48;
  local_b0.CaptureComplete._0_8_ = 0;
  local_b0.CaptureComplete._8_8_ = 0;
  local_b0.TickerHandle.Object = (FElement *)0x0;
  local_b0.TickerHandle.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_1c8 == 0) {
    local_108.RebaseIncludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_1c8,0,&local_108.RebaseIncludeAttributes.AllocatorInstance,local_1c8,
               &local_108.RebaseIncludeAttributes.ArrayMax);
    memcpy(local_108.RebaseIncludeAttributes.AllocatorInstance.Data,FVar3.Data,lVar9 << 3);
  }
  FVar3.Data = local_1c0.Data;
  lVar9 = (longlong)local_1b8;
  local_108.RebaseExcludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.RebaseExcludeAttributes.ArrayNum = local_1b8;
  if (local_1b8 == 0) {
    local_108.RebaseExcludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_1b8,0,&local_108.RebaseExcludeAttributes.AllocatorInstance,local_1b8,
               &local_108.RebaseExcludeAttributes.ArrayMax);
    memcpy(local_108.RebaseExcludeAttributes.AllocatorInstance.Data,FVar3.Data,lVar9 << 3);
  }
  FVar3.Data = local_1b0.Data;
  lVar9 = (longlong)local_1a8;
  local_108.InterpolationIncludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.InterpolationIncludeAttributes.ArrayNum = local_1a8;
  if (local_1a8 == 0) {
    local_108.InterpolationIncludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_1a8,0,&local_108.InterpolationIncludeAttributes.AllocatorInstance,local_1a8
               ,&local_108.InterpolationIncludeAttributes.ArrayMax);
    memcpy(local_108.InterpolationIncludeAttributes.AllocatorInstance.Data,FVar3.Data,lVar9 << 3);
  }
  FVar3.Data = local_1a0.Data;
  lVar9 = (longlong)local_198;
  local_108.InterpolationExcludeAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.InterpolationExcludeAttributes.ArrayNum = local_198;
  if (local_198 == 0) {
    local_108.InterpolationExcludeAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_198,0,&local_108.InterpolationExcludeAttributes.AllocatorInstance,local_198
               ,&local_108.InterpolationExcludeAttributes.ArrayMax);
    memcpy(local_108.InterpolationExcludeAttributes.AllocatorInstance.Data,FVar3.Data,lVar9 << 3);
  }
  FVar3.Data = local_190.Data;
  lVar9 = (longlong)local_188;
  local_108.ExplicitCaptureAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ExplicitCaptureAttributes.ArrayNum = local_188;
  if (local_188 == 0) {
    local_108.ExplicitCaptureAttributes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_188,0,&local_108.ExplicitCaptureAttributes.AllocatorInstance,local_188,
               &local_108.ExplicitCaptureAttributes.ArrayMax);
    memcpy(local_108.ExplicitCaptureAttributes.AllocatorInstance.Data,FVar3.Data,lVar9 << 3);
  }
  bVar11 = FNiagaraSimCacheCapture::CaptureCurrentFrameImmediate
                     (&local_b0,pUVar5,&local_108,pUVar4,ppUVar10,bVar11,fVar2);
  FNiagaraSimCacheCapture::~FNiagaraSimCacheCapture(&local_b0);
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  if (local_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data);
  }
  if (local_1d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data);
  }
  *(bool *)param_3 = bVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar10 != (UNiagaraSimCache *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar10);
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  if (local_130 != (void *)0x0) {
    FMemory::Free(local_130);
  }
  if (local_140 != (void *)0x0) {
    FMemory::Free(local_140);
  }
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  return;
}

// execCreateNiagaraSimCache @ 1493c03a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UNiagaraSimCacheFunctionLibrary::execCreateNiagaraSimCache
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  pUVar4 = local_a8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,local_a8[0],LogAndReturnNull);
  if (pUVar2 == (UWorld *)0x0) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = UNiagaraSimCache::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    *(UObject **)param_3 = pUVar4;
  }
  return;
}

