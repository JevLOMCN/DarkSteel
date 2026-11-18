// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// CreateMutation @ 1468ad6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEasingChannelMutationBase::CreateMutation
          (FEasingChannelMutationBase *this,FEntityManager *param_1,FComponentMask *param_2)

{
  FComponentMask::Set(param_2,(FComponentTypeID)
                              *(ushort *)&this->BuiltInComponents->HierarchicalEasingChannel);
  FComponentMask::Set(param_2,(FComponentTypeID)(this->BuiltInComponents->Tags).NeedsLink.Value);
  return;
}

// RemoveStaleComponents @ 1468caa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEasingChannelMutationBase::RemoveStaleComponents
          (FEasingChannelMutationBase *this,UMovieSceneEntitySystemLinker *param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  FScriptContainerElement *pFVar2;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> TVar3;
  TComponentTypeID<unsigned_short> TVar4;
  TComponentTypeID<double> TVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  TBitArray<TFixedAllocator<12>_> local_64;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((this->StaleEntities).ArrayNum != 0) {
    local_64.NumBits = 0;
    local_64.MaxBits = 0x180;
    TVar3 = this->BuiltInComponents->HierarchicalBlendTarget;
    TBitArray<TFixedAllocator<12>_>::Add(&local_64,false,(ushort)TVar3 + 1);
    if ((local_64.NumBits <= (int)(uint)(ushort)TVar3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar1 = local_64.AllocatorInstance.InlineData + ((ushort)TVar3 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << (TVar3._0_1_ & 0x1f);
    TVar4 = this->BuiltInComponents->HierarchicalEasingChannel;
    iVar9 = ((uint)(ushort)TVar4 - local_64.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_64,false,iVar9);
    }
    if ((local_64.NumBits <= (int)(uint)(ushort)TVar4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar1 = local_64.AllocatorInstance.InlineData + ((ushort)TVar4 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << (TVar4._0_1_ & 0x1f);
    TVar5 = this->BuiltInComponents->WeightAndEasingResult;
    iVar9 = ((uint)(ushort)TVar5 - local_64.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_64,false,iVar9);
    }
    if ((local_64.NumBits <= (int)(uint)(ushort)TVar5) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar1 = local_64.AllocatorInstance.InlineData + ((ushort)TVar5 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << (TVar5._0_1_ & 0x1f);
    pFVar8 = (this->StaleEntities).AllocatorInstance.Data;
    iVar9 = (this->StaleEntities).ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar9 * 2;
    while( true ) {
      if ((this->StaleEntities).ArrayNum != iVar9) {
        `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_68);
      }
      if (pFVar8 == pFVar2) break;
      FEntityManager::RemoveComponents
                (&param_1->EntityManager,(FMovieSceneEntityID)*(ushort *)pFVar8,
                 (FComponentMask *)&local_64);
      pFVar8 = pFVar8 + 2;
    }
  }
  return;
}

