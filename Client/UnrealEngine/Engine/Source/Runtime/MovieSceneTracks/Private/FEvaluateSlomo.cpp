// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 146830b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateSlomo::ForEachAllocation
          (FEvaluateSlomo *this,FEntityAllocation *param_1,
          TRead<UE::MovieScene::FRootInstanceHandle> param_2,TRead<double> param_3)

{
  double dVar1;
  ushort uVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ENetMode EVar5;
  UObject *pUVar6;
  UWorld *this_00;
  AWorldSettings *pAVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar2 = param_1->Size;
  if ((ulonglong)uVar2 != 0) {
    lVar9 = 0;
    do {
      lVar8 = (ulonglong)*(ushort *)((longlong)param_2 + lVar9 * 4) * 0x140;
      lVar3 = *(longlong *)&this->InstanceRegistry->Instances;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar8 + 0x120 + lVar3);
      lVar3 = *(longlong *)(lVar8 + 0x118 + lVar3);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar3 + 0x18));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      dVar1 = *(double *)((longlong)param_3 + lVar9 * 8);
      if ((((pUVar6 != (UObject *)0x0) &&
           (this_00 = (UWorld *)(**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6),
           this_00 != (UWorld *)0x0)) &&
          (EVar5 = UWorld::InternalGetNetMode(this_00), EVar5 != NM_Client)) &&
         ((0.0 < dVar1 &&
          (pAVar7 = UWorld::GetWorldSettings(this_00,false,true), pAVar7 != (AWorldSettings *)0x0)))
         ) {
        (**(code **)(pAVar7->_padding_ + 0x7b0))(pAVar7,(float)dVar1);
        (**(code **)(pAVar7->_padding_ + 0x710))(pAVar7);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)(ulonglong)uVar2);
  }
  return;
}

