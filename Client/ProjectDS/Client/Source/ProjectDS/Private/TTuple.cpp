// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_><unsigned___int64_&,AActor_*_&> @ 14badc070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_> * __thiscall
TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>::
TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_><unsigned___int64_&,AActor_*_&>
          (TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_> *this,ulong64 *param_1,
          AActor **param_2)

{
  AActor *pAVar1;
  AActor *local_res8;
  
  *(ulong64 *)this = *param_1;
  pAVar1 = *param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  *(undefined8 *)&this->field_0x8 = 0;
  local_res8 = pAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x8,(FObjectPtr)&local_res8);
  return this;
}

// TTuple<unsigned___int64,FDS_BreachDetailInfo> @ 14c0685c0

TTuple<unsigned___int64,FDS_BreachDetailInfo> * __thiscall
TTuple<unsigned___int64,FDS_BreachDetailInfo>::TTuple<unsigned___int64,FDS_BreachDetailInfo>
          (TTuple<unsigned___int64,FDS_BreachDetailInfo> *this,
          TTuple<unsigned___int64,FDS_BreachDetailInfo> *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
  ::FString::FString((FString *)&this->field_0x18,(FString *)&param_1->field_0x18);
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  *(undefined8 *)&this->field_0x38 = *(undefined8 *)&param_1->field_0x38;
  *(undefined4 *)&this->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  this->field_0x44 = param_1->field_0x44;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  return this;
}

