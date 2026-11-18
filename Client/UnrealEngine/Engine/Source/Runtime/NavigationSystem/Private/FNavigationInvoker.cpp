// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 5

// FNavigationInvoker @ 146d73d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNavigationInvoker * __thiscall
FNavigationInvoker::FNavigationInvoker
          (FNavigationInvoker *this,AActor *param_1,float param_2,float param_3,
          FNavAgentSelector *param_4,ENavigationInvokerPriority param_5)

{
  uint uVar1;
  AActor *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Actor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->Object).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (AActor *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->Object,(FObjectPtr)&local_res8);
  (this->Object).InterfaceInstance = (INavigationInvokerInterface *)0x0;
  this->GenerationRadius = param_2;
  this->RemovalRadius = param_3;
  uVar1 = (param_4->field0_0x0).PackedBits;
  this->Priority = param_5;
  (this->SupportedAgents).field0_0x0.PackedBits = uVar1 | 0x80000000;
  return this;
}

// FNavigationInvoker @ 146d73de0

FNavigationInvoker * __thiscall
FNavigationInvoker::FNavigationInvoker
          (FNavigationInvoker *this,INavigationInvokerInterface *param_1,float param_2,float param_3
          ,FNavAgentSelector *param_4,ENavigationInvokerPriority param_5)

{
  FNavAgentSelector_u_0 FVar1;
  bool bVar2;
  UObject *local_res8;
  
  (this->Actor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (UObject *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->Object).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->Object).InterfaceInstance = (INavigationInvokerInterface *)0x0;
  if (param_1 != (INavigationInvokerInterface *)0x0) {
    local_res8 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (local_res8 != (UObject *)0x0) goto LAB_146d73e38;
  }
  local_res8 = (UObject *)0x0;
LAB_146d73e38:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->Object,(FObjectPtr)&local_res8);
  bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    (&(this->Object).ObjectInstance,(void *)0x0);
  if (!bVar2) {
    (this->Object).InterfaceInstance = param_1;
  }
  this->GenerationRadius = param_2;
  this->RemovalRadius = param_3;
  FVar1 = param_4->field0_0x0;
  this->Priority = param_5;
  (this->SupportedAgents).field0_0x0 = FVar1;
  return this;
}

// FNavigationInvoker @ 146d73ec0

FNavigationInvoker * __thiscall FNavigationInvoker::FNavigationInvoker(FNavigationInvoker *this)

{
  undefined8 local_res8;
  
  (this->Actor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->Object).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->Object,(FObjectPtr)&local_res8);
  (this->Object).InterfaceInstance = (INavigationInvokerInterface *)0x0;
  this->GenerationRadius = 0.0;
  this->RemovalRadius = 0.0;
  FNavAgentSelector::FNavAgentSelector(&this->SupportedAgents,0x7fffffff);
  (this->SupportedAgents).field0_0x0.PackedBits =
       (this->SupportedAgents).field0_0x0.PackedBits | 0x80000000;
  this->Priority = Default;
  return this;
}

// GetLocation @ 146d9c0e0

bool __thiscall FNavigationInvoker::GetLocation(FNavigationInvoker *this,TVector<double> *param_1)

{
  INavigationInvokerInterface *pIVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  double *pdVar5;
  UObject *pUVar6;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (((this->Actor).WeakPtr.ObjectIndex == 0) && ((this->Actor).WeakPtr.ObjectSerialNumber == 0)) {
    if ((this->Object).InterfaceInstance != (INavigationInvokerInterface *)0x0) {
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->Object);
      if ((bVar4) &&
         (pIVar1 = (this->Object).InterfaceInstance, pIVar1 != (INavigationInvokerInterface *)0x0))
      {
        pdVar5 = (double *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,&local_28);
        goto LAB_146d9c17d;
      }
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar6 != (UObject *)0x0) {
      lVar2 = *(longlong *)(pUVar6 + 0xb);
      if (lVar2 == 0) {
        local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        local_28 = *(double *)(lVar2 + 0x210);
        dStack_20 = (double)*(undefined8 *)(lVar2 + 0x218);
        local_18 = (double)*(undefined8 *)(lVar2 + 0x220);
      }
      pdVar5 = &local_28;
LAB_146d9c17d:
      dVar3 = pdVar5[1];
      (param_1->field0_0x0)._s_0.X = *pdVar5;
      (param_1->field0_0x0)._s_0.Y = dVar3;
      (param_1->field0_0x0)._s_0.Z = pdVar5[2];
      return true;
    }
  }
  return false;
}

// GetName @ 146d9c6a0

FString * __thiscall
FNavigationInvoker::GetName(FNavigationInvoker *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  FName local_res8 [4];
  
  if (((this->Actor).WeakPtr.ObjectIndex == 0) && ((this->Actor).WeakPtr.ObjectSerialNumber == 0)) {
    this = (FNavigationInvoker *)&this->Object;
  }
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar1 == (UObject *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
  local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

