// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 5

// operator=<TSizedDefaultAllocator<32>_> @ 14ace2230

TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
operator=<TSizedDefaultAllocator<32>_>
          (TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForElementType<UTexture_*> FVar3;
  ForElementType<UTexture_*> _Dst;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = (param_1->AllocatorInstance).Data;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<UTexture_*>)this;
  if (FVar3 != (ForElementType<UTexture_*>)0x0) {
    _Dst = FVar3;
  }
  if (iVar2 != 0) {
    memcpy((void *)_Dst,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// AddUniqueImpl<UTexture_*> @ 14ace22d0

int __thiscall
TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*>
          (TArray<UTexture_*,TSizedDefaultAllocator<32>_> *this,UTexture **param_1)

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
      if (*(UTexture **)pFVar5 == *param_1) {
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
  *(UTexture **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TObjectPtr<UMaterialInterface>_> @ 14ace23d0

int __thiscall
TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UMaterialInterface>_>
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMaterialInterface> *param_1)

{
  FScriptContainerElement *pFVar1;
  UMaterialInterface *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UMaterialInterface **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
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
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UMaterialInterface **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// operator= @ 14acec020

TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::operator=
          (TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<UTexture_*> FVar2;
  int *piVar3;
  ForElementType<UTexture_*> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = &this->ArrayMax;
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<UTexture_*>)0x0) {
      param_1 = (TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2
      ;
    }
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 4;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
              (8,8,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<UTexture_*>)this;
    if (FVar2 != (ForElementType<UTexture_*>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// Insert @ 14ad02c10

int __thiscall
TArray<TObjectPtr<UPaperTileLayer>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TObjectPtr<UPaperTileLayer>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UPaperTileLayer> *param_1,int param_2)

{
  UPaperTileLayer *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)this->ArrayMax * 8)) {
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
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 8;
  memmove(pFVar5 + 8,pFVar5,(longlong)(iVar4 - param_2) << 3);
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  *(UPaperTileLayer **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPaperTileLayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return param_2;
}

