// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 65

// TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_> @ 1441f82d0

TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_> *
__thiscall
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_> @ 1441f8310

TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_> *
__thiscall
TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> @ 1441f8350

TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> * __thiscall
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> @ 1441f8390

TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> * __thiscall
TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *this,
          ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> @ 1441f83d0

TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> * __thiscall
TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this,
          ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// ~TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_> @ 1441f9550

void __thiscall
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_> @ 1441f95d0

void __thiscall
TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> @ 1441f9650

void __thiscall
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  PopNoCheck(this,(ulonglong)(this->Head - this->Tail));
  (this->Storage).ArrayNum = 0;
  DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
            ((TRefCountPtr<UE::Net::FNetBlob> *)(this->Storage).AllocatorInstance.Data,0);
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> @ 1441f96a0

void __thiscall
TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> @ 1441f9720

void __thiscall
TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Empty @ 144208350

void __thiscall
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::Empty
          (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  
  PopNoCheck(this,(ulonglong)(this->Head - this->Tail));
  this->IndexMask = 0xffffffff;
  this->Head = 0;
  this->Tail = 0;
  (this->Storage).ArrayNum = 0;
  DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
            ((TRefCountPtr<UE::Net::FNetBlob> *)(this->Storage).AllocatorInstance.Data,0);
  piVar1 = &(this->Storage).ArrayMax;
  (this->Storage).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Storage).AllocatorInstance,0,piVar1);
  }
  return;
}

// Enqueue @ 144208540

FRecord ** __thiscall
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::Enqueue
          (TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
           *this)

{
  uint uVar1;
  ulong64 uVar2;
  
  uVar2 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar2) {
    SetCapacity(this,uVar2);
  }
  uVar1 = this->Head;
  this->Head = uVar1 + 1;
  return (FRecord **)
         ((this->Storage).AllocatorInstance.Data + (ulonglong)(this->IndexMask & uVar1) * 8);
}

// Enqueue @ 144208580

void __thiscall
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::Enqueue
          (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
           *this,TRefCountPtr<UE::Net::FNetBlob> *param_1)

{
  FScriptContainerElement *pFVar1;
  FNetBlob *pFVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar4 = (ulonglong)(this->IndexMask & this->Head);
  this->Head = this->Head + 1;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + uVar4 * 8) = 0;
  pFVar2 = param_1->Reference;
  *(FNetBlob **)(pFVar1 + uVar4 * 8) = pFVar2;
  if (pFVar2 != (FNetBlob *)0x0) {
    pFVar2->RefCount = pFVar2->RefCount + 1;
  }
  return;
}

// Enqueue_GetRef @ 144208c20

FRecord ** __thiscall
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::
Enqueue_GetRef(TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
               *this)

{
  uint uVar1;
  ulong64 uVar2;
  
  uVar2 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar2) {
    SetCapacity(this,uVar2);
  }
  uVar1 = this->Head;
  this->Head = uVar1 + 1;
  return (FRecord **)
         ((this->Storage).AllocatorInstance.Data + (ulonglong)(this->IndexMask & uVar1) * 8);
}

// Pop @ 144213c50

void __thiscall
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::Pop
          (TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->Tail = this->Tail + 1;
  }
  return;
}

// Pop @ 144213ca0

void __thiscall
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::Pop
          (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
           *this)

{
  FNetBlob *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(FNetBlob **)
               ((this->Storage).AllocatorInstance.Data +
               (ulonglong)(this->IndexMask & this->Tail) * 8);
    if (this_00 != (FNetBlob *)0x0) {
      UE::Net::FNetBlob::Release(this_00);
    }
    this->Tail = this->Tail + 1;
  }
  return;
}

// Pop @ 144213d10

void __thiscall
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::Pop
          (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= this->Head - this->Tail) {
    PopNoCheck(this,param_1);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1638566698149740331>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                     ,0xd5,"Count() >= PopCount");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PopNoCheck @ 144213d70

void __thiscall
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::
PopNoCheck(TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
           *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 144213d80

void __thiscall
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::
PopNoCheck(TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 144213de0

void __thiscall
TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>::
PopNoCheck(TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 144213e40

void __thiscall
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
           *this)

{
  FNetBlob *this_00;
  
  this_00 = *(FNetBlob **)
             ((this->Storage).AllocatorInstance.Data + (ulonglong)(this->IndexMask & this->Tail) * 8
             );
  if (this_00 != (FNetBlob *)0x0) {
    UE::Net::FNetBlob::Release(this_00);
  }
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 144213e80

void __thiscall
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  uVar5 = this->IndexMask & this->Tail;
  uVar6 = (int)param_1 + this->Tail & this->IndexMask;
  pFVar1 = pFVar2 + (ulonglong)uVar5 * 8;
  if (param_1 == 0 || uVar5 < uVar6) {
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,unsigned___int64>
              ((TRefCountPtr<UE::Net::FNetBlob> *)pFVar1,param_1);
  }
  else {
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,unsigned___int64>
              ((TRefCountPtr<UE::Net::FNetBlob> *)pFVar1,
               (ulonglong)((this->Storage).ArrayNum - uVar5));
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,unsigned_int>
              ((TRefCountPtr<UE::Net::FNetBlob> *)pFVar2,uVar6);
  }
  if (0xffffffff < this->Tail + param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 144213f50

void __thiscall
TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *this,
          ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 144213fb0

void __thiscall
TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this,
          ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// Reset @ 144218850

void __thiscall
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::Reset
          (TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((ulonglong)(this->Head - this->Tail) + (ulonglong)this->Tail < 0x100000000) {
    this->Head = 0;
    this->Tail = 0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                     ,0x107,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Head = 0;
  this->Tail = 0;
  return;
}

// SetCapacity @ 144219cf0

void __thiscall
TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::
SetCapacity(TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
            *this,ulong64 param_1)

{
  TArray<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar4;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar14 = *piVar2;
  if ((uVar8 != (longlong)iVar14) && (this->Head - this->Tail <= uVar8)) {
    iVar12 = (int)uVar8;
    if (iVar14 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      uVar11 = this->IndexMask & this->Tail;
      uVar13 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = _Src + (ulonglong)uVar11 * 8;
      if (uVar15 == 0 || uVar11 < uVar13) {
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 8,pFVar3,(longlong)(int)uVar15 << 3);
        }
      }
      else {
        iVar14 = (this->Storage).ArrayNum - uVar11;
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (iVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (iVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar7 * 8,pFVar3,(longlong)iVar14 << 3);
        }
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 8,_Src,(longlong)(int)uVar13 << 3);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      if (pTVar1 != (TArray<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_> *)
                    &local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// SetCapacity @ 14421a0b0

void __thiscall
TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>::
SetCapacity(TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
            *this,ulong64 param_1)

{
  TArray<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar4;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar14 = *piVar2;
  if ((uVar8 != (longlong)iVar14) && (this->Head - this->Tail <= uVar8)) {
    iVar12 = (int)uVar8;
    if (iVar14 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      uVar11 = this->IndexMask & this->Tail;
      uVar13 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = _Src + (ulonglong)uVar11 * 8;
      if (uVar15 == 0 || uVar11 < uVar13) {
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 8,pFVar3,(longlong)(int)uVar15 << 3);
        }
      }
      else {
        iVar14 = (this->Storage).ArrayNum - uVar11;
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (iVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (iVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar7 * 8,pFVar3,(longlong)iVar14 << 3);
        }
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 8,_Src,(longlong)(int)uVar13 << 3);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      if (pTVar1 != (TArray<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
                     *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// SetCapacity @ 14421a490

void __thiscall
TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::SetCapacity
          (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar8;
  
  uVar8 = 1;
  if (param_1 != 0) {
    uVar8 = param_1;
  }
  uVar7 = uVar8 - 1;
  pTVar1 = &this->Storage;
  lVar3 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  piVar16 = &(this->Storage).ArrayNum;
  cVar9 = (char)lVar3;
  if (uVar7 == 0) {
    cVar9 = -1;
  }
  uVar7 = 1L << (0x40U - ('?' - cVar9) & 0x3f);
  iVar15 = *piVar16;
  if ((uVar7 != (longlong)iVar15) && (this->Head - this->Tail <= uVar7)) {
    iVar11 = (int)uVar7;
    if (iVar15 < 1) {
      this->IndexMask = iVar11 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar11,&pTVar1->AllocatorInstance,piVar16,&(this->Storage).ArrayMax);
      return;
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (ulonglong)(uint)local_40;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7 & 0xffffffff);
    }
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>((TRefCountPtr<UE::Net::FNetBlob> *)0x0,0);
    uVar7 = local_40 >> 0x20;
    local_40 = local_40 & 0xffffffff00000000;
    if ((int)uVar7 != iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar11,&local_48,0,(int *)((longlong)&local_40 + 4));
    }
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    uVar10 = this->IndexMask & this->Tail;
    uVar12 = this->IndexMask & this->Head;
    uVar14 = this->Head - this->Tail;
    pFVar13 = pFVar2 + (ulonglong)uVar10 * 8;
    if (uVar14 == 0 || uVar10 < uVar12) {
      if (((pFVar13 == (FScriptContainerElement *)0x0) && (uVar14 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      uVar12 = uVar14;
    }
    else {
      iVar15 = (this->Storage).ArrayNum - uVar10;
      if (((pFVar13 == (FScriptContainerElement *)0x0) && (iVar15 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      ConstructItems<TRefCountPtr<UE::Net::FNetBlob>,TRefCountPtr<UE::Net::FNetBlob>,int>
                (local_48.Data + (longlong)iVar6 * 8,(TRefCountPtr<UE::Net::FNetBlob> *)pFVar13,
                 iVar15);
      if (((pFVar2 == (FScriptContainerElement *)0x0) && (uVar12 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar12,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      pFVar13 = pFVar2;
    }
    piVar16 = &(this->Storage).ArrayNum;
    ConstructItems<TRefCountPtr<UE::Net::FNetBlob>,TRefCountPtr<UE::Net::FNetBlob>,int>
              (local_48.Data + (longlong)iVar15 * 8,(TRefCountPtr<UE::Net::FNetBlob> *)pFVar13,
               uVar12);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar11 - uVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
    if (pTVar1 == (TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *)&local_48)
    {
    }
    else {
      DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
                ((TRefCountPtr<UE::Net::FNetBlob> *)(pTVar1->AllocatorInstance).Data,*piVar16);
      pFVar13 = (pTVar1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      (pTVar1->AllocatorInstance).Data = local_48.Data;
      *piVar16 = (uint)local_40;
      (this->Storage).ArrayMax = local_40._4_4_;
      local_40 = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40._0_4_ = 0;
    }
    this->Tail = 0;
    this->IndexMask = iVar11 - 1;
    this->Head = uVar14;
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
              ((TRefCountPtr<UE::Net::FNetBlob> *)local_48.Data,(uint)local_40);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// SetCapacity @ 14421a7c0

void __thiscall
TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::SetCapacity
          (TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *this,
          ulong64 param_1)

{
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar4;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar14 = *piVar2;
  if ((uVar8 != (longlong)iVar14) && (this->Head - this->Tail <= uVar8)) {
    iVar12 = (int)uVar8;
    if (iVar14 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      uVar11 = this->IndexMask & this->Tail;
      uVar13 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = _Src + (ulonglong)uVar11 * 8;
      if (uVar15 == 0 || uVar11 < uVar13) {
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 8,pFVar3,(longlong)(int)uVar15 << 3);
        }
      }
      else {
        iVar14 = (this->Storage).ArrayNum - uVar11;
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (iVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (iVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar7 * 8,pFVar3,(longlong)iVar14 << 3);
        }
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 8,_Src,(longlong)(int)uVar13 << 3);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      if (pTVar1 != (TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// SetCapacity @ 14421ab80

void __thiscall
TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::SetCapacity
          (TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this,
          ulong64 param_1)

{
  TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar4;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar14 = *piVar2;
  if ((uVar8 != (longlong)iVar14) && (this->Head - this->Tail <= uVar8)) {
    iVar12 = (int)uVar8;
    if (iVar14 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      uVar11 = this->IndexMask & this->Tail;
      uVar13 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = _Src + (ulonglong)uVar11 * 4;
      if (uVar15 == 0 || uVar11 < uVar13) {
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 4,pFVar3,(longlong)(int)uVar15 << 2);
        }
      }
      else {
        iVar14 = (this->Storage).ArrayNum - uVar11;
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (iVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (iVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar7 * 4,pFVar3,(longlong)iVar14 << 2);
        }
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 4,_Src,(longlong)(int)uVar13 << 2);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      if (pTVar1 != (TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// Enqueue @ 144277710

void __thiscall
TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>::
Enqueue(TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
        *this,FExportInfo *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar1 = this->Head;
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  this->Head = uVar1 + 1;
  *(FExportInfo *)(pFVar2 + (ulonglong)(this->IndexMask & uVar1) * 8) = *param_1;
  return;
}

// Enqueue @ 144277760

void __thiscall
TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::Enqueue
          (TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *this,
          FNetRefHandle *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar1 = this->Head;
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  this->Head = uVar1 + 1;
  ((FNetRefHandle_u_0 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar1) * 8))->_s_0 =
       (FNetRefHandle_u_0_s_0)param_1->field0_0x0;
  return;
}

// Enqueue @ 1442777b0

void __thiscall
TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::Enqueue
          (TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this,
          FNetToken *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar1 = this->Head;
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  this->Head = uVar1 + 1;
  ((FNetToken_u_0 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar1) * 4))->_s_0 =
       (FNetToken_u_0_s_0)param_1->field0_0x0;
  return;
}

// Pop @ 1442861a0

void __thiscall
TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>::Pop
          (TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->Tail = this->Tail + 1;
  }
  return;
}

// PopNoCheck @ 1442863b0

void __thiscall
TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>::
PopNoCheck(TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
           *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 1442863c0

void __thiscall
TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 1442863d0

void __thiscall
TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> @ 1442f5b10

TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> *this,ulong64 param_1
          )

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_> @ 1442f5b50

TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
* __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
::
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_> @ 1442f5b90

TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
* __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
::
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> @ 1442f5bd0

TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> *this,
          ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// ~TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> @ 1442f7160

void __thiscall
TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_> @ 1442f71e0

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
::
~TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_> @ 1442f7260

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
::
~TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = this->Head - this->Tail;
  uVar4 = this->IndexMask & this->Tail;
  uVar6 = this->IndexMask & this->Head;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  pFVar5 = pFVar1 + (ulonglong)uVar4 * 0x10;
  if (uVar7 == 0 || uVar4 < uVar6) {
    DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned___int64>
              ((FSubObjectRecord *)pFVar5,(ulonglong)uVar7);
  }
  else {
    DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned___int64>
              ((FSubObjectRecord *)pFVar5,(ulonglong)((this->Storage).ArrayNum - uVar4));
    DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned_int>
              ((FSubObjectRecord *)pFVar1,uVar6);
  }
  if (0xffffffff < (ulonglong)this->Tail + (ulonglong)uVar7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar7;
  (this->Storage).ArrayNum = 0;
  DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,int>
            ((FSubObjectRecord *)(this->Storage).AllocatorInstance.Data,0);
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> @ 1442f7360

void __thiscall
TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Enqueue @ 144301c50

void __thiscall
TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::Enqueue
          (TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> *this,ushort *param_1
          )

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar1 = this->Head;
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  this->Head = uVar1 + 1;
  *(ushort *)(pFVar2 + (ulonglong)(this->IndexMask & uVar1) * 2) = *param_1;
  return;
}

// Enqueue @ 144301ca0

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
::Enqueue(TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
          *this,FSubObjectRecord *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar1 = this->Head;
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  this->Head = uVar1 + 1;
  UE::Net::Private::FReplicationRecord::FSubObjectRecord::FSubObjectRecord
            ((FSubObjectRecord *)(pFVar2 + (ulonglong)(this->IndexMask & uVar1) * 0x10),param_1);
  return;
}

// Enqueue @ 144301d00

void __thiscall
TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::Enqueue
          (TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> *this,
          ulong64 *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar1 = this->Head;
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  this->Head = uVar1 + 1;
  *(ulong64 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar1) * 8) = *param_1;
  return;
}

// EnqueueDefaulted_GetRef @ 144301d50

FRecordInfo * __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
::EnqueueDefaulted_GetRef
          (TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
           *this)

{
  uint uVar1;
  FRecordInfo *pFVar2;
  ulong64 uVar3;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar1 = this->Head;
  this->Head = uVar1 + 1;
  pFVar2 = (FRecordInfo *)
           ((this->Storage).AllocatorInstance.Data + (ulonglong)(this->IndexMask & uVar1) * 0x10);
  *(undefined8 *)&pFVar2->field_0x8 = 0;
  (pFVar2->ChangeMaskOrPtr).ChangeMaskOrPointer = 0;
  return pFVar2;
}

// Pop @ 14430a480

void __thiscall
TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::Pop
          (TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->Tail = this->Tail + 1;
  }
  return;
}

// Pop @ 14430a4d0

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
::Pop(TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
      *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->Tail = this->Tail + 1;
  }
  return;
}

// Pop @ 14430a520

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
::Pop(TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
      *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->Head == this->Tail) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pvVar1 = *(void **)((this->Storage).AllocatorInstance.Data +
                       (ulonglong)(this->IndexMask & this->Tail) * 0x10);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    this->Tail = this->Tail + 1;
  }
  return;
}

// Pop @ 14430a590

void __thiscall
TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::Pop
          (TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->Tail = this->Tail + 1;
  }
  return;
}

// PopNoCheck @ 14430a5e0

void __thiscall
TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 14430a5f0

void __thiscall
TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> *this,ulong64 param_1
          )

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 14430a650

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
::PopNoCheck(TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
             *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 14430a660

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
::PopNoCheck(TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
             *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 14430a6c0

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
::PopNoCheck(TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
             *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->Storage).AllocatorInstance.Data +
                     (ulonglong)(this->IndexMask & this->Tail) * 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 14430a700

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
::PopNoCheck(TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
             *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  uVar4 = this->IndexMask & this->Tail;
  uVar6 = (int)param_1 + this->Tail & this->IndexMask;
  pFVar5 = pFVar1 + (ulonglong)uVar4 * 0x10;
  if (param_1 == 0 || uVar4 < uVar6) {
    DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned___int64>
              ((FSubObjectRecord *)pFVar5,param_1);
  }
  else {
    DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned___int64>
              ((FSubObjectRecord *)pFVar5,(ulonglong)((this->Storage).ArrayNum - uVar4));
    DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned_int>
              ((FSubObjectRecord *)pFVar1,uVar6);
  }
  if (0xffffffff < this->Tail + param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 14430a7d0

void __thiscall
TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 14430a7e0

void __thiscall
TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> *this,
          ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// SetCapacity @ 144311d90

void __thiscall
TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::SetCapacity
          (TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> *this,ulong64 param_1
          )

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar4;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar14 = *piVar2;
  if ((uVar8 != (longlong)iVar14) && (this->Head - this->Tail <= uVar8)) {
    iVar12 = (int)uVar8;
    if (iVar14 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      uVar11 = this->IndexMask & this->Tail;
      uVar13 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = _Src + (ulonglong)uVar11 * 2;
      if (uVar15 == 0 || uVar11 < uVar13) {
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (2,2,uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 2,pFVar3,(longlong)(int)uVar15 * 2);
        }
      }
      else {
        iVar14 = (this->Storage).ArrayNum - uVar11;
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (iVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (iVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar7 * 2,pFVar3,(longlong)iVar14 * 2);
        }
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (2,2,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 2,_Src,(longlong)(int)uVar13 * 2);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      if (pTVar1 != (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// SetCapacity @ 144312150

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
::SetCapacity(TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
              *this,ulong64 param_1)

{
  TArray<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  char cVar11;
  FScriptContainerElement *_Src;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar10;
  
  uVar10 = 1;
  if (param_1 != 0) {
    uVar10 = param_1;
  }
  uVar9 = uVar10 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar11 = (char)lVar4;
  if (uVar9 == 0) {
    cVar11 = -1;
  }
  uVar9 = 1L << (0x40U - ('?' - cVar11) & 0x3f);
  iVar13 = *piVar2;
  if ((uVar9 != (longlong)iVar13) && (this->Head - this->Tail <= uVar9)) {
    iVar12 = (int)uVar9;
    if (iVar13 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      uVar7 = this->IndexMask & this->Tail;
      uVar14 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      _Src = pFVar3 + (ulonglong)uVar7 * 0x10;
      if (uVar15 == 0 || uVar7 < uVar14) {
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar15,&local_48,(int *)&local_40,
                            (int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar13 * 0x10,_Src,(longlong)(int)uVar15 << 4);
        }
      }
      else {
        iVar13 = (this->Storage).ArrayNum - uVar7;
        if (((_Src == (FScriptContainerElement *)0x0) && (iVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4)
                          );
        if (iVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar8 * 0x10,_Src,(longlong)iVar13 << 4);
        }
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar14,&local_48,(int *)&local_40,
                            (int *)((longlong)&local_40 + 4));
        if (uVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar13 * 0x10,pFVar3,(longlong)(int)uVar14 << 4);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4))
      ;
      if (pTVar1 != (TArray<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
                     *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// SetCapacity @ 144312530

void __thiscall
TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
::SetCapacity(TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
              *this,ulong64 param_1)

{
  TArray<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar3 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  piVar16 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar3;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar15 = *piVar16;
  if ((uVar8 != (longlong)iVar15) && (this->Head - this->Tail <= uVar8)) {
    iVar11 = (int)uVar8;
    if (iVar15 < 1) {
      this->IndexMask = iVar11 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar11,&pTVar1->AllocatorInstance,piVar16,&(this->Storage).ArrayMax);
      return;
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (ulonglong)(uint)local_40;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
    }
    DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,int>
              ((FSubObjectRecord *)0x0,0);
    uVar8 = local_40 >> 0x20;
    local_40 = local_40 & 0xffffffff00000000;
    if ((int)uVar8 != iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar11,&local_48,0,(int *)((longlong)&local_40 + 4));
    }
    uVar6 = this->IndexMask & this->Tail;
    uVar13 = this->IndexMask & this->Head;
    uVar14 = this->Head - this->Tail;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    pFVar12 = pFVar2 + (ulonglong)uVar6 * 0x10;
    if (uVar14 == 0 || uVar6 < uVar13) {
      if (((pFVar12 == (FScriptContainerElement *)0x0) && (uVar14 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,uVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4))
      ;
      uVar13 = uVar14;
    }
    else {
      iVar15 = (this->Storage).ArrayNum - uVar6;
      if (((pFVar12 == (FScriptContainerElement *)0x0) && (iVar15 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      ConstructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,UE::Net::Private::FReplicationRecord::FSubObjectRecord,int>
                (local_48.Data + (longlong)iVar7 * 0x10,(FSubObjectRecord *)pFVar12,iVar15);
      if (((pFVar2 == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4))
      ;
      pFVar12 = pFVar2;
    }
    piVar16 = &(this->Storage).ArrayNum;
    ConstructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,UE::Net::Private::FReplicationRecord::FSubObjectRecord,int>
              (local_48.Data + (longlong)iVar15 * 0x10,(FSubObjectRecord *)pFVar12,uVar13);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11 - uVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
    if (pTVar1 == (TArray<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
                   *)&local_48) {
    }
    else {
      DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,int>
                ((FSubObjectRecord *)(pTVar1->AllocatorInstance).Data,*piVar16);
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar1->AllocatorInstance).Data = local_48.Data;
      *piVar16 = (uint)local_40;
      (this->Storage).ArrayMax = local_40._4_4_;
      local_40 = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40._0_4_ = 0;
    }
    this->Tail = 0;
    this->IndexMask = iVar11 - 1;
    this->Head = uVar14;
    DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,int>
              ((FSubObjectRecord *)local_48.Data,(uint)local_40);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// SetCapacity @ 144312880

void __thiscall
TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::SetCapacity
          (TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> *this,
          ulong64 param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar4;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar14 = *piVar2;
  if ((uVar8 != (longlong)iVar14) && (this->Head - this->Tail <= uVar8)) {
    iVar12 = (int)uVar8;
    if (iVar14 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      uVar11 = this->IndexMask & this->Tail;
      uVar13 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = _Src + (ulonglong)uVar11 * 8;
      if (uVar15 == 0 || uVar11 < uVar13) {
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 8,pFVar3,(longlong)(int)uVar15 << 3);
        }
      }
      else {
        iVar14 = (this->Storage).ArrayNum - uVar11;
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (iVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (iVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar7 * 8,pFVar3,(longlong)iVar14 << 3);
        }
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 8,_Src,(longlong)(int)uVar13 << 3);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      if (pTVar1 != (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

