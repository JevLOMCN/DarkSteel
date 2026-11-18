// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// StaticClass @ 1493781e0

UClass * __cdecl UNiagaraSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSettings",
               &Z_Registration_Info_UClass_UNiagaraSettings.InnerSingleton,
               StaticRegisterNativesUNiagaraSettings,0x130,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Niagara",
               InternalConstructor<UNiagaraSettings>,
               InternalVTableHelperCtorCaller<UNiagaraSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSettings.InnerSingleton;
}

// UNiagaraSettings @ 1493891a0

UNiagaraSettings * __thiscall
UNiagaraSettings::UNiagaraSettings(UNiagaraSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bSystemsSupportLargeWorldCoordinates = true;
  this->LargeWorldCoordinateTileUpdateMode = ResetSimulation;
  this->_padding_ = (longlong)&___7UNiagaraSettings__6B_;
  *(undefined8 *)&(this->DefaultEffectType).AssetPath.PackageName.Number = 0;
  (this->DefaultEffectType).AssetPath.AssetName.Number = 0;
  (this->DefaultEffectType).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultEffectType).SubPathString.Data.ArrayNum = 0;
  (this->DefaultEffectType).SubPathString.Data.ArrayMax = 0;
  (this->QualityLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualityLevels).ArrayNum = 0;
  (this->QualityLevels).ArrayMax = 0;
  *(undefined8 *)&this->ComponentRendererWarningsPerClass = 0;
  *(undefined8 *)&(this->ComponentRendererWarningsPerClass).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentRendererWarningsPerClass).field_0x20 = 0;
  this->LargeWorldCoordinateMaxTilesBeforeReset = 4;
  this->bEnforceStrictStackTypes = true;
  this->bAccurateQuatInterpolation = true;
  this->InvalidNamespaceWriteSeverity = Warning;
  this->bLimitDeltaTime = true;
  this->MaxDeltaTimePerTick = 0.125;
  (this->DefaultEffectType).AssetPath.PackageName.ComparisonIndex = 0;
  this->bAllowCreateActorFromSystemWithNoEffectType = true;
  this->ByteCodeStripOption = Strip_Original;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComponentRendererWarningsPerClass).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x48 = 0;
  this->DefaultSortPrecision = Low;
  this->DefaultGpuTranslucentLatency = Immediate;
  this->DefaultLightInverseExposureBlend = 0.0;
  this->NDIStaticMesh_AllowDistanceFields = false;
  (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayNum = 0;
  (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayMax = 0;
  (this->SimCacheAuxiliaryFileBasePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SimCacheAuxiliaryFileBasePath).Data.ArrayNum = 0;
  (this->SimCacheAuxiliaryFileBasePath).Data.ArrayMax = 0;
  (this->PlatformSetRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformSetRedirects).ArrayNum = 0;
  (this->PlatformSetRedirects).ArrayMax = 0;
  this->DefaultRenderTargetFormat = '\x06';
  this->DefaultGridFormat = HalfFloat;
  this->DefaultRendererMotionVectorSetting = Precise;
  this->DefaultPixelCoverageMode = Enabled;
  this->NDISkelMesh_SupportReadingDeformedGeometry = true;
  this->NDISkelMesh_Support16BitIndexWeight = true;
  return this;
}

// UNiagaraSettings @ 1493892a0

UNiagaraSettings * __thiscall
UNiagaraSettings::UNiagaraSettings(UNiagaraSettings *this,FObjectInitializer *param_1)

{
  TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UNiagaraSettings *pUVar7;
  FScriptContainerElement local_28;
  FScriptContainerElement local_27 [7];
  FString local_20;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bSystemsSupportLargeWorldCoordinates = true;
  this->LargeWorldCoordinateTileUpdateMode = ResetSimulation;
  this->LargeWorldCoordinateMaxTilesBeforeReset = 4;
  pTVar1 = &this->NDICollisionQuery_AsyncGpuTraceProviderOrder;
  this->bEnforceStrictStackTypes = true;
  this->bAccurateQuatInterpolation = true;
  this->InvalidNamespaceWriteSeverity = Warning;
  this->bLimitDeltaTime = true;
  this->_padding_ = (longlong)&___7UNiagaraSettings__6B_;
  pFVar2 = &this->SimCacheAuxiliaryFileBasePath;
  *(undefined8 *)&(this->DefaultEffectType).AssetPath.PackageName.Number = 0;
  (this->DefaultEffectType).AssetPath.AssetName.Number = 0;
  (this->DefaultEffectType).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultEffectType).SubPathString.Data.ArrayNum = 0;
  (this->DefaultEffectType).SubPathString.Data.ArrayMax = 0;
  (this->QualityLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualityLevels).ArrayNum = 0;
  (this->QualityLevels).ArrayMax = 0;
  *(undefined8 *)&this->ComponentRendererWarningsPerClass = 0;
  *(undefined8 *)&(this->ComponentRendererWarningsPerClass).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentRendererWarningsPerClass).field_0x20 = 0;
  this->MaxDeltaTimePerTick = 0.125;
  (this->DefaultEffectType).AssetPath.PackageName.ComparisonIndex = 0;
  this->bAllowCreateActorFromSystemWithNoEffectType = true;
  this->ByteCodeStripOption = Strip_Original;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentRendererWarningsPerClass).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x48 = 0;
  this->DefaultRenderTargetFormat = '\x06';
  this->DefaultGridFormat = HalfFloat;
  this->DefaultRendererMotionVectorSetting = Precise;
  this->DefaultPixelCoverageMode = Enabled;
  this->DefaultSortPrecision = Low;
  this->DefaultGpuTranslucentLatency = Immediate;
  this->DefaultLightInverseExposureBlend = 0.0;
  this->NDISkelMesh_SupportReadingDeformedGeometry = true;
  this->NDISkelMesh_Support16BitIndexWeight = true;
  this->NDISkelMesh_GpuMaxInfluences = '\x02';
  this->NDISkelMesh_GpuUniformSamplingFormat = '\0';
  this->NDISkelMesh_AdjacencyTriangleIndexFormat = '\0';
  this->NDIStaticMesh_AllowDistanceFields = false;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayNum = 0;
  (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimCacheAuxiliaryFileBasePath).Data.ArrayNum = 0;
  (this->SimCacheAuxiliaryFileBasePath).Data.ArrayMax = 0;
  (this->PlatformSetRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformSetRedirects).ArrayNum = 0;
  (this->PlatformSetRedirects).ArrayMax = 0;
  (this->PositionPinTypeColor).field0_0x0._s_0.R = 1.0;
  (this->PositionPinTypeColor).field0_0x0._s_0.G = 0.3;
  (this->PositionPinTypeColor).field0_0x0._s_0.B = 1.0;
  (this->PositionPinTypeColor).field0_0x0._s_0.A = 1.0;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_28 = (FScriptContainerElement)0x1;
  if (((pFVar3 <= &local_28) &&
      (&local_28 < pFVar3 + (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (UNiagaraSettings *)(*pcVar4)();
    return pUVar7;
  }
  iVar6 = (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayNum;
  if (iVar6 == (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar1->AllocatorInstance,
                       &(this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayMax);
  }
  (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayNum = iVar6 + 1;
  local_27[0] = (FScriptContainerElement)0x2;
  (pTVar1->AllocatorInstance).Data[iVar6] = local_28;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= local_27) &&
      (local_27 < pFVar3 + (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (UNiagaraSettings *)(*pcVar4)();
    return pUVar7;
  }
  iVar6 = (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayNum;
  if (iVar6 == (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar1->AllocatorInstance,
                       &(this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayMax);
  }
  (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).ArrayNum = iVar6 + 1;
  (pTVar1->AllocatorInstance).Data[iVar6] = local_27[0];
  ::FString::FString(&local_20,"{project_dir}/Saved/NiagaraSimCache");
  if (pFVar2 != &local_20) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
    (this->SimCacheAuxiliaryFileBasePath).Data.ArrayNum = local_20.Data.ArrayNum;
    (this->SimCacheAuxiliaryFileBasePath).Data.ArrayMax = local_20.Data.ArrayMax;
    local_20.Data.ArrayNum = 0;
    local_20.Data.ArrayMax = 0;
    local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  this->SimCacheMaxCPUMemoryVolumetrics = 5000;
  return this;
}

// ~UNiagaraSettings @ 14938aa10

void __thiscall UNiagaraSettings::~UNiagaraSettings(UNiagaraSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraSettings__6B_;
  DestructItems<FNiagaraPlatformSetRedirect,int>
            ((FNiagaraPlatformSetRedirect *)(this->PlatformSetRedirects).AllocatorInstance.Data,
             (this->PlatformSetRedirects).ArrayNum);
  pFVar1 = (this->PlatformSetRedirects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimCacheAuxiliaryFileBasePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ComponentRendererWarningsPerClass).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentRendererWarningsPerClass);
  DestructItems<FText,int>
            ((FText *)(this->QualityLevels).AllocatorInstance.Data,(this->QualityLevels).ArrayNum);
  pFVar1 = (this->QualityLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultEffectType).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 1493a39a0

FName __thiscall UNiagaraSettings::GetCategoryName(UNiagaraSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Plugins");
  return in_RDX;
}

// GetPrivateStaticClass @ 1493a75e0

UClass * __cdecl UNiagaraSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSettings",
               &Z_Registration_Info_UClass_UNiagaraSettings.InnerSingleton,
               StaticRegisterNativesUNiagaraSettings,0x130,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Niagara",
               InternalConstructor<UNiagaraSettings>,
               InternalVTableHelperCtorCaller<UNiagaraSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSettings.InnerSingleton;
}

// PostInitProperties @ 1493ab700

void __thiscall UNiagaraSettings::PostInitProperties(UNiagaraSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UNiagaraSettings *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UNiagaraSettings **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UNiagaraSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesUNiagaraSettings @ 1493b7620

void __cdecl UNiagaraSettings::StaticRegisterNativesUNiagaraSettings(void)

{
  return;
}

