// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 82

// FCasLocation> @ 144594340

FArchive * __cdecl
operator<<<UE::THash<96>,UE::IoStore::FCasLocation>
          (FArchive *param_1,TTuple<UE::THash<96>,UE::IoStore::FCasLocation> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0xc);
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0xc,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0xc);
    }
  }
  else {
    *(undefined4 *)&param_2->field_0xc = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x10;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// DereferenceIfNecessary<UE::IoStore::FOnDemandDebugCommands,UE::IoStore::FOnDemandDebugCommands_*_&> @ 144596670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandDebugCommands * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::IoStore::FOnDemandDebugCommands,UE::IoStore::FOnDemandDebugCommands_*_&>
          (FOnDemandDebugCommands **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::IoStore::FOnDemandIoBackendStats,UE::IoStore::FOnDemandIoBackendStats_*_&> @ 144596690

FOnDemandIoBackendStats * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::IoStore::FOnDemandIoBackendStats,UE::IoStore::FOnDemandIoBackendStats_*_&>
          (FOnDemandIoBackendStats **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::IoStore::FOnDemandIoStore,UE::IoStore::FOnDemandIoStore_*_&> @ 1445966b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandIoStore * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::IoStore::FOnDemandIoStore,UE::IoStore::FOnDemandIoStore_*_&>
          (FOnDemandIoStore **param_1)

{
  return *param_1;
}

// MakeCasError<TSharedPtr<IFileHandle,1>_> @ 14459e890

TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> * __cdecl
UE::UnifiedError::IoStoreOnDemand::MakeCasError<TSharedPtr<IFileHandle,1>_>
          (TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *__return_storage_ptr__
          ,ECasErrorCode param_1,EIoErrorCode param_2,FString *param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  IErrorDetails *pIVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  int iVar6;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar7;
  FDynamicErrorDetails *this;
  FScriptContainerElement *pFVar8;
  FDynamicErrorDetails *local_res8;
  ECasErrorCode local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  FError local_78 [2];
  undefined8 local_58 [3];
  
  pFVar8 = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_3->Data).ArrayNum;
  iVar3 = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  local_res10[0] = param_1;
  TVar7 = CasError::GetStaticErrorDetails();
  pIVar4 = (IErrorDetails *)(TVar7.Reference)->_padding_;
  if (pIVar4 == (IErrorDetails *)0x0) {
    iVar6 = CasError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    local_78[0].ErrorCode = iVar6;
  }
  else {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    iVar6 = CasError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorCode = iVar6;
    local_78[0].ErrorDetails.Reference = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  }
  this = ::operator_new(0x48);
  if (this == (FDynamicErrorDetails *)0x0) {
    local_res8 = (FDynamicErrorDetails *)0x0;
  }
  else {
    local_res20 = 0;
    FDynamicErrorDetails::FDynamicErrorDetails(this,(IErrorDetails *)&local_res20);
    plVar1 = &this[1]._padding_;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__UE__UnifiedError__IErrorDetails__;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__FRefCountBase__;
    *plVar1 = 0;
    this[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
    *(undefined1 *)&this[2]._padding_ = 5;
    *(ECasErrorCode *)&this[1]._padding_ = local_res10[0];
    *(uint *)&this[1]._padding_ = param_4;
    *(EIoErrorCode *)((longlong)&this[1]._padding_ + 4) = param_2;
    if (plVar1 != local_58) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)pFVar8;
      pFVar8 = (FScriptContainerElement *)0x0;
      *(int *)&this[1].InnerErrorDetails.Reference = iVar2;
      *(int *)((longlong)&this[1].InnerErrorDetails.Reference + 4) = iVar3;
    }
    *(undefined1 *)&this[2]._padding_ = 0xff;
    local_res8 = this;
    (**(code **)(this->_padding_ + 8))(this,local_res10);
  }
  FError::PushErrorDetails(local_78,(IErrorDetails *)&local_res8);
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_78[0].ErrorCode;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_78[0].ModuleId;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_78[0].ErrorDetails.Reference;
    (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 8))
              (local_78[0].ErrorDetails.Reference,local_res10);
    TVar5.Reference = local_78[0].ErrorDetails.Reference;
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
    }
  }
  TVar5.Reference = local_78[0].ErrorDetails.Reference;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 0x10))();
    }
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return __return_storage_ptr__;
}

// MakeCasError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>_> @ 14459ea70

TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError> *
__cdecl UE::UnifiedError::IoStoreOnDemand::
        MakeCasError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>_>
                  (TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>
                   *__return_storage_ptr__,ECasErrorCode param_1,EIoErrorCode param_2,
                  FString *param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  IErrorDetails *pIVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  int iVar6;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar7;
  FDynamicErrorDetails *this;
  FScriptContainerElement *pFVar8;
  FDynamicErrorDetails *local_res8;
  ECasErrorCode local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  FError local_78 [2];
  undefined8 local_58 [3];
  
  pFVar8 = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_3->Data).ArrayNum;
  iVar3 = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  local_res10[0] = param_1;
  TVar7 = CasError::GetStaticErrorDetails();
  pIVar4 = (IErrorDetails *)(TVar7.Reference)->_padding_;
  if (pIVar4 == (IErrorDetails *)0x0) {
    iVar6 = CasError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    local_78[0].ErrorCode = iVar6;
  }
  else {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    iVar6 = CasError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorCode = iVar6;
    local_78[0].ErrorDetails.Reference = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  }
  this = ::operator_new(0x48);
  if (this == (FDynamicErrorDetails *)0x0) {
    local_res8 = (FDynamicErrorDetails *)0x0;
  }
  else {
    local_res20 = 0;
    FDynamicErrorDetails::FDynamicErrorDetails(this,(IErrorDetails *)&local_res20);
    plVar1 = &this[1]._padding_;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__UE__UnifiedError__IErrorDetails__;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__FRefCountBase__;
    *plVar1 = 0;
    this[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
    *(undefined1 *)&this[2]._padding_ = 5;
    *(ECasErrorCode *)&this[1]._padding_ = local_res10[0];
    *(uint *)&this[1]._padding_ = param_4;
    *(EIoErrorCode *)((longlong)&this[1]._padding_ + 4) = param_2;
    if (plVar1 != local_58) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)pFVar8;
      pFVar8 = (FScriptContainerElement *)0x0;
      *(int *)&this[1].InnerErrorDetails.Reference = iVar2;
      *(int *)((longlong)&this[1].InnerErrorDetails.Reference + 4) = iVar3;
    }
    *(undefined1 *)&this[2]._padding_ = 0xff;
    local_res8 = this;
    (**(code **)(this->_padding_ + 8))(this,local_res10);
  }
  FError::PushErrorDetails(local_78,(IErrorDetails *)&local_res8);
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_78[0].ErrorCode;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_78[0].ModuleId;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_78[0].ErrorDetails.Reference;
    (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 8))
              (local_78[0].ErrorDetails.Reference,local_res10);
    TVar5.Reference = local_78[0].ErrorDetails.Reference;
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
    }
  }
  TVar5.Reference = local_78[0].ErrorDetails.Reference;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 0x10))();
    }
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return __return_storage_ptr__;
}

// MakeCasError<void> @ 14459ec50

TValueOrError<void,UE::UnifiedError::FError> * __cdecl
UE::UnifiedError::IoStoreOnDemand::MakeCasError<void>
          (TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          ECasErrorCode param_1,EIoErrorCode param_2,FString *param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  IErrorDetails *pIVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  int iVar6;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar7;
  FDynamicErrorDetails *this;
  FScriptContainerElement *pFVar8;
  FDynamicErrorDetails *local_res8;
  ECasErrorCode local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  FError local_78 [2];
  undefined8 local_58 [3];
  
  pFVar8 = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_3->Data).ArrayNum;
  iVar3 = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  local_res10[0] = param_1;
  TVar7 = CasError::GetStaticErrorDetails();
  pIVar4 = (IErrorDetails *)(TVar7.Reference)->_padding_;
  if (pIVar4 == (IErrorDetails *)0x0) {
    iVar6 = CasError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    local_78[0].ErrorCode = iVar6;
  }
  else {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    iVar6 = CasError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorCode = iVar6;
    local_78[0].ErrorDetails.Reference = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  }
  this = ::operator_new(0x48);
  if (this == (FDynamicErrorDetails *)0x0) {
    local_res8 = (FDynamicErrorDetails *)0x0;
  }
  else {
    local_res20 = 0;
    FDynamicErrorDetails::FDynamicErrorDetails(this,(IErrorDetails *)&local_res20);
    plVar1 = &this[1]._padding_;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__UE__UnifiedError__IErrorDetails__;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__FRefCountBase__;
    *plVar1 = 0;
    this[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
    *(undefined1 *)&this[2]._padding_ = 5;
    *(ECasErrorCode *)&this[1]._padding_ = local_res10[0];
    *(uint *)&this[1]._padding_ = param_4;
    *(EIoErrorCode *)((longlong)&this[1]._padding_ + 4) = param_2;
    if (plVar1 != local_58) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)pFVar8;
      pFVar8 = (FScriptContainerElement *)0x0;
      *(int *)&this[1].InnerErrorDetails.Reference = iVar2;
      *(int *)((longlong)&this[1].InnerErrorDetails.Reference + 4) = iVar3;
    }
    *(undefined1 *)&this[2]._padding_ = 0xff;
    local_res8 = this;
    (**(code **)(this->_padding_ + 8))(this,local_res10);
  }
  FError::PushErrorDetails(local_78,(IErrorDetails *)&local_res8);
  (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_78[0].ErrorCode;
  (__return_storage_ptr__->Error).TypedValue.ModuleId = local_78[0].ModuleId;
  (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
         local_78[0].ErrorDetails.Reference;
    (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 8))
              (local_78[0].ErrorDetails.Reference,local_res10);
    TVar5.Reference = local_78[0].ErrorDetails.Reference;
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
    }
  }
  TVar5.Reference = local_78[0].ErrorDetails.Reference;
  (__return_storage_ptr__->Error).bIsSet = true;
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 0x10))();
    }
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return __return_storage_ptr__;
}

// MakeError<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> @ 14459ee30

FError * __cdecl
UE::UnifiedError::IoStoreOnDemand::CasError::
MakeError<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>
          (FError *__return_storage_ptr__,FCasErrorContext *param_1,EDetailFilter param_2)

{
  IErrorDetails *pIVar1;
  int iVar2;
  int iVar3;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar4;
  undefined1 local_res8 [8];
  EDetailFilter local_res18 [16];
  
  local_res18[0] = param_2;
  TVar4 = GetStaticErrorDetails();
  pIVar1 = (IErrorDetails *)(TVar4.Reference)->_padding_;
  if (pIVar1 == (IErrorDetails *)0x0) {
    iVar2 = GetErrorCodeId();
    iVar3 = GetStaticModuleId();
    __return_storage_ptr__->ModuleId = iVar3;
    (__return_storage_ptr__->ErrorDetails).Reference = (IErrorDetails *)0x0;
    __return_storage_ptr__->ErrorCode = iVar2;
  }
  else {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    iVar2 = GetErrorCodeId();
    iVar3 = GetStaticModuleId();
    (__return_storage_ptr__->ErrorDetails).Reference = (IErrorDetails *)0x0;
    __return_storage_ptr__->ModuleId = iVar3;
    (__return_storage_ptr__->ErrorDetails).Reference = pIVar1;
    __return_storage_ptr__->ErrorCode = iVar2;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  }
  FError::PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>
            (__return_storage_ptr__,param_1,local_res18);
  return __return_storage_ptr__;
}

// MakeError<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> @ 14459eee0

FError * __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::
MakeError<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
          (FError *__return_storage_ptr__,FInstallCacheErrorContext *param_1,EDetailFilter param_2)

{
  IErrorDetails *pIVar1;
  int iVar2;
  int iVar3;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar4;
  undefined1 local_res8 [8];
  EDetailFilter local_res18 [16];
  
  local_res18[0] = param_2;
  TVar4 = GetStaticErrorDetails();
  pIVar1 = (IErrorDetails *)(TVar4.Reference)->_padding_;
  if (pIVar1 == (IErrorDetails *)0x0) {
    iVar2 = GetErrorCodeId();
    iVar3 = GetStaticModuleId();
    __return_storage_ptr__->ModuleId = iVar3;
    (__return_storage_ptr__->ErrorDetails).Reference = (IErrorDetails *)0x0;
    __return_storage_ptr__->ErrorCode = iVar2;
  }
  else {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    iVar2 = GetErrorCodeId();
    iVar3 = GetStaticModuleId();
    (__return_storage_ptr__->ErrorDetails).Reference = (IErrorDetails *)0x0;
    __return_storage_ptr__->ModuleId = iVar3;
    (__return_storage_ptr__->ErrorDetails).Reference = pIVar1;
    __return_storage_ptr__->ErrorCode = iVar2;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  }
  FError::PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
            (__return_storage_ptr__,param_1,local_res18);
  return __return_storage_ptr__;
}

// MakeSnapshotError<UE::IoStore::FCasSnapshot> @ 14459ef90

TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> * __cdecl
UE::UnifiedError::IoStoreOnDemand::MakeSnapshotError<UE::IoStore::FCasSnapshot>
          (TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> *__return_storage_ptr__
          ,ECasErrorCode param_1,EIoErrorCode param_2,FString *param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  IErrorDetails *pIVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  int iVar6;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar7;
  FDynamicErrorDetails *this;
  FScriptContainerElement *pFVar8;
  FDynamicErrorDetails *local_res8;
  ECasErrorCode local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  FError local_78 [2];
  undefined8 local_58 [3];
  
  pFVar8 = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_3->Data).ArrayNum;
  iVar3 = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  local_res10[0] = param_1;
  TVar7 = CasSnapshotError::GetStaticErrorDetails();
  pIVar4 = (IErrorDetails *)(TVar7.Reference)->_padding_;
  if (pIVar4 == (IErrorDetails *)0x0) {
    iVar6 = CasSnapshotError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    local_78[0].ErrorCode = iVar6;
  }
  else {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    iVar6 = CasSnapshotError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorCode = iVar6;
    local_78[0].ErrorDetails.Reference = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  }
  this = ::operator_new(0x48);
  if (this == (FDynamicErrorDetails *)0x0) {
    local_res8 = (FDynamicErrorDetails *)0x0;
  }
  else {
    local_res20 = 0;
    FDynamicErrorDetails::FDynamicErrorDetails(this,(IErrorDetails *)&local_res20);
    plVar1 = &this[1]._padding_;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__UE__UnifiedError__IErrorDetails__;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__FRefCountBase__;
    *plVar1 = 0;
    this[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
    *(undefined1 *)&this[2]._padding_ = 5;
    *(ECasErrorCode *)&this[1]._padding_ = local_res10[0];
    *(uint *)&this[1]._padding_ = param_4;
    *(EIoErrorCode *)((longlong)&this[1]._padding_ + 4) = param_2;
    if (plVar1 != local_58) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)pFVar8;
      pFVar8 = (FScriptContainerElement *)0x0;
      *(int *)&this[1].InnerErrorDetails.Reference = iVar2;
      *(int *)((longlong)&this[1].InnerErrorDetails.Reference + 4) = iVar3;
    }
    *(undefined1 *)&this[2]._padding_ = 5;
    local_res8 = this;
    (**(code **)(this->_padding_ + 8))(this,local_res10);
  }
  FError::PushErrorDetails(local_78,(IErrorDetails *)&local_res8);
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_78[0].ErrorCode;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_78[0].ModuleId;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_78[0].ErrorDetails.Reference;
    (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 8))
              (local_78[0].ErrorDetails.Reference,local_res10);
    TVar5.Reference = local_78[0].ErrorDetails.Reference;
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
    }
  }
  TVar5.Reference = local_78[0].ErrorDetails.Reference;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 0x10))();
    }
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return __return_storage_ptr__;
}

// MakeSnapshotError<__int64> @ 14459f170

TValueOrError<__int64,UE::UnifiedError::FError> * __cdecl
UE::UnifiedError::IoStoreOnDemand::MakeSnapshotError<__int64>
          (TValueOrError<__int64,UE::UnifiedError::FError> *__return_storage_ptr__,
          ECasErrorCode param_1,EIoErrorCode param_2,FString *param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  IErrorDetails *pIVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  int iVar6;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar7;
  FDynamicErrorDetails *this;
  FScriptContainerElement *pFVar8;
  FDynamicErrorDetails *local_res8;
  ECasErrorCode local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  FError local_78 [2];
  undefined8 local_58 [3];
  
  pFVar8 = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_3->Data).ArrayNum;
  iVar3 = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  local_res10[0] = param_1;
  TVar7 = CasSnapshotError::GetStaticErrorDetails();
  pIVar4 = (IErrorDetails *)(TVar7.Reference)->_padding_;
  if (pIVar4 == (IErrorDetails *)0x0) {
    iVar6 = CasSnapshotError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    local_78[0].ErrorCode = iVar6;
  }
  else {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    iVar6 = CasSnapshotError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorCode = iVar6;
    local_78[0].ErrorDetails.Reference = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  }
  this = ::operator_new(0x48);
  if (this == (FDynamicErrorDetails *)0x0) {
    local_res8 = (FDynamicErrorDetails *)0x0;
  }
  else {
    local_res20 = 0;
    FDynamicErrorDetails::FDynamicErrorDetails(this,(IErrorDetails *)&local_res20);
    plVar1 = &this[1]._padding_;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__UE__UnifiedError__IErrorDetails__;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__FRefCountBase__;
    *plVar1 = 0;
    this[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
    *(undefined1 *)&this[2]._padding_ = 5;
    *(ECasErrorCode *)&this[1]._padding_ = local_res10[0];
    *(uint *)&this[1]._padding_ = param_4;
    *(EIoErrorCode *)((longlong)&this[1]._padding_ + 4) = param_2;
    if (plVar1 != local_58) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)pFVar8;
      pFVar8 = (FScriptContainerElement *)0x0;
      *(int *)&this[1].InnerErrorDetails.Reference = iVar2;
      *(int *)((longlong)&this[1].InnerErrorDetails.Reference + 4) = iVar3;
    }
    *(undefined1 *)&this[2]._padding_ = 5;
    local_res8 = this;
    (**(code **)(this->_padding_ + 8))(this,local_res10);
  }
  FError::PushErrorDetails(local_78,(IErrorDetails *)&local_res8);
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_78[0].ErrorCode;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_78[0].ModuleId;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_78[0].ErrorDetails.Reference;
    (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 8))
              (local_78[0].ErrorDetails.Reference,local_res10);
    TVar5.Reference = local_78[0].ErrorDetails.Reference;
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
    }
  }
  TVar5.Reference = local_78[0].ErrorDetails.Reference;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 0x10))();
    }
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return __return_storage_ptr__;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 14459f830

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>_> @ 14459f900

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
    ::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>_> @ 14459f9d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>_>
          (uint param_1,uint param_2,
          ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 14459fa90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator<< @ 1445aa080

TStringBuilderBase<wchar_t> * __cdecl
UE::IoStore::operator<<(TStringBuilderBase<wchar_t> *param_1,EFlags param_2)

{
  bool bVar1;
  
  if (param_2 == None) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"None",4);
    return param_1;
  }
  bVar1 = (param_2 & CacheEnabled) == None;
  if (!bVar1) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"CacheEnabled",0xc);
  }
  if ((param_2 & HttpEnabled) != None) {
    if (!bVar1) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L'|';
      param_1->CurPos = param_1->CurPos + 1;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"HttpEnabled",0xb);
    bVar1 = false;
  }
  if ((param_2 & HttpBulkOptionalDisabled) != None) {
    if (!bVar1) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L'|';
      param_1->CurPos = param_1->CurPos + 1;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"HttpBulkOptionalDisabled",0x18);
  }
  return param_1;
}

// operator<< @ 1445aa180

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FBlock *param_2)

{
  long64 *plVar1;
  uint *puVar2;
  long64 *plVar3;
  
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    (param_2->BlockId).Id = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar1 = &param_2->LastAccess;
  plVar3 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar3 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *plVar1 = *plVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar1);
  return param_1;
}

// operator<< @ 1445aa250

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FCasBlockId *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Id = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&param_2->Id);
  return param_1;
}

// operator() @ 1445acb70

bool __thiscall
`UE::IoStore::TrackCdnCacheStats'::__l2::<lambda_1>::operator()
          (void *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  TStringView<char8_t> local_48;
  TStringView<char8_t> local_38;
  
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  if (iVar3 != 0) {
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,"CF-Cache-Status",(longlong)iVar3);
    if ((iVar2 == 0) && ("CF-Cache-Status"[iVar3] == '\0')) goto LAB_1445acc46;
  }
  iVar3 = param_1->Size;
  lVar4 = (longlong)iVar3;
  pcVar1 = param_1->DataPtr;
  iVar2 = iVar3;
  if (2 < iVar3) {
    iVar2 = 2;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  if (iVar5 != 2) {
    return true;
  }
  iVar2 = FGenericPlatformStricmp::Strnicmp("X-",pcVar1,2);
  if (iVar2 != 0) {
    return true;
  }
  if (6 < iVar3) {
    iVar3 = 6;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  if (iVar2 != 6) {
    return true;
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp("-Cache",pcVar1 + (lVar4 - iVar2),6);
  if (iVar3 != 0) {
    return true;
  }
LAB_1445acc46:
  iVar3 = param_2->Size;
  local_48.Size = 3;
  local_38.Size = 0;
  if (0 < iVar3) {
    local_38.Size = iVar3;
  }
  local_48.DataPtr = "HIT";
  local_38.DataPtr = (uchar *)(param_2->DataPtr + ((longlong)iVar3 - (longlong)local_38.Size));
  iVar3 = UE::String::FindFirst(&local_38,&local_48,IgnoreCase);
  if (iVar3 == -1) {
    iVar3 = -1;
  }
  **(byte **)this = (byte)((uint)iVar3 >> 0x1f) ^ 1;
  return true;
}

// operator() @ 1445ae740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::IoStore::LatencyTest'::__l26::<lambda_1>::operator()(void *this,FTicketStatus *param_1)

{
  EId EVar1;
  EStatusCodeClass EVar2;
  FResponse *this_00;
  uint local_res18 [4];
  FError local_18;
  
  EVar1 = UE::IoStore::HTTP::FTicketStatus::GetId(param_1);
  if (EVar1 == Error) {
    UE::IoStore::HTTP::FTicketStatus::GetError(param_1,&local_18);
    if (2 < (byte)LogIas._0_1_) {
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,TStringBuilderWithBuffer<char,256>_&,char_const_*_&,unsigned_int_&>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,*(TStringView<char> **)this,
                 *(TStringBuilderWithBuffer<char,256> **)((longlong)this + 8),&local_18.Reason,
                 &local_18.Code);
      return;
    }
  }
  else {
    EVar1 = UE::IoStore::HTTP::FTicketStatus::GetId(param_1);
    if (EVar1 == Response) {
      this_00 = UE::IoStore::HTTP::FTicketStatus::GetResponse(param_1);
      EVar2 = UE::IoStore::HTTP::FResponse::GetStatus(this_00);
      *(bool *)*(undefined8 *)((longlong)this + 0x10) = EVar2 == Successful;
      EVar2 = UE::IoStore::HTTP::FResponse::GetStatus(this_00);
      if (EVar2 == Successful) {
        **(undefined1 **)((longlong)this + 0x10) = 1;
        return;
      }
      if (2 < (byte)LogIas._0_1_) {
        local_res18[0] = UE::IoStore::HTTP::FResponse::GetStatusCode(this_00);
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,TStringBuilderWithBuffer<char,256>_&,unsigned_int>
                  ((FLogCategoryBase *)&LogIas,&::LOG_Static,*(TStringView<char> **)this,
                   *(TStringBuilderWithBuffer<char,256> **)((longlong)this + 8),local_res18);
      }
    }
  }
  return;
}

// ApplyEncryptionKeyFromString @ 1445b3b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UE::IoStore::Config::ApplyEncryptionKeyFromString(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FEncryptionKeyManager *this;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FGuid local_88;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_78;
  FDestructionSentinel local_68;
  FAESKey local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88.A = 0;
  local_88.B = 0;
  local_88.C = 0;
  local_88.D = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Key[0] = '\0';
  local_50.Key[1] = '\0';
  local_50.Key[2] = '\0';
  local_50.Key[3] = '\0';
  local_50.Key[4] = '\0';
  local_50.Key[5] = '\0';
  local_50.Key[6] = '\0';
  local_50.Key[7] = '\0';
  local_50.Key[8] = '\0';
  local_50.Key[9] = '\0';
  local_50.Key[10] = '\0';
  local_50.Key[0xb] = '\0';
  local_50.Key[0xc] = '\0';
  local_50.Key[0xd] = '\0';
  local_50.Key[0xe] = '\0';
  local_50.Key[0xf] = '\0';
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_50.Key[0x10] = '\0';
  local_50.Key[0x11] = '\0';
  local_50.Key[0x12] = '\0';
  local_50.Key[0x13] = '\0';
  local_50.Key[0x14] = '\0';
  local_50.Key[0x15] = '\0';
  local_50.Key[0x16] = '\0';
  local_50.Key[0x17] = '\0';
  local_50.Key[0x18] = '\0';
  local_50.Key[0x19] = '\0';
  local_50.Key[0x1a] = '\0';
  local_50.Key[0x1b] = '\0';
  local_50.Key[0x1c] = '\0';
  local_50.Key[0x1d] = '\0';
  local_50.Key[0x1e] = '\0';
  local_50.Key[0x1f] = '\0';
  ::FString::ParseIntoArray(param_1,&local_98,L":",true);
  if (local_98.ArrayNum == 2) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    bVar5 = FGuid::Parse((FString *)local_98.AllocatorInstance.Data,&local_88);
    if (bVar5) {
      if (local_98.ArrayNum < 2) {
        local_a8 = 1;
        local_a0 = (longlong)local_98.ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      bVar5 = FBase64::Decode((FString *)(local_98.AllocatorInstance.Data + 0x10),&local_78,Standard
                             );
      if (bVar5) {
        if ((((local_88.D != 0 || local_88.C != 0) || local_88.A != 0) || local_88.B != 0) &&
           (local_78.ArrayNum == 0x20)) {
          local_50.Key._0_8_ = *(undefined8 *)local_78.AllocatorInstance.Data;
          local_50.Key._8_8_ = *(undefined8 *)(local_78.AllocatorInstance.Data + 8);
          local_50.Key._16_8_ = *(undefined8 *)(local_78.AllocatorInstance.Data + 0x10);
          local_50.Key._24_8_ = *(undefined8 *)(local_78.AllocatorInstance.Data + 0x18);
          FMemory::Free(local_78.AllocatorInstance.Data);
          DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
          if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.AllocatorInstance.Data);
          }
          this = FEncryptionKeyManager::Get();
          FEncryptionKeyManager::AddKey(this,&local_88,&local_50);
          this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                    FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_68);
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
          bVar5 = false;
          uVar10 = (this_00->InvocationList).ArrayNum - 1;
          if (-1 < (int)uVar10) {
            lVar12 = (longlong)(int)uVar10;
            lVar11 = lVar12 << 4;
            bVar5 = false;
            do {
              iVar1 = (this_00->InvocationList).ArrayNum;
              uVar9 = 0;
              if ((int)uVar10 < iVar1) {
                uVar9 = ~uVar10 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (local_a8 = lVar12, local_a0 = (longlong)iVar1,
                 bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
              if (((*(int *)(pFVar2 + lVar11 + 8) == 0) ||
                  (plVar3 = *(longlong **)(pFVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
                 (cVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_88,&local_50), cVar8 == '\0'))
              {
                bVar5 = true;
              }
              lVar12 = lVar12 + -1;
              lVar11 = lVar11 + -0x10;
              uVar10 = uVar10 - 1;
            } while (-1 < (int)uVar10);
          }
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
          if (bVar5) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false)
            ;
          }
          if (local_68.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
          }
          return true;
        }
      }
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return false;
}

// ConnectionTest @ 1445bd570

int __cdecl
UE::IoStore::ConnectionTest
          (TArrayView<FAnsiString_const_,int> *param_1,TStringView<char> *param_2,uint param_3,
          atomic<bool> *param_4)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  undefined4 uStack_6c;
  TArrayView<int,int> local_68;
  TStringView<char> local_58;
  TStringView<char> local_48 [2];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"IasBackend::ConnectionTest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\LatencyTesting.cpp"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  iVar8 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar8) {
    uVar5 = local_48[0]._12_4_;
    lVar9 = 0;
    do {
      if (*param_4 != (atomic<bool>)0x0) break;
      pcVar3 = param_2->DataPtr;
      uVar4._0_4_ = param_2->Size;
      uVar4._4_4_ = *(undefined4 *)&param_2->field_0xc;
      local_res8[0] = -1;
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      local_68._12_4_ = uVar5;
      local_68.ArrayNum = 1;
      local_48[0].DataPtr =
           *(char **)((longlong)&(param_1->DataPtr->Data).AllocatorInstance.Data + lVar9);
      iVar1 = *(int *)((longlong)&(param_1->DataPtr->Data).ArrayNum + lVar9);
      iVar8 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar8 = 0;
      }
      local_48[0]._12_4_ = uStack_6c;
      local_48[0].Size = iVar8;
      local_68.DataPtr = local_res8;
      local_58.DataPtr = pcVar3;
      local_58._8_8_ = uVar4;
      LatencyTest(local_48,&local_58,param_3,&local_68);
      if (-1 < local_res8[0]) goto LAB_1445bd700;
      iVar8 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar10 < iVar8);
  }
  uVar10 = 0xffffffff;
LAB_1445bd700:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar10;
}

// ConnectionTest @ 1445bd760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::IoStore::ConnectionTest(TStringView<char> *param_1,TStringView<char> *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 auStackY_a8 [32];
  TArrayView<int,int> local_68;
  TStringView<char> local_58;
  TStringView<char> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId105,"IasBackend::ConnectionTest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\LatencyTesting.cpp"
               ,0x69);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId105);
  }
  local_58.DataPtr = param_2->DataPtr;
  local_58.Size = param_2->Size;
  local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_68.ArrayNum = 4;
  local_68.DataPtr = (int *)&local_38;
  local_38 = 0;
  uStack_30 = 0;
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  LatencyTest(&local_48,&local_58,param_3,&local_68);
  if (((((int)local_38 < 0) && (local_38 < 0)) && ((int)uStack_30 < 0)) && (uStack_30 < 0)) {
    bVar1 = false;
  }
  else {
    if (4 < (byte)LogIas._0_1_) {
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,int_&,int_&,int_&,int_&>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,param_1,(int *)&local_38,
                 (int *)((longlong)&local_38 + 4),(int *)&uStack_30,
                 (int *)((longlong)&uStack_30 + 4));
    }
    bVar1 = true;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// DebugPrintRange @ 1445c2810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::IoStore::HttpIoDispatcher::DebugPrintRange(FHttpRequest *param_1,FIoHttpRange *param_2)

{
  double dVar1;
  void *pvVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  undefined1 auStack_288 [32];
  double local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [4];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  if (param_1->Next != (FHttpRequest *)0x0) {
    local_258.Base = local_238;
    local_258.CurPos = local_238;
    local_258.End = (wchar_t *)local_38;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    do {
      if (local_258.End < local_258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      pvVar2 = FGenericPlatformString::Memcpy(local_258.CurPos,L"[",2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
      pTVar3 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"%u");
      pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"-",1);
      pTVar3 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar3,L"%u");
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"] ",2);
      param_1 = param_1->Next;
    } while (param_1 != (FHttpRequest *)0x0);
    if (local_258.End < local_258.CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,3);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_258.CurPos,L"-> ",6);
    local_258.CurPos = (wchar_t *)((longlong)pvVar2 + 6);
    pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_258,L"[",1);
    pTVar3 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar3,L"%u");
    pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"-",1);
    pTVar3 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar3,L"%u");
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"]",1);
    if (6 < (byte)LogHttpIoDispatcher._0_1_) {
      dVar1 = (double)(param_2->Max - param_2->Min) * __real_3f50000000000000;
      if (local_258.End < local_258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      *local_258.CurPos = L'\0';
      local_268 = dVar1;
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  }
  return;
}

// DecodeChunk @ 1445c2ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<FIoBuffer> * __cdecl
UE::IoStore::Private::DecodeChunk
          (TIoStatusOr<FIoBuffer> *__return_storage_ptr__,FOnDemandChunkInfo *param_1,
          TMemoryView<void_const_> *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FOnDemandContainer *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName FVar7;
  TIoStatusOr<FIoBuffer> *pTVar8;
  TArrayView<unsigned_int_const_,int> *pTVar9;
  FIoStatusBuilder *pFVar10;
  undefined1 auStack_378 [32];
  FIoBuffer local_358;
  FIoStatus local_350;
  FIoStatus local_340;
  FIoChunkDecodingParams local_328;
  FScriptContainerElement *local_2c8;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  TMemoryView<void> local_2b8;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  TMemoryView<void_const_> local_298;
  TStringView<wchar_t> local_288;
  TArrayView<unsigned_int_const_,int> local_278;
  FIoStatusBuilder local_268;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  ::FName::FName((FName *)&local_328,L"Oodle");
  local_328._padding_._0_4_ = 0x10000;
  local_328._padding_ = 0;
  local_328._padding_ = 0;
  local_328.TotalRawSize = 0;
  local_328.RawOffset = 0;
  local_328.EncodedOffset = 0;
  local_328.EncodedBlockSize.DataPtr = (uint *)0x0;
  local_328.EncodedBlockSize._8_8_ = (ulonglong)(uint)local_328.EncodedBlockSize._12_4_ << 0x20;
  local_328.BlockHash.DataPtr = (uint *)0x0;
  local_328.BlockHash._8_8_ = (ulonglong)(uint)local_328.BlockHash._12_4_ << 0x20;
  FVar7 = FOnDemandChunkInfo::CompressionFormat(param_1);
  local_328._padding_ = *(longlong *)FVar7;
  if ((param_1->SharedContainer).Object == (FOnDemandContainer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
      return pTVar8;
    }
  }
  local_328._padding_ = (longlong)(param_1->SharedContainer).Object;
  local_328._padding_ = 0x20;
  if ((FOnDemandContainer *)local_328._padding_ == (FOnDemandContainer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar4 = (param_1->SharedContainer).Object;
  local_328._padding_._0_4_ = pFVar4->BlockSize;
  local_328.TotalRawSize = (ulong64)param_1->Entry->RawSize;
  local_328.RawOffset = 0;
  local_328.EncodedOffset = 0;
  uVar3 = param_1->Entry->BlockCount;
  if (pFVar4 == (FOnDemandContainer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
      return pTVar8;
    }
  }
  local_2c8 = (((param_1->SharedContainer).Object)->BlockSizes).AllocatorInstance.Data +
              (ulonglong)param_1->Entry->BlockOffset * 4;
  uStack_2c0 = uVar3;
  if ((int)uVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
      return pTVar8;
    }
  }
  local_328.EncodedBlockSize._12_4_ = uStack_2bc;
  local_328.EncodedBlockSize.ArrayNum = uStack_2c0;
  local_328.EncodedBlockSize.DataPtr = (uint *)local_2c8;
  pTVar9 = FOnDemandChunkInfo::BlockHashes(param_1,&local_278);
  local_328.BlockHash.DataPtr = pTVar9->DataPtr;
  local_328.BlockHash.ArrayNum = pTVar9->ArrayNum;
  local_328.BlockHash._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
  FIoBuffer::FIoBuffer(&local_358,(ulonglong)param_1->Entry->RawSize);
  local_298.Data = param_2->Data;
  local_298.Size = param_2->Size;
  local_2b8.Data = *(void **)local_358.CorePtr.Reference;
  local_2b8.Size =
       (ulong64)CONCAT14(*(uchar *)((longlong)local_358.CorePtr.Reference + 0x18),
                         *(uint *)((longlong)local_358.CorePtr.Reference + 8));
  bVar6 = FIoChunkEncoding::Decode(&local_328,&local_298,&local_2b8,None);
  if (bVar6) {
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(TRefCountPtr<FIoBuffer::BufCore> *)(__return_storage_ptr__->Value).Pad =
         local_358.CorePtr.Reference;
  }
  else {
    pFVar10 = FIoStatusBuilder::FIoStatusBuilder(&local_268,ReadError);
    uStack_2a0 = 0x20;
    local_2a8 = L"Failed to decode container chunk";
    local_288._12_4_ = uStack_29c;
    local_288.Size = 0x20;
    local_288.DataPtr = L"Failed to decode container chunk";
    pFVar10 = FIoStatusBuilder::operator<<(pFVar10,&local_288);
    FIoStatusBuilder::operator_FIoStatus(pFVar10,&local_340);
    FIoStatusBuilder::~FIoStatusBuilder(&local_268);
    local_350.ErrorMessage.Chars = local_340.ErrorMessage.Chars;
    if (local_340.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_340.ErrorMessage.Chars + -4) = *(int *)(local_340.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_350.ErrorCode = local_340.ErrorCode;
    local_350.SystemErrorCode = local_340.SystemErrorCode;
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    if (local_350.ErrorCode == Ok) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InStatus.IsOk()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                         ,0x102,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
        return pTVar8;
      }
    }
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&local_350);
    FIoStatus::~FIoStatus(&local_350);
    FIoStatus::~FIoStatus(&local_340);
    if (local_358.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_358.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_358.CorePtr.Reference + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_358.CorePtr.Reference);
        ::operator_delete((void *)local_358.CorePtr.Reference,0x20);
      }
    }
  }
  return __return_storage_ptr__;
}

// DeserializeContainerHeader @ 1445c6f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> * __cdecl
UE::IoStore::Private::DeserializeContainerHeader
          (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *__return_storage_ptr__,
          FOnDemandChunkInfo *param_1,TMemoryView<void_const_> *param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *pTVar7;
  FIoStatusBuilder *pFVar8;
  FIoStatus *this;
  ulonglong uVar9;
  FIoContainerHeader *pFVar10;
  undefined1 auStack_8f8 [32];
  ulonglong local_8d8;
  FIoStatus local_8c0;
  FIoStatus local_8b0;
  FIoStatus local_8a0;
  FIoStatus local_890;
  FString local_880;
  FIoStatus local_870;
  FString local_860;
  FIoStatus local_850;
  FIoStatus local_840;
  undefined8 local_830;
  ulonglong uStack_828;
  FScriptContainerElement *local_818;
  int iStack_810;
  undefined4 uStack_80c;
  FScriptContainerElement *local_808;
  int iStack_800;
  undefined4 uStack_7fc;
  wchar_t *local_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  FArchiveState local_7e8;
  longlong local_758;
  undefined8 local_750;
  ulonglong uStack_748;
  ulonglong local_740;
  TMemoryView<void_const_> local_738;
  TStringView<wchar_t> local_728;
  TStringView<wchar_t> local_718;
  TStringView<wchar_t> local_708;
  TIoStatusOr<FIoBuffer> local_6f8;
  FIoStatusBuilder local_6d8;
  FIoStatusBuilder local_4a8;
  FIoStatusBuilder local_278;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_8f8;
  local_738.Data = param_2->Data;
  local_738.Size = param_2->Size;
  DecodeChunk(&local_6f8,param_1,&local_738);
  if (local_6f8.StatusValue.ErrorCode != Ok) {
    local_890.ErrorMessage.Chars = local_6f8.StatusValue.ErrorMessage.Chars;
    if (local_6f8.StatusValue.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_6f8.StatusValue.ErrorMessage.Chars + -4) =
           *(int *)(local_6f8.StatusValue.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_890.ErrorCode = local_6f8.StatusValue.ErrorCode;
    local_890.SystemErrorCode = local_6f8.StatusValue.SystemErrorCode;
    TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>
              (__return_storage_ptr__,&local_890);
    FIoStatus::operator=(&local_6f8.StatusValue,Unknown);
    if ((local_6f8.StatusValue.ErrorCode == Ok) && (local_6f8.Value.Pad != (uchar  [8])0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_6f8.Value.Pad);
      LOCK();
      piVar1 = (int *)((longlong)local_6f8.Value.Pad + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_6f8.Value.Pad);
        ::operator_delete((void *)local_6f8.Value.Pad,0x20);
      }
    }
    FIoStatus::~FIoStatus(&local_6f8.StatusValue);
    return __return_storage_ptr__;
  }
  pTVar6 = ::operator_new(0xc0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = (FIoContainerHeader *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pFVar10 = (FIoContainerHeader *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFIoContainerHeader___00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar6[0xb].SharedReferenceCount.field_0x2 = 0;
    *(undefined2 *)&pTVar6[0xb].WeakReferenceCount.field_0x2 = 0;
    pTVar6[1]._padding_ = -1;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[7]._padding_ = 0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[8]._padding_ = 0;
    pTVar6[8].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[8].WeakReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[9]._padding_ = -1;
    pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[10]._padding_ = 0;
    pTVar6[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xb]._padding_ = 0;
    *(undefined2 *)&pTVar6[0xb].SharedReferenceCount = 0;
    if ((pFVar10 == (FIoContainerHeader *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)(*pcVar4)();
      return pTVar7;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (local_6f8.StatusValue.ErrorCode != Ok) {
    StatusOrCrash(&local_6f8.StatusValue);
  }
  local_830 = *(undefined8 *)local_6f8.Value.Pad;
  uStack_828 = (ulonglong)
               CONCAT14(*(uchar *)((longlong)local_6f8.Value.Pad + 0x18),
                        *(uint *)((longlong)local_6f8.Value.Pad + 8));
  local_7e8._padding_ = 0;
  local_7e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_7e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_7e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_7e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_7e8._40_8_ = 0;
  local_7e8.ArSerializingDefaults = 0;
  local_7e8.ArPortFlags = 0;
  local_7e8.ArMaxSerializeSize = 0;
  local_7e8.ArUEVer.FileVersionUE4 = 0;
  local_7e8.ArUEVer.FileVersionUE5 = 0;
  local_7e8.ArLicenseeUEVer = 0;
  local_7e8.ArEngineVer.Major = 0;
  local_7e8.ArEngineVer.Minor = 0;
  local_7e8.ArEngineVer.Patch = 0;
  local_7e8.ArEngineVer._6_2_ = 0;
  local_7e8.ArEngineVer.Changelist = 0;
  local_7e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_7e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_7e8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_7e8.SerializedProperty = (FProperty *)0x0;
  local_7e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_7e8.bCustomVersionsAreReset = false;
  local_7e8._129_7_ = 0;
  local_7e8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_7e8);
  local_758 = 0;
  local_7e8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_740 = 0x7fffffffffffffff;
  local_750 = local_830;
  uStack_748 = uStack_828;
  FArchiveState::SetIsLoading(&local_7e8,true);
  (**(code **)(local_7e8._padding_ + 0x108))(&local_7e8,0);
  if ((pFVar10 == (FIoContainerHeader *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)(*pcVar4)();
    return pTVar7;
  }
  ::operator<<((FArchive *)&local_7e8,pFVar10);
  if (param_3) {
    if ((pFVar10 == (FIoContainerHeader *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)(*pcVar4)();
      return pTVar7;
    }
    if ((pFVar10->SoftPackageReferencesSerialInfo).Size < 1) goto LAB_1445c754a;
    if ((pFVar10 == (FIoContainerHeader *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)(*pcVar4)();
      return pTVar7;
    }
    if ((pFVar10->SoftPackageReferencesSerialInfo).Offset < 0) {
      pFVar8 = FIoStatusBuilder::FIoStatusBuilder(&local_6d8,ReadError);
      if ((pFVar10 == (FIoContainerHeader *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)(*pcVar4)();
        return pTVar7;
      }
      ::FString::PrintfImpl(&local_880,L"Invalid soft package reference offset \'%lld\'");
      local_818 = local_880.Data.AllocatorInstance.Data;
      iStack_810 = local_880.Data.ArrayNum + -1;
      if (local_880.Data.ArrayNum == 0) {
        iStack_810 = 0;
      }
      local_728._12_4_ = uStack_80c;
      local_728.Size = iStack_810;
      local_728.DataPtr = (wchar_t *)local_880.Data.AllocatorInstance.Data;
      pFVar8 = FIoStatusBuilder::operator<<(pFVar8,&local_728);
      FIoStatusBuilder::operator_FIoStatus(pFVar8,&local_8c0);
      if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_880.Data.AllocatorInstance.Data);
      }
      FIoStatusBuilder::~FIoStatusBuilder(&local_6d8);
      local_870.ErrorMessage.Chars = local_8c0.ErrorMessage.Chars;
      if (local_8c0.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_8c0.ErrorMessage.Chars + -4) =
             *(int *)(local_8c0.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      local_870.ErrorCode = local_8c0.ErrorCode;
      local_870.SystemErrorCode = local_8c0.SystemErrorCode;
      TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>
                (__return_storage_ptr__,&local_870);
      this = &local_8c0;
    }
    else {
      if ((pFVar10 == (FIoContainerHeader *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)(*pcVar4)();
        return pTVar7;
      }
      uVar9 = local_740;
      if ((longlong)uStack_748 < (longlong)local_740) {
        uVar9 = uStack_748;
      }
      if ((pFVar10 == (FIoContainerHeader *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)(*pcVar4)();
        return pTVar7;
      }
      lVar3 = (pFVar10->SoftPackageReferencesSerialInfo).Offset;
      if ((pFVar10->SoftPackageReferencesSerialInfo).Size + lVar3 <= (longlong)uVar9) {
        local_758 = lVar3;
        ::operator<<((FArchive *)&local_7e8,&pFVar10->SoftPackageReferences);
        goto LAB_1445c754a;
      }
      pFVar8 = FIoStatusBuilder::FIoStatusBuilder(&local_4a8,ReadError);
      local_8d8 = local_740;
      if ((longlong)uStack_748 < (longlong)local_740) {
        local_8d8 = uStack_748;
      }
      ::FString::PrintfImpl
                (&local_860,
                 L"Soft package reference offset \'%lld\' and size \'%lld\' will seek past the end of archive size \'%lld\'"
                );
      local_808 = local_860.Data.AllocatorInstance.Data;
      iStack_800 = local_860.Data.ArrayNum + -1;
      if (local_860.Data.ArrayNum == 0) {
        iStack_800 = 0;
      }
      local_718._12_4_ = uStack_7fc;
      local_718.Size = iStack_800;
      local_718.DataPtr = (wchar_t *)local_860.Data.AllocatorInstance.Data;
      pFVar8 = FIoStatusBuilder::operator<<(pFVar8,&local_718);
      FIoStatusBuilder::operator_FIoStatus(pFVar8,&local_8b0);
      if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_860.Data.AllocatorInstance.Data);
      }
      FIoStatusBuilder::~FIoStatusBuilder(&local_4a8);
      local_850.ErrorMessage.Chars = local_8b0.ErrorMessage.Chars;
      if (local_8b0.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_8b0.ErrorMessage.Chars + -4) =
             *(int *)(local_8b0.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      local_850.ErrorCode = local_8b0.ErrorCode;
      local_850.SystemErrorCode = local_8b0.SystemErrorCode;
      TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>
                (__return_storage_ptr__,&local_850);
      this = &local_8b0;
    }
  }
  else {
LAB_1445c754a:
    if ((local_7e8.ArIsError == 0) && (local_7e8.ArIsCriticalError == 0)) {
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      *(FIoContainerHeader **)(__return_storage_ptr__->Value).Pad = pFVar10;
      *(TReferenceControllerBase<1> **)((__return_storage_ptr__->Value).Pad + 8) = pTVar6;
      FArchive::~FArchive((FArchive *)&local_7e8);
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_1445c761e;
    }
    pFVar8 = FIoStatusBuilder::FIoStatusBuilder(&local_278,FileNotOpen);
    uStack_7f0 = 0x24;
    local_7f8 = L"Failed to serialize container header";
    local_708._12_4_ = uStack_7ec;
    local_708.Size = 0x24;
    local_708.DataPtr = L"Failed to serialize container header";
    pFVar8 = FIoStatusBuilder::operator<<(pFVar8,&local_708);
    FIoStatusBuilder::operator_FIoStatus(pFVar8,&local_8a0);
    FIoStatusBuilder::~FIoStatusBuilder(&local_278);
    local_840.ErrorMessage.Chars = local_8a0.ErrorMessage.Chars;
    if (local_8a0.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_8a0.ErrorMessage.Chars + -4) = *(int *)(local_8a0.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_840.ErrorCode = local_8a0.ErrorCode;
    local_840.SystemErrorCode = local_8a0.SystemErrorCode;
    TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>
              (__return_storage_ptr__,&local_840);
    this = &local_8a0;
  }
  FIoStatus::~FIoStatus(this);
  FArchive::~FArchive((FArchive *)&local_7e8);
LAB_1445c761e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FIoStatus::operator=(&local_6f8.StatusValue,Unknown);
  if ((local_6f8.StatusValue.ErrorCode == Ok) && (local_6f8.Value.Pad != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_6f8.Value.Pad);
    LOCK();
    piVar1 = (int *)((longlong)local_6f8.Value.Pad + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_6f8.Value.Pad);
      ::operator_delete((void *)local_6f8.Value.Pad,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_6f8.StatusValue);
  return __return_storage_ptr__;
}

// EnableConcurentInstallRequests @ 1445c9c30

bool __cdecl UE::IoStore::CVars::EnableConcurentInstallRequests(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return bEnableConcurentInstallRequests;
  }
  _Init_thread_header(&::_TSS0);
  pTVar1 = CVar_EnableConcurrentRequests.Ref;
  if (::_TSS0 == -1) {
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar3 = 0;
    }
    else {
      lVar3 = 1;
    }
    bEnableConcurentInstallRequests = pTVar1->ShadowedValue[lVar3];
    _Init_thread_footer(&::_TSS0);
    return bEnableConcurentInstallRequests;
  }
  return bEnableConcurentInstallRequests;
}

// GenerateTicketId @ 1445d0370

uint __cdecl UE::IoStore::GenerateTicketId(void)

{
  atomic<unsigned_int> aVar1;
  
  do {
    aVar1 = NextFreeId;
    LOCK();
    NextFreeId = (atomic<unsigned_int>)((int)NextFreeId + 1);
    UNLOCK();
  } while (aVar1 == (atomic<unsigned_int>)0x0);
  return (uint)aVar1;
}

// GetCacheKey @ 1445d1ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

FIoHash * __cdecl
UE::IoStore::HttpIoDispatcher::GetCacheKey
          (FIoHash *__return_storage_ptr__,FName *param_1,FIoRelativeUrl param_2,
          FIoHttpHeaders *param_3,FIoHttpOptions *param_4)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FIoHash *pFVar10;
  FBlake3Hash *pFVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  size_t sVar16;
  undefined1 auStackY_1058 [32];
  ForAnyElementType local_1018;
  int local_1010;
  int local_100c;
  ForAnyElementType local_1008;
  int local_1000;
  int local_ffc;
  FIoHash *local_ff8;
  FIoHttpOptions *local_ff0;
  FBlake3Hash local_fe8;
  FBlake3 local_fc8;
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1058;
  local_ff0 = param_4;
  local_ff8 = __return_storage_ptr__;
  FBlake3::Reset(&local_fc8);
  uVar6 = ::FName::GetPlainNameString(param_1,&local_848);
  FBlake3::Update(&local_fc8,local_848,(ulonglong)uVar6 * 2);
  pcVar13 = *(char **)param_2.Url.Chars;
  if (pcVar13 == (char *)0x0) {
    iVar7 = 0;
    pcVar13 = "";
  }
  else {
    iVar7 = *(int *)(pcVar13 + -4);
  }
  FBlake3::Update(&local_fc8,pcVar13,(longlong)iVar7);
  pFVar15 = (param_3->Headers).AllocatorInstance.Data;
  uVar6 = (param_3->Headers).ArrayNum;
  if (((int)uVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FIoHash *)(*pcVar2)();
    return pFVar10;
  }
  if (((uVar6 != 0) && ((uVar6 & 1) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("HeadersView.IsEmpty() || ((HeadersView.Num() % 2) == 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                         ,0x79,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FIoHash *)(*pcVar2)();
    return pFVar10;
  }
  uVar14 = 0;
  if (0 < (int)uVar6) {
    pFVar15 = pFVar15 + 8;
    do {
      uVar8 = 0;
      if ((int)uVar14 < (int)uVar6) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FIoHash *)(*pcVar2)();
        return pFVar10;
      }
      local_1008.Data = (FScriptContainerElement *)0x0;
      local_1000 = *(int *)pFVar15;
      sVar16 = (size_t)local_1000;
      pvVar1 = *(void **)(pFVar15 + -8);
      if (local_1000 == 0) {
        local_ffc = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_1000,0,&local_1008,local_1000,&local_ffc);
        memcpy(local_1008.Data,pvVar1,sVar16);
      }
      uVar9 = 0;
      uVar8 = uVar9;
      if ((int)(uVar14 + 1) < (int)uVar6) {
        uVar8 = ~(uVar14 + 1) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FIoHash *)(*pcVar2)();
        return pFVar10;
      }
      local_1018.Data = (FScriptContainerElement *)0x0;
      local_1010 = *(int *)(pFVar15 + 0x10);
      sVar16 = (size_t)local_1010;
      pvVar1 = *(void **)(pFVar15 + 8);
      if (local_1010 == 0) {
        local_100c = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_1010,0,&local_1018,local_1010,&local_100c);
        memcpy(local_1018.Data,pvVar1,sVar16);
      }
      uVar8 = local_1000 - 1;
      FVar4.Data = local_1008.Data;
      if (local_1000 == 0) {
        uVar8 = uVar9;
        FVar4.Data = (FScriptContainerElement *)"";
      }
      FBlake3::Update(&local_fc8,FVar4.Data,(longlong)(int)uVar8);
      uVar8 = local_1010 - 1;
      FVar4.Data = local_1018.Data;
      if (local_1010 == 0) {
        uVar8 = uVar9;
        FVar4.Data = (FScriptContainerElement *)"";
      }
      FBlake3::Update(&local_fc8,FVar4.Data,(longlong)(int)uVar8);
      if (local_1018.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1018.Data);
      }
      if (local_1008.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1008.Data);
      }
      uVar14 = uVar14 + 2;
      pFVar15 = pFVar15 + 0x20;
      __return_storage_ptr__ = local_ff8;
    } while ((int)uVar14 < (int)uVar6);
  }
  FBlake3::Update(&local_fc8,local_ff0,8);
  pFVar11 = FBlake3::Finalize(&local_fc8,&local_fe8);
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  uVar3 = *(undefined8 *)(pFVar11->Hash + 8);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar11->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar3;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(pFVar11->Hash + 0x10);
  if (*(longlong *)param_2.Url.Chars != 0) {
    piVar12 = (int *)(*(longlong *)param_2.Url.Chars + -8);
    LOCK();
    iVar7 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FMemory::Free(piVar12);
    }
  }
  return __return_storage_ptr__;
}

// GetChunkUrl @ 1445d2db0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TStringBuilderBase<char> * __cdecl
UE::IoStore::Private::GetChunkUrl
          (TStringView<char> *param_1,FOnDemandContainer *param_2,FOnDemandChunkEntry *param_3,
          TStringBuilderBase<char> *param_4)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ulong64 uVar9;
  FString local_38;
  FString local_28;
  
  param_4->CurPos = param_4->Base;
  if (param_1->Size != 0) {
    local_28.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_1->DataPtr;
    local_28.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    local_28.Data.ArrayNum = param_1->Size;
    local_28.Data.ArrayMax = *(int *)&param_1->field_0xc;
    iVar3 = (int)*(undefined8 *)&param_1->Size;
    uVar9 = (ulong64)iVar3;
    if (param_4->End < param_4->Base + uVar9) {
      TStringBuilderBase<char>::Extend(param_4,uVar9);
    }
    if (iVar3 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy
                         (param_4->CurPos,
                          (void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                                           local_28.Data.AllocatorInstance.Data._0_4_),uVar9);
      param_4->CurPos = (char *)((longlong)pvVar4 + uVar9);
    }
  }
  if (1 < (param_2->ChunksDirectory).Data.ArrayNum) {
    pcVar6 = param_4->CurPos;
    if (param_4->End < pcVar6 + 1) {
      TStringBuilderBase<char>::Extend(param_4,1);
      pcVar6 = param_4->CurPos;
    }
    pvVar4 = FGenericPlatformString::Memcpy(pcVar6,&s__,1);
    param_4->CurPos = (char *)((longlong)pvVar4 + 1);
    iVar3 = (param_2->ChunksDirectory).Data.ArrayNum;
    pFVar1 = (param_2->ChunksDirectory).Data.AllocatorInstance.Data;
    iVar8 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar8 = 0;
    }
    uVar9 = (ulong64)iVar8;
    if (param_4->End < (char *)((longlong)pvVar4 + 1) + uVar9) {
      TStringBuilderBase<char>::Extend(param_4,uVar9);
    }
    if (iVar8 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(param_4->CurPos,pFVar1,uVar9);
      param_4->CurPos = (char *)((longlong)pvVar4 + uVar9);
    }
  }
  ::LexToString(&local_38,&param_3->Hash);
  if (param_4->End < param_4->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_4,1);
  }
  pvVar4 = FGenericPlatformString::Memcpy(param_4->CurPos,&s__,1);
  param_4->CurPos = (char *)((longlong)pvVar4 + 1);
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (2 < iVar3) {
    iVar3 = 2;
  }
  iVar8 = 0;
  if (0 < iVar3) {
    iVar8 = iVar3;
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar7.Data,iVar8);
  pcVar5 = param_4->CurPos;
  pcVar6 = param_4->End;
  pwVar2 = (wchar_t *)
           CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                    local_28.Data.AllocatorInstance.Data._0_4_);
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (pcVar6 < pcVar5 + iVar3) {
    TStringBuilderBase<char>::Extend(param_4,(longlong)iVar3);
    pcVar6 = param_4->End;
    pcVar5 = param_4->CurPos;
  }
  if (iVar3 != 0) {
    pcVar5 = FGenericPlatformString::Convert<wchar_t,char>(pcVar5,iVar3,pwVar2,iVar3);
    param_4->CurPos = pcVar5;
    pcVar6 = param_4->End;
  }
  if (pcVar6 < pcVar5 + 1) {
    TStringBuilderBase<char>::Extend(param_4,1);
    pcVar5 = param_4->CurPos;
  }
  pvVar4 = FGenericPlatformString::Memcpy(pcVar5,&s__,1);
  FVar7.Data = local_38.Data.AllocatorInstance.Data;
  pcVar6 = (char *)((longlong)pvVar4 + 1);
  param_4->CurPos = pcVar6;
  pcVar5 = param_4->End;
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (pcVar5 < pcVar6 + iVar3) {
    TStringBuilderBase<char>::Extend(param_4,(longlong)iVar3);
    pcVar5 = param_4->End;
    pcVar6 = param_4->CurPos;
  }
  if (iVar3 != 0) {
    pcVar6 = FGenericPlatformString::Convert<wchar_t,char>(pcVar6,iVar3,(wchar_t *)FVar7.Data,iVar3)
    ;
    param_4->CurPos = pcVar6;
    pcVar5 = param_4->End;
  }
  if (pcVar5 < pcVar6 + 8) {
    TStringBuilderBase<char>::Extend(param_4,8);
  }
  pvVar4 = FGenericPlatformString::Memcpy(param_4->CurPos,".iochunk",8);
  param_4->CurPos = (char *)((longlong)pvVar4 + 8);
  if ((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                       local_28.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                                   local_28.Data.AllocatorInstance.Data._0_4_));
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return param_4;
}

// GetRequestCompletionTaskPriority @ 1445d77f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

ETaskPriority __cdecl UE::IoStore::GetRequestCompletionTaskPriority(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 4;
  if ((longlong)GCompleteMaterializeTaskPriority < 4) {
    lVar2 = (longlong)GCompleteMaterializeTaskPriority;
  }
  lVar1 = 0;
  if (0 < lVar2) {
    lVar1 = lVar2;
  }
  return GCompleteMaterializeTaskPriorities[lVar1];
}

// GetStreamingCacheConfig @ 1445d7f20

FIasCacheConfig * __cdecl
UE::IoStore::Config::GetStreamingCacheConfig
          (FIasCacheConfig *__return_storage_ptr__,wchar_t *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long64 lVar7;
  ulong64 uVar8;
  long64 lVar9;
  FString local_48;
  TStringView<wchar_t> local_38;
  
  (__return_storage_ptr__->Name).Size = 3;
  (__return_storage_ptr__->Name).DataPtr = L"ias";
  __return_storage_ptr__->DiskQuota = 0x20000000;
  __return_storage_ptr__->MemoryQuota = 0x200000;
  __return_storage_ptr__->JournalQuota = 0x400000;
  __return_storage_ptr__->JournalMagic = 0;
  lVar9 = -1;
  lVar7 = -1;
  (__return_storage_ptr__->WriteRate).Allowance = 0x1000000;
  (__return_storage_ptr__->WriteRate).Ops = 0x20;
  (__return_storage_ptr__->WriteRate).Seconds = 0x3c;
  (__return_storage_ptr__->Demand).Threshold = '\x1e';
  (__return_storage_ptr__->Demand).Boost = '<';
  (__return_storage_ptr__->Demand).SuperBoost = 'W';
  __return_storage_ptr__->DropCache = false;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"Ias",L"FileCache.WritePeriodSeconds",&local_48,&GEngineIni);
  iVar4 = 0;
  if (bVar1) {
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    local_38.Size = iVar5;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar7 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.WritePeriodSeconds=",&local_48,true,(wchar_t **)0x0)
  ;
  iVar5 = 0;
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar5;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (lVar3 < 0) goto LAB_1445d8045;
LAB_1445d804a:
    (__return_storage_ptr__->WriteRate).Seconds = (uint)lVar3;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d8045:
    lVar3 = lVar7;
    if (-1 < lVar7) goto LAB_1445d804a;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  lVar7 = -1;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"Ias",L"FileCache.WriteOpsPerPeriod",&local_48,&GEngineIni);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar7 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.WriteOpsPerPeriod=",&local_48,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar5;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (lVar3 < 0) goto LAB_1445d80f2;
LAB_1445d80f7:
    (__return_storage_ptr__->WriteRate).Ops = (uint)lVar3;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d80f2:
    lVar3 = lVar7;
    if (-1 < lVar7) goto LAB_1445d80f7;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  lVar7 = -1;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"Ias",L"FileCache.WriteBytesPerPeriod",&local_48,&GEngineIni);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar7 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.WriteBytesPerPeriod=",&local_48,true,(wchar_t **)0x0
                       );
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar5;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (lVar3 < 0) goto LAB_1445d819f;
LAB_1445d81a4:
    (__return_storage_ptr__->WriteRate).Allowance = (uint)lVar3;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d819f:
    lVar3 = lVar7;
    if (-1 < lVar7) goto LAB_1445d81a4;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  uVar8 = 0xffffffffffffffff;
  bVar1 = FConfigCacheIni::GetString(GConfig,L"Ias",L"FileCache.DiskQuota",&local_48,&GEngineIni);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    uVar8 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.DiskQuota=",&local_48,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar5;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    uVar2 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((longlong)uVar2 < 0) goto LAB_1445d824c;
LAB_1445d8251:
    __return_storage_ptr__->DiskQuota = uVar2;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d824c:
    uVar2 = uVar8;
    if (-1 < (longlong)uVar8) goto LAB_1445d8251;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  lVar7 = -1;
  bVar1 = FConfigCacheIni::GetString(GConfig,L"Ias",L"FileCache.MemoryQuota",&local_48,&GEngineIni);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar7 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.MemoryQuota=",&local_48,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (lVar3 < 0) goto LAB_1445d82fa;
LAB_1445d82ff:
    __return_storage_ptr__->MemoryQuota = (uint)lVar3;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d82fa:
    lVar3 = lVar7;
    if (-1 < lVar7) goto LAB_1445d82ff;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  lVar7 = -1;
  bVar1 = FConfigCacheIni::GetString(GConfig,L"Ias",L"FileCache.JournalQuota",&local_48,&GEngineIni)
  ;
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar7 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.JournalQuota=",&local_48,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (lVar3 < 0) goto LAB_1445d83a7;
LAB_1445d83ac:
    __return_storage_ptr__->JournalQuota = (uint)lVar3;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d83a7:
    lVar3 = lVar7;
    if (-1 < lVar7) goto LAB_1445d83ac;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  lVar7 = -1;
  bVar1 = FConfigCacheIni::GetString(GConfig,L"Ias",L"FileCache.JournalMagic",&local_48,&GEngineIni)
  ;
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar7 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.JournalMagic=",&local_48,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (lVar3 < 0) goto LAB_1445d8454;
LAB_1445d8459:
    __return_storage_ptr__->JournalMagic = (uint)lVar3;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d8454:
    lVar3 = lVar7;
    if (-1 < lVar7) goto LAB_1445d8459;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  lVar7 = -1;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"Ias",L"FileCache.DemandThreshold",&local_48,&GEngineIni);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar7 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.DemandThreshold=",&local_48,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (lVar3 < 0) goto LAB_1445d8501;
LAB_1445d8506:
    (__return_storage_ptr__->Demand).Threshold = (uchar)lVar3;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d8501:
    lVar3 = lVar7;
    if (-1 < lVar7) goto LAB_1445d8506;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  lVar7 = -1;
  bVar1 = FConfigCacheIni::GetString(GConfig,L"Ias",L"FileCache.DemandBoost",&local_48,&GEngineIni);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar5;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar7 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.DemandBoost=",&local_48,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar4;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (lVar3 < 0) goto LAB_1445d85af;
LAB_1445d85b4:
    (__return_storage_ptr__->Demand).Boost = (uchar)lVar3;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d85af:
    lVar3 = lVar7;
    if (-1 < lVar7) goto LAB_1445d85b4;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"Ias",L"FileCache.DemandSuperBoost",&local_48,&GEngineIni);
  if (bVar1) {
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = iVar5;
    }
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar9 = ParseSizeParam(&local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,L"Ias.FileCache.DemandSuperBoost=",&local_48,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    local_38.Size = iVar5;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (lVar3 < 0) goto LAB_1445d866a;
  }
  else {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_1445d866a:
    lVar3 = lVar9;
    if (lVar9 < 0) goto LAB_1445d8673;
  }
  (__return_storage_ptr__->Demand).SuperBoost = (uchar)lVar3;
LAB_1445d8673:
  bVar1 = FParse::Param(param_1,L"Ias.DropCache");
  if (bVar1) {
    __return_storage_ptr__->DropCache = true;
  }
  bVar1 = FParse::Param(param_1,L"Ias.NoCache");
  if (bVar1) {
    __return_storage_ptr__->DiskQuota = 0;
  }
  return __return_storage_ptr__;
}

// GetTotalRange @ 1445d8ea0

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FIoHttpRange __cdecl UE::IoStore::HttpIoDispatcher::GetTotalRange(FHttpRequest *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong in_RDX;
  uint uVar4;
  
  uVar1 = 0;
  uVar2 = 0xffffffff;
  while( true ) {
    if (in_RDX == 0) {
      param_1->_padding_ = uVar2;
      (param_1->ChunkHash).Hash[0] = (char)uVar1;
      (param_1->ChunkHash).Hash[1] = (char)(uVar1 >> 8);
      (param_1->ChunkHash).Hash[2] = (char)(uVar1 >> 0x10);
      (param_1->ChunkHash).Hash[3] = (char)(uVar1 >> 0x18);
      return (FIoHttpRange)param_1;
    }
    uVar4 = *(uint *)(in_RDX + 0x74);
    uVar3 = *(uint *)(in_RDX + 0x70);
    if (uVar4 < uVar3) break;
    if (uVar2 <= uVar1) {
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
    }
    in_RDX = *(longlong *)(in_RDX + 0x98);
    uVar1 = uVar4;
    uVar2 = uVar3;
  }
  param_1->_padding_ = -1;
  (param_1->ChunkHash).Hash[0] = '\0';
  (param_1->ChunkHash).Hash[1] = '\0';
  (param_1->ChunkHash).Hash[2] = '\0';
  (param_1->ChunkHash).Hash[3] = '\0';
  return (FIoHttpRange)param_1;
}

// HttpRequestSortPredicate @ 1445d9590

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::IoStore::HttpIoDispatcher::HttpRequestSortPredicate(FHttpRequest *param_1,FHttpRequest *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2->Options).Priority;
  iVar2 = (param_1->Options).Priority;
  if (iVar2 == iVar1) {
    return param_1->SeqNo < param_2->SeqNo;
  }
  return iVar1 < iVar2;
}

// JoinIoBuffers @ 1445dee60

FIoBuffer __cdecl UE::IoStore::JoinIoBuffers(FIoBuffer *param_1,FIoBuffer *param_2)

{
  BufCore *pBVar1;
  uchar *_Dst;
  uchar *_Src;
  undefined8 *puVar2;
  void *_Src_00;
  code *pcVar3;
  bool bVar4;
  FIoBuffer FVar5;
  ulonglong _Size;
  ulonglong _Size_00;
  ulonglong uVar6;
  longlong *in_R8;
  
  pBVar1 = (param_2->CorePtr).Reference;
  FIoBuffer::FIoBuffer
            (param_1,(ulonglong)CONCAT14(*(undefined1 *)(*in_R8 + 0x18),*(undefined4 *)(*in_R8 + 8))
                     + (ulonglong)CONCAT14(pBVar1->DataSizeHigh,pBVar1->DataSizeLow));
  pBVar1 = (param_1->CorePtr).Reference;
  _Dst = pBVar1->DataPtr;
  uVar6 = (ulonglong)CONCAT14(pBVar1->DataSizeHigh,pBVar1->DataSizeLow);
  pBVar1 = (param_2->CorePtr).Reference;
  _Src = pBVar1->DataPtr;
  _Size = (ulonglong)CONCAT14(pBVar1->DataSizeHigh,pBVar1->DataSizeLow);
  if (uVar6 < _Size) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView.Size <= Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                       ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(*pcVar3)();
      return (FIoBuffer)FVar5.CorePtr.Reference;
    }
  }
  if (_Size != 0) {
    memcpy(_Dst,_Src,_Size);
  }
  puVar2 = (undefined8 *)*in_R8;
  if (uVar6 < _Size) {
    _Size = uVar6;
  }
  _Src_00 = (void *)*puVar2;
  _Size_00 = (ulonglong)CONCAT14(*(undefined1 *)(puVar2 + 3),*(undefined4 *)(puVar2 + 1));
  if (uVar6 - _Size < _Size_00) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView.Size <= Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                       ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(*pcVar3)();
      return (FIoBuffer)FVar5.CorePtr.Reference;
    }
  }
  if (_Size_00 != 0) {
    memcpy(_Dst + _Size,_Src_00,_Size_00);
  }
  return (FIoBuffer)(TRefCountPtr<FIoBuffer::BufCore>)param_1;
}

// JournalLastAccess @ 1445defb0

void __cdecl
UE::IoStore::JournalLastAccess
          (FTransaction *param_1,
          TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
          *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar12 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iVar16 = 0;
  uVar10 = 1;
  iVar18 = 0;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar19 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar11 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1445df04d;
      uVar15 = puVar19[lVar13 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iVar11 = local_res18 + -1 + iVar18;
    if (iVar12 < iVar11) {
      iVar11 = iVar12;
    }
  }
LAB_1445df04d:
  uVar15 = *(uint *)&param_2->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar16);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar18;
  uStack_48 = CONCAT44(uStack_74,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar12 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&param_2->field_0x28;
  if (uVar15 != uVar10) {
    puVar17 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_1445df160;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_1445df160:
  while( true ) {
    if (*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar15) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar2 = (undefined4 *)(*(longlong *)param_2 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    uVar4 = *(ulonglong *)(puVar2 + 2);
    if ((longlong)uVar4 < 0) {
      uVar6 = *puVar2;
      piVar5 = &(param_1->Entries).ArrayMax;
      iVar12 = (param_1->Entries).ArrayNum;
      if (iVar12 == *piVar5) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(param_1->Entries).AllocatorInstance,piVar5);
      }
      (param_1->Entries).ArrayNum = iVar12 + 1;
      pFVar7 = (param_1->Entries).AllocatorInstance.Data;
      pFVar3 = pFVar7 + (longlong)iVar12 * 0x18;
      *(ulonglong *)pFVar3 = CONCAT44(uVar6,4);
      *(ulonglong *)(pFVar3 + 8) = uVar4 & 0x7fffffffffffffff;
      *(undefined8 *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) = 0;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// LatencyTest @ 1445df250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::IoStore::LatencyTest
          (TStringView<char> *param_1,TStringView<char> *param_2,uint param_3,
          TArrayView<int,int> *param_4)

{
  int *piVar1;
  double dVar2;
  char *pcVar3;
  uint uVar4;
  void *pvVar5;
  ulong64 uVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStackY_4a8 [32];
  char local_478 [8];
  FEventLoop local_470;
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  FParams local_458;
  TStringView<char> local_428;
  LARGE_INTEGER local_418;
  LARGE_INTEGER local_410;
  int *local_408;
  FHost *local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  FConnectionPool local_3e8;
  undefined8 uStack_3e0;
  TStringView<char> local_3d8;
  code *local_3c8 [5];
  undefined8 *local_3a0;
  TStringBuilderBase<char> local_398;
  FHost local_378 [5];
  TStringBuilderBase<char> local_278;
  FActivityNode local_258 [2];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_458.HostName.DataPtr = (char *)0x0;
  local_458.HostName.Size = 0;
  local_458.VerifyCert = HTTP::FCertRoots::NoTls();
  local_428.DataPtr = param_1->DataPtr;
  local_428.Size = param_1->Size;
  local_428._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_458.SendBufSize = -1;
  local_458.RecvBufSize = -1;
  local_458.Port = 0;
  local_458.ConnectionCount = 1;
  local_458.HttpVersion = One;
  local_458.MaxInflight = '\x01';
  HTTP::FConnectionPool::FParams::SetHostFromUrl(&local_458,&local_428);
  local_458.HttpVersion = (GIaxHttpVersion == 2) + One;
  local_458.ConnectionCount = 1;
  if (GIaxHttpVersion == 2) {
    local_458.VerifyCert = HTTP::FCertRoots::Default();
  }
  HTTP::FConnectionPool::FConnectionPool((FConnectionPool *)local_460,&local_458);
  local_278.Base = (char *)local_258;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_278.CurPos = (char *)local_258;
  local_278.End = (char *)local_58;
  HTTP::FConnectionPool::Describe((FConnectionPool *)local_460,&local_278);
  if (4 < (byte)LogIas._0_1_) {
    if (local_278.End < (undefined1 *)((longlong)local_278.CurPos + 1)) {
      TStringBuilderBase<char>::Extend(&local_278,1);
    }
    *local_278.CurPos = 0;
    local_468 = (undefined1  [8])local_278.Base;
    Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*>
              ((FLogCategoryBase *)&LogIas,&::LOG_Static,(char **)local_468);
  }
  local_398.Base = (char *)local_378;
  local_398.bIsDynamic = false;
  local_398.bIsExternal = false;
  local_398.CurPos = (char *)local_378;
  local_398.End = (char *)&local_278;
  if ((param_2->Size < 1) || (*param_2->DataPtr != '/')) {
    local_398.CurPos = (char *)((longlong)&local_378[0].VerifyCert + 1);
    local_378[0].VerifyCert._0_1_ = 0x2f;
  }
  pcVar3 = param_2->DataPtr;
  iVar8 = (int)*(undefined8 *)&param_2->Size;
  uVar6 = (ulong64)iVar8;
  if (&local_278 <
      (TStringBuilderBase<char> *)
      ((longlong)((FHost *)local_398.CurPos)->IpAddresses + uVar6 + -0x10)) {
    TStringBuilderBase<char>::Extend(&local_398,uVar6);
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_398.CurPos,pcVar3,uVar6);
    local_398.CurPos = (char *)((longlong)pvVar5 + uVar6);
  }
  HTTP::FEventLoop::FEventLoop(&local_470);
  HTTP::FEventLoop::SetFailTimeout(&local_470,param_3);
  piVar7 = param_4->DataPtr;
  piVar1 = piVar7 + param_4->ArrayNum;
  local_408 = piVar7;
  if (piVar7 != piVar1) {
    do {
      iStack_3f0 = (int)local_398.CurPos - (int)local_398.Base;
      local_3f8 = (FHost *)local_398.Base;
      uStack_3e0 = CONCAT44(uStack_3ec,iStack_3f0);
      local_428.DataPtr = "HEAD";
      local_428.Size = 4;
      local_3e8.Ptr = (FHost *)local_398.Base;
      local_478[0] = '\0';
      local_3d8.DataPtr = "HEAD";
      local_3d8.Size = 4;
      local_3d8._12_4_ = local_428._12_4_;
      HTTP::FEventLoop::Request
                (&local_470,(TStringView<char> *)local_468,&local_3d8,&local_3e8,
                 (FRequestParams *)local_460);
      local_3c8[0] = (code *)0x0;
      local_3a0 = (undefined8 *)0x0;
      local_3a0 = FMemory::Malloc(0x20,8);
      *local_3a0 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::IoStore::LatencyTest'::`26'::<lambda_1>,0,1>::
                    _vftable_;
      local_3a0[1] = param_1;
      local_3a0[2] = &local_398;
      local_3a0[3] = local_478;
      if (local_3a0 + 1 != (undefined8 *)0x0) {
        local_3c8[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::IoStore::LatencyTest'::__l26::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                       ::Call;
      }
      HTTP::FEventLoop::Send
                (&local_470,(FRequest *)local_468,
                 (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_3c8,0);
      QueryPerformanceCounter(&local_410);
      do {
        uVar4 = HTTP::FEventLoop::Tick(&local_470,param_3);
      } while (uVar4 != 0);
      QueryPerformanceCounter(&local_418);
      iVar8 = -1;
      if (local_478[0] != '\0') {
        iVar8 = local_418.s.LowPart - local_410._0_4_;
      }
      *piVar7 = iVar8;
      HTTP::FRequest::~FRequest((FRequest *)local_468);
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar1);
    dVar2 = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
    piVar7 = local_408;
    do {
      if (*piVar7 != -1) {
        *piVar7 = (int)(((longlong)*piVar7 * 1000) / (longlong)dVar2);
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar1);
  }
  HTTP::FEventLoop::~FEventLoop(&local_470);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_398);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_278);
  HTTP::FConnectionPool::~FConnectionPool((FConnectionPool *)local_460);
  return;
}

// LoadCache @ 1445dfaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UE::IoStore::JournaledCache::LoadCache(FDiskCache *param_1)

{
  ushort uVar1;
  IFileHandle *pIVar2;
  code *pcVar3;
  double dVar4;
  ForAnyElementType FVar5;
  FDiskCache *pFVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  FPhraseDesc *pFVar14;
  ulonglong uVar15;
  FPhraseDesc *pFVar16;
  FParagraph *pFVar17;
  longlong lVar18;
  FPhraseDesc *pFVar19;
  uint uVar20;
  FPhraseDesc *pFVar21;
  FPhraseDesc *pFVar22;
  ulong64 uVar23;
  longlong lVar24;
  undefined1 auStack_148 [32];
  FParagraph *local_128;
  FParagraph *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  ForAnyElementType local_f8;
  uint local_f0;
  uint local_ec;
  FIdentityFunctor local_e8;
  FDiskCache *local_e0;
  uint local_d8;
  FParagraph local_d0;
  FPhraseDesc *local_c0;
  ulonglong local_b8;
  LARGE_INTEGER local_b0;
  ulonglong local_a8;
  longlong local_a0;
  FParagraph *local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  char local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e0 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)param_1);
  pIVar2 = (param_1->Journal).JrnHandle.Ptr;
  pFVar22 = (FPhraseDesc *)0x0;
  pFVar14 = pFVar22;
  iVar9 = 0;
  if ((pIVar2 == (IFileHandle *)0x0) ||
     (uVar13 = (**(code **)((longlong)*pIVar2 + 0x50))(), iVar9 = 0, local_b8 = uVar13,
     (int)uVar13 == 0)) goto LAB_1445e04aa;
  uVar15 = uVar13 & 0xffffffff;
  pFVar14 = operator_new__(uVar13 & 0xffffffff);
  local_c0 = pFVar14;
  operator_delete__((void *)0x0);
  operator_delete__((void *)0x0);
  pIVar2 = (param_1->Journal).JrnHandle.Ptr;
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,0);
  pIVar2 = (param_1->Journal).JrnHandle.Ptr;
  cVar7 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,pFVar14,uVar13 & 0xffffffff);
  if ((cVar7 == '\0') && (1 < (byte)LogIas._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  if (6 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  QueryPerformanceCounter(&local_b0);
  uVar20 = (param_1->Journal).Magic;
  local_88 = local_b0;
  local_f0 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_ec = 0;
  pFVar16 = pFVar14;
  pFVar19 = pFVar22;
  while (((uVar10 = (uint)pFVar19,
          (ulonglong)((longlong)pFVar16 + (0x10 - (longlong)pFVar14)) <= uVar15 &&
          (pFVar16->Magic == uVar20)) &&
         ((ulonglong)((longlong)pFVar16 + (0x20 - (longlong)pFVar14)) <= uVar15))) {
    uVar1 = *(ushort *)&pFVar16[1].field_0xe;
    if ((uVar15 < (longlong)pFVar16 + (ulonglong)uVar1 * 0x10 + (0x10 - (longlong)pFVar14)) ||
       (pFVar21 = pFVar16 + (ulonglong)uVar1 + 1, *(ushort *)&pFVar21[-1].field_0xe != uVar1))
    break;
    local_d0.EntryCount = (uint)*(ushort *)&pFVar21[-1].field_0xe;
    local_d0.DataSize =
         ((uint)(*(ulonglong *)&pFVar21[-1].field_0x8 >> 0x17) & 0x1ffffff) +
         ((uint)*(ulonglong *)&pFVar21[-1].field_0x8 & 0x7fffff);
    local_d0.Phrase = pFVar16;
    if ((local_f8.Data <= &local_d0) &&
       (&local_d0 < (FParagraph *)(local_f8.Data + (longlong)(int)local_ec * 0x10))) {
      local_110 = (longlong)(int)uVar10;
      local_108 = 0x10;
      local_128 = &local_d0;
      local_120 = (FParagraph *)local_f8.Data;
      local_118 = (longlong)(int)local_ec;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      uVar10 = local_f0;
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
    }
    if (uVar10 == local_ec) {
      uVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_f8,(int *)&local_ec);
    }
    local_f0 = uVar10 + 1;
    *(FPhraseDesc **)&local_f8.Data[(longlong)(int)uVar10 * 0x10].field_0x0 = local_d0.Phrase;
    *(ulonglong *)(local_f8.Data + (longlong)(int)uVar10 * 0x10 + 8) =
         CONCAT44(local_d0.DataSize,local_d0.EntryCount);
    pFVar19 = (FPhraseDesc *)(ulonglong)local_f0;
    pFVar16 = pFVar21;
  }
  pFVar21 = (FPhraseDesc *)((longlong)&pFVar14->Magic + uVar15);
  if (pFVar16 + 2 <= pFVar21) {
    while( true ) {
      uVar10 = (uint)pFVar19;
      pFVar21 = pFVar21 + (-1 - (ulonglong)*(ushort *)&pFVar21[-1].field_0xe);
      if (((uVar15 < (ulonglong)((longlong)pFVar21 - (longlong)pFVar14)) ||
          (uVar15 < ((longlong)pFVar21 - (longlong)pFVar14) + 0x10U)) ||
         ((pFVar21->Magic != uVar20 ||
          (uVar15 < (ulonglong)((longlong)pFVar21 + (0x20 - (longlong)pFVar14)))))) break;
      uVar13 = (ulonglong)*(ushort *)&pFVar21[1].field_0xe;
      if ((uVar15 < (longlong)pFVar21 + (uVar13 * 0x10 - (longlong)pFVar14) + 0x10) ||
         (*(ushort *)&pFVar21[uVar13].field_0xe != *(ushort *)&pFVar21[1].field_0xe)) break;
      local_d0.EntryCount = (uint)*(ushort *)&pFVar21[uVar13].field_0xe;
      local_d0.DataSize =
           ((uint)(*(ulonglong *)&pFVar21[uVar13].field_0x8 >> 0x17) & 0x1ffffff) +
           ((uint)*(ulonglong *)&pFVar21[uVar13].field_0x8 & 0x7fffff);
      uVar11 = uVar10;
      local_d0.Phrase = pFVar21;
      if ((local_f8.Data <= &local_d0) &&
         (&local_d0 < (FParagraph *)(local_f8.Data + (longlong)(int)local_ec * 0x10))) {
        local_110 = (longlong)(int)uVar10;
        local_108 = 0x10;
        local_128 = &local_d0;
        local_120 = (FParagraph *)local_f8.Data;
        local_118 = (longlong)(int)local_ec;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        uVar11 = local_f0;
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
      }
      if (uVar11 == local_ec) {
        uVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_f8,(int *)&local_ec);
      }
      uVar10 = uVar11 + 1;
      *(FPhraseDesc **)&local_f8.Data[(longlong)(int)uVar11 * 0x10].field_0x0 = local_d0.Phrase;
      *(ulonglong *)(local_f8.Data + (longlong)(int)uVar11 * 0x10 + 8) =
           CONCAT44(local_d0.DataSize,local_d0.EntryCount);
      pFVar19 = (FPhraseDesc *)(ulonglong)uVar10;
      local_f0 = uVar10;
      if (pFVar21 < pFVar16 + 2) break;
    }
  }
  if (6 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    uVar10 = local_f0;
  }
  param_1 = local_e0;
  if (uVar10 == 0) {
LAB_1445e0057:
    iVar9 = -1;
  }
  else {
    AlgoImpl::
    IntroSortInternal<_UE::IoStore::JournaledCache::LoadCache_::__l2::FParagraph,int,FIdentityFunctor,_UE::IoStore::JournaledCache::LoadCache_::__l2::<lambda_4>_>
              ((FParagraph *)local_f8.Data,uVar10,local_e8,(<lambda_4>)local_e8);
    uVar20 = local_f0 - 2;
    uVar23 = local_e0->MaxDataSize;
    if (-1 < (int)uVar20) {
      lVar24 = (longlong)(int)uVar20 << 4;
      uVar10 = local_f0;
      uVar11 = local_f0;
      do {
        uVar10 = uVar10 - 1;
        uVar12 = 0;
        if ((int)uVar10 < (int)uVar11) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_120 = (FParagraph *)(longlong)(int)uVar11;
          local_128 = (FParagraph *)(longlong)(int)uVar10;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar11 = local_f0;
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
        }
        FVar5.Data = local_f8.Data;
        uVar23 = uVar23 - (longlong)*(int *)(local_f8.Data + lVar24 + 0x1c);
        pFVar14 = local_c0;
        if ((longlong)uVar23 < 0) break;
        uVar12 = 0;
        if ((int)uVar20 < (int)uVar11) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_120 = (FParagraph *)(longlong)(int)uVar11;
          local_128 = (FParagraph *)(ulonglong)uVar20;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar11 = local_f0;
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
        }
        pFVar14 = local_c0;
        if ((*(uint *)(*(longlong *)(FVar5.Data + lVar24 + 0x10) + 8) & 0x3fffffff) !=
            (*(uint *)(*(longlong *)(local_f8.Data + lVar24) + 8) & 0x3fffffff) + 1) break;
        lVar24 = lVar24 + -0x10;
        pFVar22 = (FPhraseDesc *)(ulonglong)uVar20;
        uVar20 = uVar20 - 1;
      } while (-1 < (int)uVar20);
    }
    param_1 = local_e0;
    pIVar2 = (local_e0->DataHandle).Ptr;
    if (pIVar2 == (IFileHandle *)0x0) {
      if (6 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      goto LAB_1445e0057;
    }
    uVar13 = local_e0->MaxDataSize;
    uVar15 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2);
    pFVar6 = local_e0;
    if (uVar13 < uVar15) {
      param_1 = local_e0;
      if (6 < (byte)LogIas._0_1_) {
        (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2);
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
        param_1 = local_e0;
      }
      goto LAB_1445e0057;
    }
    uVar20 = (uint)pFVar22;
    local_d8 = local_f0;
    if ((int)(uVar20 + 0x4000) < (int)local_f0) {
      local_d8 = uVar20 + 0x4000;
    }
    bVar8 = uVar20 == local_d8;
    uVar10 = local_d8;
    if ((int)uVar20 < (int)local_d8) {
      do {
        uVar11 = ((int)(uVar10 - (int)pFVar22) >> 1) + (int)pFVar22;
        uVar20 = 0;
        if ((int)uVar11 < (int)local_f0) {
          uVar20 = ~uVar11 >> 0x1f;
        }
        if (uVar20 == 0) {
          local_120 = (FParagraph *)(longlong)(int)local_f0;
          local_128 = (FParagraph *)(longlong)(int)uVar11;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
        }
        local_a0 = (longlong)(int)uVar11 * 0x10;
        local_98 = (FParagraph *)local_f8.Data;
        uVar20 = *(uint *)(local_f8.Data + local_a0 + 0xc);
        uVar13 = *(ulonglong *)(*(longlong *)&local_f8.Data[local_a0].field_0x0 + 8);
        uVar15 = uVar13 >> 0x1e;
        local_a8 = 0;
        if (uVar15 + uVar20 <= pFVar6->MaxDataSize) {
          local_a8 = uVar15;
        }
        uVar15 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2);
        if (uVar15 < local_a8 + uVar20) {
LAB_1445e01d1:
          pFVar22 = (FPhraseDesc *)(ulonglong)(uVar11 + 1);
          uVar11 = uVar10;
        }
        else {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
          if (0x40 < uVar20) {
            uVar20 = 0x40;
          }
          cVar7 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,local_78,uVar20);
          if ((cVar7 == '\0') ||
             (uVar20 = CityHash32(local_78,uVar20),
             ((uint)uVar13 & 0x3fffffff) + uVar20 !=
             *(int *)(*(longlong *)((longlong)&local_98->Phrase + local_a0) + 4)))
          goto LAB_1445e01d1;
        }
        uVar10 = uVar11;
      } while ((int)(uint)pFVar22 < (int)uVar11);
      bVar8 = (uint)pFVar22 == local_d8;
      pFVar14 = local_c0;
    }
    if (bVar8) {
      pFVar22 = (FPhraseDesc *)(ulonglong)local_f0;
    }
    local_c0 = (FPhraseDesc *)CONCAT44(local_c0._4_4_,local_f0);
    local_d8 = 0;
    param_1 = local_e0;
    if ((uint)pFVar22 < local_f0) {
      do {
        uVar10 = (uint)pFVar22;
        uVar20 = 0;
        if ((int)uVar10 < (int)local_f0) {
          uVar20 = ~uVar10 >> 0x1f;
        }
        if (uVar20 == 0) {
          local_120 = (FParagraph *)(longlong)(int)local_f0;
          local_128 = (FParagraph *)(longlong)(int)uVar10;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
        }
        pFVar17 = (FParagraph *)(longlong)(int)uVar10;
        lVar24 = *(longlong *)&local_f8.Data[(longlong)pFVar17 * 0x10].field_0x0;
        uVar20 = 0;
        if ((int)uVar10 < (int)local_f0) {
          uVar20 = ~uVar10 >> 0x1f;
        }
        if (uVar20 == 0) {
          local_120 = (FParagraph *)(longlong)(int)local_f0;
          local_128 = pFVar17;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
        }
        param_1 = local_e0;
        uVar20 = *(uint *)(local_f8.Data + (longlong)pFVar17 * 0x10 + 8);
        if ((local_b8 & 0xffffffff) <
            (((ulonglong)(uVar20 - 1) + 1) * 0x10 - (longlong)pFVar14) + lVar24) goto LAB_1445e0057;
        local_d8 = local_d8 + uVar20;
        FDiskCache::Insert(local_e0,*(ulonglong *)(lVar24 + 8) >> 0x1e,(FDataEntry *)(lVar24 + 0x10)
                           ,uVar20);
        pFVar22 = (FPhraseDesc *)(ulonglong)(uVar10 + 1);
      } while (uVar10 + 1 < (uint)local_c0);
    }
    if (6 < (byte)LogIas._0_1_) {
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    uVar20 = local_f0 - 1;
    uVar10 = 0;
    if ((int)uVar20 < (int)local_f0) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_120 = (FParagraph *)(longlong)(int)local_f0;
      local_128 = (FParagraph *)(longlong)(int)uVar20;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
    }
    lVar18 = (longlong)(int)local_f0;
    lVar24 = *(longlong *)&local_f8.Data[lVar18 * 0x10 + -0x10].field_0x0;
    (param_1->Journal).Marker = (*(uint *)(lVar24 + 8) & 0x3fffffff) + 1;
    if ((param_1->Journal).MaxSize < (uint)local_b8) {
      if (6 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      goto LAB_1445e0057;
    }
    (param_1->Journal).Cursor =
         ((*(int *)(local_f8.Data + lVar18 * 0x10 + -8) + 1) * 0x10 - (int)pFVar14) + (int)lVar24;
    uVar13 = (*(ulonglong *)(lVar24 + 8) >> 0x1e) +
             (ulonglong)*(uint *)(local_f8.Data + lVar18 * 0x10 + -4);
    param_1->DataCursor = uVar13;
    if (param_1->MaxDataSize < uVar13) {
      if (6 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      goto LAB_1445e0057;
    }
    iVar9 = 1;
  }
  if ((FParagraph *)local_f8.Data != (FParagraph *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  QueryPerformanceCounter(&local_90);
  dVar4 = (double)(ulonglong)(local_90.QuadPart - (longlong)local_88) *
          FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  if (__real_43e0000000000000 <= dVar4) {
    dVar4 = dVar4 - __real_43e0000000000000;
  }
  GCacheBootMs = (uint)(longlong)dVar4;
LAB_1445e04aa:
  operator_delete__(pFVar14);
  ReleaseSRWLockExclusive((PSRWLOCK)param_1);
  return iVar9;
}

// LoadDefaultHttpCertificates @ 1445e04e0

FIoStatus * __cdecl
UE::IoStore::LoadDefaultHttpCertificates(FIoStatus *__return_storage_ptr__,bool *param_1)

{
  wchar_t *pwVar1;
  TSharedString<wchar_t> TVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  pvVar3 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  *param_1 = false;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `UE::IoStore::LoadDefaultHttpCertificates'::__l2::FDefaultCerts::FDefaultCerts
                (&DefaultCerts,param_1);
      atexit(`UE::IoStore::LoadDefaultHttpCertificates'::__l2::
             _dynamic_atexit_destructor_for__DefaultCerts__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  TVar2.Chars = DefaultCerts.Status.ErrorMessage.Chars;
  (__return_storage_ptr__->ErrorMessage).Chars = DefaultCerts.Status.ErrorMessage.Chars;
  if (TVar2.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar1 = TVar2.Chars + -4;
    *(int *)pwVar1 = *(int *)pwVar1 + 1;
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = DefaultCerts.Status.ErrorCode;
  __return_storage_ptr__->SystemErrorCode = DefaultCerts.Status.SystemErrorCode;
  return __return_storage_ptr__;
}

// LogIoResult @ 1445e0bd0

/* WARNING: Removing unreachable block (ram,0x0001445e0ced) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::IoStore::LogIoResult
          (FIoChunkId *param_1,FIoHash *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          FIoOffsetAndLength *param_6,ulong64 param_7,int param_8,bool param_9)

{
  FString local_68;
  FString local_58 [2];
  
  if (6 < (byte)LogIas._0_1_) {
    ::LexToString(local_58,param_2);
    ::LexToString(&local_68,param_1);
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// MakeAnalyticsEventFromResult @ 1445e1180

FOnDemandImmediateAnalytic * __cdecl
UE::IoStore::MakeAnalyticsEventFromResult
          (FOnDemandImmediateAnalytic *__return_storage_ptr__,wchar_t *param_1,
          TValueOrError<void,UE::UnifiedError::FError> *param_2)

{
  int *piVar1;
  FAnalyticsEventAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnsiString *pFVar5;
  FString *pFVar6;
  FOnDemandImmediateAnalytic *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  wchar_t *local_res8;
  wchar_t *local_res18 [2];
  FString local_a8;
  FString local_98;
  FJsonFragment local_88;
  FString local_78;
  FAnsiString local_68;
  FString local_58;
  FString local_48;
  
  ::FString::FString(&local_98,L"Success");
  ::FString::FString(&local_a8,
                     L"{\"Root\":{\"ErrorCodeString\":\"Success\", \"ModuleIdString\":\"UnifiedError\"}}"
                    );
  pFVar8 = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  if ((param_2->Error).bIsSet != false) {
    pFVar5 = UnifiedError::FError::GetModuleIdAndErrorCodeString((FError *)param_2,&local_68);
    iVar11 = (pFVar5->Data).ArrayNum;
    iVar9 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar9 = iVar10;
    }
    pFVar6 = ::FString::ConstructFromPtrSize
                       (&local_78,(char *)(pFVar5->Data).AllocatorInstance.Data,iVar9);
    iVar11 = iVar10;
    if (&local_48 != pFVar6) {
      pFVar8 = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar10 = (pFVar6->Data).ArrayNum;
      iVar11 = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = pFVar8;
    local_98.Data.ArrayNum = iVar10;
    local_98.Data.ArrayMax = iVar11;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((param_2->Error).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FOnDemandImmediateAnalytic *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar6 = UnifiedError::FError::SerializeToJsonForAnalytics((FError *)param_2,&local_58);
    if (&local_a8 != pFVar6) {
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_a8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&__return_storage_ptr__->EventName,param_1);
  piVar1 = &(__return_storage_ptr__->AnalyticsArray).ArrayMax;
  (__return_storage_ptr__->AnalyticsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = (FAnalyticsEventAttribute *)
           (__return_storage_ptr__->AnalyticsArray).AllocatorInstance.Data;
  local_88.FragmentString.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  local_88.FragmentString.Data.ArrayNum = local_a8.Data.ArrayNum;
  local_88.FragmentString.Data.ArrayMax = local_a8.Data.ArrayMax;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AnalyticsArray).ArrayNum = 0;
  *piVar1 = 0;
  DestructItems<FAnalyticsEventAttribute,int>(pFVar2,0);
  (__return_storage_ptr__->AnalyticsArray).ArrayNum = 0;
  if (*piVar1 != 2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,2,&(__return_storage_ptr__->AnalyticsArray).AllocatorInstance,0,piVar1);
  }
  local_res8 = L"ErrorCode";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FString>
            (&__return_storage_ptr__->AnalyticsArray,&local_res8,&local_98);
  local_res18[0] = L"ErrorJson";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FJsonFragment>
            (&__return_storage_ptr__->AnalyticsArray,local_res18,&local_88);
  if (local_88.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.FragmentString.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeIasCache @ 1445e1400

TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> __cdecl
UE::IoStore::MakeIasCache(wchar_t *param_1,FIasCacheConfig *param_2,FDiskCacheGovernor *param_3)

{
  bool bVar1;
  FJournaledCache *this;
  FDiskCacheGovernor *in_R9;
  FLLMScope local_28 [2];
  FMemScope local_20;
  FName local_18 [2];
  
  FLLMScope::FLLMScope(local_28,LLMTagDeclaration_Ias.UniqueName,false,None,Default,true);
  local_18[0] = LLMTagDeclaration_Ias.UniqueName;
  FMemScope::FMemScope(&local_20,local_18,true);
  this = ::operator_new(0xc0);
  if (this == (FJournaledCache *)0x0) {
    this = (FJournaledCache *)0x0;
  }
  else {
    this->DiskCacheGovernor = in_R9;
    this->_padding_ = (longlong)&FJournaledCache::_vftable__for__UE__IoStore__IIasCache__;
    this->_padding_ =
         (longlong)
         &FJournaledCache::_vftable__for__UE__IoStore__JournaledCache__FServiceThread__FReadSink__;
    this->Cache = (FCache *)0x0;
    Tasks::FPipe::FPipe(&this->GetPipe,L"IasCacheGetPipe");
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Lock,4000);
    *(undefined8 *)&this->PendingMaterializes = 0;
    *(undefined8 *)&(this->PendingMaterializes).field_0x8 = 0;
    *(undefined8 *)&(this->PendingMaterializes).field_0x20 = 0;
    *(undefined4 *)&(this->PendingMaterializes).field_0x28 = 0;
    *(undefined4 *)&(this->PendingMaterializes).field_0x2c = 0x80;
    *(undefined4 *)&(this->PendingMaterializes).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PendingMaterializes).field_0x34 = 0;
    *(undefined8 *)&(this->PendingMaterializes).field_0x40 = 0;
    *(undefined4 *)&(this->PendingMaterializes).field_0x48 = 0;
  }
  bVar1 = FJournaledCache::Initialize(this,(wchar_t *)param_2,(FIasCacheConfig *)param_3);
  if (bVar1) {
    *(FJournaledCache **)param_1 = this;
  }
  else {
    if (this != (FJournaledCache *)0x0) {
      FJournaledCache::_scalar_deleting_destructor_(this,1);
    }
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
  }
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_28);
  return (TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_>)
         (IIasCache *)param_1;
}

// MakeJournalError @ 1445e1680

TValueOrError<void,UE::UnifiedError::FError> * __cdecl
UE::UnifiedError::IoStoreOnDemand::MakeJournalError
          (TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          ECasErrorCode param_1,EIoErrorCode param_2,FString *param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  IErrorDetails *pIVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  int iVar6;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar7;
  FDynamicErrorDetails *this;
  FScriptContainerElement *pFVar8;
  FDynamicErrorDetails *local_res8;
  ECasErrorCode local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  FError local_78 [2];
  undefined8 local_58 [3];
  
  pFVar8 = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_3->Data).ArrayNum;
  iVar3 = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  local_res10[0] = param_1;
  TVar7 = CasJournalError::GetStaticErrorDetails();
  pIVar4 = (IErrorDetails *)(TVar7.Reference)->_padding_;
  if (pIVar4 == (IErrorDetails *)0x0) {
    iVar6 = CasJournalError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    local_78[0].ErrorCode = iVar6;
  }
  else {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    iVar6 = CasJournalError::GetErrorCodeId();
    local_78[0].ModuleId = GetStaticModuleId();
    local_78[0].ErrorCode = iVar6;
    local_78[0].ErrorDetails.Reference = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  }
  this = ::operator_new(0x48);
  if (this == (FDynamicErrorDetails *)0x0) {
    local_res8 = (FDynamicErrorDetails *)0x0;
  }
  else {
    local_res20 = 0;
    FDynamicErrorDetails::FDynamicErrorDetails(this,(IErrorDetails *)&local_res20);
    plVar1 = &this[1]._padding_;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__UE__UnifiedError__IErrorDetails__;
    this->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__FRefCountBase__;
    *plVar1 = 0;
    this[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
    *(undefined1 *)&this[2]._padding_ = 5;
    *(ECasErrorCode *)&this[1]._padding_ = local_res10[0];
    *(uint *)&this[1]._padding_ = param_4;
    *(EIoErrorCode *)((longlong)&this[1]._padding_ + 4) = param_2;
    if (plVar1 != local_58) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)pFVar8;
      pFVar8 = (FScriptContainerElement *)0x0;
      *(int *)&this[1].InnerErrorDetails.Reference = iVar2;
      *(int *)((longlong)&this[1].InnerErrorDetails.Reference + 4) = iVar3;
    }
    *(undefined1 *)&this[2]._padding_ = 5;
    local_res8 = this;
    (**(code **)(this->_padding_ + 8))(this,local_res10);
  }
  FError::PushErrorDetails(local_78,(IErrorDetails *)&local_res8);
  (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_78[0].ErrorCode;
  (__return_storage_ptr__->Error).TypedValue.ModuleId = local_78[0].ModuleId;
  (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
         local_78[0].ErrorDetails.Reference;
    (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 8))
              (local_78[0].ErrorDetails.Reference,local_res10);
    TVar5.Reference = local_78[0].ErrorDetails.Reference;
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
    }
  }
  TVar5.Reference = local_78[0].ErrorDetails.Reference;
  (__return_storage_ptr__->Error).bIsSet = true;
  local_78[0].ErrorCode = 0;
  local_78[0].ModuleId = 0;
  if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
    local_78[0].ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_78[0].ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_78[0].ErrorDetails.Reference + 0x10))();
    }
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return __return_storage_ptr__;
}

// MakeOnDemanHttpIoDispatcher @ 1445e1860

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::IoStore::IOnDemandHttpIoDispatcher,1> * __cdecl
UE::IoStore::MakeOnDemanHttpIoDispatcher
          (TSharedPtr<UE::IoStore::IOnDemandHttpIoDispatcher,1> *__return_storage_ptr__,
          TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::IoStore::IOnDemandHttpIoDispatcher,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = ::operator_new(0x120);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IOnDemandHttpIoDispatcher *)0x20;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFHttpDispatcher_HttpIoDispatcher_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    HttpIoDispatcher::FHttpDispatcher::FHttpDispatcher((FHttpDispatcher *)(pTVar3 + 1),param_1);
    if (pTVar3 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::IoStore::IOnDemandHttpIoDispatcher,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar5 = pTVar3 + 2;
    if (pTVar3 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
    }
    __return_storage_ptr__->Object = (IOnDemandHttpIoDispatcher *)pTVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// MakeOnDemandHttpIoDispatcherBackend @ 1445e1940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TSharedPtr<UE::IoStore::IOnDemandHttpIoDispatcherBackend,1> * __cdecl
UE::IoStore::MakeOnDemandHttpIoDispatcherBackend
          (TSharedPtr<UE::IoStore::IOnDemandHttpIoDispatcherBackend,1> *__return_storage_ptr__,
          FOnDemandIoStore *param_1)

{
  IOnDemandHttpIoDispatcherBackend *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  FString local_28;
  FString local_18;
  
  pIVar1 = ::operator_new(0x70);
  if (pIVar1 == (IOnDemandHttpIoDispatcherBackend *)0x0) {
    pIVar1 = (IOnDemandHttpIoDispatcherBackend *)0x0;
  }
  else {
    *pIVar1 = (IOnDemandHttpIoDispatcherBackend)&___7FHttpIoDispatcherBackend_IoStore_UE__6B_;
    *(undefined1 *)(pIVar1 + 1) = 0;
    FOnDemandIoBackendStats::FOnDemandIoBackendStats
              ((FOnDemandIoBackendStats *)(pIVar1 + 2),(FBackendStatus *)(pIVar1 + 1));
    pIVar1[8] = (IOnDemandHttpIoDispatcherBackend)param_1;
    pIVar1[9] = (IOnDemandHttpIoDispatcherBackend)0x0;
    pIVar1[10] = (IOnDemandHttpIoDispatcherBackend)0x0;
    *(undefined1 *)(pIVar1 + 0xb) = 0;
    pIVar1[0xc] = (IOnDemandHttpIoDispatcherBackend)0x0;
    pIVar1[0xd] = (IOnDemandHttpIoDispatcherBackend)0x0;
    FBackendStatus::AddOrRemoveFlags
              ((FBackendStatus *)(pIVar1 + 1),HttpEnabled,true,L"HTTP streaming enabled");
    ::FString::FString(&local_18,L"true");
    ::FString::FString(&local_28,L"IAS.Enabled");
    FGenericCrashContext::SetEngineData(&local_28,&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FBackendStatus::AddOrRemoveFlags
              ((FBackendStatus *)(pIVar1 + 1),CacheEnabled,true,L"Cache enabled");
  }
  __return_storage_ptr__->Object = pIVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFHttpIoDispatcherBackend_IoStore_UE__U__DefaultDeleter_VFHttpIoDispatcherBackend_IoStore_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pIVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MakeOnDemandInstallCache @ 1445e1a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TSharedPtr<UE::IoStore::IOnDemandInstallCache,1> * __cdecl
UE::IoStore::MakeOnDemandInstallCache
          (TSharedPtr<UE::IoStore::IOnDemandInstallCache,1> *__return_storage_ptr__,
          FOnDemandIoStore *param_1,FOnDemandInstallCacheConfig *param_2,FDiskCacheGovernor *param_3
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  IFileManager *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<UE::IoStore::IOnDemandInstallCache,1> *pTVar6;
  wchar_t *pwVar7;
  
  pIVar4 = IFileManager::Get();
  if (param_2->bDropCache != false) {
    if (4 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    if ((param_2->RootDirectory).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_2->RootDirectory).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,pwVar7,0,1);
  }
  if ((param_2->RootDirectory).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->RootDirectory).Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar4 + 0x60))(pIVar4,pwVar7,1);
  if (cVar2 == '\0') {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    __return_storage_ptr__->Object = (IOnDemandInstallCache *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5 = ::operator_new(0x220);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Object = (IOnDemandInstallCache *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFOnDemandInstallCache_IoStore_UE___00_SharedPointerInternals__6B_
      ;
      FOnDemandInstallCache::FOnDemandInstallCache
                ((FOnDemandInstallCache *)(pTVar5 + 1),param_2,param_1,param_3);
      if ((pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::IoStore::IOnDemandInstallCache,1> *)(*pcVar1)();
        return pTVar6;
      }
      __return_storage_ptr__->Object = (IOnDemandInstallCache *)(pTVar5 + 1);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return __return_storage_ptr__;
}

// MakeOnDemandIoDispatcherBackend @ 1445e1c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1> * __cdecl
UE::IoStore::MakeOnDemandIoDispatcherBackend
          (TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1> *__return_storage_ptr__,
          FOnDemandEndpointConfig *param_1,FOnDemandIoStore *param_2,FOnDemandHttpThread *param_3,
          TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> *param_4)

{
  FOnDemandIoBackend *this;
  TRawPtrProxy<UE::IoStore::IOnDemandIoDispatcherBackend> local_res8;
  
  this = ::operator_new(0x198);
  local_res8.Object = (IOnDemandIoDispatcherBackend *)0x0;
  if (this != (FOnDemandIoBackend *)0x0) {
    local_res8.Object =
         (IOnDemandIoDispatcherBackend *)
         FOnDemandIoBackend::FOnDemandIoBackend(this,param_1,param_2,param_3,param_4);
  }
  TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1>::
  TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1><UE::IoStore::IOnDemandIoDispatcherBackend>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// MakeOnDemandPackageStoreBackend @ 1445e1cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TSharedPtr<UE::IoStore::IOnDemandPackageStoreBackend,1> * __cdecl
UE::IoStore::MakeOnDemandPackageStoreBackend
          (TSharedPtr<UE::IoStore::IOnDemandPackageStoreBackend,1> *__return_storage_ptr__,
          TWeakPtr<UE::IoStore::FOnDemandIoStore,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FOnDemandIoStore *pFVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<UE::IoStore::IOnDemandPackageStoreBackend,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x40);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IOnDemandPackageStoreBackend *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnDemandPackageStoreBackend_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    pFVar3 = param_1->Object;
    pTVar8 = (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FOnDemandIoStore *)0x0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7FOnDemandPackageStoreBackend_IoStore_UE__6B_;
    *(FOnDemandIoStore **)&pTVar6[1].SharedReferenceCount = pFVar3;
    pTVar6[2]._padding_ = (longlong)pTVar8;
    *(undefined2 *)&pTVar6[3].SharedReferenceCount = 0x100;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<UE::IoStore::IOnDemandPackageStoreBackend,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    __return_storage_ptr__->Object = (IOnDemandPackageStoreBackend *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  return __return_storage_ptr__;
}

// OnDemandSetImmediateAnalyticHandler @ 1445e3740

void __cdecl
UE::IoStore::OnDemandSetImmediateAnalyticHandler(FOnDemandImmediateAnalyticHandler *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FMutex FVar6;
  undefined8 uVar7;
  bool bVar8;
  
  LOCK();
  bVar8 = OnDemandImmediateAnalyticEventHandlerMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    OnDemandImmediateAnalyticEventHandlerMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    FMutex::LockSlow(&OnDemandImmediateAnalyticEventHandlerMutex);
  }
  uVar5 = OnDemandImmediateAnalyticEventHandler.EventHandler._40_8_;
  uVar4 = OnDemandImmediateAnalyticEventHandler.EventHandler._32_8_;
  uVar3 = OnDemandImmediateAnalyticEventHandler.EventHandler._24_8_;
  uVar2 = OnDemandImmediateAnalyticEventHandler.EventHandler._16_8_;
  uVar1 = OnDemandImmediateAnalyticEventHandler.EventHandler._8_8_;
  OnDemandImmediateAnalyticEventHandler.EventHandler._8_8_ =
       *(undefined8 *)&(param_1->EventHandler).field_0x8;
  OnDemandImmediateAnalyticEventHandler.EventHandler._16_8_ =
       *(undefined8 *)&(param_1->EventHandler).field_0x10;
  OnDemandImmediateAnalyticEventHandler.EventHandler._24_8_ =
       *(undefined8 *)&(param_1->EventHandler).field_0x18;
  OnDemandImmediateAnalyticEventHandler.EventHandler._32_8_ =
       *(undefined8 *)&(param_1->EventHandler).field_0x20;
  OnDemandImmediateAnalyticEventHandler.EventHandler._40_8_ =
       *(undefined8 *)&(param_1->EventHandler).field_0x28;
  uVar7 = *(undefined8 *)&param_1->EventHandler;
  *(undefined8 *)&param_1->EventHandler = OnDemandImmediateAnalyticEventHandler.EventHandler._0_8_;
  OnDemandImmediateAnalyticEventHandler.EventHandler._0_8_ = uVar7;
  *(undefined8 *)&(param_1->EventHandler).field_0x8 = uVar1;
  *(undefined8 *)&(param_1->EventHandler).field_0x10 = uVar2;
  *(undefined8 *)&(param_1->EventHandler).field_0x18 = uVar3;
  *(undefined8 *)&(param_1->EventHandler).field_0x20 = uVar4;
  *(undefined8 *)&(param_1->EventHandler).field_0x28 = uVar5;
  FVar6 = OnDemandImmediateAnalyticEventHandlerMutex;
  LOCK();
  OnDemandImmediateAnalyticEventHandlerMutex.State =
       OnDemandImmediateAnalyticEventHandlerMutex.State + -1;
  UNLOCK();
  if (((byte)FVar6.State & 2) == 0) {
    return;
  }
  FMutex::WakeWaitingThread(&OnDemandImmediateAnalyticEventHandlerMutex);
  return;
}

// OnHttpClientCVarChanged @ 1445e49b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::IoStore::OnHttpClientCVarChanged(IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FString local_38;
  FDestructionSentinel local_28;
  
  if (param_1 == (IConsoleVariable *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5466271174734380984>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
                       ,0x48,"CVar != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xd0))
              (IConsoleManager::Singleton,&local_38,param_1);
    if (4 < (byte)LogIas._0_1_) {
      Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRecreateHttpClient,
               (FWriteAccessScope *)&local_28);
    bVar2 = false;
    OnRecreateHttpClient._28_4_ = OnRecreateHttpClient._28_4_ + 1;
    uVar6 = OnRecreateHttpClient._16_4_ - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (int)OnRecreateHttpClient._16_4_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar7 + 8 + OnRecreateHttpClient._8_8_) == 0) ||
            (*(longlong **)(lVar7 + OnRecreateHttpClient._8_8_) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar7 + OnRecreateHttpClient._8_8_) + 0x68))(),
           cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar7 = lVar7 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    OnRecreateHttpClient._28_4_ = OnRecreateHttpClient._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRecreateHttpClient,false);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ParseResponse @ 1445e8c20

/* WARNING: Removing unreachable block (ram,0x0001445e910a) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EResult __cdecl
UE::IoStore::ParseResponse(FIoBuffer param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringViewReader<char8_t> *pTVar3;
  BufCore *pBVar4;
  code *pcVar5;
  FJsonObject *this;
  bool bVar6;
  EResult EVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  TSharedRef<TJsonStringViewReader<char8_t>,1> *pTVar11;
  TSharedPtr<FJsonValue,1> *pTVar12;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  undefined1 local_res20 [8];
  FString local_118;
  ForAnyElementType local_108;
  uint local_100;
  int local_fc;
  TSharedPtr<FJsonObject,1> local_f8;
  StackState local_e8;
  TReferenceControllerBase<1> *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TStringView<char8_t> local_78;
  TSharedRef<TJsonStringViewReader<char8_t>,1> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId124,"FDistributionEndpoints::ParseResponse",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\DistributionEndpoints.cpp"
               ,0x7c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId124);
  }
  local_a8 = (TReferenceControllerBase<1> *)**(undefined8 **)param_1.CorePtr.Reference;
  iStack_a0 = *(int *)(*(undefined8 **)param_1.CorePtr.Reference + 1);
  local_78._12_4_ = uStack_9c;
  local_78.Size = iStack_a0;
  local_78.DataPtr = (uchar *)local_a8;
  pTVar11 = TJsonStringViewReader<char8_t>::Create(&local_68,&local_78);
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar3 = pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_e8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Identifier.Data.ArrayNum = 0;
  local_e8.Identifier.Data.ArrayMax = 0;
  local_e8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Object = (FJsonObject *)0x0;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e8.Array.ArrayNum = 0;
  local_e8.Array.ArrayMax = 0;
  local_e8.Object.Object = (FJsonObject *)0x0;
  local_e8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<char8_t>
                    ((TJsonReader<char8_t> *)pTVar3,&local_e8,None);
  if (bVar6) {
    bVar6 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_e8,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data,
               local_e8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_e8.Array.AllocatorInstance.Data);
    }
    if (local_e8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)local_f8.Object ==
           (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      this = local_f8.Object;
      local_98 = L"distributions";
      uStack_90 = 0xd;
      local_58._12_4_ = uStack_8c;
      local_58.Size = 0xd;
      local_58.DataPtr = L"distributions";
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"distributions");
      pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>
                          ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                            *)this,uVar8,&local_58);
      if (((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0))
         && (pTVar12->Object->Type == Array)) {
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_f8.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          EVar7 = (*pcVar5)();
          return EVar7;
        }
        local_88 = L"distributions";
        uStack_80 = 0xd;
        local_48._12_4_ = uStack_7c;
        local_48.Size = 0xd;
        local_48.DataPtr = L"distributions";
        pTVar13 = FJsonObject::GetArrayField(local_f8.Object,&local_48);
        local_108.Data = (FScriptContainerElement *)0x0;
        uVar8 = pTVar13->ArrayNum;
        pTVar12 = (TSharedPtr<FJsonValue,1> *)(pTVar13->AllocatorInstance).Data;
        local_100 = uVar8;
        if (uVar8 == 0) {
          local_fc = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar8,0,&local_108,uVar8,&local_fc);
          ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                    (local_108.Data,pTVar12,uVar8);
        }
        if (-1 < (int)local_100) {
          piVar1 = &param_2->ArrayMax;
          if (param_2->ArrayMax < (int)local_100) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_100,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
          }
          uVar8 = local_100;
          pTVar12 = (TSharedPtr<FJsonValue,1> *)(local_108.Data + (longlong)(int)local_100 * 0x10);
          FVar16.Data = local_108.Data;
          while( true ) {
            if (local_100 != uVar8) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            if ((TSharedPtr<FJsonValue,1> *)FVar16.Data == pTVar12) {
              bVar6 = param_2->ArrayNum == 0;
              DestructItems<TSharedPtr<FJsonValue,1>,int>
                        ((TSharedPtr<FJsonValue,1> *)local_108.Data,local_100);
              pTVar2 = local_a8;
              if ((TSharedPtr<FJsonValue,1> *)local_108.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
                FMemory::Free(local_108.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f8.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar2);
              if (bVar17) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              pBVar4 = *(BufCore **)param_1.CorePtr.Reference;
              if (pBVar4 == (BufCore *)0x0) {
                return bVar6;
              }
              FIoBuffer::BufCore::CheckRefCount(pBVar4);
              LOCK();
              piVar1 = &pBVar4->NumRefs;
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 != 1) {
                return bVar6;
              }
              FIoBuffer::BufCore::~BufCore(pBVar4);
              ::operator_delete(pBVar4,0x20);
              return bVar6;
            }
            if ((((TSharedPtr<FJsonValue,1> *)FVar16.Data)->Object == (FJsonValue *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              EVar7 = (*pcVar5)();
              return EVar7;
            }
            FJsonValue::AsString(((TSharedPtr<FJsonValue,1> *)FVar16.Data)->Object,&local_118);
            bVar6 = ::FString::EndsWith(&local_118,L"/",1,IgnoreCase);
            if (bVar6) {
              iVar10 = local_118.Data.ArrayNum + -2;
              iVar15 = local_118.Data.ArrayNum + -1;
              if (local_118.Data.ArrayNum == 0) {
                iVar10 = -1;
                iVar15 = 0;
              }
              iVar9 = iVar15;
              if (iVar10 < iVar15) {
                iVar9 = iVar10;
              }
              iVar10 = 0;
              if (0 < iVar9) {
                iVar10 = iVar9;
              }
              ::FString::RemoveAt(&local_118,iVar10,iVar15 - iVar10,Default);
            }
            pFVar14 = (param_2->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_118) &&
                ((FScriptContainerElement *)&local_118 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) break;
            iVar10 = param_2->ArrayNum;
            if (iVar10 == *piVar1) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar10 + 1;
            pFVar14 = (param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
            *(undefined8 *)pFVar14 = 0;
            *(FScriptContainerElement **)pFVar14 = local_118.Data.AllocatorInstance.Data;
            local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar14 + 8) = local_118.Data.ArrayNum;
            *(int *)(pFVar14 + 0xc) = local_118.Data.ArrayMax;
            local_118.Data.ArrayNum = 0;
            local_118.Data.ArrayMax = 0;
            FVar16.Data = FVar16.Data + 0x10;
          }
          pcVar5 = (code *)swi(3);
          EVar7 = (*pcVar5)();
          return EVar7;
        }
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)local_100);
      }
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data,
               local_e8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_e8.Array.AllocatorInstance.Data);
    }
    if (local_e8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pBVar4 = *(BufCore **)param_1.CorePtr.Reference;
  if (pBVar4 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(pBVar4);
    LOCK();
    piVar1 = &pBVar4->NumRefs;
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar4);
      ::operator_delete(pBVar4,0x20);
    }
  }
  return Failure;
}

// ParseSizeParam @ 1445e91b0

long64 __cdecl UE::IoStore::Config::ParseSizeParam(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  long64 lVar3;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_1,param_2,&local_28,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    local_18.Size = iVar2;
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    lVar3 = ParseSizeParam(&local_18);
  }
  else {
    lVar3 = -1;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return lVar3;
}

// ParseSizeParam @ 1445e9240

long64 __cdecl UE::IoStore::Config::ParseSizeParam(TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  long64 local_res10;
  undefined4 uStack_1c;
  
  pwVar3 = param_1->DataPtr;
  pwVar6 = pwVar3 + param_1->Size;
  iVar4 = 0;
  while ((pwVar3 != pwVar6 && (iVar1 = iswspace(*pwVar3), iVar1 != 0))) {
    iVar4 = iVar4 + 1;
    pwVar3 = pwVar3 + 1;
  }
  pwVar6 = param_1->DataPtr;
  iVar1 = param_1->Size - iVar4;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1;
    do {
      iVar2 = iswspace((pwVar6 + iVar4)[lVar5 + -1]);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + -1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  local_res10 = -1;
  param_1->DataPtr = pwVar6 + iVar4;
  *(ulonglong *)&param_1->Size = CONCAT44(uStack_1c,iVar1);
  ::LexFromString(&local_res10,param_1);
  if (-1 < local_res10) {
    iVar4 = param_1->Size;
    lVar5 = (longlong)iVar4;
    pwVar6 = param_1->DataPtr;
    if (2 < iVar4) {
      iVar4 = 2;
    }
    iVar1 = 0;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    if (iVar1 == 2) {
      iVar4 = FGenericPlatformStricmp::Strnicmp(L"GB",pwVar6 + (lVar5 - iVar1),2);
      if (iVar4 == 0) {
        return local_res10 << 0x1e;
      }
      pwVar6 = param_1->DataPtr;
    }
    iVar4 = param_1->Size;
    lVar5 = (longlong)iVar4;
    if (2 < iVar4) {
      iVar4 = 2;
    }
    iVar1 = 0;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    if (iVar1 == 2) {
      iVar4 = FGenericPlatformStricmp::Strnicmp(L"MB",pwVar6 + (lVar5 - iVar1),2);
      if (iVar4 == 0) {
        return local_res10 << 0x14;
      }
      pwVar6 = param_1->DataPtr;
    }
    iVar4 = param_1->Size;
    lVar5 = (longlong)iVar4;
    if (2 < iVar4) {
      iVar4 = 2;
    }
    iVar1 = 0;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    if ((iVar1 == 2) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp(L"KB",pwVar6 + (lVar5 - iVar1),2), iVar4 == 0)) {
      local_res10 = local_res10 << 10;
    }
  }
  return local_res10;
}

// ResolveChunksToInstall @ 1445fa840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::IoStore::Private::ResolveChunksToInstall
          (TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
           *param_1,TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *param_2,
          bool param_3,bool param_4,
          TArray<UE::IoStore::Private::FResolvedContainerChunks,TSizedDefaultAllocator<32>_>
          *param_5,TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *param_6)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  int iVar7;
  FIoChunkId *pFVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  TArray<UE::IoStore::Private::FResolvedContainerChunks,TSizedDefaultAllocator<32>_> *pTVar15;
  int iVar16;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *pTVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *pTVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  char local_218;
  undefined1 local_217;
  bool local_216;
  undefined1 local_215;
  undefined1 local_214;
  char local_213;
  undefined1 local_212 [2];
  uint local_210;
  ulonglong local_208;
  TArray<UE::IoStore::Private::FResolvedContainerChunks,TSizedDefaultAllocator<32>_> *local_200;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *local_1f8;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *local_1e8;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  int local_1d8;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *local_1d0;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *local_1c8;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  undefined1 *local_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int local_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  longlong *local_180;
  uint uStack_178;
  undefined4 uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  uint local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  EIoChunkType *local_e8;
  undefined4 uStack_e0;
  EIoChunkType *local_d8;
  undefined4 uStack_d0;
  longlong local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  FIoChunkId local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_200 = param_5;
  local_1c8 = param_6;
  local_216 = param_3;
  local_213 = param_4;
  local_1f8 = param_2;
  local_1d0 = param_1;
  if (CpuChannel->Enabled < 0) {
    local_218 = '\0';
  }
  else {
    local_218 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId168,"FOnDemandContentInstaller::ResolveChunksToInstall",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
               ,0xa8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId168);
  }
  iVar7 = *(int *)&(param_1->Elements).field_0x28;
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  iStack_1b8 = 0;
  local_208 = 1;
  local_1a0 = 0;
  uStack_1b4 = 1;
  iStack_1a4 = 0;
  if (iVar7 != 0) {
    puVar19 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar21;
    }
    uStack_1b4 = *puVar19;
    local_1a0 = 0;
    while (uStack_1b4 == 0) {
      lVar10 = (longlong)iStack_1b8;
      local_1a0 = local_1a0 + 0x20;
      iStack_1b8 = iStack_1b8 + 1;
      uStack_1b4 = 1;
      iStack_1a4 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b8) goto LAB_1445fa97e;
      uStack_1b4 = puVar19[lVar10 + 1];
    }
    uStack_1b4 = -uStack_1b4 & uStack_1b4;
    uVar11 = (ulonglong)uStack_1b4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_190 = (int)lVar10;
    iStack_1a4 = local_190 + -1 + local_1a0;
    if (iVar7 < iStack_1a4) {
      iStack_1a4 = iVar7;
    }
  }
LAB_1445fa97e:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_19c = local_9c;
  uVar22 = uVar13 & 0xffffffe0;
  iStack_198 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_1a8 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
  TStack_148.CurrentBitIndex = iStack_1a4;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_148._28_4_ = local_9c;
  TStack_148.BaseBitIndex = local_1a0;
  uStack_128 = CONCAT44(uStack_194,iStack_198);
  local_210 = uVar13;
  local_1f0 = pTVar21;
  local_1c0 = param_1;
  local_1b0 = (undefined1 *)pTVar21;
  local_150 = param_1;
  TStack_148.Array = pTVar21;
  if ((((int)uVar13 < 0) || (iVar7 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar14) {
    puVar18 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar21;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      uVar22 = uVar22 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar14;
      local_210 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_1445faaa0;
      uVar13 = *(uint *)(puVar18 + lVar10 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_18c = (int)lVar10;
    uVar13 = (uVar22 - 1) + local_18c;
    local_210 = uVar13;
    if ((int)uVar14 < (int)uVar13) {
      uVar13 = uVar14;
      local_210 = uVar14;
    }
  }
LAB_1445faaa0:
  while( true ) {
    pTVar5 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_217 = 0;
      `TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_217);
    }
    pTVar15 = local_200;
    if (((TStack_148.CurrentBitIndex == uVar13) && (TStack_148.Array == pTVar21)) &&
       (pTVar5 == param_1)) break;
    plVar1 = (longlong *)
             (*(longlong *)&pTVar5->Elements + (longlong)TStack_148.CurrentBitIndex * 0x18);
    iVar7 = local_200->ArrayNum;
    if (iVar7 == local_200->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&local_200->AllocatorInstance,&local_200->ArrayMax);
    }
    pTVar15->ArrayNum = iVar7 + 1;
    pFVar2 = (pTVar15->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
    DefaultConstructItems<UE::IoStore::Private::FResolvedContainerChunks,int>(pFVar2,(int)local_208)
    ;
    lVar10 = plVar1[1];
    lVar23 = *plVar1;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    local_c8 = *(longlong *)pFVar2;
    pTStack_c0 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    *(longlong *)pFVar2 = lVar23;
    *(longlong *)(pFVar2 + 8) = lVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
    uVar22 = 0;
    if ((*plVar1 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar24 = 0;
    lVar23 = *(longlong *)(*plVar1 + 200);
    lVar10 = lVar23 + (longlong)*(int *)(*plVar1 + 0xd0) * 0xc;
    for (; lVar23 != lVar10; lVar23 = lVar23 + 0xc) {
      cVar12 = *(char *)(lVar23 + 0xb);
      if (((cVar12 == '\a') || (cVar12 == '\b')) || (cVar12 == '\t')) {
        iVar7 = *(int *)(pFVar2 + 0x18);
        if (iVar7 == *(int *)(pFVar2 + 0x1c)) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(pFVar2 + 0x10),(int *)(pFVar2 + 0x1c));
        }
        *(int *)(pFVar2 + 0x18) = iVar7 + 1;
        *(uint *)(*(longlong *)(pFVar2 + 0x10) + (longlong)iVar7 * 4) = uVar22;
        if ((*plVar1 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *plVar1;
        iVar7 = *(int *)(lVar3 + 0xe0);
        uVar13 = 0;
        if ((int)uVar22 < iVar7) {
          uVar13 = ~uVar22 >> 0x1f;
        }
        if (uVar13 == 0) {
          local_228 = (longlong)(int)uVar22;
          local_220 = (longlong)iVar7;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(ulonglong *)(pFVar2 + 0x20) =
             *(longlong *)(pFVar2 + 0x20) +
             ((ulonglong)(*(int *)(lVar24 + 0x18 + *(longlong *)(lVar3 + 0xd8)) + 0xf) & 0xfffffff0)
        ;
      }
      uVar22 = uVar22 + 1;
      lVar24 = lVar24 + 0x28;
      uVar13 = local_210;
    }
    TStack_148._padding_._4_4_ = (uint)((ulonglong)TStack_148._padding_ >> 0x20);
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
    param_1 = local_1d0;
    pTVar21 = local_1f0;
  }
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar13 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  ResolvePackageDependencies
            (local_1f8,local_216,
             (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)local_98,
             local_1c8);
  uVar22 = local_70;
  cVar12 = local_218;
  local_160 = 0;
  uStack_164 = local_160;
  if (local_70 != 0) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar14 = *puVar19;
    local_160 = 0;
    uVar13 = 0;
    while (uVar14 == 0) {
      lVar10 = (longlong)(int)uVar13;
      local_160 = local_160 + 0x20;
      uVar13 = uVar13 + 1;
      uStack_164 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_1445fadb3;
      uVar14 = (puVar19 + 1)[lVar10];
    }
    local_208 = (ulonglong)(-uVar14 & uVar14);
    uVar11 = local_208 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_188 = (int)lVar10;
    uStack_164 = (local_160 - 1) + local_188;
    if ((int)local_70 < (int)uStack_164) {
      uStack_164 = local_70;
    }
  }
LAB_1445fadb3:
  local_180 = (longlong *)local_98;
  uStack_174 = (undefined4)local_208;
  iStack_15c = iStack_1a4;
  local_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar14 = local_70 & 0xffffffe0;
  iStack_158 = local_98._8_4_ - local_64;
  uStack_168 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_164;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_174,uVar13);
  iVar7 = (int)local_70 >> 5;
  TStack_118._28_4_ = iStack_1a4;
  TStack_118.BaseBitIndex = local_160;
  uStack_f8 = CONCAT44(uStack_154,iStack_158);
  bVar9 = (byte)local_70;
  local_210 = local_70;
  uStack_178 = uVar13;
  local_120 = local_180;
  TStack_118.Array = local_170;
  if (((int)local_70 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar22 != local_70) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar13 = -1 << (bVar9 & 0x1f) & puVar19[iVar7];
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar7;
      uVar14 = uVar14 + 0x20;
      iVar7 = iVar7 + 1;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7) {
        local_210 = local_70;
        uVar22 = local_70;
        goto LAB_1445faef0;
      }
      uVar13 = (puVar19 + 1)[lVar10];
    }
    uVar11 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_184 = (int)lVar10;
    uVar22 = (uVar14 - 1) + local_184;
    local_210 = uVar22;
    if ((int)local_70 < (int)uVar22) {
      uVar22 = local_70;
      local_210 = local_70;
    }
  }
LAB_1445faef0:
  do {
    plVar1 = local_120;
    if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
      local_215 = 0;
      `TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_215);
    }
    if (((TStack_118.CurrentBitIndex == uVar22) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar1 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (cVar12 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_1c8 = (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)
                ((longlong)TStack_118.CurrentBitIndex * 0x10 + *plVar1);
    CreatePackageDataChunkId(&local_48,(FPackageId *)local_1c8);
    uVar11 = (ulonglong)local_200->ArrayNum;
    pTVar20 = (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)
              (local_200->AllocatorInstance).Data;
    local_208 = CONCAT44(local_208._4_4_,local_200->ArrayNum);
    pTVar17 = (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)
              ((longlong)&pTVar20->Hash + uVar11 * 0x28 + -0x38);
    pTVar15 = local_200;
    local_1f8 = pTVar17;
    while( true ) {
      if (pTVar15->ArrayNum != (int)uVar11) {
        local_214 = 0;
        `TCheckedPointerIterator<UE::IoStore::Private::FResolvedContainerChunks,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_214);
      }
      if (pTVar20 == pTVar17) goto LAB_1445fb3c1;
      if ((*(longlong *)&pTVar20->Elements == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar10 = *(longlong *)&pTVar20->Elements;
      uVar13 = 0;
      if (0 < (int)*(uint *)(lVar10 + 0xd0)) {
        lVar23 = *(longlong *)(lVar10 + 200);
        uVar22 = *(uint *)(lVar10 + 0xd0);
        uVar13 = 0;
        do {
          uVar14 = uVar22 >> 1;
          iVar7 = memcmp((void *)(lVar23 + (longlong)(int)(uVar14 + uVar13) * 0xc),&local_48,0xc);
          if (iVar7 < 0) {
            uVar13 = uVar14 + uVar13 + (uVar22 & 1);
          }
          pTVar15 = local_200;
          pTVar17 = local_1f8;
          cVar12 = local_218;
          uVar22 = uVar14;
        } while (uVar14 != 0);
      }
      if ((((int)uVar13 < *(int *)(lVar10 + 0xd0)) &&
          (pFVar8 = TArrayView<FIoChunkId,int>::operator[]
                              ((TArrayView<FIoChunkId,int> *)(lVar10 + 200),uVar13),
          *(longlong *)pFVar8->Id == local_48.Id._0_8_)) &&
         ((*(int *)(pFVar8->Id + 8) == local_48.Id._8_4_ && (uVar13 != 0xffffffff)))) break;
      uVar11 = local_208 & 0xffffffff;
      pTVar20 = (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)
                &(pTVar20->Elements).field_0x28;
    }
    if ((*(longlong *)&pTVar20->Elements == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)&(pTVar20->Elements).field_0x18;
    puVar18 = &(pTVar20->Elements).field_0x1c;
    lVar10 = *(longlong *)&pTVar20->Elements;
    if (iVar7 == *(int *)puVar18) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)&(pTVar20->Elements).field_0x10,(int *)puVar18);
    }
    *(int *)&(pTVar20->Elements).field_0x18 = iVar7 + 1;
    *(uint *)(*(longlong *)&(pTVar20->Elements).field_0x10 + (longlong)iVar7 * 4) = uVar13;
    iVar7 = *(int *)(lVar10 + 0xe0);
    uVar22 = 0;
    if ((int)uVar13 < iVar7) {
      uVar22 = ~uVar13 >> 0x1f;
    }
    if (uVar22 == 0) {
      local_228 = (longlong)(int)uVar13;
      local_220 = (longlong)iVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar18 = &(pTVar20->Elements).field_0x20;
    *(ulonglong *)puVar18 =
         *(longlong *)puVar18 +
         ((ulonglong)
          (*(int *)(*(longlong *)(lVar10 + 0xd8) + 0x18 + (longlong)(int)uVar13 * 0x28) + 0xf) &
         0xfffffff0);
    if (local_213 == '\0') {
      uStack_d0 = 2;
      local_d8 = RequiredChunkTypes;
      local_1e8 = (TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
                   *)RequiredChunkTypes;
      iVar7 = 2;
    }
    else {
      uStack_e0 = 3;
      local_e8 = RequiredAndOptionalChunkTypes;
      local_1e8 = (TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
                   *)RequiredAndOptionalChunkTypes;
      iVar7 = 3;
    }
    local_1d0 = (TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
                 *)((local_1e8->Hash).InlineData + (longlong)iVar7 + -0x38);
    if (local_1e8 != local_1d0) {
      do {
        local_1f0 = *(TBitArray<FDefaultBitArrayAllocator> **)&local_1c8->Elements;
        local_1d8 = (uint)*(byte *)&local_1e8->Elements << 0x18;
        uVar11 = (ulonglong)local_200->ArrayNum;
        pTVar17 = (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)
                  (local_200->AllocatorInstance).Data;
        local_208 = CONCAT44(local_208._4_4_,local_200->ArrayNum);
        local_1f8 = (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)
                    ((longlong)&pTVar17->Hash + uVar11 * 0x28 + -0x38);
        pTVar15 = local_200;
        local_1e0 = local_1f0;
        while( true ) {
          pTVar20 = local_1f8;
          if (pTVar15->ArrayNum != (int)uVar11) {
            local_212[0] = 0;
            `TCheckedPointerIterator<UE::IoStore::Private::FResolvedContainerChunks,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_212);
          }
          if (pTVar17 == pTVar20) goto LAB_1445fb3a9;
          if ((*(longlong *)&pTVar17->Elements == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar10 = *(longlong *)&pTVar17->Elements;
          uVar13 = 0;
          if (0 < (int)*(uint *)(lVar10 + 0xd0)) {
            lVar23 = *(longlong *)(lVar10 + 200);
            uVar22 = *(uint *)(lVar10 + 0xd0);
            uVar13 = 0;
            do {
              uVar14 = uVar22 >> 1;
              iVar7 = memcmp((void *)(lVar23 + (longlong)(int)(uVar14 + uVar13) * 0xc),&local_1e0,
                             0xc);
              if (iVar7 < 0) {
                uVar13 = uVar14 + uVar13 + (uVar22 & 1);
              }
              pTVar15 = local_200;
              cVar12 = local_218;
              uVar22 = uVar14;
            } while (uVar14 != 0);
          }
          if (((((int)uVar13 < *(int *)(lVar10 + 0xd0)) &&
               (pFVar8 = TArrayView<FIoChunkId,int>::operator[]
                                   ((TArrayView<FIoChunkId,int> *)(lVar10 + 200),uVar13),
               *(TBitArray<FDefaultBitArrayAllocator> **)pFVar8->Id == local_1f0)) &&
              (*(int *)(pFVar8->Id + 8) == local_1d8)) && (uVar13 != 0xffffffff)) break;
          uVar11 = local_208 & 0xffffffff;
          pTVar17 = (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)
                    &(pTVar17->Elements).field_0x28;
        }
        if ((*(longlong *)&pTVar17->Elements == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = *(int *)&(pTVar17->Elements).field_0x18;
        puVar18 = &(pTVar17->Elements).field_0x1c;
        lVar10 = *(longlong *)&pTVar17->Elements;
        if (iVar7 == *(int *)puVar18) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)&(pTVar17->Elements).field_0x10,
                             (int *)puVar18);
        }
        *(int *)&(pTVar17->Elements).field_0x18 = iVar7 + 1;
        *(uint *)(*(longlong *)&(pTVar17->Elements).field_0x10 + (longlong)iVar7 * 4) = uVar13;
        iVar7 = *(int *)(lVar10 + 0xe0);
        uVar22 = 0;
        if ((int)uVar13 < iVar7) {
          uVar22 = ~uVar13 >> 0x1f;
        }
        if (uVar22 == 0) {
          local_228 = (longlong)(int)uVar13;
          local_220 = (longlong)iVar7;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        puVar18 = &(pTVar17->Elements).field_0x20;
        *(ulonglong *)puVar18 =
             *(longlong *)puVar18 +
             ((ulonglong)
              (*(int *)(*(longlong *)(lVar10 + 0xd8) + 0x18 + (longlong)(int)uVar13 * 0x28) + 0xf) &
             0xfffffff0);
LAB_1445fb3a9:
        local_1e8 = (TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
                     *)&(local_1e8->Elements).field_0x1;
      } while (local_1e8 != local_1d0);
    }
LAB_1445fb3c1:
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
    uVar22 = local_210;
  } while( true );
}

// ResolvePackageDependencies @ 1445fc790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::IoStore::Private::ResolvePackageDependencies
          (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *param_1,bool param_2
          ,TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *param_3,
          TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *param_4)

{
  FPackageId *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  EPackageStoreEntryStatus EVar10;
  ulonglong uVar11;
  FPackageStore *this;
  byte bVar12;
  int iVar13;
  int iVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  FPackageId FVar20;
  longlong lVar21;
  FPackageId *pFVar22;
  uint *puVar23;
  char cVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  uint *puVar28;
  ForElementType<unsigned_int> FVar29;
  bool bVar30;
  undefined1 auStack_298 [32];
  ulonglong local_278;
  ulonglong local_270;
  char local_268;
  char local_267;
  TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_> local_260;
  undefined1 local_248;
  char local_247;
  ulong64 local_240;
  uint local_238;
  uint uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_230;
  undefined4 local_228;
  uint uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  uint local_218;
  uint uStack_214;
  undefined1 *puStack_210;
  undefined4 local_208;
  int iStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  FPackageId local_1f8;
  undefined8 local_1f0;
  FName local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  undefined8 uStack_1c0;
  int local_1b8;
  undefined4 uStack_1b4;
  TArrayView<FPackageId_const_,int> local_1b0;
  undefined4 local_1a0;
  int local_19c;
  undefined4 local_198;
  int local_194;
  undefined4 local_190;
  undefined1 local_18c [8];
  undefined4 local_184;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *local_180;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *local_178;
  FPackageStoreReadScope local_170;
  FPackageId local_164;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FPackageStoreEntry local_100;
  TArrayView<unsigned_int_const_,int> local_d8;
  longlong local_c0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_b8;
  uint local_b0;
  int iStack_ac;
  ulonglong uStack_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  bVar30 = CpuChannel->Enabled < 0;
  local_247 = param_2;
  local_180 = param_4;
  local_178 = param_3;
  if (bVar30) {
    local_267 = '\0';
  }
  else {
    local_267 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId91,"FOnDemandContentInstaller::ResolvePackageDependencies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
               ,0x5b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId91);
  }
  uVar16 = 0;
  local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.IndexMask = 0xffffffff;
  local_260.Front = 0;
  local_260.AfterBack = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar18 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar19 = 1;
  if (uVar18 == 0) goto LAB_1445fcad0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar18);
  if (3 < uVar18) {
    uVar25 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_1a0 = (undefined4)lVar21;
    uVar19 = 1 << ((byte)lVar21 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar19 <= (int)local_50)) goto LAB_1445fcad0;
  local_50 = uVar19;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar19 != 0) {
    uVar18 = uVar19;
    if (uVar19 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_1445fc91b;
      }
    }
    else {
LAB_1445fc91b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar18,4);
    }
    if (0 < (int)uVar19) {
      uVar27 = (ulonglong)uVar19;
      uVar25 = uVar16;
      do {
        FVar15.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_58.Data;
        }
        uVar11 = uVar25 & (longlong)(int)uVar19 - 1U;
        uVar25 = uVar25 + 1;
        *(undefined4 *)(FVar15.Data + uVar11 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_238 = 0;
    uStack_234 = 1;
    uStack_224 = 0;
    uStack_220 = 0;
    uVar25 = uVar16;
    if (local_70 != 0) {
      FVar29 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_78;
      }
      uVar18 = *(uint *)FVar29;
      uVar27 = uVar16;
      while (uVar18 == 0) {
        uStack_220 = (int)uVar27 + 0x20;
        uVar27 = (ulonglong)uStack_220;
        iVar13 = (int)uVar25;
        local_238 = iVar13 + 1;
        uVar25 = (ulonglong)local_238;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_238)
        goto LAB_1445fca2f;
        uVar18 = ((uint *)((longlong)FVar29 + 4))[iVar13];
      }
      uStack_234 = -uVar18 & uVar18;
      uVar25 = (ulonglong)uStack_234 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_19c = (int)lVar21;
      uStack_224 = (uStack_220 - 1) + local_19c;
      uVar25 = (ulonglong)uStack_224;
      if ((int)local_70 < (int)uStack_224) {
LAB_1445fca2f:
        uVar25 = (ulonglong)local_70;
        uStack_224 = local_70;
      }
    }
    local_228 = 0xffffffff;
    local_158 = (longlong *)local_98;
    local_150._padding_ = CONCAT44(uStack_234,local_238);
    local_150.CurrentBitIndex = uStack_224;
    local_150.UnvisitedBitMask = 0xffffffff;
    local_150._28_4_ = uStack_21c;
    local_150.BaseBitIndex = uStack_220;
    local_150.Array = pTStack_230;
    if ((int)uVar25 < (int)local_70) {
      do {
        puVar28 = (uint *)((longlong)(int)uVar25 * 0x10 + *local_158);
        uVar18 = local_50 - 1 & *puVar28;
        puVar28[3] = uVar18;
        FVar15.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_58.Data;
        }
        uVar27 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
        puVar28[2] = *(uint *)(FVar15.Data + uVar27 * 4);
        *(int *)(FVar15.Data + uVar27 * 4) = (int)uVar25;
        local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
        uVar25 = (ulonglong)(uint)local_150.CurrentBitIndex;
      } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
    }
  }
LAB_1445fcad0:
  uVar19 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar18 = 1;
  if (uVar19 != 0) {
    uVar18 = uVar19;
  }
  uVar25 = (ulonglong)(uVar18 - 1) * 2 + 1;
  lVar21 = 0x3f;
  if (uVar25 != 0) {
    for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
    }
  }
  local_198 = (undefined4)lVar21;
  uVar18 = (uint)(uVar19 != 0) << ((byte)lVar21 & 0x1f);
  if ((0x7fffffff < uVar18 || uVar18 < uVar19) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_260.IndexMask + 1 < uVar18) {
    TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_>::Reallocate(&local_260,uVar18);
  }
  iVar13 = *(int *)&(param_1->Elements).field_0x28;
  puStack_210 = &(param_1->Elements).field_0x10;
  uStack_214 = 1;
  local_218 = 0;
  iStack_204 = 0;
  uStack_200 = 0;
  if (iVar13 != 0) {
    puVar28 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)puStack_210;
    }
    uVar18 = *puVar28;
    uVar25 = uVar16;
    while (uVar18 == 0) {
      uStack_200 = (int)uVar25 + 0x20;
      uVar25 = (ulonglong)uStack_200;
      iVar14 = (int)uVar16;
      local_218 = iVar14 + 1;
      uVar16 = (ulonglong)local_218;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_218)
      goto LAB_1445fcbe7;
      uVar18 = puVar28[(longlong)iVar14 + 1];
    }
    uStack_214 = -uVar18 & uVar18;
    uVar16 = (ulonglong)uStack_214 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_194 = (int)lVar21;
    iStack_204 = local_194 + -1 + uStack_200;
    if (iVar13 < iStack_204) {
LAB_1445fcbe7:
      iStack_204 = iVar13;
    }
  }
  local_208 = 0xffffffff;
  iVar14 = *(int *)&(param_1->Elements).field_0x28;
  TStack_128._padding_ = CONCAT44(uStack_214,local_218);
  bVar12 = (byte)iVar14 & 0x1f;
  local_1b8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  TStack_128.CurrentBitIndex = iStack_204;
  TStack_128.UnvisitedBitMask = 0xffffffff;
  uStack_1c0._4_4_ = uStack_1fc;
  uStack_1c0._0_4_ = uStack_200;
  local_1e0._padding_ = CONCAT44(1 << bVar12,iVar14 >> 5);
  local_1e0.CurrentBitIndex = iVar14;
  local_1e0.UnvisitedBitMask = -1 << bVar12;
  local_1e0._24_8_ = CONCAT44(iStack_204,iVar14) & 0xffffffffffffffe0;
  uStack_108 = CONCAT44(uStack_1b4,local_1b8);
  local_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_210;
  local_130 = param_1;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_210;
  TStack_128._24_8_ = uStack_1c0;
  if (((iVar14 < 0) || (iVar13 < iVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar14 != *(int *)&(param_1->Elements).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
  }
  pTVar6 = local_1e0.Array;
  local_c0 = local_1e0._padding_;
  pTStack_b8 = local_1e0.Array;
  local_b0 = local_1e0.UnvisitedBitMask;
  iStack_ac = local_1e0.CurrentBitIndex;
  uVar8 = _local_b0;
  uStack_a8 = local_1e0._24_8_;
  iStack_ac = local_1e0.CurrentBitIndex;
  iVar13 = iStack_ac;
  _local_b0 = uVar8;
  while( true ) {
    pTVar7 = local_130;
    if (*(int *)&(local_130->Elements).field_0x8 - *(int *)&(local_130->Elements).field_0x34 !=
        (int)uStack_108) {
      local_248 = 0;
      `TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_248);
    }
    lVar21 = (longlong)TStack_128.CurrentBitIndex;
    if (((TStack_128.CurrentBitIndex == iVar13) && (TStack_128.Array == pTVar6)) &&
       (pTVar7 == param_1)) break;
    lVar2 = *(longlong *)&pTVar7->Elements;
    uVar19 = (local_260.AfterBack - local_260.Front) + 1;
    uVar18 = 1;
    if (uVar19 != 0) {
      uVar18 = uVar19;
    }
    uVar16 = (ulonglong)(uVar18 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_190 = (undefined4)lVar3;
    uVar18 = (uint)(uVar19 != 0) << ((byte)lVar3 & 0x1f);
    if ((0x7fffffff < uVar18 || uVar18 < uVar19) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_260.IndexMask + 1 < uVar18) {
      TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_>::Reallocate(&local_260,uVar18);
    }
    uVar18 = local_260.AfterBack;
    local_260.AfterBack = local_260.AfterBack + 1;
    *(undefined8 *)
     (local_260.AllocatorInstance.Data + (ulonglong)(uVar18 & local_260.IndexMask) * 8) =
         *(undefined8 *)(lVar2 + lVar21 * 0x10);
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  }
  this = FPackageStore::Get();
  FPackageStoreReadScope::FPackageStoreReadScope(&local_170,this);
  pTVar7 = local_180;
  cVar5 = local_247;
  cVar24 = !bVar30;
  if (local_260.AfterBack != local_260.Front) {
    do {
      uVar18 = local_260.AfterBack;
      if (local_260.AfterBack == local_260.Front) {
        local_270 = local_270 & 0xffffffff00000000;
        local_278 = CONCAT44(local_278._4_4_,1);
        bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("PopCount <= static_cast<SizeType>(Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3ec,
                            L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i");
        if (bVar30) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = local_260.AfterBack;
      }
      if ((int)(uVar18 - local_260.Front) < 1) {
        local_270 = CONCAT44(local_270._4_4_,uVar18 - local_260.Front);
        local_278 = local_278 & 0xffffffff00000000;
        bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3e3,
                            L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
        if (bVar30) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar20.Id = *(ulong64 *)
                   (local_260.AllocatorInstance.Data +
                   (ulonglong)(local_260.IndexMask & local_260.Front) * 8);
      local_240 = FVar20.Id;
      if ((local_260.IndexMask == 0xffffffff) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                              ,0x37f,L""), bVar30)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_260.Front = local_260.Front + 1;
      local_1e8.ComparisonIndex.Value = 0;
      local_1e8.Number = 0;
      local_1f8.Id = 0;
      bVar30 = FPackageStore::GetPackageRedirectInfo(this,FVar20,&local_1e8,&local_1f8);
      local_268 = '\0';
      if (bVar30) {
        FVar20.Id = local_1f8.Id;
      }
      local_240 = FVar20.Id;
      TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::
      Emplace<FPackageId_const_&>
                ((TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)local_98,
                 (FPackageId *)local_18c,(bool *)&local_240);
      if (local_268 == '\0') {
        local_1f0 = 0;
        local_100.PackageExtension = Unspecified;
        local_100.LoaderType = Zen;
        local_100.ImportedPackageIds.DataPtr = (FPackageId *)0x0;
        local_100.ImportedPackageIds.ArrayNum = 0;
        local_100.ShaderMapHashes.DataPtr = (FSHAHash *)0x0;
        local_100.ShaderMapHashes.ArrayNum = 0;
        EVar10 = FPackageStore::GetPackageStoreEntry(this,FVar20,(FName)0x0,&local_100);
        if (EVar10 == Missing) {
          TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::
          Emplace<FPackageId_const_&>(pTVar7,&local_164,(bool *)&local_240);
        }
        else {
          TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::
          Emplace<FPackageId_const_&>(local_178,(FPackageId *)(local_18c + 4),(bool *)&local_240);
          pFVar1 = local_100.ImportedPackageIds.DataPtr + local_100.ImportedPackageIds.ArrayNum;
          pFVar26 = (FScriptContainerElement *)local_98._0_8_;
          FVar15.Data = local_58.Data;
          for (pFVar22 = local_100.ImportedPackageIds.DataPtr; pFVar22 != pFVar1;
              pFVar22 = pFVar22 + 1) {
            if (local_98._8_4_ != local_64) {
              pFVar17 = local_60;
              if (FVar15.Data != (FScriptContainerElement *)0x0) {
                pFVar17 = FVar15.Data;
              }
              iVar13 = *(int *)(pFVar17 + (ulonglong)(local_50 - 1 & (uint)pFVar22->Id) * 4);
              if (iVar13 != -1) {
                do {
                  if (*(ulong64 *)(pFVar26 + (longlong)iVar13 * 0x10) == pFVar22->Id)
                  goto LAB_1445fd0b2;
                  iVar13 = *(int *)(pFVar26 + (longlong)iVar13 * 0x10 + 8);
                } while (iVar13 != -1);
              }
            }
            uVar19 = (local_260.AfterBack - local_260.Front) + 1;
            uVar18 = 1;
            if (uVar19 != 0) {
              uVar18 = uVar19;
            }
            uVar16 = (ulonglong)(uVar18 - 1) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_184 = (undefined4)lVar21;
            uVar18 = (uint)(uVar19 != 0) << ((byte)lVar21 & 0x1f);
            if ((0x7fffffff < uVar18 || uVar18 < uVar19) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                    ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar30)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_260.IndexMask + 1 < uVar18) {
              TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_>::Reallocate(&local_260,uVar18);
            }
            uVar18 = local_260.AfterBack;
            local_260.AfterBack = local_260.AfterBack + 1;
            *(ulong64 *)
             (local_260.AllocatorInstance.Data + (ulonglong)(uVar18 & local_260.IndexMask) * 8) =
                 pFVar22->Id;
            pFVar26 = (FScriptContainerElement *)local_98._0_8_;
            FVar15.Data = local_58.Data;
LAB_1445fd0b2:
            FVar20.Id = local_240;
          }
          if (cVar5 != '\0') {
            local_1b0.DataPtr = (FPackageId *)0x0;
            local_1b0.ArrayNum = 0;
            FPackageStore::GetSoftReferences(this,&local_d8,FVar20,&local_1b0);
            puVar28 = local_d8.DataPtr + local_d8.ArrayNum;
            uVar16 = local_270;
            for (puVar23 = local_d8.DataPtr; local_270 = uVar16, puVar23 != puVar28;
                puVar23 = puVar23 + 1) {
              uVar18 = *puVar23;
              local_270 = (ulonglong)local_1b0.ArrayNum;
              uVar19 = 0;
              if ((int)uVar18 < local_1b0.ArrayNum) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (local_278 = (longlong)(int)uVar18,
                 bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 uVar16 = local_270, bVar30)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_270 = uVar16;
              pFVar1 = local_1b0.DataPtr + (int)uVar18;
              if (local_98._8_4_ != local_64) {
                FVar15.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar15.Data = local_58.Data;
                }
                iVar13 = *(int *)(FVar15.Data + (ulonglong)(local_50 - 1 & (uint)pFVar1->Id) * 4);
                if (iVar13 != -1) {
                  do {
                    if (*(ulong64 *)(local_98._0_8_ + (longlong)iVar13 * 0x10) == pFVar1->Id)
                    goto LAB_1445fd268;
                    iVar13 = *(int *)(local_98._0_8_ + (longlong)iVar13 * 0x10 + 8);
                  } while (iVar13 != -1);
                }
              }
              uVar19 = (local_260.AfterBack - local_260.Front) + 1;
              uVar18 = 1;
              if (uVar19 != 0) {
                uVar18 = uVar19;
              }
              uVar16 = (ulonglong)(uVar18 - 1) * 2 + 1;
              lVar21 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_164.Id._4_4_ = (undefined4)lVar21;
              uVar18 = (uint)(uVar19 != 0) << ((byte)lVar21 & 0x1f);
              if ((0x7fffffff < uVar18 || uVar18 < uVar19) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                      ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar30))
              {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (local_260.IndexMask + 1 < uVar18) {
                TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_>::Reallocate(&local_260,uVar18);
              }
              uVar18 = local_260.AfterBack;
              local_260.AfterBack = local_260.AfterBack + 1;
              *(ulong64 *)
               (local_260.AllocatorInstance.Data + (ulonglong)(uVar18 & local_260.IndexMask) * 8) =
                   pFVar1->Id;
LAB_1445fd268:
              uVar16 = local_270;
            }
          }
        }
      }
      cVar24 = local_267;
    } while (local_260.AfterBack != local_260.Front);
  }
  FPackageStoreReadScope::~FPackageStoreReadScope(&local_170);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if ((local_260.IndexMask + 1 < local_260.AfterBack - local_260.Front) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                          ,0x37f,L""), bVar30)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_260.Front = 0;
  local_260.AfterBack = 0;
  TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_>::Reallocate(&local_260,0);
  if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.AllocatorInstance.Data);
  }
  if (cVar24 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SecondsToMillicseconds @ 1445fe2c0

int __cdecl UE::IoStore::Private::SecondsToMillicseconds(double param_1)

{
  if (0.0 < param_1) {
    return (int)(param_1 * __real_408f400000000000);
  }
  return 0;
}

// SendImmediateAnalytic @ 1445fe2e0

void __cdecl UE::IoStore::SendImmediateAnalytic(FOnDemandImmediateAnalytic *param_1)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  FScriptContainerElement *local_28;
  int local_20;
  int local_1c;
  FAnalyticsEventAttribute *local_18;
  int local_10;
  int local_c;
  
  if ((0.0 < GIaxImmediateAnalyticsChance) &&
     (uVar10 = rand(), (float)(uVar10 & 0x7fff) * __real_38000100 <= GIaxImmediateAnalyticsChance))
  {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      LOCK();
      bVar13 = OnDemandImmediateAnalyticEventHandlerMutex.State == (atomic<unsigned_char>)0x0;
      if (bVar13) {
        OnDemandImmediateAnalyticEventHandlerMutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar13) {
        FMutex::LockSlow(&OnDemandImmediateAnalyticEventHandlerMutex);
      }
      uVar9 = SafeHandler.EventHandler._40_8_;
      uVar8 = SafeHandler.EventHandler._32_8_;
      uVar7 = SafeHandler.EventHandler._24_8_;
      uVar6 = SafeHandler.EventHandler._16_8_;
      uVar5 = SafeHandler.EventHandler._8_8_;
      uVar4 = SafeHandler.EventHandler._0_8_;
      uVar3 = OnDemandImmediateAnalyticEventHandler.EventHandler._0_8_;
      uVar11 = OnDemandImmediateAnalyticEventHandler.EventHandler._8_8_;
      SafeHandler.EventHandler._16_8_ = OnDemandImmediateAnalyticEventHandler.EventHandler._16_8_;
      SafeHandler.EventHandler._24_8_ = OnDemandImmediateAnalyticEventHandler.EventHandler._24_8_;
      SafeHandler.EventHandler._0_8_ = OnDemandImmediateAnalyticEventHandler.EventHandler._0_8_;
      SafeHandler.EventHandler._8_8_ = OnDemandImmediateAnalyticEventHandler.EventHandler._8_8_;
      SafeHandler.EventHandler._32_8_ = OnDemandImmediateAnalyticEventHandler.EventHandler._32_8_;
      SafeHandler.EventHandler._40_8_ = OnDemandImmediateAnalyticEventHandler.EventHandler._40_8_;
      OnDemandImmediateAnalyticEventHandler.EventHandler._0_8_ = uVar4;
      OnDemandImmediateAnalyticEventHandler.EventHandler._8_8_ = uVar5;
      OnDemandImmediateAnalyticEventHandler.EventHandler._16_8_ = uVar6;
      OnDemandImmediateAnalyticEventHandler.EventHandler._24_8_ = uVar7;
      OnDemandImmediateAnalyticEventHandler.EventHandler._32_8_ = uVar8;
      OnDemandImmediateAnalyticEventHandler.EventHandler._40_8_ = uVar9;
      LOCK();
      aVar2 = OnDemandImmediateAnalyticEventHandlerMutex.State + -1;
      UNLOCK();
      bVar1 = (byte)OnDemandImmediateAnalyticEventHandlerMutex.State & 2;
      OnDemandImmediateAnalyticEventHandlerMutex.State = aVar2;
      if (bVar1 != 0) {
        FMutex::WakeWaitingThread(&OnDemandImmediateAnalyticEventHandlerMutex);
      }
      atexit(`UE::IoStore::SendImmediateAnalytic'::__l5::
             _dynamic_atexit_destructor_for__SafeHandler__);
      _Init_thread_footer(&::_TSS0);
    }
    if (SafeHandler.EventHandler._0_8_ != 0) {
      local_28 = (param_1->EventName).Data.AllocatorInstance.Data;
      (param_1->EventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_20 = (param_1->EventName).Data.ArrayNum;
      local_1c = (param_1->EventName).Data.ArrayMax;
      (param_1->EventName).Data.ArrayNum = 0;
      (param_1->EventName).Data.ArrayMax = 0;
      local_18 = (FAnalyticsEventAttribute *)(param_1->AnalyticsArray).AllocatorInstance.Data;
      (param_1->AnalyticsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_10 = (param_1->AnalyticsArray).ArrayNum;
      local_c = (param_1->AnalyticsArray).ArrayMax;
      (param_1->AnalyticsArray).ArrayNum = 0;
      (param_1->AnalyticsArray).ArrayMax = 0;
      Core::Private::Function::CheckCallable((void *)SafeHandler.EventHandler._0_8_);
      uVar3 = SafeHandler.EventHandler._0_8_;
      plVar12 = (longlong *)&SafeHandler.EventHandler.field_0x10;
      if (SafeHandler.EventHandler._40_8_ != 0) {
        plVar12 = (longlong *)SafeHandler.EventHandler._40_8_;
      }
      uVar11 = (**(code **)(*plVar12 + 8))();
      (*(code *)uVar3)(uVar11,&local_28);
      DestructItems<FAnalyticsEventAttribute,int>(local_18,local_10);
      if (local_18 != (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_18);
      }
      if (local_28 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
  return;
}

// ToHex @ 144605010

FString * __cdecl
UE::GenericHash::ToHex(FString *__return_storage_ptr__,TMemoryView<void_const_> *param_1)

{
  code *pcVar1;
  uchar *puVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  undefined4 uStack_4c;
  TArrayView<unsigned_char_const_,int> local_38;
  TStringBuilderBase<wchar_t> local_28;
  
  puVar2 = param_1->Data;
  iVar5 = (int)param_1->Size;
  local_28.End = (wchar_t *)0x0;
  local_28.bIsDynamic = false;
  local_28.bIsExternal = false;
  local_28.Base = (wchar_t *)0x0;
  local_28.CurPos = (wchar_t *)0x0;
  if ((param_1->Size != (longlong)iVar5) || (iVar5 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iVar5;
  local_38.DataPtr = puVar2;
  String::BytesToHexLower(&local_38,&local_28);
  if (local_28.End < local_28.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_28,1);
  }
  *local_28.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_28.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_28);
  return __return_storage_ptr__;
}

// ToHex @ 144605140

TStringBuilderBase<wchar_t> * __cdecl
UE::GenericHash::ToHex(TMemoryView<void_const_> *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  int iVar4;
  uchar *local_28;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> local_18;
  
  iVar4 = (int)param_1->Size;
  if ((param_1->Size == (longlong)iVar4) && (-1 < iVar4)) {
    local_28 = param_1->Data;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStringBuilderBase<wchar_t> *)(*pcVar1)();
      return pTVar3;
    }
    local_28 = param_1->Data;
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TStringBuilderBase<wchar_t> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar4;
  local_18.DataPtr = local_28;
  String::BytesToHexLower(&local_18,param_2);
  return param_2;
}

// ToKiB @ 144605210

double __cdecl UE::IoStore::ToKiB(ulong64 param_1)

{
  if (-1 < (longlong)param_1) {
    return (double)(longlong)param_1 * __real_3f50000000000000;
  }
  return (double)param_1 * __real_3f50000000000000;
}

// ToMiB @ 144605250

double __cdecl UE::IoStore::ToMiB(ulong64 param_1)

{
  if (-1 < (longlong)param_1) {
    return (double)(longlong)param_1 * __real_3eb0000000000000;
  }
  return (double)param_1 * __real_3eb0000000000000;
}

// Trace @ 144605390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl UE::IoStore::Trace(bool param_1,FIoChunkId *param_2,FChunkRequestParams *param_3)

{
  LARGE_INTEGER *pLVar1;
  void *pvVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pLVar1 = (LARGE_INTEGER *)(param_3->ChunkInfo).Entry;
  pvVar2 = HTTP::GetIaxTraceChannel();
  if (pvVar2 != (void *)0x0) {
    UE::Trace::Private::FLogScope::Enter<UE::IoStore::FIasChunkRequestFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].s.LowPart =
         CONCAT31(CONCAT21(CONCAT11((param_3->ChunkRange).OffsetAndLength[1],
                                    (param_3->ChunkRange).OffsetAndLength[2]),
                           (param_3->ChunkRange).OffsetAndLength[3]),
                  (param_3->ChunkRange).OffsetAndLength[4]);
    *(uint *)((longlong)local_20 + 0xc) =
         CONCAT31(CONCAT21(CONCAT11((param_3->ChunkRange).OffsetAndLength[6],
                                    (param_3->ChunkRange).OffsetAndLength[7]),
                           (param_3->ChunkRange).OffsetAndLength[8]),
                  (param_3->ChunkRange).OffsetAndLength[9]);
    local_20[2] = *pLVar1;
    local_20[3] = pLVar1[1];
    local_20[4].s.LowPart = pLVar1[2].s.LowPart;
    *(undefined8 *)((longlong)local_20 + 0x24) = *(undefined8 *)param_2->Id;
    *(undefined4 *)((longlong)local_20 + 0x2c) = *(undefined4 *)(param_2->Id + 8);
    *(bool *)(local_20 + 6) = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// TryParseConfigContent @ 144606ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::IoStore::Config::TryParseConfigContent
          (FString *param_1,FString *param_2,FOnDemandEndpointConfig *param_3)

{
  uint uVar1;
  int iVar2;
  FConfigSection *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  FConfigSection *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  undefined1 *puVar16;
  FConfigSection *pFVar17;
  wchar_t *pwVar18;
  bool bVar19;
  undefined1 auStack_188 [32];
  TStringView<wchar_t> local_168;
  undefined1 local_158 [8];
  undefined1 local_150 [48];
  int local_120;
  int local_f4;
  undefined1 local_f0 [8];
  undefined1 *local_e8;
  int local_e0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((param_1->Data).ArrayNum < 2) {
    return false;
  }
  FConfigFile::FConfigFile((FConfigFile *)(local_150 + 0x28));
  local_168.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  pFVar17 = (FConfigSection *)0x0;
  iVar6 = (param_1->Data).ArrayNum;
  iVar4 = 0;
  local_168.Size = iVar6 + -1;
  if (iVar6 == 0) {
    local_168.Size = iVar4;
  }
  FConfigFile::ProcessInputFileContents((FConfigFile *)(local_150 + 0x28),&local_168,param_2);
  ::FString::FString((FString *)&local_168,L"Endpoint");
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pwVar18 = L"";
  if (local_168.Size == 0) {
    pwVar9 = L"";
  }
  else {
    iVar4 = local_168.Size + -1;
    pwVar9 = local_168.DataPtr;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar9);
  if (local_120 != local_f4) {
    puVar16 = local_f0;
    if (local_e8 != (undefined1 *)0x0) {
      puVar16 = local_e8;
    }
    iVar6 = *(int *)(puVar16 + (ulonglong)(local_e0 - 1U & uVar1) * 4);
    uVar10 = local_168._8_8_;
    lVar7 = local_150._40_8_;
    while (iVar6 != -1) {
      lVar13 = (longlong)iVar6 * 0x110;
      iVar4 = *(int *)(lVar7 + 8 + lVar13);
      if (iVar4 == (int)uVar10) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)(lVar7 + lVar13),local_168.DataPtr);
          bVar19 = iVar4 == 0;
          lVar7 = local_150._40_8_;
          uVar10 = local_168._8_8_;
          goto LAB_14460713b;
        }
LAB_144607150:
        pFVar3 = (FConfigSection *)(lVar7 + lVar13);
        if (iVar6 != -1) goto LAB_14460715c;
        break;
      }
      bVar19 = iVar4 + (int)uVar10 == 1;
LAB_14460713b:
      if (bVar19) goto LAB_144607150;
      iVar6 = *(int *)(lVar7 + 0x108 + lVar13);
    }
  }
  pFVar3 = pFVar17;
LAB_14460715c:
  pFVar12 = (FConfigSection *)&pFVar3->_padding_;
  if (pFVar3 == (FConfigSection *)0x0) {
    pFVar12 = pFVar17;
  }
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((FScriptContainerElement *)local_168.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.DataPtr);
  }
  if (pFVar12 != (FConfigSection *)0x0) {
    FConfigSection::GetString(pFVar12,L"DistributionUrl",&param_3->DistributionUrl);
  }
  iVar6 = 0;
  if (1 < (param_3->DistributionUrl).Data.ArrayNum) {
    ::FString::FString((FString *)&local_168,L"Endpoint");
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_168.Size == 0) {
      pwVar9 = L"";
      iVar4 = iVar6;
    }
    else {
      pwVar9 = local_168.DataPtr;
      iVar4 = local_168.Size + -1;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar9);
    if (local_120 != local_f4) {
      puVar16 = local_f0;
      if (local_e8 != (undefined1 *)0x0) {
        puVar16 = local_e8;
      }
      iVar4 = *(int *)(puVar16 + (ulonglong)(local_e0 - 1U & uVar1) * 4);
      uVar10 = local_168._8_8_;
      lVar7 = local_150._40_8_;
      while (iVar4 != -1) {
        lVar13 = (longlong)iVar4 * 0x110;
        iVar2 = *(int *)(lVar7 + 8 + lVar13);
        if (iVar2 == (int)uVar10) {
          if (1 < iVar2) {
            iVar2 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(lVar7 + lVar13),local_168.DataPtr);
            bVar19 = iVar2 == 0;
            lVar7 = local_150._40_8_;
            uVar10 = local_168._8_8_;
            goto LAB_14460725b;
          }
LAB_144607270:
          pFVar3 = (FConfigSection *)(lVar7 + lVar13);
          if (iVar4 != -1) goto LAB_14460727c;
          break;
        }
        bVar19 = iVar2 + (int)uVar10 == 1;
LAB_14460725b:
        if (bVar19) goto LAB_144607270;
        iVar4 = *(int *)(lVar7 + 0x108 + lVar13);
      }
    }
    pFVar3 = pFVar17;
LAB_14460727c:
    pFVar12 = (FConfigSection *)&pFVar3->_padding_;
    if (pFVar3 == (FConfigSection *)0x0) {
      pFVar12 = pFVar17;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if ((FScriptContainerElement *)local_168.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
    if (pFVar12 != (FConfigSection *)0x0) {
      FConfigSection::GetString(pFVar12,L"FallbackUrl",&param_3->FallbackUrl);
    }
    iVar4 = GDistributedEndpointFallbackUrl.Data.ArrayNum;
    if (1 < iVar4) {
      iVar2 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar2 = iVar6;
      }
      ::FString::AssignRange
                (&param_3->FallbackUrl,
                 (wchar_t *)GDistributedEndpointFallbackUrl.Data.AllocatorInstance.Data,iVar2);
    }
  }
  FConfigFile::GetArray
            ((FConfigFile *)(local_150 + 0x28),L"Endpoint",L"ServiceUrl",&param_3->ServiceUrls);
  ::FString::FString((FString *)&local_168,L"Endpoint");
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_168.Size == 0) {
    pwVar9 = L"";
    iVar4 = iVar6;
  }
  else {
    pwVar9 = local_168.DataPtr;
    iVar4 = local_168.Size + -1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar9);
  if (local_120 != local_f4) {
    puVar16 = local_f0;
    if (local_e8 != (undefined1 *)0x0) {
      puVar16 = local_e8;
    }
    iVar4 = *(int *)(puVar16 + (ulonglong)(local_e0 - 1U & uVar1) * 4);
    uVar10 = local_168._8_8_;
    lVar7 = local_150._40_8_;
    while (iVar4 != -1) {
      lVar13 = (longlong)iVar4 * 0x110;
      iVar2 = *(int *)(lVar7 + 8 + lVar13);
      if (iVar2 == (int)uVar10) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)(lVar7 + lVar13),local_168.DataPtr);
          bVar19 = iVar2 == 0;
          lVar7 = local_150._40_8_;
          uVar10 = local_168._8_8_;
          goto LAB_1446073ac;
        }
LAB_1446073c1:
        pFVar3 = (FConfigSection *)(lVar7 + lVar13);
        if (iVar4 != -1) goto LAB_1446073cd;
        break;
      }
      bVar19 = iVar2 + (int)uVar10 == 1;
LAB_1446073ac:
      if (bVar19) goto LAB_1446073c1;
      iVar4 = *(int *)(lVar7 + 0x108 + lVar13);
    }
  }
  pFVar3 = pFVar17;
LAB_1446073cd:
  pFVar12 = (FConfigSection *)&pFVar3->_padding_;
  if (pFVar3 == (FConfigSection *)0x0) {
    pFVar12 = pFVar17;
  }
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((FScriptContainerElement *)local_168.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.DataPtr);
  }
  if (pFVar12 != (FConfigSection *)0x0) {
    FConfigSection::GetString(pFVar12,L"TocPath",&param_3->TocPath);
  }
  bVar19 = ::FString::EndsWith(&param_3->DistributionUrl,L"/",1,IgnoreCase);
  iVar4 = 0;
  if (bVar19) {
    iVar2 = (param_3->DistributionUrl).Data.ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar5 = iVar6;
    }
    iVar8 = iVar5 + -1;
    if (iVar2 == 0) {
      iVar2 = iVar6;
      if (iVar8 < 0) {
        iVar2 = iVar8;
      }
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_3->DistributionUrl).Data.AllocatorInstance.Data;
      if (iVar8 < iVar2 + -1) {
        iVar2 = iVar5;
      }
      iVar2 = iVar2 + -1;
    }
    iVar5 = iVar4;
    if (0 < iVar2) {
      iVar5 = iVar2;
    }
    ::FString::ConstructFromPtrSize((FString *)local_150,pwVar9,iVar5);
    if (param_3 != (FOnDemandEndpointConfig *)local_150) {
      pFVar11 = (param_3->DistributionUrl).Data.AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (param_3->DistributionUrl).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_150._0_8_;
      (param_3->DistributionUrl).Data.ArrayNum = local_150._8_4_;
      (param_3->DistributionUrl).Data.ArrayMax = local_150._12_4_;
      local_150._8_4_ = 0;
      local_150._12_4_ = 0;
      local_150._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_150._0_8_);
    }
  }
  iVar2 = (param_3->ServiceUrls).ArrayNum;
  pFVar11 = (param_3->ServiceUrls).AllocatorInstance.Data;
  pFVar14 = pFVar11 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_3->ServiceUrls).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (pFVar11 == pFVar14) break;
    bVar19 = ::FString::EndsWith((FString *)pFVar11,L"/",1,IgnoreCase);
    if (bVar19) {
      iVar5 = *(int *)&pFVar11[8].field_0x0;
      iVar8 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar8 = iVar4;
      }
      iVar15 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar15 = iVar4;
      }
      iVar5 = iVar15;
      if (iVar8 + -1 < iVar15) {
        iVar5 = iVar8 + -1;
      }
      iVar8 = iVar4;
      if (0 < iVar5) {
        iVar8 = iVar5;
      }
      ::FString::RemoveAt((FString *)pFVar11,iVar8,iVar15 - iVar8,Default);
    }
    pFVar11 = pFVar11 + 0x10;
  }
  bVar19 = ::FString::StartsWith(&param_3->TocPath,L"/",1,IgnoreCase);
  if (bVar19) {
    ::FString::RemoveAt(&param_3->TocPath,0,1,Default);
  }
  local_150._16_8_ = (FScriptContainerElement *)0x0;
  local_150._24_4_ = 0;
  local_150._28_4_ = 0;
  ::FString::FString((FString *)&local_168,L"Endpoint");
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_168.Size != 0) {
    iVar6 = local_168.Size + -1;
    pwVar18 = local_168.DataPtr;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar18);
  if (local_120 != local_f4) {
    puVar16 = local_f0;
    if (local_e8 != (undefined1 *)0x0) {
      puVar16 = local_e8;
    }
    iVar6 = *(int *)(puVar16 + (ulonglong)(local_e0 - 1U & uVar1) * 4);
    uVar10 = local_168._8_8_;
    lVar7 = local_150._40_8_;
    while (iVar6 != -1) {
      lVar13 = (longlong)iVar6 * 0x110;
      iVar2 = *(int *)(lVar7 + 8 + lVar13);
      if (iVar2 == (int)uVar10) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)(lVar7 + lVar13),local_168.DataPtr);
          bVar19 = iVar2 == 0;
          lVar7 = local_150._40_8_;
          uVar10 = local_168._8_8_;
          goto LAB_14460762b;
        }
LAB_144607640:
        pFVar3 = (FConfigSection *)(lVar7 + lVar13);
        if (iVar6 != -1) goto LAB_14460764c;
        break;
      }
      bVar19 = iVar2 + (int)uVar10 == 1;
LAB_14460762b:
      if (bVar19) goto LAB_144607640;
      iVar6 = *(int *)(lVar7 + 0x108 + lVar13);
    }
  }
  pFVar3 = pFVar17;
LAB_14460764c:
  pFVar12 = (FConfigSection *)&pFVar3->_padding_;
  if (pFVar3 == (FConfigSection *)0x0) {
    pFVar12 = pFVar17;
  }
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((FScriptContainerElement *)local_168.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.DataPtr);
  }
  if ((pFVar12 != (FConfigSection *)0x0) &&
     (bVar19 = FConfigSection::GetString(pFVar12,L"ContentKey",(FString *)(local_150 + 0x10)),
     bVar19)) {
    ApplyEncryptionKeyFromString((FString *)(local_150 + 0x10));
  }
  iVar6 = (param_3->DistributionUrl).Data.ArrayNum;
  iVar2 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar2 = iVar4;
  }
  if ((0 < iVar2) || (0 < (param_3->ServiceUrls).ArrayNum)) {
    iVar6 = (param_3->TocPath).Data.ArrayNum;
    iVar2 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar2 = iVar4;
    }
    if (0 < iVar2) {
      bVar19 = true;
      goto LAB_1446076c6;
    }
  }
  bVar19 = false;
LAB_1446076c6:
  if ((FScriptContainerElement *)local_150._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_150._16_8_);
  }
  FConfigFile::~FConfigFile((FConfigFile *)(local_150 + 0x28));
  return bVar19;
}

// TryParseEndpointConfig @ 144607710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144607acc) */

TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> * __cdecl
UE::IoStore::Config::TryParseEndpointConfig
          (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *__return_storage_ptr__,
          wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FIoStatusBuilder *pFVar5;
  FString *pFVar6;
  TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *pTVar7;
  void *pvVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  undefined1 auStackY_e38 [32];
  FString local_de8;
  FOnDemandEndpointConfig local_dd8;
  undefined1 local_d88 [8];
  FString local_d80;
  FString local_d70;
  FString local_d60;
  FString local_d50;
  FString local_d40;
  FIoStatus local_d30;
  FIoStatus local_d20;
  FIoStatus local_d10;
  FIoStatus local_d00;
  FIoStatus local_cf0;
  FIoStatus local_ce0;
  FIoStatus local_cd0;
  FIoStatus local_cc0;
  FString local_cb0;
  FScriptContainerElement *local_c98;
  int iStack_c90;
  undefined4 uStack_c8c;
  wchar_t *local_c88;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  wchar_t *local_c78;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  FScriptContainerElement *local_c68;
  int iStack_c60;
  undefined4 uStack_c5c;
  wchar_t *local_c58;
  undefined4 uStack_c50;
  undefined4 uStack_c4c;
  FString local_c48;
  wchar_t *local_c38;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  FScriptContainerElement *local_c28;
  int iStack_c20;
  undefined4 uStack_c1c;
  wchar_t *local_c18;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  wchar_t *local_c08;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  TStringView<wchar_t> local_bf8;
  FScriptContainerElement *local_be8;
  int local_be0;
  TStringView<wchar_t> local_bd8;
  FString local_bc8;
  TStringView<wchar_t> local_bb8;
  TStringView<wchar_t> local_ba8;
  TStringView<wchar_t> local_b98;
  TStringView<wchar_t> local_b88;
  TStringView<wchar_t> local_b78;
  TStringView<wchar_t> local_b68;
  TStringView<wchar_t> local_b58;
  TStringView<wchar_t> local_b48;
  FString local_b38;
  TStringBuilderBase<wchar_t> local_b28;
  wchar_t local_b08 [256];
  FIoStatusBuilder local_908;
  FIoStatusBuilder local_6d8;
  FIoStatusBuilder local_4a8;
  FIoStatusBuilder local_278;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e38;
  local_d50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d50.Data.ArrayNum = 0;
  local_d50.Data.ArrayMax = 0;
  bVar2 = FParse::Value(param_1,L"Ias.EncryptionKey=",&local_d50,true,(wchar_t **)0x0);
  if (bVar2) {
    ApplyEncryptionKeyFromString(&local_d50);
  }
  if (local_d50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d50.Data.AllocatorInstance.Data);
  }
  bVar2 = FParse::Param(param_1,L"NoIas");
  if (bVar2) {
    pFVar5 = FIoStatusBuilder::FIoStatusBuilder(&local_908,Disabled);
    uStack_c00 = 0x14;
    local_c08 = L"Disabled by \'-NoIas\'";
    local_b78._12_4_ = uStack_bfc;
    local_b78.Size = 0x14;
    local_b78.DataPtr = L"Disabled by \'-NoIas\'";
    pFVar5 = FIoStatusBuilder::operator<<(pFVar5,&local_b78);
    FIoStatusBuilder::operator_FIoStatus(pFVar5,&local_d30);
    FIoStatusBuilder::~FIoStatusBuilder(&local_908);
    local_cf0.ErrorMessage.Chars = local_d30.ErrorMessage.Chars;
    if (local_d30.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_d30.ErrorMessage.Chars + -4) = *(int *)(local_d30.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_cf0.ErrorCode = local_d30.ErrorCode;
    local_cf0.SystemErrorCode = local_d30.SystemErrorCode;
    TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::
    TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>(__return_storage_ptr__,&local_cf0);
    FIoStatus::~FIoStatus(&local_d30);
    return __return_storage_ptr__;
  }
  local_dd8.DistributionUrl.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.DistributionUrl.Data.ArrayNum = 0;
  local_dd8.DistributionUrl.Data.ArrayMax = 0;
  local_dd8.FallbackUrl.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.FallbackUrl.Data.ArrayNum = 0;
  local_dd8.FallbackUrl.Data.ArrayMax = 0;
  local_dd8.ServiceUrls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.ServiceUrls.ArrayNum = 0;
  local_dd8.ServiceUrls.ArrayMax = 0;
  local_dd8.TocPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.TocPath.Data.ArrayNum = 0;
  local_dd8.TocPath.Data.ArrayMax = 0;
  local_dd8.TocFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.TocFilePath.Data.ArrayNum = 0;
  local_dd8.TocFilePath.Data.ArrayMax = 0;
  local_d80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d80.Data.ArrayNum = 0;
  local_d80.Data.ArrayMax = 0;
  bVar2 = FParse::Value(param_1,L"Ias.TocUrl=",&local_d80,true,(wchar_t **)0x0);
  FVar14.Data = local_d80.Data.AllocatorInstance.Data;
  iVar4 = 0;
  iVar10 = 0;
  if (bVar2) {
    iVar13 = local_d80.Data.ArrayNum + -1;
    if (local_d80.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    iVar3 = iVar13;
    if (7 < iVar13) {
      iVar3 = 7;
    }
    iVar11 = iVar4;
    if (0 < iVar3) {
      iVar11 = iVar3;
    }
    if ((iVar11 == 7) &&
       (iVar3 = FGenericPlatformStricmp::Strnicmp
                          (L"http://",(wchar_t *)local_d80.Data.AllocatorInstance.Data,7),
       iVar3 == 0)) {
      lVar15 = (longlong)iVar13;
      iVar3 = iVar13;
      if (0xb < iVar13) {
        iVar3 = 0xb;
      }
      iVar11 = iVar4;
      if (0 < iVar3) {
        iVar11 = iVar3;
      }
      if ((iVar11 == 0xb) &&
         (iVar3 = FGenericPlatformStricmp::Strnicmp
                            (L".iochunktoc",(wchar_t *)(FVar14.Data + (lVar15 - iVar11) * 2),0xb),
         iVar3 == 0)) {
        iVar3 = iVar13;
        if (iVar13 + -7 < iVar13) {
          iVar3 = iVar13 + -7;
        }
        iStack_c90 = iVar4;
        if (0 < iVar3) {
          iStack_c90 = iVar3;
        }
        local_c98 = FVar14.Data + (lVar15 - iStack_c90) * 2;
        local_bd8._12_4_ = uStack_c8c;
        local_bd8.Size = iStack_c90;
        local_bd8.DataPtr = (wchar_t *)local_c98;
        iVar4 = String::FindFirstChar(&local_bd8,L'/',CaseSensitive);
        if (iVar4 != -1) {
          local_de8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_de8.Data.ArrayNum = 0;
          local_de8.Data.ArrayMax = 0;
          iVar3 = iVar13;
          if (iVar4 + 7 < iVar13) {
            iVar3 = iVar4 + 7;
          }
          iVar4 = iVar10;
          if (0 < iVar3) {
            iVar4 = iVar3;
          }
          pFVar6 = ::FString::ConstructFromPtrSize(&local_bc8,(wchar_t *)FVar14.Data,iVar4);
          if (&local_de8 != pFVar6) {
            if (local_de8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_de8.Data.AllocatorInstance.Data);
            }
            local_de8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
            (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_de8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
            local_de8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
            (pFVar6->Data).ArrayNum = 0;
            (pFVar6->Data).ArrayMax = 0;
          }
          if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
          }
          if (((local_dd8.ServiceUrls.AllocatorInstance.Data <=
                (FScriptContainerElement *)&local_de8) &&
              ((FScriptContainerElement *)&local_de8 <
               local_dd8.ServiceUrls.AllocatorInstance.Data +
               (longlong)local_dd8.ServiceUrls.ArrayMax * 0x10)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar7 = (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *)(*pcVar1)();
            return pTVar7;
          }
          iVar4 = local_dd8.ServiceUrls.ArrayNum;
          if (local_dd8.ServiceUrls.ArrayNum == local_dd8.ServiceUrls.ArrayMax) {
            iVar4 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_dd8.ServiceUrls.AllocatorInstance,
                               &local_dd8.ServiceUrls.ArrayMax);
          }
          local_dd8.ServiceUrls.ArrayNum = iVar4 + 1;
          pFVar12 = local_dd8.ServiceUrls.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
          *(undefined8 *)pFVar12 = 0;
          *(FScriptContainerElement **)pFVar12 = local_de8.Data.AllocatorInstance.Data;
          *(int *)(pFVar12 + 8) = local_de8.Data.ArrayNum;
          *(int *)(pFVar12 + 0xc) = local_de8.Data.ArrayMax;
          local_de8.Data.ArrayNum = 0;
          local_de8.Data.ArrayMax = 0;
          local_de8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if ((iVar4 + 1 < 1) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar7 = (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *)(*pcVar1)();
            return pTVar7;
          }
          iVar4 = *(int *)(local_dd8.ServiceUrls.AllocatorInstance.Data + 8) + -1;
          if (*(int *)(local_dd8.ServiceUrls.AllocatorInstance.Data + 8) == 0) {
            iVar4 = iVar10;
          }
          iVar4 = (iVar13 - iVar4) + -1;
          if (iVar4 < iVar13) {
            iVar13 = iVar4;
          }
          iVar4 = iVar10;
          if (0 < iVar13) {
            iVar4 = iVar13;
          }
          ::FString::AssignRange
                    (&local_dd8.TocPath,(wchar_t *)(FVar14.Data + (lVar15 - iVar4) * 2),iVar4);
        }
      }
    }
    iVar4 = local_dd8.DistributionUrl.Data.ArrayNum + -1;
    if (local_dd8.DistributionUrl.Data.ArrayNum == 0) {
      iVar4 = iVar10;
    }
    if ((0 < iVar4) || (0 < local_dd8.ServiceUrls.ArrayNum)) {
      iVar4 = local_dd8.TocPath.Data.ArrayNum + -1;
      if (local_dd8.TocPath.Data.ArrayNum == 0) {
        iVar4 = iVar10;
      }
      if (0 < iVar4) {
        TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::
        TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>(__return_storage_ptr__,&local_dd8);
        goto LAB_14460820e;
      }
    }
    pFVar5 = FIoStatusBuilder::FIoStatusBuilder(&local_6d8,InvalidParameter);
    uStack_c80 = 0x1e;
    local_c88 = L"Failed to parse \'-Ias.TocUrl=\'";
    local_bb8._12_4_ = uStack_c7c;
    local_bb8.Size = 0x1e;
    local_bb8.DataPtr = L"Failed to parse \'-Ias.TocUrl=\'";
    pFVar5 = FIoStatusBuilder::operator<<(pFVar5,&local_bb8);
    FIoStatusBuilder::operator_FIoStatus(pFVar5,&local_d20);
    FIoStatusBuilder::~FIoStatusBuilder(&local_6d8);
    local_ce0.ErrorMessage.Chars = local_d20.ErrorMessage.Chars;
    if (local_d20.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_d20.ErrorMessage.Chars + -4) = *(int *)(local_d20.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_ce0.ErrorCode = local_d20.ErrorCode;
    local_ce0.SystemErrorCode = local_d20.SystemErrorCode;
    TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::
    TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>(__return_storage_ptr__,&local_ce0);
    FIoStatus::~FIoStatus(&local_d20);
    goto LAB_14460820e;
  }
  ::FString::FString(&local_d60,L"IoStoreOnDemand.ini");
  local_be8 = local_d60.Data.AllocatorInstance.Data;
  local_bf8.DataPtr = L"Cloud";
  local_bf8.Size = 5;
  local_be0 = local_d60.Data.ArrayNum + -1;
  if (local_d60.Data.ArrayNum == 0) {
    local_be0 = iVar10;
  }
  FPaths::CombineInternal(&local_d70,&local_bf8,2);
  bVar2 = FGenericPlatformMisc::FileExistsInPlatformPackage(&local_d70);
  if (bVar2) {
    FGenericPlatformMisc::LoadTextFileFromPlatformPackage(&local_cb0,&local_d70);
    bVar2 = TryParseConfigContent(&local_cb0,&local_d60,&local_dd8);
    if (bVar2) {
      iVar4 = local_dd8.DistributionUrl.Data.ArrayNum + -1;
      if (local_dd8.DistributionUrl.Data.ArrayNum == 0) {
        iVar4 = iVar10;
      }
      if ((iVar4 < 1) && (local_dd8.ServiceUrls.ArrayNum < 1)) goto LAB_1446080d8;
      iVar4 = local_dd8.TocPath.Data.ArrayNum + -1;
      if (local_dd8.TocPath.Data.ArrayNum == 0) {
        iVar4 = iVar10;
      }
      if (iVar4 < 1) goto LAB_1446080d8;
      local_b28.Base = local_b08;
      local_b28.bIsDynamic = false;
      local_b28.bIsExternal = false;
      local_b28.CurPos = local_b08;
      local_b28.End = (wchar_t *)&local_908;
      pFVar6 = FPaths::GetBaseFilename(&local_b38,&local_dd8.TocPath,true);
      if ((((int)((longlong)local_b28.CurPos - (longlong)local_b28.Base >> 1) != 0) &&
          (local_b28.CurPos[-1] != L'/')) && (local_b28.CurPos[-1] != L'\\')) {
        if (local_b28.End < (FIoStatusBuilder *)(local_b28.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_b28,1);
        }
        *local_b28.CurPos = L'/';
        local_b28.CurPos = local_b28.CurPos + 1;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_b28,L"Cloud",5);
      if ((((int)((longlong)local_b28.CurPos - (longlong)local_b28.Base >> 1) != 0) &&
          (local_b28.CurPos[-1] != L'/')) && (local_b28.CurPos[-1] != L'\\')) {
        if (local_b28.End < (FIoStatusBuilder *)(local_b28.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_b28,1);
        }
        *local_b28.CurPos = L'/';
        local_b28.CurPos = local_b28.CurPos + 1;
      }
      iVar10 = (pFVar6->Data).ArrayNum;
      iVar4 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar4 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_b28,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar4);
      if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b38.Data.AllocatorInstance.Data);
      }
      if (local_b28.End < (FIoStatusBuilder *)(local_b28.CurPos + 0xb)) {
        TStringBuilderBase<wchar_t>::Extend(&local_b28,0xb);
      }
      pvVar8 = FGenericPlatformString::Memcpy(local_b28.CurPos,L".iochunktoc",0x16);
      local_b28.CurPos = (wchar_t *)((longlong)pvVar8 + 0x16);
      if (local_b28.End < (FIoStatusBuilder *)((longlong)pvVar8 + 0x18)) {
        TStringBuilderBase<wchar_t>::Extend(&local_b28,1);
      }
      *local_b28.CurPos = L'\0';
      ::FString::FString(&local_c48,local_b28.Base);
      bVar2 = FGenericPlatformMisc::FileExistsInPlatformPackage(&local_c48);
      if (local_c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c48.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        ::FString::AssignRange
                  (&local_dd8.TocFilePath,local_b28.Base,
                   (int)((longlong)local_b28.CurPos - (longlong)local_b28.Base >> 1));
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b28);
      local_d40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d40.Data.ArrayNum = 0;
      local_d40.Data.ArrayMax = 0;
      bVar2 = FParse::Value(param_1,L"Iax.DefaultHostGroup=",&local_d40,true,(wchar_t **)0x0);
      if (bVar2) {
        ::FString::Empty(&local_dd8.DistributionUrl);
        DestructItems<FString,int>
                  ((FString *)local_dd8.ServiceUrls.AllocatorInstance.Data,
                   local_dd8.ServiceUrls.ArrayNum);
        iVar10 = local_dd8.ServiceUrls.ArrayMax;
        local_dd8.ServiceUrls._8_8_ = local_dd8.ServiceUrls._8_8_ & 0xffffffff00000000;
        if (iVar10 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_dd8.ServiceUrls.AllocatorInstance,0,
                     &local_dd8.ServiceUrls.ArrayMax);
        }
        ::FString::ParseIntoArray(&local_d40,&local_dd8.ServiceUrls,L",",true);
        iVar10 = local_dd8.ServiceUrls.ArrayNum;
        uVar9 = (ulonglong)local_dd8.ServiceUrls.ArrayNum;
        pFVar12 = local_dd8.ServiceUrls.AllocatorInstance.Data + uVar9 * 0x10;
        FVar14.Data = local_dd8.ServiceUrls.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar9 != iVar10) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_d88);
          }
          if (FVar14.Data == pFVar12) break;
          ::FString::TrimStartAndEndInline((FString *)FVar14.Data);
          uVar9 = local_dd8.ServiceUrls._8_8_ & 0xffffffff;
          FVar14.Data = FVar14.Data + 0x10;
        }
      }
      TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::
      TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>(__return_storage_ptr__,&local_dd8);
      if (local_d40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d40.Data.AllocatorInstance.Data);
      }
    }
    else {
LAB_1446080d8:
      pFVar5 = FIoStatusBuilder::FIoStatusBuilder(&local_278,ReadError);
      uStack_c30 = 0x1c;
      local_c38 = L"Failed to read config file \'";
      local_b68._12_4_ = uStack_c2c;
      local_b68.Size = 0x1c;
      local_b68.DataPtr = L"Failed to read config file \'";
      pFVar5 = FIoStatusBuilder::operator<<(pFVar5,&local_b68);
      local_c28 = local_d70.Data.AllocatorInstance.Data;
      iStack_c20 = local_d70.Data.ArrayNum + -1;
      if (local_d70.Data.ArrayNum == 0) {
        iStack_c20 = 0;
      }
      local_b58._12_4_ = uStack_c1c;
      local_b58.Size = iStack_c20;
      local_b58.DataPtr = (wchar_t *)local_d70.Data.AllocatorInstance.Data;
      pFVar5 = FIoStatusBuilder::operator<<(pFVar5,&local_b58);
      uStack_c10 = 1;
      local_c18 = L"\'";
      local_b48._12_4_ = uStack_c0c;
      local_b48.Size = 1;
      local_b48.DataPtr = L"\'";
      pFVar5 = FIoStatusBuilder::operator<<(pFVar5,&local_b48);
      FIoStatusBuilder::operator_FIoStatus(pFVar5,&local_d00);
      FIoStatusBuilder::~FIoStatusBuilder(&local_278);
      local_cc0.ErrorMessage.Chars = local_d00.ErrorMessage.Chars;
      if (local_d00.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_d00.ErrorMessage.Chars + -4) =
             *(int *)(local_d00.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      local_cc0.ErrorCode = local_d00.ErrorCode;
      local_cc0.SystemErrorCode = local_d00.SystemErrorCode;
      TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::
      TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>(__return_storage_ptr__,&local_cc0);
      FIoStatus::~FIoStatus(&local_d00);
    }
    if (local_cb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cb0.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar5 = FIoStatusBuilder::FIoStatusBuilder(&local_4a8,NotFound);
    uStack_c70 = 0x1c;
    local_c78 = L"Failed to find config file \'";
    local_ba8._12_4_ = uStack_c6c;
    local_ba8.Size = 0x1c;
    local_ba8.DataPtr = L"Failed to find config file \'";
    pFVar5 = FIoStatusBuilder::operator<<(pFVar5,&local_ba8);
    local_c68 = local_d70.Data.AllocatorInstance.Data;
    iStack_c60 = local_d70.Data.ArrayNum + -1;
    if (local_d70.Data.ArrayNum == 0) {
      iStack_c60 = iVar10;
    }
    local_b98._12_4_ = uStack_c5c;
    local_b98.Size = iStack_c60;
    local_b98.DataPtr = (wchar_t *)local_d70.Data.AllocatorInstance.Data;
    pFVar5 = FIoStatusBuilder::operator<<(pFVar5,&local_b98);
    uStack_c50 = 1;
    local_c58 = L"\'";
    local_b88._12_4_ = uStack_c4c;
    local_b88.Size = 1;
    local_b88.DataPtr = L"\'";
    pFVar5 = FIoStatusBuilder::operator<<(pFVar5,&local_b88);
    FIoStatusBuilder::operator_FIoStatus(pFVar5,&local_d10);
    FIoStatusBuilder::~FIoStatusBuilder(&local_4a8);
    local_cd0.ErrorMessage.Chars = local_d10.ErrorMessage.Chars;
    if (local_d10.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_d10.ErrorMessage.Chars + -4) = *(int *)(local_d10.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_cd0.ErrorCode = local_d10.ErrorCode;
    local_cd0.SystemErrorCode = local_d10.SystemErrorCode;
    TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::
    TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>(__return_storage_ptr__,&local_cd0);
    FIoStatus::~FIoStatus(&local_d10);
  }
  if (local_d70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d70.Data.AllocatorInstance.Data);
  }
  if (local_d60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d60.Data.AllocatorInstance.Data);
  }
LAB_14460820e:
  if (local_d80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d80.Data.AllocatorInstance.Data);
  }
  if (local_dd8.TocFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.TocFilePath.Data.AllocatorInstance.Data);
  }
  if (local_dd8.TocPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.TocPath.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_dd8.ServiceUrls.AllocatorInstance.Data,local_dd8.ServiceUrls.ArrayNum)
  ;
  if (local_dd8.ServiceUrls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.ServiceUrls.AllocatorInstance.Data);
  }
  if (local_dd8.FallbackUrl.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.FallbackUrl.Data.AllocatorInstance.Data);
  }
  if (local_dd8.DistributionUrl.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.DistributionUrl.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryParseInstallCacheConfig @ 1446082b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> * __cdecl
UE::IoStore::Config::TryParseInstallCacheConfig
          (TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *__return_storage_ptr__,
          wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  FIoStatusBuilder *pFVar4;
  long64 lVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStackY_2f8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2c8;
  FIoStatus local_2b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2a8;
  FString local_298;
  FIoStatusBuilder local_288;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar2 = FParse::Param(param_1,L"NoIAD");
  if (bVar2) {
    pFVar4 = FIoStatusBuilder::FIoStatusBuilder(&local_288,Disabled);
    local_2c8.ArrayNum = 8;
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1506450b8;
    pFVar4 = FIoStatusBuilder::operator<<(pFVar4,(TStringView<wchar_t> *)&local_2c8);
    FIoStatusBuilder::operator_FIoStatus(pFVar4,&local_2b8);
    FIoStatusBuilder::~FIoStatusBuilder(&local_288);
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)local_2b8.ErrorMessage.Chars;
    if ((FScriptContainerElement *)local_2b8.ErrorMessage.Chars != (FScriptContainerElement *)0x0) {
      LOCK();
      *(int *)(local_2b8.ErrorMessage.Chars + -4) = *(int *)(local_2b8.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
LAB_144608368:
    TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>::
    TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>
              (__return_storage_ptr__,(FIoStatus *)&local_2c8);
    FIoStatus::~FIoStatus(&local_2b8);
    return __return_storage_ptr__;
  }
  bVar2 = FPaths::HasProjectPersistentDownloadDir();
  if (!bVar2) {
    pFVar4 = FIoStatusBuilder::FIoStatusBuilder(&local_288,Disabled);
    local_2c8.ArrayNum = 0x21;
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x150d7eca0;
    pFVar4 = FIoStatusBuilder::operator<<(pFVar4,(TStringView<wchar_t> *)&local_2c8);
    FIoStatusBuilder::operator_FIoStatus(pFVar4,&local_2b8);
    FIoStatusBuilder::~FIoStatusBuilder(&local_288);
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)local_2b8.ErrorMessage.Chars;
    if ((FScriptContainerElement *)local_2b8.ErrorMessage.Chars != (FScriptContainerElement *)0x0) {
      LOCK();
      *(int *)(local_2b8.ErrorMessage.Chars + -4) = *(int *)(local_2b8.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    goto LAB_144608368;
  }
  lVar8 = 0x40000000;
  uVar10 = (undefined4)__real_40ac200000000000;
  uVar11 = (undefined4)((ulonglong)__real_40ac200000000000 >> 0x20);
  lVar9 = 0x200000;
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  bVar2 = FParse::Value(param_1,L"-Iad.FileCache.DiskQuota=",(FString *)&local_2a8,true,
                        (wchar_t **)0x0);
  iVar3 = 0;
  if (bVar2) {
    iVar7 = local_2a8.ArrayNum + -1;
    if (local_2a8.ArrayNum == 0) {
      iVar7 = 0;
    }
    local_2c8.ArrayNum = iVar7;
    local_2c8.AllocatorInstance.Data = local_2a8.AllocatorInstance.Data;
    lVar5 = ParseSizeParam((TStringView<wchar_t> *)&local_2c8);
LAB_144608525:
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    if (0 < lVar5) {
      lVar8 = lVar5;
    }
  }
  else {
    local_2b8.ErrorMessage.Chars = (wchar_t *)0x0;
    local_2b8.ErrorCode = Ok;
    local_2b8.SystemErrorCode = 0;
    bVar2 = FConfigCacheIni::GetString
                      (GConfig,L"OnDemandInstall",L"FileCache.DiskQuota",(FString *)&local_2b8,
                       &GEngineIni);
    if (bVar2) {
      iVar7 = local_2b8.ErrorCode - Unknown;
      if (local_2b8.ErrorCode == Ok) {
        iVar7 = iVar3;
      }
      local_2c8.ArrayNum = iVar7;
      local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)local_2b8.ErrorMessage.Chars;
      lVar5 = ParseSizeParam((TStringView<wchar_t> *)&local_2c8);
      if ((FScriptContainerElement *)local_2b8.ErrorMessage.Chars != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_2b8.ErrorMessage.Chars);
      }
      goto LAB_144608525;
    }
    if ((FScriptContainerElement *)local_2b8.ErrorMessage.Chars != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.ErrorMessage.Chars);
    }
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
  }
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  bVar2 = FParse::Value(param_1,L"-Iad.FileCache.JournalMaxSize=",(FString *)&local_2a8,true,
                        (wchar_t **)0x0);
  if (bVar2) {
    iVar7 = local_2a8.ArrayNum + -1;
    if (local_2a8.ArrayNum == 0) {
      iVar7 = iVar3;
    }
    local_2c8.ArrayNum = iVar7;
    local_2c8.AllocatorInstance.Data = local_2a8.AllocatorInstance.Data;
    lVar5 = ParseSizeParam((TStringView<wchar_t> *)&local_2c8);
  }
  else {
    local_2b8.ErrorMessage.Chars = (wchar_t *)0x0;
    local_2b8.ErrorCode = Ok;
    local_2b8.SystemErrorCode = 0;
    bVar2 = FConfigCacheIni::GetString
                      (GConfig,L"OnDemandInstall",L"FileCache.JournalMaxSize",(FString *)&local_2b8,
                       &GEngineIni);
    if (!bVar2) {
      if ((FScriptContainerElement *)local_2b8.ErrorMessage.Chars != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_2b8.ErrorMessage.Chars);
      }
      if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.AllocatorInstance.Data);
      }
      goto LAB_144608662;
    }
    iVar7 = local_2b8.ErrorCode - Unknown;
    if (local_2b8.ErrorCode == Ok) {
      iVar7 = iVar3;
    }
    local_2c8.ArrayNum = iVar7;
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)local_2b8.ErrorMessage.Chars;
    lVar5 = ParseSizeParam((TStringView<wchar_t> *)&local_2c8);
    if ((FScriptContainerElement *)local_2b8.ErrorMessage.Chars != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.ErrorMessage.Chars);
    }
  }
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  if (0 < lVar5) {
    lVar9 = lVar5;
  }
LAB_144608662:
  bVar2 = FParse::Value(param_1,L"-Iad.FileCache.LastAccessGranularitySeconds=",(double *)&local_2a8
                       );
  if (((bVar2) ||
      (bVar2 = FConfigCacheIni::GetDouble
                         (GConfig,L"OnDemandInstall",L"FileCache.LastAccessGranularitySeconds",
                          (double *)&local_2a8,&GEngineIni), bVar2)) &&
     (0.0 <= (double)local_2a8.AllocatorInstance.Data)) {
    uVar10 = SUB84(local_2a8.AllocatorInstance.Data,0);
    uVar11 = (undefined4)((ulonglong)local_2a8.AllocatorInstance.Data >> 0x20);
  }
  local_2b8.ErrorMessage.Chars = (wchar_t *)0x0;
  local_2b8.ErrorCode = Ok;
  local_2b8.SystemErrorCode = 0;
  ::FString::operator=((FString *)&local_2b8,L"InstallCache");
  pTVar6 = &FPaths::ProjectPersistentDownloadDir(&local_298)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_2a8,pTVar6,9 - (uint)(pTVar6->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_2a8,L"IoStore",7);
  iVar7 = local_2b8.ErrorCode - Unknown;
  if (local_2b8.ErrorCode == Ok) {
    iVar7 = iVar3;
  }
  if ((local_2a8.ArrayNum != 0) || (iVar3 = 2, iVar7 == -1)) {
    iVar3 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_2c8,&local_2a8,iVar7 + iVar3);
  ::FString::PathAppend((FString *)&local_2c8,local_2b8.ErrorMessage.Chars,iVar7);
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_2b8.ErrorMessage.Chars != (wchar_t *)0x0) {
    FMemory::Free(local_2b8.ErrorMessage.Chars);
  }
  FVar1.Data = local_2c8.AllocatorInstance.Data;
  iVar3 = local_2c8.ArrayNum;
  iVar7 = local_2c8.ArrayMax;
  bVar2 = FParse::Param(param_1,L"Iad.DropCache");
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
  *(FScriptContainerElement **)(__return_storage_ptr__->Value).Pad = FVar1.Data;
  *(int *)((__return_storage_ptr__->Value).Pad + 8) = iVar3;
  *(int *)((__return_storage_ptr__->Value).Pad + 0xc) = iVar7;
  *(ulonglong *)((__return_storage_ptr__->Value).Pad + 0x20) = CONCAT44(uVar11,uVar10);
  *(longlong *)((__return_storage_ptr__->Value).Pad + 0x10) = lVar8;
  *(longlong *)((__return_storage_ptr__->Value).Pad + 0x18) = lVar9;
  (__return_storage_ptr__->Value).Pad[0x28] = bVar2;
  return __return_storage_ptr__;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,unsigned_int_&> @ 1504c0660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,unsigned_int_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,char **param_3,uint *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  uint *local_18;
  code *local_10;
  
  local_38.WriteValue = FLogField::Write<char_const_*>;
  local_38.Name = (char *)0x0;
  local_10 = FLogField::Write<unsigned_int>;
  local_20 = 0;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringBuilderWithBuffer<wchar_t,128>_&> @ 1504c06b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringBuilderWithBuffer<wchar_t,128>_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TStringBuilderWithBuffer<wchar_t,128> *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<TStringBuilderWithBuffer<wchar_t,128>_>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,int_&,int_&,int_&,int_&> @ 1504c06f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,int_&,int_&,int_&,int_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,TStringView<char> *param_3,
          int *param_4,int *param_5,int *param_6,int *param_7)

{
  undefined1 auStack_b8 [32];
  FLogField local_98;
  undefined8 local_80;
  int *local_78;
  code *local_70;
  undefined8 local_68;
  int *local_60;
  code *local_58;
  undefined8 local_50;
  int *local_48;
  code *local_40;
  undefined8 local_38;
  int *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98.WriteValue = FLogField::Write<TStringView<char>_>;
  local_98.Name = (char *)0x0;
  local_60 = param_5;
  local_48 = param_6;
  local_70 = FLogField::Write<int>;
  local_58 = FLogField::Write<int>;
  local_40 = FLogField::Write<int>;
  local_28 = FLogField::Write<int>;
  local_30 = param_7;
  local_80 = 0;
  local_68 = 0;
  local_50 = 0;
  local_38 = 0;
  local_98.Value = param_3;
  local_78 = param_4;
  LogWithFieldArray(param_1,param_2,&local_98,5);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,TStringBuilderWithBuffer<char,256>_&,char_const_*_&,unsigned_int_&> @ 1504c07b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,TStringBuilderWithBuffer<char,256>_&,char_const_*_&,unsigned_int_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,TStringView<char> *param_3,
          TStringBuilderWithBuffer<char,256> *param_4,char **param_5,uint *param_6)

{
  undefined1 auStack_98 [32];
  FLogField local_78;
  undefined8 local_60;
  TStringBuilderWithBuffer<char,256> *local_58;
  code *local_50;
  undefined8 local_48;
  char **local_40;
  code *local_38;
  undefined8 local_30;
  uint *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.WriteValue = FLogField::Write<TStringView<char>_>;
  local_78.Name = (char *)0x0;
  local_50 = FLogField::Write<TStringBuilderWithBuffer<char,256>_>;
  local_40 = param_5;
  local_38 = FLogField::Write<char_const_*>;
  local_28 = param_6;
  local_20 = FLogField::Write<unsigned_int>;
  local_60 = 0;
  local_48 = 0;
  local_30 = 0;
  local_78.Value = param_3;
  local_58 = param_4;
  LogWithFieldArray(param_1,param_2,&local_78,4);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,TStringBuilderWithBuffer<char,256>_&,unsigned_int> @ 1504c0860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,TStringBuilderWithBuffer<char,256>_&,unsigned_int>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,TStringView<char> *param_3,
          TStringBuilderWithBuffer<char,256> *param_4,uint *param_5)

{
  undefined1 auStack_88 [32];
  FLogField local_68;
  undefined8 local_50;
  TStringBuilderWithBuffer<char,256> *local_48;
  code *local_40;
  undefined8 local_38;
  uint *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.WriteValue = FLogField::Write<TStringView<char>_>;
  local_68.Name = (char *)0x0;
  local_40 = FLogField::Write<TStringBuilderWithBuffer<char,256>_>;
  local_30 = param_5;
  local_28 = FLogField::Write<unsigned_int>;
  local_50 = 0;
  local_38 = 0;
  local_68.Value = param_3;
  local_48 = param_4;
  LogWithFieldArray(param_1,param_2,&local_68,3);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::UnifiedError::FError_&> @ 1504c08f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::UnifiedError::FError_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FError *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<UE::UnifiedError::FError>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned___int64_&,unsigned___int64_&,unsigned___int64_&> @ 1504c0930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned___int64_&,unsigned___int64_&,unsigned___int64_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,ulong64 *param_3,ulong64 *param_4,
          ulong64 *param_5)

{
  undefined1 auStack_88 [32];
  FLogField local_68;
  undefined8 local_50;
  ulong64 *local_48;
  code *local_40;
  undefined8 local_38;
  ulong64 *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.Name = (char *)0x0;
  local_50 = 0;
  local_38 = 0;
  local_68.WriteValue = FLogField::Write<unsigned___int64>;
  local_40 = FLogField::Write<unsigned___int64>;
  local_28 = FLogField::Write<unsigned___int64>;
  local_30 = param_5;
  local_68.Value = param_3;
  local_48 = param_4;
  LogWithFieldArray(param_1,param_2,&local_68,3);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,UE::UnifiedError::FError_&> @ 1504c09b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,UE::UnifiedError::FError_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,uint *param_3,FError *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  FError *local_18;
  code *local_10;
  
  local_38.WriteValue = FLogField::Write<unsigned_int>;
  local_38.Name = (char *)0x0;
  local_10 = FLogField::Write<UE::UnifiedError::FError>;
  local_20 = 0;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned___int64_const_&,unsigned___int64_const_&> @ 1504c0a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned___int64_const_&,unsigned___int64_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,uint *param_3,ulong64 *param_4,
          ulong64 *param_5)

{
  undefined1 auStack_88 [32];
  FLogField local_68;
  undefined8 local_50;
  ulong64 *local_48;
  code *local_40;
  undefined8 local_38;
  ulong64 *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_40 = FLogField::Write<unsigned___int64>;
  local_68.WriteValue = FLogField::Write<unsigned_int>;
  local_28 = FLogField::Write<unsigned___int64>;
  local_30 = param_5;
  local_68.Name = (char *)0x0;
  local_50 = 0;
  local_38 = 0;
  local_68.Value = param_3;
  local_48 = param_4;
  LogWithFieldArray(param_1,param_2,&local_68,3);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned___int64_const_&,unsigned_int> @ 1504c0a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned___int64_const_&,unsigned_int>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,uint *param_3,ulong64 *param_4,
          uint *param_5)

{
  undefined1 auStack_88 [32];
  FLogField local_68;
  undefined8 local_50;
  ulong64 *local_48;
  code *local_40;
  undefined8 local_38;
  uint *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.WriteValue = FLogField::Write<unsigned_int>;
  local_40 = FLogField::Write<unsigned___int64>;
  local_28 = FLogField::Write<unsigned_int>;
  local_30 = param_5;
  local_68.Name = (char *)0x0;
  local_50 = 0;
  local_38 = 0;
  local_68.Value = param_3;
  local_48 = param_4;
  LogWithFieldArray(param_1,param_2,&local_68,3);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&> @ 1504c0b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<FString>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int> @ 1504c0b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,uint *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<unsigned_int>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*> @ 1504c0b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,char **param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<char_const_*>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*> @ 1504c0bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,wchar_t **param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,TStringBuilderWithBuffer<wchar_t,128>_&> @ 1504c0c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,TStringBuilderWithBuffer<wchar_t,128>_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,wchar_t **param_3,
          TStringBuilderWithBuffer<wchar_t,128> *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  TStringBuilderWithBuffer<wchar_t,128> *local_18;
  code *local_10;
  
  local_38.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_38.Name = (char *)0x0;
  local_10 = FLogField::Write<TStringBuilderWithBuffer<wchar_t,128>_>;
  local_20 = 0;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FName> @ 1504c0c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FName>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FName *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<FName>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FName,TStringView<char>_> @ 1504c0c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FName,TStringView<char>_>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FName *param_3,
          TStringView<char> *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  TStringView<char> *local_18;
  code *local_10;
  
  local_38.WriteValue = FLogField::Write<FName>;
  local_38.Name = (char *)0x0;
  local_10 = FLogField::Write<TStringView<char>_>;
  local_20 = 0;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

