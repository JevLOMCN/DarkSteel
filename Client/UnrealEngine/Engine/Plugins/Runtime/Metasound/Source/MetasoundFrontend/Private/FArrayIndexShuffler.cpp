// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// FArrayIndexShuffler @ 14ad970e0

FArrayIndexShuffler * __thiscall
Metasound::FArrayIndexShuffler::FArrayIndexShuffler
          (FArrayIndexShuffler *this,int param_1,int param_2)

{
  this->PrevValue = -1;
  this->CurrentIndex = 0;
  (this->ShuffleIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShuffleIndices).ArrayNum = 0;
  (this->ShuffleIndices).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  Init(this,param_1,param_2);
  return this;
}

// Init @ 14adc4be0

void __thiscall
Metasound::FArrayIndexShuffler::Init(FArrayIndexShuffler *this,int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  LARGE_INTEGER local_res8;
  
  if (param_1 == -1) {
    QueryPerformanceCounter(&local_res8);
    param_1 = local_res8.s.LowPart;
  }
  (this->RandomStream).InitialSeed = param_1;
  (this->RandomStream).Seed = param_1;
  if (0 < param_2) {
    piVar1 = &(this->ShuffleIndices).ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_2,&(this->ShuffleIndices).AllocatorInstance,piVar1,
               &(this->ShuffleIndices).ArrayMax);
    iVar8 = (this->ShuffleIndices).ArrayNum;
    uVar6 = 0;
    if (0 < iVar8) {
      lVar5 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < *piVar1) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this->ShuffleIndices).AllocatorInstance.Data + lVar5) = uVar6;
        uVar6 = uVar6 + 1;
        iVar8 = (this->ShuffleIndices).ArrayNum;
        lVar5 = lVar5 + 4;
      } while ((int)uVar6 < iVar8);
    }
    iVar7 = 0;
    if (0 < iVar8) {
      do {
        RandomSwap(this,iVar7,0,iVar8 + -1);
        iVar8 = (this->ShuffleIndices).ArrayNum;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar8);
    }
    this->CurrentIndex = 0;
    if ((1 < iVar8) && (*(int *)(this->ShuffleIndices).AllocatorInstance.Data == this->PrevValue)) {
      RandomSwap(this,0,1,iVar8 + -1);
    }
  }
  return;
}

// NextValue @ 14adc8f50

bool __thiscall
Metasound::FArrayIndexShuffler::NextValue(FArrayIndexShuffler *this,bool param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar6 = this->CurrentIndex;
  bVar4 = false;
  iVar7 = (this->ShuffleIndices).ArrayNum;
  bVar9 = SBORROW4(iVar6,iVar7);
  iVar8 = iVar6 - iVar7;
  if (iVar6 == iVar7) {
    if (param_1) {
      iVar6 = 0;
      if (0 < iVar7) {
        do {
          RandomSwap(this,iVar6,0,iVar7 + -1);
          iVar7 = (this->ShuffleIndices).ArrayNum;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar7);
      }
      this->CurrentIndex = 0;
      iVar8 = 0;
      if ((1 < iVar7) &&
         (iVar8 = 0, *(int *)(this->ShuffleIndices).AllocatorInstance.Data == this->PrevValue)) {
        RandomSwap(this,0,1,iVar7 + -1);
        iVar8 = this->CurrentIndex;
        iVar7 = (this->ShuffleIndices).ArrayNum;
      }
      bVar4 = true;
    }
    else {
      this->CurrentIndex = 0;
      iVar8 = 0;
      bVar4 = false;
    }
    bVar9 = SBORROW4(iVar8,iVar7);
    iVar8 = iVar8 - iVar7;
  }
  if (bVar9 == iVar8 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentIndex < ShuffleIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayShuffleNode.cpp"
                       ,0x44,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
  }
  uVar1 = this->CurrentIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->ShuffleIndices).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
  }
  iVar6 = *(int *)((this->ShuffleIndices).AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
  this->PrevValue = iVar6;
  *param_2 = iVar6;
  this->CurrentIndex = this->CurrentIndex + 1;
  return bVar4;
}

// RandomSwap @ 14adcb0c0

void __thiscall
Metasound::FArrayIndexShuffler::RandomSwap
          (FArrayIndexShuffler *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (param_3 - param_2) + 1;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar5 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar5;
    iVar7 = (int)(((float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar7);
  }
  uVar5 = iVar7 + param_2;
  uVar6 = 0;
  if ((int)uVar5 < (this->ShuffleIndices).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = *(undefined4 *)((this->ShuffleIndices).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
  uVar6 = 0;
  if (param_1 < (this->ShuffleIndices).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(undefined4 *)((this->ShuffleIndices).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar6 = 0;
  if ((int)uVar5 < (this->ShuffleIndices).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)((this->ShuffleIndices).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar2;
  uVar5 = 0;
  if (param_1 < (this->ShuffleIndices).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)((this->ShuffleIndices).AllocatorInstance.Data + (longlong)param_1 * 4) = uVar1;
  return;
}

// ResetSeed @ 14adcfc20

void __thiscall Metasound::FArrayIndexShuffler::ResetSeed(FArrayIndexShuffler *this)

{
  (this->RandomStream).Seed = (this->RandomStream).InitialSeed;
  return;
}

// SetSeed @ 14add0d10

void __thiscall Metasound::FArrayIndexShuffler::SetSeed(FArrayIndexShuffler *this,int param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  if (param_1 == -1) {
    QueryPerformanceCounter(local_res8);
    param_1 = local_res8[0].s.LowPart;
  }
  (this->RandomStream).InitialSeed = param_1;
  (this->RandomStream).Seed = param_1;
  return;
}

// ShuffleArray @ 14add10e0

void __thiscall Metasound::FArrayIndexShuffler::ShuffleArray(FArrayIndexShuffler *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (this->ShuffleIndices).ArrayNum;
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      RandomSwap(this,iVar1,0,iVar2 + -1);
      iVar2 = (this->ShuffleIndices).ArrayNum;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  this->CurrentIndex = 0;
  if ((1 < iVar2) && (*(int *)(this->ShuffleIndices).AllocatorInstance.Data == this->PrevValue)) {
    RandomSwap(this,0,1,iVar2 + -1);
  }
  return;
}

