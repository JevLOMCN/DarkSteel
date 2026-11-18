// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// FPreAnimatedComponentTransformStorage @ 1466169e0

FPreAnimatedComponentTransformStorage * __thiscall
UE::MovieScene::FPreAnimatedComponentTransformStorage::FPreAnimatedComponentTransformStorage
          (FPreAnimatedComponentTransformStorage *this)

{
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  TVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FBuiltInComponentTypes *pFVar7;
  FMovieSceneTracksComponentTypes *pFVar8;
  FPreAnimatedComponentTransformStorage *pFVar9;
  undefined8 *puVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_18 [16];
  
  pFVar7 = FBuiltInComponentTypes::Get();
  pFVar8 = FMovieSceneTracksComponentTypes::Get();
  TVar1 = (pFVar8->ComponentTransform).CompositeID;
  uVar11 = 0;
  if ((int)TVar1 < (pFVar7->PropertyRegistry).Properties.ArrayNum) {
    uVar11 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FPreAnimatedComponentTransformStorage *)(*pcVar4)();
      return pFVar9;
    }
  }
  pFVar12 = (pFVar7->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar1 * 0x70;
  lVar2 = *(longlong *)(pFVar12 + 8);
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this =
       &
       ___7__TPreAnimatedStateStorage_U__TPreAnimatedPropertyTraits_UFComponentTransformPreAnimatedTraits_MovieScene_UE__U__TIntegerSequence_H_S____V_MovieScene_UE___MovieScene_UE__6B_
  ;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x44 = 0x80;
  *(undefined4 *)&this->field_0x48 = 0xffffffff;
  *(undefined4 *)&this->field_0x4c = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x94 = 0x80;
  *(undefined4 *)&this->field_0x98 = 0xffffffff;
  *(undefined4 *)&this->field_0x9c = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined4 *)&this->field_0xc0 = 0xffffffff;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(longlong *)&this->field_0xd8 = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined ***)this =
       &TPreAnimatedPropertyStorageImpl<UE::MovieScene::FComponentTransformPreAnimatedTraits,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
        ::
        _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>__
  ;
  *(undefined ***)&this->field_0xe0 =
       &TPreAnimatedPropertyStorageImpl<UE::MovieScene::FComponentTransformPreAnimatedTraits,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
        ::_vftable__for__UE__MovieScene__IPreAnimatedObjectPropertyStorage__;
  *(longlong *)&this->field_0xe8 = *(longlong *)(pFVar12 + 8);
  lVar2 = *(longlong *)(pFVar12 + 0x38);
  *(longlong *)&this->field_0xf0 = *(longlong *)(pFVar12 + 0x30);
  *(longlong *)&this->field_0xf8 = lVar2;
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  if (*(int *)&this->field_0xf8 != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetaDataComponents.Num() == sizeof...(MetaDataIndices)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedPropertyStorage.h"
                       ,0x9d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FPreAnimatedComponentTransformStorage *)(*pcVar4)();
      return pFVar9;
    }
  }
  plVar3 = *(longlong **)pFVar12;
  if (plVar3 != (longlong *)0x0) {
    puVar10 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_18);
    uVar5 = puVar10[1];
    *(undefined8 *)&this->field_0x100 = *puVar10;
    *(undefined8 *)&this->field_0x108 = uVar5;
  }
  *(undefined ***)this =
       &
       _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>__
  ;
  *(undefined ***)&this->field_0xe0 =
       &_vftable__for__UE__MovieScene__IPreAnimatedObjectPropertyStorage__;
  return this;
}

// CachePreAnimatedTransform @ 1466420a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedComponentTransformStorage::CachePreAnimatedTransform
          (FPreAnimatedComponentTransformStorage *this,FCachePreAnimatedValueParams *param_1,
          UObject *param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  EPreAnimatedStorageRequirement EVar4;
  double *pdVar5;
  FResolvedPropertyAndFunction *this_00;
  FIntermediate3DTransform *pFVar6;
  FName *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  undefined1 auStack_228 [32];
  FPreAnimatedStorageIndex local_208;
  FWeakObjectPtr local_200;
  undefined1 local_1f8 [8];
  TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  local_1f0;
  FPreAnimatedStateEntry local_1d0;
  FWeakObjectPtr local_1c0;
  FName local_1b8;
  UObject *local_1b0;
  FString local_1a8;
  FName local_198 [2];
  FCustomAccessorView local_188 [5];
  undefined8 local_138;
  undefined1 local_130 [72];
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_228;
  if ((param_2 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoundObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\PreAnimatedState\\MovieScenePreAnimatedComponentTransformStorage.cpp"
                         ,100,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&local_1a8,L"Transform");
    pFVar7 = ::FName::FName(local_198,"Transform");
    FMovieScenePropertyBinding::FMovieScenePropertyBinding(&::PropertyBinding,*pFVar7,&local_1a8);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    _Init_thread_footer(&::_TSS0);
  }
  local_188[0].Base = *(uchar **)&this->field_0x100;
  local_188[0].ViewNum = *(int *)&this->field_0x108;
  local_188[0].Stride = *(int *)&this->field_0x10c;
  FPropertyRegistry::ResolveProperty
            ((TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
              *)(local_1f8 + 8),param_2,&::PropertyBinding,local_188);
  if (local_1f0.bIsSet == false) {
    return;
  }
  local_1c0.ObjectIndex = 0;
  local_1c0.ObjectSerialNumber = 0;
  if (param_2 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    local_200.ObjectIndex = 0;
    local_200.ObjectSerialNumber = 0;
    local_1b0 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1b0);
    local_1c0 = local_200;
  }
  local_1b8 = ::PropertyBinding.PropertyPath;
  FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
            ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_1f8);
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>
  ::GetOrCreateStorageIndex
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>
              *)this,(TTuple<FObjectKey,FName> *)&local_208);
  local_1d0.GroupHandle.Value = local_1f8._0_4_;
  local_1d0.ValueHandle.TypeID.TypeID = (uint)StorageID;
  local_1d0.ValueHandle.StorageIndex.Value = local_208.Value;
  FPreAnimatedStateExtension::EnsureMetaData
            (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_1d0);
  EVar4 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_1d0);
  bVar3 = TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>
          ::IsStorageRequirementSatisfied
                    ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>
                      *)this,local_208,EVar4);
  if (bVar3) goto LAB_1466425c8;
  local_e8.Data.T_X = 0.0;
  local_e8.Data.T_Y = 0.0;
  local_e8.Data.T_Z = 0.0;
  local_e8.Data.R_X = 0.0;
  local_e8.Binding.TypeIndex = 0;
  local_e8.Data.R_Y = 0.0;
  local_e8.Data.R_Z = 0.0;
  local_e8.Data.S_X = 0.0;
  local_e8.Data.S_Y = 0.0;
  local_e8.Data.S_Z = 0.0;
  local_e8.Binding._padding_ = 0;
  if ((local_1f0.bIsSet == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_1f0.TypedValue.TypeIndex == 0) {
    uVar8 = (ulonglong)local_e8.Binding.TypeIndex;
    if ((2 < uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::Destruct)
    {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_e8.Binding);
    }
    uVar8 = (ulonglong)(ushort)local_1f0.TypedValue._padding_;
    local_e8.Binding._padding_ =
         CONCAT62(local_e8.Binding._padding_._2_6_,(ushort)local_1f0.TypedValue._padding_);
    local_e8.Binding.TypeIndex = 1;
    local_e8.Data.T_X = *(double *)(&param_2->field_0x0 + uVar8);
    local_e8.Data.T_Y = *(double *)((longlong)(&param_2->field_0x0 + uVar8) + 8);
    local_e8.Data.T_Z = *(double *)(&param_2->field_0x10 + uVar8);
    local_e8.Data.R_X = *(double *)((longlong)(&param_2->field_0x10 + uVar8) + 8);
    local_e8.Data.R_Y = *(double *)(&param_2->field_0x20 + uVar8);
    local_e8.Data.R_Z = *(double *)((longlong)(&param_2->field_0x20 + uVar8) + 8);
    local_e8.Data.S_X = *(double *)(&param_2[1].field_0x8 + uVar8);
    local_e8.Data.S_Y = *(double *)((longlong)(&param_2[1].field_0x8 + uVar8) + 8);
    uVar10 = (undefined4)*(undefined8 *)(&param_2[1].field_0x18 + uVar8);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(&param_2[1].field_0x18 + uVar8) >> 0x20);
  }
  else {
    if ((local_1f0.bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_1f0.TypedValue.TypeIndex == 1) {
      uVar8 = (ulonglong)local_e8.Binding.TypeIndex;
      lVar9 = (longlong)
              (int)((uint)(ushort)local_1f0.TypedValue._padding_ * *(int *)&this->field_0x10c) +
              *(longlong *)&this->field_0x100;
      if ((2 < uVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] !=
          Core::Private::TDestructorCaller<unsigned_short>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(&local_e8.Binding);
      }
      local_e8.Binding.TypeIndex = 0;
      local_e8.Binding._padding_ = lVar9;
      pdVar5 = (double *)(**(code **)(lVar9 + 0x18))(local_130,param_2);
      local_e8.Data.T_X = *pdVar5;
      local_e8.Data.T_Y = pdVar5[1];
      local_e8.Data.T_Z = pdVar5[2];
      local_e8.Data.R_X = pdVar5[3];
      local_e8.Data.R_Y = pdVar5[4];
      local_e8.Data.R_Z = pdVar5[5];
      local_e8.Data.S_X = pdVar5[6];
      local_e8.Data.S_Y = pdVar5[7];
      uVar10 = SUB84(pdVar5[8],0);
      uVar11 = (undefined4)((ulonglong)pdVar5[8] >> 0x20);
    }
    else {
      if ((local_1f0.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((local_1f0.TypedValue.TypeIndex != 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
      ::Set<TSharedPtr<FTrackInstancePropertyBindings,1>_>
                (&local_e8.Binding,(TSharedPtr<FTrackInstancePropertyBindings,1> *)(local_1f8 + 8));
      local_138 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      this_00 = FTrackInstancePropertyBindings::FindOrAdd
                          ((FTrackInstancePropertyBindings *)
                           CONCAT62(local_1f0.TypedValue._padding_._2_6_,
                                    (ushort)local_1f0.TypedValue._padding_),param_2);
      uVar1 = (this_00->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pFVar6 = FCachedProperty::GetPropertyAddress<UE::MovieScene::FIntermediate3DTransform>
                           ((FCachedProperty *)this_00);
LAB_146642506:
        if (pFVar6 == (FIntermediate3DTransform *)0x0) goto LAB_146642523;
        uVar12 = *(undefined4 *)&pFVar6->T_X;
        uVar13 = *(undefined4 *)((longlong)&pFVar6->T_X + 4);
        uVar14 = *(undefined4 *)&pFVar6->T_Y;
        uVar15 = *(undefined4 *)((longlong)&pFVar6->T_Y + 4);
        uVar16 = *(undefined4 *)&pFVar6->T_Z;
        uVar17 = *(undefined4 *)((longlong)&pFVar6->T_Z + 4);
        uVar18 = *(undefined4 *)&pFVar6->R_X;
        uVar19 = *(undefined4 *)((longlong)&pFVar6->R_X + 4);
        uVar20 = *(undefined4 *)&pFVar6->R_Y;
        uVar21 = *(undefined4 *)((longlong)&pFVar6->R_Y + 4);
        uVar22 = *(undefined4 *)&pFVar6->R_Z;
        uVar23 = *(undefined4 *)((longlong)&pFVar6->R_Z + 4);
        uVar24 = *(undefined4 *)&pFVar6->S_X;
        uVar25 = *(undefined4 *)((longlong)&pFVar6->S_X + 4);
        uVar26 = *(undefined4 *)&pFVar6->S_Y;
        uVar27 = *(undefined4 *)((longlong)&pFVar6->S_Y + 4);
        uVar10 = SUB84(pFVar6->S_Z,0);
        uVar11 = (undefined4)((ulonglong)pFVar6->S_Z >> 0x20);
      }
      else {
        if (uVar1 == '\x01') {
          pFVar6 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
          goto LAB_146642506;
        }
LAB_146642523:
        uVar10 = (undefined4)local_138;
        uVar11 = (undefined4)((ulonglong)local_138 >> 0x20);
      }
      local_e8.Data.T_X = (double)CONCAT44(uVar13,uVar12);
      local_e8.Data.T_Y = (double)CONCAT44(uVar15,uVar14);
      local_e8.Data.T_Z = (double)CONCAT44(uVar17,uVar16);
      local_e8.Data.R_X = (double)CONCAT44(uVar19,uVar18);
      local_e8.Data.R_Y = (double)CONCAT44(uVar21,uVar20);
      local_e8.Data.R_Z = (double)CONCAT44(uVar23,uVar22);
      local_e8.Data.S_X = (double)CONCAT44(uVar25,uVar24);
      local_e8.Data.S_Y = (double)CONCAT44(uVar27,uVar26);
    }
  }
  local_e8.Data.S_Z = (double)CONCAT44(uVar11,uVar10);
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>
  ::AssignPreAnimatedValue
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>
              *)this,local_208,EVar4,&local_e8);
  uVar8 = (ulonglong)local_e8.Binding.TypeIndex;
  if ((2 < local_e8.Binding.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_e8.Binding);
  }
LAB_1466425c8:
  if (param_1->bForcePersist != false) {
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>
    ::ForciblyPersistStorage
              ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>
                *)this,local_208);
  }
  if (local_1f0.bIsSet != false) {
    if ((2 < local_1f0.TypedValue.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_1f0.TypedValue.TypeIndex])(local_1f8 + 8);
  }
  return;
}

// CachePreAnimatedTransforms @ 1466426d0

void __thiscall
UE::MovieScene::FPreAnimatedComponentTransformStorage::CachePreAnimatedTransforms
          (FPreAnimatedComponentTransformStorage *this,FCachePreAnimatedValueParams *param_1,
          TArrayView<UObject_*_const,int> *param_2,
          TOptional<TFunctionRef<bool___cdecl(int)>_> *param_3)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res18 [2];
  
  iVar1 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = *(UObject **)(lVar8 + (longlong)param_2->DataPtr);
      if ((pUVar2 != (UObject *)0x0) &&
         ((*(code **)&param_3->field0_0x0 == (code *)0x0 ||
          (local_res18[0] = uVar7,
          cVar5 = (**(code **)&param_3->field0_0x0)
                            (*(undefined8 *)((longlong)&param_3->field0_0x0 + 8),local_res18),
          cVar5 != '\0')))) {
        CachePreAnimatedTransform(this,param_1,pUVar2);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar1);
  }
  return;
}

// ~FPreAnimatedComponentTransformStorage @ 1467699a0

void __thiscall
UE::MovieScene::FPreAnimatedComponentTransformStorage::~FPreAnimatedComponentTransformStorage
          (FPreAnimatedComponentTransformStorage *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0xd0);
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>,int>
            (*(TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
               **)&this->field_0xa0,*(int *)&this->field_0xa8);
  if (*(void **)&this->field_0xa0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa0);
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  ::DestroyElements((TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                     *)&this->field_0x68,0,*(int *)&this->field_0x70);
  *(undefined4 *)&this->field_0x70 = 0;
  if (*(int *)&this->field_0x74 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)&this->field_0x68,0,(int *)&this->field_0x74);
  }
  *(undefined4 *)&this->field_0x9c = 0;
  *(undefined4 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x98 = 0xffffffff;
  if ((*(int *)&this->field_0x94 < 0) || (0x80 < *(int *)&this->field_0x94)) {
    *(undefined4 *)&this->field_0x94 = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x78,0);
  }
  if (*(void **)&this->field_0x88 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x88);
  }
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  *(undefined4 *)&this->field_0x60 = 0;
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x18);
  *(undefined ***)this = &___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

