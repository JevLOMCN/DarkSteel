// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 64

// ForEachAllocation @ 14667a4e0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TReadOptional<double> param_5)

{
  ushort *puVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar2;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (FVariantPropertyTypeIndex *)param_4,(double *)param_5);
    return;
  }
  puVar1 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar1 != (ushort *)0x0) {
    ForEachFast(this,param_1,(UObject **)param_2,puVar1,(FVariantPropertyTypeIndex *)param_4,
                (double *)param_5);
    return;
  }
  pTVar2 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
  if (pTVar2 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    ForEachSlow(this,param_1,(UObject **)param_2,pTVar2,(FVariantPropertyTypeIndex *)param_4,
                (double *)param_5);
    return;
  }
  return;
}

// ForEachAllocation @ 14667a530

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TReadOptional<double> param_5,TReadOptional<double> param_6,
                   TReadOptional<double> param_7,TReadOptional<double> param_8)

{
  ushort *puVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar2;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (FVariantPropertyTypeIndex *)param_4,(double *)param_5,(double *)param_6,
                  (double *)param_7,(double *)param_8);
    return;
  }
  puVar1 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar1 != (ushort *)0x0) {
    ForEachFast(this,param_1,(UObject **)param_2,puVar1,(FVariantPropertyTypeIndex *)param_4,
                (double *)param_5,(double *)param_6,(double *)param_7,(double *)param_8);
    return;
  }
  pTVar2 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
  if (pTVar2 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    ForEachSlow(this,param_1,(UObject **)param_2,pTVar2,(FVariantPropertyTypeIndex *)param_4,
                (double *)param_5,(double *)param_6,(double *)param_7,(double *)param_8);
    return;
  }
  return;
}

// ForEachAllocation @ 14667a570

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TReadOptional<double> param_5,TReadOptional<double> param_6,
                   TReadOptional<double> param_7,TReadOptional<double> param_8)

{
  ushort *puVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar2;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (FVariantPropertyTypeIndex *)param_4,(double *)param_5,(double *)param_6,
                  (double *)param_7,(double *)param_8);
    return;
  }
  puVar1 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar1 != (ushort *)0x0) {
    ForEachFast(this,param_1,(UObject **)param_2,puVar1,(FVariantPropertyTypeIndex *)param_4,
                (double *)param_5,(double *)param_6,(double *)param_7,(double *)param_8);
    return;
  }
  pTVar2 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
  if (pTVar2 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    ForEachSlow(this,param_1,(UObject **)param_2,pTVar2,(FVariantPropertyTypeIndex *)param_4,
                (double *)param_5,(double *)param_6,(double *)param_7,(double *)param_8);
    return;
  }
  return;
}

// ForEachAllocation @ 14667a5b0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TReadOptional<double> param_5,TReadOptional<double> param_6,
                   TReadOptional<double> param_7,TReadOptional<double> param_8,
                   TReadOptional<double> param_9,TReadOptional<double> param_10,
                   TReadOptional<double> param_11,TReadOptional<double> param_12,
                   TReadOptional<double> param_13)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
  *pTVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  double *pdVar15;
  uint uVar16;
  double *pdVar17;
  TRead<UE::MovieScene::FVariantPropertyTypeIndex> TVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  double *local_res10;
  TRead<UObject_*> local_res18;
  int local_res20 [2];
  double *local_220;
  longlong local_218;
  double *local_210;
  double *local_208;
  double *local_200;
  double *local_1f8;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_1e8 [8];
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
  *local_1e0;
  ulonglong local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uchar local_178 [80];
  uchar local_128 [80];
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_d8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_c8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_b8;
  undefined1 local_a8 [104];
  
  lVar12 = *(longlong *)&param_3->Data;
  if (lVar12 == 0) {
    puVar11 = *(ushort **)&(param_3->Data).field_0x8;
    if (puVar11 == (ushort *)0x0) {
      puVar10 = *(undefined8 **)&(param_3->Data).field_0x10;
      if (puVar10 != (undefined8 *)0x0) {
        local_1d8 = (ulonglong)param_1->Size;
        local_210._0_4_ = 0;
        TVar18 = param_4;
        if (local_1d8 != 0) {
          do {
            uVar5 = *puVar10;
            local_128[0x40] = '\0';
            local_128[0x41] = '\0';
            local_128[0x42] = '\0';
            local_128[0x43] = '\0';
            local_128[0x44] = '\0';
            local_128[0x45] = '\0';
            local_128[0x46] = '\0';
            local_128[0x47] = '\0';
            local_128[0] = '\0';
            local_128[1] = '\0';
            local_128[2] = '\0';
            local_128[3] = '\0';
            local_128[4] = '\0';
            local_128[5] = '\0';
            local_128[6] = '\0';
            local_128[7] = '\0';
            local_128[8] = '\0';
            local_128[9] = '\0';
            local_128[10] = '\0';
            local_128[0xb] = '\0';
            local_128[0xc] = '\0';
            local_128[0xd] = '\0';
            local_128[0xe] = '\0';
            local_128[0xf] = '\0';
            local_128[0x10] = '\0';
            local_128[0x11] = '\0';
            local_128[0x12] = '\0';
            local_128[0x13] = '\0';
            local_128[0x14] = '\0';
            local_128[0x15] = '\0';
            local_128[0x16] = '\0';
            local_128[0x17] = '\0';
            local_128[0x18] = '\0';
            local_128[0x19] = '\0';
            local_128[0x1a] = '\0';
            local_128[0x1b] = '\0';
            local_128[0x1c] = '\0';
            local_128[0x1d] = '\0';
            local_128[0x1e] = '\0';
            local_128[0x1f] = '\0';
            local_1e0 = this->Traits;
            bVar1 = *(byte *)TVar18;
            uVar6 = *(undefined8 *)param_2;
            local_128[0x20] = '\0';
            local_128[0x21] = '\0';
            local_128[0x22] = '\0';
            local_128[0x23] = '\0';
            local_128[0x24] = '\0';
            local_128[0x25] = '\0';
            local_128[0x26] = '\0';
            local_128[0x27] = '\0';
            local_128[0x28] = '\0';
            local_128[0x29] = '\0';
            local_128[0x2a] = '\0';
            local_128[0x2b] = '\0';
            local_128[0x2c] = '\0';
            local_128[0x2d] = '\0';
            local_128[0x2e] = '\0';
            local_128[0x2f] = '\0';
            local_128[0x30] = '\0';
            local_128[0x31] = '\0';
            local_128[0x32] = '\0';
            local_128[0x33] = '\0';
            local_128[0x34] = '\0';
            local_128[0x35] = '\0';
            local_128[0x36] = '\0';
            local_128[0x37] = '\0';
            local_128[0x38] = '\0';
            local_128[0x39] = '\0';
            local_128[0x3a] = '\0';
            local_128[0x3b] = '\0';
            local_128[0x3c] = '\0';
            local_128[0x3d] = '\0';
            local_128[0x3e] = '\0';
            local_128[0x3f] = '\0';
            local_res18 = param_2;
            if (bVar1 == 0) {
              (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FIntermediate3DTransform&___ptr64)'
                        ::__l2::Funcs)(uVar6,uVar5,local_128);
            }
            else {
              uVar16 = bVar1 - 1;
              if ((-1 < (int)uVar16) && ((int)uVar16 < (local_1e0->DynamicTraits).ArrayNum)) {
                uVar9 = 0;
                if ((int)uVar16 < (local_1e0->DynamicTraits).ArrayNum) {
                  uVar9 = ~uVar16 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                (**(code **)((local_1e0->DynamicTraits).AllocatorInstance.Data +
                            (longlong)(int)(uint)bVar1 * 0x38 + -0x18))(uVar6,uVar5,local_128);
              }
            }
            pdVar15 = (double *)0x0;
            lVar12 = (longlong)(int)local_210;
            if (param_13 == (TReadOptional<double>)0x0) {
              local_208 = (double *)0x0;
            }
            else {
              local_208 = (double *)((longlong)param_13 + lVar12 * 8);
            }
            if (param_12 == (TReadOptional<double>)0x0) {
              local_200 = (double *)0x0;
            }
            else {
              local_200 = (double *)((longlong)param_12 + lVar12 * 8);
            }
            pdVar21 = (double *)((longlong)param_11 + lVar12 * 8);
            if (param_11 == (TReadOptional<double>)0x0) {
              pdVar21 = pdVar15;
            }
            if (param_10 == (TReadOptional<double>)0x0) {
              local_220 = (double *)0x0;
            }
            else {
              local_220 = (double *)((longlong)param_10 + lVar12 * 8);
            }
            pdVar20 = (double *)((longlong)param_9 + lVar12 * 8);
            if (param_9 == (TReadOptional<double>)0x0) {
              pdVar20 = pdVar15;
            }
            pdVar19 = (double *)((longlong)param_8 + lVar12 * 8);
            if (param_8 == (TReadOptional<double>)0x0) {
              pdVar19 = pdVar15;
            }
            pdVar17 = (double *)((longlong)param_7 + lVar12 * 8);
            if (param_7 == (TReadOptional<double>)0x0) {
              pdVar17 = pdVar15;
            }
            pdVar13 = (double *)((longlong)param_6 + lVar12 * 8);
            if (param_6 == (TReadOptional<double>)0x0) {
              pdVar13 = pdVar15;
            }
            if (param_5 != (TReadOptional<double>)0x0) {
              pdVar15 = (double *)(lVar12 * 8 + (longlong)param_5);
            }
            local_b8.DataPtr = (this->CompositeDefinitions).DataPtr;
            local_b8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
            local_b8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
            PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                      (local_1e8,&local_b8,local_128,pdVar15,pdVar13,pdVar17,pdVar19,pdVar20,
                       local_220,pdVar21,local_200,local_208);
            local_1e0 = this->Traits;
            uVar6 = *(undefined8 *)local_res18;
            bVar1 = *(byte *)TVar18;
            if (bVar1 == 0) {
              (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FIntermediate3DTransform_const&___ptr64)'
                        ::__l2::Funcs)(uVar6,uVar5,local_128);
            }
            else {
              uVar16 = bVar1 - 1;
              if ((-1 < (int)uVar16) && ((int)uVar16 < (local_1e0->DynamicTraits).ArrayNum)) {
                iVar3 = (local_1e0->DynamicTraits).ArrayNum;
                pdVar15 = (double *)(longlong)iVar3;
                uVar9 = 0;
                if ((int)uVar16 < iVar3) {
                  uVar9 = ~uVar16 >> 0x1f;
                }
                if (uVar9 == 0) {
                  pdVar13 = (double *)((longlong)(int)(uint)bVar1 + -1);
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  pdVar17 = pdVar15;
                  if (bVar8) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                pcVar7 = *(code **)((local_1e0->DynamicTraits).AllocatorInstance.Data +
                                   (longlong)(int)(uint)bVar1 * 0x38 + -0x10);
                (*pcVar7)(uVar6,uVar5,local_128,pcVar7,pdVar13,pdVar17);
              }
            }
            TVar18 = (TRead<UE::MovieScene::FVariantPropertyTypeIndex>)((longlong)TVar18 + 1);
            local_210._0_4_ = (int)local_210 + 1;
            puVar10 = puVar10 + 2;
            param_2 = (TRead<UObject_*>)((longlong)local_res18 + 8);
          } while ((longlong)TVar18 - (longlong)param_4 < (longlong)local_1d8);
        }
      }
    }
    else {
      local_1e0 = (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
                   *)(ulonglong)param_1->Size;
      local_210._0_4_ = 0;
      TVar18 = param_4;
      if (local_1e0 !=
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
           *)0x0) {
        do {
          uVar2 = *puVar11;
          local_178[0x40] = '\0';
          local_178[0x41] = '\0';
          local_178[0x42] = '\0';
          local_178[0x43] = '\0';
          local_178[0x44] = '\0';
          local_178[0x45] = '\0';
          local_178[0x46] = '\0';
          local_178[0x47] = '\0';
          local_178[0] = '\0';
          local_178[1] = '\0';
          local_178[2] = '\0';
          local_178[3] = '\0';
          local_178[4] = '\0';
          local_178[5] = '\0';
          local_178[6] = '\0';
          local_178[7] = '\0';
          local_178[8] = '\0';
          local_178[9] = '\0';
          local_178[10] = '\0';
          local_178[0xb] = '\0';
          local_178[0xc] = '\0';
          local_178[0xd] = '\0';
          local_178[0xe] = '\0';
          local_178[0xf] = '\0';
          local_178[0x10] = '\0';
          local_178[0x11] = '\0';
          local_178[0x12] = '\0';
          local_178[0x13] = '\0';
          local_178[0x14] = '\0';
          local_178[0x15] = '\0';
          local_178[0x16] = '\0';
          local_178[0x17] = '\0';
          local_178[0x18] = '\0';
          local_178[0x19] = '\0';
          local_178[0x1a] = '\0';
          local_178[0x1b] = '\0';
          local_178[0x1c] = '\0';
          local_178[0x1d] = '\0';
          local_178[0x1e] = '\0';
          local_178[0x1f] = '\0';
          pTVar4 = this->Traits;
          bVar1 = *(byte *)TVar18;
          lVar12 = *(longlong *)param_2;
          local_178[0x20] = '\0';
          local_178[0x21] = '\0';
          local_178[0x22] = '\0';
          local_178[0x23] = '\0';
          local_178[0x24] = '\0';
          local_178[0x25] = '\0';
          local_178[0x26] = '\0';
          local_178[0x27] = '\0';
          local_178[0x28] = '\0';
          local_178[0x29] = '\0';
          local_178[0x2a] = '\0';
          local_178[0x2b] = '\0';
          local_178[0x2c] = '\0';
          local_178[0x2d] = '\0';
          local_178[0x2e] = '\0';
          local_178[0x2f] = '\0';
          local_178[0x30] = '\0';
          local_178[0x31] = '\0';
          local_178[0x32] = '\0';
          local_178[0x33] = '\0';
          local_178[0x34] = '\0';
          local_178[0x35] = '\0';
          local_178[0x36] = '\0';
          local_178[0x37] = '\0';
          local_178[0x38] = '\0';
          local_178[0x39] = '\0';
          local_178[0x3a] = '\0';
          local_178[0x3b] = '\0';
          local_178[0x3c] = '\0';
          local_178[0x3d] = '\0';
          local_178[0x3e] = '\0';
          local_178[0x3f] = '\0';
          local_res18 = param_2;
          if (bVar1 == 0) {
            (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FIntermediate3DTransform&___ptr64)'
                      ::__l2::Funcs)(lVar12,uVar2,local_178);
          }
          else {
            uVar16 = bVar1 - 1;
            if ((-1 < (int)uVar16) && ((int)uVar16 < (pTVar4->DynamicTraits).ArrayNum)) {
              uVar9 = 0;
              if ((int)uVar16 < (pTVar4->DynamicTraits).ArrayNum) {
                uVar9 = ~uVar16 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (**(code **)((pTVar4->DynamicTraits).AllocatorInstance.Data +
                          (longlong)(int)(uint)bVar1 * 0x38 + -0x28))((ulonglong)uVar2 + lVar12);
            }
          }
          pdVar15 = (double *)0x0;
          lVar12 = (longlong)(int)local_210;
          if (param_13 == (TReadOptional<double>)0x0) {
            local_1f8 = (double *)0x0;
          }
          else {
            local_1f8 = (double *)((longlong)param_13 + lVar12 * 8);
          }
          if (param_12 == (TReadOptional<double>)0x0) {
            local_220 = (double *)0x0;
          }
          else {
            local_220 = (double *)((longlong)param_12 + lVar12 * 8);
          }
          pdVar21 = (double *)((longlong)param_11 + lVar12 * 8);
          if (param_11 == (TReadOptional<double>)0x0) {
            pdVar21 = pdVar15;
          }
          if (param_10 == (TReadOptional<double>)0x0) {
            local_200 = (double *)0x0;
          }
          else {
            local_200 = (double *)((longlong)param_10 + lVar12 * 8);
          }
          pdVar20 = (double *)((longlong)param_9 + lVar12 * 8);
          if (param_9 == (TReadOptional<double>)0x0) {
            pdVar20 = pdVar15;
          }
          pdVar19 = (double *)((longlong)param_8 + lVar12 * 8);
          if (param_8 == (TReadOptional<double>)0x0) {
            pdVar19 = pdVar15;
          }
          pdVar17 = (double *)((longlong)param_7 + lVar12 * 8);
          if (param_7 == (TReadOptional<double>)0x0) {
            pdVar17 = pdVar15;
          }
          pdVar13 = (double *)((longlong)param_6 + lVar12 * 8);
          if (param_6 == (TReadOptional<double>)0x0) {
            pdVar13 = pdVar15;
          }
          if (param_5 != (TReadOptional<double>)0x0) {
            pdVar15 = (double *)(lVar12 * 8 + (longlong)param_5);
          }
          local_c8.DataPtr = (this->CompositeDefinitions).DataPtr;
          local_c8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
          local_c8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
          PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                    ((TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *)local_res20,&local_c8,local_178,
                     pdVar15,pdVar13,pdVar17,pdVar19,pdVar20,local_200,pdVar21,local_220,local_1f8);
          pTVar4 = this->Traits;
          bVar1 = *(byte *)TVar18;
          lVar12 = *(longlong *)local_res18;
          if (bVar1 == 0) {
            (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FIntermediate3DTransform_const&___ptr64)'
                      ::__l2::Funcs)(lVar12,uVar2,local_178);
          }
          else {
            uVar16 = bVar1 - 1;
            if ((-1 < (int)uVar16) && ((int)uVar16 < (pTVar4->DynamicTraits).ArrayNum)) {
              uVar9 = 0;
              if ((int)uVar16 < (pTVar4->DynamicTraits).ArrayNum) {
                uVar9 = ~uVar16 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (**(code **)((pTVar4->DynamicTraits).AllocatorInstance.Data +
                          (longlong)(int)(uint)bVar1 * 0x38 + -0x20))
                        (local_178,(ulonglong)uVar2 + lVar12);
            }
          }
          TVar18 = (TRead<UE::MovieScene::FVariantPropertyTypeIndex>)((longlong)TVar18 + 1);
          local_210._0_4_ = (int)local_210 + 1;
          puVar11 = puVar11 + 1;
          param_2 = (TRead<UObject_*>)((longlong)local_res18 + 8);
        } while ((longlong)TVar18 - (longlong)param_4 < (longlong)local_1e0);
      }
    }
  }
  else {
    uVar2 = param_1->Size;
    local_res20[0] = 0;
    if ((ulonglong)uVar2 != 0) {
      local_218 = 0;
      local_res18 = param_2;
      do {
        uVar16 = (uint)*(ushort *)(lVar12 + local_218 * 2);
        local_188 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        puVar10 = (undefined8 *)
                  (**(code **)((this->CustomAccessors).Base +
                              (longlong)(int)(uVar16 * (this->CustomAccessors).Stride) + 0x18))
                            (local_a8,*(undefined8 *)((longlong)local_res18 + local_218 * 8));
        lVar14 = (longlong)local_res20[0];
        local_1c8 = *puVar10;
        uStack_1c0 = puVar10[1];
        local_1b8 = puVar10[2];
        uStack_1b0 = puVar10[3];
        local_1a8 = puVar10[4];
        uStack_1a0 = puVar10[5];
        local_198 = puVar10[6];
        uStack_190 = puVar10[7];
        local_188 = puVar10[8];
        if (param_13 == (TReadOptional<double>)0x0) {
          local_res10 = (double *)0x0;
        }
        else {
          local_res10 = (double *)(lVar14 * 8 + (longlong)param_13);
        }
        pdVar15 = (double *)0x0;
        pdVar21 = (double *)((longlong)param_12 + lVar14 * 8);
        if (param_12 == (TReadOptional<double>)0x0) {
          pdVar21 = pdVar15;
        }
        if (param_11 == (TReadOptional<double>)0x0) {
          local_1f8 = (double *)0x0;
        }
        else {
          local_1f8 = (double *)((longlong)param_11 + lVar14 * 8);
        }
        if (param_10 == (TReadOptional<double>)0x0) {
          local_210 = (double *)0x0;
        }
        else {
          local_210 = (double *)((longlong)param_10 + lVar14 * 8);
        }
        pdVar20 = (double *)((longlong)param_9 + lVar14 * 8);
        if (param_9 == (TReadOptional<double>)0x0) {
          pdVar20 = pdVar15;
        }
        pdVar19 = (double *)((longlong)param_8 + lVar14 * 8);
        if (param_8 == (TReadOptional<double>)0x0) {
          pdVar19 = pdVar15;
        }
        pdVar17 = (double *)((longlong)param_7 + lVar14 * 8);
        if (param_7 == (TReadOptional<double>)0x0) {
          pdVar17 = pdVar15;
        }
        pdVar13 = (double *)((longlong)param_6 + lVar14 * 8);
        if (param_6 == (TReadOptional<double>)0x0) {
          pdVar13 = pdVar15;
        }
        if (param_5 != (TReadOptional<double>)0x0) {
          pdVar15 = (double *)((longlong)param_5 + lVar14 * 8);
        }
        local_d8.DataPtr = (this->CompositeDefinitions).DataPtr;
        local_d8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
        local_d8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
        PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                  ((TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *)&local_res10,&local_d8,
                   (uchar *)&local_1c8,pdVar15,pdVar13,pdVar17,pdVar19,pdVar20,local_210,local_1f8,
                   pdVar21,local_res10);
        (**(code **)((this->CustomAccessors).Base +
                    (longlong)(int)(uVar16 * (this->CustomAccessors).Stride) + 0x20))
                  (*(undefined8 *)((longlong)local_res18 + local_218 * 8),&local_1c8);
        local_res20[0] = local_res20[0] + 1;
        local_218 = local_218 + 1;
      } while (local_218 < (longlong)(ulonglong)uVar2);
    }
  }
  return;
}

// ForEachAllocation @ 14667af90

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TReadOptional<double> param_5,TReadOptional<double> param_6,
                   TReadOptional<double> param_7,TReadOptional<double> param_8)

{
  ushort *puVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar2;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (FVariantPropertyTypeIndex *)param_4,(double *)param_5,(double *)param_6,
                  (double *)param_7,(double *)param_8);
    return;
  }
  puVar1 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar1 != (ushort *)0x0) {
    ForEachFast(this,param_1,(UObject **)param_2,puVar1,(FVariantPropertyTypeIndex *)param_4,
                (double *)param_5,(double *)param_6,(double *)param_7,(double *)param_8);
    return;
  }
  pTVar2 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
  if (pTVar2 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    ForEachSlow(this,param_1,(UObject **)param_2,pTVar2,(FVariantPropertyTypeIndex *)param_4,
                (double *)param_5,(double *)param_6,(double *)param_7,(double *)param_8);
    return;
  }
  return;
}

// ForEachAllocation @ 14667afd0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FVariantPropertyTypeIndex> param_4,
                   TReadOptional<__int64> param_5)

{
  ushort *puVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar2;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (FVariantPropertyTypeIndex *)param_4,(long64 *)param_5);
    return;
  }
  puVar1 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar1 != (ushort *)0x0) {
    ForEachFast(this,param_1,(UObject **)param_2,puVar1,(FVariantPropertyTypeIndex *)param_4,
                (long64 *)param_5);
    return;
  }
  pTVar2 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
  if (pTVar2 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    ForEachSlow(this,param_1,(UObject **)param_2,pTVar2,(FVariantPropertyTypeIndex *)param_4,
                (long64 *)param_5);
    return;
  }
  return;
}

// ForEachAllocation @ 14667b020

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<unsigned_char> param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  uchar uVar3;
  ushort uVar4;
  FTrackInstancePropertyBindings *this_00;
  code *pcVar5;
  FPropertyCompositeDefinition *pFVar6;
  bool bVar7;
  FResolvedPropertyAndFunction *this_01;
  uchar *puVar8;
  longlong lVar9;
  ushort *puVar10;
  uchar *puVar11;
  uchar uVar12;
  uchar *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uchar *puVar16;
  undefined1 local_res10 [8];
  uchar local_res20 [8];
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (uchar *)param_4);
    return;
  }
  puVar10 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar10 == (ushort *)0x0) {
    puVar15 = *(undefined8 **)&(param_3->Data).field_0x10;
    if (puVar15 != (undefined8 *)0x0) {
      uVar4 = param_1->Size;
      puVar13 = (uchar *)0x0;
      puVar11 = puVar13;
      puVar16 = puVar13;
      if ((ulonglong)uVar4 != 0) {
        do {
          this_00 = (FTrackInstancePropertyBindings *)*puVar15;
          uVar12 = '\0';
          this_01 = FTrackInstancePropertyBindings::FindOrAdd
                              (this_00,*(UObject **)((longlong)param_2 + (longlong)puVar11 * 8));
          uVar3 = (this_01->ResolvedProperty).TypeIndex;
          if (uVar3 == '\0') {
            puVar8 = FCachedProperty::GetPropertyAddress<unsigned_char>((FCachedProperty *)this_01);
LAB_14667b243:
            if (puVar8 != (uchar *)0x0) {
              uVar12 = *puVar8;
            }
          }
          else if (uVar3 == '\x01') {
            puVar8 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
            goto LAB_14667b243;
          }
          puVar8 = puVar13;
          if (param_4 != (TReadOptional<unsigned_char>)0x0) {
            puVar8 = (uchar *)((longlong)(int)puVar16 + (longlong)param_4);
          }
          pFVar6 = (this->CompositeDefinitions).DataPtr;
          local_res20[0] = uVar12;
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (puVar8 != (uchar *)0x0) {
            local_res20[pFVar6->CompositeOffset] = *puVar8;
          }
          FTrackInstancePropertyBindings::CallFunction<unsigned_char>
                    (this_00,*(UObject **)((longlong)param_2 + (longlong)puVar11 * 8),local_res20[0]
                    );
          puVar11 = puVar11 + 1;
          puVar15 = puVar15 + 2;
          puVar16 = (uchar *)(ulonglong)((int)puVar16 + 1);
        } while ((longlong)puVar11 < (longlong)(ulonglong)uVar4);
      }
    }
  }
  else {
    lVar9 = 0;
    if (param_1->Size != 0) {
      uVar14 = (ulonglong)param_1->Size;
      if (param_4 == (TReadOptional<unsigned_char>)0x0) {
        if (uVar14 != 0) {
          do {
            uVar4 = puVar10[lVar9];
            uVar2 = *(undefined1 *)((ulonglong)uVar4 + *(longlong *)((longlong)param_2 + lVar9 * 8))
            ;
            if (((this->CompositeDefinitions).ArrayNum < 1) &&
               (local_res10[0] = uVar2,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar1 = lVar9 * 8;
            lVar9 = lVar9 + 1;
            *(undefined1 *)((ulonglong)uVar4 + *(longlong *)((longlong)param_2 + lVar1)) = uVar2;
          } while (lVar9 < (longlong)uVar14);
        }
      }
      else {
        do {
          uVar4 = *puVar10;
          pFVar6 = (this->CompositeDefinitions).DataPtr;
          local_res10[0] = *(undefined1 *)((ulonglong)uVar4 + *(longlong *)param_2);
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (param_4 != (TReadOptional<unsigned_char>)0x0) {
            local_res10[pFVar6->CompositeOffset] = *(undefined1 *)param_4;
          }
          lVar9 = *(longlong *)param_2;
          puVar10 = puVar10 + 1;
          param_4 = (TReadOptional<unsigned_char>)((longlong)param_4 + 1);
          param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
          *(undefined1 *)((ulonglong)uVar4 + lVar9) = local_res10[0];
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
  }
  return;
}

// ForEachAllocation @ 14667b330

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<double> param_4)

{
  uchar uVar1;
  ushort uVar2;
  longlong lVar3;
  FTrackInstancePropertyBindings *this_00;
  code *pcVar4;
  FPropertyCompositeDefinition *pFVar5;
  bool bVar6;
  FResolvedPropertyAndFunction *this_01;
  float *pfVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  double local_res10;
  double local_res20;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (double *)param_4);
    return;
  }
  puVar10 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar10 == (ushort *)0x0) {
    puVar14 = *(undefined8 **)&(param_3->Data).field_0x10;
    if (puVar14 != (undefined8 *)0x0) {
      uVar2 = param_1->Size;
      puVar15 = (undefined8 *)0x0;
      puVar9 = puVar15;
      puVar13 = puVar15;
      if ((ulonglong)uVar2 != 0) {
        do {
          this_00 = (FTrackInstancePropertyBindings *)*puVar14;
          fVar16 = 0.0;
          this_01 = FTrackInstancePropertyBindings::FindOrAdd
                              (this_00,*(UObject **)((longlong)param_2 + (longlong)puVar9 * 8));
          uVar1 = (this_01->ResolvedProperty).TypeIndex;
          if (uVar1 == '\0') {
            pfVar7 = FCachedProperty::GetPropertyAddress<float>((FCachedProperty *)this_01);
LAB_14667b574:
            if (pfVar7 != (float *)0x0) {
              fVar16 = *pfVar7;
            }
          }
          else if (uVar1 == '\x01') {
            pfVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
            goto LAB_14667b574;
          }
          local_res20 = (double)fVar16;
          puVar11 = puVar15;
          if (param_4 != (TReadOptional<double>)0x0) {
            puVar11 = (undefined8 *)((longlong)param_4 + (longlong)(int)puVar13 * 8);
          }
          pFVar5 = (this->CompositeDefinitions).DataPtr;
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined8 *)((longlong)&stack0x00000020 + (ulonglong)pFVar5->CompositeOffset) =
                 *puVar11;
          }
          FTrackInstancePropertyBindings::CallFunction<float>
                    (this_00,*(UObject **)((longlong)param_2 + (longlong)puVar9 * 8),
                     (float)local_res20);
          puVar9 = (undefined8 *)((longlong)puVar9 + 1);
          puVar14 = puVar14 + 2;
          puVar13 = (undefined8 *)(ulonglong)((int)puVar13 + 1);
        } while ((longlong)puVar9 < (longlong)(ulonglong)uVar2);
      }
    }
  }
  else {
    lVar12 = 0;
    if (param_1->Size != 0) {
      uVar8 = (ulonglong)param_1->Size;
      if (param_4 == (TReadOptional<double>)0x0) {
        if (uVar8 != 0) {
          do {
            uVar2 = puVar10[lVar12];
            fVar16 = *(float *)(*(longlong *)((longlong)param_2 + lVar12 * 8) + (ulonglong)uVar2);
            local_res10 = (double)fVar16;
            if (((this->CompositeDefinitions).ArrayNum < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar3 = lVar12 * 8;
            lVar12 = lVar12 + 1;
            *(float *)((ulonglong)uVar2 + *(longlong *)((longlong)param_2 + lVar3)) = fVar16;
          } while (lVar12 < (longlong)uVar8);
        }
      }
      else {
        lVar12 = (longlong)param_4 - (longlong)param_2;
        do {
          uVar2 = *puVar10;
          pFVar5 = (this->CompositeDefinitions).DataPtr;
          local_res10 = (double)*(float *)(*(longlong *)param_2 + (ulonglong)uVar2);
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar14 = (undefined8 *)(lVar12 + (longlong)param_2);
          if (puVar14 != (undefined8 *)0x0) {
            *(undefined8 *)((longlong)&local_res10 + (ulonglong)pFVar5->CompositeOffset) = *puVar14;
          }
          lVar3 = *(longlong *)param_2;
          puVar10 = puVar10 + 1;
          param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
          *(float *)((ulonglong)uVar2 + lVar3) = (float)local_res10;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}

// ForEachAllocation @ 14667b670

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<double> param_4,TReadOptional<double> param_5,
                   TReadOptional<double> param_6)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar4;
  code *pcVar5;
  FPropertyCompositeDefinition *pFVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int local_res10;
  undefined8 *local_res20;
  longlong local_88;
  undefined8 local_58 [4];
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (double *)param_4,(double *)param_5,(double *)param_6);
    return;
  }
  lVar3 = *(longlong *)&(param_3->Data).field_0x8;
  if (lVar3 == 0) {
    pTVar4 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
    if (pTVar4 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
      ForEachSlow(this,param_1,(UObject **)param_2,pTVar4,(double *)param_4,(double *)param_5,
                  (double *)param_6);
    }
  }
  else {
    uVar1 = param_1->Size;
    local_res10 = 0;
    if ((ulonglong)uVar1 != 0) {
      local_88 = 0;
      do {
        uVar9 = (ulonglong)*(ushort *)(lVar3 + local_88 * 2);
        lVar8 = *(longlong *)((longlong)param_2 + local_88 * 8);
        local_58[2] = *(undefined8 *)(lVar8 + 0x10 + uVar9);
        puVar10 = (undefined8 *)(lVar8 + uVar9);
        local_58[0] = *puVar10;
        local_58[1] = puVar10[1];
        lVar8 = (longlong)local_res10;
        if (param_6 == (TReadOptional<double>)0x0) {
          local_res20 = (undefined8 *)0x0;
        }
        else {
          local_res20 = (undefined8 *)((longlong)param_6 + lVar8 * 8);
        }
        puVar10 = (undefined8 *)((longlong)param_5 + lVar8 * 8);
        if (param_5 == (TReadOptional<double>)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        puVar11 = (undefined8 *)((longlong)param_4 + lVar8 * 8);
        if (param_4 == (TReadOptional<double>)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        pFVar6 = (this->CompositeDefinitions).DataPtr;
        iVar2 = (this->CompositeDefinitions).ArrayNum;
        if (iVar2 < 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)local_58 + (ulonglong)pFVar6->CompositeOffset) = *puVar11;
        }
        if (iVar2 < 2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)local_58 + (ulonglong)pFVar6[1].CompositeOffset) = *puVar10;
        }
        if (iVar2 < 3) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (local_res20 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)local_58 + (ulonglong)pFVar6[2].CompositeOffset) = *local_res20;
        }
        lVar8 = *(longlong *)((longlong)param_2 + local_88 * 8);
        local_res10 = local_res10 + 1;
        local_88 = local_88 + 1;
        puVar10 = (undefined8 *)(lVar8 + uVar9);
        *puVar10 = local_58[0];
        puVar10[1] = local_58[1];
        *(undefined8 *)(lVar8 + 0x10 + uVar9) = local_58[2];
      } while (local_88 < (longlong)(ulonglong)uVar1);
      return;
    }
  }
  return;
}

// ForEachAllocation @ 14667b960

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<double> param_4,TReadOptional<double> param_5)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar5;
  code *pcVar6;
  FPropertyCompositeDefinition *pFVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint local_res10;
  undefined8 local_78 [4];
  undefined1 local_58 [32];
  
  lVar3 = *(longlong *)&param_3->Data;
  if (lVar3 == 0) {
    puVar4 = *(ushort **)&(param_3->Data).field_0x8;
    if (puVar4 != (ushort *)0x0) {
      ForEachFast(this,param_1,(UObject **)param_2,puVar4,(double *)param_4,(double *)param_5);
      return;
    }
    pTVar5 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
    if (pTVar5 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
      ForEachSlow(this,param_1,(UObject **)param_2,pTVar5,(double *)param_4,(double *)param_5);
      return;
    }
  }
  else {
    uVar1 = param_1->Size;
    uVar11 = 0;
    local_res10 = 0;
    uVar12 = uVar11;
    if ((ulonglong)uVar1 != 0) {
      do {
        uVar9 = (uint)*(ushort *)(lVar3 + uVar11 * 2);
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = 0;
        local_78[3] = 0;
        puVar10 = (undefined8 *)
                  (**(code **)((this->CustomAccessors).Base +
                              (longlong)(int)(uVar9 * (this->CustomAccessors).Stride) + 0x18))
                            (local_58,*(undefined8 *)((longlong)param_2 + uVar11 * 8));
        local_78[0] = *puVar10;
        local_78[1] = puVar10[1];
        local_78[2] = puVar10[2];
        local_78[3] = puVar10[3];
        puVar10 = (undefined8 *)((longlong)param_5 + (longlong)(int)uVar12 * 8);
        if (param_5 == (TReadOptional<double>)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        pFVar7 = (this->CompositeDefinitions).DataPtr;
        iVar2 = (this->CompositeDefinitions).ArrayNum;
        puVar13 = (undefined8 *)((longlong)param_4 + (longlong)(int)uVar12 * 8);
        if (param_4 == (TReadOptional<double>)0x0) {
          puVar13 = (undefined8 *)0x0;
        }
        if ((iVar2 < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (puVar13 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)local_78 + (ulonglong)pFVar7->CompositeOffset) = *puVar13;
        }
        if ((iVar2 < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)local_78 + (ulonglong)pFVar7[1].CompositeOffset) = *puVar10;
        }
        (**(code **)((this->CustomAccessors).Base +
                    (longlong)(int)(uVar9 * (this->CustomAccessors).Stride) + 0x20))
                  (*(undefined8 *)((longlong)param_2 + uVar11 * 8),local_78);
        uVar11 = uVar11 + 1;
        local_res10 = local_res10 + 1;
        uVar12 = (ulonglong)local_res10;
      } while ((longlong)uVar11 < (longlong)(ulonglong)uVar1);
    }
  }
  return;
}

// ForEachAllocation @ 14667bbb0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<double> param_4,TReadOptional<double> param_5,
                   TReadOptional<double> param_6)

{
  ushort *puVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar2;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (double *)param_4,(double *)param_5,(double *)param_6);
    return;
  }
  puVar1 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar1 != (ushort *)0x0) {
    ForEachFast(this,param_1,(UObject **)param_2,puVar1,(double *)param_4,(double *)param_5,
                (double *)param_6);
    return;
  }
  pTVar2 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
  if (pTVar2 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    ForEachSlow(this,param_1,(UObject **)param_2,pTVar2,(double *)param_4,(double *)param_5,
                (double *)param_6);
    return;
  }
  return;
}

// ForEachAllocation @ 14667bc00

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<double> param_4,TReadOptional<double> param_5,
                   TReadOptional<double> param_6,TReadOptional<double> param_7,
                   TReadOptional<double> param_8,TReadOptional<double> param_9,
                   TReadOptional<double> param_10,TReadOptional<double> param_11,
                   TReadOptional<double> param_12)

{
  uchar uVar1;
  ushort uVar2;
  double *pdVar3;
  double *pdVar4;
  FResolvedPropertyAndFunction *this_00;
  FEulerTransform *pFVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  undefined8 *puVar10;
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
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  TReadOptional<double> local_res10;
  TRead<UObject_*> local_res18;
  int local_res20;
  longlong local_188;
  double *local_180;
  double *local_178;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  ulonglong local_108;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_f8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_e8;
  TVector<double>_u_0 local_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  
  lVar8 = *(longlong *)&param_3->Data;
  local_res18 = param_2;
  if (lVar8 == 0) {
    local_f8.DataPtr = *(FPropertyCompositeDefinition **)&(param_3->Data).field_0x8;
    if (local_f8.DataPtr == (FPropertyCompositeDefinition *)0x0) {
      puVar10 = *(undefined8 **)&(param_3->Data).field_0x10;
      if (puVar10 != (undefined8 *)0x0) {
        uVar2 = param_1->Size;
        local_res20 = 0;
        if ((ulonglong)uVar2 != 0) {
          local_188 = 0;
          do {
            uVar25 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
            uVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
            uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
            uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
            local_f8.DataPtr = (FPropertyCompositeDefinition *)*puVar10;
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0;
            uVar17 = 0;
            uVar18 = 0;
            uVar19 = 0;
            uVar20 = 0;
            uVar21 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0;
            uVar29 = 0;
            local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            this_00 = FTrackInstancePropertyBindings::FindOrAdd
                                ((FTrackInstancePropertyBindings *)local_f8.DataPtr,
                                 *(UObject **)((longlong)local_res18 + local_188 * 8));
            uVar1 = (this_00->ResolvedProperty).TypeIndex;
            if (uVar1 == '\0') {
              pFVar5 = FCachedProperty::GetPropertyAddress<FEulerTransform>
                                 ((FCachedProperty *)this_00);
LAB_14667c184:
              if (pFVar5 != (FEulerTransform *)0x0) {
                local_98 = (pFVar5->Scale).field0_0x0._s_0.Z;
                uVar14 = *(undefined4 *)&(pFVar5->Location).field0_0x0;
                uVar15 = *(undefined4 *)((longlong)&(pFVar5->Location).field0_0x0 + 4);
                uVar16 = *(undefined4 *)((longlong)&(pFVar5->Location).field0_0x0 + 8);
                uVar17 = *(undefined4 *)((longlong)&(pFVar5->Location).field0_0x0 + 0xc);
                uVar18 = *(undefined4 *)((longlong)&(pFVar5->Location).field0_0x0 + 0x10);
                uVar19 = *(undefined4 *)((longlong)&(pFVar5->Location).field0_0x0 + 0x14);
                uVar20 = *(undefined4 *)&(pFVar5->Rotation).Pitch;
                uVar21 = *(undefined4 *)((longlong)&(pFVar5->Rotation).Pitch + 4);
                uVar26 = *(undefined4 *)&(pFVar5->Rotation).Yaw;
                uVar27 = *(undefined4 *)((longlong)&(pFVar5->Rotation).Yaw + 4);
                uVar28 = *(undefined4 *)&(pFVar5->Rotation).Roll;
                uVar29 = *(undefined4 *)((longlong)&(pFVar5->Rotation).Roll + 4);
                uVar22 = *(undefined4 *)&(pFVar5->Scale).field0_0x0;
                uVar23 = *(undefined4 *)((longlong)&(pFVar5->Scale).field0_0x0 + 4);
                uVar24 = *(undefined4 *)((longlong)&(pFVar5->Scale).field0_0x0 + 8);
                uVar25 = *(undefined4 *)((longlong)&(pFVar5->Scale).field0_0x0 + 0xc);
              }
            }
            else if (uVar1 == '\x01') {
              pFVar5 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
              goto LAB_14667c184;
            }
            lVar8 = (longlong)local_res20;
            dStack_140 = (double)CONCAT44(uVar29,uVar28);
            local_158 = (double)CONCAT44(uVar15,uVar14);
            local_148 = (double)CONCAT44(uVar19,uVar18);
            local_128 = (double)CONCAT44(uVar23,uVar22);
            local_118 = local_98;
            dStack_150 = (double)CONCAT44(uVar17,uVar16);
            local_138 = (double)CONCAT44(uVar21,uVar20);
            dStack_130 = (double)CONCAT44(uVar27,uVar26);
            dStack_120 = (double)CONCAT44(uVar25,uVar24);
            if (param_12 == (TReadOptional<double>)0x0) {
              local_res10 = param_12;
            }
            else {
              local_res10 = (TReadOptional<double>)((longlong)param_12 + lVar8 * 8);
            }
            pdVar3 = (double *)((longlong)param_11 + lVar8 * 8);
            pdVar4 = (double *)0x0;
            if (param_11 == (TReadOptional<double>)0x0) {
              pdVar3 = (double *)0x0;
            }
            if (param_10 == (TReadOptional<double>)0x0) {
              local_178 = (double *)0x0;
            }
            else {
              local_178 = (double *)((longlong)param_10 + lVar8 * 8);
            }
            if (param_9 == (TReadOptional<double>)0x0) {
              local_180 = (double *)0x0;
            }
            else {
              local_180 = (double *)((longlong)param_9 + lVar8 * 8);
            }
            pdVar13 = (double *)((longlong)param_8 + lVar8 * 8);
            if (param_8 == (TReadOptional<double>)0x0) {
              pdVar13 = (double *)0x0;
            }
            pdVar12 = (double *)((longlong)param_7 + lVar8 * 8);
            if (param_7 == (TReadOptional<double>)0x0) {
              pdVar12 = (double *)0x0;
            }
            pdVar11 = (double *)((longlong)param_6 + lVar8 * 8);
            if (param_6 == (TReadOptional<double>)0x0) {
              pdVar11 = (double *)0x0;
            }
            pdVar9 = (double *)((longlong)param_5 + lVar8 * 8);
            if (param_5 == (TReadOptional<double>)0x0) {
              pdVar9 = (double *)0x0;
            }
            if (param_4 != (TReadOptional<double>)0x0) {
              pdVar4 = (double *)(lVar8 * 8 + (longlong)param_4);
            }
            local_e8.DataPtr = (this->CompositeDefinitions).DataPtr;
            local_e8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
            local_e8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
            PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                      ((TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *)&local_res10,&local_e8,
                       (uchar *)&local_158,pdVar4,pdVar9,pdVar11,pdVar12,pdVar13,local_180,local_178
                       ,pdVar3,(double *)local_res10);
            local_d8._s_0.X = local_158;
            local_d8._s_0.Y = dStack_150;
            local_d8._s_0.Z = local_148;
            local_a8 = local_128;
            uStack_a0 = dStack_120;
            local_c0 = local_138;
            uStack_b8 = dStack_130;
            local_98 = local_118;
            local_b0 = dStack_140;
            FTrackInstancePropertyBindings::CallFunction<FEulerTransform>
                      ((FTrackInstancePropertyBindings *)local_f8.DataPtr,
                       *(UObject **)((longlong)local_res18 + local_188 * 8),
                       (FEulerTransform *)&local_d8._s_0);
            local_188 = local_188 + 1;
            local_res20 = local_res20 + 1;
            puVar10 = puVar10 + 2;
          } while (local_188 < (longlong)(ulonglong)uVar2);
        }
      }
    }
    else {
      uVar2 = param_1->Size;
      local_res20 = 0;
      if ((ulonglong)uVar2 != 0) {
        local_188 = 0;
        do {
          pdVar3 = (double *)0x0;
          local_108 = (ulonglong)(&(local_f8.DataPtr)->ComponentTypeID)[local_188].Value;
          lVar8 = *(longlong *)((longlong)local_res18 + local_188 * 8);
          dStack_140 = *(double *)(local_108 + 0x28 + lVar8);
          local_158 = *(double *)(local_108 + lVar8);
          dStack_150 = ((double *)(local_108 + lVar8))[1];
          local_148 = *(double *)(local_108 + 0x10 + lVar8);
          puVar10 = (undefined8 *)(local_108 + 0x18 + lVar8);
          local_138 = (double)*puVar10;
          dStack_130 = (double)puVar10[1];
          puVar10 = (undefined8 *)(local_108 + 0x30 + lVar8);
          local_128 = (double)*puVar10;
          dStack_120 = (double)puVar10[1];
          local_118 = *(double *)(local_108 + 0x40 + lVar8);
          lVar8 = (longlong)local_res20;
          if (param_12 == (TReadOptional<double>)0x0) {
            local_res10 = (TReadOptional<double>)0x0;
          }
          else {
            local_res10 = (TReadOptional<double>)(lVar8 * 8 + (longlong)param_12);
          }
          pdVar4 = (double *)((longlong)param_11 + lVar8 * 8);
          if (param_11 == (TReadOptional<double>)0x0) {
            pdVar4 = pdVar3;
          }
          if (param_10 == (TReadOptional<double>)0x0) {
            local_178 = (double *)0x0;
          }
          else {
            local_178 = (double *)((longlong)param_10 + lVar8 * 8);
          }
          if (param_9 == (TReadOptional<double>)0x0) {
            local_180 = (double *)0x0;
          }
          else {
            local_180 = (double *)((longlong)param_9 + lVar8 * 8);
          }
          pdVar13 = (double *)((longlong)param_8 + lVar8 * 8);
          if (param_8 == (TReadOptional<double>)0x0) {
            pdVar13 = pdVar3;
          }
          pdVar12 = (double *)((longlong)param_7 + lVar8 * 8);
          if (param_7 == (TReadOptional<double>)0x0) {
            pdVar12 = pdVar3;
          }
          pdVar11 = (double *)((longlong)param_6 + lVar8 * 8);
          if (param_6 == (TReadOptional<double>)0x0) {
            pdVar11 = pdVar3;
          }
          pdVar9 = (double *)((longlong)param_5 + lVar8 * 8);
          if (param_5 == (TReadOptional<double>)0x0) {
            pdVar9 = pdVar3;
          }
          if (param_4 != (TReadOptional<double>)0x0) {
            pdVar3 = (double *)((longlong)param_4 + lVar8 * 8);
          }
          local_e8.DataPtr = (this->CompositeDefinitions).DataPtr;
          local_e8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
          local_e8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
          PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                    ((TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *)&local_res10,&local_e8,
                     (uchar *)&local_158,pdVar3,pdVar9,pdVar11,pdVar12,pdVar13,local_180,local_178,
                     pdVar4,(double *)local_res10);
          local_res20 = local_res20 + 1;
          lVar8 = *(longlong *)((longlong)local_res18 + local_188 * 8);
          local_188 = local_188 + 1;
          *(double *)(lVar8 + local_108) = local_158;
          ((double *)(lVar8 + local_108))[1] = dStack_150;
          *(double *)(lVar8 + 0x10 + local_108) = local_148;
          puVar10 = (undefined8 *)(lVar8 + 0x18 + local_108);
          *puVar10 = local_138;
          puVar10[1] = dStack_130;
          *(double *)(lVar8 + 0x28 + local_108) = dStack_140;
          puVar10 = (undefined8 *)(lVar8 + 0x30 + local_108);
          *puVar10 = local_128;
          puVar10[1] = dStack_120;
          *(double *)(lVar8 + 0x40 + local_108) = local_118;
        } while (local_188 < (longlong)(ulonglong)uVar2);
      }
    }
  }
  else {
    local_108 = (ulonglong)param_1->Size;
    local_res20 = 0;
    if (local_108 != 0) {
      local_188 = 0;
      do {
        uVar6 = (uint)*(ushort *)(lVar8 + local_188 * 2);
        local_118 = 0.0;
        local_158 = 0.0;
        dStack_150 = 0.0;
        local_148 = 0.0;
        dStack_140 = 0.0;
        local_138 = 0.0;
        dStack_130 = 0.0;
        local_128 = 0.0;
        dStack_120 = 0.0;
        pdVar3 = (double *)
                 (**(code **)((this->CustomAccessors).Base +
                             (longlong)(int)(uVar6 * (this->CustomAccessors).Stride) + 0x18))
                           (&local_d8,*(undefined8 *)((longlong)local_res18 + local_188 * 8));
        lVar7 = (longlong)local_res20;
        local_158 = *pdVar3;
        dStack_150 = pdVar3[1];
        local_148 = pdVar3[2];
        dStack_140 = pdVar3[3];
        local_138 = pdVar3[4];
        dStack_130 = pdVar3[5];
        local_128 = pdVar3[6];
        dStack_120 = pdVar3[7];
        local_118 = pdVar3[8];
        if (param_12 == (TReadOptional<double>)0x0) {
          local_res10 = param_12;
        }
        else {
          local_res10 = (TReadOptional<double>)((longlong)param_12 + lVar7 * 8);
        }
        pdVar3 = (double *)((longlong)param_11 + lVar7 * 8);
        pdVar4 = (double *)0x0;
        if (param_11 == (TReadOptional<double>)0x0) {
          pdVar3 = (double *)0x0;
        }
        if (param_10 == (TReadOptional<double>)0x0) {
          local_180 = (double *)0x0;
        }
        else {
          local_180 = (double *)((longlong)param_10 + lVar7 * 8);
        }
        if (param_9 == (TReadOptional<double>)0x0) {
          local_178 = (double *)0x0;
        }
        else {
          local_178 = (double *)((longlong)param_9 + lVar7 * 8);
        }
        pdVar13 = (double *)((longlong)param_8 + lVar7 * 8);
        if (param_8 == (TReadOptional<double>)0x0) {
          pdVar13 = (double *)0x0;
        }
        pdVar12 = (double *)((longlong)param_7 + lVar7 * 8);
        if (param_7 == (TReadOptional<double>)0x0) {
          pdVar12 = (double *)0x0;
        }
        pdVar11 = (double *)((longlong)param_6 + lVar7 * 8);
        if (param_6 == (TReadOptional<double>)0x0) {
          pdVar11 = (double *)0x0;
        }
        pdVar9 = (double *)((longlong)param_5 + lVar7 * 8);
        if (param_5 == (TReadOptional<double>)0x0) {
          pdVar9 = (double *)0x0;
        }
        if (param_4 != (TReadOptional<double>)0x0) {
          pdVar4 = (double *)(lVar7 * 8 + (longlong)param_4);
        }
        local_f8.DataPtr = (this->CompositeDefinitions).DataPtr;
        local_f8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
        local_f8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
        PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                  ((TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *)&local_res10,&local_f8,
                   (uchar *)&local_158,pdVar4,pdVar9,pdVar11,pdVar12,pdVar13,local_178,local_180,
                   pdVar3,(double *)local_res10);
        (**(code **)((this->CustomAccessors).Base +
                    (longlong)(int)(uVar6 * (this->CustomAccessors).Stride) + 0x20))
                  (*(undefined8 *)((longlong)local_res18 + local_188 * 8),&local_158);
        local_res20 = local_res20 + 1;
        local_188 = local_188 + 1;
      } while (local_188 < (longlong)local_108);
    }
  }
  return;
}

// ForEachAllocation @ 14667c3c0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<double> param_4,TReadOptional<double> param_5,
                   TReadOptional<double> param_6,TReadOptional<double> param_7,
                   TReadOptional<double> param_8,TReadOptional<double> param_9,
                   TReadOptional<double> param_10,TReadOptional<double> param_11,
                   TReadOptional<double> param_12)

{
  uchar uVar1;
  ushort uVar2;
  FTrackInstancePropertyBindings *this_00;
  uint uVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  FResolvedPropertyAndFunction *this_01;
  FIntermediate3DTransform *pFVar7;
  longlong lVar8;
  TReadOptional<double> TVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  double *pdVar12;
  TReadOptional<double> TVar13;
  TReadOptional<double> TVar14;
  double *pdVar15;
  TReadOptional<double> TVar16;
  double *pdVar17;
  TReadOptional<double> TVar18;
  double *pdVar19;
  TReadOptional<double> TVar20;
  TReadOptional<double> TVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  TReadOptional<double> local_res10;
  TRead<UObject_*> local_res18;
  undefined8 local_res20;
  double *local_1b8;
  double *local_1b0;
  ushort *local_1a8;
  longlong local_1a0;
  FIntermediate3DTransform local_188;
  ulonglong local_138;
  longlong local_130;
  ulonglong local_128;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_118;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_f0 [176];
  
  local_130 = *(longlong *)&param_3->Data;
  local_res18 = param_2;
  if (local_130 == 0) {
    local_1a8 = *(ushort **)&(param_3->Data).field_0x8;
    if (local_1a8 == (ushort *)0x0) {
      puVar11 = *(undefined8 **)&(param_3->Data).field_0x10;
      if (puVar11 != (undefined8 *)0x0) {
        uVar2 = param_1->Size;
        local_res20 = (double *)((ulonglong)local_res20._4_4_ << 0x20);
        if ((ulonglong)uVar2 != 0) {
          local_1a0 = 0;
          local_130 = 0;
          do {
            this_00 = (FTrackInstancePropertyBindings *)*puVar11;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0;
            uVar25 = 0;
            local_188.T_X = 0.0;
            local_188.T_Y = 0.0;
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0;
            uVar29 = 0;
            local_188.T_Z = 0.0;
            local_188.R_X = 0.0;
            uVar30 = 0;
            uVar31 = 0;
            uVar32 = 0;
            uVar33 = 0;
            local_188.R_Y = 0.0;
            local_188.R_Z = 0.0;
            uVar34 = 0;
            uVar35 = 0;
            uVar36 = 0;
            uVar37 = 0;
            local_188.S_X = 0.0;
            local_188.S_Y = 0.0;
            uVar38 = 0;
            uVar39 = 0;
            local_188.S_Z = 0.0;
            this_01 = FTrackInstancePropertyBindings::FindOrAdd
                                (this_00,*(UObject **)((longlong)local_res18 + local_1a0 * 8));
            uVar1 = (this_01->ResolvedProperty).TypeIndex;
            if (uVar1 == '\0') {
              pFVar7 = FCachedProperty::GetPropertyAddress<UE::MovieScene::FIntermediate3DTransform>
                                 ((FCachedProperty *)this_01);
LAB_14667cb8f:
              if (pFVar7 != (FIntermediate3DTransform *)0x0) {
                uVar22 = *(undefined4 *)&pFVar7->T_X;
                uVar23 = *(undefined4 *)((longlong)&pFVar7->T_X + 4);
                uVar24 = *(undefined4 *)&pFVar7->T_Y;
                uVar25 = *(undefined4 *)((longlong)&pFVar7->T_Y + 4);
                uVar26 = *(undefined4 *)&pFVar7->T_Z;
                uVar27 = *(undefined4 *)((longlong)&pFVar7->T_Z + 4);
                uVar28 = *(undefined4 *)&pFVar7->R_X;
                uVar29 = *(undefined4 *)((longlong)&pFVar7->R_X + 4);
                uVar30 = *(undefined4 *)&pFVar7->R_Y;
                uVar31 = *(undefined4 *)((longlong)&pFVar7->R_Y + 4);
                uVar32 = *(undefined4 *)&pFVar7->R_Z;
                uVar33 = *(undefined4 *)((longlong)&pFVar7->R_Z + 4);
                uVar34 = *(undefined4 *)&pFVar7->S_X;
                uVar35 = *(undefined4 *)((longlong)&pFVar7->S_X + 4);
                uVar36 = *(undefined4 *)&pFVar7->S_Y;
                uVar37 = *(undefined4 *)((longlong)&pFVar7->S_Y + 4);
                uVar38 = SUB84(pFVar7->S_Z,0);
                uVar39 = (undefined4)((ulonglong)pFVar7->S_Z >> 0x20);
              }
            }
            else if (uVar1 == '\x01') {
              pFVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
              goto LAB_14667cb8f;
            }
            lVar8 = (longlong)(int)local_res20;
            local_188.T_X = (double)CONCAT44(uVar23,uVar22);
            local_188.T_Z = (double)CONCAT44(uVar27,uVar26);
            local_188.R_Y = (double)CONCAT44(uVar31,uVar30);
            local_188.S_X = (double)CONCAT44(uVar35,uVar34);
            local_188.T_Y = (double)CONCAT44(uVar25,uVar24);
            local_188.R_X = (double)CONCAT44(uVar29,uVar28);
            local_188.R_Z = (double)CONCAT44(uVar33,uVar32);
            local_188.S_Y = (double)CONCAT44(uVar37,uVar36);
            local_188.S_Z = (double)CONCAT44(uVar39,uVar38);
            if (param_12 == (TReadOptional<double>)0x0) {
              local_res10 = param_12;
            }
            else {
              local_res10 = (TReadOptional<double>)((longlong)param_12 + lVar8 * 8);
            }
            pdVar4 = (double *)((longlong)param_11 + lVar8 * 8);
            pdVar5 = (double *)0x0;
            if (param_11 == (TReadOptional<double>)0x0) {
              pdVar4 = (double *)0x0;
            }
            if (param_10 == (TReadOptional<double>)0x0) {
              local_1b0 = (double *)0x0;
            }
            else {
              local_1b0 = (double *)((longlong)param_10 + lVar8 * 8);
            }
            if (param_9 == (TReadOptional<double>)0x0) {
              local_1b8 = (double *)0x0;
            }
            else {
              local_1b8 = (double *)((longlong)param_9 + lVar8 * 8);
            }
            pdVar19 = (double *)((longlong)param_8 + lVar8 * 8);
            if (param_8 == (TReadOptional<double>)0x0) {
              pdVar19 = (double *)0x0;
            }
            pdVar17 = (double *)((longlong)param_7 + lVar8 * 8);
            if (param_7 == (TReadOptional<double>)0x0) {
              pdVar17 = (double *)0x0;
            }
            pdVar15 = (double *)((longlong)param_6 + lVar8 * 8);
            if (param_6 == (TReadOptional<double>)0x0) {
              pdVar15 = (double *)0x0;
            }
            pdVar12 = (double *)((longlong)param_5 + lVar8 * 8);
            if (param_5 == (TReadOptional<double>)0x0) {
              pdVar12 = (double *)0x0;
            }
            if (param_4 != (TReadOptional<double>)0x0) {
              pdVar5 = (double *)(lVar8 * 8 + (longlong)param_4);
            }
            local_118.DataPtr = (this->CompositeDefinitions).DataPtr;
            local_118.ArrayNum = (this->CompositeDefinitions).ArrayNum;
            local_118._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
            PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                      ((TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *)&local_res10,&local_118,
                       (uchar *)&local_188,pdVar5,pdVar12,pdVar15,pdVar17,pdVar19,local_1b8,
                       local_1b0,pdVar4,(double *)local_res10);
            FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
                      (this_00,*(UObject **)((longlong)local_res18 + local_1a0 * 8),&local_188);
            local_1a0 = local_1a0 + 1;
            local_res20 = (double *)CONCAT44(local_res20._4_4_,(int)local_res20 + 1);
            puVar11 = puVar11 + 2;
          } while (local_1a0 < (longlong)(ulonglong)uVar2);
        }
      }
    }
    else {
      local_128 = (ulonglong)param_1->Size;
      if (param_1->Size != 0) {
        if (param_12 == (TReadOptional<double>)0x0) {
          local_res20._0_4_ = 0;
          if (local_128 != 0) {
            local_1b8 = (double *)0x0;
            local_130 = 0;
            do {
              pdVar5 = (double *)0x0;
              uVar10 = (ulonglong)local_1a8[(longlong)local_1b8];
              lVar8 = *(longlong *)((longlong)local_res18 + (longlong)local_1b8 * 8);
              local_188.T_X = *(double *)(uVar10 + lVar8);
              local_188.T_Y = ((double *)(uVar10 + lVar8))[1];
              pdVar4 = (double *)(uVar10 + 0x10 + lVar8);
              local_188.T_Z = *pdVar4;
              local_188.R_X = pdVar4[1];
              pdVar4 = (double *)(uVar10 + 0x20 + lVar8);
              local_188.R_Y = *pdVar4;
              local_188.R_Z = pdVar4[1];
              pdVar4 = (double *)(uVar10 + 0x30 + lVar8);
              local_188.S_X = *pdVar4;
              local_188.S_Y = pdVar4[1];
              local_188.S_Z = *(double *)(uVar10 + 0x40 + lVar8);
              lVar8 = (longlong)(int)local_res20;
              pdVar4 = (double *)((longlong)param_11 + lVar8 * 8);
              if (param_11 == (TReadOptional<double>)0x0) {
                pdVar4 = pdVar5;
              }
              if (param_10 == (TReadOptional<double>)0x0) {
                local_res10 = (TReadOptional<double>)0x0;
              }
              else {
                local_res10 = (TReadOptional<double>)(lVar8 * 8 + (longlong)param_10);
              }
              if (param_9 == (TReadOptional<double>)0x0) {
                local_1b0 = (double *)0x0;
              }
              else {
                local_1b0 = (double *)((longlong)param_9 + lVar8 * 8);
              }
              pdVar19 = (double *)((longlong)param_8 + lVar8 * 8);
              if (param_8 == (TReadOptional<double>)0x0) {
                pdVar19 = pdVar5;
              }
              pdVar17 = (double *)((longlong)param_7 + lVar8 * 8);
              if (param_7 == (TReadOptional<double>)0x0) {
                pdVar17 = pdVar5;
              }
              pdVar15 = (double *)((longlong)param_6 + lVar8 * 8);
              if (param_6 == (TReadOptional<double>)0x0) {
                pdVar15 = pdVar5;
              }
              pdVar12 = (double *)((longlong)param_5 + lVar8 * 8);
              if (param_5 == (TReadOptional<double>)0x0) {
                pdVar12 = pdVar5;
              }
              pdVar6 = (double *)((longlong)param_4 + lVar8 * 8);
              if (param_4 == (TReadOptional<double>)0x0) {
                pdVar6 = pdVar5;
              }
              local_118.DataPtr = (this->CompositeDefinitions).DataPtr;
              local_118.ArrayNum = (this->CompositeDefinitions).ArrayNum;
              local_118._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
              PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                        ((TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *)&local_res10,&local_118,
                         (uchar *)&local_188,pdVar6,pdVar12,pdVar15,pdVar17,pdVar19,local_1b0,
                         (double *)local_res10,pdVar4,(double *)0x0);
              local_res20._0_4_ = (int)local_res20 + 1;
              lVar8 = *(longlong *)((longlong)local_res18 + (longlong)local_1b8 * 8);
              local_1b8 = (double *)((longlong)local_1b8 + 1);
              *(double *)(lVar8 + uVar10) = local_188.T_X;
              ((double *)(lVar8 + uVar10))[1] = local_188.T_Y;
              pdVar4 = (double *)(lVar8 + 0x10 + uVar10);
              *pdVar4 = local_188.T_Z;
              pdVar4[1] = local_188.R_X;
              pdVar4 = (double *)(lVar8 + 0x20 + uVar10);
              *pdVar4 = local_188.R_Y;
              pdVar4[1] = local_188.R_Z;
              pdVar4 = (double *)(lVar8 + 0x30 + uVar10);
              *pdVar4 = local_188.S_X;
              pdVar4[1] = local_188.S_Y;
              *(double *)(lVar8 + 0x40 + uVar10) = local_188.S_Z;
            } while ((longlong)local_1b8 < (longlong)local_128);
          }
        }
        else {
          local_130 = (longlong)param_10 - (longlong)param_11;
          local_138 = (longlong)param_9 - (longlong)param_11;
          local_108 = (longlong)param_7 - (longlong)param_11;
          local_100 = (longlong)param_6 - (longlong)param_11;
          local_f8 = (longlong)param_5 - (longlong)param_11;
          TVar20 = param_11;
          local_1b8 = (double *)local_128;
          local_128 = (longlong)param_4 - (longlong)param_11;
          do {
            TVar18 = (TReadOptional<double>)0x0;
            uVar10 = (ulonglong)*local_1a8;
            lVar8 = *(longlong *)param_2;
            local_188.T_X = *(double *)(uVar10 + lVar8);
            local_188.T_Y = ((double *)(uVar10 + lVar8))[1];
            pdVar4 = (double *)(uVar10 + 0x10 + lVar8);
            local_188.T_Z = *pdVar4;
            local_188.R_X = pdVar4[1];
            pdVar4 = (double *)(uVar10 + 0x20 + lVar8);
            local_188.R_Y = *pdVar4;
            local_188.R_Z = pdVar4[1];
            pdVar4 = (double *)(uVar10 + 0x30 + lVar8);
            local_188.S_X = *pdVar4;
            local_188.S_Y = pdVar4[1];
            local_188.S_Z = *(double *)(uVar10 + 0x40 + lVar8);
            TVar13 = TVar20;
            if (param_11 == (TReadOptional<double>)0x0) {
              TVar13 = TVar18;
            }
            if (param_10 == (TReadOptional<double>)0x0) {
              local_res10 = (TReadOptional<double>)0x0;
            }
            else {
              local_res10 = (TReadOptional<double>)(local_130 + (longlong)TVar20);
            }
            if (param_9 == (TReadOptional<double>)0x0) {
              local_res20 = (double *)0x0;
            }
            else {
              local_res20 = (double *)(local_138 + (longlong)TVar20);
            }
            TVar21 = TVar18;
            if (param_8 != (TReadOptional<double>)0x0) {
              TVar21 = (TReadOptional<double>)
                       (((longlong)param_8 - (longlong)param_11) + (longlong)TVar20);
            }
            TVar16 = TVar18;
            if (param_7 != (TReadOptional<double>)0x0) {
              TVar16 = (TReadOptional<double>)(local_108 + (longlong)TVar20);
            }
            TVar14 = TVar18;
            if (param_6 != (TReadOptional<double>)0x0) {
              TVar14 = (TReadOptional<double>)(local_100 + (longlong)TVar20);
            }
            TVar9 = TVar18;
            if (param_5 != (TReadOptional<double>)0x0) {
              TVar9 = (TReadOptional<double>)(local_f8 + (longlong)TVar20);
            }
            if (param_4 != (TReadOptional<double>)0x0) {
              TVar18 = (TReadOptional<double>)(local_128 + (longlong)TVar20);
            }
            local_118.DataPtr = (this->CompositeDefinitions).DataPtr;
            local_118.ArrayNum = (this->CompositeDefinitions).ArrayNum;
            local_118._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
            local_res18 = param_2;
            PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                      ((TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *)&local_res10,&local_118,
                       (uchar *)&local_188,(double *)TVar18,(double *)TVar9,(double *)TVar14,
                       (double *)TVar16,(double *)TVar21,local_res20,(double *)local_res10,
                       (double *)TVar13,
                       (double *)(((longlong)param_12 - (longlong)param_11) + (longlong)TVar20));
            lVar8 = *(longlong *)local_res18;
            TVar20 = (TReadOptional<double>)((longlong)TVar20 + 8);
            local_1a8 = local_1a8 + 1;
            param_2 = (TRead<UObject_*>)((longlong)local_res18 + 8);
            local_1b8 = (double *)((longlong)local_1b8 - 1);
            *(double *)(lVar8 + uVar10) = local_188.T_X;
            ((double *)(lVar8 + uVar10))[1] = local_188.T_Y;
            pdVar4 = (double *)(lVar8 + 0x10 + uVar10);
            *pdVar4 = local_188.T_Z;
            pdVar4[1] = local_188.R_X;
            pdVar4 = (double *)(lVar8 + 0x20 + uVar10);
            *pdVar4 = local_188.R_Y;
            pdVar4[1] = local_188.R_Z;
            pdVar4 = (double *)(lVar8 + 0x30 + uVar10);
            *pdVar4 = local_188.S_X;
            pdVar4[1] = local_188.S_Y;
            *(double *)(lVar8 + 0x40 + uVar10) = local_188.S_Z;
          } while (local_1b8 != (double *)0x0);
        }
      }
    }
  }
  else {
    local_138 = (ulonglong)param_1->Size;
    local_res20 = (double *)((ulonglong)local_res20 & 0xffffffff00000000);
    if (local_138 != 0) {
      local_1a0 = 0;
      do {
        uVar3 = (uint)*(ushort *)(local_130 + local_1a0 * 2);
        local_188.S_Z = 0.0;
        local_188.T_X = 0.0;
        local_188.T_Y = 0.0;
        local_188.T_Z = 0.0;
        local_188.R_X = 0.0;
        local_188.R_Y = 0.0;
        local_188.R_Z = 0.0;
        local_188.S_X = 0.0;
        local_188.S_Y = 0.0;
        pdVar4 = (double *)
                 (**(code **)((this->CustomAccessors).Base +
                             (longlong)(int)(uVar3 * (this->CustomAccessors).Stride) + 0x18))
                           (local_f0,*(undefined8 *)((longlong)local_res18 + local_1a0 * 8));
        lVar8 = (longlong)(int)local_res20;
        local_188.T_X = *pdVar4;
        local_188.T_Y = pdVar4[1];
        local_188.T_Z = pdVar4[2];
        local_188.R_X = pdVar4[3];
        local_188.R_Y = pdVar4[4];
        local_188.R_Z = pdVar4[5];
        local_188.S_X = pdVar4[6];
        local_188.S_Y = pdVar4[7];
        local_188.S_Z = pdVar4[8];
        if (param_12 == (TReadOptional<double>)0x0) {
          local_res10 = param_12;
        }
        else {
          local_res10 = (TReadOptional<double>)((longlong)param_12 + lVar8 * 8);
        }
        pdVar4 = (double *)((longlong)param_11 + lVar8 * 8);
        pdVar5 = (double *)0x0;
        if (param_11 == (TReadOptional<double>)0x0) {
          pdVar4 = (double *)0x0;
        }
        if (param_10 == (TReadOptional<double>)0x0) {
          local_1b8 = (double *)0x0;
        }
        else {
          local_1b8 = (double *)((longlong)param_10 + lVar8 * 8);
        }
        if (param_9 == (TReadOptional<double>)0x0) {
          local_1b0 = (double *)0x0;
        }
        else {
          local_1b0 = (double *)((longlong)param_9 + lVar8 * 8);
        }
        pdVar19 = (double *)((longlong)param_8 + lVar8 * 8);
        if (param_8 == (TReadOptional<double>)0x0) {
          pdVar19 = (double *)0x0;
        }
        pdVar17 = (double *)((longlong)param_7 + lVar8 * 8);
        if (param_7 == (TReadOptional<double>)0x0) {
          pdVar17 = (double *)0x0;
        }
        pdVar15 = (double *)((longlong)param_6 + lVar8 * 8);
        if (param_6 == (TReadOptional<double>)0x0) {
          pdVar15 = (double *)0x0;
        }
        pdVar12 = (double *)((longlong)param_5 + lVar8 * 8);
        if (param_5 == (TReadOptional<double>)0x0) {
          pdVar12 = (double *)0x0;
        }
        if (param_4 != (TReadOptional<double>)0x0) {
          pdVar5 = (double *)(lVar8 * 8 + (longlong)param_4);
        }
        local_118.DataPtr = (this->CompositeDefinitions).DataPtr;
        local_118.ArrayNum = (this->CompositeDefinitions).ArrayNum;
        local_118._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
        PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                  ((TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *)&local_res10,&local_118,
                   (uchar *)&local_188,pdVar5,pdVar12,pdVar15,pdVar17,pdVar19,local_1b0,local_1b8,
                   pdVar4,(double *)local_res10);
        (**(code **)((this->CustomAccessors).Base +
                    (longlong)(int)(uVar3 * (this->CustomAccessors).Stride) + 0x20))
                  (*(undefined8 *)((longlong)local_res18 + local_1a0 * 8),&local_188);
        local_res20 = (double *)CONCAT44(local_res20._4_4_,(int)local_res20 + 1);
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < (longlong)local_138);
    }
  }
  return;
}

// ForEachAllocation @ 14667cda0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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

// ForEachAllocation @ 14667cdf0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<FString> param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FString *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  void *local_38 [2];
  
  lVar3 = *(longlong *)&param_3->Data;
  if (lVar3 == 0) {
    puVar4 = *(ushort **)&(param_3->Data).field_0x8;
    if (puVar4 != (ushort *)0x0) {
      ForEachFast(this,param_1,(UObject **)param_2,puVar4,(FString *)param_4);
      return;
    }
    pTVar5 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
    if (pTVar5 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
      ForEachSlow(this,param_1,(UObject **)param_2,pTVar5,(FString *)param_4);
      return;
    }
  }
  else {
    uVar9 = 0;
    uVar1 = param_1->Size;
    uVar10 = uVar9;
    if ((ulonglong)uVar1 != 0) {
      do {
        uVar2 = *(ushort *)(lVar3 + uVar9 * 2);
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        pFVar8 = (FString *)
                 (**(code **)((this->CustomAccessors).Base +
                             (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                           (local_38,*(undefined8 *)((longlong)param_2 + uVar9 * 8));
        if (&local_58 != pFVar8) {
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          local_58.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = (pFVar8->Data).ArrayNum;
          local_58.Data.ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
        if (param_4 == (TReadOptional<FString>)0x0) {
          pFVar8 = (FString *)0x0;
        }
        else {
          pFVar8 = (FString *)((longlong)(int)uVar10 * 0x10 + (longlong)param_4);
        }
        local_48 = *(undefined4 *)&(this->CompositeDefinitions).DataPtr;
        uStack_44 = *(undefined4 *)((longlong)&(this->CompositeDefinitions).DataPtr + 4);
        iStack_40 = (this->CompositeDefinitions).ArrayNum;
        uStack_3c = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
        if (((this->CompositeDefinitions).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pFVar8 != (FString *)0x0) {
          ::FString::operator=
                    ((FString *)
                     ((longlong)&local_58.Data.AllocatorInstance.Data +
                     (ulonglong)*(ushort *)(CONCAT44(uStack_44,local_48) + 2)),pFVar8);
        }
        (**(code **)((this->CustomAccessors).Base +
                    (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                  (*(undefined8 *)((longlong)param_2 + uVar9 * 8),&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        uVar9 = uVar9 + 1;
        uVar10 = (ulonglong)((int)uVar10 + 1);
      } while ((longlong)uVar9 < (longlong)(ulonglong)uVar1);
    }
  }
  return;
}

// ForEachAllocation @ 14667d000

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<FText> param_4)

{
  ushort *puVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar2;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (FText *)param_4);
    return;
  }
  puVar1 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar1 != (ushort *)0x0) {
    ForEachFast(this,param_1,(UObject **)param_2,puVar1,(FText *)param_4);
    return;
  }
  pTVar2 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
  if (pTVar2 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    ForEachSlow(this,param_1,(UObject **)param_2,pTVar2,(FText *)param_4);
    return;
  }
  return;
}

// ForEachCustom @ 14667d650

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               FVariantPropertyTypeIndex *param_4,double *param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 local_res10;
  
  lVar6 = 0;
  if (param_1->Size != 0) {
    uVar7 = (ulonglong)param_1->Size;
    if (param_5 == (double *)0x0) {
      if (uVar7 != 0) {
        do {
          uVar2 = param_3[lVar6].Value;
          uVar8 = (**(code **)((this->CustomAccessors).Base +
                              (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                            (param_2[lVar6]);
          local_res10 = uVar8;
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)((this->CustomAccessors).Base +
                      (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                    (param_2[lVar6],uVar8);
          lVar6 = lVar6 + 1;
        } while (lVar6 < (longlong)uVar7);
      }
    }
    else {
      lVar6 = (longlong)param_5 - (longlong)param_2;
      do {
        uVar2 = param_3->Value;
        local_res10 = (**(code **)((this->CustomAccessors).Base +
                                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) +
                                  0x18))(*param_2);
        pFVar4 = (this->CompositeDefinitions).DataPtr;
        if (((this->CompositeDefinitions).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar1 = (undefined8 *)(lVar6 + (longlong)param_2);
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)&local_res10 + (ulonglong)pFVar4->CompositeOffset) = *puVar1;
        }
        (**(code **)((this->CustomAccessors).Base +
                    (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                  (*param_2,local_res10);
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

// ForEachCustom @ 14667d820

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
               double *param_8)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  double *pdVar6;
  int iVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  double *pdVar12;
  double *pdVar13;
  uint local_res10;
  double local_78 [4];
  undefined1 local_58 [32];
  
  uVar1 = param_1->Size;
  uVar8 = 0;
  local_res10 = 0;
  uVar11 = uVar8;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar9 = (double *)0x0;
      uVar2 = param_3[uVar11].Value;
      local_78[0] = 0.0;
      local_78[1] = 0.0;
      local_78[2] = 0.0;
      local_78[3] = 0.0;
      pdVar6 = (double *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_58,param_2[uVar11]);
      local_78[0] = *pdVar6;
      local_78[1] = pdVar6[1];
      local_78[2] = pdVar6[2];
      local_78[3] = pdVar6[3];
      iVar7 = (int)uVar8;
      pdVar6 = param_8 + iVar7;
      if (param_8 == (double *)0x0) {
        pdVar6 = pdVar9;
      }
      pdVar13 = param_7 + iVar7;
      if (param_7 == (double *)0x0) {
        pdVar13 = pdVar9;
      }
      pdVar12 = param_6 + iVar7;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar9;
      }
      pdVar10 = param_5 + iVar7;
      if (param_5 == (double *)0x0) {
        pdVar10 = pdVar9;
      }
      pFVar4 = (this->CompositeDefinitions).DataPtr;
      iVar7 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4->CompositeOffset) = *pdVar10;
      }
      if ((iVar7 < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar7 < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[2].CompositeOffset) = *pdVar13;
      }
      if ((iVar7 < 4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar6 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[3].CompositeOffset) = *pdVar6;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[uVar11],local_78);
      uVar11 = uVar11 + 1;
      local_res10 = local_res10 + 1;
      uVar8 = (ulonglong)local_res10;
    } while ((longlong)uVar11 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667daf0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
               double *param_8)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  double *pdVar6;
  int iVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  double *pdVar12;
  double *pdVar13;
  uint local_res10;
  double local_78 [4];
  undefined1 local_58 [32];
  
  uVar1 = param_1->Size;
  uVar8 = 0;
  local_res10 = 0;
  uVar11 = uVar8;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar9 = (double *)0x0;
      uVar2 = param_3[uVar11].Value;
      local_78[0] = 0.0;
      local_78[1] = 0.0;
      local_78[2] = 0.0;
      local_78[3] = 0.0;
      pdVar6 = (double *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_58,param_2[uVar11]);
      local_78[0] = *pdVar6;
      local_78[1] = pdVar6[1];
      local_78[2] = pdVar6[2];
      local_78[3] = pdVar6[3];
      iVar7 = (int)uVar8;
      pdVar6 = param_8 + iVar7;
      if (param_8 == (double *)0x0) {
        pdVar6 = pdVar9;
      }
      pdVar13 = param_7 + iVar7;
      if (param_7 == (double *)0x0) {
        pdVar13 = pdVar9;
      }
      pdVar12 = param_6 + iVar7;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar9;
      }
      pdVar10 = param_5 + iVar7;
      if (param_5 == (double *)0x0) {
        pdVar10 = pdVar9;
      }
      pFVar4 = (this->CompositeDefinitions).DataPtr;
      iVar7 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4->CompositeOffset) = *pdVar10;
      }
      if ((iVar7 < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar7 < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[2].CompositeOffset) = *pdVar13;
      }
      if ((iVar7 < 4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar6 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[3].CompositeOffset) = *pdVar6;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[uVar11],local_78);
      uVar11 = uVar11 + 1;
      local_res10 = local_res10 + 1;
      uVar8 = (ulonglong)local_res10;
    } while ((longlong)uVar11 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667ddc0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
               double *param_8,double *param_9,double *param_10,double *param_11,double *param_12,
               double *param_13)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res10 [8];
  UObject **local_res18;
  FCustomPropertyIndex *local_res20;
  int local_128;
  longlong local_120;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_b8;
  undefined1 local_a8 [104];
  
  uVar1 = param_1->Size;
  local_128 = 0;
  if ((ulonglong)uVar1 != 0) {
    local_120 = 0;
    local_res18 = param_2;
    local_res20 = param_3;
    do {
      uVar2 = local_res20[local_120].Value;
      local_c8 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      puVar3 = (undefined8 *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_a8,local_res18[local_120]);
      pdVar5 = (double *)0x0;
      local_108 = *puVar3;
      uStack_100 = puVar3[1];
      local_f8 = puVar3[2];
      uStack_f0 = puVar3[3];
      local_e8 = puVar3[4];
      uStack_e0 = puVar3[5];
      local_d8 = puVar3[6];
      uStack_d0 = puVar3[7];
      local_c8 = puVar3[8];
      lVar4 = (longlong)local_128;
      pdVar8 = param_13 + lVar4;
      if (param_13 == (double *)0x0) {
        pdVar8 = pdVar5;
      }
      pdVar7 = param_12 + lVar4;
      if (param_12 == (double *)0x0) {
        pdVar7 = pdVar5;
      }
      pdVar9 = param_11 + lVar4;
      if (param_11 == (double *)0x0) {
        pdVar9 = pdVar5;
      }
      pdVar13 = pdVar5;
      if (param_10 != (double *)0x0) {
        pdVar13 = param_10 + lVar4;
      }
      pdVar12 = param_9 + lVar4;
      if (param_9 == (double *)0x0) {
        pdVar12 = pdVar5;
      }
      pdVar10 = param_8 + lVar4;
      if (param_8 == (double *)0x0) {
        pdVar10 = pdVar5;
      }
      pdVar6 = param_7 + lVar4;
      if (param_7 == (double *)0x0) {
        pdVar6 = pdVar5;
      }
      if (param_6 != (double *)0x0) {
        pdVar5 = param_6 + lVar4;
      }
      pdVar11 = param_5;
      if (param_5 != (double *)0x0) {
        pdVar11 = param_5 + lVar4;
      }
      local_b8.DataPtr = (this->CompositeDefinitions).DataPtr;
      local_b8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                (local_res10,&local_b8,(uchar *)&local_108,pdVar11,pdVar5,pdVar6,pdVar10,pdVar12,
                 pdVar13,pdVar9,pdVar7,pdVar8);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (local_res18[local_120],&local_108);
      local_120 = local_120 + 1;
      local_128 = local_128 + 1;
    } while (local_120 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667e090

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
               double *param_8)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  double *pdVar6;
  int iVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  double *pdVar12;
  double *pdVar13;
  uint local_res10;
  double local_78 [4];
  undefined1 local_58 [32];
  
  uVar1 = param_1->Size;
  uVar8 = 0;
  local_res10 = 0;
  uVar11 = uVar8;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar9 = (double *)0x0;
      uVar2 = param_3[uVar11].Value;
      local_78[0] = 0.0;
      local_78[1] = 0.0;
      local_78[2] = 0.0;
      local_78[3] = 0.0;
      pdVar6 = (double *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_58,param_2[uVar11]);
      local_78[0] = *pdVar6;
      local_78[1] = pdVar6[1];
      local_78[2] = pdVar6[2];
      local_78[3] = pdVar6[3];
      iVar7 = (int)uVar8;
      pdVar6 = param_8 + iVar7;
      if (param_8 == (double *)0x0) {
        pdVar6 = pdVar9;
      }
      pdVar13 = param_7 + iVar7;
      if (param_7 == (double *)0x0) {
        pdVar13 = pdVar9;
      }
      pdVar12 = param_6 + iVar7;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar9;
      }
      pdVar10 = param_5 + iVar7;
      if (param_5 == (double *)0x0) {
        pdVar10 = pdVar9;
      }
      pFVar4 = (this->CompositeDefinitions).DataPtr;
      iVar7 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4->CompositeOffset) = *pdVar10;
      }
      if ((iVar7 < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar7 < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[2].CompositeOffset) = *pdVar13;
      }
      if ((iVar7 < 4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar6 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[3].CompositeOffset) = *pdVar6;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[uVar11],local_78);
      uVar11 = uVar11 + 1;
      local_res10 = local_res10 + 1;
      uVar8 = (ulonglong)local_res10;
    } while ((longlong)uVar11 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667e360

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               FVariantPropertyTypeIndex *param_4,long64 *param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_res10;
  
  lVar7 = 0;
  if (param_1->Size != 0) {
    uVar8 = (ulonglong)param_1->Size;
    if (param_5 == (long64 *)0x0) {
      if (uVar8 != 0) {
        do {
          uVar2 = param_3[lVar7].Value;
          uVar6 = (**(code **)((this->CustomAccessors).Base +
                              (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                            (param_2[lVar7]);
          local_res10 = uVar6;
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)((this->CustomAccessors).Base +
                      (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                    (param_2[lVar7],uVar6);
          lVar7 = lVar7 + 1;
        } while (lVar7 < (longlong)uVar8);
      }
    }
    else {
      lVar7 = (longlong)param_5 - (longlong)param_2;
      do {
        uVar2 = param_3->Value;
        local_res10 = (**(code **)((this->CustomAccessors).Base +
                                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) +
                                  0x18))(*param_2);
        pFVar4 = (this->CompositeDefinitions).DataPtr;
        if (((this->CompositeDefinitions).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar1 = (undefined8 *)(lVar7 + (longlong)param_2);
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)&local_res10 + (ulonglong)pFVar4->CompositeOffset) = *puVar1;
        }
        (**(code **)((this->CustomAccessors).Base +
                    (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                  (*param_2,local_res10);
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}

// ForEachCustom @ 14667e540

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               uchar *param_4)

{
  ushort uVar1;
  code *pcVar2;
  FPropertyCompositeDefinition *pFVar3;
  bool bVar4;
  uchar uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uchar local_res10 [8];
  
  lVar6 = 0;
  if (param_1->Size != 0) {
    uVar7 = (ulonglong)param_1->Size;
    if (param_4 == (uchar *)0x0) {
      if (uVar7 != 0) {
        do {
          uVar1 = param_3[lVar6].Value;
          uVar5 = (**(code **)((this->CustomAccessors).Base +
                              (longlong)(int)((uint)uVar1 * (this->CustomAccessors).Stride) + 0x18))
                            (param_2[lVar6]);
          local_res10[0] = uVar5;
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (**(code **)((this->CustomAccessors).Base +
                      (longlong)(int)((uint)uVar1 * (this->CustomAccessors).Stride) + 0x20))
                    (param_2[lVar6],uVar5);
          lVar6 = lVar6 + 1;
        } while (lVar6 < (longlong)uVar7);
      }
    }
    else {
      do {
        uVar1 = param_3->Value;
        local_res10[0] =
             (**(code **)((this->CustomAccessors).Base +
                         (longlong)(int)((uint)uVar1 * (this->CustomAccessors).Stride) + 0x18))
                       (*param_2);
        pFVar3 = (this->CompositeDefinitions).DataPtr;
        if (((this->CompositeDefinitions).ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (param_4 != (uchar *)0x0) {
          local_res10[pFVar3->CompositeOffset] = *param_4;
        }
        (**(code **)((this->CustomAccessors).Base +
                    (longlong)(int)((uint)uVar1 * (this->CustomAccessors).Stride) + 0x20))
                  (*param_2,local_res10[0]);
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        param_2 = param_2 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

// ForEachCustom @ 14667e710

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 local_res10;
  
  lVar6 = 0;
  if (param_1->Size != 0) {
    uVar7 = (ulonglong)param_1->Size;
    if (param_4 == (double *)0x0) {
      if (uVar7 != 0) {
        do {
          uVar2 = param_3[lVar6].Value;
          uVar8 = (**(code **)((this->CustomAccessors).Base +
                              (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                            (param_2[lVar6]);
          local_res10 = uVar8;
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)((this->CustomAccessors).Base +
                      (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                    (param_2[lVar6],uVar8);
          lVar6 = lVar6 + 1;
        } while (lVar6 < (longlong)uVar7);
      }
    }
    else {
      lVar6 = (longlong)param_4 - (longlong)param_2;
      do {
        uVar2 = param_3->Value;
        local_res10 = (**(code **)((this->CustomAccessors).Base +
                                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) +
                                  0x18))(*param_2);
        pFVar4 = (this->CompositeDefinitions).DataPtr;
        if (((this->CompositeDefinitions).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar1 = (undefined8 *)(lVar6 + (longlong)param_2);
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)&local_res10 + (ulonglong)pFVar4->CompositeOffset) = *puVar1;
        }
        (**(code **)((this->CustomAccessors).Base +
                    (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                  (*param_2,local_res10);
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

// ForEachCustom @ 14667e8e0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4,double *param_5,double *param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  FPropertyCompositeDefinition *pFVar5;
  bool bVar6;
  double *pdVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  uint local_res10;
  double local_68 [3];
  undefined1 local_50 [24];
  
  uVar1 = param_1->Size;
  uVar9 = 0;
  local_res10 = 0;
  uVar10 = uVar9;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar11 = (double *)0x0;
      uVar2 = param_3[uVar10].Value;
      local_68[2] = 0.0;
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      pdVar7 = (double *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_50,param_2[uVar10]);
      local_68[0] = *pdVar7;
      local_68[1] = pdVar7[1];
      local_68[2] = pdVar7[2];
      iVar8 = (int)uVar9;
      pdVar7 = param_6 + iVar8;
      if (param_6 == (double *)0x0) {
        pdVar7 = pdVar11;
      }
      pFVar5 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      pdVar13 = param_5 + iVar8;
      if (param_5 == (double *)0x0) {
        pdVar13 = pdVar11;
      }
      pdVar12 = param_4 + iVar8;
      if (param_4 == (double *)0x0) {
        pdVar12 = pdVar11;
      }
      if ((iVar3 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar5->CompositeOffset) = *pdVar12;
      }
      if ((iVar3 < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar5[1].CompositeOffset) = *pdVar13;
      }
      if ((iVar3 < 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar7 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar5[2].CompositeOffset) = *pdVar7;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[uVar10],local_68);
      uVar10 = uVar10 + 1;
      local_res10 = local_res10 + 1;
      uVar9 = (ulonglong)local_res10;
    } while ((longlong)uVar10 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667eb40

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4,double *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  FPropertyCompositeDefinition *pFVar5;
  bool bVar6;
  double *pdVar7;
  double *pdVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  double local_78 [4];
  undefined1 local_58 [32];
  
  uVar1 = param_1->Size;
  uVar9 = 0;
  uVar11 = uVar9;
  if ((ulonglong)uVar1 != 0) {
    do {
      uVar2 = param_3[uVar9].Value;
      local_78[0] = 0.0;
      local_78[1] = 0.0;
      local_78[2] = 0.0;
      local_78[3] = 0.0;
      pdVar7 = (double *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_58,param_2[uVar9]);
      local_78[0] = *pdVar7;
      local_78[1] = pdVar7[1];
      local_78[2] = pdVar7[2];
      local_78[3] = pdVar7[3];
      iVar10 = (int)uVar11;
      pdVar7 = param_5 + iVar10;
      if (param_5 == (double *)0x0) {
        pdVar7 = (double *)0x0;
      }
      pFVar5 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      pdVar8 = param_4 + iVar10;
      if (param_4 == (double *)0x0) {
        pdVar8 = (double *)0x0;
      }
      if ((iVar3 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar8 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar5->CompositeOffset) = *pdVar8;
      }
      if ((iVar3 < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar7 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar5[1].CompositeOffset) = *pdVar7;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[uVar9],local_78);
      uVar9 = uVar9 + 1;
      uVar11 = (ulonglong)(iVar10 + 1);
    } while ((longlong)uVar9 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667ed40

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4,double *param_5,double *param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  FPropertyCompositeDefinition *pFVar5;
  bool bVar6;
  double *pdVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  uint local_res10;
  double local_78 [4];
  undefined1 local_58 [32];
  
  uVar1 = param_1->Size;
  uVar9 = 0;
  local_res10 = 0;
  uVar10 = uVar9;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar11 = (double *)0x0;
      uVar2 = param_3[uVar10].Value;
      local_78[0] = 0.0;
      local_78[1] = 0.0;
      local_78[2] = 0.0;
      local_78[3] = 0.0;
      pdVar7 = (double *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_58,param_2[uVar10]);
      local_78[0] = *pdVar7;
      local_78[1] = pdVar7[1];
      local_78[2] = pdVar7[2];
      local_78[3] = pdVar7[3];
      iVar8 = (int)uVar9;
      pdVar7 = param_6 + iVar8;
      if (param_6 == (double *)0x0) {
        pdVar7 = pdVar11;
      }
      pFVar5 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      pdVar13 = param_5 + iVar8;
      if (param_5 == (double *)0x0) {
        pdVar13 = pdVar11;
      }
      pdVar12 = param_4 + iVar8;
      if (param_4 == (double *)0x0) {
        pdVar12 = pdVar11;
      }
      if ((iVar3 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar5->CompositeOffset) = *pdVar12;
      }
      if ((iVar3 < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar5[1].CompositeOffset) = *pdVar13;
      }
      if ((iVar3 < 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar7 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar5[2].CompositeOffset) = *pdVar7;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[uVar10],local_78);
      uVar10 = uVar10 + 1;
      local_res10 = local_res10 + 1;
      uVar9 = (ulonglong)local_res10;
    } while ((longlong)uVar10 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667efb0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4,double *param_5,double *param_6,double *param_7,double *param_8,
               double *param_9,double *param_10,double *param_11,double *param_12)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res10 [8];
  UObject **local_res18;
  FCustomPropertyIndex *local_res20;
  int local_128;
  longlong local_120;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_b8;
  undefined1 local_a8 [104];
  
  uVar1 = param_1->Size;
  local_128 = 0;
  if ((ulonglong)uVar1 != 0) {
    local_120 = 0;
    local_res18 = param_2;
    local_res20 = param_3;
    do {
      uVar2 = local_res20[local_120].Value;
      local_c8 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      puVar3 = (undefined8 *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_a8,local_res18[local_120]);
      pdVar5 = (double *)0x0;
      local_108 = *puVar3;
      uStack_100 = puVar3[1];
      local_f8 = puVar3[2];
      uStack_f0 = puVar3[3];
      local_e8 = puVar3[4];
      uStack_e0 = puVar3[5];
      local_d8 = puVar3[6];
      uStack_d0 = puVar3[7];
      local_c8 = puVar3[8];
      lVar4 = (longlong)local_128;
      pdVar8 = param_12 + lVar4;
      if (param_12 == (double *)0x0) {
        pdVar8 = pdVar5;
      }
      pdVar7 = param_11 + lVar4;
      if (param_11 == (double *)0x0) {
        pdVar7 = pdVar5;
      }
      pdVar9 = param_10 + lVar4;
      if (param_10 == (double *)0x0) {
        pdVar9 = pdVar5;
      }
      pdVar13 = pdVar5;
      if (param_9 != (double *)0x0) {
        pdVar13 = param_9 + lVar4;
      }
      pdVar12 = param_8 + lVar4;
      if (param_8 == (double *)0x0) {
        pdVar12 = pdVar5;
      }
      pdVar10 = param_7 + lVar4;
      if (param_7 == (double *)0x0) {
        pdVar10 = pdVar5;
      }
      pdVar6 = param_6 + lVar4;
      if (param_6 == (double *)0x0) {
        pdVar6 = pdVar5;
      }
      if (param_5 != (double *)0x0) {
        pdVar5 = param_5 + lVar4;
      }
      pdVar11 = param_4;
      if (param_4 != (double *)0x0) {
        pdVar11 = param_4 + lVar4;
      }
      local_b8.DataPtr = (this->CompositeDefinitions).DataPtr;
      local_b8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                (local_res10,&local_b8,(uchar *)&local_108,pdVar11,pdVar5,pdVar6,pdVar10,pdVar12,
                 pdVar13,pdVar9,pdVar7,pdVar8);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (local_res18[local_120],&local_108);
      local_120 = local_120 + 1;
      local_128 = local_128 + 1;
    } while (local_120 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667f280

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4,double *param_5,double *param_6,double *param_7,double *param_8,
               double *param_9,double *param_10,double *param_11,double *param_12)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res10 [8];
  UObject **local_res18;
  FCustomPropertyIndex *local_res20;
  int local_128;
  longlong local_120;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_b8;
  undefined1 local_a8 [104];
  
  uVar1 = param_1->Size;
  local_128 = 0;
  if ((ulonglong)uVar1 != 0) {
    local_120 = 0;
    local_res18 = param_2;
    local_res20 = param_3;
    do {
      uVar2 = local_res20[local_120].Value;
      local_c8 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      puVar3 = (undefined8 *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_a8,local_res18[local_120]);
      pdVar5 = (double *)0x0;
      local_108 = *puVar3;
      uStack_100 = puVar3[1];
      local_f8 = puVar3[2];
      uStack_f0 = puVar3[3];
      local_e8 = puVar3[4];
      uStack_e0 = puVar3[5];
      local_d8 = puVar3[6];
      uStack_d0 = puVar3[7];
      local_c8 = puVar3[8];
      lVar4 = (longlong)local_128;
      pdVar8 = param_12 + lVar4;
      if (param_12 == (double *)0x0) {
        pdVar8 = pdVar5;
      }
      pdVar7 = param_11 + lVar4;
      if (param_11 == (double *)0x0) {
        pdVar7 = pdVar5;
      }
      pdVar9 = param_10 + lVar4;
      if (param_10 == (double *)0x0) {
        pdVar9 = pdVar5;
      }
      pdVar13 = pdVar5;
      if (param_9 != (double *)0x0) {
        pdVar13 = param_9 + lVar4;
      }
      pdVar12 = param_8 + lVar4;
      if (param_8 == (double *)0x0) {
        pdVar12 = pdVar5;
      }
      pdVar10 = param_7 + lVar4;
      if (param_7 == (double *)0x0) {
        pdVar10 = pdVar5;
      }
      pdVar6 = param_6 + lVar4;
      if (param_6 == (double *)0x0) {
        pdVar6 = pdVar5;
      }
      if (param_5 != (double *)0x0) {
        pdVar5 = param_5 + lVar4;
      }
      pdVar11 = param_4;
      if (param_4 != (double *)0x0) {
        pdVar11 = param_4 + lVar4;
      }
      local_b8.DataPtr = (this->CompositeDefinitions).DataPtr;
      local_b8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                (local_res10,&local_b8,(uchar *)&local_108,pdVar11,pdVar5,pdVar6,pdVar10,pdVar12,
                 pdVar13,pdVar9,pdVar7,pdVar8);
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (local_res18[local_120],&local_108);
      local_120 = local_120 + 1;
      local_128 = local_128 + 1;
    } while (local_120 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667f550

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4,double *param_5,double *param_6,double *param_7)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  double *pdVar6;
  int iVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  double *pdVar12;
  double *pdVar13;
  uint local_res10;
  double local_78 [4];
  undefined1 local_58 [32];
  
  uVar1 = param_1->Size;
  uVar8 = 0;
  local_res10 = 0;
  uVar11 = uVar8;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar9 = (double *)0x0;
      uVar2 = param_3[uVar11].Value;
      local_78[0] = 0.0;
      local_78[1] = 0.0;
      local_78[2] = 0.0;
      local_78[3] = 0.0;
      pdVar6 = (double *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_58,param_2[uVar11]);
      local_78[0] = *pdVar6;
      local_78[1] = pdVar6[1];
      local_78[2] = pdVar6[2];
      local_78[3] = pdVar6[3];
      iVar7 = (int)uVar8;
      pdVar6 = param_7 + iVar7;
      if (param_7 == (double *)0x0) {
        pdVar6 = pdVar9;
      }
      pdVar13 = param_6 + iVar7;
      if (param_6 == (double *)0x0) {
        pdVar13 = pdVar9;
      }
      pdVar12 = param_5 + iVar7;
      if (param_5 == (double *)0x0) {
        pdVar12 = pdVar9;
      }
      pdVar10 = param_4 + iVar7;
      if (param_4 == (double *)0x0) {
        pdVar10 = pdVar9;
      }
      pFVar4 = (this->CompositeDefinitions).DataPtr;
      iVar7 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4->CompositeOffset) = *pdVar10;
      }
      if ((iVar7 < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar7 < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[2].CompositeOffset) = *pdVar13;
      }
      if ((iVar7 < 4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar6 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[3].CompositeOffset) = *pdVar6;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[uVar11],local_78);
      uVar11 = uVar11 + 1;
      local_res10 = local_res10 + 1;
      uVar8 = (ulonglong)local_res10;
    } while ((longlong)uVar11 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667f820

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               FString *param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  FString *pFVar6;
  ulonglong uVar7;
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  void *local_38 [2];
  
  uVar1 = param_1->Size;
  uVar5 = 0;
  uVar7 = uVar5;
  if ((ulonglong)uVar1 != 0) {
    do {
      uVar2 = param_3[uVar7].Value;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      pFVar6 = (FString *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_38,param_2[uVar7]);
      if (&local_58 != pFVar6) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_58.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      if (param_4 == (FString *)0x0) {
        pFVar6 = (FString *)0x0;
      }
      else {
        pFVar6 = param_4 + (int)uVar5;
      }
      local_48 = *(undefined4 *)&(this->CompositeDefinitions).DataPtr;
      uStack_44 = *(undefined4 *)((longlong)&(this->CompositeDefinitions).DataPtr + 4);
      iStack_40 = (this->CompositeDefinitions).ArrayNum;
      uStack_3c = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pFVar6 != (FString *)0x0) {
        ::FString::operator=
                  ((FString *)
                   ((longlong)&local_58.Data.AllocatorInstance.Data +
                   (ulonglong)*(ushort *)(CONCAT44(uStack_44,local_48) + 2)),pFVar6);
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[uVar7],&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachCustom @ 14667f9f0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               FText *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  FText *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 local_res10 [8];
  UObject **local_res18;
  FCustomPropertyIndex *local_res20;
  FText local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  
  uVar1 = param_1->Size;
  iVar11 = 0;
  if ((ulonglong)uVar1 != 0) {
    lVar9 = 0;
    local_res18 = param_2;
    local_res20 = param_3;
    do {
      uVar2 = local_res20[lVar9].Value;
      FText::FText(&local_70);
      pFVar7 = (FText *)(**(code **)((this->CustomAccessors).Base +
                                    (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) +
                                    0x18))(local_48,param_2[lVar9]);
      FText::operator=(&local_70,pFVar7);
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      if (param_4 == (FText *)0x0) {
        pFVar7 = (FText *)0x0;
      }
      else {
        pFVar7 = param_4 + iVar11;
      }
      local_58 = *(undefined4 *)&(this->CompositeDefinitions).DataPtr;
      uStack_54 = *(undefined4 *)((longlong)&(this->CompositeDefinitions).DataPtr + 4);
      iStack_50 = (this->CompositeDefinitions).ArrayNum;
      uStack_4c = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pFVar7 != (FText *)0x0) {
        uVar8 = (ulonglong)*(ushort *)(CONCAT44(uStack_54,local_58) + 2);
        plVar10 = (longlong *)((longlong)&local_70.TextData.Reference + uVar8);
        pIVar3 = (pFVar7->TextData).Reference;
        pIVar4 = (ITextData *)*plVar10;
        if (pIVar4 != pIVar3) {
          *plVar10 = (longlong)pIVar3;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
          }
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
          }
        }
        *(uint *)((longlong)&local_70.Flags + uVar8) = pFVar7->Flags;
        param_2 = local_res18;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[lVar9],&local_70);
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      }
      iVar11 = iVar11 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachFast @ 1466816f0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5)

{
  byte bVar1;
  ushort uVar2;
  TDynamicVariantPropertyTraits<double,double> *pTVar3;
  UObject *pUVar4;
  code *pcVar5;
  FPropertyCompositeDefinition *pFVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  ulonglong uVar11;
  int iVar12;
  FVariantPropertyTypeIndex *pFVar13;
  undefined4 uVar14;
  double local_res10;
  
  uVar2 = param_1->Size;
  iVar12 = 0;
  pFVar13 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar13->Index;
      uVar11 = (ulonglong)*param_3;
      pTVar3 = this->Traits;
      pUVar4 = *param_2;
      local_res10 = 0.0;
      if (bVar1 == 0) {
        (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<double,double>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,double&___ptr64)'
                  ::__l2::Funcs)(pUVar4,uVar11,&local_res10);
      }
      else {
        uVar9 = bVar1 - 1;
        if ((-1 < (int)uVar9) && ((int)uVar9 < (pTVar3->DynamicTraits).ArrayNum)) {
          uVar8 = 0;
          if ((int)uVar9 < (pTVar3->DynamicTraits).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)((pTVar3->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x28))(&pUVar4->field_0x0 + uVar11,&local_res10);
        }
      }
      if (param_5 == (double *)0x0) {
        pdVar10 = (double *)0x0;
      }
      else {
        pdVar10 = param_5 + iVar12;
      }
      pFVar6 = (this->CompositeDefinitions).DataPtr;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)&local_res10 + (ulonglong)pFVar6->CompositeOffset) = *pdVar10;
      }
      bVar1 = pFVar13->Index;
      pTVar3 = this->Traits;
      uVar14 = SUB84(local_res10,0);
      pUVar4 = *param_2;
      if (bVar1 == 0) {
        (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<double,double>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,double)'
                  ::__l2::Funcs)(pUVar4,uVar11,local_res10);
      }
      else {
        uVar9 = bVar1 - 1;
        if ((-1 < (int)uVar9) && ((int)uVar9 < (pTVar3->DynamicTraits).ArrayNum)) {
          uVar8 = 0;
          if ((int)uVar9 < (pTVar3->DynamicTraits).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)((pTVar3->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x20))(uVar14,&pUVar4->field_0x0 + uVar11);
        }
      }
      pFVar13 = pFVar13 + 1;
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while ((longlong)pFVar13 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachFast @ 1466819c0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
             double *param_8)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
  *pTVar5;
  UObject *pUVar6;
  code *pcVar7;
  FPropertyCompositeDefinition *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  FVariantPropertyTypeIndex *pFVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double local_68 [5];
  
  uVar2 = param_1->Size;
  iVar16 = 0;
  pFVar15 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar15->Index;
      uVar3 = *param_3;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      local_68[3] = 0.0;
      if (bVar1 < 5) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FDoubleIntermediateVector&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,uVar3,local_68);
      }
      else {
        uVar11 = bVar1 - 5;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x108))(&pUVar6->field_0x0 + uVar3,local_68);
        }
      }
      pdVar14 = (double *)0x0;
      pdVar18 = param_8 + iVar16;
      if (param_8 == (double *)0x0) {
        pdVar18 = pdVar14;
      }
      pdVar17 = param_7 + iVar16;
      if (param_7 == (double *)0x0) {
        pdVar17 = pdVar14;
      }
      pdVar12 = param_6 + iVar16;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar14;
      }
      pdVar13 = param_5 + iVar16;
      if (param_5 == (double *)0x0) {
        pdVar13 = pdVar14;
      }
      pFVar8 = (this->CompositeDefinitions).DataPtr;
      iVar4 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar4 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8->CompositeOffset) = *pdVar13;
      }
      if ((iVar4 < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar4 < 3) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar17 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[2].CompositeOffset) = *pdVar17;
      }
      if ((iVar4 < 4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar18 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[3].CompositeOffset) = *pdVar18;
      }
      bVar1 = pFVar15->Index;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      if (bVar1 < 5) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FDoubleIntermediateVector_const&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,uVar3,local_68);
      }
      else {
        uVar11 = bVar1 - 5;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x100))(local_68,&pUVar6->field_0x0 + uVar3);
        }
      }
      pFVar15 = pFVar15 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar16 = iVar16 + 1;
    } while ((longlong)pFVar15 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachFast @ 146681de0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
             double *param_8)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
  *pTVar5;
  UObject *pUVar6;
  code *pcVar7;
  FPropertyCompositeDefinition *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  FVariantPropertyTypeIndex *pFVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double local_68 [5];
  
  uVar2 = param_1->Size;
  iVar16 = 0;
  pFVar15 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar15->Index;
      uVar3 = *param_3;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      local_68[3] = 0.0;
      if (bVar1 < 3) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FFloatIntermediateVector&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,uVar3,local_68);
      }
      else {
        uVar11 = bVar1 - 3;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x98))(&pUVar6->field_0x0 + uVar3,local_68);
        }
      }
      pdVar14 = (double *)0x0;
      pdVar18 = param_8 + iVar16;
      if (param_8 == (double *)0x0) {
        pdVar18 = pdVar14;
      }
      pdVar17 = param_7 + iVar16;
      if (param_7 == (double *)0x0) {
        pdVar17 = pdVar14;
      }
      pdVar12 = param_6 + iVar16;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar14;
      }
      pdVar13 = param_5 + iVar16;
      if (param_5 == (double *)0x0) {
        pdVar13 = pdVar14;
      }
      pFVar8 = (this->CompositeDefinitions).DataPtr;
      iVar4 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar4 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8->CompositeOffset) = *pdVar13;
      }
      if ((iVar4 < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar4 < 3) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar17 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[2].CompositeOffset) = *pdVar17;
      }
      if ((iVar4 < 4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar18 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[3].CompositeOffset) = *pdVar18;
      }
      bVar1 = pFVar15->Index;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      if (bVar1 < 3) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FFloatIntermediateVector_const&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,uVar3,local_68);
      }
      else {
        uVar11 = bVar1 - 3;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x90))(local_68,&pUVar6->field_0x0 + uVar3);
        }
      }
      pFVar15 = pFVar15 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar16 = iVar16 + 1;
    } while ((longlong)pFVar15 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachFast @ 146682200

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
             double *param_8,double *param_9,double *param_10,double *param_11,double *param_12,
             double *param_13)

{
  byte bVar1;
  ushort uVar2;
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
  *pTVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  double *pdVar8;
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  FVariantPropertyTypeIndex *pFVar19;
  ulonglong uVar20;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res10 [8];
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_a8;
  uchar local_98 [96];
  
  uVar2 = param_1->Size;
  iVar12 = 0;
  pFVar19 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar19->Index;
      uVar20 = (ulonglong)*param_3;
      pTVar3 = this->Traits;
      pUVar4 = *param_2;
      local_98[0x40] = '\0';
      local_98[0x41] = '\0';
      local_98[0x42] = '\0';
      local_98[0x43] = '\0';
      local_98[0x44] = '\0';
      local_98[0x45] = '\0';
      local_98[0x46] = '\0';
      local_98[0x47] = '\0';
      local_98[0] = '\0';
      local_98[1] = '\0';
      local_98[2] = '\0';
      local_98[3] = '\0';
      local_98[4] = '\0';
      local_98[5] = '\0';
      local_98[6] = '\0';
      local_98[7] = '\0';
      local_98[8] = '\0';
      local_98[9] = '\0';
      local_98[10] = '\0';
      local_98[0xb] = '\0';
      local_98[0xc] = '\0';
      local_98[0xd] = '\0';
      local_98[0xe] = '\0';
      local_98[0xf] = '\0';
      local_98[0x10] = '\0';
      local_98[0x11] = '\0';
      local_98[0x12] = '\0';
      local_98[0x13] = '\0';
      local_98[0x14] = '\0';
      local_98[0x15] = '\0';
      local_98[0x16] = '\0';
      local_98[0x17] = '\0';
      local_98[0x18] = '\0';
      local_98[0x19] = '\0';
      local_98[0x1a] = '\0';
      local_98[0x1b] = '\0';
      local_98[0x1c] = '\0';
      local_98[0x1d] = '\0';
      local_98[0x1e] = '\0';
      local_98[0x1f] = '\0';
      local_98[0x20] = '\0';
      local_98[0x21] = '\0';
      local_98[0x22] = '\0';
      local_98[0x23] = '\0';
      local_98[0x24] = '\0';
      local_98[0x25] = '\0';
      local_98[0x26] = '\0';
      local_98[0x27] = '\0';
      local_98[0x28] = '\0';
      local_98[0x29] = '\0';
      local_98[0x2a] = '\0';
      local_98[0x2b] = '\0';
      local_98[0x2c] = '\0';
      local_98[0x2d] = '\0';
      local_98[0x2e] = '\0';
      local_98[0x2f] = '\0';
      local_98[0x30] = '\0';
      local_98[0x31] = '\0';
      local_98[0x32] = '\0';
      local_98[0x33] = '\0';
      local_98[0x34] = '\0';
      local_98[0x35] = '\0';
      local_98[0x36] = '\0';
      local_98[0x37] = '\0';
      local_98[0x38] = '\0';
      local_98[0x39] = '\0';
      local_98[0x3a] = '\0';
      local_98[0x3b] = '\0';
      local_98[0x3c] = '\0';
      local_98[0x3d] = '\0';
      local_98[0x3e] = '\0';
      local_98[0x3f] = '\0';
      if (bVar1 == 0) {
        (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FIntermediate3DTransform&___ptr64)'
                  ::__l2::Funcs)(pUVar4,uVar20,local_98);
      }
      else {
        uVar9 = bVar1 - 1;
        if ((-1 < (int)uVar9) && ((int)uVar9 < (pTVar3->DynamicTraits).ArrayNum)) {
          uVar7 = 0;
          if ((int)uVar9 < (pTVar3->DynamicTraits).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)((pTVar3->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x28))(&pUVar4->field_0x0 + uVar20,local_98);
        }
      }
      pdVar16 = (double *)0x0;
      pdVar13 = param_13 + iVar12;
      if (param_13 == (double *)0x0) {
        pdVar13 = pdVar16;
      }
      pdVar14 = param_12 + iVar12;
      if (param_12 == (double *)0x0) {
        pdVar14 = pdVar16;
      }
      pdVar18 = param_11 + iVar12;
      if (param_11 == (double *)0x0) {
        pdVar18 = pdVar16;
      }
      pdVar11 = param_10 + iVar12;
      if (param_10 == (double *)0x0) {
        pdVar11 = pdVar16;
      }
      pdVar17 = param_9 + iVar12;
      if (param_9 == (double *)0x0) {
        pdVar17 = pdVar16;
      }
      pdVar15 = param_8 + iVar12;
      if (param_8 == (double *)0x0) {
        pdVar15 = pdVar16;
      }
      pdVar10 = param_7 + iVar12;
      if (param_7 == (double *)0x0) {
        pdVar10 = pdVar16;
      }
      pdVar8 = param_6 + iVar12;
      if (param_6 == (double *)0x0) {
        pdVar8 = pdVar16;
      }
      pdVar16 = param_5;
      if (param_5 != (double *)0x0) {
        pdVar16 = param_5 + iVar12;
      }
      local_a8.DataPtr = (this->CompositeDefinitions).DataPtr;
      local_a8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
      local_a8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                (local_res10,&local_a8,local_98,pdVar16,pdVar8,pdVar10,pdVar15,pdVar17,pdVar11,
                 pdVar18,pdVar14,pdVar13);
      bVar1 = pFVar19->Index;
      pUVar4 = *param_2;
      pTVar3 = this->Traits;
      if (bVar1 == 0) {
        (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FIntermediate3DTransform_const&___ptr64)'
                  ::__l2::Funcs)(pUVar4,uVar20,local_98);
      }
      else {
        uVar9 = bVar1 - 1;
        if ((-1 < (int)uVar9) && ((int)uVar9 < (pTVar3->DynamicTraits).ArrayNum)) {
          uVar7 = 0;
          if ((int)uVar9 < (pTVar3->DynamicTraits).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)((pTVar3->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x20))(local_98,&pUVar4->field_0x0 + uVar20);
        }
      }
      pFVar19 = pFVar19 + 1;
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while ((longlong)pFVar19 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachFast @ 146682590

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
             double *param_8)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
  *pTVar5;
  UObject *pUVar6;
  code *pcVar7;
  FPropertyCompositeDefinition *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  FVariantPropertyTypeIndex *pFVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double local_68 [5];
  
  uVar2 = param_1->Size;
  iVar16 = 0;
  pFVar15 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar15->Index;
      uVar3 = *param_3;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      local_68[3] = 0.0;
      if (bVar1 < 3) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FIntermediateColor&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,uVar3,local_68);
      }
      else {
        uVar11 = bVar1 - 3;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x98))(&pUVar6->field_0x0 + uVar3,local_68);
        }
      }
      pdVar14 = (double *)0x0;
      pdVar18 = param_8 + iVar16;
      if (param_8 == (double *)0x0) {
        pdVar18 = pdVar14;
      }
      pdVar17 = param_7 + iVar16;
      if (param_7 == (double *)0x0) {
        pdVar17 = pdVar14;
      }
      pdVar12 = param_6 + iVar16;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar14;
      }
      pdVar13 = param_5 + iVar16;
      if (param_5 == (double *)0x0) {
        pdVar13 = pdVar14;
      }
      pFVar8 = (this->CompositeDefinitions).DataPtr;
      iVar4 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar4 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8->CompositeOffset) = *pdVar13;
      }
      if ((iVar4 < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar4 < 3) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar17 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[2].CompositeOffset) = *pdVar17;
      }
      if ((iVar4 < 4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar18 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[3].CompositeOffset) = *pdVar18;
      }
      bVar1 = pFVar15->Index;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      if (bVar1 < 3) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,UE::MovieScene::FIntermediateColor_const&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,uVar3,local_68);
      }
      else {
        uVar11 = bVar1 - 3;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x90))(local_68,&pUVar6->field_0x0 + uVar3);
        }
      }
      pFVar15 = pFVar15 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar16 = iVar16 + 1;
    } while ((longlong)pFVar15 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachFast @ 1466829b0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,
             FVariantPropertyTypeIndex *param_4,long64 *param_5)

{
  byte bVar1;
  ushort uVar2;
  TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *pTVar3;
  UObject *pUVar4;
  code *pcVar5;
  FPropertyCompositeDefinition *pFVar6;
  long64 lVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  long64 *plVar11;
  ulonglong uVar12;
  int iVar13;
  FVariantPropertyTypeIndex *pFVar14;
  long64 local_res10;
  
  uVar2 = param_1->Size;
  iVar13 = 0;
  pFVar14 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar14->Index;
      uVar12 = (ulonglong)*param_3;
      pTVar3 = this->Traits;
      pUVar4 = *param_2;
      local_res10 = 0;
      if (bVar1 < 4) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<__int64,__int64,int,short,signed_char>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,__int64&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar4,uVar12,&local_res10);
      }
      else {
        uVar10 = bVar1 - 4;
        if ((-1 < (int)uVar10) && ((int)uVar10 < (pTVar3->DynamicTraits).ArrayNum)) {
          uVar9 = 0;
          if ((int)uVar10 < (pTVar3->DynamicTraits).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)((pTVar3->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0xd0))(&pUVar4->field_0x0 + uVar12,&local_res10);
        }
      }
      if (param_5 == (long64 *)0x0) {
        plVar11 = (long64 *)0x0;
      }
      else {
        plVar11 = param_5 + iVar13;
      }
      pFVar6 = (this->CompositeDefinitions).DataPtr;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (plVar11 != (long64 *)0x0) {
        *(long64 *)((longlong)&local_res10 + (ulonglong)pFVar6->CompositeOffset) = *plVar11;
      }
      lVar7 = local_res10;
      bVar1 = pFVar14->Index;
      pTVar3 = this->Traits;
      pUVar4 = *param_2;
      if (bVar1 < 4) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<__int64,__int64,int,short,signed_char>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,unsigned_short,__int64)'
                    ::__l2::Funcs)[bVar1])(pUVar4,uVar12,local_res10);
      }
      else {
        uVar10 = bVar1 - 4;
        if ((-1 < (int)uVar10) && ((int)uVar10 < (pTVar3->DynamicTraits).ArrayNum)) {
          uVar9 = 0;
          if ((int)uVar10 < (pTVar3->DynamicTraits).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)((pTVar3->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -200))(lVar7,&pUVar4->field_0x0 + uVar12);
        }
      }
      pFVar14 = pFVar14 + 1;
      param_3 = param_3 + 1;
      iVar13 = iVar13 + 1;
      param_2 = param_2 + 1;
    } while ((longlong)pFVar14 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachFast @ 146682c90

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,uchar *param_4)

{
  UObject **ppUVar1;
  uchar uVar2;
  ushort uVar3;
  UObject *pUVar4;
  code *pcVar5;
  FPropertyCompositeDefinition *pFVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  uchar local_res10 [8];
  
  lVar8 = 0;
  if (param_1->Size != 0) {
    uVar9 = (ulonglong)param_1->Size;
    if (param_4 == (uchar *)0x0) {
      if (uVar9 != 0) {
        do {
          uVar3 = param_3[lVar8];
          uVar2 = (&param_2[lVar8]->field_0x0)[uVar3];
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (local_res10[0] = uVar2,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ppUVar1 = param_2 + lVar8;
          lVar8 = lVar8 + 1;
          (&(*ppUVar1)->field_0x0)[uVar3] = uVar2;
        } while (lVar8 < (longlong)uVar9);
      }
    }
    else {
      do {
        uVar3 = *param_3;
        pFVar6 = (this->CompositeDefinitions).DataPtr;
        local_res10[0] = (&(*param_2)->field_0x0)[uVar3];
        if (((this->CompositeDefinitions).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (param_4 != (uchar *)0x0) {
          local_res10[pFVar6->CompositeOffset] = *param_4;
        }
        pUVar4 = *param_2;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        param_2 = param_2 + 1;
        (&pUVar4->field_0x0)[uVar3] = local_res10[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}

// ForEachFast @ 146682e10

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4)

{
  undefined8 *puVar1;
  UObject **ppUVar2;
  float fVar3;
  ushort uVar4;
  UObject *pUVar5;
  code *pcVar6;
  FPropertyCompositeDefinition *pFVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  double local_res10;
  
  lVar10 = 0;
  if (param_1->Size != 0) {
    uVar9 = (ulonglong)param_1->Size;
    if (param_4 == (double *)0x0) {
      if (uVar9 != 0) {
        do {
          uVar4 = param_3[lVar10];
          fVar3 = *(float *)(&param_2[lVar10]->field_0x0 + uVar4);
          local_res10 = (double)fVar3;
          if (((this->CompositeDefinitions).ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          ppUVar2 = param_2 + lVar10;
          lVar10 = lVar10 + 1;
          *(float *)(&(*ppUVar2)->field_0x0 + uVar4) = fVar3;
        } while (lVar10 < (longlong)uVar9);
      }
    }
    else {
      lVar10 = (longlong)param_4 - (longlong)param_2;
      do {
        uVar4 = *param_3;
        pFVar7 = (this->CompositeDefinitions).DataPtr;
        local_res10 = (double)*(float *)(&(*param_2)->field_0x0 + uVar4);
        if (((this->CompositeDefinitions).ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar1 = (undefined8 *)(lVar10 + (longlong)param_2);
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)&local_res10 + (ulonglong)pFVar7->CompositeOffset) = *puVar1;
        }
        pUVar5 = *param_2;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        *(float *)(&pUVar5->field_0x0 + uVar4) = (float)local_res10;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}

// ForEachFast @ 146682fb0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4,
             double *param_5,double *param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  FPropertyCompositeDefinition *pFVar6;
  bool bVar7;
  double *pdVar8;
  ulonglong uVar9;
  double *pdVar10;
  int iVar11;
  ulonglong uVar12;
  double *pdVar13;
  double *pdVar14;
  double local_68 [5];
  
  uVar9 = 0;
  uVar1 = param_1->Size;
  uVar12 = uVar9;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar10 = (double *)0x0;
      uVar2 = param_3[uVar9];
      local_68[2] = *(double *)(&param_2[uVar9]->field_0x10 + uVar2);
      pdVar14 = (double *)(&param_2[uVar9]->field_0x0 + uVar2);
      local_68[0] = *pdVar14;
      local_68[1] = pdVar14[1];
      iVar11 = (int)uVar12;
      pdVar14 = param_6 + iVar11;
      if (param_6 == (double *)0x0) {
        pdVar14 = pdVar10;
      }
      pFVar6 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      pdVar8 = param_5 + iVar11;
      if (param_5 == (double *)0x0) {
        pdVar8 = pdVar10;
      }
      pdVar13 = param_4 + iVar11;
      if (param_4 == (double *)0x0) {
        pdVar13 = pdVar10;
      }
      if ((iVar3 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6->CompositeOffset) = *pdVar13;
      }
      if ((iVar3 < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar8 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6[1].CompositeOffset) = *pdVar8;
      }
      if ((iVar3 < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar14 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6[2].CompositeOffset) = *pdVar14;
      }
      pUVar4 = param_2[uVar9];
      uVar9 = uVar9 + 1;
      pdVar14 = (double *)(&pUVar4->field_0x0 + uVar2);
      *pdVar14 = local_68[0];
      pdVar14[1] = local_68[1];
      *(double *)(&pUVar4->field_0x10 + uVar2) = local_68[2];
      uVar12 = (ulonglong)(iVar11 + 1);
    } while ((longlong)uVar9 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachFast @ 1466831f0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4,
             double *param_5)

{
  undefined8 *puVar1;
  UObject **ppUVar2;
  ushort uVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  FPropertyCompositeDefinition *pFVar7;
  bool bVar8;
  double *pdVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double *pdVar12;
  ulonglong uVar13;
  longlong lVar14;
  double local_68 [6];
  
  uVar10 = 0;
  if (param_1->Size != 0) {
    uVar13 = (ulonglong)param_1->Size;
    if (param_5 == (double *)0x0) {
      uVar11 = uVar10;
      if (uVar13 != 0) {
        do {
          pdVar9 = (double *)0x0;
          uVar3 = param_3[uVar10];
          local_68[0] = (double)*(float *)(&param_2[uVar10]->field_0x0 + uVar3);
          local_68[1] = (double)*(float *)(&param_2[uVar10]->field_0x4 + uVar3);
          local_68[2] = 0.0;
          local_68[3] = 0.0;
          if (param_4 != (double *)0x0) {
            pdVar9 = param_4 + (int)uVar11;
          }
          iVar4 = (this->CompositeDefinitions).ArrayNum;
          pFVar7 = (this->CompositeDefinitions).DataPtr;
          if ((iVar4 < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (pdVar9 != (double *)0x0) {
            *(double *)((longlong)local_68 + (ulonglong)pFVar7->CompositeOffset) = *pdVar9;
          }
          if ((iVar4 < 2) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          ppUVar2 = param_2 + uVar10;
          uVar10 = uVar10 + 1;
          *(ulonglong *)(&(*ppUVar2)->field_0x0 + uVar3) =
               CONCAT44((float)local_68[1],(float)local_68[0]);
          uVar11 = (ulonglong)((int)uVar11 + 1);
        } while ((longlong)uVar10 < (longlong)uVar13);
      }
    }
    else {
      lVar14 = (longlong)param_5 - (longlong)param_2;
      pdVar9 = param_4;
      do {
        uVar3 = *param_3;
        iVar4 = (this->CompositeDefinitions).ArrayNum;
        pdVar12 = pdVar9;
        if (param_4 == (double *)0x0) {
          pdVar12 = (double *)0x0;
        }
        local_68[0] = (double)*(float *)(&(*param_2)->field_0x0 + uVar3);
        local_68[1] = (double)*(float *)(&(*param_2)->field_0x4 + uVar3);
        local_68[2] = 0.0;
        local_68[3] = 0.0;
        pFVar7 = (this->CompositeDefinitions).DataPtr;
        if ((iVar4 < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pdVar12 != (double *)0x0) {
          *(double *)((longlong)local_68 + (ulonglong)pFVar7->CompositeOffset) = *pdVar12;
        }
        if ((iVar4 < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar1 = (undefined8 *)(lVar14 + (longlong)param_2);
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)local_68 + (ulonglong)pFVar7[1].CompositeOffset) = *puVar1;
        }
        pUVar5 = *param_2;
        pdVar9 = pdVar9 + 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *(ulonglong *)(&pUVar5->field_0x0 + uVar3) = CONCAT44((float)local_68[1],(float)local_68[0])
        ;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return;
}

// ForEachFast @ 146683540

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4,
             double *param_5,double *param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  FPropertyCompositeDefinition *pFVar6;
  bool bVar7;
  double *pdVar8;
  ulonglong uVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  ulonglong uVar13;
  double *pdVar14;
  double local_78 [7];
  
  uVar9 = 0;
  uVar1 = param_1->Size;
  uVar13 = uVar9;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar10 = (double *)0x0;
      pUVar4 = param_2[uVar13];
      uVar2 = param_3[uVar13];
      local_78[3] = 0.0;
      local_78[0] = (double)*(float *)(&pUVar4->field_0x0 + uVar2);
      local_78[1] = (double)*(float *)(&pUVar4->field_0x4 + uVar2);
      iVar12 = (int)uVar9;
      local_78[2] = (double)*(float *)(&pUVar4->field_0x8 + uVar2);
      pdVar14 = param_6 + iVar12;
      if (param_6 == (double *)0x0) {
        pdVar14 = pdVar10;
      }
      pFVar6 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      pdVar11 = param_5 + iVar12;
      if (param_5 == (double *)0x0) {
        pdVar11 = pdVar10;
      }
      pdVar8 = param_4 + iVar12;
      if (param_4 == (double *)0x0) {
        pdVar8 = pdVar10;
      }
      if ((iVar3 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar8 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar6->CompositeOffset) = *pdVar8;
      }
      if ((iVar3 < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar11 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar6[1].CompositeOffset) = *pdVar11;
      }
      if ((iVar3 < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar14 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar6[2].CompositeOffset) = *pdVar14;
      }
      uVar9 = (ulonglong)(iVar12 + 1);
      pUVar4 = param_2[uVar13];
      uVar13 = uVar13 + 1;
      *(float *)(&pUVar4->field_0x0 + uVar2) = (float)local_78[0];
      *(float *)(&pUVar4->field_0x4 + uVar2) = (float)local_78[1];
      *(float *)(&pUVar4->field_0x8 + uVar2) = (float)local_78[2];
    } while ((longlong)uVar13 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachFast @ 1466837c0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4,
             double *param_5,double *param_6,double *param_7,double *param_8,double *param_9,
             double *param_10,double *param_11,double *param_12)

{
  ushort uVar1;
  ushort uVar2;
  UObject *pUVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res10 [8];
  UObject **local_res18;
  ushort *local_res20;
  int local_b8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar1 = param_1->Size;
  local_b8 = 0;
  if ((ulonglong)uVar1 != 0) {
    lVar14 = 0;
    local_res18 = param_2;
    local_res20 = param_3;
    do {
      pdVar6 = (double *)0x0;
      pUVar3 = local_res18[lVar14];
      uVar2 = local_res20[lVar14];
      local_98 = *(undefined8 *)(&pUVar3->field_0x0 + uVar2);
      uStack_90 = *(undefined8 *)((longlong)(&pUVar3->field_0x0 + uVar2) + 8);
      local_80 = *(undefined8 *)(&pUVar3[1].field_0x0 + uVar2);
      local_88 = *(undefined8 *)(&pUVar3->field_0x10 + uVar2);
      local_78 = *(undefined8 *)(&pUVar3->field_0x18 + uVar2);
      uStack_70 = *(undefined8 *)((longlong)(&pUVar3->field_0x18 + uVar2) + 8);
      local_68 = *(undefined8 *)(&pUVar3[1].field_0x8 + uVar2);
      uStack_60 = *(undefined8 *)((longlong)(&pUVar3[1].field_0x8 + uVar2) + 8);
      local_58 = *(undefined8 *)(&pUVar3[1].field_0x18 + uVar2);
      lVar4 = (longlong)local_b8;
      pdVar7 = param_12 + lVar4;
      if (param_12 == (double *)0x0) {
        pdVar7 = pdVar6;
      }
      pdVar9 = param_11 + lVar4;
      if (param_11 == (double *)0x0) {
        pdVar9 = pdVar6;
      }
      pdVar8 = param_10 + lVar4;
      if (param_10 == (double *)0x0) {
        pdVar8 = pdVar6;
      }
      pdVar13 = param_9 + lVar4;
      if (param_9 == (double *)0x0) {
        pdVar13 = pdVar6;
      }
      pdVar12 = param_8 + lVar4;
      if (param_8 == (double *)0x0) {
        pdVar12 = pdVar6;
      }
      pdVar10 = param_7 + lVar4;
      if (param_7 == (double *)0x0) {
        pdVar10 = pdVar6;
      }
      if (param_6 != (double *)0x0) {
        pdVar6 = param_6 + lVar4;
      }
      pdVar5 = param_5;
      if (param_5 != (double *)0x0) {
        pdVar5 = param_5 + lVar4;
      }
      pdVar11 = param_4;
      if (param_4 != (double *)0x0) {
        pdVar11 = param_4 + lVar4;
      }
      local_a8.DataPtr = (this->CompositeDefinitions).DataPtr;
      local_a8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
      local_a8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                (local_res10,&local_a8,(uchar *)&local_98,pdVar11,pdVar5,pdVar6,pdVar10,pdVar12,
                 pdVar13,pdVar8,pdVar9,pdVar7);
      pUVar3 = local_res18[lVar14];
      lVar14 = lVar14 + 1;
      local_b8 = local_b8 + 1;
      *(undefined8 *)(&pUVar3->field_0x0 + uVar2) = local_98;
      *(undefined8 *)((longlong)(&pUVar3->field_0x0 + uVar2) + 8) = uStack_90;
      *(undefined8 *)(&pUVar3->field_0x10 + uVar2) = local_88;
      *(undefined8 *)(&pUVar3->field_0x18 + uVar2) = local_78;
      *(undefined8 *)((longlong)(&pUVar3->field_0x18 + uVar2) + 8) = uStack_70;
      *(undefined8 *)(&pUVar3[1].field_0x0 + uVar2) = local_80;
      *(undefined8 *)(&pUVar3[1].field_0x8 + uVar2) = local_68;
      *(undefined8 *)((longlong)(&pUVar3[1].field_0x8 + uVar2) + 8) = uStack_60;
      *(undefined8 *)(&pUVar3[1].field_0x18 + uVar2) = local_58;
    } while (lVar14 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachFast @ 146683a60

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4,
             double *param_5,double *param_6,double *param_7,double *param_8,double *param_9,
             double *param_10,double *param_11,double *param_12)

{
  ushort uVar1;
  UObject *pUVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  ulonglong uVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  ulonglong uVar14;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res10 [8];
  ulonglong local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  double *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_48;
  
  local_e8 = (ulonglong)param_1->Size;
  uVar7 = 0;
  local_68 = (double *)0x0;
  if (param_1->Size != 0) {
    if (param_12 == (double *)0x0) {
      uVar14 = uVar7;
      if (local_e8 != 0) {
        do {
          pdVar11 = (double *)0x0;
          uVar1 = param_3[uVar7];
          pUVar2 = param_2[uVar7];
          iVar13 = (int)uVar14;
          local_d8 = *(undefined8 *)(&pUVar2->field_0x0 + uVar1);
          uStack_d0 = *(undefined8 *)((longlong)(&pUVar2->field_0x0 + uVar1) + 8);
          local_c8 = *(undefined8 *)(&pUVar2->field_0x10 + uVar1);
          uStack_c0 = *(undefined8 *)((longlong)(&pUVar2->field_0x10 + uVar1) + 8);
          pdVar6 = param_11 + iVar13;
          if (param_11 == (double *)0x0) {
            pdVar6 = pdVar11;
          }
          local_b8 = *(undefined8 *)(&pUVar2->field_0x20 + uVar1);
          uStack_b0 = *(undefined8 *)((longlong)(&pUVar2->field_0x20 + uVar1) + 8);
          local_a8 = *(undefined8 *)(&pUVar2[1].field_0x8 + uVar1);
          uStack_a0 = *(undefined8 *)((longlong)(&pUVar2[1].field_0x8 + uVar1) + 8);
          local_98 = *(undefined8 *)(&pUVar2[1].field_0x18 + uVar1);
          local_48.DataPtr = (this->CompositeDefinitions).DataPtr;
          local_48.ArrayNum = (this->CompositeDefinitions).ArrayNum;
          local_48._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
          pdVar8 = param_10 + iVar13;
          if (param_10 == (double *)0x0) {
            pdVar8 = pdVar11;
          }
          pdVar12 = param_9 + iVar13;
          if (param_9 == (double *)0x0) {
            pdVar12 = pdVar11;
          }
          pdVar9 = param_8 + iVar13;
          if (param_8 == (double *)0x0) {
            pdVar9 = pdVar11;
          }
          pdVar5 = param_7 + iVar13;
          if (param_7 == (double *)0x0) {
            pdVar5 = pdVar11;
          }
          pdVar11 = param_6 + iVar13;
          if (param_6 == (double *)0x0) {
            pdVar11 = (double *)0x0;
          }
          pdVar4 = param_5 + iVar13;
          if (param_5 == (double *)0x0) {
            pdVar4 = (double *)0x0;
          }
          pdVar3 = param_4 + iVar13;
          if (param_4 == (double *)0x0) {
            pdVar3 = (double *)0x0;
          }
          PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                    (local_res10,&local_48,(uchar *)&local_d8,pdVar3,pdVar4,pdVar11,pdVar5,pdVar9,
                     pdVar12,pdVar8,pdVar6,(double *)0x0);
          pUVar2 = param_2[uVar7];
          uVar7 = uVar7 + 1;
          *(undefined8 *)(&pUVar2->field_0x0 + uVar1) = local_d8;
          *(undefined8 *)((longlong)(&pUVar2->field_0x0 + uVar1) + 8) = uStack_d0;
          *(undefined8 *)(&pUVar2->field_0x10 + uVar1) = local_c8;
          *(undefined8 *)((longlong)(&pUVar2->field_0x10 + uVar1) + 8) = uStack_c0;
          *(undefined8 *)(&pUVar2->field_0x20 + uVar1) = local_b8;
          *(undefined8 *)((longlong)(&pUVar2->field_0x20 + uVar1) + 8) = uStack_b0;
          *(undefined8 *)(&pUVar2[1].field_0x8 + uVar1) = local_a8;
          *(undefined8 *)((longlong)(&pUVar2[1].field_0x8 + uVar1) + 8) = uStack_a0;
          *(undefined8 *)(&pUVar2[1].field_0x18 + uVar1) = local_98;
          uVar14 = (ulonglong)(iVar13 + 1);
        } while ((longlong)uVar7 < (longlong)local_e8);
      }
    }
    else {
      local_88 = (longlong)param_7 - (longlong)param_11;
      local_60 = (longlong)param_10 - (longlong)param_11;
      local_58 = (longlong)param_9 - (longlong)param_11;
      local_50 = (longlong)param_8 - (longlong)param_11;
      local_80 = (longlong)param_6 - (longlong)param_11;
      local_78 = (longlong)param_5 - (longlong)param_11;
      local_70 = (longlong)param_4 - (longlong)param_11;
      pdVar6 = param_11;
      do {
        uVar1 = *param_3;
        pdVar11 = (double *)(local_58 + (longlong)pdVar6);
        pUVar2 = *param_2;
        local_c8 = *(undefined8 *)(&pUVar2->field_0x10 + uVar1);
        uStack_c0 = *(undefined8 *)((longlong)(&pUVar2->field_0x10 + uVar1) + 8);
        pdVar8 = pdVar6;
        if (param_11 == (double *)0x0) {
          pdVar8 = (double *)0x0;
        }
        local_d8 = *(undefined8 *)(&pUVar2->field_0x0 + uVar1);
        uStack_d0 = *(undefined8 *)((longlong)(&pUVar2->field_0x0 + uVar1) + 8);
        local_a8 = *(undefined8 *)(&pUVar2[1].field_0x8 + uVar1);
        uStack_a0 = *(undefined8 *)((longlong)(&pUVar2[1].field_0x8 + uVar1) + 8);
        local_b8 = *(undefined8 *)(&pUVar2->field_0x20 + uVar1);
        uStack_b0 = *(undefined8 *)((longlong)(&pUVar2->field_0x20 + uVar1) + 8);
        local_48.DataPtr = (this->CompositeDefinitions).DataPtr;
        local_48.ArrayNum = (this->CompositeDefinitions).ArrayNum;
        local_48._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
        pdVar12 = (double *)(local_60 + (longlong)pdVar6);
        if (param_10 == (double *)0x0) {
          pdVar12 = (double *)0x0;
        }
        local_98 = *(undefined8 *)(&pUVar2[1].field_0x18 + uVar1);
        if (param_9 == (double *)0x0) {
          pdVar11 = (double *)0x0;
        }
        pdVar9 = (double *)(local_50 + (longlong)pdVar6);
        if (param_8 == (double *)0x0) {
          pdVar9 = (double *)0x0;
        }
        pdVar5 = (double *)(local_88 + (longlong)pdVar6);
        if (param_7 == (double *)0x0) {
          pdVar5 = (double *)0x0;
        }
        pdVar4 = (double *)(local_80 + (longlong)pdVar6);
        if (param_6 == (double *)0x0) {
          pdVar4 = (double *)0x0;
        }
        pdVar3 = (double *)(local_78 + (longlong)pdVar6);
        if (param_5 == (double *)0x0) {
          pdVar3 = (double *)0x0;
        }
        pdVar10 = (double *)(local_70 + (longlong)pdVar6);
        if (param_4 == (double *)0x0) {
          pdVar10 = local_68;
        }
        PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                  (local_res10,&local_48,(uchar *)&local_d8,pdVar10,pdVar3,pdVar4,pdVar5,pdVar9,
                   pdVar11,pdVar12,pdVar8,
                   (double *)(((longlong)param_12 - (longlong)param_11) + (longlong)pdVar6));
        pUVar2 = *param_2;
        param_2 = param_2 + 1;
        pdVar6 = pdVar6 + 1;
        param_3 = param_3 + 1;
        local_e8 = local_e8 - 1;
        *(undefined8 *)(&pUVar2->field_0x0 + uVar1) = local_d8;
        *(undefined8 *)((longlong)(&pUVar2->field_0x0 + uVar1) + 8) = uStack_d0;
        *(undefined8 *)(&pUVar2->field_0x10 + uVar1) = local_c8;
        *(undefined8 *)((longlong)(&pUVar2->field_0x10 + uVar1) + 8) = uStack_c0;
        *(undefined8 *)(&pUVar2->field_0x20 + uVar1) = local_b8;
        *(undefined8 *)((longlong)(&pUVar2->field_0x20 + uVar1) + 8) = uStack_b0;
        *(undefined8 *)(&pUVar2[1].field_0x8 + uVar1) = local_a8;
        *(undefined8 *)((longlong)(&pUVar2[1].field_0x8 + uVar1) + 8) = uStack_a0;
        *(undefined8 *)(&pUVar2[1].field_0x18 + uVar1) = local_98;
      } while (local_e8 != 0);
    }
  }
  return;
}

// ForEachFast @ 146683e70

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4,
             double *param_5,double *param_6,double *param_7)

{
  ushort uVar1;
  ushort uVar2;
  UObject *pUVar3;
  code *pcVar4;
  double dVar5;
  FPropertyCompositeDefinition *pFVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  ulonglong uVar13;
  double *pdVar14;
  double *pdVar15;
  uint local_res10;
  double local_68 [2];
  undefined1 local_58 [24];
  
  uVar1 = param_1->Size;
  uVar9 = 0;
  local_res10 = 0;
  uVar13 = uVar9;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar12 = (double *)0x0;
      pUVar3 = param_2[uVar13];
      uVar2 = param_3[uVar13];
      local_68[0] = (double)*(float *)(&pUVar3->field_0x0 + uVar2);
      local_68[1] = (double)*(float *)(&pUVar3->field_0x4 + uVar2);
      dVar5 = (double)(float)((ulonglong)*(undefined8 *)(&pUVar3->field_0x8 + uVar2) >> 0x20);
      iVar8 = (int)uVar9;
      local_58._8_4_ = SUB84(dVar5,0);
      local_58._0_8_ = (double)(float)*(undefined8 *)(&pUVar3->field_0x8 + uVar2);
      local_58._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      pdVar10 = param_7 + iVar8;
      if (param_7 == (double *)0x0) {
        pdVar10 = pdVar12;
      }
      pdVar15 = param_6 + iVar8;
      if (param_6 == (double *)0x0) {
        pdVar15 = pdVar12;
      }
      pdVar14 = param_5 + iVar8;
      if (param_5 == (double *)0x0) {
        pdVar14 = pdVar12;
      }
      pdVar11 = param_4 + iVar8;
      if (param_4 == (double *)0x0) {
        pdVar11 = pdVar12;
      }
      pFVar6 = (this->CompositeDefinitions).DataPtr;
      iVar8 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar8 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar11 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6->CompositeOffset) = *pdVar11;
      }
      if ((iVar8 < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar14 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6[1].CompositeOffset) = *pdVar14;
      }
      if ((iVar8 < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar15 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6[2].CompositeOffset) = *pdVar15;
      }
      if ((iVar8 < 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6[3].CompositeOffset) = *pdVar10;
      }
      pUVar3 = param_2[uVar13];
      uVar13 = uVar13 + 1;
      local_res10 = local_res10 + 1;
      uVar9 = (ulonglong)local_res10;
      *(float *)(&pUVar3->field_0x0 + uVar2) = (float)local_68[0];
      *(float *)(&pUVar3->field_0x4 + uVar2) = (float)local_68[1];
      *(float *)(&pUVar3->field_0x8 + uVar2) = (float)(double)local_58._0_8_;
      *(float *)(&pUVar3->field_0xc + uVar2) = (float)(double)local_58._8_8_;
    } while ((longlong)uVar13 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachFast @ 146684170

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,FString *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  int *piVar5;
  ForAnyElementType _Src_00;
  int iVar6;
  bool bVar7;
  FString *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar1 = param_1->Size;
  uVar10 = 0;
  uVar11 = uVar10;
  if ((ulonglong)uVar1 != 0) {
    do {
      uVar2 = param_3[uVar10];
      pFVar8 = (FString *)(&param_2[uVar10]->field_0x0 + uVar2);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      if (&local_58 != pFVar8) {
        uVar3 = (pFVar8->Data).ArrayNum;
        _Src = (pFVar8->Data).AllocatorInstance.Data;
        local_58.Data.ArrayMax = 0;
        local_58.Data.ArrayNum = uVar3;
        if (uVar3 != 0) {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar3,0,(ForAnyElementType *)&local_58,uVar3,&local_58.Data.ArrayMax);
          memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar3 * 2);
        }
      }
      pFVar8 = (FString *)0x0;
      if (param_4 != (FString *)0x0) {
        pFVar8 = param_4 + (int)uVar11;
      }
      local_48 = *(undefined4 *)&(this->CompositeDefinitions).DataPtr;
      uStack_44 = *(undefined4 *)((longlong)&(this->CompositeDefinitions).DataPtr + 4);
      iStack_40 = (this->CompositeDefinitions).ArrayNum;
      uStack_3c = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pFVar8 != (FString *)0x0) {
        ::FString::operator=
                  ((FString *)
                   ((longlong)&local_58.Data.AllocatorInstance.Data +
                   (ulonglong)*(ushort *)(CONCAT44(uStack_44,local_48) + 2)),pFVar8);
      }
      _Src_00.Data = local_58.Data.AllocatorInstance.Data;
      pFVar8 = (FString *)(&param_2[uVar10]->field_0x0 + uVar2);
      if (pFVar8 != &local_58) {
        iVar6 = local_58.Data.ArrayNum;
        lVar9 = (longlong)local_58.Data.ArrayNum;
        piVar5 = &(pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = local_58.Data.ArrayNum;
        if ((local_58.Data.ArrayNum == 0) && (*piVar5 == 0)) {
          *piVar5 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_58.Data.ArrayNum,*piVar5,(ForAnyElementType *)pFVar8,
                     local_58.Data.ArrayNum,piVar5);
          if (iVar6 != 0) {
            memcpy((pFVar8->Data).AllocatorInstance.Data,_Src_00.Data,lVar9 * 2);
          }
        }
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)((int)uVar11 + 1);
    } while ((longlong)uVar10 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachFast @ 1466843a0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,FText *param_4)

{
  ushort uVar1;
  ushort uVar2;
  UObject *pUVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  code *pcVar6;
  UObject **ppUVar7;
  TRefCountPtr<ITextData> TVar8;
  bool bVar9;
  ulonglong uVar10;
  FText *pFVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 local_res10 [8];
  UObject **local_res18;
  ushort *local_res20;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  FText local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  uVar1 = param_1->Size;
  iVar14 = 0;
  if ((ulonglong)uVar1 != 0) {
    lVar12 = 0;
    local_res18 = param_2;
    local_res20 = param_3;
    do {
      ppUVar7 = local_res18;
      uVar2 = local_res20[lVar12];
      FText::FText(&local_70);
      TVar8.Reference = local_70.TextData.Reference;
      pUVar3 = ppUVar7[lVar12];
      pIVar4 = *(ITextData **)(&pUVar3->field_0x0 + uVar2);
      if (local_70.TextData.Reference != pIVar4) {
        local_70.TextData.Reference = pIVar4;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res10);
        }
        if (TVar8.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
        }
      }
      local_70.Flags = *(uint *)(&pUVar3->field_0x8 + uVar2);
      if (param_4 == (FText *)0x0) {
        pFVar11 = (FText *)0x0;
      }
      else {
        pFVar11 = param_4 + iVar14;
      }
      local_58 = *(undefined4 *)&(this->CompositeDefinitions).DataPtr;
      uStack_54 = *(undefined4 *)((longlong)&(this->CompositeDefinitions).DataPtr + 4);
      iStack_50 = (this->CompositeDefinitions).ArrayNum;
      uStack_4c = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pFVar11 != (FText *)0x0) {
        uVar10 = (ulonglong)*(ushort *)(CONCAT44(uStack_54,local_58) + 2);
        plVar13 = (longlong *)((longlong)&local_70.TextData.Reference + uVar10);
        pIVar4 = (pFVar11->TextData).Reference;
        pIVar5 = (ITextData *)*plVar13;
        if (pIVar5 != pIVar4) {
          *plVar13 = (longlong)pIVar4;
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_78);
          }
          if (pIVar5 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
          }
        }
        *(uint *)((longlong)&local_70.Flags + uVar10) = pFVar11->Flags;
      }
      pUVar3 = local_res18[lVar12];
      pIVar4 = *(ITextData **)(&pUVar3->field_0x0 + uVar2);
      if (pIVar4 != local_70.TextData.Reference) {
        *(ITextData **)(&pUVar3->field_0x0 + uVar2) = local_70.TextData.Reference;
        if (local_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_70.TextData.Reference + 8))
                    (local_70.TextData.Reference,local_74);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      *(uint *)(&pUVar3->field_0x8 + uVar2) = local_70.Flags;
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      }
      iVar14 = iVar14 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachSlow @ 146684590

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5)

{
  byte bVar1;
  ushort uVar2;
  FTrackInstancePropertyBindings *pFVar3;
  TDynamicVariantPropertyTraits<double,double> *pTVar4;
  UObject *pUVar5;
  code *pcVar6;
  FPropertyCompositeDefinition *pFVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  int iVar13;
  FVariantPropertyTypeIndex *pFVar14;
  double local_res10;
  
  uVar2 = param_1->Size;
  iVar13 = 0;
  pFVar14 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar14->Index;
      pFVar3 = param_3->Object;
      pTVar4 = this->Traits;
      pUVar5 = *param_2;
      local_res10 = 0.0;
      if (bVar1 == 0) {
        (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<double,double>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,double&___ptr64)'
                  ::__l2::Funcs)(pUVar5,pFVar3,&local_res10);
      }
      else {
        uVar11 = bVar1 - 1;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar4->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar4->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)((pTVar4->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x18))(pUVar5,pFVar3,&local_res10);
        }
      }
      if (param_5 == (double *)0x0) {
        pdVar12 = (double *)0x0;
      }
      else {
        pdVar12 = param_5 + iVar13;
      }
      pFVar7 = (this->CompositeDefinitions).DataPtr;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)&local_res10 + (ulonglong)pFVar7->CompositeOffset) = *pdVar12;
      }
      dVar8 = local_res10;
      bVar1 = pFVar14->Index;
      pTVar4 = this->Traits;
      pUVar5 = *param_2;
      if (bVar1 == 0) {
        (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<double,double>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,double)'
                  ::__l2::Funcs)(pUVar5,pFVar3,local_res10);
      }
      else {
        uVar11 = bVar1 - 1;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar4->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar4->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)((pTVar4->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x10))(pUVar5,pFVar3,dVar8);
        }
      }
      pFVar14 = pFVar14 + 1;
      iVar13 = iVar13 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while ((longlong)pFVar14 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146684870

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
             double *param_8)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  FTrackInstancePropertyBindings *pFVar4;
  TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
  *pTVar5;
  UObject *pUVar6;
  code *pcVar7;
  FPropertyCompositeDefinition *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  FVariantPropertyTypeIndex *pFVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double local_68 [5];
  
  uVar2 = param_1->Size;
  iVar16 = 0;
  pFVar15 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar15->Index;
      pFVar4 = param_3->Object;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      local_68[3] = 0.0;
      if (bVar1 < 5) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FDoubleIntermediateVector&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,pFVar4,local_68);
      }
      else {
        uVar11 = bVar1 - 5;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0xf8))(pUVar6,pFVar4,local_68);
        }
      }
      pdVar14 = (double *)0x0;
      pdVar18 = param_8 + iVar16;
      if (param_8 == (double *)0x0) {
        pdVar18 = pdVar14;
      }
      pdVar17 = param_7 + iVar16;
      if (param_7 == (double *)0x0) {
        pdVar17 = pdVar14;
      }
      pdVar12 = param_6 + iVar16;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar14;
      }
      pdVar13 = param_5 + iVar16;
      if (param_5 == (double *)0x0) {
        pdVar13 = pdVar14;
      }
      pFVar8 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar3 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8->CompositeOffset) = *pdVar13;
      }
      if ((iVar3 < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar3 < 3) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar17 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[2].CompositeOffset) = *pdVar17;
      }
      if ((iVar3 < 4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar18 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[3].CompositeOffset) = *pdVar18;
      }
      bVar1 = pFVar15->Index;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      if (bVar1 < 5) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FDoubleIntermediateVector_const&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,pFVar4,local_68);
      }
      else {
        uVar11 = bVar1 - 5;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0xf0))(pUVar6,pFVar4,local_68);
        }
      }
      pFVar15 = pFVar15 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar16 = iVar16 + 1;
    } while ((longlong)pFVar15 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146684c90

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
             double *param_8)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  FTrackInstancePropertyBindings *pFVar4;
  TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
  *pTVar5;
  UObject *pUVar6;
  code *pcVar7;
  FPropertyCompositeDefinition *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  FVariantPropertyTypeIndex *pFVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double local_68 [5];
  
  uVar2 = param_1->Size;
  iVar16 = 0;
  pFVar15 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar15->Index;
      pFVar4 = param_3->Object;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      local_68[3] = 0.0;
      if (bVar1 < 3) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FFloatIntermediateVector&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,pFVar4,local_68);
      }
      else {
        uVar11 = bVar1 - 3;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x88))(pUVar6,pFVar4,local_68);
        }
      }
      pdVar14 = (double *)0x0;
      pdVar18 = param_8 + iVar16;
      if (param_8 == (double *)0x0) {
        pdVar18 = pdVar14;
      }
      pdVar17 = param_7 + iVar16;
      if (param_7 == (double *)0x0) {
        pdVar17 = pdVar14;
      }
      pdVar12 = param_6 + iVar16;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar14;
      }
      pdVar13 = param_5 + iVar16;
      if (param_5 == (double *)0x0) {
        pdVar13 = pdVar14;
      }
      pFVar8 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar3 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8->CompositeOffset) = *pdVar13;
      }
      if ((iVar3 < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar3 < 3) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar17 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[2].CompositeOffset) = *pdVar17;
      }
      if ((iVar3 < 4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar18 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[3].CompositeOffset) = *pdVar18;
      }
      bVar1 = pFVar15->Index;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      if (bVar1 < 3) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FFloatIntermediateVector_const&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,pFVar4,local_68);
      }
      else {
        uVar11 = bVar1 - 3;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x80))(pUVar6,pFVar4,local_68);
        }
      }
      pFVar15 = pFVar15 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar16 = iVar16 + 1;
    } while ((longlong)pFVar15 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 1466850b0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
             double *param_8,double *param_9,double *param_10,double *param_11,double *param_12,
             double *param_13)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  FTrackInstancePropertyBindings *pFVar4;
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
  *pTVar5;
  UObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  double *pdVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  int iVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  FVariantPropertyTypeIndex *pFVar21;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res10 [8];
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_a8;
  uchar local_98 [96];
  
  uVar2 = param_1->Size;
  iVar14 = 0;
  pFVar21 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar21->Index;
      pFVar4 = param_3->Object;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      local_98[0x40] = '\0';
      local_98[0x41] = '\0';
      local_98[0x42] = '\0';
      local_98[0x43] = '\0';
      local_98[0x44] = '\0';
      local_98[0x45] = '\0';
      local_98[0x46] = '\0';
      local_98[0x47] = '\0';
      local_98[0] = '\0';
      local_98[1] = '\0';
      local_98[2] = '\0';
      local_98[3] = '\0';
      local_98[4] = '\0';
      local_98[5] = '\0';
      local_98[6] = '\0';
      local_98[7] = '\0';
      local_98[8] = '\0';
      local_98[9] = '\0';
      local_98[10] = '\0';
      local_98[0xb] = '\0';
      local_98[0xc] = '\0';
      local_98[0xd] = '\0';
      local_98[0xe] = '\0';
      local_98[0xf] = '\0';
      local_98[0x10] = '\0';
      local_98[0x11] = '\0';
      local_98[0x12] = '\0';
      local_98[0x13] = '\0';
      local_98[0x14] = '\0';
      local_98[0x15] = '\0';
      local_98[0x16] = '\0';
      local_98[0x17] = '\0';
      local_98[0x18] = '\0';
      local_98[0x19] = '\0';
      local_98[0x1a] = '\0';
      local_98[0x1b] = '\0';
      local_98[0x1c] = '\0';
      local_98[0x1d] = '\0';
      local_98[0x1e] = '\0';
      local_98[0x1f] = '\0';
      local_98[0x20] = '\0';
      local_98[0x21] = '\0';
      local_98[0x22] = '\0';
      local_98[0x23] = '\0';
      local_98[0x24] = '\0';
      local_98[0x25] = '\0';
      local_98[0x26] = '\0';
      local_98[0x27] = '\0';
      local_98[0x28] = '\0';
      local_98[0x29] = '\0';
      local_98[0x2a] = '\0';
      local_98[0x2b] = '\0';
      local_98[0x2c] = '\0';
      local_98[0x2d] = '\0';
      local_98[0x2e] = '\0';
      local_98[0x2f] = '\0';
      local_98[0x30] = '\0';
      local_98[0x31] = '\0';
      local_98[0x32] = '\0';
      local_98[0x33] = '\0';
      local_98[0x34] = '\0';
      local_98[0x35] = '\0';
      local_98[0x36] = '\0';
      local_98[0x37] = '\0';
      local_98[0x38] = '\0';
      local_98[0x39] = '\0';
      local_98[0x3a] = '\0';
      local_98[0x3b] = '\0';
      local_98[0x3c] = '\0';
      local_98[0x3d] = '\0';
      local_98[0x3e] = '\0';
      local_98[0x3f] = '\0';
      if (bVar1 == 0) {
        (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FIntermediate3DTransform&___ptr64)'
                  ::__l2::Funcs)(pUVar6,pFVar4,local_98);
      }
      else {
        uVar11 = bVar1 - 1;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar9 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x18))(pUVar6,pFVar4,local_98);
        }
      }
      pdVar18 = (double *)0x0;
      pdVar17 = param_13 + iVar14;
      if (param_13 == (double *)0x0) {
        pdVar17 = pdVar18;
      }
      pdVar15 = param_12 + iVar14;
      if (param_12 == (double *)0x0) {
        pdVar15 = pdVar18;
      }
      pdVar20 = param_11 + iVar14;
      if (param_11 == (double *)0x0) {
        pdVar20 = pdVar18;
      }
      pdVar13 = param_10 + iVar14;
      if (param_10 == (double *)0x0) {
        pdVar13 = pdVar18;
      }
      pdVar19 = param_9 + iVar14;
      if (param_9 == (double *)0x0) {
        pdVar19 = pdVar18;
      }
      pdVar16 = param_8 + iVar14;
      if (param_8 == (double *)0x0) {
        pdVar16 = pdVar18;
      }
      pdVar12 = param_7 + iVar14;
      if (param_7 == (double *)0x0) {
        pdVar12 = pdVar18;
      }
      pdVar10 = param_6 + iVar14;
      if (param_6 == (double *)0x0) {
        pdVar10 = pdVar18;
      }
      pdVar18 = param_5;
      if (param_5 != (double *)0x0) {
        pdVar18 = param_5 + iVar14;
      }
      local_a8.DataPtr = (this->CompositeDefinitions).DataPtr;
      local_a8.ArrayNum = (this->CompositeDefinitions).ArrayNum;
      local_a8._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                (local_res10,&local_a8,local_98,pdVar18,pdVar10,pdVar12,pdVar16,pdVar19,pdVar13,
                 pdVar20,pdVar15,pdVar17);
      bVar1 = pFVar21->Index;
      pUVar6 = *param_2;
      pTVar5 = this->Traits;
      if (bVar1 == 0) {
        (*(code *)`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FIntermediate3DTransform_const&___ptr64)'
                  ::__l2::Funcs)(pUVar6,pFVar4,local_98);
      }
      else {
        uVar11 = bVar1 - 1;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          iVar3 = (pTVar5->DynamicTraits).ArrayNum;
          pdVar17 = (double *)(longlong)iVar3;
          uVar9 = 0;
          if ((int)uVar11 < iVar3) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if (uVar9 == 0) {
            pdVar10 = (double *)((longlong)(int)(uint)bVar1 + -1);
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            pdVar12 = pdVar17;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pcVar7 = *(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                             (ulonglong)(uint)bVar1 * 0x38 + -0x10);
          (*pcVar7)(pUVar6,pFVar4,local_98,pcVar7,pdVar10,pdVar12);
        }
      }
      pFVar21 = pFVar21 + 1;
      iVar14 = iVar14 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while ((longlong)pFVar21 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146685440

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,
             FVariantPropertyTypeIndex *param_4,double *param_5,double *param_6,double *param_7,
             double *param_8)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  FTrackInstancePropertyBindings *pFVar4;
  TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
  *pTVar5;
  UObject *pUVar6;
  code *pcVar7;
  FPropertyCompositeDefinition *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  FVariantPropertyTypeIndex *pFVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double local_68 [5];
  
  uVar2 = param_1->Size;
  iVar16 = 0;
  pFVar15 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar15->Index;
      pFVar4 = param_3->Object;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      local_68[3] = 0.0;
      if (bVar1 < 3) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FIntermediateColor&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,pFVar4,local_68);
      }
      else {
        uVar11 = bVar1 - 3;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x88))(pUVar6,pFVar4,local_68);
        }
      }
      pdVar14 = (double *)0x0;
      pdVar18 = param_8 + iVar16;
      if (param_8 == (double *)0x0) {
        pdVar18 = pdVar14;
      }
      pdVar17 = param_7 + iVar16;
      if (param_7 == (double *)0x0) {
        pdVar17 = pdVar14;
      }
      pdVar12 = param_6 + iVar16;
      if (param_6 == (double *)0x0) {
        pdVar12 = pdVar14;
      }
      pdVar13 = param_5 + iVar16;
      if (param_5 == (double *)0x0) {
        pdVar13 = pdVar14;
      }
      pFVar8 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar3 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8->CompositeOffset) = *pdVar13;
      }
      if ((iVar3 < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar3 < 3) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar17 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[2].CompositeOffset) = *pdVar17;
      }
      if ((iVar3 < 4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pdVar18 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar8[3].CompositeOffset) = *pdVar18;
      }
      bVar1 = pFVar15->Index;
      pTVar5 = this->Traits;
      pUVar6 = *param_2;
      if (bVar1 < 3) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,UE::MovieScene::FIntermediateColor_const&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar6,pFVar4,local_68);
      }
      else {
        uVar11 = bVar1 - 3;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar5->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)((pTVar5->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0x80))(pUVar6,pFVar4,local_68);
        }
      }
      pFVar15 = pFVar15 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar16 = iVar16 + 1;
    } while ((longlong)pFVar15 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146685860

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,
             FVariantPropertyTypeIndex *param_4,long64 *param_5)

{
  byte bVar1;
  ushort uVar2;
  FTrackInstancePropertyBindings *pFVar3;
  TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *pTVar4;
  UObject *pUVar5;
  code *pcVar6;
  FPropertyCompositeDefinition *pFVar7;
  long64 lVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  long64 *plVar12;
  int iVar13;
  FVariantPropertyTypeIndex *pFVar14;
  long64 local_res10;
  
  uVar2 = param_1->Size;
  iVar13 = 0;
  pFVar14 = param_4;
  if ((ulonglong)uVar2 != 0) {
    do {
      bVar1 = pFVar14->Index;
      pFVar3 = param_3->Object;
      pTVar4 = this->Traits;
      pUVar5 = *param_2;
      local_res10 = 0;
      if (bVar1 < 4) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<__int64,__int64,int,short,signed_char>::GetObjectPropertyValue(UObject_const*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,__int64&___ptr64)'
                    ::__l2::Funcs)[bVar1])(pUVar5,pFVar3,&local_res10);
      }
      else {
        uVar11 = bVar1 - 4;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar4->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar4->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)((pTVar4->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0xc0))(pUVar5,pFVar3,&local_res10);
        }
      }
      if (param_5 == (long64 *)0x0) {
        plVar12 = (long64 *)0x0;
      }
      else {
        plVar12 = param_5 + iVar13;
      }
      pFVar7 = (this->CompositeDefinitions).DataPtr;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (plVar12 != (long64 *)0x0) {
        *(long64 *)((longlong)&local_res10 + (ulonglong)pFVar7->CompositeOffset) = *plVar12;
      }
      lVar8 = local_res10;
      bVar1 = pFVar14->Index;
      pTVar4 = this->Traits;
      pUVar5 = *param_2;
      if (bVar1 < 4) {
        (*(code *)(&`public:_static_void___cdecl_UE::MovieScene::TVariantPropertyTraits<__int64,__int64,int,short,signed_char>::SetObjectPropertyValue(UObject*___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,FTrackInstancePropertyBindings*___ptr64,__int64)'
                    ::__l2::Funcs)[bVar1])(pUVar5,pFVar3,local_res10);
      }
      else {
        uVar11 = bVar1 - 4;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar4->DynamicTraits).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar11 < (pTVar4->DynamicTraits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)((pTVar4->DynamicTraits).AllocatorInstance.Data +
                      (ulonglong)bVar1 * 0x38 + -0xb8))(pUVar5,pFVar3,lVar8);
        }
      }
      pFVar14 = pFVar14 + 1;
      param_3 = param_3 + 1;
      iVar13 = iVar13 + 1;
      param_2 = param_2 + 1;
    } while ((longlong)pFVar14 - (longlong)param_4 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146685b40

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,uchar *param_4)

{
  uchar uVar1;
  ushort uVar2;
  FTrackInstancePropertyBindings *this_00;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  uchar uVar5;
  bool bVar6;
  FResolvedPropertyAndFunction *this_01;
  uchar *puVar7;
  int iVar8;
  longlong lVar9;
  uchar local_res10 [8];
  UObject **local_res18;
  
  uVar2 = param_1->Size;
  iVar8 = 0;
  if ((ulonglong)uVar2 != 0) {
    lVar9 = 0;
    local_res18 = param_2;
    do {
      this_00 = param_3->Object;
      this_01 = FTrackInstancePropertyBindings::FindOrAdd(this_00,local_res18[lVar9]);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      uVar5 = '\0';
      if (uVar1 == '\0') {
        puVar7 = FCachedProperty::GetPropertyAddress<unsigned_char>((FCachedProperty *)this_01);
LAB_146685bc2:
        if (puVar7 != (uchar *)0x0) {
          uVar5 = *puVar7;
        }
      }
      else if (uVar1 == '\x01') {
        puVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
        goto LAB_146685bc2;
      }
      local_res10[0] = uVar5;
      if (param_4 == (uchar *)0x0) {
        puVar7 = (uchar *)0x0;
      }
      else {
        puVar7 = param_4 + iVar8;
      }
      pFVar4 = (this->CompositeDefinitions).DataPtr;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (puVar7 != (uchar *)0x0) {
        local_res10[pFVar4->CompositeOffset] = *puVar7;
      }
      FTrackInstancePropertyBindings::CallFunction<unsigned_char>
                (this_00,local_res18[lVar9],local_res10[0]);
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 1;
      param_3 = param_3 + 1;
    } while (lVar9 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146685cb0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4)

{
  uchar uVar1;
  ushort uVar2;
  FTrackInstancePropertyBindings *this_00;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  FResolvedPropertyAndFunction *this_01;
  float *pfVar6;
  double *pdVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  double local_res10;
  
  uVar2 = param_1->Size;
  iVar8 = 0;
  if ((ulonglong)uVar2 != 0) {
    lVar9 = 0;
    do {
      this_00 = param_3->Object;
      fVar10 = 0.0;
      this_01 = FTrackInstancePropertyBindings::FindOrAdd(this_00,param_2[lVar9]);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pfVar6 = FCachedProperty::GetPropertyAddress<float>((FCachedProperty *)this_01);
LAB_146685d33:
        if (pfVar6 != (float *)0x0) {
          fVar10 = *pfVar6;
        }
      }
      else if (uVar1 == '\x01') {
        pfVar6 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
        goto LAB_146685d33;
      }
      local_res10 = (double)fVar10;
      if (param_4 == (double *)0x0) {
        pdVar7 = (double *)0x0;
      }
      else {
        pdVar7 = param_4 + iVar8;
      }
      pFVar4 = (this->CompositeDefinitions).DataPtr;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar7 != (double *)0x0) {
        *(double *)((longlong)&local_res10 + (ulonglong)pFVar4->CompositeOffset) = *pdVar7;
      }
      FTrackInstancePropertyBindings::CallFunction<float>(this_00,param_2[lVar9],(float)local_res10)
      ;
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 1;
      param_3 = param_3 + 1;
    } while (lVar9 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146685e20

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4,double *param_5,
             double *param_6)

{
  uchar uVar1;
  ushort uVar2;
  int iVar3;
  FTrackInstancePropertyBindings *this_00;
  code *pcVar4;
  FPropertyCompositeDefinition *pFVar5;
  bool bVar6;
  FResolvedPropertyAndFunction *this_01;
  TRotator<double> *pTVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  ulonglong uVar12;
  double *pdVar13;
  double *pdVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double local_78;
  double dStack_70;
  TRotator<double> local_68;
  double local_50;
  double dStack_48;
  double local_40;
  
  uVar2 = param_1->Size;
  uVar8 = 0;
  uVar12 = uVar8;
  if ((ulonglong)uVar2 != 0) {
    do {
      pdVar10 = (double *)0x0;
      this_00 = param_3->Object;
      local_68.Roll = 0.0;
      local_40 = 0.0;
      local_68.Pitch = 0.0;
      local_68.Yaw = 0.0;
      local_78 = 0.0;
      dStack_70 = 0.0;
      local_50 = 0.0;
      dStack_48 = 0.0;
      this_01 = FTrackInstancePropertyBindings::FindOrAdd(this_00,param_2[uVar8]);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pTVar7 = FCachedProperty::GetPropertyAddress<UE::Math::TRotator<double>_>
                           ((FCachedProperty *)this_01);
LAB_146685ec7:
        if (pTVar7 == (TRotator<double> *)0x0) goto LAB_146685ee6;
        local_78 = pTVar7->Pitch;
        dStack_70 = pTVar7->Yaw;
        local_40 = pTVar7->Roll;
        uVar15 = SUB84(local_40,0);
        uVar16 = (undefined4)((ulonglong)local_40 >> 0x20);
        local_50 = local_78;
        dStack_48 = dStack_70;
      }
      else {
        if (uVar1 == '\x01') {
          pTVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
          goto LAB_146685ec7;
        }
LAB_146685ee6:
        uVar15 = SUB84(local_40,0);
        uVar16 = (undefined4)((ulonglong)local_40 >> 0x20);
      }
      iVar11 = (int)uVar12;
      local_68.Roll = (double)CONCAT44(uVar16,uVar15);
      local_68.Pitch = local_78;
      local_68.Yaw = dStack_70;
      pdVar13 = param_6 + iVar11;
      if (param_6 == (double *)0x0) {
        pdVar13 = pdVar10;
      }
      pFVar5 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      pdVar14 = param_5 + iVar11;
      if (param_5 == (double *)0x0) {
        pdVar14 = pdVar10;
      }
      pdVar9 = param_4 + iVar11;
      if (param_4 == (double *)0x0) {
        pdVar9 = pdVar10;
      }
      if ((iVar3 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar9 != (double *)0x0) {
        *(double *)((longlong)&local_68.Pitch + (ulonglong)pFVar5->CompositeOffset) = *pdVar9;
      }
      if ((iVar3 < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar14 != (double *)0x0) {
        *(double *)((longlong)&local_68.Pitch + (ulonglong)pFVar5[1].CompositeOffset) = *pdVar14;
      }
      if ((iVar3 < 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)&local_68.Pitch + (ulonglong)pFVar5[2].CompositeOffset) = *pdVar13;
      }
      FTrackInstancePropertyBindings::CallFunction<UE::Math::TRotator<double>_>
                (this_00,param_2[uVar8],&local_68);
      uVar8 = uVar8 + 1;
      param_3 = param_3 + 1;
      uVar12 = (ulonglong)(iVar11 + 1);
    } while ((longlong)uVar8 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 1466860a0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4,double *param_5)

{
  uchar uVar1;
  ushort uVar2;
  int iVar3;
  FTrackInstancePropertyBindings *this_00;
  code *pcVar4;
  FPropertyCompositeDefinition *pFVar5;
  TVector2<float> TVar6;
  bool bVar7;
  FResolvedPropertyAndFunction *this_01;
  TVector2<float>_u_0_s_0 *pTVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 local_res10;
  double local_58 [4];
  
  uVar11 = 0;
  uVar2 = param_1->Size;
  uVar13 = uVar11;
  if ((ulonglong)uVar2 != 0) {
    do {
      this_00 = param_3->Object;
      local_res10 = (TVector2<float>_u_0)0x0;
      this_01 = FTrackInstancePropertyBindings::FindOrAdd(this_00,param_2[uVar11]);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pTVar8 = (TVector2<float>_u_0_s_0 *)
                 FCachedProperty::GetPropertyAddress<UE::Math::TVector2<float>_>
                           ((FCachedProperty *)this_01);
LAB_146686129:
        if (pTVar8 != (TVector2<float>_u_0_s_0 *)0x0) {
          local_res10 = *pTVar8;
        }
      }
      else if (uVar1 == '\x01') {
        pTVar8 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
        goto LAB_146686129;
      }
      iVar12 = (int)uVar13;
      local_58[0] = (double)(float)local_res10;
      local_58[1] = (double)local_res10._4_4_;
      local_58[2] = 0.0;
      local_58[3] = 0.0;
      pdVar10 = param_5 + iVar12;
      if (param_5 == (double *)0x0) {
        pdVar10 = (double *)0x0;
      }
      pFVar5 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      pdVar9 = param_4 + iVar12;
      if (param_4 == (double *)0x0) {
        pdVar9 = (double *)0x0;
      }
      if ((iVar3 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar9 != (double *)0x0) {
        *(double *)((longlong)local_58 + (ulonglong)pFVar5->CompositeOffset) = *pdVar9;
      }
      if ((iVar3 < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_58 + (ulonglong)pFVar5[1].CompositeOffset) = *pdVar10;
      }
      TVar6.field0_0x0._s_0.Y = (float)local_58[1];
      TVar6.field0_0x0._s_0.X = (float)local_58[0];
      FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<float>_>
                (this_00,param_2[uVar11],TVar6);
      uVar11 = uVar11 + 1;
      param_3 = param_3 + 1;
      uVar13 = (ulonglong)(iVar12 + 1);
    } while ((longlong)uVar11 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 1466862d0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4,double *param_5,
             double *param_6)

{
  uchar uVar1;
  ushort uVar2;
  int iVar3;
  FTrackInstancePropertyBindings *this_00;
  code *pcVar4;
  FPropertyCompositeDefinition *pFVar5;
  bool bVar6;
  FResolvedPropertyAndFunction *this_01;
  TVector<float> *pTVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  ulonglong uVar12;
  double *pdVar13;
  double *pdVar14;
  float fVar15;
  float fVar16;
  float local_e0;
  TVector<float>_u_0 local_d0 [2];
  FPropertyCompositeDefinition *local_b8;
  undefined8 uStack_b0;
  double local_a8 [14];
  
  uVar2 = param_1->Size;
  uVar8 = 0;
  uVar12 = uVar8;
  if ((ulonglong)uVar2 != 0) {
    do {
      pdVar9 = (double *)0x0;
      this_00 = param_3->Object;
      local_e0 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      this_01 = FTrackInstancePropertyBindings::FindOrAdd(this_00,param_2[uVar8]);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pTVar7 = FCachedProperty::GetPropertyAddress<UE::Math::TVector<float>_>
                           ((FCachedProperty *)this_01);
LAB_146686398:
        if (pTVar7 != (TVector<float> *)0x0) {
          fVar16 = (pTVar7->field0_0x0)._s_0.Z;
          fVar15 = (float)((ulonglong)*(undefined8 *)&pTVar7->field0_0x0 >> 0x20);
          local_e0 = (float)*(undefined8 *)&pTVar7->field0_0x0;
        }
      }
      else if (uVar1 == '\x01') {
        pTVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
        goto LAB_146686398;
      }
      iVar11 = (int)uVar12;
      local_a8[3] = 0.0;
      local_a8[0] = (double)local_e0;
      local_a8[1] = (double)fVar15;
      local_a8[2] = (double)fVar16;
      pdVar13 = param_6 + iVar11;
      if (param_6 == (double *)0x0) {
        pdVar13 = pdVar9;
      }
      local_b8 = (this->CompositeDefinitions).DataPtr;
      uStack_b0 = *(undefined8 *)&(this->CompositeDefinitions).ArrayNum;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      pdVar14 = param_5 + iVar11;
      if (param_5 == (double *)0x0) {
        pdVar14 = pdVar9;
      }
      pdVar10 = param_4 + iVar11;
      if (param_4 == (double *)0x0) {
        pdVar10 = pdVar9;
      }
      if ((iVar3 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar5 = local_b8;
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_a8 + (ulonglong)local_b8->CompositeOffset) = *pdVar10;
      }
      if ((iVar3 < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar14 != (double *)0x0) {
        *(double *)((longlong)local_a8 + (ulonglong)pFVar5[1].CompositeOffset) = *pdVar14;
      }
      if ((iVar3 < 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_a8 + (ulonglong)pFVar5[2].CompositeOffset) = *pdVar13;
      }
      local_d0[0]._0_4_ = (undefined4)local_a8[0];
      local_d0[0]._4_4_ = (undefined4)local_a8[1];
      local_d0[0]._8_4_ = (undefined4)local_a8[2];
      FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<float>_>
                (this_00,param_2[uVar8],(TVector<float> *)&local_d0[0]._s_0);
      uVar8 = uVar8 + 1;
      param_3 = param_3 + 1;
      uVar12 = (ulonglong)(iVar11 + 1);
    } while ((longlong)uVar8 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146686600

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7,double *param_8,double *param_9,double *param_10,
             double *param_11,double *param_12)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this_00;
  FEulerTransform *pFVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res10 [8];
  UObject **local_res18;
  TSharedPtr<FTrackInstancePropertyBindings,1> *local_res20;
  int local_158;
  longlong local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  FTrackInstancePropertyBindings *local_f8;
  ulonglong local_f0;
  TVector<double>_u_0 local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_98 [5];
  
  local_f0 = (ulonglong)param_1->Size;
  local_158 = 0;
  if (local_f0 != 0) {
    local_150 = 0;
    local_res18 = param_2;
    do {
      uVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
      uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
      uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
      uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
      local_f8 = param_3->Object;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      local_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_res20 = param_3;
      this_00 = FTrackInstancePropertyBindings::FindOrAdd(local_f8,local_res18[local_150]);
      uVar1 = (this_00->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pFVar2 = FCachedProperty::GetPropertyAddress<FEulerTransform>((FCachedProperty *)this_00);
LAB_1466866e4:
        if (pFVar2 != (FEulerTransform *)0x0) {
          local_a8 = (pFVar2->Scale).field0_0x0._s_0.Z;
          uVar13 = *(undefined4 *)&(pFVar2->Location).field0_0x0;
          uVar14 = *(undefined4 *)((longlong)&(pFVar2->Location).field0_0x0 + 4);
          uVar15 = *(undefined4 *)((longlong)&(pFVar2->Location).field0_0x0 + 8);
          uVar16 = *(undefined4 *)((longlong)&(pFVar2->Location).field0_0x0 + 0xc);
          uVar17 = *(undefined4 *)((longlong)&(pFVar2->Location).field0_0x0 + 0x10);
          uVar18 = *(undefined4 *)((longlong)&(pFVar2->Location).field0_0x0 + 0x14);
          uVar19 = *(undefined4 *)&(pFVar2->Rotation).Pitch;
          uVar20 = *(undefined4 *)((longlong)&(pFVar2->Rotation).Pitch + 4);
          uVar25 = *(undefined4 *)&(pFVar2->Rotation).Yaw;
          uVar26 = *(undefined4 *)((longlong)&(pFVar2->Rotation).Yaw + 4);
          uVar27 = *(undefined4 *)&(pFVar2->Rotation).Roll;
          uVar28 = *(undefined4 *)((longlong)&(pFVar2->Rotation).Roll + 4);
          uVar21 = *(undefined4 *)&(pFVar2->Scale).field0_0x0;
          uVar22 = *(undefined4 *)((longlong)&(pFVar2->Scale).field0_0x0 + 4);
          uVar23 = *(undefined4 *)((longlong)&(pFVar2->Scale).field0_0x0 + 8);
          uVar24 = *(undefined4 *)((longlong)&(pFVar2->Scale).field0_0x0 + 0xc);
        }
      }
      else if (uVar1 == '\x01') {
        pFVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
        goto LAB_1466866e4;
      }
      pdVar10 = (double *)0x0;
      lVar3 = (longlong)local_158;
      local_130 = CONCAT44(uVar28,uVar27);
      local_148 = (double)CONCAT44(uVar14,uVar13);
      local_138 = (double)CONCAT44(uVar18,uVar17);
      local_118 = CONCAT44(uVar22,uVar21);
      local_108 = local_a8;
      dStack_140 = (double)CONCAT44(uVar16,uVar15);
      local_128 = CONCAT44(uVar20,uVar19);
      uStack_120 = CONCAT44(uVar26,uVar25);
      uStack_110 = CONCAT44(uVar24,uVar23);
      pdVar7 = param_12 + lVar3;
      if (param_12 == (double *)0x0) {
        pdVar7 = pdVar10;
      }
      pdVar6 = param_11 + lVar3;
      if (param_11 == (double *)0x0) {
        pdVar6 = pdVar10;
      }
      pdVar8 = param_10 + lVar3;
      if (param_10 == (double *)0x0) {
        pdVar8 = pdVar10;
      }
      pdVar12 = pdVar10;
      if (param_9 != (double *)0x0) {
        pdVar12 = param_9 + lVar3;
      }
      pdVar11 = param_8 + lVar3;
      if (param_8 == (double *)0x0) {
        pdVar11 = pdVar10;
      }
      pdVar9 = param_7 + lVar3;
      if (param_7 == (double *)0x0) {
        pdVar9 = pdVar10;
      }
      pdVar5 = param_6 + lVar3;
      if (param_6 == (double *)0x0) {
        pdVar5 = pdVar10;
      }
      pdVar4 = param_5 + lVar3;
      if (param_5 == (double *)0x0) {
        pdVar4 = pdVar10;
      }
      pdVar10 = param_4;
      if (param_4 != (double *)0x0) {
        pdVar10 = param_4 + lVar3;
      }
      local_98[0].DataPtr = (this->CompositeDefinitions).DataPtr;
      local_98[0].ArrayNum = (this->CompositeDefinitions).ArrayNum;
      local_98[0]._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                (local_res10,local_98,(uchar *)&local_148,pdVar10,pdVar4,pdVar5,pdVar9,pdVar11,
                 pdVar12,pdVar8,pdVar6,pdVar7);
      local_e8._s_0.X = local_148;
      local_e8._s_0.Y = dStack_140;
      local_e8._s_0.Z = local_138;
      local_b8 = local_118;
      uStack_b0 = uStack_110;
      local_d0 = local_128;
      uStack_c8 = uStack_120;
      local_a8 = local_108;
      local_c0 = local_130;
      FTrackInstancePropertyBindings::CallFunction<FEulerTransform>
                (local_f8,local_res18[local_150],(FEulerTransform *)&local_e8._s_0);
      local_150 = local_150 + 1;
      param_3 = local_res20 + 1;
      local_158 = local_158 + 1;
    } while (local_150 < (longlong)local_f0);
  }
  return;
}

// ForEachSlow @ 146686930

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7,double *param_8,double *param_9,double *param_10,
             double *param_11,double *param_12)

{
  uchar uVar1;
  ushort uVar2;
  FTrackInstancePropertyBindings *this_00;
  FResolvedPropertyAndFunction *this_01;
  FIntermediate3DTransform *pFVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res10 [8];
  UObject **local_res18;
  TSharedPtr<FTrackInstancePropertyBindings,1> *local_res20;
  uint local_178;
  FIntermediate3DTransform local_158;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_108 [12];
  
  uVar2 = param_1->Size;
  uVar8 = 0;
  local_178 = 0;
  uVar9 = uVar8;
  local_res18 = param_2;
  if ((ulonglong)uVar2 != 0) {
    do {
      this_00 = param_3->Object;
      local_158.S_Z = 0.0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      local_158.T_X = 0.0;
      local_158.T_Y = 0.0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      local_158.T_Z = 0.0;
      local_158.R_X = 0.0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      local_158.R_Y = 0.0;
      local_158.R_Z = 0.0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      local_158.S_X = 0.0;
      local_158.S_Y = 0.0;
      uVar32 = 0;
      uVar33 = 0;
      local_res20 = param_3;
      this_01 = FTrackInstancePropertyBindings::FindOrAdd(this_00,local_res18[uVar9]);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pFVar3 = FCachedProperty::GetPropertyAddress<UE::MovieScene::FIntermediate3DTransform>
                           ((FCachedProperty *)this_01);
LAB_146686a47:
        if (pFVar3 != (FIntermediate3DTransform *)0x0) {
          uVar16 = *(undefined4 *)&pFVar3->T_X;
          uVar17 = *(undefined4 *)((longlong)&pFVar3->T_X + 4);
          uVar18 = *(undefined4 *)&pFVar3->T_Y;
          uVar19 = *(undefined4 *)((longlong)&pFVar3->T_Y + 4);
          uVar20 = *(undefined4 *)&pFVar3->T_Z;
          uVar21 = *(undefined4 *)((longlong)&pFVar3->T_Z + 4);
          uVar22 = *(undefined4 *)&pFVar3->R_X;
          uVar23 = *(undefined4 *)((longlong)&pFVar3->R_X + 4);
          uVar24 = *(undefined4 *)&pFVar3->R_Y;
          uVar25 = *(undefined4 *)((longlong)&pFVar3->R_Y + 4);
          uVar26 = *(undefined4 *)&pFVar3->R_Z;
          uVar27 = *(undefined4 *)((longlong)&pFVar3->R_Z + 4);
          uVar28 = *(undefined4 *)&pFVar3->S_X;
          uVar29 = *(undefined4 *)((longlong)&pFVar3->S_X + 4);
          uVar30 = *(undefined4 *)&pFVar3->S_Y;
          uVar31 = *(undefined4 *)((longlong)&pFVar3->S_Y + 4);
          uVar32 = SUB84(pFVar3->S_Z,0);
          uVar33 = (undefined4)((ulonglong)pFVar3->S_Z >> 0x20);
        }
      }
      else if (uVar1 == '\x01') {
        pFVar3 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
        goto LAB_146686a47;
      }
      pdVar13 = (double *)0x0;
      iVar6 = (int)uVar8;
      local_158.T_X = (double)CONCAT44(uVar17,uVar16);
      local_158.T_Z = (double)CONCAT44(uVar21,uVar20);
      local_158.R_Y = (double)CONCAT44(uVar25,uVar24);
      local_158.S_X = (double)CONCAT44(uVar29,uVar28);
      local_158.T_Y = (double)CONCAT44(uVar19,uVar18);
      local_158.R_X = (double)CONCAT44(uVar23,uVar22);
      local_158.R_Z = (double)CONCAT44(uVar27,uVar26);
      local_158.S_Y = (double)CONCAT44(uVar31,uVar30);
      local_158.S_Z = (double)CONCAT44(uVar33,uVar32);
      pdVar10 = param_12 + iVar6;
      if (param_12 == (double *)0x0) {
        pdVar10 = pdVar13;
      }
      pdVar7 = param_11 + iVar6;
      if (param_11 == (double *)0x0) {
        pdVar7 = pdVar13;
      }
      pdVar11 = param_10 + iVar6;
      if (param_10 == (double *)0x0) {
        pdVar11 = pdVar13;
      }
      pdVar15 = pdVar13;
      if (param_9 != (double *)0x0) {
        pdVar15 = param_9 + iVar6;
      }
      pdVar14 = param_8 + iVar6;
      if (param_8 == (double *)0x0) {
        pdVar14 = pdVar13;
      }
      pdVar12 = param_7 + iVar6;
      if (param_7 == (double *)0x0) {
        pdVar12 = pdVar13;
      }
      pdVar5 = param_6 + iVar6;
      if (param_6 == (double *)0x0) {
        pdVar5 = pdVar13;
      }
      pdVar4 = param_5 + iVar6;
      if (param_5 == (double *)0x0) {
        pdVar4 = pdVar13;
      }
      pdVar13 = param_4;
      if (param_4 != (double *)0x0) {
        pdVar13 = param_4 + iVar6;
      }
      local_108[0].DataPtr = (this->CompositeDefinitions).DataPtr;
      local_108[0].ArrayNum = (this->CompositeDefinitions).ArrayNum;
      local_108[0]._12_4_ = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
                (local_res10,local_108,(uchar *)&local_158,pdVar13,pdVar4,pdVar5,pdVar12,pdVar14,
                 pdVar15,pdVar11,pdVar7,pdVar10);
      FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
                (this_00,local_res18[uVar9],&local_158);
      uVar9 = uVar9 + 1;
      param_3 = local_res20 + 1;
      local_178 = local_178 + 1;
      uVar8 = (ulonglong)local_178;
    } while ((longlong)uVar9 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146686c90

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7)

{
  uchar uVar1;
  ushort uVar2;
  FTrackInstancePropertyBindings *this_00;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  FResolvedPropertyAndFunction *this_01;
  FLinearColor *pFVar6;
  int iVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  double *pdVar12;
  double *pdVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res10;
  FLinearColor_u_0 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  FPropertyCompositeDefinition *local_78;
  undefined8 uStack_70;
  double local_68 [6];
  
  uVar2 = param_1->Size;
  uVar8 = 0;
  local_res10 = 0;
  uVar11 = uVar8;
  if ((ulonglong)uVar2 != 0) {
    do {
      pdVar10 = (double *)0x0;
      this_00 = param_3->Object;
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      local_88 = 0;
      uStack_80 = 0;
      this_01 = FTrackInstancePropertyBindings::FindOrAdd(this_00,param_2[uVar11]);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pFVar6 = FCachedProperty::GetPropertyAddress<FLinearColor>((FCachedProperty *)this_01);
LAB_146686d20:
        if (pFVar6 != (FLinearColor *)0x0) {
          fVar14 = (pFVar6->field0_0x0)._s_0.R;
          fVar15 = (pFVar6->field0_0x0)._s_0.G;
          local_88 = *(undefined8 *)&pFVar6->field0_0x0;
          fVar16 = (pFVar6->field0_0x0)._s_0.B;
          fVar17 = (pFVar6->field0_0x0)._s_0.A;
          uStack_80._0_4_ = *(float *)((longlong)&pFVar6->field0_0x0 + 8);
          uStack_80._4_4_ = *(float *)((longlong)&pFVar6->field0_0x0 + 0xc);
        }
      }
      else if (uVar1 == '\x01') {
        pFVar6 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
        goto LAB_146686d20;
      }
      iVar7 = (int)uVar8;
      local_68[0] = (double)fVar14;
      local_68[1] = (double)fVar15;
      local_68[2] = (double)fVar16;
      local_68[3] = (double)fVar17;
      pdVar9 = param_7 + iVar7;
      if (param_7 == (double *)0x0) {
        pdVar9 = pdVar10;
      }
      pdVar13 = param_6 + iVar7;
      if (param_6 == (double *)0x0) {
        pdVar13 = pdVar10;
      }
      pdVar12 = param_5 + iVar7;
      if (param_5 == (double *)0x0) {
        pdVar12 = pdVar10;
      }
      if (param_4 != (double *)0x0) {
        pdVar10 = param_4 + iVar7;
      }
      local_78 = (this->CompositeDefinitions).DataPtr;
      uStack_70 = *(undefined8 *)&(this->CompositeDefinitions).ArrayNum;
      iVar7 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = local_78;
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)local_78->CompositeOffset) = *pdVar10;
      }
      if ((iVar7 < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar4[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar7 < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar4[2].CompositeOffset) = *pdVar13;
      }
      if ((iVar7 < 4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar9 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar4[3].CompositeOffset) = *pdVar9;
      }
      local_98._s_0.R = (float)local_68[0];
      local_98._s_0.G = (float)local_68[1];
      local_98._s_0.B = (float)local_68[2];
      local_98._s_0.A = (float)local_68[3];
      FTrackInstancePropertyBindings::CallFunction<FLinearColor>
                (this_00,param_2[uVar11],(FLinearColor *)&local_98._s_0);
      uVar11 = uVar11 + 1;
      local_res10 = local_res10 + 1;
      uVar8 = (ulonglong)local_res10;
      param_3 = param_3 + 1;
    } while ((longlong)uVar11 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 146686fe0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,FString *param_4)

{
  uchar uVar1;
  ushort uVar2;
  FTrackInstancePropertyBindings *this_00;
  FScriptContainerElement *_Src;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FResolvedPropertyAndFunction *pFVar7;
  FString *pFVar8;
  FProperty *pFVar9;
  UFunction *pUVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  FString local_68;
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar2 = param_1->Size;
  uVar11 = 0;
  uVar13 = uVar11;
  if ((ulonglong)uVar2 != 0) {
    do {
      this_00 = param_3->Object;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      pFVar7 = FTrackInstancePropertyBindings::FindOrAdd(this_00,param_2[uVar13]);
      uVar1 = (pFVar7->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pFVar8 = FCachedProperty::GetPropertyAddress<FString>((FCachedProperty *)pFVar7);
LAB_146687079:
        if ((pFVar8 != (FString *)0x0) && (&local_68 != pFVar8)) {
          iVar12 = (pFVar8->Data).ArrayNum;
          _Src = (pFVar8->Data).AllocatorInstance.Data;
          local_68.Data.ArrayNum = iVar12;
          if ((iVar12 == 0) && (local_68.Data.ArrayMax == 0)) {
            local_68.Data.ArrayNum = 0;
            local_68.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar12,local_68.Data.ArrayMax,(ForAnyElementType *)&local_68,iVar12,
                       &local_68.Data.ArrayMax);
            if (iVar12 != 0) {
              memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar12 * 2);
            }
          }
        }
      }
      else if (uVar1 == '\x01') {
        pFVar8 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar7,false);
        goto LAB_146687079;
      }
      pFVar8 = (FString *)0x0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      local_58.Data.ArrayNum = local_68.Data.ArrayNum;
      local_58.Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (param_4 != (FString *)0x0) {
        pFVar8 = param_4 + (int)uVar11;
      }
      local_48 = *(undefined4 *)&(this->CompositeDefinitions).DataPtr;
      uStack_44 = *(undefined4 *)((longlong)&(this->CompositeDefinitions).DataPtr + 4);
      iStack_40 = (this->CompositeDefinitions).ArrayNum;
      uStack_3c = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pFVar8 != (FString *)0x0) {
        ::FString::operator=
                  ((FString *)
                   ((longlong)&local_58.Data.AllocatorInstance.Data +
                   (ulonglong)*(ushort *)(CONCAT44(uStack_44,local_48) + 2)),pFVar8);
      }
      pUVar3 = param_2[uVar13];
      pFVar7 = FTrackInstancePropertyBindings::FindOrAdd(this_00,pUVar3);
      pFVar9 = FTrackInstancePropertyBindings::FResolvedPropertyAndFunction::GetValidProperty
                         (pFVar7);
      if ((pFVar9 == (FProperty *)0x0) ||
         (cVar6 = (**(code **)(pFVar9->_padding_ + 0x70))(pFVar9), cVar6 == '\0')) {
        pUVar10 = (UFunction *)FWeakObjectPtr::Get(&(pFVar7->SetterFunction).WeakPtr);
        if (pUVar10 == (UFunction *)0x0) {
          uVar1 = (pFVar7->ResolvedProperty).TypeIndex;
          if (uVar1 == '\0') {
            pFVar8 = FCachedProperty::GetPropertyAddress<FString>((FCachedProperty *)pFVar7);
          }
          else {
            if (uVar1 != '\x01') goto LAB_1466871d9;
            pFVar8 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar7,false);
          }
          if (pFVar8 != (FString *)0x0) {
            iVar12 = local_58.Data.ArrayNum + -1;
            if (local_58.Data.ArrayNum == 0) {
              iVar12 = 0;
            }
            ::FString::AssignRange(pFVar8,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar12);
          }
        }
        else {
          FTrackInstancePropertyBindings::InvokeSetterFunction<FString_const_&>
                    (pUVar3,pUVar10,&local_58);
        }
      }
      else {
        (**(code **)(pFVar9->_padding_ + 0x88))(pFVar9,pUVar3,&local_58);
      }
LAB_1466871d9:
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar13 = uVar13 + 1;
      param_3 = param_3 + 1;
    } while ((longlong)uVar13 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 1466872a0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,FText *param_4)

{
  uchar uVar1;
  FTrackInstancePropertyBindings *this_00;
  UObject *pUVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  FResolvedPropertyAndFunction *this_01;
  FText *pFVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 local_res10 [8];
  UObject **local_res18;
  undefined1 local_78 [8];
  ulonglong local_70;
  FText local_68;
  FText local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar9 = (ulonglong)param_1->Size;
  iVar12 = 0;
  if (uVar9 != 0) {
    lVar10 = 0;
    local_res18 = param_2;
    local_70 = uVar9;
    do {
      this_00 = param_3->Object;
      FText::FText(&local_58);
      pUVar2 = param_2[lVar10];
      FText::FText(&local_68);
      this_01 = FTrackInstancePropertyBindings::FindOrAdd(this_00,pUVar2);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pFVar8 = FCachedProperty::GetPropertyAddress<FText>((FCachedProperty *)this_01);
LAB_146687337:
        TVar6.Reference = local_68.TextData.Reference;
        if (pFVar8 != (FText *)0x0) {
          pIVar3 = (pFVar8->TextData).Reference;
          if (local_68.TextData.Reference != pIVar3) {
            local_68.TextData.Reference = pIVar3;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
            }
            if (TVar6.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
            }
          }
          local_68.Flags = pFVar8->Flags;
        }
      }
      else if (uVar1 == '\x01') {
        pFVar8 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
        goto LAB_146687337;
      }
      FText::operator=(&local_58,&local_68);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (param_4 == (FText *)0x0) {
        pFVar8 = (FText *)0x0;
      }
      else {
        pFVar8 = param_4 + iVar12;
      }
      local_48 = *(undefined4 *)&(this->CompositeDefinitions).DataPtr;
      uStack_44 = *(undefined4 *)((longlong)&(this->CompositeDefinitions).DataPtr + 4);
      iStack_40 = (this->CompositeDefinitions).ArrayNum;
      uStack_3c = *(undefined4 *)&(this->CompositeDefinitions).field_0xc;
      if (((this->CompositeDefinitions).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pFVar8 != (FText *)0x0) {
        uVar9 = (ulonglong)*(ushort *)(CONCAT44(uStack_44,local_48) + 2);
        plVar11 = (longlong *)((longlong)&local_58.TextData.Reference + uVar9);
        pIVar3 = (pFVar8->TextData).Reference;
        pIVar4 = (ITextData *)*plVar11;
        if (pIVar4 != pIVar3) {
          *plVar11 = (longlong)pIVar3;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_78);
          }
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
          }
        }
        *(uint *)((longlong)&local_58.Flags + uVar9) = pFVar8->Flags;
        uVar9 = local_70;
      }
      param_2 = local_res18;
      FTrackInstancePropertyBindings::CallFunction<FText>(this_00,local_res18[lVar10],&local_58);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      iVar12 = iVar12 + 1;
      lVar10 = lVar10 + 1;
      param_3 = param_3 + 1;
    } while (lVar10 < (longlong)uVar9);
  }
  return;
}

