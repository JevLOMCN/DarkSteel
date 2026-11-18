// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 2

// Remove @ 145956680

int __thiscall
TArray<FMotionDelayTarget::FMotionSource,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FMotionDelayTarget::FMotionSource,TSizedDefaultAllocator<32>_> *this,
          FMotionSource *param_1)

{
  FMotionSource *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  
  pFVar1 = (FMotionSource *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  lVar7 = (longlong)iVar6;
  if (iVar6 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  if ((*(int *)pFVar2 == param_1->PlayerIndex) && (*(FName *)(pFVar2 + 4) == param_1->SourceId)) {
    bVar13 = 0;
  }
  else {
    bVar13 = 1;
  }
  lVar9 = 0;
  iVar10 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar11 = iVar10 + 1;
    if (lVar9 < lVar7) {
      pFVar8 = pFVar2 + lVar9 * 0xc;
      do {
        if ((*(int *)pFVar8 == param_1->PlayerIndex) &&
           (*(FName *)(pFVar8 + 4) == param_1->SourceId)) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
        if (bVar13 != bVar5) break;
        iVar11 = iVar11 + 1;
        lVar9 = lVar9 + 1;
        pFVar8 = pFVar8 + 0xc;
      } while (lVar9 < lVar7);
    }
    if (bVar13 != 0) {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0xc,pFVar2 + (longlong)iVar10 * 0xc,
                (longlong)(iVar11 - iVar10) * 0xc);
      }
      iVar12 = iVar12 + (iVar11 - iVar10);
    }
    bVar13 = bVar13 ^ 1;
    iVar10 = iVar11;
    if (lVar7 <= lVar9) {
      this->ArrayNum = iVar12;
      return iVar6 - iVar12;
    }
  } while( true );
}

// RemoveAtSwapImpl @ 145956840

void __thiscall
TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x18,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,
            (longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

