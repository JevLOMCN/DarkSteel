// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 5

// ForEachAllocation @ 14ac760e0

void __thiscall
UE::MovieScene::
TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
ForEachAllocation(TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
                  *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                 TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                 *param_3,TWrite<double> param_4)

{
  uchar uVar1;
  bool bVar2;
  FResolvedPropertyAndFunction *this_00;
  float *pfVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  TWrite<double> TVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  ushort local_res10 [8];
  longlong local_res20;
  ushort *local_48;
  longlong *local_40;
  
  lVar6 = *(longlong *)&param_3->Data;
  uVar4 = (ulonglong)param_1->Size;
  if (lVar6 == 0) {
    lVar6 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar6 == 0) {
      puVar9 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar9 != (undefined8 *)0x0) && (uVar4 != 0)) {
        lVar6 = 0;
        lVar5 = (longlong)param_4 - (longlong)param_2;
        do {
          fVar10 = 0.0;
          this_00 = FTrackInstancePropertyBindings::FindOrAdd
                              ((FTrackInstancePropertyBindings *)*puVar9,*(UObject **)param_2);
          uVar1 = (this_00->ResolvedProperty).TypeIndex;
          if (uVar1 == '\0') {
            pfVar3 = FCachedProperty::GetPropertyAddress<float>((FCachedProperty *)this_00);
LAB_14ac7625f:
            if (pfVar3 != (float *)0x0) {
              fVar10 = *pfVar3;
            }
          }
          else if (uVar1 == '\x01') {
            pfVar3 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
            goto LAB_14ac7625f;
          }
          lVar6 = lVar6 + 1;
          puVar9 = puVar9 + 2;
          *(double *)(lVar5 + (longlong)param_2) = (double)fVar10;
          param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
        } while (lVar6 < (longlong)uVar4);
      }
    }
    else if (uVar4 != 0) {
      lVar5 = 0;
      lVar8 = (longlong)param_4 - (longlong)param_2;
      do {
        local_res10[0] = *(ushort *)(lVar6 + lVar5 * 2);
        local_res20 = *(longlong *)param_2;
        if (local_res10[0] == 0) {
          local_48 = local_res10;
          local_40 = &local_res20;
          bVar2 = `UE::MovieScene::
                  TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_48);
          if (bVar2) goto LAB_14ac761dc;
        }
        else {
LAB_14ac761dc:
          *(double *)((longlong)param_2 + lVar8) =
               (double)*(float *)((ulonglong)local_res10[0] + local_res20);
        }
        lVar5 = lVar5 + 1;
        param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
        if ((longlong)uVar4 <= lVar5) {
          return;
        }
      } while( true );
    }
  }
  else if (uVar4 != 0) {
    lVar5 = 0;
    TVar7 = param_4;
    do {
      fVar10 = (float)(**(code **)((this->CustomAccessors).Base +
                                  (longlong)
                                  (int)((uint)*(ushort *)(lVar6 + lVar5 * 2) *
                                       (this->CustomAccessors).Stride) + 0x18))
                                (*(undefined8 *)
                                  ((longlong)TVar7 + ((longlong)param_2 - (longlong)param_4)));
      lVar5 = lVar5 + 1;
      *(double *)TVar7 = (double)fVar10;
      TVar7 = (TWrite<double>)((longlong)TVar7 + 8);
    } while (lVar5 < (longlong)uVar4);
    return;
  }
  return;
}

// ForEachEntity @ 14ac76bb0

void __thiscall
UE::MovieScene::
TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
ForEachEntity(TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
              *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
             double *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this_00;
  float *pfVar2;
  
  this_00 = FTrackInstancePropertyBindings::FindOrAdd(param_2->Object,param_1);
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pfVar2 = FCachedProperty::GetPropertyAddress<float>((FCachedProperty *)this_00);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14ac76c05;
    pfVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
  }
  if (pfVar2 != (float *)0x0) {
    *param_3 = (double)*pfVar2;
    return;
  }
LAB_14ac76c05:
  *param_3 = 0.0;
  return;
}

// ForEachEntity @ 14ac76c20

void __thiscall
UE::MovieScene::
TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
ForEachEntity(TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
              *this,UObject *param_1,ushort param_2,double *param_3)

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
            TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_18);
    param_1 = local_res10;
    param_2 = local_res18[0];
    if (!bVar1) {
      return;
    }
  }
  *param_3 = (double)*(float *)(&param_1->field_0x0 + param_2);
  return;
}

// ForEachEntity @ 14ac76c80

void __thiscall
UE::MovieScene::
TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
ForEachEntity(TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
              *this,UObject *param_1,FCustomPropertyIndex param_2,double *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)((this->CustomAccessors).Base +
                             (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) +
                             0x18))(param_1);
  *param_3 = (double)fVar1;
  return;
}

// operator() @ 15055a450

bool __thiscall
`UE::MovieScene::
TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
ForEachEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929604>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929604>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::ForEachEntity(UObject*___ptr64,unsigned_short,double&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055a4d0;
    }
  }
  bVar2 = false;
LAB_15055a4d0:
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

