// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 523

// Call @ 141488830

float __cdecl
UE::Core::Private::Function::TFunctionRefCaller<float_(__cdecl*)(float),float,float>::Call
          (void *param_1,float *param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141488837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)param_1)(*param_2);
  return fVar1;
}

// Call @ 141488840

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`LowLevelTasks::FScheduler::CreateWorker'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  FScheduler *this;
  TLocalQueue *pTVar4;
  FWaitEvent *pFVar5;
  FTlsValues *pFVar6;
  bool *pbVar7;
  FTaskTagScope FStack_38;
  
  this = *(FScheduler **)param_1;
  bVar1 = *(bool *)((longlong)param_1 + 0x1c);
  uVar3 = *(uint *)((longlong)param_1 + 0x18);
  pTVar4 = *(TLocalQueue **)((longlong)param_1 + 0x10);
  pFVar5 = *(FWaitEvent **)((longlong)param_1 + 8);
  pFVar6 = LowLevelTasks::FSchedulerTls::GetTlsValuesRef();
  FTaskTagScope::FTaskTagScope(&FStack_38,EWorkerThread);
  pFVar6->ActiveScheduler = (FSchedulerTls *)this;
  FMemory::SetupTLSCachesOnCurrentThread();
  pFVar6->WorkerType = Foreground - (bVar1 != false);
  pFVar6->bIsStandbyWorker = pFVar5->bIsStandby;
  pFVar6->LocalQueue = pTVar4;
  pbVar7 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
  bVar2 = *pbVar7;
  *pbVar7 = true;
  if (pFVar5->bIsStandby == false) {
    LowLevelTasks::FScheduler::WorkerLoop(this,pFVar5,pTVar4,uVar3,bVar1);
  }
  else {
    LowLevelTasks::FScheduler::StandbyLoop(this,pFVar5,pTVar4,uVar3,bVar1);
  }
  *pbVar7 = bVar2;
  pFVar6->LocalQueue = (TLocalQueue *)0x0;
  pFVar6->ActiveScheduler = (FSchedulerTls *)0x0;
  pFVar6->bIsStandbyWorker = false;
  pFVar6->WorkerType = None;
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  FTaskTagScope::~FTaskTagScope(&FStack_38);
  return;
}

// Call @ 141488850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::__l2::<lambda_1>,void,FIoChunkBlockDecodeResult_&&,FIoChunkBlockDecodeRequest_&>
::Call(void *param_1,FIoChunkBlockDecodeResult *param_2,FIoChunkBlockDecodeRequest *param_3)

{
  FMutex *this;
  atomic<unsigned_char> aVar1;
  EIoErrorCode EVar2;
  FPlatformIoDispatcherBase *this_00;
  FIoEncodedBlockRequest *pFVar3;
  FIoServiceThread *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  this_00 = *(FPlatformIoDispatcherBase **)param_1;
  pFVar3 = *(FIoEncodedBlockRequest **)((longlong)param_1 + 8);
  if (((param_2->ErrorCode != Ok) && ((param_2->ErrorCode - SignatureError & 0xfffffffd) != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.ErrorCode == EIoErrorCode::Ok || Result.ErrorCode == EIoErrorCode::SignatureError || Result.ErrorCode == EIoErrorCode::CompressionError"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x54a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3->DecodedData = (param_2->DecodedBlock).Data;
  EVar2 = param_2->ErrorCode;
  pFVar3->ErrorCode = EVar2;
  if ((EVar2 == Unknown) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("EncodedBlockRequest.ErrorCode != EIoErrorCode::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x54d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FPlatformIoDispatcherBase::ScatterDecodedBlock(this_00,pFVar3);
  bVar6 = FIoFileBlockMemoryPool::Free(&this_00->FileBlockMemoryPool,&pFVar3->FileBufferHandle);
  if (bVar6) {
    (**(code **)(this_00->_padding_ + 0x40))(this_00);
  }
  this = &this_00->EncodedBlockMutex;
  LOCK();
  bVar6 = this->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(this);
  }
  TIntrusiveList<UE::FIoEncodedBlockRequest>::AddTail(&this_00->BlocksToComplete,pFVar3);
  FIoDispatcherFilesystemStats::OnDecompressComplete
            (&(this_00->Stats).Stats,(ulonglong)pFVar3->BlockCompressedSize,
             (ulonglong)pFVar3->BlockUncompressedSize);
  LOCK();
  aVar1 = this->State;
  this->State = (atomic<unsigned_char>)((char)this->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this);
  }
  pFVar4 = (this_00->SupportThread).Ptr;
  if (pFVar4 != (FIoServiceThread *)0x0) {
    (**(code **)(((pFVar4->WakeUpEvent).Event)->_padding_ + 0x10))();
  }
  return;
}

// Call @ 141488860

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>::Call
          (void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x38);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFMemStack____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    FMemStackBase::FMemStackBase((FMemStackBase *)(pFVar2 + 2),Small);
    pFVar2[6].field_0x5 = 1;
    *pFVar2 = (FTlsAutoCleanup)&___7FMemStack__6B_;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 1414888c0

FLinearColor * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Color::GetColorDecodeFunction'::__l2::<lambda_1>,FLinearColor,FLinearColor_const_&>
::Call(FLinearColor *__return_storage_ptr__,void *param_1,FLinearColor *param_2)

{
  `UE::Color::GetColorDecodeFunction'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1414888f0

FLinearColor * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Color::GetColorEncodeFunction'::__l2::<lambda_1>,FLinearColor,FLinearColor_const_&>
::Call(FLinearColor *__return_storage_ptr__,void *param_1,FLinearColor *param_2)

{
  `UE::Color::GetColorEncodeFunction'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 141488920

FUniqueBuffer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::CompressedBuffer::Private::FBufferDecoderSource::ReadOrView'::__l2::<lambda_1>,FUniqueBuffer,unsigned___int64>
::Call(void *param_1,ulong64 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *in_R8;
  
  lVar2 = 1;
  if (*in_R8 != 0) {
    lVar2 = *in_R8;
  }
  lVar1 = 0x3f;
  if (lVar2 - 1U != 0) {
    for (; lVar2 - 1U >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  FUniqueBuffer::Alloc((ulong64)param_1);
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Call @ 141488990

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`AnyTaskCompleted'::__l9::<lambda_1>,void>::Call
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *this;
  longlong *plVar4;
  undefined8 *puVar5;
  atomic<unsigned_int> *paVar6;
  atomic<unsigned_int> *paVar7;
  
  this = (FTaskBase *)**(undefined8 **)param_1;
  if (this == (FTaskBase *)0x0) {
    paVar6 = (atomic<unsigned_int> *)&DAT_00000030;
  }
  else {
    paVar6 = &this->RefCount;
    LOCK();
    *paVar6 = (atomic<unsigned_int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  paVar7 = &this->RefCount;
  LOCK();
  piVar1 = (int *)(*(longlong *)param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == *(int *)((longlong)param_1 + 8)) {
    if (this->ExtendedPriority == TaskEvent) {
      LOCK();
      *paVar6 = (atomic<unsigned_int>)((int)*paVar6 + 1);
      UNLOCK();
    }
    Tasks::Private::FTaskBase::TryLaunch(this,0);
  }
  else if ((iVar2 == 1) && (plVar4 = *(longlong **)param_1, plVar4 != (longlong *)0x0)) {
    puVar5 = (undefined8 *)*plVar4;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    ::operator_delete(plVar4,0x10);
  }
  if (this != (FTaskBase *)0x0) {
    LOCK();
    aVar3 = *paVar7;
    *paVar7 = (atomic<unsigned_int>)((int)*paVar7 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// Call @ 1414889a0

FUniqueBuffer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::CompressedBuffer::Private::TryReadHeader'::__l11::<lambda_1>,FUniqueBuffer,unsigned___int64>
::Call(void *param_1,ulong64 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *in_R8;
  
  lVar2 = 1;
  if (*in_R8 != 0) {
    lVar2 = *in_R8;
  }
  lVar1 = 0x3f;
  if (lVar2 - 1U != 0) {
    for (; lVar2 - 1U >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  FUniqueBuffer::Alloc((ulong64)param_1);
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Call @ 141488a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_2>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  `LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 8),EForeground,L"Foreground Workers",L"Foreground",
             (atomic<int> *)(lVar1 + 0x7be0),*(int *)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x1c),*(EThreadPriority *)(lVar1 + 0x7bf8),
             *(ulong64 *)(lVar1 + 0x7be8));
  return;
}

// Call @ 141488a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_3>,void>::Call
          (void *param_1)

{
  `LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 8),EBackground,L"Background Workers",L"Background",
             (atomic<int> *)(*(longlong *)param_1 + 0x7be4),*(int *)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x1c),*(EThreadPriority *)((longlong)param_1 + 0x20),
             *(ulong64 *)(*(longlong *)param_1 + 0x7bf0));
  return;
}

// Call @ 1415af110

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001415af110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)();
  return;
}

// Call @ 1415af120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFileCacheHandle::FFileCacheHandle'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  `FFileCacheHandle::FFileCacheHandle'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1415af140

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 1415af150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOodleDataCompression::CompressParallelSub'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FOodleDataCompression::CompressParallelSub'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1415af160

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOodleDataCompression::DecompressParallel'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FOodleDataCompression::DecompressParallel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1415af170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFileCacheHandle::ReadDataUncached'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  FTaskBase *this;
  
  this = *(FTaskBase **)param_1;
  if (this->ExtendedPriority == TaskEvent) {
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(this,0);
  return;
}

// Call @ 1415af190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFileCacheHandle::ReadLine'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>::
Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  FTaskBase *this;
  IAsyncReadRequest *pIVar1;
  FFileCache *this_00;
  
  this = *(FTaskBase **)param_1;
  pIVar1 = *param_3;
  if (this->ExtendedPriority == TaskEvent) {
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(this,0);
  this_00 = GetCache();
  FFileCache::PushCompletedRequest(this_00,pIVar1);
  return;
}

// Call @ 1415af1d0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFileCacheHandle::AcquireSlotAndReadLine'::__l21::<lambda_1>,void>::Call
          (void *param_1)

{
  EAsyncIOPriorityAndFlags EVar1;
  StrongBlockIdentifier<CacheLineStrongType> SVar2;
  StrongBlockIdentifier<CacheSlotStrongType> SVar3;
  FFileCacheHandle *this;
  FFileCache *pFVar4;
  
  this = *(FFileCacheHandle **)param_1;
  EVar1 = *(EAsyncIOPriorityAndFlags *)((longlong)param_1 + 0x10);
  SVar2.Id = *(int *)((longlong)param_1 + 0xc);
  SVar3.Id = *(int *)((longlong)param_1 + 8);
  pFVar4 = GetCache();
  FFileCacheHandle::ReadLine
            (this,pFVar4,SVar3,SVar2,EVar1,
             (TRefCountPtr<FBaseGraphTask> *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 1415af240

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnsiString::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<char>_>::Call
          (void *param_1,TStringView<char> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FAnsiString local_18;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  local_18.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_2->DataPtr;
  local_18.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  local_18.Data.ArrayNum = param_2->Size;
  local_18.Data.ArrayMax = *(int *)&param_2->field_0xc;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar3 = *(int *)&pFVar2[1].Data;
  if (iVar3 == *piVar1) {
    iVar3 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar3 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)(pFVar5 + 8) = 0;
  pFVar4 = (FScriptContainerElement *)
           FAnsiString::ConstructFromPtrSize
                     (&local_18,
                      (char *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                                       local_18.Data.AllocatorInstance.Data._0_4_),
                      local_18.Data.ArrayNum);
  if (pFVar5 != pFVar4) {
    if (*(void **)pFVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar5);
    }
    *(undefined8 *)pFVar5 = *(undefined8 *)pFVar4;
    *(undefined8 *)pFVar4 = 0;
    *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar4 + 8);
    *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar4 + 0xc);
    *(undefined8 *)(pFVar4 + 8) = 0;
  }
  if ((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                       local_18.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                                   local_18.Data.AllocatorInstance.Data._0_4_));
  }
  return;
}

// Call @ 1415af310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FString::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<wchar_t>_>::Call
          (void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  local_18.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_2->DataPtr;
  local_18.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  local_18.Data.ArrayNum = param_2->Size;
  local_18.Data.ArrayMax = *(int *)&param_2->field_0xc;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar3 = *(int *)&pFVar2[1].Data;
  if (iVar3 == *piVar1) {
    iVar3 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar3 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)(pFVar5 + 8) = 0;
  pFVar4 = (FScriptContainerElement *)
           ::FString::ConstructFromPtrSize
                     (&local_18,
                      (wchar_t *)
                      CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                               local_18.Data.AllocatorInstance.Data._0_4_),local_18.Data.ArrayNum);
  if (pFVar5 != pFVar4) {
    if (*(void **)pFVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar5);
    }
    *(undefined8 *)pFVar5 = *(undefined8 *)pFVar4;
    *(undefined8 *)pFVar4 = 0;
    *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar4 + 8);
    *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar4 + 0xc);
    *(undefined8 *)(pFVar4 + 8) = 0;
  }
  if ((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                       local_18.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                                   local_18.Data.AllocatorInstance.Data._0_4_));
  }
  return;
}

// Call @ 1415af3e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUtf8String::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<char8_t>_>::
Call(void *param_1,TStringView<char8_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FUtf8String local_18;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  local_18.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_2->DataPtr;
  local_18.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  local_18.Data.ArrayNum = param_2->Size;
  local_18.Data.ArrayMax = *(int *)&param_2->field_0xc;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar3 = *(int *)&pFVar2[1].Data;
  if (iVar3 == *piVar1) {
    iVar3 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar3 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)(pFVar5 + 8) = 0;
  pFVar4 = (FScriptContainerElement *)
           FUtf8String::ConstructFromPtrSize
                     (&local_18,
                      (uchar *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                                        local_18.Data.AllocatorInstance.Data._0_4_),
                      local_18.Data.ArrayNum);
  if (pFVar5 != pFVar4) {
    if (*(void **)pFVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar5);
    }
    *(undefined8 *)pFVar5 = *(undefined8 *)pFVar4;
    *(undefined8 *)pFVar4 = 0;
    *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar4 + 8);
    *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar4 + 0xc);
    *(undefined8 *)(pFVar4 + 8) = 0;
  }
  if ((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                       local_18.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                                   local_18.Data.AllocatorInstance.Data._0_4_));
  }
  return;
}

// Call @ 1415af4b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFileCache::PushCompletedRequest'::__l12::<lambda_1>,void>::Call(void *param_1)

{
  atomic<void_*> aVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  LockFreeLinkAllocator_TLSCache *this;
  
  while( true ) {
    uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)(*(longlong *)param_1 + 0x40));
    if (uVar4 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
    this = GetLockFreeAllocator();
    LockFreeLinkAllocator_TLSCache::Push(this,uVar4);
    if (aVar1 == (atomic<void_*>)0x0) break;
    if (((*(char *)((longlong)aVar1 + 0x41) == '\0') &&
        ((**(code **)(*(longlong *)aVar1 + 0x10))(aVar1,0),
        *(char *)((longlong)aVar1 + 0x41) == '\0')) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompletedRequest->WaitCompletion()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                           ,0x94,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)**(undefined8 **)aVar1)(aVar1,1);
  }
  return;
}

// Call @ 1415af4c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTSTicker::FElement::FElement'::__l1::<lambda_28_>,bool,float>::Call
          (void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `FTSTicker::FElement::FElement'::__l1::<lambda_28_>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14162d220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(wchar_t_const_*),void,wchar_t_const_*>::Call
          (void *param_1,wchar_t **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014162d226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 14162d230

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::AsyncInit'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res10;
  undefined7 uStackX_11;
  
  _local_res10 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_res10);
  return false;
}

// Call @ 14162d290

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::__l2::<lambda_1>::operator()
            (param_1);
  return false;
}

// Call @ 14162d2b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGenericCrashContext::CleanupTempSessionContextFiles'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
::Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `FGenericCrashContext::CleanupTempSessionContextFiles'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14162d2d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IPlatformFile::FileJournalIterateDirectory'::__l2::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
::Call(void *param_1,wchar_t **param_2,FFileStatData *param_3)

{
  bool bVar1;
  
  bVar1 = `IPlatformFile::FileJournalIterateDirectory'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 14162d2e0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFThreadIdleStats_Stats_UE____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FThreadIdleStats_Stats_UE__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 3) = 1;
    pFVar2[3].field_0x4 = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 14162d340

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConsoleManager::LoadAllPlatformCVars'::__l2::<lambda_1>,void,FString_const_&,FString_const_&,enum_EConsoleVariableFlags>
::Call(void *param_1,FString *param_2,FString *param_3,EConsoleVariableFlags *param_4)

{
  `FConsoleManager::LoadAllPlatformCVars'::__l2::<lambda_1>::operator()
            (param_1,param_2,param_3,*param_4);
  return;
}

// Call @ 14168a0e0

FPlatformVirtualMemoryBlock * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FWindowsPlatformMemory::FPlatformVirtualMemoryBlock_(__cdecl*)(unsigned___int64),FWindowsPlatformMemory::FPlatformVirtualMemoryBlock,unsigned___int64>
::Call(FPlatformVirtualMemoryBlock *__return_storage_ptr__,void *param_1,ulong64 *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14168a100

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_*_(__cdecl*)(unsigned___int64,unsigned___int64,unsigned___int64_&,unsigned_int_&),void_*,unsigned___int64,unsigned___int64,unsigned___int64_&,unsigned_int_&>
::Call(void *param_1,ulong64 *param_2,ulong64 *param_3,ulong64 *param_4,uint *param_5)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014168a11d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)param_1)(*param_2,*param_3,param_4,param_5);
  return pvVar1;
}

// Call @ 14168a130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(void_*,unsigned_int),void,void_*,unsigned_int>::Call
          (void *param_1,void **param_2,uint *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014168a13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 14168a150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMallocBinnedCommonUtils::Trim<FMallocBinned2>'::__l2::<lambda_1>,void,enum_ENamedThreads::Type>
::Call(void *param_1,Type *param_2)

{
  FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>
            (*(FMallocBinned2 **)param_1,true);
  return;
}

// Call @ 14168a160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMallocBinnedCommonUtils::Trim<FMallocBinned3>'::__l2::<lambda_1>,void,enum_ENamedThreads::Type>
::Call(void *param_1,Type *param_2)

{
  FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>
            (*(FMallocBinned3 **)param_1,true);
  return;
}

// Call @ 14168a170

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`<lambda_4>::operator()'::__l2::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
::Call(void *param_1,wchar_t **param_2,FFileStatData *param_3)

{
  if (!param_3->bIsDirectory && param_3->bIsValid == true) {
    FOutputDevice::LogfImpl(*(FOutputDevice **)param_1,L"%lld\t %s");
  }
  return true;
}

// Call @ 14168a1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMallocBinnedGPU::Trim'::__l5::<lambda_1>,void,enum_ENamedThreads::Type>::Call
          (void *param_1,Type *param_2)

{
  FMallocBinnedGPU::FlushCurrentThreadCache(*(FMallocBinnedGPU **)param_1);
  return;
}

// Call @ 14168a1c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`<lambda_5>::operator()'::__l15::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
::Call(void *param_1,wchar_t **param_2,FFileStatData *param_3)

{
  bool bVar1;
  
  bVar1 = `<lambda_5>::operator()'::__l15::<lambda_1>::operator()(param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 1416e19a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(unsigned_int,FRunnableThread_*),void,unsigned_int,FRunnableThread_*>
::Call(void *param_1,uint *param_2,FRunnableThread **param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001416e19ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 1416e19c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PrivateHashBufferChunked<FXxHash128>'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `PrivateHashBufferChunked<FXxHash128>'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1416e19d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PrivateHashBufferChunked<FXxHash64>'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `PrivateHashBufferChunked<FXxHash64>'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1416e19e0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FMallocBinnedOverrunTest'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  *(undefined1 *)((ulonglong)(*(uint *)((longlong)param_1 + 8) >> 1) + *(longlong *)param_1) = 0xcc;
  return;
}

// Call @ 1416e1a00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FThreadManager::GetAllThreadStackBackTraces'::__l2::<lambda_1>,void,unsigned_int,FRunnableThread_*>
::Call(void *param_1,uint *param_2,FRunnableThread **param_3)

{
  `FThreadManager::GetAllThreadStackBackTraces'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 1416e1a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FThreadManager::GetForkableThreads'::__l2::<lambda_1>,void,unsigned_int,FRunnableThread_*>
::Call(void *param_1,uint *param_2,FRunnableThread **param_3)

{
  `FThreadManager::GetForkableThreads'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 14174af50

TSharedPtr<ITextFormatArgumentModifier,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TSharedPtr<ITextFormatArgumentModifier,1>_(__cdecl*)(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_const_&),TSharedPtr<ITextFormatArgumentModifier,1>,FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
::Call(TSharedPtr<ITextFormatArgumentModifier,1> *__return_storage_ptr__,void *param_1,
      FTextFormatString *param_2,TSharedRef<FTextFormatPatternDefinition_const_,1> *param_3)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14174af80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`FTextLocalizationManager::DirtyTextRevision'::__l10::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  TLazySingleton<FTextLocalizationManager> *this;
  FTextLocalizationManager *pFVar1;
  
  this = TLazySingleton<FTextLocalizationManager>::GetLazy
                   (FLazySingleton::Construct<FTextLocalizationManager>);
  pFVar1 = TLazySingleton<FTextLocalizationManager>::GetValue(this);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar1->OnTextRevisionChangedEvent);
  return false;
}

// Call @ 14174afc0

TOptional<FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_1>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
::Call(TOptional<FExpressionError> *__return_storage_ptr__,void *param_1,
      TExpressionTokenConsumer<wchar_t> *param_2)

{
  `FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14174aff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::__l2::<lambda_1>,void,FName,FName>
::Call(void *param_1,FName *param_2,FName *param_3)

{
  `FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::__l2::
  <lambda_1>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 14174b010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextLocalizationManager::DumpLiveTable'::__l2::<lambda_1>,void,FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&>
::Call(void *param_1,FTextId *param_2,TDisplayStringRef<FString_const_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTextKey aFStackX_8 [2];
  FTextKey aFStackX_10 [2];
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  
  if ((*param_3 == (TDisplayStringRef<FString_const_>)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                         ,0x9d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  aFStackX_8[0].Index = (param_2->Key).Index;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_48.Data.ArrayNum = 0;
  FStack_48.Data.ArrayMax = 0;
  FTextKey::AppendString(aFStackX_8,&FStack_48);
  aFStackX_10[0].Index = (param_2->Namespace).Index;
  FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.Data.ArrayNum = 0;
  FStack_58.Data.ArrayMax = 0;
  FTextKey::AppendString(aFStackX_10,&FStack_58);
  ::FString::PrintfImpl
            (&FStack_38,L"LiveTableEntry: Namespace: \'%s\', Key: \'%s\', DisplayString: \'%s\'");
  iVar3 = FStack_38.Data.ArrayNum + -1;
  if (FStack_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (*(FString **)param_1,(wchar_t *)FStack_38.Data.AllocatorInstance.Data,iVar3);
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(*(FString **)param_1,L"\r\n",2);
  return;
}

// Call @ 14174b020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextLocalizationManager::DumpLiveTable'::__l2::<lambda_1>,void,FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&>
::Call(void *param_1,FTextId *param_2,TDisplayStringRef<FString_const_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FTextKey aFStackX_8 [2];
  FTextKey aFStackX_20 [2];
  FString FStack_48;
  FString FStack_38;
  
  if ((3 < (*(byte **)param_1)[3]) && (3 < **(byte **)param_1)) {
    if ((*param_3 == (TDisplayStringRef<FString_const_>)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                           ,0x9d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    aFStackX_8[0].Index = (param_2->Key).Index;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
    FTextKey::AppendString(aFStackX_8,&FStack_38);
    aFStackX_20[0].Index = (param_2->Namespace).Index;
    FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
    FTextKey::AppendString(aFStackX_20,&FStack_48);
    Logging::Private::BasicLog<4>(&::LOG_Static,*(FLogCategoryBase **)param_1);
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 14174b030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIoChunkEncoding::Encode'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FIoChunkEncoding::Encode'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14174b040

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStringTable::EnumerateSourceStrings'::__l2::<lambda_1>,bool,FTextKey_const_&,FString_const_&>
::Call(void *param_1,FTextKey *param_2,FString *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  FString local_18;
  
  puVar1 = *(undefined8 **)param_1;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FTextKey::AppendString(param_2,&local_18);
  uVar2 = (*(code *)*puVar1)(puVar1[1],&local_18,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// Call @ 14174b0b0

FFormatArgumentValue * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextFormatter::FormatStr'::__l2::<lambda_1>,FFormatArgumentValue_const_*,TextFormatTokens::FArgumentTokenSpecifier_const_&,int>
::Call(void *param_1,FArgumentTokenSpecifier *param_2,int *param_3)

{
  FFormatArgumentValue *pFVar1;
  
  pFVar1 = `FTextFormatter::FormatStr'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return pFVar1;
}

// Call @ 14174b0c0

FFormatArgumentValue * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextFormatter::FormatStr'::__l2::<lambda_1>,FFormatArgumentValue_const_*,TextFormatTokens::FArgumentTokenSpecifier_const_&,int>
::Call(void *param_1,FArgumentTokenSpecifier *param_2,int *param_3)

{
  FFormatArgumentValue *pFVar1;
  
  pFVar1 = `FTextFormatter::FormatStr'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return pFVar1;
}

// Call @ 14174b0d0

FFormatArgumentValue * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextFormatter::FormatStr'::__l2::<lambda_1>,FFormatArgumentValue_const_*,TextFormatTokens::FArgumentTokenSpecifier_const_&,int>
::Call(void *param_1,FArgumentTokenSpecifier *param_2,int *param_3)

{
  FFormatArgumentValue *pFVar1;
  
  pFVar1 = `FTextFormatter::FormatStr'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return pFVar1;
}

// Call @ 14174b0e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextLocalizationManager::HandleLocalizationTargetsMounted'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ELocalizationLoadFlags EVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  IFileManager *pIVar9;
  FString *pFVar10;
  FTextLocalizationManager *this;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  FString *pFVar15;
  FString *pFVar16;
  int iVar17;
  FScriptContainerElement *_Src;
  bool bVar18;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  FString FStack_108;
  FTextLocalizationMetaDataResource FStack_f8;
  FString FStack_c0;
  FString *pFStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  FString *pFStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  TSharedPtr<ILocalizedTextSource,1> *pTStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> TStack_78;
  FString FStack_68;
  TArrayView<FString_const_,int> TStack_58;
  TArrayView<FString_const_,int> TStack_48;
  
  uStackX_10 = *(uint *)((longlong)param_1 + 0x18);
  uVar8 = (ulonglong)(int)uStackX_10;
  pFVar15 = *(FString **)((longlong)param_1 + 0x10);
  uVar4 = TStack_78._12_4_;
  pFVar16 = pFVar15 + uVar8;
  do {
    if (*(int *)((longlong)param_1 + 0x18) != (int)uVar8) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (pFVar15 == pFVar16) {
      if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
        CheckCallable(*(void **)((longlong)param_1 + 0x40));
        pcVar3 = *(code **)((longlong)param_1 + 0x40);
        plVar13 = (longlong *)((longlong)param_1 + 0x50);
        if (*(longlong **)((longlong)param_1 + 0x68) != (longlong *)0x0) {
          plVar13 = *(longlong **)((longlong)param_1 + 0x68);
        }
        uVar11 = (**(code **)(*plVar13 + 8))();
        (*pcVar3)(uVar11);
      }
      return;
    }
    pIVar9 = IFileManager::Get();
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar9 + 0x58))(pIVar9,pwVar14);
    if (cVar5 != '\0') {
      FStack_f8.NativeCulture.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_f8.NativeCulture.Data.ArrayNum = 0;
      FStack_f8.NativeCulture.Data.ArrayMax = 0;
      FStack_f8.NativeLocRes.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_f8.NativeLocRes.Data.ArrayNum = 0;
      FStack_f8.NativeLocRes.Data.ArrayMax = 0;
      FStack_f8.CompiledCultures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_f8.CompiledCultures.ArrayNum = 0;
      FStack_f8.CompiledCultures.ArrayMax = 0;
      FStack_f8.bIsUGC = false;
      pFVar10 = FPaths::GetBaseFilename(&FStack_68,pFVar15,true);
      ::FString::ConcatFC(&FStack_c0,pFVar10,L".locmeta");
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      iVar2 = (pFVar15->Data).ArrayNum;
      iVar17 = FStack_c0.Data.ArrayNum + -1;
      if (FStack_c0.Data.ArrayNum == 0) {
        iVar17 = 0;
      }
      FStack_108.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar17 != -1)) {
        iVar7 = iVar17 + 2;
        _Src = (pFVar15->Data).AllocatorInstance.Data;
LAB_14173ccdb:
        FStack_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar7 != 0) goto LAB_14173cce5;
        FStack_108.Data.ArrayMax = 0;
      }
      else {
        iVar7 = iVar17 + 1;
        _Src = (pFVar15->Data).AllocatorInstance.Data;
        if (iVar2 == 0) goto LAB_14173ccdb;
LAB_14173cce5:
        FStack_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar12 = iVar2 + iVar7;
        if ((int)uVar12 < iVar2) {
                    /* WARNING: Subroutine does not return */
          OnInvalidArrayNum((ulonglong)uVar12);
        }
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar12,0,(ForAnyElementType *)&FStack_108,iVar2,&FStack_108.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(FStack_108.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
        }
      }
      ::FString::PathAppend(&FStack_108,(wchar_t *)FStack_c0.Data.AllocatorInstance.Data,iVar17);
      FTextLocalizationMetaDataResource::LoadFromFile(&FStack_f8,&FStack_108);
      if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
      }
      if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
      }
      bVar18 = FStack_f8.bIsUGC != false;
      EVar1 = *(ELocalizationLoadFlags *)((longlong)param_1 + 0x30);
      this = FTextLocalizationManager::Get();
      pFStack_98 = *(FString **)((longlong)param_1 + 0x20);
      iVar2 = *(int *)((longlong)param_1 + 0x28);
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTStack_88 = *(TSharedPtr<ILocalizedTextSource,1> **)param_1;
      iVar17 = *(int *)((longlong)param_1 + 8);
      iStack_a8 = 1;
      uStack_a4 = uVar4;
      pFStack_b0 = pFVar15;
      iStack_90 = iVar2;
      if ((iVar17 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TStack_58._12_4_ = uStack_8c;
      TStack_58.ArrayNum = iStack_90;
      TStack_48._12_4_ = uStack_a4;
      TStack_48.ArrayNum = iStack_a8;
      TStack_58.DataPtr = pFStack_98;
      TStack_78._12_4_ = uStack_7c;
      TStack_78.ArrayNum = iVar17;
      TStack_78.DataPtr = pTStack_88;
      TStack_48.DataPtr = pFStack_b0;
      iStack_80 = iVar17;
      FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Sync
                (this,&TStack_78,&TStack_48,&TStack_58,-bVar18 & SkipExisting | EVar1);
      DestructItems<FString,int>
                ((FString *)FStack_f8.CompiledCultures.AllocatorInstance.Data,
                 FStack_f8.CompiledCultures.ArrayNum);
      if (FStack_f8.CompiledCultures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_f8.CompiledCultures.AllocatorInstance.Data);
      }
      if (FStack_f8.NativeLocRes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_f8.NativeLocRes.Data.AllocatorInstance.Data);
      }
      if (FStack_f8.NativeCulture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_f8.NativeCulture.Data.AllocatorInstance.Data);
      }
    }
    uVar8 = (ulonglong)uStackX_10;
    pFVar15 = pFVar15 + 1;
  } while( true );
}

// Call @ 14174b0f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextLocalizationManager::HandleLocalizationTargetsUnmounted'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *this;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  FTextLocalizationManager *this_00;
  FDisplayStringsForLocalizationTarget *pFVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  undefined8 *puVar15;
  FTextId *pFVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  FLLMScope aFStack_128 [2];
  FDisplayStringsForLocalizationTarget *pFStack_120;
  undefined8 *puStack_118;
  int iStack_110;
  int iStack_10c;
  FTextLocalizationManager *pFStack_108;
  FTextCache *pFStack_100;
  undefined8 *puStack_f8;
  FMemScope FStack_f0;
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *pTStack_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *puStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *pTStack_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  wchar_t *pwStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> aTStack_78 [2];
  undefined4 uStack_4c;
  
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1326,
               "FTextLocalizationManager::HandleLocalizationTargetsUnmounted",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x52e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1326);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1327,L"Localization/DisplayStrings");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(aFStack_128,LLMScope_Name1327,false,None,Default,true);
  FMemScope::FMemScope(&FStack_f0,&LLMScope_Name1327,true);
  this_00 = FTextLocalizationManager::Get();
  pFStack_108 = this_00;
  pFStack_100 = FTextCache::Get();
  AcquireSRWLockExclusive((PSRWLOCK)&this_00->DisplayStringTableRW);
  iVar2 = *(int *)((longlong)param_1 + 8);
  puVar17 = *(undefined8 **)param_1;
  puStack_f8 = puVar17 + (longlong)iVar2 * 2;
  puVar15 = puStack_f8;
  do {
    while( true ) {
      puStack_118 = puVar17;
      if (*(int *)((longlong)param_1 + 8) != iVar2) {
        auStackX_18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_18);
      }
      if (puVar17 == puVar15) {
        FTextLocalizationManager::DirtyTextRevision(this_00);
        if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
          CheckCallable(*(void **)((longlong)param_1 + 0x10));
          pcVar6 = *(code **)((longlong)param_1 + 0x10);
          plVar13 = (longlong *)((longlong)param_1 + 0x20);
          if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
            plVar13 = *(longlong **)((longlong)param_1 + 0x38);
          }
          uVar11 = (**(code **)(*plVar13 + 8))();
          (*pcVar6)(uVar11);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&this_00->DisplayStringTableRW);
        FMemScope::~FMemScope(&FStack_f0);
        FLLMScope::~FLLMScope(aFStack_128);
        if (bVar25) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      pwStack_88 = (wchar_t *)*puVar17;
      iStack_80 = *(int *)(puVar17 + 1) + -1;
      if (*(int *)(puVar17 + 1) == 0) {
        iStack_80 = 0;
      }
      aTStack_78[0]._12_4_ = uStack_7c;
      aTStack_78[0].Size = iStack_80;
      aTStack_78[0].DataPtr = pwStack_88;
      pFVar10 = FTextLocalizationManager::FDisplayStringsByLocalizationTargetId::FindOrAdd
                          (&this_00->DisplayStringsByLocalizationTargetId,aTStack_78,(int *)0x0);
      pFStack_120 = pFVar10;
      if (pFVar10->bIsMounted != false) break;
      puVar17 = puVar17 + 2;
    }
    this = &pFVar10->TextIds;
    iStack_e0 = 0;
    iVar3 = *(int *)&(pFVar10->TextIds).Elements.field_0x28;
    puStack_d8 = &(pFVar10->TextIds).Elements.field_0x10;
    iStack_c8 = 0;
    uStack_dc = 1;
    iStack_cc = 0;
    if (iVar3 != 0) {
      puVar4 = *(uint **)&(pFVar10->TextIds).Elements.field_0x20;
      puVar21 = (uint *)puStack_d8;
      if (puVar4 != (uint *)0x0) {
        puVar21 = puVar4;
      }
      uVar23 = *puVar21;
      while (uVar23 == 0) {
        lVar12 = (longlong)iStack_e0;
        iStack_c8 = iStack_c8 + 0x20;
        iStack_e0 = iStack_e0 + 1;
        iStack_cc = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14173d0df;
        uVar23 = puVar21[lVar12 + 1];
      }
      uStack_dc = -uVar23 & uVar23;
      uVar1 = (ulonglong)uStack_dc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_110 = (int)lVar12;
      iStack_cc = iStack_c8 + -1 + iStack_110;
      if (iVar3 < iStack_cc) {
        iStack_cc = iVar3;
      }
    }
LAB_14173d0df:
    uStack_c4 = uStack_4c;
    uVar23 = *(uint *)&(pFVar10->TextIds).Elements.field_0x28;
    iStack_c0 = *(int *)&(pFVar10->TextIds).Elements.field_0x8 -
                *(int *)&(pFVar10->TextIds).Elements.field_0x34;
    uVar22 = uVar23 & 0xffffffe0;
    puVar18 = &(pFVar10->TextIds).Elements.field_0x10;
    TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
    uStack_d0 = 0xffffffff;
    TStack_b0.CurrentBitIndex = iStack_cc;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar23 >> 5;
    TStack_b0._28_4_ = uStack_4c;
    TStack_b0.BaseBitIndex = iStack_c8;
    uStack_90 = CONCAT44(uStack_bc,iStack_c0);
    pTStack_e8 = this;
    pTStack_b8 = this;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_d8;
    if ((((int)uVar23 < 0) || (iVar3 < (int)uVar23)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = pFStack_108;
    uVar9 = *(uint *)&(pFVar10->TextIds).Elements.field_0x28;
    if (uVar23 != uVar9) {
      puVar5 = *(undefined1 **)&(pFVar10->TextIds).Elements.field_0x20;
      puVar20 = puVar18;
      if (puVar5 != (undefined1 *)0x0) {
        puVar20 = puVar5;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar14 * 4);
      while (uVar23 == 0) {
        lVar12 = (longlong)iVar14;
        uVar22 = uVar22 + 0x20;
        iVar14 = iVar14 + 1;
        uVar23 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14173d200;
        uVar23 = *(uint *)(puVar20 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_10c = (int)lVar12;
      uVar23 = iStack_10c + -1 + uVar22;
      if ((int)uVar9 < (int)uVar23) {
        uVar23 = uVar9;
      }
    }
LAB_14173d200:
    while( true ) {
      pTVar7 = pTStack_b8;
      if (*(int *)&(pTStack_b8->Elements).field_0x8 - *(int *)&(pTStack_b8->Elements).field_0x34 !=
          (int)uStack_90) {
        auStackX_20[0] = 0;
        `TSparseArray<TSparseSetElement<FTextId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
      }
      if (((TStack_b0.CurrentBitIndex == uVar23) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) && (pTVar7 == this))
      break;
      pFVar16 = (FTextId *)
                ((longlong)TStack_b0.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
      if (*(int *)&(this_00->DisplayStringLookupTable).field_0x8 !=
          *(int *)&(this_00->DisplayStringLookupTable).field_0x34) {
        uVar22 = ::GetTypeHash(&pFVar16->Key);
        uVar9 = ::GetTypeHash((FTextKey *)pFVar16);
        uVar19 = uVar9 - uVar22 ^ uVar22 >> 0xd;
        uVar9 = (-0x61c88647 - uVar19) - uVar22 ^ uVar19 << 8;
        uVar24 = (uVar22 - uVar9) - uVar19 ^ uVar9 >> 0xd;
        uVar19 = (uVar19 - uVar24) - uVar9 ^ uVar24 >> 0xc;
        uVar22 = (uVar9 - uVar19) - uVar24 ^ uVar19 << 0x10;
        uVar24 = (uVar24 - uVar22) - uVar19 ^ uVar22 >> 5;
        uVar9 = (uVar19 - uVar24) - uVar22 ^ uVar24 >> 3;
        uVar22 = (uVar22 - uVar9) - uVar24 ^ uVar9 << 10;
        TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FTextId>
                  ((TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
                    *)&this_00->DisplayStringLookupTable,uVar22 >> 0xf ^ (uVar24 - uVar22) - uVar9,
                   pFVar16);
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
    FTextCache::RemoveCache(pFStack_100,this);
    bVar8 = 1 < (pFVar10->TextIds).HashSize;
    if (!bVar8) {
      TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator>::UnhashElements(this);
    }
    puVar18 = &(pFVar10->TextIds).Elements.field_0xc;
    *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x8 = 0;
    if (*(int *)puVar18 != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this,0,(int *)puVar18);
    }
    *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x34 = 0;
    iVar3 = *(int *)&(pFVar10->TextIds).Elements.field_0x2c;
    *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar10->TextIds).Elements.field_0x10,0);
    }
    if (bVar8) {
      (pFVar10->TextIds).HashSize = 1;
      TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator>::Rehash(this);
    }
    puVar17 = puStack_118 + 2;
    pFStack_120->bIsMounted = false;
    puVar15 = puStack_f8;
  } while( true );
}

// Call @ 14174b100

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`InitEngineTextLocalization'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ELocalizationLoadFlags EVar1;
  atomic<ETextLocalizationManagerInitializedFlags> aVar2;
  int iVar3;
  FCulture *this;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FTextLocalizationManager *pFVar7;
  FInternationalization *pFVar8;
  FString *pFVar9;
  undefined4 uStack_1c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> TStack_18;
  
  pFVar7 = FTextLocalizationManager::Get();
  EVar1 = *(ELocalizationLoadFlags *)param_1;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this = (pFVar8->CurrentLanguage).Object;
  pTVar4 = (pFVar8->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar9 = FCulture::GetName(this);
  TStack_18.DataPtr = *(TSharedPtr<ILocalizedTextSource,1> **)((longlong)param_1 + 8);
  iVar3 = *(int *)((longlong)param_1 + 0x10);
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TStack_18._12_4_ = uStack_1c;
  TStack_18.ArrayNum = iVar3;
  FTextLocalizationManager::LoadLocalizationResourcesForCulture_Sync(pFVar7,&TStack_18,pFVar9,EVar1)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar7 = FTextLocalizationManager::Get();
  aVar2 = pFVar7->InitializedFlags;
  pFVar7 = FTextLocalizationManager::Get();
  LOCK();
  pFVar7->InitializedFlags = (atomic<ETextLocalizationManagerInitializedFlags>)((byte)aVar2 | 1);
  UNLOCK();
  return;
}

// Call @ 14174b110

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`InitGameTextLocalization'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  ELocalizationLoadFlags EVar1;
  atomic<ETextLocalizationManagerInitializedFlags> aVar2;
  int iVar3;
  FCulture *this;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FTextLocalizationManager *pFVar7;
  FInternationalization *pFVar8;
  FString *pFVar9;
  undefined4 uStack_1c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> TStack_18;
  
  pFVar7 = FTextLocalizationManager::Get();
  EVar1 = *(ELocalizationLoadFlags *)param_1;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this = (pFVar8->CurrentLanguage).Object;
  pTVar4 = (pFVar8->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar9 = FCulture::GetName(this);
  TStack_18.DataPtr = *(TSharedPtr<ILocalizedTextSource,1> **)((longlong)param_1 + 8);
  iVar3 = *(int *)((longlong)param_1 + 0x10);
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TStack_18._12_4_ = uStack_1c;
  TStack_18.ArrayNum = iVar3;
  FTextLocalizationManager::LoadLocalizationResourcesForCulture_Sync(pFVar7,&TStack_18,pFVar9,EVar1)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar7 = FTextLocalizationManager::Get();
  aVar2 = pFVar7->InitializedFlags;
  pFVar7 = FTextLocalizationManager::Get();
  LOCK();
  pFVar7->InitializedFlags = (atomic<ETextLocalizationManagerInitializedFlags>)((byte)aVar2 | 2);
  UNLOCK();
  return;
}

// Call @ 14174b120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FTextLocalizationManager *this;
  undefined4 uStack_1c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> TStack_18;
  
  this = FTextLocalizationManager::Get();
  TStack_18.DataPtr = *(TSharedPtr<ILocalizedTextSource,1> **)param_1;
  iVar1 = *(int *)((longlong)param_1 + 8);
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TStack_18._12_4_ = uStack_1c;
  TStack_18.ArrayNum = iVar1;
  FTextLocalizationManager::LoadChunkedLocalizationResources_Sync
            (this,&TStack_18,iVar2,(FString *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 14174b130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ELocalizationLoadFlags EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TLazySingleton<FTextLocalizationManager> *this;
  FTextLocalizationManager *this_00;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uStack_1c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> TStack_18;
  
  this = TLazySingleton<FTextLocalizationManager>::GetLazy
                   (FLazySingleton::Construct<FTextLocalizationManager>);
  this_00 = TLazySingleton<FTextLocalizationManager>::GetValue(this);
  TStack_18.DataPtr = *(TSharedPtr<ILocalizedTextSource,1> **)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  EVar1 = *(ELocalizationLoadFlags *)((longlong)param_1 + 0x20);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TStack_18._12_4_ = uStack_1c;
  TStack_18.ArrayNum = iVar2;
  FTextLocalizationManager::LoadLocalizationResourcesForCulture_Sync
            (this_00,&TStack_18,(FString *)((longlong)param_1 + 0x10),EVar1);
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    CheckCallable(*(void **)((longlong)param_1 + 0x30));
    pcVar3 = *(code **)((longlong)param_1 + 0x30);
    plVar6 = (longlong *)((longlong)param_1 + 0x40);
    if (*(longlong **)((longlong)param_1 + 0x58) != (longlong *)0x0) {
      plVar6 = *(longlong **)((longlong)param_1 + 0x58);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(uVar5);
  }
  return;
}

// Call @ 14174b140

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ELocalizationLoadFlags EVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  TSharedPtr<ILocalizedTextSource,1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FTextLocalizationManager *this;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<FString_const_,int> TStack_28;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> TStack_18;
  
  this = FTextLocalizationManager::Get();
  pFVar4 = *(FString **)((longlong)param_1 + 0x10);
  iVar2 = *(int *)((longlong)param_1 + 0x18);
  EVar1 = *(ELocalizationLoadFlags *)((longlong)param_1 + 0x20);
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar5 = *(TSharedPtr<ILocalizedTextSource,1> **)param_1;
  iVar3 = *(int *)((longlong)param_1 + 8);
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TStack_28._12_4_ = uStack_3c;
  TStack_28.ArrayNum = iVar2;
  TStack_18._12_4_ = uStack_2c;
  TStack_18.ArrayNum = iVar3;
  TStack_28.DataPtr = pFVar4;
  TStack_18.DataPtr = pTVar5;
  FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Sync
            (this,&TStack_18,&TStack_28,EVar1);
  return;
}

// Call @ 14174b150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ELocalizationLoadFlags EVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  FString *pFVar6;
  TSharedPtr<ILocalizedTextSource,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  FTextLocalizationManager *this;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  TArrayView<FString_const_,int> TStack_38;
  TArrayView<FString_const_,int> TStack_28;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> TStack_18;
  
  this = FTextLocalizationManager::Get();
  pFVar5 = *(FString **)((longlong)param_1 + 0x20);
  iVar2 = *(int *)((longlong)param_1 + 0x28);
  EVar1 = *(ELocalizationLoadFlags *)((longlong)param_1 + 0x30);
  if (iVar2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar6 = *(FString **)((longlong)param_1 + 0x10);
  iVar3 = *(int *)((longlong)param_1 + 0x18);
  if (iVar3 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar7 = *(TSharedPtr<ILocalizedTextSource,1> **)param_1;
  iVar4 = *(int *)((longlong)param_1 + 8);
  if (iVar4 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  TStack_38._12_4_ = uStack_5c;
  TStack_38.ArrayNum = iVar2;
  TStack_28._12_4_ = uStack_4c;
  TStack_28.ArrayNum = iVar3;
  TStack_18._12_4_ = uStack_3c;
  TStack_18.ArrayNum = iVar4;
  TStack_38.DataPtr = pFVar5;
  TStack_28.DataPtr = pFVar6;
  TStack_18.DataPtr = pTVar7;
  FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Sync
            (this,&TStack_18,&TStack_28,&TStack_38,EVar1);
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    CheckCallable(*(void **)((longlong)param_1 + 0x40));
    pcVar8 = *(code **)((longlong)param_1 + 0x40);
    plVar11 = (longlong *)((longlong)param_1 + 0x50);
    if (*(longlong **)((longlong)param_1 + 0x68) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)param_1 + 0x68);
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    (*pcVar8)(uVar10);
  }
  return;
}

// Call @ 14174b160

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextFormatTokens::ParseArgument'::__l2::<lambda_1>,enum_EParseState,wchar_t>::
Call(void *param_1,wchar_t *param_2)

{
  EParseState EVar1;
  
  EVar1 = StopBefore;
  if (*param_2 != *(wchar_t *)(*(longlong *)param_1 + 0x14)) {
    EVar1 = Continue;
  }
  return EVar1;
}

// Call @ 14174b180

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextFormatTokens::ParseArgumentModifier'::__l2::<lambda_1>,enum_EParseState,wchar_t>
::Call(void *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  
  _C = *param_2;
  if (_C == L'(') {
    return StopBefore;
  }
  iVar1 = iswalnum(_C);
  if ((iVar1 == 0) && (_C != L'_')) {
    return Cancel;
  }
  return Continue;
}

// Call @ 14174b1d0

wchar_t * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_1>,wchar_t_const_*,wchar_t_const_*,bool_&>
::Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = `TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_1>::
           operator()(param_1,*param_2,param_3);
  return pwVar1;
}

// Call @ 14174b1e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextStringificationUtil::WriteNumberFormattingOptionsToBuffer'::__l2::<lambda_1>,void,FString_&,bool_const_&>
::Call(void *param_1,FString *param_2,bool *param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  FString local_18;
  
  pwVar1 = L"true";
  if (*param_3 == false) {
    pwVar1 = L"false";
  }
  ::FString::FString(&local_18,pwVar1);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_2,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14174b250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextStringificationUtil::WriteTextFormatToBuffer'::__l2::<lambda_1>,void,FString_const_*,FFormatArgumentValue_const_&>
::Call(void *param_1,FString **param_2,FFormatArgumentValue *param_3)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  
  pFVar2 = *param_2;
  if (pFVar2 != (FString *)0x0) {
    ::FString::AppendChars(*(FString **)param_1,L", \"",3);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (*(FString **)param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
    ::FString::AppendChars(*(FString **)param_1,L"\"",1);
  }
  ::FString::AppendChars(*(FString **)param_1,L", ",2);
  FFormatArgumentValue::ToExportedString
            (param_3,*(FString **)param_1,*(bool *)((longlong)param_1 + 8));
  return;
}

// Call @ 14174b2f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextHistory_ArgumentDataFormat::WriteToBuffer'::__l2::<lambda_1>,void,TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)>_>
::Call(void *param_1,
      TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)> *param_2)

{
  TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  `FTextHistory_ArgumentDataFormat::WriteToBuffer'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 14174b320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextHistory_NamedFormat::WriteToBuffer'::__l2::<lambda_1>,void,TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)>_>
::Call(void *param_1,
      TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  
  lVar2 = *(longlong *)param_1;
  pcVar3 = *(code **)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  iVar1 = *(int *)(lVar2 + 0x40);
  lVar5 = *(longlong *)(lVar2 + 0x38);
  lVar6 = (longlong)iVar1 * 0x30 + lVar5;
  while( true ) {
    if (*(int *)(lVar2 + 0x40) != iVar1) {
      `TCheckedPointerIterator<TTuple<FString,FFormatArgumentValue>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_res8);
    }
    if (lVar5 == lVar6) break;
    local_res8 = lVar5;
    (*pcVar3)(uVar4,&local_res8,lVar5 + 0x10);
    lVar5 = lVar5 + 0x30;
  }
  return;
}

// Call @ 14174b3b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextHistory_OrderedFormat::WriteToBuffer'::__l2::<lambda_1>,void,TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)>_>
::Call(void *param_1,
      TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)> *param_2)

{
  TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  `FTextHistory_OrderedFormat::WriteToBuffer'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 14174b3e0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextFormatTokens::ParseLiteral'::__l3::<lambda_1>,enum_EParseState,wchar_t>::
Call(void *param_1,wchar_t *param_2)

{
  if (**(char **)param_1 == '\0') {
    if ((*param_2 == *(wchar_t *)(*(longlong *)((longlong)param_1 + 8) + 0x10)) ||
       (*param_2 == *(wchar_t *)(*(longlong *)((longlong)param_1 + 8) + 0x12))) {
      return StopBefore;
    }
  }
  else {
    **(char **)param_1 = '\0';
  }
  return Continue;
}

// Call @ 14174b410

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextLocalizationResourceUtil::GetLocalizedCultureNames'::__l6::<lambda_1>,bool,wchar_t_const_*,bool>
::Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `TextLocalizationResourceUtil::GetLocalizedCultureNames'::__l6::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14174b430

TOptional<FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_2>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
::Call(TOptional<FExpressionError> *__return_storage_ptr__,void *param_1,
      TExpressionTokenConsumer<wchar_t> *param_2)

{
  TextFormatTokens::ParseArgumentModifier
            (__return_storage_ptr__,*(FTextFormatPatternDefinition **)param_1,param_2);
  return __return_storage_ptr__;
}

// Call @ 14174b450

wchar_t * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_2>,wchar_t_const_*,wchar_t_const_*,int_&>
::Call(void *param_1,wchar_t **param_2,int *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = `TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_2>::
           operator()(param_1,*param_2,param_3);
  return pwVar1;
}

// Call @ 14174b460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextStringificationUtil::WriteNumberFormattingOptionsToBuffer'::__l2::<lambda_2>,void,FString_&,int_const_&>
::Call(void *param_1,FString *param_2,int *param_3)

{
  int iVar1;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(param_2,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14174b4c0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextFormatTokens::ParseArgumentModifier'::__l12::<lambda_2>,enum_EParseState,wchar_t>
::Call(void *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  short *psVar2;
  int *piVar3;
  
  wVar1 = *param_2;
  if (wVar1 == L')') {
    if (**(short **)param_1 == 0) {
      return StopBefore;
    }
  }
  else if (wVar1 == L'\"') {
    psVar2 = *(short **)param_1;
    if (*psVar2 != 0x22) {
      *psVar2 = 0x22;
      **(undefined4 **)((longlong)param_1 + 8) = 0;
      return Continue;
    }
    if ((**(byte **)((longlong)param_1 + 8) & 1) == 0) {
      *psVar2 = 0;
    }
    piVar3 = *(int **)((longlong)param_1 + 8);
    goto LAB_14174b502;
  }
  piVar3 = *(int **)((longlong)param_1 + 8);
  if (wVar1 == L'\\') {
    *piVar3 = *piVar3 + 1;
    return Continue;
  }
LAB_14174b502:
  *piVar3 = 0;
  return Continue;
}

// Call @ 14174b530

TOptional<FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_3>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
::Call(TOptional<FExpressionError> *__return_storage_ptr__,void *param_1,
      TExpressionTokenConsumer<wchar_t> *param_2)

{
  `FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_3>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14174b560

wchar_t * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_3>,wchar_t_const_*,wchar_t_const_*,enum_ERoundingMode_&>
::Call(void *param_1,wchar_t **param_2,ERoundingMode *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = `TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_3>::
           operator()(param_1,*param_2,param_3);
  return pwVar1;
}

// Call @ 14174b570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextStringificationUtil::WriteNumberFormattingOptionsToBuffer'::__l2::<lambda_3>,void,FString_&,enum_ERoundingMode_const_&>
::Call(void *param_1,FString *param_2,ERoundingMode *param_3)

{
  ERoundingMode EVar1;
  size_t sVar2;
  wchar_t *_Str;
  
  EVar1 = *param_3;
  ::FString::AppendChars(param_2,L"ERoundingMode::",0xf);
  switch(EVar1) {
  case HalfToEven:
    _Str = L"HalfToEven";
    break;
  case HalfFromZero:
    _Str = L"HalfFromZero";
    break;
  case HalfToZero:
    _Str = L"HalfToZero";
    break;
  case FromZero:
    _Str = L"FromZero";
    break;
  case ToZero:
    _Str = L"ToZero";
    break;
  case ToNegativeInfinity:
    _Str = L"ToNegativeInfinity";
    break;
  case ToPositiveInfinity:
    _Str = L"ToPositiveInfinity";
    break;
  default:
    _Str = L"<Unknown ERoundingMode>";
  }
  sVar2 = wcslen(_Str);
  ::FString::AppendChars(param_2,_Str,(int)sVar2);
  return;
}

// Call @ 14174b580

TOptional<FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_4>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
::Call(TOptional<FExpressionError> *__return_storage_ptr__,void *param_1,
      TExpressionTokenConsumer<wchar_t> *param_2)

{
  `FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_4>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1417b72c0

TOptional<FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
::Call(TOptional<FExpressionError> *__return_storage_ptr__,void *param_1,
      TExpressionTokenConsumer<wchar_t> *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1417b72e0

TOptional<FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_1>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
::Call(TOptional<FExpressionError> *__return_storage_ptr__,void *param_1,
      TExpressionTokenConsumer<wchar_t> *param_2)

{
  FUnitExpressionParser::ConsumeNumberWithUnits
            (*(FUnitExpressionParser **)param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1417b7310

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIoStoreReader::GetFilenames'::__l2::<lambda_1>,bool,TStringView<wchar_t>,unsigned_int>
::Call(void *param_1,TStringView<wchar_t> *param_2,uint *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  this = *(TArray<FString,TSizedDefaultAllocator<32>_> **)param_1;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pFVar1 = ::FString::ConstructFromPtrSize
                     (&local_18,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (&local_28 != pFVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(this,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// Call @ 1417b73c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIoStoreReader::GetFilenamesByBlockIndex'::__l2::<lambda_1>,bool,TStringView<wchar_t>,unsigned_int>
::Call(void *param_1,TStringView<wchar_t> *param_2,uint *param_3)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `FIoStoreReader::GetFilenamesByBlockIndex'::__l2::<lambda_1>::operator()
                    (param_1,&local_18,*param_3);
  return bVar1;
}

// Call @ 1417b73f0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_4>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uchar *puVar4;
  
  puVar4 = param_2->InlineBytes + 8;
  auVar3._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar3._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar3._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar3._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.D;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar1 = *(double *)puVar4;
  puVar4 = param_3->InlineBytes + 8;
  if ((((param_3->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_3->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_3->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_3->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar2 = *(double *)puVar4;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar3;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_N_Impl__6B_;
  *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar1 + dVar2;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1417b74b0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uchar *puVar4;
  
  puVar4 = param_2->InlineBytes + 8;
  auVar3._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar3._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar3._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar3._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.D;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar1 = *(double *)puVar4;
  puVar4 = param_3->InlineBytes + 8;
  if ((((param_3->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_3->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_3->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_3->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar2 = *(double *)puVar4;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar3;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_N_Impl__6B_;
  *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar1 - dVar2;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1417b7570

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_6>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uchar *puVar4;
  
  puVar4 = param_2->InlineBytes + 8;
  auVar3._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar3._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar3._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar3._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.D;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar1 = *(double *)puVar4;
  puVar4 = param_3->InlineBytes + 8;
  if ((((param_3->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_3->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_3->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_3->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar2 = *(double *)puVar4;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar3;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_N_Impl__6B_;
  *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar1 * dVar2;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1417b7630

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_7>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  undefined1 auVar1 [16];
  uchar *puVar2;
  uchar *puVar3;
  float fVar4;
  
  puVar2 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar2 = (uchar *)0x0;
  }
  puVar3 = param_3->InlineBytes + 8;
  if ((((param_3->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_3->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_3->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_3->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar3 = (uchar *)0x0;
  }
  fVar4 = powf((float)*(double *)puVar2,(float)*(double *)puVar3);
  auVar1._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar1._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar1._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar1._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar1;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_N_Impl__6B_;
  *(double *)&(__return_storage_ptr__->Variant).field_0x18 = (double)fVar4;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1417b7700

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_8>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  `Impl::
  WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_8>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1417b7740

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_9>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  `Impl::
  WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_9>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1417b7780

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  `Impl::
  WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1417b77c0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  `Impl::
  WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1417b7800

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  `Impl::
  WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1417b7840

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  `Impl::
  WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1417b7880

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_1>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  undefined1 auVar1 [16];
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar *puVar10;
  
  auVar1._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar1._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar1._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar1._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.D;
  puVar10 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar10 = (uchar *)0x0;
  }
  uVar2 = puVar10[0];
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  uVar6 = puVar10[4];
  uVar7 = puVar10[5];
  uVar8 = puVar10[6];
  uVar9 = puVar10[7];
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar1;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_N_Impl__6B_;
  (__return_storage_ptr__->Variant).field_0x18 = uVar2;
  (__return_storage_ptr__->Variant).field_0x19 = uVar3;
  (__return_storage_ptr__->Variant).field_0x1a = uVar4;
  (__return_storage_ptr__->Variant).field_0x1b = uVar5;
  (__return_storage_ptr__->Variant).field_0x1c = uVar6;
  (__return_storage_ptr__->Variant).field_0x1d = uVar7;
  (__return_storage_ptr__->Variant).field_0x1e = uVar8;
  (__return_storage_ptr__->Variant).field_0x1f = uVar9;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1417b78f0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  undefined1 auVar1 [16];
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  
  auVar1._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar1._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar1._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar1._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.D;
  puVar2 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar2 = (uchar *)0x0;
  }
  uVar3 = (uint)*(undefined8 *)puVar2 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)*(undefined8 *)puVar2 >> 0x20) ^
          __xmm_80000000000000008000000000000000._4_4_;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar1;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_N_Impl__6B_;
  *(ulonglong *)&(__return_storage_ptr__->Variant).field_0x18 = CONCAT44(uVar4,uVar3);
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1417b7960

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  uchar *puVar3;
  
  puVar3 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar3 = (uchar *)0x0;
  }
  dVar1 = *(double *)puVar3;
  auVar2._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar2._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar2._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar2._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar2;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_N_Impl__6B_;
  *(double *)&(__return_storage_ptr__->Variant).field_0x18 = (double)SQRT((float)dVar1);
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1417b79e0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar *puVar11;
  
  auVar2._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar2._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar2._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar2._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.D;
  puVar11 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar11 = (uchar *)0x0;
  }
  uVar3 = puVar11[0];
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  uVar7 = puVar11[4];
  uVar8 = puVar11[5];
  uVar9 = puVar11[6];
  uVar10 = puVar11[7];
  uVar1 = puVar11[8];
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar2;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
  (__return_storage_ptr__->Variant).field_0x18 = uVar3;
  (__return_storage_ptr__->Variant).field_0x19 = uVar4;
  (__return_storage_ptr__->Variant).field_0x1a = uVar5;
  (__return_storage_ptr__->Variant).field_0x1b = uVar6;
  (__return_storage_ptr__->Variant).field_0x1c = uVar7;
  (__return_storage_ptr__->Variant).field_0x1d = uVar8;
  (__return_storage_ptr__->Variant).field_0x1e = uVar9;
  (__return_storage_ptr__->Variant).field_0x1f = uVar10;
  (__return_storage_ptr__->Variant).field_0x20 = uVar1;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1417b7a60

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  
  auVar2._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar2._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar2._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar2._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.D;
  puVar3 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar3 = (uchar *)0x0;
  }
  uVar1 = puVar3[8];
  uVar4 = (uint)*(undefined8 *)puVar3 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)*(undefined8 *)puVar3 >> 0x20) ^
          __xmm_80000000000000008000000000000000._4_4_;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar2;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
  *(ulonglong *)&(__return_storage_ptr__->Variant).field_0x18 = CONCAT44(uVar5,uVar4);
  (__return_storage_ptr__->Variant).field_0x20 = uVar1;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1417b7ae0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIoStoreTocReader::Read'::__l16::<lambda_1>,bool,TStringView<wchar_t>,unsigned_int>
::Call(void *param_1,TStringView<wchar_t> *param_2,uint *param_3)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `FIoStoreTocReader::Read'::__l16::<lambda_1>::operator()(param_1,&local_18,*param_3);
  return bVar1;
}

// Call @ 14181d760

FUniqueBuffer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>::Call
          (void *param_1,ulong64 *param_2)

{
  undefined8 *in_R8;
  
  (*(code *)param_2)(param_1,*in_R8);
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Call @ 14181d780

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMicrosoftPlatformCrashContext::CaptureAllThreadContexts'::__l2::<lambda_1>,bool,unsigned_int,wchar_t_const_*,TArrayView<unsigned___int64_const_,int>_const_&>
::Call(void *param_1,uint *param_2,wchar_t **param_3,
      TArrayView<unsigned___int64_const_,int> *param_4)

{
  (**(code **)(**(longlong **)param_1 + 0x38))
            (*(longlong **)param_1,*param_2,*param_3,param_4->DataPtr,param_4->ArrayNum);
  return true;
}

// Call @ 14181d7b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompositeBuffer::CopyTo'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
::Call(void *param_1,TMemoryView<void_const_> *param_2,FSharedBuffer *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  void *_Src;
  bool bVar3;
  ulonglong _Size;
  
  _Src = param_2->Data;
  _Size = param_2->Size;
  if ((*(ulonglong *)((longlong)param_1 + 8) < _Size) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (_Size != 0) {
    memcpy(*(void **)param_1,_Src,_Size);
  }
  uVar1 = *(ulonglong *)((longlong)param_1 + 8);
  if (uVar1 < _Size) {
    _Size = uVar1;
  }
  *(ulonglong *)param_1 = *(longlong *)param_1 + _Size;
  *(ulonglong *)((longlong)param_1 + 8) = uVar1 - _Size;
  return;
}

// Call @ 14181d850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCommandLine::FilterCLIUsingGrammarBasedParser'::__l2::<lambda_1>,void,TStringView<wchar_t>,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3)

{
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.Size = param_3->Size;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FCommandLine::FilterCLIUsingGrammarBasedParser'::__l2::<lambda_1>::operator()
            (param_1,&local_18,&local_28);
  return;
}

// Call @ 14181d880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompositeBuffer::IterateRange'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
::Call(void *param_1,TMemoryView<void_const_> *param_2,FSharedBuffer *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->Data;
  uStack_14 = *(undefined4 *)((longlong)&param_2->Data + 4);
  uStack_10 = (undefined4)param_2->Size;
  uStack_c = *(undefined4 *)((longlong)&param_2->Size + 4);
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),&local_18);
  return;
}

// Call @ 14181d8b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompositeBuffer::Mid'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
::Call(void *param_1,TMemoryView<void_const_> *param_2,FSharedBuffer *param_3)

{
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_2->Data;
  local_18.Size = param_2->Size;
  `FCompositeBuffer::Mid'::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 14181d8e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAutomationTestExecutionInfo::RemoveAllEvents'::__l2::<lambda_1>,bool,FAutomationEvent_&>
::Call(void *param_1,FAutomationEvent *param_2)

{
  return param_2->Type == *(EAutomationEventType *)param_1;
}

// Call @ 14181d8f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompositeBuffer::ViewOrCopyRange'::__l2::<lambda_1>,void,TMemoryView<void_const_>_>
::Call(void *param_1,TMemoryView<void_const_> *param_2)

{
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_2->Data;
  local_18.Size = param_2->Size;
  `FCompositeBuffer::ViewOrCopyRange'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 14181d920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompositeBuffer::EqualBytes'::__l9::<lambda_1>,void,TMemoryView<void_const_>_>
::Call(void *param_1,TMemoryView<void_const_> *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pcVar1 = *(char **)param_1;
  uVar6 = param_2->Size;
  if (*pcVar1 != '\0') {
    puVar2 = *(undefined8 **)((longlong)param_1 + 8);
    uVar7 = uVar6;
    if ((ulonglong)puVar2[1] < uVar6) {
      uVar7 = puVar2[1];
    }
    if (uVar7 == uVar6) {
      if ((void *)*puVar2 != param_2->Data) {
        iVar4 = memcmp((void *)*puVar2,param_2->Data,uVar7);
        if (iVar4 != 0) goto LAB_14181d980;
      }
      cVar5 = '\x01';
      goto LAB_14181d98b;
    }
  }
LAB_14181d980:
  cVar5 = '\0';
LAB_14181d98b:
  *pcVar1 = cVar5;
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  uVar7 = plVar3[1];
  if (uVar7 < uVar6) {
    uVar6 = uVar7;
  }
  *plVar3 = *plVar3 + uVar6;
  plVar3[1] = uVar7 - uVar6;
  return;
}

// Call @ 141866830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FConfigCommandStream_&,FString_const_&),void,FConfigCommandStream_&,FString_const_&>
::Call(void *param_1,FConfigCommandStream *param_2,FString *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014186683c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 141866850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FConfigFile_&,FString_const_&),void,FConfigFile_&,FString_const_&>
::Call(void *param_1,FConfigFile *param_2,FString *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014186685c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 141866870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FConfigModificationTracker_*),void,FConfigModificationTracker_*>
::Call(void *param_1,FConfigModificationTracker **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141866876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 141866880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*),void,enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*>
::Call(void *param_1,Type *param_2,wchar_t **param_3,wchar_t **param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000141866893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3,*param_4);
  return;
}

// Call @ 1418668a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConfigCacheIni::AddToSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
::Call(void *param_1,FConfigBranch **param_2,FConfigCommandStreamSection **param_3)

{
  `FConfigCacheIni::AddToSectionOfStaticLayer'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 1418668c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConfigCacheIni::AddUniqueToSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
::Call(void *param_1,FConfigBranch **param_2,FConfigCommandStreamSection **param_3)

{
  `FConfigCacheIni::AddUniqueToSectionOfStaticLayer'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 1418668e0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FScriptExceptionHandler>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0xf0);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0xe8);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFScriptExceptionHandler____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FScriptExceptionHandler__6B_;
    pFVar2[0x1a] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x1c) = 0;
    *(undefined4 *)&pFVar2[0x1c].field_0x4 = 4;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 1418668f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConfigCacheIni::RemoveFromSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
::Call(void *param_1,FConfigBranch **param_2,FConfigCommandStreamSection **param_3)

{
  `FConfigCacheIni::RemoveFromSectionOfStaticLayer'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 141866910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConfigCacheIni::RemoveKeyFromSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
::Call(void *param_1,FConfigBranch **param_2,FConfigCommandStreamSection **param_3)

{
  `FConfigCacheIni::RemoveKeyFromSectionOfStaticLayer'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 141866930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConfigCacheIni::ResetKeyInSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
::Call(void *param_1,FConfigBranch **param_2,FConfigCommandStreamSection **param_3)

{
  FConfigCommandStreamSection *this;
  FName FVar1;
  uint uVar2;
  FName local_res10 [3];
  
  this = *param_3;
  FVar1 = *(FName *)param_1;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    local_res10[0] = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                         *)this,FVar1.Number + uVar2,local_res10);
  }
  return;
}

// Call @ 141866980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConfigCacheIni::SetArrayInSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
::Call(void *param_1,FConfigBranch **param_2,FConfigCommandStreamSection **param_3)

{
  `FConfigCacheIni::SetArrayInSectionOfStaticLayer'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 1418669a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConfigCacheIni::SetInSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
::Call(void *param_1,FConfigBranch **param_2,FConfigCommandStreamSection **param_3)

{
  `FConfigCacheIni::SetInSectionOfStaticLayer'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 1418669c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDetailedConfigMemUsage::FDetailedConfigMemUsage'::__l5::<lambda_1>,void,FConfigFile_&,FString_const_&>
::Call(void *param_1,FConfigFile *param_2,FString *param_3)

{
  FDetailedConfigMemUsage::TrackFile(*(FDetailedConfigMemUsage **)param_1,param_3,param_2);
  return;
}

// Call @ 1418669e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::WarnAboutKeyRemap'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  if ((GAllowConfigRemapWarning) && (2 < (byte)LogConfig._0_1_)) {
    FText::ToString(param_1);
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u__s_150698c88,(FLogCategoryBase *)&LogConfig);
    return;
  }
  return;
}

// Call @ 141866a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::WarnAboutSectionRemap'::__l8::<lambda_1>,void>::Call
          (void *param_1)

{
  if ((GAllowConfigRemapWarning) && (2 < (byte)LogConfig._0_1_)) {
    FText::ToString(param_1);
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u__s_150698c88,(FLogCategoryBase *)&LogConfig);
    return;
  }
  return;
}

// Call @ 141866a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIniExec::Exec_Dev'::__l45::<lambda_1>,void,FConfigModificationTracker_*>::Call
          (void *param_1,FConfigModificationTracker **param_2)

{
  `FIniExec::Exec_Dev'::__l45::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 141866a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConfigCacheIni::AddPluginsToBranches'::__l64::<lambda_1>,void,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  
  uVar6 = ((uint)(*(ulonglong *)((longlong)param_1 + 8) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 8) >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pTVar5 = TMapBase<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FConfigBranch_*_const_&>
                     (*(TMapBase<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,0>_>
                        **)param_1,uVar6 >> 0x10 ^ uVar6,(FConfigBranch **)((longlong)param_1 + 8));
  if (pTVar5 == param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,&pTVar5->ArrayMax);
    ConstructItems<FDynamicLayerInfo,FDynamicLayerInfo,int>
              ((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0x20,
               (FDynamicLayerInfo *)(param_2->AllocatorInstance).Data,iVar1);
  }
  return;
}

// Call @ 141866aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDetailedConfigMemUsage::FDetailedConfigMemUsage'::__l5::<lambda_2>,void,FConfigCommandStream_&,FString_const_&>
::Call(void *param_1,FConfigCommandStream *param_2,FString *param_3)

{
  FDetailedConfigMemUsage::TrackCommandStream(*(FDetailedConfigMemUsage **)param_1,param_3,param_2);
  return;
}

// Call @ 141866ac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIniExec::Exec_Dev'::__l90::<lambda_3>,void,FConfigModificationTracker_*>::Call
          (void *param_1,FConfigModificationTracker **param_2)

{
  `FIniExec::Exec_Dev'::__l90::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 1418c99c0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Tests::ConsumeCharRangeGreedy<Tests::FDigitsTokenTag>'::__l2::<lambda_1>,enum_EParseState,wchar_t>
::Call(void *param_1,wchar_t *param_2)

{
  if (((ushort)*(wchar_t *)param_1 <= (ushort)*param_2) &&
     ((ushort)*param_2 <= (ushort)*(wchar_t *)((longlong)param_1 + 2))) {
    return Continue;
  }
  return StopBefore;
}

// Call @ 1418c99e0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Tests::ConsumeCharRangeGreedy<Tests::FLowerAlphaTokenTag>'::__l2::<lambda_1>,enum_EParseState,wchar_t>
::Call(void *param_1,wchar_t *param_2)

{
  if (((ushort)*(wchar_t *)param_1 <= (ushort)*param_2) &&
     ((ushort)*param_2 <= (ushort)*(wchar_t *)((longlong)param_1 + 2))) {
    return Continue;
  }
  return StopBefore;
}

// Call @ 1418c9a00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFileHelper::LoadFileToStringArray'::__l2::<lambda_1>,bool,FString_const_&>::
Call(void *param_1,FString *param_2)

{
  return true;
}

// Call @ 1418c9a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRWAccessDetector_ConcurentReadTest::RunTest'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  FAutomationTestBase *pFVar4;
  uint *puVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  puVar5 = *(uint **)((longlong)param_1 + 0x10);
  LOCK();
  uVar1 = *puVar5;
  *puVar5 = *puVar5 + 1;
  UNLOCK();
  if ((((uVar1 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestTrue(pFVar4,L"Acquiring Read Access 1",(uVar1 & 0xfff00000) == 0)
  ;
  **(byte **)param_1 = bVar8 & bVar2;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  fVar7 = __real_3c23d70a;
  cVar3 = **(char **)((longlong)param_1 + 0x20);
  while (cVar3 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar7);
    cVar3 = **(char **)((longlong)param_1 + 0x20);
  }
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  puVar5 = *(uint **)((longlong)param_1 + 0x10);
  LOCK();
  uVar1 = *puVar5;
  *puVar5 = *puVar5 - 1;
  UNLOCK();
  if ((((uVar1 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestTrue(pFVar4,L"Releasing Read Access 1",(uVar1 & 0xfff00000) == 0)
  ;
  **(byte **)param_1 = bVar8 & bVar2;
  return;
}

// Call @ 1418c9a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRWAccessDetector_ConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  FAutomationTestBase *pFVar4;
  uint *puVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  puVar5 = *(uint **)((longlong)param_1 + 0x10);
  LOCK();
  uVar1 = *puVar5;
  *puVar5 = *puVar5 + 1;
  UNLOCK();
  if ((((uVar1 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestTrue(pFVar4,L"Acquiring Read Access",(uVar1 & 0xfff00000) == 0);
  **(byte **)param_1 = bVar8 & bVar2;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  fVar7 = __real_3c23d70a;
  cVar3 = **(char **)((longlong)param_1 + 0x20);
  while (cVar3 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar7);
    cVar3 = **(char **)((longlong)param_1 + 0x20);
  }
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  puVar5 = *(uint **)((longlong)param_1 + 0x10);
  LOCK();
  uVar1 = *puVar5;
  *puVar5 = *puVar5 - 1;
  UNLOCK();
  if ((((uVar1 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestFalse(pFVar4,L"Releasing Read Access",(uVar1 & 0xfff00000) == 0);
  **(byte **)param_1 = bVar8 & bVar2;
  return;
}

// Call @ 1418c9a30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRWAccessDetector_ConcurentWriteTest::RunTest'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  FAutomationTestBase *pFVar4;
  int *piVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  piVar5 = *(int **)((longlong)param_1 + 0x10);
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = *piVar5 + 0x100000;
  UNLOCK();
  if (((iVar1 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestTrue(pFVar4,L"Acquiring Write Access",iVar1 == 0);
  **(byte **)param_1 = bVar8 & bVar2;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  fVar7 = __real_3c23d70a;
  cVar3 = **(char **)((longlong)param_1 + 0x20);
  while (cVar3 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar7);
    cVar3 = **(char **)((longlong)param_1 + 0x20);
  }
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  piVar5 = *(int **)((longlong)param_1 + 0x10);
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = *piVar5 + -0x100000;
  UNLOCK();
  if (((iVar1 != 0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestFalse(pFVar4,L"Releasing Read Access",iVar1 == 0x100000);
  **(byte **)param_1 = bVar8 & bVar2;
  return;
}

// Call @ 1418c9a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  char cVar2;
  FAutomationTestBase *pFVar3;
  float fVar4;
  bool bVar5;
  
  pFVar3 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar1 = **(byte **)param_1;
  bVar5 = FRWFullyRecursiveAccessDetector::AcquireReadAccess
                    (*(FRWFullyRecursiveAccessDetector **)((longlong)param_1 + 0x10));
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,L"Acquiring Read Access 1",bVar5);
  **(byte **)param_1 = bVar5 & bVar1;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  fVar4 = __real_3c23d70a;
  cVar2 = **(char **)((longlong)param_1 + 0x20);
  while (cVar2 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar4);
    cVar2 = **(char **)((longlong)param_1 + 0x20);
  }
  pFVar3 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar1 = **(byte **)param_1;
  bVar5 = FRWFullyRecursiveAccessDetector::ReleaseReadAccess
                    (*(FRWFullyRecursiveAccessDetector **)((longlong)param_1 + 0x10));
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,L"Releasing Read Access 1",bVar5);
  **(byte **)param_1 = bVar5 & bVar1;
  return;
}

// Call @ 1418c9a50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRWAccessDetector_FullyRecursiveConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  char cVar2;
  FAutomationTestBase *pFVar3;
  float fVar4;
  bool bVar5;
  
  pFVar3 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar1 = **(byte **)param_1;
  bVar5 = FRWFullyRecursiveAccessDetector::AcquireReadAccess
                    (*(FRWFullyRecursiveAccessDetector **)((longlong)param_1 + 0x10));
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,L"Acquiring Read Access",bVar5);
  **(byte **)param_1 = bVar5 & bVar1;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  fVar4 = __real_3c23d70a;
  cVar2 = **(char **)((longlong)param_1 + 0x20);
  while (cVar2 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar4);
    cVar2 = **(char **)((longlong)param_1 + 0x20);
  }
  pFVar3 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar1 = **(byte **)param_1;
  bVar5 = FRWFullyRecursiveAccessDetector::ReleaseReadAccess
                    (*(FRWFullyRecursiveAccessDetector **)((longlong)param_1 + 0x10));
  bVar5 = FAutomationTestBase::TestFalse(pFVar3,L"Releasing Read Access",bVar5);
  **(byte **)param_1 = bVar5 & bVar1;
  return;
}

// Call @ 1418c9a60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  char cVar2;
  FAutomationTestBase *pFVar3;
  float fVar4;
  bool bVar5;
  
  pFVar3 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar1 = **(byte **)param_1;
  bVar5 = FRWRecursiveAccessDetector::AcquireWriteAccess
                    (*(FRWRecursiveAccessDetector **)((longlong)param_1 + 0x10));
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,L"Acquiring Write Access",bVar5);
  **(byte **)param_1 = bVar5 & bVar1;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  fVar4 = __real_3c23d70a;
  cVar2 = **(char **)((longlong)param_1 + 0x20);
  while (cVar2 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar4);
    cVar2 = **(char **)((longlong)param_1 + 0x20);
  }
  pFVar3 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar1 = **(byte **)param_1;
  bVar5 = FRWRecursiveAccessDetector::ReleaseWriteAccess
                    (*(FRWRecursiveAccessDetector **)((longlong)param_1 + 0x10));
  bVar5 = FAutomationTestBase::TestFalse(pFVar3,L"Releasing Read Access",bVar5);
  **(byte **)param_1 = bVar5 & bVar1;
  return;
}

// Call @ 1418c9a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRWAccessDetector_RecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  FAutomationTestBase *pFVar4;
  uint *puVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  puVar5 = *(uint **)((longlong)param_1 + 0x10);
  LOCK();
  uVar1 = *puVar5;
  *puVar5 = *puVar5 + 1;
  UNLOCK();
  if ((((uVar1 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestTrue(pFVar4,L"Acquiring Read Access 1",(uVar1 & 0xfff00000) == 0)
  ;
  **(byte **)param_1 = bVar8 & bVar2;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  fVar7 = __real_3c23d70a;
  cVar3 = **(char **)((longlong)param_1 + 0x20);
  while (cVar3 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar7);
    cVar3 = **(char **)((longlong)param_1 + 0x20);
  }
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  puVar5 = *(uint **)((longlong)param_1 + 0x10);
  LOCK();
  uVar1 = *puVar5;
  *puVar5 = *puVar5 - 1;
  UNLOCK();
  if ((((uVar1 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestTrue(pFVar4,L"Releasing Read Access 1",(uVar1 & 0xfff00000) == 0)
  ;
  **(byte **)param_1 = bVar8 & bVar2;
  return;
}

// Call @ 1418c9a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRWAccessDetector_RecursiveConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  FAutomationTestBase *pFVar4;
  uint *puVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  puVar5 = *(uint **)((longlong)param_1 + 0x10);
  LOCK();
  uVar1 = *puVar5;
  *puVar5 = *puVar5 + 1;
  UNLOCK();
  if ((((uVar1 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestTrue(pFVar4,L"Acquiring Read Access",(uVar1 & 0xfff00000) == 0);
  **(byte **)param_1 = bVar8 & bVar2;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  fVar7 = __real_3c23d70a;
  cVar3 = **(char **)((longlong)param_1 + 0x20);
  while (cVar3 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar7);
    cVar3 = **(char **)((longlong)param_1 + 0x20);
  }
  pFVar4 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar2 = **(byte **)param_1;
  puVar5 = *(uint **)((longlong)param_1 + 0x10);
  LOCK();
  uVar1 = *puVar5;
  *puVar5 = *puVar5 - 1;
  UNLOCK();
  if ((((uVar1 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FAutomationTestBase::TestFalse(pFVar4,L"Releasing Read Access",(uVar1 & 0xfff00000) == 0);
  **(byte **)param_1 = bVar8 & bVar2;
  return;
}

// Call @ 1418c9a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRWAccessDetector_RecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  char cVar2;
  FAutomationTestBase *pFVar3;
  float fVar4;
  bool bVar5;
  
  pFVar3 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar1 = **(byte **)param_1;
  bVar5 = FRWRecursiveAccessDetector::AcquireWriteAccess
                    (*(FRWRecursiveAccessDetector **)((longlong)param_1 + 0x10));
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,L"Acquiring Write Access",bVar5);
  **(byte **)param_1 = bVar5 & bVar1;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  fVar4 = __real_3c23d70a;
  cVar2 = **(char **)((longlong)param_1 + 0x20);
  while (cVar2 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar4);
    cVar2 = **(char **)((longlong)param_1 + 0x20);
  }
  pFVar3 = *(FAutomationTestBase **)((longlong)param_1 + 8);
  bVar1 = **(byte **)param_1;
  bVar5 = FRWRecursiveAccessDetector::ReleaseWriteAccess
                    (*(FRWRecursiveAccessDetector **)((longlong)param_1 + 0x10));
  bVar5 = FAutomationTestBase::TestFalse(pFVar3,L"Releasing Read Access",bVar5);
  **(byte **)param_1 = bVar5 & bVar1;
  return;
}

// Call @ 1418c9aa0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  `Impl::
  WrapBinaryFunction<double,double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>_>'::
  __l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1418c9ae0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  `Impl::
  WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1418c9b20

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<Tests::FMoveableType,Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  undefined1 auVar1 [16];
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar *puVar6;
  
  puVar6 = param_2->InlineBytes + 0x10;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar6 = &DAT_00000008;
  }
  uVar2 = puVar6[0];
  uVar3 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
  auVar1._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar1._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar1._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar1._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar1;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x18 = &___7FMoveableType_Tests__6B_;
  (__return_storage_ptr__->Variant).field_0x20 = uVar2;
  (__return_storage_ptr__->Variant).field_0x21 = uVar3;
  (__return_storage_ptr__->Variant).field_0x22 = uVar4;
  (__return_storage_ptr__->Variant).field_0x23 = uVar5;
  (__return_storage_ptr__->Variant).field_0x24 = 1;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1418c9bb0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,FShortCircuitTestContext **param_4)

{
  `Impl::
  WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1418c9bf0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,FShortCircuitTestContext **param_4)

{
  `Impl::
  WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 1418c9c30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,bool,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
::Call(void *param_1,FExpressionNode *param_2,FShortCircuitTestContext **param_3)

{
  uchar *puVar1;
  
  puVar1 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar1 = (uchar *)0x0;
  }
  return (bool)*puVar1;
}

// Call @ 1418c9c70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,bool,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
::Call(void *param_1,FExpressionNode *param_2,FShortCircuitTestContext **param_3)

{
  uchar *puVar1;
  
  puVar1 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar1 = (uchar *)0x0;
  }
  return *puVar1 == '\0';
}

// Call @ 1418c9cc0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  `Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_1>_>'::
  __l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 1418c9cf0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  `Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_2>_>'::
  __l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 1418c9d20

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  `Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_3>_>'::
  __l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 1418c9d50

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  `Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_4>_>'::
  __l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 1418c9d80

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  `Impl::
  WrapUnaryFunction<Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 1418c9db0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,void **param_3)

{
  undefined1 auVar1 [16];
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar *puVar6;
  
  puVar6 = param_2->InlineBytes + 0x10;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar6 = &DAT_00000008;
  }
  uVar2 = puVar6[0];
  uVar3 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
  auVar1._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar1._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar1._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar1._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar1;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x18 = &___7FMoveableType_Tests__6B_;
  (__return_storage_ptr__->Variant).field_0x20 = uVar2;
  (__return_storage_ptr__->Variant).field_0x21 = uVar3;
  (__return_storage_ptr__->Variant).field_0x22 = uVar4;
  (__return_storage_ptr__->Variant).field_0x23 = uVar5;
  (__return_storage_ptr__->Variant).field_0x24 = 1;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 1418c9e40

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FLexerParseStringTest::RunTest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,enum_EParseState,wchar_t>
::Call(void *param_1,wchar_t *param_2)

{
  EParseState EVar1;
  
  EVar1 = Continue;
  if (*param_2 == L'\"') {
    EVar1 = StopBefore;
  }
  return EVar1;
}

// Call @ 1418c9e60

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTokenStream<char>::ParseWhitespace'::__l5::<lambda_1>,enum_EParseState,char>::
Call(void *param_1,char *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = isspace((uint)(byte)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 1418c9e90

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTokenStream<char8_t>::ParseWhitespace'::__l5::<lambda_1>,enum_EParseState,char8_t>
::Call(void *param_1,uchar *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = isspace((uint)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 1418c9ec0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTokenStream<wchar_t>::ParseWhitespace'::__l5::<lambda_1>,enum_EParseState,wchar_t>
::Call(void *param_1,wchar_t *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = iswspace(*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 1418c9ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  UE::Private::FOutputDeviceRedirectorState::ThreadLoop(*(FOutputDeviceRedirectorState **)param_1);
  return;
}

// Call @ 1418c9f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper'::__l1::<lambda_3_>,void,enum_EDelayedRegisterRunPhase>
::Call(void *param_1,EDelayedRegisterRunPhase *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001418c9f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 14192bb60

TOptional<FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<char>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<char>_&>
::Call(TOptional<FExpressionError> *__return_storage_ptr__,void *param_1,
      TExpressionTokenConsumer<char> *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14192bb80

TOptional<FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<char8_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<char8_t>_&>
::Call(TOptional<FExpressionError> *__return_storage_ptr__,void *param_1,
      TExpressionTokenConsumer<char8_t> *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14192bba0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseLiteral<char>'::__l2::<lambda_1>,enum_EParseState,char>::Call
          (void *param_1,char *param_2)

{
  if (*param_2 == '{') {
    if (**(char **)param_1 == '\0') {
      return StopBefore;
    }
  }
  else if (*param_2 == '`') {
    return StopBefore;
  }
  **(undefined1 **)param_1 = 0;
  return Continue;
}

// Call @ 14192bbd0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseLiteral<char8_t>'::__l2::<lambda_1>,enum_EParseState,char8_t>::Call
          (void *param_1,uchar *param_2)

{
  if (*param_2 == '{') {
    if (**(char **)param_1 == '\0') {
      return StopBefore;
    }
  }
  else if (*param_2 == '`') {
    return StopBefore;
  }
  **(undefined1 **)param_1 = 0;
  return Continue;
}

// Call @ 14192bc00

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseLiteral<wchar_t>'::__l2::<lambda_1>,enum_EParseState,wchar_t>::Call
          (void *param_1,wchar_t *param_2)

{
  if (*param_2 == L'{') {
    if (**(char **)param_1 == '\0') {
      return StopBefore;
    }
  }
  else if (*param_2 == L'`') {
    return StopBefore;
  }
  **(undefined1 **)param_1 = 0;
  return Continue;
}

// Call @ 14192bc40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::String::ParseTokens<TArray<TStringView<wchar_t>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::String::
  ParseTokens<TArray<TStringView<wchar_t>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 14192bc70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextFilterExpressionParser::ConsumeBasicText'::__l2::<lambda_1>,bool,wchar_t>::
Call(void *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"()!&| ";
  do {
    if (*param_2 == *pwVar1) {
      return true;
    }
    pwVar1 = pwVar1 + 1;
  } while (pwVar1 != L"");
  return false;
}

// Call @ 14192bca0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextFilterExpressionParser::ConsumeComplexText'::__l2::<lambda_1>,bool,wchar_t>
::Call(void *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"()=:<>!&| ";
  do {
    if (*param_2 == *pwVar1) {
      return true;
    }
    pwVar1 = pwVar1 + 1;
  } while (pwVar1 != L"==");
  return false;
}

// Call @ 14192bcd0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TextFilterExpressionParser::ConsumeTextImpl'::__l2::<lambda_1>,enum_EParseState,wchar_t>
::Call(void *param_1,wchar_t *param_2)

{
  EParseState EVar1;
  
  EVar1 = `TextFilterExpressionParser::ConsumeTextImpl'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return EVar1;
}

// Call @ 14192bce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPaths::FindCorrectCase'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::Call
          (void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FPaths::FindCorrectCase'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 14192bd10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FPreloadableArchive::InitializeInternal
            (*(FPreloadableArchive **)param_1,
             (TUniqueFunction<FArchive_*___cdecl(void)> *)((longlong)param_1 + 0x20),
             (TUniqueFunction<IAsyncReadFileHandle_*___cdecl(void)> *)((longlong)param_1 + 0x50),
             *(uint *)((longlong)param_1 + 8),*(long64 *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14192bd40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPreloadableArchive::ResumePreloadNonRecursive'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  FPreloadableArchive::OnReadComplete(*(FPreloadableArchive **)param_1,*param_2,*param_3);
  return;
}

// Call @ 14192bd60

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014192bd92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 14192bdb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPaths::ValidatePath'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::Call
          (void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FPaths::ValidatePath'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 14192bde0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_11>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_11>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192be20

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_17>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_17>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192be60

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_1>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192bea0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_2>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192bee0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_3>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192bf20

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_4>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192bf60

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_5>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192bfa0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_6>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192bfe0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_7>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192c020

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_12>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_12>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192c060

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_8>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_8>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192c0a0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_13>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_13>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192c0e0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_9>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_9>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192c120

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_10>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_10>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192c150

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_14>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,ITextFilterExpressionContext **param_4)

{
  `Impl::
  WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_14>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14192c180

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_15>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,ITextFilterExpressionContext **param_3)

{
  `Impl::
  WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_15>_>'
  ::__l3::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 14192c1b0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapUnaryFunction<bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_16>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,ITextFilterExpressionContext **param_3)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  uchar *puVar3;
  
  auVar2._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar2._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar2._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar2._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.D;
  puVar3 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar3 = (uchar *)0x0;
  }
  uVar1 = *puVar3;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar2;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).field_0x18 = uVar1 == '\0';
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 14192c220

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14192c240

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14192c260

IAsyncReadFileHandle * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPreloadableFile::InitializeAsync'::__l4::<lambda_1>,IAsyncReadFileHandle_*>::
Call(void *param_1)

{
  FPlatformFileManager *this;
  IPlatformFile *pIVar1;
  IAsyncReadFileHandle *pIVar2;
  
  this = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this);
  if (*(int *)(*(longlong *)param_1 + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014192c29e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar2 = (IAsyncReadFileHandle *)
             (**(code **)((longlong)*pIVar1 + 400))
                       (pIVar1,*(undefined8 *)(*(longlong *)param_1 + 0x90),0);
    return pIVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014192c2b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar2 = (IAsyncReadFileHandle *)(**(code **)((longlong)*pIVar1 + 400))(pIVar1,L"",0);
  return pIVar2;
}

// Call @ 14192c2c0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`CSVTest'::__l8::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `CSVTest'::__l8::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14192c2d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GetExtensionDirsInternal'::__l15::<lambda_1>,bool,wchar_t_const_*,bool>::Call
          (void *param_1,wchar_t **param_2,bool *param_3)

{
  EGetExtensionDirsFlags EVar1;
  FString local_18;
  
  if (*param_3 != false) {
    EVar1 = *(EGetExtensionDirsFlags *)((longlong)param_1 + 0x18);
    ::FString::FString(&local_18,*param_2);
    GetExtensionDirsInternal
              (*(TArray<FString,TSizedDefaultAllocator<32>_> **)param_1,&local_18,
               (FString *)((longlong)param_1 + 8),EVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// Call @ 14192c330

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseIndex<char>'::__l2::<lambda_2>,enum_EParseState,char>::Call
          (void *param_1,char *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = iswspace((short)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c360

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseIndex<char8_t>'::__l2::<lambda_2>,enum_EParseState,char8_t>::Call
          (void *param_1,uchar *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = iswspace((ushort)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c390

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseIndex<wchar_t>'::__l2::<lambda_2>,enum_EParseState,wchar_t>::Call
          (void *param_1,wchar_t *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = iswspace(*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c3c0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseSpecifier<char>'::__l2::<lambda_2>,enum_EParseState,char>::Call
          (void *param_1,char *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = isspace((uint)(byte)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c3f0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseSpecifier<char8_t>'::__l2::<lambda_2>,enum_EParseState,char8_t>::Call
          (void *param_1,uchar *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = isspace((uint)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c420

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseSpecifier<wchar_t>'::__l2::<lambda_2>,enum_EParseState,wchar_t>::Call
          (void *param_1,wchar_t *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = iswspace(*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c450

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FCsvProfiler::EndCapture'::__l2::<lambda_2>,void>::
Call(void *param_1)

{
  FTaskBase *this;
  
  this = *(FTaskBase **)param_1;
  if (this != (FTaskBase *)0x0) {
    if (this->ExtendedPriority == TaskEvent) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
    }
    Tasks::Private::FTaskBase::TryLaunch(this,0);
    return;
  }
  return;
}

// Call @ 14192c470

FArchive * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPreloadableFile::InitializeAsync'::__l4::<lambda_2>,FArchive_*>::Call
          (void *param_1)

{
  IFileManager *pIVar1;
  FArchive *pFVar2;
  
  pIVar1 = IFileManager::Get();
  if (*(int *)(*(longlong *)param_1 + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014192c4a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FArchive *)
             (**(code **)((longlong)*pIVar1 + 0x18))
                       (pIVar1,*(undefined8 *)(*(longlong *)param_1 + 0x90),0);
    return pFVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014192c4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FArchive *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,L"",0);
  return pFVar2;
}

// Call @ 14192c4d0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseIndex<char>'::__l2::<lambda_3>,enum_EParseState,char>::Call
          (void *param_1,char *param_2)

{
  EParseState EVar1;
  
  EVar1 = `ParseIndex<char>'::__l2::<lambda_3>::operator()(param_1,(short)*param_2);
  return EVar1;
}

// Call @ 14192c4e0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseIndex<char8_t>'::__l2::<lambda_3>,enum_EParseState,char8_t>::Call
          (void *param_1,uchar *param_2)

{
  EParseState EVar1;
  
  EVar1 = `ParseIndex<char8_t>'::__l2::<lambda_3>::operator()(param_1,(ushort)*param_2);
  return EVar1;
}

// Call @ 14192c4f0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseIndex<wchar_t>'::__l2::<lambda_3>,enum_EParseState,wchar_t>::Call
          (void *param_1,wchar_t *param_2)

{
  EParseState EVar1;
  
  EVar1 = `ParseIndex<wchar_t>'::__l2::<lambda_3>::operator()(param_1,*param_2);
  return EVar1;
}

// Call @ 14192c500

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseSpecifier<char>'::__l2::<lambda_3>,enum_EParseState,char>::Call
          (void *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_2;
  iVar2 = isspace((uint)bVar1);
  if ((iVar2 != 0) || (bVar1 == 0x7d)) {
    return StopBefore;
  }
  iVar2 = isalnum((uint)bVar1);
  if ((iVar2 == 0) && (bVar1 != 0x5f)) {
    return Cancel;
  }
  return Continue;
}

// Call @ 14192c550

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseSpecifier<char8_t>'::__l2::<lambda_3>,enum_EParseState,char8_t>::Call
          (void *param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_2;
  iVar2 = isspace((uint)bVar1);
  if ((iVar2 != 0) || (bVar1 == 0x7d)) {
    return StopBefore;
  }
  iVar2 = isalnum((uint)bVar1);
  if ((iVar2 == 0) && (bVar1 != 0x5f)) {
    return Cancel;
  }
  return Continue;
}

// Call @ 14192c5a0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseSpecifier<wchar_t>'::__l2::<lambda_3>,enum_EParseState,wchar_t>::Call
          (void *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  
  _C = *param_2;
  iVar1 = iswspace(_C);
  if ((iVar1 != 0) || (_C == L'}')) {
    return StopBefore;
  }
  iVar1 = iswalnum(_C);
  if ((iVar1 == 0) && (_C != L'_')) {
    return Cancel;
  }
  return Continue;
}

// Call @ 14192c600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPreLoadFile::FPreLoadFile'::__l1::<lambda_3_>,void>::Call(void *param_1)

{
  FPreLoadFile::bSystemNoLongerTakingRequests = false;
  return;
}

// Call @ 14192c610

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseIndex<char>'::__l2::<lambda_4>,enum_EParseState,char>::Call
          (void *param_1,char *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = iswspace((short)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c640

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseIndex<char8_t>'::__l2::<lambda_4>,enum_EParseState,char8_t>::Call
          (void *param_1,uchar *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = iswspace((ushort)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c670

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseIndex<wchar_t>'::__l2::<lambda_4>,enum_EParseState,wchar_t>::Call
          (void *param_1,wchar_t *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = iswspace(*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c6a0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseSpecifier<char>'::__l2::<lambda_4>,enum_EParseState,char>::Call
          (void *param_1,char *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = isspace((uint)(byte)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c6d0

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseSpecifier<char8_t>'::__l2::<lambda_4>,enum_EParseState,char8_t>::Call
          (void *param_1,uchar *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = isspace((uint)*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14192c700

EParseState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseSpecifier<wchar_t>'::__l2::<lambda_4>,enum_EParseState,wchar_t>::Call
          (void *param_1,wchar_t *param_2)

{
  int iVar1;
  EParseState EVar2;
  
  iVar1 = iswspace(*param_2);
  EVar2 = StopBefore;
  if (iVar1 != 0) {
    EVar2 = Continue;
  }
  return EVar2;
}

// Call @ 14198ed60

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FString_(__cdecl*)(double,double),FString,double,double>::Call
          (FString *__return_storage_ptr__,void *param_1,double *param_2,double *param_3)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 14198ed90

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FVTunePerThreadHandleMap>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x60);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFVTunePerThreadHandleMap____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FVTunePerThreadHandleMap__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 7) = 0;
    *(undefined4 *)&pFVar2[7].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[8].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 8) = 0xffffffff;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xb) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 14198eda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParseTokens'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::Call
          (void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  char *pcVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  ulonglong _Size;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  FScriptContainerElement *pFVar9;
  TStringView<wchar_t> *pTVar10;
  int iVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_1b8 [32];
  FString FStack_168;
  FScriptContainerElement *pFStack_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *pwStack_148;
  int iStack_140;
  undefined4 uStack_13c;
  wchar_t *pwStack_138;
  int iStack_130;
  undefined4 uStack_12c;
  wchar_t *pwStack_128;
  int iStack_120;
  undefined4 uStack_11c;
  TStringView<wchar_t> TStack_118;
  TStringView<wchar_t> TStack_108;
  TStringView<wchar_t> TStack_f8;
  TStringView<wchar_t> TStack_e8;
  FString FStack_d8;
  wchar_t awStack_c8 [80];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar7 = 0x4f;
  if (param_2->Size < 0x4f) {
    iVar7 = param_2->Size;
  }
  _Size = (longlong)iVar7 * 2;
  if (0 < iVar7) {
    memcpy(awStack_c8,param_2->DataPtr,_Size);
  }
  if (0x9f < _Size) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  pcVar2 = *(char **)param_1;
  iVar11 = 0;
  awStack_c8[iVar7] = L'\0';
  if (*pcVar2 == '\0') {
LAB_141989081:
    if (**(char **)((longlong)param_1 + 0x18) == '\0') {
      pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 8);
      if ((((TStringView<wchar_t> *)pFVar3->Data <= param_2) &&
          (param_2 < (TStringView<wchar_t> *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar7 + 1;
      uVar5 = *(undefined8 *)&param_2->Size;
      pFVar9 = pFVar3->Data;
      *(wchar_t **)(pFVar9 + (longlong)iVar7 * 0x10) = param_2->DataPtr;
      *(undefined8 *)(pFVar9 + (longlong)iVar7 * 0x10 + 8) = uVar5;
      return;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    iVar7 = *(int *)&pFVar3[1].Data;
    if (iVar7 == *piVar1) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    pFVar13 = pFVar3->Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)(pFVar13 + 8) = 0;
    pFVar9 = (FScriptContainerElement *)
             ::FString::ConstructFromPtrSize
                       (&FStack_d8,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    if (pFVar13 != pFVar9) {
      if (*(void **)pFVar13 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar13);
      }
      *(undefined8 *)pFVar13 = *(undefined8 *)pFVar9;
      *(undefined8 *)pFVar9 = 0;
      *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(pFVar9 + 8);
      *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
      *(undefined8 *)(pFVar9 + 8) = 0;
    }
    goto LAB_14198903d;
  }
  FStack_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_168.Data.ArrayNum = 0;
  FStack_168.Data.ArrayMax = 0;
  iVar7 = FGenericPlatformStricmp::Stricmp(awStack_c8,GDefaultChannels.Name);
  if (iVar7 == 0) {
    pTVar12 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10);
    pwStack_148 = GDefaultChannels.ChannelList;
    if (GDefaultChannels.ChannelList != (wchar_t *)0x0) {
      sVar8 = wcslen(GDefaultChannels.ChannelList);
      iVar11 = (int)sVar8;
    }
    pTVar10 = &TStack_118;
    TStack_118._12_4_ = uStack_13c;
    TStack_118.Size = iVar11;
    bVar6 = false;
    TStack_118.DataPtr = pwStack_148;
    iStack_140 = iVar11;
  }
  else {
    iVar7 = FGenericPlatformStricmp::Stricmp(awStack_c8,GMemoryChannels.Name);
    if (iVar7 == 0) {
      pTVar12 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10);
      pwStack_138 = GMemoryChannels.ChannelList;
      if (GMemoryChannels.ChannelList != (wchar_t *)0x0) {
        sVar8 = wcslen(GMemoryChannels.ChannelList);
        iVar11 = (int)sVar8;
      }
      pTVar10 = &TStack_108;
      TStack_108._12_4_ = uStack_12c;
      TStack_108.Size = iVar11;
      bVar6 = false;
      TStack_108.DataPtr = pwStack_138;
      iStack_130 = iVar11;
    }
    else {
      iVar7 = FGenericPlatformStricmp::Stricmp(awStack_c8,GMemoryLightChannels.Name);
      if (iVar7 == 0) {
        pTVar12 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10);
        pwStack_128 = GMemoryLightChannels.ChannelList;
        if (GMemoryLightChannels.ChannelList != (wchar_t *)0x0) {
          sVar8 = wcslen(GMemoryLightChannels.ChannelList);
          iVar11 = (int)sVar8;
        }
        pTVar10 = &TStack_f8;
        TStack_f8._12_4_ = uStack_11c;
        TStack_f8.Size = iVar11;
        bVar6 = false;
        TStack_f8.DataPtr = pwStack_128;
        iStack_120 = iVar11;
      }
      else {
        if ((GConfig == (FConfigCacheIni *)0x0) ||
           (bVar6 = FConfigCacheIni::GetString
                              (GConfig,L"Trace.ChannelPresets",awStack_c8,&FStack_168,&GEngineIni),
           !bVar6)) {
          if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_168.Data.AllocatorInstance.Data);
          }
          goto LAB_141989081;
        }
        pTVar12 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10);
        if (FStack_168.Data.ArrayNum == 0) {
          pFStack_158 = (FScriptContainerElement *)0x15060d16c;
LAB_14198900c:
          sVar8 = wcslen((wchar_t *)pFStack_158);
          iVar11 = (int)sVar8;
        }
        else {
          pFStack_158 = FStack_168.Data.AllocatorInstance.Data;
          if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14198900c;
        }
        pTVar10 = &TStack_e8;
        TStack_e8._12_4_ = uStack_14c;
        TStack_e8.Size = iVar11;
        bVar6 = true;
        TStack_e8.DataPtr = (wchar_t *)pFStack_158;
        iStack_150 = iVar11;
      }
    }
  }
  ParseTokens(pTVar10,false,
              *(TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8),
              bVar6,pTVar12);
  FStack_d8.Data.AllocatorInstance.Data = FStack_168.Data.AllocatorInstance.Data;
LAB_14198903d:
  if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 1419e3b10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStatsReadFile::~FStatsReadFile'::__l2::<lambda_1>,bool>::Call(void *param_1)

{
  FAsyncTaskBase *this;
  
  this = *(FAsyncTaskBase **)(*(longlong *)param_1 + 0x4c8);
  if (this != (FAsyncTaskBase *)0x0) {
    if ((this->WorkNotFinishedCounter).Counter != 0) {
      return false;
    }
    FAsyncTaskBase::SyncCompletion(this,false);
  }
  return true;
}

// Call @ 1419e3b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCbPackage::GatherAttachments'::__l2::<lambda_1>,void,FCbFieldView>::Call
          (void *param_1,FCbFieldView *param_2)

{
  FCbFieldView local_18;
  
  local_18.TypeWithFlags = param_2->TypeWithFlags;
  local_18.Error = param_2->Error;
  local_18._2_2_ = *(undefined2 *)&param_2->field_0x2;
  local_18.NameLen = param_2->NameLen;
  local_18.Value = param_2->Value;
  `FCbPackage::GatherAttachments'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1419e3b80

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FMemoryImage::Flatten'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FMemoryImage::Flatten'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1419e3b90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FThreadStats::SendMessage_Async'::__l7::<lambda_2>,void>::Call(void *param_1)

{
  FStatsThread *this;
  
  this = FStatsThread::Get();
  FStatsThread::StatMessage(this,*(FStatPacket **)param_1);
  return;
}

// Call @ 141a7be60

TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_(__cdecl*)(void),TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_>
::Call(TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,void *param_1
      )

{
  (**(code **)param_1)();
  return __return_storage_ptr__;
}

// Call @ 141a7be80

FSharedBuffer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FSharedBuffer_(__cdecl*)(FCbFieldView_&,FSharedBuffer_const_&),FSharedBuffer,FCbFieldView_&,FSharedBuffer_const_&>
::Call(void *param_1,FCbFieldView *param_2,FSharedBuffer *param_3)

{
  (**(code **)param_2)(param_1,param_3);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Call @ 141a7beb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FEnsureHandlerArgs_const_&),bool,FEnsureHandlerArgs_const_&>::
Call(void *param_1,FEnsureHandlerArgs *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a7beb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2);
  return (bool)uVar1;
}

// Call @ 141a7bec0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FCbFieldView_const_&),bool,FCbFieldView_const_&>::Call
          (void *param_1,FCbFieldView *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a7bec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2);
  return (bool)uVar1;
}

// Call @ 141a7bed0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEnsureScope::FEnsureScope'::__l2::<lambda_1>,bool,FEnsureHandlerArgs_const_&>::
Call(void *param_1,FEnsureHandlerArgs *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  pcVar1 = *(code **)((longlong)param_1 + 0x10);
  plVar4 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3,param_2);
  if (cVar2 != '\0') {
    *(int *)(*(longlong *)param_1 + 0x30) = *(int *)(*(longlong *)param_1 + 0x30) + 1;
  }
  return (bool)cVar2;
}

// Call @ 141a7bf30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`LoadNameBatchAsync'::__l15::<lambda_1>_>'::__l4::<lambda_1>,bool,float>::
Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141a7bf50

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`LoadNameBatchAsync'::__l15::<lambda_1>,void>::Call
          (void *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char_const_,int> TStack_48;
  TArrayView<FSerializedNameHeader_const_,int> TStack_38;
  TArrayView<unsigned_char_const_,int> TStack_28;
  TArrayView<FSerializedNameHeader_const_,int> TStack_18;
  
  if (*(longlong *)param_1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = *(undefined8 **)param_1;
  TStack_48.DataPtr = (uchar *)puVar1[4];
  TStack_48._8_8_ = puVar1[5];
  TStack_38.DataPtr = (FSerializedNameHeader *)puVar1[2];
  TStack_38._8_8_ = puVar1[3];
  if ((*(byte *)(puVar1 + 8) & 1) != 0) {
    LoadSeparatedNameBatchInInputOrder
              ((TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(puVar1 + 10),
               (ulong64 *)*puVar1,&TStack_38,&TStack_48);
                    /* WARNING: Could not recover jumptable at 0x000141a740d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)puVar1[9] + 0x10))();
    return;
  }
  TStack_28.DataPtr = TStack_48.DataPtr;
  TStack_28._8_8_ = TStack_48._8_8_;
  TStack_18.DataPtr = TStack_38.DataPtr;
  TStack_18._8_8_ = TStack_38._8_8_;
  LoadSeparatedNameBatchInShardOrder
            ((TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(puVar1 + 10),
             (ulong64 *)*puVar1,&TStack_18,&TStack_28);
                    /* WARNING: Could not recover jumptable at 0x000141a740fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)puVar1[9] + 0x10))();
  return;
}

// Call @ 141a7bf60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCbFieldIterateAttachmentsTest::RunTest'::__l2::<lambda_2>,void,FCbFieldView>::
Call(void *param_1,FCbFieldView *param_2)

{
  FCbFieldView local_18;
  
  local_18.TypeWithFlags = param_2->TypeWithFlags;
  local_18.Error = param_2->Error;
  local_18._2_2_ = *(undefined2 *)&param_2->field_0x2;
  local_18.NameLen = param_2->NameLen;
  local_18.Value = param_2->Value;
  `FCbFieldIterateAttachmentsTest::RunTest'::__l2::<lambda_2>::operator()(param_1,&local_18);
  return;
}

// Call @ 141a7bf90

TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`LoadNameBatchAsync'::__l15::<lambda_2>,TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_>
::Call(TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,void *param_1
      )

{
  `LoadNameBatchAsync'::__l15::<lambda_2>::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141a7bfc0

TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`LoadNameBatchAsync'::__l17::<lambda_3>,TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_>
::Call(TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,void *param_1
      )

{
  `LoadNameBatchAsync'::__l17::<lambda_3>::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141a7bff0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEnsureScope::FEnsureScope'::__l1::<lambda_4_>,bool,FEnsureHandlerArgs_const_&>
::Call(void *param_1,FEnsureHandlerArgs *param_2)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(*(char **)param_1,param_2->Message);
  return iVar1 == 0;
}

// Call @ 141a7c010

TMemoryView<void_const_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
::Call(TMemoryView<void_const_> *__return_storage_ptr__,void *param_1,FCbFieldView *param_2,
      TMemoryView<void_const_> *param_3)

{
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_3->Data;
  local_18.Size = param_3->Size;
  FCbFieldView::AsCustom(param_2,__return_storage_ptr__,*(ulong64 *)param_1,&local_18);
  return __return_storage_ptr__;
}

// Call @ 141a7c050

TMemoryView<void_const_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
::Call(TMemoryView<void_const_> *__return_storage_ptr__,void *param_1,FCbFieldView *param_2,
      TMemoryView<void_const_> *param_3)

{
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_3->Data;
  local_18.Size = param_3->Size;
  ``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::
  <lambda_8_>::operator()(param_1,__return_storage_ptr__,param_2,&local_18);
  return __return_storage_ptr__;
}

// Call @ 141aa1390

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::Call
          (void *param_1,double *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141aa1397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 141aa13a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsPlatformFile::IterateDirectory'::__l2::<lambda_1>,bool,_WIN32_FIND_DATAW_const_&>
::Call(void *param_1,_WIN32_FIND_DATAW *param_2)

{
  wchar_t *_Str;
  uint uVar1;
  longlong *plVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  wchar_t *pwVar4;
  FDirectoryVisitor *this;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  
  plVar2 = *(longlong **)param_1;
  iVar10 = (int)(plVar2[1] - *plVar2 >> 1);
  iVar9 = iVar10 - **(int **)((longlong)param_1 + 8);
  if (iVar10 < iVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount <= Len()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                       ,0xe8,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2[1] = plVar2[1] + (longlong)iVar9 * -2;
  _Str = param_2->cFileName;
  pTVar3 = *(TStringBuilderBase<wchar_t> **)param_1;
  pwVar4 = pTVar3->CurPos;
  if ((((int)((longlong)pwVar4 - (longlong)pTVar3->Base >> 1) != 0) && (pwVar4[-1] != L'/')) &&
     (pwVar4[-1] != L'\\')) {
    if (pTVar3->End < pwVar4 + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
    }
    *pTVar3->CurPos = L'/';
    pTVar3->CurPos = pTVar3->CurPos + 1;
  }
  iVar9 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar8 = wcslen(_Str);
    iVar9 = (int)sVar8;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,_Str,iVar9);
  pTVar3 = *(TStringBuilderBase<wchar_t> **)param_1;
  uVar1 = param_2->dwFileAttributes;
  this = *(FDirectoryVisitor **)((longlong)param_1 + 0x10);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'\0';
  bVar6 = IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
                    (this,pTVar3->Base,(bool)((byte)(uVar1 >> 4) & 1));
  return bVar6;
}

// Call @ 141aa13b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsPlatformFile::IterateDirectoryStat'::__l2::<lambda_1>,bool,_WIN32_FIND_DATAW_const_&>
::Call(void *param_1,_WIN32_FIND_DATAW *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  FDateTime FVar3;
  FDateTime FVar4;
  bool bVar5;
  BOOL BVar6;
  int iVar7;
  size_t sVar8;
  int iVar9;
  ForAnyElementType FVar10;
  long64 lVar11;
  uint uVar12;
  undefined1 auStackY_f8 [32];
  FString FStack_b0;
  FDateTime FStack_a0;
  FDateTime FStack_98;
  FDateTime FStack_90;
  FDirectoryStatVisitor *pFStack_88;
  FFileStatData FStack_80;
  _SYSTEMTIME _Stack_58;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar12 = param_2->dwFileAttributes;
  lVar11 = -1;
  if ((uVar12 >> 4 & 1) == 0) {
    lVar11 = CONCAT44(param_2->nFileSizeHigh,param_2->nFileSizeLow);
  }
  pFStack_88 = *(FDirectoryStatVisitor **)param_1;
  BVar6 = FileTimeToSystemTime((FILETIME *)&param_2->ftLastWriteTime,&_Stack_58);
  if (BVar6 == 0) {
    FStack_a0.Ticks = 0;
  }
  else {
    FDateTime::FDateTime
              (&FStack_a0,(uint)_Stack_58.wYear,(uint)_Stack_58.wMonth,(uint)_Stack_58.wDay,
               (uint)_Stack_58.wHour,(uint)_Stack_58.wMinute,(uint)_Stack_58.wSecond,0);
  }
  FVar3.Ticks = FStack_a0.Ticks;
  BVar6 = FileTimeToSystemTime((FILETIME *)&param_2->ftLastAccessTime,&_Stack_58);
  if (BVar6 == 0) {
    FStack_98.Ticks = 0;
  }
  else {
    FDateTime::FDateTime
              (&FStack_98,(uint)_Stack_58.wYear,(uint)_Stack_58.wMonth,(uint)_Stack_58.wDay,
               (uint)_Stack_58.wHour,(uint)_Stack_58.wMinute,(uint)_Stack_58.wSecond,0);
  }
  FVar4.Ticks = FStack_98.Ticks;
  BVar6 = FileTimeToSystemTime((FILETIME *)&param_2->ftCreationTime,&_Stack_58);
  if (BVar6 == 0) {
    FStack_90.Ticks = 0;
  }
  else {
    FDateTime::FDateTime
              (&FStack_90,(uint)_Stack_58.wYear,(uint)_Stack_58.wMonth,(uint)_Stack_58.wDay,
               (uint)_Stack_58.wHour,(uint)_Stack_58.wMinute,(uint)_Stack_58.wSecond,0);
  }
  FStack_80._32_1_ =
       ((byte)uVar12 & 1 | 2) * '\x02' | FStack_80._32_1_ & 0xfc | (uVar12 >> 4 & 1) != 0;
  puVar2 = *(undefined8 **)((longlong)param_1 + 8);
  FStack_80.CreationTime.Ticks = FStack_90.Ticks;
  FStack_80.AccessTime.Ticks = FVar4.Ticks;
  FStack_80.ModificationTime.Ticks = FVar3.Ticks;
  FStack_80.FileSize = lVar11;
  sVar8 = wcslen(param_2->cFileName);
  iVar7 = (int)sVar8;
  if ((*(int *)(puVar2 + 1) != 0) || (iVar9 = 2, iVar7 == -1)) {
    iVar9 = 1;
  }
  FStack_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  FStack_b0.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar7 + iVar9 == 0)) {
    FStack_b0.Data.ArrayMax = 0;
  }
  else {
    uVar12 = iVar1 + iVar7 + iVar9;
    if ((int)uVar12 < iVar1) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar12);
    }
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar12,0,(ForAnyElementType *)&FStack_b0,iVar1,&FStack_b0.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(FStack_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend(&FStack_b0,param_2->cFileName,iVar7);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (FStack_b0.Data.ArrayNum != 0) {
    FVar10.Data = FStack_b0.Data.AllocatorInstance.Data;
  }
  bVar5 = IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit
                    (pFStack_88,(wchar_t *)FVar10.Data,&FStack_80);
  if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// Call @ 141aa13c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo'::__l2::<lambda_1>,void,FProgramCounterSymbolInfo_&>
::Call(void *param_1,FProgramCounterSymbolInfo *param_2)

{
  memcpy(*(void **)param_1,param_2,0xc18);
  return;
}

// Call @ 141aa13e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsPlatformProcess::TerminateProc'::__l5::<lambda_1>,bool,unsigned_int,wchar_t_const_*>
::Call(void *param_1,uint *param_2,wchar_t **param_3)

{
  return true;
}

// Call @ 141b38ed0

int __cdecl
UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call(void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141b38ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)param_1)();
  return iVar1;
}

// Call @ 141b38ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(TRefCountPtr<FBaseGraphTask>),void,TRefCountPtr<FBaseGraphTask>_>
::Call(void *param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  code *pcVar1;
  FBaseGraphTask *local_res8 [4];
  
  pcVar1 = *(code **)param_1;
  local_res8[0] = param_2->Reference;
  param_2->Reference = (FBaseGraphTask *)0x0;
  (*pcVar1)(local_res8);
  return;
}

// Call @ 141b38f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&),void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000141b38f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,param_3);
  return;
}

// Call @ 141b38f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l7::<lambda_10>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
::Call(void *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2,
      TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  <lambda_1> local_res20 [8];
  
  BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseAND<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (param_3,param_2,OneFillMissingBits|MaintainSize,local_res20);
  return;
}

// Call @ 141b38f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l52::<lambda_10>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l52::<lambda_10>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 141b38f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l81::<lambda_10>,void>::Call
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  undefined8 *puStackX_8;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  undefined8 uStack_20;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  ppuStack_28 = &TFunction_OwnedObject<``TaskGraphTests::FTaskGraphBasicTest::TestBody'::`81'::<lambda_10>::operator()'::`2'::<lambda_1>,1,0>
                 ::_vftable_;
  uStack_20 = *(undefined8 *)param_1;
  apcStack_38[0] =
       TFunctionRefCaller<``TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l81::<lambda_10>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  TVar3 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)&puStackX_8,(TStatIdData *)apcStack_38,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar3.Reference,ActualRenderingThread_Local);
  if (puStackX_8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStackX_8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puStackX_8 != (undefined8 *)0x0)) {
      (**(code **)*puStackX_8)(puStackX_8,1);
    }
  }
  return;
}

// Call @ 141b38f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l55::<lambda_11>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l55::<lambda_11>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b38f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l89::<lambda_11>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b38f90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l56::<lambda_12>,void,int>::Call
          (void *param_1,int *param_2)

{
  return;
}

// Call @ 141b38fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l57::<lambda_13>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l57::<lambda_13>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b38fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l104::<lambda_13>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b38fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l58::<lambda_14>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l58::<lambda_14>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b38fd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l126::<lambda_16>,void,int>::
Call(void *param_1,int *param_2)

{
  LOCK();
  **(int **)param_1 = **(int **)param_1 + *param_2;
  UNLOCK();
  return;
}

// Call @ 141b38fe0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TClosableLockFreePointerListUnorderedSingleConsumer<void,0>::PopAllAndClose<TArray<void_*,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,unsigned___int64,unsigned___int64>
::Call(void *param_1,ulong64 *param_2)

{
  return *param_2 | 1;
}

// Call @ 141b38ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConcurrentQueuesTests::TestSpscQueueCorrectness<1000000,TMpscQueue<unsigned_int,FMemory>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  do {
    puVar2 = *(undefined8 **)param_1;
    puVar4 = FMemory::Malloc(0x10,8);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    *puVar1 = puVar4;
    piVar3 = *(int **)((longlong)param_1 + 8);
    *piVar3 = *piVar3 + 1;
  } while (*piVar3 != 1000000);
  return;
}

// Call @ 141b39000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConcurrentQueuesTests::TestSpscQueueCorrectness<1000000,TSpscQueue<unsigned_int,FMemory>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TSpscQueue<unsigned_int,FMemory> *this;
  int *piVar1;
  atomic<TSpscQueue<unsigned_int,FMemory>::FNode_*> aVar2;
  
  do {
    this = *(TSpscQueue<unsigned_int,FMemory> **)param_1;
    aVar2 = (atomic<TSpscQueue<unsigned_int,FMemory>::FNode_*>)
            TSpscQueue<unsigned_int,FMemory>::AllocNode(this);
    *(undefined4 *)((longlong)aVar2 + 8) = 0;
    this->Head->Next = aVar2;
    this->Head = (FNode *)aVar2;
    LOCK();
    this->NumElems = (atomic<int>)((int)this->NumElems + 1);
    UNLOCK();
    piVar1 = *(int **)((longlong)param_1 + 8);
    *piVar1 = *piVar1 + 1;
  } while (*piVar1 != 1000000);
  return;
}

// Call @ 141b39060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConcurrentQueuesTests::TestSpscQueue_Impl<5000000,TMpscQueue<unsigned_int,FMemory>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  cVar2 = **(char **)param_1;
  while (cVar2 == '\0') {
    puVar3 = *(undefined8 **)((longlong)param_1 + 8);
    puVar4 = FMemory::Malloc(0x10,8);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    LOCK();
    puVar1 = (undefined8 *)*puVar3;
    *puVar3 = puVar4;
    UNLOCK();
    *puVar1 = puVar4;
    cVar2 = **(char **)param_1;
  }
  return;
}

// Call @ 141b39070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConcurrentQueuesTests::TestSpscQueue_Impl<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TCircularQueue<unsigned_int>_>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  char cVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  cVar1 = **(char **)param_1;
  do {
    if (cVar1 != '\0') {
      return;
    }
    puVar2 = *(uint **)((longlong)param_1 + 8);
    uVar7 = puVar2[7] + 1 & *puVar2;
    if (uVar7 != puVar2[6]) {
      uVar6 = puVar2[7] & *puVar2;
      uVar5 = 0;
      if ((int)uVar6 < (int)puVar2[4]) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(*(longlong *)(puVar2 + 2) + (longlong)(int)uVar6 * 4) = 0;
      LOCK();
      puVar2[7] = uVar7;
      UNLOCK();
    }
    cVar1 = **(char **)param_1;
  } while( true );
}

// Call @ 141b39080

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConcurrentQueuesTests::TestSpscQueue_Impl<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,1>_>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  cVar1 = **(char **)param_1;
  while (cVar1 == '\0') {
    puVar2 = *(undefined8 **)((longlong)param_1 + 8);
    puVar4 = ::operator_new(0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar3 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      *puVar3 = puVar4;
    }
    cVar1 = **(char **)param_1;
  }
  return;
}

// Call @ 141b39090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConcurrentQueuesTests::TestSpscQueue_Impl<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,0>_>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  cVar2 = **(char **)param_1;
  while (cVar2 == '\0') {
    puVar3 = *(undefined8 **)((longlong)param_1 + 8);
    puVar4 = ::operator_new(0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      if (((ulonglong)puVar3 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      puVar1 = (undefined8 *)*puVar3;
      *puVar3 = puVar4;
      UNLOCK();
      if (((ulonglong)puVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      *puVar1 = puVar4;
      UNLOCK();
    }
    cVar2 = **(char **)param_1;
  }
  return;
}

// Call @ 141b390a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConcurrentQueuesTests::TestSpscQueue_Impl<5000000,TSpscQueue<unsigned_int,FMemory>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  char cVar1;
  TSpscQueue<unsigned_int,FMemory> *this;
  atomic<TSpscQueue<unsigned_int,FMemory>::FNode_*> aVar2;
  
  cVar1 = **(char **)param_1;
  while (cVar1 == '\0') {
    this = *(TSpscQueue<unsigned_int,FMemory> **)((longlong)param_1 + 8);
    aVar2 = (atomic<TSpscQueue<unsigned_int,FMemory>::FNode_*>)
            TSpscQueue<unsigned_int,FMemory>::AllocNode(this);
    *(undefined4 *)((longlong)aVar2 + 8) = 0;
    this->Head->Next = aVar2;
    this->Head = (FNode *)aVar2;
    LOCK();
    this->NumElems = (atomic<int>)((int)this->NumElems + 1);
    UNLOCK();
    cVar1 = **(char **)param_1;
  }
  return;
}

// Call @ 141b39100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``TaskGraphTests::OversubscriptionStressTest<10>'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``TaskGraphTests::OversubscriptionStressTest<10>'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 141b39110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``TaskGraphTests::Fib'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  ``TaskGraphTests::Fib'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 141b39120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``OldTaskGraphTests::TaskGraphBenchmark'::__l29::<lambda_1>::operator()'::__l2::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  return;
}

// Call @ 141b39130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l81::<lambda_10>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b39140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``OldTaskGraphTests::TaskGraphBenchmark'::__l55::<lambda_11>::operator()'::__l2::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  return;
}

// Call @ 141b39150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l4::<lambda_3>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FTaskBase *this;
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1397,"DispatchSubsequents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
               ,0x575);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1397);
  }
  FCpuProfilerTrace::FlushThreadBuffer();
  this = (FTaskBase *)**(undefined8 **)param_1;
  if (this->ExtendedPriority == TaskEvent) {
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(this,0);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 141b39160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``OldTaskGraphTests::TaskGraphBenchmark'::__l39::<lambda_7>::operator()'::__l2::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  LOCK();
  **(int **)param_1 = **(int **)param_1 + 1;
  UNLOCK();
  return;
}

// Call @ 141b39170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``OldTaskGraphTests::TaskGraphBenchmark'::__l42::<lambda_8>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  LOCK();
  **(undefined1 **)param_1 = 1;
  UNLOCK();
  return;
}

// Call @ 141b39190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``OldTaskGraphTests::TaskGraphBenchmark'::__l47::<lambda_9>::operator()'::__l2::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  ``OldTaskGraphTests::TaskGraphBenchmark'::__l47::<lambda_9>::operator()'::__l2::<lambda_1>::
  operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 141b391a0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLockFreePointerListLIFOBase<void,0,2>::PushIf'::__l2::<lambda_1>,unsigned_int,unsigned___int64>
::Call(void *param_1,ulong64 *param_2)

{
  uint uVar1;
  
  uVar1 = `FLockFreePointerListLIFOBase<void,0,2>::PushIf'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return uVar1;
}

// Call @ 141b391b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TClosableLockFreePointerListUnorderedSingleConsumer<void,0>::PushIfNotClosed'::__l2::<lambda_1>,bool,unsigned___int64>
::Call(void *param_1,ulong64 *param_2)

{
  return (bool)(~(byte)*param_2 & 1);
}

// Call @ 141b391c0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`TAsyncRunnable<int>::Run'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141b391f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 141b39210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncCompletionCallbackTest::TestBody'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
                    /* WARNING: Could not recover jumptable at 0x000141b39220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)param_1 + 8) + 0x10))();
  return;
}

// Call @ 141b39230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphTaskDestructionTest::TestBody'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  return;
}

// Call @ 141b39240

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_1>,unsigned_int,void_const_*>::
Call(void *param_1,void **param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = *(int *)((longlong)*param_2 + 8);
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = *(wchar_t **)*param_2;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  return uVar2;
}

// Call @ 141b39270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l3::<lambda_1>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b39280

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<TFunction<int___cdecl(void)>_&>'::__l4::<lambda_1>,bool,float>::Call
          (void *param_1,float *param_2)

{
  SetPromise<int,TUniqueFunction<int___cdecl(void)>_&>
            ((TPromise<int> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141b392a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<TFunction<void___cdecl(void)>_&>'::__l4::<lambda_1>,bool,float>::Call
          (void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141b392c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<int>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141b392e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::OversubscriptionStressTest<10>'::__l4::<lambda_1>,void>::Call
          (void *param_1)

{
  <lambda_1> a<StackX_8 [32];
  TArrayView<std::nullptr_t,int> TStack_28;
  code *pcStack_18;
  <lambda_1> *p<Stack_10;
  
  pcStack_18 = TFunctionRefCaller<``TaskGraphTests::OversubscriptionStressTest<10>'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
               ::Call;
  p<Stack_10 = a<StackX_8;
  TStack_28.DataPtr = (void **)0x0;
  TStack_28.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",200,1,(TFunctionRef<void___cdecl(int)> *)&pcStack_18,a<StackX_8[0],
             None,&TStack_28);
                    /* WARNING: Could not recover jumptable at 0x000141b2e3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x10))();
  return;
}

// Call @ 141b392f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::TestFGraphEventPerf<100000>'::__l4::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  `TaskGraphTests::TestFGraphEventPerf<100000>'::__l4::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 141b39300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConcurrentQueuesTests::TestMpscQueue<100000,TMpscQueue<unsigned_int,FMemory>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  cVar2 = **(char **)param_1;
  while (cVar2 == '\0') {
    puVar3 = *(undefined8 **)((longlong)param_1 + 8);
    puVar4 = FMemory::Malloc(0x10,8);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    LOCK();
    puVar1 = (undefined8 *)*puVar3;
    *puVar3 = puVar4;
    UNLOCK();
    *puVar1 = puVar4;
    cVar2 = **(char **)param_1;
  }
  return;
}

// Call @ 141b39310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConcurrentQueuesTests::TestMpscQueue<100000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,0>_>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  cVar2 = **(char **)param_1;
  while (cVar2 == '\0') {
    puVar3 = *(undefined8 **)((longlong)param_1 + 8);
    puVar4 = ::operator_new(0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      if (((ulonglong)puVar3 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      puVar1 = (undefined8 *)*puVar3;
      *puVar3 = puVar4;
      UNLOCK();
      if (((ulonglong)puVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      *puVar1 = puVar4;
      UNLOCK();
    }
    cVar2 = **(char **)param_1;
  }
  return;
}

// Call @ 141b39320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::SemaphoreTests::TestMultiEventWakeUpPerf<5,100000>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  char cVar1;
  
  cVar1 = **(char **)((longlong)param_1 + 0x18);
  while (cVar1 == '\0') {
    (**(code **)(*(longlong *)**(undefined8 **)param_1 + 0x20))
              ((longlong *)**(undefined8 **)param_1,0xffffffff,0);
    LOCK();
    **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + -1;
    UNLOCK();
    do {
    } while (**(int **)((longlong)param_1 + 8) != 0);
    LOCK();
    **(int **)((longlong)param_1 + 0x10) = **(int **)((longlong)param_1 + 0x10) + -1;
    UNLOCK();
    cVar1 = **(char **)((longlong)param_1 + 0x18);
  }
  return;
}

// Call @ 141b39330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConsumeAllMpmcQueueTests::TestPerf<10000,UE::TConsumeAllMpmcQueue<void_*,FMemory>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = 0;
  lVar6 = 1;
  do {
    plVar1 = *(longlong **)param_1;
    plVar3 = FMemory::Malloc(0x10,8);
    *plVar3 = 0;
    plVar3[1] = lVar6;
    lVar4 = *plVar1;
    do {
      *plVar3 = lVar4;
      LOCK();
      lVar5 = *plVar1;
      bVar8 = lVar4 == lVar5;
      if (bVar8) {
        *plVar1 = (longlong)plVar3;
        lVar5 = lVar4;
      }
      UNLOCK();
      lVar4 = lVar5;
    } while (!bVar8);
    lVar7 = lVar7 + lVar6;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x2711);
  if ((lVar7 != 0x2fb0408) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Total == Num * (Num + 1) / 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                         ,0x400,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Call @ 141b39340

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConsumeAllMpmcQueueTests::TestPerf<10000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTClosableLockFreePointerListUnorderedSingleConsumer<void>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  longlong lVar7;
  
  lVar7 = 0;
  puVar6 = &DAT_00000001;
  do {
    puVar3 = *(undefined8 **)param_1;
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    bVar5 = TClosableLockFreePointerListUnorderedSingleConsumer<void,0>::PushIfNotClosed
                      ((TClosableLockFreePointerListUnorderedSingleConsumer<void,0> *)*puVar3,puVar6
                      );
    if (!bVar5) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6983228227539960720>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                         ,0x390,
                         "Queue.load(std::memory_order_relaxed)->PushIfNotClosed(MoveTemp(Value))");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubscribingThreadsNum.fetch_sub(1, std::memory_order_release) >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                         ,0x392,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar7 = lVar7 + (longlong)puVar6;
    puVar6 = puVar6 + 1;
  } while (puVar6 != (undefined1 *)0x2711);
  if (lVar7 != 0x2fb0408) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Total == Num * (Num + 1) / 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x400,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// Call @ 141b39350

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConsumeAllMpmcQueueTests::TestPerf<10000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTClosableMpscQueue<void_*>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 *puStackX_10;
  
  lVar7 = 0;
  puVar6 = &DAT_00000001;
  do {
    puVar3 = *(undefined8 **)param_1;
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    puStackX_10 = puVar6;
    bVar5 = TClosableMpscQueue<void_*>::Enqueue<void_*>
                      ((TClosableMpscQueue<void_*> *)*puVar3,&puStackX_10);
    if (!bVar5) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6983228227539960770>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                         ,0x3c2,"Queue.load(std::memory_order_relaxed)->Enqueue(MoveTemp(Value))");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubscribingThreadsNum.fetch_sub(1, std::memory_order_release) >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                         ,0x3c4,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar7 = lVar7 + (longlong)puVar6;
    puVar6 = puVar6 + 1;
  } while (puVar6 != (undefined1 *)0x2711);
  if (lVar7 != 0x2fb0408) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Total == Num * (Num + 1) / 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x400,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// Call @ 141b39360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConsumeAllMpmcQueueTests::TestPerf<10000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTMpscQueue<void_*>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = 0;
  lVar9 = 1;
  do {
    puVar4 = *(undefined8 **)param_1;
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    puVar5 = (undefined8 *)*puVar4;
    puVar8 = FMemory::Malloc(0x10,8);
    *puVar8 = 0;
    puVar8[1] = lVar9;
    LOCK();
    puVar3 = (undefined8 *)*puVar5;
    *puVar5 = puVar8;
    UNLOCK();
    *puVar3 = puVar8;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubscribingThreadsNum.fetch_sub(1, std::memory_order_release) >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                         ,0x362,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar10 = lVar10 + lVar9;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x2711);
  if (lVar10 != 0x2fb0408) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Total == Num * (Num + 1) / 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x400,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// Call @ 141b39370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ConsumeAllMpmcQueueTests::TestPerf<10000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTQueue<void_*>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = 1;
  lVar10 = 0;
  do {
    puVar4 = *(undefined8 **)param_1;
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    puVar5 = (undefined8 *)*puVar4;
    puVar8 = ::operator_new(0x10);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      puVar8[1] = lVar9;
      if (((ulonglong)puVar5 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      puVar3 = (undefined8 *)*puVar5;
      *puVar5 = puVar8;
      UNLOCK();
      if (((ulonglong)puVar3 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      *puVar3 = puVar8;
      UNLOCK();
    }
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubscribingThreadsNum.fetch_sub(1, std::memory_order_release) >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                         ,0x333,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar10 = lVar10 + lVar9;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x2711);
  if (lVar10 != 0x2fb0408) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Total == Num * (Num + 1) / 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x400,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// Call @ 141b39380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ClosableMpscQueueTests::TestPerf<5000000,UE::ClosableMpscQueueTests::TClosableLockFreePointerListUnorderedSingleConsumer_Adapter<void>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar1 = **(uint **)((longlong)param_1 + 8);
  while (uVar1 != 5000000) {
    plVar2 = *(longlong **)param_1;
    uVar5 = 0;
    if ((int)uVar1 < (int)plVar2[1]) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = TClosableLockFreePointerListUnorderedSingleConsumer<void,0>::PushIfNotClosed
                      ((TClosableLockFreePointerListUnorderedSingleConsumer<void,0> *)
                       (*plVar2 + (longlong)(int)uVar1 * 8),(void *)((longlong)iVar6 + 1));
    if (!bVar4) break;
    iVar6 = iVar6 + 1;
    uVar1 = **(uint **)((longlong)param_1 + 8);
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  plVar2 = *(longlong **)((longlong)param_1 + 0x10);
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(int *)(*plVar2 + (longlong)(int)uVar1 * 4) = iVar6;
  return;
}

// Call @ 141b39390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ClosableMpscQueueTests::TestPerf<5000000,TClosableMpscQueue<void_*>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  uVar1 = **(uint **)((longlong)param_1 + 8);
  puVar7 = (undefined8 *)0x0;
  uVar11 = 0;
  while (uVar1 != 5000000) {
    uVar11 = (uint)puVar7;
    plVar2 = *(longlong **)param_1;
    uVar6 = 0;
    if ((int)uVar1 < (int)plVar2[1]) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *plVar2;
    puVar10 = *(undefined8 **)(lVar3 + 0x10 + (longlong)(int)uVar1 * 0x18);
    if (puVar10 == (undefined8 *)0x0) break;
    puVar7 = ::operator_new(0x10);
    puVar9 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar9 = puVar7;
    }
    puVar9[1] = (longlong)(int)uVar11 + 1;
    while( true ) {
      puVar7 = (undefined8 *)(lVar3 + (longlong)(int)uVar1 * 0x18 + 0x10);
      LOCK();
      puVar8 = (undefined8 *)*puVar7;
      bVar5 = puVar10 == puVar8;
      if (bVar5) {
        *puVar7 = puVar9;
        puVar8 = puVar10;
      }
      UNLOCK();
      if (bVar5) break;
      puVar10 = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        ::operator_delete(puVar9,0x10);
        goto LAB_141b2ee21;
      }
    }
    uVar11 = uVar11 + 1;
    puVar7 = (undefined8 *)(ulonglong)uVar11;
    *puVar10 = puVar9;
    uVar1 = **(uint **)((longlong)param_1 + 8);
  }
LAB_141b2ee21:
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  plVar2 = *(longlong **)((longlong)param_1 + 0x10);
  uVar6 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(*plVar2 + (longlong)(int)uVar1 * 4) = uVar11;
  return;
}

// Call @ 141b393a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ClosableMpscQueueTests::TestPerf<5000000,UE::ClosableMpscQueueTests::TClosableMpscQueueOnTMpscQueue<void_*>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  uVar6 = **(uint **)((longlong)param_1 + 8);
  uVar12 = 0;
  while (uVar6 != 5000000) {
    plVar7 = *(longlong **)param_1;
    uVar10 = 0;
    if ((int)uVar6 < (int)plVar7[1]) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar2 = (undefined8 *)(*plVar7 + (longlong)(int)uVar6 * 0x18);
    LOCK();
    *(int *)((longlong)puVar2 + 0x14) = *(int *)((longlong)puVar2 + 0x14) + 1;
    UNLOCK();
    cVar5 = *(char *)(puVar2 + 2);
    if (cVar5 == '\0') {
      puVar11 = FMemory::Malloc(0x10,8);
      puVar11[1] = (longlong)(int)uVar12 + 1;
      *puVar11 = 0;
      LOCK();
      puVar4 = (undefined8 *)*puVar2;
      *puVar2 = puVar11;
      UNLOCK();
      *puVar4 = puVar11;
    }
    LOCK();
    piVar1 = (int *)((longlong)puVar2 + 0x14);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SubscribingThreadsNum.fetch_sub(1, std::memory_order_release) >= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                           ,0x22b,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (cVar5 != '\0') break;
    uVar12 = uVar12 + 1;
    uVar6 = **(uint **)((longlong)param_1 + 8);
  }
  uVar6 = *(uint *)((longlong)param_1 + 0x18);
  plVar7 = *(longlong **)((longlong)param_1 + 0x10);
  uVar10 = 0;
  if ((int)uVar6 < (int)plVar7[1]) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(uint *)(*plVar7 + (longlong)(int)uVar6 * 4) = uVar12;
  return;
}

// Call @ 141b393b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ClosableMpscQueueTests::TestPerf<5000000,UE::ClosableMpscQueueTests::TClosableMpscQueueOnTQueue<void_*>_>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  uVar4 = **(uint **)((longlong)param_1 + 8);
  uVar11 = 0;
  while (uVar4 != 5000000) {
    plVar5 = *(longlong **)param_1;
    uVar9 = 0;
    if ((int)uVar4 < (int)plVar5[1]) {
      uVar9 = ~uVar4 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar12 = (undefined8 *)((longlong)(int)uVar4 * 0x20 + *plVar5);
    bVar7 = false;
    LOCK();
    *(int *)((longlong)puVar12 + 0x14) = *(int *)((longlong)puVar12 + 0x14) + 1;
    UNLOCK();
    if (*(char *)(puVar12 + 2) == '\0') {
      puVar10 = ::operator_new(0x10);
      if (puVar10 == (undefined8 *)0x0) {
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6983228227539960311>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                           ,0x1f7,"Queue.Enqueue(MoveTemp(Value))");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        *puVar10 = 0;
        puVar10[1] = (longlong)(int)uVar11 + 1;
        if (((ulonglong)puVar12 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        puVar3 = (undefined8 *)*puVar12;
        *puVar12 = puVar10;
        UNLOCK();
        if (((ulonglong)puVar3 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        *puVar3 = puVar10;
        UNLOCK();
      }
      bVar7 = true;
    }
    LOCK();
    piVar1 = (int *)((longlong)puVar12 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SubscribingThreadsNum.fetch_sub(1, std::memory_order_release) >= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                           ,0x1fb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (!bVar7) break;
    uVar11 = uVar11 + 1;
    uVar4 = **(uint **)((longlong)param_1 + 8);
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x18);
  plVar5 = *(longlong **)((longlong)param_1 + 0x10);
  uVar9 = 0;
  if ((int)uVar4 < (int)plVar5[1]) {
    uVar9 = ~uVar4 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(uint *)(*plVar5 + (longlong)(int)uVar4 * 4) = uVar11;
  return;
}

// Call @ 141b393c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::TestPerfBatch<100000,100>'::__l4::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<unsigned_int> *paVar1;
  longlong *plVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *pFVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  FTaskBase *this;
  uint uVar9;
  uint uVar11;
  longlong lVar12;
  EExtendedTaskPriority aEStackX_10 [8];
  ETaskPriority aEStackX_18 [16];
  longlong alStack_78 [2];
  code *pcStack_68;
  undefined **ppuStack_58;
  code *pcStack_50;
  FPipe *pFStack_48;
  undefined ***pppuStack_40;
  FTaskBase *pFVar10;
  
  pFVar10 = (FTaskBase *)0x0;
  do {
    pppuStack_40 = (undefined ***)0x0;
    ppuStack_58 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
    pcStack_50 = ``TaskGraphTests::TestPerfBatch<100000,100>'::__l4::<lambda_1>::operator()'::__l5::
                 <lambda_1>::<lambda_invoker_cdecl>;
    pcStack_68 = TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    pFVar6 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    this = (FTaskBase *)0x0;
    if (pFVar6 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar6,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar6->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
      this = pFVar6;
    }
    this[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    this[1]._padding_ = (longlong)pcStack_68;
    *(undefined ****)&this[1].StateChangeEvent = pppuStack_40;
    pppuStack_40 = (undefined ***)0x0;
    this[1]._padding_ = (longlong)ppuStack_58;
    *(code **)&this[1].RefCount = pcStack_50;
    this[1].Pipe = pFStack_48;
    if (this[1]._padding_ != 0) {
      pcStack_68 = (code *)0x0;
    }
    this[1].ExecutingThreadId = (atomic<unsigned_int>)0xff;
    Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,aEStackX_18,aEStackX_10);
    FBaseGraphTask::Init((FBaseGraphTask *)this,L"GraphTask",aEStackX_18[0],aEStackX_10[0],None);
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
    Tasks::Private::FTaskBase::TryLaunch(this,0x130);
    if (pcStack_68 != (code *)0x0) {
      pppuVar8 = &ppuStack_58;
      if (pppuStack_40 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_40;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    lVar12 = *(longlong *)param_1;
    uVar11 = *(int *)((longlong)param_1 + 8) * 100 + (int)pFVar10;
    uVar9 = 0;
    if ((int)uVar11 < *(int *)(lVar12 + 0x28)) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)(lVar12 + 0x20) != 0) {
      lVar12 = *(longlong *)(lVar12 + 0x20);
    }
    plVar2 = (longlong *)(lVar12 + (longlong)(int)uVar11 * 8);
    if (plVar2 == alStack_78) {
      LOCK();
      paVar1 = &this->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        puVar7 = (undefined8 *)this->_padding_;
LAB_141b2f426:
        (*(code *)*puVar7)(this,1);
      }
    }
    else {
      pFVar6 = (FTaskBase *)*plVar2;
      *plVar2 = (longlong)this;
      if (pFVar6 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar6->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          puVar7 = (undefined8 *)pFVar6->_padding_;
          this = pFVar6;
          goto LAB_141b2f426;
        }
      }
    }
    uVar9 = (int)pFVar10 + 1;
    pFVar10 = (FTaskBase *)(ulonglong)uVar9;
    if (99 < (int)uVar9) {
      return;
    }
  } while( true );
}

// Call @ 141b393d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::SemaphoreTests::TestSemaphoreWakeUpPerf<5,100000,1>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  char cVar1;
  
  cVar1 = **(char **)((longlong)param_1 + 0x18);
  while (cVar1 == '\0') {
    WaitForSingleObject((HANDLE)**(undefined8 **)param_1,0xffffffff);
    LOCK();
    **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + -1;
    UNLOCK();
    do {
    } while (**(int **)((longlong)param_1 + 8) != 0);
    LOCK();
    **(int **)((longlong)param_1 + 0x10) = **(int **)((longlong)param_1 + 0x10) + -1;
    UNLOCK();
    cVar1 = **(char **)((longlong)param_1 + 0x18);
  }
  return;
}

// Call @ 141b39430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::SemaphoreTests::TestSemaphoreWakeUpPerf<5,100000,0>'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  char cVar1;
  
  cVar1 = **(char **)((longlong)param_1 + 0x18);
  while (cVar1 == '\0') {
    WaitForSingleObject((HANDLE)**(undefined8 **)param_1,0xffffffff);
    LOCK();
    **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + -1;
    UNLOCK();
    do {
    } while (**(int **)((longlong)param_1 + 8) != 0);
    LOCK();
    **(int **)((longlong)param_1 + 0x10) = **(int **)((longlong)param_1 + 0x10) + -1;
    UNLOCK();
    cVar1 = **(char **)((longlong)param_1 + 0x18);
  }
  return;
}

// Call @ 141b39490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::TestWorkStealing<100,1000>'::__l4::<lambda_1>,void>::Call
          (void *param_1)

{
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTaskBase *this;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  undefined ***pppuVar6;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  longlong lVar8;
  EExtendedTaskPriority aEStackX_10 [8];
  ETaskPriority aEStackX_18 [16];
  FTaskBase *apFStack_78 [2];
  code *pcStack_68;
  undefined **ppuStack_58;
  code *pcStack_50;
  FPipe *pFStack_48;
  undefined ***pppuStack_40;
  
  lVar8 = 1000;
  do {
    pcStack_50 = ``TaskGraphTests::TestWorkStealing<100,1000>'::__l4::<lambda_1>::operator()'::__l5
                 ::<lambda_1>::<lambda_invoker_cdecl>;
    pcStack_68 = TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    pppuStack_40 = (undefined ***)0x0;
    ppuStack_58 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
            ((longlong)*(int *)((longlong)param_1 + 8) * 0x30 + *(longlong *)param_1);
    this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    this_00 = (FTaskBase *)0x0;
    if (this != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      this->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
      this_00 = this;
    }
    this_00[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    this_00[1]._padding_ = (longlong)pcStack_68;
    *(undefined ****)&this_00[1].StateChangeEvent = pppuStack_40;
    pppuStack_40 = (undefined ***)0x0;
    this_00[1]._padding_ = (longlong)ppuStack_58;
    *(code **)&this_00[1].RefCount = pcStack_50;
    this_00[1].Pipe = pFStack_48;
    if (this_00[1]._padding_ != 0) {
      pcStack_68 = (code *)0x0;
    }
    this_00[1].ExecutingThreadId = (atomic<unsigned_int>)0xff;
    Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,aEStackX_18,aEStackX_10);
    FBaseGraphTask::Init((FBaseGraphTask *)this_00,L"GraphTask",aEStackX_18[0],aEStackX_10[0],None);
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    apFStack_78[0] = this_00;
    Tasks::Private::FTaskBase::TryLaunch(this_00,0x130);
    if (pcStack_68 != (code *)0x0) {
      pppuVar6 = &ppuStack_58;
      if (pppuStack_40 != (undefined ***)0x0) {
        pppuVar6 = pppuStack_40;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    FVar1 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar7 + 0x20);
    FVar5 = FVar7;
    if (FVar1 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= apFStack_78) {
      FVar5 = FVar7;
      if (FVar1 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar5 = FVar1;
      }
      if ((apFStack_78 <
           (FTaskBase **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar7 + 0x2c) * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)((longlong)FVar7 + 0x28);
    if (iVar4 == *(int *)((longlong)FVar7 + 0x2c)) {
      iVar4 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar7,
                         (int *)((longlong)FVar7 + 0x2c));
    }
    *(int *)((longlong)FVar7 + 0x28) = iVar4 + 1;
    if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar7 + 0x20) !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar7 + 0x20);
    }
    *(undefined8 *)((longlong)FVar7 + (longlong)iVar4 * 8) = 0;
    *(FTaskBase **)((longlong)FVar7 + (longlong)iVar4 * 8) = apFStack_78[0];
    apFStack_78[0] = (FTaskBase *)0x0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

// Call @ 141b394a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``OldTaskGraphTests::TestLowToHighPri'::__l2::<lambda_2>::operator()'::__l4::<lambda_1>,void>
::Call(void *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  FGenericPlatformMisc::LowLevelOutputDebugStringf(L"Latency %6.2fus\r\n");
  return;
}

// Call @ 141b39510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``OldTaskGraphTests::TestLockFree'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)param_1;
  puVar1 = *(undefined8 **)((longlong)param_1 + 8);
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,local_res8);
  return;
}

// Call @ 141b39560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ClosableMpscQueueTests::TestCorrectness<20,UE::ClosableMpscQueueTests::TClosableLockFreePointerListUnorderedSingleConsumer_Adapter<void>_>'::__l6::<lambda_1>,void>
::Call(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)0x0;
  do {
    pvVar2 = pvVar3;
    pvVar3 = (void *)((longlong)pvVar2 + 1);
    bVar1 = TClosableLockFreePointerListUnorderedSingleConsumer<void,0>::PushIfNotClosed
                      (*(TClosableLockFreePointerListUnorderedSingleConsumer<void,0> **)param_1,
                       pvVar3);
  } while (bVar1);
  **(longlong **)((longlong)param_1 + 8) = (longlong)pvVar2;
  return;
}

// Call @ 141b395b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ClosableMpscQueueTests::TestCorrectness<20,TClosableMpscQueue<void_*>_>'::__l6::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  puVar6 = (undefined8 *)0x0;
  do {
    lVar1 = *(longlong *)param_1;
    puVar5 = *(undefined8 **)(lVar1 + 0x10);
    if (puVar5 == (undefined8 *)0x0) {
LAB_141b2fb9f:
      **(undefined8 **)((longlong)param_1 + 8) = puVar6;
      return;
    }
    puVar2 = ::operator_new(0x10);
    puVar4 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar4 = puVar2;
    }
    puVar4[1] = (undefined8 *)((longlong)puVar6 + 1);
    while( true ) {
      puVar2 = (undefined8 *)(lVar1 + 0x10);
      LOCK();
      puVar3 = (undefined8 *)*puVar2;
      bVar7 = puVar5 == puVar3;
      if (bVar7) {
        *puVar2 = puVar4;
        puVar3 = puVar5;
      }
      UNLOCK();
      if (bVar7) break;
      puVar5 = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        ::operator_delete(puVar4,0x10);
        goto LAB_141b2fb9f;
      }
    }
    *puVar5 = puVar4;
    puVar6 = (undefined8 *)((longlong)puVar6 + 1);
  } while( true );
}

// Call @ 141b395c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ClosableMpscQueueTests::TestCorrectness<20,UE::ClosableMpscQueueTests::TClosableMpscQueueOnTMpscQueue<void_*>_>'::__l6::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = 0;
  do {
    lVar9 = lVar10;
    puVar5 = *(undefined8 **)param_1;
    lVar10 = lVar9 + 1;
    LOCK();
    *(int *)((longlong)puVar5 + 0x14) = *(int *)((longlong)puVar5 + 0x14) + 1;
    UNLOCK();
    cVar4 = *(char *)(puVar5 + 2);
    if (cVar4 == '\0') {
      puVar8 = FMemory::Malloc(0x10,8);
      *puVar8 = 0;
      puVar8[1] = lVar10;
      LOCK();
      puVar3 = (undefined8 *)*puVar5;
      *puVar5 = puVar8;
      UNLOCK();
      *puVar3 = puVar8;
    }
    LOCK();
    piVar1 = (int *)((longlong)puVar5 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubscribingThreadsNum.fetch_sub(1, std::memory_order_release) >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                         ,0x22b,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  } while (cVar4 == '\0');
  **(longlong **)((longlong)param_1 + 8) = lVar9;
  return;
}

// Call @ 141b395d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ClosableMpscQueueTests::TestCorrectness<20,UE::ClosableMpscQueueTests::TClosableMpscQueueOnTQueue<void_*>_>'::__l6::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = 0;
  do {
    lVar9 = lVar10;
    puVar4 = *(undefined8 **)param_1;
    lVar10 = lVar9 + 1;
    bVar6 = false;
    LOCK();
    *(int *)((longlong)puVar4 + 0x14) = *(int *)((longlong)puVar4 + 0x14) + 1;
    UNLOCK();
    if (*(char *)(puVar4 + 2) == '\0') {
      puVar8 = ::operator_new(0x10);
      if (puVar8 == (undefined8 *)0x0) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6983228227539960311>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                           ,0x1f7,"Queue.Enqueue(MoveTemp(Value))");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        *puVar8 = 0;
        puVar8[1] = lVar10;
        if (((ulonglong)puVar4 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        puVar3 = (undefined8 *)*puVar4;
        *puVar4 = puVar8;
        UNLOCK();
        if (((ulonglong)puVar3 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        *puVar3 = puVar8;
        UNLOCK();
      }
      bVar6 = true;
    }
    LOCK();
    piVar1 = (int *)((longlong)puVar4 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubscribingThreadsNum.fetch_sub(1, std::memory_order_release) >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                         ,0x1fb,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  } while (bVar6);
  **(longlong **)((longlong)param_1 + 8) = lVar9;
  return;
}

// Call @ 141b395e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::TestPerfChaining<10000>'::__l7::<lambda_1>,void>::Call
          (void *param_1)

{
  return;
}

// Call @ 141b395f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l29::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l29::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b39600

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`TaskGraphTests::Fibonacci'::__l14::<lambda_1>,void>
::Call(void *param_1)

{
  long64 lVar1;
  
  lVar1 = TaskGraphTests::Fibonacci(*(longlong *)((longlong)param_1 + 8) + -1);
  LOCK();
  **(long64 **)param_1 = lVar1;
  UNLOCK();
  return;
}

// Call @ 141b39610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TestLowToHighPri'::__l2::<lambda_2>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
                    /* WARNING: Subroutine does not return */
  `OldTaskGraphTests::TestLowToHighPri'::__l2::<lambda_2>::operator()(param_1,*param_2,param_3);
}

// Call @ 141b39630

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)*param_3 + 8);
  iVar1 = *(int *)((longlong)*param_2 + 8);
  if (iVar1 != iVar2) {
    return iVar1 + iVar2 == 1;
  }
  if (1 < iVar1) {
    iVar2 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)*param_2,*(wchar_t **)*param_3);
    return iVar2 == 0;
  }
  return true;
}

// Call @ 141b39680

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`TaskGraphTests::Fib'::__l7::<lambda_2>,void>::Call
          (void *param_1)

{
  **(longlong **)((longlong)param_1 + 0x10) =
       **(longlong **)((longlong)param_1 + 8) + **(longlong **)param_1;
  return;
}

// Call @ 141b396a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::TestPerfChaining<10000>'::__l9::<lambda_2>,void>::Call
          (void *param_1)

{
  return;
}

// Call @ 141b396b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TestLockFree'::__l47::<lambda_2>,void,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  `OldTaskGraphTests::TestLockFree'::__l47::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b396c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l11::<lambda_2>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b396d0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`TaskGraphTests::Fibonacci'::__l14::<lambda_2>,void>
::Call(void *param_1)

{
  long64 lVar1;
  
  lVar1 = TaskGraphTests::Fibonacci(*(longlong *)((longlong)param_1 + 8) + -2);
  LOCK();
  **(long64 **)param_1 = lVar1;
  UNLOCK();
  return;
}

// Call @ 141b39700

TBitArray<FDefaultBitArrayAllocator> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l3::<lambda_3>,TBitArray<FDefaultBitArrayAllocator>,TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
::Call(TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__,void *param_1,
      TBitArray<FDefaultBitArrayAllocator> *param_2,TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  <lambda_1> local_18 [16];
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->NumBits = 0;
  __return_storage_ptr__->MaxBits = 0x80;
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (param_2,param_3,__return_storage_ptr__,MinSize,local_18);
  return __return_storage_ptr__;
}

// Call @ 141b39750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_3>,void,void_*>::Call
          (void *param_1,void **param_2)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)*param_2;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Call @ 141b39770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l4::<lambda_3>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puStackX_8;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  undefined8 uStack_20;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  ppuStack_28 = &TFunction_OwnedObject<``TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::`4'::<lambda_3>::operator()'::`2'::<lambda_1>,1,0>
                 ::_vftable_;
  uStack_20 = *(undefined8 *)param_1;
  apcStack_38[0] =
       TFunctionRefCaller<``TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l4::<lambda_3>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&puStackX_8,(TStatIdData *)apcStack_38,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (puStackX_8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStackX_8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puStackX_8)(puStackX_8,1);
    }
  }
  puStackX_8 = (undefined8 *)**(longlong **)param_1;
  puVar6 = (undefined8 *)
           ((longlong)**(int **)((longlong)param_1 + 0x10) * 0x30 +
           *(longlong *)((longlong)param_1 + 8));
  if (puStackX_8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puStackX_8 + 6) = *(int *)(puStackX_8 + 6) + 1;
    UNLOCK();
  }
  CheckCallable((void *)*puVar6);
  pcVar3 = (code *)*puVar6;
  plVar5 = puVar6 + 2;
  if ((longlong *)puVar6[5] != (longlong *)0x0) {
    plVar5 = (longlong *)puVar6[5];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,&puStackX_8);
  if (puStackX_8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStackX_8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puStackX_8)(puStackX_8,1);
    }
  }
  return;
}

// Call @ 141b39780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l19::<lambda_3>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b39790

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FSharedMutexTest::TestBody'::__l30::<lambda_3>,void>::Call(void *param_1)

{
  byte bVar1;
  FSharedMutex FVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> *paVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  FAutomationTestFramework *pFVar9;
  longlong lVar10;
  FString FStack_28;
  
  paVar4 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  FVar2.State = *paVar4;
  if (FVar2.State == (atomic<unsigned_int>)0x0) {
    *paVar4 = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  if (FVar2.State != (atomic<unsigned_int>)0x0) {
    FSharedMutex::LockSlow((FSharedMutex *)paVar4);
  }
  lVar10 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)param_1 + 8) = 1;
  paVar4 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  aVar3 = *paVar4;
  *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
  UNLOCK();
  if (((uint)aVar3 & 6) != 0) {
    FSharedMutex::WakeWaitingThreads((FSharedMutex *)paVar4,(uint)aVar3);
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  lVar10 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 2);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar10 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar4 = *(atomic<unsigned_int> **)param_1;
  FVar2.State = *paVar4;
  if (((uint)FVar2.State & 3) == 0) {
    LOCK();
    aVar3 = *paVar4;
    if (FVar2.State == aVar3) {
      *paVar4 = FVar2.State + 8;
    }
    UNLOCK();
    if (FVar2.State != aVar3) goto LAB_141b31e95;
  }
  else {
LAB_141b31e95:
    FSharedMutex::LockSharedSlow((FSharedMutex *)paVar4);
  }
  if (**(int **)((longlong)param_1 + 8) != 2) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar5 = pFVar9->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&FStack_28,L"Condition failed");
    (*pcVar6)(pFVar5,&FStack_28,0);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  lVar10 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)param_1 + 8) = 3;
  paVar4 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  aVar3 = *paVar4;
  *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -8);
  UNLOCK();
  if (((uint)aVar3 & 0xfffffffb) == 10) {
    FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar4);
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  lVar10 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar4 = *(atomic<unsigned_int> **)param_1;
  FVar2.State = *paVar4;
  if (((uint)FVar2.State & 3) == 0) {
    LOCK();
    aVar3 = *paVar4;
    if (FVar2.State == aVar3) {
      *paVar4 = FVar2.State + 8;
    }
    UNLOCK();
    if (FVar2.State != aVar3) goto LAB_141b31f91;
  }
  else {
LAB_141b31f91:
    FSharedMutex::LockSharedSlow((FSharedMutex *)paVar4);
  }
  if (**(int **)((longlong)param_1 + 8) != 4) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar5 = pFVar9->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&FStack_28,L"Condition failed");
    (*pcVar6)(pFVar5,&FStack_28,0);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  paVar4 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  aVar3 = *paVar4;
  *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -8);
  UNLOCK();
  if (((uint)aVar3 & 0xfffffffb) == 10) {
    FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar4);
  }
  puVar7 = *(undefined4 **)((longlong)param_1 + 0x10);
  *puVar7 = 3;
  LOCK();
  pbVar8 = (byte *)(puVar7 + 1);
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  lVar10 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar10 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 2);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar10 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar10 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 3);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar10 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar10 = 0x4000;
  do {
    paVar4 = *(atomic<unsigned_int> **)param_1;
    FVar2.State = *paVar4;
    if (((uint)FVar2.State & 3) == 0) {
      LOCK();
      aVar3 = *paVar4;
      if (FVar2.State == aVar3) {
        *paVar4 = FVar2.State + 8;
      }
      UNLOCK();
      if (FVar2.State != aVar3) goto LAB_141b32099;
    }
    else {
LAB_141b32099:
      FSharedMutex::LockSharedSlow((FSharedMutex *)paVar4);
    }
    FWindowsPlatformProcess::YieldThread();
    paVar4 = *(atomic<unsigned_int> **)param_1;
    LOCK();
    aVar3 = *paVar4;
    *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -8);
    UNLOCK();
    if (((uint)aVar3 & 0xfffffffb) == 10) {
      FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar4);
    }
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  FManualResetEvent::Wait((FManualResetEvent *)(*(longlong *)((longlong)param_1 + 0x10) + 4));
  if (GIsBuildMachine != false) {
    return;
  }
  paVar4 = *(atomic<unsigned_int> **)param_1;
  FVar2.State = *paVar4;
  if (((uint)FVar2.State & 3) == 0) {
    LOCK();
    aVar3 = *paVar4;
    if (FVar2.State == aVar3) {
      *paVar4 = FVar2.State + 8;
    }
    UNLOCK();
    if (FVar2.State == aVar3) goto LAB_141b320f1;
  }
  FSharedMutex::LockSharedSlow((FSharedMutex *)paVar4);
LAB_141b320f1:
  **(undefined4 **)((longlong)param_1 + 8) = 5;
  lVar10 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  paVar4 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  aVar3 = *paVar4;
  *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -8);
  UNLOCK();
  if (((uint)aVar3 & 0xfffffffb) == 10) {
    FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar4);
  }
  return;
}

// Call @ 141b397a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_3>,void>::Call
          (void *param_1)

{
  byte bVar1;
  FSharedRecursiveMutex *this;
  FAutomationTestBase *pFVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  byte *pbVar6;
  FAutomationTestFramework *pFVar7;
  longlong lVar8;
  FSharedRecursiveMutexLink FStack_90;
  char cStack_80;
  FSharedRecursiveMutex *pFStack_78;
  FSharedRecursiveMutexLink FStack_70;
  char cStack_60;
  FSharedRecursiveMutex *pFStack_58;
  FSharedRecursiveMutexLink FStack_50;
  FString FStack_40;
  FString FStack_30;
  FString FStack_20;
  
  this = *(FSharedRecursiveMutex **)param_1;
  FStack_90.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  FStack_90.Next = (FSharedRecursiveMutexLink *)0x0;
  cStack_80 = '\0';
  FStack_70.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  FStack_70.Next = (FSharedRecursiveMutexLink *)0x0;
  cStack_60 = '\0';
  pFStack_78 = this;
  FSharedRecursiveMutex::Lock(this);
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 1);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)param_1 + 8) = 1;
  FSharedRecursiveMutex::Unlock(*(FSharedRecursiveMutex **)param_1);
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  if (cStack_80 != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this == (FSharedRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FSharedRecursiveMutex::LockShared(this,&FStack_90);
  cStack_80 = '\x01';
  if (**(int **)((longlong)param_1 + 8) != 2) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&FStack_40,L"Condition failed");
    (*pcVar4)(pFVar2,&FStack_40,0);
    if (FStack_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_40.Data.AllocatorInstance.Data);
    }
  }
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 1);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)param_1 + 8) = 3;
  if (cStack_60 != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xaa,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pFStack_78 == (FSharedRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xab,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cStack_60 = FSharedRecursiveMutex::TryLockShared(pFStack_78,&FStack_70);
  if (!(bool)cStack_60) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&FStack_30,L"Condition failed");
    (*pcVar4)(pFVar2,&FStack_30,0);
    if (FStack_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data.AllocatorInstance.Data);
    }
  }
  if (cStack_60 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cStack_60 = '\0';
  FSharedRecursiveMutex::UnlockShared(pFStack_78,&FStack_70);
  if (cStack_80 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cStack_80 = '\0';
  FSharedRecursiveMutex::UnlockShared(this,&FStack_90);
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 1);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  if (cStack_80 != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this == (FSharedRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FSharedRecursiveMutex::LockShared(this,&FStack_90);
  cStack_80 = '\x01';
  if (**(int **)((longlong)param_1 + 8) != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&FStack_20,L"Condition failed");
    (*pcVar4)(pFVar2,&FStack_20,0);
    if (FStack_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data.AllocatorInstance.Data);
    }
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  if (cStack_80 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cStack_80 = '\0';
  FSharedRecursiveMutex::UnlockShared(this,&FStack_90);
  puVar3 = *(undefined4 **)((longlong)param_1 + 0x10);
  *puVar3 = 3;
  LOCK();
  pbVar6 = (byte *)(puVar3 + 1);
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 1);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 3);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar8 = 0x4000;
  do {
    pFStack_58 = *(FSharedRecursiveMutex **)param_1;
    FStack_50.OwnedMutex = (FSharedRecursiveMutex *)0x0;
    FStack_50.Next = (FSharedRecursiveMutexLink *)0x0;
    FSharedRecursiveMutex::LockShared(pFStack_58,&FStack_50);
    FWindowsPlatformProcess::YieldThread();
    FSharedRecursiveMutex::UnlockShared(pFStack_58,&FStack_50);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FManualResetEvent::Wait((FManualResetEvent *)(*(longlong *)((longlong)param_1 + 0x10) + 4));
  if (GIsBuildMachine == false) {
    if (cStack_80 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (this == (FSharedRecursiveMutex *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FSharedRecursiveMutex::LockShared(this,&FStack_90);
    cStack_80 = '\x01';
    **(undefined4 **)((longlong)param_1 + 8) = 5;
    lVar8 = **(longlong **)((longlong)param_1 + 0x18);
    LOCK();
    pbVar6 = (byte *)(lVar8 + 1);
    bVar1 = *pbVar6;
    *pbVar6 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      ParkingLot::WakeAll((void *)(lVar8 + 1));
    }
    FWindowsPlatformProcess::YieldThread();
    FManualResetEvent::Wait
              ((FManualResetEvent *)
               ((longlong)*(int *)((longlong)param_1 + 0x28) +
               *(longlong *)((longlong)param_1 + 0x20)));
    pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                     *(longlong *)((longlong)param_1 + 0x20));
    LOCK();
    *pbVar6 = *pbVar6 & 0xfe;
    UNLOCK();
    if (cStack_60 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pFStack_78 == (FSharedRecursiveMutex *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FSharedRecursiveMutex::LockShared(pFStack_78,&FStack_70);
    cStack_60 = '\x01';
    if (cStack_80 == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xba,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    cStack_80 = '\0';
    FSharedRecursiveMutex::UnlockShared(this,&FStack_90);
    if (cStack_60 == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xba,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    cStack_60 = '\0';
    FSharedRecursiveMutex::UnlockShared(pFStack_78,&FStack_70);
  }
  if (cStack_60 != '\0') {
    FSharedRecursiveMutex::UnlockShared(pFStack_78,&FStack_70);
  }
  if (cStack_80 != '\0') {
    FSharedRecursiveMutex::UnlockShared(this,&FStack_90);
  }
  return;
}

// Call @ 141b397b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l35::<lambda_3>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l35::<lambda_3>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 141b397c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TestLockFree'::__l120::<lambda_3>,void,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  `OldTaskGraphTests::TestLockFree'::__l120::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b397d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l14::<lambda_3>,void>::
Call(void *param_1)

{
  FTaskBase *this;
  
  this = (FTaskBase *)**(undefined8 **)param_1;
  if (this->ExtendedPriority == TaskEvent) {
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(this,0);
  return;
}

// Call @ 141b397f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l3::<lambda_4>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
::Call(void *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2,
      TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  <lambda_1> local_res20 [8];
  
  BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseAND<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (param_3,param_2,MinSize,local_res20);
  return;
}

// Call @ 141b39810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l7::<lambda_4>,void,void_*>::Call
          (void *param_1,void **param_2)

{
  ::FString::FString(*param_2,*(FString **)param_1);
  return;
}

// Call @ 141b39830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l17::<lambda_4>,void>::
Call(void *param_1)

{
  FTaskBase *this;
  
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  this = (FTaskBase *)**(undefined8 **)param_1;
  if (this->ExtendedPriority == TaskEvent) {
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(this,0);
  return;
}

// Call @ 141b39870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l27::<lambda_4>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b39880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FSharedMutexTest::TestBody'::__l30::<lambda_4>,void>::Call(void *param_1)

{
  byte bVar1;
  FSharedMutex FVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  atomic<unsigned_int> *paVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  int *piVar8;
  byte *pbVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  FString FStack_28;
  
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 2);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar11 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  FVar2.State = *paVar5;
  if (FVar2.State == (atomic<unsigned_int>)0x0) {
    *paVar5 = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  if (FVar2.State != (atomic<unsigned_int>)0x0) {
    FSharedMutex::LockSlow((FSharedMutex *)paVar5);
  }
  if (**(int **)((longlong)param_1 + 8) != 1) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&FStack_28,L"Condition failed");
    (*pcVar7)(pFVar6,&FStack_28,0);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  pbVar9 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)param_1 + 8) = 2;
  paVar5 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  aVar3 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -1);
  UNLOCK();
  if (((uint)aVar3 & 6) != 0) {
    FSharedMutex::WakeWaitingThreads((FSharedMutex *)paVar5,(uint)aVar3);
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 2);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar11 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  FVar2.State = *paVar5;
  if (FVar2.State == (atomic<unsigned_int>)0x0) {
    *paVar5 = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  if (FVar2.State != (atomic<unsigned_int>)0x0) {
    FSharedMutex::LockSlow((FSharedMutex *)paVar5);
  }
  if (**(int **)((longlong)param_1 + 8) != 3) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&FStack_28,L"Condition failed");
    (*pcVar7)(pFVar6,&FStack_28,0);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  lVar11 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 2);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar11 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)param_1 + 8) = 4;
  paVar5 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  aVar3 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -1);
  UNLOCK();
  if (((uint)aVar3 & 6) != 0) {
    FSharedMutex::WakeWaitingThreads((FSharedMutex *)paVar5,(uint)aVar3);
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = 0x4000;
  do {
    paVar5 = *(atomic<unsigned_int> **)param_1;
    FVar2.State = *paVar5;
    if (((uint)FVar2.State & 3) == 0) {
      LOCK();
      aVar3 = *paVar5;
      if (FVar2.State == aVar3) {
        *paVar5 = FVar2.State + 8;
      }
      UNLOCK();
      if (FVar2.State != aVar3) goto LAB_141b33a72;
    }
    else {
LAB_141b33a72:
      FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
    }
    FWindowsPlatformProcess::YieldThread();
    paVar5 = *(atomic<unsigned_int> **)param_1;
    LOCK();
    aVar3 = *paVar5;
    *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
    UNLOCK();
    if (((uint)aVar3 & 0xfffffffb) == 10) {
      FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
    }
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      piVar8 = *(int **)((longlong)param_1 + 0x10);
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pbVar9 = (byte *)(piVar8 + 1);
        LOCK();
        bVar1 = *pbVar9;
        *pbVar9 = 1;
        UNLOCK();
        if ((bVar1 & 3) == 2) {
          ParkingLot::WakeAll(pbVar9);
        }
      }
      if (GIsBuildMachine == false) {
        FManualResetEvent::Wait
                  ((FManualResetEvent *)
                   ((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20)));
        pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                         *(longlong *)((longlong)param_1 + 0x20));
        LOCK();
        *pbVar9 = *pbVar9 & 0xfe;
        UNLOCK();
        lVar11 = **(longlong **)((longlong)param_1 + 0x18);
        LOCK();
        pbVar9 = (byte *)(lVar11 + 2);
        bVar1 = *pbVar9;
        *pbVar9 = 1;
        UNLOCK();
        if ((bVar1 & 3) == 2) {
          ParkingLot::WakeAll((void *)(lVar11 + 2));
        }
        FWindowsPlatformProcess::YieldThread();
        paVar5 = *(atomic<unsigned_int> **)param_1;
        LOCK();
        FVar2.State = *paVar5;
        if (FVar2.State == (atomic<unsigned_int>)0x0) {
          *paVar5 = (atomic<unsigned_int>)0x1;
        }
        UNLOCK();
        if (FVar2.State != (atomic<unsigned_int>)0x0) {
          FSharedMutex::LockSlow((FSharedMutex *)paVar5);
        }
        if (**(int **)((longlong)param_1 + 8) != 5) {
          pFVar10 = FAutomationTestFramework::Get();
          pFVar6 = pFVar10->CurrentTest;
          pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
          ::FString::FString(&FStack_28,L"Condition failed");
          (*pcVar7)(pFVar6,&FStack_28,0);
          if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
          }
        }
        **(undefined4 **)((longlong)param_1 + 8) = 6;
        paVar5 = *(atomic<unsigned_int> **)param_1;
        LOCK();
        aVar3 = *paVar5;
        *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -1);
        UNLOCK();
        if (((uint)aVar3 & 6) != 0) {
          FSharedMutex::WakeWaitingThreads((FSharedMutex *)paVar5,(uint)aVar3);
        }
      }
      return;
    }
  } while( true );
}

// Call @ 141b39890

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_4>,void>::Call
          (void *param_1)

{
  byte bVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  int *piVar5;
  byte *pbVar6;
  FAutomationTestFramework *pFVar7;
  longlong lVar8;
  undefined1 auStack_28 [8];
  FSharedRecursiveMutexLink FStack_20;
  
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  FSharedRecursiveMutex::Lock(*(FSharedRecursiveMutex **)param_1);
  if (**(int **)((longlong)param_1 + 8) != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)auStack_28,L"Condition failed");
    (*pcVar4)(pFVar3,auStack_28,0);
    if (auStack_28 != (undefined1  [8])0x0) {
      FMemory::Free((void *)auStack_28);
    }
  }
  pbVar6 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar6);
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)param_1 + 8) = 2;
  FSharedRecursiveMutex::Unlock(*(FSharedRecursiveMutex **)param_1);
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  FSharedRecursiveMutex::Lock(*(FSharedRecursiveMutex **)param_1);
  if (**(int **)((longlong)param_1 + 8) != 3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)auStack_28,L"Condition failed");
    (*pcVar4)(pFVar3,auStack_28,0);
    if (auStack_28 != (undefined1  [8])0x0) {
      FMemory::Free((void *)auStack_28);
    }
  }
  lVar8 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)param_1 + 8) = 4;
  FSharedRecursiveMutex::Unlock(*(FSharedRecursiveMutex **)param_1);
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = 0x4000;
  do {
    auStack_28 = *(undefined1 (*) [8])param_1;
    FStack_20.OwnedMutex = (FSharedRecursiveMutex *)0x0;
    FStack_20.Next = (FSharedRecursiveMutexLink *)0x0;
    FSharedRecursiveMutex::LockShared((FSharedRecursiveMutex *)auStack_28,&FStack_20);
    FWindowsPlatformProcess::YieldThread();
    FSharedRecursiveMutex::UnlockShared((FSharedRecursiveMutex *)auStack_28,&FStack_20);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  piVar5 = *(int **)((longlong)param_1 + 0x10);
  LOCK();
  iVar2 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    pbVar6 = (byte *)(piVar5 + 1);
    LOCK();
    bVar1 = *pbVar6;
    *pbVar6 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      ParkingLot::WakeAll(pbVar6);
    }
  }
  if (GIsBuildMachine == false) {
    FManualResetEvent::Wait
              ((FManualResetEvent *)
               ((longlong)*(int *)((longlong)param_1 + 0x28) +
               *(longlong *)((longlong)param_1 + 0x20)));
    pbVar6 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                     *(longlong *)((longlong)param_1 + 0x20));
    LOCK();
    *pbVar6 = *pbVar6 & 0xfe;
    UNLOCK();
    lVar8 = **(longlong **)((longlong)param_1 + 0x18);
    LOCK();
    pbVar6 = (byte *)(lVar8 + 2);
    bVar1 = *pbVar6;
    *pbVar6 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      ParkingLot::WakeAll((void *)(lVar8 + 2));
    }
    FWindowsPlatformProcess::YieldThread();
    FSharedRecursiveMutex::Lock(*(FSharedRecursiveMutex **)param_1);
    if (**(int **)((longlong)param_1 + 8) != 5) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar3 = pFVar7->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)auStack_28,L"Condition failed");
      (*pcVar4)(pFVar3,auStack_28,0);
      if (auStack_28 != (undefined1  [8])0x0) {
        FMemory::Free((void *)auStack_28);
      }
    }
    **(undefined4 **)((longlong)param_1 + 8) = 6;
    FSharedRecursiveMutex::Unlock(*(FSharedRecursiveMutex **)param_1);
  }
  return;
}

// Call @ 141b398a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l36::<lambda_4>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l36::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b398b0

TBitArray<FDefaultBitArrayAllocator> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l4::<lambda_5>,TBitArray<FDefaultBitArrayAllocator>,TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
::Call(TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__,void *param_1,
      TBitArray<FDefaultBitArrayAllocator> *param_2,TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  <lambda_1> local_18 [16];
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->NumBits = 0;
  __return_storage_ptr__->MaxBits = 0x80;
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (param_2,param_3,__return_storage_ptr__,MaxSize,local_18);
  return __return_storage_ptr__;
}

// Call @ 141b39900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l25::<lambda_5>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  `TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l25::<lambda_5>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 141b39910

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_5>,unsigned_int,void_const_*>::
Call(void *param_1,void **param_2)

{
  return *(uint *)*param_2;
}

// Call @ 141b39920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FSharedMutexTest::TestBody'::__l30::<lambda_5>,void>::Call(void *param_1)

{
  byte bVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FSharedMutex FVar4;
  atomic<unsigned_int> *paVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  int *piVar8;
  byte *pbVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  FString FStack_28;
  
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  pbVar9 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 1);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar11 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  pbVar9 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 3);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar11 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)param_1;
  FVar4.State = *paVar5;
  if (((uint)FVar4.State & 3) == 0) {
    LOCK();
    aVar2 = *paVar5;
    if (FVar4.State == aVar2) {
      *paVar5 = FVar4.State + 8;
    }
    UNLOCK();
    if (FVar4.State != aVar2) goto LAB_141b34345;
  }
  else {
LAB_141b34345:
    FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
  }
  if (**(int **)((longlong)param_1 + 8) != 4) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&FStack_28,L"Condition failed");
    (*pcVar7)(pFVar6,&FStack_28,0);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  lVar11 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 3);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar11 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  aVar2 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
  UNLOCK();
  if (((uint)aVar2 & 0xfffffffb) == 10) {
    FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = 0x4000;
  do {
    paVar5 = *(atomic<unsigned_int> **)param_1;
    FVar4.State = *paVar5;
    if (((uint)FVar4.State & 3) == 0) {
      LOCK();
      aVar2 = *paVar5;
      if (FVar4.State == aVar2) {
        *paVar5 = FVar4.State + 8;
      }
      UNLOCK();
      if (FVar4.State != aVar2) goto LAB_141b34404;
    }
    else {
LAB_141b34404:
      FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
    }
    FWindowsPlatformProcess::YieldThread();
    paVar5 = *(atomic<unsigned_int> **)param_1;
    LOCK();
    aVar2 = *paVar5;
    *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
    UNLOCK();
    if (((uint)aVar2 & 0xfffffffb) == 10) {
      FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
    }
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  piVar8 = *(int **)((longlong)param_1 + 0x10);
  LOCK();
  iVar3 = *piVar8;
  *piVar8 = *piVar8 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    pbVar9 = (byte *)(piVar8 + 1);
    LOCK();
    bVar1 = *pbVar9;
    *pbVar9 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      ParkingLot::WakeAll(pbVar9);
    }
  }
  if (GIsBuildMachine != false) {
    return;
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  FWindowsPlatformProcess::Sleep(__real_3a83126f);
  pbVar9 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)param_1;
  FVar4.State = *paVar5;
  if (((uint)FVar4.State & 3) == 0) {
    LOCK();
    aVar2 = *paVar5;
    if (FVar4.State == aVar2) {
      *paVar5 = FVar4.State + 8;
    }
    UNLOCK();
    if (FVar4.State == aVar2) goto LAB_141b344b7;
  }
  FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
LAB_141b344b7:
  if (**(int **)((longlong)param_1 + 8) != 6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&FStack_28,L"Condition failed");
    (*pcVar7)(pFVar6,&FStack_28,0);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  paVar5 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  aVar2 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
  UNLOCK();
  if (((uint)aVar2 & 0xfffffffb) == 10) {
    FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
  }
  return;
}

// Call @ 141b39930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_5>,void>::Call
          (void *param_1)

{
  byte bVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  FAutomationTestFramework *pFVar8;
  longlong lVar9;
  FString FStack_68;
  FString FStack_58;
  FSharedRecursiveMutex *pFStack_48;
  FSharedRecursiveMutexLink FStack_40;
  FSharedRecursiveMutex *pFStack_30;
  FSharedRecursiveMutexLink FStack_28;
  char cStack_18;
  
  pFStack_30 = *(FSharedRecursiveMutex **)param_1;
  FStack_28.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  FStack_28.Next = (FSharedRecursiveMutexLink *)0x0;
  cStack_18 = '\0';
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  pbVar7 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar7);
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  lVar9 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar7 = (byte *)(lVar9 + 1);
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar9 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  pbVar7 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar7);
  }
  FWindowsPlatformProcess::YieldThread();
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  lVar9 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar7 = (byte *)(lVar9 + 3);
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar9 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  if (cStack_18 != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pFStack_30 == (FSharedRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FSharedRecursiveMutex::LockShared(pFStack_30,&FStack_28);
  cStack_18 = '\x01';
  if (**(int **)((longlong)param_1 + 8) != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar5 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_68,L"Condition failed");
    (*pcVar5)(pFVar3,&FStack_68,0);
    if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
    }
  }
  lVar9 = **(longlong **)((longlong)param_1 + 0x18);
  LOCK();
  pbVar7 = (byte *)(lVar9 + 3);
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll((void *)(lVar9 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  if (cStack_18 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  cStack_18 = '\0';
  FSharedRecursiveMutex::UnlockShared(pFStack_30,&FStack_28);
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  lVar9 = 0x4000;
  do {
    pFStack_48 = *(FSharedRecursiveMutex **)param_1;
    FStack_40.OwnedMutex = (FSharedRecursiveMutex *)0x0;
    FStack_40.Next = (FSharedRecursiveMutexLink *)0x0;
    FSharedRecursiveMutex::LockShared(pFStack_48,&FStack_40);
    FWindowsPlatformProcess::YieldThread();
    FSharedRecursiveMutex::UnlockShared(pFStack_48,&FStack_40);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  piVar4 = *(int **)((longlong)param_1 + 0x10);
  LOCK();
  iVar2 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    pbVar7 = (byte *)(piVar4 + 1);
    LOCK();
    bVar1 = *pbVar7;
    *pbVar7 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      ParkingLot::WakeAll(pbVar7);
    }
  }
  if (GIsBuildMachine == false) {
    FManualResetEvent::Wait
              ((FManualResetEvent *)
               ((longlong)*(int *)((longlong)param_1 + 0x28) +
               *(longlong *)((longlong)param_1 + 0x20)));
    pbVar7 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                     *(longlong *)((longlong)param_1 + 0x20));
    LOCK();
    *pbVar7 = *pbVar7 & 0xfe;
    UNLOCK();
    FWindowsPlatformProcess::Sleep(__real_3a83126f);
    pbVar7 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
    LOCK();
    bVar1 = *pbVar7;
    *pbVar7 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      ParkingLot::WakeAll(pbVar7);
    }
    FWindowsPlatformProcess::YieldThread();
    if (cStack_18 != '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb2,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (pFStack_30 == (FSharedRecursiveMutex *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FSharedRecursiveMutex::LockShared(pFStack_30,&FStack_28);
    cStack_18 = '\x01';
    if (**(int **)((longlong)param_1 + 8) != 6) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar5 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&FStack_58,L"Condition failed");
      (*pcVar5)(pFVar3,&FStack_58,0);
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      if (cStack_18 == '\0') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bLocked",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                           ,0xba,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    cStack_18 = '\0';
    FSharedRecursiveMutex::UnlockShared(pFStack_30,&FStack_28);
  }
  if (cStack_18 != '\0') {
    FSharedRecursiveMutex::UnlockShared(pFStack_30,&FStack_28);
  }
  return;
}

// Call @ 141b39940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l35::<lambda_5>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b39950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l37::<lambda_5>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l37::<lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b39960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l4::<lambda_6>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
::Call(void *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2,
      TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  <lambda_1> local_res20 [8];
  
  BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseAND<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (param_3,param_2,MaxSize,local_res20);
  return;
}

// Call @ 141b39980

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_6>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  return *(int *)*param_2 == *(int *)*param_3;
}

// Call @ 141b399a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FSharedMutexTest::TestBody'::__l30::<lambda_6>,void>::Call(void *param_1)

{
  byte bVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FSharedMutex FVar4;
  atomic<unsigned_int> *paVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  int *piVar8;
  byte *pbVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  FString FStack_18;
  
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  pbVar9 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)param_1;
  FVar4.State = *paVar5;
  if (((uint)FVar4.State & 3) == 0) {
    LOCK();
    aVar2 = *paVar5;
    if (FVar4.State == aVar2) {
      *paVar5 = FVar4.State + 8;
    }
    UNLOCK();
    if (FVar4.State == aVar2) goto LAB_141b34d63;
  }
  FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
LAB_141b34d63:
  if (**(int **)((longlong)param_1 + 8) != 4) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&FStack_18,L"Condition failed");
    (*pcVar7)(pFVar6,&FStack_18,0);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  pbVar9 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)param_1;
  LOCK();
  aVar2 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
  UNLOCK();
  if (((uint)aVar2 & 0xfffffffb) == 10) {
    FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = 0x4000;
  do {
    paVar5 = *(atomic<unsigned_int> **)param_1;
    FVar4.State = *paVar5;
    if (((uint)FVar4.State & 3) == 0) {
      LOCK();
      aVar2 = *paVar5;
      if (FVar4.State == aVar2) {
        *paVar5 = FVar4.State + 8;
      }
      UNLOCK();
      if (FVar4.State != aVar2) goto LAB_141b34e33;
    }
    else {
LAB_141b34e33:
      FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
    }
    FWindowsPlatformProcess::YieldThread();
    paVar5 = *(atomic<unsigned_int> **)param_1;
    LOCK();
    aVar2 = *paVar5;
    *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
    UNLOCK();
    if (((uint)aVar2 & 0xfffffffb) == 10) {
      FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
    }
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      piVar8 = *(int **)((longlong)param_1 + 0x10);
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        LOCK();
        bVar1 = *(byte *)(piVar8 + 1);
        *(byte *)(piVar8 + 1) = 1;
        UNLOCK();
        if ((bVar1 & 3) == 2) {
          ParkingLot::WakeAll(piVar8 + 1);
          return;
        }
      }
      return;
    }
  } while( true );
}

// Call @ 141b399b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_6>,void>::Call
          (void *param_1)

{
  byte bVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  FAutomationTestFramework *pFVar8;
  longlong lVar9;
  FString FStack_58;
  FSharedRecursiveMutex *pFStack_48;
  FSharedRecursiveMutexLink FStack_40;
  FSharedRecursiveMutex *pFStack_30;
  FSharedRecursiveMutexLink FStack_28;
  char cStack_18;
  
  pFStack_30 = *(FSharedRecursiveMutex **)param_1;
  FStack_28.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  FStack_28.Next = (FSharedRecursiveMutexLink *)0x0;
  cStack_18 = '\0';
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  pbVar7 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar7);
  }
  FWindowsPlatformProcess::YieldThread();
  if (cStack_18 != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pFStack_30 == (FSharedRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FSharedRecursiveMutex::LockShared(pFStack_30,&FStack_28);
  cStack_18 = '\x01';
  if (**(int **)((longlong)param_1 + 8) != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar5 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_58,L"Condition failed");
    (*pcVar5)(pFVar3,&FStack_58,0);
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
  }
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  pbVar7 = (byte *)**(undefined8 **)((longlong)param_1 + 0x18);
  LOCK();
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar7);
  }
  FWindowsPlatformProcess::YieldThread();
  if (cStack_18 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  cStack_18 = '\0';
  FSharedRecursiveMutex::UnlockShared(pFStack_30,&FStack_28);
  FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)param_1 + 0x28) + *(longlong *)((longlong)param_1 + 0x20)
             ));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)param_1 + 0x28) +
                   *(longlong *)((longlong)param_1 + 0x20));
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  lVar9 = 0x4000;
  do {
    pFStack_48 = *(FSharedRecursiveMutex **)param_1;
    FStack_40.OwnedMutex = (FSharedRecursiveMutex *)0x0;
    FStack_40.Next = (FSharedRecursiveMutexLink *)0x0;
    FSharedRecursiveMutex::LockShared(pFStack_48,&FStack_40);
    FWindowsPlatformProcess::YieldThread();
    FSharedRecursiveMutex::UnlockShared(pFStack_48,&FStack_40);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  piVar4 = *(int **)((longlong)param_1 + 0x10);
  LOCK();
  iVar2 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    LOCK();
    bVar1 = *(byte *)(piVar4 + 1);
    *(byte *)(piVar4 + 1) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      ParkingLot::WakeAll(piVar4 + 1);
    }
  }
  if (cStack_18 != '\0') {
    FSharedRecursiveMutex::UnlockShared(pFStack_30,&FStack_28);
  }
  return;
}

// Call @ 141b399c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l38::<lambda_6>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l38::<lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b399d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l45::<lambda_6>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b399e0

TBitArray<FDefaultBitArrayAllocator> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l5::<lambda_7>,TBitArray<FDefaultBitArrayAllocator>,TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
::Call(TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__,void *param_1,
      TBitArray<FDefaultBitArrayAllocator> *param_2,TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  <lambda_1> local_18 [16];
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->NumBits = 0;
  __return_storage_ptr__->MaxBits = 0x80;
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (param_2,param_3,__return_storage_ptr__,OneFillMissingBits|MaxSize,local_18);
  return __return_storage_ptr__;
}

// Call @ 141b39a30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_7>,void,void_*>::Call
          (void *param_1,void **param_2)

{
  return;
}

// Call @ 141b39a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l33::<lambda_7>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  `TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l33::<lambda_7>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 141b39a50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l39::<lambda_7>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l39::<lambda_7>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b39a60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l53::<lambda_7>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b39a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l5::<lambda_8>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
::Call(void *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2,
      TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  <lambda_1> local_res20 [8];
  
  BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseAND<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (param_3,param_2,OneFillMissingBits|MaxSize,local_res20);
  return;
}

// Call @ 141b39a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l42::<lambda_8>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l42::<lambda_8>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b39aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l63::<lambda_8>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141b39ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l6::<lambda_9>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
::Call(void *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2,
      TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  <lambda_1> local_res20 [8];
  
  BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseAND<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (param_3,param_2,MaintainSize,local_res20);
  return;
}

// Call @ 141b39ad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OldTaskGraphTests::TaskGraphBenchmark'::__l47::<lambda_9>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OldTaskGraphTests::TaskGraphBenchmark'::__l47::<lambda_9>::operator()(param_1,*param_2);
  return;
}

// Call @ 141b39ae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l71::<lambda_9>,void>::Call
          (void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 141bf70d0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(float),bool,float>::Call
          (void *param_1,float *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141bf70d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2);
  return (bool)uVar1;
}

// Call @ 141bf70e0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l5::<lambda_10>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *param_2;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -0x1010101;
  UNLOCK();
  return iVar1;
}

// Call @ 141bf7100

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l6::<lambda_10>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  puVar1 = (ulonglong *)*param_2;
  uVar2 = *puVar1;
  do {
    LOCK();
    uVar3 = *puVar1;
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *puVar1 = uVar2 & 0x6666666666666666;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7140

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l6::<lambda_10>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  puVar1 = (ulonglong *)*param_2;
  uVar2 = *puVar1;
  do {
    LOCK();
    uVar3 = *puVar1;
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *puVar1 = uVar2 | 0x6666666666666666;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7180

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l6::<lambda_10>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  puVar1 = (ulonglong *)*param_2;
  uVar2 = *puVar1;
  do {
    LOCK();
    uVar3 = *puVar1;
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *puVar1 = uVar2 ^ 0x6666666666666666;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf71c0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l5::<lambda_11>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *param_2;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 4;
  UNLOCK();
  return iVar1;
}

// Call @ 141bf71e0

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l6::<lambda_11>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  plVar1 = *param_2;
  lVar2 = *plVar1;
  do {
    LOCK();
    lVar3 = *plVar1;
    bVar4 = lVar2 == lVar3;
    if (bVar4) {
      *plVar1 = lVar2;
      lVar3 = lVar2;
    }
    UNLOCK();
    lVar2 = lVar3;
  } while (!bVar4);
  return lVar3;
}

// Call @ 141bf7210

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l6::<lambda_11>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  plVar1 = *param_2;
  lVar2 = *plVar1;
  do {
    LOCK();
    lVar3 = *plVar1;
    bVar4 = lVar2 == lVar3;
    if (bVar4) {
      *plVar1 = -1;
      lVar3 = lVar2;
    }
    UNLOCK();
    lVar2 = lVar3;
  } while (!bVar4);
  return lVar3;
}

// Call @ 141bf7240

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l6::<lambda_11>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  puVar1 = (ulonglong *)*param_2;
  uVar2 = *puVar1;
  do {
    LOCK();
    uVar3 = *puVar1;
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *puVar1 = uVar2 ^ 0xffffffffffffffff;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7270

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l5::<lambda_12>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *param_2;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -4;
  UNLOCK();
  return iVar1;
}

// Call @ 141bf7290

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l6::<lambda_12>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  plVar1 = *param_2;
  lVar2 = *plVar1;
  do {
    LOCK();
    lVar3 = *plVar1;
    bVar4 = lVar2 == lVar3;
    if (bVar4) {
      *plVar1 = 0;
      lVar3 = lVar2;
    }
    UNLOCK();
    lVar2 = lVar3;
  } while (!bVar4);
  return lVar3;
}

// Call @ 141bf72c0

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l6::<lambda_12>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  plVar1 = *param_2;
  lVar2 = *plVar1;
  do {
    LOCK();
    lVar3 = *plVar1;
    bVar4 = lVar2 == lVar3;
    if (bVar4) {
      *plVar1 = lVar2;
      lVar3 = lVar2;
    }
    UNLOCK();
    lVar2 = lVar3;
  } while (!bVar4);
  return lVar3;
}

// Call @ 141bf72f0

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l6::<lambda_12>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  plVar1 = *param_2;
  lVar2 = *plVar1;
  do {
    LOCK();
    lVar3 = *plVar1;
    bVar4 = lVar2 == lVar3;
    if (bVar4) {
      *plVar1 = lVar2;
      lVar3 = lVar2;
    }
    UNLOCK();
    lVar2 = lVar3;
  } while (!bVar4);
  return lVar3;
}

// Call @ 141bf7320

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l6::<lambda_13>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 0x101010101010101;
  UNLOCK();
  return lVar1;
}

// Call @ 141bf7340

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l6::<lambda_14>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + -0x101010101010101;
  UNLOCK();
  return lVar1;
}

// Call @ 141bf7360

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l6::<lambda_15>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 4;
  UNLOCK();
  return lVar1;
}

// Call @ 141bf7380

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l6::<lambda_16>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + -4;
  UNLOCK();
  return lVar1;
}

// Call @ 141bf73a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return false;
}

// Call @ 141bf73b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l25::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  *(int *)param_1 = *(int *)param_1 + 1;
  return false;
}

// Call @ 141bf73c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FTSTickerTest::TestBody'::__l50::<lambda_8>::operator()'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 141bf73d0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonFirst>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)
              &TThreadSingleton<`TestThreadSingleton'::`10'::FThreadSingletonFirst>::_vftable_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&`TestThreadSingleton'::`10'::FThreadSingletonFirst::_vftable_;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 141bf7430

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonSecond>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)
              &TThreadSingleton<`TestThreadSingleton'::`10'::FThreadSingletonSecond>::_vftable_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&`TestThreadSingleton'::`10'::FThreadSingletonSecond::_vftable_;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 141bf7490

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)
              &TThreadSingleton<`TestThreadSingleton'::`3'::FThreadSingletonTest>::_vftable_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&`TestThreadSingleton'::`3'::FThreadSingletonTest::_vftable_;
    *(undefined4 *)(pFVar2 + 2) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 141bf7500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::TestIsJoinableAfterCompletion'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  LOCK();
  **(undefined4 **)param_1 = 1;
  UNLOCK();
  return;
}

// Call @ 141bf7520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::TestTypicalUseCase'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  
  iVar1 = **(int **)param_1;
  while (iVar1 == 0) {
    lVar2 = *(longlong *)((longlong)param_1 + 8);
    lVar3 = **(longlong **)(lVar2 + 8);
    if (lVar3 == 0) {
      (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x20))
                (*(longlong **)((longlong)param_1 + 0x10),0xffffffff,0);
    }
    else {
      pvVar4 = *(void **)(lVar2 + 8);
      *(longlong *)(lVar2 + 8) = lVar3;
      *(undefined4 *)(lVar3 + 8) = 0;
      ::operator_delete(pvVar4,0x10);
      if (4 < (byte)LogTemp._0_1_) {
        Logging::Private::BasicLog<5>
                  (&``TestTypicalUseCase'::`2'::<lambda_1>::operator()'::`8'::LOG_Static,
                   (FLogCategoryBase *)&LogTemp);
      }
    }
    iVar1 = **(int **)param_1;
  }
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&``TestTypicalUseCase'::`2'::<lambda_1>::operator()'::`17'::LOG_Static,
               (FLogCategoryBase *)&LogTemp);
    return;
  }
  return;
}

// Call @ 141bf7530

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTSTickerTest::TestBody'::__l3::<lambda_1>,bool,float>::Call
          (void *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (**(char **)param_1 != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bExecuted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 141bf7580

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *param_2;
  LOCK();
  cVar1 = *pcVar2;
  *pcVar2 = *pcVar2 + '\x02';
  UNLOCK();
  return cVar1;
}

// Call @ 141bf75a0

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  
  pbVar2 = (byte *)*param_2;
  bVar3 = *pbVar2;
  do {
    LOCK();
    bVar1 = *pbVar2;
    bVar4 = bVar3 == bVar1;
    if (bVar4) {
      *pbVar2 = bVar3 & 0x66;
      bVar1 = bVar3;
    }
    bVar3 = bVar1;
    UNLOCK();
  } while (!bVar4);
  return bVar3;
}

// Call @ 141bf75d0

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedCompareExchange'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
::Call(void *param_1,schar **param_2)

{
  char cVar1;
  
  LOCK();
  cVar1 = **param_2;
  if (cVar1 == '\x01') {
    **param_2 = '\x10';
    cVar1 = '\x01';
  }
  UNLOCK();
  return cVar1;
}

// Call @ 141bf75f0

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedDecrement'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
::Call(void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *param_2;
  LOCK();
  cVar1 = *pcVar2;
  *pcVar2 = *pcVar2 + -1;
  UNLOCK();
  return cVar1 + -1;
}

// Call @ 141bf7610

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedExchange'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>::
Call(void *param_1,schar **param_2)

{
  schar sVar1;
  
  LOCK();
  sVar1 = **param_2;
  **param_2 = '\x01';
  UNLOCK();
  return sVar1;
}

// Call @ 141bf7630

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedIncrement'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
::Call(void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *param_2;
  LOCK();
  cVar1 = *pcVar2;
  *pcVar2 = *pcVar2 + '\x01';
  UNLOCK();
  return cVar1 + '\x01';
}

// Call @ 141bf7650

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  
  pbVar2 = (byte *)*param_2;
  bVar3 = *pbVar2;
  do {
    LOCK();
    bVar1 = *pbVar2;
    bVar4 = bVar3 == bVar1;
    if (bVar4) {
      *pbVar2 = bVar3 | 0x66;
      bVar1 = bVar3;
    }
    bVar3 = bVar1;
    UNLOCK();
  } while (!bVar4);
  return bVar3;
}

// Call @ 141bf7680

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  
  pbVar2 = (byte *)*param_2;
  bVar3 = *pbVar2;
  do {
    LOCK();
    bVar1 = *pbVar2;
    bVar4 = bVar3 == bVar1;
    if (bVar4) {
      *pbVar2 = bVar3 ^ 0x66;
      bVar1 = bVar3;
    }
    bVar3 = bVar1;
    UNLOCK();
  } while (!bVar4);
  return bVar3;
}

// Call @ 141bf76b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::TestThreadSingleton'::__l3::<lambda_1>,void>::Call
          (void *param_1)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 uVar2;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  pFVar1 = FThreadSingletonInitializer::TryGet(&DAT_154b85e98);
  LOCK();
  *(bool *)*(undefined8 *)param_1 = pFVar1 == (FTlsAutoCleanup *)0x0;
  UNLOCK();
  if (**(char **)param_1 != '\0') {
    puStack_10 = auStackX_8;
    pcStack_18 = TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
    pFVar1 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,&DAT_154b85e98)
    ;
    if (*(int *)(pFVar1 + 2) == 0) {
      uVar2 = 1;
      goto LAB_141bf2a62;
    }
  }
  uVar2 = 0;
LAB_141bf2a62:
  LOCK();
  **(undefined1 **)param_1 = uVar2;
  UNLOCK();
  puStack_10 = auStackX_8;
  pcStack_18 = TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,&DAT_154b85e98);
  *(undefined4 *)(pFVar1 + 2) = 2;
  return;
}

// Call @ 141bf76c0

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *param_2;
  LOCK();
  cVar1 = *pcVar2;
  *pcVar2 = *pcVar2 + -2;
  UNLOCK();
  return cVar1;
}

// Call @ 141bf76e0

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  
  pcVar2 = *param_2;
  cVar3 = *pcVar2;
  do {
    LOCK();
    cVar1 = *pcVar2;
    bVar4 = cVar3 == cVar1;
    if (bVar4) {
      *pcVar2 = cVar3;
      cVar1 = cVar3;
    }
    cVar3 = cVar1;
    UNLOCK();
  } while (!bVar4);
  return cVar3;
}

// Call @ 141bf7700

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedCompareExchange'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
::Call(void *param_1,schar **param_2)

{
  char cVar1;
  
  LOCK();
  cVar1 = **param_2;
  if (cVar1 == '\x10') {
    **param_2 = '\x01';
    cVar1 = '\x10';
  }
  UNLOCK();
  return cVar1;
}

// Call @ 141bf7720

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedDecrement'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
::Call(void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *param_2;
  LOCK();
  cVar1 = *pcVar2;
  *pcVar2 = *pcVar2 + -1;
  UNLOCK();
  return cVar1 + -1;
}

// Call @ 141bf7740

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedIncrement'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
::Call(void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *param_2;
  LOCK();
  cVar1 = *pcVar2;
  *pcVar2 = *pcVar2 + '\x01';
  UNLOCK();
  return cVar1 + '\x01';
}

// Call @ 141bf7760

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  
  pcVar2 = *param_2;
  cVar3 = *pcVar2;
  do {
    LOCK();
    cVar1 = *pcVar2;
    bVar4 = cVar3 == cVar1;
    if (bVar4) {
      *pcVar2 = -1;
      cVar1 = cVar3;
    }
    cVar3 = cVar1;
    UNLOCK();
  } while (!bVar4);
  return cVar3;
}

// Call @ 141bf7780

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  
  pbVar2 = (byte *)*param_2;
  bVar3 = *pbVar2;
  do {
    LOCK();
    bVar1 = *pbVar2;
    bVar4 = bVar3 == bVar1;
    if (bVar4) {
      *pbVar2 = bVar3 ^ 0xff;
      bVar1 = bVar3;
    }
    bVar3 = bVar1;
    UNLOCK();
  } while (!bVar4);
  return bVar3;
}

// Call @ 141bf77b0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedExchange'::__l4::<lambda_2>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  
  LOCK();
  sVar1 = **param_2;
  **param_2 = 1;
  UNLOCK();
  return sVar1;
}

// Call @ 141bf77d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTSTickerTest::TestBody'::__l11::<lambda_2>,bool,float>::Call
          (void *param_1,float *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return true;
}

// Call @ 141bf77e0

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l3::<lambda_3>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *param_2;
  LOCK();
  cVar1 = *pcVar2;
  *pcVar2 = *pcVar2 + '\x04';
  UNLOCK();
  return cVar1;
}

// Call @ 141bf7800

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l3::<lambda_3>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  
  pcVar2 = *param_2;
  cVar3 = *pcVar2;
  do {
    LOCK();
    cVar1 = *pcVar2;
    bVar4 = cVar3 == cVar1;
    if (bVar4) {
      *pcVar2 = '\0';
      cVar1 = cVar3;
    }
    cVar3 = cVar1;
    UNLOCK();
  } while (!bVar4);
  return cVar3;
}

// Call @ 141bf7820

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l3::<lambda_3>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  
  pcVar2 = *param_2;
  cVar3 = *pcVar2;
  do {
    LOCK();
    cVar1 = *pcVar2;
    bVar4 = cVar3 == cVar1;
    if (bVar4) {
      *pcVar2 = cVar3;
      cVar1 = cVar3;
    }
    cVar3 = cVar1;
    UNLOCK();
  } while (!bVar4);
  return cVar3;
}

// Call @ 141bf7840

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l3::<lambda_3>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  
  pcVar2 = *param_2;
  cVar3 = *pcVar2;
  do {
    LOCK();
    cVar1 = *pcVar2;
    bVar4 = cVar3 == cVar1;
    if (bVar4) {
      *pcVar2 = cVar3;
      cVar1 = cVar3;
    }
    cVar3 = cVar1;
    UNLOCK();
  } while (!bVar4);
  return cVar3;
}

// Call @ 141bf7870

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedCompareExchange'::__l4::<lambda_3>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  
  LOCK();
  sVar1 = **param_2;
  if (sVar1 == 1) {
    **param_2 = 0x1000;
    sVar1 = 1;
  }
  UNLOCK();
  return sVar1;
}

// Call @ 141bf7890

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedDecrement'::__l4::<lambda_3>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *param_2;
  LOCK();
  sVar1 = *psVar2;
  *psVar2 = *psVar2 + -1;
  UNLOCK();
  return sVar1 + -1;
}

// Call @ 141bf78b0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedIncrement'::__l4::<lambda_3>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *param_2;
  LOCK();
  sVar1 = *psVar2;
  *psVar2 = *psVar2 + 1;
  UNLOCK();
  return sVar1 + 1;
}

// Call @ 141bf78d0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedExchange'::__l5::<lambda_3>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = **param_2;
  **param_2 = 0x101;
  UNLOCK();
  return iVar1;
}

// Call @ 141bf78f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTSTickerTest::TestBody'::__l19::<lambda_3>,bool,float>::Call
          (void *param_1,float *param_2)

{
  if ((FTaskBase *)**(undefined8 **)param_1 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)**(undefined8 **)param_1);
  }
  return false;
}

// Call @ 141bf7920

schar __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l3::<lambda_4>,signed_char,signed_char_volatile_*>::Call
          (void *param_1,schar **param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *param_2;
  LOCK();
  cVar1 = *pcVar2;
  *pcVar2 = *pcVar2 + -4;
  UNLOCK();
  return cVar1;
}

// Call @ 141bf7940

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l4::<lambda_4>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  bool bVar4;
  
  puVar2 = (ushort *)*param_2;
  uVar3 = *puVar2;
  do {
    LOCK();
    uVar1 = *puVar2;
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *puVar2 = uVar3 & 0x6666;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7970

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedCompareExchange'::__l4::<lambda_4>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  
  LOCK();
  sVar1 = **param_2;
  if (sVar1 == 0x1000) {
    **param_2 = 1;
    sVar1 = 0x1000;
  }
  UNLOCK();
  return sVar1;
}

// Call @ 141bf7990

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedDecrement'::__l4::<lambda_4>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *param_2;
  LOCK();
  sVar1 = *psVar2;
  *psVar2 = *psVar2 + -1;
  UNLOCK();
  return sVar1 + -1;
}

// Call @ 141bf79b0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedIncrement'::__l4::<lambda_4>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *param_2;
  LOCK();
  sVar1 = *psVar2;
  *psVar2 = *psVar2 + 1;
  UNLOCK();
  return sVar1 + 1;
}

// Call @ 141bf79d0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l4::<lambda_4>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  bool bVar4;
  
  puVar2 = (ushort *)*param_2;
  uVar3 = *puVar2;
  do {
    LOCK();
    uVar1 = *puVar2;
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *puVar2 = uVar3 | 0x6666;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7a00

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l4::<lambda_4>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  bool bVar4;
  
  puVar2 = (ushort *)*param_2;
  uVar3 = *puVar2;
  do {
    LOCK();
    uVar1 = *puVar2;
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *puVar2 = uVar3 ^ 0x6666;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7a30

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedExchange'::__l6::<lambda_4>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  long64 lVar1;
  
  LOCK();
  lVar1 = **param_2;
  **param_2 = 0x1010101;
  UNLOCK();
  return lVar1;
}

// Call @ 141bf7a50

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l4::<lambda_5>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *param_2;
  LOCK();
  sVar1 = *psVar2;
  *psVar2 = *psVar2 + 0x101;
  UNLOCK();
  return sVar1;
}

// Call @ 141bf7a70

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l4::<lambda_5>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  
  psVar2 = *param_2;
  sVar3 = *psVar2;
  do {
    LOCK();
    sVar1 = *psVar2;
    bVar4 = sVar3 == sVar1;
    if (bVar4) {
      *psVar2 = sVar3;
      sVar1 = sVar3;
    }
    sVar3 = sVar1;
    UNLOCK();
  } while (!bVar4);
  return sVar3;
}

// Call @ 141bf7aa0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l4::<lambda_5>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  
  psVar2 = *param_2;
  sVar3 = *psVar2;
  do {
    LOCK();
    sVar1 = *psVar2;
    bVar4 = sVar3 == sVar1;
    if (bVar4) {
      *psVar2 = -1;
      sVar1 = sVar3;
    }
    sVar3 = sVar1;
    UNLOCK();
  } while (!bVar4);
  return sVar3;
}

// Call @ 141bf7ad0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l4::<lambda_5>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  bool bVar4;
  
  puVar2 = (ushort *)*param_2;
  uVar3 = *puVar2;
  do {
    LOCK();
    uVar1 = *puVar2;
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *puVar2 = uVar3 ^ 0xffff;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7b00

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedCompareExchange'::__l5::<lambda_5>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = **param_2;
  if (iVar1 == 0x101) {
    **param_2 = 0x10000000;
    iVar1 = 0x101;
  }
  UNLOCK();
  return iVar1;
}

// Call @ 141bf7b20

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedDecrement'::__l5::<lambda_5>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *param_2;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  return iVar1 + -1;
}

// Call @ 141bf7b40

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedIncrement'::__l5::<lambda_5>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *param_2;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  return iVar1 + 1;
}

// Call @ 141bf7b60

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l4::<lambda_6>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *param_2;
  LOCK();
  sVar1 = *psVar2;
  *psVar2 = *psVar2 + -0x101;
  UNLOCK();
  return sVar1;
}

// Call @ 141bf7b80

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l4::<lambda_6>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  
  psVar2 = *param_2;
  sVar3 = *psVar2;
  do {
    LOCK();
    sVar1 = *psVar2;
    bVar4 = sVar3 == sVar1;
    if (bVar4) {
      *psVar2 = 0;
      sVar1 = sVar3;
    }
    sVar3 = sVar1;
    UNLOCK();
  } while (!bVar4);
  return sVar3;
}

// Call @ 141bf7ba0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l4::<lambda_6>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  
  psVar2 = *param_2;
  sVar3 = *psVar2;
  do {
    LOCK();
    sVar1 = *psVar2;
    bVar4 = sVar3 == sVar1;
    if (bVar4) {
      *psVar2 = sVar3;
      sVar1 = sVar3;
    }
    sVar3 = sVar1;
    UNLOCK();
  } while (!bVar4);
  return sVar3;
}

// Call @ 141bf7bd0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l4::<lambda_6>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  
  psVar2 = *param_2;
  sVar3 = *psVar2;
  do {
    LOCK();
    sVar1 = *psVar2;
    bVar4 = sVar3 == sVar1;
    if (bVar4) {
      *psVar2 = sVar3;
      sVar1 = sVar3;
    }
    sVar3 = sVar1;
    UNLOCK();
  } while (!bVar4);
  return sVar3;
}

// Call @ 141bf7c00

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedCompareExchange'::__l5::<lambda_6>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = **param_2;
  if (iVar1 == 0x10000000) {
    **param_2 = 0x101;
    iVar1 = 0x10000000;
  }
  UNLOCK();
  return iVar1;
}

// Call @ 141bf7c20

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedDecrement'::__l5::<lambda_6>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *param_2;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  return iVar1 + -1;
}

// Call @ 141bf7c40

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedIncrement'::__l5::<lambda_6>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *param_2;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  return iVar1 + 1;
}

// Call @ 141bf7c60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTSTickerTest::TestBody'::__l48::<lambda_6>,bool,float>::Call
          (void *param_1,float *param_2)

{
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  local_18.Object = (FElement *)**(undefined8 **)param_1;
  local_18.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)param_1)[1];
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  return true;
}

// Call @ 141bf7ca0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l4::<lambda_7>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *param_2;
  LOCK();
  sVar1 = *psVar2;
  *psVar2 = *psVar2 + 4;
  UNLOCK();
  return sVar1;
}

// Call @ 141bf7cc0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l5::<lambda_7>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = (uint *)*param_2;
  uVar3 = *puVar2;
  do {
    LOCK();
    uVar1 = *puVar2;
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *puVar2 = uVar3 & 0x66666666;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7cf0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l5::<lambda_7>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = (uint *)*param_2;
  uVar3 = *puVar2;
  do {
    LOCK();
    uVar1 = *puVar2;
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *puVar2 = uVar3 | 0x66666666;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7d20

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l5::<lambda_7>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = (uint *)*param_2;
  uVar3 = *puVar2;
  do {
    LOCK();
    uVar1 = *puVar2;
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *puVar2 = uVar3 ^ 0x66666666;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7d50

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedCompareExchange'::__l6::<lambda_7>,__int64,__int64_volatile_*>::
Call(void *param_1,long64 **param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *param_2;
  if (((ulonglong)plVar1 & 7) != 0) {
    FWindowsPlatformAtomics::HandleAtomicsFailure
              (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes");
  }
  LOCK();
  lVar2 = *plVar1;
  if (lVar2 == 0x1010101) {
    *plVar1 = 0x1000000000000000;
    lVar2 = 0x1010101;
  }
  UNLOCK();
  return lVar2;
}

// Call @ 141bf7d90

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedDecrement'::__l6::<lambda_7>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  return lVar1 + -1;
}

// Call @ 141bf7db0

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedIncrement'::__l6::<lambda_7>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  return lVar1 + 1;
}

// Call @ 141bf7dd0

short __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l4::<lambda_8>,short,short_volatile_*>::Call
          (void *param_1,short **param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *param_2;
  LOCK();
  sVar1 = *psVar2;
  *psVar2 = *psVar2 + -4;
  UNLOCK();
  return sVar1;
}

// Call @ 141bf7df0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l5::<lambda_8>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  piVar2 = *param_2;
  iVar3 = *piVar2;
  do {
    LOCK();
    iVar1 = *piVar2;
    bVar4 = iVar3 == iVar1;
    if (bVar4) {
      *piVar2 = iVar3;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// Call @ 141bf7e10

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l5::<lambda_8>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  piVar2 = *param_2;
  iVar3 = *piVar2;
  do {
    LOCK();
    iVar1 = *piVar2;
    bVar4 = iVar3 == iVar1;
    if (bVar4) {
      *piVar2 = -1;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// Call @ 141bf7e30

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l5::<lambda_8>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = (uint *)*param_2;
  uVar3 = *puVar2;
  do {
    LOCK();
    uVar1 = *puVar2;
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *puVar2 = uVar3 ^ 0xffffffff;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
  return uVar3;
}

// Call @ 141bf7e60

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedCompareExchange'::__l6::<lambda_8>,__int64,__int64_volatile_*>::
Call(void *param_1,long64 **param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *param_2;
  if (((ulonglong)plVar1 & 7) != 0) {
    FWindowsPlatformAtomics::HandleAtomicsFailure
              (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes");
  }
  LOCK();
  lVar2 = *plVar1;
  if (lVar2 == 0x1000000000000000) {
    *plVar1 = 0x1010101;
    lVar2 = 0x1000000000000000;
  }
  UNLOCK();
  return lVar2;
}

// Call @ 141bf7ea0

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedDecrement'::__l6::<lambda_8>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  return lVar1 + -1;
}

// Call @ 141bf7ec0

long64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedIncrement'::__l6::<lambda_8>,__int64,__int64_volatile_*>::Call
          (void *param_1,long64 **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  return lVar1 + 1;
}

// Call @ 141bf7ee0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTSTickerTest::TestBody'::__l50::<lambda_8>,bool,float>::Call
          (void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `FTSTickerTest::TestBody'::__l50::<lambda_8>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 141bf7ef0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAdd'::__l5::<lambda_9>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *param_2;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 0x1010101;
  UNLOCK();
  return iVar1;
}

// Call @ 141bf7f10

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedAnd'::__l5::<lambda_9>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  piVar2 = *param_2;
  iVar3 = *piVar2;
  do {
    LOCK();
    iVar1 = *piVar2;
    bVar4 = iVar3 == iVar1;
    if (bVar4) {
      *piVar2 = 0;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// Call @ 141bf7f30

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedOr'::__l5::<lambda_9>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  piVar2 = *param_2;
  iVar3 = *piVar2;
  do {
    LOCK();
    iVar1 = *piVar2;
    bVar4 = iVar3 == iVar1;
    if (bVar4) {
      *piVar2 = iVar3;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// Call @ 141bf7f50

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TestInterlockedXor'::__l5::<lambda_9>,int,int_volatile_*>::Call
          (void *param_1,int **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  piVar2 = *param_2;
  iVar3 = *piVar2;
  do {
    LOCK();
    iVar1 = *piVar2;
    bVar4 = iVar3 == iVar1;
    if (bVar4) {
      *piVar2 = iVar3;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// Call @ 141c908a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FMemoryCompositeBufferTest::TestBody'::__l159::<lambda_6>::operator()'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
::Call(void *param_1,TMemoryView<void_const_> *param_2,FSharedBuffer *param_3)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  FBufferOwner *pFVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong64 uVar12;
  
  uVar9 = *(undefined4 *)&param_2->Data;
  uVar10 = *(undefined4 *)((longlong)&param_2->Data + 4);
  uVar12 = param_2->Size;
  uVar11 = *(undefined4 *)((longlong)&param_2->Size + 4);
  **(int **)param_1 = **(int **)param_1 + 1;
  puVar5 = *(undefined4 **)((longlong)param_1 + 8);
  *puVar5 = uVar9;
  puVar5[1] = uVar10;
  puVar5[2] = (int)uVar12;
  puVar5[3] = uVar11;
  plVar6 = *(longlong **)((longlong)param_1 + 0x10);
  pFVar7 = (param_3->Owner).Owner;
  plVar8 = (longlong *)*plVar6;
  if (pFVar7 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar7->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar7->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar7->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  *plVar6 = (longlong)pFVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 3;
    lVar3 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      plVar6 = plVar8 + 3;
      uVar4 = *plVar6;
      *plVar6 = *plVar6 + -0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141c9093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*plVar8)(plVar8,1);
        return;
      }
    }
  }
  return;
}

// Call @ 141c90950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FColorConversionHeavyTest::TestBody'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FColorConversionHeavyTest::TestBody'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 141c90960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l4::<lambda_1>,void,TMemoryView<void_const_>_>
::Call(void *param_1,TMemoryView<void_const_> *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 141c90970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l42::<lambda_2>,void,TMemoryView<void_const_>_>
::Call(void *param_1,TMemoryView<void_const_> *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 141c90980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l79::<lambda_3>,void,TMemoryView<void_const_>_>
::Call(void *param_1,TMemoryView<void_const_> *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 141c90990

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l104::<lambda_4>,void,TMemoryView<void_const_>_>
::Call(void *param_1,TMemoryView<void_const_> *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 141c909a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l159::<lambda_5>,void,TMemoryView<void_const_>_>
::Call(void *param_1,TMemoryView<void_const_> *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 141cf8cf0

FUniqueBuffer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_2>_const_,FUniqueBuffer,unsigned___int64>
::Call(void *param_1,ulong64 *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FString local_18;
  
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = pFVar3->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_18,"Allocation is not expected");
  (*pcVar2)(pFVar1,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)param_1 = 0;
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Call @ 141cf8d70

FSharedBuffer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompactBinaryPackageTest::TestBody'::__l2::<lambda_2>_const_,FSharedBuffer,FIoHash_const_&>
::Call(void *param_1,FIoHash *param_2)

{
  `FCompactBinaryPackageTest::TestBody'::__l2::<lambda_2>::operator()(param_2,param_1);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Call @ 141cf8da0

TSharedRef<IFruit,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TSharedRef<IFruit,1>_(__cdecl*)(void),TSharedRef<IFruit,1>_>::Call
          (TSharedRef<IFruit,1> *__return_storage_ptr__,void *param_1)

{
  (**(code **)param_1)();
  return __return_storage_ptr__;
}

// Call @ 141cf8dc0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int),bool,int>::Call
          (void *param_1,int *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141cf8dc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2);
  return (bool)uVar1;
}

// Call @ 141cf8dd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf8e90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf8f50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf90d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf93d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf96d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9790

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[2]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf99d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9d90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cf9fd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cfa090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[8]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cfa150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[8],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cfa210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cfa2d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cfa390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[12],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_10;
  return;
}

// Call @ 141cfa450

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar7 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uStack_10;
  return true;
}

// Call @ 141cfa510

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>,wchar_t_const_(&)[2]>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar7 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uStack_10;
  return true;
}

// Call @ 141cfa5d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>,TStringView<wchar_t>_>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar7 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uStack_10;
  return true;
}

// Call @ 141cfa690

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar7 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uStack_10;
  return true;
}

// Call @ 141cfa750

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar7 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uStack_10;
  return true;
}

// Call @ 141cfa810

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterDelegate<ISmoothie<1>,TDelegate<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>,IFruit,IBerry>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  `TTypeContainer<1>::
  RegisterDelegate<ISmoothie<1>,TDelegate<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>,IFruit,IBerry>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141cfa840

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterDelegate<IBerry,TDelegate<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  `TTypeContainer<1>::
  RegisterDelegate<IBerry,TDelegate<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141cfa870

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterDelegate<IFruit,TDelegate<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  `TTypeContainer<1>::
  RegisterDelegate<IFruit,TDelegate<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141cfa8a0

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterFactory<ISmoothie<1>,IFruit,IBerry>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  `TTypeContainer<1>::RegisterFactory<ISmoothie<1>,IFruit,IBerry>'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141cfa8d0

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterFactory<IBerry>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  puVar2 = (undefined8 *)(**(code **)((longlong)param_1 + 8))(local_18);
  __return_storage_ptr__->Object = (void *)*puVar2;
  pTVar1 = (TReferenceControllerBase<1> *)puVar2[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// Call @ 141cfa920

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterFactory<IFruit>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  `TTypeContainer<1>::RegisterFactory<IFruit>'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141cfa950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncRunnable<TTwoSmoothies<1>_>::Run'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfa982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 141cfa9a0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`TAsyncRunnable<bool>::Run'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfa9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 141cfa9f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<TFunction<TTwoSmoothies<1>___cdecl(void)>_&>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TTwoSmoothies<1>,TUniqueFunction<TTwoSmoothies<1>___cdecl(void)>_&>
            ((TPromise<TTwoSmoothies<1>_> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141cfaa10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<TTwoSmoothies<1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141cfaa30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<bool>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141cfaa50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FTimecodeTest::TestBody'::__l6::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
            ((TPromise<bool> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141cfaa70

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_1>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  `TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_1>::
  operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141cfaaa0

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>'::__l4::<lambda_1>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  TRawPtrProxy<FStrawberry> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FStrawberry *)0x0) {
    *local_res8[0].Object = (FStrawberry)&___7FStrawberry__6B_;
  }
  TSharedPtr<void,1>::TSharedPtr<void,1><FStrawberry>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// Call @ 141cfaaf0

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IFruit,FBanana>'::__l4::<lambda_1>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  TRawPtrProxy<FBanana> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FBanana *)0x0) {
    *local_res8[0].Object = (FBanana)&___7FBanana__6B_;
  }
  TSharedPtr<void,1>::TSharedPtr<void,1><FBanana>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// Call @ 141cfab40

TTwoSmoothies<1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTypeContainerTest::TestBody'::__l7::<lambda_1>,TTwoSmoothies<1>_>::Call
          (TTwoSmoothies<1> *__return_storage_ptr__,void *param_1)

{
  `FTypeContainerTest::TestBody'::__l7::<lambda_1>::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141cfab70

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  `TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_2>::
  operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141cfaba0

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  TRawPtrProxy<FStrawberry> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FStrawberry *)0x0) {
    *local_res8[0].Object = (FStrawberry)&___7FStrawberry__6B_;
  }
  TSharedPtr<void,1>::TSharedPtr<void,1><FStrawberry>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// Call @ 141cfabf0

TSharedPtr<void,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IFruit,FBanana>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
::Call(TSharedPtr<void,1> *__return_storage_ptr__,void *param_1)

{
  TRawPtrProxy<FBanana> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FBanana *)0x0) {
    *local_res8[0].Object = (FBanana)&___7FBanana__6B_;
  }
  TSharedPtr<void,1>::TSharedPtr<void,1><FBanana>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// Call @ 141cfac40

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FTimecodeTest::TestBody'::__l6::<lambda_2>,bool>::
Call(void *param_1)

{
  bool bVar1;
  
  bVar1 = `FTimecodeTest::TestBody'::__l2::<lambda_1>::operator()
                    (*(void **)((longlong)param_1 + 8),*(FFrameRate *)param_1);
  return bVar1;
}

// Call @ 141cfac60

TTwoSmoothies<1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTypeContainerTest::TestBody'::__l9::<lambda_2>,TTwoSmoothies<1>_>::Call
          (TTwoSmoothies<1> *__return_storage_ptr__,void *param_1)

{
  `FTypeContainerTest::TestBody'::__l9::<lambda_2>::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141cfac90

FSharedBuffer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompactBinaryPackageTest::TestBody'::__l237::<lambda_3>,FSharedBuffer,FIoHash_const_&>
::Call(void *param_1,FIoHash *param_2)

{
  **(undefined1 **)param_2->Hash = 1;
  *(undefined8 *)param_1 = 0;
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Call @ 141d77120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<unsigned_int> *paVar1;
  byte bVar2;
  atomic<unsigned_int> aVar3;
  char cVar4;
  byte *pbVar5;
  code *pcVar6;
  bool bVar7;
  FTaskBase *this;
  FTask *pFVar8;
  undefined8 uVar9;
  
  cVar4 = **(char **)((longlong)param_1 + 8);
  do {
    if (cVar4 != '\0') {
      pbVar5 = *(byte **)param_1;
      LOCK();
      bVar2 = *pbVar5;
      *pbVar5 = 1;
      UNLOCK();
      if ((bVar2 & 3) == 2) {
        ParkingLot::WakeAll(pbVar5);
        return;
      }
      return;
    }
    this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
    if (this == (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    }
    else {
      Tasks::Private::FTaskBase::FTaskBase(this,2,true);
      this->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<``UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>::operator()'::`4'::<lambda_1>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(this->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(*(longlong *)&(this->LowLevelTask).field_0x28 + 0x18))
                (&(this->LowLevelTask).field_0x28,&this->LowLevelTask);
      *(undefined ***)&(this->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&this->LowLevelTask = this;
      *(FTaskBase **)&(this->LowLevelTask).field_0x8 = this;
      pFVar8 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar8 == (FTask *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)&pFVar8->field_0x30;
      }
      *(undefined8 *)&(this->LowLevelTask).field_0x30 = uVar9;
      *(undefined8 *)&(this->LowLevelTask).field_0x38 = 0xc80000541e80f800;
      this->ExtendedPriority = None;
      FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this->_padding_);
      this->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<``UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>::operator()'::`4'::<lambda_1>_>
            ::_vftable_;
      Tasks::Private::FTaskBase::TryLaunch(this,0x100);
      Tasks::Private::FTaskBase::Wait(this);
      LOCK();
      paVar1 = &this->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)this->_padding_)(this,1);
      }
    }
    cVar4 = **(char **)((longlong)param_1 + 8);
  } while( true );
}

// Call @ 141d77130

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141d77150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::TasksTests::FTasksEventTest::TestBody'::__l4::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  atomic<bool> aVar1;
  FTaskBase *this;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)(*(longlong *)param_1 + 0xd0) == '\0')) {
    this = *(FTaskBase **)param_1;
    LOCK();
    aVar1 = this->TaskTriggered;
    this->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
    }
  }
  if (*(FTaskBase **)((longlong)param_1 + 8) != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)((longlong)param_1 + 8));
    return;
  }
  return;
}

