// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149729a30

UClass * __cdecl UPCGExportableDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExportableDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExportableDataProvider",
               &Z_Registration_Info_UClass_UPCGExportableDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGExportableDataProvider,0xd8,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPCGExportableDataProvider>,
               InternalVTableHelperCtorCaller<UPCGExportableDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExportableDataProvider.InnerSingleton;
}

// UPCGExportableDataProvider @ 14973ba80

UPCGExportableDataProvider * __thiscall
UPCGExportableDataProvider::UPCGExportableDataProvider
          (UPCGExportableDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->ExportMode = NoExport;
  this->_padding_ = (longlong)&___7UPCGExportableDataProvider__6B_;
  *(undefined8 *)&this->OnDataExported = 0;
  *(undefined8 *)&(this->OnDataExported).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataExported).field_0x10 = 0;
  (this->Binding).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PinDataDescription).Object = (FPCGDataCollectionDesc *)0x0;
  (this->PinDataDescription).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->OnDataExported).field_0x18 = 2;
  return this;
}

// UPCGExportableDataProvider @ 14973baf0

UPCGExportableDataProvider * __thiscall
UPCGExportableDataProvider::UPCGExportableDataProvider
          (UPCGExportableDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->ExportMode = NoExport;
  this->_padding_ = (longlong)&___7UPCGExportableDataProvider__6B_;
  *(undefined8 *)&this->OnDataExported = 0;
  *(undefined8 *)&(this->OnDataExported).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataExported).field_0x10 = 0;
  (this->Binding).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PinDataDescription).Object = (FPCGDataCollectionDesc *)0x0;
  (this->PinDataDescription).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->OnDataExported).field_0x18 = 2;
  return this;
}

// ~UPCGExportableDataProvider @ 14973e160

void __thiscall
UPCGExportableDataProvider::~UPCGExportableDataProvider(UPCGExportableDataProvider *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGExportableDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinDataDescription).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDataExported).field_0x8,*(int *)&(this->OnDataExported).field_0x10);
  pvVar1 = *(void **)&(this->OnDataExported).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataExported);
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14975bd40

UClass * __cdecl UPCGExportableDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExportableDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExportableDataProvider",
               &Z_Registration_Info_UClass_UPCGExportableDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGExportableDataProvider,0xd8,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPCGExportableDataProvider>,
               InternalVTableHelperCtorCaller<UPCGExportableDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExportableDataProvider.InnerSingleton;
}

// Initialize @ 1497698f0

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
UPCGExportableDataProvider::Initialize
          (UPCGExportableDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  UPCGDataBinding *local_res10;
  FString local_28;
  FString local_18;
  
  UPCGComputeDataProvider::Initialize
            ((UPCGComputeDataProvider *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGExportableDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGExportableDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    local_res10 = CastChecked<UPCGDataBinding,UObject>(param_2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10 != (UPCGDataBinding *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    FWeakObjectPtr::operator=(&(this->Binding).WeakPtr,(FObjectPtr)&local_res10);
    this->ExportMode = param_1[3].field_0x18 != '\0';
    return;
  }
  pFVar3 = GetTypeName<UPCGExportableDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// PrepareForExecute_GameThread @ 149770b70

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
UPCGExportableDataProvider::PrepareForExecute_GameThread
          (UPCGExportableDataProvider *this,UPCGDataBinding *param_1)

{
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar5;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_18;
  
  if (param_1 == (UPCGDataBinding *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBinding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGComputeDataInterface.cpp"
                       ,0xd1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar1 = &this->PinDataDescription;
  if (pTVar1->Object == (FPCGDataCollectionDesc *)0x0) {
    pTVar5 = UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_18,(int)this->_padding_);
    if (pTVar1 != pTVar5) {
      pTVar1->Object = pTVar5->Object;
      pTVar5->Object = (FPCGDataCollectionDesc *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PinDataDescription).SharedReferenceCount,&pTVar5->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return true;
}

// Reset @ 149774a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UPCGExportableDataProvider::Reset(UPCGExportableDataProvider *this)

{
  undefined1 *puVar1;
  FOnDataExported *this_00;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  ForAnyElementType FVar10;
  int iVar11;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88 [2];
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_48;
  
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  uVar5 = _UNK_150631d48;
  uVar3 = ___xmm_00000000000000020000000000000000;
  this->ExportMode = NoExport;
  uVar6 = _UNK_150631d48;
  uVar4 = ___xmm_00000000000000020000000000000000;
  this_00 = &this->OnDataExported;
  local_48._padding_ = 0;
  local_48.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ___xmm_00000000000000020000000000000000 = (int)uVar3;
  _UNK_150631d44 = SUB84(uVar3,4);
  local_48.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_48.InvocationList.ArrayMax = _UNK_150631d44;
  _UNK_150631d48 = (int)uVar5;
  _UNK_150631d4c = SUB84(uVar5,4);
  local_48.CompactionThreshold = _UNK_150631d48;
  local_48.InvocationListLockCount = _UNK_150631d4c;
  ___xmm_00000000000000020000000000000000 = uVar4;
  _UNK_150631d48 = uVar6;
  if (&local_48 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_48,
               (FWriteAccessScope *)&local_78);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0,0);
    FVar10.Data = local_48.InvocationList.AllocatorInstance.Data;
    iVar11 = local_48.InvocationList.ArrayNum;
    iVar7 = local_48.InvocationList.ArrayMax;
    iVar8 = local_48.CompactionThreshold;
    local_48.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.InvocationList.ArrayNum = 0;
    local_48.InvocationList.ArrayMax = 0;
    local_48.CompactionThreshold = 2;
    if ((local_48.InvocationListLockCount != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Other.InvocationListLockCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                           ,0x3f,L"Moving from a multicast delegate while it is mid broadcast"),
       bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    puVar1 = &(this->OnDataExported).field_0x8;
    if ((undefined8 *)puVar1 != local_88) {
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)puVar1,
                 *(int *)&(this->OnDataExported).field_0x10);
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = FVar10.Data;
      FVar10.Data = (FScriptContainerElement *)0x0;
      *(int *)&(this->OnDataExported).field_0x10 = iVar11;
      *(int *)&(this->OnDataExported).field_0x14 = iVar7;
      iVar11 = 0;
    }
    *(int *)&(this->OnDataExported).field_0x18 = iVar8;
    if ((*(int *)&(this->OnDataExported).field_0x1c != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InvocationListLockCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                           ,0x48,L"Moving to a multicast delegate while it is mid broadcast"), bVar9
       )) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)FVar10.Data,iVar11);
    if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)FVar10.Data !=
        (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_48.InvocationList.AllocatorInstance.Data,local_48.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_48.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_48.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_48);
  (this->Binding).WeakPtr = (FWeakObjectPtr)0x0;
  local_98 = 0;
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PinDataDescription != (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)&local_98) {
    (this->PinDataDescription).Object = (FPCGDataCollectionDesc *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PinDataDescription).SharedReferenceCount,&FStack_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  return;
}

// StaticRegisterNativesUPCGExportableDataProvider @ 149778750

void __cdecl UPCGExportableDataProvider::StaticRegisterNativesUPCGExportableDataProvider(void)

{
  return;
}

