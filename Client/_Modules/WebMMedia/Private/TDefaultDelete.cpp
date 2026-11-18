// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 2

// operator() @ 14f11a960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDefaultDelete<FWebMAudioDecoder>::operator()
          (TDefaultDelete<FWebMAudioDecoder> *this,FWebMAudioDecoder *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  FWebMMediaAudioSamplePool *pFVar5;
  FTaskGraphInterface *this_00;
  
  if (param_1 != (FWebMAudioDecoder *)0x0) {
    pFVar3 = (param_1->AudioDecodingTask).Reference;
    if ((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 == '\0')) {
      this_00 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes
                (this_00,&param_1->AudioDecodingTask,AnyNormalThreadNormalTask);
    }
    if (param_1->OpusDecoder != (OpusDecoder *)0x0) {
      opus_decoder_destroy(param_1->OpusDecoder);
    }
    pFVar4 = (param_1->DecodeBuffer).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar3 = (param_1->AudioDecodingTask).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    ::operator_delete((param_1->VorbisDecoder).Ptr,0x138);
    pFVar5 = (param_1->AudioSamplePool).Ptr;
    if (pFVar5 != (FWebMMediaAudioSamplePool *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&pFVar5->field_0x8);
      ::operator_delete(pFVar5,0x10);
    }
    ::operator_delete(param_1,0x48);
  }
  return;
}

// operator() @ 14f11aa30

void __thiscall
TDefaultDelete<FWebMVideoDecoder>::operator()
          (TDefaultDelete<FWebMVideoDecoder> *this,FWebMVideoDecoder *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FRHITexture *pFVar4;
  FWebMMediaTextureSamplePool *pFVar5;
  
  if (param_1 != (FWebMVideoDecoder *)0x0) {
    FWebMVideoDecoder::Close(param_1);
    pFVar3 = (param_1->VideoDecodingTask).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    pFVar4 = (param_1->DecodedV).Reference;
    if (pFVar4 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar4 = (param_1->DecodedU).Reference;
    if (pFVar4 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar4 = (param_1->DecodedY).Reference;
    if (pFVar4 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar5 = (param_1->VideoSamplePool).Ptr;
    if (pFVar5 != (FWebMMediaTextureSamplePool *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&pFVar5->field_0x8);
      ::operator_delete(pFVar5,0x10);
    }
    ::operator_delete(param_1,0x70);
  }
  return;
}

