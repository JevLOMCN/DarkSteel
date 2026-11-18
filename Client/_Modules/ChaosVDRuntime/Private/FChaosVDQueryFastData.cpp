// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c8e80

UScriptStruct * __cdecl FChaosVDQueryFastData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryFastData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDQueryFastData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDQueryFastData,(UObject *)pUVar1,
                         L"ChaosVDQueryFastData");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDQueryFastData.OuterSingleton;
}

// Serialize @ 1436e01c0

bool __thiscall FChaosVDQueryFastData::Serialize(FChaosVDQueryFastData *this,FArchive *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  byte bVar3;
  byte local_res8 [8];
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->Dir);
    UE::Math::operator<<(param_1,&this->InvDir);
    ::operator<<(param_1,&this->CurrentLength);
    UE::Math::operator<<(param_1,&this->InvDir);
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      bVar3 = this->bParallel0;
      local_res8[0] = bVar3 != 0;
      if (this->bParallel1 != '\0') {
        bVar3 = bVar3 | 2;
        local_res8[0] = bVar3;
      }
      if (this->bParallel2 != '\0') {
        local_res8[0] = bVar3 | 4;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((ulonglong)plVar2[1] < *plVar2 + 1U) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        *plVar2 = *plVar2 + 1;
      }
    }
    else {
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
        this->bParallel0 = '\0';
        this->bParallel2 = '\0';
        this->bParallel1 = '\0';
        this->field_0x50 = this->field_0x50 | local_res8[0] & 7;
      }
      else {
        bVar3 = *(byte *)*plVar2;
        *plVar2 = *plVar2 + 1;
        this->bParallel0 = '\0';
        this->bParallel2 = '\0';
        this->bParallel1 = '\0';
        this->field_0x50 = this->field_0x50 | bVar3 & 7;
      }
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

