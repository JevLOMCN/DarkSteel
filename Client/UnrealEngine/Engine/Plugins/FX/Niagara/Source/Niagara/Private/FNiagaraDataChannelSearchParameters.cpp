// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 149077fc0

UScriptStruct * __cdecl FNiagaraDataChannelSearchParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataChannelSearchParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDataChannelSearchParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters,
                         (UObject *)pUVar1,L"NiagaraDataChannelSearchParameters");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDataChannelSearchParameters.OuterSingleton;
}

// FNiagaraDataChannelSearchParameters @ 1490b1640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraDataChannelSearchParameters * __thiscall
FNiagaraDataChannelSearchParameters::FNiagaraDataChannelSearchParameters
          (FNiagaraDataChannelSearchParameters *this,FNiagaraDataChannelSearchParameters *param_1)

{
  undefined4 uVar1;
  USceneComponent *pUVar2;
  double dVar3;
  
  pUVar2 = (param_1->OwningComponent).field0_0x0.DebugPtr;
  (this->OwningComponent).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  dVar3 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar3;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  *(uint *)&this->field_0x20 =
       *(uint *)&this->field_0x20 ^ (this->bOverrideLocation ^ param_1->bOverrideLocation) & 1;
  return this;
}

// GetLocation @ 149106000

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FNiagaraDataChannelSearchParameters::GetLocation
          (FNiagaraDataChannelSearchParameters *this,TVector<double> *__return_storage_ptr__)

{
  USceneComponent *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  
  pUVar1 = (this->OwningComponent).field0_0x0.DebugPtr;
  if ((pUVar1 == (USceneComponent *)0x0) || (this->bOverrideLocation != 0)) {
    uVar2 = *(undefined4 *)&(this->Location).field0_0x0;
    uVar3 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 4);
    uVar4 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 8);
    uVar5 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 0xc);
    dVar6 = (this->Location).field0_0x0._s_0.Z;
  }
  else {
    uVar2 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
    uVar3 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uVar4 = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uVar5 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    dVar6 = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar3,uVar2);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar5,uVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
  return __return_storage_ptr__;
}

