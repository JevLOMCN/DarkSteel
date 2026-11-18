// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FLateReflectionsPlate @ 1444f04d0

FLateReflectionsPlate * __thiscall
Audio::FLateReflectionsPlate::FLateReflectionsPlate
          (FLateReflectionsPlate *this,float param_1,int param_2,
          FLateReflectionsPlateDelays *param_3)

{
  TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *pTVar1;
  TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *pTVar2;
  TUniquePtr<Audio::FDynamicDelayAPF,TDefaultDelete<Audio::FDynamicDelayAPF>_> *pTVar3;
  TUniquePtr<Audio::FBufferOnePoleLPF,TDefaultDelete<Audio::FBufferOnePoleLPF>_> *pTVar4;
  TUniquePtr<Audio::FLongDelayAPF,TDefaultDelete<Audio::FLongDelayAPF>_> *pTVar5;
  int iVar6;
  int iVar7;
  FAlignedBlockBuffer *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  FLateReflectionsPlate *pFVar15;
  FDynamicDelayAPF *pFVar16;
  FDynamicDelayAPF *pFVar17;
  FIntegerDelay *pFVar18;
  FBufferOnePoleLPF *pFVar19;
  FLongDelayAPF *this_00;
  FDynamicDelayAPF *pFVar20;
  float fVar21;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40 [3];
  
  this->SampleRate = param_1;
  pFVar20 = (FDynamicDelayAPF *)0x0;
  this->NumInternalBufferSamples = param_2;
  this->Dampening = 0.0005;
  this->Decay = 0.5;
  this->Density = 0.0;
  iVar6 = param_3->NumSamplesModulatedDelta;
  iVar7 = param_3->NumSamplesDelayA;
  iVar12 = param_3->NumSamplesDelayB;
  pTVar1 = &this->DelayA;
  pTVar2 = &this->DelayB;
  (this->PlateDelays).NumSamplesModulatedBase = param_3->NumSamplesModulatedBase;
  (this->PlateDelays).NumSamplesModulatedDelta = iVar6;
  (this->PlateDelays).NumSamplesDelayA = iVar7;
  (this->PlateDelays).NumSamplesDelayB = iVar12;
  pTVar3 = &this->ModulatedAPF;
  iVar6 = param_3->NumSamplesDelayD;
  iVar7 = param_3->NumSamplesAPF;
  iVar12 = param_3->NumSamplesDelayE;
  (this->PlateDelays).NumSamplesDelayC = param_3->NumSamplesDelayC;
  (this->PlateDelays).NumSamplesDelayD = iVar6;
  (this->PlateDelays).NumSamplesAPF = iVar7;
  (this->PlateDelays).NumSamplesDelayE = iVar12;
  iVar6 = param_3->NumSamplesDelayG;
  iVar7 = param_3->NumSamplesDelayH;
  iVar12 = param_3->NumSamplesDelayI;
  (this->PlateDelays).NumSamplesDelayF = param_3->NumSamplesDelayF;
  (this->PlateDelays).NumSamplesDelayG = iVar6;
  (this->PlateDelays).NumSamplesDelayH = iVar7;
  (this->PlateDelays).NumSamplesDelayI = iVar12;
  pTVar3->Ptr = (FDynamicDelayAPF *)0x0;
  pTVar1->Ptr = (FIntegerDelay *)0x0;
  pTVar2->Ptr = (FIntegerDelay *)0x0;
  (this->DelayC).Ptr = (FIntegerDelay *)0x0;
  (this->DelayD).Ptr = (FIntegerDelay *)0x0;
  (this->LPF).Ptr = (FBufferOnePoleLPF *)0x0;
  (this->APF).Ptr = (FLongDelayAPF *)0x0;
  (this->DelayE).Ptr = (FIntegerDelay *)0x0;
  (this->DelayF).Ptr = (FIntegerDelay *)0x0;
  (this->DelayG).Ptr = (FIntegerDelay *)0x0;
  (this->DelayH).Ptr = (FIntegerDelay *)0x0;
  (this->DelayI).Ptr = (FIntegerDelay *)0x0;
  (this->WorkBufferA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBufferA).ArrayNum = 0;
  (this->WorkBufferA).ArrayMax = 0;
  (this->WorkBufferB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBufferB).ArrayNum = 0;
  (this->WorkBufferB).ArrayMax = 0;
  (this->WorkBufferC).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBufferC).ArrayNum = 0;
  (this->WorkBufferC).ArrayMax = 0;
  uVar11 = this->NumInternalBufferSamples;
  if ((this->PlateDelays).NumSamplesDelayI < this->NumInternalBufferSamples) {
    uVar11 = (this->PlateDelays).NumSamplesDelayI;
  }
  uVar14 = uVar11 & 0x80000003;
  if ((int)uVar14 < 0) {
    uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
  }
  this->NumInternalBufferSamples = uVar11 - uVar14;
  if (((int)(uVar11 - uVar14) < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumInternalBufferSamples > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LateReflectionsFast.cpp"
                          ,0x7e,L"InDelays.DelaySample2C too small"), bVar13)) {
    pcVar10 = (code *)swi(3);
    pFVar15 = (FLateReflectionsPlate *)(*pcVar10)();
    return pFVar15;
  }
  fVar21 = (float)((uint)this->Density ^ __xmm_80000000800000008000000080000000);
  iVar6 = (this->PlateDelays).NumSamplesModulatedBase;
  iVar7 = (this->PlateDelays).NumSamplesModulatedDelta;
  pFVar16 = ::operator_new(0x88);
  pFVar17 = pFVar20;
  if (pFVar16 != (FDynamicDelayAPF *)0x0) {
    pFVar17 = FDynamicDelayAPF::FDynamicDelayAPF
                        (pFVar16,fVar21,iVar6 - iVar7,iVar7 + iVar6,this->NumInternalBufferSamples,
                         this->SampleRate);
  }
  if (pTVar3 == (TUniquePtr<Audio::FDynamicDelayAPF,TDefaultDelete<Audio::FDynamicDelayAPF>_> *)
                &local_98) {
    if (pFVar17 != (FDynamicDelayAPF *)0x0) {
      FDynamicDelayAPF::~FDynamicDelayAPF(pFVar17);
      goto LAB_1444f0676;
    }
  }
  else {
    pFVar16 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar17;
    if (pFVar16 != (FDynamicDelayAPF *)0x0) {
      FDynamicDelayAPF::~FDynamicDelayAPF(pFVar16);
      pFVar17 = pFVar16;
LAB_1444f0676:
      ::operator_delete(pFVar17,0x88);
    }
  }
  pFVar18 = ::operator_new(0x20);
  pFVar17 = pFVar20;
  if (pFVar18 != (FIntegerDelay *)0x0) {
    iVar6 = (this->PlateDelays).NumSamplesDelayA;
    pFVar17 = (FDynamicDelayAPF *)FIntegerDelay::FIntegerDelay(pFVar18,iVar6,iVar6,0x100);
  }
  if (pTVar1 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)&local_90)
  {
    if (pFVar17 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar17->G).CurrentTick)->Ptr;
      pFVar16 = pFVar17;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
      goto LAB_1444f0713;
    }
  }
  else {
    pFVar16 = (FDynamicDelayAPF *)pTVar1->Ptr;
    pTVar1->Ptr = (FIntegerDelay *)pFVar17;
    if (pFVar16 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar16->G).CurrentTick)->Ptr;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
LAB_1444f0713:
      ::operator_delete(pFVar16,0x20);
    }
  }
  pFVar18 = ::operator_new(0x20);
  pFVar17 = pFVar20;
  if (pFVar18 != (FIntegerDelay *)0x0) {
    iVar6 = (this->PlateDelays).NumSamplesDelayB;
    pFVar17 = (FDynamicDelayAPF *)FIntegerDelay::FIntegerDelay(pFVar18,iVar6,iVar6,0x100);
  }
  if (pTVar2 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)&local_88)
  {
    if (pFVar17 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar17->G).CurrentTick)->Ptr;
      pFVar16 = pFVar17;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
      goto LAB_1444f07b0;
    }
  }
  else {
    pFVar16 = (FDynamicDelayAPF *)pTVar2->Ptr;
    pTVar2->Ptr = (FIntegerDelay *)pFVar17;
    if (pFVar16 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar16->G).CurrentTick)->Ptr;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
LAB_1444f07b0:
      ::operator_delete(pFVar16,0x20);
    }
  }
  pFVar18 = ::operator_new(0x20);
  pFVar17 = pFVar20;
  if (pFVar18 != (FIntegerDelay *)0x0) {
    iVar6 = (this->PlateDelays).NumSamplesDelayC;
    pFVar17 = (FDynamicDelayAPF *)FIntegerDelay::FIntegerDelay(pFVar18,iVar6,iVar6,0x100);
  }
  pTVar1 = &this->DelayC;
  if (pTVar1 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)&local_80)
  {
    if (pFVar17 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar17->G).CurrentTick)->Ptr;
      pFVar16 = pFVar17;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
      goto LAB_1444f084f;
    }
  }
  else {
    pFVar16 = (FDynamicDelayAPF *)pTVar1->Ptr;
    pTVar1->Ptr = (FIntegerDelay *)pFVar17;
    if (pFVar16 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar16->G).CurrentTick)->Ptr;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
LAB_1444f084f:
      ::operator_delete(pFVar16,0x20);
    }
  }
  pFVar18 = ::operator_new(0x20);
  pFVar17 = pFVar20;
  if (pFVar18 != (FIntegerDelay *)0x0) {
    iVar6 = (this->PlateDelays).NumSamplesDelayD;
    pFVar17 = (FDynamicDelayAPF *)FIntegerDelay::FIntegerDelay(pFVar18,iVar6,iVar6,0x100);
  }
  pTVar1 = &this->DelayD;
  if (pTVar1 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)&local_78)
  {
    if (pFVar17 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar17->G).CurrentTick)->Ptr;
      pFVar16 = pFVar17;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
      goto LAB_1444f08e6;
    }
  }
  else {
    pFVar16 = (FDynamicDelayAPF *)pTVar1->Ptr;
    pTVar1->Ptr = (FIntegerDelay *)pFVar17;
    if (pFVar16 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar16->G).CurrentTick)->Ptr;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
LAB_1444f08e6:
      ::operator_delete(pFVar16,0x20);
    }
  }
  pFVar19 = ::operator_new(0x10);
  pFVar17 = pFVar20;
  if (pFVar19 != (FBufferOnePoleLPF *)0x0) {
    pFVar17 = (FDynamicDelayAPF *)FBufferOnePoleLPF::FBufferOnePoleLPF(pFVar19,this->Dampening);
  }
  pTVar4 = &this->LPF;
  if (pTVar4 != (TUniquePtr<Audio::FBufferOnePoleLPF,TDefaultDelete<Audio::FBufferOnePoleLPF>_> *)
                &local_70) {
    pFVar19 = pTVar4->Ptr;
    pTVar4->Ptr = (FBufferOnePoleLPF *)pFVar17;
    ::operator_delete(pFVar19,0x10);
    pFVar17 = pFVar20;
  }
  ::operator_delete(pFVar17,0x10);
  fVar21 = this->Density - __real_3e19999a;
  this_00 = ::operator_new(0x28);
  pFVar17 = pFVar20;
  if (this_00 != (FLongDelayAPF *)0x0) {
    pFVar17 = (FDynamicDelayAPF *)
              FLongDelayAPF::FLongDelayAPF
                        (this_00,fVar21,(this->PlateDelays).NumSamplesAPF,
                         this->NumInternalBufferSamples);
  }
  pTVar5 = &this->APF;
  if (pTVar5 == (TUniquePtr<Audio::FLongDelayAPF,TDefaultDelete<Audio::FLongDelayAPF>_> *)&local_68)
  {
    if (pFVar17 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&pFVar17->EaseTimeInSec)->Ptr;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
      pFVar9 = (((TArray<float,TAlignedHeapAllocator<16>_> *)&(pFVar17->G).DurationTicks)->
               AllocatorInstance).Data;
      pFVar16 = pFVar17;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      goto LAB_1444f09ff;
    }
  }
  else {
    pFVar16 = (FDynamicDelayAPF *)pTVar5->Ptr;
    pTVar5->Ptr = (FLongDelayAPF *)pFVar17;
    if (pFVar16 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&pFVar16->EaseTimeInSec)->Ptr;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
      pFVar9 = (((TArray<float,TAlignedHeapAllocator<16>_> *)&(pFVar16->G).DurationTicks)->
               AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
LAB_1444f09ff:
      ::operator_delete(pFVar16,0x28);
    }
  }
  pFVar18 = ::operator_new(0x20);
  pFVar17 = pFVar20;
  if (pFVar18 != (FIntegerDelay *)0x0) {
    iVar6 = (this->PlateDelays).NumSamplesDelayE;
    pFVar17 = (FDynamicDelayAPF *)FIntegerDelay::FIntegerDelay(pFVar18,iVar6,iVar6,0x100);
  }
  pTVar1 = &this->DelayE;
  if (pTVar1 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)&local_60)
  {
    if (pFVar17 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar17->G).CurrentTick)->Ptr;
      pFVar16 = pFVar17;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
      goto LAB_1444f0a99;
    }
  }
  else {
    pFVar16 = (FDynamicDelayAPF *)pTVar1->Ptr;
    pTVar1->Ptr = (FIntegerDelay *)pFVar17;
    if (pFVar16 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar16->G).CurrentTick)->Ptr;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
LAB_1444f0a99:
      ::operator_delete(pFVar16,0x20);
    }
  }
  pFVar18 = ::operator_new(0x20);
  pFVar17 = pFVar20;
  if (pFVar18 != (FIntegerDelay *)0x0) {
    iVar6 = (this->PlateDelays).NumSamplesDelayF;
    pFVar17 = (FDynamicDelayAPF *)FIntegerDelay::FIntegerDelay(pFVar18,iVar6,iVar6,0x100);
  }
  pTVar1 = &this->DelayF;
  if (pTVar1 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)&local_58)
  {
    if (pFVar17 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar17->G).CurrentTick)->Ptr;
      pFVar16 = pFVar17;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
      goto LAB_1444f0b33;
    }
  }
  else {
    pFVar16 = (FDynamicDelayAPF *)pTVar1->Ptr;
    pTVar1->Ptr = (FIntegerDelay *)pFVar17;
    if (pFVar16 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar16->G).CurrentTick)->Ptr;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
LAB_1444f0b33:
      ::operator_delete(pFVar16,0x20);
    }
  }
  pFVar18 = ::operator_new(0x20);
  pFVar17 = pFVar20;
  if (pFVar18 != (FIntegerDelay *)0x0) {
    iVar6 = (this->PlateDelays).NumSamplesDelayG;
    pFVar17 = (FDynamicDelayAPF *)FIntegerDelay::FIntegerDelay(pFVar18,iVar6,iVar6,0x100);
  }
  pTVar1 = &this->DelayG;
  if (pTVar1 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)&local_50)
  {
    if (pFVar17 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar17->G).CurrentTick)->Ptr;
      pFVar16 = pFVar17;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
      goto LAB_1444f0bcd;
    }
  }
  else {
    pFVar16 = (FDynamicDelayAPF *)pTVar1->Ptr;
    pTVar1->Ptr = (FIntegerDelay *)pFVar17;
    if (pFVar16 != (FDynamicDelayAPF *)0x0) {
      pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&(pFVar16->G).CurrentTick)->Ptr;
      if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
        ::operator_delete(pFVar8,0x48);
      }
LAB_1444f0bcd:
      ::operator_delete(pFVar16,0x20);
    }
  }
  pFVar18 = ::operator_new(0x20);
  pFVar17 = pFVar20;
  if (pFVar18 != (FIntegerDelay *)0x0) {
    iVar6 = (this->PlateDelays).NumSamplesDelayH;
    pFVar17 = (FDynamicDelayAPF *)FIntegerDelay::FIntegerDelay(pFVar18,iVar6,iVar6,0x100);
  }
  pTVar1 = &this->DelayH;
  if (pTVar1 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)&local_48)
  {
    if (pFVar17 == (FDynamicDelayAPF *)0x0) goto LAB_1444f0c74;
    pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *)
             &(pFVar17->G).CurrentTick)->Ptr;
    pFVar16 = pFVar17;
    if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
      ::operator_delete(pFVar8,0x48);
    }
  }
  else {
    pFVar16 = (FDynamicDelayAPF *)pTVar1->Ptr;
    pTVar1->Ptr = (FIntegerDelay *)pFVar17;
    if (pFVar16 == (FDynamicDelayAPF *)0x0) goto LAB_1444f0c74;
    pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *)
             &(pFVar16->G).CurrentTick)->Ptr;
    if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
      ::operator_delete(pFVar8,0x48);
    }
  }
  ::operator_delete(pFVar16,0x20);
LAB_1444f0c74:
  pFVar18 = ::operator_new(0x20);
  if (pFVar18 != (FIntegerDelay *)0x0) {
    iVar6 = (this->PlateDelays).NumSamplesDelayI;
    pFVar20 = (FDynamicDelayAPF *)FIntegerDelay::FIntegerDelay(pFVar18,iVar6,iVar6,0x100);
  }
  pTVar1 = &this->DelayI;
  if (pTVar1 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)local_40)
  {
    if (pFVar20 == (FDynamicDelayAPF *)0x0) {
      return this;
    }
    pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *)
             &(pFVar20->G).CurrentTick)->Ptr;
    pFVar17 = pFVar20;
    if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
      ::operator_delete(pFVar8,0x48);
    }
  }
  else {
    pFVar17 = (FDynamicDelayAPF *)pTVar1->Ptr;
    pTVar1->Ptr = (FIntegerDelay *)pFVar20;
    if (pFVar17 == (FDynamicDelayAPF *)0x0) {
      return this;
    }
    pFVar8 = ((TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *)
             &(pFVar17->G).CurrentTick)->Ptr;
    if (pFVar8 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
      ::operator_delete(pFVar8,0x48);
    }
  }
  ::operator_delete(pFVar17,0x20);
  return this;
}

// ~FLateReflectionsPlate @ 1444f3d00

void __thiscall Audio::FLateReflectionsPlate::~FLateReflectionsPlate(FLateReflectionsPlate *this)

{
  FScriptContainerElement *pFVar1;
  FIntegerDelay *pFVar2;
  FAlignedBlockBuffer *pFVar3;
  FLongDelayAPF *pFVar4;
  FDynamicDelayAPF *this_00;
  
  pFVar1 = (this->WorkBufferC).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkBufferB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkBufferA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->DelayI).Ptr;
  if (pFVar2 != (FIntegerDelay *)0x0) {
    pFVar3 = (pFVar2->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar2 = (this->DelayH).Ptr;
  if (pFVar2 != (FIntegerDelay *)0x0) {
    pFVar3 = (pFVar2->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar2 = (this->DelayG).Ptr;
  if (pFVar2 != (FIntegerDelay *)0x0) {
    pFVar3 = (pFVar2->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar2 = (this->DelayF).Ptr;
  if (pFVar2 != (FIntegerDelay *)0x0) {
    pFVar3 = (pFVar2->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar2 = (this->DelayE).Ptr;
  if (pFVar2 != (FIntegerDelay *)0x0) {
    pFVar3 = (pFVar2->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar4 = (this->APF).Ptr;
  if (pFVar4 != (FLongDelayAPF *)0x0) {
    pFVar3 = (pFVar4->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    pFVar1 = (pFVar4->WorkBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar4,0x28);
  }
  ::operator_delete((this->LPF).Ptr,0x10);
  pFVar2 = (this->DelayD).Ptr;
  if (pFVar2 != (FIntegerDelay *)0x0) {
    pFVar3 = (pFVar2->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar2 = (this->DelayC).Ptr;
  if (pFVar2 != (FIntegerDelay *)0x0) {
    pFVar3 = (pFVar2->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar2 = (this->DelayB).Ptr;
  if (pFVar2 != (FIntegerDelay *)0x0) {
    pFVar3 = (pFVar2->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar2 = (this->DelayA).Ptr;
  if (pFVar2 != (FIntegerDelay *)0x0) {
    pFVar3 = (pFVar2->DelayLine).Ptr;
    if (pFVar3 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar3);
      ::operator_delete(pFVar3,0x48);
    }
    ::operator_delete(pFVar2,0x20);
  }
  this_00 = (this->ModulatedAPF).Ptr;
  if (this_00 != (FDynamicDelayAPF *)0x0) {
    FDynamicDelayAPF::~FDynamicDelayAPF(this_00);
    ::operator_delete(this_00,0x88);
    return;
  }
  return;
}

// FlushAudio @ 1444fbca0

void __thiscall Audio::FLateReflectionsPlate::FlushAudio(FLateReflectionsPlate *this)

{
  FIntegerDelay *pFVar1;
  FLongDelayAPF *pFVar2;
  
  pFVar1 = (this->DelayA).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  pFVar1 = (this->DelayB).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  pFVar1 = (this->DelayC).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  pFVar1 = (this->DelayD).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  pFVar1 = (this->DelayE).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  pFVar1 = (this->DelayF).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  pFVar1 = (this->DelayG).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  pFVar1 = (this->DelayH).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  pFVar1 = (this->DelayI).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  FBufferOnePoleLPF::FlushAudio((this->LPF).Ptr);
  FDynamicDelayAPF::Reset((this->ModulatedAPF).Ptr);
  pFVar2 = (this->APF).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
  return;
}

// GetNumInternalBufferSamples @ 144504350

int __thiscall
Audio::FLateReflectionsPlate::GetNumInternalBufferSamples(FLateReflectionsPlate *this)

{
  return this->NumInternalBufferSamples;
}

// PeekDelayLine @ 14450b4e0

void __thiscall
Audio::FLateReflectionsPlate::PeekDelayLine
          (FLateReflectionsPlate *this,int param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2
          )

{
  FIntegerDelay *pFVar1;
  uint uVar2;
  float *_Src;
  uint uVar3;
  
  pFVar1 = (this->DelayI).Ptr;
  uVar3 = pFVar1->NumDelaySamples;
  uVar2 = FAlignedBlockBuffer::GetNumAvailable((pFVar1->DelayLine).Ptr);
  if ((int)uVar2 < (int)uVar3) {
    uVar3 = uVar2;
  }
  if (param_1 < (int)uVar3) {
    uVar3 = param_1;
  }
  _Src = FAlignedBlockBuffer::InspectSamples((pFVar1->DelayLine).Ptr,uVar3,0);
  if (_Src == (float *)0x0) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar3,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)(int)uVar3 << 2);
  }
  return;
}

// ProcessAudioFrames @ 144512060

void __thiscall
Audio::FLateReflectionsPlate::ProcessAudioFrames
          (FLateReflectionsPlate *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3,FLateReflectionsPlateOutputs *param_4)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FLongDelayAPF *pFVar10;
  code *pcVar11;
  float fVar12;
  bool bVar13;
  float *pfVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  float fVar22;
  undefined4 uStack_fc;
  undefined4 uStack_ec;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78 [3];
  
  uVar19 = param_1->ArrayNum;
  FLateReflectionsPlateOutputs::ResizeAndZero(param_4,uVar19);
  if ((uVar19 != param_2->ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNum == InFeedbackSamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LateReflectionsFast.cpp"
                          ,0xa9,L"InSamples and InFeedbackSamples must have equal length"), bVar13))
  {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((uVar19 != param_3->ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNum == InDelayModulations.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LateReflectionsFast.cpp"
                          ,0xaa,L"InSamples and InDelayModulations must have equal length"), bVar13)
     ) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((uVar19 == param_2->ArrayNum) && (uVar19 == param_3->ArrayNum)) {
    pTVar1 = &this->WorkBufferA;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    piVar4 = &(this->WorkBufferA).ArrayMax;
    piVar5 = &(this->WorkBufferA).ArrayNum;
    iVar17 = 0;
    *piVar5 = 0;
    if ((this->WorkBufferA).ArrayMax < (int)uVar19) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar19,&pTVar1->AllocatorInstance,0,piVar4);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar19,&pTVar1->AllocatorInstance,piVar5,piVar4);
    pTVar2 = &this->WorkBufferB;
    piVar4 = &(this->WorkBufferB).ArrayMax;
    (this->WorkBufferB).ArrayNum = 0;
    if ((this->WorkBufferB).ArrayMax < (int)uVar19) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar19,&pTVar2->AllocatorInstance,0,piVar4);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar19,&pTVar2->AllocatorInstance,&(this->WorkBufferB).ArrayNum,piVar4);
    pTVar3 = &this->WorkBufferC;
    piVar4 = &(this->WorkBufferC).ArrayMax;
    (this->WorkBufferC).ArrayNum = 0;
    if ((this->WorkBufferC).ArrayMax < (int)uVar19) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar19,&pTVar3->AllocatorInstance,0,piVar4);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar19,&pTVar3->AllocatorInstance,&(this->WorkBufferC).ArrayNum,piVar4);
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    iVar21 = (this->WorkBufferA).ArrayNum;
    if ((iVar21 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar8 = (param_1->AllocatorInstance).Data;
    iVar18 = param_1->ArrayNum;
    if ((iVar18 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar12 = __real_3f800000;
    fVar22 = __real_3f800000 - this->Decay;
    pFVar9 = (param_2->AllocatorInstance).Data;
    iVar6 = param_2->ArrayNum;
    if ((iVar6 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_b8._12_4_ = uStack_fc;
    local_b8.ArrayNum = iVar21;
    local_a8._12_4_ = uStack_ec;
    local_a8.ArrayNum = iVar18;
    local_98._12_4_ = uStack_dc;
    local_98.ArrayNum = iVar6;
    local_b8.DataPtr = (float *)pFVar7;
    local_a8.DataPtr = (float *)pFVar8;
    local_98.DataPtr = (float *)pFVar9;
    ArrayWeightedSum(&local_98,fVar22,&local_a8,&local_b8);
    FDynamicDelayAPF::ProcessAudio((this->ModulatedAPF).Ptr,pTVar1,param_3,pTVar2);
    FIntegerDelay::ProcessAudio((this->DelayA).Ptr,pTVar2,param_4->Taps);
    FIntegerDelay::ProcessAudio((this->DelayB).Ptr,param_4->Taps,param_4->Taps + 1);
    FIntegerDelay::ProcessAudio((this->DelayC).Ptr,param_4->Taps + 1,param_4->Taps + 2);
    FIntegerDelay::ProcessAudio((this->DelayD).Ptr,param_4->Taps + 2,pTVar1);
    iVar21 = (this->WorkBufferA).ArrayNum;
    piVar4 = &(this->WorkBufferA).ArrayNum;
    local_88.DataPtr = (float *)(pTVar1->AllocatorInstance).Data;
    fVar22 = this->Dampening;
    if ((iVar21 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_88._12_4_ = uStack_cc;
    local_88.ArrayNum = iVar21;
    ArrayMultiplyByConstantInPlace(&local_88,fVar12 - fVar22);
    FBufferOnePoleLPF::ProcessAudio((this->LPF).Ptr,pTVar1,pTVar2);
    local_78[0].DataPtr = (float *)(pTVar2->AllocatorInstance).Data;
    iVar21 = (this->WorkBufferB).ArrayNum;
    fVar22 = this->Decay;
    if ((iVar21 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_78[0]._12_4_ = uStack_bc;
    local_78[0].ArrayNum = iVar21;
    ArrayMultiplyByConstantInPlace(local_78,fVar12 - fVar22);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    uVar19 = (this->WorkBufferB).ArrayNum;
    uVar20 = (ulonglong)uVar19;
    pFVar10 = (this->APF).Ptr;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar20);
    }
    piVar5 = &(this->WorkBufferA).ArrayMax;
    *piVar4 = 0;
    if ((this->WorkBufferA).ArrayMax < (int)uVar19) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar19,&pTVar1->AllocatorInstance,0,piVar5);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar19,&pTVar1->AllocatorInstance,piVar4,piVar5);
    piVar4 = &(this->WorkBufferC).ArrayMax;
    (this->WorkBufferC).ArrayNum = 0;
    if ((this->WorkBufferC).ArrayMax < (int)uVar19) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar19,&pTVar3->AllocatorInstance,0,piVar4);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar19,&pTVar3->AllocatorInstance,&(this->WorkBufferC).ArrayNum,piVar4);
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    pFVar9 = (pTVar3->AllocatorInstance).Data;
    while (uVar19 != 0) {
      iVar18 = (int)uVar20;
      iVar21 = iVar18;
      if (pFVar10->NumInternalBufferSamples < iVar18) {
        iVar21 = pFVar10->NumInternalBufferSamples;
      }
      pfVar14 = FAlignedBlockBuffer::InspectSamples((pFVar10->DelayLine).Ptr,iVar21,0);
      lVar15 = (longlong)iVar17;
      pFVar16 = pFVar9 + lVar15 * 4;
      ArrayAPFLongDelayProcess
                ((float *)(pFVar7 + lVar15 * 4),pfVar14,iVar21,(float *)(pFVar8 + lVar15 * 4),
                 (float *)pFVar16,pFVar10->G);
      FAlignedBlockBuffer::RemoveSamples((pFVar10->DelayLine).Ptr,iVar21);
      FAlignedBlockBuffer::AddSamples((pFVar10->DelayLine).Ptr,(float *)pFVar16,iVar21);
      iVar17 = iVar17 + iVar21;
      uVar19 = iVar18 - iVar21;
      uVar20 = (ulonglong)uVar19;
    }
    FIntegerDelay::ProcessAudio((this->DelayE).Ptr,&this->WorkBufferC,param_4->Taps + 3);
    FIntegerDelay::ProcessAudio((this->DelayF).Ptr,param_4->Taps + 3,param_4->Taps + 4);
    FIntegerDelay::ProcessAudio((this->DelayG).Ptr,&this->WorkBufferA,param_4->Taps + 5);
    FIntegerDelay::ProcessAudio((this->DelayH).Ptr,param_4->Taps + 5,param_4->Taps + 6);
    FIntegerDelay::ProcessAudio((this->DelayI).Ptr,param_4->Taps + 6,&param_4->Output);
  }
  return;
}

// SetDampening @ 144519c20

void __thiscall
Audio::FLateReflectionsPlate::SetDampening(FLateReflectionsPlate *this,float param_1)

{
  this->Dampening = param_1;
  FBufferOnePoleLPF::SetG((this->LPF).Ptr,param_1);
  return;
}

// SetDecay @ 144519c40

void __thiscall Audio::FLateReflectionsPlate::SetDecay(FLateReflectionsPlate *this,float param_1)

{
  this->Decay = param_1;
  return;
}

// SetDensity @ 144519dc0

void __thiscall Audio::FLateReflectionsPlate::SetDensity(FLateReflectionsPlate *this,float param_1)

{
  float fVar1;
  FDynamicDelayAPF *pFVar2;
  int iVar3;
  float fVar4;
  
  pFVar2 = (this->ModulatedAPF).Ptr;
  this->Density = param_1;
  fVar4 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
  if (__real_3f666666 <= (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000)) {
    fVar4 = __real_3f666666;
  }
  if (fVar4 <= __real_bf666666) {
    fVar4 = __real_bf666666;
  }
  if ((pFVar2->G).bIsInit == false) {
    iVar3 = (int)(pFVar2->EaseTimeInSec * (pFVar2->G).SampleRate);
    (pFVar2->G).DurationTicks = iVar3;
    (pFVar2->G).CurrentTick = 0;
    if (iVar3 == 0) {
      (pFVar2->G).CurrentValue = fVar4;
    }
    else {
      fVar1 = (pFVar2->G).CurrentValue;
      (pFVar2->G).StartValue = fVar1;
      (pFVar2->G).DeltaValue = fVar4 - fVar1;
    }
  }
  else {
    (pFVar2->G).bIsInit = false;
    (pFVar2->G).DurationTicks = 0;
    (pFVar2->G).CurrentValue = fVar4;
    (pFVar2->G).CurrentTick = 0;
  }
  ((this->APF).Ptr)->G = this->Density - __real_3e19999a;
  return;
}

