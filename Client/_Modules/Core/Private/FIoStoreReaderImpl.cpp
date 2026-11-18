// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// operator() @ 1417ac820

void __thiscall `FIoStoreReaderImpl::StartAsyncRead'::__l2::<lambda_1>::operator()(void *this)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  ulonglong uVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  
  uVar2 = *(uint *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x340)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x338) + (longlong)(int)uVar2 * 8);
  LOCK();
  puVar1 = (uint *)(lVar3 + 0x240);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar9 = (ulonglong)(uVar2 % 0xc);
  if (CpuChannel->Enabled < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + uVar9 * 0x28);
    EnterCriticalSection(lpCriticalSection);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FIoStoreReaderImpl::StartAsyncRead(int,__int64,__int64,unsigned_char*___ptr64,std::atomic<bool>*___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'
                ::__l3::__CpuProfilerEventSpecId387,"FIoStoreReader_StartAsyncRead_Lock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
               ,0x183);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FIoStoreReaderImpl::StartAsyncRead(int,__int64,__int64,unsigned_char*___ptr64,std::atomic<bool>*___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'
               ::__l3::__CpuProfilerEventSpecId387);
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + uVar9 * 0x28);
    EnterCriticalSection(lpCriticalSection);
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FIoStoreReaderImpl::StartAsyncRead(int,__int64,__int64,unsigned_char*___ptr64,std::atomic<bool>*___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'
                ::__l4::__CpuProfilerEventSpecId393,"FIoStoreReader_StartAsyncRead_SeekAndRead",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
               ,0x189);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FIoStoreReaderImpl::StartAsyncRead(int,__int64,__int64,unsigned_char*___ptr64,std::atomic<bool>*___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'
               ::__l4::__CpuProfilerEventSpecId393);
  }
  plVar4 = *(longlong **)(lVar3 + 0x1e0 + uVar9 * 8);
  (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)((longlong)this + 0x10));
  plVar4 = *(longlong **)(lVar3 + 0x1e0 + uVar9 * 8);
  uVar7 = (**(code **)(*plVar4 + 0x20))
                    (plVar4,*(undefined8 *)((longlong)this + 0x18),
                     *(undefined8 *)((longlong)this + 0x20));
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  LOCK();
  **(undefined1 **)((longlong)this + 0x28) = uVar7;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001417ac9bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// operator() @ 1417ad690

TIoStatusOr<FIoBuffer> * __thiscall
`FIoStoreReaderImpl::ReadAsync'::__l5::<lambda_1>::operator()
          (void *this,TIoStatusOr<FIoBuffer> *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString local_38;
  FString local_28;
  
  ::LexToString(&local_28,this);
  ::FString::PrintfImpl(&local_38,L"Unknown chunk ID \'%s\'");
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  pwVar4 = (wchar_t *)0x0;
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    lVar2 = (longlong)iVar3;
    puVar1 = FMemory::Malloc(lVar2 * 2 + 10,0);
    *puVar1 = 1;
    pwVar4 = (wchar_t *)(puVar1 + 2);
    puVar1[1] = iVar3;
    if (0 < iVar3) {
      memcpy(pwVar4,_Src.Data,lVar2 * 2);
    }
    pwVar4[lVar2] = L'\0';
  }
  (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
  (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
  if (pwVar4 == (wchar_t *)0x0) {
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = UnknownChunkID;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
  }
  else {
    LOCK();
    *(int *)(pwVar4 + -4) = *(int *)(pwVar4 + -4) + 1;
    UNLOCK();
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = pwVar4;
    pwVar4 = pwVar4 + -4;
    (__return_storage_ptr__->StatusValue).ErrorCode = UnknownChunkID;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    LOCK();
    iVar3 = *(int *)pwVar4;
    *(int *)pwVar4 = *(int *)pwVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FMemory::Free(pwVar4);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 1417ada30

TIoStatusOr<FIoBuffer> * __thiscall
`FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>::operator()
          (void *this,TIoStatusOr<FIoBuffer> *__return_storage_ptr__)

{
  atomic<unsigned_int> *paVar1;
  wchar_t *pwVar2;
  atomic<bool> aVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  BufCore *this_00;
  code *pcVar8;
  TSharedString<wchar_t> TVar9;
  bool bVar10;
  uint uVar11;
  FTaskBase *this_01;
  FTaskBase *this_02;
  TIoStatusOr<FIoBuffer> *pTVar12;
  FTask *pFVar13;
  int *piVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong local_res8;
  longlong local_res18;
  FIoStatus local_a8;
  FIoStatus local_98;
  longlong local_88;
  longlong lStack_80;
  uint local_78;
  undefined4 uStack_74;
  longlong lStack_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  
  this_01 = (FTaskBase *)
            UE::Tasks::Private::FTaskEventBase::Create(L"FIoStoreReader::DecompressionDone");
  uVar18 = (ulonglong)*(int *)((longlong)this + 0x28);
  lVar19 = 0;
  uVar16 = *(ulonglong *)((longlong)this + 0x20) % *(ulonglong *)((longlong)this + 0x18);
  local_res8 = 0;
  local_res18 = *(longlong *)((longlong)this + 0x30);
  if (*(int *)((longlong)this + 0x28) <= *(int *)((longlong)this + 0x2c)) {
    lVar20 = uVar18 * 0xc;
    do {
      local_88 = *(longlong *)this;
      lStack_80 = *(longlong *)((longlong)this + 8);
      uVar17 = (uint)uVar18;
      local_78 = uVar17;
      lStack_70 = lVar19;
      local_68 = local_res8;
      uStack_60 = uVar16;
      local_58 = local_res18;
      this_02 = FMemory::Malloc(0x140,0x40);
      if (this_02 == (FTaskBase *)0x0) {
        this_02 = (FTaskBase *)0x0;
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x140);
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_02,2,true);
        this_02->_padding_ =
             (longlong)
             &
             ___7__TExecutableTaskBase_V<lambda_1>__4___R<lambda_3>__1__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z_QEBA_XZ_XX_Private_Tasks_UE__6B_
        ;
        if (((*(ulonglong *)&(this_02->LowLevelTask).field_0x38 & 0x20) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsCompleted()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                ,0x1dd,L"State: %d"), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TIoStatusOr<FIoBuffer> *)(*pcVar8)();
          return pTVar12;
        }
        (**(code **)(*(longlong *)&(this_02->LowLevelTask).field_0x28 + 0x18))
                  (&(this_02->LowLevelTask).field_0x28,&this_02->LowLevelTask);
        *(FTaskBase **)&this_02->LowLevelTask = this_02;
        *(undefined ***)&(this_02->LowLevelTask).field_0x28 =
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(FTaskBase **)&(this_02->LowLevelTask).field_0x8 = this_02;
        pFVar13 = LowLevelTasks::FTask::GetActiveTask();
        if (pFVar13 == (FTask *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)&pFVar13->field_0x30;
        }
        *(undefined8 *)&(this_02->LowLevelTask).field_0x30 = uVar15;
        *(undefined8 *)&(this_02->LowLevelTask).field_0x38 = 0xc80000541a019200;
        this_02->ExtendedPriority = None;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&this_02->_padding_);
        this_02[1]._padding_ = local_88;
        this_02[1]._padding_ = lStack_80;
        this_02[1]._padding_ = CONCAT44(uStack_74,local_78);
        this_02[1]._padding_ = lStack_70;
        this_02[1]._padding_ = local_68;
        this_02[1]._padding_ = uStack_60;
        this_02[1].RefCount = (atomic<unsigned_int>)(undefined4)local_58;
        this_02[1].NumLocks = (atomic<unsigned_int>)local_58._4_4_;
        this_02->_padding_ =
             (longlong)
             &
             ___7__TExecutableTask_V<lambda_1>__4___R<lambda_3>__1__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z_QEBA_XZ__Private_Tasks_UE__6B_
        ;
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x140);
        if (((this_01->NumLocks == (atomic<unsigned_int>)0x0) ||
            (0x7fffffff < (uint)this_01->NumLocks)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                ,0xe3,L"Prerequisites can be added only before the task is launched"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TIoStatusOr<FIoBuffer> *)(*pcVar8)();
          return pTVar12;
        }
        LOCK();
        paVar1 = &this_01->NumLocks;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((0x7fffffff < (int)aVar4 + 1U) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("PrevNumLocks + 1 < ExecutionFlag",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                ,0xea,L"Max number of task prerequisites reached: %d"), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TIoStatusOr<FIoBuffer> *)(*pcVar8)();
          return pTVar12;
        }
        bVar10 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_02,this_01);
        if (bVar10) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::
          FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                    (&this_01->Prerequisites,this_02);
        }
        else {
          LOCK();
          this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + -1);
          UNLOCK();
        }
      }
      lVar6 = *(longlong *)((longlong)this + 0x40);
      uVar11 = 0;
      if ((int)uVar17 < *(int *)(lVar6 + 0xd8)) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TIoStatusOr<FIoBuffer> *)(*pcVar8)();
        return pTVar12;
      }
      lVar6 = *(longlong *)(lVar6 + 0xd0);
      uVar16 = 0;
      lVar19 = lVar19 + ((ulonglong)((*(uint *)(lVar6 + 4 + lVar20) >> 8) + 0xf) & 0xfffffff0);
      uVar18 = (ulonglong)(*(uint *)(lVar6 + 8 + lVar20) & 0xffffff);
      local_res8 = local_res8 + uVar18;
      local_res18 = local_res18 - uVar18;
      if (this_02 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
      lVar20 = lVar20 + 0xc;
      uVar18 = (ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) <= *(int *)((longlong)this + 0x2c));
  }
  if (this_01 != (FTaskBase *)0x0) {
    if ((this_01->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      LOCK();
      aVar3 = this_01->TaskTriggered;
      this_01->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar3 == (atomic<bool>)0x0) {
        LOCK();
        this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0xd8);
      }
    }
    UE::Tasks::Private::FTaskBase::Wait(this_01);
  }
  TVar9.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (TVar9.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar2 = TVar9.Chars + -4;
    *(int *)pwVar2 = *(int *)pwVar2 + 1;
    UNLOCK();
  }
  (__return_storage_ptr__->StatusValue).ErrorCode = FIoStatus::Unknown.ErrorCode;
  (__return_storage_ptr__->StatusValue).SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x38) == '\0') {
    piVar14 = FMemory::Malloc(0x5a,0);
    local_a8.ErrorCode = ReadError;
    local_a8.SystemErrorCode = 0;
    *piVar14 = 1;
    pwVar2 = (wchar_t *)(piVar14 + 2);
    piVar14[1] = 0x28;
    uVar15 = u_Failed_reading_._8_8_;
    *(undefined8 *)pwVar2 = u_Failed_reading_._0_8_;
    *(undefined8 *)(piVar14 + 4) = uVar15;
    uVar15 = u_Failed_reading_._24_8_;
    *(undefined8 *)(piVar14 + 6) = u_Failed_reading_._16_8_;
    *(undefined8 *)(piVar14 + 8) = uVar15;
    uVar15 = u_Failed_reading_._40_8_;
    *(undefined8 *)(piVar14 + 10) = u_Failed_reading_._32_8_;
    *(undefined8 *)(piVar14 + 0xc) = uVar15;
    uVar15 = u_Failed_reading_._56_8_;
    *(undefined8 *)(piVar14 + 0xe) = u_Failed_reading_._48_8_;
    *(undefined8 *)(piVar14 + 0x10) = uVar15;
    uVar15 = u_Failed_reading_._72_8_;
    *(undefined8 *)(piVar14 + 0x12) = u_Failed_reading_._64_8_;
    *(undefined8 *)(piVar14 + 0x14) = uVar15;
    *(undefined2 *)(piVar14 + 0x16) = 0;
    local_a8.ErrorMessage.Chars = pwVar2;
    TIoStatusOr<FIoBuffer>::operator=(__return_storage_ptr__,&local_a8);
    if (pwVar2 != (wchar_t *)0x0) {
      LOCK();
      iVar5 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FMemory::Free(piVar14);
      }
    }
  }
  else if (*(char *)(*(longlong *)((longlong)this + 8) + 0x39) == '\0') {
    lVar19 = *(longlong *)((longlong)this + 8);
    if ((*(char *)(lVar19 + 0x30) == '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TIoStatusOr<FIoBuffer> *)(*pcVar8)();
      return pTVar12;
    }
    TIoStatusOr<FIoBuffer>::operator=(__return_storage_ptr__,(FIoBuffer *)(lVar19 + 0x28));
  }
  else {
    piVar14 = FMemory::Malloc(0x3e,0);
    local_98.ErrorCode = ReadError;
    local_98.SystemErrorCode = 0;
    *piVar14 = 1;
    pwVar2 = (wchar_t *)(piVar14 + 2);
    piVar14[1] = 0x1a;
    uVar15 = u_Failed_uncompre._8_8_;
    *(undefined8 *)pwVar2 = u_Failed_uncompre._0_8_;
    *(undefined8 *)(piVar14 + 4) = uVar15;
    uVar15 = u_Failed_uncompre._24_8_;
    *(undefined8 *)(piVar14 + 6) = u_Failed_uncompre._16_8_;
    *(undefined8 *)(piVar14 + 8) = uVar15;
    uVar15 = u_Failed_uncompre._40_8_;
    *(undefined8 *)(piVar14 + 10) = u_Failed_uncompre._32_8_;
    *(undefined8 *)(piVar14 + 0xc) = uVar15;
    piVar14[0xe] = u_Failed_uncompre._48_4_;
    *(undefined2 *)(piVar14 + 0xf) = 0;
    local_98.ErrorMessage.Chars = pwVar2;
    TIoStatusOr<FIoBuffer>::operator=(__return_storage_ptr__,&local_98);
    if (pwVar2 != (wchar_t *)0x0) {
      LOCK();
      iVar5 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FMemory::Free(piVar14);
      }
    }
  }
  puVar7 = *(undefined8 **)((longlong)this + 8);
  if (puVar7 != (undefined8 *)0x0) {
    if ((*(char *)(puVar7 + 6) != '\0') &&
       (this_00 = (BufCore *)puVar7[5], this_00 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(this_00);
      LOCK();
      piVar14 = &this_00->NumRefs;
      iVar5 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FIoBuffer::BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
      }
    }
    if ((void *)*puVar7 != (void *)0x0) {
      FMemory::Free((void *)*puVar7);
    }
    ::operator_delete(puVar7,0x40);
  }
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  return __return_storage_ptr__;
}

// EnumerateChunks @ 1417c5250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIoStoreReaderImpl::EnumerateChunks
          (FIoStoreReaderImpl *this,TFunction<bool___cdecl(FIoStoreTocChunkInfo_&&)> *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  FString *pFVar9;
  int iVar10;
  undefined1 auStack_f8 [32];
  FString local_d8;
  FString local_c8;
  FIoStoreTocChunkInfo local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (0 < (this->TocReader).Toc.ChunkIds.ArrayNum) {
    pFVar9 = (FString *)0x0;
    do {
      iVar10 = (int)pFVar9;
      GetTocChunkInfoInternal<FIoStoreTocResourceView>
                (&local_b8,(FIoStoreTocResourceView *)this,iVar10);
      if (*(int *)&(this->TocReader).IndexToFileName.field_0x8 !=
          *(int *)&(this->TocReader).IndexToFileName.field_0x34) {
        puVar1 = *(undefined1 **)&(this->TocReader).IndexToFileName.field_0x40;
        puVar8 = &(this->TocReader).IndexToFileName.field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar8 = puVar1;
        }
        iVar4 = *(int *)(puVar8 + ((ulonglong)
                                   (*(int *)&(this->TocReader).IndexToFileName.field_0x48 - 1) &
                                  (ulonglong)pFVar9) * 4);
        if (iVar4 != -1) {
          do {
            piVar5 = (int *)((longlong)iVar4 * 0x20 +
                            *(longlong *)&(this->TocReader).IndexToFileName);
            if (*piVar5 == iVar10) {
              pFVar9 = (FString *)(piVar5 + 2);
              if (piVar5 == (int *)0x0) {
                pFVar9 = (FString *)0x0;
              }
              if (pFVar9 != (FString *)0x0) {
                ::FString::operator=(&local_b8.FileName,pFVar9);
                local_b8.bHasValidFileName = true;
                goto LAB_1417c53b7;
              }
              break;
            }
            iVar4 = piVar5[6];
          } while (iVar4 != -1);
        }
      }
      ::LexToString(&local_c8,local_b8.ChunkType);
      ::FString::PrintfImpl(&local_d8,L"<%s>");
      if (local_b8.FileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.FileName.Data.AllocatorInstance.Data);
      }
      local_b8.FileName.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      local_b8.FileName.Data.ArrayNum = local_d8.Data.ArrayNum;
      local_b8.FileName.Data.ArrayMax = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_b8.bHasValidFileName = false;
LAB_1417c53b7:
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar2 = *(code **)param_1;
      plVar7 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar7 = (longlong *)&param_1->field_0x10;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar2)(uVar6,&local_b8);
      if (cVar3 == '\0') {
        if (local_b8.FileName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_b8.FileName.Data.AllocatorInstance.Data);
        return;
      }
      if (local_b8.FileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.FileName.Data.AllocatorInstance.Data);
      }
      pFVar9 = (FString *)(ulonglong)(iVar10 + 1U);
    } while ((int)(iVar10 + 1U) < (this->TocReader).Toc.ChunkIds.ArrayNum);
  }
  return;
}

// EnumerateCompressedBlocksForChunk @ 1417c55b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FIoStoreReaderImpl::EnumerateCompressedBlocksForChunk
          (FIoStoreReaderImpl *this,FIoChunkId *param_1,
          TFunction<bool___cdecl(FIoStoreTocCompressedBlockInfo_const_&)> *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int *piVar9;
  FIoOffsetAndLength *pFVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uchar *puVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  uint local_50;
  uint local_4c;
  uchar local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  piVar9 = TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
           ::Find((TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
                   *)&(this->TocReader).ChunkIdToIndex,param_1);
  if ((piVar9 == (int *)0x0) ||
     (pFVar10 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                          (&(this->TocReader).Toc.ChunkOffsetLengths,*piVar9),
     pFVar10 == (FIoOffsetAndLength *)0x0)) {
    bVar5 = false;
  }
  else {
    uVar18 = CONCAT44(0,(this->TocReader).Toc.Header.CompressionBlockSize);
    uVar17 = CONCAT35(0,CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar10->OffsetAndLength[0],
                                                            pFVar10->OffsetAndLength[1]),
                                                   pFVar10->OffsetAndLength[2]),
                                          pFVar10->OffsetAndLength[3]),pFVar10->OffsetAndLength[4]))
    ;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar18;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17;
    uVar11 = SUB168(auVar3 / auVar2,0);
    lVar16 = (longlong)SUB164(auVar3 / auVar2,0);
    lVar19 = (longlong)
             (int)((((uVar18 - 1) +
                     CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar10->OffsetAndLength[5],
                                                         pFVar10->OffsetAndLength[6]),
                                                pFVar10->OffsetAndLength[7]),
                                       pFVar10->OffsetAndLength[8]),pFVar10->OffsetAndLength[9]) +
                     uVar17 & ~(uVar18 - 1)) - 1) / uVar18);
    if (lVar16 <= lVar19) {
      lVar20 = lVar16 * 0xc;
      do {
        iVar1 = (this->TocReader).Toc.CompressionBlocks.ArrayNum;
        uVar15 = (uint)uVar11;
        uVar8 = 0;
        if ((int)uVar15 < iVar1) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_68 = (longlong)(int)uVar15;
          local_60 = (longlong)iVar1;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        puVar13 = ((this->TocReader).Toc.CompressionBlocks.DataPtr)->Data + lVar20;
        local_58 = *(ulonglong *)puVar13 & 0xffffffffff;
        local_50 = *(uint *)(puVar13 + 4) >> 8;
        local_4c = *(uint *)(puVar13 + 8) & 0xffffff;
        local_48 = puVar13[0xb];
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar4 = *(code **)param_2;
        plVar14 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar14 = (longlong *)&param_2->field_0x10;
        }
        uVar12 = (**(code **)(*plVar14 + 8))();
        cVar7 = (*pcVar4)(uVar12,&local_58);
        if (cVar7 == '\0') break;
        uVar11 = (ulonglong)(uVar15 + 1);
        lVar16 = lVar16 + 1;
        lVar20 = lVar20 + 0xc;
      } while (lVar16 <= lVar19);
    }
    bVar5 = true;
  }
  return bVar5;
}

// GetChunkInfo @ 1417d1d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<FIoStoreTocChunkInfo> * __thiscall
FIoStoreReaderImpl::GetChunkInfo
          (FIoStoreReaderImpl *this,TIoStatusOr<FIoStoreTocChunkInfo> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  ForAnyElementType _Src;
  int *piVar1;
  FIoStoreTocChunkInfo *pFVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined1 auStack_f8 [32];
  FString local_d8;
  FString local_c8;
  FIoStoreTocChunkInfo local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  piVar1 = TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
           ::Find((TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
                   *)&(this->TocReader).ChunkIdToIndex,param_1);
  if (piVar1 == (int *)0x0) {
    ::LexToString(&local_c8,param_1);
    ::FString::PrintfImpl(&local_d8,L"Unknown chunk ID \'%s\'");
    _Src.Data = local_d8.Data.AllocatorInstance.Data;
    pwVar6 = (wchar_t *)0x0;
    iVar5 = local_d8.Data.ArrayNum + -1;
    if (local_d8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      lVar4 = (longlong)iVar5;
      puVar3 = FMemory::Malloc(lVar4 * 2 + 10,0);
      *puVar3 = 1;
      pwVar6 = (wchar_t *)(puVar3 + 2);
      puVar3[1] = iVar5;
      if (0 < iVar5) {
        memcpy(pwVar6,_Src.Data,lVar4 * 2);
      }
      pwVar6[lVar4] = L'\0';
    }
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    if (pwVar6 == (wchar_t *)0x0) {
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
      (__return_storage_ptr__->StatusValue).ErrorCode = UnknownChunkID;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    }
    else {
      LOCK();
      *(int *)(pwVar6 + -4) = *(int *)(pwVar6 + -4) + 1;
      UNLOCK();
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = pwVar6;
      pwVar6 = pwVar6 + -4;
      (__return_storage_ptr__->StatusValue).ErrorCode = UnknownChunkID;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
      LOCK();
      iVar5 = *(int *)pwVar6;
      *(int *)pwVar6 = *(int *)pwVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FMemory::Free(pwVar6);
      }
    }
    local_b8.FileName.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      local_b8.FileName.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar2 = FIoStoreTocReader::GetTocChunkInfo(&this->TocReader,&local_b8,*piVar1);
    TIoStatusOr<FIoStoreTocChunkInfo>::TIoStatusOr<FIoStoreTocChunkInfo>
              (__return_storage_ptr__,pFVar2);
  }
  if (local_b8.FileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.FileName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetContainerFilePaths @ 1417d2be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIoStoreReaderImpl::GetContainerFilePaths
          (FIoStoreReaderImpl *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_298 [32];
  FString local_278;
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  local_258.CurPos = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.End = (wchar_t *)local_38;
  local_258.Base = local_238;
  uVar8 = 0;
  if ((this->TocReader).Toc.Header.PartitionCount != 0) {
    do {
      iVar1 = (this->ContainerPath).Data.ArrayNum;
      pFVar5 = (this->ContainerPath).Data.AllocatorInstance.Data;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      uVar6 = (ulong64)iVar7;
      local_258.CurPos = local_258.Base;
      if (local_258.End < local_258.Base + uVar6) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,uVar6);
      }
      if (iVar7 != 0) {
        pvVar4 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar5,uVar6 * 2);
        local_258.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
      }
      if (uVar8 != 0) {
        ::FString::PrintfImpl(&local_278,L"_s%d");
        FVar3.Data = local_278.Data.AllocatorInstance.Data;
        iVar7 = local_278.Data.ArrayNum + -1;
        if (local_278.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        uVar6 = (ulong64)iVar7;
        if (local_258.End < local_258.CurPos + uVar6) {
          TStringBuilderBase<wchar_t>::Extend(&local_258,uVar6);
        }
        if (iVar7 != 0) {
          pvVar4 = FGenericPlatformString::Memcpy(local_258.CurPos,FVar3.Data,uVar6 * 2);
          local_258.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
        }
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
      }
      if (local_258.End < local_258.CurPos + 5) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,5);
      }
      pvVar4 = FGenericPlatformString::Memcpy(local_258.CurPos,L".ucas",10);
      local_258.CurPos = (wchar_t *)((longlong)pvVar4 + 10);
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(undefined8 *)&pFVar9[8].field_0x0 = 0;
      pFVar5 = (FScriptContainerElement *)
               ::FString::ConstructFromPtrSize
                         (&local_268,local_258.Base,
                          (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
      if (pFVar9 != pFVar5) {
        pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->
                 AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance).
        Data = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->
               AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).
        Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar9[8].field_0x0 = *(int *)&pFVar5[8].field_0x0;
        *(int *)&pFVar9[0xc].field_0x0 = *(int *)&pFVar5[0xc].field_0x0;
        *(undefined8 *)&pFVar5[8].field_0x0 = 0;
      }
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (this->TocReader).Toc.Header.PartitionCount);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return;
}

// Initialize @ 1417db650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStatus * __thiscall
FIoStoreReaderImpl::Initialize
          (FIoStoreReaderImpl *this,FIoStatus *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  TSharedString<wchar_t> TVar3;
  TArray<TUniquePtr<FIoStoreReaderImpl::FContainerFileAccess,TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  IPlatformFile *pIVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  FPlatformFileManager *this_00;
  LPCRITICAL_SECTION p_Var10;
  PRTL_CRITICAL_SECTION_DEBUG p_Var11;
  FIoStatus *pFVar12;
  size_t sVar13;
  wchar_t *pwVar14;
  uint uVar15;
  ulong64 uVar16;
  longlong lVar17;
  LPCRITICAL_SECTION p_Var18;
  LPCRITICAL_SECTION p_Var19;
  void *pvVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStackY_798 [32];
  uint local_768;
  FString local_760;
  TArray<TUniquePtr<FIoStoreReaderImpl::FContainerFileAccess,TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>_>,TSizedDefaultAllocator<32>_>
  *local_750;
  FIoStoreReaderImpl *local_748;
  FIoStatus *local_740;
  FIoStatus local_738;
  TStringView<wchar_t> *local_728;
  IPlatformFile *local_720;
  int *local_718;
  undefined4 local_710;
  undefined4 uStack_70c;
  int iStack_708;
  undefined4 uStack_704;
  wchar_t *local_6f8;
  undefined8 uStack_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  int iStack_6e0;
  int iStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  int iStack_6d0;
  undefined4 uStack_6cc;
  TStringBuilderBase<wchar_t> local_6c8;
  TStringBuilderBase<wchar_t> local_6a8 [16];
  TStringBuilderBase<wchar_t> local_4a8;
  wchar_t local_488 [256];
  undefined1 local_288 [16];
  wchar_t *local_278;
  wchar_t *local_270;
  undefined2 local_268;
  wchar_t local_260 [256];
  wchar_t local_60 [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_798;
  bVar22 = -1 < CpuChannel->Enabled;
  local_748 = this;
  local_740 = __return_storage_ptr__;
  local_728 = param_1;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_FIoStatus___cdecl_FIoStoreReaderImpl::Initialize(TStringView<wchar_t>,TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId405,"FIoStoreReader::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
               ,0x195);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_FIoStatus___cdecl_FIoStoreReaderImpl::Initialize(TStringView<wchar_t>,TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId405);
  }
  local_6f8 = param_1->DataPtr;
  uStack_6f0 = *(undefined8 *)&param_1->Size;
  ::FString::AssignRange(&this->ContainerPath,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  local_760.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_760.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_760.Data.ArrayNum = param_1->Size;
  local_760.Data.ArrayMax = *(int *)&param_1->field_0xc;
  local_4a8.Base = local_488;
  local_4a8.End = (wchar_t *)local_288;
  iVar7 = (int)*(undefined8 *)&param_1->Size;
  uVar16 = (ulong64)iVar7;
  local_4a8.CurPos = local_488;
  local_4a8.bIsDynamic = false;
  local_4a8.bIsExternal = false;
  local_6e8 = local_760.Data.AllocatorInstance.Data._0_4_;
  uStack_6e4 = local_760.Data.AllocatorInstance.Data._4_4_;
  iStack_6e0 = local_760.Data.ArrayNum;
  iStack_6dc = local_760.Data.ArrayMax;
  if (local_288 < local_488 + uVar16) {
    TStringBuilderBase<wchar_t>::Extend(&local_4a8,uVar16);
  }
  if (iVar7 != 0) {
    pvVar9 = FGenericPlatformString::Memcpy
                       (local_4a8.CurPos,
                        (void *)CONCAT44(local_760.Data.AllocatorInstance.Data._4_4_,
                                         local_760.Data.AllocatorInstance.Data._0_4_),uVar16 * 2);
    local_4a8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar16 * 2);
  }
  if (local_4a8.End < local_4a8.CurPos + 5) {
    TStringBuilderBase<wchar_t>::Extend(&local_4a8,5);
  }
  pvVar9 = FGenericPlatformString::Memcpy(local_4a8.CurPos,L".utoc",10);
  local_4a8.CurPos = (wchar_t *)((longlong)pvVar9 + 10);
  if (local_4a8.End < (wchar_t *)((longlong)pvVar9 + 0xc)) {
    TStringBuilderBase<wchar_t>::Extend(&local_4a8,1);
  }
  *local_4a8.CurPos = L'\0';
  FIoStoreTocReader::Read(&this->TocReader,&local_738,local_4a8.Base,param_2);
  if (local_738.ErrorCode == Ok) {
    this_00 = FPlatformFileManager::Get();
    local_720 = FPlatformFileManager::GetPlatformFile(this_00);
    uVar8 = (this->TocReader).Toc.Header.PartitionCount;
    local_750 = &this->ContainerFileAccessors;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    local_718 = &(this->ContainerFileAccessors).ArrayMax;
    piVar1 = &(this->ContainerFileAccessors).ArrayNum;
    if (*local_718 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&local_750->AllocatorInstance,*piVar1,local_718);
    }
    local_768 = 0;
    if ((local_748->TocReader).Toc.Header.PartitionCount != 0) {
      do {
        local_6c8.Base = (wchar_t *)local_6a8;
        local_6c8.bIsDynamic = false;
        local_6c8.bIsExternal = false;
        local_6c8.End = (wchar_t *)&local_4a8;
        local_6c8.CurPos = (wchar_t *)local_6a8;
        local_710 = *(undefined4 *)&local_728->DataPtr;
        uStack_70c = *(undefined4 *)((longlong)&local_728->DataPtr + 4);
        iStack_708 = local_728->Size;
        uStack_704 = *(undefined4 *)&local_728->field_0xc;
        iVar7 = (int)*(undefined8 *)&local_728->Size;
        uVar16 = (ulong64)iVar7;
        local_6d8 = local_710;
        uStack_6d4 = uStack_70c;
        iStack_6d0 = iStack_708;
        uStack_6cc = uStack_704;
        if (&local_4a8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_6a8[0].Base + uVar16 * 2))
        {
          TStringBuilderBase<wchar_t>::Extend(&local_6c8,uVar16);
        }
        if (iVar7 != 0) {
          pvVar9 = FGenericPlatformString::Memcpy
                             (local_6c8.CurPos,(void *)CONCAT44(uStack_70c,local_710),uVar16 * 2);
          local_6c8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar16 * 2);
        }
        if (local_768 != 0) {
          ::FString::PrintfImpl(&local_760,L"_s%d");
          pvVar9 = (void *)CONCAT44(local_760.Data.AllocatorInstance.Data._4_4_,
                                    local_760.Data.AllocatorInstance.Data._0_4_);
          iVar7 = local_760.Data.ArrayNum + -1;
          if (local_760.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          uVar16 = (ulong64)iVar7;
          pvVar20 = pvVar9;
          if (local_6c8.End <
              (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_6c8.CurPos + uVar16 * 2))
          {
            TStringBuilderBase<wchar_t>::Extend(&local_6c8,uVar16);
            pvVar20 = (void *)CONCAT44(local_760.Data.AllocatorInstance.Data._4_4_,
                                       local_760.Data.AllocatorInstance.Data._0_4_);
          }
          if (iVar7 != 0) {
            pvVar9 = FGenericPlatformString::Memcpy(local_6c8.CurPos,pvVar9,uVar16 * 2);
            pvVar20 = (void *)CONCAT44(local_760.Data.AllocatorInstance.Data._4_4_,
                                       local_760.Data.AllocatorInstance.Data._0_4_);
            local_6c8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar16 * 2);
          }
          if (pvVar20 != (void *)0x0) {
            FMemory::Free(pvVar20);
          }
        }
        if (local_6c8.End <
            (TStringBuilderBase<wchar_t> *)((longlong)((longlong)local_6c8.CurPos + 8) + 2)) {
          TStringBuilderBase<wchar_t>::Extend(&local_6c8,5);
        }
        pvVar9 = FGenericPlatformString::Memcpy(local_6c8.CurPos,L".ucas",10);
        local_6c8.CurPos = (wchar_t *)((longlong)pvVar9 + 10);
        p_Var10 = ::operator_new(0x248);
        p_Var18 = (LPCRITICAL_SECTION)0x0;
        if (p_Var10 != (LPCRITICAL_SECTION)0x0) {
          if (local_6c8.End < (TStringBuilderBase<wchar_t> *)(local_6c8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_6c8,1);
          }
          pwVar14 = local_6c8.Base;
          *local_6c8.CurPos = L'\0';
          lVar17 = 0xc;
          p_Var18 = p_Var10;
          do {
            InitializeCriticalSectionAndSpinCount(p_Var18,4000);
            pIVar5 = local_720;
            p_Var18 = p_Var18 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          *(undefined4 *)&p_Var10[0xe].OwningThread = 0;
          p_Var19 = p_Var10 + 0xc;
          lVar17 = 0xc;
          *(undefined1 *)((longlong)&p_Var10[0xe].OwningThread + 4) = 1;
          do {
            p_Var11 = (PRTL_CRITICAL_SECTION_DEBUG)
                      (**(code **)((longlong)*pIVar5 + 0xe8))(pIVar5,pwVar14,0);
            p_Var19->DebugInfo = p_Var11;
            if (p_Var11 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              *(undefined1 *)((longlong)&p_Var10[0xe].OwningThread + 4) = 0;
            }
            p_Var19 = (LPCRITICAL_SECTION)&p_Var19->LockCount;
            lVar17 = lVar17 + -1;
            p_Var18 = p_Var10;
          } while (lVar17 != 0);
        }
        pTVar4 = local_750;
        iVar21 = 0;
        iVar7 = *piVar1;
        if (iVar7 == *local_718) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_750->AllocatorInstance,local_718);
          *piVar1 = iVar7;
        }
        *piVar1 = iVar7 + 1;
        *(LPCRITICAL_SECTION *)((pTVar4->AllocatorInstance).Data + (longlong)iVar7 * 8) = p_Var18;
        uVar15 = *piVar1 - 1;
        uVar8 = 0;
        if ((int)uVar15 < *piVar1) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FIoStatus *)(*pcVar2)();
          return pFVar12;
        }
        if (*(longlong *)((pTVar4->AllocatorInstance).Data + (longlong)*piVar1 * 8 + -8) == 0) {
          local_288._8_8_ = local_260;
          local_288._0_4_ = FileOpenFailed;
          local_288._4_4_ = 0;
          local_278 = local_260;
          local_268 = 0;
          local_270 = local_60;
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)(local_288 + 8),
                     L"Failed to open IoStore container file \'",0x27);
          if (local_4a8.End < local_4a8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_4a8,1);
          }
          pwVar14 = local_4a8.Base;
          *local_4a8.CurPos = L'\0';
          if (local_4a8.Base != (wchar_t *)0x0) {
            sVar13 = wcslen(local_4a8.Base);
            iVar21 = (int)sVar13;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)(local_288 + 8),pwVar14,iVar21);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)(local_288 + 8),L"\'",1);
          __return_storage_ptr__ = local_740;
          FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_288,local_740);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                    ((TStringBuilderBase<wchar_t> *)(local_288 + 8));
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6c8);
          goto LAB_1417dbb9d;
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6c8);
        local_768 = local_768 + 1;
      } while (local_768 < (local_748->TocReader).Toc.Header.PartitionCount);
    }
    TVar3.Chars = FIoStatus::Ok.ErrorMessage.Chars;
    (local_740->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (TVar3.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar14 = TVar3.Chars + -4;
      *(int *)pwVar14 = *(int *)pwVar14 + 1;
      UNLOCK();
    }
    local_740->ErrorCode = FIoStatus::Ok.ErrorCode;
    local_740->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
    __return_storage_ptr__ = local_740;
LAB_1417dbb9d:
    if (local_738.ErrorMessage.Chars == (wchar_t *)0x0) goto LAB_1417dbbbe;
    pwVar14 = local_738.ErrorMessage.Chars + -4;
  }
  else {
    (__return_storage_ptr__->ErrorMessage).Chars = local_738.ErrorMessage.Chars;
    if (local_738.ErrorMessage.Chars == (wchar_t *)0x0) {
      pwVar14 = (wchar_t *)&DAT_fffffffffffffff8;
    }
    else {
      pwVar14 = local_738.ErrorMessage.Chars + -4;
      LOCK();
      *(int *)pwVar14 = *(int *)pwVar14 + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = local_738.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = local_738.SystemErrorCode;
    if (local_738.ErrorMessage.Chars == (wchar_t *)0x0) goto LAB_1417dbbbe;
  }
  LOCK();
  iVar7 = *(int *)pwVar14;
  *(int *)pwVar14 = *(int *)pwVar14 + -1;
  UNLOCK();
  if (iVar7 == 1) {
    FMemory::Free(pwVar14);
  }
LAB_1417dbbbe:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4a8);
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// Read @ 1417efbf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

TIoStatusOr<FIoBuffer> * __thiscall
FIoStoreReaderImpl::Read
          (FIoStoreReaderImpl *this,TIoStatusOr<FIoBuffer> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2)

{
  atomic<unsigned_int> *paVar1;
  FTaskBase **ppFVar2;
  wchar_t *_Dst;
  atomic<unsigned_int> aVar3;
  byte bVar4;
  FName FVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  uint uVar9;
  undefined8 uVar10;
  TSharedString<wchar_t> TVar11;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar12;
  ForAnyElementType _Src;
  bool bVar13;
  int *piVar14;
  FIoOffsetAndLength *pFVar15;
  ulonglong uVar16;
  TIoStatusOr<FIoBuffer> *pTVar17;
  FIoStatus *pFVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  FIoBuffer this_00;
  ulonglong uVar23;
  FTaskBase *_Size;
  uchar *_Dst_00;
  uint uVar24;
  FTaskBase *this_01;
  FTaskBase *pFVar25;
  FTaskBase **ppFVar26;
  FTaskBase *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  FTaskBase *pFVar30;
  bool bVar31;
  bool bVar32;
  byte local_128;
  char local_126 [6];
  FIoBuffer local_120;
  uchar *local_118;
  ulonglong local_110;
  FIoStoreTocCompressedBlockEntry *local_108;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  FTaskBase *local_e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_d0;
  FTaskBase *local_c0 [3];
  ulonglong local_a8;
  FIoStatus local_a0;
  TArrayView<FIoStoreTocCompressedBlockEntry_const_,int> *local_90;
  FIoStatus local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  FIoStatus local_48;
  
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_TIoStatusOr<FIoBuffer>___cdecl_FIoStoreReaderImpl::Read(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId664,"ReadChunk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
               ,0x298);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_TIoStatusOr<FIoBuffer>___cdecl_FIoStoreReaderImpl::Read(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId664);
  }
  piVar14 = TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
            ::Find((TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
                    *)&(this->TocReader).ChunkIdToIndex,param_1);
  if ((piVar14 == (int *)0x0) ||
     (pFVar15 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                          (&(this->TocReader).Toc.ChunkOffsetLengths,*piVar14),
     pFVar15 == (FIoOffsetAndLength *)0x0)) {
    ::LexToString(&local_58,param_1);
    ::FString::PrintfImpl(&local_78,L"Unknown chunk ID \'%s\'");
    _Src.Data = local_78.Data.AllocatorInstance.Data;
    local_a0.ErrorMessage.Chars = (wchar_t *)0x0;
    iVar21 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar21 = 0;
    }
    if (iVar21 != 0) {
      lVar22 = (longlong)iVar21;
      puVar19 = FMemory::Malloc(lVar22 * 2 + 10,0);
      *puVar19 = 1;
      _Dst = (wchar_t *)(puVar19 + 2);
      puVar19[1] = iVar21;
      local_a0.ErrorMessage.Chars = _Dst;
      if (0 < iVar21) {
        memcpy(_Dst,_Src.Data,lVar22 * 2);
      }
      _Dst[lVar22] = L'\0';
    }
    local_a0.ErrorCode = UnknownChunkID;
    local_a0.SystemErrorCode = 0;
    TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer>(__return_storage_ptr__,&local_a0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar29 = param_2->RequestedOffset;
    uVar23 = CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar15->OffsetAndLength[0],
                                                 pFVar15->OffsetAndLength[1]),
                                        pFVar15->OffsetAndLength[2]),pFVar15->OffsetAndLength[3]),
                      pFVar15->OffsetAndLength[4]) + uVar29;
    uVar20 = (ulonglong)
             CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar15->OffsetAndLength[5],
                                                 pFVar15->OffsetAndLength[6]),
                                        pFVar15->OffsetAndLength[7]),pFVar15->OffsetAndLength[8]),
                      pFVar15->OffsetAndLength[9]);
    pFVar27 = (FTaskBase *)0x0;
    if (uVar29 <= uVar20) {
      pFVar27 = (FTaskBase *)(uVar20 - uVar29);
      if ((FTaskBase *)param_2->RequestedSize < pFVar27) {
        pFVar27 = (FTaskBase *)param_2->RequestedSize;
      }
    }
    uVar29 = CONCAT44(0,(this->TocReader).Toc.Header.CompressionBlockSize);
    FIoBuffer::FIoBuffer(&local_120,(ulong64)pFVar27);
    if (pFVar27 == (FTaskBase *)0x0) {
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
      (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
      TVar11 = FIoStatus::Ok.ErrorMessage;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
      if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
             *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = TVar11.Chars;
      (__return_storage_ptr__->StatusValue).ErrorCode = FIoStatus::Ok.ErrorCode;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
      *(TRefCountPtr<FIoBuffer::BufCore> *)(__return_storage_ptr__->Value).Pad =
           local_120.CorePtr.Reference;
      local_120.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
    }
    else {
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_126[0] = '\0';
      local_126[1] = '\0';
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      local_c0[0] = (FTaskBase *)0x0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar29;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar23;
      local_f0 = SUB168(auVar7 / auVar6,0);
      local_c0[1] = (FTaskBase *)0x0;
      local_128 = 0;
      local_a8 = (((ulonglong)
                   ((pFVar27->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
                   uVar23 + uVar29 + -0x59) & ~(uVar29 - 1)) - 1) / uVar29;
      uVar28 = (this->TocReader).Toc.Header.CompressionBlockSize;
      local_90 = &(this->TocReader).Toc.CompressionBlocks;
      local_e8 = (FTaskBase *)
                 TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                           (local_90,SUB164(auVar7 / auVar6,0));
      uVar24 = (*(uint *)((longlong)&local_e8->_padding_ + 4) >> 8) + 0xf & 0xfffffff0;
      uVar9 = uVar24;
      if (uVar24 < uVar28) {
        uVar9 = uVar28;
      }
      if ((uint)local_d0.ArrayNum < uVar9) {
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_d0,uVar9,Default);
      }
      uVar16 = local_e8->_padding_ & 0xffffffffff;
      uVar20 = (this->TocReader).Toc.Header.PartitionSize;
      StartAsyncRead(this,(int)local_c0 + 0x10,uVar16 / uVar20 & 0xffffffff,uVar16 % uVar20,
                     (uchar *)(ulonglong)uVar24,(atomic<bool> *)local_d0.AllocatorInstance.Data);
      pFVar25 = local_c0[2];
      local_110 = uVar23 % uVar29;
      local_c0[2] = (FTaskBase *)0x0;
      local_118 = (uchar *)0x0;
      local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.ArrayNum = 0;
      local_e0.ArrayMax = 0;
      this_01 = pFVar25;
      if ((int)local_f0 <= (int)local_a8) {
        do {
          bVar4 = local_128;
          iVar21 = (int)local_f0 + 1;
          pFVar25 = (FTaskBase *)0x0;
          if (iVar21 <= (int)local_a8) {
            local_128 = local_128 ^ 1;
            local_100 = &local_d0 + local_128;
            uVar28 = (this->TocReader).Toc.Header.CompressionBlockSize;
            local_108 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                                  (&(this->TocReader).Toc.CompressionBlocks,iVar21);
            pTVar12 = local_100;
            uVar24 = (*(uint *)(local_108->Data + 4) >> 8) + 0xf & 0xfffffff0;
            uVar9 = uVar24;
            if (uVar24 < uVar28) {
              uVar9 = uVar28;
            }
            if ((uint)local_100->ArrayNum < uVar9) {
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                        (local_100,uVar9,Default);
            }
            uVar20 = *(ulonglong *)local_108->Data & 0xffffffffff;
            uVar29 = (this->TocReader).Toc.Header.PartitionSize;
            StartAsyncRead(this,(int)&local_e8,uVar20 / uVar29 & 0xffffffff,uVar20 % uVar29,
                           (uchar *)(ulonglong)uVar24,
                           (atomic<bool> *)(pTVar12->AllocatorInstance).Data);
            pFVar25 = local_e8;
            local_e8 = (FTaskBase *)0x0;
          }
          bVar32 = -1 < CpuChannel->Enabled;
          if (bVar32) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&`public:_class_TIoStatusOr<FIoBuffer>___cdecl_FIoStoreReaderImpl::Read(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'
                        ::__l17::__CpuProfilerEventSpecId743,"WaitForIo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                       ,0x2e7);
            FCpuProfilerTrace::OutputBeginEvent
                      (`public:_class_TIoStatusOr<FIoBuffer>___cdecl_FIoStoreReaderImpl::Read(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'
                       ::__l17::__CpuProfilerEventSpecId743);
          }
          if (this_01 != (FTaskBase *)0x0) {
            UE::Tasks::Private::FTaskBase::Wait(this_01);
          }
          if (bVar32) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          local_f8 = (ulonglong)bVar4;
          if (local_126[bVar4] == '\0') {
            puVar19 = FMemory::Malloc(0x70,0);
            local_88.ErrorCode = ReadError;
            local_88.SystemErrorCode = 0;
            *puVar19 = 1;
            local_88.ErrorMessage.Chars = (wchar_t *)(puVar19 + 2);
            puVar19[1] = 0x33;
            uVar10 = u_Failed_async_re._8_8_;
            *(undefined8 *)local_88.ErrorMessage.Chars = u_Failed_async_re._0_8_;
            *(undefined8 *)(puVar19 + 4) = uVar10;
            uVar10 = u_Failed_async_re._24_8_;
            *(undefined8 *)(puVar19 + 6) = u_Failed_async_re._16_8_;
            *(undefined8 *)(puVar19 + 8) = uVar10;
            uVar10 = u_Failed_async_re._40_8_;
            *(undefined8 *)(puVar19 + 10) = u_Failed_async_re._32_8_;
            *(undefined8 *)(puVar19 + 0xc) = uVar10;
            uVar10 = u_Failed_async_re._56_8_;
            *(undefined8 *)(puVar19 + 0xe) = u_Failed_async_re._48_8_;
            *(undefined8 *)(puVar19 + 0x10) = uVar10;
            uVar10 = u_Failed_async_re._72_8_;
            *(undefined8 *)(puVar19 + 0x12) = u_Failed_async_re._64_8_;
            *(undefined8 *)(puVar19 + 0x14) = uVar10;
            uVar10 = u_Failed_async_re._88_8_;
            *(undefined8 *)(puVar19 + 0x16) = u_Failed_async_re._80_8_;
            *(undefined8 *)(puVar19 + 0x18) = uVar10;
            puVar19[0x1a] = u_Failed_async_re._96_4_;
            *(wchar_t *)(puVar19 + 0x1b) = u_Failed_async_re[0x32];
            *(undefined2 *)((longlong)puVar19 + 0x6e) = 0;
            TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer>(__return_storage_ptr__,&local_88);
            if (this_01 != (FTaskBase *)0x0) {
              LOCK();
              paVar1 = &this_01->RefCount;
              aVar3 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar3 == (atomic<unsigned_int>)0x1) {
                (**(code **)this_01->_padding_)(this_01,1);
              }
            }
            if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.AllocatorInstance.Data);
            }
            if (pFVar25 != (FTaskBase *)0x0) {
              LOCK();
              paVar1 = &pFVar25->RefCount;
              aVar3 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar3 == (atomic<unsigned_int>)0x1) {
                (**(code **)pFVar25->_padding_)(pFVar25,1);
              }
            }
            ppFVar26 = local_c0 + 2;
            lVar22 = 2;
            do {
              ppFVar2 = ppFVar26 + -2;
              ppFVar26 = ppFVar26 + -2;
              lVar22 = lVar22 + -1;
              if (*ppFVar2 != (FTaskBase *)0x0) {
                FMemory::Free(*ppFVar2);
              }
            } while (lVar22 != 0);
            goto LAB_1417f05ba;
          }
          local_100 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                      TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                                (local_90,(int)local_f0);
          uVar28 = *(uint *)((longlong)&(local_100->AllocatorInstance).Data + 4);
          if (((this->TocReader).Toc.Header.ContainerFlags & Encrypted) != None) {
            bVar32 = -1 < CpuChannel->Enabled;
            if (bVar32) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&`public:_class_TIoStatusOr<FIoBuffer>___cdecl_FIoStoreReaderImpl::Read(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'
                          ::__l23::__CpuProfilerEventSpecId758,"Decrypt",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                         ,0x2f6);
              FCpuProfilerTrace::OutputBeginEvent
                        (`public:_class_TIoStatusOr<FIoBuffer>___cdecl_FIoStoreReaderImpl::Read(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'
                         ::__l23::__CpuProfilerEventSpecId758);
            }
            FAES::DecryptData((uchar *)(&local_d0)[local_f8].AllocatorInstance.Data,
                              (ulonglong)((uVar28 >> 8) + 0xf & 0xfffffff0),
                              &(this->TocReader).DecryptionKey);
            if (bVar32) {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
          pTVar12 = local_100;
          bVar4 = *(uchar *)((longlong)&local_100->ArrayNum + 3);
          if (((this->TocReader).Toc.CompressionMethods.ArrayNum <= (int)(uint)bVar4) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar8 = (code *)swi(3);
            pTVar17 = (TIoStatusOr<FIoBuffer> *)(*pcVar8)();
            return pTVar17;
          }
          uVar28 = pTVar12->ArrayNum & 0xffffff;
          _Size = (FTaskBase *)(ulonglong)uVar28;
          FVar5 = *(FName *)((this->TocReader).Toc.CompressionMethods.AllocatorInstance.Data +
                            (ulonglong)bVar4 * 8);
          local_108 = *(FIoStoreTocCompressedBlockEntry **)local_120.CorePtr.Reference;
          if (FVar5 != (FName)0x0) {
            if ((local_110 == 0) && (_Size <= pFVar27)) {
              if ((local_108->Data +
                   CONCAT14(*(uchar *)((longlong)local_120.CorePtr.Reference + 0x18),
                            *(uint *)((longlong)local_120.CorePtr.Reference + 8)) <
                   local_108->Data +
                   (longlong)
                   ((_Size->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
                   (longlong)local_118 + -0x58)) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("UncompressedDestination + UncompressedSize <= UncompressedBuffer.Data() + UncompressedBuffer.DataSize()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                                      ,0x316,L""), bVar32)) {
                pcVar8 = (code *)swi(3);
                pTVar17 = (TIoStatusOr<FIoBuffer> *)(*pcVar8)();
                return pTVar17;
              }
              bVar32 = FCompression::UncompressMemory
                                 (FVar5,local_108->Data + (longlong)local_118,(long64)_Size,
                                  (&local_d0)[local_f8].AllocatorInstance.Data,
                                  (ulonglong)
                                  (*(uint *)((longlong)&(local_100->AllocatorInstance).Data + 4) >>
                                  8),COMPRESS_NoFlags,0);
            }
            else {
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                        (&local_e0,uVar28,Default);
              bVar32 = FCompression::UncompressMemory
                                 (FVar5,local_e0.AllocatorInstance.Data,(long64)_Size,
                                  (&local_d0)[local_f8].AllocatorInstance.Data,
                                  (ulonglong)
                                  (*(uint *)((longlong)&(local_100->AllocatorInstance).Data + 4) >>
                                  8),COMPRESS_NoFlags,0);
              pFVar30 = (FTaskBase *)((longlong)_Size - local_110);
              _Size = pFVar27;
              if (pFVar30 < pFVar27) {
                _Size = pFVar30;
              }
              _Dst_00 = local_108->Data + (longlong)local_118;
              if (((undefined1 *)
                   ((ulonglong)
                    CONCAT14(*(uchar *)((longlong)local_120.CorePtr.Reference + 0x18),
                             *(uint *)((longlong)local_120.CorePtr.Reference + 8)) +
                   *(longlong *)local_120.CorePtr.Reference) <
                   _Dst_00 + (longlong)(&_Size->Prerequisites + -3) + 8) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("UncompressedDestination + CopySize <= UncompressedBuffer.Data() + UncompressedBuffer.DataSize()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                                      ,0x30f,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                pTVar17 = (TIoStatusOr<FIoBuffer> *)(*pcVar8)();
                return pTVar17;
              }
              memcpy(_Dst_00,local_e0.AllocatorInstance.Data + local_110,(size_t)_Size);
            }
            local_118 = (_Size->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
                        (longlong)local_118 + -0x58;
            if (bVar32 != false) goto LAB_1417f02f0;
            local_68.Size = 0x1a;
            local_68.DataPtr = L"Failed uncompressing chunk";
            pFVar18 = FIoStatus::FIoStatus(&local_48,ReadError,&local_68);
            TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer>(__return_storage_ptr__,pFVar18);
            if (this_01 != (FTaskBase *)0x0) {
              LOCK();
              paVar1 = &this_01->RefCount;
              aVar3 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar3 == (atomic<unsigned_int>)0x1) {
                (**(code **)this_01->_padding_)(this_01,1);
              }
            }
            if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.AllocatorInstance.Data);
            }
            if (pFVar25 != (FTaskBase *)0x0) {
              LOCK();
              paVar1 = &pFVar25->RefCount;
              aVar3 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar3 == (atomic<unsigned_int>)0x1) {
                (**(code **)pFVar25->_padding_)(pFVar25,1);
              }
            }
            ppFVar26 = local_c0 + 2;
            lVar22 = 2;
            do {
              ppFVar2 = ppFVar26 + -2;
              ppFVar26 = ppFVar26 + -2;
              lVar22 = lVar22 + -1;
              if (*ppFVar2 != (FTaskBase *)0x0) {
                FMemory::Free(*ppFVar2);
              }
              this_00.CorePtr.Reference = local_120.CorePtr.Reference;
            } while (lVar22 != 0);
            if (local_120.CorePtr.Reference == (BufCore *)0x0) goto LAB_1417f0699;
            FIoBuffer::BufCore::CheckRefCount((BufCore *)local_120.CorePtr.Reference);
            LOCK();
            piVar14 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
            iVar21 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            goto LAB_1417f0498;
          }
          pFVar30 = (FTaskBase *)((longlong)_Size - local_110);
          _Size = pFVar27;
          if (pFVar30 < pFVar27) {
            _Size = pFVar30;
          }
          if ((local_108->Data +
               CONCAT14(*(uchar *)((longlong)local_120.CorePtr.Reference + 0x18),
                        *(uint *)((longlong)local_120.CorePtr.Reference + 8)) <
               local_108->Data +
               (longlong)
               ((_Size->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
               (longlong)local_118 + -0x58)) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UncompressedDestination + CopySize <= UncompressedBuffer.Data() + UncompressedBuffer.DataSize()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                                  ,0x300,L""), bVar32)) {
            pcVar8 = (code *)swi(3);
            pTVar17 = (TIoStatusOr<FIoBuffer> *)(*pcVar8)();
            return pTVar17;
          }
          memcpy(local_108->Data + (longlong)local_118,
                 (&local_d0)[local_f8].AllocatorInstance.Data + local_110,(size_t)_Size);
          local_118 = (_Size->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
                      (longlong)local_118 + -0x58;
LAB_1417f02f0:
          pFVar27 = (FTaskBase *)((longlong)pFVar27 - (longlong)_Size);
          local_110 = 0;
          if (this_01 != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = &this_01->RefCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<unsigned_int>)0x1) {
              (**(code **)this_01->_padding_)(this_01,1);
            }
          }
          uVar28 = (int)local_f0 + 1;
          local_f0 = (ulonglong)uVar28;
          this_01 = pFVar25;
        } while ((int)uVar28 <= (int)local_a8);
      }
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
      (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
      TVar11 = FIoStatus::Ok.ErrorMessage;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
      if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
             *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = TVar11.Chars;
      (__return_storage_ptr__->StatusValue).ErrorCode = FIoStatus::Ok.ErrorCode;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
      *(TRefCountPtr<FIoBuffer::BufCore> *)(__return_storage_ptr__->Value).Pad =
           local_120.CorePtr.Reference;
      local_120.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      if (pFVar25 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar25->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar25->_padding_)(pFVar25,1);
        }
      }
      ppFVar26 = local_c0 + 2;
      lVar22 = 2;
      do {
        ppFVar2 = ppFVar26 + -2;
        ppFVar26 = ppFVar26 + -2;
        lVar22 = lVar22 + -1;
        if (*ppFVar2 != (FTaskBase *)0x0) {
          FMemory::Free(*ppFVar2);
        }
      } while (lVar22 != 0);
LAB_1417f05ba:
      this_00.CorePtr.Reference = local_120.CorePtr.Reference;
      if (local_120.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_120.CorePtr.Reference);
        LOCK();
        piVar14 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
        iVar21 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
LAB_1417f0498:
        if (iVar21 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
          ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
        }
      }
    }
  }
LAB_1417f0699:
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ReadAsync @ 1417f25e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TIoStatusOr<FIoBuffer>_> __thiscall
FIoStoreReaderImpl::ReadAsync(FIoStoreReaderImpl *this,FIoChunkId *param_1,FIoReadOptions *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  ulong64 uVar13;
  bool bVar14;
  int iVar15;
  int *piVar16;
  FIoOffsetAndLength *pFVar17;
  TTask<TIoStatusOr<FIoBuffer>_> TVar18;
  FTask *pFVar19;
  FTaskBase *pFVar20;
  FIoStoreTocCompressedBlockEntry *pFVar21;
  FIoStoreTocCompressedBlockEntry *pFVar22;
  FTaskBase *pFVar23;
  atomic<unsigned___int64> aVar24;
  longlong lVar25;
  ulonglong uVar26;
  FTaskBase *pFVar27;
  int iVar28;
  ulonglong *in_R9;
  FPipe *pFVar29;
  FTaskBase *pFVar30;
  bool bVar31;
  FTaskBase *local_a0 [1];
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_80;
  FIoStoreReaderImpl *local_78;
  FTaskBase *pFStack_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong uStack_60;
  FPipe *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FTaskBase *local_48;
  atomic<unsigned___int64> aStack_40;
  FIoStoreReaderImpl *local_38;
  
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_UE::Tasks::TTask<TIoStatusOr<FIoBuffer>_>___cdecl_FIoStoreReaderImpl::ReadAsync(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId515,"ReadChunkAsync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
               ,0x203);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_UE::Tasks::TTask<TIoStatusOr<FIoBuffer>_>___cdecl_FIoStoreReaderImpl::ReadAsync(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId515);
  }
  piVar16 = TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
            ::Find((TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
                    *)&(this->TocReader).ChunkIdToIndex,(FIoChunkId *)param_2);
  if ((piVar16 == (int *)0x0) ||
     (pFVar17 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                          (&(this->TocReader).Toc.ChunkOffsetLengths,*piVar16),
     pFVar17 == (FIoOffsetAndLength *)0x0)) {
    uVar3 = param_2->RequestedOffset;
    uVar13 = param_2->RequestedSize;
    pFVar20 = (FTaskBase *)0x0;
    param_1->Id[0] = '\0';
    param_1->Id[1] = '\0';
    param_1->Id[2] = '\0';
    param_1->Id[3] = '\0';
    param_1->Id[4] = '\0';
    param_1->Id[5] = '\0';
    param_1->Id[6] = '\0';
    param_1->Id[7] = '\0';
    pFVar27 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar27 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar27,2,true);
      pFVar27->_padding_ =
           (longlong)&___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
      if (((*(ulonglong *)&(pFVar27->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsCompleted()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                              ,0x1dd,L"State: %d"), bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar18 = (TTask<TIoStatusOr<FIoBuffer>_>)(*pcVar12)();
        return TVar18;
      }
      (**(code **)(*(longlong *)&(pFVar27->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar27->LowLevelTask).field_0x28,&pFVar27->LowLevelTask);
      *(FTaskBase **)&pFVar27->LowLevelTask = pFVar27;
      *(undefined ***)&(pFVar27->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(pFVar27->LowLevelTask).field_0x8 = pFVar27;
      pFVar19 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar19 != (FTask *)0x0) {
        pFVar20 = *(FTaskBase **)&pFVar19->field_0x30;
      }
      *(FTaskBase **)&(pFVar27->LowLevelTask).field_0x30 = pFVar20;
      *(undefined8 *)&(pFVar27->LowLevelTask).field_0x38 = 0xc80000541a01c800;
      pFVar27->ExtendedPriority = Inline;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&pFVar27->_padding_);
      pFVar27[1]._padding_ = uVar3;
      *(int *)&pFVar27[1]._padding_ = (int)uVar13;
      pFVar27->_padding_ =
           (longlong)
           &
           ___7__TExecutableTask_V<lambda_1>__4__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z__Private_Tasks_UE__6B_
      ;
      pFVar20 = pFVar27;
    }
    puVar5 = *(undefined8 **)param_1->Id;
    if (puVar5 != (undefined8 *)0x0) {
      param_1->Id[0] = '\0';
      param_1->Id[1] = '\0';
      param_1->Id[2] = '\0';
      param_1->Id[3] = '\0';
      param_1->Id[4] = '\0';
      param_1->Id[5] = '\0';
      param_1->Id[6] = '\0';
      param_1->Id[7] = '\0';
      LOCK();
      piVar16 = (int *)(puVar5 + 6);
      iVar15 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    *(FTaskBase **)param_1->Id = pFVar20;
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x100);
    if (bVar31) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    pFVar20 = (FTaskBase *)0x0;
    uVar4 = *in_R9;
    pFVar29 = (FPipe *)(CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar17->OffsetAndLength[0],
                                                            pFVar17->OffsetAndLength[1]),
                                                   pFVar17->OffsetAndLength[2]),
                                          pFVar17->OffsetAndLength[3]),pFVar17->OffsetAndLength[4])
                       + uVar4);
    uVar26 = (ulonglong)
             CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar17->OffsetAndLength[5],
                                                 pFVar17->OffsetAndLength[6]),
                                        pFVar17->OffsetAndLength[7]),pFVar17->OffsetAndLength[8]),
                      pFVar17->OffsetAndLength[9]);
    pFVar27 = pFVar20;
    if (uVar4 <= uVar26) {
      pFVar27 = (FTaskBase *)(uVar26 - uVar4);
      if ((FTaskBase *)in_R9[1] < pFVar27) {
        pFVar27 = (FTaskBase *)in_R9[1];
      }
    }
    local_98 = CONCAT44(0,(this->TocReader).Toc.Header.CompressionBlockSize);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_98;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = pFVar29;
    local_90 = SUB168(auVar9 / auVar6,0);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_98;
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         ((ulonglong)
          ((pFVar27->Prerequisites).Prerequisites.AllocatorInstance.InlineData + (local_98 - 0x59) +
          (longlong)pFVar29) & ~(local_98 - 1)) - 1;
    local_88 = SUB168(auVar10 / auVar7,0);
    iVar15 = SUB164(auVar10 / auVar7,0);
    iVar28 = SUB164(auVar9 / auVar6,0);
    if (iVar15 - iVar28 == -1) {
      param_1->Id[0] = '\0';
      param_1->Id[1] = '\0';
      param_1->Id[2] = '\0';
      param_1->Id[3] = '\0';
      param_1->Id[4] = '\0';
      param_1->Id[5] = '\0';
      param_1->Id[6] = '\0';
      param_1->Id[7] = '\0';
      pFVar27 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar27 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar27,2,true);
        pFVar27->_padding_ =
             (longlong)&___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
        if (((*(ulonglong *)&(pFVar27->LowLevelTask).field_0x38 & 0x20) == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsCompleted()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                ,0x1dd,L"State: %d"), bVar14)) {
          pcVar12 = (code *)swi(3);
          TVar18 = (TTask<TIoStatusOr<FIoBuffer>_>)(*pcVar12)();
          return TVar18;
        }
        (**(code **)(*(longlong *)&(pFVar27->LowLevelTask).field_0x28 + 0x18))
                  (&(pFVar27->LowLevelTask).field_0x28,&pFVar27->LowLevelTask);
        *(FTaskBase **)&pFVar27->LowLevelTask = pFVar27;
        *(undefined ***)&(pFVar27->LowLevelTask).field_0x28 =
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(FTaskBase **)&(pFVar27->LowLevelTask).field_0x8 = pFVar27;
        pFVar19 = LowLevelTasks::FTask::GetActiveTask();
        if (pFVar19 != (FTask *)0x0) {
          pFVar20 = *(FTaskBase **)&pFVar19->field_0x30;
        }
        *(FTaskBase **)&(pFVar27->LowLevelTask).field_0x30 = pFVar20;
        *(undefined8 *)&(pFVar27->LowLevelTask).field_0x38 = 0xc80000541a01d200;
        pFVar27->ExtendedPriority = Inline;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&pFVar27->_padding_);
        pFVar27->_padding_ =
             (longlong)
             &
             ___7__TExecutableTask_V<lambda_2>__7__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z__Private_Tasks_UE__6B_
        ;
        pFVar20 = pFVar27;
      }
      puVar5 = *(undefined8 **)param_1->Id;
      if (puVar5 != (undefined8 *)0x0) {
        param_1->Id[0] = '\0';
        param_1->Id[1] = '\0';
        param_1->Id[2] = '\0';
        param_1->Id[3] = '\0';
        param_1->Id[4] = '\0';
        param_1->Id[5] = '\0';
        param_1->Id[6] = '\0';
        param_1->Id[7] = '\0';
        LOCK();
        piVar16 = (int *)(puVar5 + 6);
        iVar15 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      *(FTaskBase **)param_1->Id = pFVar20;
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x100);
    }
    else {
      pFVar21 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                          (&(this->TocReader).Toc.CompressionBlocks,iVar28);
      pFVar22 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                          (&(this->TocReader).Toc.CompressionBlocks,iVar15);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (this->TocReader).Toc.Header.PartitionSize;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)pFVar21->Data & 0xffffffffff;
      iVar15 = SUB164(auVar11 / auVar8,0);
      if (((int)((*(ulonglong *)pFVar22->Data & 0xffffffffff) /
                (this->TocReader).Toc.Header.PartitionSize) != iVar15) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("static_cast<int32>(LastBlock.GetOffset() / TocResource.Header.PartitionSize) == PartitionIndex"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                              ,0x22e,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar18 = (TTask<TIoStatusOr<FIoBuffer>_>)(*pcVar12)();
        return TVar18;
      }
      uVar4 = *(ulonglong *)pFVar22->Data;
      aVar24 = (atomic<unsigned___int64>)
               ((*(ulonglong *)pFVar21->Data & 0xffffffffff) %
               (this->TocReader).Toc.Header.PartitionSize);
      uVar26 = (this->TocReader).Toc.Header.PartitionSize;
      pFVar23 = ::operator_new(0x40);
      pFVar30 = pFVar20;
      if (pFVar23 != (FTaskBase *)0x0) {
        pFVar23->_padding_ = 0;
        *(undefined8 *)&(pFVar23->RefCount).field_0x1 = 0;
        *(undefined4 *)((longlong)&pFVar23->Pipe + 2) = 0;
        *(undefined2 *)((longlong)&pFVar23->Pipe + 6) = 0;
        pFVar23->_padding_ = 0;
        pFVar23->_padding_ = 0;
        pFVar23->_padding_ = 0;
        *(undefined1 *)&pFVar23->RefCount = 0;
        *(undefined1 *)((longlong)&pFVar23->Pipe + 1) = 0;
        pFVar30 = pFVar23;
      }
      lVar25 = (((ulonglong)((uint)(uVar4 >> 0x28) + 0xf) & 0xfffffff0) + (uVar4 & 0xffffffffff)) %
               uVar26 - (longlong)aVar24;
      pFVar30->_padding_ = lVar25;
      pFVar30->_padding_ = (longlong)pFVar27;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,lVar25,(ForAnyElementType *)pFVar30,&pFVar30->_padding_,&pFVar30->_padding_);
      if (*(char *)&pFVar30->RefCount != '\0') {
        FIoBuffer::~FIoBuffer((FIoBuffer *)&pFVar30->_padding_);
      }
      FIoBuffer::FIoBuffer((FIoBuffer *)&pFVar30->_padding_,pFVar30->_padding_);
      *(undefined1 *)&pFVar30->RefCount = 1;
      StartAsyncRead(this,(int)local_a0,SUB168(auVar11 / auVar8,0) & 0xffffffff,(long64)aVar24,
                     (uchar *)(longlong)(int)pFVar30->_padding_,(atomic<bool> *)pFVar30->_padding_);
      uStack_60 = local_98;
      uStack_50 = (undefined4)local_90;
      uStack_4c = (undefined4)local_88;
      local_80.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])local_a0[0];
      local_78 = this;
      pFStack_70 = pFVar30;
      local_68 = iVar15;
      local_58 = pFVar29;
      local_48 = pFVar27;
      aStack_40 = aVar24;
      local_38 = this;
      pFVar27 = FMemory::Malloc(0x140,0x40);
      if (pFVar27 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar27,2,true);
        pFVar27->_padding_ =
             (longlong)&___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
        UE::Tasks::Private::FTaskBase::Init(pFVar27,L"FIoStoreReader::AsyncRead",Default,None,None);
        pFVar27[1]._padding_ = (longlong)local_78;
        pFVar27[1]._padding_ = (longlong)pFStack_70;
        pFVar27[1]._padding_ = CONCAT44(uStack_64,local_68);
        pFVar27[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_60;
        pFVar27[1].NumLocks = (atomic<unsigned_int>)uStack_60._4_4_;
        pFVar27[1].Pipe = local_58;
        pFVar27[1].StateChangeEvent = (TEventCount<unsigned_int>)uStack_50;
        pFVar27[1].ExtendedPriority = (char)uStack_4c;
        pFVar27[1].TaskTriggered = (atomic<bool>)(char)((uint)uStack_4c >> 8);
        pFVar27[1]._padding_ = (short)((uint)uStack_4c >> 0x10);
        *(FTaskBase **)&pFVar27[1].ExecutingThreadId = local_48;
        pFVar27[1].TraceId = aStack_40;
        *(FIoStoreReaderImpl **)pFVar27[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData
             = local_38;
        pFVar27->_padding_ =
             (longlong)
             &
             ___7__TExecutableTask_V<lambda_3>__1__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z__Private_Tasks_UE__6B_
        ;
        pFVar20 = pFVar27;
      }
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
                (pFVar20,&local_80,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x140);
      *(FTaskBase **)param_1->Id = pFVar20;
      if (local_a0[0] != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &local_a0[0]->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)local_a0[0]->_padding_)(local_a0[0],1);
        }
      }
    }
    if (bVar31) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return (TTask<TIoStatusOr<FIoBuffer>_>)param_1;
}

// ReadCompressed @ 1417f2d70

/* WARNING: Removing unreachable block (ram,0x0001417f3491) */
/* WARNING: Removing unreachable block (ram,0x0001417f3496) */
/* WARNING: Removing unreachable block (ram,0x0001417f34a5) */
/* WARNING: Removing unreachable block (ram,0x0001417f34b2) */
/* WARNING: Removing unreachable block (ram,0x0001417f34bf) */
/* WARNING: Removing unreachable block (ram,0x0001417f34ca) */
/* WARNING: Removing unreachable block (ram,0x0001417f350a) */
/* WARNING: Removing unreachable block (ram,0x0001417f34db) */
/* WARNING: Removing unreachable block (ram,0x0001417f350c) */
/* WARNING: Removing unreachable block (ram,0x0001417f351a) */
/* WARNING: Removing unreachable block (ram,0x0001417f3540) */
/* WARNING: Removing unreachable block (ram,0x0001417f3551) */
/* WARNING: Removing unreachable block (ram,0x0001417f3554) */
/* WARNING: Removing unreachable block (ram,0x0001417f3558) */
/* WARNING: Removing unreachable block (ram,0x0001417f358a) */
/* WARNING: Removing unreachable block (ram,0x0001417f358b) */
/* WARNING: Removing unreachable block (ram,0x0001417f35b1) */
/* WARNING: Removing unreachable block (ram,0x0001417f35b9) */
/* WARNING: Removing unreachable block (ram,0x0001417f35bd) */
/* WARNING: Removing unreachable block (ram,0x0001417f35c2) */
/* WARNING: Removing unreachable block (ram,0x0001417f35d5) */
/* WARNING: Removing unreachable block (ram,0x0001417f35d9) */
/* WARNING: Enum "Type": Some values do not have unique names */

TIoStatusOr<FIoStoreCompressedReadResult> * __thiscall
FIoStoreReaderImpl::ReadCompressed
          (FIoStoreReaderImpl *this,
          TIoStatusOr<FIoStoreCompressedReadResult> *__return_storage_ptr__,FIoChunkId *param_1,
          FIoReadOptions *param_2,bool param_3)

{
  atomic<unsigned_int> *paVar1;
  longlong lVar2;
  atomic<unsigned_int> aVar3;
  atomic<bool> aVar4;
  TRefCountPtr<FIoBuffer::BufCore> TVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  TSharedString<wchar_t> TVar13;
  FIoBuffer FVar14;
  ForAnyElementType _Src;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  FIoOffsetAndLength *pFVar19;
  TIoStatusOr<FIoStoreCompressedReadResult> *pTVar20;
  FIoBuffer *pFVar21;
  FIoStoreTocCompressedBlockEntry *pFVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  atomic<bool> *paVar26;
  uint uVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  atomic<bool> *paVar30;
  ulonglong uVar31;
  longlong lVar32;
  wchar_t *pwVar33;
  atomic<bool> *paVar34;
  bool bVar35;
  FIoBuffer local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  atomic<bool> *local_d8;
  ulonglong local_d0;
  atomic<bool> *local_c8;
  atomic<bool> *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  FIoBuffer local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FIoBuffer local_70;
  FTaskBase *local_68;
  FString local_60;
  FString local_50;
  
  bVar35 = -1 < CpuChannel->Enabled;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_TIoStatusOr<FIoStoreCompressedReadResult>___cdecl_FIoStoreReaderImpl::ReadCompressed(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64,bool)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId807,"ReadChunkCompressed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
               ,0x327);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_TIoStatusOr<FIoStoreCompressedReadResult>___cdecl_FIoStoreReaderImpl::ReadCompressed(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64,bool)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId807);
  }
  piVar18 = TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
            ::Find((TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
                    *)&(this->TocReader).ChunkIdToIndex,param_1);
  if ((piVar18 == (int *)0x0) ||
     (pFVar19 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                          (&(this->TocReader).Toc.ChunkOffsetLengths,*piVar18),
     pFVar19 == (FIoOffsetAndLength *)0x0)) {
    ::LexToString(&local_50,param_1);
    ::FString::PrintfImpl(&local_60,L"Unknown chunk ID \'%s\'");
    _Src.Data = local_60.Data.AllocatorInstance.Data;
    pwVar33 = (wchar_t *)0x0;
    iVar17 = local_60.Data.ArrayNum + -1;
    if (local_60.Data.ArrayNum == 0) {
      iVar17 = 0;
    }
    if (iVar17 != 0) {
      lVar25 = (longlong)iVar17;
      puVar23 = FMemory::Malloc(lVar25 * 2 + 10,0);
      *puVar23 = 1;
      pwVar33 = (wchar_t *)(puVar23 + 2);
      puVar23[1] = iVar17;
      if (0 < iVar17) {
        memcpy(pwVar33,_Src.Data,lVar25 * 2);
      }
      pwVar33[lVar25] = L'\0';
    }
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    if (pwVar33 == (wchar_t *)0x0) {
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
      (__return_storage_ptr__->StatusValue).ErrorCode = UnknownChunkID;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    }
    else {
      LOCK();
      *(int *)(pwVar33 + -4) = *(int *)(pwVar33 + -4) + 1;
      UNLOCK();
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = pwVar33;
      pwVar33 = pwVar33 + -4;
      (__return_storage_ptr__->StatusValue).ErrorCode = UnknownChunkID;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
      LOCK();
      iVar17 = *(int *)pwVar33;
      *(int *)pwVar33 = *(int *)pwVar33 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        FMemory::Free(pwVar33);
      }
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  else {
    paVar30 = (atomic<bool> *)0x0;
    uVar28 = param_2->RequestedOffset;
    local_d0 = 0;
    uVar31 = CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar19->OffsetAndLength[0],
                                                 pFVar19->OffsetAndLength[1]),
                                        pFVar19->OffsetAndLength[2]),pFVar19->OffsetAndLength[3]),
                      pFVar19->OffsetAndLength[4]) + uVar28;
    uVar24 = (ulonglong)
             CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar19->OffsetAndLength[5],
                                                 pFVar19->OffsetAndLength[6]),
                                        pFVar19->OffsetAndLength[7]),pFVar19->OffsetAndLength[8]),
                      pFVar19->OffsetAndLength[9]);
    if (uVar28 <= uVar24) {
      local_d0 = uVar24 - uVar28;
      if (param_2->RequestedSize < local_d0) {
        local_d0 = param_2->RequestedSize;
      }
    }
    uVar24 = CONCAT44(0,(this->TocReader).Toc.Header.CompressionBlockSize);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar24;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar31;
    local_b8 = SUB168(auVar9 / auVar6,0);
    local_c8 = (atomic<bool> *)0x0;
    local_c0 = (atomic<bool> *)0x0;
    uVar28 = local_b8 & 0xffffffff;
    lVar25 = (longlong)SUB164(auVar9 / auVar6,0);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar24;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = ((uVar24 - 1) + local_d0 + uVar31 & ~(uVar24 - 1)) - 1;
    local_a8 = SUB168(auVar10 / auVar7,0);
    local_b0 = (longlong)SUB164(auVar10 / auVar7,0);
    paVar34 = local_c8;
    paVar26 = local_c0;
    if (lVar25 <= local_b0) {
      lVar32 = lVar25 * 0xc;
      lVar25 = (local_b0 - lVar25) + 1;
      paVar34 = paVar30;
      do {
        uVar27 = (uint)uVar28;
        uVar16 = 0;
        if ((int)uVar27 < (this->TocReader).Toc.CompressionBlocks.ArrayNum) {
          uVar16 = ~uVar27 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar12 = (code *)swi(3);
          pTVar20 = (TIoStatusOr<FIoStoreCompressedReadResult> *)(*pcVar12)();
          return pTVar20;
        }
        uVar28 = (ulonglong)(uVar27 + 1);
        lVar2 = lVar32 + 4;
        lVar32 = lVar32 + 0xc;
        uVar16 = *(uint *)(((this->TocReader).Toc.CompressionBlocks.DataPtr)->Data + lVar2) >> 8;
        paVar34 = paVar34 + uVar16;
        paVar30 = paVar30 + ((ulonglong)(uVar16 + 0xf) & 0xfffffff0);
        lVar25 = lVar25 + -1;
        paVar26 = paVar30;
      } while (lVar25 != 0);
    }
    local_c0 = paVar26;
    local_c8 = paVar34;
    FIoBuffer::FIoBuffer(&local_100);
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = (atomic<bool> *)0x0;
    pFVar21 = FIoBuffer::FIoBuffer(&local_70,(ulong64)local_c0);
    FVar14.CorePtr.Reference = local_100.CorePtr.Reference;
    if (&local_100 != pFVar21) {
      TVar5.Reference = (pFVar21->CorePtr).Reference;
      (pFVar21->CorePtr).Reference = (BufCore *)0x0;
      bVar15 = local_100.CorePtr.Reference != (BufCore *)0x0;
      local_100.CorePtr.Reference =
           (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)TVar5.Reference;
      if (bVar15) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar14.CorePtr.Reference);
        LOCK();
        piVar18 = (int *)((longlong)FVar14.CorePtr.Reference + 0xc);
        iVar17 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)FVar14.CorePtr.Reference);
          ::operator_delete((void *)FVar14.CorePtr.Reference,0x20);
        }
      }
    }
    if (local_70.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_70.CorePtr.Reference);
      LOCK();
      piVar18 = (int *)((longlong)local_70.CorePtr.Reference + 0xc);
      iVar17 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_70.CorePtr.Reference);
        ::operator_delete((void *)local_70.CorePtr.Reference,0x20);
      }
    }
    uVar16 = ((int)local_a8 - (int)local_b8) + 1;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (local_f0._4_4_ < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar16,&local_f8,(int)local_f0,(int *)((longlong)&local_f0 + 4));
    }
    local_e8 = uVar31 % uVar24;
    local_e0 = local_d0;
    local_d8 = local_c8;
    iVar17 = (int)local_b8;
    uVar28 = local_b8 & 0xffffffff;
    local_d0 = 0;
    if (iVar17 <= local_b0) {
      lVar25 = (longlong)iVar17 * 0xc;
      lVar32 = (local_b0 - iVar17) + 1;
      do {
        uVar27 = (uint)uVar28;
        uVar16 = 0;
        if ((int)uVar27 < (this->TocReader).Toc.CompressionBlocks.ArrayNum) {
          uVar16 = ~uVar27 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar12 = (code *)swi(3);
          pTVar20 = (TIoStatusOr<FIoStoreCompressedReadResult> *)(*pcVar12)();
          return pTVar20;
        }
        local_c8 = (atomic<bool> *)
                   (((this->TocReader).Toc.CompressionBlocks.DataPtr)->Data + lVar25);
        iVar17 = (int)local_f0;
        if ((int)local_f0 == local_f0._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar17 + 1);
        pFVar29 = local_f8.Data + (longlong)iVar17 * 0x20;
        DefaultConstructItems<FIoStoreCompressedBlockInfo,int>(pFVar29,1);
        aVar4 = local_c8[0xb];
        uVar24 = (ulonglong)(byte)aVar4;
        if ((this->TocReader).Toc.CompressionMethods.ArrayNum <= (int)(uint)(byte)aVar4) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar12 = (code *)swi(3);
            pTVar20 = (TIoStatusOr<FIoStoreCompressedReadResult> *)(*pcVar12)();
            return pTVar20;
          }
          uVar24 = (ulonglong)(uint)(byte)aVar4;
        }
        uVar28 = (ulonglong)(uVar27 + 1);
        *(undefined8 *)pFVar29 =
             *(undefined8 *)
              ((this->TocReader).Toc.CompressionMethods.AllocatorInstance.Data + uVar24 * 8);
        *(uint *)(pFVar29 + 8) = *(uint *)(local_c8 + 4) >> 8;
        uVar16 = *(uint *)(local_c8 + 8);
        *(ulonglong *)(pFVar29 + 0x18) = local_d0;
        *(uint *)(pFVar29 + 0xc) = uVar16 & 0xffffff;
        uVar16 = (*(uint *)(local_c8 + 4) >> 8) + 0xf & 0xfffffff0;
        *(uint *)(pFVar29 + 0x10) = uVar16;
        local_d0 = local_d0 + uVar16;
        lVar25 = lVar25 + 0xc;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      iVar17 = (int)local_b8;
    }
    paVar30 = *(atomic<bool> **)local_100.CorePtr.Reference;
    pFVar22 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                        (&(this->TocReader).Toc.CompressionBlocks,iVar17);
    uVar24 = *(ulonglong *)pFVar22->Data & 0xffffffffff;
    uVar28 = (this->TocReader).Toc.Header.PartitionSize;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar28;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar24;
    local_a8 = SUB168(auVar11 / auVar8,0);
    paVar26 = (atomic<bool> *)(uVar24 % uVar28);
    paVar34 = local_c0;
    StartAsyncRead(this,(int)&local_68,(ulonglong)SUB164(auVar11 / auVar8,0),(long64)paVar26,
                   (uchar *)local_c0,paVar30);
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_class_TIoStatusOr<FIoStoreCompressedReadResult>___cdecl_FIoStoreReaderImpl::ReadCompressed(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64,bool)const___ptr64'
                  ::__l14::__CpuProfilerEventSpecId875,"WaitForIo",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                 ,0x36b);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_class_TIoStatusOr<FIoStoreCompressedReadResult>___cdecl_FIoStoreReaderImpl::ReadCompressed(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64,bool)const___ptr64'
                 ::__l14::__CpuProfilerEventSpecId875);
    }
    if (local_68 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(local_68);
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (1 < (byte)LogIoStore._0_1_) {
      paVar30 = local_c0;
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_TIoStatusOr<FIoStoreCompressedReadResult>___cdecl_FIoStoreReaderImpl::ReadCompressed(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64,bool)const___ptr64'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&LogIoStore);
      paVar34 = paVar26;
    }
    local_a0.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FIoBuffer::FIoBuffer(&local_a0);
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    TVar13 = FIoStatus::Ok.ErrorMessage;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
           *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = TVar13.Chars;
    (__return_storage_ptr__->StatusValue).ErrorCode = FIoStatus::Ok.ErrorCode;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
    *(TRefCountPtr<FIoBuffer::BufCore> *)(__return_storage_ptr__->Value).Pad =
         local_a0.CorePtr.Reference;
    (__return_storage_ptr__->Value).Pad[8] = '\0';
    (__return_storage_ptr__->Value).Pad[9] = '\0';
    (__return_storage_ptr__->Value).Pad[10] = '\0';
    (__return_storage_ptr__->Value).Pad[0xb] = '\0';
    (__return_storage_ptr__->Value).Pad[0xc] = '\0';
    (__return_storage_ptr__->Value).Pad[0xd] = '\0';
    (__return_storage_ptr__->Value).Pad[0xe] = '\0';
    (__return_storage_ptr__->Value).Pad[0xf] = '\0';
    (__return_storage_ptr__->Value).Pad[0x10] = '\0';
    (__return_storage_ptr__->Value).Pad[0x11] = '\0';
    (__return_storage_ptr__->Value).Pad[0x12] = '\0';
    (__return_storage_ptr__->Value).Pad[0x13] = '\0';
    (__return_storage_ptr__->Value).Pad[0x14] = '\0';
    (__return_storage_ptr__->Value).Pad[0x15] = '\0';
    (__return_storage_ptr__->Value).Pad[0x16] = '\0';
    (__return_storage_ptr__->Value).Pad[0x17] = '\0';
    (__return_storage_ptr__->Value).Pad[0x18] = '\0';
    (__return_storage_ptr__->Value).Pad[0x19] = '\0';
    (__return_storage_ptr__->Value).Pad[0x1a] = '\0';
    (__return_storage_ptr__->Value).Pad[0x1b] = '\0';
    (__return_storage_ptr__->Value).Pad[0x1c] = '\0';
    (__return_storage_ptr__->Value).Pad[0x1d] = '\0';
    (__return_storage_ptr__->Value).Pad[0x1e] = '\0';
    (__return_storage_ptr__->Value).Pad[0x1f] = '\0';
    (__return_storage_ptr__->Value).Pad[0x20] = '\0';
    (__return_storage_ptr__->Value).Pad[0x21] = '\0';
    (__return_storage_ptr__->Value).Pad[0x22] = '\0';
    (__return_storage_ptr__->Value).Pad[0x23] = '\0';
    (__return_storage_ptr__->Value).Pad[0x24] = '\0';
    (__return_storage_ptr__->Value).Pad[0x25] = '\0';
    (__return_storage_ptr__->Value).Pad[0x26] = '\0';
    (__return_storage_ptr__->Value).Pad[0x27] = '\0';
    (__return_storage_ptr__->Value).Pad[0x28] = '\0';
    (__return_storage_ptr__->Value).Pad[0x29] = '\0';
    (__return_storage_ptr__->Value).Pad[0x2a] = '\0';
    (__return_storage_ptr__->Value).Pad[0x2b] = '\0';
    (__return_storage_ptr__->Value).Pad[0x2c] = '\0';
    (__return_storage_ptr__->Value).Pad[0x2d] = '\0';
    (__return_storage_ptr__->Value).Pad[0x2e] = '\0';
    (__return_storage_ptr__->Value).Pad[0x2f] = '\0';
    local_a0.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    if (local_68 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &local_68->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)local_68->_padding_)(local_68,1,0,0,paVar34,paVar30);
      }
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    FVar14.CorePtr.Reference = local_100.CorePtr.Reference;
    if (local_100.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_100.CorePtr.Reference);
      LOCK();
      piVar18 = (int *)((longlong)FVar14.CorePtr.Reference + 0xc);
      iVar17 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)FVar14.CorePtr.Reference);
        ::operator_delete((void *)FVar14.CorePtr.Reference,0x20);
      }
    }
  }
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// StartAsyncRead @ 141800e20

FTaskHandle __thiscall
FIoStoreReaderImpl::StartAsyncRead
          (FIoStoreReaderImpl *this,int param_1,long64 param_2,long64 param_3,uchar *param_4,
          atomic<bool> *param_5)

{
  code *pcVar1;
  bool bVar2;
  FTaskBase *this_00;
  FTaskHandle FVar3;
  FTask *pFVar4;
  undefined8 uVar5;
  undefined4 in_register_00000014;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar6;
  longlong in_stack_00000038;
  undefined4 uStack_2c;
  
  TVar6.Reference._4_4_ = in_register_00000014;
  TVar6.Reference._0_4_ = param_1;
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1__StartAsyncRead_FIoStoreReaderImpl__QEBA_AVFTaskHandle_Private_Tasks_UE__H_J0PEAEPEAU__atomic__N_std___Z_XX_Private_Tasks_UE__6B_
    ;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar3.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar1)();
      return (FTaskHandle)FVar3.Pimpl.Reference;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar4 = LowLevelTasks::FTask::GetActiveTask();
    uVar5 = 0;
    if (pFVar4 != (FTask *)0x0) {
      uVar5 = *(undefined8 *)&pFVar4->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar5;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541a00d000;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = (longlong)this;
    this_00[1]._padding_ = CONCAT44(uStack_2c,(int)param_2);
    this_00[1]._padding_ = param_3;
    this_00[1]._padding_ = (longlong)param_5;
    this_00[1]._padding_ = (longlong)param_4;
    this_00[1]._padding_ = in_stack_00000038;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1__StartAsyncRead_FIoStoreReaderImpl__QEBA_AVFTaskHandle_Private_Tasks_UE__H_J0PEAEPEAU__atomic__N_std___Z__Private_Tasks_UE__6B_
    ;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
  (TVar6.Reference)->_padding_ = (longlong)this_00;
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar6.Reference;
}

