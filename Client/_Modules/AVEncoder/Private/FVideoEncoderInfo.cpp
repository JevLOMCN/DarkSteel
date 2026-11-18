// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 1

// FVideoEncoderInfo @ 148d004f0

FVideoEncoderInfo * __thiscall
AVEncoder::FVideoEncoderInfo::FVideoEncoderInfo(FVideoEncoderInfo *this,FVideoEncoderInfo *param_1)

{
  TArray<AVEncoder::EVideoFrameFormat,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  
  pTVar1 = &this->SupportedInputFormats;
  this->ID = param_1->ID;
  this->MaxWidth = param_1->MaxWidth;
  this->MaxHeight = param_1->MaxHeight;
  this->CodecType = param_1->CodecType;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SupportedInputFormats).ArrayMax;
  iVar3 = (param_1->SupportedInputFormats).ArrayNum;
  _Src = (param_1->SupportedInputFormats).AllocatorInstance.Data;
  (this->SupportedInputFormats).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  uVar4 = (param_1->H264).MinLevel;
  (this->H264).SupportedProfiles = (param_1->H264).SupportedProfiles;
  (this->H264).MinLevel = uVar4;
  (this->H264).MaxLevel = (param_1->H264).MaxLevel;
  return this;
}

