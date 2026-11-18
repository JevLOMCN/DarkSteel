// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e114ea0

UScriptStruct * __cdecl FOptimusDataInterfacePropertyOverrideInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo,
                         (UObject *)pUVar1,L"OptimusDataInterfacePropertyOverrideInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo.OuterSingleton;
}

// FOptimusDataInterfacePropertyOverrideInfo @ 14e151630

FOptimusDataInterfacePropertyOverrideInfo * __thiscall
FOptimusDataInterfacePropertyOverrideInfo::FOptimusDataInterfacePropertyOverrideInfo
          (FOptimusDataInterfacePropertyOverrideInfo *this,
          FOptimusDataInterfacePropertyOverrideInfo *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  undefined1 *_Src;
  
  *(undefined8 *)&this->PinNameToValueIdMap = 0;
  *(undefined8 *)&(this->PinNameToValueIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->PinNameToValueIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->PinNameToValueIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->PinNameToValueIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PinNameToValueIdMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PinNameToValueIdMap).field_0x34 = 0;
  *(undefined8 *)&(this->PinNameToValueIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->PinNameToValueIdMap).field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)&this->PinNameToValueIdMap = *(undefined8 *)&param_1->PinNameToValueIdMap;
    *(undefined8 *)&param_1->PinNameToValueIdMap = 0;
    *(undefined4 *)&(this->PinNameToValueIdMap).field_0x8 =
         *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x8;
    *(undefined4 *)&(this->PinNameToValueIdMap).field_0xc =
         *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0xc;
    *(undefined8 *)&(param_1->PinNameToValueIdMap).field_0x8 = 0;
    _Src = &(param_1->PinNameToValueIdMap).field_0x10;
    _Dst = &(this->PinNameToValueIdMap).field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->PinNameToValueIdMap).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->PinNameToValueIdMap).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->PinNameToValueIdMap).field_0x20 =
           *(undefined8 *)&(param_1->PinNameToValueIdMap).field_0x20;
      *(undefined8 *)&(param_1->PinNameToValueIdMap).field_0x20 = 0;
      *(undefined4 *)&(this->PinNameToValueIdMap).field_0x28 =
           *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x28;
      *(undefined4 *)&(this->PinNameToValueIdMap).field_0x2c =
           *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x2c;
      *(undefined8 *)&(param_1->PinNameToValueIdMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->PinNameToValueIdMap).field_0x30 =
         *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x30;
    *(undefined4 *)&(this->PinNameToValueIdMap).field_0x34 =
         *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x34;
    *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->PinNameToValueIdMap).field_0x40 == 0) {
    *(undefined4 *)&(this->PinNameToValueIdMap).field_0x38 =
         *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x38;
  }
  pvVar1 = *(void **)&(this->PinNameToValueIdMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined8 *)&(this->PinNameToValueIdMap).field_0x40 =
       *(undefined8 *)&(param_1->PinNameToValueIdMap).field_0x40;
  *(undefined8 *)&(param_1->PinNameToValueIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->PinNameToValueIdMap).field_0x48 =
       *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x48;
  *(undefined4 *)&(param_1->PinNameToValueIdMap).field_0x48 = 0;
  return this;
}

