// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 129

// StaticClass @ 149ede090

UClass * __cdecl UPCGComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComponent",
               &Z_Registration_Info_UClass_UPCGComponent.InnerSingleton,
               StaticRegisterNativesUPCGComponent,0x3c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGComponent>,
               InternalVTableHelperCtorCaller<UPCGComponent>,local_res8,UActorComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComponent.InnerSingleton;
}

// UPCGComponent @ 149eedaf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGComponent * __thiscall
UPCGComponent::UPCGComponent(UPCGComponent *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPCGGraphInstance *pUVar4;
  FName local_res8;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->Seed = 0x2a;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->bActivated = true;
  this->bIsComponentPartitioned = false;
  this->GenerationTrigger = GenerateOnLoad;
  this->bGenerateOnDropWhenTriggerOnDemand = false;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UPCGComponent__6B_;
  this->bOverrideGenerationRadii = false;
  FPCGRuntimeGenerationRadii::FPCGRuntimeGenerationRadii(&this->GenerationRadii);
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingDelegate).field_0x18 = 2;
  (this->ToolDataContainer).ToolData.ArrayNum = 0;
  (this->ToolDataContainer).ToolData.ArrayMax = 0;
  *(undefined8 *)&this->OnPCGGraphStartGeneratingDelegate = 0;
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphCancelledDelegate = 0;
  *(undefined8 *)&(this->OnPCGGraphCancelledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphGeneratedDelegate = 0;
  *(undefined8 *)&(this->OnPCGGraphGeneratedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphCleanedDelegate = 0;
  *(undefined8 *)&(this->OnPCGGraphCleanedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphStartGeneratingExternal = 0;
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingExternal).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphCancelledExternal = 0;
  *(undefined8 *)&(this->OnPCGGraphCancelledExternal).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphGeneratedExternal = 0;
  *(undefined8 *)&(this->OnPCGGraphGeneratedExternal).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphCleanedExternal = 0;
  *(undefined8 *)&(this->OnPCGGraphCleanedExternal).field_0x10 = 0;
  this->bGenerated = false;
  this->bRuntimeGenerated = false;
  (this->PostGenerateFunctionNames).ArrayNum = 0;
  (this->PostGenerateFunctionNames).ArrayMax = 0;
  this->CurrentEditingMode = Normal;
  this->SerializedEditingMode = Normal;
  this->PreviousEditingMode = Normal;
  this->LastEditingModePriorToUndo = Normal;
  this->RuntimeGridDescriptorHash = 0;
  (this->GeneratedResources).ArrayNum = 0;
  (this->GeneratedResources).ArrayMax = 0;
  this->GeneratedResourcesInaccessible = false;
  *(undefined8 *)&(this->OnPCGGraphCancelledDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnPCGGraphGeneratedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnPCGGraphCleanedDelegate).field_0x18 = 2;
  this->GenerationGridSize = 0x80000000;
  this->InputType = Actor;
  this->bParseActorComponents = true;
  (this->LastGeneratedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->LastGeneratedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->LastGeneratedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->ToolDataContainer)._padding_ = (longlong)&___7FPCGInteractiveToolDataContainer__6B_;
  (this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SchedulingPolicy).field0_0x0.DebugPtr = (UPCGSchedulingPolicyBase *)0x0;
  (this->ToolDataContainer).ToolData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphCancelledDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphGeneratedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphCleanedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingExternal).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphCancelledExternal).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphGeneratedExternal).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphCleanedExternal).field_0x8 = 0;
  (this->PostGenerateFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphInstance).field0_0x0.DebugPtr = (UPCGGraphInstance *)0x0;
  (this->CachedPCGData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->CachedInputData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->CachedActorData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->CachedLandscapeData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->CachedLandscapeHeightData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->GeneratedResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastGeneratedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->LastGeneratedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->LastGeneratedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->LastGeneratedBounds).IsValid = '\0';
  (this->LastGeneratedBounds).Pad[0] = '\0';
  (this->LastGeneratedBounds).Pad[1] = '\0';
  (this->LastGeneratedBounds).Pad[2] = '\0';
  (this->LastGeneratedBounds).Pad[3] = '\0';
  (this->LastGeneratedBounds).Pad[4] = '\0';
  (this->LastGeneratedBounds).Pad[5] = '\0';
  (this->LastGeneratedBounds).Pad[6] = '\0';
  (this->GeneratedGraphOutput).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedGraphOutput).TaggedData.ArrayNum = 0;
  (this->GeneratedGraphOutput).TaggedData.ArrayMax = 0;
  (this->GeneratedGraphOutput).bCancelExecutionOnEmpty = false;
  (this->GeneratedGraphOutput).bCancelExecution = false;
  (this->GeneratedGraphOutput).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedGraphOutput).DataCrcs.ArrayNum = 0;
  (this->GeneratedGraphOutput).DataCrcs.ArrayMax = 0;
  (this->GeneratedGraphOutput).InactiveOutputPinBitmask = 0;
  *(undefined8 *)&this->PerPinGeneratedOutput = 0;
  *(undefined8 *)&(this->PerPinGeneratedOutput).field_0x8 = 0;
  *(undefined8 *)&(this->PerPinGeneratedOutput).field_0x20 = 0;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x28 = 0;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x34 = 0;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerPinGeneratedOutput).field_0x40 = 0;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x48 = 0;
  (this->PerPinGeneratedOutputLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->CurrentGenerationTask = 0xffffffffffffffff;
  this->CurrentCleanupTask = 0xffffffffffffffff;
  this->bIsComponentLocal = false;
  this->bProceduralInstancesInUse = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GeneratedResourcesLock,4000);
  (this->ExecutionState).Component = this;
  (this->ExecutionState)._padding_ = (longlong)&___7FPCGComponentExecutionState__6B_;
  pFVar2 = ::FName::FName(&local_res8,L"PCGGraphInstance");
  FVar1 = *pFVar2;
  pUVar3 = UPCGGraphInstance::StaticClass();
  pUVar4 = (UPCGGraphInstance *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPCGGraphInstance *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->GraphInstance).field0_0x0.DebugPtr = pUVar4;
  pUVar3 = Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr = pUVar3;
  return this;
}

// UPCGComponent @ 149eede70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGComponent * __thiscall UPCGComponent::UPCGComponent(UPCGComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->Seed = 0x2a;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->bActivated = true;
  this->bIsComponentPartitioned = false;
  this->GenerationTrigger = GenerateOnLoad;
  this->bGenerateOnDropWhenTriggerOnDemand = false;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UPCGComponent__6B_;
  this->bOverrideGenerationRadii = false;
  FPCGRuntimeGenerationRadii::FPCGRuntimeGenerationRadii(&this->GenerationRadii);
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingDelegate).field_0x18 = 2;
  (this->ToolDataContainer).ToolData.ArrayNum = 0;
  (this->ToolDataContainer).ToolData.ArrayMax = 0;
  *(undefined8 *)&this->OnPCGGraphStartGeneratingDelegate = 0;
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphCancelledDelegate = 0;
  *(undefined8 *)&(this->OnPCGGraphCancelledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphGeneratedDelegate = 0;
  *(undefined8 *)&(this->OnPCGGraphGeneratedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphCleanedDelegate = 0;
  *(undefined8 *)&(this->OnPCGGraphCleanedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphStartGeneratingExternal = 0;
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingExternal).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphCancelledExternal = 0;
  *(undefined8 *)&(this->OnPCGGraphCancelledExternal).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphGeneratedExternal = 0;
  *(undefined8 *)&(this->OnPCGGraphGeneratedExternal).field_0x10 = 0;
  *(undefined8 *)&this->OnPCGGraphCleanedExternal = 0;
  *(undefined8 *)&(this->OnPCGGraphCleanedExternal).field_0x10 = 0;
  this->bGenerated = false;
  this->bRuntimeGenerated = false;
  (this->PostGenerateFunctionNames).ArrayNum = 0;
  (this->PostGenerateFunctionNames).ArrayMax = 0;
  this->CurrentEditingMode = Normal;
  this->SerializedEditingMode = Normal;
  this->PreviousEditingMode = Normal;
  this->LastEditingModePriorToUndo = Normal;
  this->RuntimeGridDescriptorHash = 0;
  (this->GeneratedResources).ArrayNum = 0;
  (this->GeneratedResources).ArrayMax = 0;
  this->GeneratedResourcesInaccessible = false;
  *(undefined8 *)&(this->OnPCGGraphCancelledDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnPCGGraphGeneratedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnPCGGraphCleanedDelegate).field_0x18 = 2;
  this->GenerationGridSize = 0x80000000;
  this->InputType = Actor;
  this->bParseActorComponents = true;
  (this->ToolDataContainer)._padding_ = (longlong)&___7FPCGInteractiveToolDataContainer__6B_;
  (this->LastGeneratedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->LastGeneratedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->LastGeneratedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SchedulingPolicy).field0_0x0.DebugPtr = (UPCGSchedulingPolicyBase *)0x0;
  (this->ToolDataContainer).ToolData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphCancelledDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphGeneratedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphCleanedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphStartGeneratingExternal).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphCancelledExternal).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphGeneratedExternal).field_0x8 = 0;
  *(undefined8 *)&(this->OnPCGGraphCleanedExternal).field_0x8 = 0;
  (this->PostGenerateFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphInstance).field0_0x0.DebugPtr = (UPCGGraphInstance *)0x0;
  (this->CachedPCGData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->CachedInputData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->CachedActorData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->CachedLandscapeData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->CachedLandscapeHeightData).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->GeneratedResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastGeneratedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->LastGeneratedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->LastGeneratedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->LastGeneratedBounds).IsValid = '\0';
  (this->LastGeneratedBounds).Pad[0] = '\0';
  (this->LastGeneratedBounds).Pad[1] = '\0';
  (this->LastGeneratedBounds).Pad[2] = '\0';
  (this->LastGeneratedBounds).Pad[3] = '\0';
  (this->LastGeneratedBounds).Pad[4] = '\0';
  (this->LastGeneratedBounds).Pad[5] = '\0';
  (this->LastGeneratedBounds).Pad[6] = '\0';
  (this->GeneratedGraphOutput).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedGraphOutput).TaggedData.ArrayNum = 0;
  (this->GeneratedGraphOutput).TaggedData.ArrayMax = 0;
  (this->GeneratedGraphOutput).bCancelExecutionOnEmpty = false;
  (this->GeneratedGraphOutput).bCancelExecution = false;
  (this->GeneratedGraphOutput).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedGraphOutput).DataCrcs.ArrayNum = 0;
  (this->GeneratedGraphOutput).DataCrcs.ArrayMax = 0;
  (this->GeneratedGraphOutput).InactiveOutputPinBitmask = 0;
  *(undefined8 *)&this->PerPinGeneratedOutput = 0;
  *(undefined8 *)&(this->PerPinGeneratedOutput).field_0x8 = 0;
  *(undefined8 *)&(this->PerPinGeneratedOutput).field_0x20 = 0;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x28 = 0;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x34 = 0;
  *(undefined8 *)&(this->PerPinGeneratedOutput).field_0x40 = 0;
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x48 = 0;
  (this->PerPinGeneratedOutputLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->CurrentGenerationTask = 0xffffffffffffffff;
  this->CurrentCleanupTask = 0xffffffffffffffff;
  this->bIsComponentLocal = false;
  this->bProceduralInstancesInUse = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GeneratedResourcesLock,4000);
  (this->ExecutionState).Component = (UPCGComponent *)0x0;
  (this->ExecutionState)._padding_ = (longlong)&___7FPCGComponentExecutionState__6B_;
  return this;
}

// ~UPCGComponent @ 149eef9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::~UPCGComponent(UPCGComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UPCGComponent__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GeneratedResourcesLock);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PerPinGeneratedOutputLock);
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
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PerPinGeneratedOutputLock);
  }
  *(undefined4 *)&(this->PerPinGeneratedOutput).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerPinGeneratedOutput).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPCGDataCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPCGDataCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPCGDataCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerPinGeneratedOutput);
  pFVar2 = (this->GeneratedGraphOutput).DataCrcs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->GeneratedGraphOutput).TaggedData.AllocatorInstance.Data,
             (this->GeneratedGraphOutput).TaggedData.ArrayNum);
  pFVar2 = (this->GeneratedGraphOutput).TaggedData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GeneratedResources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PostGenerateFunctionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->OnPCGGraphCleanedExternal).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPCGGraphCleanedExternal);
  pvVar1 = *(void **)&(this->OnPCGGraphGeneratedExternal).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPCGGraphGeneratedExternal);
  pvVar1 = *(void **)&(this->OnPCGGraphCancelledExternal).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPCGGraphCancelledExternal);
  pvVar1 = *(void **)&(this->OnPCGGraphStartGeneratingExternal).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPCGGraphStartGeneratingExternal);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPCGGraphCleanedDelegate).field_0x8,
             *(int *)&(this->OnPCGGraphCleanedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnPCGGraphCleanedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPCGGraphCleanedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPCGGraphGeneratedDelegate).field_0x8,
             *(int *)&(this->OnPCGGraphGeneratedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnPCGGraphGeneratedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPCGGraphGeneratedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPCGGraphCancelledDelegate).field_0x8,
             *(int *)&(this->OnPCGGraphCancelledDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnPCGGraphCancelledDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPCGGraphCancelledDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPCGGraphStartGeneratingDelegate).field_0x8,
             *(int *)&(this->OnPCGGraphStartGeneratingDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnPCGGraphStartGeneratingDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPCGGraphStartGeneratingDelegate);
  DestructItems<TInstancedStruct<FPCGInteractiveToolWorkingBaseData>,int>
            ((TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *)
             (this->ToolDataContainer).ToolData.AllocatorInstance.Data,
             (this->ToolDataContainer).ToolData.ArrayNum);
  pFVar2 = (this->ToolDataContainer).ToolData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IPCGGraphExecutionSource__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// operator() @ 149ef0960

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
`UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>::operator()
          (void *this,UPCGComponent *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FWeakObjectPtr local_res8;
  UPCGComponent *local_res10;
  ulong64 local_48 [2];
  code *local_38 [2];
  undefined **local_28;
  UPCGComponent *local_20;
  FWeakObjectPtr local_18;
  undefined8 local_10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_20 = *(UPCGComponent **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool>
                ::Call;
  local_10 = 0;
  local_48[0] = UPCGSubsystem::ScheduleGeneric
                          (*(UPCGSubsystem **)((longlong)this + 8),
                           (TFunction<bool___cdecl(void)> *)local_38,local_20,
                           *(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> **)
                            ((longlong)this + 0x18));
  if (local_48[0] != 0xffffffffffffffff) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((pFVar2->Data <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(ulong64 *)(pFVar2->Data + (longlong)iVar5 * 8) = local_48[0];
  }
  return;
}

// operator() @ 149ef0ae0

bool __thiscall `UPCGComponent::CreateCleanupTask'::__l2::<lambda_1>::operator()(void *this)

{
  undefined1 *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
  if ((pUVar4 != (UObject *)0x0) && ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0)) {
    lpCriticalSection = &pUVar4[0x16].field_0x18;
    if ((lpCriticalSection == (undefined1 *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(undefined1 *)(pUVar4 + 0x11) = 0;
    if (lpCriticalSection != (undefined1 *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return true;
}

// operator() @ 149ef1260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_1>::operator()
          (void *this,UActorComponent *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UActorComponent *local_res10 [3];
  
  if ((param_1 != (UActorComponent *)0x0) &&
     (local_res10[0] = param_1,
     bVar4 = UActorComponent::ComponentHasTag(param_1,PCGHelpers::DefaultPCGTag), bVar4)) {
    pFVar2 = *(ForAnyElementType **)this;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
       (((FScriptContainerElement *)local_res10 <
         pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(UActorComponent **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  }
  return;
}

// operator() @ 149ef15a0

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

bool __thiscall `UPCGComponent::CreateCleanupTask'::__l2::<lambda_2>::operator()(void *this)

{
  undefined1 *lpCriticalSection;
  undefined1 *puVar1;
  uint uVar2;
  UPCGManagedResource *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  UObject *pUVar9;
  FCleanupContext *pFVar10;
  UPCGComponent *pUVar11;
  UWorld *pUVar12;
  uint uVar13;
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined1 auStackY_e8 [32];
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> local_b8;
  FName local_a8;
  UPCGManagedResource *local_a0;
  FString local_98;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
  if (pUVar9 == (UObject *)0x0) {
LAB_149ef18f9:
    pTVar14 = (TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *)0x0;
    local_88._44_4_ = 0x80;
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_88._32_8_ = 0;
    local_88._40_4_ = 0;
    local_88._52_4_ = 0;
    local_48 = (void *)0x0;
    local_88._48_4_ = 0xffffffff;
    pUVar12 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
    if (pUVar12 != (UWorld *)0x0) {
      if ((*(longlong *)this == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>::
      Array((TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
             *)(*(longlong *)this + 8),&local_b8);
      UPCGActorHelpers::DeleteActors(pUVar12,&local_b8);
      DestructItems<TSoftObjectPtr<AActor>,int>
                ((TSoftObjectPtr<AActor> *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
    }
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
    if (pUVar9 != (UObject *)0x0) {
      bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x10));
      if (bVar5) {
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
        pTVar14 = (TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *)
                  &pUVar9[0x10].field_0x18;
      }
      pUVar11 = (UPCGComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
      PCGGeneratedResourcesLogging::LogCreateCleanupTaskFinished(pUVar11,pTVar14);
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88);
    return true;
  }
  if ((*(uint *)&pUVar9->field_0x8 >> 0x1e & 1) != 0) {
    return true;
  }
  lpCriticalSection = &pUVar9[0x16].field_0x18;
  if ((lpCriticalSection == (undefined1 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(longlong *)this == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (**(char **)this != '\0') {
    if ((*(char *)(pUVar9 + 0x11) != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ThisComponent->GeneratedResourcesInaccessible",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                           ,0x68a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = *(int *)&pUVar9[0x10].field_0x20;
    *(undefined1 *)(pUVar9 + 0x11) = 1;
    pFVar10 = TSharedPtr<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::operator->
                        (this);
    pFVar10->ResourceIndex = iVar8 + -1;
    pFVar10 = TSharedPtr<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::operator->
                        (this);
    pFVar10->bIsFirstIteration = false;
    TSharedPtr<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::operator->(this);
  }
  if ((*(longlong *)this == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (*(int *)(*(longlong *)this + 4) < 0) {
    *(undefined1 *)(pUVar9 + 0x11) = 0;
    if (lpCriticalSection != (undefined1 *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    goto LAB_149ef18f9;
  }
  puVar1 = &pUVar9[0x10].field_0x18;
  pFVar10 = TSharedPtr<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::operator->
                      (this);
  uVar2 = pFVar10->ResourceIndex;
  uVar13 = 0;
  if ((int)uVar2 < *(int *)&pUVar9[0x10].field_0x20) {
    uVar13 = ~uVar2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pUVar3 = *(UPCGManagedResource **)(*(longlong *)puVar1 + (longlong)(int)uVar2 * 8);
  local_a0 = pUVar3;
  if (((pUVar3 == (UPCGManagedResource *)0x0) && (*(longlong *)&pUVar9[4].field_0x8 != 0)) &&
     (1 < (byte)LogPCG._0_1_)) {
    local_a8 = *(FName *)(*(longlong *)&pUVar9[4].field_0x8 + 0x18);
    ::FName::ToString(&local_a8,&local_98);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_98.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149ef17d2;
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
    pUVar11 = (UPCGComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
    PCGGeneratedResourcesLogging::LogCreateCleanupTaskResource(pUVar11,(UPCGManagedResource *)0x0);
  }
  else {
LAB_149ef17d2:
    pUVar11 = (UPCGComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
    PCGGeneratedResourcesLogging::LogCreateCleanupTaskResource(pUVar11,pUVar3);
    if (pUVar3 != (UPCGManagedResource *)0x0) {
      pcVar4 = *(code **)(pUVar3->_padding_ + 0x2b8);
      pFVar10 = TSharedPtr<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::operator->
                          (this);
      cVar7 = (*pcVar4)(local_a0,*(undefined1 *)((longlong)this + 0x20),&pFVar10->ActorsToDelete);
      if (cVar7 == '\0') goto LAB_149ef18bb;
    }
  }
  pFVar10 = TSharedPtr<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::operator->
                      (this);
  uVar2 = pFVar10->ResourceIndex;
  uVar13 = 0;
  if ((int)uVar2 < *(int *)&pUVar9[0x10].field_0x20) {
    uVar13 = ~uVar2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = ~uVar2 + *(int *)&pUVar9[0x10].field_0x20;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove((void *)(*(longlong *)puVar1 + (longlong)(int)uVar2 * 8),
            (void *)(*(longlong *)puVar1 + (longlong)(*(int *)&pUVar9[0x10].field_0x20 - iVar8) * 8)
            ,(longlong)iVar8 << 3);
  }
  *(int *)&pUVar9[0x10].field_0x20 = *(int *)&pUVar9[0x10].field_0x20 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)puVar1,*(int *)&pUVar9[0x10].field_0x20,
             (int *)&pUVar9[0x10].field_0x24);
LAB_149ef18bb:
  pFVar10 = TSharedPtr<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::operator->
                      (this);
  pFVar10->ResourceIndex = pFVar10->ResourceIndex + -1;
  if (lpCriticalSection != (undefined1 *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return false;
}

// operator() @ 149ef1a50

void __thiscall
`UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_2>::operator()
          (void *this,UPCGComponent *param_1)

{
  undefined8 *puVar1;
  ForAnyElementType *pFVar2;
  TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UObject *local_b8;
  FScriptContainerElement *local_b0;
  uint local_a8;
  undefined1 local_a0 [24];
  void *local_88;
  undefined1 local_78 [24];
  void *local_60;
  
  pFVar16 = (param_1->GeneratedResources).AllocatorInstance.Data;
  local_a8 = (param_1->GeneratedResources).ArrayNum;
  uVar10 = (ulonglong)(int)local_a8;
  pFVar11 = pFVar16 + uVar10 * 8;
  local_b0 = pFVar11;
  do {
    if ((param_1->GeneratedResources).ArrayNum != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGManagedResource>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar16 == pFVar11) {
      return;
    }
    lVar13 = *(longlong *)pFVar16;
    if (lVar13 != 0) {
      pUVar8 = Z_Construct_UClass_UPCGManagedComponent_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar7 * 8)
          != &pUVar8->_padding_)) {
        pUVar8 = Z_Construct_UClass_UPCGManagedActors_NoRegister();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) {
          iVar7 = *(int *)(lVar13 + 0x98);
          puVar12 = *(undefined8 **)(lVar13 + 0x90);
          puVar1 = puVar12 + (longlong)iVar7 * 5;
          while( true ) {
            if (*(int *)(lVar13 + 0x98) != iVar7) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<TSoftObjectPtr<AActor>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            pFVar11 = local_b0;
            if (puVar12 == puVar1) break;
            local_a0._0_8_ = *puVar12;
            this_00 = *(TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
                        **)((longlong)this + 8);
            FSoftObjectPath::FSoftObjectPath
                      ((FSoftObjectPath *)(local_a0 + 8),(FSoftObjectPath *)(puVar12 + 1));
            if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
              local_78._0_8_ = local_a0._0_8_;
              FSoftObjectPath::FSoftObjectPath
                        ((FSoftObjectPath *)(local_78 + 8),(FSoftObjectPath *)(local_a0 + 8));
              uVar15 = ::GetTypeHash((FSoftObjectPath *)(local_78 + 8));
              if (local_60 != (void *)0x0) {
                FMemory::Free(local_60);
              }
              TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
              ::RemoveImpl<TSoftObjectPtr<AActor_const_>_>
                        (this_00,uVar15,(TSoftObjectPtr<AActor_const_> *)local_a0);
            }
            if (local_88 != (void *)0x0) {
              FMemory::Free(local_88);
            }
            puVar12 = puVar12 + 5;
          }
        }
      }
      else {
        pFVar2 = *(ForAnyElementType **)this;
        pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar13 + 0x38));
        if (pUVar9 == (UObject *)0x0) {
LAB_149ef1b26:
          pUVar9 = (UObject *)0x0;
        }
        else {
          pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
          iVar7 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar7) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
              &pUVar8->_padding_)) goto LAB_149ef1b26;
        }
        local_b8 = pUVar9;
        if (((pFVar2->Data <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 <
             pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)&pFVar2[1].Data;
        bVar4 = false;
        uVar15 = 0;
        pFVar11 = local_b0;
        if (0 < iVar7) {
          lVar13 = 0;
          do {
            uVar14 = 0;
            if ((int)uVar15 < iVar7) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar14 = uVar15;
            if (*(UObject **)(pFVar2->Data + lVar13) == local_b8) {
              uVar14 = uVar15 - 1;
              lVar13 = lVar13 + -8;
              bVar4 = true;
              uVar6 = 0;
              if ((int)uVar15 < *(int *)&pFVar2[1].Data) {
                uVar6 = ~uVar15 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = (*(int *)&pFVar2[1].Data - uVar15) + -1;
              if (1 < iVar7) {
                iVar7 = 1;
              }
              if (iVar7 != 0) {
                memmove(pFVar2->Data + (longlong)(int)uVar15 * 8,
                        pFVar2->Data + (longlong)(*(int *)&pFVar2[1].Data - iVar7) * 8,
                        (longlong)iVar7 << 3);
              }
              *(int *)&pFVar2[1].Data = *(int *)&pFVar2[1].Data + -1;
            }
            iVar7 = *(int *)&pFVar2[1].Data;
            uVar15 = uVar14 + 1;
            lVar13 = lVar13 + 8;
          } while ((int)uVar15 < iVar7);
          pFVar11 = local_b0;
          if (bVar4) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,pFVar2,iVar7,(int *)((longlong)&pFVar2[1].Data + 4));
            pFVar11 = local_b0;
          }
        }
      }
    }
    pFVar16 = pFVar16 + 8;
    uVar10 = (ulonglong)local_a8;
  } while( true );
}

// AddActorsToManagedResources @ 149ef2ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPCGComponent::AddActorsToManagedResources
          (UPCGComponent *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  FName *pFVar4;
  code *pcVar5;
  UPCGComponent *this_00;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGManagedResource *pUVar9;
  FName *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  undefined1 auStack_168 [32];
  FName *local_148;
  FName *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> local_110;
  undefined8 local_100;
  undefined1 local_f8 [24];
  FUtf8String local_e0;
  UObject *local_d0;
  UPCGComponent *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar11 = param_1->ArrayNum;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = pFVar12 + (longlong)iVar11 * 8;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  local_c8 = this;
  do {
    if (param_1->ArrayNum != iVar11) {
      local_118[0] = 0;
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_118);
    }
    this_00 = local_c8;
    if (pFVar12 == pFVar2) {
      iVar11 = 0;
      if (local_110.ArrayNum != 0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)local_c8,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UPCGManagedActors_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar8);
        local_b8._8_8_ = this_00;
        pUVar9 = (UPCGManagedResource *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar13 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar13 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        plVar13 = &pUVar9[2]._padding_;
        if ((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)plVar13 != &local_110) {
          DestructItems<TSoftObjectPtr<AActor>,int>
                    ((TSoftObjectPtr<AActor> *)*plVar13,pUVar9[2].Crc.Value);
          if ((void *)*plVar13 != (void *)0x0) {
            FMemory::Free((void *)*plVar13);
          }
          *plVar13 = (longlong)local_110.AllocatorInstance.Data;
          local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pUVar9[2].Crc.Value = local_110.ArrayNum;
          *(int *)&pUVar9[2].Crc.bValid = local_110.ArrayMax;
          local_110.ArrayNum = 0;
          local_110.ArrayMax = 0;
        }
        AddToManagedResources(this_00,pUVar9);
        iVar11 = local_110.ArrayNum;
      }
      DestructItems<TSoftObjectPtr<AActor>,int>
                ((TSoftObjectPtr<AActor> *)local_110.AllocatorInstance.Data,iVar11);
      if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      return;
    }
    pUVar3 = *(UObject **)pFVar12;
    if (pUVar3 != (UObject *)0x0) {
      puVar1 = &pUVar3[0xc].field_0x18;
      pFVar4 = *(FName **)puVar1;
      for (pFVar10 = pFVar4; pFVar10 != pFVar4 + *(int *)&pUVar3[0xc].field_0x20;
          pFVar10 = pFVar10 + 1) {
        if (*pFVar10 == PCGHelpers::DefaultPCGActorTag) goto LAB_149ef2de7;
      }
      if ((pFVar4 < (FName *)((longlong)&PCGHelpers::DefaultPCGActorTag.ComparisonIndex.Value + 1))
         && (&PCGHelpers::DefaultPCGActorTag < pFVar4 + *(int *)&pUVar3[0xc].field_0x24)) {
        local_128 = 8;
        local_148 = &PCGHelpers::DefaultPCGActorTag;
        local_140 = pFVar4;
        local_138 = (longlong)*(int *)&pUVar3[0xc].field_0x24;
        local_130 = (longlong)*(int *)&pUVar3[0xc].field_0x20;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = *(int *)&pUVar3[0xc].field_0x20;
      if (iVar7 == *(int *)&pUVar3[0xc].field_0x24) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)puVar1,(int *)&pUVar3[0xc].field_0x24);
      }
      *(int *)&pUVar3[0xc].field_0x20 = iVar7 + 1;
      *(FName *)(*(longlong *)puVar1 + (longlong)iVar7 * 8) = PCGHelpers::DefaultPCGActorTag;
LAB_149ef2de7:
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      local_f8._0_8_ = 0;
      local_100 = 0;
      local_f8._16_8_ = 0;
      local_f8._8_8_ = 0;
      FUtf8String::Reset(&local_e0,0);
      local_d0 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)local_f8,(FObjectPtr)&local_d0);
      TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSoftObjectPtr<AActor>_>(&local_110,(TSoftObjectPtr<AActor> *)local_f8);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// AddComponentsToManagedResources @ 149ef2fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPCGComponent::AddComponentsToManagedResources
          (UPCGComponent *this,TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UActorComponent *this_00;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UClass *pUVar9;
  FName this_01;
  longlong *plVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FName *this_02;
  undefined1 auStack_138 [32];
  FName *local_118;
  FName *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  <lambda_1> local_e8;
  undefined1 local_e7 [7];
  FName local_e0;
  TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  iVar8 = param_1->ArrayNum;
  if (iVar8 != 0) {
    pFVar12 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar12 + (longlong)iVar8 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar8) {
        local_e7[0] = 0;
        `TCheckedPointerIterator<UActorComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e7);
      }
      if (pFVar12 == pFVar3) break;
      this_00 = *(UActorComponent **)pFVar12;
      if ((this_00 != (UActorComponent *)0x0) &&
         (bVar6 = UActorComponent::ComponentHasTag(this_00,PCGHelpers::DefaultPCGTag), !bVar6)) {
        pFVar4 = (FName *)(this_00->ComponentTags).AllocatorInstance.Data;
        if ((pFVar4 < (FName *)((longlong)&PCGHelpers::DefaultPCGTag.ComparisonIndex.Value + 1)) &&
           (lVar11 = (longlong)(this_00->ComponentTags).ArrayMax,
           &PCGHelpers::DefaultPCGTag < pFVar4 + lVar11)) {
          local_100 = (longlong)(this_00->ComponentTags).ArrayNum;
          local_f8 = 8;
          local_118 = &PCGHelpers::DefaultPCGTag;
          local_110 = pFVar4;
          local_108 = lVar11;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = (this_00->ComponentTags).ArrayNum;
        piVar1 = &(this_00->ComponentTags).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(this_00->ComponentTags).AllocatorInstance,piVar1);
        }
        (this_00->ComponentTags).ArrayNum = iVar7 + 1;
        *(FName *)((this_00->ComponentTags).AllocatorInstance.Data + (longlong)iVar7 * 8) =
             PCGHelpers::DefaultPCGTag;
      }
      pFVar12 = pFVar12 + 8;
    }
    lpCriticalSection = &this->GeneratedResourcesLock;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->GeneratedResourcesInaccessible != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GeneratedResourcesInaccessible",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                           ,0x151,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_02 = (FName *)(this->GeneratedResources).AllocatorInstance.Data;
    iVar8 = (this->GeneratedResources).ArrayNum;
    pFVar4 = this_02 + iVar8;
    while( true ) {
      if ((this->GeneratedResources).ArrayNum != iVar8) {
        local_e8 = (<lambda_1>)0x0;
        `TCheckedPointerIterator<TObjectPtr<UPCGManagedResource>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_e8);
      }
      if (this_02 == pFVar4) break;
      if (*this_02 != (FName)0x0) {
        pUVar9 = Z_Construct_UClass_UPCGManagedComponentDefaultList_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar9);
        if ((bVar6) && (this_01 = *this_02, this_01 != (FName)0x0)) goto LAB_149ef32f1;
      }
      this_02 = this_02 + 1;
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UPCGManagedComponentDefaultList_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar9);
    local_c8._8_8_ = this;
    this_01 = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    PCGGeneratedResourcesLogging::LogAddToManagedResources(this,(UPCGManagedResource *)this_01);
    pTVar2 = &this->GeneratedResources;
    local_e0 = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_e0) &&
       (lVar11 = (longlong)(this->GeneratedResources).ArrayMax, &local_e0 < pFVar4 + lVar11)) {
      local_100 = (longlong)(this->GeneratedResources).ArrayNum;
      local_f8 = 8;
      local_118 = &local_e0;
      local_110 = pFVar4;
      local_108 = lVar11;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->GeneratedResources).ArrayNum;
    piVar1 = &(this->GeneratedResources).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->GeneratedResources).ArrayNum = iVar8 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_e0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e0);
    }
    if ((this_01 == (FName)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultList",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                           ,0x165,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_149ef32f1:
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    Algo::
    Transform<TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_>_&,_UPCGComponent::AddComponentsToManagedResources_::__l2::<lambda_1>_>
              (param_1,&local_d8,local_e8);
    UPCGManagedComponentDefaultList::AddGeneratedComponentsFromBP
              ((UPCGManagedComponentDefaultList *)this_01,&local_d8);
    DestructItems<TSoftObjectPtr<UActorComponent>,int>
              ((TSoftObjectPtr<UActorComponent> *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum)
    ;
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// AddToManagedResources @ 149ef4e70

void __thiscall
UPCGComponent::AddToManagedResources(UPCGComponent *this,UPCGManagedResource *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *pTVar7;
  UPCGManagedResource *local_28;
  FText local_20;
  
  PCGGeneratedResourcesLogging::LogAddToManagedResources(this,param_1);
  if (param_1 != (UPCGManagedResource *)0x0) {
    if ((UPCGComponent *)param_1->_padding_ != this) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4712353729653768501>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x135,"InResource->GetOuter() == this");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_20,L"UPCGComponent",L"ResourceNotOutered",
                          L"Managed resources need to be outered to their PCG component.");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_20.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
      }
    }
    lpCriticalSection = &this->GeneratedResourcesLock;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->GeneratedResourcesInaccessible != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GeneratedResourcesInaccessible",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                           ,0x13b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar7 = &this->GeneratedResources;
    local_28 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar2 + (longlong)(this->GeneratedResources).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->GeneratedResources).ArrayNum;
    piVar1 = &(this->GeneratedResources).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar7->AllocatorInstance,piVar1);
    }
    (this->GeneratedResources).ArrayNum = iVar5 + 1;
    *(UPCGManagedResource **)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28 != (UPCGManagedResource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_28);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// BeginDestroy @ 149ef5690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::BeginDestroy(UPCGComponent *this)

{
  FPCGDataCollection::Reset(&this->GeneratedGraphOutput);
  TSet<TTuple<FString,FPCGDataCollection>,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FPCGDataCollection>,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>,FDefaultSetAllocator>
           *)&this->PerPinGeneratedOutput);
  UActorComponent::BeginDestroy((UActorComponent *)this);
  return;
}

// BeginPlay @ 149ef56f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGComponent::BeginPlay(UPCGComponent *this)

{
  bool bVar1;
  int iVar2;
  APCGPartitionActor *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UWorld *pUVar6;
  UPCGSubsystem *pUVar7;
  UClass *pUVar8;
  UPCGComponent *pUVar9;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_28;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  UActorComponent::BeginPlay((UActorComponent *)this);
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar6 = AActor::GetWorld((AActor *)this->_padding_);
    pUVar7 = UPCGSubsystem::GetInstance(pUVar6);
    if (pUVar7 != (UPCGSubsystem *)0x0) {
      if (((this->bGenerated != false) && ((this->LastGeneratedBounds).IsValid == '\0')) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4712353729653770083>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                             ,0x763,"!bGenerated || LastGeneratedBounds.IsValid"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((AActor *)this->_padding_ == (AActor *)0x0) {
        pUVar7 = (UPCGSubsystem *)0x0;
      }
      else {
        pUVar6 = AActor::GetWorld((AActor *)this->_padding_);
        pUVar7 = UPCGSubsystem::GetInstance(pUVar6);
      }
      UPCGSubsystem::RegisterOrUpdatePCGComponent(pUVar7,this,true);
    }
  }
  bVar4 = this->bProceduralInstancesInUse;
  bVar1 = this->bGenerated;
  pUVar9 = this;
  if (this->bIsComponentLocal != false) {
    this_00 = (APCGPartitionActor *)this->_padding_;
    if (this_00 != (APCGPartitionActor *)0x0) {
      pUVar8 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar8->_padding_)) {
        pUVar9 = APCGPartitionActor::GetOriginalComponent(this_00,this);
        goto LAB_149ef585f;
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653771506>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0xcf2,"PartitionActor");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_149ef585f:
  if (((pUVar9 != (UPCGComponent *)0x0) && (this->bActivated != false)) &&
     (((bVar4 == false & bVar1) == 0 && (this->GenerationTrigger == GenerateOnLoad)))) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    GenerateInternal(this,false,Uninitialized,GenerateOnLoad,&local_28);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    this->bRuntimeGenerated = true;
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CallPostGenerateFunctions @ 149ef6d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGComponent::CallPostGenerateFunctions(UPCGComponent *this,FPCGContext *param_1)

{
  int iVar1;
  longlong *plVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  FField *pFVar5;
  bool bVar6;
  UFunction *pUVar7;
  UPackage *pUVar8;
  ForAnyElementType FVar9;
  FName *pFVar10;
  FName *this_00;
  undefined1 local_res8 [8];
  FName *local_res10;
  FName local_res18;
  FName local_res20;
  TFieldIterator<FProperty> local_c8;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x36a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    this_00 = (FName *)(this->PostGenerateFunctionNames).AllocatorInstance.Data;
    iVar1 = (this->PostGenerateFunctionNames).ArrayNum;
    local_res10 = this_00 + iVar1;
    pFVar10 = local_res10;
LAB_149ef6db0:
    if ((this->PostGenerateFunctionNames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 != pFVar10) {
      pUVar7 = UClass::FindFunctionByName((UClass *)plVar2[2],*this_00,IncludeSuper);
      if (pUVar7 == (UFunction *)0x0) {
        if ((byte)LogPCG._0_1_ < 2) goto LAB_149ef7056;
        local_b0 = *(FName *)(plVar2 + 3);
        ::FName::ToString(&local_b0,&local_58);
        ::FName::ToString(this_00,&local_68);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          FVar9.Data = local_58.Data.AllocatorInstance.Data;
        }
        goto LAB_149ef7048;
      }
      if (pUVar7->NumParms == '\x01') goto LAB_149ef6e71;
      if (1 < (byte)LogPCG._0_1_) {
        local_res18 = *(FName *)(plVar2 + 3);
        ::FName::ToString(&local_res18,&local_98);
        ::FName::ToString(this_00,&local_a8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FVar9.Data = local_98.Data.AllocatorInstance.Data;
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          FVar9.Data = local_98.Data.AllocatorInstance.Data;
        }
        goto LAB_149ef7048;
      }
      goto LAB_149ef7056;
    }
  }
  return;
LAB_149ef6e71:
  local_c8.Field = (FField *)pUVar7->_padding_;
  local_c8.InterfaceIndex = -1;
  local_c8.bIncludeSuper = true;
  local_c8.bIncludeDeprecated = true;
  local_c8.bIncludeInterface = false;
  local_c8.Struct = (UStruct *)pUVar7;
  TFieldIterator<FProperty>::IterateToNext(&local_c8);
  pFVar10 = local_res10;
  pFVar5 = local_c8.Field;
  while (local_res10 = pFVar10, local_c8.Field = pFVar5, pFVar5 != (FField *)0x0) {
    if ((((~(*(byte *)&pFVar5[1].ClassPrivate >> 7) & 1) == 0) &&
        (((uint)(int)pFVar5->ClassPrivate->CastFlags >> 0x14 & 1) != 0)) &&
       (pFVar5 != (FField *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FPCGDataCollection.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_PCG();
        Z_Registration_Info_UScriptStruct_FPCGDataCollection.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataCollection,(UObject *)pUVar8,
                             L"PCGDataCollection");
      }
      pUVar3 = (UScriptStruct *)pFVar5[2].Owner.Container.Field;
      if (pUVar3 == (UScriptStruct *)0x0) {
        bVar6 = Z_Registration_Info_UScriptStruct_FPCGDataCollection.OuterSingleton ==
                (UScriptStruct *)0x0;
      }
      else {
        bVar6 = pUVar3 == Z_Registration_Info_UScriptStruct_FPCGDataCollection.OuterSingleton;
      }
      if (bVar6) {
        (**(code **)(*plVar2 + 0x260))(plVar2,pUVar7,&param_1->InputData);
        this_00 = this_00 + 1;
        pFVar10 = local_res10;
        goto LAB_149ef6db0;
      }
    }
    local_c8.Field = pFVar5->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_c8);
    pFVar10 = local_res10;
    pFVar5 = local_c8.Field;
  }
  if (1 < (byte)LogPCG._0_1_) {
    local_res20 = *(FName *)(plVar2 + 3);
    ::FName::ToString(&local_res20,&local_78);
    ::FName::ToString(this_00,&local_88);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    FVar9.Data = local_78.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      FVar9.Data = local_78.Data.AllocatorInstance.Data;
    }
LAB_149ef7048:
    pFVar10 = local_res10;
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar9.Data);
      pFVar10 = local_res10;
    }
  }
LAB_149ef7056:
  this_00 = this_00 + 1;
  goto LAB_149ef6db0;
}

// CanPartition @ 149ef7110

bool __thiscall UPCGComponent::CanPartition(UPCGComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pUVar2 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_149ef7147;
  }
  lVar3 = 0;
LAB_149ef7147:
  return lVar3 == 0;
}

// CancelGeneration @ 149ef7260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::CancelGeneration(UPCGComponent *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  UPCGSubsystem *pUVar3;
  
  if ((this->CurrentGenerationTask != 0xffffffffffffffff) &&
     ((AActor *)this->_padding_ != (AActor *)0x0)) {
    pUVar1 = AActor::GetWorld((AActor *)this->_padding_);
    pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
    if (pUVar2 != (UPCGSubsystem *)0x0) {
      pUVar2 = (UPCGSubsystem *)0x0;
      if ((AActor *)this->_padding_ != (AActor *)0x0) {
        pUVar1 = AActor::GetWorld((AActor *)this->_padding_);
        pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
      }
      pUVar3 = (UPCGSubsystem *)&this->_padding_;
      if (this == (UPCGComponent *)0x0) {
        pUVar3 = (UPCGSubsystem *)0x0;
      }
      IPCGBaseSubsystem::CancelGeneration
                ((IPCGBaseSubsystem *)&pUVar2->_padding_,(IPCGGraphExecutionSource *)pUVar3);
    }
  }
  return;
}

// Cleanup @ 149ef72e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGComponent::Cleanup(UPCGComponent *this)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->GenerationTrigger == GenerateAtRuntime) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      return;
    }
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    CleanupLocal(this,true,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// Cleanup @ 149ef7340

void __thiscall UPCGComponent::Cleanup(UPCGComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGComponent_Cleanup);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// CleanupLocal @ 149ef7500

void __thiscall UPCGComponent::CleanupLocal(UPCGComponent *this,bool param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  CleanupLocal(this,param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// CleanupLocal @ 149ef7540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
UPCGComponent::CleanupLocal
          (UPCGComponent *this,bool param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  UWorld *pUVar2;
  UPCGSubsystem *this_00;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *pTVar3;
  ulong64 uVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = 0;
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    return 0xffffffffffffffff;
  }
  pUVar2 = AActor::GetWorld((AActor *)this->_padding_);
  this_00 = UPCGSubsystem::GetInstance(pUVar2);
  if (this_00 == (UPCGSubsystem *)0x0) {
    return 0xffffffffffffffff;
  }
  if (this->CurrentCleanupTask != 0xffffffffffffffff) {
    return 0xffffffffffffffff;
  }
  bVar5 = false;
  if (((this->bGenerated == false) &&
      (bVar5 = false, this->CurrentGenerationTask == 0xffffffffffffffff)) &&
     ((this->GeneratedResources).ArrayNum == 0)) {
    pTVar3 = UPCGSubsystem::GetPCGComponentPartitionActorMappings(this_00,&local_88,this);
    bVar5 = true;
    if (*(int *)&(pTVar3->Elements).field_0x8 == *(int *)&(pTVar3->Elements).field_0x34) {
      bVar1 = true;
      goto LAB_149ef75f1;
    }
  }
  bVar1 = false;
LAB_149ef75f1:
  if (bVar5) {
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  if (bVar1) {
    return 0xffffffffffffffff;
  }
  PCGGeneratedResourcesLogging::LogCleanupLocal(this,param_1);
  uVar4 = UPCGSubsystem::ScheduleCleanup(this_00,this,param_1,param_2);
  this->CurrentCleanupTask = uVar4;
  return uVar4;
}

// CleanupLocalDeleteAllGeneratedObjects @ 149ef7680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPCGComponent::CleanupLocalDeleteAllGeneratedObjects
          (UPCGComponent *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  UWorld *pUVar3;
  UPCGSubsystem *this_00;
  UClass *pUVar4;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  UPCGComponent **local_30;
  UPCGComponent *local_28;
  UPCGSubsystem *local_20;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_18;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_10;
  
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    return;
  }
  pUVar3 = AActor::GetWorld((AActor *)this->_padding_);
  this_00 = UPCGSubsystem::GetInstance(pUVar3);
  if (this_00 == (UPCGSubsystem *)0x0) {
    return;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_18 = &local_48;
  local_28 = this;
  local_20 = this_00;
  local_10 = param_1;
  `UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>::operator()
            (&local_28,this);
  if (this->bIsComponentPartitioned != false) {
    lVar2 = this->_padding_;
    if (lVar2 != 0) {
      pUVar4 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_149ef774e;
    }
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>,void,UPCGComponent_*>
               ::Call;
    UPCGSubsystem::ForAllRegisteredLocalComponents
              (this_00,this,(TFunctionRef<void___cdecl(UPCGComponent_*)> *)&local_38);
  }
LAB_149ef774e:
  CleanupLocal(this,true,&local_48);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// CleanupLocalImmediate @ 149ef7790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGComponent::CleanupLocalImmediate(UPCGComponent *this,bool param_1,bool param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  UPCGGraphInstance *pUVar3;
  UPCGManagedResource *pUVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UWorld *pUVar10;
  UPCGGraph *this_00;
  APCGWorldActor *pAVar11;
  UPCGGraph *pUVar12;
  UPCGSubsystem *pUVar13;
  UPCGGraph *pUVar14;
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar15;
  UClass *pUVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_148 [32];
  bool local_118;
  char local_117;
  uint local_114;
  UPCGGraph *local_110;
  UPCGComponent *local_108;
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> local_100;
  TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
  local_e8;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar2 = &this->GeneratedResources;
  uVar20 = (uint)param_1;
  local_114 = (uint)param_1;
  local_117 = param_2;
  PCGGeneratedResourcesLogging::LogCleanupLocalImmediate
            (this,param_1,(TArray<UPCGManagedResource_*,TSizedDefaultAllocator<32>_> *)pTVar2);
  pUVar14 = (UPCGGraph *)0x0;
  this_00 = pUVar14;
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar10 = AActor::GetWorld((AActor *)this->_padding_);
    this_00 = (UPCGGraph *)UPCGSubsystem::GetInstance(pUVar10);
  }
  local_118 = true;
  local_110 = this_00;
  if (this_00 != (UPCGGraph *)0x0) {
    local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0xd;
    pAVar11 = UPCGSubsystem::GetPCGWorldActor((UPCGSubsystem *)this_00);
    pUVar3 = (this->GraphInstance).field0_0x0.DebugPtr;
    pUVar12 = pUVar14;
    if (pUVar3 != (UPCGGraphInstance *)0x0) {
      pUVar12 = (UPCGGraph *)(**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3);
    }
    bVar7 = PCGHelpers::GetGenerationGridSizes(pUVar12,pAVar11,&local_98,&local_118);
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4712353729653769745>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                           ,0x611,
                           "PCGHelpers::GetGenerationGridSizes(GetGraph(), Subsystem->GetPCGWorldActor(), GridSizes, bHasUnbounded)"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
  }
  if ((this->CurrentGenerationTask != 0xffffffffffffffff) &&
     ((AActor *)this->_padding_ != (AActor *)0x0)) {
    pUVar10 = AActor::GetWorld((AActor *)this->_padding_);
    pUVar13 = UPCGSubsystem::GetInstance(pUVar10);
    if (pUVar13 != (UPCGSubsystem *)0x0) {
      if ((AActor *)this->_padding_ != (AActor *)0x0) {
        pUVar10 = AActor::GetWorld((AActor *)this->_padding_);
        pUVar14 = (UPCGGraph *)UPCGSubsystem::GetInstance(pUVar10);
      }
      IPCGBaseSubsystem::CancelGeneration
                ((IPCGBaseSubsystem *)&pUVar14->OutputNode,
                 (IPCGGraphExecutionSource *)&this->_padding_);
    }
  }
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  if (!param_1) {
    bVar7 = UPCGManagedResource::DebugForcePurgeAllResourcesOnGenerate();
    uVar20 = (uint)bVar7;
    local_114 = uVar20;
  }
  if ((&this->GeneratedResourcesLock == (FWindowsRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->GeneratedResourcesLock);
  if ((this->GeneratedResourcesInaccessible != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GeneratedResourcesInaccessible",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x622,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = local_114;
  iVar17 = (this->GeneratedResources).ArrayNum + -1;
  if (-1 < iVar17) {
    lVar18 = (longlong)iVar17;
    lVar19 = lVar18 * 8;
    do {
      if (((this->GeneratedResources).ArrayNum <= iVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar4 = *(UPCGManagedResource **)((pTVar2->AllocatorInstance).Data + lVar19);
      PCGGeneratedResourcesLogging::LogCleanupLocalImmediateResource(this,pUVar4);
      if ((pUVar4 == (UPCGManagedResource *)0x0) ||
         (cVar8 = (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4,uVar6 & 0xff,&local_e8),
         cVar8 != '\0')) {
        if (((this->GeneratedResources).ArrayNum <= iVar17) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + lVar18 * 8;
        iVar9 = ((this->GeneratedResources).ArrayNum - iVar17) + -1;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->GeneratedResources).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->GeneratedResources).ArrayNum,
                   &(this->GeneratedResources).ArrayMax);
      }
      lVar18 = lVar18 + -1;
      lVar19 = lVar19 + -8;
      iVar17 = iVar17 + -1;
      this_00 = local_110;
      param_2 = (bool)local_117;
      uVar20 = local_114;
    } while (-1 < iVar17);
  }
  if (&this->GeneratedResourcesLock != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->GeneratedResourcesLock);
  }
  pTVar15 = TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
            ::Array(&local_e8,&local_100);
  pUVar10 = (UWorld *)this->_padding_;
  if (pUVar10 == (UWorld *)0x0) {
    pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  UPCGActorHelpers::DeleteActors(pUVar10,pTVar15);
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  this->CurrentCleanupTask = 0xffffffffffffffff;
  if (SUB41(uVar20,0) != false) {
    this->bGenerated = false;
    ClearGraphGeneratedOutput(this,false);
    ClearPerPinGeneratedOutput(this);
    TMulticastDelegate<void___cdecl(UPCGComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPCGGraphCleanedDelegate,this);
    local_108 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnPCGGraphCleanedExternal,&local_108);
  }
  if (((this_00 != (UPCGGraph *)0x0) && (param_2 != false)) &&
     (this->bIsComponentPartitioned != false)) {
    lVar19 = this->_padding_;
    if (lVar19 != 0) {
      pUVar16 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
      lVar19 = *(longlong *)(lVar19 + 0x10);
      iVar17 = (int)pUVar16->_padding_;
      if ((iVar17 <= *(int *)(lVar19 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar17 * 8) ==
          &pUVar16->_padding_)) goto LAB_149ef7be8;
    }
    UPCGSubsystem::CleanupLocalComponentsImmediate((UPCGSubsystem *)this_00,this,SUB41(uVar20,0));
  }
LAB_149ef7be8:
  PCGGeneratedResourcesLogging::LogCleanupLocalImmediateFinished
            (this,(TArray<UPCGManagedResource_*,TSizedDefaultAllocator<32>_> *)pTVar2);
  return;
}

// CleanupUnusedManagedResources @ 149ef7c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::CleanupUnusedManagedResources(UPCGComponent *this)

{
  int *piVar1;
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UPCGManagedResource *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar10;
  UWorld *pUVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStackY_e8 [32];
  FName local_b8;
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> local_b0;
  FString local_a0;
  TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar2 = &this->GeneratedResources;
  PCGGeneratedResourcesLogging::LogCleanupUnusedManagedResources
            (this,(TArray<UPCGManagedResource_*,TSizedDefaultAllocator<32>_> *)pTVar2);
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  if ((&this->GeneratedResourcesLock == (FWindowsRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->GeneratedResourcesLock);
  if ((this->GeneratedResourcesInaccessible != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GeneratedResourcesInaccessible",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x712,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = (this->GeneratedResources).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13;
    lVar15 = lVar14 * 8;
    do {
      uVar9 = 0;
      if ((int)uVar13 < (this->GeneratedResources).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar4 = *(UPCGManagedResource **)((pTVar2->AllocatorInstance).Data + lVar15);
      if ((pUVar4 == (UPCGManagedResource *)0x0) || (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) {
        PCGGeneratedResourcesLogging::LogCleanupUnusedManagedResourcesResource
                  (this,(UPCGManagedResource *)0x0);
        if ((this->_padding_ != 0) && (1 < (byte)LogPCG._0_1_)) {
          local_b8 = *(FName *)(this->_padding_ + 0x18);
          ::FName::ToString(&local_b8,&local_a0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
LAB_149ef7e5d:
        uVar9 = 0;
        if ((int)uVar13 < (this->GeneratedResources).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->GeneratedResources).ArrayNum;
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        iVar12 = ~uVar13 + iVar3;
        if (1 < iVar12) {
          iVar12 = 1;
        }
        if (iVar12 != 0) {
          memmove(pFVar5 + lVar14 * 8,pFVar5 + (longlong)(iVar3 - iVar12) * 8,(longlong)iVar12 << 3)
          ;
        }
        piVar1 = &(this->GeneratedResources).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->GeneratedResources).ArrayNum,
                   &(this->GeneratedResources).ArrayMax);
      }
      else {
        PCGGeneratedResourcesLogging::LogCleanupUnusedManagedResourcesResource(this,pUVar4);
        cVar8 = (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4);
        if (cVar8 != '\0') goto LAB_149ef7e5d;
      }
      lVar14 = lVar14 + -1;
      lVar15 = lVar15 + -8;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  if (&this->GeneratedResourcesLock != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->GeneratedResourcesLock);
  }
  pTVar10 = TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
            ::Array(&local_88,&local_b0);
  pUVar11 = (UWorld *)this->_padding_;
  if (pUVar11 == (UWorld *)0x0) {
    pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  UPCGActorHelpers::DeleteActors(pUVar11,pTVar10);
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  PCGGeneratedResourcesLogging::LogCleanupUnusedManagedResourcesFinished
            (this,(TArray<UPCGManagedResource_*,TSizedDefaultAllocator<32>_> *)pTVar2);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// Cleanup_Implementation @ 149ef7ff0

void __thiscall UPCGComponent::Cleanup_Implementation(UPCGComponent *this,bool param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  CleanupLocal(this,param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ClearGraphGeneratedOutput @ 149ef8030

void __thiscall UPCGComponent::ClearGraphGeneratedOutput(UPCGComponent *this,bool param_1)

{
  int *piVar1;
  FPCGDataCollection *this_00;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FPCGTaggedData *pFVar5;
  UPackage *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  this_00 = &this->GeneratedGraphOutput;
  FPCGDataCollection::ClearUsage(this_00,ComponentOutputData);
  iVar2 = (this->GeneratedGraphOutput).TaggedData.ArrayNum;
  pFVar8 = (this_00->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x78;
  while( true ) {
    if ((this->GeneratedGraphOutput).TaggedData.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    plVar3 = *(longlong **)pFVar8;
    if ((plVar3 != (longlong *)0x0) && ((UPCGComponent *)plVar3[4] == this)) {
      pcVar4 = *(code **)(*plVar3 + 0x170);
      pUVar6 = GetTransientPackage();
      (*pcVar4)(plVar3,0,pUVar6,0x34);
    }
    pFVar8 = pFVar8 + 0x78;
  }
  piVar1 = &(this->GeneratedGraphOutput).TaggedData.ArrayMax;
  pFVar5 = (FPCGTaggedData *)(this_00->TaggedData).AllocatorInstance.Data;
  iVar2 = (this->GeneratedGraphOutput).TaggedData.ArrayNum;
  if ((this->GeneratedGraphOutput).TaggedData.ArrayMax < 0) {
    DestructItems<FPCGTaggedData,int>(pFVar5,iVar2);
    (this->GeneratedGraphOutput).TaggedData.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)this_00,0,piVar1);
      (this->GeneratedGraphOutput).bCancelExecution = false;
      return;
    }
  }
  else {
    DestructItems<FPCGTaggedData,int>(pFVar5,iVar2);
    (this->GeneratedGraphOutput).TaggedData.ArrayNum = 0;
  }
  (this->GeneratedGraphOutput).bCancelExecution = false;
  return;
}

// ClearPCGLink @ 149ef81b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UPCGComponent::ClearPCGLink(UPCGComponent *this,UClass *param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  UWorld *pUVar4;
  AActor *this_00;
  UFunction *pUVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  TTransform<double> *pTVar8;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  FName local_1a0;
  FString local_198;
  undefined1 local_188 [112];
  undefined1 local_118 [240];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((((this->bGenerated == false) || (this->_padding_ == 0)) ||
      ((this->_padding_ == 0 &&
       (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar4 == (UWorld *)0x0)))) ||
     ((this->CurrentGenerationTask != 0xffffffffffffffff ||
      (this->CurrentCleanupTask != 0xffffffffffffffff)))) {
    this_00 = (AActor *)0x0;
  }
  else {
    pUVar4 = (UWorld *)this->_padding_;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_188);
    if (param_1 == (UClass *)0x0) {
      param_1 = Z_Construct_UClass_AActor_NoRegister();
    }
    ::FString::FString(&local_198,L"PCGStamp");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_198.Data.ArrayNum != 0) {
      FVar7.Data = local_198.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_1a0,(wchar_t *)FVar7.Data);
    local_188._0_4_ = local_1a0.ComparisonIndex.Value;
    local_188._4_4_ = local_1a0.Number;
    local_188[0x33] = Requested;
    local_188._32_8_ = AActor::GetLevel((AActor *)this->_padding_);
    lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
    if (lVar1 == 0) {
      pTVar8 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar8 = (TTransform<double> *)(lVar1 + 0x1f0);
    }
    local_1a0 = (FName)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((FName)param_1 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    UPCGActorHelpers::FSpawnDefaultActorParams::FSpawnDefaultActorParams
              ((FSpawnDefaultActorParams *)local_118,pUVar4,(TSubclassOf<AActor>)&local_1a0,pTVar8,
               (FActorSpawnParameters *)local_188);
    this_00 = UPCGActorHelpers::SpawnDefaultActor((FSpawnDefaultActorParams *)local_118);
    bVar2 = MoveResourcesToNewActor(this,this_00,false);
    bVar3 = IsPartitioned(this);
    if (!bVar3) {
      if (bVar2) {
        local_1a8[0] = 1;
        pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGComponent_Cleanup);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar5,local_1a8);
      }
      else {
        AActor::Destroy(this_00,false,true);
        this_00 = (AActor *)0x0;
      }
    }
    if (local_118._176_8_ != 0) {
      plVar6 = (longlong *)(local_118 + 0xc0);
      if ((longlong *)local_118._216_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_118._216_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_188._64_8_ != 0) {
      plVar6 = (longlong *)(local_188 + 0x50);
      if ((longlong *)local_188._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_188._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return this_00;
}

// ClearPerPinGeneratedOutput @ 149ef8420

void __thiscall UPCGComponent::ClearPerPinGeneratedOutput(UPCGComponent *this)

{
  byte *pbVar1;
  FPlatformRWLock *SRWLock;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  longlong *plVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  code *local_78;
  undefined1 *local_70;
  undefined4 local_4c;
  
  SRWLock = &this->PerPinGeneratedOutputLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar15 = 0;
  iVar4 = *(int *)&(this->PerPinGeneratedOutput).field_0x28;
  TStack_a0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->PerPinGeneratedOutput).field_0x10;
  iVar17 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->PerPinGeneratedOutput).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_a0.Array;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_149ef8510;
      uVar13 = puVar18[lVar12 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = (int)lVar12 + -1 + iVar17;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_149ef8510:
  puVar2 = &(this->PerPinGeneratedOutput).field_0x10;
  uVar13 = *(uint *)&(this->PerPinGeneratedOutput).field_0x28;
  TStack_a0.CurrentBitIndex = iVar10;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  uVar20 = uVar13 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar9,iVar15);
  iVar15 = (int)uVar13 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = iVar17;
  uStack_80 = CONCAT44(uStack_ac,
                       *(int *)&(this->PerPinGeneratedOutput).field_0x8 -
                       *(int *)&(this->PerPinGeneratedOutput).field_0x34);
  local_res20 = uVar13;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->PerPinGeneratedOutput).field_0x28;
  if (uVar13 != uVar9) {
    puVar16 = *(undefined1 **)&(this->PerPinGeneratedOutput).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      local_res20 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_149ef861c;
      uVar13 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12 + -1 + uVar20;
    if ((int)uVar9 < (int)local_res20) {
      local_res20 = uVar9;
    }
  }
LAB_149ef861c:
  while( true ) {
    uVar9 = local_res20;
    if (*(int *)&(this->PerPinGeneratedOutput).field_0x8 -
        *(int *)&(this->PerPinGeneratedOutput).field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FPCGDataCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_a0.CurrentBitIndex == uVar9) &&
       (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    lVar12 = *(longlong *)&(this->PerPinGeneratedOutput).field_0x0;
    iVar4 = *(int *)(lVar12 + 0x18 + (longlong)TStack_a0.CurrentBitIndex * 0x48);
    lVar12 = lVar12 + (longlong)TStack_a0.CurrentBitIndex * 0x48;
    plVar14 = *(longlong **)(lVar12 + 0x10);
    plVar19 = plVar14 + (longlong)iVar4 * 0xf;
    while( true ) {
      if (*(int *)(lVar12 + 0x18) != iVar4) {
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (plVar14 == plVar19) break;
      plVar5 = (longlong *)*plVar14;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        pbVar1 = (byte *)((longlong)plVar5 + 0x41);
        *pbVar1 = *pbVar1 & 0xfb;
        pTVar7 = PCGSystemSwitches::CVarReleaseTransientResourcesEarly.Ref;
        UNLOCK();
        if (*pbVar1 == 0) {
          bVar8 = IsInParallelGameThread();
          if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
            lVar11 = 0;
          }
          else {
            lVar11 = 1;
          }
          if ((pTVar7->ShadowedValue[lVar11] == false) || (*(int *)((longlong)plVar5 + 0x44) == 0))
          {
            local_70 = local_res18;
            local_78 = UE::Core::Private::Function::
                       TFunctionRefCaller<`UPCGData::ClearUsage'::__l5::<lambda_1>,void,UPCGData_const_*>
                       ::Call;
            (**(code **)(*plVar5 + 0x2c0))(plVar5,&local_78);
          }
        }
      }
      plVar14 = plVar14 + 0xf;
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  TSet<TTuple<FString,FPCGDataCollection>,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FPCGDataCollection>,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>,FDefaultSetAllocator>
           *)&this->PerPinGeneratedOutput);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// CreateActorPCGData @ 149ef9860

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGData * __thiscall
UPCGComponent::CreateActorPCGData(UPCGComponent *this,AActor *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UPCGUnionData *this_00;
  UClass *pUVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FObjectPtr_u_0 *pFVar8;
  wchar_t *pwVar9;
  FObjectPtr_u_0 local_res20;
  FString local_68;
  FString local_58;
  FPCGDataCollection local_48;
  
  this_00 = (UPCGUnionData *)0x0;
  CreateActorPCGDataCollection(&local_48,param_1,this,Any,param_2,(bool *)0x0);
  if (local_48.TaggedData.ArrayNum < 2) {
    if (local_48.TaggedData.ArrayNum == 1) {
      this_00 = *(UPCGUnionData **)local_48.TaggedData.AllocatorInstance.Data;
    }
    if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
    }
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    this_00 = NewObject<UPCGUnionData>(pUVar3);
    iVar1 = local_48.TaggedData.ArrayNum;
    pFVar8 = (FObjectPtr_u_0 *)
             (local_48.TaggedData.AllocatorInstance.Data +
             (longlong)local_48.TaggedData.ArrayNum * 0x78);
    FVar6.Data = local_48.TaggedData.AllocatorInstance.Data;
    while( true ) {
      if (local_48.TaggedData.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res20);
      }
      if ((FObjectPtr_u_0 *)FVar6.Data == pFVar8) break;
      local_res20 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar6.Data;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSpatialData *)local_res20.Handle == (UPCGSpatialData *)0x0) goto LAB_149ef99a6;
        UE::GC::MarkAsReachable(local_res20.Handle);
      }
      if ((UPCGSpatialData *)local_res20.Handle == (UPCGSpatialData *)0x0) {
LAB_149ef99a6:
        pFVar5 = GetTypeName<UPCGSpatialData_const_>(&local_58);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar7);
      }
      pUVar4 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar4);
      if ((!bVar2) || ((UPCGSpatialData *)local_res20.Handle == (UPCGSpatialData *)0x0)) {
        pFVar5 = GetTypeName<UPCGSpatialData_const_>(&local_68);
        pwVar7 = L"";
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar5 = GetFullNameForCastLogError<UPCGData_const_>
                           (&local_58,(UPCGData *)local_res20.Handle);
        if ((pFVar5->Data).ArrayNum != 0) {
          pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar7,pwVar9);
      }
      UPCGUnionData::AddData(this_00,(UPCGSpatialData *)local_res20.Handle);
      FVar6.Data = FVar6.Data + 0x78;
    }
    if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data,
             local_48.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.TaggedData.AllocatorInstance.Data);
  }
  return (UPCGData *)this_00;
}

// CreateActorPCGData @ 149ef9a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::CreateActorPCGData(UPCGComponent *this)

{
  UPCGData *pUVar1;
  
  pUVar1 = CreateActorPCGData(this,(AActor *)this->_padding_,this->bParseActorComponents);
  return pUVar1;
}

// CreateActorPCGData @ 149ef9a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGData * __cdecl
UPCGComponent::CreateActorPCGData(AActor *param_1,UPCGComponent *param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UPCGUnionData *this;
  UClass *pUVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FObjectPtr_u_0 *pFVar8;
  wchar_t *pwVar9;
  FObjectPtr_u_0 local_res20;
  FString local_58;
  FString local_48;
  FPCGDataCollection local_38;
  
  this = (UPCGUnionData *)0x0;
  CreateActorPCGDataCollection(&local_38,param_1,param_2,Any,param_3,(bool *)0x0);
  if (local_38.TaggedData.ArrayNum < 2) {
    if (local_38.TaggedData.ArrayNum == 1) {
      this = *(UPCGUnionData **)local_38.TaggedData.AllocatorInstance.Data;
    }
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    this = NewObject<UPCGUnionData>(pUVar3);
    iVar1 = local_38.TaggedData.ArrayNum;
    pFVar8 = (FObjectPtr_u_0 *)
             (local_38.TaggedData.AllocatorInstance.Data +
             (longlong)local_38.TaggedData.ArrayNum * 0x78);
    FVar6.Data = local_38.TaggedData.AllocatorInstance.Data;
    while( true ) {
      if (local_38.TaggedData.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res20);
      }
      if ((FObjectPtr_u_0 *)FVar6.Data == pFVar8) break;
      local_res20 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar6.Data;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSpatialData *)local_res20.Handle == (UPCGSpatialData *)0x0) goto LAB_149ef9b84;
        UE::GC::MarkAsReachable(local_res20.Handle);
      }
      if ((UPCGSpatialData *)local_res20.Handle == (UPCGSpatialData *)0x0) {
LAB_149ef9b84:
        pFVar5 = GetTypeName<UPCGSpatialData_const_>(&local_48);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar7);
      }
      pUVar4 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar4);
      if ((!bVar2) || ((UPCGSpatialData *)local_res20.Handle == (UPCGSpatialData *)0x0)) {
        pFVar5 = GetTypeName<UPCGSpatialData_const_>(&local_58);
        pwVar7 = L"";
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar5 = GetFullNameForCastLogError<UPCGData_const_>
                           (&local_48,(UPCGData *)local_res20.Handle);
        if ((pFVar5->Data).ArrayNum != 0) {
          pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar7,pwVar9);
      }
      UPCGUnionData::AddData(this,(UPCGSpatialData *)local_res20.Handle);
      FVar6.Data = FVar6.Data + 0x78;
    }
  }
  if (local_38.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data,
             local_38.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_38.TaggedData.AllocatorInstance.Data);
  }
  return (UPCGData *)this;
}

// CreateActorPCGDataCollection @ 149ef9c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataCollection * __cdecl
UPCGComponent::CreateActorPCGDataCollection
          (FPCGDataCollection *__return_storage_ptr__,AActor *param_1,UPCGComponent *param_2,
          EPCGDataType param_3,bool param_4,bool *param_5)

{
  int *piVar1;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType FVar3;
  FPCGModule *pFVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  FPCGGetDataFunctionRegistryParams local_78;
  FPCGGetDataFunctionRegistryOutput local_60;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3368,"UPCGComponent::CreateActorPCGData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
               ,0xd28);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3368);
  }
  local_78.ComponentSelector = (FPCGComponentSelectorSettings *)0x0;
  local_78.bParseActor = param_4;
  local_60.Collection.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Collection.TaggedData.ArrayNum = 0;
  local_60.Collection.TaggedData.ArrayMax = 0;
  local_60.Collection.bCancelExecutionOnEmpty = false;
  local_60.Collection.bCancelExecution = false;
  local_60.Collection.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Collection.DataCrcs.ArrayNum = 0;
  local_60.Collection.DataCrcs.ArrayMax = 0;
  local_60.Collection.InactiveOutputPinBitmask = 0;
  local_60.bSanitizedTagAttributeNames = false;
  local_78.bIgnorePCGGeneratedComponents = true;
  local_78.bAddActorTags = true;
  local_78.SourceComponent = param_2;
  local_78.DataTypeFilter = param_3;
  pFVar4 = FPCGModule::GetPCGModuleChecked();
  FPCGGetDataFunctionRegistry::GetDataFromActor
            (&pFVar4->GetDataFunctionRegistry,(FPCGContext *)0x0,&local_78,param_1,&local_60);
  FVar3.Data = local_60.Collection.TaggedData.AllocatorInstance.Data;
  iVar5 = local_60.Collection.TaggedData.ArrayNum;
  piVar1 = &(__return_storage_ptr__->TaggedData).ArrayMax;
  (__return_storage_ptr__->TaggedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TaggedData).ArrayNum = local_60.Collection.TaggedData.ArrayNum;
  if (local_60.Collection.TaggedData.ArrayNum == 0) {
    *piVar1 = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,local_60.Collection.TaggedData.ArrayNum,0,
               (ForAnyElementType *)__return_storage_ptr__,local_60.Collection.TaggedData.ArrayNum,
               piVar1);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              ((__return_storage_ptr__->TaggedData).AllocatorInstance.Data,
               (FPCGTaggedData *)FVar3.Data,iVar5);
    iVar5 = local_60.Collection.TaggedData.ArrayNum;
  }
  FVar3.Data = local_60.Collection.DataCrcs.AllocatorInstance.Data;
  pTVar2 = &__return_storage_ptr__->DataCrcs;
  lVar6 = (longlong)local_60.Collection.DataCrcs.ArrayNum;
  __return_storage_ptr__->bCancelExecutionOnEmpty = local_60.Collection.bCancelExecutionOnEmpty;
  __return_storage_ptr__->bCancelExecution = local_60.Collection.bCancelExecution;
  piVar1 = &(__return_storage_ptr__->DataCrcs).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DataCrcs).ArrayNum = local_60.Collection.DataCrcs.ArrayNum;
  if (local_60.Collection.DataCrcs.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_60.Collection.DataCrcs.ArrayNum,0,&pTVar2->AllocatorInstance,
               local_60.Collection.DataCrcs.ArrayNum,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,FVar3.Data,lVar6 << 3);
    iVar5 = local_60.Collection.TaggedData.ArrayNum;
  }
  __return_storage_ptr__->InactiveOutputPinBitmask = local_60.Collection.InactiveOutputPinBitmask;
  if (local_60.Collection.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Collection.DataCrcs.AllocatorInstance.Data);
    iVar5 = local_60.Collection.TaggedData.ArrayNum;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_60.Collection.TaggedData.AllocatorInstance.Data,iVar5);
  if ((FPCGTaggedData *)local_60.Collection.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_60.Collection.TaggedData.AllocatorInstance.Data);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// CreateCleanupTask @ 149ef9e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
UPCGComponent::CreateCleanupTask
          (UPCGComponent *this,bool param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  ulong64 *puVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  int iVar6;
  UWorld *pUVar7;
  UPCGSubsystem *pUVar8;
  ulong64 uVar9;
  UPCGSubsystem *this_00;
  longlong *plVar10;
  uint uVar11;
  FWeakObjectPtr local_res8;
  bool local_res10;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_res18;
  longlong *local_res20;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_e8;
  FWeakObjectPtr local_d8;
  FName local_d0;
  UPCGComponent *local_c8;
  UWorld *local_c0;
  FString local_b8;
  code *local_a8 [5];
  undefined8 *local_80;
  code *local_78 [5];
  undefined8 *local_50;
  
  this_00 = (UPCGSubsystem *)0x0;
  local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10 = param_1;
  local_res18 = param_2;
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar7 = AActor::GetWorld((AActor *)this->_padding_);
    pUVar8 = UPCGSubsystem::GetInstance(pUVar7);
    if (pUVar8 != (UPCGSubsystem *)0x0) {
      pUVar8 = this_00;
      if ((AActor *)this->_padding_ != (AActor *)0x0) {
        pUVar7 = AActor::GetWorld((AActor *)this->_padding_);
        pUVar8 = UPCGSubsystem::GetInstance(pUVar7);
      }
      bVar5 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                        ((IPCGBaseSubsystem *)&pUVar8->_padding_);
      if ((bVar5) && (4 < (byte)LogPCG._0_1_)) {
        pUVar8 = this_00;
        if (this->_padding_ != 0) {
          local_d0 = *(FName *)(this->_padding_ + 0x18);
          ::FName::ToString(&local_d0,&local_b8);
          pUVar8 = (UPCGSubsystem *)&DAT_00000001;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((pUVar8 != (UPCGSubsystem *)0x0) &&
           (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if ((((this->bGenerated == false) && ((this->GeneratedResources).ArrayNum == 0)) &&
      (this->CurrentGenerationTask == 0xffffffffffffffff)) ||
     (this->CurrentCleanupTask != 0xffffffffffffffff)) {
    return 0xffffffffffffffff;
  }
  PCGGeneratedResourcesLogging::LogCreateCleanupTask(this,local_res10);
  puVar1 = &this->CurrentGenerationTask;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if (*puVar1 != 0xffffffffffffffff) {
    uVar11 = param_2->ArrayNum + 1;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (0 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
    }
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
    Append<unsigned___int64,TSizedDefaultAllocator<32>_>(&local_e8,param_2);
    if (((local_e8.AllocatorInstance.Data <= puVar1) &&
        (puVar1 < local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
    iVar6 = local_e8.ArrayNum;
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    local_e8.ArrayNum = iVar6 + 1;
    *(ulong64 *)(local_e8.AllocatorInstance.Data + (longlong)iVar6 * 8) = *puVar1;
    local_res18 = &local_e8;
  }
  pUVar8 = ::operator_new(0x68);
  if (pUVar8 == (UPCGSubsystem *)0x0) {
    plVar10 = (longlong *)&DAT_00000010;
    local_res20 = (longlong *)&DAT_00000010;
    pUVar8 = this_00;
  }
  else {
    *(undefined4 *)&pUVar8->_padding_ = 1;
    plVar10 = &pUVar8->_padding_;
    *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = 1;
    pUVar8->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TIntrusiveReferenceController<`UPCGComponent::CreateCleanupTask'::`2'::FCleanupContext,1>
          ::_vftable_;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->PCGWorldActor = (APCGWorldActor *)0x0;
    *(undefined1 *)&pUVar8->_padding_ = 1;
    *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = 0xffffffff;
    *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = 0x80;
    *(undefined4 *)&pUVar8->_padding_ = 0xffffffff;
    local_res20 = plVar10;
    if ((plVar10 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
    LOCK();
    *(int *)&pUVar8->_padding_ = (int)pUVar8->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_c8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_c8);
  pUVar7 = (UWorld *)this->_padding_;
  if (pUVar7 == (UWorld *)0x0) {
    pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_d8.ObjectIndex = 0;
  local_d8.ObjectSerialNumber = 0;
  local_c0 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_c0);
  FVar4 = local_d8;
  FVar3 = local_res8;
  if (pUVar8 != (UPCGSubsystem *)0x0) {
    LOCK();
    *(int *)&pUVar8->_padding_ = (int)pUVar8->_padding_ + 1;
    UNLOCK();
    LOCK();
    *(int *)&pUVar8->_padding_ = (int)pUVar8->_padding_ + 1;
    UNLOCK();
    local_res20 = plVar10;
  }
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar7 = AActor::GetWorld((AActor *)this->_padding_);
    this_00 = UPCGSubsystem::GetInstance(pUVar7);
  }
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x20,8);
  *local_80 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_80[1] = local_res20;
  local_80[2] = pUVar8;
  if (pUVar8 != (UPCGSubsystem *)0x0) {
    LOCK();
    *(int *)&pUVar8->_padding_ = (int)pUVar8->_padding_ + 1;
    UNLOCK();
  }
  *(FWeakObjectPtr *)(local_80 + 3) = FVar3;
  if (local_80 + 1 != (undefined8 *)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_1>,void>::
                  Call;
  }
  local_78[0] = (code *)0x0;
  local_50 = FMemory::Malloc(0x30,8);
  local_50[1] = local_res20;
  *local_50 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::`2'::<lambda_2>,0,1>::
               _vftable_;
  local_50[2] = pUVar8;
  if (pUVar8 != (UPCGSubsystem *)0x0) {
    LOCK();
    *(int *)&pUVar8->_padding_ = (int)pUVar8->_padding_ + 1;
    UNLOCK();
  }
  *(FWeakObjectPtr *)(local_50 + 4) = FVar4;
  *(bool *)(local_50 + 5) = local_res10;
  *(FWeakObjectPtr *)(local_50 + 3) = FVar3;
  if (local_50 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_2>,bool>::
                  Call;
  }
  uVar9 = UPCGSubsystem::ScheduleGeneric
                    (this_00,(TFunction<bool___cdecl(void)> *)local_78,
                     (TFunction<void___cdecl(void)> *)local_a8,this,local_res18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar8);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return uVar9;
}

// CreateGenerateTask @ 149efa6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
UPCGComponent::CreateGenerateTask
          (UPCGComponent *this,bool param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  ulong64 *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  UWorld *pUVar5;
  UPCGSubsystem *this_00;
  uint uVar6;
  undefined1 auStackY_c8 [32];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_78;
  UPCGComponent *local_68;
  TBox<double> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (this->CurrentGenerationTask == 0xffffffffffffffff) {
    this_00 = (UPCGSubsystem *)0x0;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayMax = 0;
    local_78.ArrayNum = 0;
    if (this->bGenerated != false) {
      CleanupLocal(this,false,param_2);
    }
    puVar1 = &this->CurrentCleanupTask;
    if (*puVar1 != 0xffffffffffffffff) {
      uVar6 = param_2->ArrayNum + 1;
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if (local_78.ArrayMax < (int)uVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar6,&local_78.AllocatorInstance,local_78.ArrayNum,&local_78.ArrayMax);
      }
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
      Append<unsigned___int64,TSizedDefaultAllocator<32>_>(&local_78,param_2);
      if (((local_78.AllocatorInstance.Data <= puVar1) &&
          (puVar1 < local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      if (local_78.ArrayNum == local_78.ArrayMax) {
        local_78.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      param_2 = &local_78;
      *(ulong64 *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8) = *puVar1;
      local_78.ArrayNum = local_78.ArrayNum + 1;
    }
    GetGridBounds(this,&local_60);
    if (local_60.IsValid == '\0') {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      CleanupUnusedManagedResources(this);
      uVar4 = 0xffffffffffffffff;
      this->CurrentGenerationTask = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      TMulticastDelegate<void___cdecl(UPCGComponent_*),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnPCGGraphCancelledDelegate,this);
      local_68 = this;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnPCGGraphCancelledExternal,&local_68);
    }
    else {
      if ((AActor *)this->_padding_ != (AActor *)0x0) {
        pUVar5 = AActor::GetWorld((AActor *)this->_padding_);
        this_00 = UPCGSubsystem::GetInstance(pUVar5);
      }
      uVar4 = UPCGSubsystem::ScheduleGraph(this_00,this,param_2);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}

// CreateInputPCGData @ 149efa8d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::CreateInputPCGData(UPCGComponent *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UPCGData *pUVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UPCGSubsystem *this_00;
  UPCGData *pUVar7;
  bool bVar8;
  bool local_res8 [8];
  FName local_res10;
  FString local_48;
  undefined8 local_38;
  FString FStack_30;
  undefined8 uStack_20;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3510,"UPCGComponent::CreateInputPCGData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
               ,0xdb6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3510);
  }
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Actor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0xdb8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UPCGData *)(*pcVar1)();
    return pUVar4;
  }
  if (this->InputType == Actor) {
    pUVar4 = GetActorPCGData(this);
  }
  else {
    if ((this->InputType == Landscape) &&
       (pUVar4 = GetActorPCGData(this), pUVar4 != (UPCGData *)0x0)) {
      pUVar5 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      iVar3 = (int)pUVar5->_padding_;
      if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         (((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar5->_padding_ && ((AActor *)this->_padding_ != (AActor *)0x0)))) {
        pUVar6 = AActor::GetWorld((AActor *)this->_padding_);
        this_00 = UPCGSubsystem::GetInstance(pUVar6);
        if (this_00 != (UPCGSubsystem *)0x0) {
          local_res8[0] = false;
          pUVar7 = UPCGSubsystem::GetLandscapePCGData
                             (this_00,this->CurrentGenerationTask,local_res8);
          if (local_res8[0] == false) {
            pUVar7 = (this->CachedLandscapeData).field0_0x0.DebugPtr;
            if ((pUVar7 == (UPCGData *)0x0) ||
               (bVar2 = IsLandscapeCachedDataDirty(this,pUVar7), bVar2)) {
              pUVar7 = CreateLandscapePCGData(this,false);
            }
            else {
              pUVar7 = (this->CachedLandscapeData).field0_0x0.DebugPtr;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPCGData *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            (this->CachedLandscapeData).field0_0x0.DebugPtr = pUVar7;
            UPCGSubsystem::SetLandscapePCGData(this_00,this->CurrentGenerationTask,pUVar7);
            bVar2 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                              ((IPCGBaseSubsystem *)&this_00->_padding_);
            if (((bVar2) && (this->CurrentGenerationTask != 0xffffffffffffffff)) &&
               (4 < (byte)LogPCG._0_1_)) {
              local_res10 = *(FName *)(this->_padding_ + 0x18);
              ::FName::ToString(&local_res10,&local_48);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
          }
          if (pUVar7 != (UPCGData *)0x0) {
            pUVar5 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
            iVar3 = (int)pUVar5->_padding_;
            if ((iVar3 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
                &pUVar5->_padding_)) {
              if (pUVar7 != pUVar4) {
                iVar3 = (**(code **)(pUVar4->_padding_ + 0x380))(pUVar4);
                if (iVar3 < 3) {
                  FStack_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_38 = 0x101;
                  pcVar1 = *(code **)(pUVar4->_padding_ + 0x3f8);
                  FStack_30.Data.ArrayNum = 0;
                  FStack_30.Data.ArrayMax = 0;
                  uStack_20 = 0;
                  ::FString::FString(&FStack_30,L"");
                  uStack_20 = CONCAT53(uStack_20._3_5_,0x700);
                  pUVar4 = (UPCGData *)(*pcVar1)(pUVar4,0,pUVar7,&local_38);
                  if (FStack_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_30.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  pUVar4 = (UPCGData *)(**(code **)(pUVar7->_padding_ + 1000))(pUVar7,0,pUVar4);
                }
              }
              goto LAB_149efabac;
            }
          }
        }
      }
    }
    pUVar4 = (UPCGData *)0x0;
  }
LAB_149efabac:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar4;
}

// CreateLandscapePCGData @ 149efad50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::CreateLandscapePCGData(UPCGComponent *this,bool param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UPCGGraphInstance *pUVar3;
  bool bVar4;
  UPCGLandscapeData *pUVar5;
  UClass *pUVar6;
  undefined1 (*pauVar7) [16];
  UWorld *pUVar8;
  AActor *pAVar9;
  UObject *pUVar10;
  UPCGLandscapeData *this_00;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  FPCGLandscapeDataProps local_1e8;
  undefined1 local_1e0 [8];
  FWeakObjectPtr local_1d8;
  TArray<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_1d0;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined1 local_188 [128];
  TVector<double>_u_0 local_108;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  TVector<double>_u_0 local_d0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  char local_a0;
  undefined7 uStack_9f;
  undefined1 local_98 [48];
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_218;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3445,"UPCGComponent::CreateLandscapePCGData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
               ,0xd75);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3445);
  }
  pAVar9 = (AActor *)this->_padding_;
  if (pAVar9 == (AActor *)0x0) {
    pUVar5 = (UPCGLandscapeData *)0x0;
    goto LAB_149efb184;
  }
  pUVar5 = (UPCGLandscapeData *)GetActorPCGData(this);
  pUVar6 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
  iVar2 = (int)pUVar6->_padding_;
  if ((iVar2 <= *(int *)(pAVar9->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pAVar9->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar6->_padding_)) goto LAB_149efb184;
  this_00 = (UPCGLandscapeData *)0x0;
  if (pUVar5 == (UPCGLandscapeData *)0x0) {
LAB_149efae4e:
    pUVar5 = this_00;
  }
  else {
    pUVar6 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar6->_padding_)) goto LAB_149efae4e;
  }
  local_68 = local_68 & 0xffffffffffffff00;
  if (pUVar5 == (UPCGLandscapeData *)0x0) {
    local_1f8 = 0;
    (**(code **)(pAVar9->_padding_ + 0x358))(pAVar9,0,&local_1c0,&local_1a8);
    local_a0 = '\x01';
    local_68 = CONCAT71(uStack_9f,1);
    local_98._8_4_ = SUB84(local_1b8 - local_1a0,0);
    local_98._0_8_ = local_1c0 - local_1a8;
    local_98._12_4_ = (int)((ulonglong)(local_1b8 - local_1a0) >> 0x20);
    local_98._40_4_ = SUB84(local_1b0 + local_198,0);
    local_98._32_8_ = local_1b8 + local_1a0;
    local_98._44_4_ = (int)((ulonglong)(local_1b0 + local_198) >> 0x20);
    local_98._24_4_ = SUB84(local_1c0 + local_1a8,0);
    local_98._16_8_ = local_1b0 - local_198;
    local_98._28_4_ = (int)((ulonglong)(local_1c0 + local_1a8) >> 0x20);
  }
  else {
    pauVar7 = (undefined1 (*) [16])(**(code **)(pUVar5->_padding_ + 0x388))(pUVar5,&local_d0);
    local_98._0_16_ = *pauVar7;
    local_98._16_16_ = pauVar7[1];
    local_98._32_16_ = pauVar7[2];
    local_68 = *(ulonglong *)pauVar7[3];
  }
  pUVar8 = AActor::GetWorld(pAVar9);
  PCGHelpers::GetLandscapeProxies(&local_1d0,pUVar8,(TBox<double> *)local_98);
  iVar2 = local_1d0.ArrayNum;
  uVar12 = (ulonglong)local_1d0.ArrayNum;
  if (local_1d0.ArrayNum != 0) {
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    pFVar1 = (FWeakObjectPtr *)(local_1d0.AllocatorInstance.Data + uVar12 * 8);
    local_d8 = 0;
    local_108._s_0.Z = 0.0;
    dStack_f0 = 0.0;
    local_e8 = 0.0;
    dStack_e0 = 0.0;
    FVar14.Data = local_1d0.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar12 != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_1e0);
      }
      if ((FWeakObjectPtr *)FVar14.Data == pFVar1) break;
      local_1d8 = *(FWeakObjectPtr *)FVar14.Data;
      bVar4 = FWeakObjectPtr::IsValid(&local_1d8);
      if (bVar4) {
        pAVar9 = (AActor *)FWeakObjectPtr::Get(&local_1d8);
        PCGHelpers::GetGridBounds((TBox<double> *)&local_d0._s_0,pAVar9,this);
        if ((char)local_d8 == '\0') {
          if (local_a0 != '\0') {
            local_108._s_0.X = local_d0._s_0.X;
            local_108._s_0.Y = local_d0._s_0.Y;
            local_108._s_0.Z = local_d0._s_0.Z;
            dStack_f0 = dStack_b8;
            local_d8 = CONCAT71(uStack_9f,local_a0);
            local_e8 = local_b0;
            dStack_e0 = dStack_a8;
          }
          goto LAB_149efb0a1;
        }
        if (local_a0 == '\0') goto LAB_149efb0a1;
        uVar16 = SUB84(local_108._s_0.X,0);
        uVar17 = (undefined4)((ulonglong)local_108._0_8_ >> 0x20);
        FVar14.Data = FVar14.Data + 8;
        if (local_d0._s_0.X <= local_108._s_0.X) {
          uVar16 = SUB84(local_d0._s_0.X,0);
          uVar17 = (undefined4)((ulonglong)local_d0._0_8_ >> 0x20);
        }
        uVar18 = SUB84(local_108._s_0.Y,0);
        uVar19 = (undefined4)((ulonglong)local_108._8_8_ >> 0x20);
        if (local_d0._s_0.Y <= local_108._s_0.Y) {
          uVar18 = SUB84(local_d0._s_0.Y,0);
          uVar19 = (undefined4)((ulonglong)local_d0._8_8_ >> 0x20);
        }
        uVar12 = (ulonglong)(uint)local_1d0.ArrayNum;
        local_108._s_0.X = (double)CONCAT44(uVar17,uVar16);
        uVar16 = SUB84(local_108._s_0.Z,0);
        uVar17 = (undefined4)((ulonglong)local_108._16_8_ >> 0x20);
        if (local_d0._s_0.Z <= local_108._s_0.Z) {
          uVar16 = SUB84(local_d0._s_0.Z,0);
          uVar17 = (undefined4)((ulonglong)local_d0._16_8_ >> 0x20);
        }
        local_108._s_0.Y = (double)CONCAT44(uVar19,uVar18);
        uVar18 = SUB84(dStack_f0,0);
        uVar19 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
        if (dStack_f0 <= dStack_b8) {
          uVar18 = SUB84(dStack_b8,0);
          uVar19 = (undefined4)((ulonglong)dStack_b8 >> 0x20);
        }
        local_108._s_0.Z = (double)CONCAT44(uVar17,uVar16);
        uVar16 = SUB84(local_e8,0);
        uVar17 = (undefined4)((ulonglong)local_e8 >> 0x20);
        if (local_e8 <= local_b0) {
          uVar16 = SUB84(local_b0,0);
          uVar17 = (undefined4)((ulonglong)local_b0 >> 0x20);
        }
        dStack_f0 = (double)CONCAT44(uVar19,uVar18);
        uVar18 = SUB84(dStack_e0,0);
        uVar19 = (undefined4)((ulonglong)dStack_e0 >> 0x20);
        if (dStack_e0 <= dStack_a8) {
          uVar18 = SUB84(dStack_a8,0);
          uVar19 = (undefined4)((ulonglong)dStack_a8 >> 0x20);
        }
        local_e8 = (double)CONCAT44(uVar17,uVar16);
        dStack_e0 = (double)CONCAT44(uVar19,uVar18);
      }
      else {
LAB_149efb0a1:
        uVar12 = (ulonglong)(uint)local_1d0.ArrayNum;
        FVar14.Data = FVar14.Data + 8;
      }
    }
    pUVar10 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UPCGLandscapeData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_188,pUVar6);
    local_188._8_8_ = pUVar10;
    this_00 = (UPCGLandscapeData *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_188);
    if (local_188._64_8_ != 0) {
      plVar13 = (longlong *)(local_188 + 0x50);
      if ((longlong *)local_188._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_188._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    pUVar3 = (this->GraphInstance).field0_0x0.DebugPtr;
    if (((pUVar3 == (UPCGGraphInstance *)0x0) ||
        (lVar11 = (**(code **)(pUVar3->_padding_ + 0x2b8))(), lVar11 == 0)) ||
       (*(char *)(lVar11 + 0x28) == '\0')) {
      local_1e8.bGetLayerWeights = false;
    }
    else {
      local_1e8.bGetLayerWeights = true;
    }
    local_1e8.bSampleVirtualTextureNormals = false;
    local_1e8.bGetComponentCoordinates = false;
    local_1e8.bGetActorReference = false;
    local_1e8.bGetPhysicalMaterial = false;
    local_1e8.bSampleVirtualTextures = false;
    local_1e8.bGetHeightOnly = param_1;
    UPCGLandscapeData::Initialize(this_00,&local_1d0,(TBox<double> *)&local_108._s_0,&local_1e8);
  }
  pUVar5 = this_00;
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
LAB_149efb184:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (UPCGData *)pUVar5;
}

// CreatePCGData @ 149efb1e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::CreatePCGData(UPCGComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UPCGSubsystem *this_00;
  UPCGData *pUVar3;
  bool bVar4;
  bool local_res8 [8];
  FName local_res10;
  FString local_28;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3439,"UPCGComponent::CreatePCGData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
               ,0xd6f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3439);
  }
  pUVar3 = (UPCGData *)0x0;
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar2 = AActor::GetWorld((AActor *)this->_padding_);
    this_00 = UPCGSubsystem::GetInstance(pUVar2);
    if (this_00 != (UPCGSubsystem *)0x0) {
      local_res8[0] = false;
      pUVar3 = UPCGSubsystem::GetInputPCGData(this_00,this->CurrentGenerationTask,local_res8);
      if (local_res8[0] == false) {
        pUVar3 = (this->CachedInputData).field0_0x0.DebugPtr;
        if (pUVar3 == (UPCGData *)0x0) {
          pUVar3 = CreateInputPCGData(this);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        (this->CachedInputData).field0_0x0.DebugPtr = pUVar3;
        UPCGSubsystem::SetInputPCGData(this_00,this->CurrentGenerationTask,pUVar3);
        bVar1 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                          ((IPCGBaseSubsystem *)&this_00->_padding_);
        if (((bVar1) && (this->CurrentGenerationTask != 0xffffffffffffffff)) &&
           (4 < (byte)LogPCG._0_1_)) {
          local_res10 = *(FName *)(this->_padding_ + 0x18);
          ::FName::ToString(&local_res10,&local_28);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar3;
}

// DoesGridDependOnWorldStreaming @ 149efbe90

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall UPCGComponent::DoesGridDependOnWorldStreaming(UPCGComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  EPCGGridStreamingDependencyMode EVar2;
  UPCGSchedulingPolicyBase *pUVar3;
  EPCGHiGenGrid EVar4;
  FScriptContainerElement *pFVar5;
  
  pUVar3 = (this->SchedulingPolicy).field0_0x0.DebugPtr;
  if (((pUVar3 != (UPCGSchedulingPolicyBase *)0x0) &&
      (pUVar3->GridStreamingDependencyMode != NoGrids)) &&
     (EVar4 = PCGHiGenGrid::GridSizeToGrid(param_1), EVar4 != Uninitialized)) {
    EVar2 = pUVar3->GridStreamingDependencyMode;
    if (EVar2 == AllGrids) {
      return true;
    }
    if (EVar2 == AllGridsExceptUnbounded) {
      if (EVar4 != Unbounded) {
        return true;
      }
    }
    else if (EVar2 == SpecificGrids) {
      pFVar5 = (pUVar3->GridsDependentOnWorldStreaming).AllocatorInstance.Data;
      pFVar1 = pFVar5 + (longlong)(pUVar3->GridsDependentOnWorldStreaming).ArrayNum * 4;
      if (pFVar5 != pFVar1) {
        do {
          if (*(EPCGHiGenGrid *)pFVar5 == EVar4) {
            return true;
          }
          pFVar5 = pFVar5 + 4;
        } while (pFVar5 != pFVar1);
        return false;
      }
    }
  }
  return false;
}

// EndPlay @ 149efc280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::EndPlay(UPCGComponent *this,Type param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  UWorld *pUVar10;
  UPCGSubsystem *this_00;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar10 = AActor::GetWorld((AActor *)this->_padding_);
    this_00 = UPCGSubsystem::GetInstance(pUVar10);
    if (this_00 != (UPCGSubsystem *)0x0) {
      IPCGBaseSubsystem::CancelGeneration
                ((IPCGBaseSubsystem *)&this_00->_padding_,
                 (IPCGGraphExecutionSource *)&this->_padding_);
      UPCGSubsystem::UnregisterPCGComponent(this_00,this,false);
    }
  }
  if (this->GeneratedResourcesInaccessible == false) {
    if ((&this->GeneratedResourcesLock == (FWindowsRecursiveMutex *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->GeneratedResourcesLock);
    uVar12 = (this->GeneratedResources).ArrayNum - 1;
    if (-1 < (int)uVar12) {
      pTVar2 = &this->GeneratedResources;
      lVar15 = (longlong)(int)uVar12;
      lVar13 = lVar15 * 8;
      do {
        uVar14 = ~uVar12 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar12 < (this->GeneratedResources).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (this->GeneratedResources).ArrayNum;
        if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar13) == 0) {
LAB_149efc611:
          uVar8 = 0;
          if ((int)uVar12 < iVar11) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
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
          iVar11 = (this->GeneratedResources).ArrayNum;
          iVar9 = ~uVar12 + iVar11;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          if (1 < iVar9) {
            iVar9 = 1;
          }
          if (iVar9 != 0) {
            memmove(pFVar4 + lVar15 * 8,pFVar4 + (longlong)(iVar11 - iVar9) * 8,(longlong)iVar9 << 3
                   );
          }
          piVar1 = &(this->GeneratedResources).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,(this->GeneratedResources).ArrayNum,
                     &(this->GeneratedResources).ArrayMax);
        }
        else {
          uVar8 = 0;
          if ((int)uVar12 < iVar11) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
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
          cVar7 = (**(code **)(**(longlong **)((pTVar2->AllocatorInstance).Data + lVar13) + 0x2d0))
                            ();
          if (cVar7 != '\0') {
            uVar8 = 0;
            if ((int)uVar12 < (this->GeneratedResources).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
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
            if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar13) != 0) {
              local_98._0_8_ = (FScriptContainerElement *)0x0;
              local_98._8_8_ = 0;
              uVar8 = 0;
              if ((int)uVar12 < (this->GeneratedResources).ArrayNum) {
                uVar8 = uVar14;
              }
              local_78 = (void *)0x0;
              local_70 = 0;
              local_6c = 0x80;
              local_68 = 0xffffffff;
              local_64 = 0;
              local_58 = (void *)0x0;
              local_50 = 0;
              if ((uVar8 == 0) &&
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
              plVar3 = *(longlong **)((pTVar2->AllocatorInstance).Data + lVar13);
              (**(code **)(*plVar3 + 0x2b8))(plVar3,1,local_98);
              if ((local_98._8_4_ != local_64) &&
                 (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<4712353729653770132>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                                     ,0x794,"ActorsToDelete.IsEmpty()"), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_50 = 0;
              if (local_58 != (void *)0x0) {
                FMemory::Free(local_58);
              }
              TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_98,0,local_98._8_4_);
              iVar11 = SUB84(local_98._8_8_,4);
              local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
              if (iVar11 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
              }
              local_68 = 0xffffffff;
              local_64 = 0;
              local_70 = 0;
              if (0x80 < local_6c) {
                local_6c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
              }
              if (local_78 != (void *)0x0) {
                FMemory::Free(local_78);
              }
              if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_98._0_8_);
              }
            }
            iVar11 = (this->GeneratedResources).ArrayNum;
            goto LAB_149efc611;
          }
        }
        lVar15 = lVar15 + -1;
        lVar13 = lVar13 + -8;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    if (&this->GeneratedResourcesLock != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->GeneratedResourcesLock);
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653770113>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x781,"!GeneratedResourcesInaccessible");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// ExecutePreGraph @ 149efcbe0

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

void __thiscall UPCGComponent::ExecutePreGraph(UPCGComponent *this,FPCGContext *param_1)

{
  int iVar1;
  APCGPartitionActor *this_00;
  bool bVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  UPCGSubsystem *this_01;
  UPCGComponent *this_02;
  UPCGData *pUVar5;
  undefined1 auStack_88 [32];
  bool local_68 [4];
  FName local_64;
  FString local_58;
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->CurrentGenerationTask == 0xffffffffffffffff) {
    `UPCGComponent::ExecutePreGraph'::__l2::<lambda_1>::operator()(local_68);
  }
  GetActorPCGData(this);
  this_00 = (APCGPartitionActor *)this->_padding_;
  if (this_00 != (APCGPartitionActor *)0x0) {
    pUVar3 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if ((AActor *)this->_padding_ != (AActor *)0x0) {
        pUVar4 = AActor::GetWorld((AActor *)this->_padding_);
        this_01 = UPCGSubsystem::GetInstance(pUVar4);
        if (this_01 != (UPCGSubsystem *)0x0) {
          local_68[0] = false;
          UPCGSubsystem::GetOriginalActorPCGData(this_01,this->CurrentGenerationTask,local_68);
          if ((local_68[0] == false) &&
             (this_02 = APCGPartitionActor::GetOriginalComponent(this_00,this),
             this_02 != (UPCGComponent *)0x0)) {
            pUVar5 = GetActorPCGData(this_02);
            if (pUVar5 == (UPCGData *)0x0) {
              pUVar5 = CreateActorPCGData(this_02,(AActor *)this_02->_padding_,
                                          this_02->bParseActorComponents);
            }
            UPCGSubsystem::SetOriginalActorPCGData(this_01,this->CurrentGenerationTask,pUVar5);
            bVar2 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                              ((IPCGBaseSubsystem *)&this_01->_padding_);
            if (((bVar2) && (this->CurrentGenerationTask != 0xffffffffffffffff)) &&
               (4 < (byte)LogPCG._0_1_)) {
              local_64 = *(FName *)(this->_padding_ + 0x18);
              ::FName::ToString(&local_64,&local_58);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
          }
        }
      }
      goto LAB_149efcd75;
    }
  }
  GetActorPCGData(this);
LAB_149efcd75:
  GetGridBounds(this,&local_48);
  GetOriginalGridBounds(this,&local_48);
  GetLocalSpaceBounds(this,&local_48);
  GetOriginalLocalSpaceBounds(this,&local_48);
  return;
}

// ForEachConstManagedResource @ 149efd670

void __thiscall
UPCGComponent::ForEachConstManagedResource
          (UPCGComponent *this,TFunctionRef<void___cdecl(UPCGManagedResource_const_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  lpCriticalSection = &this->GeneratedResourcesLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->GeneratedResourcesInaccessible != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GeneratedResourcesInaccessible",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x19b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = (this->GeneratedResources).AllocatorInstance.Data;
  iVar2 = (this->GeneratedResources).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->GeneratedResources).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGManagedResource>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(longlong *)pFVar5 != 0) {
      local_res18[0] = *(longlong *)pFVar5;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res18);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ForEachManagedResource @ 149efd760

void __thiscall
UPCGComponent::ForEachManagedResource
          (UPCGComponent *this,TFunctionRef<void___cdecl(UPCGManagedResource_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  lpCriticalSection = &this->GeneratedResourcesLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->GeneratedResourcesInaccessible != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GeneratedResourcesInaccessible",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x18e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = (this->GeneratedResources).AllocatorInstance.Data;
  iVar2 = (this->GeneratedResources).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->GeneratedResources).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGManagedResource>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(longlong *)pFVar5 != 0) {
      local_res18[0] = *(longlong *)pFVar5;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res18);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Generate @ 149efdb50

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGComponent::Generate(UPCGComponent *this)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->CurrentGenerationTask == 0xffffffffffffffff) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    GenerateInternal(this,false,Uninitialized,GenerateOnDemand,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// Generate @ 149efdba0

void __thiscall UPCGComponent::Generate(UPCGComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGComponent_Generate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// GenerateInternal @ 149efe160

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
UPCGComponent::GenerateInternal
          (UPCGComponent *this,bool param_1,EPCGHiGenGrid param_2,
          EPCGComponentGenerationTrigger param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  UPCGGraphInstance *pUVar1;
  bool bVar2;
  UWorld *pUVar3;
  UPCGSubsystem *pUVar4;
  longlong lVar5;
  ulong64 uVar6;
  UPCGComponent *local_res8;
  
  if ((this->CurrentGenerationTask == 0xffffffffffffffff) &&
     ((AActor *)this->_padding_ != (AActor *)0x0)) {
    pUVar3 = AActor::GetWorld((AActor *)this->_padding_);
    pUVar4 = UPCGSubsystem::GetInstance(pUVar3);
    if ((pUVar4 != (UPCGSubsystem *)0x0) &&
       ((((this->bActivated != false &&
          (pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr, pUVar1 != (UPCGGraphInstance *)0x0))
         && (lVar5 = (**(code **)(pUVar1->_padding_ + 0x2b8))(), lVar5 != 0)) &&
        ((AActor *)this->_padding_ != (AActor *)0x0)))) {
      pUVar3 = AActor::GetWorld((AActor *)this->_padding_);
      pUVar4 = UPCGSubsystem::GetInstance(pUVar3);
      if (pUVar4 != (UPCGSubsystem *)0x0) {
        if (this->GenerationTrigger == GenerateAtRuntime) {
          if (param_3 != GenerateAtRuntime) {
            if ((byte)LogPCG._0_1_ < 3) {
              return 0xffffffffffffffff;
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            return 0xffffffffffffffff;
          }
        }
        else if (this->bProceduralInstancesInUse == false) {
          if ((param_3 == GenerateOnLoad) && (this->GenerationTrigger == GenerateOnDemand)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((((this->bGenerated != false) && (this->CurrentCleanupTask == 0xffffffffffffffff)) ||
              (!bVar2)) && (!param_1)) {
            return 0xffffffffffffffff;
          }
        }
        this->bProceduralInstancesInUse = false;
        pUVar4 = (UPCGSubsystem *)0x0;
        if ((AActor *)this->_padding_ != (AActor *)0x0) {
          pUVar3 = AActor::GetWorld((AActor *)this->_padding_);
          pUVar4 = UPCGSubsystem::GetInstance(pUVar3);
        }
        uVar6 = UPCGSubsystem::ScheduleComponent(pUVar4,this,param_2,param_1,param_4);
        this->CurrentGenerationTask = uVar6;
        if (uVar6 != 0xffffffffffffffff) {
          ClearPerPinGeneratedOutput(this);
          TMulticastDelegate<void___cdecl(UPCGComponent_*),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->OnPCGGraphStartGeneratingDelegate,this);
          local_res8 = this;
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &this->OnPCGGraphStartGeneratingExternal,&local_res8);
        }
        return this->CurrentGenerationTask;
      }
    }
  }
  return 0xffffffffffffffff;
}

// GenerateLocal @ 149efe300

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGComponent::GenerateLocal
          (UPCGComponent *this,EPCGComponentGenerationTrigger param_1,bool param_2,
          EPCGHiGenGrid param_3,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  GenerateInternal(this,param_2,param_3,param_1,param_4);
  return;
}

// GenerateLocal @ 149efe320

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGComponent::GenerateLocal(UPCGComponent *this,bool param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GenerateInternal(this,param_1,Uninitialized,GenerateOnDemand,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GenerateLocalGetTaskId @ 149efe410

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
UPCGComponent::GenerateLocalGetTaskId
          (UPCGComponent *this,EPCGComponentGenerationTrigger param_1,bool param_2,
          EPCGHiGenGrid param_3)

{
  ulong64 uVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  uVar1 = GenerateInternal(this,param_2,param_3,param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return uVar1;
}

// GenerateLocalGetTaskId @ 149efe470

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
UPCGComponent::GenerateLocalGetTaskId
          (UPCGComponent *this,EPCGComponentGenerationTrigger param_1,bool param_2,
          EPCGHiGenGrid param_3,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  ulong64 uVar1;
  
  uVar1 = GenerateInternal(this,param_2,param_3,param_1,param_4);
  return uVar1;
}

// GenerateLocalGetTaskId @ 149efe490

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall UPCGComponent::GenerateLocalGetTaskId(UPCGComponent *this,bool param_1)

{
  ulong64 uVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  uVar1 = GenerateInternal(this,param_1,Uninitialized,GenerateOnDemand,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return uVar1;
}

// Generate_Implementation @ 149efe4e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGComponent::Generate_Implementation(UPCGComponent *this,bool param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GenerateInternal(this,param_1,Uninitialized,GenerateOnDemand,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetActorPCGData @ 149efe6e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::GetActorPCGData(UPCGComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UPCGSubsystem *this_00;
  UPCGData *pUVar3;
  bool local_res8 [8];
  FName local_res10;
  FString local_18;
  
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    return (UPCGData *)0x0;
  }
  pUVar2 = AActor::GetWorld((AActor *)this->_padding_);
  this_00 = UPCGSubsystem::GetInstance(pUVar2);
  if (this_00 == (UPCGSubsystem *)0x0) {
    return (UPCGData *)0x0;
  }
  local_res8[0] = false;
  pUVar3 = UPCGSubsystem::GetActorPCGData(this_00,this->CurrentGenerationTask,local_res8);
  if (local_res8[0] == false) {
    pUVar3 = (this->CachedActorData).field0_0x0.DebugPtr;
    if ((pUVar3 == (UPCGData *)0x0) || (bVar1 = IsLandscapeCachedDataDirty(this,pUVar3), bVar1)) {
      pUVar3 = CreateActorPCGData(this,(AActor *)this->_padding_,this->bParseActorComponents);
    }
    else {
      pUVar3 = (this->CachedActorData).field0_0x0.DebugPtr;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CachedActorData).field0_0x0.DebugPtr = pUVar3;
    UPCGSubsystem::SetActorPCGData(this_00,this->CurrentGenerationTask,pUVar3);
    bVar1 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                      ((IPCGBaseSubsystem *)&this_00->_padding_);
    if (((bVar1) && (this->CurrentGenerationTask != 0xffffffffffffffff)) && (4 < (byte)LogPCG._0_1_)
       ) {
      local_res10 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res10,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return pUVar3;
}

// GetCleanupRadiusFromGrid @ 149eff140

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

double __thiscall UPCGComponent::GetCleanupRadiusFromGrid(UPCGComponent *this,EPCGHiGenGrid param_1)

{
  UPCGGraphInstance *pUVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  double dVar8;
  float fVar9;
  
  pTVar3 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationRadiusMultiplier.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  fVar9 = *(float *)((longlong)pTVar3->ShadowedValue + lVar5);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (this->bOverrideGenerationRadii == false) {
    pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
    if ((pUVar1 != (UPCGGraphInstance *)0x0) &&
       (lVar5 = (**(code **)(pUVar1->_padding_ + 0x2b8))(), lVar5 != 0)) {
      if ((param_1 & ~Unbounded) == Uninitialized) {
        dVar8 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid
                          ((FPCGRuntimeGenerationRadii *)(lVar5 + 0x1f8),param_1);
        return (double)fVar9 * dVar8 * *(double *)(lVar5 + 0x250);
      }
      bVar6 = (byte)*(undefined4 *)(lVar5 + 0x68);
      if (param_1 < (uint)(4 << (bVar6 & 0x1f))) {
        if ((param_1 < Grid4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("static_cast<uint32>(Grid) >= static_cast<uint32>(EPCGHiGenGrid::GridMin)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                               ,0x633,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          dVar8 = (double)(*pcVar2)();
          return dVar8;
        }
        return (double)fVar9 *
               *(double *)(lVar5 + 0x250) * *(double *)(lVar5 + 0x200) * (double)(param_1 >> 2);
      }
      dVar8 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid
                        ((FPCGRuntimeGenerationRadii *)(lVar5 + 0x1f8),param_1 >> (bVar6 & 0x1f));
      dVar8 = dVar8 * *(double *)(lVar5 + 0x250);
      uVar7 = 1L << ((byte)*(undefined4 *)(lVar5 + 0x68) & 0x3f);
      if (-1 < (longlong)uVar7) {
        return (double)fVar9 * dVar8 * (double)(longlong)uVar7;
      }
      return (double)fVar9 * dVar8 * (double)uVar7;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653769576>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x568,"Graph");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      dVar8 = (double)(*pcVar2)();
      return dVar8;
    }
    dVar8 = 0.0;
  }
  else {
    dVar8 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid(&this->GenerationRadii,param_1);
    dVar8 = dVar8 * (this->GenerationRadii).CleanupRadiusMultiplier * (double)fVar9;
  }
  return dVar8;
}

// GetComponentInstanceData @ 149eff320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TStructOnScope<FActorComponentInstanceData> * __thiscall
UPCGComponent::GetComponentInstanceData
          (UPCGComponent *this,TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  uint uVar2;
  UPackage *pUVar3;
  FActorComponentInstanceData *this_00;
  int iVar4;
  uint uVar5;
  UScriptStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGComponentInstanceData,(UObject *)pUVar3,
                         L"PCGComponentInstanceData");
    if (Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return __return_storage_ptr__;
    }
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.OuterSingleton;
  local_res8 = Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.OuterSingleton;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable
              ((UObject *)Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.OuterSingleton
              );
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
  iVar4 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
  uVar5 = (int)pUVar1->_padding_ + -1 + iVar4 & ~(iVar4 - 1U);
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  this_00 = FMemory::Malloc((longlong)(int)uVar2,0);
  *(FActorComponentInstanceData **)&__return_storage_ptr__->field_0x10 = this_00;
  FActorComponentInstanceData::FActorComponentInstanceData(this_00,(UActorComponent *)this);
  this_00->_padding_ = (longlong)&___7FPCGComponentInstanceData__6B_;
  this_00[1]._padding_ = (longlong)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  __return_storage_ptr__->field_0x20 = 1;
  return __return_storage_ptr__;
}

// GetConstOriginalComponent @ 149eff560

UPCGComponent * __thiscall UPCGComponent::GetConstOriginalComponent(UPCGComponent *this)

{
  int iVar1;
  APCGPartitionActor *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UPCGComponent *pUVar5;
  
  if (this->bIsComponentLocal != false) {
    this_00 = (APCGPartitionActor *)this->_padding_;
    if (this_00 != (APCGPartitionActor *)0x0) {
      pUVar4 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        pUVar5 = APCGPartitionActor::GetOriginalComponent(this_00,this);
        return pUVar5;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653771517>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0xcfd,"PartitionActor");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UPCGComponent *)(*pcVar2)();
      return pUVar5;
    }
  }
  return this;
}

// GetExecutionState @ 149effd50

IPCGGraphExecutionState * __thiscall UPCGComponent::GetExecutionState(UPCGComponent *this)

{
  return (IPCGGraphExecutionState *)&(this->GeneratedGraphOutput).TaggedData.ArrayNum;
}

// GetExecutionState @ 149effd60

IPCGGraphExecutionState * __thiscall UPCGComponent::GetExecutionState(UPCGComponent *this)

{
  return (IPCGGraphExecutionState *)&(this->GeneratedGraphOutput).TaggedData.ArrayNum;
}

// GetGenerationGrid @ 149effed0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGHiGenGrid __thiscall UPCGComponent::GetGenerationGrid(UPCGComponent *this)

{
  UPCGGraphInstance *pUVar1;
  uint uVar2;
  EPCGHiGenGrid EVar3;
  UPCGSubsystem *this_00;
  APCGWorldActor *pAVar4;
  UPCGGraph *this_01;
  
  uVar2 = this->GenerationGridSize;
  if (((uVar2 / 100 & uVar2 / 100 - 1) != 0) || (0x18fffe70 < uVar2 - 400)) {
    this_00 = UPCGSubsystem::GetSubsystemForCurrentWorld();
    if (this_00 != (UPCGSubsystem *)0x0) {
      pAVar4 = UPCGSubsystem::GetPCGWorldActor(this_00);
      if ((pAVar4 != (APCGWorldActor *)0x0) && (pAVar4->PartitionGridSize != uVar2)) {
        if (uVar2 == 0x80000000) {
          return Unbounded;
        }
        pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
        if (pUVar1 != (UPCGGraphInstance *)0x0) {
          this_01 = (UPCGGraph *)(**(code **)(pUVar1->_padding_ + 0x2b8))();
          uVar2 = UPCGGraph::GetDefaultGridSize(this_01);
          EVar3 = PCGHiGenGrid::GridSizeToGrid(uVar2);
          return EVar3;
        }
        uVar2 = UPCGGraph::GetDefaultGridSize((UPCGGraph *)0x0);
        EVar3 = PCGHiGenGrid::GridSizeToGrid(uVar2);
        return EVar3;
      }
    }
  }
  EVar3 = PCGHiGenGrid::GridSizeToGrid(uVar2);
  return EVar3;
}

// GetGenerationRadii @ 149f00030

FPCGRuntimeGenerationRadii * __thiscall UPCGComponent::GetGenerationRadii(UPCGComponent *this)

{
  UPCGGraphInstance *pUVar1;
  longlong lVar2;
  
  if ((this->bOverrideGenerationRadii == false) &&
     (pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr, pUVar1 != (UPCGGraphInstance *)0x0)) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x2b8))();
    if (lVar2 != 0) {
      pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
      if (pUVar1 != (UPCGGraphInstance *)0x0) {
        lVar2 = (**(code **)(pUVar1->_padding_ + 0x2b8))();
        return (FPCGRuntimeGenerationRadii *)(lVar2 + 0x1f8);
      }
      return (FPCGRuntimeGenerationRadii *)0x1f8;
    }
  }
  return &this->GenerationRadii;
}

// GetGenerationRadiusFromGrid @ 149f002e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

double __thiscall
UPCGComponent::GetGenerationRadiusFromGrid(UPCGComponent *this,EPCGHiGenGrid param_1)

{
  UPCGGraphInstance *pUVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  double dVar8;
  float fVar9;
  
  pTVar3 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationRadiusMultiplier.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  fVar9 = *(float *)((longlong)pTVar3->ShadowedValue + lVar5);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (this->bOverrideGenerationRadii == false) {
    pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
    if ((pUVar1 != (UPCGGraphInstance *)0x0) &&
       (lVar5 = (**(code **)(pUVar1->_padding_ + 0x2b8))(), lVar5 != 0)) {
      if ((param_1 & ~Unbounded) == Uninitialized) {
        dVar8 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid
                          ((FPCGRuntimeGenerationRadii *)(lVar5 + 0x1f8),param_1);
        return (double)fVar9 * dVar8;
      }
      bVar6 = (byte)*(undefined4 *)(lVar5 + 0x68);
      if (param_1 < (uint)(4 << (bVar6 & 0x1f))) {
        if ((param_1 < Grid4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("static_cast<uint32>(Grid) >= static_cast<uint32>(EPCGHiGenGrid::GridMin)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                               ,0x61f,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          dVar8 = (double)(*pcVar2)();
          return dVar8;
        }
        return (double)fVar9 * (double)(param_1 >> 2) * *(double *)(lVar5 + 0x200);
      }
      dVar8 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid
                        ((FPCGRuntimeGenerationRadii *)(lVar5 + 0x1f8),param_1 >> (bVar6 & 0x1f));
      uVar7 = 1L << (bVar6 & 0x3f);
      if (-1 < (longlong)uVar7) {
        return (double)fVar9 * dVar8 * (double)(longlong)uVar7;
      }
      return (double)fVar9 * dVar8 * (double)uVar7;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653769558>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x556,"Graph");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      dVar8 = (double)(*pcVar2)();
      return dVar8;
    }
    dVar8 = 0.0;
  }
  else {
    dVar8 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid(&this->GenerationRadii,param_1);
    dVar8 = dVar8 * (double)fVar9;
  }
  return dVar8;
}

// GetGraph @ 149f005e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGComponent::GetGraph(UPCGComponent *this)

{
  UPCGGraphInstance *pUVar1;
  UPCGGraph *pUVar2;
  
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInstance *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f005ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UPCGGraph *)(**(code **)(pUVar1->_padding_ + 0x2b8))();
    return pUVar2;
  }
  return (UPCGGraph *)0x0;
}

// GetGridBounds @ 149f00870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
UPCGComponent::GetGridBounds
          (UPCGComponent *this,TBox<double> *__return_storage_ptr__,AActor *param_1)

{
  PCGHelpers::GetGridBounds(__return_storage_ptr__,param_1,this);
  return __return_storage_ptr__;
}

// GetGridBounds @ 149f008a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
UPCGComponent::GetGridBounds(UPCGComponent *this,TBox<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UPCGSubsystem *this_00;
  TBox<double> *pTVar4;
  TVector<double>_u_0 *pTVar5;
  undefined1 auStack_c8 [32];
  FName local_a8;
  FString local_a0;
  TVector<double>_u_0 local_88;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  char local_50;
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->CurrentGenerationTask == 0xffffffffffffffff) {
    PCGHelpers::GetGridBounds(__return_storage_ptr__,(AActor *)this->_padding_,this);
    return __return_storage_ptr__;
  }
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    this_00 = (UPCGSubsystem *)0x0;
  }
  else {
    pUVar3 = AActor::GetWorld((AActor *)this->_padding_);
    this_00 = UPCGSubsystem::GetInstance(pUVar3);
    if (this_00 != (UPCGSubsystem *)0x0) goto LAB_149f00926;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PCGSubsystem",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                     ,0xdfe,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TBox<double> *)(*pcVar1)();
    return pTVar4;
  }
LAB_149f00926:
  UPCGSubsystem::GetBounds
            (this_00,(TOptional<UE::Math::TBox<double>_> *)&local_88._s_0,
             this->CurrentGenerationTask);
  if (local_50 == '\0') {
    pTVar5 = (TVector<double>_u_0 *)
             PCGHelpers::GetGridBounds(&local_48,(AActor *)this->_padding_,this);
    if (pTVar5 == &local_88) {
      if ((local_50 == '\0') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TBox<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    else {
      local_88._s_0.X = (((TVector<double> *)&(pTVar5->_s_0).X)->field0_0x0)._s_0.X;
      local_88._s_0.Y = (pTVar5->_s_0).Y;
      local_88._s_0.Z = (pTVar5->_s_0).Z;
      dStack_70 = (((TVector<double> *)(pTVar5->XYZ + 3))->field0_0x0)._s_0.X;
      local_68 = pTVar5->XYZ[4];
      dStack_60 = pTVar5->XYZ[5];
      local_58 = pTVar5->XYZ[6];
      local_50 = '\x01';
    }
    UPCGSubsystem::SetBounds(this_00,this->CurrentGenerationTask,(TBox<double> *)&local_88._s_0);
    bVar2 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                      ((IPCGBaseSubsystem *)&this_00->_padding_);
    if ((bVar2) && (4 < (byte)LogPCG._0_1_)) {
      local_a8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_a8,&local_a0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    if (local_50 == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GridBounds.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0xe0e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TBox<double> *)(*pcVar1)();
        return pTVar4;
      }
      if ((local_50 == '\0') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TBox<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_88._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_88._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_88._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_70;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_68;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_60;
  __return_storage_ptr__->IsValid = (undefined1)local_58;
  __return_storage_ptr__->Pad[0] = local_58._1_1_;
  __return_storage_ptr__->Pad[1] = local_58._2_1_;
  __return_storage_ptr__->Pad[2] = local_58._3_1_;
  __return_storage_ptr__->Pad[3] = local_58._4_1_;
  __return_storage_ptr__->Pad[4] = local_58._5_1_;
  __return_storage_ptr__->Pad[5] = local_58._6_1_;
  __return_storage_ptr__->Pad[6] = local_58._7_1_;
  return __return_storage_ptr__;
}

// GetGridDescriptor @ 149f00e50

FPCGGridDescriptor * __thiscall
UPCGComponent::GetGridDescriptor
          (UPCGComponent *this,FPCGGridDescriptor *__return_storage_ptr__,uint param_1)

{
  EPCGComponentGenerationTrigger EVar1;
  int iVar2;
  uint uVar3;
  APCGPartitionActor *this_00;
  UPCGGraphInstance *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  FPCGGridDescriptor *pFVar8;
  UObject *pUVar9;
  
  this_00 = (APCGPartitionActor *)this->_padding_;
  if (this_00 != (APCGPartitionActor *)0x0) {
    pUVar7 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      APCGPartitionActor::GetGridDescriptor(this_00,__return_storage_ptr__);
      if (param_1 == __return_storage_ptr__->GridSize) {
        return __return_storage_ptr__;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GridSize == GridDescriptor.GetGridSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0xf6,L"");
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      pcVar5 = (code *)swi(3);
      pFVar8 = (FPCGGridDescriptor *)(*pcVar5)();
      return pFVar8;
    }
  }
  pUVar4 = (this->GraphInstance).field0_0x0.DebugPtr;
  if ((pUVar4 == (UPCGGraphInstance *)0x0) ||
     (pUVar9 = (UObject *)(**(code **)(pUVar4->_padding_ + 0x2b8))(), pUVar9 == (UObject *)0x0)) {
    pUVar7 = UPCGGraph::StaticClass();
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    pUVar9 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  EVar1 = this->GenerationTrigger;
  bVar6 = (bool)pUVar9[2].field_0x1c;
  __return_storage_ptr__->RuntimeHash = 0;
  __return_storage_ptr__->bIsRuntime = EVar1 == GenerateAtRuntime;
  __return_storage_ptr__->GridSize = param_1;
  __return_storage_ptr__->bIs2DGrid = bVar6;
  (__return_storage_ptr__->Hash).bIsSet = false;
  if (this->GenerationTrigger != GenerateAtRuntime) {
    uVar3 = this->RuntimeGridDescriptorHash;
    if (((__return_storage_ptr__->Hash).bIsSet != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Hash.IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Grid\\PCGGridDescriptor.h"
                           ,0x3c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FPCGGridDescriptor *)(*pcVar5)();
      return pFVar8;
    }
    __return_storage_ptr__->RuntimeHash = uVar3;
  }
  return __return_storage_ptr__;
}

// GetGridDescriptorInternal @ 149f00fb0

FPCGGridDescriptor * __thiscall
UPCGComponent::GetGridDescriptorInternal
          (UPCGComponent *this,FPCGGridDescriptor *__return_storage_ptr__,uint param_1,bool param_2)

{
  EPCGComponentGenerationTrigger EVar1;
  int iVar2;
  uint uVar3;
  APCGPartitionActor *this_00;
  UPCGGraphInstance *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  FPCGGridDescriptor *pFVar8;
  UObject *pUVar9;
  
  this_00 = (APCGPartitionActor *)this->_padding_;
  if (this_00 != (APCGPartitionActor *)0x0) {
    pUVar7 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      APCGPartitionActor::GetGridDescriptor(this_00,__return_storage_ptr__);
      if (param_1 == __return_storage_ptr__->GridSize) {
        return __return_storage_ptr__;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GridSize == GridDescriptor.GetGridSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0xf6,L"");
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      pcVar5 = (code *)swi(3);
      pFVar8 = (FPCGGridDescriptor *)(*pcVar5)();
      return pFVar8;
    }
  }
  pUVar4 = (this->GraphInstance).field0_0x0.DebugPtr;
  if ((pUVar4 == (UPCGGraphInstance *)0x0) ||
     (pUVar9 = (UObject *)(**(code **)(pUVar4->_padding_ + 0x2b8))(), pUVar9 == (UObject *)0x0)) {
    pUVar7 = UPCGGraph::StaticClass();
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    pUVar9 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  EVar1 = this->GenerationTrigger;
  bVar6 = (bool)pUVar9[2].field_0x1c;
  __return_storage_ptr__->RuntimeHash = 0;
  __return_storage_ptr__->bIsRuntime = EVar1 == GenerateAtRuntime;
  __return_storage_ptr__->GridSize = param_1;
  __return_storage_ptr__->bIs2DGrid = bVar6;
  (__return_storage_ptr__->Hash).bIsSet = false;
  if (this->GenerationTrigger != GenerateAtRuntime) {
    uVar3 = this->RuntimeGridDescriptorHash;
    if (((__return_storage_ptr__->Hash).bIsSet != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Hash.IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Grid\\PCGGridDescriptor.h"
                           ,0x3c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FPCGGridDescriptor *)(*pcVar5)();
      return pFVar8;
    }
    __return_storage_ptr__->RuntimeHash = uVar3;
  }
  return __return_storage_ptr__;
}

// GetInputPCGData @ 149f013a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::GetInputPCGData(UPCGComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UPCGSubsystem *this_00;
  UPCGData *pUVar3;
  bool local_res8 [8];
  FName local_res10;
  FString local_18;
  
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    return (UPCGData *)0x0;
  }
  pUVar2 = AActor::GetWorld((AActor *)this->_padding_);
  this_00 = UPCGSubsystem::GetInstance(pUVar2);
  if (this_00 != (UPCGSubsystem *)0x0) {
    local_res8[0] = false;
    pUVar3 = UPCGSubsystem::GetInputPCGData(this_00,this->CurrentGenerationTask,local_res8);
    if (local_res8[0] == false) {
      pUVar3 = (this->CachedInputData).field0_0x0.DebugPtr;
      if (pUVar3 == (UPCGData *)0x0) {
        pUVar3 = CreateInputPCGData(this);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->CachedInputData).field0_0x0.DebugPtr = pUVar3;
      UPCGSubsystem::SetInputPCGData(this_00,this->CurrentGenerationTask,pUVar3);
      bVar1 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                        ((IPCGBaseSubsystem *)&this_00->_padding_);
      if (((bVar1) && (this->CurrentGenerationTask != 0xffffffffffffffff)) &&
         (4 < (byte)LogPCG._0_1_)) {
        local_res10 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res10,&local_18);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    return pUVar3;
  }
  return (UPCGData *)0x0;
}

// GetLandscapeHeightPCGData @ 149f01a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::GetLandscapeHeightPCGData(UPCGComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UPCGSubsystem *this_00;
  UPCGData *pUVar3;
  bool local_res8 [8];
  FName local_res10;
  FString local_18;
  
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    return (UPCGData *)0x0;
  }
  pUVar2 = AActor::GetWorld((AActor *)this->_padding_);
  this_00 = UPCGSubsystem::GetInstance(pUVar2);
  if (this_00 == (UPCGSubsystem *)0x0) {
    return (UPCGData *)0x0;
  }
  local_res8[0] = false;
  pUVar3 = UPCGSubsystem::GetLandscapeHeightPCGData(this_00,this->CurrentGenerationTask,local_res8);
  if (local_res8[0] == false) {
    pUVar3 = (this->CachedLandscapeHeightData).field0_0x0.DebugPtr;
    if ((pUVar3 == (UPCGData *)0x0) || (bVar1 = IsLandscapeCachedDataDirty(this,pUVar3), bVar1)) {
      pUVar3 = CreateLandscapePCGData(this,true);
    }
    else {
      pUVar3 = (this->CachedLandscapeHeightData).field0_0x0.DebugPtr;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CachedLandscapeHeightData).field0_0x0.DebugPtr = pUVar3;
    UPCGSubsystem::SetLandscapeHeightPCGData(this_00,this->CurrentGenerationTask,pUVar3);
    bVar1 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                      ((IPCGBaseSubsystem *)&this_00->_padding_);
    if (((bVar1) && (this->CurrentGenerationTask != 0xffffffffffffffff)) && (4 < (byte)LogPCG._0_1_)
       ) {
      local_res10 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res10,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return pUVar3;
}

// GetLandscapePCGData @ 149f01b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::GetLandscapePCGData(UPCGComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UPCGSubsystem *this_00;
  UPCGData *pUVar3;
  bool local_res8 [8];
  FName local_res10;
  FString local_18;
  
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    return (UPCGData *)0x0;
  }
  pUVar2 = AActor::GetWorld((AActor *)this->_padding_);
  this_00 = UPCGSubsystem::GetInstance(pUVar2);
  if (this_00 == (UPCGSubsystem *)0x0) {
    return (UPCGData *)0x0;
  }
  local_res8[0] = false;
  pUVar3 = UPCGSubsystem::GetLandscapePCGData(this_00,this->CurrentGenerationTask,local_res8);
  if (local_res8[0] == false) {
    pUVar3 = (this->CachedLandscapeData).field0_0x0.DebugPtr;
    if ((pUVar3 == (UPCGData *)0x0) || (bVar1 = IsLandscapeCachedDataDirty(this,pUVar3), bVar1)) {
      pUVar3 = CreateLandscapePCGData(this,false);
    }
    else {
      pUVar3 = (this->CachedLandscapeData).field0_0x0.DebugPtr;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CachedLandscapeData).field0_0x0.DebugPtr = pUVar3;
    UPCGSubsystem::SetLandscapePCGData(this_00,this->CurrentGenerationTask,pUVar3);
    bVar1 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                      ((IPCGBaseSubsystem *)&this_00->_padding_);
    if (((bVar1) && (this->CurrentGenerationTask != 0xffffffffffffffff)) && (4 < (byte)LogPCG._0_1_)
       ) {
      local_res10 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res10,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return pUVar3;
}

// GetLocalSpaceBounds @ 149f01f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
UPCGComponent::GetLocalSpaceBounds(UPCGComponent *this,TBox<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UPCGSubsystem *this_00;
  TBox<double> *pTVar4;
  TVector<double>_u_0 *pTVar5;
  undefined1 auStack_c8 [32];
  FName local_a8;
  FString local_a0;
  TVector<double>_u_0 local_88;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  char local_50;
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->CurrentGenerationTask == 0xffffffffffffffff) {
    PCGHelpers::GetActorLocalBounds(__return_storage_ptr__,(AActor *)this->_padding_,true);
    return __return_storage_ptr__;
  }
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    this_00 = (UPCGSubsystem *)0x0;
  }
  else {
    pUVar3 = AActor::GetWorld((AActor *)this->_padding_);
    this_00 = UPCGSubsystem::GetInstance(pUVar3);
    if (this_00 != (UPCGSubsystem *)0x0) goto LAB_149f01f96;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PCGSubsystem",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                     ,0xe45,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TBox<double> *)(*pcVar1)();
    return pTVar4;
  }
LAB_149f01f96:
  UPCGSubsystem::GetLocalSpaceBounds
            (this_00,(TOptional<UE::Math::TBox<double>_> *)&local_88._s_0,
             this->CurrentGenerationTask);
  if (local_50 == '\0') {
    pTVar5 = (TVector<double>_u_0 *)
             PCGHelpers::GetActorLocalBounds(&local_48,(AActor *)this->_padding_,true);
    if (pTVar5 == &local_88) {
      if ((local_50 == '\0') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TBox<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    else {
      local_88._s_0.X = (((TVector<double> *)&(pTVar5->_s_0).X)->field0_0x0)._s_0.X;
      local_88._s_0.Y = (pTVar5->_s_0).Y;
      local_88._s_0.Z = (pTVar5->_s_0).Z;
      dStack_70 = (((TVector<double> *)(pTVar5->XYZ + 3))->field0_0x0)._s_0.X;
      local_68 = pTVar5->XYZ[4];
      dStack_60 = pTVar5->XYZ[5];
      local_58 = pTVar5->XYZ[6];
      local_50 = '\x01';
    }
    UPCGSubsystem::SetLocalSpaceBounds
              (this_00,this->CurrentGenerationTask,(TBox<double> *)&local_88._s_0);
    bVar2 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                      ((IPCGBaseSubsystem *)&this_00->_padding_);
    if ((bVar2) && (4 < (byte)LogPCG._0_1_)) {
      local_a8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_a8,&local_a0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    if (local_50 == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalSpaceBounds.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0xe55,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TBox<double> *)(*pcVar1)();
        return pTVar4;
      }
      if ((local_50 == '\0') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TBox<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_88._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_88._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_88._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_70;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_68;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_60;
  __return_storage_ptr__->IsValid = (undefined1)local_58;
  __return_storage_ptr__->Pad[0] = local_58._1_1_;
  __return_storage_ptr__->Pad[1] = local_58._2_1_;
  __return_storage_ptr__->Pad[2] = local_58._3_1_;
  __return_storage_ptr__->Pad[3] = local_58._4_1_;
  __return_storage_ptr__->Pad[4] = local_58._5_1_;
  __return_storage_ptr__->Pad[5] = local_58._6_1_;
  __return_storage_ptr__->Pad[6] = local_58._7_1_;
  return __return_storage_ptr__;
}

// GetManagedResources @ 149f02180

void __thiscall
UPCGComponent::GetManagedResources
          (UPCGComponent *this,
          TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->GeneratedResourcesLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_>::operator=
            (param_1,&this->GeneratedResources);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetOriginalActorPCGData @ 149f025b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::GetOriginalActorPCGData(UPCGComponent *this)

{
  int iVar1;
  APCGPartitionActor *this_00;
  bool bVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  UPCGSubsystem *this_01;
  UPCGData *pUVar5;
  UPCGComponent *this_02;
  bool local_res8 [8];
  FName local_res10;
  FString local_28;
  
  this_00 = (APCGPartitionActor *)this->_padding_;
  if (this_00 != (APCGPartitionActor *)0x0) {
    pUVar3 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar5 = (UPCGData *)0x0;
      if ((AActor *)this->_padding_ != (AActor *)0x0) {
        pUVar4 = AActor::GetWorld((AActor *)this->_padding_);
        this_01 = UPCGSubsystem::GetInstance(pUVar4);
        if (this_01 != (UPCGSubsystem *)0x0) {
          local_res8[0] = false;
          pUVar5 = UPCGSubsystem::GetOriginalActorPCGData
                             (this_01,this->CurrentGenerationTask,local_res8);
          if ((local_res8[0] == false) &&
             (this_02 = APCGPartitionActor::GetOriginalComponent(this_00,this),
             this_02 != (UPCGComponent *)0x0)) {
            pUVar5 = GetActorPCGData(this_02);
            if (pUVar5 == (UPCGData *)0x0) {
              pUVar5 = CreateActorPCGData(this_02,(AActor *)this_02->_padding_,
                                          this_02->bParseActorComponents);
            }
            UPCGSubsystem::SetOriginalActorPCGData(this_01,this->CurrentGenerationTask,pUVar5);
            bVar2 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                              ((IPCGBaseSubsystem *)&this_01->_padding_);
            if (((bVar2) && (this->CurrentGenerationTask != 0xffffffffffffffff)) &&
               (4 < (byte)LogPCG._0_1_)) {
              local_res10 = *(FName *)(this->_padding_ + 0x18);
              ::FName::ToString(&local_res10,&local_28);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
            }
          }
        }
      }
      return pUVar5;
    }
  }
  pUVar5 = GetActorPCGData(this);
  return pUVar5;
}

// GetOriginalComponent @ 149f027c0

UPCGComponent * __thiscall UPCGComponent::GetOriginalComponent(UPCGComponent *this)

{
  int iVar1;
  APCGPartitionActor *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UPCGComponent *pUVar5;
  
  if (this->bIsComponentLocal != false) {
    this_00 = (APCGPartitionActor *)this->_padding_;
    if (this_00 != (APCGPartitionActor *)0x0) {
      pUVar4 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        pUVar5 = APCGPartitionActor::GetOriginalComponent(this_00,this);
        return pUVar5;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653771506>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0xcf2,"PartitionActor");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UPCGComponent *)(*pcVar2)();
      return pUVar5;
    }
  }
  return this;
}

// GetOriginalGridBounds @ 149f02860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
UPCGComponent::GetOriginalGridBounds(UPCGComponent *this,TBox<double> *__return_storage_ptr__)

{
  int iVar1;
  APCGPartitionActor *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UPCGSubsystem *this_01;
  TBox<double> *pTVar6;
  UPCGComponent *pUVar7;
  TVector<double>_u_0 *pTVar8;
  UPCGComponent *pUVar9;
  undefined1 auStack_d8 [32];
  FName local_b8;
  FString local_b0;
  TVector<double>_u_0 local_98;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  char local_60;
  TBox<double> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this_00 = (APCGPartitionActor *)this->_padding_;
  if (this_00 == (APCGPartitionActor *)0x0) {
LAB_149f02af9:
    GetGridBounds(this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pUVar4 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_)) goto LAB_149f02af9;
  if (this->CurrentGenerationTask == 0xffffffffffffffff) {
    pUVar9 = APCGPartitionActor::GetOriginalComponent(this_00,this);
    if (pUVar9 != (UPCGComponent *)0x0) {
      this = pUVar9;
    }
    PCGHelpers::GetGridBounds(__return_storage_ptr__,(AActor *)this->_padding_,this);
    return __return_storage_ptr__;
  }
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    this_01 = (UPCGSubsystem *)0x0;
  }
  else {
    pUVar5 = AActor::GetWorld((AActor *)this->_padding_);
    this_01 = UPCGSubsystem::GetInstance(pUVar5);
    if (this_01 != (UPCGSubsystem *)0x0) goto LAB_149f0291f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PCGSubsystem",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                     ,0xe22,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TBox<double> *)(*pcVar2)();
    return pTVar6;
  }
LAB_149f0291f:
  UPCGSubsystem::GetOriginalBounds
            (this_01,(TOptional<UE::Math::TBox<double>_> *)&local_98._s_0,
             this->CurrentGenerationTask);
  if (local_60 == '\0') {
    pUVar7 = APCGPartitionActor::GetOriginalComponent(this_00,this);
    pUVar9 = this;
    if (pUVar7 != (UPCGComponent *)0x0) {
      pUVar9 = pUVar7;
    }
    pTVar8 = (TVector<double>_u_0 *)
             PCGHelpers::GetGridBounds(&local_58,(AActor *)pUVar9->_padding_,pUVar9);
    if (pTVar8 == &local_98) {
      if ((local_60 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TBox<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    else {
      local_98._s_0.X = (((TVector<double> *)&(pTVar8->_s_0).X)->field0_0x0)._s_0.X;
      local_98._s_0.Y = (pTVar8->_s_0).Y;
      local_98._s_0.Z = (pTVar8->_s_0).Z;
      dStack_80 = (((TVector<double> *)(pTVar8->XYZ + 3))->field0_0x0)._s_0.X;
      local_78 = pTVar8->XYZ[4];
      dStack_70 = pTVar8->XYZ[5];
      local_68 = pTVar8->XYZ[6];
      local_60 = '\x01';
    }
    UPCGSubsystem::SetOriginalBounds
              (this_01,this->CurrentGenerationTask,(TBox<double> *)&local_98._s_0);
    bVar3 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                      ((IPCGBaseSubsystem *)&this_01->_padding_);
    if ((bVar3) && (4 < (byte)LogPCG._0_1_)) {
      local_b8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_b8,&local_b0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    if (local_60 == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalBounds.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0xe35,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TBox<double> *)(*pcVar2)();
        return pTVar6;
      }
      if ((local_60 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TBox<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_98._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_98._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_98._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_80;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_78;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_70;
  __return_storage_ptr__->IsValid = (undefined1)local_68;
  __return_storage_ptr__->Pad[0] = local_68._1_1_;
  __return_storage_ptr__->Pad[1] = local_68._2_1_;
  __return_storage_ptr__->Pad[2] = local_68._3_1_;
  __return_storage_ptr__->Pad[3] = local_68._4_1_;
  __return_storage_ptr__->Pad[4] = local_68._5_1_;
  __return_storage_ptr__->Pad[5] = local_68._6_1_;
  __return_storage_ptr__->Pad[6] = local_68._7_1_;
  return __return_storage_ptr__;
}

// GetOriginalLocalSpaceBounds @ 149f02bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
UPCGComponent::GetOriginalLocalSpaceBounds(UPCGComponent *this,TBox<double> *__return_storage_ptr__)

{
  int iVar1;
  APCGPartitionActor *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UPCGSubsystem *this_01;
  TBox<double> *pTVar6;
  UPCGComponent *pUVar7;
  TVector<double>_u_0 *pTVar8;
  UPCGComponent *pUVar9;
  undefined1 auStack_d8 [32];
  FName local_b8;
  FString local_b0;
  TVector<double>_u_0 local_98;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  char local_60;
  TBox<double> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this_00 = (APCGPartitionActor *)this->_padding_;
  if (this_00 == (APCGPartitionActor *)0x0) {
LAB_149f02e49:
    GetLocalSpaceBounds(this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pUVar4 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_)) goto LAB_149f02e49;
  if (this->CurrentGenerationTask == 0xffffffffffffffff) {
    pUVar9 = APCGPartitionActor::GetOriginalComponent(this_00,this);
    if (pUVar9 != (UPCGComponent *)0x0) {
      this = pUVar9;
    }
    PCGHelpers::GetActorLocalBounds(__return_storage_ptr__,(AActor *)this->_padding_,true);
    return __return_storage_ptr__;
  }
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    this_01 = (UPCGSubsystem *)0x0;
  }
  else {
    pUVar5 = AActor::GetWorld((AActor *)this->_padding_);
    this_01 = UPCGSubsystem::GetInstance(pUVar5);
    if (this_01 != (UPCGSubsystem *)0x0) goto LAB_149f02c6f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PCGSubsystem",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                     ,0xe69,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TBox<double> *)(*pcVar2)();
    return pTVar6;
  }
LAB_149f02c6f:
  UPCGSubsystem::GetOriginalLocalSpaceBounds
            (this_01,(TOptional<UE::Math::TBox<double>_> *)&local_98._s_0,
             this->CurrentGenerationTask);
  if (local_60 == '\0') {
    pUVar7 = APCGPartitionActor::GetOriginalComponent(this_00,this);
    pUVar9 = this;
    if (pUVar7 != (UPCGComponent *)0x0) {
      pUVar9 = pUVar7;
    }
    pTVar8 = (TVector<double>_u_0 *)
             PCGHelpers::GetActorLocalBounds(&local_58,(AActor *)pUVar9->_padding_,true);
    if (pTVar8 == &local_98) {
      if ((local_60 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TBox<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    else {
      local_98._s_0.X = (((TVector<double> *)&(pTVar8->_s_0).X)->field0_0x0)._s_0.X;
      local_98._s_0.Y = (pTVar8->_s_0).Y;
      local_98._s_0.Z = (pTVar8->_s_0).Z;
      dStack_80 = (((TVector<double> *)(pTVar8->XYZ + 3))->field0_0x0)._s_0.X;
      local_78 = pTVar8->XYZ[4];
      dStack_70 = pTVar8->XYZ[5];
      local_68 = pTVar8->XYZ[6];
      local_60 = '\x01';
    }
    UPCGSubsystem::SetOriginalLocalSpaceBounds
              (this_01,this->CurrentGenerationTask,(TBox<double> *)&local_98._s_0);
    bVar3 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                      ((IPCGBaseSubsystem *)&this_01->_padding_);
    if ((bVar3) && (4 < (byte)LogPCG._0_1_)) {
      local_b8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_b8,&local_b0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    if (local_60 == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalLocalSpaceBounds.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0xe7c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TBox<double> *)(*pcVar2)();
        return pTVar6;
      }
      if ((local_60 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TBox<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_98._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_98._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_98._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_80;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_78;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_70;
  __return_storage_ptr__->IsValid = (undefined1)local_68;
  __return_storage_ptr__->Pad[0] = local_68._1_1_;
  __return_storage_ptr__->Pad[1] = local_68._2_1_;
  __return_storage_ptr__->Pad[2] = local_68._3_1_;
  __return_storage_ptr__->Pad[3] = local_68._4_1_;
  __return_storage_ptr__->Pad[4] = local_68._5_1_;
  __return_storage_ptr__->Pad[5] = local_68._6_1_;
  __return_storage_ptr__->Pad[6] = local_68._7_1_;
  return __return_storage_ptr__;
}

// GetPCGData @ 149f03140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __thiscall UPCGComponent::GetPCGData(UPCGComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UPCGSubsystem *this_00;
  UPCGData *pUVar3;
  UPCGSubsystem *this_01;
  bool bVar4;
  bool local_res8 [8];
  FName local_res10;
  FName local_res18;
  FString local_38;
  
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    return (UPCGData *)0x0;
  }
  pUVar2 = AActor::GetWorld((AActor *)this->_padding_);
  this_00 = UPCGSubsystem::GetInstance(pUVar2);
  if (this_00 != (UPCGSubsystem *)0x0) {
    local_res8[0] = false;
    pUVar3 = UPCGSubsystem::GetPCGData(this_00,this->CurrentGenerationTask,local_res8);
    if (local_res8[0] == false) {
      pUVar3 = (this->CachedPCGData).field0_0x0.DebugPtr;
      if (pUVar3 == (UPCGData *)0x0) {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId3439,"UPCGComponent::CreatePCGData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                     ,0xd6f);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3439);
        }
        pUVar3 = (UPCGData *)0x0;
        if ((AActor *)this->_padding_ != (AActor *)0x0) {
          pUVar2 = AActor::GetWorld((AActor *)this->_padding_);
          this_01 = UPCGSubsystem::GetInstance(pUVar2);
          if (this_01 != (UPCGSubsystem *)0x0) {
            local_res10 = (FName)((ulonglong)local_res10 & 0xffffffffffffff00);
            pUVar3 = UPCGSubsystem::GetInputPCGData
                               (this_01,this->CurrentGenerationTask,(bool *)&local_res10);
            if ((char)local_res10.ComparisonIndex.Value == '\0') {
              pUVar3 = (this->CachedInputData).field0_0x0.DebugPtr;
              if (pUVar3 == (UPCGData *)0x0) {
                pUVar3 = CreateInputPCGData(this);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar3 != (UPCGData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar3);
              }
              (this->CachedInputData).field0_0x0.DebugPtr = pUVar3;
              UPCGSubsystem::SetInputPCGData(this_01,this->CurrentGenerationTask,pUVar3);
              bVar1 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                                ((IPCGBaseSubsystem *)&this_01->_padding_);
              if (((bVar1) && (this->CurrentGenerationTask != 0xffffffffffffffff)) &&
                 (4 < (byte)LogPCG._0_1_)) {
                local_res18 = *(FName *)(this->_padding_ + 0x18);
                ::FName::ToString(&local_res18,&local_38);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_38.Data.AllocatorInstance.Data);
                }
              }
            }
          }
        }
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->CachedPCGData).field0_0x0.DebugPtr = pUVar3;
      UPCGSubsystem::SetPCGData(this_00,this->CurrentGenerationTask,pUVar3);
      bVar4 = IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled
                        ((IPCGBaseSubsystem *)&this_00->_padding_);
      if (((bVar4) && (this->CurrentGenerationTask != 0xffffffffffffffff)) &&
         (4 < (byte)LogPCG._0_1_)) {
        local_res10 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res10,&local_38);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    return pUVar3;
  }
  return (UPCGData *)0x0;
}

// GetPrivateStaticClass @ 149f03f80

UClass * __cdecl UPCGComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComponent",
               &Z_Registration_Info_UClass_UPCGComponent.InnerSingleton,
               StaticRegisterNativesUPCGComponent,0x3c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGComponent>,
               InternalVTableHelperCtorCaller<UPCGComponent>,local_res8,UActorComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComponent.InnerSingleton;
}

// GetSubsystem @ 149f05750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSubsystem * __thiscall UPCGComponent::GetSubsystem(UPCGComponent *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld((AActor *)this->_padding_);
    pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
    return pUVar2;
  }
  return (UPCGSubsystem *)0x0;
}

// IsAnyObjectManagedByResource @ 149f07730

bool __thiscall
UPCGComponent::IsAnyObjectManagedByResource
          (UPCGComponent *this,TArrayView<UObject_const_*,int> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UObject **ppUVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FScriptContainerElement *pFVar8;
  UObject **ppUVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  bool local_res8;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId423,"UPCGComponent::IsAnyObjectManagedByResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
               ,0x1a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId423);
  }
  if (this->GeneratedResourcesInaccessible == false) {
    lpCriticalSection = &this->GeneratedResourcesLock;
    local_res8 = false;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->GeneratedResourcesInaccessible != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GeneratedResourcesInaccessible",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                           ,0x19b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar10 = (this->GeneratedResources).AllocatorInstance.Data;
    iVar2 = (this->GeneratedResources).ArrayNum;
    local_res20 = pFVar10 + (longlong)iVar2 * 8;
    pFVar8 = local_res20;
    while( true ) {
      if ((this->GeneratedResources).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UPCGManagedResource>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar10 == pFVar8) break;
      plVar3 = *(longlong **)pFVar10;
      if ((plVar3 == (longlong *)0x0) || (local_res8 != false)) {
LAB_149f078fa:
        pFVar10 = pFVar10 + 8;
      }
      else {
        ppUVar9 = param_1->DataPtr;
        ppUVar1 = ppUVar9 + param_1->ArrayNum;
        pFVar8 = local_res20;
        if (ppUVar9 == ppUVar1) goto LAB_149f078fa;
        do {
          cVar7 = (**(code **)(*plVar3 + 0x2f8))(plVar3,*ppUVar9);
          pFVar8 = local_res20;
          if (cVar7 != '\0') {
            local_res8 = true;
            goto LAB_149f078fa;
          }
          ppUVar9 = ppUVar9 + 1;
        } while (ppUVar9 != ppUVar1);
        pFVar10 = pFVar10 + 8;
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653768619>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x1ab,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_res8 = false;
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_res8;
}

// IsEditorOnly @ 149f07a60

bool __thiscall UPCGComponent::IsEditorOnly(UPCGComponent *this)

{
  UPCGGraphInstance *pUVar1;
  char cVar2;
  
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInstance *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x120))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsLandscapeCachedDataDirty @ 149f07ff0

bool __thiscall UPCGComponent::IsLandscapeCachedDataDirty(UPCGComponent *this,UPCGData *param_1)

{
  int iVar1;
  UPCGGraphInstance *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  if (param_1 != (UPCGData *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGLandscapeData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) &&
       (pUVar2 = (this->GraphInstance).field0_0x0.DebugPtr, pUVar2 != (UPCGGraphInstance *)0x0)) {
      lVar4 = (**(code **)(pUVar2->_padding_ + 0x2b8))();
      if ((lVar4 != 0) && (param_1[6].Usage != *(atomic<unsigned_char> *)(lVar4 + 0x28))) {
        return true;
      }
    }
  }
  return false;
}

// IsPartitioned @ 149f081e0

bool __thiscall UPCGComponent::IsPartitioned(UPCGComponent *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (this->bIsComponentPartitioned == false) {
    return false;
  }
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return false;
    }
  }
  return true;
}

// MarkSubObjectsAsGarbage @ 149f08700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UPCGComponent::MarkSubObjectsAsGarbage(UPCGComponent *this)

{
  undefined1 local_res10 [24];
  code *local_28;
  undefined1 *local_20;
  code *local_18;
  code **local_10;
  
  ClearGraphGeneratedOutput(this,true);
  ClearPerPinGeneratedOutput(this);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGComponent::MarkSubObjectsAsGarbage'::__l2::<lambda_1>,void,UObject_*>
             ::Call;
  local_20 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
  ForEachObjectWithOuterBreakable
            ((UObjectBase *)this,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,true,RF_NoFlags,
             Borrowed);
  return;
}

// MoveResourcesToNewActor @ 149f08ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPCGComponent::MoveResourcesToNewActor(UPCGComponent *this,AActor *param_1,bool param_2)

{
  int *piVar1;
  AActor *this_00;
  USceneComponent *pUVar2;
  code *pcVar3;
  AActor *pAVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UWorld *pUVar8;
  AActor *this_01;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  AActor *pAVar12;
  TTransform<double> *pTVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_288 [32];
  bool local_258;
  undefined1 local_257 [7];
  FScriptContainerElement *local_250;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_248;
  FName local_238;
  UObject *local_230;
  AActor *local_228;
  FName local_220;
  FString local_218;
  FString local_208;
  undefined1 local_1f8 [112];
  TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_188;
  void *local_148;
  undefined4 local_140;
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if ((this->CurrentGenerationTask == 0xffffffffffffffff) &&
     (this->CurrentCleanupTask == 0xffffffffffffffff)) {
    this_00 = (AActor *)this->_padding_;
    local_228 = param_1;
    if (this_00 == (AActor *)0x0) {
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    else {
      if ((param_1 == (AActor *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNewActor",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                             ,0x57f,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_01 = (AActor *)0x0;
      local_258 = false;
      if (param_2) {
        FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_1f8);
        ::FString::FString(&local_218,L"PCGStampChild");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_218.Data.ArrayNum != 0) {
          FVar11.Data = local_218.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_238,(wchar_t *)FVar11.Data);
        local_1f8._0_4_ = local_238.ComparisonIndex.Value;
        local_1f8._4_4_ = local_238.Number;
        local_1f8[0x33] = Requested;
        local_1f8._32_8_ = AActor::GetLevel(this_00);
        pUVar2 = (this_00->RootComponent).field0_0x0.DebugPtr;
        if (pUVar2 == (USceneComponent *)0x0) {
          pTVar13 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar13 = &pUVar2->ComponentToWorld;
        }
        local_230 = (UObject *)param_1->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_230 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_230);
        }
        pUVar8 = (UWorld *)this->_padding_;
        if (pUVar8 == (UWorld *)0x0) {
          pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        UPCGActorHelpers::FSpawnDefaultActorParams::FSpawnDefaultActorParams
                  ((FSpawnDefaultActorParams *)local_138,pUVar8,(TSubclassOf<AActor>)&local_230,
                   pTVar13,(FActorSpawnParameters *)local_1f8);
        this_01 = UPCGActorHelpers::SpawnDefaultActor((FSpawnDefaultActorParams *)local_138);
        if (local_138._176_8_ != 0) {
          plVar10 = (longlong *)(local_138 + 0xc0);
          if ((longlong *)local_138._216_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_138._216_8_;
          }
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        if (local_1f8._64_8_ != 0) {
          plVar10 = (longlong *)(local_1f8 + 0x50);
          if ((longlong *)local_1f8._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_1f8._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      if ((&this->GeneratedResourcesLock == (FWindowsRecursiveMutex *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&this->GeneratedResourcesLock);
      if ((this->GeneratedResourcesInaccessible != false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GeneratedResourcesInaccessible",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                             ,0x5b2,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pAVar4 = local_228;
      pFVar14 = (this->GeneratedResources).AllocatorInstance.Data;
      iVar7 = (this->GeneratedResources).ArrayNum;
      local_250 = pFVar14 + (longlong)iVar7 * 8;
      pFVar9 = local_250;
      while( true ) {
        if ((this->GeneratedResources).ArrayNum != iVar7) {
          local_257[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UPCGManagedResource>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_257);
          pFVar9 = local_250;
        }
        if (pFVar14 == pFVar9) break;
        plVar10 = *(longlong **)pFVar14;
        if (plVar10 == (longlong *)0x0) {
          if (1 < (byte)LogPCG._0_1_) {
            local_220 = (FName)this_00->_padding_;
            ::FName::ToString(&local_220,&local_208);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            pFVar9 = local_250;
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
              pFVar9 = local_250;
            }
          }
          pFVar14 = pFVar14 + 8;
        }
        else {
          pAVar12 = pAVar4;
          if (this_01 != (AActor *)0x0) {
            pAVar12 = this_01;
          }
          (**(code **)(*plVar10 + 0x2e8))(plVar10,pAVar12);
          local_188._44_4_ = 0x80;
          local_188._0_8_ = 0;
          local_188._8_8_ = 0;
          local_188._32_8_ = 0;
          local_188._40_4_ = 0;
          local_188._48_4_ = 0xffffffff;
          local_188._52_4_ = 0;
          local_148 = (void *)0x0;
          local_140 = 0;
          (**(code **)(**(longlong **)pFVar14 + 0x2c0))(*(longlong **)pFVar14,&local_188);
          local_258 = true;
          local_140 = 0;
          if (local_148 != (void *)0x0) {
            FMemory::Free(local_148);
          }
          TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_188);
          pFVar14 = pFVar14 + 8;
          pFVar9 = local_250;
        }
      }
      piVar1 = &(this->GeneratedResources).ArrayMax;
      (this->GeneratedResources).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->GeneratedResources).AllocatorInstance,0,piVar1);
      }
      if (&this->GeneratedResourcesLock != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->GeneratedResourcesLock);
      }
      if (this_01 == (AActor *)0x0) {
        return local_258;
      }
      if (local_258 == false) {
        pUVar8 = (UWorld *)this->_padding_;
        if (pUVar8 == (UWorld *)0x0) {
          pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        UWorld::DestroyActor(pUVar8,this_01,false,true);
      }
      else {
        pUVar2 = (this_01->RootComponent).field0_0x0.DebugPtr;
        if ((pUVar2 == (USceneComponent *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("RootComponent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                               ,0x5d9,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.ArrayNum = 0;
        local_248.ArrayMax = 0;
        AActor::GetAttachedActors(this_01,&local_248,true,false);
        iVar7 = USceneComponent::GetNumChildrenComponents(pUVar2);
        if ((iVar7 != 0) || (local_248.ArrayNum != 0)) {
          if (local_248.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return local_258;
          }
          FMemory::Free(local_248.AllocatorInstance.Data);
          return local_258;
        }
        pUVar8 = (UWorld *)this->_padding_;
        if (pUVar8 == (UWorld *)0x0) {
          pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        UWorld::DestroyActor(pUVar8,this_01,false,true);
        if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.AllocatorInstance.Data);
        }
      }
    }
  }
  return false;
}

// NotifyPropertiesChangedFromBlueprint @ 149f09270

void __thiscall UPCGComponent::NotifyPropertiesChangedFromBlueprint(UPCGComponent *this)

{
  return;
}

// OnComponentDestroyed @ 149f095a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::OnComponentDestroyed(UPCGComponent *this,bool param_1)

{
  int iVar1;
  APCGPartitionActor *this_00;
  UClass *pUVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2039,"UPCGComponent::OnComponentDestroyed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
               ,0x7f7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2039);
  }
  this_00 = (APCGPartitionActor *)this->_padding_;
  if (this_00 != (APCGPartitionActor *)0x0) {
    pUVar2 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      APCGPartitionActor::RemoveLocalComponent(this_00,this);
    }
  }
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnGraphChanged @ 149f09670

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
UPCGComponent::OnGraphChanged
          (UPCGComponent *this,UPCGGraphInterface *param_1,EPCGChangeType param_2)

{
  UPCGGraphInstance *pUVar1;
  longlong lVar2;
  UPCGSubsystem *this_00;
  bool bVar3;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> TStack_18;
  
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInstance *)0x0) {
    bVar3 = param_1 == (UPCGGraphInterface *)0x0;
  }
  else {
    bVar3 = pUVar1 == (UPCGGraphInstance *)param_1;
  }
  if (bVar3) {
    if (((param_2 & ~(GraphCustomization|Cosmetic)) == None) &&
       (param_2 != (GraphCustomization|Cosmetic))) {
      return;
    }
    if ((param_1 == (UPCGGraphInterface *)0x0) ||
       (lVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1), lVar2 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (this->GenerationTrigger == GenerateAtRuntime) {
      this_00 = GetSubsystem(this);
      if (this_00 != (UPCGSubsystem *)0x0) {
        UPCGSubsystem::RefreshRuntimeGenComponent(this_00,this,param_2);
        return;
      }
    }
    else if (bVar3) {
      if (this->bGenerated != false) {
        GenerateLocal(this,true);
        return;
      }
    }
    else {
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      CleanupLocal(this,true,&TStack_18);
      if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
    }
    return;
  }
  return;
}

// OnProcessGraphAborted @ 149f09b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGComponent::OnProcessGraphAborted(UPCGComponent *this,bool param_1,bool param_2)

{
  UPCGComponent *local_res8;
  
  if ((!param_1) && (2 < (byte)LogPCG._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  if (param_2) {
    CleanupUnusedManagedResources(this);
  }
  this->CurrentGenerationTask = 0xffffffffffffffff;
  this->CurrentCleanupTask = 0xffffffffffffffff;
  TMulticastDelegate<void___cdecl(UPCGComponent_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPCGGraphCancelledDelegate,this);
  local_res8 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnPCGGraphCancelledExternal,&local_res8);
  return;
}

// OnRegister @ 149f09c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::OnRegister(UPCGComponent *this)

{
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  UActorComponent::OnRegister((UActorComponent *)this);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// OnUnregister @ 149f09ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::OnUnregister(UPCGComponent *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  UWorld *this_00;
  
  if ((this->_padding_ & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreRegistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreUnregistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar2 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if ((lVar2 & 0x300000000) != 0) {
    this_00 = UActorComponent::GetWorld((UActorComponent *)this);
    if (this_00 != (UWorld *)0x0) {
      UWorld::ClearActorComponentEndOfFrameUpdate(this_00,(UActorComponent *)this);
      return;
    }
  }
  return;
}

// PostCleanupGraph @ 149f0b040

void __thiscall UPCGComponent::PostCleanupGraph(UPCGComponent *this,bool param_1)

{
  UPCGComponent *local_res8 [4];
  
  this->CurrentCleanupTask = 0xffffffffffffffff;
  if (param_1) {
    this->bGenerated = false;
    ClearGraphGeneratedOutput(this,false);
    ClearPerPinGeneratedOutput(this);
    TMulticastDelegate<void___cdecl(UPCGComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPCGGraphCleanedDelegate,this);
    local_res8[0] = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnPCGGraphCleanedExternal,local_res8);
  }
  return;
}

// PostInitProperties @ 149f0c6a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::PostInitProperties(UPCGComponent *this)

{
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  UActorComponent::PostInitProperties((UActorComponent *)this);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// PostLoad @ 149f0c720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::PostLoad(UPCGComponent *this)

{
  UPCGSchedulingPolicyBase *pUVar1;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  UActorComponent::PostLoad((UActorComponent *)this);
  pUVar1 = (this->SchedulingPolicy).field0_0x0.DebugPtr;
  if ((pUVar1 == (UPCGSchedulingPolicyBase *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
    RefreshSchedulingPolicy(this);
  }
  else {
    UObjectBase::AtomicallySetFlags
              ((UObjectBase *)(this->SchedulingPolicy).field0_0x0.DebugPtr,
               (EObjectFlags)this->_padding_ & (RF_Transient|RF_ArchetypeObject|RF_Public) |
               RF_Transactional);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PostProcessGraph @ 149f0cc80

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

void __thiscall
UPCGComponent::PostProcessGraph
          (UPCGComponent *this,TBox<double> *param_1,bool param_2,FPCGContext *param_3)

{
  int *piVar1;
  FPCGDataCollection *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar5;
  code *pcVar6;
  double dVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  TConsoleVariableData<bool> *pTVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  UWorld *pUVar19;
  longlong lVar20;
  UPCGData *pUVar21;
  TObjectPtr<UPCGData_const_>_u_0 TVar22;
  UClass *pUVar23;
  IPCGGraphExecutionSource *pIVar24;
  TObjectPtr<UPCGData_const_>_u_0 TVar25;
  FPCGDataPtrWrapper *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_1b8 [32];
  char local_168 [8];
  UPCGComponent *local_160;
  UPCGComponent *local_158;
  UPCGComponent *local_150;
  UPCGComponent *local_148;
  char *local_140;
  code *local_138;
  UPCGComponent **local_130;
  code *local_128;
  UPCGComponent **local_120;
  code *local_118;
  char *local_110;
  code *local_108;
  UPCGComponent **local_100;
  TObjectPtr<UPCGData_const_>_u_0 local_f8 [2];
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TObjectPtr<UPCGData_const_>_u_0 local_98;
  undefined1 local_90;
  FScriptContainerElement local_8f;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pIVar24 = (IPCGGraphExecutionSource *)&this->_padding_;
  if (this == (UPCGComponent *)0x0) {
    pIVar24 = (IPCGGraphExecutionSource *)0x0;
  }
  PCGGraphExecutionLogging::LogPostProcessGraph(pIVar24);
  dVar7 = (param_1->Min).field0_0x0._s_0.Y;
  (this->LastGeneratedBounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->LastGeneratedBounds).Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->Max).field0_0x0._s_0.X;
  (this->LastGeneratedBounds).Min.field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  (this->LastGeneratedBounds).Max.field0_0x0._s_0.X = dVar7;
  dVar7 = (param_1->Max).field0_0x0._s_0.Z;
  (this->LastGeneratedBounds).Max.field0_0x0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  (this->LastGeneratedBounds).Max.field0_0x0._s_0.Z = dVar7;
  uVar8 = param_1->Pad[0];
  uVar9 = param_1->Pad[1];
  uVar10 = param_1->Pad[2];
  uVar11 = param_1->Pad[3];
  uVar12 = param_1->Pad[4];
  uVar13 = param_1->Pad[5];
  uVar14 = param_1->Pad[6];
  (this->LastGeneratedBounds).IsValid = param_1->IsValid;
  (this->LastGeneratedBounds).Pad[0] = uVar8;
  (this->LastGeneratedBounds).Pad[1] = uVar9;
  (this->LastGeneratedBounds).Pad[2] = uVar10;
  (this->LastGeneratedBounds).Pad[3] = uVar11;
  (this->LastGeneratedBounds).Pad[4] = uVar12;
  (this->LastGeneratedBounds).Pad[5] = uVar13;
  (this->LastGeneratedBounds).Pad[6] = uVar14;
  CleanupUnusedManagedResources(this);
  ClearGraphGeneratedOutput(this,false);
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar19 = AActor::GetWorld((AActor *)this->_padding_);
    UPCGSubsystem::GetInstance(pUVar19);
  }
  if (param_2) {
    this->bGenerated = true;
    this->CurrentGenerationTask = 0xffffffffffffffff;
    if (param_3 != (FPCGContext *)0x0) {
      pFVar4 = (param_3->InputData).TaggedData.AllocatorInstance.Data;
      iVar3 = (param_3->InputData).TaggedData.ArrayNum;
      pFVar27 = pFVar4 + 0x60;
LAB_149f0cd74:
      do {
        if ((param_3->InputData).TaggedData.ArrayNum != iVar3) {
          local_168[1] = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_168 + 1);
        }
        pFVar26 = (FPCGDataPtrWrapper *)(pFVar27 + -0x60);
        if (pFVar26 == (FPCGDataPtrWrapper *)(pFVar4 + (longlong)iVar3 * 0x78)) {
          FPCGDataCollection::operator=(&param_3->OutputData,&param_3->InputData);
          break;
        }
        pUVar21 = (pFVar26->Data).field0_0x0.DebugPtr;
        if (pUVar21 != (UPCGData *)0x0) {
          cVar16 = (**(code **)(pUVar21->_padding_ + 0x2c8))();
          pTVar15 = PCGComponent::CVarDisableStealingForFlattenInPostProcessGraph.Ref;
          if (cVar16 != '\0') {
            if (pFVar27[9] == (FScriptContainerElement)0x0) {
              bVar17 = IsInParallelGameThread();
              if (bVar17) {
LAB_149f0cdda:
                lVar20 = 0;
              }
              else {
                bVar17 = IsInGameThread();
                if (bVar17) goto LAB_149f0cdda;
                lVar20 = 1;
              }
              if (pTVar15->ShadowedValue[lVar20] != false) goto LAB_149f0ce1c;
              pUVar21 = (pFVar26->Data).field0_0x0.DebugPtr;
              local_140 = local_168;
              local_168[0] = '\x01';
              local_130 = &local_148;
              local_138 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UPCGComponent::PostProcessGraph'::__l18::<lambda_1>,void,UPCGData_const_*>
                          ::Call;
              local_148 = this;
              (**(code **)(pUVar21->_padding_ + 0x2c0))(pUVar21,&local_138);
            }
            else {
LAB_149f0ce1c:
              local_168[0] = '\0';
            }
            FPCGDataPtrWrapper::FPCGDataPtrWrapper
                      ((FPCGDataPtrWrapper *)&local_f8[0].ObjectPtr,pFVar26);
            local_bc = 0x80;
            local_e8._0_8_ = (FScriptContainerElement *)0x0;
            local_e8._8_8_ = 0;
            local_c8 = (void *)0x0;
            local_c0 = 0;
            local_b4 = 0;
            local_a8 = (ForElementType<FSetElementId>)0x0;
            local_a0 = 0;
            local_b8 = 0xffffffff;
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       (pFVar27 + -0x50));
            local_98.ObjectPtr.field0_0x0 = *(FObjectPtr *)&pFVar27->field_0x0;
            local_90 = pFVar27[8].field_0x0;
            local_8f = pFVar27[9];
            local_8c = *(undefined8 *)(pFVar27 + 0xc);
            local_84 = *(undefined4 *)(pFVar27 + 0x14);
            if (local_168[0] == '\0') {
              pUVar21 = (UPCGData *)
                        (**(code **)(**(longlong **)(pFVar27 + -0x60) + 0x310))
                                  (*(longlong **)(pFVar27 + -0x60),param_3,1);
              if (pUVar21 != (UPCGData *)0x0) {
                FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)&local_f8[0].ObjectPtr,pUVar21);
                goto LAB_149f0cfb4;
              }
              if (2 < (byte)LogPCG._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              }
            }
            else {
              if (this->CurrentEditingMode == Preview) {
                local_120 = &local_160;
                local_128 = UE::Core::Private::Function::
                            TFunctionRefCaller<`UPCGComponent::PostProcessGraph'::__l48::<lambda_2>,void,UPCGData_const_*>
                            ::Call;
                local_160 = this;
                (**(code **)((local_f8[0].DebugPtr)->_padding_ + 0x2c0))
                          (local_f8[0].DebugPtr,&local_128);
              }
LAB_149f0cfb4:
              local_110 = local_168 + 2;
              local_118 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UPCGComponent::PostProcessGraph'::__l15::<lambda_3>,void,UPCGData_const_*>
                          ::Call;
              (**(code **)((local_f8[0].DebugPtr)->_padding_ + 0x2c0))
                        (local_f8[0].DebugPtr,&local_118);
              local_100 = &local_158;
              local_108 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UPCGComponent::PostProcessGraph'::__l15::<lambda_4>,void,UPCGData_const_*>
                          ::Call;
              local_158 = this;
              (**(code **)((local_f8[0].DebugPtr)->_padding_ + 0x2c0))
                        (local_f8[0].DebugPtr,&local_108);
              pTVar15 = PCGComponent::CVarConvertToPointDataInPostProcessGraph.Ref;
              bVar17 = IsInParallelGameThread();
              if (bVar17) {
LAB_149f0d021:
                TVar22.DebugPtr = (UPCGData *)0x0;
              }
              else {
                bVar17 = IsInGameThread();
                TVar22 = (TObjectPtr<UPCGData_const_>_u_0)0x1;
                if (bVar17) goto LAB_149f0d021;
              }
              TVar25 = local_f8[0];
              if (pTVar15->ShadowedValue[(longlong)&(TVar22.DebugPtr)->_padding_] != false) {
                if (local_f8[0].DebugPtr == (UPCGData *)0x0) {
LAB_149f0d05a:
                  TVar25.DebugPtr = (UPCGData *)0x0;
                }
                else {
                  pUVar23 = Z_Construct_UClass_UPCGPointArrayData_NoRegister();
                  lVar20 = (TVar25.DebugPtr)->_padding_;
                  iVar18 = (int)pUVar23->_padding_;
                  if ((*(int *)(lVar20 + 0x38) < iVar18) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar18 * 8) !=
                      &pUVar23->_padding_)) goto LAB_149f0d05a;
                }
                if (TVar25.DebugPtr != (UPCGData *)0x0) {
                  local_48 = 0;
                  local_47 = 0;
                  local_43 = 0;
                  local_41 = 0;
                  local_78 = 0;
                  uStack_70 = 0;
                  local_68 = 0;
                  uStack_60 = 0;
                  local_58 = 0;
                  uStack_50 = 0;
                  pUVar21 = (UPCGData *)
                            (**(code **)((TVar25.DebugPtr)->_padding_ + 0x3b0))
                                      (TVar25.DebugPtr,param_3,&local_78);
                  FPCGDataPtrWrapper::operator=
                            ((FPCGDataPtrWrapper *)&local_f8[0].ObjectPtr,pUVar21);
                  if (2 < (byte)LogPCG._0_1_) {
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  }
                }
              }
              pFVar2 = &this->GeneratedGraphOutput;
              pTVar5 = (TObjectPtr<UPCGData_const_>_u_0 *)
                       (pFVar2->TaggedData).AllocatorInstance.Data;
              if ((pTVar5 <= local_f8) &&
                 (local_f8 <
                  pTVar5 + (longlong)(this->GeneratedGraphOutput).TaggedData.ArrayMax * 0xf)) {
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar17) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              iVar18 = (this->GeneratedGraphOutput).TaggedData.ArrayNum;
              piVar1 = &(this->GeneratedGraphOutput).TaggedData.ArrayMax;
              if (iVar18 == *piVar1) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,(ForAnyElementType *)pFVar2,piVar1);
              }
              (this->GeneratedGraphOutput).TaggedData.ArrayNum = iVar18 + 1;
              pFVar26 = (FPCGDataPtrWrapper *)
                        ((pFVar2->TaggedData).AllocatorInstance.Data + (longlong)iVar18 * 0x78);
              FPCGDataPtrWrapper::FPCGDataPtrWrapper
                        (pFVar26,(FPCGDataPtrWrapper *)&local_f8[0].ObjectPtr);
              *(undefined8 *)
               &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar26 + 1))->
                Elements = 0;
              pFVar26[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
              pFVar26[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              pFVar26[3].WeakData.WeakPtr.ObjectIndex = 0;
              pFVar26[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
              *(undefined4 *)&pFVar26[4].Data.field0_0x0 = 0xffffffff;
              *(undefined4 *)((longlong)&pFVar26[4].Data.field0_0x0 + 4) = 0;
              pFVar26[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              pFVar26[5].WeakData.WeakPtr.ObjectIndex = 0;
              TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                         (pFVar26 + 1),
                         (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8);
              pFVar26[6].Data.field0_0x0 = local_98;
              *(undefined1 *)&pFVar26[6].WeakData.WeakPtr.ObjectIndex = local_90;
              *(FScriptContainerElement *)((longlong)&pFVar26[6].WeakData.WeakPtr.ObjectIndex + 1) =
                   local_8f;
              *(undefined8 *)&pFVar26[6].WeakData.WeakPtr.ObjectSerialNumber = local_8c;
              *(undefined4 *)((longlong)&pFVar26[7].Data.field0_0x0 + 4) = local_84;
            }
            local_a0 = 0;
            if (local_a8 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_a8);
            }
            TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_e8,0,local_e8._8_4_);
            iVar18 = SUB84(local_e8._8_8_,4);
            local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
            if (iVar18 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
            }
            local_c0 = 0;
            local_b4 = 0;
            local_b8 = 0xffffffff;
            if (0x80 < local_bc) {
              local_bc = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
            }
            if (local_c8 != (void *)0x0) {
              FMemory::Free(local_c8);
            }
            if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_e8._0_8_);
            }
            FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_f8[0].ObjectPtr);
            pFVar27 = pFVar27 + 0x78;
            goto LAB_149f0cd74;
          }
        }
        bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4712353729653768914>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                            ,0x2d2,"TaggedData.Data && TaggedData.Data->CanBeSerialized()");
        if (bVar17) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar27 = pFVar27 + 0x78;
      } while( true );
    }
    TMulticastDelegate<void___cdecl(UPCGComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPCGGraphGeneratedDelegate,this);
    if ((((uint)this->_padding_ >> 0x1e & 1) == 0) && (param_3 != (FPCGContext *)0x0)) {
      CallPostGenerateFunctions(this,param_3);
    }
    if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
      local_150 = this;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnPCGGraphGeneratedExternal,&local_150);
    }
  }
  return;
}

// PurgeUnlinkedResources @ 149f0dd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPCGComponent::PurgeUnlinkedResources(AActor *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  AActor *this;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> local_100;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_f0;
  <lambda_2> local_d8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_c8;
  undefined1 local_b8 [24];
  FUtf8String local_a0;
  undefined1 local_90 [8];
  TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  if (param_1 == (AActor *)0x0) {
    return;
  }
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  AActor::GetAttachedActors(param_1,&local_c8,true,false);
  iVar2 = local_c8.ArrayNum;
  pFVar1 = local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 8;
  FVar10.Data = local_c8.AllocatorInstance.Data;
  while( true ) {
    if (local_c8.ArrayNum != iVar2) {
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108)
      ;
    }
    if (FVar10.Data == pFVar1) break;
    this = *(AActor **)FVar10.Data;
    if ((this != (AActor *)0x0) &&
       (bVar3 = AActor::ActorHasTag(this,PCGHelpers::DefaultPCGActorTag), bVar3)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8._16_8_ = 0;
      local_b8._8_8_ = 0;
      local_a0.Data.ArrayNum = 0;
      local_a0.Data.ArrayMax = 0;
      local_b8._0_8_ = 0;
      local_d8.ActorComponentList = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)0x0;
      FUtf8String::Reset(&local_a0,0);
      local_100.AllocatorInstance.Data = (FScriptContainerElement *)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)local_b8,(FObjectPtr)&local_100);
      TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>::
      Emplace<TSoftObjectPtr<AActor>_>
                (&local_88,(TSoftObjectPtr<AActor> *)local_90,(bool *)local_b8);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = FVar10.Data + 8;
  }
  pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_149f0def4;
LAB_149f0df25:
    pUVar5 = (UClass *)0x0;
  }
  else {
    if (pUVar4 == (UClass *)0x0) goto LAB_149f0df25;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_149f0def4:
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar5 == (UClass *)0x0) goto LAB_149f0df25;
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pUVar5 = pUVar4;
    if (!bVar3) goto LAB_149f0df25;
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)pUVar4;
  if (pUVar5 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,&local_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,&local_f0);
  }
  pUVar4 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_149f0dfae;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_149f0dfae:
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar2 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pUVar5 = pUVar4;
      if (bVar3) goto LAB_149f0dfe2;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_149f0dfe2:
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)pUVar4;
  if (pUVar5 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_d8.ActorComponentList = &local_f0;
    local_d8.ActorsToDelete = &local_88;
    AActor::
    ForEachComponent_Internal<UPCGComponent,1,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_2>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,&local_d8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_d8.ActorComponentList = &local_f0;
    local_d8.ActorsToDelete = &local_88;
    AActor::
    ForEachComponent_Internal<UPCGComponent,0,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_2>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,&local_d8);
  }
  iVar2 = local_f0.ArrayNum;
  uVar9 = (ulonglong)local_f0.ArrayNum;
  pFVar1 = local_f0.AllocatorInstance.Data + uVar9 * 8;
  FVar10.Data = local_f0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (FVar10.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar10.Data + 0x4a0))(*(longlong **)FVar10.Data,0);
    uVar9 = local_f0._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 8;
  }
  pUVar7 = AActor::GetWorld(param_1);
  if (pUVar7 != (UWorld *)0x0) {
    pTVar8 = TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
             ::Array(&local_88,&local_100);
    UPCGActorHelpers::DeleteActors(pUVar7,pTVar8);
    DestructItems<TSoftObjectPtr<AActor>,int>
              ((TSoftObjectPtr<AActor> *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
    if ((UClass *)local_100.AllocatorInstance.Data != (UClass *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// RefreshAfterGraphChanged @ 149f0e580

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
UPCGComponent::RefreshAfterGraphChanged
          (UPCGComponent *this,UPCGGraphInterface *param_1,EPCGChangeType param_2)

{
  UPCGGraphInstance *pUVar1;
  longlong lVar2;
  UPCGSubsystem *this_00;
  bool bVar3;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInstance *)0x0) {
    bVar3 = param_1 == (UPCGGraphInterface *)0x0;
  }
  else {
    bVar3 = pUVar1 == (UPCGGraphInstance *)param_1;
  }
  if (bVar3) {
    if (((param_2 & ~(GraphCustomization|Cosmetic)) == None) &&
       (param_2 != (GraphCustomization|Cosmetic))) {
      return;
    }
    if ((param_1 == (UPCGGraphInterface *)0x0) ||
       (lVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1), lVar2 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (this->GenerationTrigger == GenerateAtRuntime) {
      this_00 = GetSubsystem(this);
      if (this_00 != (UPCGSubsystem *)0x0) {
        UPCGSubsystem::RefreshRuntimeGenComponent(this_00,this,param_2);
        return;
      }
    }
    else if (bVar3) {
      if (this->bGenerated != false) {
        GenerateLocal(this,true);
        return;
      }
    }
    else {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      CleanupLocal(this,true,&local_18);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
    return;
  }
  return;
}

// RefreshSchedulingPolicy @ 149f0ebd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UPCGComponent::RefreshSchedulingPolicy(UPCGComponent *this)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UPCGSchedulingPolicyBase *pUVar9;
  longlong *plVar10;
  UClass *pUVar11;
  undefined1 auStack_d8 [32];
  FName local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar11 = (UClass *)0x0;
  if ((this->SchedulingPolicy).field0_0x0.DebugPtr != (UPCGSchedulingPolicyBase *)0x0) {
    pUVar8 = (this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr;
    if ((pUVar8 != (UClass *)0x0) &&
       (pUVar6 = Z_Construct_UClass_UPCGSchedulingPolicyBase_NoRegister(), pUVar6 != (UClass *)0x0))
    {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar8 = (this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr, pUVar8 != (UClass *)0x0)
         ) {
        pUVar7 = Z_Construct_UClass_UPCGSchedulingPolicyBase_NoRegister();
        pUVar6 = pUVar11;
        if (pUVar7 != (UClass *)0x0) {
          iVar1 = (int)pUVar7->_padding_;
          if (((int)pUVar8->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            pUVar6 = (this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr;
          }
        }
        if (((UClass *)((this->SchedulingPolicy).field0_0x0.DebugPtr)->_padding_ == pUVar6) &&
           (this->GenerationTrigger == GenerateAtRuntime)) goto LAB_149f0eccd;
      }
    }
    pUVar9 = (this->SchedulingPolicy).field0_0x0.DebugPtr;
    if ((pUVar9 != (UPCGSchedulingPolicyBase *)0x0) &&
       ((((uint)pUVar9->_padding_ >> 0x1e & 1) == 0 &&
        (pUVar9 = (this->SchedulingPolicy).field0_0x0.DebugPtr,
        (UPCGComponent *)pUVar9->_padding_ == this)))) {
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)pUVar9);
    }
    (this->SchedulingPolicy).field0_0x0.DebugPtr = (UPCGSchedulingPolicyBase *)0x0;
  }
LAB_149f0eccd:
  pUVar8 = (this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr;
  if ((pUVar8 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UPCGSchedulingPolicyBase_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((bVar2) && ((this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) &&
        ((this->SchedulingPolicy).field0_0x0.DebugPtr == (UPCGSchedulingPolicyBase *)0x0)) &&
       (this->GenerationTrigger == GenerateAtRuntime)) {
      lVar3 = this->_padding_;
      pUVar8 = (this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr;
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
      if ((pUVar8 != (UClass *)0x0) &&
         (pUVar6 = Z_Construct_UClass_UPCGSchedulingPolicyBase_NoRegister(), pUVar6 != (UClass *)0x0
         )) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar8->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar11 = (this->SchedulingPolicyClass).Class.field0_0x0.DebugPtr;
        }
      }
      FVar4 = local_b8;
      if (local_b8 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar8 = Z_Construct_UClass_UPCGSchedulingPolicyBase_NoRegister();
      CheckIsClassChildOf_Internal(pUVar8,pUVar11);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar11);
      FVar5 = local_b8;
      local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_a8._56_8_ = (UPackage *)0x0;
      local_b8.ComparisonIndex = FVar4.ComparisonIndex.Value;
      local_b8.Number = FVar4.Number;
      local_a8._16_4_ = local_b8.ComparisonIndex.Value;
      local_a8._20_4_ = local_b8.Number;
      local_a8._40_8_ = (UObject *)0x0;
      local_a8[0x20] = false;
      local_b8 = FVar5;
      local_a8._8_8_ = this;
      local_a8._24_4_ =
           (EObjectFlags)lVar3 & (RF_Transient|RF_ArchetypeObject|RF_Transactional|RF_Public);
      pUVar9 = (UPCGSchedulingPolicyBase *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar10 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UPCGSchedulingPolicyBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->SchedulingPolicy).field0_0x0.DebugPtr = pUVar9;
    }
  }
  return;
}

// RetrieveOutputDataForPin @ 149f115f0

FPCGDataCollection * __thiscall
UPCGComponent::RetrieveOutputDataForPin(UPCGComponent *this,FString *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  FPCGDataCollection *pFVar3;
  
  SRWLock = &this->PerPinGeneratedOutputLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataCollection *)(*pcVar1)();
      return pFVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar3 = TMapBase<FString,FPCGDataCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>_>
           ::Find((TMapBase<FString,FPCGDataCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>_>
                   *)&this->PerPinGeneratedOutput,param_1);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar3;
}

// Serialize @ 149f11b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::Serialize(UPCGComponent *this,FArchive *param_1)

{
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  UActorComponent::Serialize((UActorComponent *)this,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Serialize @ 149f11c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::Serialize(UPCGComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FLLMScope local_res10 [2];
  FSlotBase local_res18;
  FName local_res20;
  FMemScope local_18 [2];
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPCGCustomVersion::GUID);
  UActorComponent::Serialize((UActorComponent *)this,pFVar1);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetEditingMode @ 149f11d80

void __thiscall
UPCGComponent::SetEditingMode
          (UPCGComponent *this,EPCGEditorDirtyMode param_1,EPCGEditorDirtyMode param_2)

{
  this->CurrentEditingMode = param_1;
  this->SerializedEditingMode = param_2;
  return;
}

// SetGraph @ 149f11da0

void __thiscall UPCGComponent::SetGraph(UPCGComponent *this,UPCGGraphInterface *param_1)

{
  UFunction *pUVar1;
  UPCGGraphInterface *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGComponent_SetGraph);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// SetGraphInterfaceLocal @ 149f11f50

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
UPCGComponent::SetGraphInterfaceLocal(UPCGComponent *this,UPCGGraphInterface *param_1)

{
  UPCGGraphInstance *pUVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UPCGSubsystem *this_00;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653768488>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x128,"GraphInstance");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UPCGGraphInstance::SetGraph(pUVar1,param_1);
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if ((pUVar1 == (UPCGGraphInstance *)0x0) ||
     (lVar4 = (**(code **)(pUVar1->_padding_ + 0x2b8))(), lVar4 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (this->GenerationTrigger == GenerateAtRuntime) {
    this_00 = GetSubsystem(this);
    if (this_00 != (UPCGSubsystem *)0x0) {
      UPCGSubsystem::RefreshRuntimeGenComponent(this_00,this,GenerationGrid|Structural);
      return;
    }
  }
  else if (bVar3) {
    if (this->bGenerated != false) {
      GenerateLocal(this,true);
      return;
    }
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    CleanupLocal(this,true,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SetGraphLocal @ 149f12040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGComponent::SetGraphLocal(UPCGComponent *this,UPCGGraphInterface *param_1)

{
  UPCGGraphInstance *pUVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UPCGSubsystem *this_00;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> TStack_18;
  
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653768488>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x128,"GraphInstance");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UPCGGraphInstance::SetGraph(pUVar1,param_1);
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if ((pUVar1 == (UPCGGraphInstance *)0x0) ||
     (lVar4 = (**(code **)(pUVar1->_padding_ + 0x2b8))(), lVar4 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (this->GenerationTrigger == GenerateAtRuntime) {
    this_00 = GetSubsystem(this);
    if (this_00 != (UPCGSubsystem *)0x0) {
      UPCGSubsystem::RefreshRuntimeGenComponent(this_00,this,GenerationGrid|Structural);
      return;
    }
  }
  else if (bVar3) {
    if (this->bGenerated != false) {
      GenerateLocal(this,true);
      return;
    }
  }
  else {
    TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_18.ArrayNum = 0;
    TStack_18.ArrayMax = 0;
    CleanupLocal(this,true,&TStack_18);
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SetGraph_Implementation @ 149f12100

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
UPCGComponent::SetGraph_Implementation(UPCGComponent *this,UPCGGraphInterface *param_1)

{
  UPCGGraphInstance *pUVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UPCGSubsystem *this_00;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> TStack_18;
  
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4712353729653768488>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x128,"GraphInstance");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UPCGGraphInstance::SetGraph(pUVar1,param_1);
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if ((pUVar1 == (UPCGGraphInstance *)0x0) ||
     (lVar4 = (**(code **)(pUVar1->_padding_ + 0x2b8))(), lVar4 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (this->GenerationTrigger == GenerateAtRuntime) {
    this_00 = GetSubsystem(this);
    if (this_00 != (UPCGSubsystem *)0x0) {
      UPCGSubsystem::RefreshRuntimeGenComponent(this_00,this,GenerationGrid|Structural);
      return;
    }
  }
  else if (bVar3) {
    if (this->bGenerated != false) {
      GenerateLocal(this,true);
      return;
    }
  }
  else {
    TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_18.ArrayNum = 0;
    TStack_18.ArrayMax = 0;
    CleanupLocal(this,true,&TStack_18);
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SetIsPartitioned @ 149f12190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGComponent::SetIsPartitioned(UPCGComponent *this,bool param_1)

{
  bool bVar1;
  UWorld *pUVar2;
  UPCGSubsystem *this_00;
  
  if (param_1 != this->bIsComponentPartitioned) {
    if (this->_padding_ == 0) {
      this->bIsComponentPartitioned = param_1;
      return;
    }
    if ((this->bGenerated != false) || (bVar1 = PCGHelpers::IsRuntimeOrPIE(), bVar1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((AActor *)this->_padding_ != (AActor *)0x0) {
      pUVar2 = AActor::GetWorld((AActor *)this->_padding_);
      this_00 = UPCGSubsystem::GetInstance(pUVar2);
      if (this_00 != (UPCGSubsystem *)0x0) {
        if (this->bGenerated != false) {
          CleanupLocalImmediate(this,true,false);
        }
        this->bIsComponentPartitioned = param_1;
        UPCGSubsystem::RegisterOrUpdatePCGComponent(this_00,this,bVar1);
        return;
      }
    }
    this->bIsComponentPartitioned = false;
  }
  return;
}

// SetManagedResources @ 149f12270

void __thiscall
UPCGComponent::SetManagedResources
          (UPCGComponent *this,
          TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  lpCriticalSection = &this->GeneratedResourcesLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->GeneratedResources;
  if (((this->GeneratedResources).ArrayNum != 0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4712353729653772278>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0xff6,"GeneratedResources.IsEmpty()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_>::operator=(this_00,param_1);
  uVar9 = (this->GeneratedResources).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar8 = (longlong)(int)uVar9;
    lVar11 = lVar8 * 8;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->GeneratedResources).ArrayNum) {
        uVar6 = uVar10;
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
      if (*(longlong *)((this_00->AllocatorInstance).Data + lVar11) == 0) {
        uVar6 = 0;
        if ((int)uVar9 < (this->GeneratedResources).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->GeneratedResources).ArrayNum;
        pFVar3 = (this_00->AllocatorInstance).Data;
        iVar7 = iVar2 + ~uVar9;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar3 + lVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar7) * 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->GeneratedResources).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this_00->AllocatorInstance,(this->GeneratedResources).ArrayNum,
                   &(this->GeneratedResources).ArrayMax);
      }
      lVar8 = lVar8 + -1;
      lVar11 = lVar11 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149f12468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetPropertiesFromOriginal @ 149f125b0

void __thiscall UPCGComponent::SetPropertiesFromOriginal(UPCGComponent *this,UPCGComponent *param_1)

{
  int iVar1;
  UPCGGraphInstance *pUVar2;
  UPCGGraphInstance *pUVar3;
  UPCGSchedulingPolicyBase *pUVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  UClass *pUVar12;
  UPCGGraphInterface *pUVar13;
  UPCGGraphInterface *pUVar14;
  longlong lVar15;
  longlong lVar16;
  FInstancedPropertyBag *pFVar17;
  FCopyPropertiesForUnrelatedObjectsParams *pFVar18;
  EPCGComponentInput EVar19;
  TOptional<TArrayView<FGuid_const_,int>_>_u_0 local_58;
  FCopyPropertiesForUnrelatedObjectsParams local_48;
  
  if ((param_1 == (UPCGComponent *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Original",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                          ,0x1f5,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar19 = param_1->InputType;
  if ((EVar19 == Actor) && (lVar15 = param_1->_padding_, lVar15 != 0)) {
    pUVar12 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
    lVar15 = *(longlong *)(lVar15 + 0x10);
    iVar1 = (int)pUVar12->_padding_;
    if ((iVar1 <= *(int *)(lVar15 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar12->_padding_)) {
      lVar15 = this->_padding_;
      if (lVar15 != 0) {
        pUVar12 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
        lVar15 = *(longlong *)(lVar15 + 0x10);
        iVar1 = (int)pUVar12->_padding_;
        if ((iVar1 <= *(int *)(lVar15 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar12->_padding_)) goto LAB_149f1265c;
      }
      EVar19 = Landscape;
    }
  }
LAB_149f1265c:
  pUVar2 = (this->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar2 != (UPCGGraphInstance *)0x0) {
    cVar11 = (**(code **)(pUVar2->_padding_ + 0x2c8))
                       (pUVar2,(param_1->GraphInstance).field0_0x0.DebugPtr);
    this->InputType = EVar19;
    this->Seed = param_1->Seed;
    this->GenerationTrigger = param_1->GenerationTrigger;
    this->bOverrideGenerationRadii = param_1->bOverrideGenerationRadii;
    dVar9 = (param_1->GenerationRadii).GenerationRadius400;
    (this->GenerationRadii).GenerationRadius = (param_1->GenerationRadii).GenerationRadius;
    (this->GenerationRadii).GenerationRadius400 = dVar9;
    dVar9 = (param_1->GenerationRadii).GenerationRadius1600;
    (this->GenerationRadii).GenerationRadius800 = (param_1->GenerationRadii).GenerationRadius800;
    (this->GenerationRadii).GenerationRadius1600 = dVar9;
    dVar9 = (param_1->GenerationRadii).GenerationRadius6400;
    (this->GenerationRadii).GenerationRadius3200 = (param_1->GenerationRadii).GenerationRadius3200;
    (this->GenerationRadii).GenerationRadius6400 = dVar9;
    dVar9 = (param_1->GenerationRadii).GenerationRadius25600;
    (this->GenerationRadii).GenerationRadius12800 = (param_1->GenerationRadii).GenerationRadius12800
    ;
    (this->GenerationRadii).GenerationRadius25600 = dVar9;
    uVar6 = *(undefined4 *)((longlong)&(param_1->GenerationRadii).GenerationRadius51200 + 4);
    uVar7 = *(undefined4 *)&(param_1->GenerationRadii).GenerationRadius102400;
    uVar8 = *(undefined4 *)((longlong)&(param_1->GenerationRadii).GenerationRadius102400 + 4);
    *(undefined4 *)&(this->GenerationRadii).GenerationRadius51200 =
         *(undefined4 *)&(param_1->GenerationRadii).GenerationRadius51200;
    *(undefined4 *)((longlong)&(this->GenerationRadii).GenerationRadius51200 + 4) = uVar6;
    *(undefined4 *)&(this->GenerationRadii).GenerationRadius102400 = uVar7;
    *(undefined4 *)((longlong)&(this->GenerationRadii).GenerationRadius102400 + 4) = uVar8;
    uVar6 = *(undefined4 *)((longlong)&(param_1->GenerationRadii).GenerationRadius204800 + 4);
    uVar7 = *(undefined4 *)&(param_1->GenerationRadii).CleanupRadiusMultiplier;
    uVar8 = *(undefined4 *)((longlong)&(param_1->GenerationRadii).CleanupRadiusMultiplier + 4);
    *(undefined4 *)&(this->GenerationRadii).GenerationRadius204800 =
         *(undefined4 *)&(param_1->GenerationRadii).GenerationRadius204800;
    *(undefined4 *)((longlong)&(this->GenerationRadii).GenerationRadius204800 + 4) = uVar6;
    *(undefined4 *)&(this->GenerationRadii).CleanupRadiusMultiplier = uVar7;
    *(undefined4 *)((longlong)&(this->GenerationRadii).CleanupRadiusMultiplier + 4) = uVar8;
    pUVar2 = (param_1->GraphInstance).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGGraphInstance *)0x0) {
      pUVar13 = (UPCGGraphInterface *)0x0;
    }
    else {
      pUVar13 = (UPCGGraphInterface *)(**(code **)(pUVar2->_padding_ + 0x2b8))();
    }
    pUVar14 = (UPCGGraphInterface *)
              (**(code **)(((this->GraphInstance).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
    if (pUVar13 != pUVar14) {
      UPCGGraphInstance::SetGraph((this->GraphInstance).field0_0x0.DebugPtr,pUVar13);
    }
    if ((cVar11 == '\0') && (pUVar13 != (UPCGGraphInterface *)0x0)) {
      pUVar2 = (param_1->GraphInstance).field0_0x0.DebugPtr;
      pUVar3 = (this->GraphInstance).field0_0x0.DebugPtr;
      if (pUVar2 != (UPCGGraphInstance *)0x0) {
        lVar15 = (**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3);
        lVar16 = (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2);
        if (lVar15 == lVar16) {
          local_58.TypedValue.DataPtr = (FGuid *)0x0;
          local_58.TypedValue.ArrayNum = -1;
          pFVar17 = (FInstancedPropertyBag *)(**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2);
          FInstancedPropertyBag::CopyMatchingValuesByID
                    (&(pUVar3->ParametersOverrides).Parameters,pFVar17,
                     (TOptional<TArrayView<FGuid_const_,int>_> *)&local_58.TypedValue);
        }
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 = (param_1->SchedulingPolicyClass).Class.field0_0x0.DebugPtr,
       pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->SchedulingPolicyClass).Class.field0_0x0 =
         (param_1->SchedulingPolicyClass).Class.field0_0x0;
    RefreshSchedulingPolicy(this);
    pUVar4 = (this->SchedulingPolicy).field0_0x0.DebugPtr;
    if (pUVar4 != (UPCGSchedulingPolicyBase *)0x0) {
      if ((param_1->SchedulingPolicy).field0_0x0.DebugPtr == (UPCGSchedulingPolicyBase *)0x0) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4712353729653768739>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                            ,0x223,"Original->SchedulingPolicy");
        if (bVar10) goto code_r0x000149f1287f;
      }
      else {
        cVar11 = (**(code **)(pUVar4->_padding_ + 0x2d0))();
        if (cVar11 == '\0') {
          pFVar18 = UEngine::FCopyPropertiesForUnrelatedObjectsParams::
                    FCopyPropertiesForUnrelatedObjectsParams(&local_48);
          UEngine::CopyPropertiesForUnrelatedObjects
                    ((UObject *)(param_1->SchedulingPolicy).field0_0x0.DebugPtr,
                     (UObject *)(this->SchedulingPolicy).field0_0x0.DebugPtr,pFVar18);
        }
      }
    }
    return;
  }
  bVar10 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4712353729653768707>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                      ,0x203,"GraphInstance");
  if (!bVar10) {
    return;
  }
code_r0x000149f1287f:
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SetSchedulingPolicyClass @ 149f128e0

void __thiscall
UPCGComponent::SetSchedulingPolicyClass
          (UPCGComponent *this,TSubclassOf<UPCGSchedulingPolicyBase> param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->SchedulingPolicyClass).Class.field0_0x0 =
       *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  RefreshSchedulingPolicy(this);
  return;
}

// ShouldGenerate @ 149f12940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPCGComponent::ShouldGenerate
          (UPCGComponent *this,bool param_1,EPCGComponentGenerationTrigger param_2)

{
  UPCGGraphInstance *pUVar1;
  bool bVar2;
  longlong lVar3;
  UWorld *pUVar4;
  UPCGSubsystem *pUVar5;
  
  if ((((this->bActivated != false) &&
       (pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr, pUVar1 != (UPCGGraphInstance *)0x0)) &&
      (lVar3 = (**(code **)(pUVar1->_padding_ + 0x2b8))(), lVar3 != 0)) &&
     ((AActor *)this->_padding_ != (AActor *)0x0)) {
    pUVar4 = AActor::GetWorld((AActor *)this->_padding_);
    pUVar5 = UPCGSubsystem::GetInstance(pUVar4);
    if (pUVar5 != (UPCGSubsystem *)0x0) {
      if (this->GenerationTrigger == GenerateAtRuntime) {
        if ((param_2 != GenerateAtRuntime) && (2 < (byte)LogPCG._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
        return param_2 == GenerateAtRuntime;
      }
      if (this->bProceduralInstancesInUse == false) {
        if ((param_2 == GenerateOnLoad) && (this->GenerationTrigger == GenerateOnDemand)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((((this->bGenerated != false) && (this->CurrentCleanupTask == 0xffffffffffffffff)) ||
            (!bVar2)) && (!param_1)) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUPCGComponent @ 149f13ee0

void __cdecl UPCGComponent::StaticRegisterNativesUPCGComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UPCGComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StoreOutputDataForPin @ 149f141f0

void __thiscall
UPCGComponent::StoreOutputDataForPin
          (UPCGComponent *this,FString *param_1,FPCGDataCollection *param_2)

{
  byte *pbVar1;
  FPlatformRWLock *SRWLock;
  int iVar2;
  UPCGData *this_00;
  code *pcVar3;
  bool bVar4;
  FPCGDataCollection *this_01;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  FString *local_48;
  FPCGDataCollection *local_40;
  
  SRWLock = &this->PerPinGeneratedOutputLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar2 = (param_2->TaggedData).ArrayNum;
  pFVar8 = (param_2->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x78;
  while( true ) {
    if ((param_2->TaggedData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (*(longlong *)pFVar8 != 0) {
      LOCK();
      pbVar1 = (byte *)(*(longlong *)pFVar8 + 0x41);
      *pbVar1 = *pbVar1 | 4;
      UNLOCK();
    }
    pFVar8 = pFVar8 + 0x78;
  }
  this_01 = TMapBase<FString,FPCGDataCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>_>
            ::Find((TMapBase<FString,FPCGDataCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>_>
                    *)&this->PerPinGeneratedOutput,param_1);
  if (this_01 == (FPCGDataCollection *)0x0) {
    local_48 = param_1;
    local_40 = param_2;
    TSet<TTuple<FString,FPCGDataCollection>,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FPCGDataCollection_const_&>_>
              ((TSet<TTuple<FString,FPCGDataCollection>,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>,FDefaultSetAllocator>
                *)&this->PerPinGeneratedOutput,
               (TPairInitializer<FString_const_&,FPCGDataCollection_const_&> *)(local_res18 + 8),
               (bool *)&local_48);
  }
  else {
    iVar2 = (this_01->TaggedData).ArrayNum;
    pFVar8 = (this_01->TaggedData).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x78;
    while( true ) {
      if ((this_01->TaggedData).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar8 == pFVar7) break;
      this_00 = *(UPCGData **)pFVar8;
      if (this_00 != (UPCGData *)0x0) {
        pFVar5 = (param_2->TaggedData).AllocatorInstance.Data;
        pFVar6 = pFVar5 + (longlong)(param_2->TaggedData).ArrayNum * 0x78;
        for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x78) {
          if (this_00 == *(UPCGData **)pFVar5) goto LAB_149f142eb;
        }
        UPCGData::ClearUsage(this_00,ComponentPerPinOutputData);
      }
LAB_149f142eb:
      pFVar8 = pFVar8 + 0x78;
    }
    FPCGDataCollection::operator=(this_01,param_2);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// Use2DGrid @ 149f15560

bool __thiscall UPCGComponent::Use2DGrid(UPCGComponent *this)

{
  UPCGGraphInstance *pUVar1;
  UObject *pUVar2;
  UClass *this_00;
  
  pUVar1 = (this->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInstance *)0x0) {
    pUVar2 = (UObject *)(**(code **)(pUVar1->_padding_ + 0x2b8))();
    if (pUVar2 != (UObject *)0x0) goto LAB_149f155a9;
  }
  this_00 = UPCGGraph::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
LAB_149f155a9:
  return (bool)pUVar2[2].field_0x1c;
}

// _getUObject @ 149f165c0

UObject * __thiscall UPCGComponent::_getUObject(UPCGComponent *this)

{
  return (UObject *)this[-1].GeneratedResourcesLock.CriticalSection.Opaque3;
}

// _getUObject`adjustor{152}' @ 149f165cc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UPCGComponent::_getUObject`adjustor{152}'
   (void)const __ptr64 */

UObject * __thiscall UPCGComponent::_getUObject_adjustor_152__(UPCGComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UPCGComponent *)&this[-1].PerPinGeneratedOutput.field_0x10);
  return (UObject *)pUVar1;
}

// execAddActorsToManagedResources @ 149f165f0

void __cdecl
UPCGComponent::execAddActorsToManagedResources(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddActorsToManagedResources((UPCGComponent *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execAddComponentsToManagedResources @ 149f166a0

void __cdecl
UPCGComponent::execAddComponentsToManagedResources(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddComponentsToManagedResources((UPCGComponent *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execAddToManagedResources @ 149f17340

void __cdecl
UPCGComponent::execAddToManagedResources(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  code *pcVar2;
  UPCGManagedResource *pUVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  undefined1 *puVar7;
  UPCGManagedResource *local_res10;
  UPCGManagedResource *local_28;
  FText local_20;
  
  local_res10 = (UPCGManagedResource *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGGeneratedResourcesLogging::LogAddToManagedResources((UPCGComponent *)param_1,local_res10);
  if (pUVar3 != (UPCGManagedResource *)0x0) {
    if ((UObject *)pUVar3->_padding_ != param_1) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4712353729653768501>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x135,"InResource->GetOuter() == this");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_20,L"UPCGComponent",L"ResourceNotOutered",
                          L"Managed resources need to be outered to their PCG component.");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_20.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
      }
    }
    lpCriticalSection = &param_1[0x16].field_0x18;
    if (lpCriticalSection == (undefined1 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(char *)(param_1 + 0x11) != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GeneratedResourcesInaccessible",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x13b,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar7 = &param_1[0x10].field_0x18;
    local_28 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((*(UPCGManagedResource ***)puVar7 <= &local_28) &&
       (&local_28 < *(UPCGManagedResource ***)puVar7 + *(int *)&param_1[0x10].field_0x24)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = *(int *)&param_1[0x10].field_0x20;
    if (iVar5 == *(int *)&param_1[0x10].field_0x24) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar7,(int *)&param_1[0x10].field_0x24);
    }
    *(int *)&param_1[0x10].field_0x20 = iVar5 + 1;
    *(UPCGManagedResource **)(*(longlong *)puVar7 + (longlong)iVar5 * 8) = local_28;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28 != (UPCGManagedResource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_28);
    }
    if (lpCriticalSection != (undefined1 *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// execCleanup @ 149f17ad0

void __cdecl UPCGComponent::execCleanup(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res8[0] != 0);
  return;
}

// execCleanupLocal @ 149f17b70

void __cdecl UPCGComponent::execCleanupLocal(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
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
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CleanupLocal((UPCGComponent *)param_1,local_res10[0] != 0,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execClearPCGLink @ 149f17c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPCGComponent::execClearPCGLink(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *pAVar2;
  UClass *local_res10;
  
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar2 = ClearPCGLink((UPCGComponent *)param_1,local_res10);
  *(AActor **)param_3 = pAVar2;
  return;
}

// execGenerate @ 149f17ee0

void __cdecl UPCGComponent::execGenerate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x500))(param_1,local_res8[0] != 0);
  return;
}

// execGenerateLocal @ 149f17f80

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl UPCGComponent::execGenerateLocal(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
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
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GenerateInternal((UPCGComponent *)param_1,local_res10[0] != 0,Uninitialized,GenerateOnDemand,
                   &local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetEditingMode @ 149f182e0

void __cdecl UPCGComponent::execGetEditingMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xf].field_0xc;
  return;
}

// execGetGeneratedGraphOutput @ 149f18310

void __cdecl
UPCGComponent::execGetGeneratedGraphOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPCGDataCollection::operator=(param_3,(FPCGDataCollection *)&param_1[0x12].field_0x18);
  return;
}

// execGetSerializedEditingMode @ 149f18fc0

void __cdecl
UPCGComponent::execGetSerializedEditingMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xf].field_0xd;
  return;
}

// execNotifyPropertiesChangedFromBlueprint @ 149f19e90

void __cdecl
UPCGComponent::execNotifyPropertiesChangedFromBlueprint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetEditingMode @ 149f1a330

void __cdecl UPCGComponent::execSetEditingMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xf].field_0xc = local_res8[0];
  param_1[0xf].field_0xd = local_res10[0];
  return;
}

// execSetGraph @ 149f1a400

void __cdecl UPCGComponent::execSetGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x508))(param_1,local_res8);
  return;
}

// operator() @ 150549950

bool __thiscall `UPCGComponent::ExecutePreGraph'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4712353729653771614>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4712353729653771614>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

