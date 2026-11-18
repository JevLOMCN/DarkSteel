// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 7

// FFeedbackDelayNetwork @ 1444a4310

FFeedbackDelayNetwork * __thiscall
Audio::FFeedbackDelayNetwork::FFeedbackDelayNetwork
          (FFeedbackDelayNetwork *this,int param_1,FFDNDelaySettings *param_2)

{
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar1;
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar2;
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar3;
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  FAlignedBlockBuffer *pFVar12;
  int iVar13;
  uint uVar14;
  FAlignedBlockBuffer *pFVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  iVar18 = param_2->APF1DelayNumSamples;
  iVar11 = param_2->APF2DelayNumSamples;
  iVar13 = param_2->APF3DelayNumSamples;
  pTVar1 = &this->DelayLine0;
  pTVar2 = &this->DelayLine1;
  (this->Settings).APF0DelayNumSamples = param_2->APF0DelayNumSamples;
  (this->Settings).APF1DelayNumSamples = iVar18;
  (this->Settings).APF2DelayNumSamples = iVar11;
  (this->Settings).APF3DelayNumSamples = iVar13;
  pTVar3 = &this->DelayLine2;
  (this->WorkBuffer0).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar4 = &this->DelayLine3;
  piVar17 = &(this->WorkBuffer0).ArrayNum;
  pTVar1->Ptr = (FAlignedBlockBuffer *)0x0;
  pTVar2->Ptr = (FAlignedBlockBuffer *)0x0;
  piVar5 = &(this->WorkBuffer3).ArrayMax;
  pTVar3->Ptr = (FAlignedBlockBuffer *)0x0;
  pTVar4->Ptr = (FAlignedBlockBuffer *)0x0;
  *piVar17 = 0;
  (this->WorkBuffer0).ArrayMax = 0;
  (this->WorkBuffer1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBuffer1).ArrayNum = 0;
  (this->WorkBuffer1).ArrayMax = 0;
  (this->WorkBuffer2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBuffer2).ArrayNum = 0;
  (this->WorkBuffer2).ArrayMax = 0;
  (this->WorkBuffer3).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar5 = 0;
  piVar6 = &(this->WorkBuffer3).ArrayNum;
  *piVar6 = 0;
  uVar14 = (this->Settings).APF1DelayNumSamples;
  uVar10 = (this->Settings).APF0DelayNumSamples;
  uVar16 = (this->Settings).APF3DelayNumSamples;
  if ((this->Settings).APF2DelayNumSamples < (int)uVar16) {
    uVar16 = (this->Settings).APF2DelayNumSamples;
  }
  if ((int)uVar10 < (int)uVar14) {
    uVar14 = uVar10;
  }
  if ((int)uVar14 < (int)uVar16) {
    uVar16 = uVar14;
  }
  if ((int)uVar16 < param_1) {
    param_1 = uVar16;
  }
  uVar14 = param_1 & 0x80000003;
  if ((int)uVar14 < 0) {
    uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
  }
  iVar18 = param_1 - uVar14;
  this->NumInternalBufferSamples = iVar18;
  if (iVar18 < 1) {
    iVar18 = 1;
    this->NumInternalBufferSamples = 1;
  }
  pFVar15 = ::operator_new(0x48);
  if (pFVar15 == (FAlignedBlockBuffer *)0x0) {
    pFVar15 = (FAlignedBlockBuffer *)0x0;
  }
  else {
    pFVar15 = FAlignedBlockBuffer::FAlignedBlockBuffer
                        (pFVar15,iVar18 + uVar10 * 2,this->NumInternalBufferSamples,0x10,0x10);
  }
  if (pTVar1 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&local_58) {
    if (pFVar15 != (FAlignedBlockBuffer *)0x0) {
      FMemory::Free(pFVar15->InternalBuffer);
      pFVar15->InternalBuffer = (float *)0x0;
      FMemory::Free(pFVar15->RolloverBuffer);
      pFVar15->RolloverBuffer = (float *)0x0;
      goto LAB_1444a4485;
    }
  }
  else {
    pFVar12 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar15;
    if (pFVar12 != (FAlignedBlockBuffer *)0x0) {
      FMemory::Free(pFVar12->InternalBuffer);
      pFVar12->InternalBuffer = (float *)0x0;
      FMemory::Free(pFVar12->RolloverBuffer);
      pFVar12->RolloverBuffer = (float *)0x0;
      pFVar15 = pFVar12;
LAB_1444a4485:
      ::operator_delete(pFVar15,0x48);
    }
  }
  iVar18 = (this->Settings).APF1DelayNumSamples;
  iVar11 = this->NumInternalBufferSamples;
  pFVar15 = ::operator_new(0x48);
  if (pFVar15 == (FAlignedBlockBuffer *)0x0) {
    pFVar15 = (FAlignedBlockBuffer *)0x0;
  }
  else {
    pFVar15 = FAlignedBlockBuffer::FAlignedBlockBuffer
                        (pFVar15,iVar11 + iVar18 * 2,this->NumInternalBufferSamples,0x10,0x10);
  }
  if (pTVar2 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&local_50) {
    if (pFVar15 != (FAlignedBlockBuffer *)0x0) {
      FMemory::Free(pFVar15->InternalBuffer);
      pFVar15->InternalBuffer = (float *)0x0;
      FMemory::Free(pFVar15->RolloverBuffer);
      pFVar15->RolloverBuffer = (float *)0x0;
      goto LAB_1444a452c;
    }
  }
  else {
    pFVar12 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar15;
    if (pFVar12 != (FAlignedBlockBuffer *)0x0) {
      FMemory::Free(pFVar12->InternalBuffer);
      pFVar12->InternalBuffer = (float *)0x0;
      FMemory::Free(pFVar12->RolloverBuffer);
      pFVar12->RolloverBuffer = (float *)0x0;
      pFVar15 = pFVar12;
LAB_1444a452c:
      ::operator_delete(pFVar15,0x48);
    }
  }
  iVar18 = (this->Settings).APF2DelayNumSamples;
  iVar11 = this->NumInternalBufferSamples;
  pFVar15 = ::operator_new(0x48);
  if (pFVar15 == (FAlignedBlockBuffer *)0x0) {
    pFVar15 = (FAlignedBlockBuffer *)0x0;
  }
  else {
    pFVar15 = FAlignedBlockBuffer::FAlignedBlockBuffer
                        (pFVar15,iVar11 + iVar18 * 2,this->NumInternalBufferSamples,0x10,0x10);
  }
  if (pTVar3 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&local_48) {
    if (pFVar15 != (FAlignedBlockBuffer *)0x0) {
      FMemory::Free(pFVar15->InternalBuffer);
      pFVar15->InternalBuffer = (float *)0x0;
      FMemory::Free(pFVar15->RolloverBuffer);
      pFVar15->RolloverBuffer = (float *)0x0;
      goto LAB_1444a45d3;
    }
  }
  else {
    pFVar12 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar15;
    if (pFVar12 != (FAlignedBlockBuffer *)0x0) {
      FMemory::Free(pFVar12->InternalBuffer);
      pFVar12->InternalBuffer = (float *)0x0;
      FMemory::Free(pFVar12->RolloverBuffer);
      pFVar12->RolloverBuffer = (float *)0x0;
      pFVar15 = pFVar12;
LAB_1444a45d3:
      ::operator_delete(pFVar15,0x48);
    }
  }
  iVar18 = (this->Settings).APF3DelayNumSamples;
  iVar11 = this->NumInternalBufferSamples;
  pFVar15 = ::operator_new(0x48);
  if (pFVar15 == (FAlignedBlockBuffer *)0x0) {
    pFVar15 = (FAlignedBlockBuffer *)0x0;
  }
  else {
    pFVar15 = FAlignedBlockBuffer::FAlignedBlockBuffer
                        (pFVar15,iVar11 + iVar18 * 2,this->NumInternalBufferSamples,0x10,0x10);
  }
  if (pTVar4 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&local_40) {
    if (pFVar15 == (FAlignedBlockBuffer *)0x0) goto LAB_1444a4682;
    FMemory::Free(pFVar15->InternalBuffer);
    pFVar15->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar15->RolloverBuffer);
    pFVar15->RolloverBuffer = (float *)0x0;
  }
  else {
    pFVar12 = pTVar4->Ptr;
    pTVar4->Ptr = pFVar15;
    if (pFVar12 == (FAlignedBlockBuffer *)0x0) goto LAB_1444a4682;
    FMemory::Free(pFVar12->InternalBuffer);
    pFVar12->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar12->RolloverBuffer);
    pFVar12->RolloverBuffer = (float *)0x0;
    pFVar15 = pFVar12;
  }
  ::operator_delete(pFVar15,0x48);
LAB_1444a4682:
  FAlignedBlockBuffer::AddZeros(pTVar1->Ptr,(this->Settings).APF0DelayNumSamples);
  FAlignedBlockBuffer::AddZeros(pTVar2->Ptr,(this->Settings).APF1DelayNumSamples);
  FAlignedBlockBuffer::AddZeros(pTVar3->Ptr,(this->Settings).APF2DelayNumSamples);
  FAlignedBlockBuffer::AddZeros(pTVar4->Ptr,(this->Settings).APF3DelayNumSamples);
  uVar14 = this->NumInternalBufferSamples;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar7 = &(this->WorkBuffer0).ArrayMax;
  (this->WorkBuffer0).ArrayNum = 0;
  if (*piVar7 < (int)uVar14) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar14,&(this->WorkBuffer0).AllocatorInstance,0,piVar7);
  }
  uVar14 = this->NumInternalBufferSamples;
  if (-1 < (int)uVar14) {
    piVar8 = &(this->WorkBuffer1).ArrayMax;
    (this->WorkBuffer1).ArrayNum = 0;
    if (*piVar8 < (int)uVar14) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar14,&(this->WorkBuffer1).AllocatorInstance,0,piVar8);
    }
    uVar14 = this->NumInternalBufferSamples;
    if (-1 < (int)uVar14) {
      piVar9 = &(this->WorkBuffer2).ArrayMax;
      (this->WorkBuffer2).ArrayNum = 0;
      if (*piVar9 < (int)uVar14) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,uVar14,&(this->WorkBuffer2).AllocatorInstance,0,piVar9);
      }
      uVar14 = this->NumInternalBufferSamples;
      if (-1 < (int)uVar14) {
        *piVar6 = 0;
        if (*piVar5 < (int)uVar14) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar14,&(this->WorkBuffer3).AllocatorInstance,0,piVar5);
        }
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,this->NumInternalBufferSamples,&(this->WorkBuffer0).AllocatorInstance,piVar17
                   ,piVar7);
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,this->NumInternalBufferSamples,&(this->WorkBuffer1).AllocatorInstance,
                   &(this->WorkBuffer1).ArrayNum,piVar8);
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,this->NumInternalBufferSamples,&(this->WorkBuffer2).AllocatorInstance,
                   &(this->WorkBuffer2).ArrayNum,piVar9);
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,this->NumInternalBufferSamples,&(this->WorkBuffer3).AllocatorInstance,
                   &(this->WorkBuffer3).ArrayNum,piVar5);
        this->FMO[0] = 0.0;
        this->FMO[1] = 0.0;
        this->LPFZ[0] = 0.0;
        this->LPFZ[1] = 0.0;
        this->FMO[2] = 0.0;
        this->FMO[3] = 0.0;
        this->LPFZ[2] = 0.0;
        this->LPFZ[3] = 0.0;
        return this;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
}

// ~FFeedbackDelayNetwork @ 1444a65b0

void __thiscall Audio::FFeedbackDelayNetwork::~FFeedbackDelayNetwork(FFeedbackDelayNetwork *this)

{
  FScriptContainerElement *pFVar1;
  FAlignedBlockBuffer *pFVar2;
  
  pFVar1 = (this->WorkBuffer3).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkBuffer2).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkBuffer1).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkBuffer0).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->DelayLine3).Ptr;
  if (pFVar2 != (FAlignedBlockBuffer *)0x0) {
    FMemory::Free(pFVar2->InternalBuffer);
    pFVar2->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar2->RolloverBuffer);
    pFVar2->RolloverBuffer = (float *)0x0;
    ::operator_delete(pFVar2,0x48);
  }
  pFVar2 = (this->DelayLine2).Ptr;
  if (pFVar2 != (FAlignedBlockBuffer *)0x0) {
    FMemory::Free(pFVar2->InternalBuffer);
    pFVar2->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar2->RolloverBuffer);
    pFVar2->RolloverBuffer = (float *)0x0;
    ::operator_delete(pFVar2,0x48);
  }
  pFVar2 = (this->DelayLine1).Ptr;
  if (pFVar2 != (FAlignedBlockBuffer *)0x0) {
    FMemory::Free(pFVar2->InternalBuffer);
    pFVar2->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar2->RolloverBuffer);
    pFVar2->RolloverBuffer = (float *)0x0;
    ::operator_delete(pFVar2,0x48);
  }
  pFVar2 = (this->DelayLine0).Ptr;
  if (pFVar2 != (FAlignedBlockBuffer *)0x0) {
    FMemory::Free(pFVar2->InternalBuffer);
    pFVar2->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar2->RolloverBuffer);
    pFVar2->RolloverBuffer = (float *)0x0;
    ::operator_delete(pFVar2,0x48);
  }
  return;
}

// FlushAudio @ 1444beb10

void __thiscall Audio::FFeedbackDelayNetwork::FlushAudio(FFeedbackDelayNetwork *this)

{
  FAlignedBlockBuffer *pFVar1;
  
  this->LPFZ[0] = 0.0;
  this->LPFZ[1] = 0.0;
  this->FMO[0] = 0.0;
  this->FMO[1] = 0.0;
  this->LPFZ[2] = 0.0;
  this->LPFZ[3] = 0.0;
  this->FMO[2] = 0.0;
  this->FMO[3] = 0.0;
  pFVar1 = (this->DelayLine0).Ptr;
  if (0 < pFVar1->SampleCapacity) {
    memset(pFVar1->InternalBuffer,0,(longlong)(pFVar1->SampleCapacity * 4));
  }
  if (0 < pFVar1->MaxNumInspectSamples) {
    memset(pFVar1->RolloverBuffer,0,(longlong)(pFVar1->MaxNumInspectSamples * 4));
  }
  pFVar1->ReadPointer = pFVar1->InternalBuffer;
  pFVar1->WritePointer = pFVar1->InternalBuffer;
  pFVar1->WritePos = 0;
  pFVar1->ReadPos = 0;
  pFVar1->WriteCount = 0;
  FAlignedBlockBuffer::AddZeros((this->DelayLine0).Ptr,(this->Settings).APF0DelayNumSamples);
  pFVar1 = (this->DelayLine1).Ptr;
  if (0 < pFVar1->SampleCapacity) {
    memset(pFVar1->InternalBuffer,0,(longlong)(pFVar1->SampleCapacity * 4));
  }
  if (0 < pFVar1->MaxNumInspectSamples) {
    memset(pFVar1->RolloverBuffer,0,(longlong)(pFVar1->MaxNumInspectSamples * 4));
  }
  pFVar1->ReadPointer = pFVar1->InternalBuffer;
  pFVar1->WritePointer = pFVar1->InternalBuffer;
  pFVar1->WritePos = 0;
  pFVar1->ReadPos = 0;
  pFVar1->WriteCount = 0;
  FAlignedBlockBuffer::AddZeros((this->DelayLine1).Ptr,(this->Settings).APF1DelayNumSamples);
  pFVar1 = (this->DelayLine2).Ptr;
  if (0 < pFVar1->SampleCapacity) {
    memset(pFVar1->InternalBuffer,0,(longlong)(pFVar1->SampleCapacity * 4));
  }
  if (0 < pFVar1->MaxNumInspectSamples) {
    memset(pFVar1->RolloverBuffer,0,(longlong)(pFVar1->MaxNumInspectSamples * 4));
  }
  pFVar1->ReadPointer = pFVar1->InternalBuffer;
  pFVar1->WritePointer = pFVar1->InternalBuffer;
  pFVar1->WritePos = 0;
  pFVar1->ReadPos = 0;
  pFVar1->WriteCount = 0;
  FAlignedBlockBuffer::AddZeros((this->DelayLine2).Ptr,(this->Settings).APF2DelayNumSamples);
  pFVar1 = (this->DelayLine3).Ptr;
  if (0 < pFVar1->SampleCapacity) {
    memset(pFVar1->InternalBuffer,0,(longlong)(pFVar1->SampleCapacity * 4));
  }
  if (0 < pFVar1->MaxNumInspectSamples) {
    memset(pFVar1->RolloverBuffer,0,(longlong)(pFVar1->MaxNumInspectSamples * 4));
  }
  pFVar1->ReadPointer = pFVar1->InternalBuffer;
  pFVar1->WritePointer = pFVar1->InternalBuffer;
  pFVar1->WritePos = 0;
  pFVar1->ReadPos = 0;
  pFVar1->WriteCount = 0;
  FAlignedBlockBuffer::AddZeros((this->DelayLine3).Ptr,(this->Settings).APF3DelayNumSamples);
  return;
}

// GetNumInternalBufferSamples @ 1444c08c0

int __thiscall
Audio::FFeedbackDelayNetwork::GetNumInternalBufferSamples(FFeedbackDelayNetwork *this)

{
  return this->NumInternalBufferSamples;
}

// ProcessAudio @ 1444d8bc0

void __thiscall
Audio::FFeedbackDelayNetwork::ProcessAudio
          (FFeedbackDelayNetwork *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = param_1->ArrayNum;
  uVar7 = (ulonglong)uVar6;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  iVar4 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar6) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar6,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar6,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  pFVar2 = (param_2->AllocatorInstance).Data;
  while (0 < (int)uVar6) {
    iVar5 = (int)uVar7;
    iVar3 = iVar5;
    if (this->NumInternalBufferSamples < iVar5) {
      iVar3 = this->NumInternalBufferSamples;
    }
    ProcessAudioBuffer(this,(float *)(pFVar1 + (longlong)iVar4 * 4),iVar3,
                       (float *)(pFVar2 + (longlong)iVar4 * 4));
    uVar6 = iVar5 - iVar3;
    uVar7 = (ulonglong)uVar6;
    iVar4 = iVar4 + iVar3;
  }
  return;
}

// ProcessAudioBuffer @ 1444dcbf0

void __thiscall
Audio::FFeedbackDelayNetwork::ProcessAudioBuffer
          (FFeedbackDelayNetwork *this,float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *_Src;
  FScriptContainerElement *_Src_00;
  FScriptContainerElement *_Src_01;
  FScriptContainerElement *_Src_02;
  FAlignedBlockBuffer *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  lVar15 = (longlong)param_2;
  pfVar9 = FAlignedBlockBuffer::InspectSamples((this->DelayLine0).Ptr,param_2,0);
  pfVar10 = FAlignedBlockBuffer::InspectSamples((this->DelayLine1).Ptr,param_2,0);
  pfVar11 = FAlignedBlockBuffer::InspectSamples((this->DelayLine2).Ptr,param_2,0);
  pfVar12 = FAlignedBlockBuffer::InspectSamples((this->DelayLine3).Ptr,param_2,0);
  uVar7 = __xmm_80000000800000008000000080000000;
  _Src = (this->WorkBuffer2).AllocatorInstance.Data;
  _Src_00 = (this->WorkBuffer3).AllocatorInstance.Data;
  _Src_01 = (this->WorkBuffer1).AllocatorInstance.Data;
  _Src_02 = (this->WorkBuffer0).AllocatorInstance.Data;
  if (0 < param_2) {
    lVar13 = (longlong)_Src_01 - (longlong)pfVar10;
    lVar23 = (longlong)_Src_00 - (longlong)pfVar10;
    lVar25 = (longlong)pfVar9 - (longlong)pfVar10;
    lVar20 = (longlong)pfVar11 - (longlong)pfVar10;
    lVar21 = (longlong)pfVar12 - (longlong)pfVar10;
    lVar18 = (longlong)param_1 - (longlong)pfVar10;
    lVar22 = (longlong)_Src_02 - (longlong)pfVar10;
    lVar14 = (longlong)_Src - (longlong)pfVar10;
    lVar16 = (longlong)pfVar10 - (longlong)param_3;
    do {
      fVar29 = *(float *)(lVar25 + (longlong)pfVar10);
      pfVar9 = (float *)((longlong)param_3 + lVar16);
      fVar30 = *(float *)((longlong)pfVar9 + lVar18) * (this->Coefficients).InputScale;
      fVar1 = *pfVar9;
      fVar2 = *(float *)(lVar20 + (longlong)pfVar9);
      fVar3 = *(float *)(lVar21 + (longlong)pfVar9);
      fVar31 = this->FMO[3];
      fVar26 = fVar30 + this->FMO[0] + fVar29 * (this->Coefficients).APFG[0];
      fVar27 = fVar30 + this->FMO[1] + fVar1 * (this->Coefficients).APFG[1];
      fVar28 = fVar30 + this->FMO[2] + fVar2 * (this->Coefficients).APFG[2];
      fVar4 = (this->Coefficients).APFG[3];
      *(float *)(lVar22 + (longlong)pfVar9) = fVar26;
      *(float *)((longlong)pfVar9 + lVar13) = fVar27;
      *(float *)((longlong)pfVar9 + lVar14) = fVar28;
      fVar31 = fVar30 + fVar31 + fVar3 * fVar4;
      *(float *)((longlong)pfVar9 + lVar23) = fVar31;
      *param_3 = 0.0;
      fVar29 = (fVar29 - fVar26 * (this->Coefficients).APFG[0]) * (this->Coefficients).LPFA[0] +
               this->LPFZ[0] * (this->Coefficients).LPFB[0];
      this->LPFZ[0] = fVar29;
      *param_3 = fVar29 + *param_3;
      fVar29 = (fVar1 - fVar27 * (this->Coefficients).APFG[1]) * (this->Coefficients).LPFA[1] +
               (this->Coefficients).LPFB[1] * this->LPFZ[1];
      this->LPFZ[1] = fVar29;
      *param_3 = fVar29 + *param_3;
      fVar29 = (fVar2 - fVar28 * (this->Coefficients).APFG[2]) * (this->Coefficients).LPFA[2] +
               (this->Coefficients).LPFB[2] * this->LPFZ[2];
      this->LPFZ[2] = fVar29;
      *param_3 = fVar29 + *param_3;
      fVar29 = (fVar3 - fVar31 * (this->Coefficients).APFG[3]) * (this->Coefficients).LPFA[3] +
               (this->Coefficients).LPFB[3] * this->LPFZ[3];
      this->LPFZ[3] = fVar29;
      *param_3 = fVar29 + *param_3;
      fVar29 = (this->Coefficients).Feedback;
      fVar1 = this->LPFZ[0];
      fVar2 = this->LPFZ[2];
      fVar3 = this->LPFZ[1];
      this->FMO[0] = (fVar2 - fVar3) * fVar29;
      fVar31 = this->LPFZ[3];
      this->FMO[1] = (fVar1 + this->LPFZ[3]) * fVar29;
      this->FMO[2] = (fVar1 - fVar31) * fVar29;
      param_3 = param_3 + 1;
      pfVar10 = pfVar10 + 1;
      this->FMO[3] = ((float)((uint)fVar3 ^ uVar7) - fVar2) * fVar29;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  FAlignedBlockBuffer::RemoveSamples((this->DelayLine0).Ptr,param_2);
  FAlignedBlockBuffer::RemoveSamples((this->DelayLine1).Ptr,param_2);
  FAlignedBlockBuffer::RemoveSamples((this->DelayLine2).Ptr,param_2);
  FAlignedBlockBuffer::RemoveSamples((this->DelayLine3).Ptr,param_2);
  pFVar5 = (this->DelayLine0).Ptr;
  if (_Src_02 == (FScriptContainerElement *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != InSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0x8a,L"Null pointer");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((pFVar5->SampleCapacity < param_2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x57,L"Input buffer [%d] larger than capacity [%d]"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = pFVar5->SampleCapacity;
    iVar17 = param_2;
    if (iVar19 <= param_2) {
      iVar17 = iVar19;
    }
    pFVar5->WriteCount = pFVar5->WriteCount + iVar17;
    if ((iVar19 < pFVar5->WriteCount) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteCount <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x5e,L"Buffer overflow"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = pFVar5->SampleCapacity;
    iVar24 = pFVar5->WriteCount;
    if (iVar19 < iVar24) {
      pFVar5->WriteCount = iVar19;
      iVar17 = iVar17 + (iVar19 - iVar24);
    }
    iVar19 = iVar19 - pFVar5->WritePos;
    iVar24 = iVar19 - iVar17;
    if (iVar24 < 1) {
      if (0 < iVar19) {
        memcpy(pFVar5->WritePointer,_Src_02,(longlong)(iVar19 * 4));
      }
      pFVar5->WritePointer = pFVar5->InternalBuffer;
      pFVar5->WritePos = -iVar24;
      if (0 < -iVar24) {
        memcpy(pFVar5->InternalBuffer,_Src_02 + (longlong)iVar19 * 4,(longlong)(iVar24 * -4));
      }
      lVar15 = -(longlong)iVar24;
    }
    else {
      if (0 < iVar17) {
        memcpy(pFVar5->WritePointer,_Src_02,(longlong)(iVar17 * 4));
      }
      pFVar5->WritePos = pFVar5->WritePos + iVar17;
      lVar15 = (longlong)iVar17;
    }
    pFVar5->WritePointer = pFVar5->WritePointer + lVar15;
  }
  pFVar5 = (this->DelayLine1).Ptr;
  if (_Src_01 == (FScriptContainerElement *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != InSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0x8a,L"Null pointer");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((pFVar5->SampleCapacity < param_2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x57,L"Input buffer [%d] larger than capacity [%d]"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = pFVar5->SampleCapacity;
    iVar17 = param_2;
    if (iVar19 <= param_2) {
      iVar17 = iVar19;
    }
    pFVar5->WriteCount = pFVar5->WriteCount + iVar17;
    if ((iVar19 < pFVar5->WriteCount) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteCount <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x5e,L"Buffer overflow"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = pFVar5->SampleCapacity;
    iVar24 = pFVar5->WriteCount;
    if (iVar19 < iVar24) {
      pFVar5->WriteCount = iVar19;
      iVar17 = iVar17 + (iVar19 - iVar24);
    }
    iVar19 = iVar19 - pFVar5->WritePos;
    iVar24 = iVar19 - iVar17;
    if (iVar24 < 1) {
      if (0 < iVar19) {
        memcpy(pFVar5->WritePointer,_Src_01,(longlong)(iVar19 * 4));
      }
      pFVar5->WritePointer = pFVar5->InternalBuffer;
      pFVar5->WritePos = -iVar24;
      if (0 < -iVar24) {
        memcpy(pFVar5->InternalBuffer,_Src_01 + (longlong)iVar19 * 4,(longlong)(iVar24 * -4));
      }
      lVar15 = -(longlong)iVar24;
    }
    else {
      if (0 < iVar17) {
        memcpy(pFVar5->WritePointer,_Src_01,(longlong)(iVar17 * 4));
      }
      pFVar5->WritePos = pFVar5->WritePos + iVar17;
      lVar15 = (longlong)iVar17;
    }
    pFVar5->WritePointer = pFVar5->WritePointer + lVar15;
  }
  pFVar5 = (this->DelayLine2).Ptr;
  if (_Src == (FScriptContainerElement *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != InSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0x8a,L"Null pointer");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((pFVar5->SampleCapacity < param_2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x57,L"Input buffer [%d] larger than capacity [%d]"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = pFVar5->SampleCapacity;
    iVar17 = param_2;
    if (iVar19 <= param_2) {
      iVar17 = iVar19;
    }
    pFVar5->WriteCount = pFVar5->WriteCount + iVar17;
    if ((iVar19 < pFVar5->WriteCount) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteCount <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x5e,L"Buffer overflow"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = pFVar5->SampleCapacity;
    iVar24 = pFVar5->WriteCount;
    if (iVar19 < iVar24) {
      pFVar5->WriteCount = iVar19;
      iVar17 = iVar17 + (iVar19 - iVar24);
    }
    iVar19 = iVar19 - pFVar5->WritePos;
    iVar24 = iVar19 - iVar17;
    if (iVar24 < 1) {
      if (0 < iVar19) {
        memcpy(pFVar5->WritePointer,_Src,(longlong)(iVar19 * 4));
      }
      pFVar5->WritePointer = pFVar5->InternalBuffer;
      pFVar5->WritePos = -iVar24;
      if (0 < -iVar24) {
        memcpy(pFVar5->InternalBuffer,_Src + (longlong)iVar19 * 4,(longlong)(iVar24 * -4));
      }
      lVar15 = -(longlong)iVar24;
    }
    else {
      if (0 < iVar17) {
        memcpy(pFVar5->WritePointer,_Src,(longlong)(iVar17 * 4));
      }
      pFVar5->WritePos = pFVar5->WritePos + iVar17;
      lVar15 = (longlong)iVar17;
    }
    pFVar5->WritePointer = pFVar5->WritePointer + lVar15;
  }
  pFVar5 = (this->DelayLine3).Ptr;
  if (_Src_00 == (FScriptContainerElement *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != InSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0x8a,L"Null pointer");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((pFVar5->SampleCapacity < param_2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x57,L"Input buffer [%d] larger than capacity [%d]"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = pFVar5->SampleCapacity;
    if (iVar19 <= param_2) {
      param_2 = iVar19;
    }
    pFVar5->WriteCount = pFVar5->WriteCount + param_2;
    if ((iVar19 < pFVar5->WriteCount) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteCount <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x5e,L"Buffer overflow"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = pFVar5->SampleCapacity;
    iVar17 = pFVar5->WriteCount;
    if (iVar19 < iVar17) {
      pFVar5->WriteCount = iVar19;
      param_2 = param_2 + (iVar19 - iVar17);
    }
    iVar19 = iVar19 - pFVar5->WritePos;
    iVar17 = iVar19 - param_2;
    if (iVar17 < 1) {
      if (0 < iVar19) {
        memcpy(pFVar5->WritePointer,_Src_00,(longlong)(iVar19 * 4));
      }
      pFVar5->WritePointer = pFVar5->InternalBuffer;
      pFVar5->WritePos = -iVar17;
      if (0 < -iVar17) {
        memcpy(pFVar5->InternalBuffer,_Src_00 + (longlong)iVar19 * 4,(longlong)(iVar17 * -4));
      }
      lVar15 = -(longlong)iVar17;
    }
    else {
      if (0 < param_2) {
        memcpy(pFVar5->WritePointer,_Src_00,(longlong)(param_2 * 4));
      }
      pFVar5->WritePos = pFVar5->WritePos + param_2;
      lVar15 = (longlong)param_2;
    }
    pFVar5->WritePointer = pFVar5->WritePointer + lVar15;
  }
  return;
}

// SetCoefficients @ 1444e3230

void __thiscall
Audio::FFeedbackDelayNetwork::SetCoefficients(FFeedbackDelayNetwork *this,FFDNCoefficients *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = param_1->APFG[0];
  uVar1 = *(undefined8 *)(param_1->APFG + 1);
  (this->Coefficients).InputScale = param_1->InputScale;
  (this->Coefficients).APFG[0] = fVar2;
  *(undefined8 *)((this->Coefficients).APFG + 1) = uVar1;
  uVar1 = *(undefined8 *)(param_1->LPFA + 1);
  *(undefined8 *)((this->Coefficients).APFG + 3) = *(undefined8 *)(param_1->APFG + 3);
  *(undefined8 *)((this->Coefficients).LPFA + 1) = uVar1;
  uVar1 = *(undefined8 *)(param_1->LPFB + 1);
  *(undefined8 *)((this->Coefficients).LPFA + 3) = *(undefined8 *)(param_1->LPFA + 3);
  *(undefined8 *)((this->Coefficients).LPFB + 1) = uVar1;
  *(undefined8 *)((this->Coefficients).LPFB + 3) = *(undefined8 *)(param_1->LPFB + 3);
  return;
}

