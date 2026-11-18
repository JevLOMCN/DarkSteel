// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FSubsurfaceProfileStruct @ 147f2a5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSubsurfaceProfileStruct * __thiscall
FSubsurfaceProfileStruct::FSubsurfaceProfileStruct(FSubsurfaceProfileStruct *this)

{
  FLinearColor FVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this->ScatterRadius = 1.2;
  (this->SubsurfaceColor).field0_0x0._s_0.R = 0.48;
  (this->SubsurfaceColor).field0_0x0._s_0.G = 0.41;
  (this->SubsurfaceColor).field0_0x0._s_0.B = 0.28;
  (this->SubsurfaceColor).field0_0x0._s_0.A = 1.0;
  (this->FalloffColor).field0_0x0._s_0.R = 1.0;
  (this->FalloffColor).field0_0x0._s_0.G = 0.37;
  (this->FalloffColor).field0_0x0._s_0.B = 0.3;
  (this->FalloffColor).field0_0x0._s_0.A = 1.0;
  FVar1 = FLinearColor::White;
  this->ExtinctionScale = 1.0;
  this->ScatteringDistribution = 0.93;
  (this->BoundaryColorBleed).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->NormalScale = 0.08;
  this->IOR = 1.55;
  this->Roughness0 = 0.75;
  this->Roughness1 = 1.3;
  this->LobeMix = 0.85;
  this->bEnableBurley = false;
  this->bEnableMeanFreePath = false;
  (this->SurfaceAlbedo).field0_0x0._s_0.R = 0.91058;
  (this->SurfaceAlbedo).field0_0x0._s_0.G = 0.338275;
  (this->SurfaceAlbedo).field0_0x0._s_0.B = 0.2718;
  (this->SurfaceAlbedo).field0_0x0._s_0.A = 1.0;
  (this->MeanFreePathColor).field0_0x0._s_0.R = 1.0;
  (this->MeanFreePathColor).field0_0x0._s_0.G = 0.08896366;
  (this->MeanFreePathColor).field0_0x0._s_0.B = 0.0720951;
  (this->MeanFreePathColor).field0_0x0._s_0.A = 1.0;
  uVar3 = _UNK_15076b1f8;
  uVar2 = ___xmm_3f8000003f8000003f8000003f800000;
  *(undefined8 *)&(this->TransmissionTintColor).field0_0x0 = ___xmm_3f8000003f8000003f8000003f800000
  ;
  *(undefined8 *)((longlong)&(this->TransmissionTintColor).field0_0x0 + 8) = uVar3;
  this->MeanFreePathDistance = 2.6748002;
  *(undefined8 *)&(this->Tint).field0_0x0 = uVar2;
  *(undefined8 *)((longlong)&(this->Tint).field0_0x0 + 8) = uVar3;
  this->WorldUnitScale = 0.1;
  this->Implementation = SIH_AFIS;
  return this;
}

// StaticStruct @ 148430500

UScriptStruct * __cdecl FSubsurfaceProfileStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubsurfaceProfileStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSubsurfaceProfileStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct,(UObject *)pUVar1,
                         L"SubsurfaceProfileStruct");
  }
  return Z_Registration_Info_UScriptStruct_FSubsurfaceProfileStruct.OuterSingleton;
}

