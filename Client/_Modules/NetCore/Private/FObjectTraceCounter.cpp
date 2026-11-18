// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// FObjectTraceCounter @ 1441d1f50

FObjectTraceCounter * __thiscall
FNetTraceInternal::FObjectTraceCounter::FObjectTraceCounter
          (FObjectTraceCounter *this,FObjectTraceCounter *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  undefined1 *_Src;
  
  *(undefined8 *)&(this->ObjectsTraced).Elements = 0;
  *(undefined8 *)&(this->ObjectsTraced).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ObjectsTraced).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ObjectsTraced).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ObjectsTraced).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectsTraced).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectsTraced).Elements.field_0x34 = 0;
  (this->ObjectsTraced).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ObjectsTraced).HashSize = 0;
  if (this != param_1) {
    *(undefined8 *)&(this->ObjectsTraced).Elements =
         *(undefined8 *)&(param_1->ObjectsTraced).Elements;
    *(undefined8 *)&(param_1->ObjectsTraced).Elements = 0;
    *(undefined4 *)&(this->ObjectsTraced).Elements.field_0x8 =
         *(undefined4 *)&(param_1->ObjectsTraced).Elements.field_0x8;
    *(undefined4 *)&(this->ObjectsTraced).Elements.field_0xc =
         *(undefined4 *)&(param_1->ObjectsTraced).Elements.field_0xc;
    *(undefined8 *)&(param_1->ObjectsTraced).Elements.field_0x8 = 0;
    _Src = &(param_1->ObjectsTraced).Elements.field_0x10;
    _Dst = &(this->ObjectsTraced).Elements.field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->ObjectsTraced).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->ObjectsTraced).Elements.field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->ObjectsTraced).Elements.field_0x20 =
           *(undefined8 *)&(param_1->ObjectsTraced).Elements.field_0x20;
      *(undefined8 *)&(param_1->ObjectsTraced).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->ObjectsTraced).Elements.field_0x28 =
           *(undefined4 *)&(param_1->ObjectsTraced).Elements.field_0x28;
      *(undefined4 *)&(this->ObjectsTraced).Elements.field_0x2c =
           *(undefined4 *)&(param_1->ObjectsTraced).Elements.field_0x2c;
      *(undefined8 *)&(param_1->ObjectsTraced).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->ObjectsTraced).Elements.field_0x30 =
         *(undefined4 *)&(param_1->ObjectsTraced).Elements.field_0x30;
    *(undefined4 *)&(this->ObjectsTraced).Elements.field_0x34 =
         *(undefined4 *)&(param_1->ObjectsTraced).Elements.field_0x34;
    *(undefined4 *)&(param_1->ObjectsTraced).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ObjectsTraced).Elements.field_0x34 = 0;
  }
  if ((param_1->ObjectsTraced).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->ObjectsTraced).Hash.InlineData =
         *(undefined4 *)(param_1->ObjectsTraced).Hash.InlineData;
  }
  FVar2 = (this->ObjectsTraced).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->ObjectsTraced).Hash.SecondaryData = (param_1->ObjectsTraced).Hash.SecondaryData;
  (param_1->ObjectsTraced).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ObjectsTraced).HashSize = (param_1->ObjectsTraced).HashSize;
  (param_1->ObjectsTraced).HashSize = 0;
  return this;
}

