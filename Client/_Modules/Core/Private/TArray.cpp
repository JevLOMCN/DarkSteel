// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 199

// HeapPop<bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)> @ 141476a40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_>::
HeapPop<bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>
          (TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_> *this,
          FIoFileBlockRequest **param_1,
          _func___cdecl_bool_FIoFileBlockRequest_ptr_FIoFileBlockRequest_ptr *param_2,
          EAllowShrinking param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((this->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_1 = *(FIoFileBlockRequest **)(this->AllocatorInstance).Data;
  if ((this->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar8 = this->ArrayNum + -1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove(pFVar1,pFVar1 + (longlong)(this->ArrayNum - iVar8) * 8,(longlong)iVar8 << 3);
  }
  iVar8 = this->ArrayNum + -1;
  this->ArrayNum = iVar8;
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar8,&this->ArrayMax);
  }
  iVar8 = this->ArrayNum;
  pFVar1 = (this->AllocatorInstance).Data;
  iVar7 = 0;
  if (1 < iVar8) {
    do {
      iVar4 = iVar7 * 2;
      iVar6 = iVar4 + 1;
      if (iVar4 + 2 < iVar8) {
        bVar5 = (*param_2)(*(FIoFileBlockRequest **)(pFVar1 + (longlong)iVar6 * 8),
                           *(FIoFileBlockRequest **)(pFVar1 + (longlong)iVar4 * 8 + 0x10));
        if (bVar5) {
          iVar6 = iVar4;
        }
        iVar6 = iVar6 + 1;
      }
      bVar5 = (*param_2)(*(FIoFileBlockRequest **)(pFVar1 + (longlong)iVar6 * 8),
                         *(FIoFileBlockRequest **)(pFVar1 + (longlong)iVar7 * 8));
      if (!bVar5) {
        return;
      }
      uVar2 = *(undefined8 *)(pFVar1 + (longlong)iVar7 * 8);
      *(undefined8 *)(pFVar1 + (longlong)iVar7 * 8) = *(undefined8 *)(pFVar1 + (longlong)iVar6 * 8);
      *(undefined8 *)(pFVar1 + (longlong)iVar6 * 8) = uVar2;
      iVar7 = iVar6;
    } while (iVar6 * 2 + 1 < iVar8);
  }
  return;
}

// HeapTop @ 14149ae20

FIoFileBlockRequest ** __thiscall
TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_>::HeapTop
          (TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  FIoFileBlockRequest **ppFVar3;
  
  if (0 < this->ArrayNum) {
    return (FIoFileBlockRequest **)(this->AllocatorInstance).Data;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    ppFVar3 = (FIoFileBlockRequest **)(*pcVar1)();
    return ppFVar3;
  }
  return (FIoFileBlockRequest **)(this->AllocatorInstance).Data;
}

// RemoveAt @ 1414adae0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 1414adbb0

void __thiscall
TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_>::RemoveAtImpl
          (TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FWaitEvent *_Dst;
  
  _Dst = (FWaitEvent *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<LowLevelTasks::Private::FWaitEvent,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1414adc30

void __thiscall
TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<FSharedBuffer,int>((FSharedBuffer *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1414adca0

void __thiscall
TArray<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,TAlignedHeapAllocator<128>_>
::RemoveAtImpl(TArray<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,TAlignedHeapAllocator<128>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TLocalQueue *_Dst;
  
  _Dst = (TLocalQueue *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xa0580);
  DestructItems<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xa0580);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 1414add20

void __thiscall
TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>::
RemoveAtSwapImpl(TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = pFVar1 + (longlong)param_1 * 0x10;
  if ((*(int *)&this_00[8].field_0x0 != 0) &&
     (*(undefined8 **)&this_00->field_0x0 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)&this_00->field_0x0)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,0,0x10);
    *(undefined4 *)&this_00[8].field_0x0 = 0;
  }
  if (*(void **)&this_00->field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&this_00->field_0x0);
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// TArray<char,TSizedDefaultAllocator<32>_><char> @ 1414e36d0

TArray<char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<char,TSizedDefaultAllocator<32>_>::TArray<char,TSizedDefaultAllocator<32>_><char>
          (TArray<char,TSizedDefaultAllocator<32>_> *this,
          TArray<char,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = param_1->ArrayNum;
  piVar2 = &this->ArrayMax;
  *piVar2 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  iVar1 = this->ArrayNum;
  uVar3 = iVar1 + param_2;
  if ((int)uVar3 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((longlong)param_2);
  }
  if (-1 < (int)uVar3) {
    if (*piVar2 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar3,&this->AllocatorInstance,iVar1,piVar2);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<32>_><ArrayViewTests::Derived,int> @ 1414e3750

TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<32>_> * __thiscall
TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<32>_>::
TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<32>_><ArrayViewTests::Derived,int>
          (TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<32>_> *this,
          TArrayView<ArrayViewTests::Derived,int> *param_1)

{
  int iVar1;
  Derived *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return this;
}

// TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<64>_><ArrayViewTests::Derived,int> @ 1414e37e0

TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<64>_> * __thiscall
TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<64>_>::
TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<64>_><ArrayViewTests::Derived,int>
          (TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<64>_> *this,
          TArrayView<ArrayViewTests::Derived,int> *param_1)

{
  int iVar1;
  Derived *_Src;
  longlong lVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  lVar2 = (longlong)iVar1;
  _Src = param_1->DataPtr;
  this->ArrayNum = lVar2;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (8,4,lVar2,0,&this->AllocatorInstance,lVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,lVar2 * 8);
  return this;
}

// TArray<char8_t,TSizedDefaultAllocator<32>_><char8_t> @ 1414e3890

TArray<char8_t,TSizedDefaultAllocator<32>_> * __thiscall
TArray<char8_t,TSizedDefaultAllocator<32>_>::TArray<char8_t,TSizedDefaultAllocator<32>_><char8_t>
          (TArray<char8_t,TSizedDefaultAllocator<32>_> *this,
          TArray<char8_t,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = param_1->ArrayNum;
  piVar2 = &this->ArrayMax;
  *piVar2 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  iVar1 = this->ArrayNum;
  uVar3 = iVar1 + param_2;
  if ((int)uVar3 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((longlong)param_2);
  }
  if (-1 < (int)uVar3) {
    if (*piVar2 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar3,&this->AllocatorInstance,iVar1,piVar2);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t> @ 1414e3910

TArray<wchar_t,TSizedDefaultAllocator<32>_> * __thiscall
TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
          (TArray<wchar_t,TSizedDefaultAllocator<32>_> *this,
          TArray<wchar_t,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = param_1->ArrayNum;
  piVar2 = &this->ArrayMax;
  *piVar2 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  iVar1 = this->ArrayNum;
  uVar3 = iVar1 + param_2;
  if ((int)uVar3 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((longlong)param_2);
  }
  if (-1 < (int)uVar3) {
    if (*piVar2 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,&this->AllocatorInstance,iVar1,piVar2);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// operator=<int_const_,int> @ 1414e3990

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::operator=<int_const_,int>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,TArrayView<int_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  int *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<ArrayViewTests::Derived,int> @ 1414e3a20

TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<32>_> * __thiscall
TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<32>_>::operator=<ArrayViewTests::Derived,int>
          (TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<32>_> *this,
          TArrayView<ArrayViewTests::Derived,int> *param_1)

{
  int *piVar1;
  int iVar2;
  Derived *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// operator=<ArrayViewTests::Derived,int> @ 1414e3ab0

TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<64>_> * __thiscall
TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<64>_>::operator=<ArrayViewTests::Derived,int>
          (TArray<ArrayViewTests::Derived,TSizedDefaultAllocator<64>_> *this,
          TArrayView<ArrayViewTests::Derived,int> *param_1)

{
  long64 *plVar1;
  int iVar2;
  Derived *_Src;
  longlong lVar3;
  
  iVar2 = param_1->ArrayNum;
  lVar3 = (longlong)iVar2;
  plVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = lVar3;
  if ((iVar2 == 0) && (*plVar1 == 0)) {
    *plVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (8,4,lVar3,*plVar1,&this->AllocatorInstance,lVar3,plVar1);
    if (iVar2 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,lVar3 * 8);
    }
  }
  return this;
}

// Append<TArrayView<int_const_,int>_&> @ 1414e8520

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,TArrayView<int_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1->DataPtr,(longlong)iVar1 << 2)
  ;
  return;
}

// CopyToEmpty<int,int> @ 1415017b0

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 2);
  }
  return;
}

// CopyToEmpty<wchar_t,int> @ 141501840

void __thiscall
TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
          (TArray<wchar_t,TSizedDefaultAllocator<32>_> *this,wchar_t *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 2);
  }
  return;
}

// TArray<int,TSizedDefaultAllocator<32>_> @ 14157d790

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,initializer_list<int> *param_1)

{
  int *_Src;
  int *piVar1;
  int iVar2;
  
  _Src = param_1->_First;
  piVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)piVar1 - (longlong)_Src >> 2);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_> @ 14157d820

TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_>::
TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_>
          (TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FAlgosTestBase::FTestData> *param_1)

{
  FTestData *pFVar1;
  longlong lVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  lVar2 = (longlong)param_1->_Last - (longlong)pFVar1;
  lVar2 = lVar2 / 6 + (lVar2 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)(lVar2 >> 2) - (int)(lVar2 >> 0x3f);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<FAlgosTestBase::FTestData,FAlgosTestBase::FTestData,int>
            ((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// TArray<FString,TSizedDefaultAllocator<32>_> @ 14157d8d0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,initializer_list<FString> *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  pFVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<FString,FString,int>((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// ~TArray<int,TSizedDefaultAllocator<32>_> @ 1415880d0

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this)

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

// ~TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_> @ 1415880f0

void __thiscall
TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>::
~TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>
          (TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,int>
            ((TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int> *)
             (this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> @ 141588130

void __thiscall
TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>::
~TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>
          (TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<FString,int>,int>
            ((TTuple<FString,int> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 141588170

void __thiscall
TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
~TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  ForElementType<TTuple<FString,FString>_> *pFVar1;
  ForElementType<TTuple<FString,FString>_> FVar2;
  ForElementType<TTuple<FString,FString>_> FVar3;
  
  pFVar1 = &(this->AllocatorInstance).SecondaryData;
  FVar2 = *pFVar1;
  FVar3 = (ForElementType<TTuple<FString,FString>_>)this;
  if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    FVar3 = FVar2;
  }
  DestructItems<TTuple<FString,FString>,int>((TTuple<FString,FString> *)FVar3,this->ArrayNum);
  FVar2 = *pFVar1;
  if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    FMemory::Free((void *)FVar2);
    return;
  }
  return;
}

// ~TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_> @ 1415881b0

void __thiscall
TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_>::
~TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_>
          (TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FString,TDefaultDelete<FString>_>,int>
            ((TUniquePtr<FString,TDefaultDelete<FString>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FString,TSizedDefaultAllocator<32>_> @ 1415881f0

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>((FString *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14158a590

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::operator=
          (TArray<int,TSizedDefaultAllocator<32>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator== @ 14158cd40

bool __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::operator==
          (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  ForElementType<int> FVar1;
  int iVar2;
  
  iVar2 = this->ArrayNum;
  if (iVar2 != param_1->ArrayNum) {
    return false;
  }
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    param_1 = (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    this = (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
  }
  if ((iVar2 != 0) && (iVar2 = memcmp(this,param_1,(longlong)iVar2 << 2), iVar2 != 0)) {
    return false;
  }
  return true;
}

// operator== @ 14158cda0

bool __thiscall
TArray<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::operator==
          (TArray<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this
          ,TArray<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  ForElementType<TTuple<int,short>_> FVar1;
  bool bVar2;
  ForElementType<TTuple<int,short>_> FVar3;
  
  if (this->ArrayNum == param_1->ArrayNum) {
    FVar1 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<TTuple<int,short>_>)0x0) {
      param_1 = (TArray<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar1;
    }
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar3 = (ForElementType<TTuple<int,short>_>)this;
    if (FVar1 != (ForElementType<TTuple<int,short>_>)0x0) {
      FVar3 = FVar1;
    }
    bVar2 = CompareItems<TTuple<int,short>,int>
                      ((TTuple<int,short> *)FVar3,(TTuple<int,short> *)param_1,this->ArrayNum);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// operator== @ 14158cdf0

bool __thiscall
TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
operator==(TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  ForElementType<TTuple<FString,FString>_> FVar1;
  bool bVar2;
  ForElementType<TTuple<FString,FString>_> FVar3;
  
  if (this->ArrayNum == param_1->ArrayNum) {
    FVar1 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
      param_1 = (TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar1;
    }
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar3 = (ForElementType<TTuple<FString,FString>_>)this;
    if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
      FVar3 = FVar1;
    }
    bVar2 = CompareItems<TTuple<FString,FString>,int>
                      ((TTuple<FString,FString> *)FVar3,(TTuple<FString,FString> *)param_1,
                       this->ArrayNum);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// Empty @ 1415bef90

void __thiscall
TArray<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_> FVar1;
  ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)this;
    if (FVar1 != (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)
                 0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,int>
              ((TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)FVar2,
               this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>_>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1415bf010

void __thiscall
TArray<TTuple<FString,FString>,TFixedAllocator<64>_>::Empty
          (TArray<TTuple<FString,FString>,TFixedAllocator<64>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TTuple<FString,FString>,int>((TTuple<FString,FString> *)this,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<0,TFixedAllocator<64>::ForElementType<TTuple<FString,FString>_>_>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1415bf080

void __thiscall
TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TTuple<FString,FString>,int>
              ((TTuple<FString,FString> *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1415bf0f0

void __thiscall
TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::Empty
          (TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1)

{
  ForElementType<TTuple<FString,FString>_> FVar1;
  ForElementType<TTuple<FString,FString>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TTuple<FString,FString>_>)this;
    if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TTuple<FString,FString>,int>((TTuple<FString,FString> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,FString>_>_>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1415bf170

void __thiscall
TArray<FString,TFixedAllocator<64>_>::Empty(TArray<FString,TFixedAllocator<64>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FString,int>((FString *)this,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<0,TFixedAllocator<64>::ForElementType<FString>_>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1415bf1e0

void __thiscall
TArray<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::Empty
          (TArray<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1)

{
  ForElementType<FString> FVar1;
  ForElementType<FString> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<FString>)this;
    if (FVar1 != (ForElementType<FString>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<FString,int>((FString *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// InsertUninitializedImpl @ 1415c8d40

void __thiscall
TArray<TTuple<int,short>,TFixedAllocator<64>_>::InsertUninitializedImpl
          (TArray<TTuple<int,short>,TFixedAllocator<64>_> *this,int param_1)

{
  TTypeCompatibleBytes<TTuple<int,short>_> *_Src;
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<TTuple<int,short>_>_>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
  }
  _Src = (this->AllocatorInstance).InlineData + param_1;
  this->ArrayNum = iVar1 + 1;
  memmove(_Src + 1,_Src,(longlong)(iVar1 - param_1) << 3);
  return;
}

// InsertUninitializedImpl @ 1415c8da0

void __thiscall
TArray<TTuple<int,short>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<int,short>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  memmove(_Src + 8,_Src,(longlong)(iVar1 - param_1) << 3);
  return;
}

// InsertUninitializedImpl @ 1415c8e00

void __thiscall
TArray<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)0x0) {
    this = (TArray<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1415c8e90

void __thiscall
TArray<TTuple<int,FString>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<int,FString>,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1415c8f10

void __thiscall
TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// InsertUninitializedImpl @ 1415c8f90

void __thiscall
TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
  memmove(_Src + (longlong)param_2 * 0xc,_Src,(longlong)(iVar1 - param_1) * 0xc);
  return;
}

// InsertUninitializedImpl @ 1415c9010

void __thiscall
TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1415c9090

void __thiscall
TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1415c9110

void __thiscall
TArray<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>_>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)0x0)
  {
    this = (TArray<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x20 + (longlong)this);
  memmove((void *)((longlong)param_2 * 0x20 + (longlong)_Src),_Src,(longlong)(iVar2 - param_1) << 5)
  ;
  return;
}

// InsertUninitializedImpl @ 1415c91a0

void __thiscall
TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2
          )

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 1415c9220

void __thiscall
TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1)

{
  ForElementType<TTuple<FString,FString>_> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,FString>_>_>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    this = (TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x20 + (longlong)this);
  memmove((void *)((longlong)_Src + 0x20),_Src,(longlong)(iVar2 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 1415c92a0

void __thiscall
TArray<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::InsertUninitializedImpl
          (TArray<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1)

{
  ForElementType<FString> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FString>)0x0) {
    this = (TArray<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x10 + (longlong)this);
  memmove((void *)((longlong)_Src + 0x10),_Src,(longlong)(iVar2 - param_1) << 4);
  return;
}

// Pop @ 1415d8d00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TRefCountPtr<IExecutionResource> __thiscall
TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>::Pop
          (TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_> *this,
          EAllowShrinking param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TRefCountPtr<IExecutionResource> TVar6;
  undefined7 in_register_00000011;
  IExecutionResource *pIVar7;
  char in_R8B;
  
  pIVar7 = (IExecutionResource *)CONCAT71(in_register_00000011,param_1);
  if (this->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (IExecutionResource *)(*pcVar3)();
      return (TRefCountPtr<IExecutionResource>)TVar6.Reference;
    }
  }
  iVar5 = this->ArrayNum;
  pFVar1 = (this->AllocatorInstance).Data;
  *pIVar7 = (IExecutionResource)0x0;
  *pIVar7 = *(IExecutionResource *)(pFVar1 + (longlong)iVar5 * 8 + -8);
  *(undefined8 *)(pFVar1 + (longlong)iVar5 * 8 + -8) = 0;
  iVar5 = this->ArrayNum;
  pFVar1 = (this->AllocatorInstance).Data;
  plVar2 = *(longlong **)(pFVar1 + (longlong)iVar5 * 8 + -8);
  pFVar1 = pFVar1 + (longlong)iVar5 * 8;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar5 = this->ArrayNum - iVar5;
  if (iVar5 != 0) {
    memmove(pFVar1 + -8,pFVar1,(longlong)iVar5 << 3);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (in_R8B == '\x01') {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return (TRefCountPtr<IExecutionResource>)pIVar7;
}

// RemoveAt @ 1415e16d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TFixedAllocator<64>_>::RemoveAt
          (TArray<int,TFixedAllocator<64>_> *this,int param_1,EAllowShrinking param_2)

{
  TTypeCompatibleBytes<int> *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).InlineData + param_1;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)iVar4 << 2);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<0,TFixedAllocator<64>::ForElementType<int>_>
              (4,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e17b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar4 << 2);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e1880

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
          (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  void *_Dst;
  ForElementType<int> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<int> FVar5;
  int iVar6;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<int>)this;
  if (FVar1 != (ForElementType<int>)0x0) {
    FVar5 = FVar1;
  }
  _Dst = (void *)((longlong)FVar5 + (longlong)param_1 * 4);
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar6 << 2);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e1970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<int,short>,TFixedAllocator<64>_>::RemoveAt
          (TArray<TTuple<int,short>,TFixedAllocator<64>_> *this,int param_1,EAllowShrinking param_2)

{
  TTypeCompatibleBytes<TTuple<int,short>_> *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).InlineData + param_1;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<0,TFixedAllocator<64>::ForElementType<TTuple<int,short>_>_>
              (8,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e1a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<int,short>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<int,short>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e1b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
          (TArray<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this
          ,int param_1,EAllowShrinking param_2)

{
  void *_Dst;
  ForElementType<TTuple<int,short>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<TTuple<int,short>_> FVar5;
  int iVar6;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<TTuple<int,short>_>)this;
  if (FVar1 != (ForElementType<TTuple<int,short>_>)0x0) {
    FVar5 = FVar1;
  }
  _Dst = (void *)((longlong)FVar5 + (longlong)param_1 * 8);
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,short>_>_>
              (8,4,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e1c10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FString,FString>,TFixedAllocator<64>_>::RemoveAt
          (TArray<TTuple<FString,FString>,TFixedAllocator<64>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTypeCompatibleBytes<TTuple<FString,FString>_> *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).InlineData + param_1;
  if (*(void **)(_Dst->Pad + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst->Pad + 0x10));
  }
  if (*(void **)_Dst->Pad != (void *)0x0) {
    FMemory::Free(*(void **)_Dst->Pad);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)iVar4 << 5);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<0,TFixedAllocator<64>::ForElementType<TTuple<FString,FString>_>_>
              (0x20,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e1d10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  if (*(void **)(_Dst + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x10));
  }
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x20,(longlong)iVar4 << 5);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e1e00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
          (TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  ForElementType<TTuple<FString,FString>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TTuple<FString,FString>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<TTuple<FString,FString>_>)this;
  if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    FVar6 = FVar1;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x20 + (longlong)FVar6);
  if ((void *)_Dst[2] != (void *)0x0) {
    FMemory::Free((void *)_Dst[2]);
  }
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = this->ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar5 << 5);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,FString>_>_>
              (0x20,8,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e1f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FString,TFixedAllocator<64>_>::RemoveAt
          (TArray<FString,TFixedAllocator<64>_> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTypeCompatibleBytes<FString> *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).InlineData + param_1;
  if (*(void **)_Dst->Pad != (void *)0x0) {
    FMemory::Free(*(void **)_Dst->Pad);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<0,TFixedAllocator<64>::ForElementType<FString>_>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e2000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1415e20e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
          (TArray<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  ForElementType<FString> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<FString> FVar5;
  int iVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<FString>)this;
  if (FVar1 != (ForElementType<FString>)0x0) {
    FVar5 = FVar1;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x10 + (longlong)FVar5);
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 2,(longlong)iVar6 << 4);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
              (0x10,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 1415e2c20

void __thiscall
TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  void *_Dst;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)this;
  if (FVar1 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0x18),(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1415e2c90

void __thiscall
TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  void *_Dst;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)this;
  if (FVar1 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)FVar3 + (longlong)param_1 * 0x28);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0x28),(longlong)iVar2 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1415e2d00

void __thiscall
TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  void *_Dst;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)this;
  if (FVar1 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)FVar3 + (longlong)param_1 * 0xc);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0xc),(longlong)iVar2 * 0xc);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1415e2d70

void __thiscall
TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<64>_>::RemoveAtImpl
          (TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<64>_>
           *this,long64 param_1,long64 param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *_Dst;
  longlong lVar1;
  
  _Dst = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
         ((this->AllocatorInstance).Data + param_1 * 0x18);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,__int64>(_Dst,param_2);
  lVar1 = (this->ArrayNum - param_1) - param_2;
  if (lVar1 != 0) {
    memmove(_Dst,_Dst + param_2,lVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1415e2df0

void __thiscall
TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSwap @ 1415e55c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(int *)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -4;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 4,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 4
                  ,(longlong)iVar10 << 2);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// RemoveSwap @ 1415e57d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::RemoveSwap
          (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,int *param_1,
          EAllowShrinking param_2)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<int> FVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<int>)this;
  if (FVar1 != (ForElementType<int>)0x0) {
    FVar7 = FVar1;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<int>)this;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar7 = FVar1;
    }
    if ((param_1 < (int *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
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
  }
  iVar5 = this->ArrayNum;
  uVar10 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    bVar3 = false;
    iVar11 = iVar5;
    do {
      uVar9 = 0;
      if ((int)uVar10 < iVar11) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar1 = (this->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<int>)this;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar7 = FVar1;
      }
      uVar9 = uVar10;
      if (*(int *)((longlong)FVar7 + lVar8) == *param_1) {
        uVar9 = uVar10 - 1;
        lVar8 = lVar8 + -4;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar10 < this->ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
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
        FVar1 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar7 = FVar1;
        }
        iVar11 = ~uVar10 + this->ArrayNum;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove((void *)((longlong)FVar7 + (longlong)(int)uVar10 * 4),
                  (void *)((longlong)FVar7 + (longlong)(this->ArrayNum - iVar11) * 4),
                  (longlong)iVar11 << 2);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar11 = this->ArrayNum;
      uVar10 = uVar9 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar10 < iVar11);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,&this->AllocatorInstance,iVar11,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// RemoveSwap @ 1415e5a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::RemoveSwap
          (TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> *this,
          int *param_1,EAllowShrinking param_2)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<int> FVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<int>)this;
  if (FVar1 != (ForElementType<int>)0x0) {
    FVar7 = FVar1;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<int>)this;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar7 = FVar1;
    }
    if ((param_1 < (int *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
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
  }
  iVar5 = this->ArrayNum;
  uVar10 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    bVar3 = false;
    iVar11 = iVar5;
    do {
      uVar9 = 0;
      if ((int)uVar10 < iVar11) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar1 = (this->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<int>)this;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar7 = FVar1;
      }
      uVar9 = uVar10;
      if (*(int *)((longlong)FVar7 + lVar8) == *param_1) {
        uVar9 = uVar10 - 1;
        lVar8 = lVar8 + -4;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar10 < this->ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
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
        FVar1 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar7 = FVar1;
        }
        iVar11 = ~uVar10 + this->ArrayNum;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove((void *)((longlong)FVar7 + (longlong)(int)uVar10 * 4),
                  (void *)((longlong)FVar7 + (longlong)(this->ArrayNum - iVar11) * 4),
                  (longlong)iVar11 << 2);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar11 = this->ArrayNum;
      uVar10 = uVar9 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar10 < iVar11);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>::ForElementType<int>_>
                (4,4,&this->AllocatorInstance,iVar11,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// RemoveSwap @ 1415e5c70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<int,TSizedNonshrinkingAllocator<32>_>::RemoveSwap
          (TArray<int,TSizedNonshrinkingAllocator<32>_> *this,int *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(int *)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -4;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 4,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 4
                  ,(longlong)iVar10 << 2);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// SetNum @ 1415f2580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1415f26b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,long64 param_1,
          EAllowShrinking param_2)

{
  long64 *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  FScriptContainerElement *_Dst;
  longlong lVar6;
  size_t _Size;
  
  plVar1 = &this->ArrayNum;
  lVar6 = *plVar1;
  if (lVar6 < param_1) {
    lVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,param_1 - lVar6,&this->AllocatorInstance,plVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + lVar5,0,param_1 - lVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1);
    }
    if (param_1 < lVar6) {
      lVar6 = lVar6 - param_1;
      if ((lVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (lVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        _Size = (*plVar1 - lVar6) - param_1;
        if (_Size != 0) {
          memmove(_Dst,_Dst + lVar6,_Size);
        }
        lVar2 = *plVar1;
        *plVar1 = lVar2 - lVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,lVar2 - lVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1415f27e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 4,0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1415f2920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedDefaultAllocator<64>_>::SetNum
          (TArray<int,TSizedDefaultAllocator<64>_> *this,long64 param_1,EAllowShrinking param_2)

{
  long64 *plVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  long64 lVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = &this->ArrayNum;
  lVar5 = *plVar1;
  if (lVar5 < param_1) {
    lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (4,4,param_1 - lVar5,&this->AllocatorInstance,plVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + lVar4 * 4,0,(param_1 - lVar5) * 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1);
    }
    if (param_1 < lVar5) {
      lVar5 = lVar5 - param_1;
      if ((lVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (lVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1 * 4;
        lVar6 = (*plVar1 - lVar5) - param_1;
        if (lVar6 != 0) {
          memmove(_Dst,_Dst + lVar5 * 4,lVar6 * 4);
        }
        lVar6 = *plVar1;
        *plVar1 = lVar6 - lVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,lVar6 - lVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1415f2a60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1415f2bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
          (TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1415f2d20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 1415f2e50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,
           (longlong)(param_1 - iVar5) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1415f2fa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<char,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (int)uVar5,(longlong)iVar4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1415f30c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1415f31f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<char8_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<char8_t,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (int)uVar5,(longlong)iVar4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1415f3310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<wchar_t,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 2;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 2,(longlong)iVar4 * 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1415f3440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 4,0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1415f3580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1415f36e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNumZeroed
          (TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<FName,TSizedDefaultAllocator<32>_><FName_const_,int> @ 14160c0b0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::
TArray<FName,TSizedDefaultAllocator<32>_><FName_const_,int>
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,TArrayView<FName_const_,int> *param_1)

{
  int iVar1;
  FName *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return this;
}

// Empty @ 141637ef0

void __thiscall
TArray<FGenericPlatformSymbolData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGenericPlatformSymbolData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FGenericPlatformSymbolData,int>
              ((FGenericPlatformSymbolData *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141637f60

void __thiscall
TArray<FGenericPlatformSymbolInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGenericPlatformSymbolInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141637fb0

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FString,int>((FString *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// InsertUninitializedImpl @ 1416497a0

void __thiscall
TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 141649820

void __thiscall
TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1416498a0

void __thiscall
TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 141649920

void __thiscall
TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1416499a0

void __thiscall
TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// Num @ 14164e140

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Num(TArray<FString,TSizedDefaultAllocator<32>_> *this)

{
  return this->ArrayNum;
}

// RemoveAt @ 141657090

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 141657170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 141657250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = 2;
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  pFVar6 = _Dst + 0x28;
  do {
    pFVar1 = pFVar6 + -0x10;
    pFVar6 = pFVar6 + -0x10;
    lVar5 = lVar5 + -1;
    if (*(void **)pFVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar1);
    }
  } while (lVar5 != 0);
  iVar7 = this->ArrayNum + ~param_1;
  if (iVar7 != 0) {
    memmove(_Dst,_Dst + 0x28,(longlong)iVar7 * 0x28);
  }
  iVar7 = this->ArrayNum + -1;
  this->ArrayNum = iVar7;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,&this->AllocatorInstance,iVar7,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 141657370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0xc,(longlong)iVar4 * 0xc);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// SetNum @ 14165dff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FStackWalkModuleInfo,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FStackWalkModuleInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x468,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x468;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x468,(longlong)iVar4 * 0x468);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x468,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// InsertUninitializedImpl @ 1416b0850

void __thiscall
TArray<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>,TSizedLLMAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>,TSizedLLMAllocator<32>_> *this,
          int param_1,int param_2)

{
  void *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (void *)((longlong)(this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar1 - param_1) * 0x18);
  return;
}

// SetNumUninitialized @ 1416c04c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,long64 param_1,
          EAllowShrinking param_2)

{
  long64 *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *_Dst;
  longlong lVar5;
  size_t _Size;
  
  plVar1 = &this->ArrayNum;
  lVar5 = *plVar1;
  if (lVar5 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,param_1 - lVar5,&this->AllocatorInstance,plVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1);
    }
    if (param_1 < lVar5) {
      lVar5 = lVar5 - param_1;
      if ((lVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (lVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        _Size = (*plVar1 - lVar5) - param_1;
        if (_Size != 0) {
          memmove(_Dst,_Dst + lVar5,_Size);
        }
        lVar2 = *plVar1;
        *plVar1 = lVar2 - lVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,lVar2 - lVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FICUInternationalization::FICUCultureData_const_&> @ 1416ca1b0

int __thiscall
TArray<FICUInternationalization::FICUCultureData,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FICUInternationalization::FICUCultureData_const_&>
          (TArray<FICUInternationalization::FICUCultureData,TSizedDefaultAllocator<32>_> *this,
          FICUCultureData *param_1)

{
  FICUCultureData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *this_00;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FICUCultureData *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    this_00 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x40;
    ::FString::FString((FString *)this_00,&param_1->Name);
    ::FString::FString((FString *)(this_00 + 0x10),&param_1->LanguageCode);
    ::FString::FString((FString *)(this_00 + 0x20),&param_1->ScriptCode);
    ::FString::FString((FString *)(this_00 + 0x30),&param_1->CountryCode);
  }
  return iVar4;
}

// AddUniqueImpl<TSharedRef<FCulture,1>_> @ 1416ca2b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall
TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TSharedRef<FCulture,1>_>
          (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<FCulture,1> *param_1)

{
  TSharedRef<FCulture,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FCulture,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedRef<FCulture,1> *)(this->AllocatorInstance).Data;
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
  *(FCulture **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// Find @ 1416ee360

int __thiscall
TArray<FICUInternationalization::FICUCultureData,TSizedDefaultAllocator<32>_>::Find
          (TArray<FICUInternationalization::FICUCultureData,TSizedDefaultAllocator<32>_> *this,
          FICUCultureData *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar5 = pFVar3;
  while( true ) {
    if (pFVar5 == pFVar3 + (longlong)iVar1 * 0x40) {
      return -1;
    }
    iVar4 = *(int *)(pFVar5 + 8);
    iVar2 = (param_1->Name).Data.ArrayNum;
    if (iVar4 == iVar2) {
      if (iVar4 < 2) break;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar5,(wchar_t *)(param_1->Name).Data.AllocatorInstance.Data)
      ;
      bVar6 = iVar4 == 0;
    }
    else {
      bVar6 = iVar4 + iVar2 == 1;
    }
    if (bVar6) break;
    pFVar5 = pFVar5 + 0x40;
  }
  return (int)((longlong)pFVar5 - (longlong)pFVar3 >> 6);
}

// InsertUninitializedImpl @ 141701110

void __thiscall
TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<TTuple<FString,FString>_> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,FString>_>_>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    this = (TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x20 + (longlong)this);
  memmove((void *)((longlong)param_2 * 0x20 + (longlong)_Src),_Src,(longlong)(iVar2 - param_1) << 5)
  ;
  return;
}

// RemoveAtImpl @ 14170bec0

void __thiscall
TArray<FTextSourceSiteContext,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FTextSourceSiteContext,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FTextSourceSiteContext *_Dst;
  
  _Dst = (FTextSourceSiteContext *)((this->AllocatorInstance).Data + (longlong)param_1 * 200);
  DestructItems<FTextSourceSiteContext,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 200);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14170bf40

void __thiscall
TArray<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar1;
  int iVar2;
  TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_> *_Dst;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)this;
  if (FVar1 != (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_1 * 0x10 + (longlong)FVar3);
  DestructItems<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14170bfc0

void __thiscall
TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  TSharedPtr<FLocMetadataValue,1> *_Dst;
  
  _Dst = (TSharedPtr<FLocMetadataValue,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FLocMetadataValue,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14170d740

void __thiscall
TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  TTuple<FName,TSharedPtr<FCulture,1>_> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TTuple<FName,TSharedPtr<FCulture,1>_> *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>(pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>(pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// Reset @ 14170d7d0

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,int param_1)

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
    DestructItems<FString,int>((FString *)pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FString,int>((FString *)pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNumZeroed @ 1417114f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned___int64,TFixedAllocator<100>_>::SetNumZeroed
          (TArray<unsigned___int64,TFixedAllocator<100>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned___int64> *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<100>::ForElementType<unsigned___int64>_>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).InlineData + iVar4,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TFixedAllocator<100>::ForElementType<unsigned___int64>_>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<unsigned_char,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_><unsigned_char_const_,int> @ 141722170

TArray<unsigned_char,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<unsigned_char,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>::
TArray<unsigned_char,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_><unsigned_char_const_,int>
          (TArray<unsigned_char,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  int iVar1;
  uchar *_Src;
  ForElementType<unsigned_char> FVar2;
  ForElementType<unsigned_char> _Dst;
  
  (this->AllocatorInstance).SecondaryData = (ForElementType<unsigned_char>)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0x800;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
            (1,1,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<unsigned_char>)this;
  if (FVar2 != (ForElementType<unsigned_char>)0x0) {
    _Dst = FVar2;
  }
  memcpy((void *)_Dst,_Src,(longlong)iVar1);
  return this;
}

// TArray<FString,TSizedDefaultAllocator<32>_><FString_const_,int> @ 141722220

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
TArray<FString,TSizedDefaultAllocator<32>_><FString_const_,int>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,TArrayView<FString_const_,int> *param_1
          )

{
  int iVar1;
  FString *pFVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<FString,FString,int>((this->AllocatorInstance).Data,pFVar2,iVar1);
  return this;
}

// AddUniqueImpl<int_const_&> @ 141724410

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(int *)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) &&
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
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(int *)(pFVar1 + (longlong)iVar4 * 4) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FString_const_&> @ 141724510

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    ::FString::FString((FString *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10),param_1)
    ;
  }
  return iVar4;
}

// Contains<FString> @ 141728140

bool __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  
  pFVar3 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    iVar2 = *(int *)(pFVar3 + 8);
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return true;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar3,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = iVar2 + iVar1 == 1;
    }
    if (bVar5) break;
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// operator+= @ 141740730

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::operator+=
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FString,FString,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
               (FString *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return this;
}

// Empty @ 141752850

void __thiscall
TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)(this->AllocatorInstance).Data,this->ArrayNum
              );
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1417528c0

void __thiscall
TArray<FIoContainerHeaderLocalizedPackage,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FIoContainerHeaderLocalizedPackage,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141752910

void __thiscall
TArray<FIoContainerHeaderPackageRedirect,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FIoContainerHeaderPackageRedirect,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141752960

void __thiscall
TArray<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1417529b0

void __thiscall
TArray<FIoFileIndexEntry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FIoFileIndexEntry,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141752a00

void __thiscall
TArray<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FTextLocalizationResourceString,int>
              ((FTextLocalizationResourceString *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141752a70

void __thiscall
TArray<FPackageId,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPackageId,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 141755b40

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Find
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar5 = pFVar3;
  while( true ) {
    if (pFVar5 == pFVar3 + (longlong)iVar1 * 0x10) {
      return -1;
    }
    iVar4 = *(int *)(pFVar5 + 8);
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar4 == iVar2) {
      if (iVar4 < 2) break;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar5,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar6 = iVar4 == 0;
    }
    else {
      bVar6 = iVar4 + iVar2 == 1;
    }
    if (bVar6) break;
    pFVar5 = pFVar5 + 0x10;
  }
  return (int)((longlong)pFVar5 - (longlong)pFVar3 >> 4);
}

// InsertUninitializedImpl @ 141766300

void __thiscall
TArray<TTuple<FTextFormatString,FTextFormatString>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<FTextFormatString,FTextFormatString>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
  memmove(_Src + (longlong)param_2 * 0x40,_Src,(longlong)(iVar1 - param_1) << 6);
  return;
}

// InsertUninitializedImpl @ 141766380

void __thiscall
TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,0x10,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x50;
  memmove(_Src + (longlong)param_2 * 0x50,_Src,(longlong)(iVar1 - param_1) * 0x50);
  return;
}

// InsertUninitializedImpl @ 141766400

void __thiscall
TArray<TTuple<FTextFormatString,FTextFormat>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FTextFormatString,FTextFormat>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// RemoveAtImpl @ 141776420

void __thiscall
TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FFormatArgumentData *_Dst;
  int iVar1;
  
  _Dst = (FFormatArgumentData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x48);
  DestructItems<FFormatArgumentData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x48);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1417764a0

void __thiscall
TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FFormatArgumentValue *_Dst;
  
  _Dst = (FFormatArgumentValue *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<FFormatArgumentValue,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14177d9d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<wchar_t,TSizedInlineAllocator<1035,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<wchar_t,TSizedInlineAllocator<1035,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<wchar_t> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<wchar_t> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1035,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
                      (2,2,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<wchar_t>)0x0) {
      this = (TArray<wchar_t,TSizedInlineAllocator<1035,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 2),0,(longlong)(param_1 - iVar6) * 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<wchar_t>)this;
        if (FVar2 != (ForElementType<wchar_t>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 2);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 2),(longlong)iVar6 * 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1035,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
                    (2,2,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<char,TSizedDefaultAllocator<32>_><char_const_,int> @ 141786b20

TArray<char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<char,TSizedDefaultAllocator<32>_>::TArray<char,TSizedDefaultAllocator<32>_><char_const_,int>
          (TArray<char,TSizedDefaultAllocator<32>_> *this,TArrayView<char_const_,int> *param_1)

{
  int iVar1;
  char *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1);
  return this;
}

// TArray<unsigned_char,TSizedDefaultAllocator<32>_><unsigned_char_const_,int> @ 141786bb0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
TArray<unsigned_char,TSizedDefaultAllocator<32>_><unsigned_char_const_,int>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  int iVar1;
  uchar *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1);
  return this;
}

// TArray<int,TSizedDefaultAllocator<32>_><int_const_,int> @ 141786c40

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_><int_const_,int>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,TArrayView<int_const_,int> *param_1)

{
  int iVar1;
  int *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
  return this;
}

// TArray<FIoStoreTocHeader,TSizedDefaultAllocator<32>_><FIoStoreTocHeader_const_,int> @ 141786cd0

TArray<FIoStoreTocHeader,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FIoStoreTocHeader,TSizedDefaultAllocator<32>_>::
TArray<FIoStoreTocHeader,TSizedDefaultAllocator<32>_><FIoStoreTocHeader_const_,int>
          (TArray<FIoStoreTocHeader,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FIoStoreTocHeader_const_,int> *param_1)

{
  int iVar1;
  FIoStoreTocHeader *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x90,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x90);
  return this;
}

// operator=<unsigned_char_const_,int> @ 141787020

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  uchar *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2);
  }
  return this;
}

// operator=<FIoOffsetAndLength_const_,int> @ 1417870b0

TArray<FIoOffsetAndLength,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FIoOffsetAndLength,TSizedDefaultAllocator<32>_>::operator=<FIoOffsetAndLength_const_,int>
          (TArray<FIoOffsetAndLength,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FIoOffsetAndLength_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FIoOffsetAndLength *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (10,1,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 10);
  }
  return this;
}

// operator=<FIoStoreTocCompressedBlockEntry_const_,int> @ 141787140

TArray<FIoStoreTocCompressedBlockEntry,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FIoStoreTocCompressedBlockEntry,TSizedDefaultAllocator<32>_>::
operator=<FIoStoreTocCompressedBlockEntry_const_,int>
          (TArray<FIoStoreTocCompressedBlockEntry,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FIoStoreTocCompressedBlockEntry_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FIoStoreTocCompressedBlockEntry *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,1,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  }
  return this;
}

// operator=<FIoStoreTocEntryMeta_const_,int> @ 1417871e0

TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_>::operator=<FIoStoreTocEntryMeta_const_,int>
          (TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FIoStoreTocEntryMeta_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FIoStoreTocEntryMeta *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x18);
  }
  return this;
}

// operator=<FIoChunkId_const_,int> @ 141787280

TArray<FIoChunkId,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FIoChunkId,TSizedDefaultAllocator<32>_>::operator=<FIoChunkId_const_,int>
          (TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FIoChunkId_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FIoChunkId *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,1,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  }
  return this;
}

// operator=<FSHAHash_const_,int> @ 141787320

TArray<FSHAHash,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FSHAHash,TSizedDefaultAllocator<32>_>::operator=<FSHAHash_const_,int>
          (TArray<FSHAHash,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FSHAHash_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FSHAHash *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x14);
  }
  return this;
}

// AddUniqueImpl<FString> @ 1417880f0

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  iVar3 = Find(this,param_1);
  if (iVar3 == -1) {
    pFVar4 = (this->AllocatorInstance).Data;
    if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 0x10)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    iVar3 = this->ArrayNum;
    if (iVar3 == this->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar3 + 1;
    pFVar4 = (this->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar4 = 0;
    *(FScriptContainerElement **)pFVar4 = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar4 + 8) = (param_1->Data).ArrayNum;
    *(int *)(pFVar4 + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  return iVar3;
}

// TArray<unsigned_char,TSizedDefaultAllocator<32>_> @ 14179b680

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::TArray<unsigned_char,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<enum_EUnit,TSizedDefaultAllocator<32>_> @ 14179b6a0

TArray<EUnit,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EUnit,TSizedDefaultAllocator<32>_>::TArray<enum_EUnit,TSizedDefaultAllocator<32>_>
          (void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  return this;
}

// ~TArray<unsigned_char,TSizedDefaultAllocator<32>_> @ 1417a5de0

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
~TArray<unsigned_char,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this)

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

// ~TArray<enum_EUnit,TSizedDefaultAllocator<32>_> @ 1417a5e00

void __thiscall
TArray<enum_EUnit,TSizedDefaultAllocator<32>_>::~TArray<enum_EUnit,TSizedDefaultAllocator<32>_>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
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

// Insert @ 1417dc5c0

int __thiscall
TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> *this,
          TExpressionToken<wchar_t> *param_1,int param_2)

{
  TExpressionToken<wchar_t> *pTVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FExpressionNode *this_00;
  
  pTVar1 = (TExpressionToken<wchar_t> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x60;
  memmove(pFVar6 + 0x60,pFVar6,(longlong)(iVar5 - param_2) * 0x60);
  this_00 = (FExpressionNode *)((this->AllocatorInstance).Data + (longlong)param_2 * 0x60);
  FExpressionNode::FExpressionNode(this_00,&param_1->Node);
  pwVar3 = (param_1->Context).TokenEnd;
  *(wchar_t **)&this_00[1].TypeId = (param_1->Context).TokenStart;
  *(wchar_t **)&this_00[1].TypeId.C = pwVar3;
  *(undefined8 *)this_00[1].InlineBytes = *(undefined8 *)&(param_1->Context).LineNumber;
  return param_2;
}

// InsertUninitializedImpl @ 1417dc6d0

void __thiscall
TArray<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// Pop @ 1417eafa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
* __thiscall
TArray<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
::Pop(TArray<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
      *this,TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
            *__return_storage_ptr__,EAllowShrinking param_1)

{
  ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  *pTVar5;
  ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
  FVar6;
  longlong lVar7;
  void *_Src;
  
  if (this->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  iVar4 = this->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (uchar *)0x0;
  FVar6 = (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
           )this;
  if (FVar1 != (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                )0x0) {
    FVar6 = FVar1;
  }
  lVar7 = (longlong)iVar4 * 0x10 + (longlong)FVar6;
  (__return_storage_ptr__->AllocatorInstance).Data = *(uchar **)(lVar7 + -0x10);
  *(undefined8 *)(lVar7 + -0x10) = 0;
  __return_storage_ptr__->ArrayNum = *(int *)(lVar7 + -8);
  __return_storage_ptr__->ArrayMax = *(int *)(lVar7 + -4);
  *(undefined8 *)(lVar7 + -8) = 0;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  iVar4 = this->ArrayNum;
  FVar6 = (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
           )this;
  if (FVar1 != (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                )0x0) {
    FVar6 = FVar1;
  }
  _Src = (void *)((longlong)iVar4 * 0x10 + (longlong)FVar6);
  if (*(void **)((longlong)_Src + -0x10) != (void *)0x0) {
    TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::Free
              (*(void **)((longlong)_Src + -0x10));
  }
  iVar4 = this->ArrayNum - iVar4;
  if (iVar4 != 0) {
    memmove((void *)((longlong)_Src + -0x10),_Src,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>_>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return __return_storage_ptr__;
}

// RemoveAtImpl @ 1417f4f20

void __thiscall
TArray<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FDecodeContext *_Dst;
  
  _Dst = (FDecodeContext *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNumUninitialized @ 1417fd8f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (int)uVar5,(longlong)iVar4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1417fda10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TSizedInlineAllocator<1600,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<unsigned_char,TSizedInlineAllocator<1600,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<unsigned_char> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_char> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1600,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<unsigned_char>)this;
        if (FVar2 != (ForElementType<unsigned_char>)0x0) {
          FVar6 = FVar2;
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)((longlong)FVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)FVar6 + (longlong)param_1),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1600,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator= @ 141816d40

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<FString,int>((FString *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FString,FString,int>((this->AllocatorInstance).Data,(FString *)pFVar3,iVar2);
  }
  return this;
}

// CopyToEmpty<FString,int> @ 141846800

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::CopyToEmpty<FString,int>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FString,FString,int>((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> @ 141852ef0

TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>::
TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>
          (TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FDynamicLayerInfo> *param_1)

{
  FDynamicLayerInfo *pFVar1;
  FDynamicLayerInfo *pFVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  pFVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pFVar2 - (longlong)pFVar1 >> 5);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<FDynamicLayerInfo,FDynamicLayerInfo,int>
            ((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// Remove @ 14188a110

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  <lambda_1> local_res8;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  local_res8.Item = param_1;
  iVar4 = RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                    (this,&local_res8);
  return iVar4;
}

// AddUniqueImpl<FOutputDevice_*_const_&> @ 1418aa7f0

int __thiscall
TArray<FOutputDevice_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FOutputDevice_*_const_&>
          (TArray<FOutputDevice_*,TSizedDefaultAllocator<32>_> *this,FOutputDevice **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FOutputDevice **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
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
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FOutputDevice **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FName_const_&> @ 1418aa8f0

int __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,FName *param_1)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (*pFVar6 == *param_1) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
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
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FName *)(pFVar2 + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// Remove @ 1418f26d0

int __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,FName *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (pFVar1[lVar6] != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + iVar9,pFVar1 + iVar7,(longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// Append<FName,TSizedDefaultAllocator<32>_> @ 141903b80

void __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::Append<FName,TSizedDefaultAllocator<32>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
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
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// Append<FString,TSizedDefaultAllocator<32>_> @ 141903c20

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
            (param_1->AllocatorInstance).Data,(longlong)iVar1 << 4);
    param_1->ArrayNum = 0;
  }
  return;
}

// Append<FString,TSizedDefaultAllocator<32>_> @ 141903cd0

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
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
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FString,FString,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
               (FString *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// TArray<unsigned___int64,TSizedDefaultAllocator<32>_> @ 141913af0

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<unsigned___int64,TSizedDefaultAllocator<32>_> @ 1419198f0

void __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
~TArray<unsigned___int64,TSizedDefaultAllocator<32>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this)

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

// operator= @ 14191cc00

TArray<char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<char,TSizedDefaultAllocator<32>_>::operator=
          (TArray<char,TSizedDefaultAllocator<32>_> *this,
          TArray<char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// RemoveAtImpl @ 141965690

void __thiscall
TArray<FTrackedActivityManager::FInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FTrackedActivityManager::FInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FInfo *_Dst;
  int iVar1;
  
  _Dst = (FInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FTrackedActivityManager::FInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 1419ab2a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FCompressedChunkInfo,TSizedDefaultAllocator<64>_>::SetNum
          (TArray<FCompressedChunkInfo,TSizedDefaultAllocator<64>_> *this,long64 param_1,
          EAllowShrinking param_2)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  long64 lVar4;
  FScriptContainerElement *_Dst;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = &this->ArrayNum;
  lVar5 = *plVar1;
  if (lVar5 < param_1) {
    lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - lVar5,&this->AllocatorInstance,plVar1,&this->ArrayMax);
    DefaultConstructItems<FCompressedChunkInfo,__int64>
              ((this->AllocatorInstance).Data + lVar4 * 0x10,param_1 - lVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1);
    }
    if (param_1 < lVar5) {
      lVar5 = lVar5 - param_1;
      if ((lVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (lVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1 * 0x10;
        lVar6 = (*plVar1 - lVar5) - param_1;
        if (lVar6 != 0) {
          memmove(_Dst,_Dst + lVar5 * 0x10,lVar6 * 0x10);
        }
        lVar6 = *plVar1;
        *plVar1 = lVar6 - lVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,lVar6 - lVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<FFileRegion,TSizedDefaultAllocator<32>_><FFileRegion_const_,int> @ 1419b4240

TArray<FFileRegion,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFileRegion,TSizedDefaultAllocator<32>_>::
TArray<FFileRegion,TSizedDefaultAllocator<32>_><FFileRegion_const_,int>
          (TArray<FFileRegion,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FFileRegion_const_,int> *param_1)

{
  int iVar1;
  FFileRegion *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
  return this;
}

// FindByKey<FGuid> @ 1419be290

FCustomVersion * __thiscall
TArray<FCustomVersion,TSizedDefaultAllocator<32>_>::FindByKey<FGuid>
          (TArray<FCustomVersion,TSizedDefaultAllocator<32>_> *this,FGuid *param_1)

{
  FCustomVersion *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FCustomVersion *pFVar4;
  
  pFVar4 = (FCustomVersion *)(this->AllocatorInstance).Data;
  pFVar1 = pFVar4 + this->ArrayNum;
  if (pFVar4 != pFVar1) {
    uVar2 = param_1->C;
    uVar3 = param_1->D;
    do {
      if (((param_1->B == (pFVar4->Key).B && uVar3 == (pFVar4->Key).D) && uVar2 == (pFVar4->Key).C)
          && param_1->A == (pFVar4->Key).A) {
        return pFVar4;
      }
      pFVar4 = pFVar4 + 1;
    } while (pFVar4 != pFVar1);
  }
  return (FCustomVersion *)0x0;
}

// operator= @ 1419d3560

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 1419d35f0

TArray<FStatMessage,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FStatMessage,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *this,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// AddZeroed @ 1419deab0

int __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + iVar1,0,(longlong)param_1);
  return iVar1;
}

// Empty @ 1419f2cf0

void __thiscall
TArray<FFileRegion,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FFileRegion,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1419f2d40

void __thiscall
TArray<FStatsFrameInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FStatsFrameInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FStatsFrameInfo,int>
              ((FStatsFrameInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 141a19f80

void __thiscall
TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetNumZeroed @ 141a20b00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 141a20c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<wchar_t,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<wchar_t,TMemoryImageAllocator<0>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (2,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar4 * 2),0,(longlong)(param_1 - iVar5) * 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 2);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 2),(longlong)iVar5 * 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (2,2,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 141a91cf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNameLoad<1>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FNameLoad<1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x30,(longlong)iVar4 * 0x30);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 141a91e30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 141ac0a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<wchar_t,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 2,0,(longlong)(param_1 - iVar5) * 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 2;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 2,(longlong)iVar5 * 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> @ 141b11fb0

TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>::
TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>
          (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *this,
          initializer_list<wchar_t_const_*> *param_1)

{
  wchar_t **_Src;
  wchar_t **ppwVar1;
  int iVar2;
  
  _Src = param_1->_First;
  ppwVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)ppwVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 141b12040

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  (this->AllocatorInstance).SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 4;
  return this;
}

// ~TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 141b29c10

void __thiscall
TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
~TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  if (FVar1 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar2 = FVar1;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar2,this->ArrayNum);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar1);
    return;
  }
  return;
}

// RemoveAt @ 141b4ae30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar4 << 2);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 141b4b440

void __thiscall
TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 141b4b4c0

void __thiscall
TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
  DestructItems<TTestToken<int>,int>((TTestToken<int> *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 4,(longlong)iVar1 << 2);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 141b4d340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TTuple<int,int>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 141b4d480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 141b4d5b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TTestToken<int>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 4,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// CopyToEmpty<unsigned_int,int> @ 141bd2b60

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned_int,int>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 2);
  }
  return;
}

// Sort<FText::FSortPredicate> @ 141bdbdc0

void __thiscall
TArray<FText,TSizedDefaultAllocator<32>_>::Sort<FText::FSortPredicate>
          (TArray<FText,TSizedDefaultAllocator<32>_> *this,FSortPredicate *param_1)

{
  FIdentityFunctor local_res8;
  
  AlgoImpl::
  IntroSortInternal<FText,int,FIdentityFunctor,TDereferenceWrapper<FText,FText::FSortPredicate>_>
            ((FText *)(this->AllocatorInstance).Data,this->ArrayNum,local_res8,
             (TDereferenceWrapper<FText,FText::FSortPredicate>)param_1);
  return;
}

// TArray<unsigned_int,TSizedDefaultAllocator<32>_> @ 141be13b0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::TArray<unsigned_int,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          initializer_list<unsigned_int> *param_1)

{
  uint *_Src;
  uint *puVar1;
  int iVar2;
  
  _Src = param_1->_First;
  puVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)puVar1 - (longlong)_Src >> 2);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> @ 141be1440

TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>
          (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Tasks::Private::FTaskHandle> *param_1)

{
  FTaskHandle *pFVar1;
  FTaskHandle *pFVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  pFVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            ((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// CopyToEmpty<FCbAttachment,int> @ 141cde310

void __thiscall
TArray<FCbAttachment,TSizedDefaultAllocator<32>_>::CopyToEmpty<FCbAttachment,int>
          (TArray<FCbAttachment,TSizedDefaultAllocator<32>_> *this,FCbAttachment *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FCbAttachment,FCbAttachment,int>((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// ~TArray<FCbAttachment,TSizedDefaultAllocator<32>_> @ 141cf0ae0

void __thiscall
TArray<FCbAttachment,TSizedDefaultAllocator<32>_>::
~TArray<FCbAttachment,TSizedDefaultAllocator<32>_>
          (TArray<FCbAttachment,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FCbAttachment,int>((FCbAttachment *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> @ 141d69070

TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>
          (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> @ 141d6cee0

void __thiscall
TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
~TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>
          (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

