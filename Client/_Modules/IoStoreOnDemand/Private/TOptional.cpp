// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 4

// Emplace<UE::IoStore::FOnDemandMountArgs> @ 144597af0

FOnDemandMountArgs * __thiscall
TOptional<UE::IoStore::FOnDemandMountArgs>::Emplace<UE::IoStore::FOnDemandMountArgs>
          (TOptional<UE::IoStore::FOnDemandMountArgs> *this,FOnDemandMountArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (this->bIsSet != false) {
    UE::IoStore::FOnDemandMountArgs::~FOnDemandMountArgs(&this->TypedValue);
  }
  (this->TypedValue).Toc.Ptr = (param_1->Toc).Ptr;
  (param_1->Toc).Ptr = (FOnDemandToc *)0x0;
  (this->TypedValue).MountId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).MountId.Data.AllocatorInstance.Data =
       (param_1->MountId).Data.AllocatorInstance.Data;
  (param_1->MountId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).MountId.Data.ArrayNum = (param_1->MountId).Data.ArrayNum;
  (this->TypedValue).MountId.Data.ArrayMax = (param_1->MountId).Data.ArrayMax;
  (param_1->MountId).Data.ArrayNum = 0;
  (param_1->MountId).Data.ArrayMax = 0;
  (this->TypedValue).TocRelativeUrl.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).TocRelativeUrl.Data.AllocatorInstance.Data =
       (param_1->TocRelativeUrl).Data.AllocatorInstance.Data;
  (param_1->TocRelativeUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).TocRelativeUrl.Data.ArrayNum = (param_1->TocRelativeUrl).Data.ArrayNum;
  (this->TypedValue).TocRelativeUrl.Data.ArrayMax = (param_1->TocRelativeUrl).Data.ArrayMax;
  (param_1->TocRelativeUrl).Data.ArrayNum = 0;
  (param_1->TocRelativeUrl).Data.ArrayMax = 0;
  (this->TypedValue).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).FilePath.Data.AllocatorInstance.Data =
       (param_1->FilePath).Data.AllocatorInstance.Data;
  (param_1->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).FilePath.Data.ArrayNum = (param_1->FilePath).Data.ArrayNum;
  (this->TypedValue).FilePath.Data.ArrayMax = (param_1->FilePath).Data.ArrayMax;
  (param_1->FilePath).Data.ArrayNum = 0;
  (param_1->FilePath).Data.ArrayMax = 0;
  (this->TypedValue).HostGroupName = param_1->HostGroupName;
  (this->TypedValue).HostGroup.Impl.Object = (param_1->HostGroup).Impl.Object;
  pTVar1 = (param_1->HostGroup).Impl.SharedReferenceCount.ReferenceController;
  (this->TypedValue).HostGroup.Impl.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->TypedValue).Options = param_1->Options;
  this->bIsSet = true;
  return &this->TypedValue;
}

// ~TOptional<UE::UnifiedError::FError> @ 1445a7100

void __thiscall
TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>
          (TOptional<UE::UnifiedError::FError> *this)

{
  IErrorDetails *pIVar1;
  
  if (this->bIsSet != false) {
    (this->TypedValue).ErrorCode = 0;
    (this->TypedValue).ModuleId = 0;
    pIVar1 = (this->TypedValue).ErrorDetails.Reference;
    if (pIVar1 != (IErrorDetails *)0x0) {
      (this->TypedValue).ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pIVar1 = (this->TypedValue).ErrorDetails.Reference;
    if (pIVar1 != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445a7138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar1 + 0x10))();
      return;
    }
  }
  return;
}

// operator= @ 1445a99b0

TOptional<UE::UnifiedError::FError> * __thiscall
TOptional<UE::UnifiedError::FError>::operator=
          (TOptional<UE::UnifiedError::FError> *this,TOptional<UE::UnifiedError::FError> *param_1)

{
  IErrorDetails *pIVar1;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        (this->TypedValue).ErrorCode = 0;
        (this->TypedValue).ModuleId = 0;
        pIVar1 = (this->TypedValue).ErrorDetails.Reference;
        if (pIVar1 != (IErrorDetails *)0x0) {
          (this->TypedValue).ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        pIVar1 = (this->TypedValue).ErrorDetails.Reference;
        if (pIVar1 != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
      }
      UE::UnifiedError::FError::FError(&this->TypedValue,&param_1->TypedValue);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      (this->TypedValue).ErrorCode = 0;
      (this->TypedValue).ModuleId = 0;
      pIVar1 = (this->TypedValue).ErrorDetails.Reference;
      if (pIVar1 != (IErrorDetails *)0x0) {
        (this->TypedValue).ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (this->TypedValue).ErrorDetails.Reference;
      if (pIVar1 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      this->bIsSet = false;
    }
  }
  return this;
}

// GetValue @ 1445d92d0

FError * __thiscall
TOptional<UE::UnifiedError::FError>::GetValue(TOptional<UE::UnifiedError::FError> *this)

{
  code *pcVar1;
  bool bVar2;
  FError *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FError *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

