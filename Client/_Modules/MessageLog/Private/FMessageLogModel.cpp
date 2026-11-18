// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 7

// ~FMessageLogModel @ 142bcc9f0

void __thiscall FMessageLogModel::~FMessageLogModel(FMessageLogModel *this)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FMessageLogModel__6B_;
  if (*(int *)&(this->NameToModelMap).field_0x8 != *(int *)&(this->NameToModelMap).field_0x34) {
    bVar4 = 1 < *(int *)&(this->NameToModelMap).field_0x48;
    if (!bVar4) {
      TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
                        *)&this->NameToModelMap);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&this->NameToModelMap,0,*(int *)&(this->NameToModelMap).field_0x8);
    puVar1 = &(this->NameToModelMap).field_0xc;
    *(undefined4 *)&(this->NameToModelMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&this->NameToModelMap,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->NameToModelMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->NameToModelMap).field_0x34 = 0;
    iVar2 = *(int *)&(this->NameToModelMap).field_0x2c;
    *(undefined4 *)&(this->NameToModelMap).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->NameToModelMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NameToModelMap).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->NameToModelMap).field_0x48 = 1;
      TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
                *)&this->NameToModelMap);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->ChangedEvent);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  *(undefined4 *)&(this->NameToModelMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NameToModelMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToModelMap);
  return;
}

// FindLogListingModel @ 142bf4c20

TSharedPtr<FMessageLogListingModel,1> * __thiscall
FMessageLogModel::FindLogListingModel
          (FMessageLogModel *this,TSharedPtr<FMessageLogListingModel,1> *__return_storage_ptr__,
          FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FMessageLogListingModel,1> *pTVar4;
  
  if (*param_1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogModel.cpp"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FMessageLogListingModel,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = TMapBase<FName,TSharedPtr<FMessageLogListingModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>_>
                   *)&this->NameToModelMap,*param_1);
  if (pTVar4 == (TSharedPtr<FMessageLogListingModel,1> *)0x0) {
    __return_storage_ptr__->Object = (FMessageLogListingModel *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pTVar4->Object;
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetLogListingModel @ 142bfd7a0

TSharedRef<FMessageLogListingModel,1> * __thiscall
FMessageLogModel::GetLogListingModel
          (FMessageLogModel *this,TSharedRef<FMessageLogListingModel,1> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FMessageLogListingModel,1> *pTVar3;
  
  if (*param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogModel.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  RegisterOrGetLogListingModel(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// IsRegisteredLogListingModel @ 142c063a0

bool __thiscall FMessageLogModel::IsRegisteredLogListingModel(FMessageLogModel *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FMessageLogListingModel,1> *pTVar4;
  
  if (*param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogModel.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pTVar4 = TMapBase<FName,TSharedPtr<FMessageLogListingModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>_>
                   *)&this->NameToModelMap,*param_1);
  return pTVar4 != (TSharedPtr<FMessageLogListingModel,1> *)0x0;
}

// Notify @ 142c0a0f0

void __thiscall FMessageLogModel::Notify(FMessageLogModel *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->ChangedEvent);
  return;
}

// RegisterOrGetLogListingModel @ 142c20890

TSharedRef<FMessageLogListingModel,1> * __thiscall
FMessageLogModel::RegisterOrGetLogListingModel
          (FMessageLogModel *this,TSharedRef<FMessageLogListingModel,1> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FMessageLogListingModel,1> *pTVar3;
  TSharedPtr<FMessageLogListingModel,1> *pTVar4;
  FMessageLogListingModel *this_00;
  FMessageLogListingModel *pFVar5;
  FMessageLogListingModel *local_48;
  FSharedReferencer<1> local_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<FMessageLogListingModel,1> local_28;
  FName *local_18;
  FMessageLogListingModel **local_10;
  
  if (*param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogModel.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogModel.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar4 = TMapBase<FName,TSharedPtr<FMessageLogListingModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>_>
                   *)&this->NameToModelMap,*param_1);
  if (pTVar4 == (TSharedPtr<FMessageLogListingModel,1> *)0x0) {
    local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_48 = pTVar4->Object;
    local_40.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_48 != (FMessageLogListingModel *)0x0) goto LAB_142c20a05;
    local_48 = (FMessageLogListingModel *)0x0;
  }
  this_00 = ::operator_new(0x88);
  pFVar5 = (FMessageLogListingModel *)0x0;
  if (this_00 != (FMessageLogListingModel *)0x0) {
    pFVar5 = FMessageLogListingModel::FMessageLogListingModel(this_00,param_1);
  }
  TSharedRef<FMessageLogListingModel,1>::
  TSharedRef<FMessageLogListingModel,1><FMessageLogListingModel>(&local_28,pFVar5);
  local_30.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = local_28.Object;
  local_38 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  local_10 = &local_48;
  local_18 = param_1;
  TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingModel,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
              *)&this->NameToModelMap,
             (TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingModel,1>_const_&> *)
             &stack0x00000008,(bool *)&local_18);
  if (local_48 == (FMessageLogListingModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
LAB_142c20a05:
  __return_storage_ptr__->Object = local_48;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FMessageLogListingModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  return __return_storage_ptr__;
}

// UnregisterLogListingModel @ 142c2a090

bool __thiscall FMessageLogModel::UnregisterLogListingModel(FMessageLogModel *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FName local_res8;
  
  if (*param_1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogModel.cpp"
                       ,0x1e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FVar1 = *param_1;
  if (*(int *)&(this->NameToModelMap).field_0x8 != *(int *)&(this->NameToModelMap).field_0x34) {
    local_res8 = FVar1;
    uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    iVar6 = TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
                                 *)&this->NameToModelMap,FVar1.Number + uVar5,&local_res8);
    if (0 < iVar6) {
      (**(code **)(this->_padding_ + 8))(this);
      return true;
    }
  }
  return false;
}

