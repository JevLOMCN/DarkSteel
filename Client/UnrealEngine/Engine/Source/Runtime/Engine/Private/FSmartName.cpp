// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147588aa0

UScriptStruct * __cdecl FSmartName::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSmartName.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSmartName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSmartName,(UObject *)pUVar1,L"SmartName");
  }
  return Z_Registration_Info_UScriptStruct_FSmartName.OuterSingleton;
}

// Serialize @ 1475f9bd0

bool __thiscall FSmartName::Serialize(FSmartName *this,FArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  ushort local_res8 [4];
  FGuid local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimPhysObjectVersion::GUID);
  if (iVar2 < 5) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimPhysObjectVersion::GUID);
  if (iVar2 < 10) {
    local_18.A = 0;
    local_18.B = 0;
    local_18.C = 0;
    local_18.D = 0;
    ::operator<<(param_1,&local_18);
  }
  return true;
}

