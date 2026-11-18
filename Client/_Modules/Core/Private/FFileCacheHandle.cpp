// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FFileCacheHandle @ 141584380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFileCacheHandle * __thiscall
FFileCacheHandle::FFileCacheHandle
          (FFileCacheHandle *this,IAsyncReadFileHandle *param_1,long64 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FFileCacheHandle *pFVar7;
  undefined ***pppuVar8;
  undefined1 auStack_88 [32];
  FBaseGraphTask *local_68;
  code *local_58 [2];
  undefined **local_48;
  FFileCacheHandle *local_40;
  FBaseGraphTask *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(undefined8 *)&this->LineInfos = 0;
  *(undefined8 *)&(this->LineInfos).field_0x8 = 0;
  *(undefined8 *)&(this->LineInfos).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FFileCacheHandle__6B_;
  *(undefined4 *)&(this->LineInfos).field_0x28 = 0;
  *(undefined4 *)&(this->LineInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->LineInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LineInfos).field_0x34 = 0;
  *(undefined8 *)&(this->LineInfos).field_0x40 = 0;
  *(undefined4 *)&(this->LineInfos).field_0x48 = 0;
  this->BaseOffset = param_2;
  this->FileSize = -1;
  this->InnerHandle = param_1;
  (this->SizeRequestEvent).Reference = (FBaseGraphTask *)0x0;
  FBaseGraphTask::CreateGraphEvent();
  if (local_68 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&local_68->field_0x30 = *(int *)&local_68->field_0x30 + 1;
    UNLOCK();
  }
  pFVar3 = (this->SizeRequestEvent).Reference;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FFileCacheHandle::FFileCacheHandle'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FFileCacheHandle::FFileCacheHandle'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
                ::Call;
  local_30 = (undefined ***)0x0;
  local_38 = local_68;
  local_40 = this;
  if (pFVar3 != local_68) {
    (this->SizeRequestEvent).Reference = local_68;
    if (local_68 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_68->field_0x30 = *(int *)&local_68->field_0x30 + 1;
      UNLOCK();
    }
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
  }
  lVar6 = (**(code **)((longlong)*param_1 + 8))(param_1,local_58);
  if (lVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeRequest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x21e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FFileCacheHandle *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar8 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar8 = local_30;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_68 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &local_68->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_68)(local_68,1);
    }
  }
  return this;
}

// ~FFileCacheHandle @ 1415898d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FFileCacheHandle::~FFileCacheHandle(FFileCacheHandle *this)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  FBaseGraphTask *pFVar4;
  atomic<void_*> aVar5;
  IAsyncReadFileHandle *pIVar6;
  void *pvVar7;
  bool bVar8;
  uint uVar9;
  FTaskGraphInterface *pFVar10;
  FFileCache *pFVar11;
  LockFreeLinkAllocator_TLSCache *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  undefined1 auStackY_98 [32];
  TRefCountPtr<FBaseGraphTask> local_58;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_50;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this->_padding_ = (longlong)&___7FFileCacheHandle__6B_;
  if ((this->SizeRequestEvent).Reference != (FBaseGraphTask *)0x0) {
    pFVar10 = FTaskGraphInterface::Get();
    pcVar3 = *(code **)((longlong)*pFVar10 + 0x60);
    local_58.Reference = (this->SizeRequestEvent).Reference;
    if (local_58.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(local_58.Reference)->field_0x30 = *(int *)&(local_58.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    local_50.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_28 = 1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&local_50,1,&local_24);
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
    if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar12 = local_50.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar12,&local_58,1);
    (*pcVar3)(pFVar10,&local_50,0xff);
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
    if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar12 = local_50.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar12,local_28)
    ;
    if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_50.SecondaryData);
    }
    if (local_58.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_58.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_58.Reference)(local_58.Reference,1);
      }
    }
    pFVar4 = (this->SizeRequestEvent).Reference;
    if (pFVar4 != (FBaseGraphTask *)0x0) {
      (this->SizeRequestEvent).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar4->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
      }
    }
  }
  if (this->InnerHandle != (IAsyncReadFileHandle *)0x0) {
    WaitAll(this);
    pFVar11 = GetCache();
    bVar8 = FFileCache::EvictAll(pFVar11,this);
    if (!bVar8) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                         ,0x204,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = GetCache();
    while( true ) {
      uVar9 = FLockFreePointerListLIFORoot<64,1>::Pop
                        ((FLockFreePointerListLIFORoot<64,1> *)&pFVar11->CompletedRequests);
      if (uVar9 == 0) break;
      aVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar9 >> 0xe][uVar9 & 0x3fff].Payload;
      this_00 = GetLockFreeAllocator();
      LockFreeLinkAllocator_TLSCache::Push(this_00,uVar9);
      if (aVar5 == (atomic<void_*>)0x0) break;
      if (*(char *)((longlong)aVar5 + 0x41) == '\0') {
        (**(code **)(*(longlong *)aVar5 + 0x10))(aVar5,0);
      }
      (*(code *)**(undefined8 **)aVar5)(aVar5,1);
    }
    pIVar6 = this->InnerHandle;
    if (pIVar6 != (IAsyncReadFileHandle *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
  }
  pFVar4 = (this->SizeRequestEvent).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  *(undefined4 *)&(this->LineInfos).field_0x48 = 0;
  pvVar7 = *(void **)&(this->LineInfos).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FFileCacheHandle::FLineInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FFileCacheHandle::FLineInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FFileCacheHandle::FLineInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LineInfos);
  this->_padding_ = (longlong)&___7IFileCacheHandle__6B_;
  return;
}

// operator() @ 141590cd0

void __thiscall
`FFileCacheHandle::FFileCacheHandle'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,IAsyncReadRequest *param_2)

{
  FTaskBase *this_00;
  code *pcVar1;
  bool bVar2;
  FFileCache *this_01;
  IAsyncReadRequest_u_8 IVar3;
  
  if ((param_2->bDataIsReady == false) || (param_2->bSizeRequest == false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDataIsReady && bSizeRequest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  IVar3.Size = -1;
  if (param_2->bCanceled == false) {
    IVar3 = param_2->field8_0x8;
  }
  ((IAsyncReadRequest_u_8 *)(*(longlong *)this + 0x60))->Size = (long64)IVar3;
  if (*(longlong *)(*(longlong *)this + 0x60) < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->FileSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x216,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(FTaskBase **)((longlong)this + 8);
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  this_01 = GetCache();
  FFileCache::PushCompletedRequest(this_01,param_2);
  return;
}

// AcquireSlotAndReadLine @ 1415a81f0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FValidLineInfo * __thiscall
FFileCacheHandle::AcquireSlotAndReadLine
          (FFileCacheHandle *this,FValidLineInfo *__return_storage_ptr__,FFileCache *param_1,
          StrongBlockIdentifier<CacheLineStrongType> param_2,EAsyncIOPriorityAndFlags param_3)

{
  int *piVar1;
  longlong lVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FValidLineInfo *pFVar8;
  int *piVar9;
  undefined1 *puVar10;
  StrongBlockIdentifier<CacheSlotStrongType> local_res20;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  TRefCountPtr<FBaseGraphTask> local_88;
  int *local_80;
  int *local_78;
  undefined8 *local_70;
  code *local_68 [5];
  undefined8 *local_40;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId698,"FFileCacheHandle_AcquireSlotAndReadLine",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
               ,0x2ba);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId698);
  }
  local_98 = param_2.Id;
  if (*(int *)&(this->LineInfos).field_0x8 != *(int *)&(this->LineInfos).field_0x34) {
    puVar10 = *(undefined1 **)&(this->LineInfos).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->LineInfos).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->LineInfos).field_0x48 - 1U & param_2.Id) * 4);
    if (iVar7 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar7 * 0x20 + *(longlong *)&this->LineInfos);
        if (*piVar9 == param_2.Id) {
          if (piVar9 != (int *)0x0) goto LAB_1415a830e;
          break;
        }
        iVar7 = piVar9[6];
      } while (iVar7 != -1);
    }
  }
  local_80 = &local_98;
  TSet<TTuple<int,FFileCacheHandle::FLineInfo>,TDefaultMapHashableKeyFuncs<int,FFileCacheHandle::FLineInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_&&>_>
            ((TSet<TTuple<int,FFileCacheHandle::FLineInfo>,TDefaultMapHashableKeyFuncs<int,FFileCacheHandle::FLineInfo,0>,FDefaultSetAllocator>
              *)&this->LineInfos,(uint)&local_94,
             (TKeyInitializer<int_&&> *)(ulonglong)(uint)param_2.Id,(bool *)&local_80);
  piVar9 = (int *)((longlong)local_94 * 0x20 + *(longlong *)&this->LineInfos);
LAB_1415a830e:
  if ((((FLineInfo *)(piVar9 + 2))->SlotID).Id == -1) {
    FFileCache::AcquireAndLockSlot
              (param_1,(FFileCacheHandle *)&local_res20,
               (StrongBlockIdentifier<CacheLineStrongType>)(int)this);
    local_90 = param_2.Id;
    if (*(int *)&(this->LineInfos).field_0x8 != *(int *)&(this->LineInfos).field_0x34) {
      puVar10 = *(undefined1 **)&(this->LineInfos).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->LineInfos).field_0x38;
      }
      iVar7 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->LineInfos).field_0x48 - 1U & param_2.Id) * 4);
      if (iVar7 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar7 * 0x20 + *(longlong *)&this->LineInfos);
          if (*piVar9 == param_2.Id) {
            if (piVar9 != (int *)0x0) goto LAB_1415a83be;
            break;
          }
          iVar7 = piVar9[6];
        } while (iVar7 != -1);
      }
    }
    local_78 = &local_90;
    TSet<TTuple<int,FFileCacheHandle::FLineInfo>,TDefaultMapHashableKeyFuncs<int,FFileCacheHandle::FLineInfo,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<int_&&>_>
              ((TSet<TTuple<int,FFileCacheHandle::FLineInfo>,TDefaultMapHashableKeyFuncs<int,FFileCacheHandle::FLineInfo,0>,FDefaultSetAllocator>
                *)&this->LineInfos,(uint)&local_8c,
               (TKeyInitializer<int_&&> *)(ulonglong)(uint)param_2.Id,(bool *)&local_78);
    piVar9 = (int *)((longlong)local_8c * 0x20 + *(longlong *)&this->LineInfos);
LAB_1415a83be:
    lVar2 = *(longlong *)(piVar9 + 4);
    (((FLineInfo *)(piVar9 + 2))->SlotID).Id = local_res20.Id;
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0xd0) == '\0')) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LineInfo.PendingRequest.Event->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                           ,0x2cd,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FValidLineInfo *)(*pcVar4)();
      return pFVar8;
    }
    FBaseGraphTask::CreateGraphEvent();
    pFVar3 = *(FBaseGraphTask **)(piVar9 + 4);
    if (pFVar3 != local_88.Reference) {
      *(FBaseGraphTask **)(piVar9 + 4) = local_88.Reference;
      if (local_88.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(local_88.Reference)->field_0x30 = *(int *)&(local_88.Reference)->field_0x30 + 1;
        UNLOCK();
      }
      if (pFVar3 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar10 = &pFVar3->field_0x30;
        iVar7 = *(int *)puVar10;
        *(int *)puVar10 = *(int *)puVar10 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
        }
      }
    }
    if (this->FileSize < 0) {
      if (local_88.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(local_88.Reference)->field_0x30 = *(int *)&(local_88.Reference)->field_0x30 + 1;
        UNLOCK();
      }
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x28,8);
      local_40[1] = this;
      *local_40 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FFileCacheHandle::AcquireSlotAndReadLine'::`21'::<lambda_1>,1,1>
                   ::_vftable_;
      *(int *)(local_40 + 2) = local_res20.Id;
      *(int *)((longlong)local_40 + 0x14) = param_2.Id;
      local_40[4] = local_88.Reference;
      *(EAsyncIOPriorityAndFlags *)(local_40 + 3) = param_3;
      if (local_40 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FFileCacheHandle::AcquireSlotAndReadLine'::__l21::<lambda_1>,void>
                      ::Call;
      }
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_70,(TStatIdData *)local_68,
                 (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(int)this + 0x70);
      if (local_70 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_70 + 6);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*local_70)(local_70,1);
        }
      }
    }
    else {
      ReadLine(this,param_1,local_res20,param_2,param_3,&local_88);
    }
    __return_storage_ptr__->LineInfo = (FLineInfo *)(piVar9 + 2);
    __return_storage_ptr__->bWasValid = false;
    if (local_88.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar10 = &(local_88.Reference)->field_0x30;
      iVar7 = *(int *)puVar10;
      *(int *)puVar10 = *(int *)puVar10 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (*(code *)**(undefined8 **)local_88.Reference)(local_88.Reference,1);
      }
    }
  }
  else {
    __return_storage_ptr__->LineInfo = (FLineInfo *)(piVar9 + 2);
    __return_storage_ptr__->bWasValid = true;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// CheckForSizeRequestComplete @ 1415afcf0

void __thiscall FFileCacheHandle::CheckForSizeRequestComplete(FFileCacheHandle *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pFVar3 = (this->SizeRequestEvent).Reference;
  if ((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 != '\0')) {
    pFVar3 = (this->SizeRequestEvent).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      (this->SizeRequestEvent).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    if (this->FileSize < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                         ,0x29f,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (0x7ffffffe <
        (this->FileSize + -1 + (longlong)GFileCacheBlockSizeKB * 0x400) /
        ((longlong)GFileCacheBlockSizeKB * 0x400)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalNumSlots < ((int32) 0x7fffffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                         ,0x2a3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

// Evict @ 1415c0ab0

void __thiscall
FFileCacheHandle::Evict(FFileCacheHandle *this,StrongBlockIdentifier<CacheLineStrongType> param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *piVar7;
  int local_res10 [2];
  
  if (*(int *)&(this->LineInfos).field_0x8 != *(int *)&(this->LineInfos).field_0x34) {
    puVar6 = *(undefined1 **)&(this->LineInfos).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->LineInfos).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->LineInfos).field_0x48 - 1U & param_1.Id) *
                              4);
    if (iVar4 != -1) {
      while (piVar5 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)&(this->LineInfos).field_0x0),
            *piVar5 != param_1.Id) {
        iVar4 = piVar5[6];
        if (iVar4 == -1) {
          return;
        }
      }
      piVar7 = piVar5 + 2;
      if (piVar5 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      if (piVar7 != (int *)0x0) {
        if (*(longlong *)(piVar7 + 2) != 0) {
          if ((*(char *)(*(longlong *)(piVar7 + 2) + 0xd0) == '\0') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("LineInfo->PendingRequest.Event->IsComplete()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                                 ,0x390,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar1 = *(undefined8 **)(piVar7 + 2);
          if (puVar1 != (undefined8 *)0x0) {
            piVar7[2] = 0;
            piVar7[3] = 0;
            LOCK();
            piVar5 = (int *)(puVar1 + 6);
            iVar4 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
        }
        if (*(int *)&(this->LineInfos).field_0x8 != *(int *)&(this->LineInfos).field_0x34) {
          local_res10[0] = param_1.Id;
          TSet<TTuple<int,FFileCacheHandle::FLineInfo>,TDefaultMapHashableKeyFuncs<int,FFileCacheHandle::FLineInfo,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,FFileCacheHandle::FLineInfo>,TDefaultMapHashableKeyFuncs<int,FFileCacheHandle::FLineInfo,0>,FDefaultSetAllocator>
                             *)&this->LineInfos,param_1.Id,local_res10);
        }
      }
    }
  }
  return;
}

// PreloadData @ 1415d9050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
FFileCacheHandle::PreloadData
          (FFileCacheHandle *this,FFileCachePreloadEntry *param_1,int param_2,
          EAsyncIOPriorityAndFlags param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  atomic<unsigned_int> *paVar3;
  FTaskBase *pFVar4;
  int iVar5;
  atomic<unsigned_int> aVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  FFileCacheHandle *this_00;
  ulonglong uVar11;
  bool bVar12;
  int iVar13;
  TRefCountPtr<FBaseGraphTask> TVar14;
  FFileCache *this_01;
  ulonglong uVar15;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar16;
  FTaskBase *this_02;
  ulonglong uVar17;
  uint uVar18;
  FLineInfo *pFVar19;
  FPendingRequest *pFVar20;
  FBaseGraphTask *pFVar21;
  longlong *plVar22;
  undefined4 in_register_00000084;
  longlong lVar23;
  ForAnyElementType _Src;
  EAsyncIOPriorityAndFlags in_stack_00000028;
  undefined1 auStackY_138 [32];
  EExtendedTaskPriority local_e7;
  ETaskPriority local_e6 [6];
  ForAnyElementType local_e0;
  int local_d8;
  int local_d4;
  longlong *local_d0;
  FBaseGraphTask *local_c8;
  longlong local_c0;
  FFileCacheHandle *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  FValidLineInfo local_98;
  undefined1 local_88 [8];
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_80;
  ulonglong local_50;
  
  local_d0 = (longlong *)CONCAT44(in_register_00000084,param_2);
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c8 = (FBaseGraphTask *)param_1;
  local_b8 = this;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar9 = false;
    bVar10 = false;
  }
  else {
    bVar9 = true;
    bVar10 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId832,"FFileCacheHandle_PreloadData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
               ,0x340);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId832);
  }
  if (((int)param_3 < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumEntries > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                          ,0x342,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    TVar14.Reference = (FBaseGraphTask *)(*pcVar8)();
    return (TRefCountPtr<FBaseGraphTask>)TVar14.Reference;
  }
  this_01 = GetCache();
  if (this_01 == (FFileCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_01);
  CheckForSizeRequestComplete(this);
  local_80.ArrayMax = 4;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_80.ArrayNum = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d4 = 0;
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_3);
  }
  local_d8 = 0;
  if (param_3 != AIOP_MIN) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_3,&local_e0,0,&local_d4);
  }
  uVar17 = 0;
  local_c0 = -1;
  _Src.Data = local_e0.Data;
  iVar13 = local_d8;
  local_a0 = (longlong)(int)param_3;
  if (param_3 != AIOP_MIN) {
    local_a8 = 0;
    do {
      plVar22 = local_d0;
      bVar9 = bVar10;
      if (this_01->NumFreeSlots < 1) break;
      lVar23 = local_b8->BaseOffset + *local_d0;
      uVar15 = lVar23 / ((longlong)GFileCacheBlockSizeKB << 10);
      local_b0 = (local_d0[1] + -1 + lVar23) / ((longlong)GFileCacheBlockSizeKB << 10);
      if ((0x7ffffffe < (int)local_b0 + 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("EndLine.Get() + 1 < ((int32) 0x7fffffff)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                              ,0x357,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        TVar14.Reference = (FBaseGraphTask *)(*pcVar8)();
        return (TRefCountPtr<FBaseGraphTask>)TVar14.Reference;
      }
      if ((*plVar22 <= local_c0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Entry.Offset > PrevOffset",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                              ,0x359,L"Preload entries must be sorted by Offset [%lld, %lld), %lld")
         , bVar12)) {
        pcVar8 = (code *)swi(3);
        TVar14.Reference = (FBaseGraphTask *)(*pcVar8)();
        return (TRefCountPtr<FBaseGraphTask>)TVar14.Reference;
      }
      this_00 = local_b8;
      local_c0 = *plVar22;
      uVar11 = uVar15 & 0xffffffff;
      if ((int)uVar15 < (int)uVar17) {
        uVar11 = uVar17;
      }
      uVar17 = uVar11;
      if ((int)uVar17 <= (int)local_b0) {
        do {
          plVar22 = local_d0;
          if (this_01->NumFreeSlots < 1) break;
          AcquireSlotAndReadLine
                    (this_00,&local_98,this_01,
                     (StrongBlockIdentifier<CacheLineStrongType>)(int)uVar17,in_stack_00000028);
          pFVar19 = local_98.LineInfo;
          if (local_98.bWasValid == false) {
            if (((_Src.Data <= local_98.LineInfo) &&
                (local_98.LineInfo < (FLineInfo *)(&((FLineInfo *)_Src.Data)->SlotID + local_d4)))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar8 = (code *)swi(3);
              TVar14.Reference = (FBaseGraphTask *)(*pcVar8)();
              return (TRefCountPtr<FBaseGraphTask>)TVar14.Reference;
            }
            if (iVar13 == local_d4) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_e0,&local_d4);
              _Src.Data = local_e0.Data;
            }
            local_d8 = iVar13 + 1;
            (&((FLineInfo *)_Src.Data)->SlotID)[iVar13].Id = (pFVar19->SlotID).Id;
            iVar13 = local_d8;
          }
          pFVar21 = (pFVar19->PendingRequest).Event.Reference;
          pFVar20 = &pFVar19->PendingRequest;
          if ((pFVar21 == (FBaseGraphTask *)0x0) || (pFVar21->field_0xd0 != '\0')) {
            pFVar21 = (pFVar20->Event).Reference;
            if (pFVar21 != (FBaseGraphTask *)0x0) {
              (pFVar20->Event).Reference = (FBaseGraphTask *)0x0;
              LOCK();
              puVar1 = &pFVar21->field_0x30;
              iVar5 = *(int *)puVar1;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (*(code *)**(undefined8 **)pFVar21)(pFVar21,1);
              }
            }
          }
          else {
            FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(local_88 + 8);
            if (local_80.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar16 = local_80.AllocatorInstance.SecondaryData;
            }
            if ((ulonglong)FVar16 <= pFVar20) {
              FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(local_88 + 8);
              if (local_80.AllocatorInstance.SecondaryData !=
                  (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar16 = local_80.AllocatorInstance.SecondaryData;
              }
              if ((pFVar20 < (TRefCountPtr<FBaseGraphTask> *)
                             ((longlong)FVar16 + (longlong)local_80.ArrayMax * 8)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar8 = (code *)swi(3);
                TVar14.Reference = (FBaseGraphTask *)(*pcVar8)();
                return (TRefCountPtr<FBaseGraphTask>)TVar14.Reference;
              }
            }
            if (local_80.ArrayNum == local_80.ArrayMax) {
              local_80.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)(local_88 + 8),
                              &local_80.ArrayMax);
            }
            FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(local_88 + 8);
            if (local_80.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar16 = local_80.AllocatorInstance.SecondaryData;
            }
            lVar23 = (longlong)local_80.ArrayNum;
            local_80.ArrayNum = local_80.ArrayNum + 1;
            ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + lVar23 * 8))->Reference =
                 (FBaseGraphTask *)0x0;
            pFVar21 = (pFVar20->Event).Reference;
            ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + lVar23 * 8))->Reference = pFVar21;
            if (pFVar21 != (FBaseGraphTask *)0x0) {
              LOCK();
              *(int *)&pFVar21->field_0x30 = *(int *)&pFVar21->field_0x30 + 1;
              UNLOCK();
            }
          }
          uVar18 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar18;
          plVar22 = local_d0;
        } while ((int)uVar18 <= (int)local_b0);
      }
      local_d0 = plVar22 + 2;
      local_a8 = local_a8 + 1;
    } while (local_a8 < local_a0);
  }
  *(longlong *)local_c8 = 0;
  if (local_80.ArrayNum < 1) {
    pFVar21 = local_c8;
    if (0 < iVar13) {
      for (pFVar19 = (FLineInfo *)_Src.Data; pFVar21 = local_c8,
          pFVar19 != (FLineInfo *)(&((FLineInfo *)_Src.Data)->SlotID + iVar13);
          pFVar19 = (FLineInfo *)&pFVar19->field_0x4) {
        FFileCache::UnlockSlot
                  (this_01,(StrongBlockIdentifier<CacheSlotStrongType>)(pFVar19->SlotID).Id);
      }
    }
  }
  else {
    this_02 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
    if (this_02 == (FTaskBase *)0x0) {
      this_02 = (FTaskBase *)0x0;
    }
    else {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this_02,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)(local_88 + 8));
      this_02->_padding_ = (longlong)&___7__TGraphTask_UFFileCachePreloadTask____6B_;
    }
    pFVar4 = this_02 + 1;
    pFVar4->_padding_ = 0;
    piVar2 = (int *)((longlong)&this_02[1]._padding_ + 4);
    *(int *)&this_02[1]._padding_ = iVar13;
    if (iVar13 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar13,0,(ForAnyElementType *)pFVar4,iVar13,piVar2);
      memcpy((FScriptContainerElement *)pFVar4->_padding_,_Src.Data,(longlong)iVar13 << 2);
    }
    UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_e6,&local_e7);
    FBaseGraphTask::Init((FBaseGraphTask *)this_02,L"GraphTask",local_e6[0],local_e7,None);
    if (this_02 != (FTaskBase *)0x0) {
      LOCK();
      this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0xe8);
    pFVar21 = local_c8;
    if (local_c8 == (FBaseGraphTask *)local_88) {
      if (this_02 != (FTaskBase *)0x0) {
        LOCK();
        paVar3 = &this_02->RefCount;
        aVar6 = *paVar3;
        *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar6 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      puVar7 = *(undefined8 **)local_c8;
      *(FTaskBase **)local_c8 = this_02;
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar7 + 6);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
  }
  if ((FLineInfo *)_Src.Data != (FLineInfo *)0x0) {
    FMemory::Free(_Src.Data);
  }
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(local_88 + 8);
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar16 = local_80.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar16,local_80.ArrayNum);
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_01);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TRefCountPtr<FBaseGraphTask>)pFVar21;
}

// ReadData @ 1415da240

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<IMemoryReadStream> __thiscall
FFileCacheHandle::ReadData
          (FFileCacheHandle *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,long64 param_2,long64 param_3,EAsyncIOPriorityAndFlags param_4)

{
  int *piVar1;
  FPendingRequest *pFVar2;
  FScriptContainerElement *pFVar3;
  FBaseGraphTask *pFVar4;
  undefined1 *puVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FLineInfo *pFVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_SFC_ReadData> FVar19;
  ulonglong uVar20;
  TRefCountPtr<IMemoryReadStream> TVar21;
  FFileCache *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  undefined8 *puVar22;
  undefined1 *puVar23;
  int iVar24;
  longlong lVar25;
  long64 lVar26;
  FName FVar27;
  int iVar28;
  uint uVar29;
  StrongBlockIdentifier<CacheLineStrongType> SVar30;
  uint uVar31;
  longlong lVar32;
  undefined4 in_stack_0000002c;
  EAsyncIOPriorityAndFlags in_stack_00000030;
  uint local_b0;
  FColor_u_0 local_a8 [2];
  FName local_a0;
  FName local_98;
  undefined8 *local_90;
  FName local_88;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FValidLineInfo local_60;
  FName local_50 [2];
  
  bVar17 = false;
  FVar19 = StatPtr_STAT_SFC_ReadData;
  if (StatPtr_STAT_SFC_ReadData == (FThreadSafeStaticStat<FStat_STAT_SFC_ReadData>)0x0) {
    pFVar18 = ::FName::FName(local_50,"STAT_SFC_ReadData");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_SFC_ReadData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SFC_ReadData,*pFVar18,
                        L"Read Data","STATGROUP_SFC","STATCAT_Advanced",L"Streaming File Cache",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar19;
  bVar12 = false;
  bVar16 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar8 = false;
  bVar11 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (bVar9 = bVar12, FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar16 = true;
      bVar8 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_a0.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                   ,0x2e7);
        bVar12 = true;
        bVar16 = true;
        bVar8 = true;
        bVar11 = true;
      }
    }
    bVar9 = bVar12;
    if (FThreadStats::bPrimaryEnable != false) {
      local_98 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar8 = true;
      bVar13 = true;
      bVar11 = bVar16;
      goto LAB_1415da3cb;
    }
  }
  bVar12 = bVar8;
  bVar13 = false;
  bVar8 = false;
  local_98 = local_88;
  FVar27 = local_88;
LAB_1415da3cb:
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar10 = false;
  }
  else {
    bVar17 = true;
    bVar10 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId744,"FFileCacheHandle_ReadData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
               ,0x2e8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId744);
  }
  lVar32 = this->BaseOffset + param_3;
  uVar20 = lVar32 / ((longlong)GFileCacheBlockSizeKB << 10);
  iVar7 = (int)((_param_4 + -1 + lVar32) / ((longlong)GFileCacheBlockSizeKB << 10));
  if ((0x7ffffffe < iVar7 + 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("EndLine.Get() + 1 < ((int32) 0x7fffffff)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                          ,0x2ed,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    TVar21.Reference = (IMemoryReadStream *)(*pcVar6)();
    return (TRefCountPtr<IMemoryReadStream>)TVar21.Reference;
  }
  this_00 = GetCache();
  if (this_00 == (FFileCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  CheckForSizeRequestComplete(this);
  local_b0 = (uint)uVar20;
  iVar28 = (iVar7 - local_b0) + 1;
  if (this_00->NumFreeSlots < iVar28) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    if (5 < (byte)LogStreamingFileCache._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamingFileCache);
    }
    ReadDataUncached(this,param_1,param_2,lVar32,param_4);
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar16) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar8) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_70.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
        local_70.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_78);
        local_70.StatData.Pad[4] = '\0';
        local_70.StatData.Pad[5] = '\0';
        local_70.StatData.Pad[6] = '\0';
        local_70.StatData.Pad[7] = '\0';
        local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
        local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
        local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
        local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_70);
        piVar1 = &this_01->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
  }
  else {
    if ((iVar28 < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumCacheSlots > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                            ,0x301,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      TVar21.Reference = (IMemoryReadStream *)(*pcVar6)();
      return (TRefCountPtr<IMemoryReadStream>)TVar21.Reference;
    }
    puVar22 = FMemory::Malloc((ulonglong)(iVar28 * 4 + 0x24),8);
    puVar22[1] = 0;
    puVar22[2] = 0;
    puVar22[3] = 0;
    puVar22[4] = 0;
    *puVar22 = &___7IMemoryReadStream__6B_;
    *puVar22 = &___7FMemoryReadStreamCache__6B_;
    *(undefined4 *)(puVar22 + 1) = 0;
    *(undefined4 *)((longlong)puVar22 + 0x24) = 0xffffffff;
    *(int *)(puVar22 + 4) = iVar28;
    lVar25 = (longlong)GFileCacheBlockSizeKB;
    puVar22[3] = _param_4;
    puVar22[2] = lVar32 - (lVar32 / (lVar25 * 0x400)) * lVar25 * 0x400;
    uVar20 = uVar20 & 0xffffffff;
    local_90 = puVar22;
    uVar31 = local_b0;
    while ((int)uVar31 <= iVar7) {
      SVar30.Id = (int)uVar20;
      AcquireSlotAndReadLine(this,&local_60,this_00,SVar30,in_stack_00000030);
      pFVar14 = local_60.LineInfo;
      if (local_60.bWasValid != false) {
        uVar29 = ((local_60.LineInfo)->SlotID).Id + 1;
        uVar31 = 0;
        if ((int)uVar29 < (this_00->SlotInfo).ArrayNum) {
          uVar31 = ~uVar29 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          TVar21.Reference = (IMemoryReadStream *)(*pcVar6)();
          return (TRefCountPtr<IMemoryReadStream>)TVar21.Reference;
        }
        pFVar3 = (this_00->SlotInfo).AllocatorInstance.Data;
        iVar28 = *(int *)(pFVar3 + (longlong)(int)uVar29 * 0x18 + 0x14);
        if (iVar28 == 0) {
          if ((this_00->NumFreeSlots < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumFreeSlots > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                                  ,0x1b7,L""), bVar17)) {
            pcVar6 = (code *)swi(3);
            TVar21.Reference = (IMemoryReadStream *)(*pcVar6)();
            return (TRefCountPtr<IMemoryReadStream>)TVar21.Reference;
          }
          this_00->NumFreeSlots = this_00->NumFreeSlots + -1;
          iVar24 = this_00->NumFreeSlots;
          if (this_00->MinNumFreeSlots < this_00->NumFreeSlots) {
            iVar24 = this_00->MinNumFreeSlots;
          }
          this_00->MinNumFreeSlots = iVar24;
          FFileCache::UnlinkSlot(this_00,uVar29);
        }
        *(int *)(pFVar3 + (longlong)(int)uVar29 * 0x18 + 0x14) = iVar28 + 1;
      }
      if (((pFVar14->SlotID).Id == -1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("LineInfo.SlotID.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                              ,0x315,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        TVar21.Reference = (IMemoryReadStream *)(*pcVar6)();
        return (TRefCountPtr<IMemoryReadStream>)TVar21.Reference;
      }
      pFVar2 = &pFVar14->PendingRequest;
      *(int *)((longlong)puVar22 + (longlong)(int)(SVar30.Id - local_b0) * 4 + 0x24) =
           (pFVar14->SlotID).Id;
      pFVar4 = (pFVar2->Event).Reference;
      if ((pFVar4 == (FBaseGraphTask *)0x0) || (pFVar4->field_0xd0 != '\0')) {
        pFVar4 = (pFVar2->Event).Reference;
        if (pFVar4 != (FBaseGraphTask *)0x0) {
          (pFVar2->Event).Reference = (FBaseGraphTask *)0x0;
          LOCK();
          puVar5 = &pFVar4->field_0x30;
          iVar28 = *(int *)puVar5;
          *(int *)puVar5 = *(int *)puVar5 + -1;
          UNLOCK();
          if (iVar28 == 1) {
            (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
          }
        }
      }
      else {
        puVar5 = *(undefined1 **)(param_2 + 0x20);
        puVar23 = (undefined1 *)param_2;
        if (puVar5 != (undefined1 *)0x0) {
          puVar23 = puVar5;
        }
        if (puVar23 <= pFVar2) {
          puVar23 = (undefined1 *)param_2;
          if (puVar5 != (undefined1 *)0x0) {
            puVar23 = puVar5;
          }
          if ((pFVar2 < puVar23 + (longlong)*(int *)(param_2 + 0x2c) * 8) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            TVar21.Reference = (IMemoryReadStream *)(*pcVar6)();
            return (TRefCountPtr<IMemoryReadStream>)TVar21.Reference;
          }
        }
        iVar28 = *(int *)(param_2 + 0x28);
        if (iVar28 == *(int *)(param_2 + 0x2c)) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)param_2,
                              (int *)(param_2 + 0x2c));
        }
        *(int *)(param_2 + 0x28) = iVar28 + 1;
        lVar26 = param_2;
        if (*(longlong *)(param_2 + 0x20) != 0) {
          lVar26 = *(longlong *)(param_2 + 0x20);
        }
        *(undefined8 *)(lVar26 + (longlong)iVar28 * 8) = 0;
        pFVar4 = (pFVar2->Event).Reference;
        *(FBaseGraphTask **)(lVar26 + (longlong)iVar28 * 8) = pFVar4;
        if (pFVar4 != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&pFVar4->field_0x30 = *(int *)&pFVar4->field_0x30 + 1;
          UNLOCK();
        }
      }
      uVar31 = SVar30.Id + 1;
      uVar20 = (ulonglong)uVar31;
      FVar27 = local_98;
      bVar17 = bVar10;
    }
    *(undefined8 **)(param_1->AllocatorInstance).InlineData = local_90;
    LOCK();
    *(int *)(local_90 + 1) = *(int *)(local_90 + 1) + 1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar13) {
      FThreadStats::AddMessage(FVar27,CycleScopeEnd);
    }
  }
  return (TRefCountPtr<IMemoryReadStream>)(IMemoryReadStream *)param_1;
}

// ReadDataUncached @ 1415daa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

TRefCountPtr<IMemoryReadStream> __thiscall
FFileCacheHandle::ReadDataUncached
          (FFileCacheHandle *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,long64 param_2,long64 param_3,EAsyncIOPriorityAndFlags param_4)

{
  int *piVar1;
  undefined8 **ppuVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 **ppuVar6;
  TRefCountPtr<IMemoryReadStream> TVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 **local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 *local_88 [2];
  code *local_78 [2];
  undefined **local_68;
  undefined8 *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FBaseGraphTask::CreateGraphEvent();
  if (local_88[0] != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_88[0] + 6) = *(int *)(local_88[0] + 6) + 1;
    UNLOCK();
  }
  ppuVar2 = *(undefined8 ***)(param_2 + 0x20);
  local_60 = local_88[0];
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FFileCacheHandle::ReadDataUncached'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FFileCacheHandle::ReadDataUncached'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
                ::Call;
  local_50 = (undefined ***)0x0;
  ppuVar6 = (undefined8 **)param_2;
  if (ppuVar2 != (undefined8 **)0x0) {
    ppuVar6 = ppuVar2;
  }
  if (ppuVar6 <= local_88) {
    ppuVar6 = (undefined8 **)param_2;
    if (ppuVar2 != (undefined8 **)0x0) {
      ppuVar6 = ppuVar2;
    }
    if (local_88 < ppuVar6 + *(int *)(param_2 + 0x2c)) {
      local_a0 = (longlong)*(int *)(param_2 + 0x28);
      local_98 = 8;
      local_b0 = (undefined8 **)param_2;
      if (ppuVar2 != (undefined8 **)0x0) {
        local_b0 = ppuVar2;
      }
      local_b8 = (code **)local_88;
      local_a8 = (longlong)*(int *)(param_2 + 0x2c);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar7.Reference = (IMemoryReadStream *)(*pcVar3)();
        return (TRefCountPtr<IMemoryReadStream>)TVar7.Reference;
      }
    }
  }
  iVar5 = *(int *)(param_2 + 0x28);
  if (iVar5 == *(int *)(param_2 + 0x2c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)param_2,
                       (int *)(param_2 + 0x2c));
  }
  *(int *)(param_2 + 0x28) = iVar5 + 1;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    param_2 = *(longlong *)(param_2 + 0x20);
  }
  puVar9 = (undefined8 *)(param_2 + (longlong)iVar5 * 8);
  *puVar9 = 0;
  *puVar9 = local_88[0];
  if (local_88[0] != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_88[0] + 6) = *(int *)(local_88[0] + 6) + 1;
    UNLOCK();
  }
  local_b8 = local_78;
  local_b0 = (undefined8 **)0x0;
  uVar8 = (**(code **)((longlong)*this->InnerHandle + 0x10))
                    (this->InnerHandle,param_3,CONCAT44(in_stack_0000002c,param_4),in_stack_00000030
                    );
  puVar9 = ::operator_new(0x28);
  if (puVar9 == (undefined8 *)0x0) {
    (param_1->AllocatorInstance).InlineData[0] = '\0';
    (param_1->AllocatorInstance).InlineData[1] = '\0';
    (param_1->AllocatorInstance).InlineData[2] = '\0';
    (param_1->AllocatorInstance).InlineData[3] = '\0';
    (param_1->AllocatorInstance).InlineData[4] = '\0';
    (param_1->AllocatorInstance).InlineData[5] = '\0';
    (param_1->AllocatorInstance).InlineData[6] = '\0';
    (param_1->AllocatorInstance).InlineData[7] = '\0';
  }
  else {
    puVar9[2] = 0;
    *puVar9 = &___7IMemoryReadStream__6B_;
    *puVar9 = &___7FMemoryReadStreamAsyncRequest__6B_;
    *(undefined4 *)(puVar9 + 1) = 0;
    puVar9[3] = uVar8;
    puVar9[4] = CONCAT44(in_stack_0000002c,param_4);
    *(undefined8 **)(param_1->AllocatorInstance).InlineData = puVar9;
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar10 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar10 = local_50;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if (local_88[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_88[0] + 6);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (local_88[0] != (undefined8 *)0x0)) {
      (**(code **)*local_88[0])(local_88[0],1);
    }
  }
  return (TRefCountPtr<IMemoryReadStream>)(IMemoryReadStream *)param_1;
}

// ReadLine @ 1415dac30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FFileCacheHandle::ReadLine
          (FFileCacheHandle *this,FFileCache *param_1,
          StrongBlockIdentifier<CacheSlotStrongType> param_2,
          StrongBlockIdentifier<CacheLineStrongType> param_3,EAsyncIOPriorityAndFlags param_4,
          TRefCountPtr<FBaseGraphTask> *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  code **local_68;
  uchar *local_60;
  code *local_58 [2];
  undefined **local_48;
  FBaseGraphTask *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->FileSize < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileSize >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x2a9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar5 = (longlong)GFileCacheBlockSizeKB * 0x400;
  lVar7 = this->FileSize - param_3.Id * lVar5;
  if (lVar5 < lVar7) {
    lVar7 = lVar5;
  }
  local_60 = FFileCache::GetSlotMemory(param_1,param_2);
  local_40 = param_5->Reference;
  if (local_40 == (FBaseGraphTask *)0x0) {
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FFileCacheHandle::ReadLine'::`2'::<lambda_1>,0,0>::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FFileCacheHandle::ReadLine'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
                  ::Call;
  }
  else {
    LOCK();
    *(int *)&local_40->field_0x30 = *(int *)&local_40->field_0x30 + 1;
    UNLOCK();
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FFileCacheHandle::ReadLine'::`2'::<lambda_1>,0,0>::_vftable_;
    LOCK();
    *(int *)&local_40->field_0x30 = *(int *)&local_40->field_0x30 + 1;
    UNLOCK();
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FFileCacheHandle::ReadLine'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
                  ::Call;
    LOCK();
    puVar1 = &local_40->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_40)(local_40,1);
    }
  }
  local_68 = local_58;
  (**(code **)((longlong)*this->InnerHandle + 0x10))
            (this->InnerHandle,param_3.Id * lVar5,lVar7,param_4);
  if (local_58[0] != (code *)0x0) {
    pppuVar6 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar6 = local_30;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// WaitAll @ 141609bd0

void __thiscall FFileCacheHandle::WaitAll(FFileCacheHandle *this)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->LineInfos).field_0x28;
  puVar1 = &(this->LineInfos).field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar9 = iVar13;
  iVar15 = iVar13;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->LineInfos).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    iVar15 = 0;
    iVar13 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141609c6e;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_141609c6e:
  uVar12 = *(uint *)&(this->LineInfos).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LineInfos).field_0x8 - *(int *)&(this->LineInfos).field_0x34)
  ;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->LineInfos).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->LineInfos).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141609d70;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar12 = local_res18 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_141609d70:
  while( true ) {
    if (*(int *)&(this->LineInfos).field_0x8 - *(int *)&(this->LineInfos).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FFileCacheHandle::FLineInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = *(longlong *)&this->LineInfos + (longlong)TStack_60.CurrentBitIndex * 0x20;
    if (*(longlong *)(lVar10 + 0x10) != 0) {
      if ((*(char *)(*(longlong *)(lVar10 + 0x10) + 0xd0) == '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("LineInfo.PendingRequest.Event->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                             ,0x39f,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar5 = *(undefined8 **)(lVar10 + 0x10);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        LOCK();
        piVar2 = (int *)(puVar5 + 6);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

