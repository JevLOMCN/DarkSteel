// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// StaticStruct @ 14a89c960

UScriptStruct * __cdecl FPoseSearchInteractionAvailability::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailability.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailability.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchInteractionAvailability,
                         (UObject *)pUVar1,L"PoseSearchInteractionAvailability");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailability.OuterSingleton;
}

// FPoseSearchInteractionAvailability @ 14a8abdf0

FPoseSearchInteractionAvailability * __thiscall
FPoseSearchInteractionAvailability::FPoseSearchInteractionAvailability
          (FPoseSearchInteractionAvailability *this,FPoseSearchInteractionAvailability *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UPoseSearchDatabase *pUVar4;
  FScriptContainerElement *_Src;
  
  pUVar4 = (param_1->Database).field0_0x0.DebugPtr;
  (this->Database).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPoseSearchDatabase *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->RolesFilter;
  this->Tag = param_1->Tag;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RolesFilter).ArrayMax;
  iVar3 = (param_1->RolesFilter).ArrayNum;
  _Src = (param_1->RolesFilter).AllocatorInstance.Data;
  (this->RolesFilter).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->BroadPhaseRadius = param_1->BroadPhaseRadius;
  this->BroadPhaseRadiusIncrementOnInteraction = param_1->BroadPhaseRadiusIncrementOnInteraction;
  this->bDisableCollisions = param_1->bDisableCollisions;
  this->TickPriority = param_1->TickPriority;
  return this;
}

// operator= @ 14a8af1a0

FPoseSearchInteractionAvailability * __thiscall
FPoseSearchInteractionAvailability::operator=
          (FPoseSearchInteractionAvailability *this,FPoseSearchInteractionAvailability *param_1)

{
  UPoseSearchDatabase *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Database).field0_0x0.DebugPtr, pUVar1 != (UPoseSearchDatabase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Database).field0_0x0 = (param_1->Database).field0_0x0;
  this->Tag = param_1->Tag;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->RolesFilter,&param_1->RolesFilter);
  this->BroadPhaseRadius = param_1->BroadPhaseRadius;
  this->BroadPhaseRadiusIncrementOnInteraction = param_1->BroadPhaseRadiusIncrementOnInteraction;
  this->bDisableCollisions = param_1->bDisableCollisions;
  this->TickPriority = param_1->TickPriority;
  return this;
}

