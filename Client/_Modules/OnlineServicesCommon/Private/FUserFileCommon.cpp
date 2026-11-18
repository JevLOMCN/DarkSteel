// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 8

// FUserFileCommon @ 14ef704d0

FUserFileCommon * __thiscall
UE::Online::FUserFileCommon::FUserFileCommon(FUserFileCommon *this,FOnlineServicesCommon *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  ForAnyElementType _Src;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar3;
  FOnlineAsyncOpQueueParallel *pFVar4;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"UserFile");
  *(FOnlineServicesCommon **)&this->field_0x10 = param_1;
  *(undefined ***)this =
       &TOnlineComponent<UE::Online::IUserFile>::_vftable__for__UE__Online__IUserFile__;
  *(undefined ***)&this->field_0x8 =
       &TOnlineComponent<UE::Online::IUserFile>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar3 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    *(FUserFileCommon **)&this->field_0x18 = this;
    *(undefined8 *)&this->field_0x20 = 0;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    *(FUserFileCommon **)&this->field_0x18 = this;
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
  pFVar4 = FOnlineServicesCommon::GetParallelQueue(param_1);
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->field_0x90,pFVar4);
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
  *(undefined ***)this = &_vftable__for__UE__Online__IUserFile__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__UE__Online__IOnlineComponent__;
  return this;
}

// CopyFile @ 14ef90800

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FUserFileCopyFile> * __thiscall
UE::Online::FUserFileCommon::CopyFile
          (FUserFileCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FUserFileCopyFile> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileCopyFile>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileCopyFile>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"CopyFile");
  pTVar5 = TOnlineComponent<UE::Online::IUserFile>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IUserFile> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FUserFileCopyFile>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileCopyFile>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FUserFileCopyFile> *)0x0) {
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::CreateSharedState
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

// DeleteFile @ 14ef9c2d0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FUserFileDeleteFile> * __thiscall
UE::Online::FUserFileCommon::DeleteFile
          (FUserFileCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FUserFileDeleteFile> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileDeleteFile>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileDeleteFile>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"DeleteFile");
  pTVar5 = TOnlineComponent<UE::Online::IUserFile>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IUserFile> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FUserFileDeleteFile>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileDeleteFile>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FUserFileDeleteFile> *)0x0) {
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::CreateSharedState
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

// EnumerateFiles @ 14efa2ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles> * __thiscall
UE::Online::FUserFileCommon::EnumerateFiles
          (FUserFileCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileEnumerateFiles>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileEnumerateFiles>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"EnumerateFiles");
  pTVar5 = TOnlineComponent<UE::Online::IUserFile>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IUserFile> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FUserFileEnumerateFiles>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileEnumerateFiles>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FUserFileEnumerateFiles> *)0x0) {
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::CreateSharedState
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

// GetEnumeratedFiles @ 14efac5d0

TOnlineResult<UE::Online::FUserFileGetEnumeratedFiles> * __thiscall
UE::Online::FUserFileCommon::GetEnumeratedFiles
          (FUserFileCommon *this,
          TOnlineResult<UE::Online::FUserFileGetEnumeratedFiles> *__return_storage_ptr__,
          Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TResult_UResult_FUserFileGetEnumeratedFiles_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (pFVar2->Inner).Object;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar2->ErrorCode;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFUserFileGetEnumeratedFiles_Online_UE___Online_UE__6B_;
  __return_storage_ptr__->field_0x30 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Details.SharedReferenceCount.ReferenceController);
  if (local_40.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// ReadFile @ 14efb2160

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FUserFileReadFile> * __thiscall
UE::Online::FUserFileCommon::ReadFile
          (FUserFileCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FUserFileReadFile> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileReadFile>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileReadFile>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"ReadFile");
  pTVar5 = TOnlineComponent<UE::Online::IUserFile>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IUserFile> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FUserFileReadFile>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileReadFile>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FUserFileReadFile> *)0x0) {
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FUserFileReadFile>::CreateSharedState
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

// RegisterCommands @ 14efb29e0

void __thiscall UE::Online::FUserFileCommon::RegisterCommands(FUserFileCommon *this)

{
  TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
  *pTVar1;
  TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
  *pTVar2;
  TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
  *local_res8;
  wchar_t *local_res10;
  uint uStack_1c;
  
  pTVar2 = (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
            *)0x0;
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFUserFileCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFUserFileEnumerateFiles_Online_UE___23___QEAUParams_FUserFileEnumerateFiles_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__0__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"EnumerateFiles";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->field_0x38,&local_res10,&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFUserFileCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFUserFileGetEnumeratedFiles_Online_UE___23___QEAUParams_FUserFileGetEnumeratedFiles_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__8__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"GetEnumeratedFiles";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineResult<UE::Online::FUserFileGetEnumeratedFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileGetEnumeratedFiles::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->field_0x38,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineResult<UE::Online::FUserFileGetEnumeratedFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileGetEnumeratedFiles::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFUserFileCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFUserFileReadFile_Online_UE___23___QEAUParams_FUserFileReadFile_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__16__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"ReadFile";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileReadFile>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileReadFile::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->field_0x38,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileReadFile>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileReadFile::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFUserFileCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFUserFileWriteFile_Online_UE___23___QEAUParams_FUserFileWriteFile_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__24__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"WriteFile";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileWriteFile>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileWriteFile::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->field_0x38,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileWriteFile>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileWriteFile::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFUserFileCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFUserFileCopyFile_Online_UE___23___QEAUParams_FUserFileCopyFile_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__32__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"CopyFile";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileCopyFile>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileCopyFile::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->field_0x38,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileCopyFile>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileCopyFile::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileEnumerateFiles>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileEnumerateFiles::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFUserFileCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFUserFileDeleteFile_Online_UE___23___QEAUParams_FUserFileDeleteFile_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__40__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    pTVar2 = pTVar1;
  }
  local_res10 = L"DeleteFile";
  local_res8 = pTVar2;
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileDeleteFile>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileDeleteFile::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->field_0x38,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FUserFileCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUserFileDeleteFile>_(__cdecl_UE::Online::FUserFileCommon::*)(UE::Online::FUserFileDeleteFile::Params_&&)>
              **)&local_res8);
  return;
}

// WriteFile @ 14efc3f50

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FUserFileWriteFile> * __thiscall
UE::Online::FUserFileCommon::WriteFile
          (FUserFileCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FUserFileWriteFile> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileWriteFile>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUserFileWriteFile>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"WriteFile");
  pTVar5 = TOnlineComponent<UE::Online::IUserFile>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IUserFile> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FUserFileWriteFile>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileWriteFile>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FUserFileWriteFile> *)0x0) {
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::CreateSharedState
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

