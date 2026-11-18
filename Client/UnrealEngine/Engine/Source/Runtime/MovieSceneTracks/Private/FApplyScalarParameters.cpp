// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 14682ee30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::FApplyScalarParameters::ForEachAllocation
          (FEntityAllocationProxy *param_1,TRead<UE::MovieScene::FObjectComponent> param_2,
          TMultiComponentData<UE::MovieScene::TReadOptional<FMaterialParameterInfo>,UE::MovieScene::TReadOptional<FName>_>
          *param_3,TRead<double> param_4)

{
  int iVar1;
  longlong lVar2;
  FEntityAllocation *pFVar3;
  UMaterialInstanceDynamic *this;
  UClass *pUVar4;
  UMaterialParameterCollectionInstance *this_00;
  FName FVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  pFVar3 = FEntityAllocationProxy::GetAllocation(param_1);
  lVar2 = *(longlong *)&param_3->Data;
  iVar6 = 0;
  uVar9 = (ulonglong)pFVar3->Size;
  if (uVar9 != 0) {
    lVar8 = lVar2 - (longlong)param_2;
    lVar7 = *(longlong *)&(param_3->Data).field_0x8 - (longlong)param_4;
    do {
      if (*(longlong *)param_2 != 0) {
        this = (UMaterialInstanceDynamic *)FObjectComponent::GetObject((FObjectComponent *)param_2);
        if (this != (UMaterialInstanceDynamic *)0x0) {
          pUVar4 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar4->_padding_)) {
            if (lVar2 == 0) {
              UMaterialInstanceDynamic::SetScalarParameterValue
                        (this,*(FName *)(lVar7 + (longlong)param_4),(float)*(double *)param_4);
            }
            else {
              UMaterialInstanceDynamic::SetScalarParameterValueByInfo
                        (this,(FMaterialParameterInfo *)((longlong)iVar6 * 0x10 + lVar2),
                         (float)*(double *)param_4);
            }
            goto LAB_14682ef3b;
          }
        }
        this_00 = (UMaterialParameterCollectionInstance *)
                  FObjectComponent::GetObject((FObjectComponent *)param_2);
        if (this_00 != (UMaterialParameterCollectionInstance *)0x0) {
          pUVar4 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar4->_padding_)) {
            if (lVar2 == 0) {
              FVar5 = *(FName *)(lVar7 + (longlong)param_4);
            }
            else {
              FVar5 = *(FName *)((longlong)param_2 + lVar8);
            }
            UMaterialParameterCollectionInstance::SetScalarParameterValue
                      (this_00,FVar5,(float)*(double *)param_4);
          }
        }
      }
LAB_14682ef3b:
      iVar6 = iVar6 + 1;
      param_2 = (TRead<UE::MovieScene::FObjectComponent>)((longlong)param_2 + 0x10);
      param_4 = (TRead<double>)((longlong)param_4 + 8);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

