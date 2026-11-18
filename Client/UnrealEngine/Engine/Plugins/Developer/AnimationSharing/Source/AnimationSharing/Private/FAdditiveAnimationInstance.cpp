// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 8

// FAdditiveAnimationInstance @ 14e2ab910

FAdditiveAnimationInstance * __thiscall
FAdditiveAnimationInstance::FAdditiveAnimationInstance(FAdditiveAnimationInstance *this)

{
  this->SkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  this->AdditiveInstance = (UAnimSharingAdditiveInstance *)0x0;
  this->AdditiveAnimationSequence = (UAnimSequence *)0x0;
  this->BaseComponent = (USkeletalMeshComponent *)0x0;
  this->bLoopingState = false;
  return this;
}

// GetBaseComponent @ 14e2af930

USkeletalMeshComponent * __thiscall
FAdditiveAnimationInstance::GetBaseComponent(FAdditiveAnimationInstance *this)

{
  return this->BaseComponent;
}

// GetComponent @ 14e2af950

USkeletalMeshComponent * __thiscall
FAdditiveAnimationInstance::GetComponent(FAdditiveAnimationInstance *this)

{
  return this->SkeletalMeshComponent;
}

// Initialise @ 14e2b0930

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAdditiveAnimationInstance::Initialise
          (FAdditiveAnimationInstance *this,USkeletalMeshComponent *param_1,UClass *param_2)

{
  int iVar1;
  UAnimSharingAdditiveInstance *pUVar2;
  UClass *pUVar3;
  
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  this->SkeletalMeshComponent = param_1;
  if (param_2 == (UClass *)0x0) goto LAB_14e2b099e;
  (**(code **)(param_1->_padding_ + 0xc70))(param_1,param_2);
  pUVar2 = (UAnimSharingAdditiveInstance *)
           USkeletalMeshComponent::GetAnimInstance(this->SkeletalMeshComponent);
  if (pUVar2 == (UAnimSharingAdditiveInstance *)0x0) {
LAB_14e2b0993:
    pUVar2 = (UAnimSharingAdditiveInstance *)0x0;
  }
  else {
    pUVar3 = UAnimSharingAdditiveInstance::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_14e2b0993;
  }
  this->AdditiveInstance = pUVar2;
LAB_14e2b099e:
  (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x420))(this->SkeletalMeshComponent,0);
  USkinnedMeshComponent::SetForcedLOD((USkinnedMeshComponent *)this->SkeletalMeshComponent,1);
  *(undefined1 *)((longlong)&this->SkeletalMeshComponent->_padding_ + 4) = 0;
  return;
}

// Setup @ 14e2b5350

void __thiscall
FAdditiveAnimationInstance::Setup
          (FAdditiveAnimationInstance *this,USkeletalMeshComponent *param_1,UAnimSequence *param_2)

{
  UAnimSharingAdditiveInstance *pUVar1;
  USkeletalMeshComponent *local_res8;
  
  (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x420))(this->SkeletalMeshComponent,1);
  pUVar1 = this->AdditiveInstance;
  if (pUVar1 != (UAnimSharingAdditiveInstance *)0x0) {
    this->BaseComponent = param_1;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(pUVar1->BaseComponent).WeakPtr,(FObjectPtr)&local_res8);
    pUVar1 = this->AdditiveInstance;
    this->AdditiveAnimationSequence = param_2;
    local_res8 = (USkeletalMeshComponent *)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAnimSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&(pUVar1->AdditiveAnimation).WeakPtr,(FObjectPtr)&local_res8);
    this->AdditiveInstance->Alpha = 1.0;
    this->bLoopingState = true;
    this->AdditiveInstance->bStateBool = true;
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x4c0))
              (this->SkeletalMeshComponent,this->BaseComponent);
  }
  return;
}

// Start @ 14e2b90a0

void __thiscall FAdditiveAnimationInstance::Start(FAdditiveAnimationInstance *this)

{
  if (this->AdditiveInstance != (UAnimSharingAdditiveInstance *)0x0) {
    this->bLoopingState = false;
    this->AdditiveInstance->bStateBool = false;
  }
  return;
}

// Stop @ 14e2b91c0

void __thiscall FAdditiveAnimationInstance::Stop(FAdditiveAnimationInstance *this)

{
  if (this->AdditiveInstance != (UAnimSharingAdditiveInstance *)0x0) {
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x420))(this->SkeletalMeshComponent,0);
                    /* WARNING: Could not recover jumptable at 0x00014e2b91ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x4d0))
              (this->SkeletalMeshComponent,this->BaseComponent);
    return;
  }
  return;
}

// UpdateBaseComponent @ 14e2be3a0

void __thiscall
FAdditiveAnimationInstance::UpdateBaseComponent
          (FAdditiveAnimationInstance *this,USkeletalMeshComponent *param_1)

{
  UAnimSharingAdditiveInstance *pUVar1;
  USkeletalMeshComponent *local_res8;
  
  if (this->AdditiveInstance != (UAnimSharingAdditiveInstance *)0x0) {
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x4d0))
              (this->SkeletalMeshComponent,this->BaseComponent);
    pUVar1 = this->AdditiveInstance;
    this->BaseComponent = param_1;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(pUVar1->BaseComponent).WeakPtr,(FObjectPtr)&local_res8);
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x4c0))
              (this->SkeletalMeshComponent,this->BaseComponent);
  }
  return;
}

