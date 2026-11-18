// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 10

// FRenderCommandList @ 145dedbb0

FRenderCommandList * __thiscall
FRenderCommandList::FRenderCommandList
          (FRenderCommandList *this,ERenderCommandListFlags param_1,EPageSize param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  FMemStackBase::FMemStackBase(&this->Allocator,param_2);
  (this->CommandLists).AllocatorInstance.Data = (FCommandList *)0x0;
  (this->CommandLists).ArrayNum = 0;
  (this->CommandLists).ArrayMax = 0;
  (this->DispatchTaskEvent).bIsSet = false;
  this->NumPipeRefs = (atomic<int>)0x0;
  this->Flags = param_1;
  (this->Children).Head = (FRenderCommandList *)0x0;
  (this->Children).Tail = (FRenderCommandList *)0x0;
  (this->PipeEnqueueFailedBits).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  puVar2 = &this->field_0x4d;
  this->bInitialized = '\0';
  this->bSubmitted = '\0';
  this->bRecording = '\x01';
  this->NumRecordScopeRefs = '\0';
  this->Parent = (FRenderCommandList *)0x0;
  this->NextSibling = (FRenderCommandList *)0x0;
  (this->PipeEnqueueFailedBits).NumBits = 0;
  (this->PipeEnqueueFailedBits).MaxBits = 0x20;
  if ((this->Flags & CloseOnSubmit) == None) {
    UE::Tasks::FTaskEvent::FTaskEvent
              (&(this->DispatchTaskEvent).TypedValue,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp(1672)"
              );
    (this->DispatchTaskEvent).bIsSet = true;
    Init(this);
  }
  return this;
}

// ~FRenderCommandList @ 145df14e0

void __thiscall FRenderCommandList::~FRenderCommandList(FRenderCommandList *this)

{
  int *piVar1;
  atomic<bool> aVar2;
  int iVar3;
  FRenderCommandList *pFVar4;
  FTaskEvent FVar5;
  uint *puVar6;
  FCommandList *pFVar7;
  code *pcVar8;
  FRenderCommandList *this_00;
  bool bVar9;
  
  this_00 = (this->Children).Head;
  while (this_00 != (FRenderCommandList *)0x0) {
    pFVar4 = this_00->NextSibling;
    ~FRenderCommandList(this_00);
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(this_00);
    this_00 = pFVar4;
  }
  (this->Children).Head = (FRenderCommandList *)0x0;
  (this->Children).Tail = (FRenderCommandList *)0x0;
  if ((((this->DispatchTaskEvent).bIsSet != false) &&
      (FVar5 = (this->DispatchTaskEvent).TypedValue, FVar5 != (FTaskEvent)0x0)) &&
     (*(char *)((longlong)FVar5 + 0xd0) == '\0')) {
    FVar5 = (this->DispatchTaskEvent).TypedValue;
    LOCK();
    aVar2 = *(atomic<bool> *)((longlong)FVar5 + 0x45);
    *(atomic<bool> *)((longlong)FVar5 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar5 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar5 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar5,0xd8);
    }
  }
  puVar6 = (this->PipeEnqueueFailedBits).AllocatorInstance.SecondaryData.Data;
  if (puVar6 != (uint *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(puVar6);
  }
  if (((this->DispatchTaskEvent).bIsSet != false) &&
     (FVar5 = (this->DispatchTaskEvent).TypedValue, FVar5 != (FTaskEvent)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)FVar5 + 0x30);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)FVar5)(FVar5,1);
    }
  }
  DestructItems<UE::RenderCommandPipe::FCommandList,int>
            ((this->CommandLists).AllocatorInstance.Data,(this->CommandLists).ArrayNum);
  pFVar7 = (this->CommandLists).AllocatorInstance.Data;
  if (pFVar7 != (FCommandList *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar7);
  }
  if (((GIsCriticalError == false) && ((this->Allocator).NumMarks != 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GIsCriticalError || !NumMarks)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x74,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FMemStackBase::FreeChunks(&this->Allocator,(FTaggedMemory *)0x0);
  return;
}

// Close @ 145dfde60

void __thiscall FRenderCommandList::Close(FRenderCommandList *this)

{
  FCommandList *pFVar1;
  atomic<bool> aVar2;
  int iVar3;
  FTaskEvent FVar4;
  code *pcVar5;
  bool bVar6;
  FCommandList *pFVar7;
  undefined1 local_res8 [8];
  
  if (this->NumRecordScopeRefs != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRecordScopeRefs == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                       ,0x6c1,L"Close called on command list while FRecordScope is active!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->bRecording == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRecording",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                       ,0x6c2,L"Close has already been called on this command list.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->bRecording = '\0';
  iVar3 = (this->CommandLists).ArrayNum;
  pFVar7 = (this->CommandLists).AllocatorInstance.Data;
  pFVar1 = pFVar7 + iVar3;
  while( true ) {
    if ((this->CommandLists).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::RenderCommandPipe::FCommandList,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    pFVar7->bClosed = true;
    pFVar7 = pFVar7 + 1;
  }
  if ((((this->DispatchTaskEvent).bIsSet != false) &&
      (FVar4 = (this->DispatchTaskEvent).TypedValue, FVar4 != (FTaskEvent)0x0)) &&
     (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
    FVar4 = (this->DispatchTaskEvent).TypedValue;
    LOCK();
    aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
    *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
    }
  }
  return;
}

// Create @ 145dffa20

FRenderCommandList * __cdecl
FRenderCommandList::Create(ERenderCommandListFlags param_1,EPageSize param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  FRenderCommandList *this;
  
  this = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x88,8);
  if (this != (FRenderCommandList *)0x0) {
    FMemStackBase::FMemStackBase(&this->Allocator,param_2);
    (this->CommandLists).AllocatorInstance.Data = (FCommandList *)0x0;
    (this->CommandLists).ArrayNum = 0;
    (this->CommandLists).ArrayMax = 0;
    (this->DispatchTaskEvent).bIsSet = false;
    this->NumPipeRefs = (atomic<int>)0x0;
    this->Flags = param_1;
    (this->Children).Head = (FRenderCommandList *)0x0;
    (this->Children).Tail = (FRenderCommandList *)0x0;
    (this->PipeEnqueueFailedBits).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
    puVar2 = &this->field_0x4d;
    this->bInitialized = '\0';
    this->bSubmitted = '\0';
    this->bRecording = '\x01';
    this->NumRecordScopeRefs = '\0';
    this->Parent = (FRenderCommandList *)0x0;
    this->NextSibling = (FRenderCommandList *)0x0;
    (this->PipeEnqueueFailedBits).NumBits = 0;
    (this->PipeEnqueueFailedBits).MaxBits = 0x20;
    if ((this->Flags & CloseOnSubmit) == None) {
      UE::Tasks::FTaskEvent::FTaskEvent
                (&(this->DispatchTaskEvent).TypedValue,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp(1672)"
                );
      (this->DispatchTaskEvent).bIsSet = true;
      Init(this);
    }
    return this;
  }
  return (FRenderCommandList *)0x0;
}

// Flush @ 145e0aaf0

void __thiscall FRenderCommandList::Flush(FRenderCommandList *this)

{
  TArray<UE::RenderCommandPipe::FCommandList,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
  *pTVar1;
  TArray<UE::RenderCommandPipe::FCommandList,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
  *pTVar2;
  TOptional<UE::Tasks::FTaskEvent> *pTVar3;
  TOptional<UE::Tasks::FTaskEvent> *pTVar4;
  int *piVar5;
  int iVar6;
  FCommandList *pFVar7;
  FTaskEvent FVar8;
  FRenderCommandList *pFVar9;
  FRenderCommandList *this_00;
  
  if ((this->bInitialized == '\x01' && this->bSubmitted == '\0') &&
     ((this->Flags & CloseOnSubmit) != None)) {
    this_00 = Create(CloseOnSubmit,Small);
    FMemStackBase::operator=(&this_00->Allocator,&this->Allocator);
    pTVar1 = &this->CommandLists;
    pTVar2 = &this_00->CommandLists;
    if (pTVar2 != pTVar1) {
      DestructItems<UE::RenderCommandPipe::FCommandList,int>
                ((pTVar2->AllocatorInstance).Data,(this_00->CommandLists).ArrayNum);
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if (pFVar7 != (FCommandList *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar7);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FCommandList *)0x0;
      (this_00->CommandLists).ArrayNum = (this->CommandLists).ArrayNum;
      (this_00->CommandLists).ArrayMax = (this->CommandLists).ArrayMax;
      (this->CommandLists).ArrayNum = 0;
      (this->CommandLists).ArrayMax = 0;
    }
    pTVar3 = &this->DispatchTaskEvent;
    pTVar4 = &this_00->DispatchTaskEvent;
    if (pTVar3 != pTVar4) {
      if ((this->DispatchTaskEvent).bIsSet == false) {
        if ((this_00->DispatchTaskEvent).bIsSet != false) {
          FVar8 = pTVar4->TypedValue;
          if (FVar8 != (FTaskEvent)0x0) {
            LOCK();
            piVar5 = (int *)((longlong)FVar8 + 0x30);
            iVar6 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (*(code *)**(undefined8 **)FVar8)();
            }
          }
          (this_00->DispatchTaskEvent).bIsSet = false;
        }
      }
      else {
        if (((this_00->DispatchTaskEvent).bIsSet != false) &&
           (FVar8 = pTVar4->TypedValue, FVar8 != (FTaskEvent)0x0)) {
          LOCK();
          piVar5 = (int *)((longlong)FVar8 + 0x30);
          iVar6 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (*(code *)**(undefined8 **)FVar8)();
          }
        }
        pTVar4->TypedValue = (FTaskEvent)0x0;
        pTVar4->TypedValue = pTVar3->TypedValue;
        pTVar3->TypedValue = (FTaskEvent)0x0;
        (this_00->DispatchTaskEvent).bIsSet = true;
      }
    }
    this_00->bInitialized = '\x01';
    pFVar9 = (this->Children).Tail;
    (this_00->Children).Head = (this->Children).Head;
    (this_00->Children).Tail = pFVar9;
    Submit(this_00,(FRenderCommandList *)0x0);
    this->bInitialized = '\0';
    (this->Children).Head = (FRenderCommandList *)0x0;
    (this->Children).Tail = (FRenderCommandList *)0x0;
  }
  return;
}

// Get @ 145e0e7a0

FCommandList * __thiscall
FRenderCommandList::Get(FRenderCommandList *this,FRenderCommandPipe *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FCommandList *pFVar5;
  
  if (this->bInitialized == 0) {
    Init(this);
  }
  if (param_1 != (FRenderCommandPipe *)0x0) {
    uVar1 = param_1->Index;
    if (uVar1 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar1 < (this->CommandLists).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FCommandList *)(*pcVar2)();
          return pFVar5;
        }
      }
      return (this->CommandLists).AllocatorInstance.Data + (int)uVar1;
    }
  }
  pFVar5 = GetRenderThread(this);
  return pFVar5;
}

// GetInstanceTLS @ 145e0f710

FRenderCommandList * __cdecl FRenderCommandList::GetInstanceTLS(void)

{
  return *(FRenderCommandList **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0);
}

// Init @ 145e167c0

void __thiscall FRenderCommandList::Init(FRenderCommandList *this)

{
  int *piVar1;
  FCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((this->bInitialized != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                         ,0x6b4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bInitialized = '\x01';
  iVar5 = GRenderCommandPipeRegistry.AllPipes.ArrayNum;
  if ((GRenderCommandPipeRegistry.AllPipes.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = iVar5 + 1;
  uVar7 = (ulonglong)uVar6;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  piVar1 = &(this->CommandLists).ArrayMax;
  if ((this->CommandLists).ArrayMax < (int)uVar6) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UE::RenderCommandPipe::FCommandList>_>
              (0x28,8,uVar6,&(this->CommandLists).AllocatorInstance,(this->CommandLists).ArrayNum,
               piVar1);
  }
  if (0 < (int)uVar6) {
    do {
      iVar5 = (this->CommandLists).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UE::RenderCommandPipe::FCommandList>_>
                          (0x828,&(this->CommandLists).AllocatorInstance,piVar1);
        (this->CommandLists).ArrayNum = iVar5;
      }
      (this->CommandLists).ArrayNum = iVar5 + 1;
      pFVar2 = (this->CommandLists).AllocatorInstance.Data;
      pFVar2[iVar5].Allocator = &this->Allocator;
      pFVar2[iVar5].Commands.Head = (FCommand *)0x0;
      pFVar2[iVar5].Commands.Tail = (FCommand *)0x0;
      pFVar2[iVar5].Commands.Num = 0;
      pFVar2[iVar5].bClosed = false;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// SetInstanceTLS @ 145e24f20

FRenderCommandList * __cdecl FRenderCommandList::SetInstanceTLS(FRenderCommandList *param_1)

{
  longlong lVar1;
  FRenderCommandList *pFVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar2 = *(FRenderCommandList **)(lVar1 + 0xed0);
  *(FRenderCommandList **)(lVar1 + 0xed0) = param_1;
  return pFVar2;
}

// Submit @ 145e33380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FRenderCommandList::Submit(FRenderCommandList *this,FRenderCommandList *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong *this_00;
  atomic<unsigned_int> *paVar3;
  atomic<int> *paVar4;
  uchar *puVar5;
  atomic<unsigned_int> aVar6;
  atomic<int> aVar7;
  int iVar8;
  FRenderCommandPipe *pFVar9;
  FRenderCommandList *pFVar10;
  FTaskEvent FVar11;
  code *pcVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FCommandList *pFVar17;
  FTaskBase *pFVar18;
  FCommandList *this_01;
  FTaskBase *pFVar19;
  FTaskBase *this_02;
  FRenderCommandTag *pFVar20;
  atomic<int> aVar21;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *_Dst;
  undefined ***pppuVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar26;
  ERenderCommandListFlags EVar27;
  FTaskBase *pFVar28;
  bool *pbVar29;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar30;
  uint uVar31;
  ForAnyElementType FVar32;
  undefined1 auStackY_c8 [32];
  EExtendedTaskPriority local_97;
  ETaskPriority local_96 [2];
  uint local_94;
  FScriptContainerElement *local_90;
  uint local_84;
  uint local_80;
  longlong local_78;
  int local_70;
  code *local_68 [2];
  undefined **local_58;
  FRenderThreadCommandPipe *local_50;
  FRenderCommandList *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  EVar27 = this->Flags & CloseOnSubmit;
  if (EVar27 != None) {
    if (this->bRecording != '\0') {
      Close(this);
    }
    if (this->bInitialized == 0) goto LAB_145e33cba;
  }
  if ((this->bSubmitted != '\0') &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bSubmitted",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                          ,0x6e4,L"FRenderCommandList::Submit cannot be called multiple times."),
     bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this->bSubmitted = '\x01';
  this->Parent = param_1;
  if (param_1 == (FRenderCommandList *)0x0) {
    this->Parent = *(FRenderCommandList **)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xed0);
  }
  iVar8 = GRenderCommandPipeRegistry.AllPipes.ArrayNum;
  FVar32.Data = GRenderCommandPipeRegistry.AllPipes.AllocatorInstance.Data;
  local_90 = GRenderCommandPipeRegistry.AllPipes.AllocatorInstance.Data;
  local_94 = GRenderCommandPipeRegistry.AllPipes.ArrayNum;
  if ((GRenderCommandPipeRegistry.AllPipes.ArrayNum < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_02 = (FTaskBase *)0x0;
  uVar25 = 0;
  if (this->Parent == (FRenderCommandList *)0x0) {
    local_70 = (this->CommandLists).ArrayNum;
    LOCK();
    this->NumPipeRefs = (atomic<int>)((int)this->NumPipeRefs + local_70);
    UNLOCK();
    local_80 = 0;
    local_84 = 0;
    uVar31 = 0;
    if (0 < iVar8) {
      local_94 = 1;
      local_78 = 0;
      local_90 = (FScriptContainerElement *)0x0;
      pFVar19 = this_02;
      pFVar28 = this_02;
      pFVar18 = this_02;
      do {
        uVar24 = (uint)pFVar28;
        uVar25 = 0;
        if ((int)uVar24 < (this->CommandLists).ArrayNum) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((EVar27 == None) ||
           (*(longlong *)
             (local_90 + (longlong)&((this->CommandLists).AllocatorInstance.Data)->Commands) != 0))
        {
          if (((int)uVar24 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar9 = *(FRenderCommandPipe **)FVar32.Data;
          this_00 = &pFVar9->_padding_;
          if ((this_00 == (longlong *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                  ,0x1b,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          LOCK();
          bVar14 = (char)*this_00 == '\0';
          if (bVar14) {
            *(undefined1 *)this_00 = 1;
          }
          UNLOCK();
          if (!bVar14) {
            UE::FMutex::LockSlow((FMutex *)this_00);
          }
          if ((*(FRenderCommandPipe **)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xed8) == pFVar9) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!UE::RenderCommandPipe::IsReplaying(*this)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                  ,0x2c1,
                                  L"Enqueuing command queues from the render command pipe replay task is not allowed."
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((pFVar9->RecordTask).Pimpl.Reference == (FTaskBase *)0x0) {
            if (this_00 != (longlong *)0x0) {
              LOCK();
              lVar13 = *this_00;
              *(char *)this_00 = (char)*this_00 + -1;
              UNLOCK();
              if ((lVar13 & 2) != 0) {
                UE::FMutex::WakeWaitingThread((FMutex *)this_00);
              }
            }
            if ((this->PipeEnqueueFailedBits).NumBits == 0) {
              uVar25 = iVar8 + 0x1fU >> 5;
              pTVar30 = &this->PipeEnqueueFailedBits;
              (this->PipeEnqueueFailedBits).NumBits = iVar8;
              if (iVar8 + 0x1fU >> 5 != 0) {
                if ((this->PipeEnqueueFailedBits).MaxBits + 0x1fU >> 5 < uVar25) {
                  TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                  ::ForElementType<unsigned_int>::ResizeAllocation
                            (&pTVar30->AllocatorInstance,0,uVar25,4);
                  (this->PipeEnqueueFailedBits).MaxBits = uVar25 << 5;
                }
                pTVar26 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                           *)(this->PipeEnqueueFailedBits).AllocatorInstance.SecondaryData.Data;
                _Dst = pTVar30;
                if (pTVar26 !=
                    (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
                  _Dst = pTVar26;
                }
                memset(_Dst,0,(ulonglong)uVar25 << 2);
                iVar16 = (this->PipeEnqueueFailedBits).NumBits;
                uVar31 = iVar16 >> 0x1f & 0x1f;
                uVar25 = iVar16 + uVar31;
                iVar16 = (uVar25 & 0x1f) - uVar31;
                if (iVar16 != 0) {
                  pTVar26 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                             *)(this->PipeEnqueueFailedBits).AllocatorInstance.SecondaryData.Data;
                  if (pTVar26 !=
                      (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                       *)0x0) {
                    pTVar30 = pTVar26;
                  }
                  puVar5 = (pTVar30->AllocatorInstance).InlineData +
                           (longlong)((int)uVar25 >> 5) * 4;
                  *(uint *)puVar5 = *(uint *)puVar5 & 0xffffffffU >> (0x20U - (char)iVar16 & 0x1f);
                }
              }
            }
            if (((this->PipeEnqueueFailedBits).NumBits <= (int)uVar24) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar14)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar30 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                       *)(this->PipeEnqueueFailedBits).AllocatorInstance.SecondaryData.Data;
            pTVar26 = &this->PipeEnqueueFailedBits;
            if (pTVar30 !=
                (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar26 = pTVar30;
            }
            puVar5 = (pTVar26->AllocatorInstance).InlineData + ((ulonglong)pFVar28 >> 5) * 4;
            *(uint *)puVar5 = *(uint *)puVar5 | local_94;
            local_84 = local_84 + 1;
          }
          else {
            FRenderCommandPipe::EnqueueAndLaunch(pFVar9,this);
            if (this_00 != (longlong *)0x0) {
              LOCK();
              lVar13 = *this_00;
              *(char *)this_00 = (char)*this_00 + -1;
              UNLOCK();
              if ((lVar13 & 2) != 0) {
                UE::FMutex::WakeWaitingThread((FMutex *)this_00);
              }
            }
            local_80 = local_80 + 1;
          }
          pFVar18 = (FTaskBase *)(ulonglong)local_80;
          pFVar19 = (FTaskBase *)(ulonglong)local_84;
        }
        uVar31 = (uint)pFVar18;
        uVar25 = (uint)pFVar19;
        local_78 = local_78 + 1;
        local_94 = local_94 << 1 | (uint)((int)local_94 < 0);
        local_90 = local_90 + 0x28;
        pFVar28 = (FTaskBase *)(ulonglong)(uVar24 + 1);
        FVar32.Data = FVar32.Data + 8;
      } while ((int)(uVar24 + 1) < iVar8);
    }
    iVar8 = (this->CommandLists).ArrayNum;
    uVar23 = iVar8 - 1;
    uVar24 = 0;
    if ((int)uVar23 < iVar8) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((EVar27 == None) ||
       ((this->CommandLists).AllocatorInstance.Data[(longlong)(this->CommandLists).ArrayNum + -1].
        Commands.Head != (FCommand *)0x0)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if ((0 < (int)uVar25) || (!bVar14)) {
      bVar14 = IsInRenderingThread();
      if ((bVar14) || ((GIsThreadedRendering == false && (bVar14 = IsInGameThread(), bVar14)))) {
        FRenderThreadCommandPipe::ExecuteCommands(this);
      }
      else {
        CheckNotBlockedOnRenderThread();
        if (GRenderCommandPipeMode == None) {
          pFVar19 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
          if (pFVar19 != (FTaskBase *)0x0) {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)pFVar19,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)0x0);
            pFVar19->_padding_ =
                 (longlong)&___7__TGraphTask_VFRenderCommandListTask_FRenderThreadCommandPipe____6B_
            ;
            this_02 = pFVar19;
          }
          this_02[1]._padding_ = (longlong)this;
          if (((GIsThreadedRendering != false) &&
              (ENamedThreads::FRenderThreadStatics::RenderThread ==
               (TAtomic<ENamedThreads::Type>)0x1)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                  ,0x21d,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          UE::Tasks::Private::TranslatePriority
                    ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_96,&local_97);
          UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_96[0],local_97,None);
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0xe0);
          LOCK();
          paVar3 = &this_02->RefCount;
          aVar6 = *paVar3;
          *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
          UNLOCK();
          if (aVar6 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_02->_padding_)(this_02,1);
          }
        }
        else {
          pFVar20 = UE::RenderCommandPipe::GetExecuteCommandListTag();
          local_40 = (undefined ***)0x0;
          local_58 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::`2'::<lambda_1>,1,0>
                      ::_vftable_;
          local_68[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                        ::Call;
          local_50 = &FRenderThreadCommandPipe::Instance;
          local_48 = this;
          FRenderThreadCommandPipe::EnqueueAndLaunch
                    (&FRenderThreadCommandPipe::Instance,
                     (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar20);
          if (local_68[0] != (code *)0x0) {
            pppuVar22 = &local_58;
            if (local_40 != (undefined ***)0x0) {
              pppuVar22 = local_40;
            }
            (*(code *)(*pppuVar22)[2])();
          }
        }
      }
      uVar31 = uVar31 + 1;
    }
    aVar21 = (atomic<int>)(local_70 - uVar31);
    LOCK();
    paVar4 = &this->NumPipeRefs;
    aVar7 = *paVar4;
    *paVar4 = (atomic<int>)((int)*paVar4 - (int)aVar21);
    UNLOCK();
    if ((int)aVar7 - (int)aVar21 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumRefs >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                          ,0x3d1,L"");
      if (!bVar14) {
        return;
      }
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (aVar7 != aVar21) {
      return;
    }
LAB_145e33cba:
    _scalar_deleting_destructor_(this,1);
    return;
  }
  bVar14 = true;
  pFVar19 = this_02;
  pFVar28 = this_02;
  if (0 < iVar8) {
    do {
      uVar24 = (uint)pFVar19;
      pFVar9 = *(FRenderCommandPipe **)FVar32.Data;
      uVar31 = uVar25;
      if ((int)uVar24 < (this->CommandLists).ArrayNum) {
        uVar31 = ~uVar24 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pbVar29 = &(this->CommandLists).AllocatorInstance.Data[-3].bClosed +
                (longlong)&(pFVar28->Prerequisites).Prerequisites;
      if ((EVar27 == None) || (*(longlong *)(pbVar29 + 8) != 0)) {
        pFVar17 = Get(this->Parent,pFVar9);
        pFVar18 = FMemStackBase::Alloc(pFVar17->Allocator,0x20,0x10);
        pFVar19 = this_02;
        if (pFVar18 != (FTaskBase *)0x0) {
          pFVar18->_padding_ = 0;
          pFVar18->_padding_ =
               (longlong)&___7FExecuteCommandListCommand_FCommandList_RenderCommandPipe_UE__6B_;
          *(ECommandType *)&pFVar18->_padding_ = ExecuteCommandList;
          pFVar18->_padding_ = (longlong)pbVar29;
          pFVar19 = pFVar18;
        }
        UE::RenderCommandPipe::FCommandList::Enqueue(pFVar17,(FCommand *)pFVar19);
        bVar14 = false;
      }
      FVar32.Data = local_90 + 8;
      pFVar19 = (FTaskBase *)(ulonglong)(uVar24 + 1);
      pFVar28 = (FTaskBase *)&pFVar28->_padding_;
      local_90 = FVar32.Data;
    } while ((int)(uVar24 + 1) < (int)local_94);
  }
  iVar8 = (this->CommandLists).ArrayNum;
  uVar31 = iVar8 - 1;
  uVar25 = 0;
  if ((int)uVar31 < iVar8) {
    uVar25 = ~uVar31 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar17 = (this->CommandLists).AllocatorInstance.Data +
            (longlong)(this->CommandLists).ArrayNum + -1;
  if ((EVar27 == None) || ((pFVar17->Commands).Head != (FCommand *)0x0)) {
    this_01 = GetRenderThread(this->Parent);
    pFVar19 = FMemStackBase::Alloc(this_01->Allocator,0x20,0x10);
    if (pFVar19 != (FTaskBase *)0x0) {
      pFVar19->_padding_ = 0;
      pFVar19->_padding_ =
           (longlong)&___7FExecuteCommandListCommand_FCommandList_RenderCommandPipe_UE__6B_;
      *(ECommandType *)&pFVar19->_padding_ = ExecuteCommandList;
      pFVar19->_padding_ = (longlong)pFVar17;
      this_02 = pFVar19;
    }
    UE::RenderCommandPipe::FCommandList::Enqueue(this_01,(FCommand *)this_02);
  }
  else if (bVar14) goto LAB_145e33cba;
  if ((this->Parent->bInitialized == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent->bInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                          ,0x711,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar10 = (this->Parent->Children).Tail;
  if (pFVar10 == (FRenderCommandList *)0x0) {
    (this->Parent->Children).Tail = this;
    (this->Parent->Children).Head = this;
  }
  else {
    pFVar10->NextSibling = this;
    (this->Parent->Children).Tail = this;
  }
  if ((this->DispatchTaskEvent).bIsSet == false) {
    return;
  }
  if ((this->Parent->DispatchTaskEvent).bIsSet == false) {
    if ((this->Parent->bRecording != '\x01' || this->Parent->bSubmitted != '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Parent->bSubmitted && Parent->bRecording",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                            ,0x723,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar10 = this->Parent;
    if (((pFVar10->DispatchTaskEvent).bIsSet != false) &&
       (FVar11 = (pFVar10->DispatchTaskEvent).TypedValue, FVar11 != (FTaskEvent)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)FVar11 + 0x30);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (*(code *)**(undefined8 **)FVar11)(FVar11,1);
      }
    }
    UE::Tasks::FTaskEvent::FTaskEvent
              (&(pFVar10->DispatchTaskEvent).TypedValue,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp(1828)"
              );
    (pFVar10->DispatchTaskEvent).bIsSet = true;
  }
  pFVar10 = this->Parent;
  if (((pFVar10->DispatchTaskEvent).bIsSet == false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((this->DispatchTaskEvent).bIsSet == false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FVar11 = (this->DispatchTaskEvent).TypedValue;
  if (FVar11 == (FTaskEvent)0x0) {
    return;
  }
  UE::Tasks::Private::FTaskBase::AddPrerequisites
            ((FTaskBase *)(pFVar10->DispatchTaskEvent).TypedValue,(FTaskBase *)FVar11);
  return;
}

