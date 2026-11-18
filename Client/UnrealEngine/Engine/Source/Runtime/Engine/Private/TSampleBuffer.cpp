// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TSampleBuffer<short> @ 1484b9ae0

TSampleBuffer<short> * __thiscall
Audio::TSampleBuffer<short>::TSampleBuffer<short>
          (TSampleBuffer<short> *this,short *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  this->NumChannels = param_3;
  (this->RawPCMData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawPCMData).ArrayNum = 0;
  (this->RawPCMData).ArrayMax = 0;
  this->NumSamples = param_2;
  this->NumFrames = param_2 / param_3;
  piVar1 = &(this->RawPCMData).ArrayMax;
  this->SampleRate = param_4;
  this->SampleDuration = (float)(param_2 / param_3) / (float)param_4;
  if (-1 < param_2) {
    if ((0 < param_2) && (param_2 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,param_2,(ForAnyElementType *)this,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,this->NumSamples,(ForAnyElementType *)this,&(this->RawPCMData).ArrayNum,piVar1);
    memcpy((this->RawPCMData).AllocatorInstance.Data,param_1,(longlong)this->NumSamples * 2);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
}

// MixBufferToChannels @ 1484e30f0

void __thiscall
Audio::TSampleBuffer<short>::MixBufferToChannels(TSampleBuffer<short> *this,int param_1)

{
  int *piVar1;
  short *psVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulong64 uVar6;
  void *_Dst;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (((this->RawPCMData).ArrayNum != 0) && (0 < param_1)) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)(param_1 * this->NumFrames);
    uVar6 = SUB168(ZEXT816(2) * auVar4,0);
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    _Dst = operator_new__(uVar6);
    operator_delete__((void *)0x0);
    memset(_Dst,0,(longlong)(param_1 * this->NumFrames) * 2);
    pFVar3 = (this->RawPCMData).AllocatorInstance.Data;
    iVar9 = 0;
    if (0 < this->NumFrames) {
      iVar10 = 0;
      do {
        iVar5 = this->NumChannels;
        iVar8 = 0;
        if (0 < iVar5) {
          do {
            psVar2 = (short *)((longlong)_Dst + (longlong)(iVar10 + iVar8 % param_1) * 2);
            iVar5 = iVar8 + iVar5 * iVar9;
            iVar8 = iVar8 + 1;
            *psVar2 = *psVar2 + *(short *)(pFVar3 + (longlong)iVar5 * 2);
            iVar5 = this->NumChannels;
          } while (iVar8 < iVar5);
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + param_1;
      } while (iVar9 < this->NumFrames);
    }
    this->NumChannels = param_1;
    uVar7 = param_1 * this->NumFrames;
    this->NumSamples = uVar7;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    piVar1 = &(this->RawPCMData).ArrayMax;
    (this->RawPCMData).ArrayNum = 0;
    if ((this->RawPCMData).ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)this,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,this->NumSamples,(ForAnyElementType *)this,&(this->RawPCMData).ArrayNum,piVar1);
    memcpy((this->RawPCMData).AllocatorInstance.Data,_Dst,(longlong)this->NumSamples * 2);
    operator_delete__(_Dst);
  }
  return;
}

