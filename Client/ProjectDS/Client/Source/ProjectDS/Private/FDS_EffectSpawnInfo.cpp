// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// FDS_EffectSpawnInfo @ 14b79a960

FDS_EffectSpawnInfo * __thiscall FDS_EffectSpawnInfo::FDS_EffectSpawnInfo(FDS_EffectSpawnInfo *this)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_res8;
  
  this->EffectID = 0;
  (this->EffectResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->EffectResourcePath).AssetPath.PackageName.Number = 0;
  (this->EffectResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->EffectResourcePath).AssetPath.AssetName.Number = 0;
  (this->EffectResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EffectResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->EffectResourcePath).SubPathString.Data.ArrayMax = 0;
  local_res8 = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)&local_res8);
  this->bIsFollowOwnerActorVisiblity = true;
  (this->AttachComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->AttachComponent).WeakPtr,(FObjectPtr)&local_res8);
  ::FName::FName(&this->SocketNameToAttach,"");
  this->bAutoStart = true;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bAutoDestroy = true;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Scale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Scale).field0_0x0._s_0.Y = (double)uVar1;
  (this->Scale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->AdditionalScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
  ;
  (this->AdditionalScale).field0_0x0._s_0.Y = (double)uVar1;
  (this->AdditionalScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
  ;
  (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->EffectSpawnCompleteDelegate = 0;
  *(undefined8 *)&(this->EffectSpawnCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->EffectSpawnCompleteDelegate).field_0x10 = 0;
  this->bIsLockRotation = false;
  return this;
}

// FDS_EffectSpawnInfo @ 14baec7b0

FDS_EffectSpawnInfo * __thiscall
FDS_EffectSpawnInfo::FDS_EffectSpawnInfo(FDS_EffectSpawnInfo *this,FDS_EffectSpawnInfo *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  
  this->EffectID = param_1->EffectID;
  FSoftObjectPath::FSoftObjectPath(&this->EffectResourcePath,&param_1->EffectResourcePath);
  (this->OwnerActor).WeakPtr = (param_1->OwnerActor).WeakPtr;
  this->bIsFollowOwnerActorVisiblity = param_1->bIsFollowOwnerActorVisiblity;
  (this->AttachComponent).WeakPtr = (param_1->AttachComponent).WeakPtr;
  this->SocketNameToAttach = param_1->SocketNameToAttach;
  this->bAutoStart = param_1->bAutoStart;
  this->bAutoDestroy = param_1->bAutoDestroy;
  dVar2 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar2;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar2 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  dVar2 = (param_1->Scale).field0_0x0._s_0.Y;
  (this->Scale).field0_0x0._s_0.X = (param_1->Scale).field0_0x0._s_0.X;
  (this->Scale).field0_0x0._s_0.Y = dVar2;
  (this->Scale).field0_0x0._s_0.Z = (param_1->Scale).field0_0x0._s_0.Z;
  dVar2 = (param_1->AdditionalScale).field0_0x0._s_0.Y;
  (this->AdditionalScale).field0_0x0._s_0.X = (param_1->AdditionalScale).field0_0x0._s_0.X;
  (this->AdditionalScale).field0_0x0._s_0.Y = dVar2;
  (this->AdditionalScale).field0_0x0._s_0.Z = (param_1->AdditionalScale).field0_0x0._s_0.Z;
  this->bIsLockRotation = param_1->bIsLockRotation;
  (this->AsyncLoadHandle).Object = (param_1->AsyncLoadHandle).Object;
  pTVar1 = (param_1->AsyncLoadHandle).SharedReferenceCount.ReferenceController;
  (this->AsyncLoadHandle).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
            (&this->EffectSpawnCompleteDelegate,&param_1->EffectSpawnCompleteDelegate);
  return this;
}

// ~FDS_EffectSpawnInfo @ 14baee000

void __thiscall FDS_EffectSpawnInfo::~FDS_EffectSpawnInfo(FDS_EffectSpawnInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EffectSpawnCompleteDelegate);
  pvVar1 = *(void **)&(this->EffectSpawnCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EffectSpawnCompleteDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->EffectResourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

