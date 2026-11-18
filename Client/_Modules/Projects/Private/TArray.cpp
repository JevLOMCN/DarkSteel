// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 6

// AddUniqueImpl<TSharedRef<IPlugin,1>_> @ 141e03e40

int __thiscall
TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TSharedRef<IPlugin,1>_>
          (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<IPlugin,1> *param_1)

{
  TSharedRef<IPlugin,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<IPlugin,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedRef<IPlugin,1> *)(this->AllocatorInstance).Data;
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
  *(IPlugin **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// operator= @ 141e0fa70

TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *this,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FPluginReferenceDescriptor *pFVar3;
  
  if (this != param_1) {
    DestructItems<FPluginReferenceDescriptor,int>
              ((FPluginReferenceDescriptor *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FPluginReferenceDescriptor *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPluginReferenceDescriptor,FPluginReferenceDescriptor,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// RemoveAt @ 141e34ef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FPluginReferenceDescriptor *this_00;
  
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
  this_00 = (FPluginReferenceDescriptor *)
            ((this->AllocatorInstance).Data + (longlong)param_1 * 0xb8);
  FPluginReferenceDescriptor::~FPluginReferenceDescriptor(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0xb8);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 141e34fe0

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<FString,int>((FString *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 141e35060

void __thiscall
TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSharedRef<FPlugin,1> *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (TSharedRef<FPlugin,1> *)(pFVar1 + (longlong)param_1 * 0x10);
  DestructItems<TSharedRef<FPlugin,1>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSingle @ 141e35ad0

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::RemoveSingle
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  iVar1 = Find(this,param_1);
  if (iVar1 == -1) {
    return 0;
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)iVar1 * 0x10;
  DestructItems<FString,int>((FString *)_Dst,1);
  memmove(_Dst,_Dst + 0x10,(longlong)((this->ArrayNum - iVar1) + -1) << 4);
  this->ArrayNum = this->ArrayNum + -1;
  return 1;
}

