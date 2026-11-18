// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// StaticClass @ 149c38eb0

UClass * __cdecl UPCGSpawnActorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnActorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnActorSettings",
               &Z_Registration_Info_UClass_UPCGSpawnActorSettings.InnerSingleton,
               StaticRegisterNativesUPCGSpawnActorSettings,0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSpawnActorSettings>,
               InternalVTableHelperCtorCaller<UPCGSpawnActorSettings>,local_res8,
               UPCGBaseSubgraphSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnActorSettings.InnerSingleton;
}

// UPCGSpawnActorSettings @ 149c4b680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGSpawnActorSettings * __thiscall
UPCGSpawnActorSettings::UPCGSpawnActorSettings(UPCGSpawnActorSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGBaseSubgraphSettings::UPCGBaseSubgraphSettings((UPCGBaseSubgraphSettings *)this,param_1);
  this->Option = CollapseActors;
  this->bForceDisableActorParsing = true;
  this->GenerationTrigger = Default;
  this->bInheritActorTags = false;
  this_00 = &(this->RootActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGSpawnActorSettings__6B_;
  (this->PostSpawnFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostSpawnFunctionNames).ArrayNum = 0;
  (this->PostSpawnFunctionNames).ArrayMax = 0;
  (this->TagsToAddOnActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagsToAddOnActors).ArrayNum = 0;
  (this->TagsToAddOnActors).ArrayMax = 0;
  (this->TemplateActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->SpawnedActorPropertyOverrideDescriptions).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedActorPropertyOverrideDescriptions).ArrayNum = 0;
  (this->SpawnedActorPropertyOverrideDescriptions).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->AttachOptions = Attached;
  this->bSpawnByAttribute = false;
  (this->SpawnAttribute).ComparisonIndex = 0;
  (this->SpawnAttribute).Number = 0;
  this->bWarnOnIdenticalSpawn = true;
  this->bDeleteActorsBeforeGeneration = false;
  FPCGDataLayerSettings::FPCGDataLayerSettings(&this->DataLayerSettings);
  (this->HLODSettings).HLODSourceType = Self;
  (this->HLODSettings).HLODLayer.field0_0x0.DebugPtr = (UHLODLayer *)0x0;
  (this->TemplateActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bAllowTemplateActorEditing = false;
  return this;
}

// UPCGSpawnActorSettings @ 149c4b760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGSpawnActorSettings * __thiscall
UPCGSpawnActorSettings::UPCGSpawnActorSettings
          (UPCGSpawnActorSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  bool bVar1;
  
  UPCGBaseSubgraphSettings::UPCGBaseSubgraphSettings((UPCGBaseSubgraphSettings *)this,param_1);
  this_00 = &(this->RootActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGSpawnActorSettings__6B_;
  (this->PostSpawnFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostSpawnFunctionNames).ArrayNum = 0;
  (this->PostSpawnFunctionNames).ArrayMax = 0;
  this->Option = CollapseActors;
  this->bForceDisableActorParsing = true;
  this->GenerationTrigger = Default;
  this->bInheritActorTags = false;
  (this->TagsToAddOnActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagsToAddOnActors).ArrayNum = 0;
  (this->TagsToAddOnActors).ArrayMax = 0;
  (this->TemplateActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->SpawnedActorPropertyOverrideDescriptions).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedActorPropertyOverrideDescriptions).ArrayNum = 0;
  (this->SpawnedActorPropertyOverrideDescriptions).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->AttachOptions = Attached;
  this->bSpawnByAttribute = false;
  (this->SpawnAttribute).ComparisonIndex = 0;
  (this->SpawnAttribute).Number = 0;
  this->bWarnOnIdenticalSpawn = true;
  this->bDeleteActorsBeforeGeneration = false;
  FPCGDataLayerSettings::FPCGDataLayerSettings(&this->DataLayerSettings);
  (this->HLODSettings).HLODSourceType = Self;
  (this->HLODSettings).HLODLayer.field0_0x0.DebugPtr = (UHLODLayer *)0x0;
  (this->TemplateActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bAllowTemplateActorEditing = false;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    this->Option = NoMerging;
    this->AttachOptions = InFolder;
  }
  return this;
}

// ~UPCGSpawnActorSettings @ 149c4da20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGSpawnActorSettings::~UPCGSpawnActorSettings(UPCGSpawnActorSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGSpawnActorSettings__6B_;
  FPCGDataLayerSettings::~FPCGDataLayerSettings(&this->DataLayerSettings);
  pvVar1 = *(void **)&(this->RootActor).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->SpawnedActorPropertyOverrideDescriptions).AllocatorInstance.Data,
             (this->SpawnedActorPropertyOverrideDescriptions).ArrayNum);
  pFVar2 = (this->SpawnedActorPropertyOverrideDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TagsToAddOnActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PostSpawnFunctionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGBaseSubgraphSettings::~UPCGBaseSubgraphSettings((UPCGBaseSubgraphSettings *)this);
  return;
}

// BeginDestroy @ 149c5d020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGSpawnActorSettings::BeginDestroy(UPCGSpawnActorSettings *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPCGSpawnActorSettings **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CreateElement @ 149c602c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSpawnActorSettings::CreateElement
          (UPCGSpawnActorSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGSpawnActorElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSpawnActorElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// CreateNode @ 149c61040

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

UPCGNode * __thiscall UPCGSpawnActorSettings::CreateNode(UPCGSpawnActorSettings *this)

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
  pUVar2 = UPCGSpawnActorNode::StaticClass();
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

// GetGraphInterfaceFromActorSubclass @ 149c774e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGGraphInterface * __cdecl
UPCGSpawnActorSettings::GetGraphInterfaceFromActorSubclass(TSubclassOf<AActor> param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  UPCGGraphInterface *local_res8;
  UPCGGraphInterface **local_res10;
  code **local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  code *local_38;
  UPCGGraphInterface ***local_30;
  code *local_28;
  code ***local_20;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return (UPCGGraphInterface *)0x0;
  }
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar3 == (UClass *)0x0) {
    return (UPCGGraphInterface *)0x0;
  }
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return (UPCGGraphInterface *)0x0;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return (UPCGGraphInterface *)0x0;
  }
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar3 != (UClass *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *(longlong *)param_1.Class.field0_0x0;
      goto LAB_149c7756d;
    }
  }
  lVar4 = 0;
LAB_149c7756d:
  if ((*(byte *)(lVar4 + 0xd4) & 1) != 0) {
    return (UPCGGraphInterface *)0x0;
  }
  local_res10 = &local_res8;
  local_res8 = (UPCGGraphInterface *)0x0;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGSpawnActorSettings::GetGraphInterfaceFromActorSubclass'::__l2::<lambda_1>,bool,UPCGComponent_const_*>
             ::Call;
  local_res18 = &local_38;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`AActor::ForEachComponentOfActorClassDefault<UPCGComponent,void>'::__l2::<lambda_1>,bool,UActorComponent_const_*>
             ::Call;
  local_res20.DebugPtr = Z_Construct_UClass_UPCGComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
  }
  AActor::ForEachComponentOfActorClassDefault
            ((TSubclassOf<AActor> *)param_1.Class.field0_0x0,
             (TSubclassOf<UActorComponent> *)&local_res20.ObjectPtr,
             (TFunctionRef<bool___cdecl(UActorComponent_const_*)> *)&local_28);
  return local_res8;
}

// GetPrivateStaticClass @ 149c784b0

UClass * __cdecl UPCGSpawnActorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnActorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnActorSettings",
               &Z_Registration_Info_UClass_UPCGSpawnActorSettings.InnerSingleton,
               StaticRegisterNativesUPCGSpawnActorSettings,0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSpawnActorSettings>,
               InternalVTableHelperCtorCaller<UPCGSpawnActorSettings>,local_res8,
               UPCGBaseSubgraphSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnActorSettings.InnerSingleton;
}

// GetSubgraphInterface @ 149c793d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGGraphInterface * __thiscall
UPCGSpawnActorSettings::GetSubgraphInterface(UPCGSpawnActorSettings *this)

{
  UPCGGraphInterface *pUVar1;
  UClass *local_res8 [4];
  
  local_res8[0] = (this->TemplateActorClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  pUVar1 = GetGraphInterfaceFromActorSubclass((TSubclassOf<AActor>)local_res8);
  return pUVar1;
}

// InputPinProperties @ 149c7fb10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSpawnActorSettings::InputPinProperties
          (UPCGSpawnActorSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_18;
  
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  pTVar5 = FPCGDataLayerSettings::InputPinProperties(&this->DataLayerSettings,&local_18);
  if (__return_storage_ptr__ == pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar1 = pTVar5->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar1,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x30,
            (pTVar5->AllocatorInstance).Data,(longlong)iVar1 * 0x30);
    pTVar5->ArrayNum = 0;
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPCGPinProperties *)local_18.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsDynamicGraph @ 149c80bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPCGSpawnActorSettings::IsDynamicGraph(UPCGSpawnActorSettings *this)

{
  return this->bSpawnByAttribute;
}

// OutputPinProperties @ 149c81250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSpawnActorSettings::OutputPinProperties
          (UPCGSpawnActorSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PostLoad @ 149c81c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGSpawnActorSettings::PostLoad(UPCGSpawnActorSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// SetAllowTemplateActorEditing @ 149c8c2f0

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
UPCGSpawnActorSettings::SetAllowTemplateActorEditing(UPCGSpawnActorSettings *this,bool param_1)

{
  this->bAllowTemplateActorEditing = param_1;
  return;
}

// SetTemplateActorClass @ 149c8c9e0

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
UPCGSpawnActorSettings::SetTemplateActorClass
          (UPCGSpawnActorSettings *this,TSubclassOf<AActor> *param_1)

{
  UClass *pUVar1;
  
  if (!UE::GC::GIsIncrementalReachabilityPending) {
    (this->TemplateActorClass).Class.field0_0x0 = (param_1->Class).field0_0x0;
    return;
  }
  pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar1 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (this->TemplateActorClass).Class.field0_0x0 = (param_1->Class).field0_0x0;
    return;
  }
  (this->TemplateActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return;
}

// StaticRegisterNativesUPCGSpawnActorSettings @ 149c91fa0

void __cdecl UPCGSpawnActorSettings::StaticRegisterNativesUPCGSpawnActorSettings(void)

{
  return;
}

