// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// FDS_ProjectileInfo @ 14baed060

FDS_ProjectileInfo * __thiscall
FDS_ProjectileInfo::FDS_ProjectileInfo
          (FDS_ProjectileInfo *this,FDS_ProjectileSkillAttackInfo *param_1)

{
  undefined8 local_res8;
  
  this->ParentSkillAttackInfo = (FDS_ProjectileSkillAttackInfo *)0x0;
  this->ProjectileState = TracingTarget;
  *&(this->EffectTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_res8 = 0;
  *&(this->EffectTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->EffectTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->EffectTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->EffectTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->EffectTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->bUseOnAfterTimeAttach = false;
  *&(this->OnAfterTimeRelativeTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->EffectComp).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->EffectComp).WeakPtr,(FObjectPtr)&local_res8);
  this->ParentSkillAttackInfo = param_1;
  return this;
}

// ClearProjectileInfo @ 14baf9560

void __thiscall FDS_ProjectileInfo::ClearProjectileInfo(FDS_ProjectileInfo *this)

{
  TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->ProjectileState = Finish;
  this_00 = &this->EffectComp;
  this->ParentSkillAttackInfo = (FDS_ProjectileSkillAttackInfo *)0x0;
  *&(this->EffectTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->EffectTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->EffectTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->EffectTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->EffectTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->EffectTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->bUseOnAfterTimeAttach = false;
  *&(this->OnAfterTimeRelativeTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OnAfterTimeRelativeTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x518))
              (pUVar2,&FDetachmentTransformRules::KeepRelativeTransform);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2,0);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this_00->WeakPtr = local_res8;
  return;
}

