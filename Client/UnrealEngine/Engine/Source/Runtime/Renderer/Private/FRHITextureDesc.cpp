// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FRHITextureDesc @ 14472e3b0

FRHITextureDesc * __thiscall
FRHITextureDesc::FRHITextureDesc(FRHITextureDesc *this,FRHITextureDesc *param_1)

{
  undefined8 uVar1;
  
  this->Flags = None;
  *(undefined8 *)&this->ClearValue = 1;
  *(undefined8 *)((longlong)&(this->ClearValue).Value + 4) = 0;
  (this->ClearValue).Value.Color[3] = 0.0;
  (this->GPUMask).GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  this->ExtData = 0;
  (this->Extent).field0_0x0._s_0.X = 1;
  (this->Extent).field0_0x0._s_0.Y = 1;
  this->NumMips = '\x01';
  this->NumSamples = '\x01';
  this->Dimension = Texture2D;
  this->Format = PF_Unknown;
  this->Depth = 1;
  this->ArraySize = 1;
  this->UAVFormat = PF_Unknown;
  this->FastVRAMPercentage = 0xff;
  (this->AliasableFormats).AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  (this->AliasableFormats).ArrayNum = 0;
  (this->AliasableFormats).ArrayMax = 1;
  this->Dimension = param_1->Dimension;
  this->Flags = param_1->Flags;
  this->Format = param_1->Format;
  this->UAVFormat = param_1->UAVFormat;
  (this->Extent).field0_0x0 = (param_1->Extent).field0_0x0;
  this->Depth = param_1->Depth;
  this->ArraySize = param_1->ArraySize;
  this->NumMips = param_1->NumMips;
  this->NumSamples = param_1->NumSamples;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ClearValue).Value + 4);
  *(undefined8 *)&this->ClearValue = *(undefined8 *)&param_1->ClearValue;
  *(undefined8 *)((longlong)&(this->ClearValue).Value + 4) = uVar1;
  (this->ClearValue).Value.Color[3] = (param_1->ClearValue).Value.Color[3];
  this->ExtData = param_1->ExtData;
  this->FastVRAMPercentage = param_1->FastVRAMPercentage;
  (this->GPUMask).GPUMask = (param_1->GPUMask).GPUMask;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->AliasableFormats,&param_1->AliasableFormats);
  return this;
}

// GetSize @ 144c46950

TIntVector3<int> * __thiscall
FRHITextureDesc::GetSize(FRHITextureDesc *this,TIntVector3<int> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Extent).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->Extent).field0_0x0._s_0.Y;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (uint)this->Depth;
  return __return_storage_ptr__;
}

// operator== @ 1454d7e30

bool __thiscall FRHITextureDesc::operator==(FRHITextureDesc *this,FRHITextureDesc *param_1)

{
  EClearBinding EVar1;
  int iVar2;
  ForElementType<EPixelFormat> _Buf1;
  ForElementType<EPixelFormat> _Buf2;
  bool bVar3;
  
  if (this->Dimension != param_1->Dimension) {
    return false;
  }
  if (this->Flags != param_1->Flags) {
    return false;
  }
  if (this->Format != param_1->Format) {
    return false;
  }
  if (this->UAVFormat != param_1->UAVFormat) {
    return false;
  }
  if ((this->Extent).field0_0x0._s_0.X != (param_1->Extent).field0_0x0._s_0.X) {
    return false;
  }
  if ((this->Extent).field0_0x0._s_0.Y != (param_1->Extent).field0_0x0._s_0.Y) {
    return false;
  }
  if (this->Depth != param_1->Depth) {
    return false;
  }
  if (this->ArraySize != param_1->ArraySize) {
    return false;
  }
  if (this->NumMips != param_1->NumMips) {
    return false;
  }
  if (this->NumSamples != param_1->NumSamples) {
    return false;
  }
  if (this->FastVRAMPercentage != param_1->FastVRAMPercentage) {
    return false;
  }
  EVar1 = (this->ClearValue).ColorBinding;
  if (EVar1 != (param_1->ClearValue).ColorBinding) {
    return false;
  }
  if (EVar1 == EColorBound) {
    if ((param_1->ClearValue).Value.Color[0] != (this->ClearValue).Value.Color[0]) {
      return false;
    }
    if ((param_1->ClearValue).Value.Color[1] != (this->ClearValue).Value.Color[1]) {
      return false;
    }
    if ((param_1->ClearValue).Value.Color[2] != (this->ClearValue).Value.Color[2]) {
      return false;
    }
    bVar3 = (param_1->ClearValue).Value.Color[3] == (this->ClearValue).Value.Color[3];
  }
  else {
    if (EVar1 != EDepthStencilBound) goto LAB_1454d7f1b;
    if ((param_1->ClearValue).Value.Color[0] != (this->ClearValue).Value.Color[0]) {
      return false;
    }
    bVar3 = (this->ClearValue).Value.DSValue.Stencil == (param_1->ClearValue).Value.DSValue.Stencil;
  }
  if (!bVar3) {
    return false;
  }
LAB_1454d7f1b:
  if ((this->ExtData == param_1->ExtData) && ((this->GPUMask).GPUMask == (param_1->GPUMask).GPUMask)
     ) {
    iVar2 = (this->AliasableFormats).ArrayNum;
    if (iVar2 == (param_1->AliasableFormats).ArrayNum) {
      _Buf2 = (param_1->AliasableFormats).AllocatorInstance.SecondaryData;
      _Buf1 = (this->AliasableFormats).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Buf2 == (ForElementType<EPixelFormat>)0x0) {
          _Buf2 = (ForElementType<EPixelFormat>)&param_1->AliasableFormats;
        }
        if (_Buf1 == (ForElementType<EPixelFormat>)0x0) {
          _Buf1 = (ForElementType<EPixelFormat>)&this->AliasableFormats;
        }
        iVar2 = memcmp((void *)_Buf1,(void *)_Buf2,(longlong)iVar2);
        if (iVar2 != 0) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

