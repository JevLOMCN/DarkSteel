// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b644bb0

UScriptStruct * __cdecl FDS_HistoryEventField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_HistoryEventField.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_HistoryEventField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_HistoryEventField,(UObject *)pUVar1,
                         L"DS_HistoryEventField");
  }
  return Z_Registration_Info_UScriptStruct_FDS_HistoryEventField.OuterSingleton;
}

// FDS_HistoryEventField @ 14b646c20

FDS_HistoryEventField * __thiscall
FDS_HistoryEventField::FDS_HistoryEventField(FDS_HistoryEventField *this)

{
  (this->HistoryData).DataType = None;
  *(undefined8 *)&(this->HistoryData).HistoryObjectMap = 0;
  *(undefined8 *)&(this->HistoryData).HistoryObjectMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryObjectMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryObjectMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryObjectMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryData).HistoryObjectMap.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryObjectMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryData).HistoryObjectMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryObjectMap.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryStringMap = 0;
  *(undefined8 *)&(this->HistoryData).HistoryStringMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryStringMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryStringMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryStringMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryData).HistoryStringMap.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryStringMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryData).HistoryStringMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryStringMap.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryInt32Map = 0;
  *(undefined8 *)&(this->HistoryData).HistoryInt32Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryInt32Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryInt32Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryInt32Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryData).HistoryInt32Map.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryInt32Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryData).HistoryInt32Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryInt32Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryUInt32Map = 0;
  *(undefined8 *)&(this->HistoryData).HistoryUInt32Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryUInt32Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryUInt32Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryUInt32Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryData).HistoryUInt32Map.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryUInt32Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryData).HistoryUInt32Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryUInt32Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryInt64Map = 0;
  *(undefined8 *)&(this->HistoryData).HistoryInt64Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryInt64Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryInt64Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryInt64Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryData).HistoryInt64Map.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryInt64Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryData).HistoryInt64Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryInt64Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryUInt64Map = 0;
  *(undefined8 *)&(this->HistoryData).HistoryUInt64Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryUInt64Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryUInt64Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryUInt64Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryData).HistoryUInt64Map.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryUInt64Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryData).HistoryUInt64Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryUInt64Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryFloatMap = 0;
  *(undefined8 *)&(this->HistoryData).HistoryFloatMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryFloatMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryFloatMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryFloatMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryData).HistoryFloatMap.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryFloatMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryData).HistoryFloatMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryFloatMap.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryBoolMap = 0;
  *(undefined8 *)&(this->HistoryData).HistoryBoolMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryData).HistoryBoolMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryBoolMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryBoolMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryData).HistoryBoolMap.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryBoolMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryData).HistoryBoolMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryData).HistoryBoolMap.field_0x48 = 0;
  return this;
}

