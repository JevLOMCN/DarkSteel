// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 1

// FSeam @ 14db3b5c0

FSeam * __thiscall
UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam::FSeam(FSeam *this,FSeam *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  undefined1 *_Src;
  
  *(undefined8 *)&(this->Stitches).Elements = 0;
  *(undefined8 *)&(this->Stitches).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Stitches).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Stitches).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Stitches).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Stitches).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Stitches).Elements.field_0x34 = 0;
  (this->Stitches).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Stitches).HashSize = 0;
  if (this != param_1) {
    *(undefined8 *)&(this->Stitches).Elements = *(undefined8 *)&(param_1->Stitches).Elements;
    *(undefined8 *)&(param_1->Stitches).Elements = 0;
    *(undefined4 *)&(this->Stitches).Elements.field_0x8 =
         *(undefined4 *)&(param_1->Stitches).Elements.field_0x8;
    *(undefined4 *)&(this->Stitches).Elements.field_0xc =
         *(undefined4 *)&(param_1->Stitches).Elements.field_0xc;
    *(undefined8 *)&(param_1->Stitches).Elements.field_0x8 = 0;
    _Src = &(param_1->Stitches).Elements.field_0x10;
    _Dst = &(this->Stitches).Elements.field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Stitches).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Stitches).Elements.field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Stitches).Elements.field_0x20 =
           *(undefined8 *)&(param_1->Stitches).Elements.field_0x20;
      *(undefined8 *)&(param_1->Stitches).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->Stitches).Elements.field_0x28 =
           *(undefined4 *)&(param_1->Stitches).Elements.field_0x28;
      *(undefined4 *)&(this->Stitches).Elements.field_0x2c =
           *(undefined4 *)&(param_1->Stitches).Elements.field_0x2c;
      *(undefined8 *)&(param_1->Stitches).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->Stitches).Elements.field_0x30 =
         *(undefined4 *)&(param_1->Stitches).Elements.field_0x30;
    *(undefined4 *)&(this->Stitches).Elements.field_0x34 =
         *(undefined4 *)&(param_1->Stitches).Elements.field_0x34;
    *(undefined4 *)&(param_1->Stitches).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Stitches).Elements.field_0x34 = 0;
  }
  if ((param_1->Stitches).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Stitches).Hash.InlineData =
         *(undefined4 *)(param_1->Stitches).Hash.InlineData;
  }
  FVar2 = (this->Stitches).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Stitches).Hash.SecondaryData = (param_1->Stitches).Hash.SecondaryData;
  (param_1->Stitches).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Stitches).HashSize = (param_1->Stitches).HashSize;
  (param_1->Stitches).HashSize = 0;
  (this->Patterns).field0_0x0 = (param_1->Patterns).field0_0x0;
  return this;
}

