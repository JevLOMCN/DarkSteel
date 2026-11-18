// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// ResizeAndZero @ 144518940

void __thiscall
Audio::FLateReflectionsPlateOutputs::ResizeAndZero(FLateReflectionsPlateOutputs *this,int param_1)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = 0;
  piVar3 = &this->Taps[0].ArrayNum;
  do {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    *piVar3 = 0;
    if (piVar3[1] < param_1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,param_1,(ForAnyElementType *)(piVar3 + -2),0,piVar3 + 1);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_1,(ForAnyElementType *)(piVar3 + -2),piVar3,piVar3 + 1);
    memset((((TArray<float,TAlignedHeapAllocator<16>_> *)(piVar3 + -2))->AllocatorInstance).Data,0,
           (longlong)param_1 * 4);
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 4;
  } while (lVar2 < 7);
  pTVar1 = &this->Output;
  piVar3 = &(this->Output).ArrayMax;
  (this->Output).ArrayNum = 0;
  if ((this->Output).ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_1,&pTVar1->AllocatorInstance,0,piVar3);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_1,&pTVar1->AllocatorInstance,&(this->Output).ArrayNum,piVar3);
  memset((pTVar1->AllocatorInstance).Data,0,(longlong)param_1 * 4);
  return;
}

