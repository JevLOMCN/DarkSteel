// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 3

// RemoveAtImpl @ 146c323a0

void __thiscall
TArray<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  FRetiringObjectInfo *_Dst;
  
  _Dst = (FRetiringObjectInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 146c32420

void __thiscall
TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

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

// RemoveSwap @ 146c32640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<FMediaTextureTrackerObject,1> *param_1,EAllowShrinking param_2)

{
  TWeakPtr<FMediaTextureTrackerObject,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  pTVar1 = (TWeakPtr<FMediaTextureTrackerObject,1> *)(this->AllocatorInstance).Data;
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
      bVar4 = TWeakPtr<FMediaTextureTrackerObject,1>::UEOpEquals<FMediaTextureTrackerObject>
                        ((TWeakPtr<FMediaTextureTrackerObject,1> *)
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

