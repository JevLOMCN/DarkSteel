// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 4

// operator= @ 14cfea160

TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_> *this,
          TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_> *param_1)

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
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// RemoveAtSwapImpl @ 14cfeeb00

void __thiscall
TArray<FTrackedFrameData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FTrackedFrameData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x80;
  *(undefined4 *)(_Dst + 0x78) = 0;
  if (*(void **)(_Dst + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x70));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(_Dst + 0x30));
  FStructOnScope::~FStructOnScope((FStructOnScope *)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x80,(longlong)iVar2 << 7);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14cfeebb0

void __thiscall
TArray<FTrackedStaticData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FTrackedStaticData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x88;
  *(undefined4 *)(_Dst + 0x80) = 0;
  if (*(void **)(_Dst + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x78));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(_Dst + 0x38));
  FStructOnScope::~FStructOnScope((FStructOnScope *)(_Dst + 0x10));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x88,(longlong)iVar2 * 0x88);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNumUninitialized @ 14cfefe00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FTrackedAddress,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FTrackedAddress,TSizedDefaultAllocator<32>_> *this,int param_1,
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
              (0x20,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x20,(longlong)iVar4 << 5);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

