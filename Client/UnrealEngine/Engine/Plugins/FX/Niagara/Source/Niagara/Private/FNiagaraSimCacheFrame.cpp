// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 149377570

UScriptStruct * __cdecl FNiagaraSimCacheFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheFrame.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSimCacheFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame,(UObject *)pUVar1,
                         L"NiagaraSimCacheFrame");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheFrame.OuterSingleton;
}

// FNiagaraSimCacheFrame @ 1493873e0

FNiagaraSimCacheFrame * __thiscall
FNiagaraSimCacheFrame::FNiagaraSimCacheFrame(FNiagaraSimCacheFrame *this)

{
  *&(this->LocalToWorld).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalToWorld).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalToWorld).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalToWorld).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalToWorld).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalToWorld).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&(this->LWCTile).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
  ;
  (this->LWCTile).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->SimulationAge = 0.0;
  this->SimulationTickCount = 0;
  FNiagaraSimCacheSystemFrame::FNiagaraSimCacheSystemFrame(&this->SystemData);
  (this->EmitterData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterData).ArrayNum = 0;
  (this->EmitterData).ArrayMax = 0;
  return this;
}

