// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_AtomicImpactInfo @ 14b9d7190

FDS_AtomicImpactInfo * __thiscall
FDS_AtomicImpactInfo::FDS_AtomicImpactInfo(FDS_AtomicImpactInfo *this,FDS_AtomicImpactInfo *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  pTVar1 = &this->ImpactTime;
  this->ImpactType = param_1->ImpactType;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ImpactTime).ArrayMax;
  iVar4 = (param_1->ImpactTime).ArrayNum;
  pFVar5 = (param_1->ImpactTime).AllocatorInstance.Data;
  (this->ImpactTime).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &this->MulDamage;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MulDamage).ArrayMax;
  iVar4 = (param_1->MulDamage).ArrayNum;
  pFVar5 = (param_1->MulDamage).AllocatorInstance.Data;
  (this->MulDamage).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  this->SkillAttackID = param_1->SkillAttackID;
  this->AttackAngle = param_1->AttackAngle;
  this->AttackDistanceMin = param_1->AttackDistanceMin;
  this->AttackDistanceMax = param_1->AttackDistanceMax;
  this->AttackWidth = param_1->AttackWidth;
  this->AttackHeight = param_1->AttackHeight;
  dVar6 = (param_1->LocationOffset).field0_0x0._s_0.Y;
  (this->LocationOffset).field0_0x0._s_0.X = (param_1->LocationOffset).field0_0x0._s_0.X;
  (this->LocationOffset).field0_0x0._s_0.Y = dVar6;
  (this->LocationOffset).field0_0x0._s_0.Z = (param_1->LocationOffset).field0_0x0._s_0.Z;
  this->RotationOffset = param_1->RotationOffset;
  this->HitEffect = param_1->HitEffect;
  this->HitEffectScale = param_1->HitEffectScale;
  this->HitEffectRotation = param_1->HitEffectRotation;
  this->CriticalHitEffect = param_1->CriticalHitEffect;
  this->CriticalHitEffectScale = param_1->CriticalHitEffectScale;
  this->HitEffectSound = param_1->HitEffectSound;
  this->AbnormalActionID = param_1->AbnormalActionID;
  return this;
}

