// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 1497296d0

UClass * __cdecl UPCGComputeDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeDataProvider",
               &Z_Registration_Info_UClass_UPCGComputeDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGComputeDataProvider,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGComputeDataProvider>,
               InternalVTableHelperCtorCaller<UPCGComputeDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeDataProvider.InnerSingleton;
}

// UPCGComputeDataProvider @ 14973ac60

UPCGComputeDataProvider * __thiscall
UPCGComputeDataProvider::UPCGComputeDataProvider
          (UPCGComputeDataProvider *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->GraphBindingIndex = -1;
  this_00 = &(this->ProducerSettings).SoftObjectPtr.field_0x18;
  this->bProducedByCPU = false;
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  (this->OutputPinLabel).ComparisonIndex = 0;
  (this->OutputPinLabel).Number = 0;
  (this->OutputPinLabelAlias).ComparisonIndex = 0;
  (this->OutputPinLabelAlias).Number = 0;
  (this->DownstreamInputPinLabelAliases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DownstreamInputPinLabelAliases).ArrayNum = 0;
  (this->DownstreamInputPinLabelAliases).ArrayMax = 0;
  (this->ProducerKernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  this->GenerationCounter = (atomic<unsigned___int64>)0x0;
  return this;
}

// UPCGComputeDataProvider @ 14973ace0

UPCGComputeDataProvider * __thiscall
UPCGComputeDataProvider::UPCGComputeDataProvider
          (UPCGComputeDataProvider *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->GraphBindingIndex = -1;
  this_00 = &(this->ProducerSettings).SoftObjectPtr.field_0x18;
  this->bProducedByCPU = false;
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  (this->OutputPinLabel).ComparisonIndex = 0;
  (this->OutputPinLabel).Number = 0;
  (this->OutputPinLabelAlias).ComparisonIndex = 0;
  (this->OutputPinLabelAlias).Number = 0;
  (this->DownstreamInputPinLabelAliases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DownstreamInputPinLabelAliases).ArrayNum = 0;
  (this->DownstreamInputPinLabelAliases).ArrayMax = 0;
  (this->ProducerKernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  this->GenerationCounter = (atomic<unsigned___int64>)0x0;
  return this;
}

// ~UPCGComputeDataProvider @ 14973d9f0

void __thiscall UPCGComputeDataProvider::~UPCGComputeDataProvider(UPCGComputeDataProvider *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  pvVar1 = *(void **)&(this->ProducerSettings).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->DownstreamInputPinLabelAliases).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// AddReferencedObjects @ 149745eb0

void __cdecl
UPCGComputeDataProvider::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGComputeDataProvider>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x000149745f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[3].field_0x10,0,0);
    return;
  }
  pFVar3 = GetTypeName<UPCGComputeDataProvider>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetPrivateStaticClass @ 14975ab40

UClass * __cdecl UPCGComputeDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeDataProvider",
               &Z_Registration_Info_UClass_UPCGComputeDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGComputeDataProvider,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGComputeDataProvider>,
               InternalVTableHelperCtorCaller<UPCGComputeDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeDataProvider.InnerSingleton;
}

// GetProducerSettings @ 14975d2f0

UPCGSettings * __thiscall
UPCGComputeDataProvider::GetProducerSettings(UPCGComputeDataProvider *this)

{
  int iVar1;
  UPCGSettings *pUVar2;
  UClass *pUVar3;
  FGCScopeGuard local_res8 [8];
  
  if ((this->ResolvedProducerSettings).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    return (this->ResolvedProducerSettings).field0_0x0.DebugPtr;
  }
  FGCScopeGuard::FGCScopeGuard(local_res8);
  pUVar2 = (UPCGSettings *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ProducerSettings);
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGSettings_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14975d348;
  }
  pUVar2 = (UPCGSettings *)0x0;
LAB_14975d348:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = pUVar2;
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return (this->ResolvedProducerSettings).field0_0x0.DebugPtr;
}

// Initialize @ 149768c20

void __thiscall
UPCGComputeDataProvider::Initialize
          (UPCGComputeDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  int iVar1;
  TObjectPtr<UPCGSettings_const_>_u_0 TVar2;
  UPCGComputeKernel *pUVar3;
  undefined4 uVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  TObjectPtr<UPCGSettings_const_>_u_0 local_res8;
  FString local_28;
  FString local_18;
  
  LOCK();
  this->GenerationCounter = (atomic<unsigned___int64>)((longlong)this->GenerationCounter + 1);
  UNLOCK();
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar7 = GetTypeName<UPCGComputeDataInterface>(&local_28);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar5 = UPCGComputeDataInterface::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    pFVar7 = GetTypeName<UPCGComputeDataInterface>(&local_28);
    pwVar9 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar8);
  }
  if (*(longlong *)&param_1[3].field_0x10 != 0) goto LAB_149768cea;
  FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_res8.ObjectPtr);
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[2].field_0x10);
  if (pUVar6 == (UObject *)0x0) {
LAB_149768cc1:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UPCGSettings_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_149768cc1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)&param_1[3].field_0x10 = pUVar6;
  FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_res8.ObjectPtr);
LAB_149768cea:
  TVar2 = (TObjectPtr<UPCGSettings_const_>_u_0)
          *(TObjectPtr<UPCGSettings_const_>_u_0 *)&param_1[3].field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.DebugPtr != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = (UPCGSettings *)TVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.DebugPtr != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  local_res8 = TVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.DebugPtr != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  FSoftObjectPtr::operator=(&(this->ProducerSettings).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->bProducedByCPU = *(bool *)(param_1 + 2);
  this->GraphBindingIndex = *(int *)(param_1 + 1);
  pUVar3 = *(UPCGComputeKernel **)&param_1[2].field_0x8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UPCGComputeKernel *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGComputeKernel *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  (this->ProducerKernel).field0_0x0.DebugPtr = pUVar3;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->DownstreamInputPinLabelAliases,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[1].field_0x18);
  if (this->bProducedByCPU == false) {
    uVar4 = *(undefined4 *)&param_1[1].field_0x8;
    (this->OutputPinLabel).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1[1].field_0x4;
    (this->OutputPinLabel).Number = uVar4;
    uVar4 = *(undefined4 *)&param_1[1].field_0x10;
    (this->OutputPinLabelAlias).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1[1].field_0xc
    ;
    (this->OutputPinLabelAlias).Number = uVar4;
  }
  return;
}

// PerformPreExecuteReadbacks_GameThread @ 14976d5d0

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
UPCGComputeDataProvider::PerformPreExecuteReadbacks_GameThread
          (UPCGComputeDataProvider *this,UPCGDataBinding *param_1)

{
  return true;
}

// PostExecute @ 14976e840

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
UPCGComputeDataProvider::PostExecute(UPCGComputeDataProvider *this,UPCGDataBinding *param_1)

{
  return true;
}

// PrepareForExecute_GameThread @ 14976ec90

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
UPCGComputeDataProvider::PrepareForExecute_GameThread
          (UPCGComputeDataProvider *this,UPCGDataBinding *param_1)

{
  return true;
}

// ReleaseTransientResources @ 149774300

void __thiscall
UPCGComputeDataProvider::ReleaseTransientResources(UPCGComputeDataProvider *this,wchar_t *param_1)

{
  return;
}

// Reset @ 149774710

void __thiscall UPCGComputeDataProvider::Reset(UPCGComputeDataProvider *this)

{
  int *piVar1;
  undefined8 local_res8;
  
  LOCK();
  this->GenerationCounter = (atomic<unsigned___int64>)((longlong)this->GenerationCounter + 1);
  UNLOCK();
  (this->ProducerKernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->ProducerSettings).SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  this->GraphBindingIndex = -1;
  (this->OutputPinLabel).ComparisonIndex = 0;
  (this->OutputPinLabel).Number = 0;
  (this->OutputPinLabelAlias).ComparisonIndex = 0;
  (this->OutputPinLabelAlias).Number = 0;
  piVar1 = &(this->DownstreamInputPinLabelAliases).ArrayMax;
  local_res8 = 0;
  (this->DownstreamInputPinLabelAliases).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->DownstreamInputPinLabelAliases).AllocatorInstance,0,piVar1);
  }
  this->bProducedByCPU = false;
  return;
}

// SetProducerSettings @ 149776b00

void __thiscall
UPCGComputeDataProvider::SetProducerSettings(UPCGComputeDataProvider *this,UPCGSettings *param_1)

{
  UPCGSettings *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&(this->ProducerSettings).SoftObjectPtr,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUPCGComputeDataProvider @ 1497785d0

void __cdecl UPCGComputeDataProvider::StaticRegisterNativesUPCGComputeDataProvider(void)

{
  return;
}

