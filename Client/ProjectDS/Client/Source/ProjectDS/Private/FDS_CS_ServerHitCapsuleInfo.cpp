// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b4fe100

UScriptStruct * __cdecl FDS_CS_ServerHitCapsuleInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CS_ServerHitCapsuleInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CS_ServerHitCapsuleInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CS_ServerHitCapsuleInfo,(UObject *)pUVar1,
                         L"DS_CS_ServerHitCapsuleInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CS_ServerHitCapsuleInfo.OuterSingleton;
}

// InitDefaultVariables @ 14bc48060

void __thiscall FDS_CS_ServerHitCapsuleInfo::InitDefaultVariables(FDS_CS_ServerHitCapsuleInfo *this)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (this->LocationOffset).field0_0x0._s_0.X;
  dVar4 = (this->LocationOffset).field0_0x0._s_0.Y;
  this->Def_bIsActivated = this->bIsActivated;
  dVar1 = (this->LocationOffset).field0_0x0._s_0.Z;
  this->Def_HalfHeight = this->HalfHeight;
  fVar2 = this->Radius;
  (this->Def_LocationOffset).field0_0x0._s_0.X = dVar3;
  (this->Def_LocationOffset).field0_0x0._s_0.Y = dVar4;
  this->Def_Radius = fVar2;
  (this->Def_LocationOffset).field0_0x0._s_0.Z = dVar1;
  return;
}

// ResetVariables @ 14bc5b960

void __thiscall FDS_CS_ServerHitCapsuleInfo::ResetVariables(FDS_CS_ServerHitCapsuleInfo *this)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (this->Def_LocationOffset).field0_0x0._s_0.X;
  dVar4 = (this->Def_LocationOffset).field0_0x0._s_0.Y;
  this->bIsActivated = this->Def_bIsActivated;
  dVar1 = (this->Def_LocationOffset).field0_0x0._s_0.Z;
  this->HalfHeight = this->Def_HalfHeight;
  fVar2 = this->Def_Radius;
  (this->LocationOffset).field0_0x0._s_0.X = dVar3;
  (this->LocationOffset).field0_0x0._s_0.Y = dVar4;
  this->Radius = fVar2;
  (this->LocationOffset).field0_0x0._s_0.Z = dVar1;
  return;
}

