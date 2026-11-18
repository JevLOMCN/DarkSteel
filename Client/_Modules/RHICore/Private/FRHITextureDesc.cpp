// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// operator= @ 1446cfb30

FRHITextureDesc * __thiscall
FRHITextureDesc::operator=(FRHITextureDesc *this,FRHITextureDesc *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ForElementType<EPixelFormat> _Dst;
  ForElementType<EPixelFormat> _Src;
  
  this->Dimension = param_1->Dimension;
  this->Flags = param_1->Flags;
  this->Format = param_1->Format;
  this->UAVFormat = param_1->UAVFormat;
  (this->Extent).field0_0x0 = (param_1->Extent).field0_0x0;
  this->Depth = param_1->Depth;
  this->ArraySize = param_1->ArraySize;
  this->NumMips = param_1->NumMips;
  this->NumSamples = param_1->NumSamples;
  uVar4 = *(undefined8 *)((longlong)&(param_1->ClearValue).Value + 4);
  *(undefined8 *)&this->ClearValue = *(undefined8 *)&param_1->ClearValue;
  *(undefined8 *)((longlong)&(this->ClearValue).Value + 4) = uVar4;
  (this->ClearValue).Value.Color[3] = (param_1->ClearValue).Value.Color[3];
  this->ExtData = param_1->ExtData;
  this->FastVRAMPercentage = param_1->FastVRAMPercentage;
  (this->GPUMask).GPUMask = (param_1->GPUMask).GPUMask;
  if (this != param_1) {
    iVar2 = (this->AliasableFormats).ArrayMax;
    piVar1 = &(this->AliasableFormats).ArrayMax;
    _Src = (param_1->AliasableFormats).AllocatorInstance.SecondaryData;
    iVar3 = (param_1->AliasableFormats).ArrayNum;
    if (_Src == (ForElementType<EPixelFormat>)0x0) {
      _Src = (ForElementType<EPixelFormat>)&param_1->AliasableFormats;
    }
    (this->AliasableFormats).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                (1,1,iVar3,iVar2,&(this->AliasableFormats).AllocatorInstance,iVar3,piVar1);
      _Dst = (this->AliasableFormats).AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<EPixelFormat>)0x0) {
          _Dst = (ForElementType<EPixelFormat>)&this->AliasableFormats;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3);
      }
    }
  }
  return this;
}

