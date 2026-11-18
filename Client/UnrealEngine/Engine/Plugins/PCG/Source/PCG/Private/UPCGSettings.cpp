// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 79

// AddStaticCreatedStrings @ 1497265f0

void __thiscall
UPCGSettings::AddStaticCreatedStrings
          (UPCGSettings *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// AdditionalTaskName @ 149726600

FName __thiscall UPCGSettings::AdditionalTaskName(UPCGSettings *this)

{
  undefined8 *puVar1;
  FName *pFVar2;
  int iVar3;
  FName in_RDX;
  FName local_res8 [4];
  void *local_18 [2];
  
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x3d0))(this,local_18);
  iVar3 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(local_res8,iVar3,(wchar_t *)*puVar1,FNAME_Add);
  *(FName *)in_RDX = *pFVar2;
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return in_RDX;
}

// ApplyPreconfiguredSettings @ 149726660

void __thiscall
UPCGSettings::ApplyPreconfiguredSettings(UPCGSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  return;
}

// CanCullTaskIfUnwired @ 1497266e0

bool __thiscall UPCGSettings::CanCullTaskIfUnwired(UPCGSettings *this)

{
  return true;
}

// ComputeKernelThreadCount @ 149726710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall UPCGSettings::ComputeKernelThreadCount(UPCGSettings *this,UPCGDataBinding *param_1)

{
  return 0;
}

// ComputeOutputPinDataDesc @ 149726720

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
UPCGSettings::ComputeOutputPinDataDesc
          (UPCGSettings *this,UPCGPin *param_1,UPCGDataBinding *param_2,
          FPCGDataCollectionDesc *param_3)

{
  return false;
}

// ConvertNode @ 149726740

bool __thiscall UPCGSettings::ConvertNode(UPCGSettings *this,FPCGPreconfiguredInfo *param_1)

{
  return false;
}

// DoesOutputPinRequireElementCounters @ 149726b00

bool __thiscall
UPCGSettings::DoesOutputPinRequireElementCounters(UPCGSettings *this,UPCGPin *param_1)

{
  return false;
}

// GetAdditionalTitleInformation @ 149726cd0

FString * __thiscall
UPCGSettings::GetAdditionalTitleInformation(UPCGSettings *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCookedKernelSource @ 149726d80

FString * __thiscall
UPCGSettings::GetCookedKernelSource
          (UPCGSettings *this,FString *__return_storage_ptr__,UPCGComputeGraph *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetKernelAttributeKeys @ 149726e50

void __thiscall
UPCGSettings::GetKernelAttributeKeys
          (UPCGSettings *this,TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetSettings @ 149727730

UPCGSettings * __thiscall UPCGSettings::GetSettings(UPCGSettings *this)

{
  return this;
}

// GetSettings @ 149727740

UPCGSettings * __thiscall UPCGSettings::GetSettings(UPCGSettings *this)

{
  return this;
}

// GetUserCustomVersionGuid @ 149727940

FGuid * __thiscall
UPCGSettings::GetUserCustomVersionGuid(UPCGSettings *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// HasDynamicPins @ 149727980

bool __thiscall UPCGSettings::HasDynamicPins(UPCGSettings *this)

{
  return false;
}

// HasExecutionDependencyPin @ 149727990

bool __thiscall UPCGSettings::HasExecutionDependencyPin(UPCGSettings *this)

{
  return true;
}

// HasFlippedTitleLines @ 1497279a0

bool __thiscall UPCGSettings::HasFlippedTitleLines(UPCGSettings *this)

{
  return false;
}

// HasOverridableParams @ 1497279b0

bool __thiscall UPCGSettings::HasOverridableParams(UPCGSettings *this)

{
  return (this->CachedOverridableParams).ArrayNum != 0;
}

// IsInputPinRequiredByExecution @ 149727a80

bool __thiscall UPCGSettings::IsInputPinRequiredByExecution(UPCGSettings *this,UPCGPin *param_1)

{
  if ((param_1 != (UPCGPin *)0x0) && ((param_1->Properties).PinStatus == Required)) {
    return true;
  }
  return false;
}

// IsKernelValid @ 149727aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGSettings::IsKernelValid(UPCGSettings *this,FPCGContext *param_1,bool param_2)

{
  return false;
}

// IsPinStaticallyActive @ 149727ac0

bool __thiscall UPCGSettings::IsPinStaticallyActive(UPCGSettings *this,FName *param_1)

{
  return true;
}

// OnOverrideSettingsDuplicatedInternal @ 149727cd0

void __thiscall UPCGSettings::OnOverrideSettingsDuplicatedInternal(UPCGSettings *this,bool param_1)

{
  return;
}

// OnlyPassThroughOneEdgeWhenDisabled @ 149727ce0

bool __thiscall UPCGSettings::OnlyPassThroughOneEdgeWhenDisabled(UPCGSettings *this)

{
  return false;
}

// OutputPinsCanBeDeactivated @ 149727cf0

bool __thiscall UPCGSettings::OutputPinsCanBeDeactivated(UPCGSettings *this)

{
  return false;
}

// OverridableParams @ 149727d00

TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettings::OverridableParams(UPCGSettings *this)

{
  return &this->CachedOverridableParams;
}

// RequiresDataFromPreTask @ 149727ec0

bool __thiscall UPCGSettings::RequiresDataFromPreTask(UPCGSettings *this)

{
  return false;
}

// ShouldExecuteOnGPU @ 149727f00

bool __thiscall UPCGSettings::ShouldExecuteOnGPU(UPCGSettings *this)

{
  return this->bExecuteOnGPU;
}

// StaticClass @ 149727f50

UClass * __cdecl UPCGSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettings.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettings",&Z_Registration_Info_UClass_UPCGSettings.InnerSingleton
               ,StaticRegisterNativesUPCGSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSettings>,
               InternalVTableHelperCtorCaller<UPCGSettings>,aFStackX_8,
               UPCGSettingsInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettings.InnerSingleton;
}

// UseSeed @ 149728080

bool __thiscall UPCGSettings::UseSeed(UPCGSettings *this)

{
  return this->bUseSeed;
}

// CreateElement @ 1499dc390

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSettings::CreateElement(UPCGSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGSettings.h"
             ,0x1cd,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (IPCGElement *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// UPCGSettings @ 149f33210

UPCGSettings * __thiscall UPCGSettings::UPCGSettings(UPCGSettings *this,FVTableHelper *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  this->Seed = -0x3ca569cf;
  this->_padding_ = (longlong)&___7UPCGSettings__6B_;
  this->bExecutionDependencyRequired = false;
  this->OriginalSettings = (UPCGSettings *)0x0;
  this->bUseSeed = false;
  (this->CachedElement).Object = (IPCGElement *)0x0;
  (this->CachedElement).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CacheLock,4000);
  (this->CachedOverridableParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedOverridableParams).ArrayNum = 0;
  (this->CachedOverridableParams).ArrayMax = 0;
  (this->OverriddenSettingsPropertyBag).field0_0x0.DebugPtr = (UPropertyBag *)0x0;
  this->bHasAnyOverridableHardReferences = false;
  this->bExecuteOnGPU = false;
  this->bDumpCookedHLSL = false;
  this->bDumpDataDescriptions = false;
  this->bPrintShaderDebugValues = false;
  this->DebugBufferSize = 0x10;
  return this;
}

// UPCGSettings @ 149f332a0

UPCGSettings * __thiscall UPCGSettings::UPCGSettings(UPCGSettings *this,FObjectInitializer *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  this->Seed = -0x3ca569cf;
  this->_padding_ = (longlong)&___7UPCGSettings__6B_;
  this->bExecutionDependencyRequired = false;
  this->OriginalSettings = (UPCGSettings *)0x0;
  this->bUseSeed = false;
  (this->CachedElement).Object = (IPCGElement *)0x0;
  (this->CachedElement).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CacheLock,4000);
  (this->CachedOverridableParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedOverridableParams).ArrayNum = 0;
  (this->CachedOverridableParams).ArrayMax = 0;
  (this->OverriddenSettingsPropertyBag).field0_0x0.DebugPtr = (UPropertyBag *)0x0;
  this->bHasAnyOverridableHardReferences = false;
  this->bExecuteOnGPU = false;
  this->bDumpCookedHLSL = false;
  this->bDumpDataDescriptions = false;
  this->bPrintShaderDebugValues = false;
  this->DebugBufferSize = 0x10;
  return this;
}

// ~UPCGSettings @ 149f34c40

void __thiscall UPCGSettings::~UPCGSettings(UPCGSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSettings__6B_;
  DestructItems<FPCGSettingsOverridableParam,int>
            ((FPCGSettingsOverridableParam *)(this->CachedOverridableParams).AllocatorInstance.Data,
             (this->CachedOverridableParams).ArrayNum);
  pFVar1 = (this->CachedOverridableParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CacheLock);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedElement).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UPCGSettingsInterface__6B_;
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// operator== @ 149f35ec0

bool __thiscall UPCGSettings::operator==(UPCGSettings *this,UPCGSettings *param_1)

{
  FPCGCrc FVar1;
  FPCGCrc FVar2;
  
  if (this == param_1) {
    return true;
  }
  FVar1 = FPCGSettingsObjectCrc::PCGCrc((UPCGSettings *)&stack0x00000008);
  FVar2 = FPCGSettingsObjectCrc::PCGCrc((UPCGSettings *)&stack0x00000010);
  if (((*(char *)((longlong)FVar1 + 4) != '\0') && (*(char *)((longlong)FVar2 + 4) != '\0')) &&
     (*(int *)FVar1 == *(int *)FVar2)) {
    return true;
  }
  return false;
}

// operator() @ 149f373a0

bool __thiscall
`UPCGSettings::IsPropertyOverriddenByPin'::__l8::<lambda_1>::operator()
          (void *this,FPCGSettingsOverridableParam *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (param_1->Properties).ArrayNum;
  if (iVar1 != 0) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(longlong *)
         ((param_1->Properties).AllocatorInstance.Data +
         (longlong)(param_1->Properties).ArrayNum * 8 + -8) == *(longlong *)this) {
      return true;
    }
  }
  return false;
}

// AddExecutionDependencyPin @ 149f3b620

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGSettings::AddExecutionDependencyPin
          (UPCGSettings *this,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FName *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  cVar2 = (**(code **)(this->_padding_ + 0x4b0))();
  if (cVar2 != '\0') {
    iVar3 = param_1->ArrayNum;
    if (iVar3 == param_1->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar3 + 1;
    pFVar5 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x30);
    FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    *pFVar5 = PCGPinConstants::DefaultExecutionDependencyLabel;
    pFVar5[2].ComparisonIndex = 0;
    pFVar5[2].Number = 0;
    *(undefined1 *)&pFVar5[1].ComparisonIndex.Value = 0;
    pFVar5[2] = (FName)(pFVar4->Ids).AllocatorInstance.Data;
    (pFVar4->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5[3].ComparisonIndex.Value = (pFVar4->Ids).ArrayNum;
    pFVar5[3].Number = (pFVar4->Ids).ArrayMax;
    (pFVar4->Ids).ArrayNum = 0;
    (pFVar4->Ids).ArrayMax = 0;
    pFVar5[4].ComparisonIndex.Value = pFVar4->CustomSubtype;
    *(undefined2 *)((longlong)&pFVar5[5].ComparisonIndex.Value + 1) = 0;
    *(undefined1 *)&pFVar5[5].ComparisonIndex.Value = 1;
    *(undefined1 *)((longlong)&pFVar5[5].ComparisonIndex.Value + 3) = 1;
    pFVar1 = (pFVar4->Ids).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined1 *)&pFVar5[1].ComparisonIndex.Value = 3;
    *(char *)((longlong)&pFVar5[5].ComparisonIndex.Value + 1) =
         (this->bExecutionDependencyRequired == false) + '\x01';
  }
  return;
}

// AddToCrc @ 149f3c1a0

void __thiscall UPCGSettings::AddToCrc(UPCGSettings *this,FArchiveCrc32 *param_1,bool param_2)

{
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// AllInputPinProperties @ 149f3c260

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettings::AllInputPinProperties
          (UPCGSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FName *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (**(code **)(this->_padding_ + 0x450))();
  cVar2 = (**(code **)(this->_padding_ + 0x4b0))(this);
  if (cVar2 != '\0') {
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar5 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x30);
    FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    *pFVar5 = PCGPinConstants::DefaultExecutionDependencyLabel;
    pFVar5[2].ComparisonIndex = 0;
    pFVar5[2].Number = 0;
    *(undefined1 *)&pFVar5[1].ComparisonIndex.Value = 0;
    pFVar5[2] = (FName)(pFVar4->Ids).AllocatorInstance.Data;
    (pFVar4->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5[3].ComparisonIndex.Value = (pFVar4->Ids).ArrayNum;
    pFVar5[3].Number = (pFVar4->Ids).ArrayMax;
    (pFVar4->Ids).ArrayNum = 0;
    (pFVar4->Ids).ArrayMax = 0;
    pFVar5[4].ComparisonIndex.Value = pFVar4->CustomSubtype;
    *(undefined2 *)((longlong)&pFVar5[5].ComparisonIndex.Value + 1) = 0;
    *(undefined1 *)&pFVar5[5].ComparisonIndex.Value = 1;
    *(undefined1 *)((longlong)&pFVar5[5].ComparisonIndex.Value + 3) = 1;
    pFVar1 = (pFVar4->Ids).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined1 *)&pFVar5[1].ComparisonIndex.Value = 3;
    *(char *)((longlong)&pFVar5[5].ComparisonIndex.Value + 1) =
         (this->bExecutionDependencyRequired == false) + '\x01';
  }
  FillOverridableParamsPins(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AllOutputPinProperties @ 149f3c360

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettings::AllOutputPinProperties
          (UPCGSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x458))();
  return __return_storage_ptr__;
}

// CacheCrc @ 149f3d5c0

void __thiscall UPCGSettings::CacheCrc(UPCGSettings *this)

{
  return;
}

// CreateEmptyPropertyBagInstance @ 149f41330

FInstancedPropertyBag * __thiscall
UPCGSettings::CreateEmptyPropertyBagInstance
          (UPCGSettings *this,FInstancedPropertyBag *__return_storage_ptr__)

{
  if (CpuChannel->Enabled < 0) {
    FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->Value);
    FInstancedPropertyBag::InitializeFromBagStruct
              (__return_storage_ptr__,(this->OverriddenSettingsPropertyBag).field0_0x0.DebugPtr);
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId431,"UPCGSettings::CreateEmptyPropertyBagInstance",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSettings.cpp"
             ,0x1af);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId431);
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->Value);
  FInstancedPropertyBag::InitializeFromBagStruct
            (__return_storage_ptr__,(this->OverriddenSettingsPropertyBag).field0_0x0.DebugPtr);
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// CreateNode @ 149f413e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGNode * __thiscall UPCGSettings::CreateNode(UPCGSettings *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGNode *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UPCGNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UPCGNode *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// DefaultInputPinProperties @ 149f41570

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettings::DefaultInputPinProperties
          (UPCGSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x450))();
  return __return_storage_ptr__;
}

// DefaultOutputPinProperties @ 149f415a0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettings::DefaultOutputPinProperties
          (UPCGSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x458))();
  return __return_storage_ptr__;
}

// DefaultPointInputPinProperties @ 149f415d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettings::DefaultPointInputPinProperties
          (UPCGSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FName *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar4 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
  FText::GetEmpty();
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  *pFVar4 = PCGPinConstants::DefaultInputLabel;
  pFVar4[2].ComparisonIndex = 0;
  pFVar4[2].Number = 0;
  *(undefined1 *)&pFVar4[1].ComparisonIndex.Value = 0;
  pFVar4[2] = (FName)(pFVar3->Ids).AllocatorInstance.Data;
  (pFVar3->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[3].ComparisonIndex.Value = (pFVar3->Ids).ArrayNum;
  pFVar4[3].Number = (pFVar3->Ids).ArrayMax;
  (pFVar3->Ids).ArrayNum = 0;
  (pFVar3->Ids).ArrayMax = 0;
  pFVar4[4].ComparisonIndex.Value = pFVar3->CustomSubtype;
  *(undefined2 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 1) = 0;
  *(undefined1 *)&pFVar4[5].ComparisonIndex.Value = 1;
  *(undefined1 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 3) = 1;
  pFVar1 = (pFVar3->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined1 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 1) = 1;
  return __return_storage_ptr__;
}

// DefaultPointOutputPinProperties @ 149f41690

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettings::DefaultPointOutputPinProperties
          (UPCGSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FName *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar4 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
  FText::GetEmpty();
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  *pFVar4 = PCGPinConstants::DefaultOutputLabel;
  pFVar4[2].ComparisonIndex = 0;
  pFVar4[2].Number = 0;
  *(undefined1 *)&pFVar4[1].ComparisonIndex.Value = 0;
  pFVar4[2] = (FName)(pFVar3->Ids).AllocatorInstance.Data;
  (pFVar3->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[3].ComparisonIndex.Value = (pFVar3->Ids).ArrayNum;
  pFVar4[3].Number = (pFVar3->Ids).ArrayMax;
  (pFVar3->Ids).ArrayNum = 0;
  (pFVar3->Ids).ArrayMax = 0;
  pFVar4[4].ComparisonIndex.Value = pFVar3->CustomSubtype;
  *(undefined2 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 1) = 0;
  *(undefined1 *)&pFVar4[5].ComparisonIndex.Value = 1;
  *(undefined1 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 3) = 1;
  pFVar1 = (pFVar3->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// DoesPinSupportPassThrough @ 149f41ee0

bool __thiscall UPCGSettings::DoesPinSupportPassThrough(UPCGSettings *this,UPCGPin *param_1)

{
  EPCGPinStatus EVar1;
  
  if (((param_1 != (UPCGPin *)0x0) && (EVar1 = (param_1->Properties).PinStatus, EVar1 != Advanced))
     && (EVar1 != OverrideOrUserParam)) {
    return true;
  }
  return false;
}

// FillOverridableParamsPins @ 149f43dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGSettings::FillOverridableParamsPins
          (UPCGSettings *this,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 uVar1;
  FName FVar2;
  undefined8 uVar3;
  TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_> *pTVar4;
  TConsoleVariableData<bool> *pTVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UClass *pUVar12;
  FName *pFVar13;
  FPCGDataTypeIdentifier *pFVar14;
  longlong *plVar15;
  longlong lVar16;
  FPCGDataTypeIdentifier *pFVar17;
  ForElementType<FSetElementId> FVar18;
  longlong lVar19;
  FName *pFVar20;
  FScriptContainerElement *pFVar21;
  FName FVar22;
  FScriptContainerElement *pFVar23;
  FName *pFVar24;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [4];
  uint local_104;
  undefined1 local_100 [16];
  FName local_f0;
  FPCGDataTypeIdentifier local_e8;
  uint local_d0;
  FName local_c8;
  undefined1 local_c0 [24];
  FName local_a8 [2];
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  cVar6 = (**(code **)(this->_padding_ + 0x488))();
  if (cVar6 == '\0') {
    return;
  }
  pFVar21 = (param_1->AllocatorInstance).Data;
  iVar11 = param_1->ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  pFVar23 = pFVar21 + (longlong)iVar11 * 0x30;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar11) {
      `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (pFVar21 == pFVar23) break;
    if (local_64 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),false);
      iVar10 = local_68;
    }
    else {
      local_64 = local_64 + -1;
      iVar10 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x28 + 4);
      iVar8 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar10 * 0x28) = 0xffffffff;
      }
    }
    local_68 = iVar10;
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,(FSparseArrayAllocationInfo *)local_100,iVar8);
    pTVar4 = (TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_> *)
             CONCAT44(local_100._12_4_,local_100._8_4_);
    if (pTVar4 != (TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_> *)0x0) {
      *(undefined8 *)pTVar4 = *(undefined8 *)pFVar21;
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                ((FPCGDataTypeIdentifier *)&pTVar4->field_0x8,
                 (FPCGDataTypeIdentifier *)(pFVar21 + 0x10));
      *(undefined4 *)&pTVar4->field_0x20 = 0xffffffff;
    }
    uVar1 = *(undefined8 *)pTVar4;
    local_104 = local_100._0_4_;
    uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    uVar9 = (int)((ulonglong)uVar1 >> 0x20) + uVar9;
    bVar7 = TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
                        *)local_98,uVar9,pTVar4,(int *)&local_104,(bool *)0x0);
    if (!bVar7) {
      TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
      ::RehashOrLink((TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
                      *)local_98,uVar9,pTVar4,local_104);
    }
    pFVar21 = pFVar21 + 0x30;
  }
  lVar19 = this->_padding_;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_d0 = 0;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  local_104 = 0;
  if (lVar19 != 0) {
    pUVar12 = UPCGNode::StaticClass();
    iVar11 = (int)pUVar12->_padding_;
    if ((iVar11 <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar11 * 8)
        == &pUVar12->_padding_)) {
      local_e8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (*(FName *)(lVar19 + 0x28) == (FName)0x0) {
        local_100._0_8_ = *(FName *)(lVar19 + 0x18);
        pFVar17 = (FPCGDataTypeIdentifier *)local_100;
      }
      else {
        pFVar17 = &local_e8;
        local_e8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)*(FName *)(lVar19 + 0x28);
      }
      pFVar13 = (FName *)::FName::ToString((FName *)pFVar17,(FString *)local_c0);
      if (local_a8 != pFVar13) {
        local_f0 = *pFVar13;
        pFVar13->ComparisonIndex = 0;
        pFVar13->Number = 0;
        local_104 = pFVar13[1].ComparisonIndex.Value;
        pFVar13[1].ComparisonIndex = 0;
        pFVar13[1].Number = 0;
      }
      if ((void *)CONCAT44(local_c0._4_4_,local_c0._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_c0._4_4_,local_c0._0_4_));
      }
      lVar16 = *(longlong *)(lVar19 + 0x20);
      if (lVar16 == 0) goto LAB_149f440c8;
      pUVar12 = Z_Construct_UClass_UPCGGraph_NoRegister();
      lVar16 = *(longlong *)(lVar16 + 0x10);
      iVar11 = (int)pUVar12->_padding_;
      if ((*(int *)(lVar16 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar12->_padding_)) goto LAB_149f440c8;
      lVar19 = *(longlong *)(lVar19 + 0x20);
      if (lVar19 == 0) {
LAB_149f44095:
        lVar19 = 0;
      }
      else {
        pUVar12 = Z_Construct_UClass_UPCGGraph_NoRegister();
        iVar11 = (int)pUVar12->_padding_;
        if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < iVar11) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar12->_padding_)) goto LAB_149f44095;
      }
      local_100._0_8_ = *(FName *)(lVar19 + 0x18);
      ::FName::ToString((FName *)local_100,(FString *)&local_e8);
      local_c8 = (FName)local_e8.Ids.AllocatorInstance.Data;
      local_d0 = local_e8.Ids.ArrayNum;
      goto LAB_149f440c8;
    }
  }
  local_100._0_8_ = this->_padding_;
  ::FName::ToString((FName *)local_100,(FString *)&local_e8);
  local_f0 = (FName)local_e8.Ids.AllocatorInstance.Data;
  local_104 = local_e8.Ids.ArrayNum;
LAB_149f440c8:
  FVar22 = local_f0;
  FVar2 = PCGPinConstants::DefaultParamsLabel;
  local_100._0_4_ = PCGPinConstants::DefaultParamsLabel.ComparisonIndex.Value;
  local_100._4_4_ = PCGPinConstants::DefaultParamsLabel.Number;
  uVar9 = ::GetTypeHash(PCGPinConstants::DefaultParamsLabel.ComparisonIndex.Value);
  if (local_98._8_4_ != local_64) {
    FVar18 = (ForElementType<FSetElementId>)local_60;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FVar18 = local_58;
    }
    for (iVar11 = *(int *)((longlong)FVar18 +
                          (ulonglong)(local_50 - 1U & local_100._4_4_ + uVar9) * 4); iVar11 != -1;
        iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x28 + 0x20)) {
      if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x28) == FVar2) {
        if ((iVar11 != -1) &&
           ((FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar11 * 0x28) !=
            (FScriptContainerElement *)0x0)) {
          pFVar17 = (FPCGDataTypeIdentifier *)
                    ((FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar11 * 0x28) + 8);
          goto LAB_149f44131;
        }
        break;
      }
    }
  }
  pFVar17 = (FPCGDataTypeIdentifier *)0x0;
LAB_149f44131:
  if (pFVar17 == (FPCGDataTypeIdentifier *)0x0) {
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar13 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x30);
    FText::GetEmpty();
    pFVar17 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                        ((FPCGDataTypeIdentifier *)local_c0,Param);
    *pFVar13 = PCGPinConstants::DefaultParamsLabel;
    pFVar13[2].ComparisonIndex = 0;
    pFVar13[2].Number = 0;
    *(undefined1 *)&pFVar13[1].ComparisonIndex.Value = 0;
    pFVar13[2] = (FName)(pFVar17->Ids).AllocatorInstance.Data;
    (pFVar17->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13[3].ComparisonIndex.Value = (pFVar17->Ids).ArrayNum;
    pFVar13[3].Number = (pFVar17->Ids).ArrayMax;
    (pFVar17->Ids).ArrayNum = 0;
    (pFVar17->Ids).ArrayMax = 0;
    pFVar13[4].ComparisonIndex.Value = pFVar17->CustomSubtype;
    *(undefined2 *)((longlong)&pFVar13[5].ComparisonIndex.Value + 1) = 0;
    *(undefined1 *)((longlong)&pFVar13[5].ComparisonIndex.Value + 3) = 1;
    *(undefined1 *)&pFVar13[5].ComparisonIndex.Value = 1;
    pFVar21 = (pFVar17->Ids).AllocatorInstance.Data;
    if (pFVar21 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar21);
    }
    pFVar13[4].ComparisonIndex.Value = 0xff;
    *(undefined1 *)((longlong)&pFVar13[5].ComparisonIndex.Value + 1) = 3;
  }
  else {
    pFVar14 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                        ((FPCGDataTypeIdentifier *)local_c0,Param);
    bVar7 = FPCGDataTypeIdentifier::IsSameType(pFVar17,pFVar14);
    if ((void *)CONCAT44(local_c0._4_4_,local_c0._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_c0._4_4_,local_c0._0_4_));
    }
    if (!bVar7) {
      ::FName::ToString(&PCGPinConstants::DefaultParamsLabel,(FString *)local_100);
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if ((FName)local_100._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_100._0_8_);
      }
    }
  }
  local_e8.Ids.AllocatorInstance.Data._0_4_ = 0x8000000;
  TMapBase<FName,FPCGDataTypeIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>_>
  ::Emplace<FName_const_&,enum_EPCGDataType>
            ((TMapBase<FName,FPCGDataTypeIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>_>
              *)local_98,&PCGPinConstants::DefaultParamsLabel,(EPCGDataType *)&local_e8);
  plVar15 = (longlong *)(**(code **)(this->_padding_ + 0x480))(this);
  lVar19 = plVar15[1];
  pFVar13 = (FName *)*plVar15;
  pFVar24 = pFVar13 + (longlong)(int)lVar19 * 0x11;
LAB_149f44330:
  do {
    if ((int)plVar15[1] != (int)lVar19) {
      `TCheckedPointerIterator<FPCGSettingsOverridableParam_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_108);
    }
    if (pFVar13 == pFVar24) {
      if (FVar22 != (FName)0x0) {
        FMemory::Free((void *)FVar22);
      }
      if (local_c8 != (FName)0x0) {
        FMemory::Free((void *)local_c8);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    FVar2 = *pFVar13;
    uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    pTVar5 = PCGSettings::CVarWarnOverridePinsCollideWithInputPins.Ref;
    if (local_98._8_4_ != local_64) {
      FVar18 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_58;
      }
      for (iVar11 = *(int *)((longlong)FVar18 +
                            (ulonglong)(local_50 - 1U & FVar2.Number + uVar9) * 4); iVar11 != -1;
          iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x28 + 0x20)) {
        if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x28) == FVar2) {
          bVar7 = IsInParallelGameThread();
          if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
            lVar16 = 0;
          }
          else {
            lVar16 = 1;
          }
          if (pTVar5->ShadowedValue[lVar16] == false) goto LAB_149f445e9;
          ::FName::ToString(pFVar13,(FString *)local_100);
          if (2 < (byte)LogPCG._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
          if ((FName)local_100._0_8_ == (FName)0x0) goto LAB_149f445e9;
          FMemory::Free((void *)local_100._0_8_);
          pFVar13 = pFVar13 + 0x11;
          FVar22 = local_f0;
          goto LAB_149f44330;
        }
      }
    }
    if (local_64 == 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x28,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                          (int *)(local_98 + 0xc));
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),false);
      iVar11 = local_68;
    }
    else {
      local_64 = local_64 + -1;
      iVar11 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x28 + 4);
      iVar10 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar11 * 0x28) = 0xffffffff;
      }
    }
    local_68 = iVar11;
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,(FSparseArrayAllocationInfo *)local_c0,iVar10);
    uVar1 = local_c0._8_8_;
    if ((TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_> *)local_c0._8_8_ !=
        (TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_> *)0x0) {
      *(FName *)local_c0._8_8_ = *pFVar13;
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                ((FPCGDataTypeIdentifier *)(local_c0._8_8_ + 8),Param);
      *(undefined4 *)(uVar1 + 0x20) = 0xffffffff;
    }
    uVar3 = *(undefined8 *)uVar1;
    local_e8.Ids.AllocatorInstance.Data._0_4_ = local_c0._0_4_;
    uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar9 = (int)((ulonglong)uVar3 >> 0x20) + uVar9;
    bVar7 = TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
                        *)local_98,uVar9,
                       (TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_> *)uVar1,
                       (int *)&local_e8,(bool *)0x0);
    if (!bVar7) {
      TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
      ::RehashOrLink((TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
                      *)local_98,uVar9,
                     (TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_> *)uVar1,
                     (int)local_e8.Ids.AllocatorInstance.Data);
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar20 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x30);
    FText::GetEmpty();
    pFVar17 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_e8,Param);
    *pFVar20 = *pFVar13;
    pFVar20[2].ComparisonIndex = 0;
    pFVar20[2].Number = 0;
    *(undefined1 *)&pFVar20[1].ComparisonIndex.Value = 0;
    pFVar20[2] = (FName)(pFVar17->Ids).AllocatorInstance.Data;
    (pFVar17->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar20[3].ComparisonIndex.Value = (pFVar17->Ids).ArrayNum;
    pFVar20[3].Number = (pFVar17->Ids).ArrayMax;
    (pFVar17->Ids).ArrayNum = 0;
    (pFVar17->Ids).ArrayMax = 0;
    pFVar20[4].ComparisonIndex.Value = pFVar17->CustomSubtype;
    pFVar20[5].ComparisonIndex.Value = 0;
    pFVar21 = (pFVar17->Ids).AllocatorInstance.Data;
    if (pFVar21 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar21);
    }
    *(undefined1 *)((longlong)&pFVar20[5].ComparisonIndex.Value + 1) = 3;
LAB_149f445e9:
    pFVar13 = pFVar13 + 0x11;
    FVar22 = local_f0;
  } while( true );
}

// FixingOverridableParamPropertyClass @ 149f45200

void __thiscall
UPCGSettings::FixingOverridableParamPropertyClass
          (UPCGSettings *this,FPCGSettingsOverridableParam *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FProperty *pFVar5;
  
  pUVar2 = (UStruct *)this->_padding_;
  if (pUVar2 != (UStruct *)0x0) {
    iVar1 = (param_1->PropertiesNames).ArrayNum;
    if (iVar1 != 0) {
      if (iVar1 < 1) {
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
      pFVar5 = UStruct::FindPropertyByName
                         (pUVar2,*(FName *)(param_1->PropertiesNames).AllocatorInstance.Data);
      if (pFVar5 != (FProperty *)0x0) {
        pUVar2 = (UStruct *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        (param_1->PropertyClass).field0_0x0.DebugPtr = pUVar2;
      }
    }
  }
  return;
}

// GetCachedCrc @ 149f48060

FPCGCrc * __thiscall UPCGSettings::GetCachedCrc(UPCGSettings *this)

{
  return &InvalidCrc;
}

// GetCurrentPinTypes @ 149f49230

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGSettings::GetCurrentPinTypes(UPCGSettings *this,UPCGPin *param_1)

{
  return DeprecationSentinel;
}

// GetCurrentPinTypesID @ 149f49240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGSettings::GetCurrentPinTypesID
          (UPCGSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,UPCGPin *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  UObject *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  EPCGDataType EVar8;
  UClass *pUVar9;
  FPCGDataTypeIdentifier *pFVar10;
  ulonglong uVar11;
  ForAnyElementType this_00;
  undefined1 local_res8 [8];
  FName local_res20;
  FName local_78;
  FString local_70;
  FName *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TArrayView<FName_const_,int> local_48;
  FPCGDataTypeIdentifier local_38;
  
  EVar8 = (**(code **)(this->_padding_ + 0x438))(this,param_1);
  if (EVar8 != DeprecationSentinel) {
    if (2 < (byte)LogPCG._0_1_) {
      local_res20 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res20,&local_70);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,EVar8);
    return __return_storage_ptr__;
  }
  cVar6 = (**(code **)(this->_padding_ + 0x3a8))(this);
  if (((cVar6 != '\0') && (bVar7 = UPCGPin::IsOutputPin(param_1), bVar7)) &&
     (lVar3 = this->_padding_, lVar3 != 0)) {
    pUVar9 = UPCGNode::StaticClass();
    iVar2 = (int)pUVar9->_padding_;
    if (((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         == &pUVar9->_padding_)) && (*(int *)(lVar3 + 0x70) != 0)) {
      if ((*(int *)(lVar3 + 0x70) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar5)();
        return pFVar10;
      }
      pUVar4 = (UObject *)**(undefined8 **)(lVar3 + 0x68);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar4 == (UObject *)0x0) goto LAB_149f49478;
        UE::GC::MarkAsReachable(pUVar4);
      }
      if ((((pUVar4 != (UObject *)0x0) && (pUVar4[2].field_0x21 != '\x02')) &&
          (pUVar4[2].field_0x21 != '\x03')) && (*(char *)(pUVar4 + 2) != '\x03')) {
        local_78.ComparisonIndex.Value = *(uint *)&pUVar4[1].field_0x20;
        local_78.Number = *(uint *)&pUVar4[1].field_0x24;
        local_58 = &local_78;
        uStack_50 = 1;
        local_48._12_4_ = uStack_4c;
        local_48.ArrayNum = 1;
        local_48.DataPtr = local_58;
        GetTypeUnionIDOfAllIncidentEdges(this,&local_38,&local_48);
        iVar2 = local_38.Ids.ArrayNum;
        uVar11 = (ulonglong)local_38.Ids.ArrayNum;
        if (local_38.Ids.ArrayNum != 0) {
          pFVar1 = local_38.Ids.AllocatorInstance.Data + uVar11 * 8;
          this_00.Data = local_38.Ids.AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar11 != iVar2) {
              `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (this_00.Data == pFVar1) {
              pFVar10 = &local_38;
              goto LAB_149f49457;
            }
            bVar7 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)this_00.Data);
            if (!bVar7) break;
            uVar11 = (ulonglong)(uint)local_38.Ids.ArrayNum;
            this_00.Data = this_00.Data + 8;
          }
        }
        pFVar10 = &(param_1->Properties).AllowedTypes;
LAB_149f49457:
        FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar10);
        if (local_38.Ids.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_38.Ids.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
    }
  }
LAB_149f49478:
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            (__return_storage_ptr__,&(param_1->Properties).AllowedTypes);
  return __return_storage_ptr__;
}

// GetElement @ 149f49d00

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSettings::GetElement(UPCGSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  TSharedPtr<IPCGElement,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = &this->CachedElement;
  if ((this->CachedElement).Object == (IPCGElement *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CacheLock);
    if (pTVar1->Object == (IPCGElement *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x460))(this,local_18);
      if (pTVar1 != (TSharedPtr<IPCGElement,1> *)puVar3) {
        pTVar1->Object = (IPCGElement *)*puVar3;
        *puVar3 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedElement).SharedReferenceCount,(FSharedReferencer<1> *)(puVar3 + 1))
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->CacheLock);
  }
  __return_storage_ptr__->Object = pTVar1->Object;
  pTVar2 = (this->CachedElement).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149f4de90

UClass * __cdecl UPCGSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettings",&Z_Registration_Info_UClass_UPCGSettings.InnerSingleton
               ,StaticRegisterNativesUPCGSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSettings>,
               InternalVTableHelperCtorCaller<UPCGSettings>,local_res8,
               UPCGSettingsInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettings.InnerSingleton;
}

// GetSeed @ 149f4ec90

int __thiscall UPCGSettings::GetSeed(UPCGSettings *this,IPCGGraphExecutionSource *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3c8))();
  if (cVar1 == '\0') {
    return 0x2a;
  }
  if (param_1 != (IPCGGraphExecutionSource *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    iVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar2 = PCGHelpers::ComputeSeed(this->Seed,iVar2);
    return iVar2;
  }
  return this->Seed;
}

// GetSettingsCrc @ 149f4eda0

FPCGCrc __thiscall UPCGSettings::GetSettingsCrc(UPCGSettings *this)

{
  FPCGCrc in_RDX;
  
  FPCGSettingsObjectCrc::PCGCrc((UPCGSettings *)in_RDX);
  return in_RDX;
}

// GetTypeNameHash @ 149f4fcf0

uint __thiscall UPCGSettings::GetTypeNameHash(UPCGSettings *this)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)(this->_padding_ + 0x18);
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// GetTypeUnionIDOfAllIncidentEdges @ 149f4fd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGDataTypeIdentifier * __thiscall
UPCGSettings::GetTypeUnionIDOfAllIncidentEdges
          (UPCGSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          TArrayView<FName_const_,int> *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  UPCGPin *pUVar9;
  FPCGDataTypeIdentifier *pFVar10;
  FName *pFVar11;
  FPCGDataTypeRegistry *this_00;
  ForElementType<FPCGDataTypeIdentifier> FVar12;
  FScriptContainerElement *pFVar13;
  UPCGPin *pUVar14;
  int iVar15;
  longlong *plVar16;
  FName *pFVar17;
  undefined1 auStack_3a8 [32];
  FPinTypeScopeHelper local_388;
  undefined1 local_387;
  undefined1 local_386;
  undefined1 local_385 [5];
  FName *local_380;
  TArrayView<FPCGDataTypeIdentifier_const_,int> local_378;
  ForElementType<FPCGDataTypeIdentifier> local_368;
  int iStack_360;
  undefined4 uStack_35c;
  FPCGDataTypeIdentifier local_358;
  TArray<FPCGDataTypeIdentifier,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_340
  ;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_340.AllocatorInstance.SecondaryData = (ForElementType<FPCGDataTypeIdentifier>)0x0;
  local_340.ArrayNum = 0;
  local_340.ArrayMax = 0x20;
  local_378.DataPtr = (FPCGDataTypeIdentifier *)this;
  local_368 = (ForElementType<FPCGDataTypeIdentifier>)__return_storage_ptr__;
  PCGSettingsHelpers::FPinTypeScopeHelper::FPinTypeScopeHelper(&local_388);
  pFVar17 = param_1->DataPtr;
  pFVar11 = pFVar17 + param_1->ArrayNum;
  local_380 = pFVar11;
  if (pFVar17 != pFVar11) {
    do {
      lVar4 = this->_padding_;
      FVar5 = *pFVar17;
      if (lVar4 != 0) {
        pUVar8 = UPCGNode::StaticClass();
        iVar3 = (int)pUVar8->_padding_;
        pFVar11 = local_380;
        if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar8->_padding_)) {
          plVar16 = *(longlong **)(lVar4 + 0x68);
          iVar3 = *(int *)(lVar4 + 0x70);
          plVar1 = plVar16 + iVar3;
          while( true ) {
            if (*(int *)(lVar4 + 0x70) != iVar3) {
              local_387 = 0;
              `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_387);
            }
            if (plVar16 == plVar1) break;
            pUVar14 = (UPCGPin *)*plVar16;
            if ((pUVar14->Properties).Label == FVar5) goto LAB_149f4fe43;
            plVar16 = plVar16 + 1;
          }
          pUVar14 = (UPCGPin *)0x0;
LAB_149f4fe43:
          pFVar11 = local_380;
          this = (UPCGSettings *)local_378.DataPtr;
          if (pUVar14 != (UPCGPin *)0x0) {
            pFVar13 = (pUVar14->Edges).AllocatorInstance.Data;
            iVar15 = 0;
            iVar3 = (pUVar14->Edges).ArrayNum;
            pFVar2 = pFVar13 + (longlong)iVar3 * 8;
            while( true ) {
              if ((pUVar14->Edges).ArrayNum != iVar3) {
                local_386 = 0;
                `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_386);
              }
              if (pFVar13 == pFVar2) break;
              bVar7 = UPCGEdge::IsValid(*(UPCGEdge **)pFVar13);
              if (bVar7) {
                iVar15 = iVar15 + 1;
              }
              pFVar13 = pFVar13 + 8;
            }
            pFVar11 = local_380;
            this = (UPCGSettings *)local_378.DataPtr;
            if (0 < iVar15) {
              pFVar13 = (pUVar14->Edges).AllocatorInstance.Data;
              iVar3 = (pUVar14->Edges).ArrayNum;
              pFVar2 = pFVar13 + (longlong)iVar3 * 8;
              while( true ) {
                if ((pUVar14->Edges).ArrayNum != iVar3) {
                  local_385[0] = 0;
                  `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_385);
                }
                pFVar11 = local_380;
                this = (UPCGSettings *)local_378.DataPtr;
                if (pFVar13 == pFVar2) break;
                if ((*(UPCGEdge **)pFVar13 != (UPCGEdge *)0x0) &&
                   (pUVar9 = UPCGEdge::GetOtherPin(*(UPCGEdge **)pFVar13,pUVar14),
                   pUVar9 != (UPCGPin *)0x0)) {
                  pFVar10 = PCGSettingsHelpers::FPinTypeScopeHelper::GetCurrentPinTypeID
                                      (&local_388,&local_358,pUVar9);
                  TArray<FPCGDataTypeIdentifier,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                  ::AddUniqueImpl<FPCGDataTypeIdentifier>(&local_340,pFVar10);
                  if (local_358.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_358.Ids.AllocatorInstance.Data);
                  }
                }
                pFVar13 = pFVar13 + 8;
              }
            }
          }
        }
      }
      pFVar17 = pFVar17 + 1;
      __return_storage_ptr__ = (FPCGDataTypeIdentifier *)local_368;
    } while (pFVar17 != pFVar11);
  }
  this_00 = FPCGModule::GetConstDataTypeRegistry();
  iStack_360 = local_340.ArrayNum;
  local_368 = (ForElementType<FPCGDataTypeIdentifier>)&local_340;
  if (local_340.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeIdentifier>)0x0) {
    local_368 = local_340.AllocatorInstance.SecondaryData;
  }
  if ((local_340.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
    return pFVar10;
  }
  local_378._12_4_ = uStack_35c;
  local_378.ArrayNum = iStack_360;
  local_378.DataPtr = (FPCGDataTypeIdentifier *)local_368;
  FPCGDataTypeRegistry::GetIdentifiersUnion(this_00,__return_storage_ptr__,&local_378);
  PCGSettingsHelpers::FPinTypeScopeHelper::~FPinTypeScopeHelper(&local_388);
  FVar12 = (ForElementType<FPCGDataTypeIdentifier>)&local_340;
  if (local_340.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeIdentifier>)0x0) {
    FVar12 = local_340.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPCGDataTypeIdentifier,int>((FPCGDataTypeIdentifier *)FVar12,local_340.ArrayNum);
  if (local_340.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeIdentifier>)0x0) {
    FMemory::Free((void *)local_340.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// GetTypeUnionIDOfIncidentEdges @ 149f50020

FPCGDataTypeIdentifier * __thiscall
UPCGSettings::GetTypeUnionIDOfIncidentEdges
          (UPCGSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,FName *param_1)

{
  FName local_res10 [3];
  TArrayView<FName_const_,int> local_18;
  
  local_res10[0] = *param_1;
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  GetTypeUnionIDOfAllIncidentEdges(this,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// GetTypeUnionOfIncidentEdges @ 149f50070

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGSettings::GetTypeUnionOfIncidentEdges(UPCGSettings *this,FName *param_1)

{
  EPCGDataType EVar1;
  FName local_res10 [3];
  TArrayView<FName_const_,int> local_38;
  FPCGDataTypeIdentifier local_28;
  
  local_res10[0] = *param_1;
  local_38.ArrayNum = 1;
  local_38.DataPtr = local_res10;
  GetTypeUnionIDOfAllIncidentEdges(this,&local_28,&local_38);
  EVar1 = FPCGDataTypeIdentifier::operator_enum_EPCGDataType(&local_28);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return EVar1;
}

// HasOverridableParam @ 149f50430

bool __thiscall UPCGSettings::HasOverridableParam(UPCGSettings *this,FName param_1)

{
  FPCGSettingsOverridableParam *pFVar1;
  
  pFVar1 = TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UPCGSettings::HasOverridableParam_::__l2::<lambda_1>_>
                     (&this->CachedOverridableParams,(<lambda_1>)param_1);
  return pFVar1 != (FPCGSettingsOverridableParam *)0x0;
}

// InitializeCachedOverridableParams @ 149f509a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UPCGSettings::InitializeCachedOverridableParams(UPCGSettings *this,bool param_1)

{
  int *piVar1;
  TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *this_00;
  UStruct *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  longlong local_res18;
  longlong local_res20;
  FProperty *local_78;
  FName local_70;
  FName local_68;
  FString local_60;
  FString local_50;
  
  if ((this->_padding_ & 0x10) == 0) {
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1026,"UPCGSettings::InitializeCachedOverridableParams",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSettings.cpp"
                 ,0x402);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1026);
    }
    uVar9 = 0;
    this->bHasAnyOverridableHardReferences = false;
    if (0 < (this->CachedOverridableParams).ArrayNum) {
      this_00 = &this->CachedOverridableParams;
      local_res20 = 0;
      local_res18 = 0;
      do {
        uVar8 = ~uVar9 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar9 < (this->CachedOverridableParams).ArrayNum) {
          uVar7 = uVar8;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = (this_00->AllocatorInstance).Data + local_res18;
        if (*(int *)(pFVar10 + 0x10) == 0) {
          if (1 < (byte)LogPCG._0_1_) {
            local_70 = (FName)this->_padding_;
            ::FName::ToString(&local_70,&local_60);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
          }
          local_res18 = local_res18 + -0x88;
          uVar7 = 0;
          if ((int)uVar9 < (this->CachedOverridableParams).ArrayNum) {
            uVar7 = uVar8;
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
          pFVar10 = (this_00->AllocatorInstance).Data + local_res20 * 0x88;
          if (*(void **)(pFVar10 + 0x78) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar10 + 0x78));
          }
          *(undefined4 *)(pFVar10 + 0x68) = 0;
          if (*(void **)(pFVar10 + 0x60) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar10 + 0x60));
          }
          TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(pFVar10 + 0x20));
          if (*(void **)(pFVar10 + 8) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar10 + 8));
          }
          iVar6 = (this->CachedOverridableParams).ArrayNum + ~uVar9;
          if (iVar6 != 0) {
            memmove(pFVar10,pFVar10 + 0x88,(longlong)iVar6 * 0x88);
          }
          piVar1 = &(this->CachedOverridableParams).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x88,8,&this_00->AllocatorInstance,(this->CachedOverridableParams).ArrayNum,
                     &(this->CachedOverridableParams).ArrayMax);
          local_res20 = local_res20 + -1;
          uVar9 = uVar9 - 1;
        }
        else {
          if ((*(longlong *)(pFVar10 + 0x18) == 0) &&
             ((**(code **)(this->_padding_ + 0x4a0))(this,pFVar10),
             *(longlong *)(pFVar10 + 0x18) == 0)) {
            if (1 < (byte)LogPCG._0_1_) {
              local_68 = (FName)this->_padding_;
              ::FName::ToString(&local_68,&local_50);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_50.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            uVar7 = *(uint *)(pFVar10 + 0x10);
            if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
            }
            *(undefined4 *)(pFVar10 + 0x80) = 0;
            if (*(int *)(pFVar10 + 0x84) < (int)uVar7) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar7,(ForAnyElementType *)(pFVar10 + 0x78),0,(int *)(pFVar10 + 0x84));
            }
            pUVar2 = *(UStruct **)(pFVar10 + 0x18);
            if ((*(int *)(pFVar10 + 0x10) < 1) &&
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
            local_78 = UStruct::FindPropertyByName(pUVar2,**(FName **)(pFVar10 + 8));
            if (local_78 != (FProperty *)0x0) {
              if (((*(FProperty ***)(pFVar10 + 0x78) <= &local_78) &&
                  (&local_78 < *(FProperty ***)(pFVar10 + 0x78) + *(int *)(pFVar10 + 0x84))) &&
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
              iVar6 = *(int *)(pFVar10 + 0x80);
              if (iVar6 == *(int *)(pFVar10 + 0x84)) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,(ForAnyElementType *)(pFVar10 + 0x78),
                                   (int *)(pFVar10 + 0x84));
              }
              *(int *)(pFVar10 + 0x80) = iVar6 + 1;
              uVar7 = 1;
              *(FProperty **)(*(longlong *)(pFVar10 + 0x78) + (longlong)iVar6 * 8) = local_78;
              if (1 < *(int *)(pFVar10 + 0x10)) {
                do {
                  if ((local_78 == (FProperty *)0x0) ||
                     ((((*(uint *)(local_78->_padding_ + 0x18) >> 0x14 & 1) == 0 &&
                       ((local_78 == (FProperty *)0x0 ||
                        ((*(uint *)(local_78->_padding_ + 0x18) >> 0x10 & 1) == 0)))) ||
                      (pUVar2 = (UStruct *)local_78[1]._padding_, pUVar2 == (UStruct *)0x0)))) {
                    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_4521289815978671001>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSettings.cpp"
                                       ,0x467,"UnderlyingStruct");
                    if (bVar5) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    *(undefined4 *)(pFVar10 + 0x80) = 0;
                    if (*(int *)(pFVar10 + 0x84) != 0) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,0,(ForAnyElementType *)(pFVar10 + 0x78),0,
                                 (int *)(pFVar10 + 0x84));
                    }
                    break;
                  }
                  uVar8 = 0;
                  if ((int)uVar7 < *(int *)(pFVar10 + 0x10)) {
                    uVar8 = ~uVar7 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_78 = UStruct::FindPropertyByName
                                       (pUVar2,*(FName *)(*(longlong *)(pFVar10 + 8) +
                                                         (longlong)(int)uVar7 * 8));
                  if ((local_78 == (FProperty *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("CurrentProperty",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSettings.cpp"
                                         ,0x46a,L""), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (((*(FProperty ***)(pFVar10 + 0x78) <= &local_78) &&
                      (&local_78 < *(FProperty ***)(pFVar10 + 0x78) + *(int *)(pFVar10 + 0x84))) &&
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
                  iVar6 = *(int *)(pFVar10 + 0x80);
                  if (iVar6 == *(int *)(pFVar10 + 0x84)) {
                    iVar6 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,(ForAnyElementType *)(pFVar10 + 0x78),
                                       (int *)(pFVar10 + 0x84));
                  }
                  *(int *)(pFVar10 + 0x80) = iVar6 + 1;
                  uVar7 = uVar7 + 1;
                  *(FProperty **)(*(longlong *)(pFVar10 + 0x78) + (longlong)iVar6 * 8) = local_78;
                } while ((int)uVar7 < *(int *)(pFVar10 + 0x10));
              }
              iVar6 = *(int *)(pFVar10 + 0x80);
              if (iVar6 != 0) {
                uVar7 = 0;
                if ((int)(iVar6 - 1U) < iVar6) {
                  uVar7 = ~(iVar6 - 1U) >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar3 = *(longlong *)
                         (*(longlong *)(pFVar10 + 0x78) + -8 +
                         (longlong)*(int *)(pFVar10 + 0x80) * 8);
                if ((lVar3 != 0) && ((*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) >> 0x10 & 1) != 0))
                {
                  this->bHasAnyOverridableHardReferences = true;
                }
              }
              goto LAB_149f50cb1;
            }
          }
          local_res18 = local_res18 + -0x88;
          local_res20 = local_res20 + -1;
          TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_00,uVar9,Default);
          uVar9 = uVar9 - 1;
        }
LAB_149f50cb1:
        local_res18 = local_res18 + 0x88;
        local_res20 = local_res20 + 1;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (this->CachedOverridableParams).ArrayNum);
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// InitializeOverriddenSettingsPropertyBag @ 149f51230

void __thiscall UPCGSettings::InitializeOverriddenSettingsPropertyBag(UPCGSettings *this)

{
  code *pcVar1;
  FProperty *this_00;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UPropertyBag *pUVar6;
  bool bVar7;
  FName local_res8;
  ForAnyElementType local_78;
  undefined8 local_70;
  FPropertyBagPropertyDesc *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_58;
  TFieldIterator<FProperty> local_48;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1150,"UPCGSettings::InitializeOverriddenSettingsPropertyBag"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSettings.cpp"
               ,0x47e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1150);
  }
  pUVar4 = StaticClass();
  local_48.Struct = (UStruct *)this->_padding_;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (local_48.Struct == (UStruct *)0x0) {
    local_48.Field = (FField *)0x0;
  }
  else {
    local_48.Field = (local_48.Struct)->ChildProperties;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_48);
  this_00 = (FProperty *)local_48.Field;
  while (local_48.Field = (FField *)this_00, this_00 != (FProperty *)0x0) {
    pUVar5 = FField::GetOwnerClass((FField *)this_00);
    if (pUVar4 != (UClass *)0x0) {
      iVar3 = (int)pUVar4->_padding_;
      if (((int)pUVar5->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (pUVar5 = FField::GetOwnerClass((FField *)this_00), pUVar5 != pUVar4)) {
        bVar2 = IsThisNotNull(this_00,"FField::GetFName");
        if (bVar2) {
          local_res8 = (FName)this_00->_padding_;
        }
        else {
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
        }
        iVar3 = (int)local_70;
        if ((int)local_70 == local_70._4_4_) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&local_78,(int *)((longlong)&local_70 + 4));
        }
        local_70 = CONCAT44(local_70._4_4_,iVar3 + 1);
        FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                  ((FPropertyBagPropertyDesc *)(local_78.Data + (longlong)iVar3 * 0x40),local_res8,
                   this_00);
      }
    }
    local_48.Field = (FField *)this_00->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_48);
    this_00 = (FProperty *)local_48.Field;
  }
  iVar3 = (int)local_70;
  local_68 = (FPropertyBagPropertyDesc *)local_78.Data;
  if (((int)local_70 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_60 = iVar3;
  local_58._12_4_ = uStack_5c;
  local_58.ArrayNum = iVar3;
  local_58.DataPtr = local_68;
  pUVar6 = UPropertyBag::GetOrCreateFromDescs(&local_58,(wchar_t *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPropertyBag *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->OverriddenSettingsPropertyBag).field0_0x0.DebugPtr = pUVar6;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InputPinProperties @ 149f51b40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettings::InputPinProperties
          (UPCGSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FName *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar4 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
  FText::GetEmpty();
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  *pFVar4 = PCGPinConstants::DefaultInputLabel;
  pFVar4[2].ComparisonIndex = 0;
  pFVar4[2].Number = 0;
  *(undefined1 *)&pFVar4[1].ComparisonIndex.Value = 0;
  pFVar4[2] = (FName)(pFVar3->Ids).AllocatorInstance.Data;
  (pFVar3->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[3].ComparisonIndex.Value = (pFVar3->Ids).ArrayNum;
  pFVar4[3].Number = (pFVar3->Ids).ArrayMax;
  (pFVar3->Ids).ArrayNum = 0;
  (pFVar3->Ids).ArrayMax = 0;
  pFVar4[4].ComparisonIndex.Value = pFVar3->CustomSubtype;
  *(undefined2 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 1) = 0;
  *(undefined1 *)&pFVar4[5].ComparisonIndex.Value = 1;
  *(undefined1 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 3) = 1;
  pFVar1 = (pFVar3->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined1 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 1) = 1;
  return __return_storage_ptr__;
}

// IsPinUsedByNodeExecution @ 149f529a0

bool __thiscall UPCGSettings::IsPinUsedByNodeExecution(UPCGSettings *this,UPCGPin *param_1)

{
  return true;
}

// IsPropertyOverriddenByPin @ 149f529b0

bool __thiscall
UPCGSettings::IsPropertyOverriddenByPin(UPCGSettings *this,TArrayView<FName_const_,int> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  UPCGNode *this_00;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UPCGPin *this_01;
  FName *pFVar7;
  FName *pFVar8;
  
  if ((param_1->ArrayNum != 0) &&
     (this_00 = (UPCGNode *)this->_padding_, this_00 != (UPCGNode *)0x0)) {
    pUVar5 = UPCGNode::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x480))(this);
      pFVar7 = (FName *)*plVar6;
      pFVar8 = pFVar7 + (longlong)(int)plVar6[1] * 0x11;
      if (pFVar7 != pFVar8) {
        uVar2 = param_1->ArrayNum;
        do {
          uVar3 = pFVar7[2].ComparisonIndex.Value;
          if ((uVar3 == uVar2) &&
             (bVar4 = CompareItems<FName,int>(param_1->DataPtr,(FName *)pFVar7[1],uVar3), bVar4)) {
            if (pFVar7 == (FName *)0x0) {
              return false;
            }
            this_01 = UPCGNode::GetInputPin(this_00,pFVar7);
            if (this_01 == (UPCGPin *)0x0) {
              return false;
            }
            bVar4 = UPCGPin::IsConnected(this_01);
            return bVar4;
          }
          pFVar7 = pFVar7 + 0x11;
        } while (pFVar7 != pFVar8);
      }
    }
  }
  return false;
}

// IsPropertyOverriddenByPin @ 149f52a90

bool __thiscall UPCGSettings::IsPropertyOverriddenByPin(UPCGSettings *this,FProperty *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UPCGPin *this_01;
  FPCGSettingsOverridableParam *pFVar5;
  FPCGSettingsOverridableParam *pFVar6;
  FProperty *local_res10;
  
  if ((param_1 != (FProperty *)0x0) &&
     (this_00 = (UPCGNode *)this->_padding_, this_00 != (UPCGNode *)0x0)) {
    pUVar3 = UPCGNode::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x480))(this);
      pFVar5 = (FPCGSettingsOverridableParam *)*plVar4;
      pFVar6 = pFVar5 + (int)plVar4[1];
      local_res10 = param_1;
      for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 1) {
        bVar2 = `UPCGSettings::IsPropertyOverriddenByPin'::__l8::<lambda_1>::operator()
                          (&local_res10,pFVar5);
        if (bVar2) {
          if (pFVar5 == (FPCGSettingsOverridableParam *)0x0) {
            return false;
          }
          this_01 = UPCGNode::GetInputPin(this_00,&pFVar5->Label);
          if (this_01 == (UPCGPin *)0x0) {
            return false;
          }
          bVar2 = UPCGPin::IsConnected(this_01);
          return bVar2;
        }
      }
    }
  }
  return false;
}

// IsPropertyOverriddenByPin @ 149f52b70

bool __thiscall UPCGSettings::IsPropertyOverriddenByPin(UPCGSettings *this,FName param_1)

{
  undefined1 uVar1;
  FName local_res10 [3];
  FName *local_18;
  undefined4 local_10;
  
  local_18 = local_res10;
  local_10 = 1;
  local_res10[0] = param_1;
  uVar1 = (**(code **)(this->_padding_ + 0x3e0))(this,&local_18);
  return (bool)uVar1;
}

// OnOverrideSettingsDuplicated @ 149f572e0

void __thiscall UPCGSettings::OnOverrideSettingsDuplicated(UPCGSettings *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149f572e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x478))();
  return;
}

// OutputPinProperties @ 149f57530

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettings::OutputPinProperties
          (UPCGSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FName *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar4 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
  FText::GetEmpty();
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spatial);
  *pFVar4 = PCGPinConstants::DefaultOutputLabel;
  pFVar4[2].ComparisonIndex = 0;
  pFVar4[2].Number = 0;
  *(undefined1 *)&pFVar4[1].ComparisonIndex.Value = 0;
  pFVar4[2] = (FName)(pFVar3->Ids).AllocatorInstance.Data;
  (pFVar3->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[3].ComparisonIndex.Value = (pFVar3->Ids).ArrayNum;
  pFVar4[3].Number = (pFVar3->Ids).ArrayMax;
  (pFVar3->Ids).ArrayNum = 0;
  (pFVar3->Ids).ArrayMax = 0;
  pFVar4[4].ComparisonIndex.Value = pFVar3->CustomSubtype;
  *(undefined2 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 1) = 0;
  *(undefined1 *)&pFVar4[5].ComparisonIndex.Value = 1;
  *(undefined1 *)((longlong)&pFVar4[5].ComparisonIndex.Value + 3) = 1;
  pFVar1 = (pFVar3->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// PostInitProperties @ 149f57bd0

void __thiscall UPCGSettings::PostInitProperties(UPCGSettings *this)

{
  bool bVar1;
  int iVar2;
  
  UObject::PostInitProperties((UObject *)this);
  InitializeOverriddenSettingsPropertyBag(this);
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,true);
  if (bVar1) {
    iVar2 = (**(code **)(this->_padding_ + 0x470))(this);
    this->Seed = iVar2;
  }
  return;
}

// PostLoad @ 149f58070

void __thiscall UPCGSettings::PostLoad(UPCGSettings *this)

{
  UObject::PostLoad((UObject *)this);
  InitializeCachedOverridableParams(this,false);
  InitializeOverriddenSettingsPropertyBag(this);
  return;
}

// PostSaveRoot @ 149f580e0

void __thiscall UPCGSettings::PostSaveRoot(UPCGSettings *this,FObjectPostSaveRootContext param_1)

{
  longlong local_res10 [3];
  
  local_res10[0] = *(longlong *)param_1;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PostSaveRoot((UObject *)this,(FObjectPostSaveRootContext)local_res10);
  return;
}

// Serialize @ 149f603e0

void __thiscall UPCGSettings::Serialize(UPCGSettings *this,FArchive *param_1)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(this->_padding_ + 0x468))(this,&local_18);
  if (((local_c != 0 || local_10 != 0) || local_14 != 0) || local_18 != 0) {
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&local_18);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Serialize @ 149f604e0

void __thiscall UPCGSettings::Serialize(UPCGSettings *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FLLMScope local_res8 [2];
  FSlotBase local_res10;
  FName local_res18;
  FMemScope local_res20;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPCGCustomVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))
            (pFVar1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(this->_padding_ + 0x468))(this,&local_28);
  if (((local_1c != 0 || local_20 != 0) || local_24 != 0) || local_28 != 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&local_28);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// StaticRegisterNativesUPCGSettings @ 149f63bf0

void __cdecl UPCGSettings::StaticRegisterNativesUPCGSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPCGSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBP_GetTypeUnionOfIncidentEdges @ 149f6f8b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
UPCGSettings::execBP_GetTypeUnionOfIncidentEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EPCGDataType EVar2;
  FName *pFVar3;
  FName local_res10;
  FName local_res18 [2];
  TArrayView<FName_const_,int> local_48;
  FPCGDataTypeIdentifier local_38;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
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
  local_48.ArrayNum = 1;
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = *pFVar3;
  local_48.DataPtr = local_res18;
  GetTypeUnionIDOfAllIncidentEdges((UPCGSettings *)param_1,&local_38,&local_48);
  EVar2 = FPCGDataTypeIdentifier::operator_enum_EPCGDataType(&local_38);
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ids.AllocatorInstance.Data);
  }
  *(EPCGDataType *)param_3 = EVar2;
  return;
}

// execGetTypeUnionIDOfIncidentEdges @ 149f71810

void __cdecl
UPCGSettings::execGetTypeUnionIDOfIncidentEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FName local_res10;
  FName local_res18 [2];
  TArrayView<FName_const_,int> local_48;
  FPCGDataTypeIdentifier local_38;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
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
  local_48.ArrayNum = 1;
  pFVar2 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = *pFVar2;
  local_48.DataPtr = local_res18;
  GetTypeUnionIDOfAllIncidentEdges((UPCGSettings *)param_1,&local_38,&local_48);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Ids.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Ids.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Ids.ArrayMax;
    local_38.Ids.ArrayNum = 0;
    local_38.Ids.ArrayMax = 0;
    local_38.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(int *)((longlong)param_3 + 0x10) = local_38.CustomSubtype;
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ids.AllocatorInstance.Data);
  }
  return;
}

// execUseSeed @ 149f72c10

void __cdecl UPCGSettings::execUseSeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x3c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

