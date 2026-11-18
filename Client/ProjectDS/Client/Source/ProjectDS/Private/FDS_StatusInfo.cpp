// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// FDS_StatusInfo @ 14ba319d0

FDS_StatusInfo * __thiscall
FDS_StatusInfo::FDS_StatusInfo(FDS_StatusInfo *this,FDS_StatusInfo *param_1)

{
  TMap<EDS_StatusContentsInfo,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusContentsInfo,int,0>_>
  *pTVar1;
  TMap<EDS_StatusContentsInfo,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusContentsInfo,int,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  
  pTVar1 = &this->ContentsStatusMap;
  this->StatusType = param_1->StatusType;
  pTVar2 = &param_1->ContentsStatusMap;
  this->OriginValue = param_1->OriginValue;
  this->MaxValue = param_1->MaxValue;
  this->CurrentValue = param_1->CurrentValue;
  this->bIsDirty = param_1->bIsDirty;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ContentsStatusMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContentsStatusMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContentsStatusMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContentsStatusMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentsStatusMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContentsStatusMap).field_0x34 = 0;
  *(undefined8 *)&(this->ContentsStatusMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentsStatusMap).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->ContentsStatusMap).field_0x10;
    *(undefined4 *)&(this->ContentsStatusMap).field_0x8 =
         *(undefined4 *)&(param_1->ContentsStatusMap).field_0x8;
    _Src = &(param_1->ContentsStatusMap).field_0x10;
    *(undefined4 *)&(this->ContentsStatusMap).field_0xc =
         *(undefined4 *)&(param_1->ContentsStatusMap).field_0xc;
    *(undefined8 *)&(param_1->ContentsStatusMap).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->ContentsStatusMap).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->ContentsStatusMap).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->ContentsStatusMap).field_0x20 =
           *(undefined8 *)&(param_1->ContentsStatusMap).field_0x20;
      *(undefined8 *)&(param_1->ContentsStatusMap).field_0x20 = 0;
      *(undefined4 *)&(this->ContentsStatusMap).field_0x28 =
           *(undefined4 *)&(param_1->ContentsStatusMap).field_0x28;
      *(undefined4 *)&(this->ContentsStatusMap).field_0x2c =
           *(undefined4 *)&(param_1->ContentsStatusMap).field_0x2c;
      *(undefined8 *)&(param_1->ContentsStatusMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->ContentsStatusMap).field_0x30 =
         *(undefined4 *)&(param_1->ContentsStatusMap).field_0x30;
    *(undefined4 *)&(this->ContentsStatusMap).field_0x34 =
         *(undefined4 *)&(param_1->ContentsStatusMap).field_0x34;
    *(undefined4 *)&(param_1->ContentsStatusMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ContentsStatusMap).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->ContentsStatusMap).field_0x40 == 0) {
    *(undefined4 *)&(this->ContentsStatusMap).field_0x38 =
         *(undefined4 *)&(param_1->ContentsStatusMap).field_0x38;
  }
  pvVar3 = *(void **)&(this->ContentsStatusMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->ContentsStatusMap).field_0x40 =
       *(undefined8 *)&(param_1->ContentsStatusMap).field_0x40;
  *(undefined8 *)&(param_1->ContentsStatusMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentsStatusMap).field_0x48 =
       *(undefined4 *)&(param_1->ContentsStatusMap).field_0x48;
  *(undefined4 *)&(param_1->ContentsStatusMap).field_0x48 = 0;
  this->bIsUpdatedContentsStatus = param_1->bIsUpdatedContentsStatus;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangeOriginValueDelegate,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &param_1->ChangeOriginValueDelegate);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangeMaxValueDelegate,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->ChangeMaxValueDelegate)
  ;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangeCurrentValueDelegate
             ,(TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              &param_1->ChangeCurrentValueDelegate);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangeStatusDelegate,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->ChangeStatusDelegate);
  return this;
}

// ~FDS_StatusInfo @ 14ba33b10

void __thiscall FDS_StatusInfo::~FDS_StatusInfo(FDS_StatusInfo *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeStatusDelegate).field_0x8,
             *(int *)&(this->ChangeStatusDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeStatusDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeStatusDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeCurrentValueDelegate).field_0x8,
             *(int *)&(this->ChangeCurrentValueDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeCurrentValueDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeCurrentValueDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeMaxValueDelegate).field_0x8,
             *(int *)&(this->ChangeMaxValueDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeMaxValueDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeMaxValueDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeOriginValueDelegate).field_0x8,
             *(int *)&(this->ChangeOriginValueDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeOriginValueDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeOriginValueDelegate);
  *(undefined4 *)&(this->ContentsStatusMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContentsStatusMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusContentsInfo,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusContentsInfo,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ContentsStatusMap);
  return;
}

