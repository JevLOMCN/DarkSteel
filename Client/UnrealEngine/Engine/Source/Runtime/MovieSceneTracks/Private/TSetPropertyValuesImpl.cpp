// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 15

// ForEachAllocation @ 14667d050

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
::ForEachAllocation(TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> param_4,
                   TRead<bool> param_5)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ushort *puVar9;
  ushort local_res10 [8];
  UObject *local_res20;
  ushort *local_50;
  UObject **local_48;
  
  puVar9 = *(ushort **)&param_3->Data;
  uVar8 = (ulonglong)param_1->Size;
  if (puVar9 == (ushort *)0x0) {
    lVar4 = *(longlong *)&(param_3->Data).field_0x8;
    if (lVar4 == 0) {
      puVar7 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar7 != (undefined8 *)0x0) && (uVar8 != 0)) {
        lVar4 = 0;
        do {
          FTrackInstancePropertyBindings::CallFunction<bool>
                    ((FTrackInstancePropertyBindings *)*puVar7,
                     *(UObject **)((longlong)param_2 + lVar4 * 8),
                     *(bool *)((longlong)param_5 + lVar4));
          lVar4 = lVar4 + 1;
          puVar7 = puVar7 + 2;
        } while (lVar4 < (longlong)uVar8);
      }
    }
    else {
      uVar3 = 0;
      uVar5 = uVar3;
      if (uVar8 != 0) {
        do {
          local_res10[0] = *(ushort *)(lVar4 + uVar3 * 2);
          local_res20 = *(UObject **)((longlong)param_2 + uVar3 * 8);
          bVar1 = *(bool *)((longlong)param_5 + uVar3);
          if (local_res10[0] == 0) {
            local_50 = local_res10;
            local_48 = &local_res20;
            bVar2 = `UE::MovieScene::
                    TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
                    ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_50);
            if (bVar2) goto LAB_14667d161;
          }
          else {
LAB_14667d161:
            FBoolPropertyTraits::SetObjectPropertyValue
                      (local_res20,*(FBoolMetaData *)((longlong)param_4 + (longlong)(int)uVar5 * 2),
                       local_res10[0],bVar1);
          }
          uVar3 = uVar3 + 1;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          if ((longlong)uVar8 <= (longlong)uVar3) {
            return;
          }
        } while( true );
      }
    }
  }
  else if (uVar8 != 0) {
    lVar4 = 0;
    lVar6 = (longlong)param_4 - (longlong)puVar9;
    do {
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)*puVar9 * (this->CustomAccessors).Stride) + 0x20))
                (*(undefined8 *)((longlong)param_2 + lVar4 * 8),
                 *(undefined2 *)((longlong)puVar9 + lVar6),
                 *(undefined1 *)((longlong)param_5 + lVar4));
      lVar4 = lVar4 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar4 < (longlong)uVar8);
    return;
  }
  return;
}

// ForEachAllocation @ 14667d1f0

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
ForEachAllocation(TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
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
                  TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
                  ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_48);
          if (bVar2) goto LAB_14667d2f1;
        }
        else {
LAB_14667d2f1:
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
                  0x20))(*(undefined8 *)param_2,(float)*(double *)((longlong)param_2 + lVar7));
      lVar5 = lVar5 + 1;
      param_2 = (TRead<UObject_*>)((longlong)param_2 + 8);
    } while (lVar5 < (longlong)uVar3);
    return;
  }
  return;
}

// ForEachAllocation @ 14667d380

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
::ForEachAllocation(TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TRead<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> param_4,
                   TRead<UE::MovieScene::FObjectComponent> param_5)

{
  int iVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ushort uVar12;
  longlong lVar13;
  FTrackInstancePropertyBindings *local_res10;
  UObject *local_res20;
  TObjectPtr<UClass>_u_0 local_68;
  undefined1 local_60;
  longlong local_58;
  TObjectPtr<UClass>_u_0 local_50;
  UObject **local_48;
  
  uVar10 = (ulonglong)param_1->Size;
  local_res20 = *(UObject **)&param_3->Data;
  if (local_res20 == (UObject *)0x0) {
    local_58 = *(longlong *)&(param_3->Data).field_0x8;
    if (local_58 == 0) {
      puVar11 = *(undefined8 **)&(param_3->Data).field_0x10;
      if ((puVar11 != (undefined8 *)0x0) && (uVar8 = 0, uVar10 != 0)) {
        lVar13 = (longlong)param_4 - (longlong)puVar11;
        local_58 = 0;
        uVar7 = uVar8;
        do {
          local_res20 = *(UObject **)((longlong)param_2 + uVar8 * 8);
          local_50 = (TObjectPtr<UClass>_u_0)
                     ((TObjectPtr<UClass>_u_0 *)((longlong)puVar11 + lVar13))->DebugPtr;
          local_res10 = (FTrackInstancePropertyBindings *)*puVar11;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (local_50.DebugPtr != (UClass *)0x0)) {
            GC::MarkAsReachable((UObject *)local_50.DebugPtr);
          }
          local_48 = (UObject **)
                     CONCAT71(local_48._1_7_,*(undefined1 *)((longlong)puVar11 + lVar13 + 8));
          FObjectPropertyTraits::SetObjectPropertyValue
                    (local_res20,(FObjectMetadata *)&local_50.ObjectPtr,local_res10,
                     (FObjectComponent *)((longlong)(int)uVar7 * 0x10 + (longlong)param_5));
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar8 = uVar8 + 1;
          puVar11 = puVar11 + 2;
        } while ((longlong)uVar8 < (longlong)uVar10);
      }
    }
    else {
      uVar7 = 0;
      uVar8 = uVar7;
      if (uVar10 != 0) {
        do {
          uVar12 = *(ushort *)(local_58 + uVar7 * 2);
          local_res20 = *(UObject **)((longlong)param_2 + uVar7 * 8);
          local_res10 = (FTrackInstancePropertyBindings *)CONCAT62(local_res10._2_6_,uVar12);
          if (uVar12 == 0) {
            local_50.DebugPtr = (UClass *)&local_res10;
            local_48 = &local_res20;
            bVar5 = `UE::MovieScene::
                    TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
                    ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_50);
            if (bVar5) {
              uVar12 = (ushort)local_res10;
              goto LAB_14667d52b;
            }
          }
          else {
LAB_14667d52b:
            local_68 = *(TObjectPtr<UClass>_u_0 *)param_4;
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (local_68.DebugPtr != (UClass *)0x0)) {
              GC::MarkAsReachable((UObject *)local_68.DebugPtr);
            }
            local_60 = *(undefined1 *)((longlong)param_4 + 8);
            FObjectPropertyTraits::SetObjectPropertyValue
                      (local_res20,(FObjectMetadata *)&local_68.ObjectPtr,uVar12,
                       (FObjectComponent *)((longlong)(int)uVar8 * 0x10 + (longlong)param_5));
          }
          uVar7 = uVar7 + 1;
          param_4 = (TRead<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>)
                    ((longlong)param_4 + 0x10);
          uVar8 = (ulonglong)((int)uVar8 + 1);
        } while ((longlong)uVar7 < (longlong)uVar10);
      }
    }
  }
  else {
    iVar9 = 0;
    if (uVar10 != 0) {
      lVar13 = 0;
      do {
        TVar2 = *(TObjectPtr<UClass>_u_0 *)param_4;
        local_68.DebugPtr = (UClass *)((longlong)iVar9 * 0x10 + (longlong)param_5);
        local_58 = *(undefined8 *)((longlong)param_2 + lVar13 * 8);
        uVar12 = *(ushort *)local_res20;
        iVar1 = (this->CustomAccessors).Stride;
        puVar3 = (this->CustomAccessors).Base;
        if ((GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
          GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        uVar6 = *(undefined1 *)((longlong)param_4 + 8);
        pcVar4 = *(code **)(puVar3 + (longlong)(int)((uint)uVar12 * iVar1) + 0x20);
        local_res10 = (FTrackInstancePropertyBindings *)CONCAT71(local_res10._1_7_,uVar6);
        local_50 = TVar2;
        if ((GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
          GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          uVar6 = local_res10._0_1_;
        }
        local_48 = (UObject **)CONCAT71(local_48._1_7_,uVar6);
        (*pcVar4)(local_58,&local_50,local_68.DebugPtr);
        iVar9 = iVar9 + 1;
        local_res20 = (UObject *)&local_res20->field_0x2;
        lVar13 = lVar13 + 1;
        param_4 = (TRead<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>)
                  ((longlong)param_4 + 0x10);
      } while (lVar13 < (longlong)uVar10);
    }
  }
  return;
}

// ForEachEntity @ 1466813d0

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
::ForEachEntity(TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FBoolMetaData *param_3,bool param_4)

{
  FTrackInstancePropertyBindings::CallFunction<bool>(param_2->Object,param_1,param_4);
  return;
}

// ForEachEntity @ 1466813f0

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
::ForEachEntity(TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
                *this,UObject *param_1,ushort param_2,FBoolMetaData *param_3,bool param_4)

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
            TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_18);
    if (!bVar1) {
      return;
    }
  }
  FBoolPropertyTraits::SetObjectPropertyValue(local_res10,*param_3,local_res18[0],param_4);
  return;
}

// ForEachEntity @ 146681460

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
::ForEachEntity(TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
                *this,UObject *param_1,FCustomPropertyIndex param_2,FBoolMetaData *param_3,
               bool param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       *(code **)((this->CustomAccessors).Base +
                 (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000146681487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*param_3,param_4,UNRECOVERED_JUMPTABLE);
  return;
}

// ForEachEntity @ 146681490

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
ForEachEntity(TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
              *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
             double param_3)

{
  FTrackInstancePropertyBindings::CallFunction<float>(param_2->Object,param_1,(float)param_3);
  return;
}

// ForEachEntity @ 1466814b0

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
ForEachEntity(TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
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
            TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
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

// ForEachEntity @ 146681520

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
ForEachEntity(TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
              *this,UObject *param_1,FCustomPropertyIndex param_2,double param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  
  lVar1 = (longlong)(int)((uint)param_2.Value * (this->CustomAccessors).Stride);
  UNRECOVERED_JUMPTABLE = *(code **)((this->CustomAccessors).Base + lVar1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014668153e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,(float)param_3,lVar1,UNRECOVERED_JUMPTABLE);
  return;
}

// ForEachEntity @ 146681550

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
::ForEachEntity(TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
                *this,UObject *param_1,TSharedPtr<FTrackInstancePropertyBindings,1> *param_2,
               FObjectMetadata *param_3,FObjectComponent *param_4)

{
  FTrackInstancePropertyBindings *pFVar1;
  TObjectPtr<UClass>_u_0 local_18;
  undefined1 local_10;
  
  local_18.ObjectPtr.field0_0x0 = (FObjectPtr)(param_3->ObjectClass).field0_0x0.DebugPtr;
  pFVar1 = param_2->Object;
  if ((GC::GIsIncrementalReachabilityPending) && (local_18.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_18.DebugPtr);
  }
  local_10 = param_3->bAllowsClear;
  FObjectPropertyTraits::SetObjectPropertyValue
            (param_1,(FObjectMetadata *)&local_18.ObjectPtr,pFVar1,param_4);
  return;
}

// ForEachEntity @ 1466815c0

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
::ForEachEntity(TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
                *this,UObject *param_1,ushort param_2,FObjectMetadata *param_3,
               FObjectComponent *param_4)

{
  ushort uVar1;
  bool bVar2;
  UObject *local_res10;
  ushort local_res18 [8];
  TObjectPtr<UClass>_u_0 local_18;
  UObject **local_10;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 == 0) {
    local_18.DebugPtr = (UClass *)local_res18;
    local_10 = &local_res10;
    bVar2 = `UE::MovieScene::
            TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
            ::ForEachEntity'::__l3::<lambda_1>::operator()(&local_18);
    if (!bVar2) {
      return;
    }
  }
  uVar1 = local_res18[0];
  local_18.ObjectPtr.field0_0x0 = (FObjectPtr)(param_3->ObjectClass).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_18.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_18.DebugPtr);
  }
  local_10 = (UObject **)CONCAT71(local_10._1_7_,param_3->bAllowsClear);
  FObjectPropertyTraits::SetObjectPropertyValue
            (local_res10,(FObjectMetadata *)&local_18.ObjectPtr,uVar1,param_4);
  return;
}

// ForEachEntity @ 146681650

void __thiscall
UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
::ForEachEntity(TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
                *this,UObject *param_1,FCustomPropertyIndex param_2,FObjectMetadata *param_3,
               FObjectComponent *param_4)

{
  bool bVar1;
  int iVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  uchar *puVar4;
  code *pcVar5;
  TObjectPtr<UClass>_u_0 local_18;
  undefined1 local_10;
  
  TVar3 = (TObjectPtr<UClass>_u_0)(param_3->ObjectClass).field0_0x0.DebugPtr;
  iVar2 = (this->CustomAccessors).Stride;
  puVar4 = (this->CustomAccessors).Base;
  if ((GC::GIsIncrementalReachabilityPending) && (TVar3.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  bVar1 = param_3->bAllowsClear;
  pcVar5 = *(code **)(puVar4 + (longlong)(int)((uint)param_2.Value * iVar2) + 0x20);
  local_18 = TVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  local_10 = bVar1;
  (*pcVar5)(param_1,&local_18,param_4);
  return;
}

// operator() @ 1504efda0

bool __thiscall
`UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
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
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929513>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929513>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetPropertyValuesImpl<UE::MovieScene::FBoolPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>::ForEachEntity(UObject*___ptr64,unsigned_short,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData_const&___ptr64,bool)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504efe20;
    }
  }
  bVar2 = false;
LAB_1504efe20:
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

// operator() @ 1504efe50

bool __thiscall
`UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::
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
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929513>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929513>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>::ForEachEntity(UObject*___ptr64,unsigned_short,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504efed0;
    }
  }
  bVar2 = false;
LAB_1504efed0:
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

// operator() @ 1504eff00

bool __thiscall
`UE::MovieScene::
TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
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
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4018961023837929513>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4018961023837929513>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::TSetPropertyValuesImpl<UE::MovieScene::FObjectPropertyTraits,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>::ForEachEntity(UObject*___ptr64,unsigned_short,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata_const&___ptr64,UE::MovieScene::FObjectComponent_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504eff80;
    }
  }
  bVar2 = false;
LAB_1504eff80:
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

