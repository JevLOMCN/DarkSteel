// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// AsPropertyStorage @ 14d60ca90

IPreAnimatedObjectPropertyStorage * __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::AsPropertyStorage(TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
                    *this)

{
  IPreAnimatedObjectPropertyStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectPropertyStorage *)&this->_padding_;
  if (this == (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectPropertyStorage *)0x0;
  }
  return pIVar1;
}

// BeginTrackingEntities @ 14d60cf70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::BeginTrackingEntities
          (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
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
        TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
        ::GetOrCreateStorageIndex
                  ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
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

// CachePreAnimatedValues @ 14d60d750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::CachePreAnimatedValues
          (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FCachePreAnimatedValueParams *param_1,FEntityAllocationProxy *param_2,
          TRead<UObject_*> param_3,TRead<FMovieScenePropertyBinding> param_4,
          TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
          *param_5)

{
  byte *pbVar1;
  uchar uVar2;
  ushort uVar3;
  UObject *pUVar4;
  FPreAnimatedStateExtension *this_00;
  code *pcVar5;
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
  FCameraFramingZone *pFVar15;
  TPreAnimatedPropertyValue<FCameraFramingZone> *pTVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198;
  undefined1 local_197 [7];
  ulonglong *local_190;
  FPreAnimatedStorageIndex local_180 [2];
  ulonglong local_178;
  FPreAnimatedStorageIndex local_170 [2];
  undefined1 local_168 [8];
  FPreAnimatedStateEntry local_160;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  undefined8 *local_140;
  ushort *local_138;
  FPreAnimatedStateEntry local_130;
  undefined1 local_120 [8];
  FWeakObjectPtr local_118;
  undefined8 local_110;
  UObject *local_108;
  UObject *local_100;
  longlong local_f8;
  longlong local_f0;
  ushort *local_e8;
  ulonglong *local_e0;
  FCachePreAnimatedValueParams *local_d8;
  TTuple<FObjectKey,FName> local_d0;
  undefined1 local_c0 [32];
  TPreAnimatedPropertyValue<FCameraFramingZone> local_a0;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_d8 = param_1;
  pFVar10 = FEntityAllocationProxy::GetAllocation(param_2);
  local_f8 = *(longlong *)&(param_5->Data).field_0x8;
  local_138 = *(ushort **)&param_5->Data;
  local_190 = *(ulonglong **)&(param_5->Data).field_0x10;
  uVar11 = (ulonglong)pFVar10->Size;
  if (uVar11 != 0) {
    lVar17 = 0;
    puVar18 = (undefined8 *)((longlong)param_4 + 8);
    local_f0 = local_f8 - (longlong)local_138;
    local_178 = uVar11;
    local_e8 = local_138;
    local_e0 = local_190;
    do {
      pUVar4 = *(UObject **)((longlong)param_3 + lVar17 * 8);
      if (pUVar4 == (UObject *)0x0) goto LAB_14d60dd23;
      local_140 = puVar18;
      if (*(int *)this[-1]._padding_ == 0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_150.ObjectIndex = 0;
        local_150.ObjectSerialNumber = 0;
        local_108 = pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_108);
        local_d0._0_4_ = local_150.ObjectIndex;
        local_d0._4_4_ = local_150.ObjectSerialNumber;
        local_d0._8_8_ = *puVar18;
        FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                  ((FBoundObjectPreAnimatedStateTraits *)&this[-1].MetaDataComponents.ArrayNum,
                   (UObject *)local_168);
        pTVar12 = TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                          *)&this[-1]._padding_,&local_d0);
        uVar11 = local_178;
        if (pTVar12 ==
            (TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
          local_130.GroupHandle.Value = local_168._0_4_;
          local_130.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
          local_130.ValueHandle.StorageIndex.Value = -1;
        }
        else {
          local_130.ValueHandle.StorageIndex.Value = *(int *)&pTVar12->field_0x10;
          local_130.GroupHandle.Value = local_168._0_4_;
          local_130.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
          if (local_130.ValueHandle.StorageIndex.Value != -1) {
            bVar9 = FPreAnimatedStateExtension::MetaDataExists
                              ((FPreAnimatedStateExtension *)this[-1]._padding_,&local_130);
            if (bVar9) {
LAB_14d60d909:
              bVar9 = true;
            }
            else {
              local_198 = bVar9;
              bVar7 = `UE::MovieScene::
                      TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
                      ::ShouldTrackCaptureSource<UObject_*_&,FName_const_&>'::__l11::<lambda_1>::
                      operator()(&local_198);
              bVar9 = false;
              if (bVar7) goto LAB_14d60d909;
            }
            uVar11 = local_178;
            if (bVar9) goto LAB_14d60d913;
          }
        }
      }
      else {
LAB_14d60d913:
        local_118.ObjectIndex = 0;
        local_118.ObjectSerialNumber = 0;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_148.ObjectIndex = 0;
        local_148.ObjectSerialNumber = 0;
        local_100 = pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_100);
        local_118 = local_148;
        local_110 = *local_140;
        FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                  ((FBoundObjectPreAnimatedStateTraits *)&this[-1].MetaDataComponents.ArrayNum,
                   (UObject *)local_120);
        TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
        ::GetOrCreateStorageIndex
                  ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
                    *)&this[-1]._padding_,(TTuple<FObjectKey,FName> *)(local_120 + 4));
        this_00 = (FPreAnimatedStateExtension *)this[-1]._padding_;
        local_160.GroupHandle.Value = local_120._0_4_;
        local_160.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].MetaDataComponents.DataPtr;
        local_160.ValueHandle.StorageIndex.Value = local_120._4_4_;
        if (this_00->NumRequestsForGlobalState == 0) {
          if ((local_120._4_4_ == -1) ||
             (bVar9 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_160), !bVar9)) {
            local_197[0] = 0;
            `UE::MovieScene::
            TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
            ::TrackCaptureSource'::__l5::<lambda_1>::operator()(local_197);
          }
        }
        else {
          FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_160);
        }
        EVar8 = FPreAnimatedStateExtension::GetStorageRequirement
                          ((FPreAnimatedStateExtension *)this[-1]._padding_,&local_160);
        FVar6.Value = local_160.ValueHandle.StorageIndex.Value;
        local_170[0].Value = local_160.ValueHandle.StorageIndex.Value;
        if ((local_160.ValueHandle.StorageIndex.Value == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StorageIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                               ,0x1b6,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar13 = (longlong)FVar6.Value * 0x50 + this[-1]._padding_;
        if (EVar8 == Persistent) {
          bVar9 = (*(byte *)(lVar13 + 0x48) & 1) == 0;
LAB_14d60da6d:
          if (bVar9) {
            local_a0.Binding._17_4_ = 0;
            local_a0.Binding._padding_ = 0;
            local_a0.Binding._padding_ = 0;
            local_a0.Binding._21_2_ = 0;
            local_a0.Binding._23_1_ = 0;
            local_a0.Data.Left = 0.0;
            local_a0.Data.Top = 0.0;
            local_a0.Binding.TypeIndex = 0;
            local_a0.Data.Right = 0.0;
            local_a0.Data.Bottom = 0.0;
            if (local_f8 == 0) {
              if (local_e8 == (ushort *)0x0) {
                if (local_e0 != (ulonglong *)0x0) {
                  local_a0.Binding._padding_ = *local_190;
                  local_a0.Binding._padding_ = local_190[1];
                  if (local_a0.Binding._padding_ != 0) {
                    LOCK();
                    *(int *)(local_a0.Binding._padding_ + 8U) =
                         *(int *)(local_a0.Binding._padding_ + 8U) + 1;
                    UNLOCK();
                  }
                  uVar19 = 0;
                  uVar20 = 0;
                  uVar21 = 0;
                  uVar22 = 0;
                  uVar23 = 0;
                  uVar24 = 0;
                  uVar25 = 0;
                  uVar26 = 0;
                  local_a0.Binding.TypeIndex = 2;
                  this_01 = FTrackInstancePropertyBindings::FindOrAdd
                                      ((FTrackInstancePropertyBindings *)*local_190,
                                       *(UObject **)((longlong)param_3 + lVar17 * 8));
                  uVar2 = (this_01->ResolvedProperty).TypeIndex;
                  if (uVar2 == '\0') {
                    pFVar15 = FCachedProperty::GetPropertyAddress<FCameraFramingZone>
                                        ((FCachedProperty *)this_01);
LAB_14d60db61:
                    if (pFVar15 != (FCameraFramingZone *)0x0) {
                      uVar19 = *(undefined4 *)&pFVar15->Left;
                      uVar20 = *(undefined4 *)((longlong)&pFVar15->Left + 4);
                      uVar21 = *(undefined4 *)&pFVar15->Top;
                      uVar22 = *(undefined4 *)((longlong)&pFVar15->Top + 4);
                      uVar23 = *(undefined4 *)&pFVar15->Right;
                      uVar24 = *(undefined4 *)((longlong)&pFVar15->Right + 4);
                      uVar25 = *(undefined4 *)&pFVar15->Bottom;
                      uVar26 = *(undefined4 *)((longlong)&pFVar15->Bottom + 4);
                    }
                  }
                  else if (uVar2 == '\x01') {
                    pFVar15 = FVolatileProperty::ResolvePropertySteps
                                        ((FVolatileProperty *)this_01,false);
                    goto LAB_14d60db61;
                  }
                  local_a0.Data.Left = (double)CONCAT44(uVar20,uVar19);
                  local_a0.Data.Top = (double)CONCAT44(uVar22,uVar21);
                  local_a0.Data.Right = (double)CONCAT44(uVar24,uVar23);
                  local_a0.Data.Bottom = (double)CONCAT44(uVar26,uVar25);
                }
              }
              else {
                local_a0.Binding._padding_ =
                     (longlong)(int)((uint)*local_138 * *(int *)((longlong)&this->_padding_ + 4)) +
                     this->_padding_;
                pdVar14 = (double *)(**(code **)(local_a0.Binding._padding_ + 0x18))(local_c0);
                local_a0.Data.Left = *pdVar14;
                local_a0.Data.Top = pdVar14[1];
                local_a0.Data.Right = pdVar14[2];
                local_a0.Data.Bottom = pdVar14[3];
              }
            }
            else {
              local_a0.Binding.TypeIndex = 1;
              uVar3 = *(ushort *)(local_f0 + (longlong)local_138);
              lVar13 = *(longlong *)((longlong)param_3 + lVar17 * 8);
              local_a0.Binding._padding_ = (longlong)uVar3;
              pdVar14 = (double *)(lVar13 + (ulonglong)uVar3);
              local_a0.Data.Left = *pdVar14;
              local_a0.Data.Top = pdVar14[1];
              pdVar14 = (double *)(lVar13 + 0x10 + (ulonglong)uVar3);
              local_a0.Data.Right = *pdVar14;
              local_a0.Data.Bottom = pdVar14[1];
            }
            local_180[0].Value = local_160.ValueHandle.StorageIndex.Value;
            if ((local_160.ValueHandle.StorageIndex.Value == -1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StorageIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                   ,0x195,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar13 = (longlong)local_180[0].Value * 0x50 + this[-1]._padding_;
            if (EVar8 == Persistent) {
              if (((*(byte *)(lVar13 + 0x48) & 1) != 0) &&
                 (bVar9 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<3111672766223352219>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                     ,0x19b,"!CachedData.bInitialized"), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TPreAnimatedPropertyValue<FCameraFramingZone>::operator=
                        ((TPreAnimatedPropertyValue<FCameraFramingZone> *)(lVar13 + 0x10),&local_a0)
              ;
              *(byte *)(lVar13 + 0x48) = *(byte *)(lVar13 + 0x48) | 3;
            }
            else if (EVar8 == Transient) {
              if ((*(byte *)(lVar13 + 0x48) & 1) != 0) {
                pTVar16 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                          ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                  *)&this[-1]._padding_,local_180);
                if ((pTVar16 != (TPreAnimatedPropertyValue<FCameraFramingZone> *)0x0) &&
                   (bVar9 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<3111672766223352226>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                       ,0x1a2,
                                       "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if ((*(byte *)(lVar13 + 0x48) & 1) != 0) {
                  TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ::
                  Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>
                            ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                              *)&this[-1]._padding_,local_180,&local_a0);
                  goto LAB_14d60dc7c;
                }
              }
              TPreAnimatedPropertyValue<FCameraFramingZone>::operator=
                        ((TPreAnimatedPropertyValue<FCameraFramingZone> *)(lVar13 + 0x10),&local_a0)
              ;
              *(byte *)(lVar13 + 0x48) = *(byte *)(lVar13 + 0x48) | 1;
            }
LAB_14d60dc7c:
            uVar11 = (ulonglong)local_a0.Binding.TypeIndex;
            if ((2 < local_a0.Binding.TypeIndex) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar11] !=
                Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::
                Destruct) {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar11])(&local_a0.Binding);
            }
          }
        }
        else if ((EVar8 == Transient) && ((*(byte *)(lVar13 + 0x48) & 3) != 1)) {
          pTVar16 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            *)&this[-1]._padding_,local_170);
          bVar9 = pTVar16 == (TPreAnimatedPropertyValue<FCameraFramingZone> *)0x0;
          goto LAB_14d60da6d;
        }
        uVar11 = local_178;
        puVar18 = local_140;
        if (local_d8->bForcePersist != false) {
          lVar13 = (longlong)local_160.ValueHandle.StorageIndex.Value;
          if ((local_160.ValueHandle.StorageIndex.Value == -1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StorageIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                 ,0x200,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pbVar1 = (byte *)(lVar13 * 0x50 + 0x48 + this[-1]._padding_);
          *pbVar1 = *pbVar1 | 2;
          uVar11 = local_178;
          puVar18 = local_140;
        }
      }
LAB_14d60dd23:
      local_138 = local_138 + 1;
      puVar18 = (undefined8 *)((longlong)puVar18 + 0x14);
      local_190 = local_190 + 2;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (longlong)uVar11);
  }
  return;
}

