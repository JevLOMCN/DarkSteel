// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 3

// FPrivilegesCommon @ 14ee0e530

FPrivilegesCommon * __thiscall
UE::Online::FPrivilegesCommon::FPrivilegesCommon
          (FPrivilegesCommon *this,FOnlineServicesCommon *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  ForAnyElementType _Src;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar3;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Privileges");
  *(FOnlineServicesCommon **)&this->field_0x10 = param_1;
  *(undefined ***)this =
       &TOnlineComponent<UE::Online::IPrivileges>::_vftable__for__UE__Online__IPrivileges__;
  *(undefined ***)&this->field_0x8 =
       &TOnlineComponent<UE::Online::IPrivileges>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar3 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    *(FPrivilegesCommon **)&this->field_0x18 = this;
    *(undefined8 *)&this->field_0x20 = 0;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    *(FPrivilegesCommon **)&this->field_0x18 = this;
    *(TReferenceControllerBase<1> **)&this->field_0x20 = pTVar2;
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  puVar1 = &this->field_0x28;
  *(undefined8 *)puVar1 = 0;
  *(int *)&this->field_0x30 = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *(undefined4 *)&this->field_0x34 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)puVar1,local_38.Data.ArrayNum,
               (int *)&this->field_0x34);
    memcpy(*(void **)puVar1,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x64 = 0x80;
  *(undefined4 *)&this->field_0x68 = 0xffffffff;
  *(undefined4 *)&this->field_0x6c = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x80 = 0;
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->field_0x90,&param_1->ParallelQueue);
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined4 *)&this->field_0x138 = 0;
  *(undefined4 *)&this->field_0x13c = 0x80;
  *(undefined4 *)&this->field_0x140 = 0xffffffff;
  *(undefined4 *)&this->field_0x144 = 0;
  *(undefined8 *)&this->field_0x150 = 0;
  *(undefined4 *)&this->field_0x158 = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &_vftable__for__UE__Online__IPrivileges__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__UE__Online__IOnlineComponent__;
  return this;
}

// QueryUserPrivilege @ 14eef8a50

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FQueryUserPrivilege> * __thiscall
UE::Online::FPrivilegesCommon::QueryUserPrivilege
          (FPrivilegesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FQueryUserPrivilege> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryUserPrivilege>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryUserPrivilege>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"QueryUserPrivilege");
  pTVar5 = TOnlineComponent<UE::Online::IPrivileges>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IPrivileges> *)this,&local_88,
                      (FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FQueryUserPrivilege>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FQueryUserPrivilege>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FQueryUserPrivilege> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar8 = *(int *)&this->field_0x30 + -1;
  if (*(int *)&this->field_0x30 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,*(wchar_t **)&this->field_0x28,iVar8);
  local_68.bIsSet = false;
  pcVar2 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar6 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar2)(local_78.Object,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar7 = TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::CreateSharedState
                     (local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RegisterCommands @ 14eefb240

void __thiscall UE::Online::FPrivilegesCommon::RegisterCommands(FPrivilegesCommon *this)

{
  TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPrivilegesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryUserPrivilege>_(__cdecl_UE::Online::FPrivilegesCommon::*)(UE::Online::FQueryUserPrivilege::Params_&&)>_*_&>
  local_res8;
  undefined8 *local_res18 [2];
  TOnlineInterfaceOperationExecHandler<UE::Online::FPrivilegesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryUserPrivilege>_(__cdecl_UE::Online::FPrivilegesCommon::*)(UE::Online::FQueryUserPrivilege::Params_&&)>
  ***local_18;
  undefined8 **ppuStack_10;
  
  local_18 = (TOnlineInterfaceOperationExecHandler<UE::Online::FPrivilegesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryUserPrivilege>_(__cdecl_UE::Online::FPrivilegesCommon::*)(UE::Online::FQueryUserPrivilege::Params_&&)>
              ***)_vcall__0__flat______;
  ppuStack_10 = (undefined8 **)((ulonglong)ppuStack_10 & 0xffffffff00000000);
  local_res18[0] = ::operator_new(0x20);
  if (local_res18[0] != (undefined8 *)0x0) {
    *local_res18[0] =
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFPrivilegesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFQueryUserPrivilege_Online_UE___23___QEAUParams_FQueryUserPrivilege_23__Z_Online_UE__6B_
    ;
    local_res18[0][2] = local_18;
    local_res18[0][3] = ppuStack_10;
    local_res18[0][1] = this;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FPrivilegesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryUserPrivilege>_(__cdecl_UE::Online::FPrivilegesCommon::*)(UE::Online::FQueryUserPrivilege::Params_&&)>
        **)0x1530a1598;
  local_18 = &local_res8.Value;
  ppuStack_10 = local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPrivilegesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryUserPrivilege>_(__cdecl_UE::Online::FPrivilegesCommon::*)(UE::Online::FQueryUserPrivilege::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,&local_res8,(bool *)&local_18);
  return;
}

