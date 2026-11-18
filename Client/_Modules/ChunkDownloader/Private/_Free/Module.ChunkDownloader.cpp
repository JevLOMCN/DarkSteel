// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 61

// `dynamic_initializer_for_'BUILD_ID_KEY'' @ 141450370

void __cdecl _dynamic_initializer_for__BUILD_ID_KEY__(void)

{
  FString::FString(&BUILD_ID_KEY,L"BUILD_ID");
  atexit(_dynamic_atexit_destructor_for__BUILD_ID_KEY__);
  return;
}

// `dynamic_initializer_for_'CACHED_BUILD_MANIFEST'' @ 1414503a0

void __cdecl _dynamic_initializer_for__CACHED_BUILD_MANIFEST__(void)

{
  FString::FString(&CACHED_BUILD_MANIFEST,L"CachedBuildManifest.txt");
  atexit(_dynamic_atexit_destructor_for__CACHED_BUILD_MANIFEST__);
  return;
}

// `dynamic_initializer_for_'ChunkDownloaderModuleName'' @ 1414503d0

void __cdecl _dynamic_initializer_for__ChunkDownloaderModuleName__(void)

{
  FName::FName(&ChunkDownloaderModuleName,"ChunkDownloader");
  return;
}

// `dynamic_initializer_for_'EMBEDDED_MANIFEST'' @ 1414503f0

void __cdecl _dynamic_initializer_for__EMBEDDED_MANIFEST__(void)

{
  FString::FString(&EMBEDDED_MANIFEST,L"EmbeddedManifest.txt");
  atexit(_dynamic_atexit_destructor_for__EMBEDDED_MANIFEST__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 141450420

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 141450450

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LOCAL_MANIFEST'' @ 141450470

void __cdecl _dynamic_initializer_for__LOCAL_MANIFEST__(void)

{
  FString::FString(&LOCAL_MANIFEST,L"LocalManifest.txt");
  atexit(_dynamic_atexit_destructor_for__LOCAL_MANIFEST__);
  return;
}

// `dynamic_initializer_for_'LogChunkDownloader'' @ 1414504a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChunkDownloader__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogChunkDownloader,L"LogChunkDownloader",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChunkDownloader__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantChunkDownloader'' @ 1414504e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantChunkDownloader__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ChunkDownloader";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ChunkDownloader",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FChunkDownloaderModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141450530

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 141450550

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `scalar_deleting_destructor' @ 14f01c9d0

void * __thiscall
FChunkDownloaderPlatformWrapper::_scalar_deleting_destructor_
          (FChunkDownloaderPlatformWrapper *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChunkDownloaderPlatformWrapper__6B_;
  FGenericPlatformChunkInstall::~FGenericPlatformChunkInstall((FGenericPlatformChunkInstall *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f01ca60

void * __thiscall
FChunkDownloaderModule::_scalar_deleting_destructor_(FChunkDownloaderModule *this,uint param_1)

{
  FChunkDownloaderPlatformWrapper *pFVar1;
  
  pFVar1 = (this->ChunkInstallWrapper).Ptr;
  if (pFVar1 != (FChunkDownloaderPlatformWrapper *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChunkDownloader).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// DestructItems<FPakFileEntry,int> @ 14f01cd90

void __cdecl DestructItems<FPakFileEntry,int>(FPakFileEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->FileVersion;
    do {
      pFVar1 = (((FString *)((longlong)(pFVar2 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pFVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -2) + 8));
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<void___cdecl(bool)>,int> @ 14f01cdf0

void __cdecl
DestructItems<TFunction<void___cdecl(bool)>,int>(TFunction<void___cdecl(bool)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FChunkDownloader::FChunk,1>,int> @ 14f01ce40

void __cdecl
DestructItems<TSharedRef<FChunkDownloader::FChunk,1>,int>
          (TSharedRef<FChunkDownloader::FChunk,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FChunkDownloader::FPakFile,1>,int> @ 14f01ce80

void __cdecl
DestructItems<TSharedRef<FChunkDownloader::FPakFile,1>,int>
          (TSharedRef<FChunkDownloader::FPakFile,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Merge<TSharedRef<FChunkDownloader::FPakFile,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FChunkDownloader::FPakFile,1>,`FChunkDownloader::DownloadPakFileInternal'::__l2::<lambda_1>_>_> @ 14f01dec0

void __cdecl
AlgoImpl::
Merge<TSharedRef<FChunkDownloader::FPakFile,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FChunkDownloader::FPakFile,1>,_FChunkDownloader::DownloadPakFileInternal_::__l2::<lambda_1>_>_>
          (TSharedRef<FChunkDownloader::FPakFile,1> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,
          TDereferenceWrapper<TSharedRef<FChunkDownloader::FPakFile,1>,_private:_void___cdecl_FChunkDownloader::DownloadPakFileInternal(TSharedRef<FChunkDownloader::FPakFile,1>_const_&,TFunction<void___cdecl(bool)>_const_&,int)_::_2_::<lambda_1>_>
          param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FPakFile *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar5;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar11;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar12;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar13;
  uint uVar14;
  int iVar15;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar6;
  
  if (0 < param_2) {
    iVar15 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar10 = 0;
      if (0 < param_2 - iVar15) {
        uVar9 = param_2 - iVar15;
        do {
          iVar4 = (uVar9 >> 1) + iVar10;
          if ((param_1[(longlong)iVar4 + (longlong)iVar15].Object)->Priority <=
              (param_1[param_2].Object)->Priority) {
            iVar10 = iVar4 + (uVar9 & 1);
          }
          uVar14 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar14 != 0);
      }
      iVar15 = iVar15 + iVar10;
      if (param_2 <= iVar15) {
        return;
      }
      iVar10 = 0;
      pTVar11 = param_1 + iVar15;
      if (0 < param_3 - param_2) {
        uVar9 = param_3 - param_2;
        iVar10 = 0;
        do {
          uVar14 = uVar9 >> 1;
          if ((param_1[(longlong)(int)(uVar14 + iVar10) + (longlong)param_2].Object)->Priority <
              pTVar11->Object->Priority) {
            iVar10 = uVar14 + iVar10 + (uVar9 & 1);
          }
          uVar9 = uVar14;
        } while (uVar14 != 0);
      }
      iVar8 = (iVar10 - iVar15) + param_2;
      iVar4 = param_2 - iVar15;
      if ((iVar4 != 0) && (iVar4 < iVar8)) {
        pTVar5 = pTVar11 + iVar4;
        pTVar12 = pTVar11;
        pTVar6 = pTVar11 + iVar4;
        do {
          while( true ) {
            pTVar7 = pTVar5 + 1;
            pTVar13 = pTVar12 + 1;
            pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
            pFVar2 = pTVar12->Object;
            pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
            pTVar12->Object = pTVar5->Object;
            (pTVar12->SharedReferenceCount).ReferenceController = pTVar1;
            pTVar5->Object = pFVar2;
            (pTVar5->SharedReferenceCount).ReferenceController = pTVar3;
            pTVar12 = pTVar13;
            if (pTVar7 == pTVar11 + iVar8) break;
            pTVar5 = pTVar7;
            if (pTVar13 == pTVar6) {
              pTVar6 = pTVar7;
            }
          }
          pTVar5 = pTVar6;
        } while (pTVar13 != pTVar6);
      }
      param_2 = param_2 + iVar10;
      iVar15 = iVar15 + 1 + iVar10;
    } while (iVar15 < param_2);
  }
  return;
}

// RotateInternal<TSharedRef<FChunkDownloader::FPakFile,1>_> @ 14f01e380

int __cdecl
AlgoImpl::RotateInternal<TSharedRef<FChunkDownloader::FPakFile,1>_>
          (TSharedRef<FChunkDownloader::FPakFile,1> *param_1,int param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FPakFile *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar4;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar6;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar7;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar8;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar5;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar4 = param_1 + param_3;
    pTVar7 = param_1;
    pTVar5 = param_1 + param_3;
    do {
      while( true ) {
        pTVar6 = pTVar4 + 1;
        pTVar8 = pTVar7 + 1;
        pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
        pFVar2 = pTVar7->Object;
        pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
        pTVar7->Object = pTVar4->Object;
        (pTVar7->SharedReferenceCount).ReferenceController = pTVar1;
        pTVar4->Object = pFVar2;
        (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
        pTVar7 = pTVar8;
        if (pTVar6 == param_1 + param_2) break;
        pTVar4 = pTVar6;
        if (pTVar8 == pTVar5) {
          pTVar5 = pTVar6;
        }
      }
      pTVar4 = pTVar5;
    } while (pTVar8 != pTVar5);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TSharedRef<FChunkDownloader::FPakFile,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FChunkDownloader::FPakFile,1>,`FChunkDownloader::DownloadPakFileInternal'::__l2::<lambda_1>_>_> @ 14f01e410

void __cdecl
AlgoImpl::
StableSortInternal<TSharedRef<FChunkDownloader::FPakFile,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FChunkDownloader::FPakFile,1>,_FChunkDownloader::DownloadPakFileInternal_::__l2::<lambda_1>_>_>
          (TSharedRef<FChunkDownloader::FPakFile,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedRef<FChunkDownloader::FPakFile,1>,_private:_void___cdecl_FChunkDownloader::DownloadPakFileInternal(TSharedRef<FChunkDownloader::FPakFile,1>_const_&,TFunction<void___cdecl(bool)>_const_&,int)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPakFile *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (0 < param_2) {
    iVar9 = 1;
    lVar10 = ((longlong)param_2 - 1U >> 1) + 1;
    pTVar5 = param_1;
    do {
      if ((iVar9 < param_2) && ((pTVar5[1].Object)->Priority < pTVar5->Object->Priority)) {
        pTVar2 = pTVar5[1].SharedReferenceCount.ReferenceController;
        pFVar3 = pTVar5->Object;
        pTVar4 = (pTVar5->SharedReferenceCount).ReferenceController;
        pTVar5->Object = pTVar5[1].Object;
        (pTVar5->SharedReferenceCount).ReferenceController = pTVar2;
        pTVar5[1].Object = pFVar3;
        pTVar5[1].SharedReferenceCount.ReferenceController = pTVar4;
      }
      iVar9 = iVar9 + 2;
      pTVar5 = pTVar5 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  iVar9 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar9 * 2;
      iVar7 = 0;
      iVar6 = param_2;
      do {
        iVar8 = iVar6;
        if (iVar1 <= iVar6) {
          iVar8 = iVar1;
        }
        Merge<TSharedRef<FChunkDownloader::FPakFile,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FChunkDownloader::FPakFile,1>,_FChunkDownloader::DownloadPakFileInternal_::__l2::<lambda_1>_>_>
                  (param_1 + iVar7,iVar9,iVar8,param_3,param_4);
        iVar7 = iVar7 + iVar1;
        iVar6 = iVar6 + iVar9 * -2;
      } while (iVar7 < param_2);
      iVar9 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// FThreadSafeStaticStat<`FChunkDownloader::FPakMountWork::GetStatId'::__l2::FStat_FPakMountWork> @ 14f01e520

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FChunkDownloader::FPakMountWork::GetStatId(void)const_::_2_::FStat_FPakMountWork>
* __thiscall
FThreadSafeStaticStat<`FChunkDownloader::FPakMountWork::GetStatId'::__l2::FStat_FPakMountWork>::
FThreadSafeStaticStat<_FChunkDownloader::FPakMountWork::GetStatId_::__l2::FStat_FPakMountWork>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FPakMountWork");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FPakMountWork","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`PlatformStreamDownload'::__l2::<lambda_2>_> @ 14f01e5b0

TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,,TFunction<void___cdecl(void)>___cdecl_PlatformStreamDownload(FString_const_&,FString_const_&,TFunction<void___cdecl(unsigned___int64)>_const_&,TFunction<void___cdecl(int)>_const_&)_::_2_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`PlatformStreamDownload'::__l2::<lambda_2>_>
::
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,_PlatformStreamDownload_::__l2::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,,TFunction<void___cdecl(void)>___cdecl_PlatformStreamDownload(FString_const_&,FString_const_&,TFunction<void___cdecl(unsigned___int64)>_const_&,TFunction<void___cdecl(int)>_const_&)_::_2_::<lambda_2>_>
          *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`PlatformStreamDownload'::`2'::<lambda_2>_>
        ::_vftable_;
  lVar1 = *(longlong *)&(param_1->Functor).Callback;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(longlong *)((longlong)this + 0x20) = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->Functor).Callback.field_0x28;
    puVar3 = (undefined8 *)&(param_1->Functor).Callback.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  ::FString::FString((FString *)((longlong)this + 0x50),&(param_1->Functor).TargetFile);
  *(ulong64 *)((longlong)this + 0x60) = (param_1->Functor).SizeOnDisk;
  return this;
}

// TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FChunkDownloader::ExecuteNextTick'::__l5::<lambda_1>_> @ 14f01e640

TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_private:_void___cdecl_FChunkDownloader::ExecuteNextTick(TFunction<void___cdecl(bool)>_const_&,bool)_::_5_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FChunkDownloader::ExecuteNextTick'::__l5::<lambda_1>_>
::
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FChunkDownloader::ExecuteNextTick_::__l5::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_private:_void___cdecl_FChunkDownloader::ExecuteNextTick(TFunction<void___cdecl(bool)>_const_&,bool)_::_5_::<lambda_1>_>
          *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FChunkDownloader::ExecuteNextTick'::`5'::<lambda_1>_>
        ::_vftable_;
  lVar1 = *(longlong *)&(param_1->Functor).Callback;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(longlong *)((longlong)this + 0x20) = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->Functor).Callback.field_0x28;
    puVar3 = (undefined8 *)&(param_1->Functor).Callback.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  *(bool *)((longlong)this + 0x50) = (param_1->Functor).bSuccess;
  return this;
}

// ~TFunction_OwnedObject<`FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>,0,0> @ 14f01ed90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FChunkDownloader::FMultiCallback::FMultiCallback_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FMultiCallback_FChunkDownloader__QEAA_AEBV__TFunction___A6AX_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_1>,0,0> @ 14f01edb0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_1>,0,0>
::~TFunction_OwnedObject<_FDownload::StartDownload_::__l2::<lambda_1>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDownload::StartDownload'::`2'::<lambda_1>,0,0>::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014f01edda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>,0,1> @ 14f01edf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FChunkDownloader::MountChunkInternal_::__l65::<lambda_1>,0,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::`65'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014f01ee44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_2>,0,1> @ 14f01ee60

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_2>,0,1>
::~TFunction_OwnedObject<_FDownload::StartDownload_::__l2::<lambda_2>,0,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDownload::StartDownload'::`2'::<lambda_2>,0,1>::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014f01eea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`PlatformStreamDownload'::__l2::<lambda_3>,0,0> @ 14f01eec0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`PlatformStreamDownload'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_PlatformStreamDownload_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`PlatformStreamDownload'::`2'::<lambda_3>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// operator() @ 14f01ffa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`PlatformStreamDownload'::__l2::<lambda_2>::operator()
          (void *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
          bool param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  IHttpRequest *pIVar7;
  IPlatformFile *pIVar8;
  longlong *plVar9;
  IHttpResponse *pIVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int iVar15;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  
  iVar6 = 0;
  if (param_2->Object == (IHttpResponse *)0x0) {
    if (1 < (byte)LogChunkDownloader._0_1_) {
      if ((param_1->Object == (IHttpRequest *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(code *)**(undefined8 **)param_1->Object)();
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
  }
  else {
    iVar6 = (**(code **)((longlong)*param_2->Object + 0x58))();
    pwVar14 = L"";
    bVar4 = iVar6 - 200U < 7;
    if (iVar6 == 0xce) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FString::FString(&ContentRangeHeader,L"Content-Range");
        atexit(``PlatformStreamDownload'::__l2::<lambda_2>::operator()'::__l8::
               _dynamic_atexit_destructor_for__ContentRangeHeader__);
        _Init_thread_footer(&::_TSS0);
      }
      ::FString::PrintfImpl(&local_58,L"bytes %llu-");
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)((longlong)*param_2->Object + 0x28))
                (param_2->Object,&local_48,&ContentRangeHeader);
      iVar15 = local_58.Data.ArrayNum + -1;
      FVar2.Data = local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.ArrayNum == 0) {
        iVar15 = 0;
        FVar2.Data = (FScriptContainerElement *)L"";
      }
      bVar3 = ::FString::StartsWith(&local_48,(wchar_t *)FVar2.Data,iVar15,IgnoreCase);
      if (!bVar3) {
        if (1 < (byte)LogChunkDownloader._0_1_) {
          pIVar7 = TSharedPtr<IHttpRequest,1>::operator->(param_1);
          (*(code *)**(undefined8 **)pIVar7)(pIVar7);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        bVar4 = false;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (bVar4) {
      pIVar8 = IPlatformFile::GetPlatformPhysical();
      if ((*(longlong *)((longlong)this + 0x40) == 0) || (iVar6 != 0xce)) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      if (*(int *)((longlong)this + 0x38) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)((longlong)this + 0x30);
      }
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x110))(pIVar8,pwVar13,uVar12,0);
      if (plVar9 == (longlong *)0x0) {
        if (1 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          pIVar8 = IPlatformFile::GetPlatformPhysical();
          if (*(int *)((longlong)this + 0x38) != 0) {
            pwVar14 = *(wchar_t **)((longlong)this + 0x30);
          }
          (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,pwVar14);
        }
      }
      else {
        pIVar10 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
        puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar10 + 0x48))(pIVar10);
        pcVar1 = *(code **)(*plVar9 + 0x30);
        iVar15 = *(int *)(puVar11 + 1);
        if ((iVar15 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        cVar5 = (*pcVar1)(plVar9,*puVar11,(longlong)iVar15);
        (**(code **)*plVar9)(plVar9,1);
        if (cVar5 == '\0') {
          if (1 < (byte)LogChunkDownloader._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader)
            ;
          }
          pIVar8 = IPlatformFile::GetPlatformPhysical();
          if (*(int *)((longlong)this + 0x38) != 0) {
            pwVar14 = *(wchar_t **)((longlong)this + 0x30);
          }
          (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,pwVar14);
        }
      }
    }
    else {
      if (1 < (byte)LogChunkDownloader._0_1_) {
        pIVar7 = TSharedPtr<IHttpRequest,1>::operator->(param_1);
        (*(code *)**(undefined8 **)pIVar7)(pIVar7);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      if ((iVar6 < 500) && (*(longlong *)((longlong)this + 0x40) != 0)) {
        pIVar8 = IPlatformFile::GetPlatformPhysical();
        if (*(int *)((longlong)this + 0x38) != 0) {
          pwVar14 = *(wchar_t **)((longlong)this + 0x30);
        }
        (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,pwVar14);
      }
    }
  }
  if (*(void **)this != (void *)0x0) {
    local_res8[0] = iVar6;
    UE::Core::Private::Function::CheckCallable(*(void **)this);
    pcVar1 = *(code **)this;
    plVar9 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar9 = *(longlong **)((longlong)this + 0x28);
    }
    uVar12 = (**(code **)(*plVar9 + 8))();
    (*pcVar1)(uVar12,local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// `scalar_deleting_destructor' @ 14f020450

void * __thiscall
FAsyncTask<FChunkDownloader::FPakMountWork>::_scalar_deleting_destructor_
          (FAsyncTask<FChunkDownloader::FPakMountWork> *this,uint param_1)

{
  FChunkDownloader::FPakMountWork::~FPakMountWork(&this->Task);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0204a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`FChunkDownloader::TryDownloadBuildManifest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`PlatformStreamDownload'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy,`PlatformStreamDownload'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0205d0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FChunkDownloader::BeginLoadingMode'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020630

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FDownload::OnDownloadComplete'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020690

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FChunkDownloader::ExecuteNextTick'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0206f0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FChunkDownloader::TryLoadBuildManifest'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020750

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FDownload::Start'::__l12::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0207b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FMultiCallback_FChunkDownloader__QEAA_AEBV__TFunction___A6AX_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020850

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDownload::StartDownload'::`2'::<lambda_1>,0,0>::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0208c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::`65'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020940

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FDownload::StartDownload'::__l2::<lambda_2>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDownload::StartDownload'::`2'::<lambda_2>,0,1>::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0209c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`PlatformStreamDownload'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`PlatformStreamDownload'::`2'::<lambda_3>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020a10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FChunkDownloader::FChunk,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FChunkDownloader::FChunk,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020a50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FChunkDownloader::FPakFile,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FChunkDownloader::FPakFile,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020a90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDownload,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDownload,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020ad0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FChunkDownloader,SharedPointerInternals::DefaultDeleter<FChunkDownloader>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FChunkDownloader,SharedPointerInternals::DefaultDeleter<FChunkDownloader>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f020b10

void * __thiscall FDownload::_scalar_deleting_destructor_(FDownload *this,uint param_1)

{
  ~FDownload(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// ParseManifest @ 14f02a2d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f02a961) */
/* WARNING: Removing unreachable block (ram,0x00014f02a9b1) */
/* WARNING: Removing unreachable block (ram,0x00014f02a9a0) */
/* WARNING: Removing unreachable block (ram,0x00014f02a9ac) */
/* WARNING: Removing unreachable block (ram,0x00014f02a9b4) */
/* WARNING: Removing unreachable block (ram,0x00014f02a9cf) */
/* WARNING: Removing unreachable block (ram,0x00014f02a9df) */
/* WARNING: Removing unreachable block (ram,0x00014f02a9e3) */
/* WARNING: Removing unreachable block (ram,0x00014f02aa12) */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> * __cdecl
ParseManifest(TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
             FString *param_1,
             TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
             *param_2)

{
  uchar *_Str;
  uchar *puVar1;
  code *pcVar2;
  FString *pFVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  IPlatformFile *pIVar7;
  FString *pFVar8;
  void *pvVar9;
  char *pcVar10;
  TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> *pTVar11;
  size_t sVar12;
  int iVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  FString *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  FString *pFVar20;
  int iVar21;
  int *piVar22;
  undefined1 auStackY_12f8 [32];
  int local_12a4;
  FString local_1298;
  undefined8 local_1288;
  FString local_1280;
  undefined4 local_1270;
  FString local_1268;
  undefined8 local_1258;
  TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> *local_1250;
  void *local_1248;
  FString *local_1240;
  longlong local_1238;
  longlong *local_1230;
  FString local_1228;
  FString local_1218;
  TPairInitializer<FString_const_&,FString_const_&> local_1208;
  FString *local_11f8;
  FString *local_11f0;
  FScriptContainerElement local_11e8 [256];
  ForAnyElementType local_10e8;
  FScriptContainerElement *local_10e0;
  int local_10d8;
  FScriptContainerElement local_10c8 [256];
  ForAnyElementType local_fc8;
  FScriptContainerElement *local_fc0;
  int local_fb8;
  FScriptContainerElement local_fa8 [256];
  ForAnyElementType local_ea8;
  FScriptContainerElement *local_ea0;
  int local_e98;
  FScriptContainerElement local_e88 [256];
  ForAnyElementType local_d88;
  FScriptContainerElement *local_d80;
  int local_d78;
  uchar local_c48 [512];
  uchar local_a48 [512];
  undefined1 local_848 [2048];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f02a2ed;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_12f8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar22 = &__return_storage_ptr__->ArrayMax;
  iVar6 = -1;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar22 = 0;
  local_12a4 = -1;
  local_1250 = __return_storage_ptr__;
  local_1240 = param_1;
  pIVar7 = IPlatformFile::GetPlatformPhysical();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_1230 = (longlong *)(**(code **)((longlong)*pIVar7 + 0xe8))(pIVar7,pwVar15);
  if (local_1230 == (longlong *)0x0) {
    if (4 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
  }
  else {
    pFVar8 = (FString *)(**(code **)(*local_1230 + 0x50))(local_1230);
    local_1208.Value = pFVar8;
    if (pFVar8 == (FString *)0x0) {
      if (4 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
    }
    else {
      if (4 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      pvVar9 = operator_new__((ulong64)&(pFVar8->Data).ArrayNum);
      local_1248 = pvVar9;
      cVar4 = (**(code **)(*local_1230 + 0x20))();
      if (cVar4 == '\0') {
        if (1 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
      }
      else {
        *(undefined1 *)((longlong)pvVar9 + (longlong)pFVar8) = 0;
        memset(local_c48,0,0x200);
        local_1258 = 0;
        memset(local_a48,0,0x200);
        memset(local_848,0,0x800);
        local_1238 = 0;
        pFVar20 = (FString *)0x0;
        do {
          local_1238 = local_1238 + 1;
          for (pFVar16 = pFVar20;
              ((pFVar3 = pFVar16, pFVar16 < pFVar8 &&
               (*(char *)((longlong)pvVar9 + (longlong)pFVar16) != '\n')) &&
              (*(char *)((longlong)pvVar9 + (longlong)pFVar16) != '\r'));
              pFVar16 = (FString *)((longlong)&(pFVar16->Data).AllocatorInstance.Data + 1)) {
          }
          do {
            pFVar3 = (FString *)((longlong)&(pFVar3->Data).AllocatorInstance.Data + 1);
            if (pFVar8 <= pFVar3) break;
          } while ((*(char *)((longlong)pvVar9 + (longlong)pFVar3) == '\n') ||
                  (*(char *)((longlong)pvVar9 + (longlong)pFVar3) == '\r'));
          pcVar10 = (char *)((longlong)&(pFVar20->Data).AllocatorInstance.Data + (longlong)pvVar9);
          if (*pcVar10 == '$') {
            _Str = (uchar *)(pcVar10 + 1);
            pcVar10 = strstr((char *)_Str," = ");
            if (pcVar10 != (char *)0x0) {
              *pcVar10 = '\0';
              iVar13 = (int)pcVar10 - (int)_Str;
              puVar1 = (uchar *)(pcVar10 + 3);
              local_10e8.Data = (FScriptContainerElement *)0x0;
              *(undefined1 *)((longlong)pvVar9 + (longlong)pFVar16) = 0;
              iVar6 = iVar13 + 1;
              iVar21 = 0;
              if (_Str == (uchar *)0x0) {
                local_10d8 = 0;
                local_10e0 = (FScriptContainerElement *)0x0;
              }
              else {
                if ((0 < iVar6) && (_Str[(longlong)iVar6 + -1] == '\0')) {
                  iVar21 = 1;
                  iVar6 = iVar13;
                }
                local_10d8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,iVar6);
                uVar18 = iVar21 + local_10d8;
                uVar19 = uVar18;
                if (uVar18 < 0x81) {
                  if (local_10e8.Data != (FScriptContainerElement *)0x0) {
                    uVar19 = 0;
                    goto LAB_14f02a521;
                  }
                }
                else {
LAB_14f02a521:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_10e8,0,uVar19,2);
                }
                local_10e0 = local_11e8;
                if (local_10e8.Data != (FScriptContainerElement *)0x0) {
                  local_10e0 = local_10e8.Data;
                }
                UE::Core::Private::Convert((wchar_t *)local_10e0,uVar18,_Str,iVar21 + iVar6);
                pFVar8 = local_1208.Value;
              }
              iVar6 = 0;
              FString::FString(&local_1218,(wchar_t *)local_10e0);
              if (local_10e8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_10e8.Data);
              }
              iVar21 = (int)(undefined1 *)((longlong)pvVar9 + (longlong)pFVar16) - (int)puVar1;
              local_fc8.Data = (FScriptContainerElement *)0x0;
              iVar13 = iVar21 + 1;
              if (puVar1 == (uchar *)0x0) {
                local_fb8 = 0;
                local_fc0 = (FScriptContainerElement *)0x0;
              }
              else {
                if ((0 < iVar13) && (puVar1[(longlong)iVar13 + -1] == '\0')) {
                  iVar6 = 1;
                  iVar13 = iVar21;
                }
                local_fb8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,iVar13);
                uVar18 = iVar6 + local_fb8;
                uVar19 = uVar18;
                if (uVar18 < 0x81) {
                  if (local_fc8.Data != (FScriptContainerElement *)0x0) {
                    uVar19 = 0;
                    goto LAB_14f02a5f5;
                  }
                }
                else {
LAB_14f02a5f5:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_fc8,0,uVar19,2);
                }
                local_fc0 = local_10c8;
                if (local_fc8.Data != (FScriptContainerElement *)0x0) {
                  local_fc0 = local_fc8.Data;
                }
                UE::Core::Private::Convert((wchar_t *)local_fc0,uVar18,puVar1,iVar6 + iVar13);
              }
              FString::FString(&local_1228,(wchar_t *)local_fc0);
              if (local_fc8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_fc8.Data);
              }
              if (param_2 !=
                  (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)0x0) {
                local_11f8 = &local_1218;
                local_11f0 = &local_1228;
                TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                          ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)param_2,&local_1208,(bool *)&local_11f8);
              }
              FVar14.Data = (FScriptContainerElement *)L"";
              if (local_1218.Data.ArrayNum != 0) {
                FVar14.Data = local_1218.Data.AllocatorInstance.Data;
              }
              iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,L"NUM_ENTRIES");
              if (iVar6 == 0) {
                FVar14.Data = (FScriptContainerElement *)L"";
                if (local_1228.Data.ArrayNum != 0) {
                  FVar14.Data = local_1228.Data.AllocatorInstance.Data;
                }
                local_12a4 = _wtoi((wchar_t *)FVar14.Data);
              }
              if (local_1228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1228.Data.AllocatorInstance.Data);
              }
              __return_storage_ptr__ = local_1250;
              pvVar9 = local_1248;
              if (local_1218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1218.Data.AllocatorInstance.Data);
                __return_storage_ptr__ = local_1250;
                pvVar9 = local_1248;
              }
            }
          }
          else {
            iVar6 = sscanf_s(pcVar10,"%511[^\t]\t%llu\t%511[^\t]\t%d\t%2047[^\r\n]");
            if (iVar6 != 5) {
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<639807134757814612>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                                 ,0x154,
                                 "sscanf_s(&FileBuffer[LineStart], \"%511[^\\t]\\t%llu\\t%511[^\\t]\\t%d\\t%2047[^\\r\\n]\", NameBuffer, (int)sizeof(NameBuffer), &FinalFileLen, VersionBuffer, (int)sizeof(VersionBuffer), &ChunkId, RelativeUrl, (int)sizeof(RelativeUrl) ) == 5"
                                );
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                pTVar11 = (TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                return pTVar11;
              }
              if (1 < (byte)LogChunkDownloader._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
              }
              goto LAB_14f02ab22;
            }
            local_1270 = 0xffffffff;
            local_1298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1298.Data.ArrayNum = 0;
            local_1298.Data.ArrayMax = 0;
            local_1288 = 0;
            local_1280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1280.Data.ArrayNum = 0;
            local_1280.Data.ArrayMax = 0;
            local_1268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1268.Data.ArrayNum = 0;
            local_1268.Data.ArrayMax = 0;
            local_ea8.Data = (FScriptContainerElement *)0x0;
            sVar12 = strlen((char *)local_c48);
            local_e98 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,local_c48,(int)sVar12);
            uVar19 = local_e98 + 1;
            uVar18 = uVar19;
            if (uVar19 < 0x81) {
              if (local_ea8.Data != (FScriptContainerElement *)0x0) {
                uVar18 = 0;
                goto LAB_14f02a834;
              }
            }
            else {
LAB_14f02a834:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_ea8,0,uVar18,2);
            }
            local_ea0 = local_fa8;
            if (local_ea8.Data != (FScriptContainerElement *)0x0) {
              local_ea0 = local_ea8.Data;
            }
            UE::Core::Private::Convert((wchar_t *)local_ea0,uVar19,local_c48,(int)sVar12 + 1);
            FString::operator=(&local_1298,(wchar_t *)local_ea0);
            if (local_ea8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ea8.Data);
            }
            local_1288 = local_1258;
            local_d88.Data = (FScriptContainerElement *)0x0;
            sVar12 = strlen((char *)local_a48);
            local_d78 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,local_a48,(int)sVar12);
            uVar19 = local_d78 + 1;
            uVar18 = uVar19;
            if (uVar19 < 0x81) {
              if (local_d88.Data != (FScriptContainerElement *)0x0) {
                uVar18 = 0;
                goto LAB_14f02a8f1;
              }
            }
            else {
LAB_14f02a8f1:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_d88,0,uVar18,2);
            }
            local_d80 = local_e88;
            if (local_d88.Data != (FScriptContainerElement *)0x0) {
              local_d80 = local_d88.Data;
            }
            UE::Core::Private::Convert((wchar_t *)local_d80,uVar19,local_a48,(int)sVar12 + 1);
            FString::operator=(&local_1280,(wchar_t *)local_d80);
            if (local_d88.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d88.Data);
            }
            pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar17 <= (FScriptContainerElement *)&local_1298) &&
                ((FScriptContainerElement *)&local_1298 <
                 pFVar17 + (longlong)__return_storage_ptr__->ArrayMax * 0x40)) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              pTVar11 = (TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar11;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x840,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x40;
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            FString::FString((FString *)pFVar17,&local_1298);
            *(undefined8 *)&pFVar17[0x10].field_0x0 = local_1288;
            FString::FString((FString *)(pFVar17 + 0x18),&local_1280);
            *(undefined4 *)(pFVar17 + 0x28) = local_1270;
            FString::FString((FString *)(pFVar17 + 0x30),&local_1268);
            if (local_1268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1268.Data.AllocatorInstance.Data);
            }
            if (local_1280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1280.Data.AllocatorInstance.Data);
            }
            if (local_1298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1298.Data.AllocatorInstance.Data);
            }
          }
LAB_14f02ab22:
          pFVar20 = pFVar3;
        } while (pFVar3 < pFVar8);
        operator_delete__(pvVar9);
        iVar6 = local_12a4;
      }
      piVar22 = &__return_storage_ptr__->ArrayMax;
    }
    (**(code **)*local_1230)(local_1230,1);
    if ((-1 < iVar6) && (iVar6 != __return_storage_ptr__->ArrayNum)) {
      if (1 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Corrupt_manifes_1530d8a50,
                   (FLogCategoryBase *)&LogChunkDownloader);
      }
      DestructItems<FPakFileEntry,int>
                ((FPakFileEntry *)(__return_storage_ptr__->AllocatorInstance).Data,
                 __return_storage_ptr__->ArrayNum);
      __return_storage_ptr__->ArrayNum = 0;
      if (__return_storage_ptr__->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,&__return_storage_ptr__->AllocatorInstance,0,piVar22);
      }
      if (param_2 !=
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *)0x0) {
        bVar5 = 1 < *(int *)&param_2->field_0x48;
        if (!bVar5) {
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)param_2);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)param_2,0,*(int *)&param_2->field_0x8);
        *(undefined4 *)&param_2->field_0x8 = 0;
        if (*(int *)&param_2->field_0xc != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
        }
        *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
        *(undefined4 *)&param_2->field_0x34 = 0;
        *(undefined4 *)&param_2->field_0x28 = 0;
        if ((*(int *)&param_2->field_0x2c < 0) || (0x80 < *(int *)&param_2->field_0x2c)) {
          *(undefined4 *)&param_2->field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
        }
        if (bVar5) {
          *(undefined4 *)&param_2->field_0x48 = 1;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)param_2);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// PlatformStreamDownload @ 14f02ad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFunction<void___cdecl(void)> * __cdecl
PlatformStreamDownload
          (TFunction<void___cdecl(void)> *__return_storage_ptr__,FString *param_1,FString *param_2,
          TFunction<void___cdecl(unsigned___int64)> *param_3,TFunction<void___cdecl(int)> *param_4)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  IFileManager *pIVar4;
  longlong lVar5;
  FName *pFVar6;
  FModuleManager *this;
  FHttpModule *pFVar7;
  LPCRITICAL_SECTION p_Var8;
  TFunction<void___cdecl(void)> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  atomic<int> *paVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  undefined1 auStack_148 [32];
  longlong *local_128;
  TReferenceControllerBase<1> *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FName local_e8 [2];
  longlong local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  FString local_78;
  longlong local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  pIVar4 = IFileManager::Get();
  if ((param_2->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  lVar5 = (**(code **)((longlong)*pIVar4 + 0x110))(pIVar4,pwVar14);
  lVar15 = 0;
  if (0 < lVar5) {
    lVar15 = lVar5;
  }
  pFVar6 = FName::FName(local_e8,"HTTP");
  FVar1 = *pFVar6;
  this = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this,FVar1);
  pFVar7 = FHttpModule::Get();
  (**(code **)(pFVar7->_padding_ + 0x40))(pFVar7,&local_128);
  (**(code **)(*local_128 + 0x68))(local_128,param_1);
  plVar13 = local_128;
  pcVar2 = *(code **)(*local_128 + 0x60);
  FString::FString(&local_118,L"GET");
  (*pcVar2)(plVar13,&local_118);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  plVar13 = local_128;
  if (lVar15 != 0) {
    pcVar2 = *(code **)(*local_128 + 0xb0);
    FString::PrintfImpl(&local_f8,L"bytes=%llu-");
    FString::FString(&local_108,L"Range");
    (*pcVar2)(plVar13,&local_108,&local_f8);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)param_3 != 0) {
    p_Var8 = (LPCRITICAL_SECTION)(**(code **)(*local_128 + 0xf8))();
    local_b0 = (longlong *)0x0;
    local_d8 = *(longlong *)param_3;
    if (local_d8 != 0) {
      puVar10 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,local_c8);
    }
    if (p_Var8 == (LPCRITICAL_SECTION)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TFunction<void___cdecl(void)> *)(*pcVar2)();
        return pTVar9;
      }
    }
    EnterCriticalSection(p_Var8);
    puVar10 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)(p_Var8 + 1));
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy,`PlatformStreamDownload'::`8'::<lambda_1>_>
                  ::_vftable_;
      puVar10[4] = local_d8;
      puVar10[9] = 0;
      if (local_d8 != 0) {
        plVar13 = local_c8;
        if (local_b0 != (longlong *)0x0) {
          plVar13 = local_b0;
        }
        (**(code **)*plVar13)();
      }
    }
    if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var8);
    }
    if (local_d8 != 0) {
      plVar13 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar13 = local_b0;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  p_Var8 = (LPCRITICAL_SECTION)(**(code **)(*local_128 + 0xf0))();
  local_a8 = *(longlong *)param_4;
  local_80 = (longlong *)0x0;
  if (local_a8 != 0) {
    puVar10 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar10)(puVar10,local_98);
  }
  FString::FString(&local_78,param_2);
  local_68 = lVar15;
  if (p_Var8 == (LPCRITICAL_SECTION)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TFunction<void___cdecl(void)> *)(*pcVar2)();
      return pTVar9;
    }
  }
  EnterCriticalSection(p_Var8);
  puVar10 = UE::Core::Private::DelegateAllocate(0x70,(FDelegateAllocation *)(p_Var8 + 1));
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`PlatformStreamDownload'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar10[4] = local_a8;
    puVar10[9] = 0;
    if (local_a8 != 0) {
      plVar13 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar13 = local_80;
      }
      (**(code **)*plVar13)();
    }
    FString::FString((FString *)(puVar10 + 10),&local_78);
    puVar10[0xc] = local_68;
  }
  if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var8);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_a8 != 0) {
    plVar13 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar13 = local_80;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  (**(code **)(*local_128 + 0xe8))();
  if (local_120 == (TReferenceControllerBase<1> *)0x0) {
    paVar12 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar12 = &local_120->SharedReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`PlatformStreamDownload'::`2'::<lambda_3>,0,0>::_vftable_;
  *(longlong **)&__return_storage_ptr__->field_0x18 = local_128;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 = local_120;
  if (local_120 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`PlatformStreamDownload'::__l2::<lambda_3>,void>::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  return __return_storage_ptr__;
}

// WriteStringAsUtf8TextFile @ 14f02f0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl WriteStringAsUtf8TextFile(FString *param_1,FString *param_2)

{
  uint uVar1;
  char cVar2;
  size_t sVar3;
  IPlatformFile *pIVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  bool bVar7;
  uint uVar8;
  undefined1 auStack_e8 [32];
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_48.Data = (FScriptContainerElement *)0x0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)pwVar6 == (FScriptContainerElement *)0x0) {
      local_40 = (FScriptContainerElement *)0x0;
      local_38 = 0;
      goto LAB_14f02f1c4;
    }
  }
  sVar3 = wcslen(pwVar6);
  local_38 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar6,(int)sVar3);
  uVar1 = local_38 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_14f02f17d;
    }
  }
  else {
LAB_14f02f17d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar8,1);
  }
  local_40 = local_c8;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  UE::Core::Private::Convert((uchar *)local_40,uVar1,pwVar6,(int)sVar3 + 1);
LAB_14f02f1c4:
  bVar7 = false;
  pIVar4 = IPlatformFile::GetPlatformPhysical();
  if ((param_2->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x110))(pIVar4,pwVar6,0,0);
  if (plVar5 == (longlong *)0x0) {
    if (1 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,local_40,(longlong)local_38);
    if (cVar2 == '\0') {
      if (1 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      (**(code **)*plVar5)(plVar5,1);
    }
    else {
      if (4 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      bVar7 = true;
      (**(code **)*plVar5)(plVar5,1);
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return bVar7;
}

// IMPLEMENT_MODULE_ChunkDownloader @ 14f02f310

void __cdecl IMPLEMENT_MODULE_ChunkDownloader(void)

{
  return;
}

// sscanf_s @ 14f02f320

int __cdecl sscanf_s(char *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res18 [16];
  
  puVar2 = __local_stdio_scanf_options();
  iVar1 = __stdio_common_vsscanf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,local_res18);
  return iVar1;
}

// `dynamic_atexit_destructor_for_'BUILD_ID_KEY'' @ 1504713e0

void __cdecl _dynamic_atexit_destructor_for__BUILD_ID_KEY__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BUILD_ID_KEY.Data.AllocatorInstance.Data;
  if (BUILD_ID_KEY.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BUILD_ID_KEY.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CACHED_BUILD_MANIFEST'' @ 150471400

void __cdecl _dynamic_atexit_destructor_for__CACHED_BUILD_MANIFEST__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CACHED_BUILD_MANIFEST.Data.AllocatorInstance.Data;
  if (CACHED_BUILD_MANIFEST.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CACHED_BUILD_MANIFEST.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ContentRangeHeader'' @ 150471420

void __cdecl
``PlatformStreamDownload'::__l2::<lambda_2>::operator()'::__l8::
_dynamic_atexit_destructor_for__ContentRangeHeader__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ContentRangeHeader.Data.AllocatorInstance.Data;
  if (ContentRangeHeader.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ContentRangeHeader.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EMBEDDED_MANIFEST'' @ 150471440

void __cdecl _dynamic_atexit_destructor_for__EMBEDDED_MANIFEST__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EMBEDDED_MANIFEST.Data.AllocatorInstance.Data;
  if (EMBEDDED_MANIFEST.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EMBEDDED_MANIFEST.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150471460

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

// `dynamic_atexit_destructor_for_'LOCAL_MANIFEST'' @ 150471480

void __cdecl _dynamic_atexit_destructor_for__LOCAL_MANIFEST__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LOCAL_MANIFEST.Data.AllocatorInstance.Data;
  if (LOCAL_MANIFEST.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LOCAL_MANIFEST.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogChunkDownloader'' @ 1504714a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChunkDownloader__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChunkDownloader);
  return;
}

