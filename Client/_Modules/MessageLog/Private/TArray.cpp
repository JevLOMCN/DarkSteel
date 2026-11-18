// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 7

// ~TArray<SHeaderRow::FColumn_*,TSizedDefaultAllocator<32>_> @ 142bca520

void __thiscall
TArray<SHeaderRow::FColumn_*,TSizedDefaultAllocator<32>_>::
~TArray<SHeaderRow::FColumn_*,TSizedDefaultAllocator<32>_>
          (TArray<SHeaderRow::FColumn_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<SSplitter::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 142bca540

void __thiscall
TArray<SSplitter::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SSplitter::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SSplitter::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SSplitter::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 142bcd1c0

TArray<TSharedPtr<IMessageLogListing,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<IMessageLogListing,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<IMessageLogListing,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<IMessageLogListing,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<IMessageLogListing,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<IMessageLogListing,1>,int>
              ((TSharedPtr<IMessageLogListing,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<IMessageLogListing,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<IMessageLogListing,1>,TSharedPtr<IMessageLogListing,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 142bcd260

TArray<TSharedRef<FMessageFilter,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedRef<FMessageFilter,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedRef<FMessageFilter,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<FMessageFilter,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<FMessageFilter,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedRef<FMessageFilter,1>,int>
              ((TSharedRef<FMessageFilter,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedRef<FMessageFilter,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedRef<FMessageFilter,1>,TSharedRef<FMessageFilter,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 142bcd300

TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>
              ((TSharedRef<FTokenizedMessage,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedRef<FTokenizedMessage,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// Remove @ 142c22080

int __thiscall
TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<FTokenizedMessage,1> *param_1)

{
  TSharedRef<FTokenizedMessage,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar1 = (TSharedRef<FTokenizedMessage,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  bVar4 = *(FTokenizedMessage **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(FTokenizedMessage **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedRef<FTokenizedMessage,1>,int>
                ((TSharedRef<FTokenizedMessage,1> *)(pFVar2 + (longlong)iVar10 * 0x10),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar10 * 0x10,
                (longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

// RemoveAtSwapImpl @ 142c22410

void __thiscall
TArray<FMessageLogListingViewModel::FOpenNotification,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMessageLogListingViewModel::FOpenNotification,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  if (*(longlong **)(pFVar2 + (longlong)param_1 * 0x28 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(pFVar2 + (longlong)param_1 * 0x28 + 0x18) + 0x10))();
  }
  plVar3 = *(longlong **)(pFVar2 + (longlong)param_1 * 0x28 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 0x28,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x28,
            (longlong)iVar4 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

