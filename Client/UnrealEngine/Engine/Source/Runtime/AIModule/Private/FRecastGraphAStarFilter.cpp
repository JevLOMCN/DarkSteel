// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FRecastGraphAStarFilter @ 146f93290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRecastGraphAStarFilter * __thiscall
FRecastGraphAStarFilter::FRecastGraphAStarFilter
          (FRecastGraphAStarFilter *this,FRecastGraphWrapper *param_1,FRecastQueryFilter *param_2,
          uint param_3,double param_4,UObject *param_5)

{
  int iVar1;
  UObject *pUVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UNavigationSystemV1 *pUVar5;
  
  this->Filter = param_2;
  pUVar3 = AActor::GetWorld((AActor *)(param_1->RecastNavMeshActor).field0_0x0.DebugPtr);
  if ((pUVar3 != (UWorld *)0x0) &&
     (pUVar5 = (UNavigationSystemV1 *)(pUVar3->NavigationSystem).field0_0x0.DebugPtr,
     pUVar5 != (UNavigationSystemV1 *)0x0)) {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146f932f3;
  }
  pUVar5 = (UNavigationSystemV1 *)0x0;
LAB_146f932f3:
  pUVar2 = param_5;
  (this->LinkFilter).NavSys = pUVar5;
  (this->LinkFilter)._padding_ = (longlong)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  (this->LinkFilter).SearchOwner.ObjectIndex = 0;
  (this->LinkFilter).SearchOwner.ObjectSerialNumber = 0;
  param_5 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&(this->LinkFilter).SearchOwner,(FObjectPtr)&param_5);
  (this->LinkFilter).CachedOwnerOb = (UObject *)0x0;
  this->CostLimit = param_4;
  this->RecastGraphWrapper = param_1;
  this->MaxSearchNodes = param_3;
  param_1->CachedNextLink = 0xffffffff;
  dtNavMeshQuery::init
            (&param_1->RecastQuery,param_1->DetourNavMesh,0,
             (dtQuerySpecialLinkFilter *)&this->LinkFilter);
  return this;
}

