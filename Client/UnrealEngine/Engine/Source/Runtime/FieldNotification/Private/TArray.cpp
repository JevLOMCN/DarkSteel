// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 3

// InsertUninitializedImpl @ 1441c2640

void __thiscall
TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// RemoveAt @ 1441c34c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
::RemoveAt(TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

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
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  if ((*(int *)(_Dst + 0x28) != 0) && (*(undefined8 **)(_Dst + 0x20) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(_Dst + 0x20))();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(_Dst + 0x20),0,0,0x10);
    *(undefined4 *)(_Dst + 0x28) = 0;
  }
  if (*(void **)(_Dst + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x20));
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x30,(longlong)iVar4 * 0x30);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 1441c35f0

void __thiscall
TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x30;
  if ((*(int *)(_Dst + 0x28) != 0) && (*(undefined8 **)(_Dst + 0x20) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(_Dst + 0x20))();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(_Dst + 0x20),0,0,0x10);
    *(undefined4 *)(_Dst + 0x28) = 0;
  }
  if (*(void **)(_Dst + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x20));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x30,(longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

