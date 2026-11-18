// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DumpGPUServices
// Functions: 23

// `dynamic_initializer_for_'ErrorNamespace'' @ 141418380

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 1414183b0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LogDumpGPUServices'' @ 1414183d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDumpGPUServices__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDumpGPUServices,L"LogDumpGPUServices",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDumpGPUServices__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDumpGPUServices'' @ 141418410

void __cdecl _dynamic_initializer_for__ModuleRegistrantDumpGPUServices__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DumpGPUServices";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DumpGPUServices",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDumpGPUServices>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141418460

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 141418480

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `scalar_deleting_destructor' @ 14e2beb40

void * __thiscall
IDumpGPUServices::_scalar_deleting_destructor_(IDumpGPUServices *this,uint param_1)

{
  *this = (IDumpGPUServices)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2bed50

void * __thiscall
FDumpGPUServices::_scalar_deleting_destructor_(FDumpGPUServices *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// ~TFunction_OwnedObject<`FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>,1,1> @ 14e2bf0c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FDumpGPUHTTPUpload::StartUploadFile_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z__00_00_Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l49::<lambda_1>,1,1> @ 14e2bf100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l49::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__FDumpGPUHTTPUpload::StartUploadFile_::__l2::<lambda_1>::operator()_::__l49::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__DB____R1_1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z_QEBA_XZ__00_00_Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l51::<lambda_2>,1,0> @ 14e2bf140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l51::<lambda_2>,1,0>
::
~TFunction_OwnedObject<__FDumpGPUHTTPUpload::StartUploadFile_::__l2::<lambda_1>::operator()_::__l51::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__DD____R<lambda_1>__1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// `scalar_deleting_destructor' @ 14e2bfb80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`FDumpGPUHTTPUpload::ProcessHttpRequest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2bfbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z__00_00_Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2bfc30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l49::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__DB____R1_1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z_QEBA_XZ__00_00_Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2bfc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l51::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__DD____R<lambda_1>__1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2bfcd0

void * __thiscall
FDumpGPUHTTPUpload::_scalar_deleting_destructor_(FDumpGPUHTTPUpload *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<TSharedPtr<IHttpRequest,1>_> FVar3;
  
  FVar3 = (this->PendingHttpRequests).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<TSharedPtr<IHttpRequest,1>_>)0x0) {
    FVar3 = (ForElementType<TSharedPtr<IHttpRequest,1>_>)&this->PendingHttpRequests;
  }
  DestructItems<TSharedPtr<IHttpRequest,1>,int>
            ((TSharedPtr<IHttpRequest,1> *)FVar3,(this->PendingHttpRequests).ArrayNum);
  FVar3 = (this->PendingHttpRequests).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TSharedPtr<IHttpRequest,1>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  DestructItems<FString,int>((FString *)(this->Files).AllocatorInstance.Data,(this->Files).ArrayNum)
  ;
  pFVar1 = (this->Files).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DumpUploadURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DumpParamters).CompressionFiles;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->DumpParamters).Time.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DumpParamters).LocalPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DumpParamters).Type.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2bfda0

void * __thiscall
FDumpGPUHTTPUploadProvider::_scalar_deleting_destructor_
          (FDumpGPUHTTPUploadProvider *this,uint param_1)

{
  ~FDumpGPUHTTPUploadProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2bfde0

void * __thiscall
IDumpGPUUploadServiceProvider::_scalar_deleting_destructor_
          (IDumpGPUUploadServiceProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CreateHTTPUploadProvider @ 14e2c0230

IDumpGPUUploadServiceProvider * __cdecl CreateHTTPUploadProvider(FString *param_1)

{
  IDumpGPUUploadServiceProvider *pIVar1;
  
  pIVar1 = operator_new(0x30);
  if (pIVar1 != (IDumpGPUUploadServiceProvider *)0x0) {
    *pIVar1 = (IDumpGPUUploadServiceProvider)&___7FDumpGPUHTTPUploadProvider__6B_;
    FString::FString((FString *)(pIVar1 + 1),param_1);
    pIVar1[4] = (IDumpGPUUploadServiceProvider)0x0;
    *(undefined4 *)(pIVar1 + 5) = 0;
    *(undefined4 *)&pIVar1[5].field_0x4 = 1;
    return pIVar1;
  }
  return (IDumpGPUUploadServiceProvider *)0x0;
}

// LoadJsonFile @ 14e2c0840

TSharedPtr<FJsonObject,1> * __cdecl
LoadJsonFile(TSharedPtr<FJsonObject,1> *__return_storage_ptr__,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  bool bVar3;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar4;
  wchar_t *pwVar5;
  FString local_78;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_68;
  StackState local_58;
  
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FFileHelper::LoadFileToString(&local_78,pwVar5,None,0);
  if (bVar3) {
    pTVar4 = TJsonStringReader<wchar_t>::Create(&local_68,&local_78);
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar4->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    local_58.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Identifier.Data.ArrayNum = 0;
    local_58.Identifier.Data.ArrayMax = 0;
    local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Array.ArrayNum = 0;
    local_58.Array.ArrayMax = 0;
    local_58.Object.Object = (FJsonObject *)0x0;
    local_58.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_58,None);
    if (bVar3) {
      FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_58,__return_storage_ptr__);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_58.Array.AllocatorInstance.Data,
               local_58.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_58.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_58.Array.AllocatorInstance.Data);
    }
    if (local_58.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Identifier.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_DumpGPUServices @ 14e2c1dd0

void __cdecl IMPLEMENT_MODULE_DumpGPUServices(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150463eb0

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogDumpGPUServices'' @ 150463ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDumpGPUServices__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDumpGPUServices);
  return;
}

