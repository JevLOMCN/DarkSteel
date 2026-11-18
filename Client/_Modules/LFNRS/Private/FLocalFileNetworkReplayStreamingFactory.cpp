// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 9

// StartupModule @ 146c8a4b0

void __thiscall
FLocalFileNetworkReplayStreamingFactory::StartupModule
          (FLocalFileNetworkReplayStreamingFactory *this)

{
  FString *pFVar1;
  TArrayView<FString_const_,int> local_18;
  
  local_18.DataPtr = (FString *)0x0;
  local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  pFVar1 = FLocalFileNetworkReplayStreamer::GetDefaultDemoSavePath();
  FLocalFileNetworkReplayStreamer::CleanUpOldReplays(pFVar1,&local_18);
  return;
}

// ShutdownModule @ 146c8a4f0

void __thiscall
FLocalFileNetworkReplayStreamingFactory::ShutdownModule
          (FLocalFileNetworkReplayStreamingFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146c8a4f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// CreateReplayStreamer @ 146c8a500

TSharedPtr<INetworkReplayStreamer,1> * __thiscall
FLocalFileNetworkReplayStreamingFactory::CreateReplayStreamer
          (FLocalFileNetworkReplayStreamingFactory *this,
          TSharedPtr<INetworkReplayStreamer,1> *__return_storage_ptr__)

{
  int *piVar1;
  TPimplPtr<UE::Net::FNetResult,1> TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TPimplPtr<UE::Net::FNetResult,1> TVar6;
  TSharedPtr<INetworkReplayStreamer,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  INetworkReplayStreamer *pIVar9;
  INetworkReplayStreamer *local_18;
  TPimplPtr<UE::Net::FNetResult,1> local_10;
  
  TVar6 = (TPimplPtr<UE::Net::FNetResult,1>)::operator_new(0x4d8);
  if (TVar6 == (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    TVar6 = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    pIVar9 = (INetworkReplayStreamer *)&DAT_00000010;
  }
  else {
    *(undefined4 *)((longlong)TVar6 + 8) = 1;
    *(undefined4 *)((longlong)TVar6 + 0xc) = 1;
    *(undefined ***)TVar6 =
         &
         ___7__TIntrusiveReferenceController_VFLocalFileNetworkReplayStreamer___00_SharedPointerInternals__6B_
    ;
    FLocalFileNetworkReplayStreamer::FLocalFileNetworkReplayStreamer
              ((FLocalFileNetworkReplayStreamer *)((longlong)TVar6 + 0x10));
    pIVar9 = (INetworkReplayStreamer *)((longlong)TVar6 + 0x10);
    if (pIVar9 == (INetworkReplayStreamer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<INetworkReplayStreamer,1> *)(*pcVar3)();
        return pTVar7;
      }
      goto LAB_146c8a5f9;
    }
  }
  if (((pIVar9[1]._padding_ == 0) ||
      (pIVar9[1].ExtendedError == (TPimplPtr<UE::Net::FNetResult,1>)0x0)) ||
     (*(int *)((longlong)pIVar9[1].ExtendedError + 8) < 1)) {
    if (TVar6 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      LOCK();
      *(int *)((longlong)TVar6 + 8) = *(int *)((longlong)TVar6 + 8) + 1;
      UNLOCK();
    }
    pIVar9[1]._padding_ = (longlong)pIVar9;
    if (TVar6 != pIVar9[1].ExtendedError) {
      if (TVar6 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        LOCK();
        *(int *)((longlong)TVar6 + 0xc) = *(int *)((longlong)TVar6 + 0xc) + 1;
        UNLOCK();
      }
      TVar2 = pIVar9[1].ExtendedError;
      if (TVar2 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)TVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)TVar2 + 8))(TVar2,1);
        }
      }
      pIVar9[1].ExtendedError = TVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar6);
  }
LAB_146c8a5f9:
  if (TVar6 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    LOCK();
    *(int *)((longlong)TVar6 + 8) = *(int *)((longlong)TVar6 + 8) + 1;
    UNLOCK();
  }
  local_18 = pIVar9;
  local_10 = TVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar6);
  pFVar8 = (this->LocalFileStreamers).AllocatorInstance.Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar8 + (longlong)(this->LocalFileStreamers).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<INetworkReplayStreamer,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  iVar5 = (this->LocalFileStreamers).ArrayNum;
  piVar1 = &(this->LocalFileStreamers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->LocalFileStreamers).AllocatorInstance,piVar1);
  }
  (this->LocalFileStreamers).ArrayNum = iVar5 + 1;
  pFVar8 = (this->LocalFileStreamers).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(INetworkReplayStreamer **)pFVar8 = local_18;
  *(TPimplPtr<UE::Net::FNetResult,1> *)(pFVar8 + 8) = local_10;
  if (local_10 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    LOCK();
    *(int *)((longlong)local_10 + 8) = *(int *)((longlong)local_10 + 8) + 1;
    UNLOCK();
  }
  __return_storage_ptr__->Object = local_18;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)local_10;
  if (local_10 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    LOCK();
    *(int *)((longlong)local_10 + 8) = *(int *)((longlong)local_10 + 8) + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_10);
  return __return_storage_ptr__;
}

// Flush @ 146c8a720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamingFactory::Flush(FLocalFileNetworkReplayStreamingFactory *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  bool bVar9;
  FTaskGraphInterface *pFVar10;
  double dVar11;
  float fVar12;
  bool local_res10 [8];
  double local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_98 [18];
  
  local_res10[0] = true;
  FConfigCacheIni::GetBool
            (GConfig,L"LocalFileNetworkReplayStreamingFactory",L"bFlushStreamersOnShutdown",
             local_res10,&GEngineIni);
  if (local_res10[0] != false) {
    local_res18 = __real_bff0000000000000;
    FConfigCacheIni::GetDouble
              (GConfig,L"LocalFileNetworkReplayStreamingFactory",L"MaxFlushTimeSeconds",&local_res18
               ,&GEngineIni);
    QueryPerformanceCounter(&local_res20);
    dVar4 = __real_4170000000000000;
    dVar3 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    bVar9 = HasAnyPendingRequests(this);
    dVar8 = __real_3fb0000000000000;
    fVar7 = __real_3dcccccd;
    uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar11 = dVar3;
    if (bVar9) {
      do {
        QueryPerformanceCounter(local_98);
        dVar2 = (double)local_98[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
        if ((0.0 < local_res18) && (local_res18 < dVar2 - dVar3)) {
          if ((byte)LogLocalFileReplay._0_1_ < 4) {
            return;
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
          return;
        }
        fVar12 = (float)(dVar2 - dVar11);
        dVar11 = (double)fVar12 - (dVar2 - dVar11);
        if ((dVar8 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar6,
                                      SUB84(dVar11,0) & uVar5)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("FloatFitsIn<OutType>(In, Precision)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xc0,L"Loss of data caused by narrowing conversion"), bVar9)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)this->_padding_)(&this->_padding_,fVar12);
        bVar9 = HasAnyPendingRequests(this);
        if (bVar9) {
          pFVar10 = FTaskGraphInterface::Get();
          (**(code **)((longlong)*pFVar10 + 0x48))(pFVar10,1);
          bVar9 = FGenericPlatformProcess::SupportsMultithreading();
          if (bVar9) {
            if (3 < (byte)LogLocalFileReplay._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
            }
            FWindowsPlatformProcess::Sleep(fVar7);
          }
        }
        bVar9 = HasAnyPendingRequests(this);
        dVar11 = dVar2;
      } while (bVar9);
    }
  }
  return;
}

// Tick @ 146c8a9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamingFactory::Tick
          (FLocalFileNetworkReplayStreamingFactory *this,float param_1)

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
  
  uVar8 = *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 << 4;
    do {
      uVar6 = ~uVar8 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data) {
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
                            ("LocalFileStreamers[i].IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                             ,0xeaa,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data) {
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
      FLocalFileNetworkReplayStreamer::Tick
                (*(FLocalFileNetworkReplayStreamer **)(lVar1 + lVar7),param_1);
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data) {
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
        if ((int)uVar8 < *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data) {
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
        if ((*(longlong *)(lVar1 + 0x198) == 0) && (*(int *)(lVar1 + 400) < 1)) {
          uVar4 = 0;
          if ((int)uVar8 < *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data) {
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
          if ((*(char *)(*(longlong *)(lVar1 + lVar7) + 0x3b8) != '\0') &&
             (2 < (byte)LogLocalFileReplay._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay)
            ;
          }
          uVar4 = 0;
          if ((int)uVar8 < *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data) {
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
          iVar5 = ~uVar8 + *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data;
          if (iVar5 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar5 << 4);
          }
          *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data =
               *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)&this->_padding_,
                     *(int *)&(this->LocalFileStreamers).AllocatorInstance.Data,
                     (int *)((longlong)&(this->LocalFileStreamers).AllocatorInstance.Data + 4));
        }
      }
      lVar7 = lVar7 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// GetTickableTickType @ 146c8ad60

ETickableTickType __thiscall
FLocalFileNetworkReplayStreamingFactory::GetTickableTickType
          (FLocalFileNetworkReplayStreamingFactory *this)

{
  return Always;
}

// GetStatId @ 146c8ad70

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FLocalFileNetworkReplayStreamingFactory::GetStatId(FLocalFileNetworkReplayStreamingFactory *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FLocalFileNetworkReplayStreamingFactory::GetStatId(void)const_::_2_::FStat_FLocalFileNetworkReplayStreamingFactory>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FLocalFileNetworkReplayStreamingFactory ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FLocalFileNetworkReplayStreamingFactory::GetStatId(void)const_::_2_::FStat_FLocalFileNetworkReplayStreamingFactory>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FLocalFileNetworkReplayStreamingFactory");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FLocalFileNetworkReplayStreamingFactory,
                   *pFVar1,L"FLocalFileNetworkReplayStreamingFactory","STATGROUP_Tickables",
                   "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FLocalFileNetworkReplayStreamingFactory;
  if (StatPtr_FLocalFileNetworkReplayStreamingFactory ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FLocalFileNetworkReplayStreamingFactory::GetStatId(void)const_::_2_::FStat_FLocalFileNetworkReplayStreamingFactory>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FLocalFileNetworkReplayStreamingFactory");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FLocalFileNetworkReplayStreamingFactory::GetStatId(void)const_::_2_::FStat_FLocalFileNetworkReplayStreamingFactory>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_FLocalFileNetworkReplayStreamingFactory,*pFVar1,
                         L"FLocalFileNetworkReplayStreamingFactory","STATGROUP_Tickables",
                         "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// IsTickableWhenPaused @ 146c8aed0

bool __thiscall
FLocalFileNetworkReplayStreamingFactory::IsTickableWhenPaused
          (FLocalFileNetworkReplayStreamingFactory *this)

{
  return true;
}

// HasAnyPendingRequests @ 146cacf10

bool __thiscall
FLocalFileNetworkReplayStreamingFactory::HasAnyPendingRequests
          (FLocalFileNetworkReplayStreamingFactory *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LocalFileStreamers).ArrayNum;
  pFVar3 = (this->LocalFileStreamers).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LocalFileStreamers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FLocalFileNetworkReplayStreamer,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    lVar2 = *(longlong *)pFVar3;
    if ((lVar2 != 0) && ((*(longlong *)(lVar2 + 0x198) != 0 || (0 < *(int *)(lVar2 + 400))))) {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

