// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 14682ef80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::FApplyVectorParameters::ForEachAllocation
          (FEntityAllocationProxy *param_1,TRead<UE::MovieScene::FObjectComponent> param_2,
          TMultiComponentData<UE::MovieScene::TReadOptional<FMaterialParameterInfo>,UE::MovieScene::TReadOptional<FMaterialParameterInfo>,UE::MovieScene::TReadOptional<FName>,UE::MovieScene::TReadOptional<FName>_>
          *param_3,TMultiComponentData<UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>_>
                   *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  float fVar6;
  FEntityAllocation *pFVar7;
  UMaterialInstanceDynamic *this;
  UClass *pUVar8;
  UMaterialParameterCollectionInstance *this_00;
  FName FVar9;
  int iVar10;
  double *pdVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58 [2];
  
  pFVar7 = FEntityAllocationProxy::GetAllocation(param_1);
  fVar6 = __real_3f800000;
  lVar14 = *(longlong *)&param_3->Data;
  if (lVar14 == 0) {
    lVar14 = *(longlong *)&(param_3->Data).field_0x8;
  }
  lVar13 = *(longlong *)&(param_3->Data).field_0x10;
  if (lVar13 == 0) {
    lVar13 = *(longlong *)&(param_3->Data).field_0x18;
  }
  uVar12 = (ulonglong)pFVar7->Size;
  iVar10 = 0;
  lVar2 = *(longlong *)&param_4->Data;
  lVar3 = *(longlong *)&(param_4->Data).field_0x8;
  lVar4 = *(longlong *)&(param_4->Data).field_0x18;
  pdVar5 = *(double **)&(param_4->Data).field_0x10;
  if (uVar12 != 0) {
    pdVar11 = pdVar5;
    do {
      if (*(longlong *)param_2 != 0) {
        local_68._12_4_ = fVar6;
        if (lVar4 != 0) {
          local_68._s_0.A = (float)*(double *)((lVar4 - (longlong)pdVar5) + (longlong)pdVar11);
        }
        local_68._8_4_ = fVar6;
        if (pdVar5 != (double *)0x0) {
          local_68._s_0.B = (float)*pdVar11;
        }
        local_68._4_4_ = fVar6;
        if (lVar3 != 0) {
          local_68._s_0.G = (float)*(double *)((longlong)pdVar11 + (lVar3 - (longlong)pdVar5));
        }
        local_68._0_4_ = fVar6;
        if (lVar2 != 0) {
          local_68._s_0.R = (float)*(double *)((lVar2 - (longlong)pdVar5) + (longlong)pdVar11);
        }
        this = (UMaterialInstanceDynamic *)FObjectComponent::GetObject((FObjectComponent *)param_2);
        if (this != (UMaterialInstanceDynamic *)0x0) {
          pUVar8 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar1 = (int)pUVar8->_padding_;
          if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar8->_padding_)) {
            if (lVar14 == 0) {
              if (lVar13 != 0) {
                local_58[0]._0_8_ = CONCAT44(local_68._s_0.G,local_68._s_0.R);
                local_58[0]._8_8_ = CONCAT44(local_68._s_0.A,local_68._s_0.B);
                UMaterialInstanceDynamic::SetVectorParameterValue
                          (this,*(FName *)(lVar13 + (longlong)iVar10 * 8),
                           (FLinearColor *)&local_58[0]._s_0);
              }
            }
            else {
              local_58[0]._0_8_ = CONCAT44(local_68._s_0.G,local_68._s_0.R);
              local_58[0]._8_8_ = CONCAT44(local_68._s_0.A,local_68._s_0.B);
              UMaterialInstanceDynamic::SetVectorParameterValueByInfo
                        (this,(FMaterialParameterInfo *)((longlong)iVar10 * 0x10 + lVar14),
                         (FLinearColor *)&local_58[0]._s_0);
            }
            goto LAB_14682f199;
          }
        }
        this_00 = (UMaterialParameterCollectionInstance *)
                  FObjectComponent::GetObject((FObjectComponent *)param_2);
        if (this_00 != (UMaterialParameterCollectionInstance *)0x0) {
          pUVar8 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
          iVar1 = (int)pUVar8->_padding_;
          if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar8->_padding_)) {
            if (lVar14 == 0) {
              if (lVar13 == 0) goto LAB_14682f199;
              FVar9 = *(FName *)(lVar13 + (longlong)iVar10 * 8);
            }
            else {
              FVar9 = *(FName *)(lVar14 + (longlong)iVar10 * 0x10);
            }
            UMaterialParameterCollectionInstance::SetVectorParameterValue
                      (this_00,FVar9,(FLinearColor *)&local_68._s_0);
          }
        }
      }
LAB_14682f199:
      iVar10 = iVar10 + 1;
      param_2 = (TRead<UE::MovieScene::FObjectComponent>)((longlong)param_2 + 0x10);
      pdVar11 = pdVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

