// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 26

// StaticClass @ 146f0e580

UClass * __cdecl UEnvQueryInstanceBlueprintWrapper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryInstanceBlueprintWrapper",
               &Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.InnerSingleton,
               StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryInstanceBlueprintWrapper>,
               InternalVTableHelperCtorCaller<UEnvQueryInstanceBlueprintWrapper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.InnerSingleton;
}

// UEnvQueryInstanceBlueprintWrapper @ 146f2c090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEnvQueryInstanceBlueprintWrapper * __thiscall
UEnvQueryInstanceBlueprintWrapper::UEnvQueryInstanceBlueprintWrapper
          (UEnvQueryInstanceBlueprintWrapper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IEQSQueryResultSourceInterface__;
  (this->QueryResult).Object = (FEnvQueryResult *)0x0;
  (this->QueryResult).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->QueryInstance).Object = (FEnvQueryInstance *)0x0;
  (this->QueryInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnQueryFinishedEvent = 0;
  *(undefined8 *)&(this->OnQueryFinishedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnQueryFinishedEvent).field_0x10 = 0;
  (this->Instigator).ObjectIndex = 0;
  (this->Instigator).ObjectSerialNumber = 0;
  return this;
}

// UEnvQueryInstanceBlueprintWrapper @ 146f2c0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEnvQueryInstanceBlueprintWrapper * __thiscall
UEnvQueryInstanceBlueprintWrapper::UEnvQueryInstanceBlueprintWrapper
          (UEnvQueryInstanceBlueprintWrapper *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->QueryID = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IEQSQueryResultSourceInterface__;
  (this->QueryResult).Object = (FEnvQueryResult *)0x0;
  (this->QueryResult).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->QueryInstance).Object = (FEnvQueryInstance *)0x0;
  (this->QueryInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnQueryFinishedEvent = 0;
  *(undefined8 *)&(this->OnQueryFinishedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnQueryFinishedEvent).field_0x10 = 0;
  (this->Instigator).ObjectIndex = 0;
  (this->Instigator).ObjectSerialNumber = 0;
  return this;
}

// ~UEnvQueryInstanceBlueprintWrapper @ 146f2ed90

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
UEnvQueryInstanceBlueprintWrapper::~UEnvQueryInstanceBlueprintWrapper
          (UEnvQueryInstanceBlueprintWrapper *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IEQSQueryResultSourceInterface__;
  pvVar1 = *(void **)&(this->OnQueryFinishedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryFinishedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QueryInstance).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QueryResult).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IEQSQueryResultSourceInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// FEQSQueryDoneSignature_DelegateWrapper @ 146f48750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEnvQueryInstanceBlueprintWrapper::FEQSQueryDoneSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UEnvQueryInstanceBlueprintWrapper *param_2,Type param_3)

{
  UEnvQueryInstanceBlueprintWrapper *local_18;
  undefined1 local_10;
  
  local_10 = (undefined1)param_3;
  local_18 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// GetItemScore @ 146f56d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
UEnvQueryInstanceBlueprintWrapper::GetItemScore(UEnvQueryInstanceBlueprintWrapper *this,int param_1)

{
  FEnvQueryResult *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  pFVar1 = (this->QueryResult).Object;
  if (pFVar1 == (FEnvQueryResult *)0x0) {
    return __real_bf800000;
  }
  if ((-1 < param_1) && (param_1 < (pFVar1->Items).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar4 = (float)(*pcVar2)();
        return fVar4;
      }
    }
    return *(float *)((pFVar1->Items).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return 0.0;
}

// GetPrivateStaticClass @ 146f58810

UClass * __cdecl UEnvQueryInstanceBlueprintWrapper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryInstanceBlueprintWrapper",
               &Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.InnerSingleton,
               StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryInstanceBlueprintWrapper>,
               InternalVTableHelperCtorCaller<UEnvQueryInstanceBlueprintWrapper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.InnerSingleton;
}

// GetQueryInstance @ 146f59a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryInstance * __thiscall
UEnvQueryInstanceBlueprintWrapper::GetQueryInstance(UEnvQueryInstanceBlueprintWrapper *this)

{
  return (FEnvQueryInstance *)this->_padding_;
}

// GetQueryResult @ 146f59ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryResult * __thiscall
UEnvQueryInstanceBlueprintWrapper::GetQueryResult(UEnvQueryInstanceBlueprintWrapper *this)

{
  return (FEnvQueryResult *)this->_padding_;
}

// GetQueryResultsAsActors @ 146f59ad0

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
UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors
          (UEnvQueryInstanceBlueprintWrapper *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FEnvQueryResult *pFVar9;
  UClass *pUVar10;
  AActor *local_28 [2];
  
  pUVar10 = (UClass *)0x0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  pFVar9 = (this->QueryResult).Object;
  if ((((pFVar9 != (FEnvQueryResult *)0x0) && (pFVar9->Status == Success)) &&
      (pUVar8 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar8 != (UClass *)0x0)) &&
     (pUVar7 = UEnvQueryItemType::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar6 = (int)pUVar7->_padding_;
    if (((int)pUVar8->_padding_ < iVar6) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar6 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (pUVar8 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar8 != (UClass *)0x0)) {
      pUVar7 = UEnvQueryItemType::StaticClass();
      if (pUVar7 != (UClass *)0x0) {
        iVar6 = (int)pUVar7->_padding_;
        if (((int)pUVar8->_padding_ < iVar6) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar6 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar10 = (this->ItemType).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar8 = UEnvQueryItemType_ActorBase::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar6 = (int)pUVar8->_padding_;
        if (((int)pUVar10->_padding_ < iVar6) ||
           ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (this->RunMode == AllMatching) {
            pFVar9 = TSharedPtr<FEnvQueryResult,1>::operator->(&this->QueryResult);
            FEnvQueryResult::GetAllAsActors(pFVar9,param_1);
            return 0 < param_1->ArrayNum;
          }
          pFVar9 = TSharedPtr<FEnvQueryResult,1>::operator->(&this->QueryResult);
          local_28[0] = FEnvQueryResult::GetItemAsActor(pFVar9,0);
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar6 = param_1->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar6 + 1;
          *(AActor **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
          return 0 < param_1->ArrayNum;
        }
      }
    }
  }
  return false;
}

// GetQueryResultsAsLocations @ 146f59cf0

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
UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations
          (UEnvQueryInstanceBlueprintWrapper *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FEnvQueryResult *pFVar10;
  TVector<double> local_28;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  pFVar10 = (this->QueryResult).Object;
  if ((pFVar10 != (FEnvQueryResult *)0x0) && (pFVar10->Status == Success)) {
    if (this->RunMode == AllMatching) {
      pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(&this->QueryResult);
      FEnvQueryResult::GetAllAsLocations(pFVar10,param_1);
      return 0 < param_1->ArrayNum;
    }
    pFVar9 = (FScriptContainerElement *)FEnvQueryResult::GetItemAsLocation(pFVar10,&local_28,0);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)*piVar1 * 0x18)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    dVar5 = *(double *)(pFVar9 + 8);
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar2 = pFVar3 + (longlong)iVar8 * 0x18;
    *(double *)pFVar2 = (((TVector<double>_u_0 *)&pFVar9->field_0x0)->_s_0).X;
    *(double *)(pFVar2 + 8) = dVar5;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x18 + 0x10) = *(undefined8 *)(pFVar9 + 0x10);
    return 0 < param_1->ArrayNum;
  }
  return false;
}

// GetResultsAsActors @ 146f59e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __thiscall
UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors
          (UEnvQueryInstanceBlueprintWrapper *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FEnvQueryResult *pFVar7;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UClass *pUVar9;
  AActor *local_28 [2];
  
  pUVar9 = (UClass *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((((this->QueryResult).Object != (FEnvQueryResult *)0x0) &&
      (pUVar6 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0)) &&
     (pUVar5 = UEnvQueryItemType::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar4 = (int)pUVar5->_padding_;
    if (((int)pUVar6->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar4 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (pUVar6 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0)) {
      pUVar5 = UEnvQueryItemType::StaticClass();
      if (pUVar5 != (UClass *)0x0) {
        iVar4 = (int)pUVar5->_padding_;
        if (((int)pUVar6->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar9 = (this->ItemType).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar6 = UEnvQueryItemType_ActorBase::StaticClass();
      if (pUVar6 != (UClass *)0x0) {
        iVar4 = (int)pUVar6->_padding_;
        if (((int)pUVar9->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (this->RunMode == AllMatching) {
            pFVar7 = TSharedPtr<FEnvQueryResult,1>::operator->(&this->QueryResult);
            FEnvQueryResult::GetAllAsActors(pFVar7,__return_storage_ptr__);
          }
          else {
            pFVar7 = TSharedPtr<FEnvQueryResult,1>::operator->(&this->QueryResult);
            local_28[0] = FEnvQueryResult::GetItemAsActor(pFVar7,0);
            pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
                ((FScriptContainerElement *)local_28 <
                 pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar8;
            }
            iVar4 = __return_storage_ptr__->ArrayNum;
            if (iVar4 == __return_storage_ptr__->ArrayMax) {
              iVar4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar4 + 1;
            *(AActor **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
                 local_28[0];
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetResultsAsLocations @ 146f5a040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations
          (UEnvQueryInstanceBlueprintWrapper *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FEnvQueryResult *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  TVector<double> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->QueryResult).Object;
  if (this_00 != (FEnvQueryResult *)0x0) {
    if (this->RunMode != AllMatching) {
      pFVar7 = (FScriptContainerElement *)FEnvQueryResult::GetItemAsLocation(this_00,&local_28,0);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar7) &&
         (pFVar7 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      dVar4 = *(double *)(pFVar7 + 8);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
      *(double *)pFVar1 = (((TVector<double>_u_0 *)&pFVar7->field_0x0)->_s_0).X;
      *(double *)(pFVar1 + 8) = dVar4;
      *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = *(undefined8 *)(pFVar7 + 0x10);
      return __return_storage_ptr__;
    }
    FEnvQueryResult::GetAllAsLocations(this_00,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// IsSupportedForNetworking @ 146f5bae0

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
UEnvQueryInstanceBlueprintWrapper::IsSupportedForNetworking(UEnvQueryInstanceBlueprintWrapper *this)

{
  FEnvQueryInstance *pFVar1;
  UObject *pUVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar4 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar1 = (this->QueryInstance).Object;
  ::FString::FString(&local_48,L"not available in shipping");
  pUVar2 = FWeakObjectPtr::Get(&this->Instigator);
  if (pUVar2 == (UObject *)0x0) {
    ::FString::FString(&local_58,L"None");
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
    local_res8.Number = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString(&local_res8,&local_58);
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_48,(wchar_t *)FVar3.Data);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (2 < (byte)LogEQS._0_1_) {
    if (pFVar1 != (FEnvQueryInstance *)0x0) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar1->_padding_ + 4));
      if (pUVar2 == (UObject *)0x0) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_res8.Number = *(uint *)&pUVar2->field_0x1c;
        ::FName::ToString(&local_res8,&local_58);
      }
      bVar4 = true;
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return false;
}

// OnQueryFinished @ 146f5e730

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
UEnvQueryInstanceBlueprintWrapper::OnQueryFinished
          (UEnvQueryInstanceBlueprintWrapper *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  FEnvQueryResult *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  UEnvQueryInstanceBlueprintWrapper *local_18;
  undefined1 local_10;
  
  if ((param_1->Object == (FEnvQueryResult *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstanceBlueprintWrapper.cpp"
                         ,0x12,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->QueryResult).SharedReferenceCount.ReferenceController;
  (this->QueryResult).Object = pFVar1;
  (this->QueryResult).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((param_1->Object == (FEnvQueryResult *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = param_1->Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 = (pFVar1->ItemType).Class.field0_0x0.DebugPtr, pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->ItemType).Class.field0_0x0 = (pFVar1->ItemType).Class.field0_0x0;
  if ((param_1->Object == (FEnvQueryResult *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->OptionIndex = param_1->Object->OptionIndex;
  if ((param_1->Object == (FEnvQueryResult *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_10 = (undefined1)param_1->Object->Status;
  local_18 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnQueryFinishedEvent,
             &local_18);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->QueryInstance != (TSharedPtr<FEnvQueryInstance,1> *)&local_28) {
    (this->QueryInstance).Object = (FEnvQueryInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->QueryInstance).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pUVar9 = UEnvQueryManager::StaticClass();
    iVar8 = (int)pUVar9->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar8 * 8) ==
        &pUVar9->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      plVar4 = *(longlong **)(lVar3 + 0x168);
      for (plVar11 = plVar4; plVar11 != plVar4 + *(int *)(lVar3 + 0x170); plVar11 = plVar11 + 1) {
        if ((UEnvQueryInstanceBlueprintWrapper *)*plVar11 == this) {
          uVar10 = (uint)((longlong)plVar11 - (longlong)plVar4 >> 3);
          if (uVar10 != 0xffffffff) {
            uVar12 = 0;
            if ((int)(uVar10 + 1) <= *(int *)(lVar3 + 0x170)) {
              uVar12 = ~uVar10 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = (*(int *)(lVar3 + 0x170) - uVar10) + -1;
            if (1 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              memmove((void *)(*(longlong *)(lVar3 + 0x168) + (longlong)(int)uVar10 * 8),
                      (void *)(*(longlong *)(lVar3 + 0x168) +
                              (longlong)(*(int *)(lVar3 + 0x170) - iVar8) * 8),(longlong)iVar8 << 3)
              ;
            }
            *(int *)(lVar3 + 0x170) = *(int *)(lVar3 + 0x170) + -1;
          }
          break;
        }
      }
      goto LAB_146f5ea04;
    }
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2632096120951537634>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstanceBlueprintWrapper.cpp"
                     ,0x1e,"EnvQueryManager");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_146f5ea04:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RunQuery @ 146f6a5b0

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
UEnvQueryInstanceBlueprintWrapper::RunQuery
          (UEnvQueryInstanceBlueprintWrapper *this,Type param_1,FEnvQueryRequest *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UClass *pUVar8;
  FEnvQueryInstance *pFVar9;
  uint uVar10;
  longlong lVar11;
  UEnvQueryInstanceBlueprintWrapper *local_res8;
  TObjectPtr<UEnvQueryInstanceBlueprintWrapper>_u_0 local_res20;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  bool local_88;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  this->RunMode = param_1;
  uStack_90 = 0;
  local_98 = OnQueryFinished;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_70);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEnvQueryInstanceBlueprintWrapper____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
    puVar6[4] = local_98;
    puVar6[5] = CONCAT44(uStack_8c,uStack_90);
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  iVar5 = FEnvQueryRequest::Execute
                    (param_2,param_1,
                     (TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                      *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_98);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_88 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_8c,uStack_90),
               (FDestructionSentinel *)&local_98);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  this->QueryID = iVar5;
  if (iVar5 != -1) {
    lVar1 = this->_padding_;
    if (lVar1 != 0) {
      pUVar8 = UEnvQueryManager::StaticClass();
      iVar5 = (int)pUVar8->_padding_;
      if ((iVar5 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar5 * 8)
          == &pUVar8->_padding_)) {
        local_res20.DebugPtr = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        TArray<TObjectPtr<UEnvQueryInstanceBlueprintWrapper>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TObjectPtr<UEnvQueryInstanceBlueprintWrapper>_>
                  ((TArray<TObjectPtr<UEnvQueryInstanceBlueprintWrapper>,TSizedDefaultAllocator<32>_>
                    *)(lVar1 + 0x168),
                   (TObjectPtr<UEnvQueryInstanceBlueprintWrapper> *)&local_res20.ObjectPtr);
        iVar5 = this->QueryID;
        if ((iVar5 != -1) && (uVar10 = *(int *)(lVar1 + 0xe8) - 1, -1 < (int)uVar10)) {
          lVar11 = (longlong)(int)uVar10 << 4;
          do {
            if ((*(int *)(lVar1 + 0xe8) <= (int)uVar10) &&
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
            lVar2 = *(longlong *)(lVar1 + 0xe0);
            if ((*(longlong *)(lVar2 + lVar11) == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)(*(longlong *)(lVar2 + lVar11) + 0x30) == iVar5) {
              if ((*(int *)(lVar1 + 0xe8) <= (int)uVar10) &&
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
              pFVar9 = *(FEnvQueryInstance **)
                        (*(longlong *)(lVar1 + 0xe0) + (ulonglong)uVar10 * 0x10);
              FStack_a0.ReferenceController =
                   *(TReferenceControllerBase<1> **)
                    (*(longlong *)(lVar1 + 0xe0) + 8 + (ulonglong)uVar10 * 0x10);
              if (FStack_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FStack_a0.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FStack_a0.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              goto LAB_146f6a841;
            }
            lVar11 = lVar11 + -0x10;
            uVar10 = uVar10 - 1;
          } while (-1 < (int)uVar10);
        }
        pFVar9 = (FEnvQueryInstance *)0x0;
        local_a8 = 0;
        FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_146f6a841:
        if (&this->QueryInstance != (TSharedPtr<FEnvQueryInstance,1> *)&local_a8) {
          (this->QueryInstance).Object = pFVar9;
          local_a8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->QueryInstance).SharedReferenceCount,&FStack_a0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_a0.ReferenceController);
        return;
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2632096120951537529>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstanceBlueprintWrapper.cpp"
                       ,0x87,"EnvQueryManager");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SetInstigator @ 146f74ae0

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
UEnvQueryInstanceBlueprintWrapper::SetInstigator
          (UEnvQueryInstanceBlueprintWrapper *this,UObject *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&this->Instigator,(FObjectPtr)local_res8);
  return;
}

// SetNamedParam @ 146f74b90

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
UEnvQueryInstanceBlueprintWrapper::SetNamedParam
          (UEnvQueryInstanceBlueprintWrapper *this,FName param_1,float param_2)

{
  FEnvQueryInstance *pFVar1;
  FName local_res10;
  float local_res18 [4];
  
  pFVar1 = (this->QueryInstance).Object;
  if (pFVar1 != (FEnvQueryInstance *)0x0) {
    local_res10 = param_1;
    local_res18[0] = param_2;
    TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
    Emplace<FName_const_&,float_const_&>
              ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                *)&pFVar1->NamedParams,&local_res10,local_res18);
  }
  return;
}

// StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper @ 146f76d90

void __cdecl
UEnvQueryInstanceBlueprintWrapper::StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 146f7f3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
UEnvQueryInstanceBlueprintWrapper::_getUObject(UEnvQueryInstanceBlueprintWrapper *this)

{
  return (UObject *)&this[-1].OptionIndex;
}

// execGetItemScore @ 146f802c0

void __cdecl
UEnvQueryInstanceBlueprintWrapper::execGetItemScore(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
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
  plVar2 = *(longlong **)&param_1[1].field_0x10;
  lVar5 = (longlong)(int)local_res8[0];
  uVar7 = __real_bf800000;
  if (plVar2 != (longlong *)0x0) {
    if (((int)local_res8[0] < 0) || ((int)plVar2[1] <= (int)local_res8[0])) {
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
      if ((int)local_res8[0] < (int)plVar2[1]) {
        uVar6 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = *(undefined4 *)(*plVar2 + lVar5 * 8);
    }
  }
  *(undefined4 *)param_3 = uVar7;
  return;
}

// execGetQueryResultsAsActors @ 146f80800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEnvQueryInstanceBlueprintWrapper::execGetQueryResultsAsActors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
  pTVar3 = &local_18;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetQueryResultsAsActors((UEnvQueryInstanceBlueprintWrapper *)param_1,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetQueryResultsAsLocations @ 146f808c0

void __cdecl
UEnvQueryInstanceBlueprintWrapper::execGetQueryResultsAsLocations
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FEnvQueryResult *pFVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_48;
  TVector<double> local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar11 = &local_48;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  piVar1 = &pTVar11->ArrayMax;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar11->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar11->AllocatorInstance,0,piVar1);
  }
  pFVar10 = *(FEnvQueryResult **)&param_1[1].field_0x10;
  if ((pFVar10 == (FEnvQueryResult *)0x0) || (pFVar10->Status != Success)) {
    bVar7 = false;
  }
  else if (*(int *)&param_1[1].field_0xc == 3) {
    pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->
                        ((TSharedPtr<FEnvQueryResult,1> *)&param_1[1].field_0x10);
    FEnvQueryResult::GetAllAsLocations(pFVar10,pTVar11);
    bVar7 = 0 < pTVar11->ArrayNum;
  }
  else {
    pFVar9 = (FScriptContainerElement *)FEnvQueryResult::GetItemAsLocation(pFVar10,&local_38,0);
    pFVar3 = (pTVar11->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + (longlong)*piVar1 * 0x18)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = pTVar11->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar11->AllocatorInstance,piVar1);
    }
    pTVar11->ArrayNum = iVar8 + 1;
    dVar6 = *(double *)(pFVar9 + 8);
    pFVar4 = (pTVar11->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
    *(double *)pFVar3 = (((TVector<double>_u_0 *)&pFVar9->field_0x0)->_s_0).X;
    *(double *)(pFVar3 + 8) = dVar6;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = *(undefined8 *)(pFVar9 + 0x10);
    bVar7 = 0 < pTVar11->ArrayNum;
  }
  *(bool *)param_3 = bVar7;
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// execGetResultsAsActors @ 146f80ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEnvQueryInstanceBlueprintWrapper::execGetResultsAsActors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetResultsAsActors((UEnvQueryInstanceBlueprintWrapper *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetResultsAsLocations @ 146f80b30

void __cdecl
UEnvQueryInstanceBlueprintWrapper::execGetResultsAsLocations
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FEnvQueryResult *this;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  TVector<double> local_28;
  
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FEnvQueryResult **)&param_1[1].field_0x10;
  if (this != (FEnvQueryResult *)0x0) {
    if (*(int *)&param_1[1].field_0xc == 3) {
      FEnvQueryResult::GetAllAsLocations(this,&local_38);
    }
    else {
      pFVar5 = (FScriptContainerElement *)FEnvQueryResult::GetItemAsLocation(this,&local_28,0);
      if (((local_38.AllocatorInstance.Data <= pFVar5) &&
          (pFVar5 < local_38.AllocatorInstance.Data + (longlong)local_38.ArrayMax * 0x18)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = local_38.ArrayNum;
      if (local_38.ArrayNum == local_38.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_38.AllocatorInstance,&local_38.ArrayMax);
      }
      local_38.ArrayNum = iVar4 + 1;
      uVar2 = *(undefined8 *)(pFVar5 + 8);
      *(undefined8 *)(local_38.AllocatorInstance.Data + (longlong)iVar4 * 0x18) =
           *(undefined8 *)pFVar5;
      *(undefined8 *)(local_38.AllocatorInstance.Data + (longlong)iVar4 * 0x18 + 8) = uVar2;
      *(undefined8 *)(local_38.AllocatorInstance.Data + (longlong)iVar4 * 0x18 + 0x10) =
           *(undefined8 *)(pFVar5 + 0x10);
    }
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.ArrayNum;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_38.ArrayMax;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execSetNamedParam @ 146f81db0

void __cdecl
UEnvQueryInstanceBlueprintWrapper::execSetNamedParam(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  float local_res10 [4];
  FName local_res20;
  FName local_28 [2];
  
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
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28[0] = local_res20;
  if (*(longlong *)&param_1[1].field_0x20 != 0) {
    TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
    Emplace<FName_const_&,float_const_&>
              ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                *)(*(longlong *)&param_1[1].field_0x20 + 0x78),local_28,local_res10);
  }
  return;
}

