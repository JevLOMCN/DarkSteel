// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FSoundModulationDestinationSettings @ 14761de90

FSoundModulationDestinationSettings * __thiscall
FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
          (FSoundModulationDestinationSettings *this,FSoundModulationDestinationSettings *param_1)

{
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar1;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  pTVar1 = &this->Modulators;
  this->Value = param_1->Value;
  *(undefined8 *)&pTVar1->Elements = 0;
  pTVar2 = &param_1->Modulators;
  *(undefined8 *)&(this->Modulators).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Modulators).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Modulators).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Modulators).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Modulators).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Modulators).Elements.field_0x34 = 0;
  (this->Modulators).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Modulators).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->Modulators).Elements.field_0x10;
    *(undefined4 *)&(this->Modulators).Elements.field_0x8 =
         *(undefined4 *)&(param_1->Modulators).Elements.field_0x8;
    _Src = &(param_1->Modulators).Elements.field_0x10;
    *(undefined4 *)&(this->Modulators).Elements.field_0xc =
         *(undefined4 *)&(param_1->Modulators).Elements.field_0xc;
    *(undefined8 *)&(param_1->Modulators).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Modulators).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->Modulators).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->Modulators).Elements.field_0x20 =
           *(undefined8 *)&(param_1->Modulators).Elements.field_0x20;
      *(undefined8 *)&(param_1->Modulators).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->Modulators).Elements.field_0x28 =
           *(undefined4 *)&(param_1->Modulators).Elements.field_0x28;
      *(undefined4 *)&(this->Modulators).Elements.field_0x2c =
           *(undefined4 *)&(param_1->Modulators).Elements.field_0x2c;
      *(undefined8 *)&(param_1->Modulators).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->Modulators).Elements.field_0x30 =
         *(undefined4 *)&(param_1->Modulators).Elements.field_0x30;
    *(undefined4 *)&(this->Modulators).Elements.field_0x34 =
         *(undefined4 *)&(param_1->Modulators).Elements.field_0x34;
    *(undefined4 *)&(param_1->Modulators).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Modulators).Elements.field_0x34 = 0;
  }
  if ((param_1->Modulators).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Modulators).Hash.InlineData =
         *(undefined4 *)(param_1->Modulators).Hash.InlineData;
  }
  FVar4 = (this->Modulators).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->Modulators).Hash.SecondaryData = (param_1->Modulators).Hash.SecondaryData;
  (param_1->Modulators).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Modulators).HashSize = (param_1->Modulators).HashSize;
  (param_1->Modulators).HashSize = 0;
  return this;
}

// StaticStruct @ 148675770

UScriptStruct * __cdecl FSoundModulationDestinationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundModulationDestinationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundModulationDestinationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings,
                         (UObject *)pUVar1,L"SoundModulationDestinationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSoundModulationDestinationSettings.OuterSingleton;
}

