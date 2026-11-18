// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// Reset @ 14b030c00

void __thiscall Audio::FMultibandBuffer::Reset(FMultibandBuffer *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = this->NumBands * this->NumSamples;
  if (-1 < (int)uVar5) {
    piVar1 = &(this->Buffer).ArrayMax;
    piVar2 = &(this->Buffer).ArrayNum;
    *piVar2 = 0;
    if ((this->Buffer).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar5,(ForAnyElementType *)this,0,piVar1);
    }
    iVar4 = this->NumBands * this->NumSamples;
    iVar3 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar4,(ForAnyElementType *)this,piVar2,piVar1);
    memset((this->Buffer).AllocatorInstance.Data + (longlong)iVar3 * 4,0,(longlong)iVar4 << 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

