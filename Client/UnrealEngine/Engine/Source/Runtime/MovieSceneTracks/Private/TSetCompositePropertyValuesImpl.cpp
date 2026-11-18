// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 80

// ForEachAllocation @ 146677720

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TRead<double> param_5)

{
  double dVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort local_res10 [8];
  UObject *local_res20;
  ushort *local_58;
  UObject **local_50;
  
  lVar9 = *(longlong *)&param_3->Data;
  uVar3 = (ulonglong)param_1->Size;
  if (lVar9 == 0) {
    lVar9 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar9 == 0) {
      puVar6 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar6 != (undefined8 *)0x0) && (uVar3 != 0)) {
        lVar9 = 0;
        lVar4 = (longlong)param_5 - (longlong)param_2;
        do {
          TDynamicVariantPropertyTraits<double,double>::SetObjectPropertyValue
                    (this->Traits,*(UObject **)param_2,
                     (FVariantPropertyTypeIndex)*(uchar *)((longlong)param_4 + lVar9),
                     (FTrackInstancePropertyBindings *)*puVar6,
                     *(double *)((longlong)param_2 + lVar4));
          lVar9 = lVar9 + 1;
          puVar6 = puVar6 + 2;
          param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
        } while (lVar9 < (longlong)uVar3);
      }
    }
    else {
      uVar5 = 0;
      if (uVar3 != 0) {
        lVar4 = (longlong)param_5 - (longlong)param_2;
        uVar8 = uVar5;
        do {
          local_res10[0] = *(ushort *)(lVar9 + uVar5 * 2);
          local_res20 = *(UObject **)param_2;
          dVar1 = *(double *)((longlong)param_2 + lVar4);
          if (local_res10[0] == 0) {
            local_58 = local_res10;
            local_50 = &local_res20;
            bVar2 = `UE::MovieScene::
                    TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
                    ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_58);
            if (bVar2) goto LAB_146677832;
          }
          else {
LAB_146677832:
            TDynamicVariantPropertyTraits<double,double>::SetObjectPropertyValue
                      (this->Traits,local_res20,
                       (FVariantPropertyTypeIndex)
                       *(uchar *)((longlong)(int)uVar8 + (longlong)param_4),local_res10[0],dVar1);
          }
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar5 = uVar5 + 1;
          param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
        } while ((longlong)uVar5 < (longlong)uVar3);
      }
    }
  }
  else if (uVar3 != 0) {
    lVar7 = 0;
    lVar4 = (longlong)param_5 - (longlong)param_2;
    do {
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar9 + lVar7 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)param_2,*(undefined8 *)((longlong)param_2 + lVar4));
      lVar7 = lVar7 + 1;
      param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
    } while (lVar7 < (longlong)uVar3);
    return;
  }
  return;
}

// ForEachAllocation @ 1466778e0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TRead<double> param_5,TRead<double> param_6,TRead<double> param_7,
                   TRead<double> param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong local_res10 [2];
  UObject *local_res20;
  longlong *local_b8;
  UObject **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FDoubleIntermediateVector local_98 [3];
  
  uVar15 = (ulonglong)param_1->Size;
  local_res20 = *(UObject **)&param_3->Data;
  if (local_res20 == (UObject *)0x0) {
    lVar7 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar7 == 0) {
      puVar14 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar14 != (undefined8 *)0x0) && (uVar15 != 0)) {
        lVar7 = 0;
        lVar11 = (longlong)param_5 - (longlong)param_6;
        local_res10[0] = (longlong)param_7 - (longlong)param_6;
        local_res20 = (UObject *)((longlong)param_8 - (longlong)param_6);
        lVar8 = (longlong)param_2 - (longlong)param_6;
        do {
          local_98[0].X = *(double *)((longlong)param_6 + lVar11);
          local_98[0].Y = *(double *)param_6;
          local_98[0].Z = *(double *)((longlong)param_6 + local_res10[0]);
          local_98[0].W = *(double *)(&local_res20->field_0x0 + (longlong)param_6);
          TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
          ::SetObjectPropertyValue
                    (this->Traits,*(UObject **)((longlong)param_6 + lVar8),
                     (FVariantPropertyTypeIndex)*(uchar *)((longlong)param_4 + lVar7),
                     (FTrackInstancePropertyBindings *)*puVar14,local_98);
          puVar14 = puVar14 + 2;
          param_6 = (TRead<double>)((longlong)param_6 + 8);
          lVar7 = lVar7 + 1;
        } while (lVar7 < (longlong)uVar15);
      }
    }
    else {
      iVar6 = 0;
      if (uVar15 != 0) {
        lVar13 = 0;
        lVar8 = (longlong)param_8 - (longlong)param_7;
        lVar11 = (longlong)param_6 - (longlong)param_7;
        lVar12 = (longlong)param_5 - (longlong)param_7;
        lVar9 = (longlong)param_2 - (longlong)param_7;
        do {
          uVar10 = *(ushort *)(lVar7 + lVar13 * 2);
          dVar1 = *(double *)((longlong)param_7 + lVar8);
          dVar2 = *(double *)((longlong)param_7 + lVar12);
          local_res20 = *(UObject **)((longlong)param_7 + lVar9);
          dVar3 = *(double *)param_7;
          dVar4 = *(double *)((longlong)param_7 + lVar11);
          local_res10[0] = CONCAT62(local_res10[0]._2_6_,uVar10);
          if (uVar10 == 0) {
            local_b8 = local_res10;
            local_b0 = &local_res20;
            bVar5 = `UE::MovieScene::
                    TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                    ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_b8);
            if (bVar5) {
              uVar10 = (ushort)local_res10[0];
              goto LAB_146677a81;
            }
          }
          else {
LAB_146677a81:
            local_98[0].X = dVar2;
            local_98[0].Y = dVar4;
            local_98[0].Z = dVar3;
            local_98[0].W = dVar1;
            TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
            ::SetObjectPropertyValue
                      (this->Traits,local_res20,
                       (FVariantPropertyTypeIndex)*(uchar *)((longlong)param_4 + (longlong)iVar6),
                       uVar10,local_98);
          }
          iVar6 = iVar6 + 1;
          lVar13 = lVar13 + 1;
          param_7 = (TRead<double>)((longlong)param_7 + 8);
        } while (lVar13 < (longlong)uVar15);
      }
    }
  }
  else if (uVar15 != 0) {
    lVar7 = 0;
    lVar12 = (longlong)param_5 - (longlong)param_6;
    lVar11 = (longlong)param_7 - (longlong)param_6;
    local_res10[0] = (longlong)param_8 - (longlong)param_6;
    lVar8 = (longlong)param_2 - (longlong)param_6;
    do {
      local_b0 = *(UObject ***)param_6;
      local_b8 = *(longlong **)((longlong)param_6 + lVar12);
      local_a0 = *(undefined8 *)((longlong)param_6 + local_res10[0]);
      local_a8 = *(undefined8 *)((longlong)param_6 + lVar11);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(&local_res20->field_0x0 + lVar7 * 2) *
                       (this->CustomAccessors).Stride) + 0x20))
                (*(undefined8 *)((longlong)param_6 + lVar8),&local_b8);
      param_6 = (TRead<double>)((longlong)param_6 + 8);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)uVar15);
  }
  return;
}

// ForEachAllocation @ 146677bd0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TRead<double> param_5,TRead<double> param_6,TRead<double> param_7,
                   TRead<double> param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong local_res10 [2];
  UObject *local_res20;
  longlong *local_b8;
  UObject **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FFloatIntermediateVector local_98 [3];
  
  uVar15 = (ulonglong)param_1->Size;
  local_res20 = *(UObject **)&param_3->Data;
  if (local_res20 == (UObject *)0x0) {
    lVar7 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar7 == 0) {
      puVar14 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar14 != (undefined8 *)0x0) && (uVar15 != 0)) {
        lVar7 = 0;
        lVar11 = (longlong)param_5 - (longlong)param_6;
        local_res10[0] = (longlong)param_7 - (longlong)param_6;
        local_res20 = (UObject *)((longlong)param_8 - (longlong)param_6);
        lVar8 = (longlong)param_2 - (longlong)param_6;
        do {
          local_98[0].X = *(double *)((longlong)param_6 + lVar11);
          local_98[0].Y = *(double *)param_6;
          local_98[0].Z = *(double *)((longlong)param_6 + local_res10[0]);
          local_98[0].W = *(double *)(&local_res20->field_0x0 + (longlong)param_6);
          TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
          ::SetObjectPropertyValue
                    (this->Traits,*(UObject **)((longlong)param_6 + lVar8),
                     (FVariantPropertyTypeIndex)*(uchar *)((longlong)param_4 + lVar7),
                     (FTrackInstancePropertyBindings *)*puVar14,local_98);
          puVar14 = puVar14 + 2;
          param_6 = (TRead<double>)((longlong)param_6 + 8);
          lVar7 = lVar7 + 1;
        } while (lVar7 < (longlong)uVar15);
      }
    }
    else {
      iVar6 = 0;
      if (uVar15 != 0) {
        lVar13 = 0;
        lVar8 = (longlong)param_8 - (longlong)param_7;
        lVar11 = (longlong)param_6 - (longlong)param_7;
        lVar12 = (longlong)param_5 - (longlong)param_7;
        lVar9 = (longlong)param_2 - (longlong)param_7;
        do {
          uVar10 = *(ushort *)(lVar7 + lVar13 * 2);
          dVar1 = *(double *)((longlong)param_7 + lVar8);
          dVar2 = *(double *)((longlong)param_7 + lVar12);
          local_res20 = *(UObject **)((longlong)param_7 + lVar9);
          dVar3 = *(double *)param_7;
          dVar4 = *(double *)((longlong)param_7 + lVar11);
          local_res10[0] = CONCAT62(local_res10[0]._2_6_,uVar10);
          if (uVar10 == 0) {
            local_b8 = local_res10;
            local_b0 = &local_res20;
            bVar5 = `UE::MovieScene::
                    TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                    ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_b8);
            if (bVar5) {
              uVar10 = (ushort)local_res10[0];
              goto LAB_146677d71;
            }
          }
          else {
LAB_146677d71:
            local_98[0].X = dVar2;
            local_98[0].Y = dVar4;
            local_98[0].Z = dVar3;
            local_98[0].W = dVar1;
            TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
            ::SetObjectPropertyValue
                      (this->Traits,local_res20,
                       (FVariantPropertyTypeIndex)*(uchar *)((longlong)param_4 + (longlong)iVar6),
                       uVar10,local_98);
          }
          iVar6 = iVar6 + 1;
          lVar13 = lVar13 + 1;
          param_7 = (TRead<double>)((longlong)param_7 + 8);
        } while (lVar13 < (longlong)uVar15);
      }
    }
  }
  else if (uVar15 != 0) {
    lVar7 = 0;
    lVar12 = (longlong)param_5 - (longlong)param_6;
    lVar11 = (longlong)param_7 - (longlong)param_6;
    local_res10[0] = (longlong)param_8 - (longlong)param_6;
    lVar8 = (longlong)param_2 - (longlong)param_6;
    do {
      local_b0 = *(UObject ***)param_6;
      local_b8 = *(longlong **)((longlong)param_6 + lVar12);
      local_a0 = *(undefined8 *)((longlong)param_6 + local_res10[0]);
      local_a8 = *(undefined8 *)((longlong)param_6 + lVar11);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(&local_res20->field_0x0 + lVar7 * 2) *
                       (this->CustomAccessors).Stride) + 0x20))
                (*(undefined8 *)((longlong)param_6 + lVar8),&local_b8);
      param_6 = (TRead<double>)((longlong)param_6 + 8);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)uVar15);
  }
  return;
}

// ForEachAllocation @ 146677ec0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TRead<double> param_5,TRead<double> param_6,TRead<double> param_7,
                   TRead<double> param_8,TRead<double> param_9,TRead<double> param_10,
                   TRead<double> param_11,TRead<double> param_12,TRead<double> param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ushort uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong local_res10;
  UObject *local_res20;
  FIntermediate3DTransform local_128;
  longlong *local_d8;
  UObject **local_d0;
  
  lVar12 = *(longlong *)&param_3->Data;
  uVar25 = (ulonglong)param_1->Size;
  if (lVar12 == 0) {
    lVar12 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar12 == 0) {
      puVar24 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar24 != (undefined8 *)0x0) && (uVar25 != 0)) {
        lVar11 = 0;
        lVar19 = (longlong)param_5 - (longlong)param_6;
        lVar20 = (longlong)param_7 - (longlong)param_6;
        local_res10 = (longlong)param_8 - (longlong)param_6;
        local_res20 = (UObject *)((longlong)param_9 - (longlong)param_6);
        lVar12 = (longlong)param_10 - (longlong)param_6;
        lVar15 = (longlong)param_11 - (longlong)param_6;
        lVar16 = (longlong)param_12 - (longlong)param_6;
        lVar18 = (longlong)param_13 - (longlong)param_6;
        lVar14 = (longlong)param_2 - (longlong)param_6;
        do {
          local_128.T_X = *(double *)((longlong)param_6 + lVar19);
          local_128.T_Y = *(double *)param_6;
          local_128.T_Z = *(double *)((longlong)param_6 + lVar20);
          local_128.R_X = *(double *)((longlong)param_6 + local_res10);
          local_128.R_Y = *(double *)(&local_res20->field_0x0 + (longlong)param_6);
          local_128.S_X = *(double *)((longlong)param_6 + lVar15);
          local_128.R_Z = *(double *)((longlong)param_6 + lVar12);
          local_128.S_Z = *(double *)((longlong)param_6 + lVar18);
          local_128.S_Y = *(double *)((longlong)param_6 + lVar16);
          TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
          ::SetObjectPropertyValue
                    (this->Traits,*(UObject **)((longlong)param_6 + lVar14),
                     (FVariantPropertyTypeIndex)*(uchar *)(lVar11 + (longlong)param_4),
                     (FTrackInstancePropertyBindings *)*puVar24,&local_128);
          puVar24 = puVar24 + 2;
          param_6 = (TRead<double>)((longlong)param_6 + 8);
          lVar11 = lVar11 + 1;
        } while (lVar11 < (longlong)uVar25);
      }
    }
    else {
      iVar13 = 0;
      if (uVar25 != 0) {
        lVar23 = 0;
        lVar21 = (longlong)param_5 - (longlong)param_12;
        lVar11 = (longlong)param_13 - (longlong)param_12;
        lVar14 = (longlong)param_11 - (longlong)param_12;
        lVar15 = (longlong)param_10 - (longlong)param_12;
        lVar18 = (longlong)param_9 - (longlong)param_12;
        lVar19 = (longlong)param_8 - (longlong)param_12;
        lVar20 = (longlong)param_7 - (longlong)param_12;
        lVar22 = (longlong)param_6 - (longlong)param_12;
        lVar16 = (longlong)param_2 - (longlong)param_12;
        do {
          dVar1 = *(double *)((longlong)param_12 + lVar11);
          dVar2 = *(double *)((longlong)param_12 + lVar19);
          uVar17 = *(ushort *)(lVar12 + lVar23 * 2);
          dVar3 = *(double *)((longlong)param_12 + lVar15);
          local_res20 = *(UObject **)((longlong)param_12 + lVar16);
          dVar4 = *(double *)((longlong)param_12 + lVar22);
          dVar5 = *(double *)((longlong)param_12 + lVar21);
          dVar6 = *(double *)param_12;
          dVar7 = *(double *)((longlong)param_12 + lVar14);
          dVar8 = *(double *)((longlong)param_12 + lVar18);
          dVar9 = *(double *)((longlong)param_12 + lVar20);
          local_res10 = CONCAT62(local_res10._2_6_,uVar17);
          if (uVar17 == 0) {
            local_d8 = &local_res10;
            local_d0 = &local_res20;
            bVar10 = `UE::MovieScene::
                     TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
                     ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_d8);
            if (bVar10) {
              uVar17 = (ushort)local_res10;
              goto LAB_1466781d2;
            }
          }
          else {
LAB_1466781d2:
            local_128.T_X = dVar5;
            local_128.T_Y = dVar4;
            local_128.T_Z = dVar9;
            local_128.R_X = dVar2;
            local_128.R_Y = dVar8;
            local_128.R_Z = dVar3;
            local_128.S_X = dVar7;
            local_128.S_Y = dVar6;
            local_128.S_Z = dVar1;
            TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
            ::SetObjectPropertyValue
                      (this->Traits,local_res20,
                       (FVariantPropertyTypeIndex)*(uchar *)((longlong)param_4 + (longlong)iVar13),
                       uVar17,&local_128);
          }
          iVar13 = iVar13 + 1;
          lVar23 = lVar23 + 1;
          param_12 = (TRead<double>)((longlong)param_12 + 8);
        } while (lVar23 < (longlong)uVar25);
      }
    }
  }
  else if (uVar25 != 0) {
    lVar14 = 0;
    lVar20 = (longlong)param_5 - (longlong)param_6;
    lVar21 = (longlong)param_7 - (longlong)param_6;
    local_res10 = (longlong)param_8 - (longlong)param_6;
    local_res20 = (UObject *)((longlong)param_9 - (longlong)param_6);
    lVar11 = (longlong)param_10 - (longlong)param_6;
    lVar16 = (longlong)param_11 - (longlong)param_6;
    lVar18 = (longlong)param_12 - (longlong)param_6;
    lVar19 = (longlong)param_13 - (longlong)param_6;
    lVar15 = (longlong)param_2 - (longlong)param_6;
    do {
      local_128.T_Y = *(double *)param_6;
      local_128.T_X = *(double *)(lVar20 + (longlong)param_6);
      local_128.T_Z = *(double *)((longlong)param_6 + lVar21);
      local_128.R_X = *(double *)(local_res10 + (longlong)param_6);
      local_128.R_Y = *(double *)(&local_res20->field_0x0 + (longlong)param_6);
      local_128.R_Z = *(double *)(lVar11 + (longlong)param_6);
      local_128.S_X = *(double *)(lVar16 + (longlong)param_6);
      local_128.S_Y = *(double *)(lVar18 + (longlong)param_6);
      local_128.S_Z = *(double *)(lVar19 + (longlong)param_6);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar12 + lVar14 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)(lVar15 + (longlong)param_6),&local_128);
      param_6 = (TRead<double>)((longlong)param_6 + 8);
      lVar14 = lVar14 + 1;
    } while (lVar14 < (longlong)uVar25);
  }
  return;
}

// ForEachAllocation @ 146678440

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TRead<double> param_5,TRead<double> param_6,TRead<double> param_7,
                   TRead<double> param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong local_res10 [2];
  UObject *local_res20;
  longlong *local_b8;
  UObject **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FIntermediateColor local_98 [3];
  
  uVar15 = (ulonglong)param_1->Size;
  local_res20 = *(UObject **)&param_3->Data;
  if (local_res20 == (UObject *)0x0) {
    lVar7 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar7 == 0) {
      puVar14 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar14 != (undefined8 *)0x0) && (uVar15 != 0)) {
        lVar7 = 0;
        lVar11 = (longlong)param_5 - (longlong)param_6;
        local_res10[0] = (longlong)param_7 - (longlong)param_6;
        local_res20 = (UObject *)((longlong)param_8 - (longlong)param_6);
        lVar8 = (longlong)param_2 - (longlong)param_6;
        do {
          local_98[0].R = *(double *)((longlong)param_6 + lVar11);
          local_98[0].G = *(double *)param_6;
          local_98[0].B = *(double *)((longlong)param_6 + local_res10[0]);
          local_98[0].A = *(double *)(&local_res20->field_0x0 + (longlong)param_6);
          TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
          ::SetObjectPropertyValue
                    (this->Traits,*(UObject **)((longlong)param_6 + lVar8),
                     (FVariantPropertyTypeIndex)*(uchar *)((longlong)param_4 + lVar7),
                     (FTrackInstancePropertyBindings *)*puVar14,local_98);
          puVar14 = puVar14 + 2;
          param_6 = (TRead<double>)((longlong)param_6 + 8);
          lVar7 = lVar7 + 1;
        } while (lVar7 < (longlong)uVar15);
      }
    }
    else {
      iVar6 = 0;
      if (uVar15 != 0) {
        lVar13 = 0;
        lVar8 = (longlong)param_8 - (longlong)param_7;
        lVar11 = (longlong)param_6 - (longlong)param_7;
        lVar12 = (longlong)param_5 - (longlong)param_7;
        lVar9 = (longlong)param_2 - (longlong)param_7;
        do {
          uVar10 = *(ushort *)(lVar7 + lVar13 * 2);
          dVar1 = *(double *)((longlong)param_7 + lVar8);
          dVar2 = *(double *)((longlong)param_7 + lVar12);
          local_res20 = *(UObject **)((longlong)param_7 + lVar9);
          dVar3 = *(double *)param_7;
          dVar4 = *(double *)((longlong)param_7 + lVar11);
          local_res10[0] = CONCAT62(local_res10[0]._2_6_,uVar10);
          if (uVar10 == 0) {
            local_b8 = local_res10;
            local_b0 = &local_res20;
            bVar5 = `UE::MovieScene::
                    TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                    ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_b8);
            if (bVar5) {
              uVar10 = (ushort)local_res10[0];
              goto LAB_1466785e1;
            }
          }
          else {
LAB_1466785e1:
            local_98[0].R = dVar2;
            local_98[0].G = dVar4;
            local_98[0].B = dVar3;
            local_98[0].A = dVar1;
            TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
            ::SetObjectPropertyValue
                      (this->Traits,local_res20,
                       (FVariantPropertyTypeIndex)*(uchar *)((longlong)param_4 + (longlong)iVar6),
                       uVar10,local_98);
          }
          iVar6 = iVar6 + 1;
          lVar13 = lVar13 + 1;
          param_7 = (TRead<double>)((longlong)param_7 + 8);
        } while (lVar13 < (longlong)uVar15);
      }
    }
  }
  else if (uVar15 != 0) {
    lVar7 = 0;
    lVar12 = (longlong)param_5 - (longlong)param_6;
    lVar11 = (longlong)param_7 - (longlong)param_6;
    local_res10[0] = (longlong)param_8 - (longlong)param_6;
    lVar8 = (longlong)param_2 - (longlong)param_6;
    do {
      local_b0 = *(UObject ***)param_6;
      local_b8 = *(longlong **)((longlong)param_6 + lVar12);
      local_a0 = *(undefined8 *)((longlong)param_6 + local_res10[0]);
      local_a8 = *(undefined8 *)((longlong)param_6 + lVar11);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(&local_res20->field_0x0 + lVar7 * 2) *
                       (this->CustomAccessors).Stride) + 0x20))
                (*(undefined8 *)((longlong)param_6 + lVar8),&local_b8);
      param_6 = (TRead<double>)((longlong)param_6 + 8);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)uVar15);
  }
  return;
}

// ForEachAllocation @ 146678730

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TRead<__int64> param_5)

{
  long64 lVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort local_res10 [8];
  UObject *local_res20;
  ushort *local_50;
  UObject **local_48;
  
  lVar9 = *(longlong *)&param_3->Data;
  uVar3 = (ulonglong)param_1->Size;
  if (lVar9 == 0) {
    lVar9 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar9 == 0) {
      puVar6 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar6 != (undefined8 *)0x0) && (uVar3 != 0)) {
        lVar9 = 0;
        lVar4 = (longlong)param_5 - (longlong)param_2;
        do {
          TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::
          SetObjectPropertyValue
                    (this->Traits,*(UObject **)param_2,
                     (FVariantPropertyTypeIndex)*(uchar *)((longlong)param_4 + lVar9),
                     (FTrackInstancePropertyBindings *)*puVar6,
                     *(long64 *)((longlong)param_2 + lVar4));
          lVar9 = lVar9 + 1;
          puVar6 = puVar6 + 2;
          param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
        } while (lVar9 < (longlong)uVar3);
      }
    }
    else {
      uVar5 = 0;
      if (uVar3 != 0) {
        lVar4 = (longlong)param_5 - (longlong)param_2;
        uVar8 = uVar5;
        do {
          local_res10[0] = *(ushort *)(lVar9 + uVar5 * 2);
          local_res20 = *(UObject **)param_2;
          lVar1 = *(long64 *)((longlong)param_2 + lVar4);
          if (local_res10[0] == 0) {
            local_50 = local_res10;
            local_48 = &local_res20;
            bVar2 = `UE::MovieScene::
                    TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
                    ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_50);
            if (bVar2) goto LAB_14667883f;
          }
          else {
LAB_14667883f:
            TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::
            SetObjectPropertyValue
                      (this->Traits,local_res20,
                       (FVariantPropertyTypeIndex)
                       *(uchar *)((longlong)(int)uVar8 + (longlong)param_4),local_res10[0],lVar1);
          }
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar5 = uVar5 + 1;
          param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
          if ((longlong)uVar3 <= (longlong)uVar5) {
            return;
          }
        } while( true );
      }
    }
  }
  else if (uVar3 != 0) {
    lVar7 = 0;
    lVar4 = (longlong)param_5 - (longlong)param_2;
    do {
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar9 + lVar7 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)param_2,*(undefined8 *)((longlong)param_2 + lVar4));
      lVar7 = lVar7 + 1;
      param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
    } while (lVar7 < (longlong)uVar3);
    return;
  }
  return;
}

// ForEachAllocation @ 146678900

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<unsigned_char> param_4)

{
  undefined1 uVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ushort local_res10 [8];
  longlong local_res20;
  ushort *local_38;
  longlong *local_30;
  
  lVar6 = *(longlong *)&param_3->Data;
  uVar3 = (ulonglong)param_1->Size;
  if (lVar6 == 0) {
    lVar6 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar6 == 0) {
      puVar4 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar4 != (undefined8 *)0x0) && (uVar3 != 0)) {
        lVar6 = 0;
        do {
          FTrackInstancePropertyBindings::CallFunction<unsigned_char>
                    ((FTrackInstancePropertyBindings *)*puVar4,
                     *(UObject **)((longlong)param_2 + lVar6 * 8),
                     *(uchar *)((longlong)param_4 + lVar6));
          lVar6 = lVar6 + 1;
          puVar4 = puVar4 + 2;
        } while (lVar6 < (longlong)uVar3);
      }
    }
    else if (uVar3 != 0) {
      lVar5 = 0;
      do {
        local_res10[0] = *(ushort *)(lVar6 + lVar5 * 2);
        local_res20 = *(longlong *)((longlong)param_2 + lVar5 * 8);
        uVar1 = *(undefined1 *)((longlong)param_4 + lVar5);
        if (local_res10[0] == 0) {
          local_38 = local_res10;
          local_30 = &local_res20;
          bVar2 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_38);
          if (bVar2) goto LAB_1466789d9;
        }
        else {
LAB_1466789d9:
          *(undefined1 *)((ulonglong)local_res10[0] + local_res20) = uVar1;
        }
        lVar5 = lVar5 + 1;
        if ((longlong)uVar3 <= lVar5) {
          return;
        }
      } while( true );
    }
  }
  else if (uVar3 != 0) {
    lVar5 = 0;
    do {
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar6 + lVar5 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)((longlong)param_2 + lVar5 * 8),
                         *(undefined1 *)((longlong)param_4 + lVar5));
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)uVar3);
    return;
  }
  return;
}

// ForEachAllocation @ 146678a50

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<double> param_4)

{
  double dVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort local_res10 [8];
  longlong local_res20;
  ushort *local_48;
  longlong *local_40;
  
  lVar6 = *(longlong *)&param_3->Data;
  uVar3 = (ulonglong)param_1->Size;
  if (lVar6 == 0) {
    lVar6 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar6 == 0) {
      puVar4 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar4 != (undefined8 *)0x0) && (uVar3 != 0)) {
        lVar6 = 0;
        lVar5 = (longlong)param_4 - (longlong)param_2;
        do {
          FTrackInstancePropertyBindings::CallFunction<float>
                    ((FTrackInstancePropertyBindings *)*puVar4,*(UObject **)param_2,
                     (float)*(double *)((longlong)param_2 + lVar5));
          lVar6 = lVar6 + 1;
          param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
          puVar4 = puVar4 + 2;
        } while (lVar6 < (longlong)uVar3);
      }
    }
    else if (uVar3 != 0) {
      lVar7 = 0;
      lVar5 = (longlong)param_4 - (longlong)param_2;
      do {
        local_res10[0] = *(ushort *)(lVar6 + lVar7 * 2);
        local_res20 = *(longlong *)param_2;
        dVar1 = *(double *)((longlong)param_2 + lVar5);
        if (local_res10[0] == 0) {
          local_48 = local_res10;
          local_40 = &local_res20;
          bVar2 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_48);
          if (bVar2) goto LAB_146678b51;
        }
        else {
LAB_146678b51:
          *(float *)((ulonglong)local_res10[0] + local_res20) = (float)dVar1;
        }
        lVar7 = lVar7 + 1;
        param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
        if ((longlong)uVar3 <= lVar7) {
          return;
        }
      } while( true );
    }
  }
  else if (uVar3 != 0) {
    lVar5 = 0;
    lVar7 = (longlong)param_4 - (longlong)param_2;
    do {
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar6 + lVar5 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)param_2,*(undefined8 *)((longlong)param_2 + lVar7));
      lVar5 = lVar5 + 1;
      param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
    } while (lVar5 < (longlong)uVar3);
    return;
  }
  return;
}

// ForEachAllocation @ 146678be0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<double> param_4,TRead<double> param_5,TRead<double> param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ushort local_res10 [8];
  longlong local_res20;
  TRotator<double> local_88 [3];
  
  lVar8 = *(longlong *)&param_3->Data;
  uVar6 = (ulonglong)param_1->Size;
  if (lVar8 == 0) {
    lVar8 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar8 == 0) {
      puVar11 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar11 != (undefined8 *)0x0) && (uVar6 != 0)) {
        lVar8 = 0;
        lVar10 = (longlong)param_4 - (longlong)param_5;
        lVar9 = (longlong)param_6 - (longlong)param_5;
        lVar7 = (longlong)param_2 - (longlong)param_5;
        do {
          local_88[0].Pitch = *(double *)((longlong)param_5 + lVar10);
          local_88[0].Yaw = *(double *)param_5;
          local_88[0].Roll = *(double *)((longlong)param_5 + lVar9);
          FTrackInstancePropertyBindings::CallFunction<UE::Math::TRotator<double>_>
                    ((FTrackInstancePropertyBindings *)*puVar11,
                     *(UObject **)((longlong)param_5 + lVar7),local_88);
          lVar8 = lVar8 + 1;
          param_5 = (TRead<double>)((longlong)param_5 + 8);
          puVar11 = puVar11 + 2;
        } while (lVar8 < (longlong)uVar6);
      }
    }
    else if (uVar6 != 0) {
      lVar7 = 0;
      lVar12 = (longlong)param_6 - (longlong)param_5;
      lVar10 = (longlong)param_4 - (longlong)param_5;
      lVar9 = (longlong)param_2 - (longlong)param_5;
      do {
        local_res10[0] = *(ushort *)(lVar8 + lVar7 * 2);
        local_res20 = *(longlong *)((longlong)param_5 + lVar9);
        uVar1 = *(undefined8 *)((longlong)param_5 + lVar12);
        uVar2 = *(undefined8 *)param_5;
        uVar3 = *(undefined8 *)((longlong)param_5 + lVar10);
        if (local_res10[0] == 0) {
          local_88[0].Pitch = (double)local_res10;
          local_88[0].Yaw = (double)&local_res20;
          bVar4 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(local_88);
          if (bVar4) goto LAB_146678d46;
        }
        else {
LAB_146678d46:
          uVar5 = (ulonglong)local_res10[0];
          *(undefined8 *)(uVar5 + local_res20) = uVar3;
          *(undefined8 *)(uVar5 + 8 + local_res20) = uVar2;
          *(undefined8 *)(uVar5 + 0x10 + local_res20) = uVar1;
        }
        lVar7 = lVar7 + 1;
        param_5 = (TRead<double>)((longlong)param_5 + 8);
      } while (lVar7 < (longlong)uVar6);
    }
  }
  else if (uVar6 != 0) {
    lVar7 = 0;
    lVar12 = (longlong)param_4 - (longlong)param_5;
    lVar10 = (longlong)param_6 - (longlong)param_5;
    lVar9 = (longlong)param_2 - (longlong)param_5;
    do {
      local_88[0].Pitch = *(double *)((longlong)param_5 + lVar12);
      local_88[0].Yaw = *(double *)param_5;
      local_88[0].Roll = *(double *)((longlong)param_5 + lVar10);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar8 + lVar7 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)((longlong)param_5 + lVar9),local_88);
      lVar7 = lVar7 + 1;
      param_5 = (TRead<double>)((longlong)param_5 + 8);
    } while (lVar7 < (longlong)uVar6);
  }
  return;
}

// ForEachAllocation @ 146678e20

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<double> param_4,TRead<double> param_5)

{
  double dVar1;
  double dVar2;
  TVector2<float> TVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float local_res10;
  float fStackX_14;
  longlong local_res20;
  float *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar7 = *(longlong *)&param_3->Data;
  uVar5 = (ulonglong)param_1->Size;
  if (lVar7 == 0) {
    lVar7 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar7 == 0) {
      puVar10 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar10 != (undefined8 *)0x0) && (uVar5 != 0)) {
        lVar7 = 0;
        lVar8 = (longlong)param_4 - (longlong)param_5;
        lVar6 = (longlong)param_2 - (longlong)param_5;
        do {
          local_res10 = (float)*(double *)((longlong)param_5 + lVar8);
          fStackX_14 = (float)*(double *)param_5;
          TVar3.field0_0x0._s_0.Y = fStackX_14;
          TVar3.field0_0x0._s_0.X = local_res10;
          FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<float>_>
                    ((FTrackInstancePropertyBindings *)*puVar10,
                     *(UObject **)((longlong)param_5 + lVar6),TVar3);
          lVar7 = lVar7 + 1;
          param_5 = (TRead<double>)((longlong)param_5 + 8);
          puVar10 = puVar10 + 2;
        } while (lVar7 < (longlong)uVar5);
      }
    }
    else if (uVar5 != 0) {
      lVar6 = 0;
      lVar9 = (longlong)param_5 - (longlong)param_4;
      lVar8 = (longlong)param_2 - (longlong)param_4;
      do {
        local_res10._0_2_ = *(ushort *)(lVar7 + lVar6 * 2);
        local_res20 = *(longlong *)((longlong)param_4 + lVar8);
        dVar1 = *(double *)((longlong)param_4 + lVar9);
        dVar2 = *(double *)param_4;
        if (local_res10._0_2_ == 0) {
          local_70 = &local_res10;
          local_68 = &local_res20;
          bVar4 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_70);
          if (bVar4) goto LAB_146678f60;
        }
        else {
LAB_146678f60:
          *(ulonglong *)((ulonglong)local_res10._0_2_ + local_res20) =
               CONCAT44((float)dVar1,(float)dVar2);
        }
        lVar6 = lVar6 + 1;
        param_4 = (TRead<double>)((longlong)param_4 + 8);
      } while (lVar6 < (longlong)uVar5);
    }
  }
  else if (uVar5 != 0) {
    lVar6 = 0;
    lVar9 = (longlong)param_4 - (longlong)param_5;
    lVar8 = (longlong)param_2 - (longlong)param_5;
    do {
      local_70 = *(float **)((longlong)param_5 + lVar9);
      local_68 = *(longlong **)param_5;
      local_60 = 0;
      uStack_58 = 0;
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar7 + lVar6 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)((longlong)param_5 + lVar8),&local_70);
      lVar6 = lVar6 + 1;
      param_5 = (TRead<double>)((longlong)param_5 + 8);
    } while (lVar6 < (longlong)uVar5);
  }
  return;
}

// ForEachAllocation @ 146679030

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<double> param_4,TRead<double> param_5,TRead<double> param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ushort local_res10 [8];
  longlong local_res20;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar8 = *(longlong *)&param_3->Data;
  uVar6 = (ulonglong)param_1->Size;
  if (lVar8 == 0) {
    lVar8 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar8 == 0) {
      puVar12 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar12 != (undefined8 *)0x0) && (uVar6 != 0)) {
        lVar8 = 0;
        lVar10 = (longlong)param_4 - (longlong)param_5;
        lVar9 = (longlong)param_6 - (longlong)param_5;
        lVar7 = (longlong)param_2 - (longlong)param_5;
        do {
          local_88._4_4_ = (float)*(double *)param_5;
          local_88._0_4_ = (float)*(double *)((longlong)param_5 + lVar10);
          local_80 = (longlong *)
                     CONCAT44(local_80._4_4_,(float)*(double *)((longlong)param_5 + lVar9));
          FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<float>_>
                    ((FTrackInstancePropertyBindings *)*puVar12,
                     *(UObject **)((longlong)param_5 + lVar7),(TVector<float> *)local_88);
          lVar8 = lVar8 + 1;
          param_5 = (TRead<double>)((longlong)param_5 + 8);
          puVar12 = puVar12 + 2;
        } while (lVar8 < (longlong)uVar6);
      }
    }
    else if (uVar6 != 0) {
      lVar7 = 0;
      lVar11 = (longlong)param_6 - (longlong)param_5;
      lVar10 = (longlong)param_4 - (longlong)param_5;
      lVar9 = (longlong)param_2 - (longlong)param_5;
      do {
        local_res10[0] = *(ushort *)(lVar8 + lVar7 * 2);
        local_res20 = *(longlong *)((longlong)param_5 + lVar9);
        dVar1 = *(double *)((longlong)param_5 + lVar11);
        dVar2 = *(double *)param_5;
        dVar3 = *(double *)((longlong)param_5 + lVar10);
        if (local_res10[0] == 0) {
          local_88 = (undefined1  [8])local_res10;
          local_80 = &local_res20;
          bVar4 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(local_88);
          if (bVar4) goto LAB_1466791a6;
        }
        else {
LAB_1466791a6:
          uVar5 = (ulonglong)local_res10[0];
          *(float *)(uVar5 + local_res20) = (float)dVar3;
          *(float *)(uVar5 + 4 + local_res20) = (float)dVar2;
          *(float *)(uVar5 + 8 + local_res20) = (float)dVar1;
        }
        lVar7 = lVar7 + 1;
        param_5 = (TRead<double>)((longlong)param_5 + 8);
      } while (lVar7 < (longlong)uVar6);
    }
  }
  else if (uVar6 != 0) {
    lVar7 = 0;
    lVar10 = (longlong)param_4 - (longlong)param_5;
    lVar11 = (longlong)param_6 - (longlong)param_5;
    lVar9 = (longlong)param_2 - (longlong)param_5;
    do {
      local_88 = *(undefined1 (*) [8])((longlong)param_5 + lVar10);
      local_80 = *(longlong **)param_5;
      local_78 = *(undefined8 *)((longlong)param_5 + lVar11);
      local_70 = 0;
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar8 + lVar7 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)((longlong)param_5 + lVar9),local_88);
      lVar7 = lVar7 + 1;
      param_5 = (TRead<double>)((longlong)param_5 + 8);
    } while (lVar7 < (longlong)uVar6);
  }
  return;
}

// ForEachAllocation @ 146679290

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<double> param_4,TRead<double> param_5,TRead<double> param_6,
                   TRead<double> param_7,TRead<double> param_8,TRead<double> param_9,
                   TRead<double> param_10,TRead<double> param_11,TRead<double> param_12)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  ushort uVar15;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  longlong local_res10 [2];
  longlong local_res20;
  TVector<double>_u_0 local_148;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_e0;
  longlong *local_d8;
  ulonglong uVar16;
  
  lVar18 = *(longlong *)&param_3->Data;
  uVar28 = (ulonglong)param_1->Size;
  if (lVar18 == 0) {
    lVar18 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar18 == 0) {
      puVar29 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar29 != (undefined8 *)0x0) && (uVar28 != 0)) {
        lVar17 = 0;
        lVar23 = (longlong)param_4 - (longlong)param_5;
        lVar24 = (longlong)param_6 - (longlong)param_5;
        local_res10[0] = (longlong)param_7 - (longlong)param_5;
        local_res20 = (longlong)param_8 - (longlong)param_5;
        lVar18 = (longlong)param_9 - (longlong)param_5;
        lVar20 = (longlong)param_10 - (longlong)param_5;
        lVar21 = (longlong)param_11 - (longlong)param_5;
        lVar22 = (longlong)param_12 - (longlong)param_5;
        lVar19 = (longlong)param_2 - (longlong)param_5;
        do {
          local_148._s_0.Y = (double)*(undefined8 *)param_5;
          local_148._s_0.Z = *(double *)((longlong)param_5 + lVar24);
          local_148._s_0.X = *(double *)((longlong)param_5 + lVar23);
          uStack_128 = *(undefined8 *)((longlong)param_5 + lVar18);
          local_130 = *(undefined8 *)((longlong)param_5 + local_res20);
          local_118 = *(undefined8 *)((longlong)param_5 + lVar20);
          local_108 = *(undefined8 *)((longlong)param_5 + lVar22);
          local_120 = *(undefined8 *)((longlong)param_5 + local_res10[0]);
          local_110 = *(undefined8 *)((longlong)param_5 + lVar21);
          FTrackInstancePropertyBindings::CallFunction<FEulerTransform>
                    ((FTrackInstancePropertyBindings *)*puVar29,
                     *(UObject **)((longlong)param_5 + lVar19),(FEulerTransform *)&local_148._s_0);
          param_5 = (TRead<double>)((longlong)param_5 + 8);
          puVar29 = puVar29 + 2;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (longlong)uVar28);
      }
    }
    else if (uVar28 != 0) {
      lVar21 = 0;
      lVar25 = (longlong)param_12 - (longlong)param_11;
      lVar27 = (longlong)param_10 - (longlong)param_11;
      lVar17 = (longlong)param_9 - (longlong)param_11;
      lVar19 = (longlong)param_8 - (longlong)param_11;
      lVar20 = (longlong)param_7 - (longlong)param_11;
      lVar23 = (longlong)param_6 - (longlong)param_11;
      lVar24 = (longlong)param_5 - (longlong)param_11;
      lVar26 = (longlong)param_4 - (longlong)param_11;
      lVar22 = (longlong)param_2 - (longlong)param_11;
      do {
        uVar2 = *(undefined8 *)(lVar17 + (longlong)param_11);
        uVar15 = *(ushort *)(lVar18 + lVar21 * 2);
        puVar1 = (undefined4 *)(lVar19 + (longlong)param_11);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        local_res20 = *(longlong *)((longlong)param_11 + lVar22);
        uVar3 = *(undefined8 *)((longlong)param_11 + lVar25);
        uVar4 = *(undefined8 *)param_11;
        puVar1 = (undefined4 *)((longlong)param_11 + lVar27);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar5 = *(undefined8 *)(lVar20 + (longlong)param_11);
        uVar6 = *(undefined8 *)((longlong)param_11 + lVar23);
        uVar7 = *(undefined8 *)((longlong)param_11 + lVar24);
        puVar1 = (undefined4 *)((longlong)param_11 + lVar26);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        local_res10[0] = CONCAT62(local_res10[0]._2_6_,uVar15);
        if (uVar15 == 0) {
          local_e0 = local_res10;
          local_d8 = &local_res20;
          bVar14 = `UE::MovieScene::
                   TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                   ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_e0);
          if (bVar14) {
            uVar15 = (ushort)local_res10[0];
            goto LAB_146679572;
          }
        }
        else {
LAB_146679572:
          uVar16 = (ulonglong)uVar15;
          puVar1 = (undefined4 *)(uVar16 + local_res20);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          puVar1[2] = (int)uVar7;
          puVar1[3] = (int)((ulonglong)uVar7 >> 0x20);
          *(undefined8 *)(uVar16 + 0x10 + local_res20) = uVar6;
          puVar1 = (undefined4 *)(uVar16 + 0x18 + local_res20);
          *puVar1 = uVar10;
          puVar1[1] = uVar11;
          puVar1[2] = (int)uVar2;
          puVar1[3] = (int)((ulonglong)uVar2 >> 0x20);
          *(undefined8 *)(uVar16 + 0x28 + local_res20) = uVar5;
          puVar1 = (undefined4 *)(uVar16 + 0x30 + local_res20);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = (int)uVar4;
          puVar1[3] = (int)((ulonglong)uVar4 >> 0x20);
          *(undefined8 *)(uVar16 + 0x40 + local_res20) = uVar3;
        }
        lVar21 = lVar21 + 1;
        param_11 = (TRead<double>)((longlong)param_11 + 8);
      } while (lVar21 < (longlong)uVar28);
    }
  }
  else if (uVar28 != 0) {
    lVar19 = 0;
    lVar26 = (longlong)param_4 - (longlong)param_5;
    local_res10[0] = (longlong)param_6 - (longlong)param_5;
    local_res20 = (longlong)param_7 - (longlong)param_5;
    lVar17 = (longlong)param_8 - (longlong)param_5;
    lVar21 = (longlong)param_9 - (longlong)param_5;
    lVar22 = (longlong)param_10 - (longlong)param_5;
    lVar23 = (longlong)param_11 - (longlong)param_5;
    lVar24 = (longlong)param_12 - (longlong)param_5;
    lVar20 = (longlong)param_2 - (longlong)param_5;
    do {
      local_148._s_0.X = *(double *)((longlong)param_5 + lVar26);
      local_148._s_0.Y = (double)*(undefined8 *)param_5;
      local_148._s_0.Z = *(double *)((longlong)param_5 + local_res10[0]);
      local_130 = *(undefined8 *)((longlong)param_5 + local_res20);
      uStack_128 = *(undefined8 *)((longlong)param_5 + lVar17);
      local_120 = *(undefined8 *)((longlong)param_5 + lVar21);
      local_118 = *(undefined8 *)((longlong)param_5 + lVar22);
      local_110 = *(undefined8 *)((longlong)param_5 + lVar23);
      local_108 = *(undefined8 *)((longlong)param_5 + lVar24);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar18 + lVar19 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)((longlong)param_5 + lVar20),&local_148);
      param_5 = (TRead<double>)((longlong)param_5 + 8);
      lVar19 = lVar19 + 1;
    } while (lVar19 < (longlong)uVar28);
  }
  return;
}

// ForEachAllocation @ 1466797a0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<double> param_4,TRead<double> param_5,TRead<double> param_6,
                   TRead<double> param_7,TRead<double> param_8,TRead<double> param_9,
                   TRead<double> param_10,TRead<double> param_11,TRead<double> param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  ushort uVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  longlong local_res10 [2];
  longlong local_res20;
  FIntermediate3DTransform local_128;
  longlong *local_d8;
  longlong *local_d0;
  ulonglong uVar12;
  
  lVar14 = *(longlong *)&param_3->Data;
  uVar24 = (ulonglong)param_1->Size;
  if (lVar14 == 0) {
    lVar14 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar14 == 0) {
      puVar25 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar25 != (undefined8 *)0x0) && (uVar24 != 0)) {
        lVar13 = 0;
        lVar19 = (longlong)param_4 - (longlong)param_5;
        lVar20 = (longlong)param_6 - (longlong)param_5;
        local_res10[0] = (longlong)param_7 - (longlong)param_5;
        local_res20 = (longlong)param_8 - (longlong)param_5;
        lVar14 = (longlong)param_9 - (longlong)param_5;
        lVar16 = (longlong)param_10 - (longlong)param_5;
        lVar17 = (longlong)param_11 - (longlong)param_5;
        lVar18 = (longlong)param_12 - (longlong)param_5;
        lVar15 = (longlong)param_2 - (longlong)param_5;
        do {
          local_128.T_X = *(double *)((longlong)param_5 + lVar19);
          local_128.T_Y = *(double *)param_5;
          local_128.T_Z = *(double *)((longlong)param_5 + lVar20);
          local_128.R_Y = *(double *)((longlong)param_5 + local_res20);
          local_128.R_X = *(double *)((longlong)param_5 + local_res10[0]);
          local_128.S_X = *(double *)((longlong)param_5 + lVar16);
          local_128.R_Z = *(double *)((longlong)param_5 + lVar14);
          local_128.S_Z = *(double *)((longlong)param_5 + lVar18);
          local_128.S_Y = *(double *)((longlong)param_5 + lVar17);
          FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
                    ((FTrackInstancePropertyBindings *)*puVar25,
                     *(UObject **)(lVar15 + (longlong)param_5),&local_128);
          param_5 = (TRead<double>)((longlong)param_5 + 8);
          puVar25 = puVar25 + 2;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (longlong)uVar24);
      }
    }
    else if (uVar24 != 0) {
      lVar17 = 0;
      lVar22 = (longlong)param_12 - (longlong)param_11;
      lVar23 = (longlong)param_10 - (longlong)param_11;
      lVar13 = (longlong)param_9 - (longlong)param_11;
      lVar15 = (longlong)param_8 - (longlong)param_11;
      lVar16 = (longlong)param_7 - (longlong)param_11;
      lVar19 = (longlong)param_6 - (longlong)param_11;
      lVar20 = (longlong)param_5 - (longlong)param_11;
      lVar21 = (longlong)param_4 - (longlong)param_11;
      lVar18 = (longlong)param_2 - (longlong)param_11;
      do {
        uVar1 = *(undefined8 *)((longlong)param_11 + lVar13);
        uVar11 = *(ushort *)(lVar14 + lVar17 * 2);
        uVar2 = *(undefined8 *)((longlong)param_11 + lVar15);
        local_res20 = *(longlong *)(lVar18 + (longlong)param_11);
        uVar3 = *(undefined8 *)((longlong)param_11 + lVar22);
        uVar4 = *(undefined8 *)param_11;
        uVar5 = *(undefined8 *)((longlong)param_11 + lVar23);
        uVar6 = *(undefined8 *)((longlong)param_11 + lVar16);
        uVar7 = *(undefined8 *)((longlong)param_11 + lVar19);
        uVar8 = *(undefined8 *)((longlong)param_11 + lVar20);
        uVar9 = *(undefined8 *)((longlong)param_11 + lVar21);
        local_res10[0] = CONCAT62(local_res10[0]._2_6_,uVar11);
        if (uVar11 == 0) {
          local_d8 = local_res10;
          local_d0 = &local_res20;
          bVar10 = `UE::MovieScene::
                   TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                   ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_d8);
          if (bVar10) {
            uVar11 = (ushort)local_res10[0];
            goto LAB_146679a82;
          }
        }
        else {
LAB_146679a82:
          uVar12 = (ulonglong)uVar11;
          *(undefined8 *)(uVar12 + local_res20) = uVar9;
          *(undefined8 *)(uVar12 + 8 + local_res20) = uVar8;
          *(undefined8 *)(uVar12 + 0x10 + local_res20) = uVar7;
          *(undefined8 *)(uVar12 + 0x18 + local_res20) = uVar6;
          *(undefined8 *)(uVar12 + 0x20 + local_res20) = uVar2;
          *(undefined8 *)(uVar12 + 0x28 + local_res20) = uVar1;
          *(undefined8 *)(uVar12 + 0x30 + local_res20) = uVar5;
          *(undefined8 *)(uVar12 + 0x38 + local_res20) = uVar4;
          *(undefined8 *)(uVar12 + 0x40 + local_res20) = uVar3;
        }
        lVar17 = lVar17 + 1;
        param_11 = (TRead<double>)((longlong)param_11 + 8);
      } while (lVar17 < (longlong)uVar24);
    }
  }
  else if (uVar24 != 0) {
    lVar15 = 0;
    lVar21 = (longlong)param_4 - (longlong)param_5;
    local_res10[0] = (longlong)param_6 - (longlong)param_5;
    local_res20 = (longlong)param_7 - (longlong)param_5;
    lVar13 = (longlong)param_8 - (longlong)param_5;
    lVar17 = (longlong)param_9 - (longlong)param_5;
    lVar18 = (longlong)param_10 - (longlong)param_5;
    lVar19 = (longlong)param_11 - (longlong)param_5;
    lVar20 = (longlong)param_12 - (longlong)param_5;
    lVar16 = (longlong)param_2 - (longlong)param_5;
    do {
      local_128.T_X = *(double *)(lVar21 + (longlong)param_5);
      local_128.T_Y = *(double *)param_5;
      local_128.T_Z = *(double *)(local_res10[0] + (longlong)param_5);
      local_128.R_X = *(double *)(local_res20 + (longlong)param_5);
      local_128.R_Y = *(double *)(lVar13 + (longlong)param_5);
      local_128.R_Z = *(double *)(lVar17 + (longlong)param_5);
      local_128.S_X = *(double *)(lVar18 + (longlong)param_5);
      local_128.S_Y = *(double *)(lVar19 + (longlong)param_5);
      local_128.S_Z = *(double *)(lVar20 + (longlong)param_5);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar14 + lVar15 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)(lVar16 + (longlong)param_5),&local_128);
      param_5 = (TRead<double>)((longlong)param_5 + 8);
      lVar15 = lVar15 + 1;
    } while (lVar15 < (longlong)uVar24);
  }
  return;
}

// ForEachAllocation @ 146679cb0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<double> param_4,TRead<double> param_5,TRead<double> param_6,
                   TRead<double> param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  ushort uVar6;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong local_res10 [2];
  longlong local_res20;
  undefined1 local_98 [8];
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong uVar7;
  
  lVar10 = *(longlong *)&param_3->Data;
  uVar8 = (ulonglong)param_1->Size;
  if (lVar10 == 0) {
    lVar10 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar10 == 0) {
      puVar14 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar14 != (undefined8 *)0x0) && (uVar8 != 0)) {
        lVar10 = 0;
        lVar13 = (longlong)param_4 - (longlong)param_5;
        lVar11 = (longlong)param_6 - (longlong)param_5;
        lVar12 = (longlong)param_7 - (longlong)param_5;
        lVar9 = (longlong)param_2 - (longlong)param_5;
        do {
          local_98._4_4_ = (float)*(double *)param_5;
          local_98._0_4_ = (float)*(double *)(lVar13 + (longlong)param_5);
          fStack_8c = (float)*(double *)((longlong)param_5 + lVar12);
          local_90 = (float)*(double *)(lVar11 + (longlong)param_5);
          FTrackInstancePropertyBindings::CallFunction<FLinearColor>
                    ((FTrackInstancePropertyBindings *)*puVar14,
                     *(UObject **)(lVar9 + (longlong)param_5),(FLinearColor *)local_98);
          lVar10 = lVar10 + 1;
          param_5 = (TRead<double>)((longlong)param_5 + 8);
          puVar14 = puVar14 + 2;
        } while (lVar10 < (longlong)uVar8);
      }
    }
    else if (uVar8 != 0) {
      lVar9 = 0;
      lVar15 = (longlong)param_7 - (longlong)param_6;
      lVar12 = (longlong)param_5 - (longlong)param_6;
      lVar13 = (longlong)param_4 - (longlong)param_6;
      lVar11 = (longlong)param_2 - (longlong)param_6;
      do {
        uVar6 = *(ushort *)(lVar10 + lVar9 * 2);
        local_res20 = *(longlong *)((longlong)param_6 + lVar11);
        dVar1 = *(double *)((longlong)param_6 + lVar15);
        dVar2 = *(double *)param_6;
        dVar3 = *(double *)((longlong)param_6 + lVar12);
        dVar4 = *(double *)((longlong)param_6 + lVar13);
        local_res10[0] = CONCAT62(local_res10[0]._2_6_,uVar6);
        if (uVar6 == 0) {
          local_98 = (undefined1  [8])local_res10;
          _local_90 = &local_res20;
          bVar5 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(local_98);
          if (bVar5) {
            uVar6 = (ushort)local_res10[0];
            goto LAB_146679e5c;
          }
        }
        else {
LAB_146679e5c:
          uVar7 = (ulonglong)uVar6;
          *(float *)(uVar7 + local_res20) = (float)dVar4;
          *(float *)(uVar7 + 4 + local_res20) = (float)dVar3;
          *(float *)(uVar7 + 8 + local_res20) = (float)dVar2;
          *(float *)(uVar7 + 0xc + local_res20) = (float)dVar1;
        }
        lVar9 = lVar9 + 1;
        param_6 = (TRead<double>)((longlong)param_6 + 8);
      } while (lVar9 < (longlong)uVar8);
    }
  }
  else if (uVar8 != 0) {
    lVar9 = 0;
    lVar12 = (longlong)param_4 - (longlong)param_5;
    lVar13 = (longlong)param_6 - (longlong)param_5;
    local_res10[0] = (longlong)param_7 - (longlong)param_5;
    lVar11 = (longlong)param_2 - (longlong)param_5;
    do {
      _local_90 = *(undefined8 *)param_5;
      local_98 = *(undefined1 (*) [8])((longlong)param_5 + lVar12);
      local_80 = *(undefined8 *)((longlong)param_5 + local_res10[0]);
      local_88 = *(undefined8 *)((longlong)param_5 + lVar13);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar10 + lVar9 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)((longlong)param_5 + lVar11),local_98);
      param_5 = (TRead<double>)((longlong)param_5 + 8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)uVar8);
  }
  return;
}

// ForEachAllocation @ 146679f80

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<FString> param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  void *_Src;
  ForAnyElementType _Src_00;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ForAnyElementType *pFVar10;
  void *local_res10;
  UObject *local_res20;
  FString local_70;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  void **local_50;
  UObject **local_48;
  
  lVar9 = *(longlong *)&param_3->Data;
  uVar7 = (ulonglong)param_1->Size;
  if (lVar9 == 0) {
    local_70.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&(param_3->Data).field_0x8;
    if (local_70.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      lVar9 = *(longlong *)&(param_3->Data).field_0x10;
      if ((lVar9 != 0) && (uVar7 != 0)) {
        lVar8 = 0;
        lVar9 = lVar9 - (longlong)param_4;
        do {
          local_70.Data.ArrayNum = *(int *)((longlong)param_4 + 8);
          lVar6 = (longlong)local_70.Data.ArrayNum;
          local_res20 = *(UObject **)((longlong)param_2 + lVar8 * 8);
          local_res10 = *(void **)param_4;
          local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_70.Data.ArrayNum == 0) {
            local_70.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_70,
                       local_70.Data.ArrayNum,&local_70.Data.ArrayMax);
            memcpy(local_70.Data.AllocatorInstance.Data,local_res10,lVar6 * 2);
          }
          FTrackInstancePropertyBindings::CallFunction<FString>
                    (*(FTrackInstancePropertyBindings **)((longlong)param_4 + lVar9),local_res20,
                     &local_70);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          lVar8 = lVar8 + 1;
          param_4 = (TRead<FString>)((longlong)param_4 + 0x10);
        } while (lVar8 < (longlong)uVar7);
      }
    }
    else if (uVar7 != 0) {
      lVar9 = 0;
      do {
        local_res20 = *(UObject **)((longlong)param_2 + lVar9 * 8);
        local_res10 = (void *)CONCAT62(local_res10._2_6_,
                                       *(short *)(local_70.Data.AllocatorInstance.Data + lVar9 * 2))
        ;
        if (*(short *)(local_70.Data.AllocatorInstance.Data + lVar9 * 2) == 0) {
          local_50 = &local_res10;
          local_48 = &local_res20;
          bVar5 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_50);
          if (bVar5) goto LAB_14667a0e7;
        }
        else {
LAB_14667a0e7:
          local_58 = *(int *)((longlong)param_4 + 8);
          lVar8 = (longlong)local_58;
          _Src = *(void **)param_4;
          local_60.Data = (FScriptContainerElement *)0x0;
          if (local_58 == 0) {
            local_54 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_58,0,&local_60,local_58,&local_54);
            memcpy(local_60.Data,_Src,lVar8 * 2);
          }
          iVar4 = local_58;
          _Src_00.Data = local_60.Data;
          pFVar10 = (ForAnyElementType *)
                    (&local_res20->field_0x0 + ((ulonglong)local_res10 & 0xffff));
          if (pFVar10 != &local_60) {
            piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
            iVar3 = *piVar1;
            *(int *)&pFVar10[1].Data = local_58;
            if ((local_58 == 0) && (iVar3 == 0)) {
              *piVar1 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_58,iVar3,pFVar10,local_58,piVar1);
              if (iVar4 != 0) {
                memcpy(pFVar10->Data,_Src_00.Data,(longlong)iVar4 * 2);
              }
            }
          }
          if (local_60.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data);
          }
        }
        lVar9 = lVar9 + 1;
        param_4 = (TRead<FString>)((longlong)param_4 + 0x10);
      } while (lVar9 < (longlong)uVar7);
    }
  }
  else if (uVar7 != 0) {
    lVar8 = 0;
    do {
      uVar2 = *(ushort *)(lVar9 + lVar8 * 2);
      local_res20 = *(UObject **)((longlong)param_2 + lVar8 * 8);
      local_70.Data.ArrayNum = *(int *)((longlong)param_4 + 8);
      lVar6 = (longlong)local_70.Data.ArrayNum;
      local_res10 = *(void **)param_4;
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_70.Data.ArrayNum == 0) {
        local_70.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_70,
                   local_70.Data.ArrayNum,&local_70.Data.ArrayMax);
        memcpy(local_70.Data.AllocatorInstance.Data,local_res10,lVar6 * 2);
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (local_res20,&local_70);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      lVar8 = lVar8 + 1;
      param_4 = (TRead<FString>)((longlong)param_4 + 0x10);
    } while (lVar8 < (longlong)uVar7);
  }
  return;
}

// ForEachAllocation @ 14667a2b0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<FText> param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  UObject *pUVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  longlong local_60;
  FText local_58;
  ushort *local_48;
  longlong *local_40;
  
  lVar10 = *(longlong *)&param_3->Data;
  uVar11 = (ulonglong)param_1->Size;
  if (lVar10 == 0) {
    local_58.TextData.Reference = *(ITextData **)&(param_3->Data).field_0x8;
    if (local_58.TextData.Reference == (ITextData *)0x0) {
      lVar10 = *(longlong *)&(param_3->Data).field_0x10;
      if ((lVar10 != 0) && (uVar11 != 0)) {
        lVar9 = 0;
        lVar10 = lVar10 - (longlong)param_4;
        do {
          local_58.TextData.Reference = *(ITextData **)param_4;
          pUVar6 = *(UObject **)((longlong)param_2 + lVar9 * 8);
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.TextData.Reference + 8))
                      (local_58.TextData.Reference,local_res10);
          }
          local_58.Flags = *(uint *)((longlong)param_4 + 8);
          FTrackInstancePropertyBindings::CallFunction<FText>
                    (*(FTrackInstancePropertyBindings **)(lVar10 + (longlong)param_4),pUVar6,
                     &local_58);
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
          }
          lVar9 = lVar9 + 1;
          param_4 = (TRead<FText>)((longlong)param_4 + 0x10);
        } while (lVar9 < (longlong)uVar11);
      }
    }
    else if (uVar11 != 0) {
      lVar10 = 0;
      do {
        local_res10[0] = *(ushort *)(&(local_58.TextData.Reference)->field_0x0 + lVar10 * 2);
        local_60 = *(longlong *)((longlong)param_2 + lVar10 * 8);
        if (local_res10[0] == 0) {
          local_48 = local_res10;
          local_40 = &local_60;
          bVar7 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_48);
          if (bVar7) goto LAB_14667a3bf;
        }
        else {
LAB_14667a3bf:
          plVar4 = *(longlong **)param_4;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4,local_res20);
          }
          plVar8 = (longlong *)((ulonglong)local_res10[0] + local_60);
          uVar2 = *(undefined4 *)((longlong)param_4 + 8);
          plVar5 = (longlong *)*plVar8;
          if (plVar5 != plVar4) {
            *plVar8 = (longlong)plVar4;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 8))(plVar4,local_68);
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          *(undefined4 *)(plVar8 + 1) = uVar2;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        lVar10 = lVar10 + 1;
        param_4 = (TRead<FText>)((longlong)param_4 + 0x10);
      } while (lVar10 < (longlong)uVar11);
    }
  }
  else if (uVar11 != 0) {
    lVar9 = 0;
    do {
      local_58.TextData.Reference = *(ITextData **)param_4;
      uVar1 = *(ushort *)(lVar10 + lVar9 * 2);
      uVar3 = *(undefined8 *)((longlong)param_2 + lVar9 * 8);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 8))
                  (local_58.TextData.Reference,local_res10);
      }
      local_58.Flags = *(uint *)((longlong)param_4 + 8);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar1 * (this->CustomAccessors).Stride) + 0x20))
                (uVar3,&local_58);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      lVar9 = lVar9 + 1;
      param_4 = (TRead<FText>)((longlong)param_4 + 0x10);
    } while (lVar9 < (longlong)uVar11);
  }
  return;
}

// ForEachEntity @ 14667fbc0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FVariantPropertyTypeIndex *param_3,double param_4)

{
  TDynamicVariantPropertyTraits<double,double>::SetObjectPropertyValue
            (this->Traits,param_1,(FVariantPropertyTypeIndex)param_3->Index,param_2->Object,param_4)
  ;
  return;
}

// ForEachEntity @ 14667fbe0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
                *this,UObject *param_1,ushort param_2,FVariantPropertyTypeIndex *param_3,
               double param_4)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_18;
  UObject **local_10;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 == 0) {
    local_18 = local_res18;
    local_10 = &local_res10;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_18);
    if (!bVar1) {
      return;
    }
  }
  TDynamicVariantPropertyTraits<double,double>::SetObjectPropertyValue
            (this->Traits,local_res10,(FVariantPropertyTypeIndex)param_3->Index,local_res18[0],
             param_4);
  return;
}

// ForEachEntity @ 14667fc60

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,
               FVariantPropertyTypeIndex *param_3,double param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  
  lVar1 = (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride);
  UNRECOVERED_JUMPTABLE = *(code **)((this->CustomAccessors).Base + lVar1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014667fc7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_4,lVar1,UNRECOVERED_JUMPTABLE);
  return;
}

// ForEachEntity @ 14667fc90

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FVariantPropertyTypeIndex *param_3,double param_4,double param_5,double param_6,
               double param_7)

{
  FDoubleIntermediateVector local_28;
  
  local_28.X = param_4;
  local_28.Y = param_5;
  local_28.Z = param_6;
  local_28.W = param_7;
  TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
  ::SetObjectPropertyValue
            (this->Traits,param_1,(FVariantPropertyTypeIndex)param_3->Index,param_2->Object,
             &local_28);
  return;
}

// ForEachEntity @ 14667fd00

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                *this,UObject *param_1,ushort param_2,FVariantPropertyTypeIndex *param_3,
               double param_4,double param_5,double param_6,double param_7)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  FDoubleIntermediateVector local_28;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 == 0) {
    local_28.X = (double)local_res18;
    local_28.Y = (double)&local_res10;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    if (!bVar1) {
      return;
    }
  }
  local_28.X = param_4;
  local_28.Y = param_5;
  local_28.Z = param_6;
  local_28.W = param_7;
  TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
  ::SetObjectPropertyValue
            (this->Traits,local_res10,(FVariantPropertyTypeIndex)param_3->Index,local_res18[0],
             &local_28);
  return;
}

// ForEachEntity @ 14667fdb0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,
               FVariantPropertyTypeIndex *param_3,double param_4,double param_5,double param_6,
               double param_7)

{
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_28);
  return;
}

// ForEachEntity @ 14667fe20

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FVariantPropertyTypeIndex *param_3,double param_4,double param_5,double param_6,
               double param_7)

{
  FFloatIntermediateVector local_28;
  
  local_28.X = param_4;
  local_28.Y = param_5;
  local_28.Z = param_6;
  local_28.W = param_7;
  TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
  ::SetObjectPropertyValue
            (this->Traits,param_1,(FVariantPropertyTypeIndex)param_3->Index,param_2->Object,
             &local_28);
  return;
}

// ForEachEntity @ 14667fe90

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                *this,UObject *param_1,ushort param_2,FVariantPropertyTypeIndex *param_3,
               double param_4,double param_5,double param_6,double param_7)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  FFloatIntermediateVector local_28;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 == 0) {
    local_28.X = (double)local_res18;
    local_28.Y = (double)&local_res10;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    if (!bVar1) {
      return;
    }
  }
  local_28.X = param_4;
  local_28.Y = param_5;
  local_28.Z = param_6;
  local_28.W = param_7;
  TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
  ::SetObjectPropertyValue
            (this->Traits,local_res10,(FVariantPropertyTypeIndex)param_3->Index,local_res18[0],
             &local_28);
  return;
}

// ForEachEntity @ 14667ff40

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,
               FVariantPropertyTypeIndex *param_3,double param_4,double param_5,double param_6,
               double param_7)

{
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_28);
  return;
}

// ForEachEntity @ 14667ffb0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FVariantPropertyTypeIndex *param_3,double param_4,double param_5,double param_6,
               double param_7,double param_8,double param_9,double param_10,double param_11,
               double param_12)

{
  FIntermediate3DTransform local_58;
  
  local_58.T_X = param_4;
  local_58.T_Z = param_6;
  local_58.T_Y = param_5;
  local_58.R_Y = param_8;
  local_58.R_X = param_7;
  local_58.S_X = param_10;
  local_58.R_Z = param_9;
  local_58.S_Z = param_12;
  local_58.S_Y = param_11;
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
  ::SetObjectPropertyValue
            (this->Traits,param_1,(FVariantPropertyTypeIndex)param_3->Index,param_2->Object,
             &local_58);
  return;
}

// ForEachEntity @ 146680070

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
                *this,UObject *param_1,ushort param_2,FVariantPropertyTypeIndex *param_3,
               double param_4,double param_5,double param_6,double param_7,double param_8,
               double param_9,double param_10,double param_11,double param_12)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_68;
  UObject **local_60;
  FIntermediate3DTransform local_58;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 == 0) {
    local_68 = local_res18;
    local_60 = &local_res10;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_68);
    if (!bVar1) {
      return;
    }
  }
  local_58.T_X = param_4;
  local_58.T_Z = param_6;
  local_58.T_Y = param_5;
  local_58.R_Y = param_8;
  local_58.R_X = param_7;
  local_58.S_X = param_10;
  local_58.R_Z = param_9;
  local_58.S_Z = param_12;
  local_58.S_Y = param_11;
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
  ::SetObjectPropertyValue
            (this->Traits,local_res10,(FVariantPropertyTypeIndex)param_3->Index,local_res18[0],
             &local_58);
  return;
}

// ForEachEntity @ 146680190

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,
               FVariantPropertyTypeIndex *param_3,double param_4,double param_5,double param_6,
               double param_7,double param_8,double param_9,double param_10,double param_11,
               double param_12)

{
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_58 = param_4;
  local_48 = param_6;
  local_50 = param_5;
  local_38 = param_8;
  local_40 = param_7;
  local_28 = param_10;
  local_30 = param_9;
  local_18 = param_12;
  local_20 = param_11;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_58);
  return;
}

// ForEachEntity @ 146680250

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FVariantPropertyTypeIndex *param_3,double param_4,double param_5,double param_6,
               double param_7)

{
  FIntermediateColor local_28;
  
  local_28.R = param_4;
  local_28.G = param_5;
  local_28.B = param_6;
  local_28.A = param_7;
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
  ::SetObjectPropertyValue
            (this->Traits,param_1,(FVariantPropertyTypeIndex)param_3->Index,param_2->Object,
             &local_28);
  return;
}

// ForEachEntity @ 1466802c0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                *this,UObject *param_1,ushort param_2,FVariantPropertyTypeIndex *param_3,
               double param_4,double param_5,double param_6,double param_7)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  FIntermediateColor local_28;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 == 0) {
    local_28.R = (double)local_res18;
    local_28.G = (double)&local_res10;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    if (!bVar1) {
      return;
    }
  }
  local_28.R = param_4;
  local_28.G = param_5;
  local_28.B = param_6;
  local_28.A = param_7;
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
  ::SetObjectPropertyValue
            (this->Traits,local_res10,(FVariantPropertyTypeIndex)param_3->Index,local_res18[0],
             &local_28);
  return;
}

// ForEachEntity @ 146680370

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,
               FVariantPropertyTypeIndex *param_3,double param_4,double param_5,double param_6,
               double param_7)

{
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_28);
  return;
}

// ForEachEntity @ 1466803e0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FVariantPropertyTypeIndex *param_3,long64 param_4)

{
  TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::SetObjectPropertyValue
            (this->Traits,param_1,(FVariantPropertyTypeIndex)param_3->Index,param_2->Object,param_4)
  ;
  return;
}

// ForEachEntity @ 146680400

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
                *this,UObject *param_1,ushort param_2,FVariantPropertyTypeIndex *param_3,
               long64 param_4)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_18;
  UObject **local_10;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 == 0) {
    local_18 = local_res18;
    local_10 = &local_res10;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_18);
    if (!bVar1) {
      return;
    }
  }
  TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::SetObjectPropertyValue
            (this->Traits,local_res10,(FVariantPropertyTypeIndex)param_3->Index,local_res18[0],
             param_4);
  return;
}

// ForEachEntity @ 146680480

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
                *this,UObject *param_1,FCustomPropertyIndex param_2,
               FVariantPropertyTypeIndex *param_3,long64 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  
  lVar1 = (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride);
  UNRECOVERED_JUMPTABLE = *(code **)((this->CustomAccessors).Base + lVar1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014668049f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_4,lVar1,UNRECOVERED_JUMPTABLE);
  return;
}

// ForEachEntity @ 1466804b0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               uchar param_3)

{
  FTrackInstancePropertyBindings::CallFunction<unsigned_char>(param_2->Object,param_1,param_3);
  return;
}

// ForEachEntity @ 1466804d0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
                *this,UObject *param_1,ushort param_2,uchar param_3)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_18;
  UObject **local_10;
  
  if (param_2 == 0) {
    local_18 = local_res18;
    local_10 = &local_res10;
    local_res10 = param_1;
    local_res18[0] = param_2;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_18);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  (&param_1->field_0x0)[param_2] = param_3;
  return;
}

// ForEachEntity @ 146680530

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
                *this,UObject *param_1,FCustomPropertyIndex param_2,uchar param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014668054e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,param_3);
  return;
}

// ForEachEntity @ 146680560

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3)

{
  FTrackInstancePropertyBindings::CallFunction<float>(param_2->Object,param_1,(float)param_3);
  return;
}

// ForEachEntity @ 146680580

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
                *this,UObject *param_1,ushort param_2,double param_3)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_28;
  UObject **local_20;
  
  if (param_2 == 0) {
    local_28 = local_res18;
    local_20 = &local_res10;
    local_res10 = param_1;
    local_res18[0] = param_2;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  *(float *)(&param_1->field_0x0 + param_2) = (float)param_3;
  return;
}

// ForEachEntity @ 1466805f0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  
  lVar1 = (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride);
  UNRECOVERED_JUMPTABLE = *(code **)((this->CustomAccessors).Base + lVar1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014668060a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,SUB84(param_3,0),lVar1,UNRECOVERED_JUMPTABLE);
  return;
}

// ForEachEntity @ 146680620

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3,double param_4,double param_5)

{
  TRotator<double> local_28;
  
  local_28.Yaw = param_4;
  local_28.Roll = param_5;
  local_28.Pitch = param_3;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TRotator<double>_>
            (param_2->Object,param_1,&local_28);
  return;
}

// ForEachEntity @ 146680660

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                *this,UObject *param_1,ushort param_2,double param_3,double param_4,double param_5)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_28;
  UObject **local_20;
  
  if (param_2 == 0) {
    local_28 = local_res18;
    local_20 = &local_res10;
    local_res10 = param_1;
    local_res18[0] = param_2;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  *(double *)(&param_1->field_0x0 + param_2) = param_3;
  *(double *)(&param_1->field_0x8 + param_2) = param_4;
  *(double *)(&param_1->field_0x10 + param_2) = param_5;
  return;
}

// ForEachEntity @ 1466806e0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3,double param_4,
               double param_5)

{
  double local_28;
  double local_20;
  double local_18;
  
  local_20 = param_4;
  local_18 = param_5;
  local_28 = param_3;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_28);
  return;
}

// ForEachEntity @ 146680730

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3,double param_4)

{
  TVector2<float> TVar1;
  
  TVar1.field0_0x0._s_0.Y = (float)param_4;
  TVar1.field0_0x0._s_0.X = (float)param_3;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<float>_>
            (param_2->Object,param_1,TVar1);
  return;
}

// ForEachEntity @ 146680760

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
                *this,UObject *param_1,ushort param_2,double param_3,double param_4)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  undefined8 local_28;
  UObject **local_20;
  
  if (param_2 == 0) {
    local_28 = local_res18;
    local_20 = &local_res10;
    local_res10 = param_1;
    local_res18[0] = param_2;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  local_28 = (ushort *)CONCAT44((float)param_4,(float)param_3);
  *(ushort **)(&param_1->field_0x0 + param_2) = local_28;
  return;
}

// ForEachEntity @ 1466807e0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3,double param_4)

{
  double local_28;
  double local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_20 = param_4;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = param_3;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_28);
  return;
}

// ForEachEntity @ 146680830

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3,double param_4,double param_5)

{
  TVector<float>_u_0 local_18 [2];
  
  local_18[0]._0_4_ = (undefined4)param_3;
  local_18[0]._4_4_ = (undefined4)param_4;
  local_18[0]._8_4_ = (undefined4)param_5;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<float>_>
            (param_2->Object,param_1,(TVector<float> *)&local_18[0]._s_0);
  return;
}

// ForEachEntity @ 146680880

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                *this,UObject *param_1,ushort param_2,double param_3,double param_4,double param_5)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_28;
  UObject **local_20;
  
  if (param_2 == 0) {
    local_28 = local_res18;
    local_20 = &local_res10;
    local_res10 = param_1;
    local_res18[0] = param_2;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  *(float *)(&param_1->field_0x0 + param_2) = (float)param_3;
  *(float *)(&param_1->field_0x4 + param_2) = (float)param_4;
  *(float *)(&param_1->field_0x8 + param_2) = (float)param_5;
  return;
}

// ForEachEntity @ 146680910

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3,double param_4,
               double param_5)

{
  double local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  
  local_20 = param_4;
  local_18 = param_5;
  local_10 = 0;
  local_28 = param_3;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_28);
  return;
}

// ForEachEntity @ 146680970

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3,double param_4,double param_5,double param_6,double param_7,
               double param_8,double param_9,double param_10,double param_11)

{
  TVector<double>_u_0 local_58;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = param_9;
  local_58._s_0.Z = param_5;
  local_40 = param_7;
  dStack_38 = param_8;
  local_18 = param_11;
  local_20 = param_10;
  local_58._s_0.Y = param_4;
  local_30 = param_6;
  local_58._s_0.X = param_3;
  FTrackInstancePropertyBindings::CallFunction<FEulerTransform>
            (param_2->Object,param_1,(FEulerTransform *)&local_58._s_0);
  return;
}

// ForEachEntity @ 146680a10

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                *this,UObject *param_1,ushort param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8,double param_9,double param_10,
               double param_11)

{
  undefined1 auVar1 [16];
  bool bVar2;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_38;
  UObject **local_30;
  
  if (param_2 == 0) {
    local_38 = local_res18;
    local_30 = &local_res10;
    local_res10 = param_1;
    local_res18[0] = param_2;
    bVar2 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_38);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar2) {
      return;
    }
  }
  *(double *)(&param_1->field_0x18 + param_2) = param_7;
  *(double *)((longlong)(&param_1->field_0x18 + param_2) + 8) = param_8;
  auVar1._8_4_ = SUB84(param_4,0);
  auVar1._0_8_ = param_3;
  auVar1._12_4_ = (int)((ulonglong)param_4 >> 0x20);
  *(undefined1 (*) [16])(&param_1->field_0x0 + param_2) = auVar1;
  *(double *)(&param_1->field_0x10 + param_2) = param_5;
  *(double *)(&param_1[1].field_0x0 + param_2) = param_6;
  *(double *)(&param_1[1].field_0x8 + param_2) = param_9;
  *(double *)((longlong)(&param_1[1].field_0x8 + param_2) + 8) = param_10;
  *(double *)(&param_1[1].field_0x18 + param_2) = param_11;
  return;
}

// ForEachEntity @ 146680af0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3,double param_4,
               double param_5,double param_6,double param_7,double param_8,double param_9,
               double param_10,double param_11)

{
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_6;
  local_38 = param_7;
  local_30 = param_8;
  local_28 = param_9;
  local_20 = param_10;
  local_18 = param_11;
  local_58 = param_3;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_58);
  return;
}

// ForEachEntity @ 146680ba0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3,double param_4,double param_5,double param_6,double param_7,
               double param_8,double param_9,double param_10,double param_11)

{
  FIntermediate3DTransform local_58;
  
  local_58.T_Y = param_4;
  local_58.T_Z = param_5;
  local_58.R_X = param_6;
  local_58.R_Y = param_7;
  local_58.R_Z = param_8;
  local_58.S_X = param_9;
  local_58.S_Y = param_10;
  local_58.S_Z = param_11;
  local_58.T_X = param_3;
  FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
            (param_2->Object,param_1,&local_58);
  return;
}

// ForEachEntity @ 146680c40

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                *this,UObject *param_1,ushort param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8,double param_9,double param_10,
               double param_11)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_28;
  UObject **local_20;
  
  if (param_2 == 0) {
    local_28 = local_res18;
    local_20 = &local_res10;
    local_res10 = param_1;
    local_res18[0] = param_2;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  *(double *)(&param_1->field_0x0 + param_2) = param_3;
  *(double *)(&param_1->field_0x8 + param_2) = param_4;
  *(double *)(&param_1->field_0x10 + param_2) = param_5;
  *(double *)(&param_1->field_0x18 + param_2) = param_6;
  *(double *)(&param_1->field_0x20 + param_2) = param_7;
  *(double *)(&param_1[1].field_0x0 + param_2) = param_8;
  *(double *)(&param_1[1].field_0x8 + param_2) = param_9;
  *(double *)(&param_1[1].field_0x10 + param_2) = param_10;
  *(double *)(&param_1[1].field_0x18 + param_2) = param_11;
  return;
}

// ForEachEntity @ 146680d20

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3,double param_4,
               double param_5,double param_6,double param_7,double param_8,double param_9,
               double param_10,double param_11)

{
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_6;
  local_38 = param_7;
  local_30 = param_8;
  local_28 = param_9;
  local_20 = param_10;
  local_18 = param_11;
  local_58 = param_3;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_58);
  return;
}

// ForEachEntity @ 146680dd0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3,double param_4,double param_5,double param_6)

{
  FLinearColor_u_0 local_18;
  
  local_18._s_0.G = (float)param_4;
  local_18._s_0.R = (float)param_3;
  local_18._s_0.A = (float)param_6;
  local_18._s_0.B = (float)param_5;
  FTrackInstancePropertyBindings::CallFunction<FLinearColor>
            (param_2->Object,param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// ForEachEntity @ 146680e30

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                *this,UObject *param_1,ushort param_2,double param_3,double param_4,double param_5,
               double param_6)

{
  bool bVar1;
  UObject *local_res10;
  ushort local_res18 [8];
  ushort *local_28;
  UObject **local_20;
  
  if (param_2 == 0) {
    local_28 = local_res18;
    local_20 = &local_res10;
    local_res10 = param_1;
    local_res18[0] = param_2;
    bVar1 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  *(float *)(&param_1->field_0x0 + param_2) = (float)param_3;
  *(float *)(&param_1->field_0x4 + param_2) = (float)param_4;
  *(float *)(&param_1->field_0x8 + param_2) = (float)param_5;
  *(float *)(&param_1->field_0xc + param_2) = (float)param_6;
  return;
}

// ForEachEntity @ 146680ed0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3,double param_4,
               double param_5,double param_6)

{
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_6;
  local_28 = param_3;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_28);
  return;
}

// ForEachEntity @ 146680f30

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FString *param_3)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_3->Data).ArrayNum;
  lVar1 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_3->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  FTrackInstancePropertyBindings::CallFunction<FString>(param_2->Object,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ForEachEntity @ 146680fe0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
                *this,UObject *param_1,ushort param_2,FString *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  UObject *local_res10;
  ushort local_res18 [4];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  ushort *local_18;
  UObject **local_10;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 == 0) {
    local_18 = local_res18;
    local_10 = &local_res10;
    bVar4 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_18);
    if (!bVar4) {
      return;
    }
  }
  local_20 = (param_3->Data).ArrayNum;
  lVar5 = (longlong)local_20;
  _Src = (param_3->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar5 * 2);
  }
  iVar3 = local_20;
  _Src_00.Data = local_28.Data;
  pFVar6 = (ForAnyElementType *)(&local_res10->field_0x0 + local_res18[0]);
  if (pFVar6 != &local_28) {
    iVar2 = *(int *)((longlong)&pFVar6[1].Data + 4);
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    *(int *)&pFVar6[1].Data = local_20;
    if ((local_20 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_20,iVar2,pFVar6,local_20,piVar1);
      if (iVar3 != 0) {
        memcpy(pFVar6->Data,_Src_00.Data,(longlong)iVar3 * 2);
      }
    }
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// ForEachEntity @ 146681130

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
                *this,UObject *param_1,FCustomPropertyIndex param_2,FString *param_3)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = (param_3->Data).ArrayNum;
  lVar1 = (longlong)local_10;
  _Src = (param_3->Data).AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar1 * 2);
  }
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_18);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ForEachEntity @ 146681200

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FText *param_3)

{
  undefined1 local_res18 [16];
  FText local_18;
  
  local_18.TextData.Reference = (param_3->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res18);
  }
  local_18.Flags = param_3->Flags;
  FTrackInstancePropertyBindings::CallFunction<FText>(param_2->Object,param_1,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// ForEachEntity @ 146681270

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
                *this,UObject *param_1,ushort param_2,FText *param_3)

{
  uint uVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  bool bVar4;
  longlong *plVar5;
  UObject *local_res10;
  ushort local_res18 [8];
  undefined1 local_38 [8];
  ushort *local_30;
  UObject **local_28;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 == 0) {
    local_30 = local_res18;
    local_28 = &local_res10;
    bVar4 = `UE::MovieScene::
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_30);
    if (!bVar4) {
      return;
    }
  }
  pIVar2 = (param_3->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_38);
  }
  uVar1 = param_3->Flags;
  plVar5 = (longlong *)(&local_res10->field_0x0 + local_res18[0]);
  pIVar3 = (ITextData *)*plVar5;
  if (pIVar3 != pIVar2) {
    *plVar5 = (longlong)pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_38);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)(plVar5 + 1) = uVar1;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  }
  return;
}

// ForEachEntity @ 146681340

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
                *this,UObject *param_1,FCustomPropertyIndex param_2,FText *param_3)

{
  undefined1 local_res18 [8];
  ITextData *local_18;
  uint local_10;
  
  local_18 = (param_3->TextData).Reference;
  if (local_18 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18 + 8))(local_18,local_res18);
  }
  local_10 = param_3->Flags;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_18);
  if (local_18 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18 + 0x10))();
  }
  return;
}

// operator() @ 1504ef2a0

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>::ForEachEntity(UObject*___ptr64,unsigned_short,UE::MovieScene::FVariantPropertyTypeIndex_const&___ptr64,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef320;
    }
  }
  bVar2 = false;
LAB_1504ef320:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef350

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,UE::MovieScene::FVariantPropertyTypeIndex_const&___ptr64,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef3d0;
    }
  }
  bVar2 = false;
LAB_1504ef3d0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef400

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,UE::MovieScene::FVariantPropertyTypeIndex_const&___ptr64,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef480;
    }
  }
  bVar2 = false;
LAB_1504ef480:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef4b0

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,UE::MovieScene::FVariantPropertyTypeIndex_const&___ptr64,double,double,double,double,double,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef530;
    }
  }
  bVar2 = false;
LAB_1504ef530:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef560

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,UE::MovieScene::FVariantPropertyTypeIndex_const&___ptr64,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef5e0;
    }
  }
  bVar2 = false;
LAB_1504ef5e0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef610

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>::ForEachEntity(UObject*___ptr64,unsigned_short,UE::MovieScene::FVariantPropertyTypeIndex_const&___ptr64,__int64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef690;
    }
  }
  bVar2 = false;
LAB_1504ef690:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef6c0

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>::ForEachEntity(UObject*___ptr64,unsigned_short,unsigned_char)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef740;
    }
  }
  bVar2 = false;
LAB_1504ef740:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef770

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef7f0;
    }
  }
  bVar2 = false;
LAB_1504ef7f0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef820

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef8a0;
    }
  }
  bVar2 = false;
LAB_1504ef8a0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef8d0

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ef950;
    }
  }
  bVar2 = false;
LAB_1504ef950:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ef980

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504efa00;
    }
  }
  bVar2 = false;
LAB_1504efa00:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504efa30

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double,double,double,double,double,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504efab0;
    }
  }
  bVar2 = false;
LAB_1504efab0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504efae0

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double,double,double,double,double,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504efb60;
    }
  }
  bVar2 = false;
LAB_1504efb60:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504efb90

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504efc10;
    }
  }
  bVar2 = false;
LAB_1504efc10:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504efc40

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>::ForEachEntity(UObject*___ptr64,unsigned_short,FString_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504efcc0;
    }
  }
  bVar2 = false;
LAB_1504efcc0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504efcf0

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
::ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929697>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929697>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>::ForEachEntity(UObject*___ptr64,unsigned_short,FText_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504efd70;
    }
  }
  bVar2 = false;
LAB_1504efd70:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

