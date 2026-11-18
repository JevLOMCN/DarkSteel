// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 1

// FConstantQFrame @ 14d7f53b0

FConstantQFrame * __thiscall
Audio::FConstantQFrame::FConstantQFrame
          (FConstantQFrame *this,int param_1,float param_2,TArrayView<float_const_,int> *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  float *_Src;
  code *pcVar4;
  bool bVar5;
  FConstantQFrame *pFVar6;
  
  uVar3 = param_3->ArrayNum;
  pTVar1 = &this->Spectrum;
  _Src = param_3->DataPtr;
  this->Timestamp = param_2;
  this->Channel = param_1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if ((_Src == (float *)0x0) && (uVar3 != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x2d3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FConstantQFrame *)(*pcVar4)();
      return pFVar6;
    }
  }
  (this->Spectrum).ArrayNum = uVar3;
  piVar2 = &(this->Spectrum).ArrayMax;
  if (uVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,0,&pTVar1->AllocatorInstance,uVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)(int)uVar3 << 2);
  }
  return this;
}

