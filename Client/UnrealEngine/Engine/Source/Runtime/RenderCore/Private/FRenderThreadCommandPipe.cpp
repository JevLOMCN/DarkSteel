// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// operator() @ 145df4130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l5::<lambda_1>::operator()(void *this)

{
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  FMemStackBase *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_char> *paVar5;
  <lambda_1> local_res8;
  FContext local_68;
  
  paVar5 = (atomic<unsigned_char> *)(*(longlong *)this + 8);
  LOCK();
  FVar1.State = *paVar5;
  if (FVar1.State == (atomic<unsigned_char>)0x0) {
    *paVar5 = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (FVar1.State != (atomic<unsigned_char>)0x0) {
    UE::FMutex::LockSlow((FMutex *)paVar5);
  }
  bVar4 = (*(FContext **)((longlong)this + 8))->bDeleteAfterExecute;
  FRenderCommandPipeBase::FContext::FContext(&local_68,*(FContext **)((longlong)this + 8));
  paVar5 = (atomic<unsigned_char> *)(*(longlong *)this + 8);
  LOCK();
  aVar2 = *paVar5;
  *paVar5 = (atomic<unsigned_char>)((char)*paVar5 + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)paVar5);
  }
  local_68.CommandList.bClosed = true;
  local_res8.RHICmdList = &GRHICommandList.CommandListImmediate;
  UE::RenderCommandPipe::FCommandList::
  ConsumeCommands<_FRenderThreadCommandPipe::ExecuteCommands_::__l2::<lambda_1>_>
            (&local_68.CommandList,&local_res8);
  if ((bVar4 != false) &&
     (this_00 = *(FMemStackBase **)((longlong)this + 8), this_00 != (FMemStackBase *)0x0)) {
    UE::RenderCommandPipe::FCommandList::~FCommandList((FCommandList *)(this_00 + 1));
    if ((GIsCriticalError == false) &&
       ((this_00->NumMarks != 0 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(GIsCriticalError || !NumMarks)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x74,L""), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FMemStackBase::FreeChunks(this_00,(FTaggedMemory *)0x0);
    ::operator_delete(this_00,0x58);
  }
  UE::RenderCommandPipe::FCommandList::~FCommandList(&local_68.CommandList);
  if (((GIsCriticalError == false) && (local_68.Allocator.NumMarks != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GIsCriticalError || !NumMarks)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x74,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FMemStackBase::FreeChunks(&local_68.Allocator,(FTaggedMemory *)0x0);
  return;
}

// EnqueueAndLaunch @ 145e06db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FRenderThreadCommandPipe::EnqueueAndLaunch
          (FRenderThreadCommandPipe *this,
          TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1,
          FRenderCommandTag *param_2)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  byte bVar3;
  atomic<unsigned_int> aVar4;
  longlong lVar5;
  FPipe *pFVar6;
  code *pcVar7;
  TAtomic<ENamedThreads::Type> TVar8;
  bool bVar9;
  FTaskBase *this_00;
  longlong *plVar10;
  FTaskBase *this_01;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStackY_e8 [32];
  ETaskPriority local_b8;
  EExtendedTaskPriority local_b7 [15];
  undefined1 local_a8 [48];
  byte local_78;
  FTaskBase *local_68;
  undefined **local_58;
  FRenderThreadCommandPipe *pFStack_50;
  FPipe *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  LOCK();
  bVar12 = this->field_0x8 == '\0';
  if (bVar12) {
    this->field_0x8 = 1;
  }
  UNLOCK();
  if (!bVar12) {
    UE::FMutex::LockSlow((FMutex *)&this->field_0x8);
  }
  local_a8._0_8_ = *(undefined8 *)param_1;
  lVar5 = *(longlong *)this;
  local_a8._40_8_ = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_a8._32_8_ = *(undefined8 *)&param_1->field_0x20;
  local_a8._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_a8._24_8_ = *(undefined8 *)&param_1->field_0x18;
  if (local_a8._0_8_ != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_78 = 2;
  bVar12 = UE::RenderCommandPipe::FCommandList::Enqueue
                     ((FCommandList *)(lVar5 + 0x28),
                      (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_a8,param_2);
  uVar11 = (ulonglong)local_78;
  if ((2 < uVar11) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11] ==
      UE::Core::Private::
      TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
    if (local_a8._0_8_ != 0) {
      plVar10 = (longlong *)(local_a8 + 0x10);
      if ((longlong *)local_a8._40_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_a8._40_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11])(local_a8);
  }
  LOCK();
  puVar1 = &this->field_0x8;
  bVar3 = *puVar1;
  *puVar1 = *puVar1 + -1;
  UNLOCK();
  if ((bVar3 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)&this->field_0x8);
  }
  TVar8 = ENamedThreads::FRenderThreadStatics::RenderThread;
  if (bVar12) {
    pFVar6 = *(FPipe **)this;
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    this_01 = (FTaskBase *)0x0;
    if (this_00 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this_00,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      this_00->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_00____6B_;
      this_01 = this_00;
    }
    this_01[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    this_01[1]._padding_ =
         (longlong)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l5::<lambda_1>,void>::
         Call;
    this_01[1].StateChangeEvent = (atomic<unsigned_int>)0x0;
    this_01[1].ExtendedPriority = None;
    this_01[1].TaskTriggered = (atomic<bool>)0x0;
    this_01[1]._padding_ = 0;
    this_01[1]._padding_ =
         (longlong)
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::`5'::<lambda_1>,1,0>::
          _vftable_;
    *(FRenderThreadCommandPipe **)&this_01[1].RefCount = this;
    local_40 = 0;
    this_01[1].Pipe = pFVar6;
    this_01[1].ExecutingThreadId = (atomic<unsigned_int>)TVar8;
    local_68 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l5::<lambda_1>,void>
               ::Call;
    if (this_01[1]._padding_ != 0) {
      local_68 = (FTaskBase *)0x0;
    }
    pFStack_50 = this;
    local_48 = pFVar6;
    if (local_68 != (FTaskBase *)0x0) {
      UE::Core::Private::Function::
      TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l5::<lambda_1>,1,0>::
      Destroy(&local_58);
    }
    UE::Tasks::Private::TranslatePriority((Type)this_01[1].ExecutingThreadId,&local_b8,local_b7);
    UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_b8,local_b7[0],None);
    if (this_01 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x130);
      LOCK();
      paVar2 = &this_01->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
  }
  return;
}

// EnqueueAndLaunch @ 145e07050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderThreadCommandPipe::EnqueueAndLaunch
          (FRenderThreadCommandPipe *this,FRenderCommandList *param_1)

{
  FRenderCommandTag *pFVar1;
  undefined ***pppuVar2;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FRenderThreadCommandPipe *local_30;
  FRenderCommandList *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pFVar1 = UE::RenderCommandPipe::GetExecuteCommandListTag();
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_30 = this;
  local_28 = param_1;
  EnqueueAndLaunch(this,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_48,pFVar1
                  );
  if (local_48[0] != (code *)0x0) {
    pppuVar2 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar2 = local_20;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  return;
}

// ExecuteCommands @ 145e07960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FRenderThreadCommandPipe::ExecuteCommands(FCommandList *param_1)

{
  <lambda_1> local_res10 [3];
  
  local_res10[0].RHICmdList = &GRHICommandList.CommandListImmediate;
  UE::RenderCommandPipe::FCommandList::
  ConsumeCommands<_FRenderThreadCommandPipe::ExecuteCommands_::__l2::<lambda_1>_>
            (param_1,local_res10);
  return;
}

// ExecuteCommands @ 145e07990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FRenderThreadCommandPipe::ExecuteCommands(FRenderCommandList *param_1)

{
  atomic<int> *paVar1;
  ulonglong uVar2;
  atomic<int> aVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TOptional<UE::Tasks::FTaskEvent> *pTVar9;
  FCommandList *this;
  int iVar10;
  uint uVar11;
  int iVar12;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar14;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar15;
  uint uVar16;
  <lambda_1> local_res18;
  <lambda_1> local_res20;
  TOptional<UE::Tasks::FTaskEvent> *pTVar13;
  
  pTVar13 = (TOptional<UE::Tasks::FTaskEvent> *)0x0;
  pTVar9 = &param_1->DispatchTaskEvent;
  if ((param_1->DispatchTaskEvent).bIsSet == false) {
    pTVar9 = pTVar13;
  }
  if ((pTVar9 != (TOptional<UE::Tasks::FTaskEvent> *)0x0) && (pTVar9->TypedValue != (FTaskEvent)0x0)
     ) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)pTVar9->TypedValue);
  }
  uVar16 = (param_1->PipeEnqueueFailedBits).NumBits;
  if (uVar16 != 0) {
    pTVar14 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)(param_1->PipeEnqueueFailedBits).AllocatorInstance.SecondaryData.Data;
    if (pTVar14 ==
        (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar14 = &param_1->PipeEnqueueFailedBits;
    }
    uVar7 = 1;
    uVar8 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    pTVar9 = pTVar13;
    while (uVar8 == 0) {
      iVar10 = (int)pTVar13;
      pTVar9 = (TOptional<UE::Tasks::FTaskEvent> *)(ulonglong)((int)pTVar9 + 0x20);
      uVar11 = iVar10 + 1;
      pTVar13 = (TOptional<UE::Tasks::FTaskEvent> *)(ulonglong)uVar11;
      uVar8 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_145e07a51;
      uVar8 = *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar10 * 4 + 4);
    }
    uVar7 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar8 = (int)lVar4 + -1 + (int)pTVar9;
    if ((int)uVar16 < (int)uVar8) {
      uVar8 = uVar16;
    }
LAB_145e07a51:
    if ((int)uVar8 < (param_1->PipeEnqueueFailedBits).NumBits) {
      uVar16 = 0xffffffff;
      do {
        if (param_1->bInitialized == 0) {
          FRenderCommandList::Init(param_1);
        }
        uVar11 = 0;
        if ((int)uVar8 < (param_1->CommandLists).ArrayNum) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_res18.RHICmdList = &GRHICommandList.CommandListImmediate;
        UE::RenderCommandPipe::FCommandList::
        ConsumeCommands<_FRenderThreadCommandPipe::ExecuteCommands_::__l2::<lambda_1>_>
                  ((param_1->CommandLists).AllocatorInstance.Data + (int)uVar8,&local_res18);
        pTVar14 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)(param_1->PipeEnqueueFailedBits).AllocatorInstance.SecondaryData.Data;
        iVar10 = (param_1->PipeEnqueueFailedBits).NumBits;
        uVar16 = ~uVar7 & uVar16;
        pTVar15 = &param_1->PipeEnqueueFailedBits;
        if (pTVar14 !=
            (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar15 = pTVar14;
        }
        uVar7 = uVar16 & *(uint *)((pTVar15->AllocatorInstance).InlineData +
                                  (longlong)(int)pTVar13 * 4);
        while (uVar7 == 0) {
          iVar12 = (int)pTVar13;
          pTVar9 = (TOptional<UE::Tasks::FTaskEvent> *)(ulonglong)((int)pTVar9 + 0x20);
          uVar16 = iVar12 + 1;
          pTVar13 = (TOptional<UE::Tasks::FTaskEvent> *)(ulonglong)uVar16;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
          goto LAB_145e07b82;
          uVar16 = 0xffffffff;
          uVar7 = *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar12 * 4 + 4);
        }
        uVar7 = -uVar7 & uVar7;
        uVar2 = (ulonglong)uVar7 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar8 = (int)pTVar9 + -1 + (int)lVar4;
      } while (((int)uVar8 <= iVar10) && ((int)uVar8 < iVar10));
    }
  }
LAB_145e07b82:
  this = FRenderCommandList::GetRenderThread(param_1);
  local_res20.RHICmdList = &GRHICommandList.CommandListImmediate;
  UE::RenderCommandPipe::FCommandList::
  ConsumeCommands<_FRenderThreadCommandPipe::ExecuteCommands_::__l2::<lambda_1>_>(this,&local_res20)
  ;
  LOCK();
  paVar1 = &param_1->NumPipeRefs;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((int)aVar3 + -1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x3d1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (aVar3 == (atomic<int>)0x1) {
    FRenderCommandList::_scalar_deleting_destructor_(param_1,1);
    return;
  }
  return;
}

