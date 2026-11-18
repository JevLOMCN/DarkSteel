// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 2

// RemoveAtSwapImpl @ 144580190

void __thiscall
TArray<UE::IoStore::HTTP::FHostGroup,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<UE::IoStore::HTTP::FHostGroup,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x38;
  if (*(longlong *)(_Dst + 0x10) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Head == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0xc5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<UE::IoStore::HTTP::FPeerGroup,int>(*(FPeerGroup **)_Dst,*(int *)(_Dst + 8));
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 0x38,(longlong)iVar4 * 0x38);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNumZeroed @ 144581a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<LaneTraceDetail::FEstate::FEntry,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<LaneTraceDetail::FEstate::FEntry,TSizedDefaultAllocator<32>_> *this,int param_1,
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

