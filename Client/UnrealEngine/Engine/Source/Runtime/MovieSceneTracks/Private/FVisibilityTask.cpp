// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 1468b4cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FVisibilityTask::ForEachAllocation
          (FVisibilityTask *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4,
          TRead<bool> param_5)

{
  ushort uVar1;
  int iVar2;
  USceneComponent *this_00;
  longlong lVar3;
  code *pcVar4;
  TRead<UObject_*> TVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  UClass *pUVar8;
  undefined1 *puVar9;
  longlong lVar10;
  FPreAnimatedTrackerParams local_res8;
  FEntityAllocationProxy local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  TVar5 = param_4;
  pFVar7 = FEntityAllocationProxy::GetAllocation(param_1);
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar1 = pFVar7->Size;
  FPreAnimatedTrackerParams::FPreAnimatedTrackerParams(&local_res8,&local_48);
  if ((this->PreAnimatedStorage).Object == (FPreAnimatedVisibilityStorage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar9 = &((this->PreAnimatedStorage).Object)->field_0xd8;
  (*(code *)**(undefined8 **)puVar9)(puVar9,&local_res8,param_2,param_3,TVar5);
  param_4._0_1_ = 0;
  if ((this->PreAnimatedStorage).Object == (FPreAnimatedVisibilityStorage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar9 = &((this->PreAnimatedStorage).Object)->field_0xd8;
  uStack_30 = (uint)uVar1;
  local_48.AllocationIndex = uStack_30;
  local_48.Manager._0_4_ = TVar5._0_4_;
  local_48.Manager._4_4_ = TVar5._4_4_;
  local_38 = local_48.Manager._0_4_;
  uStack_34 = local_48.Manager._4_4_;
  uStack_2c = local_48._12_4_;
  local_48.Manager = (FEntityManager *)TVar5;
  (**(code **)(*(longlong *)puVar9 + 0x10))(puVar9,&param_4,&local_38);
  lVar10 = 0;
  if ((ulonglong)uVar1 != 0) {
    do {
      this_00 = *(USceneComponent **)((longlong)TVar5 + lVar10 * 8);
      if (this_00 != (USceneComponent *)0x0) {
        bVar6 = *(bool *)(lVar10 + (longlong)param_5);
        pUVar8 = Z_Construct_UClass_AActor_NoRegister();
        lVar3 = this_00->_padding_;
        iVar2 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) {
          pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
          iVar2 = (int)pUVar8->_padding_;
          if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar8->_padding_)) {
            USceneComponent::SetHiddenInGame(this_00,bVar6 == false,DirtyOnly);
            USceneComponent::SetVisibility(this_00,bVar6,DirtyOnly);
          }
        }
        else {
          (**(code **)(this_00->_padding_ + 0x368))
                    (this_00,CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar6 == false));
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (longlong)(ulonglong)uVar1);
  }
  return;
}

