// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 7

// FTransitionBlendInstance @ 14e2ab930

FTransitionBlendInstance * __thiscall
FTransitionBlendInstance::FTransitionBlendInstance(FTransitionBlendInstance *this)

{
  this->SkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  this->TransitionInstance = (UAnimSharingTransitionInstance *)0x0;
  this->FromComponent = (USkeletalMeshComponent *)0x0;
  this->ToComponent = (USkeletalMeshComponent *)0x0;
  this->BlendTime = 0.0;
  this->bBlendState = false;
  return this;
}

// GetComponent @ 14e2af960

USkeletalMeshComponent * __thiscall
FTransitionBlendInstance::GetComponent(FTransitionBlendInstance *this)

{
  return this->SkeletalMeshComponent;
}

// GetFromComponent @ 14e2afcd0

USkeletalMeshComponent * __thiscall
FTransitionBlendInstance::GetFromComponent(FTransitionBlendInstance *this)

{
  if (this->bBlendState == false) {
    return this->FromComponent;
  }
  return this->ToComponent;
}

// GetToComponent @ 14e2b08a0

USkeletalMeshComponent * __thiscall
FTransitionBlendInstance::GetToComponent(FTransitionBlendInstance *this)

{
  if (this->bBlendState == false) {
    return this->ToComponent;
  }
  return this->FromComponent;
}

// Initialise @ 14e2b09d0

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
FTransitionBlendInstance::Initialise
          (FTransitionBlendInstance *this,USkeletalMeshComponent *param_1,UClass *param_2)

{
  int iVar1;
  UAnimSharingTransitionInstance *pUVar2;
  UClass *pUVar3;
  
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  this->SkeletalMeshComponent = param_1;
  if (param_2 == (UClass *)0x0) goto LAB_14e2b0a3e;
  (**(code **)(param_1->_padding_ + 0xc70))(param_1);
  pUVar2 = (UAnimSharingTransitionInstance *)
           USkeletalMeshComponent::GetAnimInstance(this->SkeletalMeshComponent);
  if (pUVar2 == (UAnimSharingTransitionInstance *)0x0) {
LAB_14e2b0a33:
    pUVar2 = (UAnimSharingTransitionInstance *)0x0;
  }
  else {
    pUVar3 = UAnimSharingTransitionInstance::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_14e2b0a33;
  }
  this->TransitionInstance = pUVar2;
LAB_14e2b0a3e:
  (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x420))();
  USkinnedMeshComponent::SetForcedLOD((USkinnedMeshComponent *)this->SkeletalMeshComponent,0);
  *(undefined1 *)((longlong)&this->SkeletalMeshComponent->_padding_ + 4) = 0;
  return;
}

// Setup @ 14e2b5440

void __thiscall
FTransitionBlendInstance::Setup
          (FTransitionBlendInstance *this,USkeletalMeshComponent *param_1,
          USkeletalMeshComponent *param_2,float param_3)

{
  UAnimSharingTransitionInstance *pUVar1;
  bool bVar2;
  USkeletalMeshComponent *local_res8;
  
  (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x420))(this->SkeletalMeshComponent,1);
  pUVar1 = this->TransitionInstance;
  this->BlendTime = param_3;
  if (pUVar1 != (UAnimSharingTransitionInstance *)0x0) {
    if (pUVar1->bBlendBool == false) {
      this->FromComponent = param_2;
      local_res8 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&(pUVar1->FromComponent).WeakPtr,(FObjectPtr)&local_res8);
      pUVar1 = this->TransitionInstance;
      this->ToComponent = param_1;
      local_res8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
    }
    else {
      this->FromComponent = param_1;
      local_res8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&(pUVar1->FromComponent).WeakPtr,(FObjectPtr)&local_res8);
      pUVar1 = this->TransitionInstance;
      this->ToComponent = param_2;
      local_res8 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
    }
    FWeakObjectPtr::operator=(&(pUVar1->ToComponent).WeakPtr,(FObjectPtr)&local_res8);
    this->TransitionInstance->BlendTime = param_3;
    bVar2 = this->TransitionInstance->bBlendBool == false;
    this->bBlendState = bVar2;
    this->TransitionInstance->bBlendBool = bVar2;
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x4c0))
              (this->SkeletalMeshComponent,this->FromComponent);
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x4c0))
              (this->SkeletalMeshComponent,this->ToComponent);
  }
  return;
}

// Stop @ 14e2b9200

void __thiscall FTransitionBlendInstance::Stop(FTransitionBlendInstance *this)

{
  if (this->TransitionInstance != (UAnimSharingTransitionInstance *)0x0) {
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x420))(this->SkeletalMeshComponent,0);
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x4d0))
              (this->SkeletalMeshComponent,this->FromComponent);
                    /* WARNING: Could not recover jumptable at 0x00014e2b923d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->SkeletalMeshComponent->_padding_ + 0x4d0))
              (this->SkeletalMeshComponent,this->ToComponent);
    return;
  }
  return;
}

