// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FTexture2DStreamIn_IO @ 148807210

FTexture2DStreamIn_IO * __thiscall
FTexture2DStreamIn_IO::FTexture2DStreamIn_IO
          (FTexture2DStreamIn_IO *this,UTexture2D *param_1,bool param_2)

{
  FTexture2DStreamIn::FTexture2DStreamIn((FTexture2DStreamIn *)this,param_1);
  this->bPrioritizedIORequest = param_2;
  this->_padding_ = (longlong)&___7FTexture2DStreamIn_IO__6B_;
  this->BatchRequest = (FBulkDataBatchRequest)0x0;
  this->bFailedOnIOError = false;
  return this;
}

// ~FTexture2DStreamIn_IO @ 14880ccc0

void __thiscall FTexture2DStreamIn_IO::~FTexture2DStreamIn_IO(FTexture2DStreamIn_IO *this)

{
  this->_padding_ = (longlong)&___7FTexture2DStreamIn_IO__6B_;
  if (this->BatchRequest != (FBulkDataBatchRequest)0x0) {
    (**(code **)(*(longlong *)this->BatchRequest + 0x10))();
  }
  FTexture2DStreamIn::~FTexture2DStreamIn((FTexture2DStreamIn *)this);
  return;
}

// operator() @ 14880f3a0

void __thiscall
`FTexture2DStreamIn_IO::SetIORequests'::__l2::<lambda_1>::operator()(void *this,EStatus param_1)

{
  if (0.0 < GTextureStreamInAbandonCallbackIOLatency) {
    FWindowsPlatformProcess::Sleep(GTextureStreamInAbandonCallbackIOLatency * __real_3a83126f);
  }
  LOCK();
  *(int *)(*(longlong *)this + 0x58) = *(int *)(*(longlong *)this + 0x58) + -1;
  UNLOCK();
  if ((param_1 != Ok) && (*(char *)(*(longlong *)this + 0x5c) == '\0')) {
    *(undefined1 *)(*(longlong *)this + 0x260) = 1;
    if (*(int *)(*(longlong *)this + 0x60) != 0) {
      *(undefined1 *)(*(longlong *)this + 0x5c) = 1;
    }
  }
  if ((0 < FRenderAssetStreamingSettings::ExtraIOLatency) &&
     (*(int *)(*(longlong *)this + 0x58) == 0)) {
    FWindowsPlatformProcess::Sleep
              ((float)FRenderAssetStreamingSettings::ExtraIOLatency * __real_3a83126f);
  }
  if (*(char *)(*(longlong *)this + 0x5c) != '\0') {
    if (__CsvProfilerStat155 == false) {
      FCsvProfilerTrace::OutputInlineStat("CancelledMipsInMB",_GCsvCategory_TextureStreaming.Index);
      __CsvProfilerStat155 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("CancelledMipsInMB",_GCsvCategory_TextureStreaming.Index,
               (float)*(int *)((longlong)this + 8) * __real_35800000,Accumulate);
  }
  FRenderAssetUpdate::Tick(*(FRenderAssetUpdate **)this,TT_None);
  return;
}

// Abort @ 148816720

void __thiscall FTexture2DStreamIn_IO::Abort(FTexture2DStreamIn_IO *this)

{
  int *piVar1;
  FQueuedThreadPool *pFVar2;
  int iVar3;
  FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask> *this_00;
  
  if ((*(char *)((longlong)&this->_padding_ + 4) == '\0') && ((int)this->_padding_ != 0)) {
    if ((int)this->_padding_ != 0) {
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    }
    if (this->BatchRequest != (FBulkDataBatchRequest)0x0) {
      iVar3 = (**(code **)(*(longlong *)this->BatchRequest + 0x20))();
      if (iVar3 == 1) {
        this_00 = ::operator_new(0x40);
        if (this_00 == (FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask> *)0x0) {
          this_00 = (FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask> *)0x0;
        }
        else {
          this_00->_padding_ = 0;
          this_00->_padding_ =
               (longlong)
               &___7__FAutoDeleteAsyncTask_VFCancelIORequestsTask_FTexture2DStreamIn_IO____6B_;
          (this_00->Task).PendingUpdate.Reference = this;
          LOCK();
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        pFVar2 = GThreadPool;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&this_00->_padding_);
        if (pFVar2 != (FQueuedThreadPool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488167c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((longlong)*pFVar2 + 0x18))(pFVar2,this_00,3);
          return;
        }
        FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask>::DoWork(this_00);
      }
    }
  }
  return;
}

// CanAbandon @ 148824bf0

bool __thiscall FTexture2DStreamIn_IO::CanAbandon(FTexture2DStreamIn_IO *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (!GEnableAssetUpdateAbandons) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GEnableAssetUpdateAbandons",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_IO.cpp"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((((int)this->_padding_ != 0) && (*(char *)((longlong)&this->_padding_ + 4) != '\0')) &&
     (this->BatchRequest != (FBulkDataBatchRequest)0x0)) {
    iVar4 = (**(code **)(*(longlong *)this->BatchRequest + 0x20))();
    if ((iVar4 == 1) && (0 < (int)this->_padding_)) {
      return true;
    }
  }
  return false;
}

// CancelIORequests @ 148828950

void __thiscall FTexture2DStreamIn_IO::CancelIORequests(FTexture2DStreamIn_IO *this)

{
  int iVar1;
  
  if (this->BatchRequest != (FBulkDataBatchRequest)0x0) {
    iVar1 = (**(code **)(*(longlong *)this->BatchRequest + 0x20))();
    if ((iVar1 == 1) && (this->BatchRequest != (FBulkDataBatchRequest)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148828984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->BatchRequest + 0x28))();
      return;
    }
  }
  return;
}

// ClearIORequests @ 148829fb0

void __thiscall
FTexture2DStreamIn_IO::ClearIORequests(FTexture2DStreamIn_IO *this,FTexture2DUpdateContext *param_1)

{
  FBulkDataBatchRequest FVar1;
  
  FVar1 = this->BatchRequest;
  if (FVar1 != (FBulkDataBatchRequest)0x0) {
    this->BatchRequest = (FBulkDataBatchRequest)0x0;
                    /* WARNING: Could not recover jumptable at 0x000148829fcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)FVar1 + 0x10))();
    return;
  }
  return;
}

// ReportIOError @ 148855b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DStreamIn_IO::ReportIOError(FTexture2DStreamIn_IO *this,FTexture2DUpdateContext *param_1)

{
  code *pcVar1;
  uint uVar2;
  FStreamingManagerCollection *this_00;
  IRenderAssetStreamingManager *pIVar3;
  int iVar4;
  FName local_res8;
  FString local_28;
  
  if ((this->bFailedOnIOError != false) && (param_1->Texture != (UTexture2D *)0x0)) {
    this_00 = IStreamingManager::Get();
    pIVar3 = FStreamingManagerCollection::GetTextureStreamingManager(this_00);
    iVar4 = 0;
    if (0 < (int)this->_padding_) {
      do {
        pcVar1 = *(code **)(*(longlong *)pIVar3 + 0x118);
        uVar2 = UTexture::GetMipIoFilenameHash
                          ((UTexture *)param_1->Texture,
                           (uint)*(byte *)((longlong)&this->_padding_ + 4) + iVar4);
        (*pcVar1)(pIVar3,uVar2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)this->_padding_);
    }
    if (2 < (byte)LogContentStreaming._0_1_) {
      local_res8 = (FName)param_1->Texture->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetIORequests @ 1488589d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FTexture2DStreamIn_IO::SetIORequests(FTexture2DStreamIn_IO *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  FIoBuffer this_00;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  longlong lVar11;
  TEventRef<unsigned_int> TVar12;
  FWriteBuffer *pFVar13;
  EAsyncIOPriorityAndFlags EVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  longlong *plVar23;
  EAsyncIOPriorityAndFlags EVar24;
  undefined1 auStackY_168 [32];
  int local_124;
  undefined8 local_108;
  FIoBuffer local_100;
  longlong local_f8;
  FName local_f0;
  FName local_e8;
  FBulkData *local_e0;
  FTexture2DUpdateContext *local_d8;
  FString local_d0;
  FBuilder local_c0;
  FName local_a8 [4];
  code *local_88 [2];
  undefined **local_78;
  FTexture2DStreamIn_IO *local_70;
  int local_68;
  undefined4 local_64;
  undefined ***local_60;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uVar17 = (uint)*(byte *)((longlong)&this->_padding_ + 3);
  bVar7 = false;
  local_124 = 0;
  if ((int)uVar8 < (int)uVar17) {
    uVar17 = uVar8;
  }
  local_d8 = param_1;
  FBulkDataBatchRequest::FBatchBuilder::FBatchBuilder((FBatchBuilder *)&local_c0,uVar17);
  iVar9 = *(int *)((longlong)&this->_padding_ + 4);
  uVar19 = (ulonglong)iVar9;
  iVar22 = 0;
  if (iVar9 < (int)this->_padding_) {
    lVar11 = uVar19 * 8;
    lVar20 = uVar19 << 4;
    while (iVar22 = local_124, local_f8 = lVar11, *(char *)((longlong)&this->_padding_ + 4) == '\0')
    {
      uVar8 = (uint)uVar19;
      uVar21 = ~uVar8 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar8 < (param_1->MipsView).ArrayNum) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar23 = &this->_padding_;
      lVar11 = *(longlong *)(lVar11 + (longlong)(param_1->MipsView).DataPtr);
      uVar17 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar15 = plVar23;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar15 = (longlong *)this->_padding_;
      }
      if ((*(longlong *)(lVar20 + (longlong)plVar15) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipData[MipIndex].Data != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_IO.cpp"
                             ,0x46,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_e0 = (FBulkData *)(lVar11 + 0x20);
      uVar10 = FBulkData::GetBulkDataSize(local_e0);
      if ((longlong)uVar10 < 1) {
        this->bFailedOnIOError = true;
        if ((int)this->_padding_ != 0) {
          *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
        }
        break;
      }
      uVar17 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar15 = plVar23;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar15 = (longlong *)this->_padding_;
      }
      FTexture2DResource::WarnRequiresTightPackedMip
                ((uint)*(ushort *)(lVar11 + 0x48),(uint)*(ushort *)(lVar11 + 0x4a),
                 *(EPixelFormat *)((longlong)&param_1->Resource->_padding_ + 4),
                 *(uint *)(lVar20 + 8 + (longlong)plVar15));
      EVar24 = AIOP_Low;
      if (this->bPrioritizedIORequest != false) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
             ((IConsoleManager::SetupSingleton(),
              IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Singleton != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x4fb,L""), bVar5)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          CVarAsyncLoadingPrecachePriority =
               (IConsoleVariable *)
               (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                         (IConsoleManager::Singleton,L"s.AsyncLoadingPrecachePriority",1);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar4 = CVarStreamingLowResHandlingMode.Ref;
        bVar5 = IsInParallelGameThread();
        if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
          lVar11 = 0;
        }
        else {
          lVar11 = 4;
        }
        if ((CVarAsyncLoadingPrecachePriority == (IConsoleVariable *)0x0) ||
           (*(int *)((longlong)pTVar4->ShadowedValue + lVar11) != 2)) {
          EVar24 = AIOP_BelowNormal;
        }
        else {
          iVar9 = (**(code **)(*(longlong *)CVarAsyncLoadingPrecachePriority + 200))();
          EVar14 = AIOP_CriticalPath;
          if ((int)(iVar9 + AIOP_Low) < 5) {
            EVar14 = iVar9 + AIOP_Low;
          }
          EVar24 = AIOP_BelowNormal;
          if (2 < (int)EVar14) {
            EVar24 = EVar14;
          }
        }
      }
      if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
        local_108 = 0;
        TVar12 = (TEventRef<unsigned_int>)&local_108;
      }
      else {
        bVar7 = true;
        local_f0 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_f0,&local_d0);
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_d0.Data.ArrayNum != 0) {
          FVar18.Data = local_d0.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_e8,(wchar_t *)FVar18.Data);
        TVar12 = FStringTrace::GetNameRef(local_a8);
      }
      uVar2 = *(undefined8 *)TVar12;
      if ((bVar7) &&
         (bVar7 = false, local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
      if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                  ((TLogScope<0> *)&local_58);
        bVar5 = true;
        *local_58 = (int)uVar2;
        *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
      }
      uVar17 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar23 = (longlong *)this->_padding_;
      }
      FIoBuffer::FIoBuffer(&local_100,Wrap,*(void **)(lVar20 + (longlong)plVar23),uVar10);
      FBulkDataBatchRequest::FBatchBuilder::Read
                ((FBatchBuilder *)&local_c0,local_e0,0,uVar10,
                 EVar24 | (AIOP_FLAG_HW_TARGET_MEMORY|AIOP_FLAG_DONTCACHE),&local_100,
                 (FBulkDataRequest *)0x0);
      this_00.CorePtr.Reference = local_100.CorePtr.Reference;
      iVar22 = local_124 + (int)uVar10;
      if (local_100.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_100.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
          ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
        }
      }
      if (bVar5) {
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar11 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar13 = *(FWriteBuffer **)(lVar11 + 0x20);
        if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
          pFVar13 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar13->Cursor = '\n';
        pFVar13->Cursor = pFVar13->Cursor + 1;
        pFVar13->Committed = pFVar13->Cursor;
      }
      uVar19 = (ulonglong)(uVar8 + 1);
      lVar11 = local_f8 + 8;
      lVar20 = lVar20 + 0x10;
      param_1 = local_d8;
      local_124 = iVar22;
      local_f8 = lVar11;
      if ((int)this->_padding_ <= (int)(uVar8 + 1)) break;
    }
  }
  if ((this->bFailedOnIOError == false) &&
     (bVar7 = FBulkDataBatchRequest::FBatchBuilder::IsEmpty((FBatchBuilder *)&local_c0), !bVar7)) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTexture2DStreamIn_IO::SetIORequests'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_64 = local_a8[2].Number;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTexture2DStreamIn_IO::SetIORequests'::__l2::<lambda_1>,void,enum_FBulkDataRequest::EStatus>
                  ::Call;
    local_70 = this;
    local_68 = iVar22;
    FBulkDataBatchRequest::FBatchBuilder::Issue
              ((FBatchBuilder *)&local_c0,
               (TFunction<void___cdecl(FBulkDataRequest::EStatus)> *)local_88,&this->BatchRequest);
    if (local_88[0] != (code *)0x0) {
      pppuVar16 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar16 = local_60;
      }
      (*(code *)(*pppuVar16)[2])();
    }
  }
  FBulkDataBatchRequest::FBuilder::~FBuilder(&local_c0);
  return;
}

