// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 10

// operator= @ 14d0175e0

TArray<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FLiveLinkDebugUIEntry,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FLiveLinkDebugUIEntry,1>,int>
              ((TSharedPtr<FLiveLinkDebugUIEntry,1> *)(this->AllocatorInstance).Data,this->ArrayNum)
    ;
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FLiveLinkDebugUIEntry,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedPtr<FLiveLinkDebugUIEntry,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 14d017680

TArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSizedDefaultAllocator<32>_>
::operator=(TArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSizedDefaultAllocator<32>_>
            *this,TArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSizedDefaultAllocator<32>_>
                  *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,int>
              ((TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// AddZeroed @ 14d022c60

int __thiscall
TArray<FLiveLinkLogInstance::FRepeatableMessage,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FLiveLinkLogInstance::FRepeatableMessage,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  pFVar2 = (this->AllocatorInstance).Data + (longlong)iVar1 * 0x40;
  *(undefined8 *)pFVar2 = 0;
  *(undefined8 *)(pFVar2 + 8) = 0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + 0x18) = 0;
  *(undefined8 *)(pFVar2 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + 0x28) = 0;
  *(undefined8 *)(pFVar2 + 0x30) = 0;
  *(undefined8 *)(pFVar2 + 0x38) = 0;
  return iVar1;
}

// RemoveAtImpl @ 14d078930

void __thiscall
TArray<FLiveLinkClient::FPendingSubjectFrame,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLiveLinkClient::FPendingSubjectFrame,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FPendingSubjectFrame *_Dst;
  
  _Dst = (FPendingSubjectFrame *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<FLiveLinkClient::FPendingSubjectFrame,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0789b0

void __thiscall
TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_> *this
          ,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
            ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x28,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14d078a30

void __thiscall
TArray<FLiveLinkCollectionSourceItem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FLiveLinkCollectionSourceItem,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x40;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 0x20));
  if (*(UObject **)(_Dst + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)(_Dst + 0x10));
    *(undefined8 *)(_Dst + 0x10) = 0;
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x40,(longlong)iVar2 << 6);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14d078ad0

void __thiscall
TArray<FLiveLinkCollectionSubjectItem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FLiveLinkCollectionSubjectItem,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x38;
  if (*(UObject **)(_Dst + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)(_Dst + 0x30));
    *(undefined8 *)(_Dst + 0x30) = 0;
  }
  puVar2 = *(undefined8 **)(_Dst + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*(UObject **)(_Dst + 0x20) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)(_Dst + 0x20));
    *(undefined8 *)(_Dst + 0x20) = 0;
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 0x38,(longlong)iVar3 * 0x38);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14d078b90

void __thiscall
TArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

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

// RemoveSingleSwap @ 14d079660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_> *this,
          ITimedDataInputChannel **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar7 = pFVar1;
    do {
      if (*(ITimedDataInputChannel **)pFVar7 == *param_1) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar6 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return 0;
}

// Reset @ 14d07a770

void __thiscall
TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_> *this
          ,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
              ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
            ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

