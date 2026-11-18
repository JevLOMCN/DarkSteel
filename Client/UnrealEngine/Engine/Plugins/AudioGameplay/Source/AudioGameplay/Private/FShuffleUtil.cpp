// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 3

// GetNextIndex @ 14d98da10

uchar __thiscall UE::Audio::FShuffleUtil::GetNextIndex(FShuffleUtil *this)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  
  iVar2 = (this->ShuffleArray).ArrayNum;
  if (iVar2 == 0) {
    return 0xff;
  }
  if (iVar2 < (int)(uint)this->ShuffleMarker) {
    Shuffle(this);
  }
  bVar1 = this->ShuffleMarker;
  this->ShuffleMarker = bVar1 - 1;
  if ((this->ShuffleArray).ArrayNum <= (int)(uint)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return (uchar)(this->ShuffleArray).AllocatorInstance.Data[bVar1];
}

// Initialize @ 14d98e410

void __thiscall UE::Audio::FShuffleUtil::Initialize(FShuffleUtil *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  piVar1 = &(this->ShuffleArray).ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&(this->ShuffleArray).AllocatorInstance,piVar1,
                       &(this->ShuffleArray).ArrayMax);
    memset((this->ShuffleArray).AllocatorInstance.Data + iVar4,0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
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
        _Dst = (this->ShuffleArray).AllocatorInstance.Data + param_1;
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar7,(longlong)iVar5);
        }
        *piVar1 = *piVar1 - uVar7;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&(this->ShuffleArray).AllocatorInstance,*piVar1,
                   &(this->ShuffleArray).ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (0 < (this->ShuffleArray).ArrayNum) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < *piVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->ShuffleArray).AllocatorInstance.Data[(int)uVar7] = SUB41(uVar7,0);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->ShuffleArray).ArrayNum);
  }
  Shuffle(this);
  return;
}

// Shuffle @ 14d9931c0

void __thiscall UE::Audio::FShuffleUtil::Shuffle(FShuffleUtil *this)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  fVar4 = __real_38000100;
  iVar12 = (this->ShuffleArray).ArrayNum + -1;
  iVar8 = 0;
  if (iVar12 < 0) {
    this->ShuffleMarker = (uchar)iVar12;
    return;
  }
  lVar10 = 0;
  iVar9 = iVar12;
  do {
    if (iVar9 + 1 < 1) {
      iVar11 = 0;
    }
    else {
      uVar6 = rand();
      iVar7 = (int)((float)(uVar6 & 0x7fff) * (float)(iVar9 + 1) * fVar4);
      iVar11 = iVar9;
      if (iVar7 < iVar9) {
        iVar11 = iVar7;
      }
    }
    iVar11 = iVar11 + iVar8;
    if (iVar8 != iVar11) {
      if (((lVar10 < 0) || (iVar11 < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce6,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = (this->ShuffleArray).ArrayNum;
      if (((iVar7 <= iVar8) || (iVar7 <= iVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce7,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->ShuffleArray).AllocatorInstance.Data;
      FVar1 = pFVar2[lVar10];
      pFVar2[lVar10] = pFVar2[iVar11];
      pFVar2[iVar11] = FVar1;
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + -1;
    lVar10 = lVar10 + 1;
    if (iVar12 < iVar8) {
      this->ShuffleMarker = (uchar)iVar12;
      return;
    }
  } while( true );
}

