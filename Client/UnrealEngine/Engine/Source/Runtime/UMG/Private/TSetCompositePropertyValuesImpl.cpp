// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// ForEachAllocation @ 14691a840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  ushort local_b8 [4];
  FMargin local_b0;
  ushort *local_a0;
  FMargin *local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b0._0_8_ = *(undefined8 *)&param_3->Data;
  uVar7 = (ulonglong)param_1->Size;
  if (local_b0._0_8_ == 0) {
    lVar8 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar8 == 0) {
      puVar12 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar12 != (undefined8 *)0x0) && (uVar7 != 0)) {
        lVar8 = 0;
        lVar13 = (longlong)param_4 - (longlong)param_5;
        lVar10 = (longlong)param_6 - (longlong)param_5;
        lVar11 = (longlong)param_7 - (longlong)param_5;
        lVar9 = (longlong)param_2 - (longlong)param_5;
        do {
          local_b0.Right = (float)*(double *)((longlong)param_5 + lVar10);
          local_b0.Bottom = (float)*(double *)((longlong)param_5 + lVar11);
          local_b0.Top = (float)*(double *)param_5;
          local_b0.Left = (float)*(double *)((longlong)param_5 + lVar13);
          FTrackInstancePropertyBindings::CallFunction<FMargin>
                    ((FTrackInstancePropertyBindings *)*puVar12,
                     *(UObject **)((longlong)param_5 + lVar9),&local_b0);
          lVar8 = lVar8 + 1;
          param_5 = (TRead<double>)((longlong)param_5 + 8);
          puVar12 = puVar12 + 2;
        } while (lVar8 < (longlong)uVar7);
      }
    }
    else if (uVar7 != 0) {
      lVar9 = 0;
      lVar14 = (longlong)param_7 - (longlong)param_6;
      lVar11 = (longlong)param_5 - (longlong)param_6;
      lVar13 = (longlong)param_4 - (longlong)param_6;
      lVar10 = (longlong)param_2 - (longlong)param_6;
      do {
        local_b8[0] = *(ushort *)(lVar8 + lVar9 * 2);
        local_b0._0_8_ = *(longlong *)((longlong)param_6 + lVar10);
        dVar1 = *(double *)((longlong)param_6 + lVar14);
        dVar2 = *(double *)param_6;
        dVar3 = *(double *)((longlong)param_6 + lVar11);
        dVar4 = *(double *)((longlong)param_6 + lVar13);
        if (local_b8[0] == 0) {
          local_a0 = local_b8;
          local_98 = &local_b0;
          bVar5 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_a0);
          if (bVar5) goto LAB_14691a9ea;
        }
        else {
LAB_14691a9ea:
          uVar6 = (ulonglong)local_b8[0];
          *(float *)(uVar6 + 4 + local_b0._0_8_) = (float)dVar3;
          *(float *)(uVar6 + 8 + local_b0._0_8_) = (float)dVar2;
          *(float *)(uVar6 + 0xc + local_b0._0_8_) = (float)dVar1;
          *(float *)(uVar6 + local_b0._0_8_) = (float)dVar4;
        }
        lVar9 = lVar9 + 1;
        param_6 = (TRead<double>)((longlong)param_6 + 8);
      } while (lVar9 < (longlong)uVar7);
    }
  }
  else if (uVar7 != 0) {
    lVar8 = 0;
    lVar13 = (longlong)param_4 - (longlong)param_5;
    lVar10 = (longlong)param_6 - (longlong)param_5;
    lVar11 = (longlong)param_7 - (longlong)param_5;
    lVar9 = (longlong)param_2 - (longlong)param_5;
    do {
      local_a0 = *(ushort **)((longlong)param_5 + lVar13);
      local_98 = *(FMargin **)param_5;
      local_90 = *(undefined8 *)((longlong)param_5 + lVar10);
      local_88 = *(undefined8 *)((longlong)param_5 + lVar11);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(local_b0._0_8_ + lVar8 * 2) *
                       (this->CustomAccessors).Stride) + 0x20))
                (*(undefined8 *)((longlong)param_5 + lVar9),&local_a0);
      param_5 = (TRead<double>)((longlong)param_5 + 8);
      lVar8 = lVar8 + 1;
    } while (lVar8 < (longlong)uVar7);
  }
  return;
}

// ForEachAllocation @ 14691ab20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<double> param_4,TRead<double> param_5,TRead<double> param_6,
                   TRead<double> param_7,TRead<double> param_8,TRead<double> param_9,
                   TRead<double> param_10)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_148 [32];
  ushort local_128 [4];
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  ushort *local_f8;
  longlong *local_f0;
  TVector2<double>_u_0 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar11 = *(longlong *)&param_3->Data;
  uVar15 = (ulonglong)param_1->Size;
  if (lVar11 == 0) {
    lVar11 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar11 == 0) {
      puVar16 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar16 != (undefined8 *)0x0) && (uVar15 != 0)) {
        lVar11 = 0;
        lVar12 = (longlong)param_4 - (longlong)param_5;
        lVar13 = (longlong)param_6 - (longlong)param_5;
        local_108 = (longlong)param_7 - (longlong)param_5;
        local_110 = (longlong)param_8 - (longlong)param_5;
        local_118 = (longlong)param_9 - (longlong)param_5;
        local_120 = (longlong)param_10 - (longlong)param_5;
        lVar10 = (longlong)param_2 - (longlong)param_5;
        do {
          local_e8._s_0.X = *(double *)(lVar12 + (longlong)param_5);
          local_e8._s_0.Y = (double)*(undefined8 *)param_5;
          local_d8 = *(undefined8 *)(local_108 + (longlong)param_5);
          local_b8 = CONCAT44(local_b8._4_4_,(float)*(double *)((longlong)param_5 + lVar13));
          local_d0 = *(undefined8 *)(local_110 + (longlong)param_5);
          local_c0 = *(undefined8 *)(local_120 + (longlong)param_5);
          local_c8 = *(undefined8 *)(local_118 + (longlong)param_5);
          FTrackInstancePropertyBindings::CallFunction<FWidgetTransform>
                    ((FTrackInstancePropertyBindings *)*puVar16,
                     *(UObject **)(lVar10 + (longlong)param_5),(FWidgetTransform *)&local_e8._s_0);
          param_5 = (TRead<double>)((longlong)param_5 + 8);
          puVar16 = puVar16 + 2;
          lVar11 = lVar11 + 1;
        } while (lVar11 < (longlong)uVar15);
      }
    }
    else if (uVar15 != 0) {
      lVar10 = 0;
      lVar13 = (longlong)param_10 - (longlong)param_9;
      lVar14 = (longlong)param_8 - (longlong)param_9;
      local_108 = (longlong)param_7 - (longlong)param_9;
      local_110 = (longlong)param_6 - (longlong)param_9;
      local_118 = (longlong)param_5 - (longlong)param_9;
      local_120 = (longlong)param_4 - (longlong)param_9;
      lVar12 = (longlong)param_2 - (longlong)param_9;
      do {
        uVar1 = *(undefined8 *)(local_108 + (longlong)param_9);
        local_128[0] = *(ushort *)(lVar11 + lVar10 * 2);
        dVar2 = *(double *)(local_110 + (longlong)param_9);
        local_100 = *(longlong *)(lVar12 + (longlong)param_9);
        uVar3 = *(undefined8 *)(lVar13 + (longlong)param_9);
        uVar4 = *(undefined8 *)param_9;
        uVar5 = *(undefined8 *)((longlong)param_9 + lVar14);
        uVar6 = *(undefined8 *)(local_118 + (longlong)param_9);
        uVar7 = *(undefined8 *)(local_120 + (longlong)param_9);
        if (local_128[0] == 0) {
          local_f8 = local_128;
          local_f0 = &local_100;
          bVar8 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_f8);
          if (bVar8) goto LAB_14691ad81;
        }
        else {
LAB_14691ad81:
          uVar9 = (ulonglong)local_128[0];
          *(undefined8 *)(uVar9 + local_100) = uVar7;
          *(float *)(uVar9 + 0x30 + local_100) = (float)dVar2;
          *(undefined8 *)(uVar9 + 8 + local_100) = uVar6;
          *(undefined8 *)(uVar9 + 0x10 + local_100) = uVar1;
          *(undefined8 *)(uVar9 + 0x18 + local_100) = uVar5;
          *(undefined8 *)(uVar9 + 0x20 + local_100) = uVar4;
          *(undefined8 *)(uVar9 + 0x28 + local_100) = uVar3;
        }
        lVar10 = lVar10 + 1;
        param_9 = (TRead<double>)((longlong)param_9 + 8);
      } while (lVar10 < (longlong)uVar15);
    }
  }
  else if (uVar15 != 0) {
    lVar10 = 0;
    lVar13 = (longlong)param_4 - (longlong)param_5;
    local_100 = (longlong)param_6 - (longlong)param_5;
    local_120 = (longlong)param_7 - (longlong)param_5;
    local_118 = (longlong)param_8 - (longlong)param_5;
    local_110 = (longlong)param_9 - (longlong)param_5;
    local_108 = (longlong)param_10 - (longlong)param_5;
    lVar12 = (longlong)param_2 - (longlong)param_5;
    do {
      local_e8._s_0.X = *(double *)((longlong)param_5 + lVar13);
      local_e8._s_0.Y = (double)*(undefined8 *)param_5;
      local_d8 = *(undefined8 *)(local_100 + (longlong)param_5);
      local_d0 = *(undefined8 *)(local_120 + (longlong)param_5);
      local_c8 = *(undefined8 *)(local_118 + (longlong)param_5);
      local_c0 = *(undefined8 *)(local_110 + (longlong)param_5);
      local_b8 = *(undefined8 *)(local_108 + (longlong)param_5);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)
                  (int)((uint)*(ushort *)(lVar11 + lVar10 * 2) * (this->CustomAccessors).Stride) +
                  0x20))(*(undefined8 *)(lVar12 + (longlong)param_5),&local_e8);
      param_5 = (TRead<double>)((longlong)param_5 + 8);
      lVar10 = lVar10 + 1;
    } while (lVar10 < (longlong)uVar15);
  }
  return;
}

// ForEachEntity @ 14691bb50

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3,double param_4,double param_5,double param_6)

{
  FMargin local_18;
  
  local_18.Top = (float)param_4;
  local_18.Right = (float)param_5;
  local_18.Bottom = (float)param_6;
  local_18.Left = (float)param_3;
  FTrackInstancePropertyBindings::CallFunction<FMargin>(param_2->Object,param_1,&local_18);
  return;
}

// ForEachEntity @ 14691bbb0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  *(float *)(&param_1->field_0x4 + param_2) = (float)param_4;
  *(float *)(&param_1->field_0x8 + param_2) = (float)param_5;
  *(float *)(&param_1->field_0xc + param_2) = (float)param_6;
  *(float *)(&param_1->field_0x0 + param_2) = (float)param_3;
  return;
}

// ForEachEntity @ 14691bc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3,double param_4,
               double param_5,double param_6)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30 = param_4;
  local_28 = param_5;
  local_20 = param_6;
  local_38 = param_3;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_38);
  return;
}

// ForEachEntity @ 14691bcd0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3,double param_4,double param_5,double param_6,double param_7,
               double param_8,double param_9)

{
  TVector2<double>_u_0 local_48;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  float local_18;
  
  local_18 = (float)param_5;
  local_48._s_0.Y = param_4;
  local_30 = param_7;
  local_38 = param_6;
  local_20 = param_9;
  local_28 = param_8;
  local_48._s_0.X = param_3;
  FTrackInstancePropertyBindings::CallFunction<FWidgetTransform>
            (param_2->Object,param_1,(FWidgetTransform *)&local_48._s_0);
  return;
}

// ForEachEntity @ 14691bd50

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
                *this,UObject *param_1,ushort param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8,double param_9)

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
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_28);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  *(double *)(&param_1->field_0x8 + param_2) = param_4;
  *(float *)(&param_1[1].field_0x8 + param_2) = (float)param_5;
  *(double *)(&param_1->field_0x18 + param_2) = param_7;
  *(double *)(&param_1->field_0x10 + param_2) = param_6;
  *(double *)(&param_1[1].field_0x0 + param_2) = param_9;
  *(double *)(&param_1->field_0x0 + param_2) = param_3;
  *(double *)(&param_1->field_0x20 + param_2) = param_8;
  return;
}

// ForEachEntity @ 14691be10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
                *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3,double param_4,
               double param_5,double param_6,double param_7,double param_8,double param_9)

{
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_6;
  local_28 = param_7;
  local_20 = param_8;
  local_18 = param_9;
  local_48 = param_3;
  (**(code **)((this->CustomAccessors).Base +
              (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20))
            (param_1,&local_48);
  return;
}

// operator() @ 1504f5d50

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f5dd0;
    }
  }
  bVar2 = false;
LAB_1504f5dd0:
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

// operator() @ 1504f5e00

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
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
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double,double,double,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f5e80;
    }
  }
  bVar2 = false;
LAB_1504f5e80:
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

