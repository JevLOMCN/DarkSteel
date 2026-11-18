// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// ForEachAllocation @ 14d616b30

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachAllocation(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<double> param_4,TRead<double> param_5,TRead<double> param_6,
                   TRead<double> param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  FCameraFramingZone local_98 [3];
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
          local_98[0].Left = *(double *)((longlong)param_5 + lVar13);
          local_98[0].Top = *(double *)param_5;
          local_98[0].Right = *(double *)((longlong)param_5 + lVar11);
          local_98[0].Bottom = *(double *)((longlong)param_5 + lVar12);
          FTrackInstancePropertyBindings::CallFunction<FCameraFramingZone>
                    ((FTrackInstancePropertyBindings *)*puVar14,
                     *(UObject **)((longlong)param_5 + lVar9),local_98);
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
        uVar1 = *(undefined8 *)((longlong)param_6 + lVar15);
        uVar2 = *(undefined8 *)param_6;
        uVar3 = *(undefined8 *)((longlong)param_6 + lVar12);
        uVar4 = *(undefined8 *)((longlong)param_6 + lVar13);
        local_res10[0] = CONCAT62(local_res10[0]._2_6_,uVar6);
        if (uVar6 == 0) {
          local_98[0].Left = (double)local_res10;
          local_98[0].Top = (double)&local_res20;
          bVar5 = `UE::MovieScene::
                  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(local_98);
          if (bVar5) {
            uVar6 = (ushort)local_res10[0];
            goto LAB_14d616cdc;
          }
        }
        else {
LAB_14d616cdc:
          uVar7 = (ulonglong)uVar6;
          *(undefined8 *)(uVar7 + local_res20) = uVar4;
          *(undefined8 *)(uVar7 + 8 + local_res20) = uVar3;
          *(undefined8 *)(uVar7 + 0x10 + local_res20) = uVar2;
          *(undefined8 *)(uVar7 + 0x18 + local_res20) = uVar1;
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
      local_98[0].Top = *(double *)param_5;
      local_98[0].Left = *(double *)((longlong)param_5 + lVar12);
      local_98[0].Bottom = *(double *)((longlong)param_5 + local_res10[0]);
      local_98[0].Right = *(double *)((longlong)param_5 + lVar13);
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

// ForEachEntity @ 14d617100

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               double param_3,double param_4,double param_5,double param_6)

{
  FCameraFramingZone local_28;
  
  local_28.Top = param_4;
  local_28.Bottom = param_6;
  local_28.Right = param_5;
  local_28.Left = param_3;
  FTrackInstancePropertyBindings::CallFunction<FCameraFramingZone>
            (param_2->Object,param_1,&local_28);
  return;
}

// ForEachEntity @ 14d617150

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
            TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
  return;
}

// ForEachEntity @ 14d6171e0

void __thiscall
UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
::ForEachEntity(TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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

// operator() @ 150585130

bool __thiscall
`UE::MovieScene::
TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>::ForEachEntity(UObject*___ptr64,unsigned_short,double,double,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505851b0;
    }
  }
  bVar2 = false;
LAB_1505851b0:
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

