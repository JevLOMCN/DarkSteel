// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// Init @ 14f0e34f0

void __thiscall Audio::FMultibandBuffer::Init(FMultibandBuffer *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  this->NumBands = param_1;
  uVar5 = param_1 * param_2;
  this->NumSamples = param_2;
  iVar4 = (this->Buffer).ArrayNum;
  if (iVar4 < (int)uVar5) {
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->Buffer,uVar5 - iVar4);
    return;
  }
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if ((int)uVar5 < iVar4) {
    uVar6 = iVar4 - uVar5;
    if (((int)(uVar6 | uVar5) < 0) &&
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
      _Dst = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
      iVar4 = ((this->Buffer).ArrayNum - uVar6) - uVar5;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar4 << 2);
      }
      piVar1 = &(this->Buffer).ArrayNum;
      *piVar1 = *piVar1 - uVar6;
      UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,(ForAnyElementType *)this,(this->Buffer).ArrayNum,&(this->Buffer).ArrayMax);
    }
  }
  return;
}

