// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// SyncNiagaraComponentLocation @ 14bb39830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FDS_AttachedEffectInfo::SyncNiagaraComponentLocation(FDS_AttachedEffectInfo *this)

{
  bool bVar1;
  UObject *pUVar2;
  USceneComponent *this_00;
  undefined1 auStack_c8 [32];
  TVector<double>_u_0 local_98;
  undefined1 local_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->NiagaraComponent,(void *)0x0);
  if (!bVar1) {
    bVar1 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->AttachComponent,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      (**(code **)(*(longlong *)pUVar2 + 0x520))(pUVar2,local_78);
      this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->NiagaraComponent).WeakPtr);
      local_98._s_0.X = local_58;
      local_98._s_0.Y = dStack_50;
      local_98._s_0.Z = local_48;
      USceneComponent::SetWorldLocation
                (this_00,(TVector<double> *)&local_98._s_0,false,(FHitResult *)0x0,None);
    }
  }
  return;
}

