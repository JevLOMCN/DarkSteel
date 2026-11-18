// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// ForEachAllocation @ 14691af50

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<double> param_4,TReadOptional<double> param_5,
                   TReadOptional<double> param_6,TReadOptional<double> param_7)

{
  ushort *puVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar2;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (double *)param_4,(double *)param_5,(double *)param_6,(double *)param_7);
    return;
  }
  puVar1 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar1 != (ushort *)0x0) {
    ForEachFast(this,param_1,(UObject **)param_2,puVar1,(double *)param_4,(double *)param_5,
                (double *)param_6,(double *)param_7);
    return;
  }
  pTVar2 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
  if (pTVar2 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    ForEachSlow(this,param_1,(UObject **)param_2,pTVar2,(double *)param_4,(double *)param_5,
                (double *)param_6,(double *)param_7);
    return;
  }
  return;
}

// ForEachAllocation @ 14691afa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<double> param_4,TReadOptional<double> param_5,
                   TReadOptional<double> param_6,TReadOptional<double> param_7,
                   TReadOptional<double> param_8,TReadOptional<double> param_9,
                   TReadOptional<double> param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uchar uVar3;
  double *pdVar4;
  longlong lVar5;
  FResolvedPropertyAndFunction *this_00;
  FWidgetTransform *pFVar6;
  uint uVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStackY_198 [32];
  TIntegerSequence<int,0,1,2,3,4,5,6> local_148 [4];
  int local_144;
  longlong local_140;
  double *local_138;
  undefined8 *local_130;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
  *local_128;
  TRead<UObject_*> local_120;
  ulonglong local_118;
  FTrackInstancePropertyBindings *local_110;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_108;
  undefined1 local_f8 [16];
  TVector2<double>_u_0 local_e8;
  TVector2<double>_u_0 local_d8;
  float local_c8;
  undefined4 uStack_c4;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_110 = *(FTrackInstancePropertyBindings **)&param_3->Data;
  local_128 = this;
  local_120 = param_2;
  if (local_110 == (FTrackInstancePropertyBindings *)0x0) {
    local_130 = *(undefined8 **)&(param_3->Data).field_0x8;
    if (local_130 == (undefined8 *)0x0) {
      local_130 = *(undefined8 **)&(param_3->Data).field_0x10;
      if (local_130 != (undefined8 *)0x0) {
        local_118 = (ulonglong)param_1->Size;
        local_144 = 0;
        if (local_118 != 0) {
          local_140 = 0;
          do {
            local_110 = (FTrackInstancePropertyBindings *)*local_130;
            uVar2._0_4_ = 0.0;
            uVar14 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
            uVar15 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
            uVar16 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
            uVar17 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
            uVar18 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X,0);
            uVar19 = (undefined4)
                     ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._0_8_ >> 0x20);
            uVar20 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y,0);
            uVar21 = (undefined4)
                     ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._8_8_ >> 0x20);
            local_f8 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
            this_00 = FTrackInstancePropertyBindings::FindOrAdd
                                (local_110,*(UObject **)((longlong)local_120 + local_140 * 8));
            uVar3 = (this_00->ResolvedProperty).TypeIndex;
            if (uVar3 == '\0') {
              pFVar6 = FCachedProperty::GetPropertyAddress<FWidgetTransform>
                                 ((FCachedProperty *)this_00);
LAB_14691b437:
              if (pFVar6 != (FWidgetTransform *)0x0) {
                local_f8 = *(undefined1 (*) [16])&(pFVar6->Translation).field0_0x0._s_0;
                uVar18 = *(undefined4 *)&(pFVar6->Scale).field0_0x0;
                uVar19 = *(undefined4 *)((longlong)&(pFVar6->Scale).field0_0x0 + 4);
                uVar20 = *(undefined4 *)((longlong)&(pFVar6->Scale).field0_0x0 + 8);
                uVar21 = *(undefined4 *)((longlong)&(pFVar6->Scale).field0_0x0 + 0xc);
                uVar14 = *(undefined4 *)&(pFVar6->Shear).field0_0x0;
                uVar15 = *(undefined4 *)((longlong)&(pFVar6->Shear).field0_0x0 + 4);
                uVar16 = *(undefined4 *)((longlong)&(pFVar6->Shear).field0_0x0 + 8);
                uVar17 = *(undefined4 *)((longlong)&(pFVar6->Shear).field0_0x0 + 0xc);
                uVar2._0_4_ = pFVar6->Angle;
                uVar2._4_4_ = *(undefined4 *)&pFVar6->field_0x34;
                _local_c8 = uVar2;
              }
            }
            else if (uVar3 == '\x01') {
              pFVar6 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
              goto LAB_14691b437;
            }
            lVar8 = (longlong)local_144;
            pdVar4 = (double *)0x0;
            dStack_98 = (double)CONCAT44(uVar15,uVar14);
            dStack_a8 = (double)CONCAT44(uVar19,uVar18);
            local_a0 = (double)CONCAT44(uVar21,uVar20);
            local_90 = (double)CONCAT44(uVar17,uVar16);
            local_c0 = (double)local_f8._0_8_;
            dStack_b8 = (double)local_f8._8_8_;
            local_b0 = (double)(float)uVar2;
            if (param_10 == (TReadOptional<double>)0x0) {
              local_138 = (double *)0x0;
            }
            else {
              local_138 = (double *)((longlong)param_10 + lVar8 * 8);
            }
            pdVar12 = (double *)(lVar8 * 8 + (longlong)param_9);
            if (param_9 == (TReadOptional<double>)0x0) {
              pdVar12 = pdVar4;
            }
            pdVar13 = (double *)((longlong)param_8 + lVar8 * 8);
            if (param_8 == (TReadOptional<double>)0x0) {
              pdVar13 = pdVar4;
            }
            pdVar11 = (double *)((longlong)param_7 + lVar8 * 8);
            if (param_7 == (TReadOptional<double>)0x0) {
              pdVar11 = pdVar4;
            }
            pdVar10 = (double *)((longlong)param_6 + lVar8 * 8);
            if (param_6 == (TReadOptional<double>)0x0) {
              pdVar10 = pdVar4;
            }
            pdVar9 = (double *)((longlong)param_5 + lVar8 * 8);
            if (param_5 == (TReadOptional<double>)0x0) {
              pdVar9 = pdVar4;
            }
            if (param_4 != (TReadOptional<double>)0x0) {
              pdVar4 = (double *)((longlong)param_4 + lVar8 * 8);
            }
            local_108.DataPtr = (local_128->CompositeDefinitions).DataPtr;
            local_108.ArrayNum = (local_128->CompositeDefinitions).ArrayNum;
            local_108._12_4_ = *(undefined4 *)&(local_128->CompositeDefinitions).field_0xc;
            PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6>
                      (local_148,&local_108,(uchar *)&local_c0,pdVar4,pdVar9,pdVar10,pdVar11,pdVar13
                       ,pdVar12,local_138);
            local_f8._8_8_ = dStack_b8;
            local_f8._0_8_ = local_c0;
            local_e8._s_0.X = dStack_a8;
            local_e8._s_0.Y = local_a0;
            local_c8 = (float)local_b0;
            local_d8._s_0.X = dStack_98;
            local_d8._s_0.Y = local_90;
            FTrackInstancePropertyBindings::CallFunction<FWidgetTransform>
                      (local_110,*(UObject **)((longlong)local_120 + local_140 * 8),
                       (FWidgetTransform *)local_f8);
            local_140 = local_140 + 1;
            local_144 = local_144 + 1;
            local_130 = local_130 + 2;
          } while (local_140 < (longlong)local_118);
        }
      }
    }
    else {
      local_118 = (ulonglong)param_1->Size;
      local_144 = 0;
      if (local_118 != 0) {
        local_140 = 0;
        do {
          pdVar4 = (double *)0x0;
          local_110 = (FTrackInstancePropertyBindings *)
                      (ulonglong)*(ushort *)((longlong)local_130 + local_140 * 2);
          lVar8 = *(longlong *)((longlong)local_120 + local_140 * 8);
          lVar5 = (longlong)local_144;
          local_c0 = *(double *)(lVar8 + (longlong)local_110);
          dStack_b8 = ((double *)(lVar8 + (longlong)local_110))[1];
          puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)local_110);
          dStack_a8 = (double)*puVar1;
          local_a0 = (double)puVar1[1];
          local_b0 = (double)*(float *)(lVar8 + 0x30 + (longlong)local_110);
          puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)local_110);
          dStack_98 = (double)*puVar1;
          local_90 = (double)puVar1[1];
          if (param_10 == (TReadOptional<double>)0x0) {
            local_138 = (double *)0x0;
          }
          else {
            local_138 = (double *)((longlong)param_10 + lVar5 * 8);
          }
          pdVar12 = (double *)(lVar5 * 8 + (longlong)param_9);
          if (param_9 == (TReadOptional<double>)0x0) {
            pdVar12 = pdVar4;
          }
          pdVar13 = (double *)((longlong)param_8 + lVar5 * 8);
          if (param_8 == (TReadOptional<double>)0x0) {
            pdVar13 = pdVar4;
          }
          pdVar11 = (double *)((longlong)param_7 + lVar5 * 8);
          if (param_7 == (TReadOptional<double>)0x0) {
            pdVar11 = pdVar4;
          }
          pdVar10 = (double *)((longlong)param_6 + lVar5 * 8);
          if (param_6 == (TReadOptional<double>)0x0) {
            pdVar10 = pdVar4;
          }
          pdVar9 = (double *)((longlong)param_5 + lVar5 * 8);
          if (param_5 == (TReadOptional<double>)0x0) {
            pdVar9 = pdVar4;
          }
          if (param_4 != (TReadOptional<double>)0x0) {
            pdVar4 = (double *)((longlong)param_4 + lVar5 * 8);
          }
          local_108.DataPtr = (local_128->CompositeDefinitions).DataPtr;
          local_108.ArrayNum = (local_128->CompositeDefinitions).ArrayNum;
          local_108._12_4_ = *(undefined4 *)&(local_128->CompositeDefinitions).field_0xc;
          PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6>
                    (local_148,&local_108,(uchar *)&local_c0,pdVar4,pdVar9,pdVar10,pdVar11,pdVar13,
                     pdVar12,local_138);
          local_144 = local_144 + 1;
          lVar8 = *(longlong *)((longlong)local_120 + local_140 * 8);
          local_140 = local_140 + 1;
          *(double *)(lVar8 + (longlong)local_110) = local_c0;
          ((double *)(lVar8 + (longlong)local_110))[1] = dStack_b8;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)local_110);
          *puVar1 = dStack_a8;
          puVar1[1] = local_a0;
          puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)local_110);
          *puVar1 = dStack_98;
          puVar1[1] = local_90;
          *(float *)(lVar8 + 0x30 + (longlong)local_110) = (float)local_b0;
        } while (local_140 < (longlong)local_118);
      }
    }
  }
  else {
    local_118 = (ulonglong)param_1->Size;
    local_144 = 0;
    if (local_118 != 0) {
      local_140 = 0;
      do {
        local_90 = 0.0;
        uVar7 = (uint)*(ushort *)((longlong)local_110 + local_140 * 2);
        local_130 = (undefined8 *)CONCAT44(local_130._4_4_,uVar7);
        local_c0 = 0.0;
        dStack_b8 = 0.0;
        local_b0 = 0.0;
        dStack_a8 = 0.0;
        local_a0 = 0.0;
        dStack_98 = 0.0;
        pdVar4 = (double *)
                 (**(code **)((local_128->CustomAccessors).Base +
                             (longlong)(int)(uVar7 * (local_128->CustomAccessors).Stride) + 0x18))
                           (local_f8,*(undefined8 *)((longlong)local_120 + local_140 * 8));
        lVar8 = (longlong)local_144;
        local_c0 = *pdVar4;
        dStack_b8 = pdVar4[1];
        local_b0 = pdVar4[2];
        dStack_a8 = pdVar4[3];
        local_a0 = pdVar4[4];
        dStack_98 = pdVar4[5];
        local_90 = pdVar4[6];
        pdVar4 = (double *)0x0;
        if (param_10 == (TReadOptional<double>)0x0) {
          local_138 = (double *)0x0;
        }
        else {
          local_138 = (double *)((longlong)param_10 + lVar8 * 8);
        }
        pdVar12 = (double *)(lVar8 * 8 + (longlong)param_9);
        if (param_9 == (TReadOptional<double>)0x0) {
          pdVar12 = pdVar4;
        }
        pdVar13 = (double *)((longlong)param_8 + lVar8 * 8);
        if (param_8 == (TReadOptional<double>)0x0) {
          pdVar13 = pdVar4;
        }
        pdVar11 = (double *)((longlong)param_7 + lVar8 * 8);
        if (param_7 == (TReadOptional<double>)0x0) {
          pdVar11 = pdVar4;
        }
        pdVar10 = (double *)((longlong)param_6 + lVar8 * 8);
        if (param_6 == (TReadOptional<double>)0x0) {
          pdVar10 = pdVar4;
        }
        pdVar9 = (double *)((longlong)param_5 + lVar8 * 8);
        if (param_5 == (TReadOptional<double>)0x0) {
          pdVar9 = pdVar4;
        }
        if (param_4 != (TReadOptional<double>)0x0) {
          pdVar4 = (double *)((longlong)param_4 + lVar8 * 8);
        }
        local_108.DataPtr = (local_128->CompositeDefinitions).DataPtr;
        local_108.ArrayNum = (local_128->CompositeDefinitions).ArrayNum;
        local_108._12_4_ = *(undefined4 *)&(local_128->CompositeDefinitions).field_0xc;
        PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6>
                  (local_148,&local_108,(uchar *)&local_c0,pdVar4,pdVar9,pdVar10,pdVar11,pdVar13,
                   pdVar12,local_138);
        (**(code **)((local_128->CustomAccessors).Base +
                    (longlong)((int)local_130 * (local_128->CustomAccessors).Stride) + 0x20))
                  (*(undefined8 *)((longlong)local_120 + local_140 * 8),&local_c0);
        local_144 = local_144 + 1;
        local_140 = local_140 + 1;
      } while (local_140 < (longlong)local_118);
    }
  }
  return;
}

// ForEachCustom @ 14691b600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4,double *param_5,double *param_6,double *param_7)

{
  code *pcVar1;
  FPropertyCompositeDefinition *pFVar2;
  bool bVar3;
  double *pdVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  double *pdVar8;
  double *pdVar9;
  ulonglong uVar10;
  double *pdVar11;
  double *pdVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  uint local_b8;
  uint local_b4;
  UObject **local_b0;
  ulonglong local_a8;
  FCustomPropertyIndex *local_a0;
  FPropertyCompositeDefinition *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  double local_68 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_a8 = (ulonglong)param_1->Size;
  uVar7 = 0;
  local_b8 = 0;
  uVar10 = uVar7;
  local_b0 = param_2;
  local_a0 = param_3;
  if (local_a8 != 0) {
    do {
      pdVar8 = (double *)0x0;
      local_b4 = (uint)local_a0[uVar10].Value;
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      local_68[3] = 0.0;
      pdVar4 = (double *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)(local_b4 * (this->CustomAccessors).Stride) + 0x18))
                         (local_88,local_b0[uVar10]);
      local_68[0] = *pdVar4;
      local_68[1] = pdVar4[1];
      local_68[2] = pdVar4[2];
      local_68[3] = pdVar4[3];
      iVar5 = (int)uVar7;
      pdVar4 = param_7 + iVar5;
      if (param_7 == (double *)0x0) {
        pdVar4 = pdVar8;
      }
      pdVar12 = param_6 + iVar5;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar8;
      }
      pdVar11 = param_5 + iVar5;
      if (param_5 == (double *)0x0) {
        pdVar11 = pdVar8;
      }
      pdVar9 = param_4 + iVar5;
      if (param_4 == (double *)0x0) {
        pdVar9 = pdVar8;
      }
      local_98 = (this->CompositeDefinitions).DataPtr;
      uStack_90 = *(undefined8 *)&(this->CompositeDefinitions).ArrayNum;
      iVar5 = (this->CompositeDefinitions).ArrayNum;
      lVar6 = (longlong)iVar5;
      if (iVar5 < 1) {
        local_c8 = 0;
        local_c0 = lVar6;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = local_98;
      if (pdVar9 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)local_98->CompositeOffset) = *pdVar9;
      }
      if (iVar5 < 2) {
        local_c8 = 1;
        local_c0 = lVar6;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (pdVar11 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar2[1].CompositeOffset) = *pdVar11;
      }
      if (iVar5 < 3) {
        local_c8 = 2;
        local_c0 = lVar6;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar2[2].CompositeOffset) = *pdVar12;
      }
      if (iVar5 < 4) {
        local_c8 = 3;
        local_c0 = lVar6;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (pdVar4 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar2[3].CompositeOffset) = *pdVar4;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)(local_b4 * (this->CustomAccessors).Stride) + 0x20))
                (local_b0[uVar10],local_68);
      uVar10 = uVar10 + 1;
      local_b8 = local_b8 + 1;
      uVar7 = (ulonglong)local_b8;
    } while ((longlong)uVar10 < (longlong)local_a8);
  }
  return;
}

// ForEachCustom @ 14691b8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4,double *param_5,double *param_6,double *param_7,double *param_8,
               double *param_9,double *param_10)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  undefined1 auStackY_148 [32];
  TIntegerSequence<int,0,1,2,3,4,5,6> local_f8 [4];
  int local_f4;
  uint local_f0;
  UObject **local_e8;
  ulonglong local_e0;
  FCustomPropertyIndex *local_d8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_c8;
  undefined1 local_b8 [56];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_e0 = (ulonglong)param_1->Size;
  local_f4 = 0;
  if (local_e0 != 0) {
    lVar7 = 0;
    local_e8 = param_2;
    local_d8 = param_3;
    do {
      iVar1 = local_f4;
      local_50 = 0;
      local_f0 = (uint)local_d8[lVar7].Value;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      puVar2 = (undefined8 *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)(local_f0 * (this->CustomAccessors).Stride) + 0x18))
                         (local_b8,local_e8[lVar7]);
      pdVar9 = (double *)0x0;
      local_80 = *puVar2;
      uStack_78 = puVar2[1];
      local_70 = puVar2[2];
      uStack_68 = puVar2[3];
      local_60 = puVar2[4];
      uStack_58 = puVar2[5];
      local_50 = puVar2[6];
      lVar3 = (longlong)iVar1;
      pdVar10 = param_10 + lVar3;
      if (param_10 == (double *)0x0) {
        pdVar10 = pdVar9;
      }
      pdVar11 = param_9 + lVar3;
      if (param_9 == (double *)0x0) {
        pdVar11 = pdVar9;
      }
      pdVar6 = param_8 + lVar3;
      if (param_8 == (double *)0x0) {
        pdVar6 = pdVar9;
      }
      pdVar8 = param_7 + lVar3;
      if (param_7 == (double *)0x0) {
        pdVar8 = pdVar9;
      }
      pdVar5 = param_6 + lVar3;
      if (param_6 == (double *)0x0) {
        pdVar5 = pdVar9;
      }
      pdVar4 = param_5 + lVar3;
      if (param_5 == (double *)0x0) {
        pdVar4 = pdVar9;
      }
      if (param_4 != (double *)0x0) {
        pdVar9 = param_4 + lVar3;
      }
      local_c8.DataPtr = (this->CompositeDefinitions).DataPtr;
      local_c8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6>
                (local_f8,&local_c8,(uchar *)&local_80,pdVar9,pdVar4,pdVar5,pdVar8,pdVar6,pdVar11,
                 pdVar10);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)(local_f0 * (this->CustomAccessors).Stride) + 0x20))
                (local_e8[lVar7],&local_80);
      lVar7 = lVar7 + 1;
      local_f4 = local_f4 + 1;
    } while (lVar7 < (longlong)local_e0);
  }
  return;
}

// ForEachFast @ 14691bec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4,
             double *param_5,double *param_6,double *param_7)

{
  ushort uVar1;
  UObject *pUVar2;
  code *pcVar3;
  double dVar4;
  FPropertyCompositeDefinition *pFVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  ulonglong uVar13;
  double *pdVar14;
  double *pdVar15;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  UObject **local_a0;
  ulonglong local_98;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
  *local_90;
  ushort *local_88;
  FPropertyCompositeDefinition *local_78;
  undefined8 uStack_70;
  double local_68 [2];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_98 = (ulonglong)param_1->Size;
  uVar8 = 0;
  local_a8 = 0;
  uVar13 = uVar8;
  local_a0 = param_2;
  local_90 = this;
  local_88 = param_3;
  if (local_98 != 0) {
    do {
      pdVar12 = (double *)0x0;
      pUVar2 = local_a0[uVar13];
      uVar1 = local_88[uVar13];
      local_68[1] = (double)*(float *)(&pUVar2->field_0x4 + uVar1);
      dVar4 = (double)(float)((ulonglong)*(undefined8 *)(&pUVar2->field_0x8 + uVar1) >> 0x20);
      local_58._8_4_ = SUB84(dVar4,0);
      local_58._0_8_ = (double)(float)*(undefined8 *)(&pUVar2->field_0x8 + uVar1);
      local_58._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      iVar7 = (int)uVar8;
      local_68[0] = (double)*(float *)(&pUVar2->field_0x0 + uVar1);
      pdVar10 = param_7 + iVar7;
      if (param_7 == (double *)0x0) {
        pdVar10 = pdVar12;
      }
      pdVar15 = param_6 + iVar7;
      if (param_6 == (double *)0x0) {
        pdVar15 = pdVar12;
      }
      pdVar14 = param_5 + iVar7;
      if (param_5 == (double *)0x0) {
        pdVar14 = pdVar12;
      }
      pdVar11 = param_4 + iVar7;
      if (param_4 == (double *)0x0) {
        pdVar11 = pdVar12;
      }
      local_78 = (local_90->CompositeDefinitions).DataPtr;
      uStack_70 = *(undefined8 *)&(local_90->CompositeDefinitions).ArrayNum;
      iVar7 = (local_90->CompositeDefinitions).ArrayNum;
      lVar9 = (longlong)iVar7;
      if (iVar7 < 1) {
        local_b8 = 0;
        local_b0 = lVar9;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar5 = local_78;
      if (pdVar11 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)local_78->CompositeOffset) = *pdVar11;
      }
      if (iVar7 < 2) {
        local_b8 = 1;
        local_b0 = lVar9;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pdVar14 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar5[1].CompositeOffset) = *pdVar14;
      }
      if (iVar7 < 3) {
        local_b8 = 2;
        local_b0 = lVar9;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pdVar15 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar5[2].CompositeOffset) = *pdVar15;
      }
      if (iVar7 < 4) {
        local_b8 = 3;
        local_b0 = lVar9;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar5[3].CompositeOffset) = *pdVar10;
      }
      local_a8 = local_a8 + 1;
      uVar8 = (ulonglong)local_a8;
      pUVar2 = local_a0[uVar13];
      uVar13 = uVar13 + 1;
      *(float *)(&pUVar2->field_0x4 + uVar1) = (float)local_68[1];
      *(float *)(&pUVar2->field_0x8 + uVar1) = (float)(double)local_58._0_8_;
      *(float *)(&pUVar2->field_0xc + uVar1) = (float)(double)local_58._8_8_;
      *(float *)(&pUVar2->field_0x0 + uVar1) = (float)local_68[0];
    } while ((longlong)uVar13 < (longlong)local_98);
  }
  return;
}

// ForEachFast @ 14691c1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4,
             double *param_5,double *param_6,double *param_7,double *param_8,double *param_9,
             double *param_10)

{
  ushort uVar1;
  UObject *pUVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  undefined1 auStackY_108 [32];
  TIntegerSequence<int,0,1,2,3,4,5,6> local_b8 [4];
  int local_b4;
  UObject **local_b0;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
  *local_a8;
  ulonglong local_a0;
  ushort *local_98;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a0 = (ulonglong)param_1->Size;
  local_b4 = 0;
  if (local_a0 != 0) {
    lVar6 = 0;
    local_b0 = param_2;
    local_a8 = this;
    local_98 = param_3;
    do {
      pdVar5 = (double *)0x0;
      pUVar2 = local_b0[lVar6];
      uVar1 = local_98[lVar6];
      local_78 = *(undefined8 *)(&pUVar2->field_0x0 + uVar1);
      uStack_70 = *(undefined8 *)((longlong)(&pUVar2->field_0x0 + uVar1) + 8);
      local_60 = *(undefined8 *)(&pUVar2->field_0x10 + uVar1);
      uStack_58 = *(undefined8 *)((longlong)(&pUVar2->field_0x10 + uVar1) + 8);
      local_68 = (double)*(float *)(&pUVar2[1].field_0x8 + uVar1);
      local_50 = *(undefined8 *)(&pUVar2->field_0x20 + uVar1);
      uStack_48 = *(undefined8 *)((longlong)(&pUVar2->field_0x20 + uVar1) + 8);
      lVar3 = (longlong)local_b4;
      pdVar10 = pdVar5;
      if (param_10 != (double *)0x0) {
        pdVar10 = param_10 + lVar3;
      }
      pdVar11 = param_9 + lVar3;
      if (param_9 == (double *)0x0) {
        pdVar11 = pdVar5;
      }
      pdVar7 = param_8 + lVar3;
      if (param_8 == (double *)0x0) {
        pdVar7 = pdVar5;
      }
      pdVar8 = pdVar5;
      if (param_7 != (double *)0x0) {
        pdVar8 = param_7 + lVar3;
      }
      if (param_6 != (double *)0x0) {
        pdVar5 = param_6 + lVar3;
      }
      pdVar9 = (double *)0x0;
      pdVar4 = param_5 + lVar3;
      if (param_5 == (double *)0x0) {
        pdVar4 = pdVar9;
      }
      if (param_4 != (double *)0x0) {
        pdVar9 = param_4 + lVar3;
      }
      local_88.DataPtr = (local_a8->CompositeDefinitions).DataPtr;
      local_88.ArrayNum = (local_a8->CompositeDefinitions).ArrayNum;
      local_88._12_4_ = *(undefined4 *)&(local_a8->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6>
                (local_b8,&local_88,(uchar *)&local_78,pdVar9,pdVar4,pdVar5,pdVar8,pdVar7,pdVar11,
                 pdVar10);
      pUVar2 = local_b0[lVar6];
      lVar6 = lVar6 + 1;
      local_b4 = local_b4 + 1;
      *(undefined8 *)(&pUVar2->field_0x0 + uVar1) = local_78;
      *(undefined8 *)((longlong)(&pUVar2->field_0x0 + uVar1) + 8) = uStack_70;
      *(undefined8 *)(&pUVar2->field_0x10 + uVar1) = local_60;
      *(undefined8 *)((longlong)(&pUVar2->field_0x10 + uVar1) + 8) = uStack_58;
      *(undefined8 *)(&pUVar2->field_0x20 + uVar1) = local_50;
      *(undefined8 *)((longlong)(&pUVar2->field_0x20 + uVar1) + 8) = uStack_48;
      *(float *)(&pUVar2[1].field_0x8 + uVar1) = (float)local_68;
    } while (lVar6 < (longlong)local_a0);
  }
  return;
}

// ForEachSlow @ 14691c430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7)

{
  uchar uVar1;
  code *pcVar2;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
  *pTVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  FResolvedPropertyAndFunction *this_00;
  FMargin *pFVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  double *pdVar10;
  double *pdVar11;
  ulonglong uVar12;
  double *pdVar13;
  double *pdVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  UObject **local_c0;
  FMargin local_b8;
  FTrackInstancePropertyBindings *local_a8;
  ulonglong local_a0;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
  *local_98;
  FPropertyCompositeDefinition *local_88;
  undefined8 uStack_80;
  double local_78 [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a0 = (ulonglong)param_1->Size;
  uVar9 = 0;
  local_c8 = 0;
  uVar12 = uVar9;
  local_c0 = param_2;
  local_98 = this;
  if (local_a0 != 0) {
    do {
      pTVar3 = local_98;
      pdVar11 = (double *)0x0;
      local_a8 = param_3->Object;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      this_00 = FTrackInstancePropertyBindings::FindOrAdd(local_a8,local_c0[uVar12]);
      uVar1 = (this_00->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pFVar6 = FCachedProperty::GetPropertyAddress<FMargin>((FCachedProperty *)this_00);
LAB_14691c4d9:
        if (pFVar6 != (FMargin *)0x0) {
          fVar15 = pFVar6->Left;
          fVar16 = pFVar6->Top;
          fVar17 = pFVar6->Right;
          fVar18 = pFVar6->Bottom;
        }
      }
      else if (uVar1 == '\x01') {
        pFVar6 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
        goto LAB_14691c4d9;
      }
      iVar7 = (int)uVar9;
      local_78[1] = (double)fVar16;
      local_78[2] = (double)fVar17;
      local_78[3] = (double)fVar18;
      local_78[0] = (double)fVar15;
      pdVar10 = param_7 + iVar7;
      if (param_7 == (double *)0x0) {
        pdVar10 = pdVar11;
      }
      pdVar14 = param_6 + iVar7;
      if (param_6 == (double *)0x0) {
        pdVar14 = pdVar11;
      }
      pdVar13 = param_5 + iVar7;
      if (param_5 == (double *)0x0) {
        pdVar13 = pdVar11;
      }
      if (param_4 != (double *)0x0) {
        pdVar11 = param_4 + iVar7;
      }
      local_88 = (pTVar3->CompositeDefinitions).DataPtr;
      uStack_80 = *(undefined8 *)&(pTVar3->CompositeDefinitions).ArrayNum;
      iVar7 = (pTVar3->CompositeDefinitions).ArrayNum;
      lVar8 = (longlong)iVar7;
      if (iVar7 < 1) {
        local_d8 = 0;
        local_d0 = lVar8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = local_88;
      if (pdVar11 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)local_88->CompositeOffset) = *pdVar11;
      }
      if (iVar7 < 2) {
        local_d8 = 1;
        local_d0 = lVar8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[1].CompositeOffset) = *pdVar13;
      }
      if (iVar7 < 3) {
        local_d8 = 2;
        local_d0 = lVar8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (pdVar14 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[2].CompositeOffset) = *pdVar14;
      }
      if (iVar7 < 4) {
        local_d8 = 3;
        local_d0 = lVar8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[3].CompositeOffset) = *pdVar10;
      }
      local_b8.Top = (float)local_78[1];
      local_b8.Right = (float)local_78[2];
      local_b8.Bottom = (float)local_78[3];
      local_b8.Left = (float)local_78[0];
      FTrackInstancePropertyBindings::CallFunction<FMargin>(local_a8,local_c0[uVar12],&local_b8);
      uVar12 = uVar12 + 1;
      local_c8 = local_c8 + 1;
      uVar9 = (ulonglong)local_c8;
      param_3 = param_3 + 1;
    } while ((longlong)uVar12 < (longlong)local_a0);
  }
  return;
}

// ForEachSlow @ 14691c7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7,double *param_8,double *param_9,double *param_10)

{
  undefined8 uVar1;
  uchar uVar2;
  FResolvedPropertyAndFunction *this_00;
  FWidgetTransform *pFVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStackY_188 [32];
  TIntegerSequence<int,0,1,2,3,4,5,6> local_138 [4];
  int local_134;
  longlong local_130;
  TSharedPtr<FTrackInstancePropertyBindings,1> *local_128;
  UObject **local_120;
  undefined1 local_118 [16];
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  float local_e8;
  undefined4 uStack_e4;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
  *local_e0;
  FTrackInstancePropertyBindings *local_d8;
  ulonglong local_d0;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_d0 = (ulonglong)param_1->Size;
  local_134 = 0;
  if (local_d0 != 0) {
    local_130 = 0;
    local_120 = param_2;
    local_e0 = this;
    do {
      uVar12 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
      uVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
      uVar14 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
      uVar15 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
      local_d8 = param_3->Object;
      uVar1._0_4_ = 0.0;
      uVar16 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X,0);
      uVar17 = (undefined4)
               ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._0_8_ >> 0x20);
      uVar18 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y,0);
      uVar19 = (undefined4)
               ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._8_8_ >> 0x20);
      local_118 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_128 = param_3;
      this_00 = FTrackInstancePropertyBindings::FindOrAdd(local_d8,local_120[local_130]);
      uVar2 = (this_00->ResolvedProperty).TypeIndex;
      if (uVar2 == '\0') {
        pFVar3 = FCachedProperty::GetPropertyAddress<FWidgetTransform>((FCachedProperty *)this_00);
LAB_14691c8b8:
        if (pFVar3 != (FWidgetTransform *)0x0) {
          local_118 = *(undefined1 (*) [16])&(pFVar3->Translation).field0_0x0._s_0;
          uVar16 = *(undefined4 *)&(pFVar3->Scale).field0_0x0;
          uVar17 = *(undefined4 *)((longlong)&(pFVar3->Scale).field0_0x0 + 4);
          uVar18 = *(undefined4 *)((longlong)&(pFVar3->Scale).field0_0x0 + 8);
          uVar19 = *(undefined4 *)((longlong)&(pFVar3->Scale).field0_0x0 + 0xc);
          uVar12 = *(undefined4 *)&(pFVar3->Shear).field0_0x0;
          uVar13 = *(undefined4 *)((longlong)&(pFVar3->Shear).field0_0x0 + 4);
          uVar14 = *(undefined4 *)((longlong)&(pFVar3->Shear).field0_0x0 + 8);
          uVar15 = *(undefined4 *)((longlong)&(pFVar3->Shear).field0_0x0 + 0xc);
          uVar1._0_4_ = pFVar3->Angle;
          uVar1._4_4_ = *(undefined4 *)&pFVar3->field_0x34;
          _local_e8 = uVar1;
        }
      }
      else if (uVar2 == '\x01') {
        pFVar3 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
        goto LAB_14691c8b8;
      }
      lVar4 = (longlong)local_134;
      pdVar9 = (double *)0x0;
      local_90 = (double)CONCAT44(uVar13,uVar12);
      local_a0 = (double)CONCAT44(uVar17,uVar16);
      dStack_98 = (double)CONCAT44(uVar19,uVar18);
      dStack_88 = (double)CONCAT44(uVar15,uVar14);
      local_b8 = (double)local_118._0_8_;
      dStack_b0 = (double)local_118._8_8_;
      local_a8 = (double)(float)uVar1;
      pdVar7 = param_10 + lVar4;
      if (param_10 == (double *)0x0) {
        pdVar7 = pdVar9;
      }
      pdVar10 = param_9 + lVar4;
      if (param_9 == (double *)0x0) {
        pdVar10 = pdVar9;
      }
      pdVar11 = param_8 + lVar4;
      if (param_8 == (double *)0x0) {
        pdVar11 = pdVar9;
      }
      pdVar8 = param_7 + lVar4;
      if (param_7 == (double *)0x0) {
        pdVar8 = pdVar9;
      }
      pdVar6 = param_6 + lVar4;
      if (param_6 == (double *)0x0) {
        pdVar6 = pdVar9;
      }
      pdVar5 = param_5 + lVar4;
      if (param_5 == (double *)0x0) {
        pdVar5 = pdVar9;
      }
      if (param_4 != (double *)0x0) {
        pdVar9 = param_4 + lVar4;
      }
      local_c8.DataPtr = (local_e0->CompositeDefinitions).DataPtr;
      local_c8.ArrayNum = (local_e0->CompositeDefinitions).ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&(local_e0->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6>
                (local_138,&local_c8,(uchar *)&local_b8,pdVar9,pdVar5,pdVar6,pdVar8,pdVar11,pdVar10,
                 pdVar7);
      lVar4 = local_130;
      local_118._8_8_ = dStack_b0;
      local_118._0_8_ = local_b8;
      local_108._s_0.X = local_a0;
      local_108._s_0.Y = dStack_98;
      local_e8 = (float)local_a8;
      local_f8._s_0.X = local_90;
      local_f8._s_0.Y = dStack_88;
      FTrackInstancePropertyBindings::CallFunction<FWidgetTransform>
                (local_d8,local_120[local_130],(FWidgetTransform *)local_118);
      local_130 = lVar4 + 1;
      local_134 = local_134 + 1;
      param_3 = local_128 + 1;
    } while (local_130 < (longlong)local_d0);
  }
  return;
}

