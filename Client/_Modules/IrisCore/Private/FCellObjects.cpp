// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// FCellObjects @ 1442287a0

FCellObjects * __thiscall
UNetObjectGridFilter::FCellObjects::FCellObjects(FCellObjects *this,FCellObjects *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  undefined1 *_Src;
  
  *(undefined8 *)&(this->ObjectIndices).Elements = 0;
  *(undefined8 *)&(this->ObjectIndices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ObjectIndices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ObjectIndices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ObjectIndices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectIndices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectIndices).Elements.field_0x34 = 0;
  (this->ObjectIndices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ObjectIndices).HashSize = 0;
  if (this != param_1) {
    *(undefined8 *)&(this->ObjectIndices).Elements =
         *(undefined8 *)&(param_1->ObjectIndices).Elements;
    *(undefined8 *)&(param_1->ObjectIndices).Elements = 0;
    *(undefined4 *)&(this->ObjectIndices).Elements.field_0x8 =
         *(undefined4 *)&(param_1->ObjectIndices).Elements.field_0x8;
    *(undefined4 *)&(this->ObjectIndices).Elements.field_0xc =
         *(undefined4 *)&(param_1->ObjectIndices).Elements.field_0xc;
    *(undefined8 *)&(param_1->ObjectIndices).Elements.field_0x8 = 0;
    _Src = &(param_1->ObjectIndices).Elements.field_0x10;
    _Dst = &(this->ObjectIndices).Elements.field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->ObjectIndices).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->ObjectIndices).Elements.field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->ObjectIndices).Elements.field_0x20 =
           *(undefined8 *)&(param_1->ObjectIndices).Elements.field_0x20;
      *(undefined8 *)&(param_1->ObjectIndices).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->ObjectIndices).Elements.field_0x28 =
           *(undefined4 *)&(param_1->ObjectIndices).Elements.field_0x28;
      *(undefined4 *)&(this->ObjectIndices).Elements.field_0x2c =
           *(undefined4 *)&(param_1->ObjectIndices).Elements.field_0x2c;
      *(undefined8 *)&(param_1->ObjectIndices).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->ObjectIndices).Elements.field_0x30 =
         *(undefined4 *)&(param_1->ObjectIndices).Elements.field_0x30;
    *(undefined4 *)&(this->ObjectIndices).Elements.field_0x34 =
         *(undefined4 *)&(param_1->ObjectIndices).Elements.field_0x34;
    *(undefined4 *)&(param_1->ObjectIndices).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ObjectIndices).Elements.field_0x34 = 0;
  }
  if ((param_1->ObjectIndices).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->ObjectIndices).Hash.InlineData =
         *(undefined4 *)(param_1->ObjectIndices).Hash.InlineData;
  }
  FVar2 = (this->ObjectIndices).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->ObjectIndices).Hash.SecondaryData = (param_1->ObjectIndices).Hash.SecondaryData;
  (param_1->ObjectIndices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ObjectIndices).HashSize = (param_1->ObjectIndices).HashSize;
  (param_1->ObjectIndices).HashSize = 0;
  return this;
}

