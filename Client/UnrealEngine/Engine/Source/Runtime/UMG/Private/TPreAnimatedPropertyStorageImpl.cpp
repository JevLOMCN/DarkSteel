// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// AsPropertyStorage @ 14690c380

IPreAnimatedObjectPropertyStorage * __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::AsPropertyStorage(TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
                    *this)

{
  IPreAnimatedObjectPropertyStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectPropertyStorage *)&this->_padding_;
  if (this == (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectPropertyStorage *)0x0;
  }
  return pIVar1;
}

// AsPropertyStorage @ 14690c3a0

IPreAnimatedObjectPropertyStorage * __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::AsPropertyStorage(TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
                    *this)

{
  IPreAnimatedObjectPropertyStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectPropertyStorage *)&this->_padding_;
  if (this == (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectPropertyStorage *)0x0;
  }
  return pIVar1;
}

// BeginTrackingEntities @ 14690c770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::BeginTrackingEntities
          (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4,
          TRead<FMovieScenePropertyBinding> param_5)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int local_res10;
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  UObject *local_68;
  FPreAnimatedEntityCaptureSource *local_60;
  FPreAnimatedStateEntry local_58;
  FWeakObjectPtr local_48;
  undefined8 local_40;
  
  bVar1 = param_1->bWantsRestoreState;
  iVar2 = param_1->Num;
  if (((((FPreAnimatedStateExtension *)this[-1]._padding_)->NumRequestsForGlobalState != 0) ||
      (bVar1 != false)) &&
     (local_60 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           ((FPreAnimatedStateExtension *)this[-1]._padding_), 0 < iVar2)) {
    lVar4 = 0;
    puVar5 = (undefined8 *)((longlong)param_5 + 8);
    do {
      pUVar3 = *(UObject **)((longlong)param_4 + lVar4 * 8);
      if (pUVar3 != (UObject *)0x0) {
        local_48.ObjectIndex = 0;
        local_48.ObjectSerialNumber = 0;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        local_70.ObjectIndex = 0;
        local_70.ObjectSerialNumber = 0;
        local_68 = pUVar3;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_68);
        local_48 = local_70;
        local_40 = *puVar5;
        FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                  ((FBoundObjectPreAnimatedStateTraits *)&this[-1].MetaDataComponents.ArrayNum,
                   (UObject *)&local_res10);
        TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
        ::GetOrCreateStorageIndex
                  ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
                    *)&this[-1]._padding_,(TTuple<FObjectKey,FName> *)local_78);
        local_58.GroupHandle.Value = local_res10;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
        local_58.ValueHandle.StorageIndex.Value = local_78._0_4_;
        FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                  (local_60,&local_58,(FMovieSceneEntityID)*(ushort *)param_2,
                   *(FRootInstanceHandle *)param_3,bVar1);
      }
      lVar4 = lVar4 + 1;
      puVar5 = (undefined8 *)((longlong)puVar5 + 0x14);
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar4 < iVar2);
  }
  return;
}

// BeginTrackingEntities @ 14690c920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::BeginTrackingEntities
          (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4,
          TRead<FMovieScenePropertyBinding> param_5)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int local_res10;
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  UObject *local_68;
  FPreAnimatedEntityCaptureSource *local_60;
  FPreAnimatedStateEntry local_58;
  FWeakObjectPtr local_48;
  undefined8 local_40;
  
  bVar1 = param_1->bWantsRestoreState;
  iVar2 = param_1->Num;
  if (((((FPreAnimatedStateExtension *)this[-1]._padding_)->NumRequestsForGlobalState != 0) ||
      (bVar1 != false)) &&
     (local_60 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           ((FPreAnimatedStateExtension *)this[-1]._padding_), 0 < iVar2)) {
    lVar4 = 0;
    puVar5 = (undefined8 *)((longlong)param_5 + 8);
    do {
      pUVar3 = *(UObject **)((longlong)param_4 + lVar4 * 8);
      if (pUVar3 != (UObject *)0x0) {
        local_48.ObjectIndex = 0;
        local_48.ObjectSerialNumber = 0;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        local_70.ObjectIndex = 0;
        local_70.ObjectSerialNumber = 0;
        local_68 = pUVar3;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_68);
        local_48 = local_70;
        local_40 = *puVar5;
        FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                  ((FBoundObjectPreAnimatedStateTraits *)&this[-1].MetaDataComponents.ArrayNum,
                   (UObject *)&local_res10);
        TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
        ::GetOrCreateStorageIndex
                  ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
                    *)&this[-1]._padding_,(TTuple<FObjectKey,FName> *)local_78);
        local_58.GroupHandle.Value = local_res10;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
        local_58.ValueHandle.StorageIndex.Value = local_78._0_4_;
        FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                  (local_60,&local_58,(FMovieSceneEntityID)*(ushort *)param_2,
                   *(FRootInstanceHandle *)param_3,bVar1);
      }
      lVar4 = lVar4 + 1;
      puVar5 = (undefined8 *)((longlong)puVar5 + 0x14);
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar4 < iVar2);
  }
  return;
}

// CachePreAnimatedValues @ 14690e610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::CachePreAnimatedValues
          (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FCachePreAnimatedValueParams *param_1,FEntityAllocationProxy *param_2,
          TRead<UObject_*> param_3,TRead<FMovieScenePropertyBinding> param_4,
          TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
          *param_5)

{
  byte *pbVar1;
  uchar uVar2;
  UObject *pUVar3;
  FPreAnimatedStateExtension *this_00;
  code *pcVar4;
  double dVar5;
  FPreAnimatedStorageIndex FVar6;
  bool bVar7;
  EPreAnimatedStorageRequirement EVar8;
  bool bVar9;
  FEntityAllocation *pFVar10;
  ulonglong uVar11;
  TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar12;
  longlong lVar13;
  double *pdVar14;
  FResolvedPropertyAndFunction *this_01;
  FMargin *pFVar15;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *pTVar16;
  longlong lVar17;
  undefined8 *puVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188;
  undefined1 local_187 [7];
  ulonglong *local_180;
  FPreAnimatedStorageIndex local_170 [2];
  ulonglong local_168;
  FPreAnimatedStorageIndex local_160 [2];
  undefined1 local_158 [8];
  FPreAnimatedStateEntry local_150;
  FWeakObjectPtr local_140;
  FWeakObjectPtr local_138;
  undefined8 *local_130;
  ushort *local_128;
  FPreAnimatedStateEntry local_120;
  undefined1 local_110 [8];
  FWeakObjectPtr local_108;
  undefined8 local_100;
  UObject *local_f8;
  UObject *local_f0;
  longlong local_e8;
  longlong local_e0;
  ushort *local_d8;
  ulonglong *local_d0;
  FCachePreAnimatedValueParams *local_c8;
  TTuple<FObjectKey,FName> local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [16];
  double local_80;
  double dStack_78;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_c8 = param_1;
  pFVar10 = FEntityAllocationProxy::GetAllocation(param_2);
  local_e8 = *(longlong *)&(param_5->Data).field_0x8;
  local_128 = *(ushort **)&param_5->Data;
  local_180 = *(ulonglong **)&(param_5->Data).field_0x10;
  uVar11 = (ulonglong)pFVar10->Size;
  if (uVar11 != 0) {
    lVar17 = 0;
    puVar18 = (undefined8 *)((longlong)param_4 + 8);
    local_e0 = local_e8 - (longlong)local_128;
    local_168 = uVar11;
    local_d8 = local_128;
    local_d0 = local_180;
    do {
      pUVar3 = *(UObject **)((longlong)param_3 + lVar17 * 8);
      if (pUVar3 == (UObject *)0x0) goto LAB_14690ec61;
      local_130 = puVar18;
      if (*(int *)this[-1]._padding_ == 0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        local_140.ObjectIndex = 0;
        local_140.ObjectSerialNumber = 0;
        local_f8 = pUVar3;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_f8);
        local_c0._0_4_ = local_140.ObjectIndex;
        local_c0._4_4_ = local_140.ObjectSerialNumber;
        local_c0._8_8_ = *puVar18;
        FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                  ((FBoundObjectPreAnimatedStateTraits *)&this[-1].MetaDataComponents.ArrayNum,
                   (UObject *)local_158);
        pTVar12 = TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                          *)&this[-1]._padding_,&local_c0);
        uVar11 = local_168;
        if (pTVar12 ==
            (TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
          local_120.GroupHandle.Value = local_158._0_4_;
          local_120.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
          local_120.ValueHandle.StorageIndex.Value = -1;
        }
        else {
          local_120.ValueHandle.StorageIndex.Value = *(int *)&pTVar12->field_0x10;
          local_120.GroupHandle.Value = local_158._0_4_;
          local_120.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
          if (local_120.ValueHandle.StorageIndex.Value != -1) {
            bVar9 = FPreAnimatedStateExtension::MetaDataExists
                              ((FPreAnimatedStateExtension *)this[-1]._padding_,&local_120);
            if (bVar9) {
LAB_14690e7b9:
              bVar9 = true;
            }
            else {
              local_188 = bVar9;
              bVar7 = `UE::MovieScene::
                      TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
                      ::ShouldTrackCaptureSource<UObject_*_&,FName_const_&>'::__l11::<lambda_1>::
                      operator()(&local_188);
              bVar9 = false;
              if (bVar7) goto LAB_14690e7b9;
            }
            uVar11 = local_168;
            if (bVar9) goto LAB_14690e7c3;
          }
        }
      }
      else {
LAB_14690e7c3:
        local_108.ObjectIndex = 0;
        local_108.ObjectSerialNumber = 0;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        local_138.ObjectIndex = 0;
        local_138.ObjectSerialNumber = 0;
        local_f0 = pUVar3;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_f0);
        local_108 = local_138;
        local_100 = *local_130;
        FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                  ((FBoundObjectPreAnimatedStateTraits *)&this[-1].MetaDataComponents.ArrayNum,
                   (UObject *)local_110);
        TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
        ::GetOrCreateStorageIndex
                  ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
                    *)&this[-1]._padding_,(TTuple<FObjectKey,FName> *)(local_110 + 4));
        this_00 = (FPreAnimatedStateExtension *)this[-1]._padding_;
        local_150.GroupHandle.Value = local_110._0_4_;
        local_150.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
        local_150.ValueHandle.StorageIndex.Value = local_110._4_4_;
        if (this_00->NumRequestsForGlobalState == 0) {
          if ((local_110._4_4_ == -1) ||
             (bVar9 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_150), !bVar9)) {
            local_187[0] = 0;
            `UE::MovieScene::
            TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
            ::TrackCaptureSource'::__l5::<lambda_1>::operator()(local_187);
          }
        }
        else {
          FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_150);
        }
        EVar8 = FPreAnimatedStateExtension::GetStorageRequirement
                          ((FPreAnimatedStateExtension *)this[-1]._padding_,&local_150);
        FVar6.Value = local_150.ValueHandle.StorageIndex.Value;
        local_160[0].Value = local_150.ValueHandle.StorageIndex.Value;
        if ((local_150.ValueHandle.StorageIndex.Value == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StorageIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                               ,0x1b6,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar13 = (longlong)FVar6.Value * 0x50 + this[-1]._padding_;
        if (EVar8 == Persistent) {
          bVar9 = (*(byte *)(lVar13 + 0x48) & 1) == 0;
LAB_14690e91d:
          if (bVar9) {
            local_70._padding_ = 0;
            local_70._padding_ = 0;
            local_70._16_8_ = 0;
            local_90 = ZEXT816(0);
            local_80 = 0.0;
            dStack_78 = 0.0;
            if (local_e8 == 0) {
              if (local_d8 != (ushort *)0x0) {
                local_70._padding_ =
                     (longlong)(int)((uint)*local_128 * *(int *)((longlong)&this->_padding_ + 4)) +
                     this->_padding_;
                pdVar14 = (double *)(**(code **)(local_70._padding_ + 0x18))(local_b0);
                dVar5 = *pdVar14;
                dVar19 = pdVar14[1];
                local_80 = pdVar14[2];
                dStack_78 = pdVar14[3];
                goto LAB_14690ea8b;
              }
              if (local_d0 != (ulonglong *)0x0) {
                local_70._padding_ = *local_180;
                local_70._padding_ = local_180[1];
                if (local_70._padding_ != 0) {
                  LOCK();
                  *(int *)(local_70._padding_ + 8U) = *(int *)(local_70._padding_ + 8U) + 1;
                  UNLOCK();
                }
                fVar20 = 0.0;
                fVar21 = 0.0;
                fVar22 = 0.0;
                fVar23 = 0.0;
                local_70._16_8_ = 2;
                this_01 = FTrackInstancePropertyBindings::FindOrAdd
                                    ((FTrackInstancePropertyBindings *)*local_180,
                                     *(UObject **)((longlong)param_3 + lVar17 * 8));
                uVar2 = (this_01->ResolvedProperty).TypeIndex;
                if (uVar2 == '\0') {
                  pFVar15 = FCachedProperty::GetPropertyAddress<FMargin>((FCachedProperty *)this_01)
                  ;
LAB_14690ea44:
                  if (pFVar15 != (FMargin *)0x0) {
                    fVar20 = pFVar15->Left;
                    fVar21 = pFVar15->Top;
                    fVar22 = pFVar15->Right;
                    fVar23 = pFVar15->Bottom;
                  }
                }
                else if (uVar2 == '\x01') {
                  pFVar15 = FVolatileProperty::ResolvePropertySteps
                                      ((FVolatileProperty *)this_01,false);
                  goto LAB_14690ea44;
                }
                dVar19 = (double)fVar21;
                local_80 = (double)fVar22;
                dStack_78 = (double)fVar23;
                dVar5 = (double)fVar20;
                goto LAB_14690ea8b;
              }
            }
            else {
              local_70._16_8_ = 1;
              uVar11 = (ulonglong)*(ushort *)(local_e0 + (longlong)local_128);
              lVar13 = *(longlong *)((longlong)param_3 + lVar17 * 8);
              local_70._padding_ = (longlong)*(ushort *)(local_e0 + (longlong)local_128);
              dVar19 = (double)*(float *)(lVar13 + 4 + uVar11);
              local_80 = (double)*(float *)(lVar13 + 8 + uVar11);
              dStack_78 = (double)*(float *)(lVar13 + 0xc + uVar11);
              dVar5 = (double)*(float *)(lVar13 + uVar11);
LAB_14690ea8b:
              local_90._8_4_ = SUB84(dVar19,0);
              local_90._0_8_ = dVar5;
              local_90._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
            }
            local_170[0].Value = local_150.ValueHandle.StorageIndex.Value;
            if ((local_150.ValueHandle.StorageIndex.Value == -1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StorageIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                   ,0x195,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar13 = (longlong)local_170[0].Value * 0x50 + this[-1]._padding_;
            if (EVar8 == Persistent) {
              if (((*(byte *)(lVar13 + 0x48) & 1) != 0) &&
                 (bVar9 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<3111672766223352219>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                     ,0x19b,"!CachedData.bInitialized"), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(undefined8 *)(lVar13 + 0x10) = local_90._0_8_;
              *(undefined8 *)(lVar13 + 0x18) = local_90._8_8_;
              *(double *)(lVar13 + 0x20) = local_80;
              *(double *)(lVar13 + 0x28) = dStack_78;
              TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::operator=((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                           *)(lVar13 + 0x30),&local_70);
              *(byte *)(lVar13 + 0x48) = *(byte *)(lVar13 + 0x48) | 3;
            }
            else if (EVar8 == Transient) {
              if ((*(byte *)(lVar13 + 0x48) & 1) != 0) {
                pTVar16 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                          ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                  *)&this[-1]._padding_,local_170);
                if ((pTVar16 !=
                     (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)0x0) &&
                   (bVar9 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<3111672766223352226>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                       ,0x1a2,
                                       "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                                      ), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if ((*(byte *)(lVar13 + 0x48) & 1) != 0) {
                  TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ::
                  Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
                            ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                              *)&this[-1]._padding_,local_170,
                             (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)
                             local_90);
                  goto LAB_14690ebbd;
                }
              }
              *(undefined8 *)(lVar13 + 0x10) = local_90._0_8_;
              *(undefined8 *)(lVar13 + 0x18) = local_90._8_8_;
              *(double *)(lVar13 + 0x20) = local_80;
              *(double *)(lVar13 + 0x28) = dStack_78;
              TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::operator=((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                           *)(lVar13 + 0x30),&local_70);
              *(byte *)(lVar13 + 0x48) = *(byte *)(lVar13 + 0x48) | 1;
            }
LAB_14690ebbd:
            uVar11 = local_70._16_8_ & 0xff;
            if ((2 < local_70.TypeIndex) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar11] !=
                Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::
                Destruct) {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar11])(&local_70);
            }
          }
        }
        else if ((EVar8 == Transient) && ((*(byte *)(lVar13 + 0x48) & 3) != 1)) {
          pTVar16 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            *)&this[-1]._padding_,local_160);
          bVar9 = pTVar16 == (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)0x0;
          goto LAB_14690e91d;
        }
        uVar11 = local_168;
        puVar18 = local_130;
        if (local_c8->bForcePersist != false) {
          lVar13 = (longlong)local_150.ValueHandle.StorageIndex.Value;
          if ((local_150.ValueHandle.StorageIndex.Value == -1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StorageIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                 ,0x200,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pbVar1 = (byte *)(lVar13 * 0x50 + 0x48 + this[-1]._padding_);
          *pbVar1 = *pbVar1 | 2;
          uVar11 = local_168;
          puVar18 = local_130;
        }
      }
LAB_14690ec61:
      local_128 = local_128 + 1;
      puVar18 = (undefined8 *)((longlong)puVar18 + 0x14);
      local_180 = local_180 + 2;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (longlong)uVar11);
  }
  return;
}

// CachePreAnimatedValues @ 14690ecf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::CachePreAnimatedValues
          (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FCachePreAnimatedValueParams *param_1,FEntityAllocationProxy *param_2,
          TRead<UObject_*> param_3,TRead<FMovieScenePropertyBinding> param_4,
          TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
          *param_5)

{
  byte *pbVar1;
  uchar uVar2;
  UObject *pUVar3;
  FPreAnimatedStateExtension *this_00;
  code *pcVar4;
  double *pdVar5;
  FPreAnimatedStorageIndex FVar6;
  bool bVar7;
  EPreAnimatedStorageRequirement EVar8;
  FEntityAllocation *pFVar9;
  ulonglong uVar10;
  TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar11;
  longlong lVar12;
  undefined4 *puVar13;
  FResolvedPropertyAndFunction *this_01;
  FWidgetTransform *pFVar14;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *pTVar15;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
  *pTVar16;
  ulonglong *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auStackY_288 [32];
  undefined1 local_258;
  undefined1 local_257 [7];
  FPreAnimatedStorageIndex local_250 [2];
  ushort *local_248;
  ulonglong local_238;
  undefined1 local_230 [8];
  FPreAnimatedStorageIndex local_228 [2];
  FPreAnimatedStateEntry local_220;
  FWeakObjectPtr local_210;
  FWeakObjectPtr local_208;
  FPreAnimatedStateEntry local_200;
  undefined1 local_1f0 [8];
  FWeakObjectPtr local_1e8;
  undefined8 local_1e0;
  UObject *local_1d8;
  UObject *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  ushort *local_1b8;
  ulonglong *local_1b0;
  FCachePreAnimatedValueParams *local_1a8;
  TTuple<FObjectKey,FName> local_1a0;
  TVector2<double>_u_0 local_190;
  double local_180;
  double dStack_178;
  TVector2<double>_u_0 local_170;
  ulonglong local_160;
  undefined1 local_158 [104];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  TStack_b0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_1a8 = param_1;
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_2);
  local_1c8 = *(longlong *)&(param_5->Data).field_0x8;
  local_248 = *(ushort **)&param_5->Data;
  puVar17 = *(ulonglong **)&(param_5->Data).field_0x10;
  uVar10 = (ulonglong)pFVar9->Size;
  if (uVar10 != 0) {
    puVar18 = (undefined8 *)((longlong)param_4 + 8);
    lVar19 = 0;
    local_1c0 = local_1c8 - (longlong)local_248;
    local_238 = uVar10;
    local_1b8 = local_248;
    local_1b0 = puVar17;
    do {
      pUVar3 = *(UObject **)((longlong)param_3 + lVar19 * 8);
      if (pUVar3 != (UObject *)0x0) {
        if (*(int *)this[-1]._padding_ == 0) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar3);
          }
          local_210.ObjectIndex = 0;
          local_210.ObjectSerialNumber = 0;
          local_1d8 = pUVar3;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=(&local_210,(FObjectPtr)&local_1d8);
          local_1a0._0_4_ = local_210.ObjectIndex;
          local_1a0._4_4_ = local_210.ObjectSerialNumber;
          local_1a0._8_8_ = *puVar18;
          FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                    ((FBoundObjectPreAnimatedStateTraits *)&this[-1].MetaDataComponents.ArrayNum,
                     (UObject *)local_230);
          pTVar11 = TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                            *)&this[-1]._padding_,&local_1a0);
          uVar10 = local_238;
          if (pTVar11 ==
              (TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
            local_200.GroupHandle.Value = local_230._0_4_;
            local_200.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
            local_200.ValueHandle.StorageIndex.Value = -1;
          }
          else {
            local_200.ValueHandle.StorageIndex.Value = *(int *)&pTVar11->field_0x10;
            local_200.GroupHandle.Value = local_230._0_4_;
            local_200.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
            if ((local_200.ValueHandle.StorageIndex.Value != -1) &&
               ((bVar7 = FPreAnimatedStateExtension::MetaDataExists
                                   ((FPreAnimatedStateExtension *)this[-1]._padding_,&local_200),
                bVar7 || (local_258 = bVar7,
                         bVar7 = `UE::MovieScene::
                                 TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
                                 ::ShouldTrackCaptureSource<UObject_*_&,FName_const_&>'::__l11::
                                 <lambda_1>::operator()(&local_258), uVar10 = local_238, bVar7))))
            goto LAB_14690eeae;
          }
        }
        else {
LAB_14690eeae:
          local_1e8.ObjectIndex = 0;
          local_1e8.ObjectSerialNumber = 0;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar3);
          }
          local_208.ObjectIndex = 0;
          local_208.ObjectSerialNumber = 0;
          local_1d0 = pUVar3;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=(&local_208,(FObjectPtr)&local_1d0);
          local_1e8 = local_208;
          local_1e0 = *puVar18;
          FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                    ((FBoundObjectPreAnimatedStateTraits *)&this[-1].MetaDataComponents.ArrayNum,
                     (UObject *)local_1f0);
          TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
          ::GetOrCreateStorageIndex
                    ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
                      *)&this[-1]._padding_,(TTuple<FObjectKey,FName> *)(local_1f0 + 4));
          this_00 = (FPreAnimatedStateExtension *)this[-1]._padding_;
          local_220.GroupHandle.Value = local_1f0._0_4_;
          local_220.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
          local_220.ValueHandle.StorageIndex.Value = local_1f0._4_4_;
          if (this_00->NumRequestsForGlobalState == 0) {
            if ((local_1f0._4_4_ == -1) ||
               (bVar7 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_220), !bVar7)) {
              local_257[0] = 0;
              `UE::MovieScene::
              TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
              ::TrackCaptureSource'::__l5::<lambda_1>::operator()(local_257);
            }
          }
          else {
            FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_220);
          }
          EVar8 = FPreAnimatedStateExtension::GetStorageRequirement
                            ((FPreAnimatedStateExtension *)this[-1]._padding_,&local_220);
          FVar6.Value = local_220.ValueHandle.StorageIndex.Value;
          local_228[0].Value = local_220.ValueHandle.StorageIndex.Value;
          if ((local_220.ValueHandle.StorageIndex.Value == -1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StorageIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                 ,0x1b6,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar12 = (longlong)FVar6.Value * 0x68 + this[-1]._padding_;
          if (EVar8 == Persistent) {
            bVar7 = (*(byte *)(lVar12 + 0x60) & 1) == 0;
LAB_14690f01b:
            if (bVar7) {
              local_b8 = 0;
              TStack_b0._padding_ = 0;
              TStack_b0._padding_ = 0;
              TStack_b0._16_8_ = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              local_d8 = 0.0;
              uStack_d0 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              if (local_1c8 == 0) {
                if (local_1b8 == (ushort *)0x0) {
                  if (local_1b0 == (ulonglong *)0x0) goto LAB_14690f28c;
                  TStack_b0._padding_ = *puVar17;
                  TStack_b0._padding_ = puVar17[1];
                  if (TStack_b0._padding_ != 0) {
                    LOCK();
                    *(int *)(TStack_b0._padding_ + 8U) = *(int *)(TStack_b0._padding_ + 8U) + 1;
                    UNLOCK();
                  }
                  uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
                  uVar21 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
                  uVar22 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
                  uVar23 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
                  uVar24 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X,0);
                  uVar25 = (undefined4)
                           ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._0_8_ >>
                           0x20);
                  fVar28 = 0.0;
                  uVar26 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y,0);
                  uVar27 = (undefined4)
                           ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._8_8_ >>
                           0x20);
                  local_190 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
                  TStack_b0._16_8_ = 2;
                  local_170 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
                  local_180 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
                  dStack_178 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
                  local_160 = local_160 & 0xffffffff00000000;
                  this_01 = FTrackInstancePropertyBindings::FindOrAdd
                                      ((FTrackInstancePropertyBindings *)*puVar17,
                                       *(UObject **)((longlong)param_3 + lVar19 * 8));
                  uVar2 = (this_01->ResolvedProperty).TypeIndex;
                  if (uVar2 == '\0') {
                    pFVar14 = FCachedProperty::GetPropertyAddress<FWidgetTransform>
                                        ((FCachedProperty *)this_01);
LAB_14690f219:
                    if (pFVar14 != (FWidgetTransform *)0x0) {
                      uVar24 = *(undefined4 *)&(pFVar14->Scale).field0_0x0;
                      uVar25 = *(undefined4 *)((longlong)&(pFVar14->Scale).field0_0x0 + 4);
                      local_180 = (pFVar14->Scale).field0_0x0._s_0.X;
                      pdVar5 = &(pFVar14->Scale).field0_0x0._s_0.Y;
                      uVar26 = *(undefined4 *)pdVar5;
                      uVar27 = *(undefined4 *)((longlong)&(pFVar14->Scale).field0_0x0 + 0xc);
                      dStack_178 = *pdVar5;
                      local_190._0_8_ = *(double *)&(pFVar14->Translation).field0_0x0;
                      local_190._8_8_ =
                           *(double *)((longlong)&(pFVar14->Translation).field0_0x0 + 8);
                      uVar20 = *(undefined4 *)&(pFVar14->Shear).field0_0x0;
                      uVar21 = *(undefined4 *)((longlong)&(pFVar14->Shear).field0_0x0 + 4);
                      uVar22 = *(undefined4 *)((longlong)&(pFVar14->Shear).field0_0x0 + 8);
                      uVar23 = *(undefined4 *)((longlong)&(pFVar14->Shear).field0_0x0 + 0xc);
                      local_170 = (pFVar14->Shear).field0_0x0;
                      local_160 = *(ulonglong *)&pFVar14->Angle;
                      fVar28 = (float)local_160;
                    }
                  }
                  else if (uVar2 == '\x01') {
                    pFVar14 = FVolatileProperty::ResolvePropertySteps
                                        ((FVolatileProperty *)this_01,false);
                    goto LAB_14690f219;
                  }
                  uStack_c0 = CONCAT44(uVar21,uVar20);
                  local_d8 = (double)fVar28;
                  uStack_d0 = CONCAT44(uVar25,uVar24);
                  local_c8 = CONCAT44(uVar27,uVar26);
                  local_b8 = CONCAT44(uVar23,uVar22);
                  uVar20 = local_190._0_4_;
                  uVar21 = local_190._4_4_;
                  uVar22 = local_190._8_4_;
                  uVar23 = local_190._12_4_;
                }
                else {
                  TStack_b0._padding_ =
                       (longlong)(int)((uint)*local_248 * *(int *)((longlong)&this->_padding_ + 4))
                       + this->_padding_;
                  puVar13 = (undefined4 *)(**(code **)(TStack_b0._padding_ + 0x18))(local_158);
                  local_d8 = *(double *)(puVar13 + 4);
                  uStack_d0 = *(undefined8 *)(puVar13 + 6);
                  local_c8 = *(undefined8 *)(puVar13 + 8);
                  uStack_c0 = *(undefined8 *)(puVar13 + 10);
                  local_f0 = *(undefined8 *)(puVar13 + 0xc);
                  uVar20 = *puVar13;
                  uVar21 = puVar13[1];
                  uVar22 = puVar13[2];
                  uVar23 = puVar13[3];
                  local_b8 = local_f0;
                }
                local_e8 = CONCAT44(uVar21,uVar20);
                uStack_e0 = CONCAT44(uVar23,uVar22);
              }
              else {
                TStack_b0._16_8_ = 1;
                uVar10 = (ulonglong)*(ushort *)((longlong)local_248 + local_1c0);
                lVar12 = *(longlong *)((longlong)param_3 + lVar19 * 8);
                TStack_b0._padding_ = (longlong)*(ushort *)((longlong)local_248 + local_1c0);
                local_e8 = *(undefined8 *)(uVar10 + lVar12);
                uStack_e0 = *(undefined8 *)(uVar10 + 8 + lVar12);
                local_d8 = (double)*(float *)(uVar10 + 0x30 + lVar12);
                uStack_d0 = *(undefined8 *)(uVar10 + 0x10 + lVar12);
                local_c8 = *(undefined8 *)(uVar10 + 0x18 + lVar12);
                uStack_c0 = *(undefined8 *)(uVar10 + 0x20 + lVar12);
                local_b8 = *(undefined8 *)(uVar10 + 0x28 + lVar12);
              }
LAB_14690f28c:
              local_250[0].Value = local_220.ValueHandle.StorageIndex.Value;
              if ((local_220.ValueHandle.StorageIndex.Value == -1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("StorageIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                     ,0x195,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar12 = (longlong)local_250[0].Value * 0x68 + this[-1]._padding_;
              if (EVar8 == Persistent) {
                if (((*(byte *)(lVar12 + 0x60) & 1) != 0) &&
                   (bVar7 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<3111672766223352219>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                       ,0x19b,"!CachedData.bInitialized"), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(undefined8 *)(lVar12 + 0x10) = local_e8;
                *(undefined8 *)(lVar12 + 0x18) = uStack_e0;
                *(double *)(lVar12 + 0x20) = local_d8;
                *(undefined8 *)(lVar12 + 0x28) = uStack_d0;
                *(undefined8 *)(lVar12 + 0x30) = local_c8;
                *(undefined8 *)(lVar12 + 0x38) = uStack_c0;
                *(undefined8 *)(lVar12 + 0x40) = local_b8;
                TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                ::operator=((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                             *)(lVar12 + 0x48),&TStack_b0);
                *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 3;
              }
              else if (EVar8 == Transient) {
                if ((*(byte *)(lVar12 + 0x60) & 1) != 0) {
                  pTVar15 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                    *)&this[-1]._padding_,local_250);
                  if ((pTVar15 !=
                       (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *)
                       0x0) && (bVar7 = Assert::Private::ExecCheckImplInternal
                                                  (&bGEnsureHasExecuted<3111672766223352226>,false,
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                                  ,0x1a2,
                                                  "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                                                  ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if ((*(byte *)(lVar12 + 0x60) & 1) != 0) {
                    pTVar16 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                              ::
                              AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                                        ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                          *)&this[-1]._padding_,local_250);
                    *(int *)pTVar16 = local_250[0].Value;
                    *(undefined8 *)&pTVar16->field_0x8 = local_e8;
                    *(undefined8 *)&pTVar16->field_0x10 = uStack_e0;
                    *(double *)&pTVar16->field_0x18 = local_d8;
                    *(undefined8 *)&pTVar16->field_0x20 = uStack_d0;
                    *(undefined8 *)&pTVar16->field_0x28 = local_c8;
                    *(undefined8 *)&pTVar16->field_0x30 = uStack_c0;
                    *(undefined8 *)&pTVar16->field_0x38 = local_b8;
                    uVar10 = TStack_b0._16_8_ & 0xff;
                    pTVar16->field_0x50 = TStack_b0.TypeIndex;
                    if ((2 < TStack_b0.TypeIndex) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                           ,0x105,L""), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                                  ::__l2::MoveConstructors)[uVar10] ==
                        Core::Private::
                        TMoveConstructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::
                        Construct) {
                      *(longlong *)&pTVar16->field_0x40 = TStack_b0._padding_;
                    }
                    else {
                      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                                  ::__l2::MoveConstructors)[uVar10])
                                (&pTVar16->field_0x40,&TStack_b0);
                    }
                    goto LAB_14690f352;
                  }
                }
                *(undefined8 *)(lVar12 + 0x10) = local_e8;
                *(undefined8 *)(lVar12 + 0x18) = uStack_e0;
                *(double *)(lVar12 + 0x20) = local_d8;
                *(undefined8 *)(lVar12 + 0x28) = uStack_d0;
                *(undefined8 *)(lVar12 + 0x30) = local_c8;
                *(undefined8 *)(lVar12 + 0x38) = uStack_c0;
                *(undefined8 *)(lVar12 + 0x40) = local_b8;
                TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                ::operator=((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                             *)(lVar12 + 0x48),&TStack_b0);
                *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
              }
LAB_14690f352:
              uVar10 = TStack_b0._16_8_ & 0xff;
              if ((2 < TStack_b0.TypeIndex) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar10] !=
                  Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>
                  ::Destruct) {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar10])(&TStack_b0);
              }
            }
          }
          else if ((EVar8 == Transient) && ((*(byte *)(lVar12 + 0x60) & 3) != 1)) {
            pTVar15 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                      ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                              *)&this[-1]._padding_,local_228);
            bVar7 = pTVar15 ==
                    (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *)0x0;
            goto LAB_14690f01b;
          }
          uVar10 = local_238;
          if (local_1a8->bForcePersist != false) {
            lVar12 = (longlong)local_220.ValueHandle.StorageIndex.Value;
            if ((local_220.ValueHandle.StorageIndex.Value == -1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StorageIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                   ,0x200,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pbVar1 = (byte *)(lVar12 * 0x68 + 0x60 + this[-1]._padding_);
            *pbVar1 = *pbVar1 | 2;
            uVar10 = local_238;
          }
        }
      }
      local_248 = local_248 + 1;
      lVar19 = lVar19 + 1;
      puVar18 = (undefined8 *)((longlong)puVar18 + 0x14);
      puVar17 = puVar17 + 2;
    } while (lVar19 < (longlong)uVar10);
  }
  return;
}

