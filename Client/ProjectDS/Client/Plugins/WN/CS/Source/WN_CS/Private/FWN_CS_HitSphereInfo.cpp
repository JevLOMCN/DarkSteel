// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 3

// StaticStruct @ 14a69c580

UScriptStruct * __cdecl FWN_CS_HitSphereInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_HitSphereInfo,(UObject *)pUVar1,
                         L"WN_CS_HitSphereInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereInfo.OuterSingleton;
}

// InitDefaultVariables @ 14a6a9060

void __thiscall FWN_CS_HitSphereInfo::InitDefaultVariables(FWN_CS_HitSphereInfo *this)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (this->LocationOffset).field0_0x0._s_0.X;
  dVar4 = (this->LocationOffset).field0_0x0._s_0.Y;
  this->Def_Socket = this->Socket;
  dVar1 = (this->LocationOffset).field0_0x0._s_0.Z;
  fVar2 = this->Radius;
  (this->Def_LocationOffset).field0_0x0._s_0.X = dVar3;
  (this->Def_LocationOffset).field0_0x0._s_0.Y = dVar4;
  this->Def_Radius = fVar2;
  (this->Def_LocationOffset).field0_0x0._s_0.Z = dVar1;
  return;
}

// ResetVariables @ 14a6aa190

void __thiscall FWN_CS_HitSphereInfo::ResetVariables(FWN_CS_HitSphereInfo *this)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (this->Def_LocationOffset).field0_0x0._s_0.X;
  dVar4 = (this->Def_LocationOffset).field0_0x0._s_0.Y;
  this->Socket = this->Def_Socket;
  dVar1 = (this->Def_LocationOffset).field0_0x0._s_0.Z;
  fVar2 = this->Def_Radius;
  (this->LocationOffset).field0_0x0._s_0.X = dVar3;
  (this->LocationOffset).field0_0x0._s_0.Y = dVar4;
  this->Radius = fVar2;
  (this->LocationOffset).field0_0x0._s_0.Z = dVar1;
  return;
}

