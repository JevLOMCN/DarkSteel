// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1472eea60

UScriptStruct * __cdecl FOverlapInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOverlapInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FOverlapInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOverlapInfo,(UObject *)pUVar1,L"OverlapInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOverlapInfo.OuterSingleton;
}

// FOverlapInfo @ 1478a8040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FOverlapInfo * __thiscall
FOverlapInfo::FOverlapInfo(FOverlapInfo *this,UPrimitiveComponent *param_1,int param_2)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  EResolutionStatus EVar3;
  undefined3 uVar4;
  FActorInstanceHandle *pFVar5;
  UPrimitiveComponent *local_res8;
  FActorInstanceHandle local_28;
  
  this->bFromSweep = false;
  memset(&this->OverlapInfo,0,0x100);
  local_28.InstanceIndex = -1;
  local_28._29_2_ = 0;
  local_28._31_1_ = 0;
  local_28.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  local_28.ResolutionStatus = Invalid;
  (this->OverlapInfo).Time = 1.0;
  (this->OverlapInfo).MyItem = -1;
  (this->OverlapInfo).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->OverlapInfo).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->OverlapInfo).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->OverlapInfo).HitObjectHandle.InstanceIndex = -1;
  (this->OverlapInfo).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->OverlapInfo).HitObjectHandle.field_0x1d = 0;
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pFVar5 = FActorInstanceHandle::FActorInstanceHandle
                       (&local_28,*(AActor **)&param_1->field_0xa8,param_1,param_2);
    FVar1 = (pFVar5->ManagerInterface).ObjectInstance.WeakPtr;
    (this->OverlapInfo).HitObjectHandle.ReferenceObject.WeakPtr = (pFVar5->ReferenceObject).WeakPtr;
    (this->OverlapInfo).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr = FVar1;
    iVar2 = pFVar5->InstanceIndex;
    EVar3 = pFVar5->ResolutionStatus;
    uVar4 = *(undefined3 *)&pFVar5->field_0x1d;
    (this->OverlapInfo).HitObjectHandle.ManagerInterface.InterfaceInstance =
         (pFVar5->ManagerInterface).InterfaceInstance;
    (this->OverlapInfo).HitObjectHandle.InstanceIndex = iVar2;
    (this->OverlapInfo).HitObjectHandle.ResolutionStatus = EVar3;
    *(undefined3 *)&(this->OverlapInfo).HitObjectHandle.field_0x1d = uVar4;
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->OverlapInfo).Component.WeakPtr,(FObjectPtr)&local_res8);
  (this->OverlapInfo).Item = param_2;
  return this;
}

