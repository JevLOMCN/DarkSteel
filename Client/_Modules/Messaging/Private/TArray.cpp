// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 15

// AddUniqueImpl<FGuid_const_&> @ 142d38980

int __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FGuid *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = Find(this,param_1);
  if (iVar6 == -1) {
    pFVar2 = (FGuid *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = this->ArrayNum;
    if (iVar6 == this->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar6 + 1;
    uVar4 = *(undefined8 *)&param_1->C;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar1 + 8) = uVar4;
  }
  return iVar6;
}

// AddUniqueImpl<TSharedPtr<IMessageReceiver,1>_const_&> @ 142d38a40

int __thiscall
TArray<TSharedPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedPtr<IMessageReceiver,1>_const_&>
          (TArray<TSharedPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<IMessageReceiver,1> *param_1)

{
  TSharedPtr<IMessageReceiver,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<IMessageReceiver,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedPtr<IMessageReceiver,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Object == param_1->Object) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(IMessageReceiver **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// AddUniqueImpl<TWeakPtr<IBusListener,1>_const_&> @ 142d38b70

int __thiscall
TArray<TWeakPtr<IBusListener,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakPtr<IBusListener,1>_const_&>
          (TArray<TWeakPtr<IBusListener,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IBusListener,1> *param_1)

{
  TWeakPtr<IBusListener,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pTVar1 = (TWeakPtr<IBusListener,1> *)(this->AllocatorInstance).Data;
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
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(IBusListener **)pFVar6 = param_1->Object;
    pTVar2 = (param_1->WeakReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  return iVar5;
}

// AddUniqueImpl<TWeakPtr<IMessageReceiver,1>_const_&> @ 142d38c50

int __thiscall
TArray<TWeakPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakPtr<IMessageReceiver,1>_const_&>
          (TArray<TWeakPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IMessageReceiver,1> *param_1)

{
  TWeakPtr<IMessageReceiver,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pTVar1 = (TWeakPtr<IMessageReceiver,1> *)(this->AllocatorInstance).Data;
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
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(IMessageReceiver **)pFVar6 = param_1->Object;
    pTVar2 = (param_1->WeakReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  return iVar5;
}

// AddUniqueImpl<TSharedPtr<IMessageInterceptor,1>_> @ 142d38d30

int __thiscall
TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedPtr<IMessageInterceptor,1>_>
          (TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<IMessageInterceptor,1> *param_1)

{
  TSharedPtr<IMessageInterceptor,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<IMessageInterceptor,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = (TSharedPtr<IMessageInterceptor,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar5 = pTVar1;
    do {
      if (pTVar5->Object == param_1->Object) {
        iVar4 = (int)((longlong)pTVar5 - (longlong)pTVar1 >> 4);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(IMessageInterceptor **)pFVar6 = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IMessageInterceptor *)0x0;
  return iVar4;
}

// AddUniqueImpl<TSharedPtr<IMessageSubscription,1>_> @ 142d38e50

int __thiscall
TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedPtr<IMessageSubscription,1>_>
          (TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<IMessageSubscription,1> *param_1)

{
  TSharedPtr<IMessageSubscription,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<IMessageSubscription,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = (TSharedPtr<IMessageSubscription,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar5 = pTVar1;
    do {
      if (pTVar5->Object == param_1->Object) {
        iVar4 = (int)((longlong)pTVar5 - (longlong)pTVar1 >> 4);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(IMessageSubscription **)pFVar6 = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IMessageSubscription *)0x0;
  return iVar4;
}

// HeapPop<TLess<FMessageRouter::FDelayedMessage>_> @ 142d3c9a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMessageRouter::FDelayedMessage,TSizedDefaultAllocator<32>_>::
HeapPop<TLess<FMessageRouter::FDelayedMessage>_>
          (TArray<FMessageRouter::FDelayedMessage,TSizedDefaultAllocator<32>_> *this,
          FDelayedMessage *param_1,TLess<FMessageRouter::FDelayedMessage> *param_2,
          EAllowShrinking param_3)

{
  FDelayedMessage *this_00;
  long64 lVar1;
  int iVar2;
  FDelayedMessage *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  IMessageContext *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (FDelayedMessage *)(this->AllocatorInstance).Data;
  if (param_1 != pFVar3) {
    (param_1->Context).Object = (pFVar3->Context).Object;
    (pFVar3->Context).Object = (IMessageContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->Context).SharedReferenceCount,&(pFVar3->Context).SharedReferenceCount);
  }
  param_1->Sequence = pFVar3->Sequence;
  if ((this->ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  RemoveAtSwapImpl(this,0,1);
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&this->AllocatorInstance,this->ArrayNum,&this->ArrayMax);
  }
  iVar2 = this->ArrayNum;
  pFVar4 = (this->AllocatorInstance).Data;
  if (1 < iVar2) {
    do {
      iVar6 = iVar12 * 2;
      iVar11 = iVar6 + 1;
      if (iVar6 + 2 < iVar2) {
        bVar10 = FMessageRouter::FDelayedMessage::operator<
                           ((FDelayedMessage *)(pFVar4 + (longlong)iVar11 * 0x18),
                            (FDelayedMessage *)(pFVar4 + (longlong)(iVar6 + 2) * 0x18));
        if (bVar10) {
          iVar11 = iVar6;
        }
        iVar11 = iVar11 + 1;
      }
      pFVar3 = (FDelayedMessage *)(pFVar4 + (longlong)iVar12 * 0x18);
      this_00 = (FDelayedMessage *)(pFVar4 + (longlong)iVar11 * 0x18);
      bVar10 = FMessageRouter::FDelayedMessage::operator<(this_00,pFVar3);
      if (!bVar10) {
        return;
      }
      pIVar7 = (pFVar3->Context).Object;
      pTVar8 = (pFVar3->Context).SharedReferenceCount.ReferenceController;
      lVar1 = pFVar3->Sequence;
      pTVar9 = (this_00->Context).SharedReferenceCount.ReferenceController;
      (pFVar3->Context).Object = (this_00->Context).Object;
      (pFVar3->Context).SharedReferenceCount.ReferenceController = pTVar9;
      pFVar3->Sequence = this_00->Sequence;
      (this_00->Context).Object = pIVar7;
      (this_00->Context).SharedReferenceCount.ReferenceController = pTVar8;
      this_00->Sequence = lVar1;
      iVar12 = iVar11;
    } while (iVar11 * 2 + 1 < iVar2);
  }
  return;
}

// Find @ 142d46aa0

int __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::Find
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar2 = pFVar1;
    do {
      if (((param_1->D == *(uint *)(pFVar2 + 0xc) && param_1->C == *(uint *)(pFVar2 + 8)) &&
          param_1->B == *(uint *)(pFVar2 + 4)) && param_1->A == *(uint *)pFVar2) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return -1;
}

// Find @ 142d46b20

int __thiscall
TArray<TWeakPtr<IBusListener,1>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakPtr<IBusListener,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IBusListener,1> *param_1)

{
  int iVar1;
  TWeakPtr<IBusListener,1> *pTVar2;
  bool bVar3;
  TWeakPtr<IBusListener,1> *this_00;
  
  pTVar2 = (TWeakPtr<IBusListener,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == pTVar2 + iVar1) {
      return -1;
    }
    bVar3 = TWeakPtr<IBusListener,1>::UEOpEquals<IBusListener>(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pTVar2 >> 4);
}

// Find @ 142d46ba0

int __thiscall
TArray<TWeakPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IMessageReceiver,1> *param_1)

{
  int iVar1;
  TWeakPtr<IMessageReceiver,1> *pTVar2;
  bool bVar3;
  TWeakPtr<IMessageReceiver,1> *this_00;
  
  pTVar2 = (TWeakPtr<IMessageReceiver,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == pTVar2 + iVar1) {
      return -1;
    }
    bVar3 = TWeakPtr<IMessageReceiver,1>::UEOpEquals<IMessageReceiver>(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pTVar2 >> 4);
}

// Remove @ 142d4d000

int __thiscall
TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<IMessageInterceptor,1> *param_1)

{
  TSharedPtr<IMessageInterceptor,1> *pTVar1;
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
  
  pTVar1 = (TSharedPtr<IMessageInterceptor,1> *)(this->AllocatorInstance).Data;
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
  bVar4 = *(IMessageInterceptor **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(IMessageInterceptor **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedPtr<IMessageInterceptor,1>,int>
                ((TSharedPtr<IMessageInterceptor,1> *)(pFVar2 + (longlong)iVar10 * 0x10),iVar9);
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

// RemoveAtSwapImpl @ 142d4d1b0

void __thiscall
TArray<FMessageRouter::FDelayedMessage,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMessageRouter::FDelayedMessage,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FDelayedMessage *_Dst;
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (FDelayedMessage *)(pFVar1 + (longlong)param_1 * 0x18);
  DestructItems<FMessageRouter::FDelayedMessage,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 142d4d250

void __thiscall
TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 142d4d2d0

void __thiscall
TArray<TWeakPtr<IMessageBus,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TWeakPtr<IMessageBus,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x10;
  plVar3 = *(longlong **)(_Dst + 8);
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
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x10,(longlong)iVar4 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSwap @ 142d4d830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TWeakPtr<IMessageBus,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TWeakPtr<IMessageBus,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IMessageBus,1> *param_1,EAllowShrinking param_2)

{
  TWeakPtr<IMessageBus,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  pTVar1 = (TWeakPtr<IMessageBus,1> *)(this->AllocatorInstance).Data;
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  iVar9 = iVar5;
  if (0 < iVar5) {
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar9) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      bVar4 = TWeakPtr<IMessageBus,1>::UEOpEquals<IMessageBus>
                        ((TWeakPtr<IMessageBus,1> *)
                         ((this->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10),param_1);
      uVar7 = uVar8;
      if (bVar4) {
        uVar7 = uVar8 - 1;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        RemoveAtSwapImpl(this,uVar8);
      }
      iVar9 = this->ArrayNum;
      uVar8 = uVar7 + 1;
    } while ((int)uVar8 < iVar9);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

