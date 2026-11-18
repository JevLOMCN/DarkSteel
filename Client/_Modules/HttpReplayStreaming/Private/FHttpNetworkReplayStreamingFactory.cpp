// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 8

// CreateReplayStreamer @ 146cb46c0

TSharedPtr<INetworkReplayStreamer,1> * __thiscall
FHttpNetworkReplayStreamingFactory::CreateReplayStreamer
          (FHttpNetworkReplayStreamingFactory *this,
          TSharedPtr<INetworkReplayStreamer,1> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FHttpNetworkReplayStreamer *pFVar5;
  TSharedPtr<INetworkReplayStreamer,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FHttpNetworkReplayStreamer *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pFVar5 = ::operator_new(0x3d0);
  if (pFVar5 == (FHttpNetworkReplayStreamer *)0x0) {
    pFVar5 = (FHttpNetworkReplayStreamer *)0x0;
  }
  else {
    pFVar5 = FHttpNetworkReplayStreamer::FHttpNetworkReplayStreamer(pFVar5);
  }
  local_18 = pFVar5;
  local_10 = ::operator_new(0x18);
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    local_10->SharedReferenceCount = (atomic<int>)0x1;
    local_10->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFHttpNetworkReplayStreamer__U__DefaultDeleter_VFHttpNetworkReplayStreamer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_10->WeakReferenceCount = (atomic<int>)0x1;
    local_10[1]._padding_ = (longlong)pFVar5;
  }
  pFVar7 = (this->HttpStreamers).AllocatorInstance.Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar7 + (longlong)(this->HttpStreamers).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<INetworkReplayStreamer,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar4 = (this->HttpStreamers).ArrayNum;
  piVar1 = &(this->HttpStreamers).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->HttpStreamers).AllocatorInstance,piVar1);
  }
  pFVar7 = (this->HttpStreamers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  (this->HttpStreamers).ArrayNum = iVar4 + 1;
  *(FHttpNetworkReplayStreamer **)pFVar7 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_10;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->Object = (INetworkReplayStreamer *)local_18;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_10;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// Tick @ 146cb4820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamingFactory::Tick(FHttpNetworkReplayStreamingFactory *this,float param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = *(int *)&(this->HttpStreamers).AllocatorInstance.Data - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 << 4;
    do {
      uVar6 = ~uVar8 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->HttpStreamers).AllocatorInstance.Data) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(longlong *)(lVar7 + this->_padding_) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("HttpStreamers[i].IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                             ,0xa96,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->HttpStreamers).AllocatorInstance.Data) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = this->_padding_;
      if ((*(longlong *)(lVar1 + lVar7) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FHttpNetworkReplayStreamer::Tick(*(FHttpNetworkReplayStreamer **)(lVar1 + lVar7),param_1);
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->HttpStreamers).AllocatorInstance.Data) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(this->_padding_ + 8 + lVar7);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 8) == 1)) {
        uVar4 = 0;
        if ((int)uVar8 < *(int *)&(this->HttpStreamers).AllocatorInstance.Data) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = this->_padding_;
        if ((*(longlong *)(lVar1 + lVar7) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = *(longlong *)(lVar1 + lVar7);
        if ((*(longlong *)(lVar1 + 0x310) == 0) && (*(int *)(lVar1 + 0x308) < 1)) {
          uVar4 = 0;
          if ((int)uVar8 < *(int *)&(this->HttpStreamers).AllocatorInstance.Data) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar1 = this->_padding_;
          if ((*(longlong *)(lVar1 + lVar7) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((*(char *)(*(longlong *)(lVar1 + lVar7) + 0x260) != '\0') &&
             (2 < (byte)LogHttpReplay._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
          }
          uVar4 = 0;
          if ((int)uVar8 < *(int *)&(this->HttpStreamers).AllocatorInstance.Data) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (void *)(this->_padding_ + lVar7);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
          iVar5 = ~uVar8 + *(int *)&(this->HttpStreamers).AllocatorInstance.Data;
          if (iVar5 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar5 << 4);
          }
          *(int *)&(this->HttpStreamers).AllocatorInstance.Data =
               *(int *)&(this->HttpStreamers).AllocatorInstance.Data + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)&this->_padding_,
                     *(int *)&(this->HttpStreamers).AllocatorInstance.Data,
                     (int *)((longlong)&(this->HttpStreamers).AllocatorInstance.Data + 4));
        }
      }
      lVar7 = lVar7 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// GetTickableTickType @ 146cb4bc0

ETickableTickType __thiscall
FHttpNetworkReplayStreamingFactory::GetTickableTickType(FHttpNetworkReplayStreamingFactory *this)

{
  return Always;
}

// GetStatId @ 146cb4bd0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FHttpNetworkReplayStreamingFactory::GetStatId(FHttpNetworkReplayStreamingFactory *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FHttpNetworkReplayStreamingFactory::GetStatId(void)const_::_2_::FStat_FHttpNetworkReplayStreamingFactory>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FHttpNetworkReplayStreamingFactory ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FHttpNetworkReplayStreamingFactory::GetStatId(void)const_::_2_::FStat_FHttpNetworkReplayStreamingFactory>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FHttpNetworkReplayStreamingFactory");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FHttpNetworkReplayStreamingFactory,*pFVar1,
                   L"FHttpNetworkReplayStreamingFactory","STATGROUP_Tickables","STATCAT_Advanced",
                   L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FHttpNetworkReplayStreamingFactory;
  if (StatPtr_FHttpNetworkReplayStreamingFactory ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FHttpNetworkReplayStreamingFactory::GetStatId(void)const_::_2_::FStat_FHttpNetworkReplayStreamingFactory>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FHttpNetworkReplayStreamingFactory");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FHttpNetworkReplayStreamingFactory::GetStatId(void)const_::_2_::FStat_FHttpNetworkReplayStreamingFactory>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FHttpNetworkReplayStreamingFactory,
                         *pFVar1,L"FHttpNetworkReplayStreamingFactory","STATGROUP_Tickables",
                         "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// IsTickableWhenPaused @ 146cb4d30

bool __thiscall
FHttpNetworkReplayStreamingFactory::IsTickableWhenPaused(FHttpNetworkReplayStreamingFactory *this)

{
  return true;
}

// Flush @ 146cb4d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpNetworkReplayStreamingFactory::Flush(FHttpNetworkReplayStreamingFactory *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  bool bVar9;
  FHttpModule *pFVar10;
  FTaskGraphInterface *pFVar11;
  double dVar12;
  float fVar13;
  bool local_res10 [8];
  double local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_98 [18];
  
  local_res10[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"HttpNetworkReplayStreamingFactory",L"bFlushStreamersOnShutdown",local_res10,
             &GEngineIni);
  if (local_res10[0] != false) {
    local_res18 = __real_bff0000000000000;
    FConfigCacheIni::GetDouble
              (GConfig,L"HttpNetworkReplayStreamingFactory",L"MaxFlushTimeSeconds",&local_res18,
               &GEngineIni);
    QueryPerformanceCounter(&local_res20);
    dVar5 = __real_4170000000000000;
    dVar3 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    bVar9 = HasPendingHttpRequests(this);
    dVar8 = __real_3fb0000000000000;
    uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    fVar4 = __real_3d4ccccd;
    dVar12 = dVar3;
    if (bVar9) {
      do {
        QueryPerformanceCounter(local_98);
        dVar2 = (double)local_98[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
        if ((0.0 < local_res18) && (local_res18 < dVar2 - dVar3)) {
          if ((byte)LogHttpReplay._0_1_ < 4) {
            return;
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
          return;
        }
        fVar13 = (float)(dVar2 - dVar12);
        dVar12 = (double)fVar13 - (dVar2 - dVar12);
        if ((dVar8 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar7,
                                      SUB84(dVar12,0) & uVar6)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("FloatFitsIn<OutType>(In, Precision)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xc0,L"Loss of data caused by narrowing conversion"), bVar9)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)this->_padding_)(&this->_padding_,fVar13);
        bVar9 = HasPendingHttpRequests(this);
        if (bVar9) {
          pFVar10 = FHttpModule::Get();
          if ((pFVar10->HttpManager == (FHttpManager *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("HttpManager != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                                 ,0x50,L""), bVar9)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FHttpManager::Flush(pFVar10->HttpManager,Default);
          pFVar11 = FTaskGraphInterface::Get();
          (**(code **)((longlong)*pFVar11 + 0x48))(pFVar11);
          bVar9 = FGenericPlatformProcess::SupportsMultithreading();
          if ((bVar9) || (bVar9 = FForkProcessHelper::SupportsMultithreadingPostFork(), bVar9)) {
            if (3 < (byte)LogHttpReplay._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
            }
            FWindowsPlatformProcess::Sleep(fVar4);
          }
        }
        bVar9 = HasPendingHttpRequests(this);
        dVar12 = dVar2;
      } while (bVar9);
    }
  }
  return;
}

// ShutdownModule @ 146cb5030

void __thiscall
FHttpNetworkReplayStreamingFactory::ShutdownModule(FHttpNetworkReplayStreamingFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146cb5033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// HasPendingHttpRequests @ 146cbe930

bool __thiscall
FHttpNetworkReplayStreamingFactory::HasPendingHttpRequests(FHttpNetworkReplayStreamingFactory *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HttpStreamers).ArrayNum;
  pFVar3 = (this->HttpStreamers).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HttpStreamers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FHttpNetworkReplayStreamer,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    lVar2 = *(longlong *)pFVar3;
    if ((lVar2 != 0) && ((*(longlong *)(lVar2 + 0x310) != 0 || (0 < *(int *)(lVar2 + 0x308))))) {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

