// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 16

// StaticClass @ 14d2a4840

UClass * __cdecl UDragonIKTraceManagerComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIKTraceManagerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIKTraceManagerComponent",
               &Z_Registration_Info_UClass_UDragonIKTraceManagerComponent.InnerSingleton,
               StaticRegisterNativesUDragonIKTraceManagerComponent,0x120,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragonIKTraceManagerComponent>,
               InternalVTableHelperCtorCaller<UDragonIKTraceManagerComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIKTraceManagerComponent.InnerSingleton;
}

// UDragonIKTraceManagerComponent @ 14d2a60d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDragonIKTraceManagerComponent * __thiscall
UDragonIKTraceManagerComponent::UDragonIKTraceManagerComponent
          (UDragonIKTraceManagerComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  ::FName::FName(&this->read_this,"Hover here to learn how to use this component.");
  this->Is_Enabled = true;
  this->bShow_Spine_Trace_Lines_InGame = false;
  this->test_count = 0;
  this->hand_shaked = false;
  this->tick_busy = false;
  (this->PendingTraces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTraces).ArrayNum = 0;
  (this->PendingTraces).ArrayMax = 0;
  (this->HitResultMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitResultMap).ArrayNum = 0;
  (this->HitResultMap).ArrayMax = 0;
  (this->Solver_Markers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solver_Markers).ArrayNum = 0;
  (this->Solver_Markers).ArrayMax = 0;
  *(undefined8 *)&this->OnDragonikFootHitData = 0;
  *(undefined8 *)&(this->OnDragonikFootHitData).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragonikFootHitData).field_0x10 = 0;
  this->bShow_Foot_Trace_Lines_InGame = false;
  return this;
}

// ~UDragonIKTraceManagerComponent @ 14d2a6a50

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
UDragonIKTraceManagerComponent::~UDragonIKTraceManagerComponent
          (UDragonIKTraceManagerComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnDragonikFootHitData).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragonikFootHitData);
  pFVar2 = (this->Solver_Markers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->HitResultMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PendingTraces).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14d2a94e0

UClass * __cdecl UDragonIKTraceManagerComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIKTraceManagerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIKTraceManagerComponent",
               &Z_Registration_Info_UClass_UDragonIKTraceManagerComponent.InnerSingleton,
               StaticRegisterNativesUDragonIKTraceManagerComponent,0x120,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragonIKTraceManagerComponent>,
               InternalVTableHelperCtorCaller<UDragonIKTraceManagerComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIKTraceManagerComponent.InnerSingleton;
}

// SpineSolverTraceData @ 14d2a9da0

void __thiscall
UDragonIKTraceManagerComponent::SpineSolverTraceData
          (UDragonIKTraceManagerComponent *this,
          TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FDragonIKTraceKeyValuePair *pFVar2;
  UFunction *pUVar3;
  TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    uVar1 = param_1->ArrayNum;
    pFVar2 = (FDragonIKTraceKeyValuePair *)(param_1->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x110,8,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      ConstructItems<FDragonIKTraceKeyValuePair,FDragonIKTraceKeyValuePair,int>
                (local_18.AllocatorInstance.Data,pFVar2,uVar1);
    }
  }
  pUVar3 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKTraceManagerComponent_SpineSolverTraceData);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUDragonIKTraceManagerComponent @ 14d2a9ec0

void __cdecl
UDragonIKTraceManagerComponent::StaticRegisterNativesUDragonIKTraceManagerComponent(void)

{
  return;
}

// UDragonIKTraceManagerComponent @ 14d32ea00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDragonIKTraceManagerComponent * __thiscall
UDragonIKTraceManagerComponent::UDragonIKTraceManagerComponent(UDragonIKTraceManagerComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  ::FName::FName(&this->read_this,"Hover here to learn how to use this component.");
  this->Is_Enabled = true;
  this->bShow_Spine_Trace_Lines_InGame = false;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->test_count = 0;
  this->hand_shaked = false;
  this->tick_busy = false;
  (this->PendingTraces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTraces).ArrayNum = 0;
  (this->PendingTraces).ArrayMax = 0;
  (this->HitResultMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitResultMap).ArrayNum = 0;
  (this->HitResultMap).ArrayMax = 0;
  (this->Solver_Markers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solver_Markers).ArrayNum = 0;
  (this->Solver_Markers).ArrayMax = 0;
  *(undefined8 *)&this->OnDragonikFootHitData = 0;
  *(undefined8 *)&(this->OnDragonikFootHitData).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragonikFootHitData).field_0x10 = 0;
  this->bShow_Foot_Trace_Lines_InGame = false;
  return this;
}

// BeginPlay @ 14d336300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDragonIKTraceManagerComponent::BeginPlay(UDragonIKTraceManagerComponent *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FDragonIKTraceParamKeyValuePair,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  UObject *this_00;
  UFunction *pUVar9;
  char *pcVar10;
  FName local_res8;
  FName local_res10;
  UDragonIKTraceManagerComponent *local_res18;
  FName *local_res20;
  undefined8 local_98 [2];
  undefined8 local_88 [2];
  ForAnyElementType local_78 [2];
  TScriptDelegate<FNotThreadSafeDelegateMode> local_68;
  FReadAccessScope local_50;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  pTVar1 = &this->Solver_Markers;
  if (pTVar1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)local_98) {
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Solver_Markers).ArrayNum = 0;
    (this->Solver_Markers).ArrayMax = 0;
  }
  pTVar2 = &this->PendingTraces;
  if (pTVar2 != (TArray<FDragonIKTraceParamKeyValuePair,TSizedDefaultAllocator<32>_> *)local_88) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PendingTraces).ArrayNum = 0;
    (this->PendingTraces).ArrayMax = 0;
  }
  pTVar3 = &this->HitResultMap;
  if (pTVar3 != (TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_> *)local_78) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->HitResultMap).ArrayNum = 0;
    (this->HitResultMap).ArrayMax = 0;
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x110,8,100,&pTVar3->AllocatorInstance,&(this->HitResultMap).ArrayNum,
                     &(this->HitResultMap).ArrayMax);
  DefaultConstructItems<FDragonIKTraceKeyValuePair,int>
            ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x110,100);
  pcVar8 = strstr("&UDragonIKTraceManagerComponent::SpineSolverTraceData","::");
  if (pcVar8 == (char *)0x0) {
LAB_14d33642b:
    pcVar10 = &DAT_00000002;
LAB_14d336430:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar8;
      pcVar8 = strstr(pcVar10 + 1,"::");
    } while (pcVar8 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14d33642b;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14d336430;
  }
  ::FName::FName(&local_res10,pcVar10);
  if ((this == (UDragonIKTraceManagerComponent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_68._padding_ = 0;
  local_68.Object.ObjectIndex = 0;
  local_68.Object.ObjectSerialNumber = 0;
  local_68.FunctionName.ComparisonIndex.Value = 0;
  local_68.FunctionName.Number = 0;
  local_res8 = local_res10;
  if ((this == (UDragonIKTraceManagerComponent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res18 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDragonIKTraceManagerComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_68.Object,(FObjectPtr)&local_res18);
  local_68.FunctionName = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_68,&local_50);
  if ((local_68.FunctionName == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_68.Object), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
  }
  else {
    pUVar9 = UObject::FindFunction(this_00,local_68.FunctionName);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    if (pUVar9 != (UFunction *)0x0) goto LAB_14d33655d;
  }
  local_res20 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_>_const_&>
  ::__Internal_BindDynamic<UDragonIKTraceManagerComponent>'::__l2::<lambda_1>::operator()
            (&local_res20);
LAB_14d33655d:
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Add
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnDragonikFootHitData,
             &local_68);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_68);
  return;
}

// Hitmap_FindKeyExists @ 14d349220

bool __thiscall
UDragonIKTraceManagerComponent::Hitmap_FindKeyExists
          (UDragonIKTraceManagerComponent *this,
          TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_> *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  if (0 < iVar8) {
    uVar7 = 0;
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar8) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(FName *)(pFVar1 + lVar6) == param_2) {
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        return true;
      }
      iVar8 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x110;
    } while ((int)uVar7 < iVar8);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// Hitmap_GetValueFromKey @ 14d3492f0

FHitResult * __thiscall
UDragonIKTraceManagerComponent::Hitmap_GetValueFromKey
          (UDragonIKTraceManagerComponent *this,FHitResult *__return_storage_ptr__,
          TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_> *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FHitResult *pFVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  iVar6 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar6) {
    uVar9 = uVar8;
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FHitResult *)(*pcVar2)();
          return pFVar5;
        }
      }
      iVar6 = param_1->ArrayNum;
      if (*(FName *)((param_1->AllocatorInstance).Data + uVar9) == param_2) {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FHitResult *)(*pcVar2)();
            return pFVar5;
          }
        }
        FHitResult::FHitResult
                  (__return_storage_ptr__,
                   (FHitResult *)
                   ((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x110 + 0x10));
        goto LAB_14d3493eb;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 0x110;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  memset(__return_storage_ptr__,0,0x100);
  (__return_storage_ptr__->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  __return_storage_ptr__->Time = 1.0;
  __return_storage_ptr__->MyItem = -1;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (__return_storage_ptr__->HitObjectHandle).InstanceIndex = -1;
  (__return_storage_ptr__->HitObjectHandle).ResolutionStatus = Invalid;
  *(undefined3 *)&(__return_storage_ptr__->HitObjectHandle).field_0x1d = 0;
LAB_14d3493eb:
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// Hitmap_SetValueOnKey @ 14d349480

void __thiscall
UDragonIKTraceManagerComponent::Hitmap_SetValueOnKey
          (UDragonIKTraceManagerComponent *this,
          TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FHitResult *param_3,FName param_4)

{
  FName *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 auStack_298 [4];
  FName *local_278;
  FName *local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined1 local_22c;
  undefined2 local_22b;
  undefined1 local_229;
  FName local_228;
  FName local_220;
  FHitResult local_218;
  undefined8 local_118 [32];
  
  iVar9 = param_1->ArrayNum;
  uVar15 = 0;
  uVar16 = uVar15;
  if (0 < iVar9) {
    do {
      uVar14 = (uint)uVar15;
      uVar8 = 0;
      if ((int)uVar14 < iVar9) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_270 = (FName *)(longlong)iVar9;
        local_278 = (FName *)(longlong)(int)uVar14;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(FName *)((param_1->AllocatorInstance).Data + uVar16) == param_2) {
        lVar13 = 2;
        lVar12 = 2;
        puVar10 = local_118;
        do {
          uVar3 = *(undefined8 *)&param_3->Distance;
          uVar4 = *(undefined8 *)&param_3->Location;
          uVar5 = *(undefined8 *)&(param_3->Location).field_0x8;
          *puVar10 = *(undefined8 *)param_3;
          puVar10[1] = uVar3;
          uVar3 = *(undefined8 *)&(param_3->Location).field_0x10;
          uVar6 = *(undefined8 *)&param_3->ImpactPoint;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          uVar4 = *(undefined8 *)&(param_3->ImpactPoint).field_0x8;
          uVar5 = *(undefined8 *)&(param_3->ImpactPoint).field_0x10;
          puVar10[4] = uVar3;
          puVar10[5] = uVar6;
          uVar3 = *(undefined8 *)&param_3->Normal;
          uVar6 = *(undefined8 *)&(param_3->Normal).field_0x8;
          puVar10[6] = uVar4;
          puVar10[7] = uVar5;
          uVar4 = *(undefined8 *)&(param_3->Normal).field_0x10;
          uVar5 = *(undefined8 *)&param_3->ImpactNormal;
          puVar10[8] = uVar3;
          puVar10[9] = uVar6;
          uVar3 = *(undefined8 *)&(param_3->ImpactNormal).field_0x8;
          uVar6 = *(undefined8 *)&(param_3->ImpactNormal).field_0x10;
          puVar10[10] = uVar4;
          puVar10[0xb] = uVar5;
          uVar4 = *(undefined8 *)&param_3->TraceStart;
          uVar5 = *(undefined8 *)&(param_3->TraceStart).field_0x8;
          puVar10[0xc] = uVar3;
          puVar10[0xd] = uVar6;
          puVar10[0xe] = uVar4;
          puVar10[0xf] = uVar5;
          lVar12 = lVar12 + -1;
          puVar10 = puVar10 + 0x10;
          param_3 = (FHitResult *)&(param_3->TraceStart).field_0x10;
        } while (lVar12 != 0);
        local_270 = (FName *)(longlong)param_1->ArrayNum;
        uVar8 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_278 = (FName *)(longlong)(int)uVar14;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        puVar10 = local_118;
        pFVar11 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x110 + 0x10;
        do {
          uVar3 = puVar10[1];
          uVar4 = puVar10[2];
          uVar5 = puVar10[3];
          *(undefined8 *)pFVar11 = *puVar10;
          *(undefined8 *)(pFVar11 + 8) = uVar3;
          uVar3 = puVar10[4];
          uVar6 = puVar10[5];
          *(undefined8 *)(pFVar11 + 0x10) = uVar4;
          *(undefined8 *)(pFVar11 + 0x18) = uVar5;
          uVar4 = puVar10[6];
          uVar5 = puVar10[7];
          *(undefined8 *)(pFVar11 + 0x20) = uVar3;
          *(undefined8 *)(pFVar11 + 0x28) = uVar6;
          uVar3 = puVar10[8];
          uVar6 = puVar10[9];
          *(undefined8 *)(pFVar11 + 0x30) = uVar4;
          *(undefined8 *)(pFVar11 + 0x38) = uVar5;
          uVar4 = puVar10[10];
          uVar5 = puVar10[0xb];
          *(undefined8 *)(pFVar11 + 0x40) = uVar3;
          *(undefined8 *)(pFVar11 + 0x48) = uVar6;
          uVar3 = puVar10[0xc];
          uVar6 = puVar10[0xd];
          *(undefined8 *)(pFVar11 + 0x50) = uVar4;
          *(undefined8 *)(pFVar11 + 0x58) = uVar5;
          uVar4 = puVar10[0xe];
          uVar5 = puVar10[0xf];
          *(undefined8 *)(pFVar11 + 0x60) = uVar3;
          *(undefined8 *)(pFVar11 + 0x68) = uVar6;
          *(undefined8 *)(pFVar11 + 0x70) = uVar4;
          *(undefined8 *)(pFVar11 + 0x78) = uVar5;
          lVar13 = lVar13 + -1;
          puVar10 = puVar10 + 0x10;
          pFVar11 = pFVar11 + 0x80;
        } while (lVar13 != 0);
        return;
      }
      iVar9 = param_1->ArrayNum;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 0x110;
    } while ((int)(uVar14 + 1) < iVar9);
  }
  ::FName::FName(&local_228,L"");
  memset(&local_218,0,0x100);
  local_248 = 0;
  uStack_240 = 0;
  local_22b = 0;
  local_229 = 0;
  lVar12 = 2;
  local_238 = 0;
  local_230 = 0xffffffff;
  local_22c = 0;
  puVar10 = auStack_298;
  do {
    uVar3 = *(undefined8 *)&param_3->Distance;
    uVar4 = *(undefined8 *)&param_3->Location;
    uVar5 = *(undefined8 *)&(param_3->Location).field_0x8;
    puVar10[0x10] = *(undefined8 *)param_3;
    puVar10[0x11] = uVar3;
    uVar3 = *(undefined8 *)&(param_3->Location).field_0x10;
    uVar6 = *(undefined8 *)&param_3->ImpactPoint;
    puVar10[0x12] = uVar4;
    puVar10[0x13] = uVar5;
    uVar4 = *(undefined8 *)&(param_3->ImpactPoint).field_0x8;
    uVar5 = *(undefined8 *)&(param_3->ImpactPoint).field_0x10;
    puVar10[0x14] = uVar3;
    puVar10[0x15] = uVar6;
    uVar3 = *(undefined8 *)&param_3->Normal;
    uVar6 = *(undefined8 *)&(param_3->Normal).field_0x8;
    puVar10[0x16] = uVar4;
    puVar10[0x17] = uVar5;
    uVar4 = *(undefined8 *)&(param_3->Normal).field_0x10;
    uVar5 = *(undefined8 *)&param_3->ImpactNormal;
    puVar10[0x18] = uVar3;
    puVar10[0x19] = uVar6;
    uVar3 = *(undefined8 *)&(param_3->ImpactNormal).field_0x8;
    uVar6 = *(undefined8 *)&(param_3->ImpactNormal).field_0x10;
    puVar10[0x1a] = uVar4;
    puVar10[0x1b] = uVar5;
    uVar4 = *(undefined8 *)&param_3->TraceStart;
    uVar5 = *(undefined8 *)&(param_3->TraceStart).field_0x8;
    puVar10[0x1c] = uVar3;
    puVar10[0x1d] = uVar6;
    puVar10[0x1e] = uVar4;
    puVar10[0x1f] = uVar5;
    lVar12 = lVar12 + -1;
    param_3 = (FHitResult *)&(param_3->TraceStart).field_0x10;
    puVar10 = puVar10 + 0x10;
  } while (lVar12 != 0);
  pFVar1 = (FName *)(param_1->AllocatorInstance).Data;
  local_220 = param_4;
  local_228 = param_2;
  if ((pFVar1 <= &local_228) && (&local_228 < pFVar1 + (longlong)param_1->ArrayMax * 0x22)) {
    local_260 = (longlong)param_1->ArrayNum;
    local_258 = 0x110;
    local_278 = &local_228;
    local_270 = pFVar1;
    local_268 = (longlong)param_1->ArrayMax;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,8,&param_1->AllocatorInstance,&param_1->ArrayMax);
    param_1->ArrayNum = iVar9;
  }
  lVar12 = (longlong)iVar9 * 0x110;
  param_1->ArrayNum = iVar9 + 1;
  pFVar11 = (param_1->AllocatorInstance).Data;
  *(FName *)(pFVar11 + lVar12) = local_228;
  *(FName *)(pFVar11 + lVar12 + 8) = local_220;
  FHitResult::FHitResult((FHitResult *)(pFVar11 + lVar12 + 0x10),&local_218);
  return;
}

// IssueTraceInput @ 14d34bb20

void __thiscall
UDragonIKTraceManagerComponent::IssueTraceInput
          (UDragonIKTraceManagerComponent *this,FDragonIKTraceMParams *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  FDragonIKTraceKeyValuePair *pFVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  FDragonIKTraceMParams *pFVar14;
  FHitResult *pFVar15;
  FName *pFVar16;
  FHitResult *pFVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar24;
  uint uVar25;
  FName local_res8;
  FDragonIKTraceMParams *local_res10;
  ForAnyElementType local_2c8;
  int local_2c0;
  int local_2bc;
  ForAnyElementType local_2b8;
  int local_2b0;
  int local_2ac [5];
  undefined8 local_298;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined2 uStack_28b;
  undefined1 uStack_289;
  FHitResult local_288;
  FDragonIKTraceMParams local_188;
  ulonglong uVar23;
  
  this->test_count = this->test_count + 1;
  if (this->hand_shaked == false) {
    return;
  }
  pFVar16 = (FName *)(this->Solver_Markers).AllocatorInstance.Data;
  pFVar1 = &param_1->TraceIdentifier;
  pFVar2 = pFVar16 + (this->Solver_Markers).ArrayNum;
  local_res10 = param_1;
  if (pFVar16 != pFVar2) {
    do {
      if (*pFVar16 == *pFVar1) goto LAB_14d34bb9d;
      pFVar16 = pFVar16 + 1;
    } while (pFVar16 != pFVar2);
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->Solver_Markers,pFVar1);
LAB_14d34bb9d:
  param_1->allow = true;
  pFVar14 = FDragonIKTraceMParams::FDragonIKTraceMParams(&local_188,param_1);
  PendingTraces_SetValueOnKey(this,&this->PendingTraces,*pFVar1,pFVar14);
  if ((this->HitResultMap).ArrayNum < 1) {
    return;
  }
  pFVar16 = (FName *)(this->Solver_Markers).AllocatorInstance.Data;
  pFVar2 = pFVar16 + (this->Solver_Markers).ArrayNum;
  if (pFVar16 == pFVar2) {
    return;
  }
  while (*pFVar16 != *pFVar1) {
    pFVar16 = pFVar16 + 1;
    if (pFVar16 == pFVar2) {
      return;
    }
  }
  ::FName::FName(&local_res8,"");
  if (((pFVar1->ComparisonIndex).Value == local_res8.ComparisonIndex.Value) &&
     ((param_1->TraceIdentifier).Number == local_res8.Number)) {
    return;
  }
  iVar20 = (this->HitResultMap).ArrayNum;
  pFVar3 = (FDragonIKTraceKeyValuePair *)(this->HitResultMap).AllocatorInstance.Data;
  FVar4 = *pFVar1;
  uVar24 = 0;
  uVar25 = 0;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0 = iVar20;
  if (iVar20 == 0) {
    local_2ac[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,8,iVar20,0,&local_2b8,iVar20,local_2ac);
    ConstructItems<FDragonIKTraceKeyValuePair,FDragonIKTraceKeyValuePair,int>
              (local_2b8.Data,pFVar3,iVar20);
  }
  FVar18.Data = local_2b8.Data;
  uVar21 = uVar24;
  uVar23 = uVar24;
  iVar20 = local_2b0;
  if (0 < local_2b0) {
    do {
      uVar22 = (uint)uVar23;
      uVar13 = uVar25;
      if ((int)uVar22 < iVar20) {
        uVar13 = ~uVar22 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar18.Data = local_2b8.Data, iVar20 = local_2b0, bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(FName *)(FVar18.Data + uVar21) == FVar4) {
        if (FVar18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar18.Data);
        }
        iVar20 = (this->HitResultMap).ArrayNum;
        FVar4 = *pFVar1;
        pFVar3 = (FDragonIKTraceKeyValuePair *)(this->HitResultMap).AllocatorInstance.Data;
        local_2c8.Data = (FScriptContainerElement *)0x0;
        local_2c0 = iVar20;
        if (iVar20 == 0) {
          local_2bc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x110,8,iVar20,0,&local_2c8,iVar20,&local_2bc);
          ConstructItems<FDragonIKTraceKeyValuePair,FDragonIKTraceKeyValuePair,int>
                    (local_2c8.Data,pFVar3,iVar20);
        }
        uVar21 = uVar24;
        iVar20 = local_2c0;
        if (local_2c0 < 1) goto LAB_14d34be5d;
        goto LAB_14d34bdf4;
      }
      uVar21 = uVar21 + 0x110;
      uVar23 = (ulonglong)(uVar22 + 1);
    } while ((int)(uVar22 + 1) < iVar20);
  }
  if (FVar18.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(FVar18.Data);
  return;
LAB_14d34bdf4:
  uVar22 = (uint)uVar24;
  uVar13 = uVar25;
  if ((int)uVar22 < iVar20) {
    uVar13 = ~uVar22 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar20 = local_2c0, bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(FName *)(local_2c8.Data + uVar21) == FVar4) {
    if ((int)uVar22 < iVar20) {
      uVar25 = ~uVar22 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FHitResult::FHitResult
              (&local_288,(FHitResult *)(local_2c8.Data + (longlong)(int)uVar22 * 0x110 + 0x10));
    goto LAB_14d34bea9;
  }
  uVar24 = (ulonglong)(uVar22 + 1);
  uVar21 = uVar21 + 0x110;
  if (iVar20 <= (int)(uVar22 + 1)) {
LAB_14d34be5d:
    memset(&local_288,0,0x100);
    uStack_28b = 0;
    local_288.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_288.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_288.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_288.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    uStack_289 = 0;
    local_298 = 0;
    uStack_290 = 0xffffffff;
    uStack_28c = 0;
    local_288.Time = 1.0;
    local_288.MyItem = -1;
    local_288.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    local_288.HitObjectHandle.InstanceIndex = -1;
    local_288.HitObjectHandle.ResolutionStatus = Invalid;
    local_288.HitObjectHandle._29_3_ = 0;
LAB_14d34bea9:
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
    lVar19 = 2;
    pFVar15 = &local_res10->hit_result;
    pFVar17 = &local_288;
    do {
      fVar10 = pFVar17->Time;
      fVar11 = pFVar17->Distance;
      iVar20 = pFVar17->_padding_;
      uVar6 = *(undefined8 *)&pFVar17->Location;
      uVar7 = *(undefined8 *)&(pFVar17->Location).field_0x8;
      pFVar15->FaceIndex = pFVar17->FaceIndex;
      pFVar15->Time = fVar10;
      pFVar15->Distance = fVar11;
      pFVar15->_padding_ = iVar20;
      uVar8 = *(undefined8 *)&(pFVar17->Location).field_0x10;
      uVar9 = *(undefined8 *)&pFVar17->ImpactPoint;
      *(undefined8 *)&pFVar15->Location = uVar6;
      *(undefined8 *)&(pFVar15->Location).field_0x8 = uVar7;
      uVar6 = *(undefined8 *)&(pFVar17->ImpactPoint).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar17->ImpactPoint).field_0x10;
      *(undefined8 *)&(pFVar15->Location).field_0x10 = uVar8;
      *(undefined8 *)&pFVar15->ImpactPoint = uVar9;
      uVar8 = *(undefined8 *)&pFVar17->Normal;
      uVar9 = *(undefined8 *)&(pFVar17->Normal).field_0x8;
      *(undefined8 *)&(pFVar15->ImpactPoint).field_0x8 = uVar6;
      *(undefined8 *)&(pFVar15->ImpactPoint).field_0x10 = uVar7;
      uVar6 = *(undefined8 *)&(pFVar17->Normal).field_0x10;
      uVar7 = *(undefined8 *)&pFVar17->ImpactNormal;
      *(undefined8 *)&pFVar15->Normal = uVar8;
      *(undefined8 *)&(pFVar15->Normal).field_0x8 = uVar9;
      uVar8 = *(undefined8 *)&(pFVar17->ImpactNormal).field_0x8;
      uVar9 = *(undefined8 *)&(pFVar17->ImpactNormal).field_0x10;
      *(undefined8 *)&(pFVar15->Normal).field_0x10 = uVar6;
      *(undefined8 *)&pFVar15->ImpactNormal = uVar7;
      uVar6 = *(undefined8 *)&pFVar17->TraceStart;
      uVar7 = *(undefined8 *)&(pFVar17->TraceStart).field_0x8;
      *(undefined8 *)&(pFVar15->ImpactNormal).field_0x8 = uVar8;
      *(undefined8 *)&(pFVar15->ImpactNormal).field_0x10 = uVar9;
      *(undefined8 *)&pFVar15->TraceStart = uVar6;
      *(undefined8 *)&(pFVar15->TraceStart).field_0x8 = uVar7;
      lVar19 = lVar19 + -1;
      pFVar15 = (FHitResult *)&(pFVar15->TraceStart).field_0x10;
      pFVar17 = (FHitResult *)&(pFVar17->TraceStart).field_0x10;
    } while (lVar19 != 0);
    return;
  }
  goto LAB_14d34bdf4;
}

// PendingTraces_FindKeyExists @ 14d354220

bool __thiscall
UDragonIKTraceManagerComponent::PendingTraces_FindKeyExists
          (UDragonIKTraceManagerComponent *this,
          TArray<FDragonIKTraceParamKeyValuePair,TSizedDefaultAllocator<32>_> *param_1,FName param_2
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  if (0 < iVar8) {
    uVar7 = 0;
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar8) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(FName *)(pFVar1 + lVar6) == param_2) {
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        return true;
      }
      iVar8 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x158;
    } while ((int)uVar7 < iVar8);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// PendingTraces_GetValueFromKey @ 14d3542f0

FDragonIKTraceMParams * __thiscall
UDragonIKTraceManagerComponent::PendingTraces_GetValueFromKey
          (UDragonIKTraceManagerComponent *this,FDragonIKTraceMParams *__return_storage_ptr__,
          TArray<FDragonIKTraceParamKeyValuePair,TSizedDefaultAllocator<32>_> *param_1,FName param_2
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDragonIKTraceMParams *pFVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar6 = param_1->ArrayNum;
  if (0 < iVar6) {
    uVar8 = 0;
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FDragonIKTraceMParams *)(*pcVar2)();
          return pFVar5;
        }
      }
      iVar6 = param_1->ArrayNum;
      if (*(FName *)((param_1->AllocatorInstance).Data + lVar7) == param_2) {
        uVar4 = 0;
        if ((int)uVar8 < iVar6) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FDragonIKTraceMParams *)(*pcVar2)();
            return pFVar5;
          }
        }
        FDragonIKTraceMParams::FDragonIKTraceMParams
                  (__return_storage_ptr__,
                   (FDragonIKTraceMParams *)
                   ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x158 + 8));
        goto LAB_14d35439b;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x158;
    } while ((int)uVar8 < iVar6);
  }
  FDragonIKTraceMParams::FDragonIKTraceMParams(__return_storage_ptr__);
LAB_14d35439b:
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// PendingTraces_SetValueOnKey @ 14d354430

void __thiscall
UDragonIKTraceManagerComponent::PendingTraces_SetValueOnKey
          (UDragonIKTraceManagerComponent *this,
          TArray<FDragonIKTraceParamKeyValuePair,TSizedDefaultAllocator<32>_> *param_1,FName param_2
          ,FDragonIKTraceMParams *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined3 uVar10;
  FNameEntryId FVar11;
  float fVar12;
  bool bVar13;
  TEnumAsByte<ETraceTypeQuery> TVar14;
  EDragonIKTraceMType EVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  undefined8 *puVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  FDragonIKTraceMParams *pFVar24;
  undefined8 *puVar25;
  FName *pFVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  uint uVar29;
  FDragonIKTraceMParams *pFVar30;
  FDragonIKTraceMParams *pFVar31;
  longlong lVar32;
  FName local_2c8;
  FDragonIKTraceMParams local_2c0;
  undefined8 local_168 [42];
  
  iVar23 = param_1->ArrayNum;
  uVar29 = 0;
  if (0 < iVar23) {
    lVar32 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar29 < iVar23) {
        uVar22 = ~uVar29 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(FName *)((param_1->AllocatorInstance).Data + lVar32) == param_2) {
        lVar28 = 2;
        lVar32 = 2;
        puVar19 = local_168;
        do {
          pFVar31 = param_3;
          puVar25 = puVar19;
          uVar2 = *(undefined8 *)&(pFVar31->TraceIdentifier).Number;
          dVar3 = (pFVar31->StartLocation).field0_0x0._s_0.X;
          dVar4 = (pFVar31->StartLocation).field0_0x0._s_0.Y;
          param_3 = (FDragonIKTraceMParams *)&(pFVar31->hit_result).ImpactPoint.field_0x10;
          *puVar25 = *(undefined8 *)pFVar31;
          puVar25[1] = uVar2;
          dVar5 = (pFVar31->StartLocation).field0_0x0._s_0.Z;
          dVar6 = (pFVar31->EndLocation).field0_0x0._s_0.X;
          puVar25[2] = dVar3;
          puVar25[3] = dVar4;
          dVar3 = (pFVar31->EndLocation).field0_0x0._s_0.Y;
          dVar4 = (pFVar31->EndLocation).field0_0x0._s_0.Z;
          puVar25[4] = dVar5;
          puVar25[5] = dVar6;
          uVar2 = *(undefined8 *)&pFVar31->SphereRadius;
          uVar7 = *(undefined8 *)&pFVar31->hit_result;
          puVar25[6] = dVar3;
          puVar25[7] = dVar4;
          uVar8 = *(undefined8 *)&(pFVar31->hit_result).Distance;
          uVar9 = *(undefined8 *)&(pFVar31->hit_result).Location;
          puVar25[8] = uVar2;
          puVar25[9] = uVar7;
          uVar2 = *(undefined8 *)&(pFVar31->hit_result).Location.field_0x8;
          uVar7 = *(undefined8 *)&(pFVar31->hit_result).Location.field_0x10;
          puVar25[10] = uVar8;
          puVar25[0xb] = uVar9;
          uVar8 = *(undefined8 *)&(pFVar31->hit_result).ImpactPoint;
          uVar9 = *(undefined8 *)&(pFVar31->hit_result).ImpactPoint.field_0x8;
          puVar25[0xc] = uVar2;
          puVar25[0xd] = uVar7;
          puVar25[0xe] = uVar8;
          puVar25[0xf] = uVar9;
          lVar32 = lVar32 + -1;
          puVar19 = puVar25 + 0x10;
        } while (lVar32 != 0);
        uVar2 = *(undefined8 *)&(pFVar31->hit_result).Normal;
        uVar7 = *(undefined8 *)&(pFVar31->hit_result).Normal.field_0x8;
        uVar8 = *(undefined8 *)&(pFVar31->hit_result).Normal.field_0x10;
        puVar25[0x10] = *(undefined8 *)param_3;
        puVar25[0x11] = uVar2;
        uVar2 = *(undefined8 *)&(pFVar31->hit_result).ImpactNormal;
        uVar9 = *(undefined8 *)&(pFVar31->hit_result).ImpactNormal.field_0x8;
        puVar25[0x12] = uVar7;
        puVar25[0x13] = uVar8;
        uVar7 = *(undefined8 *)&(pFVar31->hit_result).ImpactNormal.field_0x10;
        uVar8 = *(undefined8 *)&(pFVar31->hit_result).TraceStart;
        puVar25[0x14] = uVar2;
        puVar25[0x15] = uVar9;
        uVar2 = *(undefined8 *)&(pFVar31->hit_result).TraceStart.field_0x8;
        uVar9 = *(undefined8 *)&(pFVar31->hit_result).TraceStart.field_0x10;
        puVar25[0x16] = uVar7;
        puVar25[0x17] = uVar8;
        puVar25[0x18] = uVar2;
        puVar25[0x19] = uVar9;
        uVar22 = 0;
        if ((int)uVar29 < param_1->ArrayNum) {
          uVar22 = ~uVar29 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar19 = local_168;
        pFVar20 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar29 * 0x158 + 8;
        do {
          pFVar27 = pFVar20;
          puVar25 = puVar19;
          uVar2 = puVar25[1];
          uVar7 = puVar25[2];
          uVar8 = puVar25[3];
          *(undefined8 *)pFVar27 = *puVar25;
          *(undefined8 *)(pFVar27 + 8) = uVar2;
          uVar2 = puVar25[4];
          uVar9 = puVar25[5];
          *(undefined8 *)(pFVar27 + 0x10) = uVar7;
          *(undefined8 *)(pFVar27 + 0x18) = uVar8;
          uVar7 = puVar25[6];
          uVar8 = puVar25[7];
          *(undefined8 *)(pFVar27 + 0x20) = uVar2;
          *(undefined8 *)(pFVar27 + 0x28) = uVar9;
          uVar2 = puVar25[8];
          uVar9 = puVar25[9];
          *(undefined8 *)(pFVar27 + 0x30) = uVar7;
          *(undefined8 *)(pFVar27 + 0x38) = uVar8;
          uVar7 = puVar25[10];
          uVar8 = puVar25[0xb];
          *(undefined8 *)(pFVar27 + 0x40) = uVar2;
          *(undefined8 *)(pFVar27 + 0x48) = uVar9;
          uVar2 = puVar25[0xc];
          uVar9 = puVar25[0xd];
          *(undefined8 *)(pFVar27 + 0x50) = uVar7;
          *(undefined8 *)(pFVar27 + 0x58) = uVar8;
          uVar7 = puVar25[0xe];
          uVar8 = puVar25[0xf];
          *(undefined8 *)(pFVar27 + 0x60) = uVar2;
          *(undefined8 *)(pFVar27 + 0x68) = uVar9;
          *(undefined8 *)(pFVar27 + 0x70) = uVar7;
          *(undefined8 *)(pFVar27 + 0x78) = uVar8;
          lVar28 = lVar28 + -1;
          puVar19 = puVar25 + 0x10;
          pFVar20 = pFVar27 + 0x80;
        } while (lVar28 != 0);
        uVar2 = puVar25[0x11];
        uVar7 = puVar25[0x12];
        uVar8 = puVar25[0x13];
        *(undefined8 *)(pFVar27 + 0x80) = puVar25[0x10];
        *(undefined8 *)(pFVar27 + 0x88) = uVar2;
        uVar2 = puVar25[0x14];
        uVar9 = puVar25[0x15];
        *(undefined8 *)(pFVar27 + 0x90) = uVar7;
        *(undefined8 *)(pFVar27 + 0x98) = uVar8;
        uVar7 = puVar25[0x16];
        uVar8 = puVar25[0x17];
        *(undefined8 *)(pFVar27 + 0xa0) = uVar2;
        *(undefined8 *)(pFVar27 + 0xa8) = uVar9;
        uVar2 = puVar25[0x18];
        uVar9 = puVar25[0x19];
        *(undefined8 *)(pFVar27 + 0xb0) = uVar7;
        *(undefined8 *)(pFVar27 + 0xb8) = uVar8;
        *(undefined8 *)(pFVar27 + 0xc0) = uVar2;
        *(undefined8 *)(pFVar27 + 200) = uVar9;
        return;
      }
      iVar23 = param_1->ArrayNum;
      uVar29 = uVar29 + 1;
      lVar32 = lVar32 + 0x158;
    } while ((int)uVar29 < iVar23);
  }
  ::FName::FName(&local_2c8,L"");
  FDragonIKTraceMParams::FDragonIKTraceMParams(&local_2c0);
  lVar32 = 2;
  pFVar31 = &local_2c0;
  do {
    pFVar30 = param_3;
    pFVar24 = pFVar31;
    pFVar31 = (FDragonIKTraceMParams *)&(pFVar24->hit_result).ImpactPoint.field_0x10;
    uVar10 = *(undefined3 *)&pFVar30->field_0x1;
    FVar11.Value = (pFVar30->TraceIdentifier).ComparisonIndex.Value;
    uVar2 = *(undefined8 *)&(pFVar30->TraceIdentifier).Number;
    dVar3 = (pFVar30->StartLocation).field0_0x0._s_0.X;
    dVar4 = (pFVar30->StartLocation).field0_0x0._s_0.Y;
    param_3 = (FDragonIKTraceMParams *)&(pFVar30->hit_result).ImpactPoint.field_0x10;
    pFVar24->allow = pFVar30->allow;
    *(undefined3 *)&pFVar24->field_0x1 = uVar10;
    (pFVar24->TraceIdentifier).ComparisonIndex = (FNameEntryId)FVar11.Value;
    *(undefined8 *)&(pFVar24->TraceIdentifier).Number = uVar2;
    dVar5 = (pFVar30->StartLocation).field0_0x0._s_0.Z;
    dVar6 = (pFVar30->EndLocation).field0_0x0._s_0.X;
    (pFVar24->StartLocation).field0_0x0._s_0.X = dVar3;
    (pFVar24->StartLocation).field0_0x0._s_0.Y = dVar4;
    dVar3 = (pFVar30->EndLocation).field0_0x0._s_0.Y;
    dVar4 = (pFVar30->EndLocation).field0_0x0._s_0.Z;
    (pFVar24->StartLocation).field0_0x0._s_0.Z = dVar5;
    (pFVar24->EndLocation).field0_0x0._s_0.X = dVar6;
    fVar12 = pFVar30->SphereRadius;
    bVar21 = pFVar30->trace_complex;
    bVar13 = pFVar30->is_line_type;
    TVar14.Value = (pFVar30->ChannelInput).Value;
    EVar15 = pFVar30->TraceType;
    iVar23 = (pFVar30->hit_result).FaceIndex;
    fVar16 = (pFVar30->hit_result).Time;
    (pFVar24->EndLocation).field0_0x0._s_0.Y = dVar3;
    (pFVar24->EndLocation).field0_0x0._s_0.Z = dVar4;
    fVar17 = (pFVar30->hit_result).Distance;
    iVar18 = (pFVar30->hit_result)._padding_;
    uVar2 = *(undefined8 *)&(pFVar30->hit_result).Location;
    pFVar24->SphereRadius = fVar12;
    pFVar24->trace_complex = bVar21;
    pFVar24->is_line_type = bVar13;
    pFVar24->ChannelInput = (TEnumAsByte<ETraceTypeQuery>)TVar14.Value;
    pFVar24->TraceType = EVar15;
    (pFVar24->hit_result).FaceIndex = iVar23;
    (pFVar24->hit_result).Time = fVar16;
    uVar7 = *(undefined8 *)&(pFVar30->hit_result).Location.field_0x8;
    uVar8 = *(undefined8 *)&(pFVar30->hit_result).Location.field_0x10;
    (pFVar24->hit_result).Distance = fVar17;
    (pFVar24->hit_result)._padding_ = iVar18;
    *(undefined8 *)&(pFVar24->hit_result).Location = uVar2;
    uVar2 = *(undefined8 *)&(pFVar30->hit_result).ImpactPoint;
    uVar9 = *(undefined8 *)&(pFVar30->hit_result).ImpactPoint.field_0x8;
    *(undefined8 *)&(pFVar24->hit_result).Location.field_0x8 = uVar7;
    *(undefined8 *)&(pFVar24->hit_result).Location.field_0x10 = uVar8;
    *(undefined8 *)&(pFVar24->hit_result).ImpactPoint = uVar2;
    *(undefined8 *)&(pFVar24->hit_result).ImpactPoint.field_0x8 = uVar9;
    lVar32 = lVar32 + -1;
  } while (lVar32 != 0);
  uVar2 = *(undefined8 *)&(pFVar30->hit_result).Normal;
  pFVar26 = (FName *)(param_1->AllocatorInstance).Data;
  uVar7 = *(undefined8 *)&(pFVar30->hit_result).Normal.field_0x8;
  uVar8 = *(undefined8 *)&(pFVar30->hit_result).Normal.field_0x10;
  *(undefined8 *)pFVar31 = *(undefined8 *)param_3;
  *(undefined8 *)&(pFVar24->hit_result).Normal = uVar2;
  uVar2 = *(undefined8 *)&(pFVar30->hit_result).ImpactNormal;
  uVar9 = *(undefined8 *)&(pFVar30->hit_result).ImpactNormal.field_0x8;
  *(undefined8 *)&(pFVar24->hit_result).Normal.field_0x8 = uVar7;
  *(undefined8 *)&(pFVar24->hit_result).Normal.field_0x10 = uVar8;
  uVar7 = *(undefined8 *)&(pFVar30->hit_result).ImpactNormal.field_0x10;
  uVar8 = *(undefined8 *)&(pFVar30->hit_result).TraceStart;
  *(undefined8 *)&(pFVar24->hit_result).ImpactNormal = uVar2;
  *(undefined8 *)&(pFVar24->hit_result).ImpactNormal.field_0x8 = uVar9;
  uVar2 = *(undefined8 *)&(pFVar30->hit_result).TraceStart.field_0x8;
  uVar9 = *(undefined8 *)&(pFVar30->hit_result).TraceStart.field_0x10;
  *(undefined8 *)&(pFVar24->hit_result).ImpactNormal.field_0x10 = uVar7;
  *(undefined8 *)&(pFVar24->hit_result).TraceStart = uVar8;
  *(undefined8 *)&(pFVar24->hit_result).TraceStart.field_0x8 = uVar2;
  *(undefined8 *)&(pFVar24->hit_result).TraceStart.field_0x10 = uVar9;
  local_2c8 = param_2;
  if (((pFVar26 <= &local_2c8) && (&local_2c8 < pFVar26 + (longlong)param_1->ArrayMax * 0x2b)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar21)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar23 = param_1->ArrayNum;
  if (iVar23 == param_1->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x158,8,&param_1->AllocatorInstance,&param_1->ArrayMax);
    param_1->ArrayNum = iVar23;
  }
  param_1->ArrayNum = iVar23 + 1;
  pFVar26 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar23 * 0x158);
  *pFVar26 = local_2c8;
  FDragonIKTraceMParams::FDragonIKTraceMParams((FDragonIKTraceMParams *)(pFVar26 + 1),&local_2c0);
  return;
}

// TickComponent @ 14d35c5c0

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
UDragonIKTraceManagerComponent::TickComponent
          (UDragonIKTraceManagerComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  TEnumAsByte<ETraceTypeQuery> TVar1;
  FDragonIKTraceParamKeyValuePair *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FLinearColor FVar11;
  FLinearColor FVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  int iVar15;
  FString *pFVar16;
  UWorld *pUVar17;
  FHitResult *pFVar18;
  ForAnyElementType FVar19;
  FHitResult *pFVar20;
  TVector<double>_u_0 *pTVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  TVector<double>_u_0 *pTVar29;
  longlong lVar30;
  ulonglong uVar31;
  Type TVar32;
  FLinearColor_u_0 *pFVar33;
  FLinearColor_u_0 *pFVar34;
  ForAnyElementType local_ab8;
  int local_ab0;
  int local_aac;
  uint local_aa8;
  longlong local_aa0;
  FString local_a98;
  TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_> local_a88;
  ForAnyElementType local_a78;
  int local_a70;
  int local_a6c;
  FString local_a68;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_a58;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_a48;
  FDragonIKTraceMParams local_a38;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined4 uStack_8d0;
  undefined1 uStack_8cc;
  undefined2 uStack_8cb;
  undefined1 uStack_8c9;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined4 uStack_8b0;
  undefined1 uStack_8ac;
  undefined2 uStack_8ab;
  undefined1 uStack_8a9;
  FString local_8a8;
  FLinearColor_u_0 local_898;
  FLinearColor_u_0 local_888;
  FLinearColor_u_0 local_878;
  FLinearColor_u_0 local_868;
  FLinearColor_u_0 local_858;
  FLinearColor_u_0 local_848;
  FString local_838;
  TVector<double>_u_0 local_828;
  TVector<double>_u_0 local_808;
  TVector<double>_u_0 local_7e8;
  TVector<double>_u_0 local_7c8;
  TVector<double>_u_0 local_7a8;
  TVector<double>_u_0 local_788;
  TVector<double>_u_0 local_768;
  TVector<double>_u_0 local_748;
  FString local_728;
  FLinearColor_u_0 local_718;
  FLinearColor_u_0 local_708;
  FDragonIKTraceMParams local_6f8;
  FDragonIKTraceMParams local_5a8;
  FHitResult local_458;
  FHitResult local_358;
  FHitResult local_258;
  FHitResult local_158;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  local_ab0 = (this->Solver_Markers).ArrayNum;
  lVar22 = (longlong)local_ab0;
  pFVar23 = (this->Solver_Markers).AllocatorInstance.Data;
  local_ab8.Data = (FScriptContainerElement *)0x0;
  if (local_ab0 == 0) {
    local_aac = 0;
    iVar15 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_ab0,0,&local_ab8,local_ab0,&local_aac);
    memcpy(local_ab8.Data,pFVar23,lVar22 << 3);
    iVar15 = local_ab0;
  }
  fVar10 = __real_40a00000;
  if (((0 < iVar15) && (this->hand_shaked != false)) && (this->Is_Enabled != false)) {
    local_aa8 = 0;
    if (0 < iVar15) {
      local_aa0 = 0;
      do {
        lVar22 = local_aa0;
        uVar27 = local_aa8;
        uVar28 = 0;
        uVar24 = 0;
        uVar25 = ~local_aa8 >> 0x1f;
        uVar26 = uVar24;
        if ((int)local_aa8 < iVar15) {
          uVar26 = uVar25;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar14 = ::FName::IsWithinBounds
                           ((FNameEntryId)*(uint *)(local_ab8.Data + (longlong)(int)uVar27 * 8));
        if (bVar14) {
          uVar26 = uVar24;
          if ((int)uVar27 < local_ab0) {
            uVar26 = uVar25;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FName::ToString((FName *)(local_ab8.Data + (longlong)(int)uVar27 * 8),&local_a98);
          pFVar16 = ::FString::Mid(&local_a98,&local_728,0,1);
          if (&local_a98 != pFVar16) {
            if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a98.Data.AllocatorInstance.Data);
            }
            local_a98.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
            (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a98.Data.ArrayNum = (pFVar16->Data).ArrayNum;
            local_a98.Data.ArrayMax = (pFVar16->Data).ArrayMax;
            (pFVar16->Data).ArrayNum = 0;
            (pFVar16->Data).ArrayMax = 0;
          }
          if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_728.Data.AllocatorInstance.Data);
          }
          if ((int)uVar27 < local_ab0) {
            uVar24 = uVar25;
          }
          if ((uVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar15 = (this->PendingTraces).ArrayNum;
          pFVar2 = (FDragonIKTraceParamKeyValuePair *)(this->PendingTraces).AllocatorInstance.Data;
          lVar22 = *(longlong *)(local_ab8.Data + lVar22);
          local_a78.Data = (FScriptContainerElement *)0x0;
          local_a70 = iVar15;
          if (iVar15 == 0) {
            local_a6c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x158,8,iVar15,0,&local_a78,iVar15,&local_a6c);
            ConstructItems<FDragonIKTraceParamKeyValuePair,FDragonIKTraceParamKeyValuePair,int>
                      (local_a78.Data,pFVar2,iVar15);
          }
          if (0 < local_a70) {
            lVar30 = 0;
            uVar31 = uVar28;
            iVar15 = local_a70;
            do {
              uVar26 = (uint)uVar28;
              uVar27 = 0;
              if ((int)uVar26 < iVar15) {
                uVar27 = ~uVar26 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , iVar15 = local_a70, bVar14)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(longlong *)(local_a78.Data + lVar30) == lVar22) {
                uVar27 = 0;
                if ((int)uVar26 < iVar15) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                FVar19.Data = local_a78.Data;
                lVar22 = uVar31 * 0x158;
                local_a38.allow = *(bool *)(local_a78.Data + lVar22 + 8);
                local_a38.TraceIdentifier = *(FName *)(local_a78.Data + lVar22 + 0xc);
                local_a38.StartLocation.field0_0x0._s_0.X =
                     (double)*(undefined8 *)(local_a78.Data + lVar22 + 0x18);
                local_a38.StartLocation.field0_0x0._s_0.Y =
                     (double)*(undefined8 *)(local_a78.Data + lVar22 + 0x18 + 8);
                local_a38.StartLocation.field0_0x0._s_0.Z =
                     (double)*(undefined8 *)(local_a78.Data + lVar22 + 0x28);
                local_a38.EndLocation.field0_0x0._s_0.X =
                     (double)*(undefined8 *)(local_a78.Data + lVar22 + 0x30);
                local_a38.EndLocation.field0_0x0._s_0.Y =
                     (double)*(undefined8 *)(local_a78.Data + lVar22 + 0x30 + 8);
                local_a38.EndLocation.field0_0x0._s_0.Z =
                     (double)*(undefined8 *)(local_a78.Data + lVar22 + 0x40);
                local_a38.SphereRadius = *(float *)(local_a78.Data + lVar22 + 0x48);
                local_a38.trace_complex = *(bool *)(local_a78.Data + lVar22 + 0x4c);
                local_a38.is_line_type = *(bool *)(local_a78.Data + lVar22 + 0x4d);
                local_a38.ChannelInput.Value = *(uchar *)(local_a78.Data + lVar22 + 0x4e);
                local_a38.TraceType = *(EDragonIKTraceMType *)(local_a78.Data + lVar22 + 0x4f);
                FHitResult::FHitResult
                          (&local_a38.hit_result,(FHitResult *)(local_a78.Data + lVar22 + 0x50));
                local_a38.bone_text = *(FName *)(FVar19.Data + lVar22 + 0x150);
                goto LAB_14d35c912;
              }
              uVar28 = (ulonglong)(uVar26 + 1);
              uVar31 = uVar31 + 1;
              lVar30 = lVar30 + 0x158;
            } while ((int)(uVar26 + 1) < iVar15);
          }
          FDragonIKTraceMParams::FDragonIKTraceMParams(&local_a38);
LAB_14d35c912:
          if (local_a78.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a78.Data);
          }
          if ((FScriptContainerElement)local_a38.TraceType == (FScriptContainerElement)0x0) {
            memset(&local_358,0,0x100);
            uStack_8d0 = 0xffffffff;
            uStack_8cb = 0;
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_a98.Data.ArrayNum != 0) {
              FVar19.Data = local_a98.Data.AllocatorInstance.Data;
            }
            local_8e8 = 0;
            uStack_8e0 = 0;
            uStack_8c9 = 0;
            local_358.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
            local_358.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
            local_358.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
            local_358.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0
            ;
            local_8d8 = 0;
            uStack_8cc = 0;
            local_358.HitObjectHandle.InstanceIndex = -1;
            local_358.HitObjectHandle.ResolutionStatus = Invalid;
            local_358.HitObjectHandle._29_3_ = 0;
            local_358.Time = 1.0;
            local_358.MyItem = -1;
            local_358.HitObjectHandle.ManagerInterface.InterfaceInstance =
                 (IActorInstanceManagerInterface *)0x0;
            local_a58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a58.ArrayNum = 0;
            local_a58.ArrayMax = 0;
            iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,"F");
            if ((iVar15 == 0) && (this->bShow_Foot_Trace_Lines_InGame != false)) {
LAB_14d35ca00:
              TVar1.Value = local_a38.ChannelInput.Value;
              FVar12.field0_0x0 = FLinearColor::Green.field0_0x0;
              FVar11.field0_0x0 = FLinearColor::Red.field0_0x0;
              pUVar17 = (UWorld *)this->_padding_;
              if (pUVar17 == (UWorld *)0x0) {
                pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
              }
              pFVar34 = &local_718;
              pTVar29 = &local_828;
              pTVar21 = &local_808;
              pFVar33 = &local_708;
              local_828._s_0.X = local_a38.EndLocation.field0_0x0._s_0.X;
              local_828._s_0.Y = local_a38.EndLocation.field0_0x0._s_0.Y;
              local_828._s_0.Z = local_a38.EndLocation.field0_0x0._s_0.Z;
              TVar32 = ForOneFrame;
              local_718 = FVar12.field0_0x0;
              local_708 = FVar11.field0_0x0;
              local_808._s_0.X = local_a38.StartLocation.field0_0x0._s_0.X;
              local_808._s_0.Y = local_a38.StartLocation.field0_0x0._s_0.Y;
              local_808._s_0.Z = local_a38.StartLocation.field0_0x0._s_0.Z;
            }
            else {
              FVar19.Data = (FScriptContainerElement *)L"";
              if (local_a98.Data.ArrayNum != 0) {
                FVar19.Data = local_a98.Data.AllocatorInstance.Data;
              }
              iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,"S");
              TVar1.Value = local_a38.ChannelInput.Value;
              FVar12 = FLinearColor::Green;
              FVar11 = FLinearColor::Red;
              if ((iVar15 == 0) && (this->bShow_Spine_Trace_Lines_InGame != false))
              goto LAB_14d35ca00;
              pUVar17 = (UWorld *)this->_padding_;
              if (pUVar17 == (UWorld *)0x0) {
                pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
              }
              pFVar34 = &local_898;
              pTVar29 = &local_7e8;
              pTVar21 = &local_7c8;
              pFVar33 = &local_888;
              local_7e8._s_0.X = local_a38.EndLocation.field0_0x0._s_0.X;
              local_7e8._s_0.Y = local_a38.EndLocation.field0_0x0._s_0.Y;
              local_7e8._s_0.Z = local_a38.EndLocation.field0_0x0._s_0.Z;
              TVar32 = None;
              local_898 = FVar12.field0_0x0;
              local_888 = FVar11.field0_0x0;
              local_7c8._s_0.X = local_a38.StartLocation.field0_0x0._s_0.X;
              local_7c8._s_0.Y = local_a38.StartLocation.field0_0x0._s_0.Y;
              local_7c8._s_0.Z = local_a38.StartLocation.field0_0x0._s_0.Z;
            }
            UKismetSystemLibrary::LineTraceSingle
                      ((UObject *)pUVar17,(TVector<double> *)&pTVar21->_s_0,
                       (TVector<double> *)&pTVar29->_s_0,(uint)TVar1.Value,local_a38.trace_complex,
                       &local_a58,TVar32,&local_358,true,(FLinearColor *)&pFVar33->_s_0,
                       (FLinearColor *)&pFVar34->_s_0,fVar10);
            lVar22 = 2;
            pFVar18 = &local_a38.hit_result;
            pFVar20 = &local_358;
            do {
              fVar8 = pFVar20->Time;
              fVar9 = pFVar20->Distance;
              iVar15 = pFVar20->_padding_;
              uVar4 = *(undefined8 *)&pFVar20->Location;
              uVar5 = *(undefined8 *)&(pFVar20->Location).field_0x8;
              pFVar18->FaceIndex = pFVar20->FaceIndex;
              pFVar18->Time = fVar8;
              pFVar18->Distance = fVar9;
              pFVar18->_padding_ = iVar15;
              uVar6 = *(undefined8 *)&(pFVar20->Location).field_0x10;
              uVar7 = *(undefined8 *)&pFVar20->ImpactPoint;
              *(undefined8 *)&pFVar18->Location = uVar4;
              *(undefined8 *)&(pFVar18->Location).field_0x8 = uVar5;
              uVar4 = *(undefined8 *)&(pFVar20->ImpactPoint).field_0x8;
              uVar5 = *(undefined8 *)&(pFVar20->ImpactPoint).field_0x10;
              *(undefined8 *)&(pFVar18->Location).field_0x10 = uVar6;
              *(undefined8 *)&pFVar18->ImpactPoint = uVar7;
              uVar6 = *(undefined8 *)&pFVar20->Normal;
              uVar7 = *(undefined8 *)&(pFVar20->Normal).field_0x8;
              *(undefined8 *)&(pFVar18->ImpactPoint).field_0x8 = uVar4;
              *(undefined8 *)&(pFVar18->ImpactPoint).field_0x10 = uVar5;
              uVar4 = *(undefined8 *)&(pFVar20->Normal).field_0x10;
              uVar5 = *(undefined8 *)&pFVar20->ImpactNormal;
              *(undefined8 *)&pFVar18->Normal = uVar6;
              *(undefined8 *)&(pFVar18->Normal).field_0x8 = uVar7;
              uVar6 = *(undefined8 *)&(pFVar20->ImpactNormal).field_0x8;
              uVar7 = *(undefined8 *)&(pFVar20->ImpactNormal).field_0x10;
              *(undefined8 *)&(pFVar18->Normal).field_0x10 = uVar4;
              *(undefined8 *)&pFVar18->ImpactNormal = uVar5;
              uVar4 = *(undefined8 *)&pFVar20->TraceStart;
              uVar5 = *(undefined8 *)&(pFVar20->TraceStart).field_0x8;
              *(undefined8 *)&(pFVar18->ImpactNormal).field_0x8 = uVar6;
              *(undefined8 *)&(pFVar18->ImpactNormal).field_0x10 = uVar7;
              *(undefined8 *)&pFVar18->TraceStart = uVar4;
              *(undefined8 *)&(pFVar18->TraceStart).field_0x8 = uVar5;
              lVar22 = lVar22 + -1;
              pFVar18 = (FHitResult *)&(pFVar18->TraceStart).field_0x10;
              pFVar20 = (FHitResult *)&(pFVar20->TraceStart).field_0x10;
            } while (lVar22 != 0);
            local_6f8.allow = local_a38.allow;
            local_6f8.TraceIdentifier = local_a38.TraceIdentifier;
            local_6f8.trace_complex = local_a38.trace_complex;
            local_6f8.StartLocation.field0_0x0._s_0.X = local_a38.StartLocation.field0_0x0._s_0.X;
            local_6f8.StartLocation.field0_0x0._s_0.Y = local_a38.StartLocation.field0_0x0._s_0.Y;
            local_6f8.is_line_type = local_a38.is_line_type;
            local_6f8.ChannelInput.Value = local_a38.ChannelInput.Value;
            local_6f8.StartLocation.field0_0x0._s_0.Z = local_a38.StartLocation.field0_0x0._s_0.Z;
            local_6f8.EndLocation.field0_0x0._s_0.X = local_a38.EndLocation.field0_0x0._s_0.X;
            local_6f8.EndLocation.field0_0x0._s_0.Y = local_a38.EndLocation.field0_0x0._s_0.Y;
            local_6f8.TraceType = local_a38.TraceType;
            local_6f8.SphereRadius = local_a38.SphereRadius;
            local_6f8.EndLocation.field0_0x0._s_0.Z = local_a38.EndLocation.field0_0x0._s_0.Z;
            FHitResult::FHitResult(&local_6f8.hit_result,&local_a38.hit_result);
            local_6f8.bone_text = local_a38.bone_text;
            PendingTraces_SetValueOnKey
                      (this,&this->PendingTraces,local_a38.TraceIdentifier,&local_6f8);
            pFVar18 = FHitResult::FHitResult(&local_258,&local_358);
            Hitmap_SetValueOnKey
                      (this,&this->HitResultMap,local_a38.TraceIdentifier,pFVar18,
                       local_a38.bone_text);
            if (local_a58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a58.AllocatorInstance.Data);
            }
          }
          else if ((FScriptContainerElement)local_a38.TraceType == (FScriptContainerElement)0x1) {
            memset(&local_458,0,0x100);
            uStack_8b0 = 0xffffffff;
            uStack_8ab = 0;
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_a98.Data.ArrayNum != 0) {
              FVar19.Data = local_a98.Data.AllocatorInstance.Data;
            }
            local_8c8 = 0;
            uStack_8c0 = 0;
            uStack_8a9 = 0;
            local_458.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
            local_458.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
            local_458.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
            local_458.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0
            ;
            local_8b8 = 0;
            uStack_8ac = 0;
            local_458.HitObjectHandle.InstanceIndex = -1;
            local_458.HitObjectHandle.ResolutionStatus = Invalid;
            local_458.HitObjectHandle._29_3_ = 0;
            local_458.Time = 1.0;
            local_458.MyItem = -1;
            local_458.HitObjectHandle.ManagerInterface.InterfaceInstance =
                 (IActorInstanceManagerInterface *)0x0;
            local_a48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a48.ArrayNum = 0;
            local_a48.ArrayMax = 0;
            iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,"F");
            if ((iVar15 == 0) && (this->bShow_Foot_Trace_Lines_InGame != false)) {
LAB_14d35ce8d:
              TVar1.Value = local_a38.ChannelInput.Value;
              FVar12.field0_0x0 = FLinearColor::Green.field0_0x0;
              FVar11.field0_0x0 = FLinearColor::Red.field0_0x0;
              pUVar17 = (UWorld *)this->_padding_;
              if (pUVar17 == (UWorld *)0x0) {
                pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
              }
              pFVar34 = &local_878;
              pTVar29 = &local_7a8;
              pTVar21 = &local_788;
              pFVar33 = &local_868;
              local_7a8._s_0.X = local_a38.EndLocation.field0_0x0._s_0.X;
              local_7a8._s_0.Y = local_a38.EndLocation.field0_0x0._s_0.Y;
              local_7a8._s_0.Z = local_a38.EndLocation.field0_0x0._s_0.Z;
              TVar32 = ForOneFrame;
              local_878 = FVar12.field0_0x0;
              local_868 = FVar11.field0_0x0;
              local_788._s_0.X = local_a38.StartLocation.field0_0x0._s_0.X;
              local_788._s_0.Y = local_a38.StartLocation.field0_0x0._s_0.Y;
              local_788._s_0.Z = local_a38.StartLocation.field0_0x0._s_0.Z;
            }
            else {
              FVar19.Data = (FScriptContainerElement *)L"";
              if (local_a98.Data.ArrayNum != 0) {
                FVar19.Data = local_a98.Data.AllocatorInstance.Data;
              }
              iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,"S");
              TVar1.Value = local_a38.ChannelInput.Value;
              FVar12 = FLinearColor::Green;
              FVar11 = FLinearColor::Red;
              if ((iVar15 == 0) && (this->bShow_Spine_Trace_Lines_InGame != false))
              goto LAB_14d35ce8d;
              pUVar17 = (UWorld *)this->_padding_;
              if (pUVar17 == (UWorld *)0x0) {
                pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
              }
              pFVar34 = &local_858;
              pTVar29 = &local_768;
              pTVar21 = &local_748;
              pFVar33 = &local_848;
              local_768._s_0.X = local_a38.EndLocation.field0_0x0._s_0.X;
              local_768._s_0.Y = local_a38.EndLocation.field0_0x0._s_0.Y;
              local_768._s_0.Z = local_a38.EndLocation.field0_0x0._s_0.Z;
              TVar32 = None;
              local_858 = FVar12.field0_0x0;
              local_848 = FVar11.field0_0x0;
              local_748._s_0.X = local_a38.StartLocation.field0_0x0._s_0.X;
              local_748._s_0.Y = local_a38.StartLocation.field0_0x0._s_0.Y;
              local_748._s_0.Z = local_a38.StartLocation.field0_0x0._s_0.Z;
            }
            UKismetSystemLibrary::SphereTraceSingle
                      ((UObject *)pUVar17,(TVector<double> *)&pTVar21->_s_0,
                       (TVector<double> *)&pTVar29->_s_0,local_a38.SphereRadius,(uint)TVar1.Value,
                       local_a38.trace_complex,&local_a48,TVar32,&local_458,true,
                       (FLinearColor *)&pFVar33->_s_0,(FLinearColor *)&pFVar34->_s_0,fVar10);
            lVar22 = 2;
            pFVar18 = &local_a38.hit_result;
            pFVar20 = &local_458;
            do {
              fVar8 = pFVar20->Time;
              fVar9 = pFVar20->Distance;
              iVar15 = pFVar20->_padding_;
              uVar4 = *(undefined8 *)&pFVar20->Location;
              uVar5 = *(undefined8 *)&(pFVar20->Location).field_0x8;
              pFVar18->FaceIndex = pFVar20->FaceIndex;
              pFVar18->Time = fVar8;
              pFVar18->Distance = fVar9;
              pFVar18->_padding_ = iVar15;
              uVar6 = *(undefined8 *)&(pFVar20->Location).field_0x10;
              uVar7 = *(undefined8 *)&pFVar20->ImpactPoint;
              *(undefined8 *)&pFVar18->Location = uVar4;
              *(undefined8 *)&(pFVar18->Location).field_0x8 = uVar5;
              uVar4 = *(undefined8 *)&(pFVar20->ImpactPoint).field_0x8;
              uVar5 = *(undefined8 *)&(pFVar20->ImpactPoint).field_0x10;
              *(undefined8 *)&(pFVar18->Location).field_0x10 = uVar6;
              *(undefined8 *)&pFVar18->ImpactPoint = uVar7;
              uVar6 = *(undefined8 *)&pFVar20->Normal;
              uVar7 = *(undefined8 *)&(pFVar20->Normal).field_0x8;
              *(undefined8 *)&(pFVar18->ImpactPoint).field_0x8 = uVar4;
              *(undefined8 *)&(pFVar18->ImpactPoint).field_0x10 = uVar5;
              uVar4 = *(undefined8 *)&(pFVar20->Normal).field_0x10;
              uVar5 = *(undefined8 *)&pFVar20->ImpactNormal;
              *(undefined8 *)&pFVar18->Normal = uVar6;
              *(undefined8 *)&(pFVar18->Normal).field_0x8 = uVar7;
              uVar6 = *(undefined8 *)&(pFVar20->ImpactNormal).field_0x8;
              uVar7 = *(undefined8 *)&(pFVar20->ImpactNormal).field_0x10;
              *(undefined8 *)&(pFVar18->Normal).field_0x10 = uVar4;
              *(undefined8 *)&pFVar18->ImpactNormal = uVar5;
              uVar4 = *(undefined8 *)&pFVar20->TraceStart;
              uVar5 = *(undefined8 *)&(pFVar20->TraceStart).field_0x8;
              *(undefined8 *)&(pFVar18->ImpactNormal).field_0x8 = uVar6;
              *(undefined8 *)&(pFVar18->ImpactNormal).field_0x10 = uVar7;
              *(undefined8 *)&pFVar18->TraceStart = uVar4;
              *(undefined8 *)&(pFVar18->TraceStart).field_0x8 = uVar5;
              lVar22 = lVar22 + -1;
              pFVar18 = (FHitResult *)&(pFVar18->TraceStart).field_0x10;
              pFVar20 = (FHitResult *)&(pFVar20->TraceStart).field_0x10;
            } while (lVar22 != 0);
            local_5a8.allow = local_a38.allow;
            local_5a8.TraceIdentifier = local_a38.TraceIdentifier;
            local_5a8.trace_complex = local_a38.trace_complex;
            local_5a8.StartLocation.field0_0x0._s_0.X = local_a38.StartLocation.field0_0x0._s_0.X;
            local_5a8.StartLocation.field0_0x0._s_0.Y = local_a38.StartLocation.field0_0x0._s_0.Y;
            local_5a8.is_line_type = local_a38.is_line_type;
            local_5a8.ChannelInput.Value = local_a38.ChannelInput.Value;
            local_5a8.StartLocation.field0_0x0._s_0.Z = local_a38.StartLocation.field0_0x0._s_0.Z;
            local_5a8.EndLocation.field0_0x0._s_0.X = local_a38.EndLocation.field0_0x0._s_0.X;
            local_5a8.EndLocation.field0_0x0._s_0.Y = local_a38.EndLocation.field0_0x0._s_0.Y;
            local_5a8.TraceType = local_a38.TraceType;
            local_5a8.SphereRadius = local_a38.SphereRadius;
            local_5a8.EndLocation.field0_0x0._s_0.Z = local_a38.EndLocation.field0_0x0._s_0.Z;
            FHitResult::FHitResult(&local_5a8.hit_result,&local_a38.hit_result);
            local_5a8.bone_text = local_a38.bone_text;
            PendingTraces_SetValueOnKey
                      (this,&this->PendingTraces,local_a38.TraceIdentifier,&local_5a8);
            pFVar18 = FHitResult::FHitResult(&local_158,&local_458);
            Hitmap_SetValueOnKey
                      (this,&this->HitResultMap,local_a38.TraceIdentifier,pFVar18,
                       local_a38.bone_text);
            if (local_a48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a48.AllocatorInstance.Data);
            }
          }
          uVar27 = local_aa8;
          if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a98.Data.AllocatorInstance.Data);
            uVar27 = local_aa8;
          }
        }
        local_aa0 = local_aa0 + 8;
        local_aa8 = uVar27 + 1;
        iVar15 = local_ab0;
      } while ((int)local_aa8 < local_ab0);
    }
    uVar27 = 0;
    local_a88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a88.ArrayNum = 0;
    local_a88.ArrayMax = 0;
    if (0 < iVar15) {
      local_aa0 = 0;
      do {
        uVar24 = ~uVar27 >> 0x1f;
        uVar26 = 0;
        if ((int)uVar27 < iVar15) {
          uVar26 = uVar24;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar14 = ::FName::IsWithinBounds
                           ((FNameEntryId)*(uint *)(local_ab8.Data + (longlong)(int)uVar27 * 8));
        if (bVar14) {
          uVar26 = 0;
          if ((int)uVar27 < local_ab0) {
            uVar26 = uVar24;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FName::ToString((FName *)(local_ab8.Data + (longlong)(int)uVar27 * 8),&local_a68);
          pFVar16 = ::FString::Mid(&local_a68,&local_838,0,1);
          if (&local_a68 != pFVar16) {
            if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a68.Data.AllocatorInstance.Data);
            }
            local_a68.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
            (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a68.Data.ArrayNum = (pFVar16->Data).ArrayNum;
            local_a68.Data.ArrayMax = (pFVar16->Data).ArrayMax;
            (pFVar16->Data).ArrayNum = 0;
            (pFVar16->Data).ArrayMax = 0;
          }
          if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_838.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_8a8,"F");
          FVar13.Data = local_8a8.Data.AllocatorInstance.Data;
          FVar19.Data = local_a68.Data.AllocatorInstance.Data;
          if (local_a68.Data.ArrayNum == local_8a8.Data.ArrayNum) {
            if (1 < local_a68.Data.ArrayNum) {
              iVar15 = wcscmp((wchar_t *)local_a68.Data.AllocatorInstance.Data,
                              (wchar_t *)local_8a8.Data.AllocatorInstance.Data);
              bVar14 = iVar15 == 0;
              goto LAB_14d35d341;
            }
LAB_14d35d348:
            if ((this->HitResultMap).ArrayNum <= (int)uVar27) goto LAB_14d35d356;
            bVar14 = true;
          }
          else {
            bVar14 = local_a68.Data.ArrayNum + local_8a8.Data.ArrayNum == 1;
LAB_14d35d341:
            if (bVar14) goto LAB_14d35d348;
LAB_14d35d356:
            bVar14 = false;
          }
          if (FVar13.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar13.Data);
            FVar19.Data = local_a68.Data.AllocatorInstance.Data;
          }
          if (bVar14) {
            uVar26 = 0;
            if ((int)uVar27 < (this->HitResultMap).ArrayNum) {
              uVar26 = uVar24;
            }
            if ((uVar26 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar23 = (this->HitResultMap).AllocatorInstance.Data + local_aa0;
            if (((local_a88.AllocatorInstance.Data <= pFVar23) &&
                (pFVar23 < local_a88.AllocatorInstance.Data + (longlong)local_a88.ArrayMax * 0x110))
               && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar14)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar15 = local_a88.ArrayNum;
            if (local_a88.ArrayNum == local_a88.ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x110,8,&local_a88.AllocatorInstance,&local_a88.ArrayMax);
            }
            local_a88.ArrayNum = iVar15 + 1;
            lVar22 = (longlong)iVar15 * 0x110;
            *(undefined8 *)(local_a88.AllocatorInstance.Data + lVar22) = *(undefined8 *)pFVar23;
            *(undefined8 *)(local_a88.AllocatorInstance.Data + lVar22 + 8) =
                 *(undefined8 *)(pFVar23 + 8);
            FHitResult::FHitResult
                      ((FHitResult *)(local_a88.AllocatorInstance.Data + lVar22 + 0x10),
                       (FHitResult *)(pFVar23 + 0x10));
            FVar19.Data = local_a68.Data.AllocatorInstance.Data;
          }
          if (FVar19.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar19.Data);
          }
        }
        local_aa0 = local_aa0 + 0x110;
        uVar27 = uVar27 + 1;
        iVar15 = local_ab0;
      } while ((int)uVar27 < local_ab0);
    }
    FDragonIKFootSolverTraceData_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnDragonikFootHitData,
               &local_a88);
    if (local_a88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a88.AllocatorInstance.Data);
    }
  }
  if (local_ab8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab8.Data);
  }
  return;
}

