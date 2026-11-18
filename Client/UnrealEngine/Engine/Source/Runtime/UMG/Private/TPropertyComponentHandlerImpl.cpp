// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 24

// CoercePropertyValue @ 1469104e0

FIntermediatePropertyValue * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::CoercePropertyValue
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FIntermediatePropertyValue *__return_storage_ptr__,FPropertyDefinition *param_1,
          FProperty *param_2,FSourcePropertyValue *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FMargin *pFVar3;
  undefined1 local_28 [32];
  
  pFVar3 = FSourcePropertyValue::Cast<FMargin>(param_3);
  local_28._8_8_ = (undefined8)pFVar3->Top;
  uVar1 = pFVar3->Right;
  uVar2 = pFVar3->Bottom;
  local_28._24_4_ = SUB84((double)(float)uVar2,0);
  local_28._16_8_ = (double)(float)uVar1;
  local_28._28_4_ = (int)((ulonglong)(double)(float)uVar2 >> 0x20);
  local_28._0_8_ = (undefined8)pFVar3->Left;
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediateMargin_&>
            (__return_storage_ptr__,(FIntermediateMargin *)local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 146910540

FIntermediatePropertyValue * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::CoercePropertyValue
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,FIntermediatePropertyValue *__return_storage_ptr__,FPropertyDefinition *param_1,
          FProperty *param_2,FSourcePropertyValue *param_3)

{
  FWidgetTransform *pFVar1;
  FIntermediateWidgetTransform local_48;
  
  pFVar1 = FSourcePropertyValue::Cast<FWidgetTransform>(param_3);
  local_48.TranslationX = (pFVar1->Translation).field0_0x0._s_0.X;
  local_48.TranslationY = (pFVar1->Translation).field0_0x0._s_0.Y;
  local_48.ScaleX = (pFVar1->Scale).field0_0x0._s_0.X;
  local_48.ScaleY = (pFVar1->Scale).field0_0x0._s_0.Y;
  local_48.Rotation = (double)pFVar1->Angle;
  local_48.ShearX = (pFVar1->Shear).field0_0x0._s_0.X;
  local_48.ShearY = (pFVar1->Shear).field0_0x0._s_0.Y;
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediateWidgetTransform_&>
            (__return_storage_ptr__,&local_48);
  return __return_storage_ptr__;
}

// DispatchSetterTasks @ 1469148c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::DispatchSetterTasks
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FPropertyStats *param_3,FSystemTaskPrerequisites *param_4,FSystemSubsequentTasks *param_5,
          UMovieSceneEntitySystemLinker *param_6)

{
  undefined1 *puVar1;
  int *piVar2;
  FPropertyCompositeDefinition *pFVar3;
  uint *puVar4;
  TComponentTypeID<UObject_*> TVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  Type TVar9;
  TTypeCompatibleBytes<unsigned_int> TVar10;
  code *pcVar11;
  FPropertyDefinition *pFVar12;
  bool bVar13;
  byte bVar14;
  uchar auVar15 [4];
  FBuiltInComponentTypes *pFVar16;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  *this_00;
  TBitArray<TFixedAllocator<12>_> *pTVar17;
  FPropertyCompositeDefinition *pFVar18;
  int iVar19;
  undefined1 auStackY_4b8 [32];
  FComponentTypeID local_478;
  FComponentTypeID local_476;
  FComponentTypeID local_474;
  FComponentTypeID local_472;
  FComponentTypeID local_470;
  FComponentTypeID local_46e;
  FComponentTypeID local_46c;
  FComponentTypeID local_46a;
  ushort local_468;
  undefined2 uStack_466;
  ushort local_464;
  undefined2 uStack_462;
  ushort local_460;
  undefined2 uStack_45e;
  ushort local_45c;
  undefined2 uStack_45a;
  FPropertyDefinition *local_458;
  UMovieSceneEntitySystemLinker *local_450;
  IPropertyTraits *local_448;
  FSystemSubsequentTasks *local_440;
  FSystemTaskPrerequisites *local_438;
  undefined1 local_430 [16];
  FBuiltInComponentTypes *local_420;
  undefined1 local_418 [32];
  byte local_3f8;
  undefined7 uStack_3f7;
  uchar auStack_3f0 [4];
  uint uStack_3ec;
  ForElementType<unsigned_int> local_3e0;
  TStatIdData *pTStack_3d8;
  byte local_3d0;
  undefined1 uStack_3cf;
  undefined1 uStack_3ce;
  undefined1 uStack_3cd;
  undefined1 uStack_3cc;
  undefined1 uStack_3cb;
  undefined1 uStack_3ca;
  undefined1 uStack_3c9;
  TTypeCompatibleBytes<unsigned_int> TStack_3c8;
  TTypeCompatibleBytes<unsigned_int> TStack_3c4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_398;
  initializer_list<UE::MovieScene::FComponentTypeID> local_388;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_378;
  undefined2 uStack_376;
  TComponentTypeID<unsigned_short> TStack_374;
  undefined2 uStack_372;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_370;
  undefined2 uStack_36e;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_368;
  undefined2 uStack_366;
  TComponentTypeID<unsigned_short> TStack_364;
  undefined2 uStack_362;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_360;
  undefined2 uStack_35e;
  TComponentTypeID<UObject_*> local_358;
  undefined8 local_356;
  undefined4 local_34e;
  ushort local_34a;
  ushort local_348;
  ushort local_346;
  ushort local_344;
  undefined8 local_340;
  TStatIdData *pTStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  TBitArray<TFixedAllocator<12>_> local_320;
  TComponentTypeID<UObject_*> local_2e8;
  undefined6 uStack_2e6;
  undefined2 uStack_2e0;
  undefined1 auStack_2de [12];
  ushort uStack_2d2;
  undefined2 uStack_2d0;
  undefined4 uStack_2ce;
  undefined2 uStack_2ca;
  undefined1 local_2a8 [32];
  ForElementType<unsigned_int> local_288;
  TStatIdData *pTStack_280;
  TTypeCompatibleBytes<unsigned_int> local_278 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_270 [2];
  FEntityComponentFilter local_268;
  int local_1b8;
  int local_1b4;
  int local_180;
  FEntitySystemMaybeAtomicInt32 local_17c;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_438 = param_4;
  local_440 = param_5;
  local_450 = param_6;
  local_458 = param_1;
  local_430._8_8_ = param_3;
  pFVar16 = FBuiltInComponentTypes::Get();
  local_448 = param_1->TraitsInstance;
  local_3f8 = local_3f8 & 0xe0;
  local_418._24_8_ = &TStatId::TStatId_NAME_None;
  local_378 = pFVar16->CustomPropertyIndex;
  TVar5 = pFVar16->BoundObject;
  TStack_374 = pFVar16->FastPropertyOffset;
  local_418._16_8_ = 0;
  auStack_3f0[0] = 0xff;
  auStack_3f0[1] = '\x06';
  auStack_3f0[2] = '\0';
  auStack_3f0[3] = '\0';
  uStack_3ec = uStack_3ec & 0xffffff00;
  uStack_376 = 0x7fff;
  uStack_372 = 0x7fff;
  uStack_36e = 0x7fff;
  local_370 = pFVar16->SlowProperty;
  local_420 = pFVar16;
  if ((param_2->ArrayNum < 4) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar6 = param_2->DataPtr[3].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar7 = param_2->DataPtr[2].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar8 = param_2->DataPtr[1].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar12 = local_458;
  local_356._2_2_ = uStack_376;
  local_356._0_2_ = local_378;
  local_356._4_2_ = TStack_374;
  local_356._6_2_ = uStack_372;
  local_330._1_7_ = uStack_3f7;
  local_330._0_1_ = local_3f8;
  uStack_328._4_4_ = uStack_3ec;
  uStack_328._0_1_ = auStack_3f0[0];
  uStack_328._1_1_ = auStack_3f0[1];
  uStack_328._2_1_ = auStack_3f0[2];
  uStack_328._3_1_ = auStack_3f0[3];
  pFVar18 = param_2->DataPtr;
  local_34e = _local_370;
  local_34a = (pFVar18->ComponentTypeID).Value;
  local_478.Value = (local_458->PropertyType).Value;
  local_3b8._First = &local_478;
  local_3b8._Last = &local_476;
  local_340 = local_418._16_8_;
  pTStack_338 = (TStatIdData *)local_418._24_8_;
  local_358 = TVar5;
  local_348 = uVar8;
  local_346 = uVar7;
  local_344 = uVar6;
  this_00 = TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ::FilterAll((TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                         *)&local_358,&local_178,&local_3b8);
  local_474.Value = (pFVar16->Tags).Ignored.Value;
  local_3a8._First = &local_474;
  local_3a8._Last = &local_472;
  FComponentMask::SetAll(&(this_00->Filter).NoneMask,&local_3a8);
  *(TStatIdData **)&(this_00->Components).field_0x20 = (pFVar12->StatID).StatIdPtr;
  TVar9 = (local_450->EntityManager).GatherThread;
  *(Type *)&(this_00->Components).field_0x30 = TVar9;
  if ((TVar9 == GameThread) || (TVar9 == GameThread_Local)) {
    bVar14 = 1;
  }
  else {
    bVar14 = 0;
  }
  puVar1 = &(this_00->Components).field_0x28;
  *puVar1 = *puVar1 & 0xfe;
  puVar1 = &(this_00->Components).field_0x28;
  *puVar1 = *puVar1 | bVar14;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::
  Dispatch_PerAllocation<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
            (this_00,(FEntityManager *)local_430,
             (FSystemTaskPrerequisites *)&local_450->EntityManager,
             (FSystemSubsequentTasks *)local_438,
             (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> **)local_440,
             (ICustomPropertyRegistration **)&local_448);
  if ((undefined8 *)local_430._0_8_ != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_430._0_8_ + 0x30);
    iVar19 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar19 == 1) {
      (*(code *)**(undefined8 **)local_430._0_8_)();
    }
  }
  if (local_178.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  if (0 < *(int *)(local_430._8_8_ + 4)) {
    local_320.NumBits = 0;
    local_320.MaxBits = 0x180;
    pFVar3 = pFVar18 + param_2->ArrayNum;
    pFVar16 = local_420;
    for (; local_420 = pFVar16, pFVar18 != pFVar3; pFVar18 = pFVar18 + 1) {
      uVar6 = (pFVar18->ComponentTypeID).Value;
      iVar19 = ((uint)uVar6 - local_320.NumBits) + 1;
      if (0 < iVar19) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_320,false,iVar19);
      }
      if ((local_320.NumBits <= (int)(uint)uVar6) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar4 = (uint *)((longlong)local_320.AllocatorInstance.InlineData +
                       (ulonglong)(uVar6 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)uVar6 & 0x1f);
      pFVar16 = local_420;
    }
    local_3d0 = local_3d0 & 0xe0;
    pTStack_3d8 = &TStatId::TStatId_NAME_None;
    local_3e0 = (ForElementType<unsigned_int>)0x0;
    local_368 = pFVar16->CustomPropertyIndex;
    TVar5 = pFVar16->BoundObject;
    TStack_364 = pFVar16->FastPropertyOffset;
    TStack_3c8.Pad[0] = 0xff;
    TStack_3c8.Pad[1] = '\x06';
    TStack_3c8.Pad[2] = '\0';
    TStack_3c8.Pad[3] = '\0';
    TStack_3c4.Pad = TStack_3c4.Pad & 0xffffff00;
    uStack_366 = 0x7fff;
    uStack_362 = 0x7fff;
    uStack_35e = 0x7fff;
    local_360 = pFVar16->SlowProperty;
    if ((param_2->ArrayNum < 4) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar6 = param_2->DataPtr[3].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 3) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar7 = param_2->DataPtr[2].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar8 = param_2->DataPtr[1].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uStack_2e6._2_2_ = uStack_366;
    uStack_2e6._0_2_ = local_368;
    uStack_2e6._4_2_ = TStack_364;
    auStack_2de._4_2_ = (param_2->DataPtr->ComponentTypeID).Value;
    local_278[0].Pad[1] = uStack_3cf;
    local_278[0].Pad[2] = uStack_3ce;
    local_278[0].Pad[3] = uStack_3cd;
    local_278[1].Pad[0] = uStack_3cc;
    local_278[1].Pad[1] = uStack_3cb;
    local_278[1].Pad[2] = uStack_3ca;
    local_278[1].Pad[3] = uStack_3c9;
    local_278[0].Pad[0] = local_3d0;
    aTStack_270[1].Pad[0] = TStack_3c4.Pad[0];
    aTStack_270[1].Pad[1] = TStack_3c4.Pad[1];
    aTStack_270[1].Pad[2] = TStack_3c4.Pad[2];
    aTStack_270[1].Pad[3] = TStack_3c4.Pad[3];
    aTStack_270[0].Pad[0] = TStack_3c8.Pad[0];
    aTStack_270[0].Pad[1] = TStack_3c8.Pad[1];
    aTStack_270[0].Pad[2] = TStack_3c8.Pad[2];
    aTStack_270[0].Pad[3] = TStack_3c8.Pad[3];
    auStack_2de._0_4_ = _local_360;
    _local_468 = CONCAT22(0x7fff,auStack_2de._4_2_);
    auStack_2de._6_2_ = 0x7fff;
    _local_460 = CONCAT22(0x7fff,uVar7);
    uStack_2e0 = uStack_362;
    uStack_462 = 0x7fff;
    local_464 = uVar8;
    auStack_2de._8_4_ = _local_464;
    uStack_2d0 = 0x7fff;
    uStack_45a = 0x7fff;
    local_45c = uVar6;
    uStack_2ce = _local_45c;
    local_2a8._18_4_ = _local_464;
    local_2a8._16_2_ = 0x7fff;
    local_2a8._22_2_ = uVar7;
    local_2a8._26_4_ = _local_45c;
    local_2a8._24_2_ = 0x7fff;
    local_2a8._30_2_ = uStack_2ca;
    local_2a8._2_6_ = uStack_2e6;
    local_2a8._0_2_ = TVar5;
    local_2a8._10_4_ = _local_360;
    local_2a8._8_2_ = uStack_362;
    local_2a8._14_2_ = auStack_2de._4_2_;
    local_288 = local_3e0;
    pTStack_280 = pTStack_3d8;
    local_268.AllMask.Bits.NumBits._0_1_ = '\0';
    local_268.AllMask.Bits.NumBits._1_1_ = '\0';
    local_268.AllMask.Bits.NumBits._2_1_ = '\0';
    local_268.AllMask.Bits.NumBits._3_1_ = '\0';
    local_268.AllMask.Bits.MaxBits._0_1_ = 0x80;
    local_268.AllMask.Bits.MaxBits._1_1_ = '\x01';
    local_268.AllMask.Bits.MaxBits._2_1_ = '\0';
    local_268.AllMask.Bits.MaxBits._3_1_ = '\0';
    local_268.NoneMask.Bits.NumBits._0_1_ = '\0';
    local_268.NoneMask.Bits.NumBits._1_1_ = '\0';
    local_268.NoneMask.Bits.NumBits._2_1_ = '\0';
    local_268.NoneMask.Bits.NumBits._3_1_ = '\0';
    local_268.NoneMask.Bits.MaxBits._0_1_ = 0x80;
    local_268.NoneMask.Bits.MaxBits._1_1_ = '\x01';
    local_268.NoneMask.Bits.MaxBits._2_1_ = '\0';
    local_268.NoneMask.Bits.MaxBits._3_1_ = '\0';
    local_268.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ComplexMasks.ArrayNum = 0;
    local_268.ComplexMasks.ArrayMax = 0;
    local_1b8 = 0;
    local_1b4 = 0x180;
    local_180 = 0;
    local_17c.Payload = 0x180;
    local_2e8 = TVar5;
    uStack_2d2 = uVar7;
    AddAccessorToFilter((FComponentAccess *)local_2a8,&local_268);
    AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)(local_2a8 + 2),&local_268);
    if (0 < local_320.NumBits) {
      auVar15 = (uchar  [4])local_268.ComplexMasks.ArrayNum;
      if (local_268.ComplexMasks.ArrayNum == local_268.ComplexMasks.ArrayMax) {
        auVar15 = (uchar  [4])
                  Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x43c,&local_268.ComplexMasks.AllocatorInstance,
                             &local_268.ComplexMasks.ArrayMax);
      }
      local_268.ComplexMasks.ArrayNum = (int)(auVar15 + 1);
      pTVar17 = (TBitArray<TFixedAllocator<12>_> *)
                (local_268.ComplexMasks.AllocatorInstance.Data + (longlong)(int)auVar15 * 0x3c);
      pTVar17->NumBits = 0;
      pTVar17->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(pTVar17,&local_320);
      pTVar17[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
    }
    pFVar12 = local_458;
    local_470.Value = (local_458->PropertyType).Value;
    local_398._First = &local_470;
    local_398._Last = &local_46e;
    FComponentMask::SetAll(&local_268.AllMask,&local_398);
    if (0 < local_320.NumBits) {
      auVar15 = (uchar  [4])local_268.ComplexMasks.ArrayNum;
      if (local_268.ComplexMasks.ArrayNum == local_268.ComplexMasks.ArrayMax) {
        auVar15 = (uchar  [4])
                  Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x43c,&local_268.ComplexMasks.AllocatorInstance,
                             &local_268.ComplexMasks.ArrayMax);
      }
      local_268.ComplexMasks.ArrayNum = (int)(auVar15 + 1);
      pTVar17 = (TBitArray<TFixedAllocator<12>_> *)
                (local_268.ComplexMasks.AllocatorInstance.Data + (longlong)(int)auVar15 * 0x3c);
      pTVar17->NumBits = 0;
      pTVar17->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(pTVar17,&local_320);
      pTVar17[1].AllocatorInstance.InlineData[0].Pad[0] = 0x84;
    }
    local_46c.Value = (pFVar16->Tags).Ignored.Value;
    local_388._First = &local_46c;
    local_388._Last = &local_46a;
    FComponentMask::SetAll(&local_268.NoneMask,&local_388);
    pTStack_280 = (pFVar12->StatID).StatIdPtr;
    TVar10.Pad = (uchar  [4])(local_450->EntityManager).GatherThread;
    aTStack_270[0].Pad[0] = TVar10.Pad[0];
    aTStack_270[0].Pad[1] = TVar10.Pad[1];
    aTStack_270[0].Pad[2] = TVar10.Pad[2];
    aTStack_270[0].Pad[3] = TVar10.Pad[3];
    if ((TVar10.Pad == (uchar  [4])0x1) || (TVar10.Pad == (uchar  [4])0x101)) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    local_278[0].Pad[0] = local_278[0].Pad[0] & 0xfe | bVar14;
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::
    Dispatch_PerAllocation<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                *)local_2a8,(FEntityManager *)local_418,
               (FSystemTaskPrerequisites *)&local_450->EntityManager,
               (FSystemSubsequentTasks *)local_438,
               (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> **)local_440,
               (ICustomPropertyRegistration **)&local_448,
               (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *)pFVar12);
    if ((undefined8 *)local_418._0_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_418._0_8_ + 0x30);
      iVar19 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (*(code *)**(undefined8 **)local_418._0_8_)(local_418._0_8_,1);
      }
    }
    if (local_268.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// DispatchSetterTasks @ 146915110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::DispatchSetterTasks
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FPropertyStats *param_3,FSystemTaskPrerequisites *param_4,FSystemSubsequentTasks *param_5,
          UMovieSceneEntitySystemLinker *param_6)

{
  undefined1 *puVar1;
  int *piVar2;
  FPropertyCompositeDefinition *pFVar3;
  uint *puVar4;
  TComponentTypeID<UObject_*> TVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  Type TVar12;
  TTypeCompatibleBytes<unsigned_int> TVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FPropertyDefinition *pFVar18;
  FBuiltInComponentTypes *pFVar19;
  bool bVar20;
  byte bVar21;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  *this_00;
  TBitArray<TFixedAllocator<12>_> *pTVar22;
  FPropertyCompositeDefinition *pFVar23;
  int iVar24;
  undefined1 auStackY_4f8 [32];
  FComponentTypeID local_4b4;
  FComponentTypeID local_4b2;
  FComponentTypeID local_4b0;
  FComponentTypeID local_4ae;
  FComponentTypeID local_4ac;
  FComponentTypeID local_4aa;
  FComponentTypeID local_4a8;
  FComponentTypeID local_4a6;
  ushort local_4a4;
  ushort local_4a2;
  undefined2 uStack_4a0;
  ushort local_49e;
  undefined2 uStack_49c;
  ushort local_49a;
  undefined2 uStack_498;
  ushort local_496;
  undefined2 uStack_494;
  ushort local_492;
  undefined2 uStack_490;
  ushort local_48e;
  undefined2 uStack_48c;
  ushort local_48a;
  undefined2 uStack_488;
  FPropertyDefinition *local_480;
  FBuiltInComponentTypes *local_478;
  UMovieSceneEntitySystemLinker *local_470;
  IPropertyTraits *local_468;
  FSystemSubsequentTasks *local_460;
  FSystemTaskPrerequisites *local_458;
  undefined1 local_450 [16];
  undefined1 local_440 [32];
  byte local_420;
  undefined7 uStack_41f;
  undefined4 uStack_418;
  uint uStack_414;
  uchar local_408 [8];
  ForElementType<unsigned_int> FStack_400;
  byte local_3f8;
  uchar auStack_3f7 [7];
  TTypeCompatibleBytes<unsigned_int> TStack_3f0;
  TTypeCompatibleBytes<unsigned_int> TStack_3ec;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3b8;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_3a8;
  undefined2 uStack_3a6;
  TComponentTypeID<unsigned_short> TStack_3a4;
  undefined2 uStack_3a2;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_3a0;
  undefined2 uStack_39e;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_398;
  undefined2 uStack_396;
  TComponentTypeID<unsigned_short> TStack_394;
  undefined2 uStack_392;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_390;
  undefined2 uStack_38e;
  TComponentTypeID<UObject_*> local_388;
  undefined8 local_386;
  undefined4 local_37e;
  ushort local_37a;
  ushort local_378;
  ushort local_376;
  ushort local_374;
  ushort local_372;
  ushort local_370;
  ushort local_36e;
  undefined8 local_368;
  TStatIdData *pTStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  TBitArray<TFixedAllocator<12>_> local_348;
  TComponentTypeID<UObject_*> local_308;
  undefined6 uStack_306;
  undefined2 uStack_300;
  undefined4 uStack_2fe;
  ushort uStack_2fa;
  undefined1 auStack_2f8 [22];
  ushort uStack_2e2;
  undefined2 uStack_2e0;
  undefined1 uStack_2de;
  undefined1 uStack_2dd;
  undefined1 uStack_2dc;
  undefined1 uStack_2db;
  undefined1 uStack_2da;
  undefined1 uStack_2d9;
  undefined1 local_2b8 [16];
  TTypeCompatibleBytes<unsigned_int> local_2a8 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_2a0 [2];
  TTypeCompatibleBytes<unsigned_int> local_298 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_290 [2];
  uchar local_288 [8];
  ForElementType<unsigned_int> FStack_280;
  TTypeCompatibleBytes<unsigned_int> local_278 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_270 [2];
  undefined1 local_268 [124];
  int aiStack_1ec [13];
  int local_1b8;
  FEntitySystemMaybeAtomicInt32 local_1b4;
  int local_180;
  int local_17c;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_458 = param_4;
  local_460 = param_5;
  local_470 = param_6;
  local_480 = param_1;
  local_450._8_8_ = param_3;
  local_478 = FBuiltInComponentTypes::Get();
  local_468 = param_1->TraitsInstance;
  local_420 = local_420 & 0xe0;
  local_440._24_8_ = &TStatId::TStatId_NAME_None;
  local_3a8 = local_478->CustomPropertyIndex;
  TVar5 = local_478->BoundObject;
  TStack_3a4 = local_478->FastPropertyOffset;
  local_440._16_8_ = 0;
  uStack_418 = 0x6ff;
  uStack_414 = uStack_414 & 0xffffff00;
  uStack_3a6 = 0x7fff;
  uStack_3a2 = 0x7fff;
  uStack_39e = 0x7fff;
  local_3a0 = local_478->SlowProperty;
  if ((param_2->ArrayNum < 7) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar6 = param_2->DataPtr[6].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 6) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_4a4 = param_2->DataPtr[5].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 5) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar7 = param_2->DataPtr[4].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 4) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar8 = param_2->DataPtr[3].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 3) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar9 = param_2->DataPtr[2].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 2) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar10 = param_2->DataPtr[1].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar18 = local_480;
  local_386._2_2_ = uStack_3a6;
  local_386._0_2_ = local_3a8;
  local_386._4_2_ = TStack_3a4;
  local_386._6_2_ = uStack_3a2;
  local_358._1_7_ = uStack_41f;
  local_358._0_1_ = local_420;
  uStack_350._4_4_ = uStack_414;
  uStack_350._0_4_ = uStack_418;
  pFVar23 = param_2->DataPtr;
  local_37e = _local_3a0;
  local_37a = (pFVar23->ComponentTypeID).Value;
  local_370 = local_4a4;
  local_4b4.Value = (local_480->PropertyType).Value;
  local_3e8._First = &local_4b4;
  local_3e8._Last = &local_4b2;
  local_368 = local_440._16_8_;
  pTStack_360 = (TStatIdData *)local_440._24_8_;
  local_388 = TVar5;
  local_378 = uVar10;
  local_376 = uVar9;
  local_374 = uVar8;
  local_372 = uVar7;
  local_36e = uVar6;
  this_00 = TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ::FilterAll((TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                         *)&local_388,&local_178,&local_3e8);
  pFVar19 = local_478;
  local_3d8._First = &local_4b0;
  local_3d8._Last = &local_4ae;
  local_4b0.Value = (local_478->Tags).Ignored.Value;
  FComponentMask::SetAll(&(this_00->Filter).NoneMask,&local_3d8);
  *(TStatIdData **)&(this_00->Components).field_0x28 = (pFVar18->StatID).StatIdPtr;
  TVar12 = (local_470->EntityManager).GatherThread;
  *(Type *)&(this_00->Components).field_0x38 = TVar12;
  if ((TVar12 == GameThread) || (TVar12 == GameThread_Local)) {
    bVar21 = 1;
  }
  else {
    bVar21 = 0;
  }
  puVar1 = &(this_00->Components).field_0x30;
  *puVar1 = *puVar1 & 0xfe;
  puVar1 = &(this_00->Components).field_0x30;
  *puVar1 = *puVar1 | bVar21;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::
  Dispatch_PerAllocation<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
            (this_00,(FEntityManager *)local_450,
             (FSystemTaskPrerequisites *)&local_470->EntityManager,
             (FSystemSubsequentTasks *)local_458,
             (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> **)
             local_460,(ICustomPropertyRegistration **)&local_468);
  if ((undefined8 *)local_450._0_8_ != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_450._0_8_ + 0x30);
    iVar24 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar24 == 1) {
      (*(code *)**(undefined8 **)local_450._0_8_)();
    }
  }
  if (local_178.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  if (0 < *(int *)(local_450._8_8_ + 4)) {
    local_348.NumBits = 0;
    local_348.MaxBits = 0x180;
    pFVar3 = pFVar23 + param_2->ArrayNum;
    for (; pFVar23 != pFVar3; pFVar23 = pFVar23 + 1) {
      uVar6 = (pFVar23->ComponentTypeID).Value;
      iVar24 = ((uint)uVar6 - local_348.NumBits) + 1;
      if (0 < iVar24) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_348,false,iVar24);
      }
      if ((local_348.NumBits <= (int)(uint)uVar6) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar20)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      puVar4 = (uint *)((longlong)local_348.AllocatorInstance.InlineData +
                       (ulonglong)(uVar6 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)uVar6 & 0x1f);
    }
    local_3f8 = local_3f8 & 0xe0;
    TVar5 = pFVar19->BoundObject;
    FStack_400 = (ForElementType<unsigned_int>)&TStatId::TStatId_NAME_None;
    local_398 = pFVar19->CustomPropertyIndex;
    TStack_394 = pFVar19->FastPropertyOffset;
    local_408[0] = '\0';
    local_408[1] = '\0';
    local_408[2] = '\0';
    local_408[3] = '\0';
    local_408[4] = '\0';
    local_408[5] = '\0';
    local_408[6] = '\0';
    local_408[7] = '\0';
    TStack_3f0.Pad[0] = 0xff;
    TStack_3f0.Pad[1] = '\x06';
    TStack_3f0.Pad[2] = '\0';
    TStack_3f0.Pad[3] = '\0';
    TStack_3ec.Pad = TStack_3ec.Pad & 0xffffff00;
    uStack_396 = 0x7fff;
    uStack_392 = 0x7fff;
    uStack_38e = 0x7fff;
    local_390 = pFVar19->SlowProperty;
    if ((param_2->ArrayNum < 7) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uVar6 = param_2->DataPtr[6].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 6) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uVar7 = param_2->DataPtr[5].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 5) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uVar8 = param_2->DataPtr[4].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 4) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uVar9 = param_2->DataPtr[3].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 3) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uVar10 = param_2->DataPtr[2].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 2) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uVar11 = param_2->DataPtr[1].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uStack_306._2_2_ = uStack_396;
    uStack_306._0_2_ = local_398;
    uStack_306._4_2_ = TStack_394;
    local_278[0].Pad[1] = auStack_3f7[0];
    local_278[0].Pad[2] = auStack_3f7[1];
    local_278[0].Pad[3] = auStack_3f7[2];
    local_278[1].Pad[0] = auStack_3f7[3];
    local_278[1].Pad[1] = auStack_3f7[4];
    local_278[1].Pad[2] = auStack_3f7[5];
    local_278[1].Pad[3] = auStack_3f7[6];
    local_278[0].Pad[0] = local_3f8;
    aTStack_270[1].Pad[0] = TStack_3ec.Pad[0];
    aTStack_270[1].Pad[1] = TStack_3ec.Pad[1];
    aTStack_270[1].Pad[2] = TStack_3ec.Pad[2];
    aTStack_270[1].Pad[3] = TStack_3ec.Pad[3];
    aTStack_270[0].Pad[0] = TStack_3f0.Pad[0];
    aTStack_270[0].Pad[1] = TStack_3f0.Pad[1];
    aTStack_270[0].Pad[2] = TStack_3f0.Pad[2];
    aTStack_270[0].Pad[3] = TStack_3f0.Pad[3];
    uStack_2fa = (param_2->DataPtr->ComponentTypeID).Value;
    uStack_2fe = _local_390;
    _local_4a2 = CONCAT22(0x7fff,uStack_2fa);
    auStack_2f8._0_2_ = 0x7fff;
    _local_48a = CONCAT22(0x7fff,uVar6);
    uStack_300 = uStack_392;
    _local_49a = CONCAT22(0x7fff,uVar10);
    uStack_49c = 0x7fff;
    local_49e = uVar11;
    uVar15 = _local_49e;
    auStack_2f8._2_4_ = _local_49e;
    auStack_2f8._8_2_ = 0x7fff;
    uStack_494 = 0x7fff;
    local_496 = uVar9;
    uVar16 = _local_496;
    auStack_2f8._10_4_ = _local_496;
    _local_492 = CONCAT22(0x7fff,uVar8);
    auStack_2f8._16_2_ = 0x7fff;
    local_49e._0_1_ = (undefined1)uVar11;
    local_49e._1_1_ = (undefined1)(uVar11 >> 8);
    uStack_49c._0_1_ = (undefined1)0x7fff;
    uStack_49c._1_1_ = (undefined1)(0x7fff >> 8);
    local_2a8[0].Pad[2] = (undefined1)local_49e;
    local_2a8[0].Pad[3] = local_49e._1_1_;
    local_2a8[1].Pad[0] = (undefined1)uStack_49c;
    local_2a8[1].Pad[1] = uStack_49c._1_1_;
    local_2a8[0].Pad[0] = 0xff;
    local_2a8[0].Pad[1] = '\x7f';
    local_2a8[1].Pad[2] = (char)uVar10;
    local_2a8[1].Pad[3] = (char)(uVar10 >> 8);
    local_496._0_1_ = (undefined1)uVar9;
    local_496._1_1_ = (undefined1)(uVar9 >> 8);
    uStack_494._0_1_ = (undefined1)0x7fff;
    uStack_494._1_1_ = (undefined1)(0x7fff >> 8);
    aTStack_2a0[0].Pad[2] = (undefined1)local_496;
    aTStack_2a0[0].Pad[3] = local_496._1_1_;
    aTStack_2a0[1].Pad[0] = (undefined1)uStack_494;
    aTStack_2a0[1].Pad[1] = uStack_494._1_1_;
    aTStack_2a0[0].Pad[0] = 0xff;
    aTStack_2a0[0].Pad[1] = '\x7f';
    aTStack_2a0[1].Pad[2] = (char)uVar8;
    aTStack_2a0[1].Pad[3] = (char)(uVar8 >> 8);
    uStack_48c = 0x7fff;
    local_48e = uVar7;
    uVar17 = _local_48e;
    auStack_2f8._18_4_ = _local_48e;
    uStack_2e0 = 0x7fff;
    local_2b8._2_6_ = uStack_306;
    local_2b8._0_2_ = TVar5;
    local_2b8._10_4_ = _local_390;
    local_2b8._8_2_ = uStack_392;
    local_2b8._14_2_ = uStack_2fa;
    local_48e._0_1_ = (undefined1)uVar7;
    local_48e._1_1_ = (undefined1)(uVar7 >> 8);
    uStack_48c._0_1_ = (undefined1)0x7fff;
    uStack_48c._1_1_ = (undefined1)(0x7fff >> 8);
    local_298[0].Pad[2] = (undefined1)local_48e;
    local_298[0].Pad[3] = local_48e._1_1_;
    local_298[1].Pad[0] = (undefined1)uStack_48c;
    local_298[1].Pad[1] = uStack_48c._1_1_;
    local_298[0].Pad[0] = 0xff;
    local_298[0].Pad[1] = '\x7f';
    local_298[1].Pad[2] = (char)uVar6;
    local_298[1].Pad[3] = (char)(uVar6 >> 8);
    aTStack_290[0].Pad[2] = uStack_2de;
    aTStack_290[0].Pad[3] = uStack_2dd;
    aTStack_290[1].Pad[0] = uStack_2dc;
    aTStack_290[1].Pad[1] = uStack_2db;
    aTStack_290[1].Pad[2] = uStack_2da;
    aTStack_290[1].Pad[3] = uStack_2d9;
    aTStack_290[0].Pad[0] = 0xff;
    aTStack_290[0].Pad[1] = '\x7f';
    local_288[0] = local_408[0];
    local_288[1] = local_408[1];
    local_288[2] = local_408[2];
    local_288[3] = local_408[3];
    local_288[4] = local_408[4];
    local_288[5] = local_408[5];
    local_288[6] = local_408[6];
    local_288[7] = local_408[7];
    FStack_280 = FStack_400;
    local_268[0x30] = '\0';
    local_268[0x31] = '\0';
    local_268[0x32] = '\0';
    local_268[0x33] = '\0';
    local_268[0x34] = 0x80;
    local_268[0x35] = '\x01';
    local_268[0x36] = '\0';
    local_268[0x37] = '\0';
    local_268[0x68] = '\0';
    local_268[0x69] = '\0';
    local_268[0x6a] = '\0';
    local_268[0x6b] = '\0';
    local_268[0x6c] = 0x80;
    local_268[0x6d] = '\x01';
    local_268[0x6e] = '\0';
    local_268[0x6f] = '\0';
    local_268._112_8_ = (FScriptContainerElement *)0x0;
    stack0xfffffffffffffe10 = (FScriptContainerElement *)0x0;
    local_1b8 = 0;
    local_1b4.Payload = 0x180;
    local_180 = 0;
    local_17c = 0x180;
    _local_49e = uVar15;
    _local_496 = uVar16;
    _local_48e = uVar17;
    local_308 = TVar5;
    auStack_2f8._6_2_ = uVar10;
    auStack_2f8._14_2_ = uVar8;
    uStack_2e2 = uVar6;
    AddAccessorToFilter((FComponentAccess *)local_2b8,(FEntityComponentFilter *)local_268);
    AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)(local_2b8 + 2),(FEntityComponentFilter *)local_268);
    if (0 < local_348.NumBits) {
      iVar24 = local_268._120_4_;
      if (local_268._120_4_ == aiStack_1ec[0]) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x43c,(ForAnyElementType *)(local_268 + 0x70),aiStack_1ec);
      }
      local_268._120_4_ = iVar24 + 1;
      pTVar22 = (TBitArray<TFixedAllocator<12>_> *)(local_268._112_8_ + (longlong)iVar24 * 0x3c);
      pTVar22->NumBits = 0;
      pTVar22->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(pTVar22,&local_348);
      pTVar22[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
    }
    pFVar18 = local_480;
    local_4ac.Value = (local_480->PropertyType).Value;
    local_3c8._First = &local_4ac;
    local_3c8._Last = &local_4aa;
    FComponentMask::SetAll((FComponentMask *)local_268,&local_3c8);
    if (0 < local_348.NumBits) {
      iVar24 = local_268._120_4_;
      if (local_268._120_4_ == aiStack_1ec[0]) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x43c,(ForAnyElementType *)(local_268 + 0x70),aiStack_1ec);
      }
      local_268._120_4_ = iVar24 + 1;
      pTVar22 = (TBitArray<TFixedAllocator<12>_> *)(local_268._112_8_ + (longlong)iVar24 * 0x3c);
      pTVar22->NumBits = 0;
      pTVar22->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(pTVar22,&local_348);
      pTVar22[1].AllocatorInstance.InlineData[0].Pad[0] = 0x84;
    }
    local_4a8.Value = (local_478->Tags).Ignored.Value;
    local_3b8._First = &local_4a8;
    local_3b8._Last = &local_4a6;
    FComponentMask::SetAll((FComponentMask *)(local_268 + 0x38),&local_3b8);
    FStack_280 = (ForElementType<unsigned_int>)(pFVar18->StatID).StatIdPtr;
    TVar13.Pad = (uchar  [4])(local_470->EntityManager).GatherThread;
    aTStack_270[0].Pad[0] = TVar13.Pad[0];
    aTStack_270[0].Pad[1] = TVar13.Pad[1];
    aTStack_270[0].Pad[2] = TVar13.Pad[2];
    aTStack_270[0].Pad[3] = TVar13.Pad[3];
    if ((TVar13.Pad == (uchar  [4])0x1) || (TVar13.Pad == (uchar  [4])0x101)) {
      bVar21 = 1;
    }
    else {
      bVar21 = 0;
    }
    local_278[0].Pad[0] = local_278[0].Pad[0] & 0xfe | bVar21;
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::
    Dispatch_PerAllocation<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                *)local_2b8,(FEntityManager *)local_440,
               (FSystemTaskPrerequisites *)&local_470->EntityManager,
               (FSystemSubsequentTasks *)local_458,
               (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> **)
               local_460,(ICustomPropertyRegistration **)&local_468,
               (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *)pFVar18);
    if ((undefined8 *)local_440._0_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_440._0_8_ + 0x30);
      iVar24 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        (*(code *)**(undefined8 **)local_440._0_8_)(local_440._0_8_,1);
      }
    }
    if ((FScriptContainerElement *)local_268._112_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_268._112_8_);
    }
  }
  return;
}

// GetPreAnimatedStateStorage @ 146920e00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::GetPreAnimatedStateStorage
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *__return_storage_ptr__,
          FPropertyDefinition *param_1,FPreAnimatedStateExtension *param_2)

{
  int *piVar1;
  int iVar2;
  atomic<int> aVar3;
  IPropertyTraits *pIVar4;
  ICustomPropertyRegistration *pIVar5;
  code *pcVar6;
  longlong lVar7;
  undefined4 uVar8;
  bool bVar9;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  FSharedReferencer<1> FVar14;
  IPreAnimatedStorage *pIVar15;
  FPreAnimatedStorageID local_res10 [2];
  FPreAnimatedStorageID local_res20 [2];
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_58;
  undefined1 local_48 [16];
  
  local_res20[0].TypeID = *(uint *)&this->StorageID;
  pTVar10 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
            ::Find(&param_2->StorageImplementations,local_res20);
  if (pTVar10 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    FVar14.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    pIVar15 = pTVar10->Object;
    if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar14.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar14.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_70.ReferenceController = FVar14.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    if (pIVar15 != (IPreAnimatedStorage *)0x0) goto LAB_1469211be;
  }
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = ::operator_new(0x120);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pIVar15 = (IPreAnimatedStorage *)&DAT_00000010;
LAB_146921049:
    if (((*(longlong *)&pIVar15->field_0x8 == 0) || (*(longlong *)&pIVar15->field_0x10 == 0)) ||
       (*(int *)(*(longlong *)&pIVar15->field_0x10 + 8) < 1)) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IPreAnimatedStorage **)&pIVar15->field_0x8 = pIVar15;
      if (pTVar13 != *(TReferenceControllerBase<1> **)&pIVar15->field_0x10) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar12 = *(longlong **)&pIVar15->field_0x10;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pIVar15->field_0x10 = pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TPreAnimatedPropertyStorageImpl_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_S___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pIVar4 = param_1->TraitsInstance;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[2]._padding_ = 0;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TPreAnimatedStateStorage_U__TPreAnimatedPropertyTraits_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__U__TIntegerSequence_H_S____V_MovieScene_UE___MovieScene_UE__6B_
    ;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar11[5]._padding_ + 4) = 0x80;
    pTVar11[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar11[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[7]._padding_ = 0;
    pTVar11[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[8]._padding_ = 0;
    pTVar11[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar11[10]._padding_ + 4) = 0x80;
    pTVar11[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar11[10].WeakReferenceCount = (atomic<int>)0x0;
    *(IPropertyTraits **)&pTVar11[0xe].SharedReferenceCount = pIVar4;
    pTVar11[0xb]._padding_ = 0;
    pTVar11[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[0xc]._padding_ = 0;
    pTVar11[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[0xd]._padding_ = 0xffffffff;
    pTVar11[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[0xe]._padding_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar11[1]._padding_ =
         (longlong)
         &TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
          ::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>__
    ;
    pTVar11[0xf]._padding_ =
         (longlong)
         &TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
          ::_vftable__for__UE__MovieScene__IPreAnimatedObjectPropertyStorage__;
    *(IPropertyTraits **)&pTVar11[0xf].SharedReferenceCount = param_1->TraitsInstance;
    iVar2 = (param_1->MetaDataTypes).ArrayNum;
    uVar8 = *(undefined4 *)&(param_1->MetaDataTypes).field_0xc;
    pTVar11[0x10]._padding_ = (longlong)(param_1->MetaDataTypes).DataPtr;
    pTVar11[0x10].SharedReferenceCount = (atomic<int>)iVar2;
    pTVar11[0x10].WeakReferenceCount = (atomic<int>)uVar8;
    aVar3 = pTVar11[0x10].SharedReferenceCount;
    pTVar11[0x11]._padding_ = 0;
    pTVar11[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[0x11].WeakReferenceCount = (atomic<int>)0x0;
    if ((aVar3 != (atomic<int>)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MetaDataComponents.Num() == sizeof...(MetaDataIndices)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedPropertyStorage.h"
                           ,0x9d,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar6)();
      return pTVar10;
    }
    pIVar5 = param_1->CustomPropertyRegistration;
    if (pIVar5 != (ICustomPropertyRegistration *)0x0) {
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_48);
      lVar7 = plVar12[1];
      pTVar11[0x11]._padding_ = *plVar12;
      pTVar11[0x11].SharedReferenceCount = (atomic<int>)(int)lVar7;
      pTVar11[0x11].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar7 >> 0x20);
    }
    pIVar15 = (IPreAnimatedStorage *)(pTVar11 + 1);
    pTVar13 = pTVar11;
    if (pIVar15 != (IPreAnimatedStorage *)0x0) goto LAB_146921049;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = 0;
  local_60.ReferenceController = pTVar13;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_70,&local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if ((pIVar15 == (IPreAnimatedStorage *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar6)();
    return pTVar10;
  }
  (**(code **)(*(longlong *)pIVar15 + 0x10))(pIVar15,this->StorageID,param_2);
  FVar14.ReferenceController = local_70.ReferenceController;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10[0].TypeID = *(uint *)&this->StorageID;
  pTVar10 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
            ::Find(&param_2->StorageImplementations,local_res10);
  if ((pTVar10 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar6)();
    return pTVar10;
  }
  local_58.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pIVar15;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&param_2->StorageImplementations,local_res10,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
LAB_1469211be:
  __return_storage_ptr__->Object = pIVar15;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  return __return_storage_ptr__;
}

// GetPreAnimatedStateStorage @ 146921210

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::GetPreAnimatedStateStorage
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *__return_storage_ptr__,
          FPropertyDefinition *param_1,FPreAnimatedStateExtension *param_2)

{
  int *piVar1;
  int iVar2;
  atomic<int> aVar3;
  IPropertyTraits *pIVar4;
  ICustomPropertyRegistration *pIVar5;
  code *pcVar6;
  longlong lVar7;
  undefined4 uVar8;
  bool bVar9;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  FSharedReferencer<1> FVar14;
  IPreAnimatedStorage *pIVar15;
  FPreAnimatedStorageID local_res10 [2];
  FPreAnimatedStorageID local_res20 [2];
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_58;
  undefined1 local_48 [16];
  
  local_res20[0].TypeID = *(uint *)&this->StorageID;
  pTVar10 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
            ::Find(&param_2->StorageImplementations,local_res20);
  if (pTVar10 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    FVar14.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    pIVar15 = pTVar10->Object;
    if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar14.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar14.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_70.ReferenceController = FVar14.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    if (pIVar15 != (IPreAnimatedStorage *)0x0) goto LAB_1469215ce;
  }
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = ::operator_new(0x120);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pIVar15 = (IPreAnimatedStorage *)&DAT_00000010;
LAB_146921459:
    if (((*(longlong *)&pIVar15->field_0x8 == 0) || (*(longlong *)&pIVar15->field_0x10 == 0)) ||
       (*(int *)(*(longlong *)&pIVar15->field_0x10 + 8) < 1)) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IPreAnimatedStorage **)&pIVar15->field_0x8 = pIVar15;
      if (pTVar13 != *(TReferenceControllerBase<1> **)&pIVar15->field_0x10) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar12 = *(longlong **)&pIVar15->field_0x10;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pIVar15->field_0x10 = pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TPreAnimatedPropertyStorageImpl_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_S___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pIVar4 = param_1->TraitsInstance;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[2]._padding_ = 0;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TPreAnimatedStateStorage_U__TPreAnimatedPropertyTraits_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__U__TIntegerSequence_H_S____V_MovieScene_UE___MovieScene_UE__6B_
    ;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar11[5]._padding_ + 4) = 0x80;
    pTVar11[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar11[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[7]._padding_ = 0;
    pTVar11[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[8]._padding_ = 0;
    pTVar11[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar11[10]._padding_ + 4) = 0x80;
    pTVar11[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar11[10].WeakReferenceCount = (atomic<int>)0x0;
    *(IPropertyTraits **)&pTVar11[0xe].SharedReferenceCount = pIVar4;
    pTVar11[0xb]._padding_ = 0;
    pTVar11[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[0xc]._padding_ = 0;
    pTVar11[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[0xd]._padding_ = 0xffffffff;
    pTVar11[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[0xe]._padding_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar11[1]._padding_ =
         (longlong)
         &TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
          ::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>__
    ;
    pTVar11[0xf]._padding_ =
         (longlong)
         &TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
          ::_vftable__for__UE__MovieScene__IPreAnimatedObjectPropertyStorage__;
    *(IPropertyTraits **)&pTVar11[0xf].SharedReferenceCount = param_1->TraitsInstance;
    iVar2 = (param_1->MetaDataTypes).ArrayNum;
    uVar8 = *(undefined4 *)&(param_1->MetaDataTypes).field_0xc;
    pTVar11[0x10]._padding_ = (longlong)(param_1->MetaDataTypes).DataPtr;
    pTVar11[0x10].SharedReferenceCount = (atomic<int>)iVar2;
    pTVar11[0x10].WeakReferenceCount = (atomic<int>)uVar8;
    aVar3 = pTVar11[0x10].SharedReferenceCount;
    pTVar11[0x11]._padding_ = 0;
    pTVar11[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[0x11].WeakReferenceCount = (atomic<int>)0x0;
    if ((aVar3 != (atomic<int>)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MetaDataComponents.Num() == sizeof...(MetaDataIndices)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedPropertyStorage.h"
                           ,0x9d,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar6)();
      return pTVar10;
    }
    pIVar5 = param_1->CustomPropertyRegistration;
    if (pIVar5 != (ICustomPropertyRegistration *)0x0) {
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_48);
      lVar7 = plVar12[1];
      pTVar11[0x11]._padding_ = *plVar12;
      pTVar11[0x11].SharedReferenceCount = (atomic<int>)(int)lVar7;
      pTVar11[0x11].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar7 >> 0x20);
    }
    pIVar15 = (IPreAnimatedStorage *)(pTVar11 + 1);
    pTVar13 = pTVar11;
    if (pIVar15 != (IPreAnimatedStorage *)0x0) goto LAB_146921459;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = 0;
  local_60.ReferenceController = pTVar13;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_70,&local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if ((pIVar15 == (IPreAnimatedStorage *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar6)();
    return pTVar10;
  }
  (**(code **)(*(longlong *)pIVar15 + 0x10))(pIVar15,this->StorageID,param_2);
  FVar14.ReferenceController = local_70.ReferenceController;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10[0].TypeID = *(uint *)&this->StorageID;
  pTVar10 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
            ::Find(&param_2->StorageImplementations,local_res10);
  if ((pTVar10 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar6)();
    return pTVar10;
  }
  local_58.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pIVar15;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&param_2->StorageImplementations,local_res10,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
LAB_1469215ce:
  __return_storage_ptr__->Object = pIVar15;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  return __return_storage_ptr__;
}

// MakeInitialValueProcessor @ 14692d920

TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::MakeInitialValueProcessor
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> *__return_storage_ptr__,
          FPropertyDefinition *param_1)

{
  ushort uVar1;
  IPropertyTraits *pIVar2;
  ICustomPropertyRegistration *pIVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FBuiltInComponentTypes *pFVar7;
  TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  uVar1 = (param_1->InitialValueType).Value;
  pIVar2 = param_1->TraitsInstance;
  pTVar6 = ::operator_new(0x70);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IInitialValueProcessor *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TInitialValueProcessor_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pIVar3 = param_1->CustomPropertyRegistration;
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7__TInitialValueProcessorImpl_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_S___MovieScene_UE__6B_
    ;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pFVar7 = FBuiltInComponentTypes::Get();
    *(ushort *)&pTVar6[3].SharedReferenceCount = uVar1;
    *(FBuiltInComponentTypes **)&pTVar6[2].SharedReferenceCount = pFVar7;
    pTVar6[3]._padding_ = (longlong)pIVar3;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[6]._padding_ = 0;
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7__TInitialValueProcessor_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE___MovieScene_UE__6B_
    ;
    *(IPropertyTraits **)&pTVar6[5].SharedReferenceCount = pIVar2;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
    __return_storage_ptr__->Object = (IInitialValueProcessor *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// MakeInitialValueProcessor @ 14692da40

TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::MakeInitialValueProcessor
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> *__return_storage_ptr__,
          FPropertyDefinition *param_1)

{
  ushort uVar1;
  IPropertyTraits *pIVar2;
  ICustomPropertyRegistration *pIVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FBuiltInComponentTypes *pFVar7;
  TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  uVar1 = (param_1->InitialValueType).Value;
  pIVar2 = param_1->TraitsInstance;
  pTVar6 = ::operator_new(0x70);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IInitialValueProcessor *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TInitialValueProcessor_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pIVar3 = param_1->CustomPropertyRegistration;
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7__TInitialValueProcessorImpl_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_S___MovieScene_UE__6B_
    ;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pFVar7 = FBuiltInComponentTypes::Get();
    *(ushort *)&pTVar6[3].SharedReferenceCount = uVar1;
    *(FBuiltInComponentTypes **)&pTVar6[2].SharedReferenceCount = pFVar7;
    pTVar6[3]._padding_ = (longlong)pIVar3;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[6]._padding_ = 0;
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7__TInitialValueProcessor_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE___MovieScene_UE__6B_
    ;
    *(IPropertyTraits **)&pTVar6[5].SharedReferenceCount = pIVar2;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
    __return_storage_ptr__->Object = (IInitialValueProcessor *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// RebuildOperational @ 1469344b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::RebuildOperational
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          TArrayView<UE::MovieScene::FMovieSceneEntityID,int> *param_3,
          UMovieSceneEntitySystemLinker *param_4,FPropertyComponentArrayView *param_5)

{
  int iVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  void *pvVar6;
  code *pcVar7;
  FEntityAllocation *pFVar8;
  undefined8 uVar9;
  FPropertyCompositeDefinition *pFVar10;
  bool bVar11;
  uint uVar12;
  FEntityInfo *pFVar13;
  int iVar14;
  FComponentHeader *pFVar15;
  uchar *puVar16;
  uchar *puVar17;
  uint uVar18;
  FEntityManager *this_00;
  longlong lVar19;
  uchar *puVar20;
  FComponentHeader *local_f8;
  FComponentHeader *local_e0;
  FComponentHeader *local_c8;
  FComponentHeader *local_b0;
  uchar *local_98;
  int iStack_90;
  FEntityInfo local_68 [2];
  
  if ((param_5->DataSizeof != 0x20) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("sizeof(T) == DataSizeof",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\IMovieScenePropertyComponentHandler.h"
                          ,0x74,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pvVar6 = param_5->Data;
  iVar1 = param_5->ArrayNum;
  if ((iVar1 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2->ArrayNum != 4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Composites.Num() == NumComposites",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                          ,0x281,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar1 != param_3->ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedResults.Num() == EntityIDs.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                          ,0x283,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  this_00 = &param_4->EntityManager;
  param_5._0_4_ = 0;
  if (0 < iVar14) {
    param_4 = (UMovieSceneEntitySystemLinker *)0x0;
    do {
      puVar20 = (uchar *)0x0;
      uVar18 = ~(uint)param_5 >> 0x1f;
      uVar12 = 0;
      if ((int)(uint)param_5 < iVar14) {
        uVar12 = uVar18;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (param_3->DataPtr[(longlong)param_4].Value != 0xffff) {
        uVar12 = 0;
        if ((int)(uint)param_5 < param_3->ArrayNum) {
          uVar12 = uVar18;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar13 = FEntityManager::GetEntity
                            (this_00,local_68,
                             (FMovieSceneEntityID)param_3->DataPtr[(longlong)param_4].Value);
        pFVar8 = (pFVar13->Data).Allocation;
        uVar9 = *(undefined8 *)&(pFVar13->Data).ComponentOffset;
        if ((param_2->ArrayNum < 4) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_b0 = pFVar8->ComponentHeaders;
        pFVar15 = local_b0 + pFVar8->NumComponents;
        for (; local_b0 != pFVar15; local_b0 = local_b0 + 1) {
          if ((local_b0->ComponentType).Value == param_2->DataPtr[3].ComponentTypeID.Value) {
            EVar2 = pFVar8->LockMode;
            if (EVar2 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_b0->ReadWriteLock);
            }
            LOCK();
            local_b0->ScheduledAccessCount = (atomic<int>)((int)local_b0->ScheduledAccessCount + 1);
            UNLOCK();
            local_98 = local_b0->Components;
            goto LAB_14693471e;
          }
        }
        local_b0 = (FComponentHeader *)0x0;
        EVar2 = LockFree;
        local_98 = puVar20;
LAB_14693471e:
        iStack_90 = (int)uVar9;
        lVar19 = (longlong)iStack_90;
        if (local_98 == (uchar *)0x0) {
          local_98 = (uchar *)0x0;
        }
        else {
          local_98 = local_98 + lVar19 * 8;
        }
        if ((param_2->ArrayNum < 3) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_c8 = pFVar8->ComponentHeaders;
        pFVar15 = local_c8 + pFVar8->NumComponents;
        for (; local_c8 != pFVar15; local_c8 = local_c8 + 1) {
          if ((local_c8->ComponentType).Value == param_2->DataPtr[2].ComponentTypeID.Value) {
            EVar3 = pFVar8->LockMode;
            if (EVar3 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_c8->ReadWriteLock);
            }
            LOCK();
            local_c8->ScheduledAccessCount = (atomic<int>)((int)local_c8->ScheduledAccessCount + 1);
            UNLOCK();
            puVar16 = local_c8->Components;
            goto LAB_1469347e4;
          }
        }
        local_c8 = (FComponentHeader *)0x0;
        EVar3 = LockFree;
        puVar16 = puVar20;
LAB_1469347e4:
        puVar17 = puVar16 + lVar19 * 8;
        if (puVar16 == (uchar *)0x0) {
          puVar17 = puVar20;
        }
        if ((param_2->ArrayNum < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_e0 = pFVar8->ComponentHeaders;
        pFVar15 = local_e0 + pFVar8->NumComponents;
        for (; local_e0 != pFVar15; local_e0 = local_e0 + 1) {
          if ((local_e0->ComponentType).Value == param_2->DataPtr[1].ComponentTypeID.Value) {
            EVar4 = pFVar8->LockMode;
            if (EVar4 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_e0->ReadWriteLock);
            }
            LOCK();
            local_e0->ScheduledAccessCount = (atomic<int>)((int)local_e0->ScheduledAccessCount + 1);
            UNLOCK();
            puVar16 = local_e0->Components;
            goto LAB_146934874;
          }
        }
        local_e0 = (FComponentHeader *)0x0;
        EVar4 = LockFree;
        puVar16 = puVar20;
LAB_146934874:
        if (puVar16 != (uchar *)0x0) {
          puVar20 = puVar16 + lVar19 * 8;
        }
        if ((param_2->ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_f8 = pFVar8->ComponentHeaders;
        pFVar15 = local_f8 + pFVar8->NumComponents;
        for (; local_f8 != pFVar15; local_f8 = local_f8 + 1) {
          if ((local_f8->ComponentType).Value == (param_2->DataPtr->ComponentTypeID).Value) {
            EVar5 = pFVar8->LockMode;
            if (EVar5 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_f8->ReadWriteLock);
            }
            LOCK();
            local_f8->ScheduledAccessCount = (atomic<int>)((int)local_f8->ScheduledAccessCount + 1);
            UNLOCK();
            puVar16 = local_f8->Components;
            goto LAB_146934907;
          }
        }
        local_f8 = (FComponentHeader *)0x0;
        EVar5 = LockFree;
        puVar16 = (uchar *)0x0;
LAB_146934907:
        if (puVar16 == (uchar *)0x0) {
          puVar16 = (uchar *)0x0;
        }
        else {
          puVar16 = puVar16 + lVar19 * 8;
        }
        uVar12 = 0;
        if ((int)(uint)param_5 < iVar1) {
          uVar12 = uVar18;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar10 = param_2->DataPtr;
        iVar14 = param_2->ArrayNum;
        if ((iVar14 < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (puVar16 != (uchar *)0x0) {
          *(undefined8 *)
           ((longlong)pvVar6 + (ulonglong)pFVar10->CompositeOffset + (longlong)param_4 * 0x20) =
               *(undefined8 *)puVar16;
        }
        if ((iVar14 < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (puVar20 != (uchar *)0x0) {
          *(undefined8 *)
           ((longlong)pvVar6 + (ulonglong)pFVar10[1].CompositeOffset + (longlong)param_4 * 0x20) =
               *(undefined8 *)puVar20;
        }
        if ((iVar14 < 3) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (puVar17 != (uchar *)0x0) {
          *(undefined8 *)
           ((longlong)pvVar6 + (ulonglong)pFVar10[2].CompositeOffset + (longlong)param_4 * 0x20) =
               *(undefined8 *)puVar17;
        }
        if ((iVar14 < 4) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_98 != (uchar *)0x0) {
          *(undefined8 *)
           ((longlong)pvVar6 + (ulonglong)pFVar10[3].CompositeOffset + (longlong)param_4 * 0x20) =
               *(undefined8 *)local_98;
        }
        if (local_f8 != (FComponentHeader *)0x0) {
          LOCK();
          local_f8->ScheduledAccessCount = (atomic<int>)((int)local_f8->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar5 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_f8->ReadWriteLock);
          }
        }
        if (local_e0 != (FComponentHeader *)0x0) {
          LOCK();
          local_e0->ScheduledAccessCount = (atomic<int>)((int)local_e0->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar4 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_e0->ReadWriteLock);
          }
        }
        if (local_c8 != (FComponentHeader *)0x0) {
          LOCK();
          local_c8->ScheduledAccessCount = (atomic<int>)((int)local_c8->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar3 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_c8->ReadWriteLock);
          }
        }
        if (local_b0 != (FComponentHeader *)0x0) {
          LOCK();
          local_b0->ScheduledAccessCount = (atomic<int>)((int)local_b0->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar2 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_b0->ReadWriteLock);
          }
        }
      }
      iVar14 = param_3->ArrayNum;
      param_5._0_4_ = (uint)param_5 + 1;
      param_4 = (UMovieSceneEntitySystemLinker *)((longlong)&param_4->_padding_ + 1);
    } while ((int)(uint)param_5 < iVar14);
  }
  return;
}

// RebuildOperational @ 146934c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::RebuildOperational
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          TArrayView<UE::MovieScene::FMovieSceneEntityID,int> *param_3,
          UMovieSceneEntitySystemLinker *param_4,FPropertyComponentArrayView *param_5)

{
  int iVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  EComponentHeaderLockMode EVar7;
  EComponentHeaderLockMode EVar8;
  void *pvVar9;
  code *pcVar10;
  FEntityAllocation *pFVar11;
  undefined8 uVar12;
  FPropertyComponentArrayView *pFVar13;
  bool bVar14;
  uint uVar15;
  FEntityInfo *pFVar16;
  int iVar17;
  double *pdVar18;
  uchar *puVar19;
  FComponentHeader *pFVar20;
  uint uVar21;
  FComponentHeader *pFVar22;
  FComponentHeader *pFVar23;
  double *pdVar24;
  double *pdVar25;
  FEntityManager *this_00;
  double *pdVar26;
  longlong lVar27;
  longlong local_160;
  FComponentHeader *local_158;
  double *local_138;
  double *local_130;
  FComponentHeader *local_f8;
  FComponentHeader *local_e0;
  FComponentHeader *local_c8;
  FComponentHeader *local_b0;
  double *local_98;
  int iStack_90;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_78;
  FEntityInfo local_68 [2];
  
  pFVar13 = param_5;
  if ((param_5->DataSizeof != 0x38) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("sizeof(T) == DataSizeof",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\IMovieScenePropertyComponentHandler.h"
                          ,0x74,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pvVar9 = pFVar13->Data;
  iVar1 = pFVar13->ArrayNum;
  if ((iVar1 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((param_2->ArrayNum != 7) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Composites.Num() == NumComposites",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                          ,0x281,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((iVar1 != param_3->ArrayNum) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedResults.Num() == EntityIDs.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                          ,0x283,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar17 = param_3->ArrayNum;
  this_00 = &param_4->EntityManager;
  param_4._0_4_ = 0;
  if (0 < iVar17) {
    local_160 = 0;
    do {
      pdVar24 = (double *)0x0;
      uVar21 = ~(uint)param_4 >> 0x1f;
      uVar15 = 0;
      if ((int)(uint)param_4 < iVar17) {
        uVar15 = uVar21;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (*(short *)((longlong)&param_3->DataPtr->Value + local_160) != -1) {
        uVar15 = 0;
        if ((int)(uint)param_4 < param_3->ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar16 = FEntityManager::GetEntity
                            (this_00,local_68,
                             (FMovieSceneEntityID)param_3->DataPtr[(int)(uint)param_4].Value);
        pFVar11 = (pFVar16->Data).Allocation;
        uVar12 = *(undefined8 *)&(pFVar16->Data).ComponentOffset;
        if ((param_2->ArrayNum < 7) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_b0 = pFVar11->ComponentHeaders;
        pFVar23 = local_b0 + pFVar11->NumComponents;
        for (; local_b0 != pFVar23; local_b0 = local_b0 + 1) {
          if ((local_b0->ComponentType).Value == param_2->DataPtr[6].ComponentTypeID.Value) {
            EVar2 = pFVar11->LockMode;
            if (EVar2 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_b0->ReadWriteLock);
            }
            LOCK();
            local_b0->ScheduledAccessCount = (atomic<int>)((int)local_b0->ScheduledAccessCount + 1);
            UNLOCK();
            local_138 = (double *)local_b0->Components;
            goto LAB_146934ea4;
          }
        }
        local_b0 = (FComponentHeader *)0x0;
        EVar2 = LockFree;
        local_138 = pdVar24;
LAB_146934ea4:
        iStack_90 = (int)uVar12;
        lVar27 = (longlong)iStack_90;
        if (local_138 == (double *)0x0) {
          local_138 = (double *)0x0;
        }
        else {
          local_138 = local_138 + lVar27;
        }
        if ((param_2->ArrayNum < 6) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_c8 = pFVar11->ComponentHeaders;
        pFVar23 = local_c8 + pFVar11->NumComponents;
        for (; local_c8 != pFVar23; local_c8 = local_c8 + 1) {
          if ((local_c8->ComponentType).Value == param_2->DataPtr[5].ComponentTypeID.Value) {
            EVar3 = pFVar11->LockMode;
            if (EVar3 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_c8->ReadWriteLock);
            }
            LOCK();
            local_c8->ScheduledAccessCount = (atomic<int>)((int)local_c8->ScheduledAccessCount + 1);
            UNLOCK();
            local_130 = (double *)local_c8->Components;
            goto LAB_146934f66;
          }
        }
        local_c8 = (FComponentHeader *)0x0;
        EVar3 = LockFree;
        local_130 = pdVar24;
LAB_146934f66:
        if (local_130 == (double *)0x0) {
          local_130 = (double *)0x0;
        }
        else {
          local_130 = local_130 + lVar27;
        }
        if ((param_2->ArrayNum < 5) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_e0 = pFVar11->ComponentHeaders;
        pFVar23 = local_e0 + pFVar11->NumComponents;
        for (; local_e0 != pFVar23; local_e0 = local_e0 + 1) {
          if ((local_e0->ComponentType).Value == param_2->DataPtr[4].ComponentTypeID.Value) {
            EVar4 = pFVar11->LockMode;
            if (EVar4 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_e0->ReadWriteLock);
            }
            LOCK();
            local_e0->ScheduledAccessCount = (atomic<int>)((int)local_e0->ScheduledAccessCount + 1);
            UNLOCK();
            local_98 = (double *)local_e0->Components;
            goto LAB_14693501f;
          }
        }
        local_e0 = (FComponentHeader *)0x0;
        EVar4 = LockFree;
        local_98 = pdVar24;
LAB_14693501f:
        if (local_98 == (double *)0x0) {
          local_98 = (double *)0x0;
        }
        else {
          local_98 = local_98 + lVar27;
        }
        if ((param_2->ArrayNum < 4) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_f8 = pFVar11->ComponentHeaders;
        pFVar23 = local_f8 + pFVar11->NumComponents;
        for (; local_f8 != pFVar23; local_f8 = local_f8 + 1) {
          if ((local_f8->ComponentType).Value == param_2->DataPtr[3].ComponentTypeID.Value) {
            EVar5 = pFVar11->LockMode;
            if (EVar5 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_f8->ReadWriteLock);
            }
            LOCK();
            local_f8->ScheduledAccessCount = (atomic<int>)((int)local_f8->ScheduledAccessCount + 1);
            UNLOCK();
            pdVar18 = (double *)local_f8->Components;
            goto LAB_1469350e2;
          }
        }
        local_f8 = (FComponentHeader *)0x0;
        EVar5 = LockFree;
        pdVar18 = pdVar24;
LAB_1469350e2:
        pdVar25 = pdVar18 + lVar27;
        if (pdVar18 == (double *)0x0) {
          pdVar25 = pdVar24;
        }
        if ((param_2->ArrayNum < 3) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_158 = pFVar11->ComponentHeaders;
        pFVar23 = local_158 + pFVar11->NumComponents;
        for (; local_158 != pFVar23; local_158 = local_158 + 1) {
          if ((local_158->ComponentType).Value == param_2->DataPtr[2].ComponentTypeID.Value) {
            EVar6 = pFVar11->LockMode;
            if (EVar6 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_158->ReadWriteLock);
            }
            LOCK();
            local_158->ScheduledAccessCount =
                 (atomic<int>)((int)local_158->ScheduledAccessCount + 1);
            UNLOCK();
            pdVar18 = (double *)local_158->Components;
            goto LAB_146935177;
          }
        }
        local_158 = (FComponentHeader *)0x0;
        EVar6 = LockFree;
        pdVar18 = pdVar24;
LAB_146935177:
        if (pdVar18 != (double *)0x0) {
          pdVar24 = pdVar18 + lVar27;
        }
        if ((param_2->ArrayNum < 2) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar23 = pFVar11->ComponentHeaders;
        pFVar22 = pFVar23 + pFVar11->NumComponents;
        for (; pFVar23 != pFVar22; pFVar23 = pFVar23 + 1) {
          if ((pFVar23->ComponentType).Value == param_2->DataPtr[1].ComponentTypeID.Value) {
            EVar7 = pFVar11->LockMode;
            if (EVar7 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&pFVar23->ReadWriteLock);
            }
            LOCK();
            pFVar23->ScheduledAccessCount = (atomic<int>)((int)pFVar23->ScheduledAccessCount + 1);
            UNLOCK();
            puVar19 = pFVar23->Components;
            goto LAB_146935201;
          }
        }
        pFVar23 = (FComponentHeader *)0x0;
        EVar7 = LockFree;
        puVar19 = (uchar *)0x0;
LAB_146935201:
        if (puVar19 == (uchar *)0x0) {
          pdVar18 = (double *)0x0;
        }
        else {
          pdVar18 = (double *)(puVar19 + lVar27 * 8);
        }
        if ((param_2->ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar22 = pFVar11->ComponentHeaders;
        pFVar20 = pFVar22 + pFVar11->NumComponents;
        for (; pFVar22 != pFVar20; pFVar22 = pFVar22 + 1) {
          if ((pFVar22->ComponentType).Value == (param_2->DataPtr->ComponentTypeID).Value) {
            EVar8 = pFVar11->LockMode;
            if (EVar8 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&pFVar22->ReadWriteLock);
            }
            LOCK();
            pFVar22->ScheduledAccessCount = (atomic<int>)((int)pFVar22->ScheduledAccessCount + 1);
            UNLOCK();
            puVar19 = pFVar22->Components;
            goto LAB_14693531b;
          }
        }
        pFVar22 = (FComponentHeader *)0x0;
        EVar8 = LockFree;
        puVar19 = (uchar *)0x0;
LAB_14693531b:
        if (puVar19 == (uchar *)0x0) {
          pdVar26 = (double *)0x0;
        }
        else {
          pdVar26 = (double *)(puVar19 + (longlong)iStack_90 * 8);
        }
        uVar15 = 0;
        if ((int)(uint)param_4 < iVar1) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_78.DataPtr = param_2->DataPtr;
        local_78.ArrayNum = param_2->ArrayNum;
        local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
        PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6>
                  ((TIntegerSequence<int,0,1,2,3,4,5,6> *)&param_5,&local_78,
                   (uchar *)((longlong)(int)(uint)param_4 * 0x38 + (longlong)pvVar9),pdVar26,pdVar18
                   ,pdVar24,pdVar25,local_98,local_130,local_138);
        if (pFVar22 != (FComponentHeader *)0x0) {
          LOCK();
          pFVar22->ScheduledAccessCount = (atomic<int>)((int)pFVar22->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar8 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&pFVar22->ReadWriteLock);
          }
        }
        if (pFVar23 != (FComponentHeader *)0x0) {
          LOCK();
          pFVar23->ScheduledAccessCount = (atomic<int>)((int)pFVar23->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar7 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&pFVar23->ReadWriteLock);
          }
        }
        if (local_158 != (FComponentHeader *)0x0) {
          LOCK();
          local_158->ScheduledAccessCount = (atomic<int>)((int)local_158->ScheduledAccessCount + -1)
          ;
          UNLOCK();
          if (EVar6 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_158->ReadWriteLock);
          }
        }
        if (local_f8 != (FComponentHeader *)0x0) {
          LOCK();
          local_f8->ScheduledAccessCount = (atomic<int>)((int)local_f8->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar5 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_f8->ReadWriteLock);
          }
        }
        if (local_e0 != (FComponentHeader *)0x0) {
          LOCK();
          local_e0->ScheduledAccessCount = (atomic<int>)((int)local_e0->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar4 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_e0->ReadWriteLock);
          }
        }
        if (local_c8 != (FComponentHeader *)0x0) {
          LOCK();
          local_c8->ScheduledAccessCount = (atomic<int>)((int)local_c8->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar3 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_c8->ReadWriteLock);
          }
        }
        if (local_b0 != (FComponentHeader *)0x0) {
          LOCK();
          local_b0->ScheduledAccessCount = (atomic<int>)((int)local_b0->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar2 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_b0->ReadWriteLock);
          }
        }
      }
      local_160 = local_160 + 2;
      param_4._0_4_ = (uint)param_4 + 1;
      iVar17 = param_3->ArrayNum;
    } while ((int)(uint)param_4 < iVar17);
  }
  return;
}

// RecomposeBlendChannel @ 146937220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::RecomposeBlendChannel
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,int param_3,
          FValueDecompositionParams *param_4,UMovieSceneBlenderSystem *param_5,double param_6,
          TArrayView<double,int> *param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  FPropertyCompositeDefinition *pFVar7;
  UClass *pUVar8;
  longlong *plVar9;
  FTaskGraphInterface *this_00;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateMargin>_> *pTVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FEntityManager *this_01;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int local_180;
  TRefCountPtr<FBaseGraphTask> local_178;
  longlong local_170;
  FPropertyCompositeDefinition *local_168;
  FEntityManager *local_160;
  FMovieSceneEntityID *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  ushort uStack_134;
  undefined2 uStack_132;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateMargin>_> local_130 [2];
  FDecomposedValue local_100 [2];
  
  if ((param_7->ArrayNum != (param_4->Query).Entities.ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutResults.Num() == InParams.Query.Entities.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                         ,0x245,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum != 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Composites.Num() == NumComposites",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                         ,0x248,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>::operator[]
                     (param_2,param_3);
  if (param_5 != (UMovieSceneBlenderSystem *)0x0) {
    local_168 = pFVar7;
    pUVar8 = Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
    plVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_5,pUVar8);
    if (plVar9 != (longlong *)0x0) {
      lVar15 = param_5->_padding_;
      lVar17 = 0;
      *(undefined4 *)(lVar15 + 0x2d4) = 0;
      local_158 = (param_4->Query).Entities.DataPtr;
      uStack_150 = *(undefined8 *)&(param_4->Query).Entities.ArrayNum;
      local_100[0].Result.Absolute.TotalWeight = 0.0;
      this_01 = (FEntityManager *)(lVar15 + 0x28);
      local_100[0].AllDecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100[0].Result.Absolute.Total = 0.0;
      local_100[0].Result.Additive = 0.0;
      local_148 = *(undefined4 *)&(param_4->Query).bConvertFromSourceEntityIDs;
      uStack_144 = *(undefined4 *)&(param_4->Query).field_0x14;
      uStack_140 = *(undefined4 *)&(param_4->Query).Object;
      uStack_13c = *(undefined4 *)((longlong)&(param_4->Query).Object + 4);
      local_100[0].AllDecomposedOverrides.ArrayNum = 0;
      local_100[0].AllDecomposedOverrides.ArrayMax = 0;
      local_100[0].DecomposedAbsolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar2._0_2_ = param_4->DecomposeBlendChannel;
      uVar2._2_2_ = param_4->PropertyEntityID;
      uVar2._4_2_ = param_4->ResultComponentType;
      uVar2._6_2_ = param_4->PropertyTag;
      local_100[0].DecomposedAbsolutes.ArrayNum = 0;
      local_100[0].DecomposedAbsolutes.ArrayMax = 0;
      local_100[0].DecomposedAdditives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100[0].DecomposedAdditives.ArrayNum = 0;
      local_100[0].DecomposedAdditives.ArrayMax = 0;
      local_100[0].DecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100[0].DecomposedOverrides.ArrayNum = 0;
      local_100[0].DecomposedOverrides.ArrayMax = 0;
      _local_138 = CONCAT26(uVar2._6_2_,CONCAT24((pFVar7->ComponentTypeID).Value,(int)uVar2));
      local_160 = this_01;
      (**(code **)(*plVar9 + 0x10))(plVar9,&local_178,&local_158);
      if (local_178.Reference != (FBaseGraphTask *)0x0) {
        this_00 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(this_00,&local_178,GameThread);
      }
      local_170 = 0;
      lVar15 = 0;
      if ((param_4->PropertyEntityID).Value != 0xffff) {
        pTVar10 = FEntityManager::ReadComponent<UE::MovieScene::FIntermediateMargin>
                            (this_01,local_130,
                             (FMovieSceneEntityID)(param_4->PropertyEntityID).Value,
                             (TComponentTypeID<UE::MovieScene::FIntermediateMargin>)
                             (param_1->InitialValueType).Value);
        lVar15 = *(longlong *)pTVar10;
        local_180 = *(int *)&pTVar10->field_0x8;
        *(undefined8 *)pTVar10 = 0;
        lVar17 = *(longlong *)&pTVar10->field_0x10;
        *(undefined8 *)&pTVar10->field_0x10 = 0;
        local_170 = lVar15;
        if (local_130[0]._0_8_ != 0) {
          LOCK();
          *(int *)(local_130[0]._0_8_ + 0x30) = *(int *)(local_130[0]._0_8_ + 0x30) + -1;
          UNLOCK();
          if (local_130[0]._8_4_ == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_130[0]._0_8_ + 0x20));
          }
        }
      }
      uVar12 = 0;
      if (0 < (int)uStack_150) {
        lVar13 = 0;
        lVar16 = 0;
        iVar11 = (int)uStack_150;
        do {
          uVar6 = 0;
          if ((int)uVar12 < iVar11) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar11 = (int)uStack_150;
          }
          if ((param_1->DoubleCompositeMask >> (param_3 & 0x1fU) & 1) != 0) {
            pdVar14 = (double *)0x0;
            if (lVar17 != 0) {
              pdVar14 = (double *)((ulonglong)local_168->CompositeOffset + lVar17);
            }
            dVar4 = FDecomposedValue::Recompose
                              (local_100,
                               (FMovieSceneEntityID)
                               *(ushort *)((longlong)&local_158->Value + lVar16),param_6,pdVar14);
            uVar6 = 0;
            if ((int)uVar12 < param_7->ArrayNum) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            *(double *)(lVar13 + (longlong)param_7->DataPtr) = dVar4;
            iVar11 = (int)uStack_150;
          }
          uVar12 = uVar12 + 1;
          lVar16 = lVar16 + 2;
          lVar13 = lVar13 + 8;
          this_01 = local_160;
          lVar15 = local_170;
        } while ((int)uVar12 < iVar11);
      }
      this_01->LockdownState = Unlocked;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + -1;
        UNLOCK();
        if (local_180 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar15 + 0x20));
        }
      }
      if (local_178.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(local_178.Reference)->field_0x30;
        iVar11 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (local_178.Reference != (FBaseGraphTask *)0x0)) {
          (*(code *)**(undefined8 **)local_178.Reference)(local_178.Reference,1);
        }
      }
      if (local_100[0].DecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_100[0].DecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_100[0].DecomposedAdditives.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_100[0].DecomposedAdditives.AllocatorInstance.Data);
      }
      if (local_100[0].DecomposedAbsolutes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_100[0].DecomposedAbsolutes.AllocatorInstance.Data);
      }
      if (local_100[0].AllDecomposedOverrides.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100[0].AllDecomposedOverrides.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RecomposeBlendChannel @ 146937610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::RecomposeBlendChannel
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,int param_3,
          FValueDecompositionParams *param_4,UMovieSceneBlenderSystem *param_5,double param_6,
          TArrayView<double,int> *param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  FPropertyCompositeDefinition *pFVar7;
  UClass *pUVar8;
  longlong *plVar9;
  FTaskGraphInterface *this_00;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateWidgetTransform>_>
  *pTVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FEntityManager *this_01;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int local_180;
  TRefCountPtr<FBaseGraphTask> local_178;
  longlong local_170;
  FPropertyCompositeDefinition *local_168;
  FEntityManager *local_160;
  FMovieSceneEntityID *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  ushort uStack_134;
  undefined2 uStack_132;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateWidgetTransform>_>
  local_130 [2];
  FDecomposedValue local_100 [2];
  
  if ((param_7->ArrayNum != (param_4->Query).Entities.ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutResults.Num() == InParams.Query.Entities.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                         ,0x245,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum != 7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Composites.Num() == NumComposites",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                         ,0x248,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>::operator[]
                     (param_2,param_3);
  if (param_5 != (UMovieSceneBlenderSystem *)0x0) {
    local_168 = pFVar7;
    pUVar8 = Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
    plVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_5,pUVar8);
    if (plVar9 != (longlong *)0x0) {
      lVar15 = param_5->_padding_;
      lVar17 = 0;
      *(undefined4 *)(lVar15 + 0x2d4) = 0;
      local_158 = (param_4->Query).Entities.DataPtr;
      uStack_150 = *(undefined8 *)&(param_4->Query).Entities.ArrayNum;
      local_100[0].Result.Absolute.TotalWeight = 0.0;
      this_01 = (FEntityManager *)(lVar15 + 0x28);
      local_100[0].AllDecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100[0].Result.Absolute.Total = 0.0;
      local_100[0].Result.Additive = 0.0;
      local_148 = *(undefined4 *)&(param_4->Query).bConvertFromSourceEntityIDs;
      uStack_144 = *(undefined4 *)&(param_4->Query).field_0x14;
      uStack_140 = *(undefined4 *)&(param_4->Query).Object;
      uStack_13c = *(undefined4 *)((longlong)&(param_4->Query).Object + 4);
      local_100[0].AllDecomposedOverrides.ArrayNum = 0;
      local_100[0].AllDecomposedOverrides.ArrayMax = 0;
      local_100[0].DecomposedAbsolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar2._0_2_ = param_4->DecomposeBlendChannel;
      uVar2._2_2_ = param_4->PropertyEntityID;
      uVar2._4_2_ = param_4->ResultComponentType;
      uVar2._6_2_ = param_4->PropertyTag;
      local_100[0].DecomposedAbsolutes.ArrayNum = 0;
      local_100[0].DecomposedAbsolutes.ArrayMax = 0;
      local_100[0].DecomposedAdditives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100[0].DecomposedAdditives.ArrayNum = 0;
      local_100[0].DecomposedAdditives.ArrayMax = 0;
      local_100[0].DecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100[0].DecomposedOverrides.ArrayNum = 0;
      local_100[0].DecomposedOverrides.ArrayMax = 0;
      _local_138 = CONCAT26(uVar2._6_2_,CONCAT24((pFVar7->ComponentTypeID).Value,(int)uVar2));
      local_160 = this_01;
      (**(code **)(*plVar9 + 0x10))(plVar9,&local_178,&local_158);
      if (local_178.Reference != (FBaseGraphTask *)0x0) {
        this_00 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(this_00,&local_178,GameThread);
      }
      local_170 = 0;
      lVar15 = 0;
      if ((param_4->PropertyEntityID).Value != 0xffff) {
        pTVar10 = FEntityManager::ReadComponent<UE::MovieScene::FIntermediateWidgetTransform>
                            (this_01,local_130,
                             (FMovieSceneEntityID)(param_4->PropertyEntityID).Value,
                             (TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform>)
                             (param_1->InitialValueType).Value);
        lVar15 = *(longlong *)pTVar10;
        local_180 = *(int *)&pTVar10->field_0x8;
        *(undefined8 *)pTVar10 = 0;
        lVar17 = *(longlong *)&pTVar10->field_0x10;
        *(undefined8 *)&pTVar10->field_0x10 = 0;
        local_170 = lVar15;
        if (local_130[0]._0_8_ != 0) {
          LOCK();
          *(int *)(local_130[0]._0_8_ + 0x30) = *(int *)(local_130[0]._0_8_ + 0x30) + -1;
          UNLOCK();
          if (local_130[0]._8_4_ == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_130[0]._0_8_ + 0x20));
          }
        }
      }
      uVar12 = 0;
      if (0 < (int)uStack_150) {
        lVar13 = 0;
        lVar16 = 0;
        iVar11 = (int)uStack_150;
        do {
          uVar6 = 0;
          if ((int)uVar12 < iVar11) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar11 = (int)uStack_150;
          }
          if ((param_1->DoubleCompositeMask >> (param_3 & 0x1fU) & 1) != 0) {
            pdVar14 = (double *)0x0;
            if (lVar17 != 0) {
              pdVar14 = (double *)((ulonglong)local_168->CompositeOffset + lVar17);
            }
            dVar4 = FDecomposedValue::Recompose
                              (local_100,
                               (FMovieSceneEntityID)
                               *(ushort *)((longlong)&local_158->Value + lVar16),param_6,pdVar14);
            uVar6 = 0;
            if ((int)uVar12 < param_7->ArrayNum) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            *(double *)(lVar13 + (longlong)param_7->DataPtr) = dVar4;
            iVar11 = (int)uStack_150;
          }
          uVar12 = uVar12 + 1;
          lVar16 = lVar16 + 2;
          lVar13 = lVar13 + 8;
          this_01 = local_160;
          lVar15 = local_170;
        } while ((int)uVar12 < iVar11);
      }
      this_01->LockdownState = Unlocked;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + -1;
        UNLOCK();
        if (local_180 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar15 + 0x20));
        }
      }
      if (local_178.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(local_178.Reference)->field_0x30;
        iVar11 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (local_178.Reference != (FBaseGraphTask *)0x0)) {
          (*(code *)**(undefined8 **)local_178.Reference)(local_178.Reference,1);
        }
      }
      if (local_100[0].DecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_100[0].DecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_100[0].DecomposedAdditives.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_100[0].DecomposedAdditives.AllocatorInstance.Data);
      }
      if (local_100[0].DecomposedAbsolutes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_100[0].DecomposedAbsolutes.AllocatorInstance.Data);
      }
      if (local_100[0].AllDecomposedOverrides.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100[0].AllDecomposedOverrides.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RecomposeBlendImpl @ 146937a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::RecomposeBlendImpl
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FValueDecompositionParams *param_3,UMovieSceneBlenderSystem *param_4,
          FIntermediateMargin *param_5,
          TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> *param_6)

{
  undefined1 *puVar1;
  double dVar2;
  FMovieSceneEntityID FVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  FValueDecompositionParams *pFVar7;
  TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> *pTVar8;
  bool bVar9;
  UClass *pUVar10;
  longlong *plVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  FPropertyDefinition *pFVar13;
  FTaskGraphInterface *pFVar14;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateMargin>_> *pTVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  TRefCountPtr<FBaseGraphTask> *pTVar20;
  double *pdVar21;
  uint uVar22;
  FDecomposedValue *pFVar24;
  TRefCountPtr<FBaseGraphTask> *pTVar25;
  undefined1 auStack_3a8 [32];
  TRefCountPtr<FBaseGraphTask> *local_388;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_368;
  FPropertyDefinition *local_340;
  int local_338;
  TRefCountPtr<FBaseGraphTask> local_330;
  FIntermediateMargin *local_328;
  FValueDecompositionParams *local_320;
  longlong local_318;
  FEntityManager *local_310;
  longlong local_308;
  TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> *local_300;
  FMovieSceneEntityID *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  UObject *pUStack_2e0;
  undefined8 local_2d8;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateMargin>_> local_2d0;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_2b8;
  int local_290;
  int local_28c [3];
  FDecomposedValue local_280;
  FDecomposedValue local_200;
  FDecomposedValue local_180;
  FDecomposedValue local_100;
  ulonglong local_80;
  TRefCountPtr<FBaseGraphTask> *pTVar23;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_328 = param_5;
  local_300 = param_6;
  local_340 = param_1;
  local_320 = param_3;
  if ((param_6->ArrayNum != (param_3->Query).Entities.ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutResults.Num() == InParams.Query.Entities.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                         ,0x1f7,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (param_4 != (UMovieSceneBlenderSystem *)0x0) {
    pUVar10 = Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
    plVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_4,pUVar10);
    if (plVar11 != (longlong *)0x0) {
      pTVar20 = (TRefCountPtr<FBaseGraphTask> *)0x0;
      local_310 = (FEntityManager *)(param_4->_padding_ + 0x28);
      iVar5 = param_2->ArrayNum;
      *(undefined4 *)(param_4->_padding_ + 0x2d4) = 0;
      if ((iVar5 != 4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Composites.Num() == NumComposites",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                             ,0x203,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_2f8 = (param_3->Query).Entities.DataPtr;
      uStack_2f0 = *(undefined8 *)&(param_3->Query).Entities.ArrayNum;
      pFVar24 = &local_280;
      local_280.Result.Absolute.TotalWeight = 0.0;
      local_280.Result.Absolute.Total = 0.0;
      uVar19 = 1;
      local_280.Result.Additive = 0.0;
      local_200.Result.Absolute.Total = 0.0;
      local_200.Result.Additive = 0.0;
      local_180.Result.Absolute.Total = 0.0;
      local_180.Result.Additive = 0.0;
      local_100.Result.Absolute.Total = 0.0;
      local_100.Result.Additive = 0.0;
      local_2e8 = *(undefined8 *)&(param_3->Query).bConvertFromSourceEntityIDs;
      pUStack_2e0 = (param_3->Query).Object;
      local_280.AllDecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.AllDecomposedOverrides.ArrayNum = 0;
      local_280.AllDecomposedOverrides.ArrayMax = 0;
      local_2d8._0_2_ = param_3->DecomposeBlendChannel;
      local_2d8._2_2_ = param_3->PropertyEntityID;
      local_2d8._4_2_ = param_3->ResultComponentType;
      local_2d8._6_2_ = param_3->PropertyTag;
      local_280.DecomposedAbsolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.DecomposedAbsolutes.ArrayNum = 0;
      local_280.DecomposedAbsolutes.ArrayMax = 0;
      local_280.DecomposedAdditives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.DecomposedAdditives.ArrayNum = 0;
      local_280.DecomposedAdditives.ArrayMax = 0;
      local_280.DecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.DecomposedOverrides.ArrayNum = 0;
      local_280.DecomposedOverrides.ArrayMax = 0;
      local_200.Result.Absolute.TotalWeight = 0.0;
      local_200.AllDecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.AllDecomposedOverrides.ArrayNum = 0;
      local_200.AllDecomposedOverrides.ArrayMax = 0;
      local_200.DecomposedAbsolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.DecomposedAbsolutes.ArrayNum = 0;
      local_200.DecomposedAbsolutes.ArrayMax = 0;
      local_200.DecomposedAdditives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.DecomposedAdditives.ArrayNum = 0;
      local_200.DecomposedAdditives.ArrayMax = 0;
      local_200.DecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.DecomposedOverrides.ArrayNum = 0;
      local_200.DecomposedOverrides.ArrayMax = 0;
      local_180.Result.Absolute.TotalWeight = 0.0;
      local_180.AllDecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.AllDecomposedOverrides.ArrayNum = 0;
      local_180.AllDecomposedOverrides.ArrayMax = 0;
      local_180.DecomposedAbsolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.DecomposedAbsolutes.ArrayNum = 0;
      local_180.DecomposedAbsolutes.ArrayMax = 0;
      local_180.DecomposedAdditives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.DecomposedAdditives.ArrayNum = 0;
      local_180.DecomposedAdditives.ArrayMax = 0;
      local_180.DecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.DecomposedOverrides.ArrayNum = 0;
      local_180.DecomposedOverrides.ArrayMax = 0;
      local_100.Result.Absolute.TotalWeight = 0.0;
      local_100.AllDecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.AllDecomposedOverrides.ArrayNum = 0;
      local_100.AllDecomposedOverrides.ArrayMax = 0;
      local_100.DecomposedAbsolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.DecomposedAbsolutes.ArrayNum = 0;
      local_100.DecomposedAbsolutes.ArrayMax = 0;
      local_100.DecomposedAdditives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.DecomposedAdditives.ArrayNum = 0;
      local_100.DecomposedAdditives.ArrayMax = 0;
      local_100.DecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.DecomposedOverrides.ArrayNum = 0;
      local_100.DecomposedOverrides.ArrayMax = 0;
      local_2b8.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_290 = 0;
      local_28c[0] = 4;
      pFVar13 = local_340;
      pTVar23 = pTVar20;
      pTVar25 = pTVar20;
      do {
        if ((pFVar13->DoubleCompositeMask & uVar19) != 0) {
          if ((param_2->ArrayNum <= (int)pTVar23) &&
             (local_388 = pTVar20,
             local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)param_2->ArrayNum,
             bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_2d8._0_6_ =
               CONCAT24(*(undefined2 *)
                         ((longlong)&(param_2->DataPtr->ComponentTypeID).Value +
                         (longlong)&pTVar25->Reference),(undefined4)local_2d8);
          (**(code **)(*plVar11 + 0x10))(plVar11,&local_330,&local_2f8,pFVar24);
          pFVar13 = local_340;
          if (local_330.Reference != (FBaseGraphTask *)0x0) {
            FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_2b8;
            if (local_2b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar12 = local_2b8.SecondaryData;
            }
            if ((ulonglong)FVar12 <= &local_330) {
              FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_2b8;
              if (local_2b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar12 = local_2b8.SecondaryData;
              }
              if (&local_330 <
                  (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar12 + (longlong)local_28c[0] * 8)) {
                local_370 = (longlong)local_290;
                local_368 = 8;
                local_388 = &local_330;
                local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_2b8;
                if (local_2b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                  local_380 = local_2b8.SecondaryData;
                }
                local_378 = (longlong)local_28c[0];
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
            if (local_290 == local_28c[0]) {
              local_290 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                    (0x808,&local_2b8,local_28c);
            }
            lVar18 = (longlong)local_290;
            FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_2b8;
            if (local_2b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar12 = local_2b8.SecondaryData;
            }
            local_290 = local_290 + 1;
            ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar12 + lVar18 * 8))->Reference =
                 (FBaseGraphTask *)0x0;
            ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar12 + lVar18 * 8))->Reference =
                 local_330.Reference;
            pFVar13 = local_340;
            if (local_330.Reference != (FBaseGraphTask *)0x0) {
              LOCK();
              *(int *)&(local_330.Reference)->field_0x30 =
                   *(int *)&(local_330.Reference)->field_0x30 + 1;
              UNLOCK();
              if (local_330.Reference != (FBaseGraphTask *)0x0) {
                LOCK();
                puVar1 = &(local_330.Reference)->field_0x30;
                iVar5 = *(int *)puVar1;
                *(int *)puVar1 = *(int *)puVar1 + -1;
                UNLOCK();
                if ((iVar5 == 1) && (local_330.Reference != (FBaseGraphTask *)0x0)) {
                  (*(code *)**(undefined8 **)local_330.Reference)(local_330.Reference,1);
                  pFVar13 = local_340;
                }
              }
            }
          }
        }
        uVar22 = (int)pTVar23 + 1;
        pTVar23 = (TRefCountPtr<FBaseGraphTask> *)(ulonglong)uVar22;
        uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
        pTVar20 = (TRefCountPtr<FBaseGraphTask> *)((longlong)&pTVar20->Reference + 1);
        pFVar24 = (FDecomposedValue *)&pFVar24[1].DecomposedAbsolutes;
        pTVar25 = (TRefCountPtr<FBaseGraphTask> *)((longlong)&pTVar25->Reference + 4);
      } while ((int)uVar22 < 4);
      if (local_290 != 0) {
        pFVar14 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar14 + 0x60))(pFVar14,&local_2b8,1);
      }
      lVar18 = 0;
      local_308 = 0;
      if ((local_320->PropertyEntityID).Value != 0xffff) {
        pTVar15 = FEntityManager::ReadComponent<UE::MovieScene::FIntermediateMargin>
                            (local_310,&local_2d0,
                             (FMovieSceneEntityID)(local_320->PropertyEntityID).Value,
                             (TComponentTypeID<UE::MovieScene::FIntermediateMargin>)
                             (local_340->InitialValueType).Value);
        local_308 = *(longlong *)pTVar15;
        local_338 = *(int *)&pTVar15->field_0x8;
        *(undefined8 *)pTVar15 = 0;
        lVar18 = *(longlong *)&pTVar15->field_0x10;
        *(undefined8 *)&pTVar15->field_0x10 = 0;
        if (local_2d0._0_8_ != 0) {
          LOCK();
          *(int *)(local_2d0._0_8_ + 0x30) = *(int *)(local_2d0._0_8_ + 0x30) + -1;
          UNLOCK();
          if (local_2d0._8_4_ == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_2d0._0_8_ + 0x20));
          }
        }
      }
      uVar19 = 0;
      if (0 < (int)uStack_2f0) {
        local_320 = (FValueDecompositionParams *)0x0;
        local_318 = 0;
        do {
          lVar17 = local_318;
          pFVar7 = local_320;
          uVar22 = 0;
          if ((int)uVar19 < (int)uStack_2f0) {
            uVar22 = ~uVar19 >> 0x1f;
          }
          if (uVar22 == 0) {
            local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)(int)uStack_2f0;
            local_388 = (TRefCountPtr<FBaseGraphTask> *)(longlong)(int)uVar19;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pTVar8 = local_300;
          FVar3.Value = *(ushort *)((longlong)&local_2f8->Value + lVar17);
          uVar22 = 0;
          if ((int)uVar19 < local_300->ArrayNum) {
            uVar22 = ~uVar19 >> 0x1f;
          }
          if (uVar22 == 0) {
            local_388 = (TRefCountPtr<FBaseGraphTask> *)(longlong)(int)uVar19;
            local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)local_300->ArrayNum
            ;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          plVar11 = (longlong *)(&pTVar8->DataPtr->field_0x0 + (longlong)pFVar7);
          if (((*(byte *)(plVar11 + 8) & 1) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0x97,
                                 L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar16 = plVar11;
          if ((*(byte *)(plVar11 + 8) & 2) == 0) {
            plVar16 = (longlong *)*plVar11;
          }
          if (((int)plVar16[1] != 0x20) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value->SizeofT == sizeof(T)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                                 ,0x185,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(byte *)(plVar11 + 8) & 1) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0x97,
                                 L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((*(byte *)(plVar11 + 8) & 2) == 0) {
            plVar11 = (longlong *)*plVar11;
          }
          lVar17 = (**(code **)(*plVar11 + 8))(plVar11);
          if ((local_340->DoubleCompositeMask & 1) != 0) {
            pdVar21 = (double *)0x0;
            if (lVar18 != 0) {
              if (param_2->ArrayNum < 1) {
                local_388 = (TRefCountPtr<FBaseGraphTask> *)0x0;
                local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                            (longlong)param_2->ArrayNum;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pdVar21 = (double *)((ulonglong)param_2->DataPtr->CompositeOffset + lVar18);
            }
            if (param_2->ArrayNum < 1) {
              local_388 = (TRefCountPtr<FBaseGraphTask> *)0x0;
              local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)param_2->ArrayNum
              ;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            dVar2 = *(double *)
                     ((longlong)&local_328->Left + (ulonglong)param_2->DataPtr->CompositeOffset);
            if (param_2->ArrayNum < 1) {
              local_388 = (TRefCountPtr<FBaseGraphTask> *)0x0;
              local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)param_2->ArrayNum
              ;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            uVar4 = param_2->DataPtr->CompositeOffset;
            dVar2 = FDecomposedValue::Recompose(&local_280,FVar3,dVar2,pdVar21);
            *(double *)((ulonglong)uVar4 + lVar17) = dVar2;
          }
          if ((local_340->DoubleCompositeMask & 2) != 0) {
            pdVar21 = (double *)0x0;
            if (lVar18 != 0) {
              if (param_2->ArrayNum < 2) {
                local_388 = (TRefCountPtr<FBaseGraphTask> *)&DAT_00000001;
                local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                            (longlong)param_2->ArrayNum;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pdVar21 = (double *)((ulonglong)param_2->DataPtr[1].CompositeOffset + lVar18);
            }
            if (param_2->ArrayNum < 2) {
              local_388 = (TRefCountPtr<FBaseGraphTask> *)&DAT_00000001;
              local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)param_2->ArrayNum
              ;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            dVar2 = *(double *)
                     ((longlong)&local_328->Left + (ulonglong)param_2->DataPtr[1].CompositeOffset);
            if (param_2->ArrayNum < 2) {
              local_388 = (TRefCountPtr<FBaseGraphTask> *)&DAT_00000001;
              local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)param_2->ArrayNum
              ;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            uVar4 = param_2->DataPtr[1].CompositeOffset;
            dVar2 = FDecomposedValue::Recompose(&local_200,FVar3,dVar2,pdVar21);
            *(double *)((ulonglong)uVar4 + lVar17) = dVar2;
          }
          if ((local_340->DoubleCompositeMask & 4) != 0) {
            pdVar21 = (double *)0x0;
            if (lVar18 != 0) {
              if (param_2->ArrayNum < 3) {
                local_388 = (TRefCountPtr<FBaseGraphTask> *)&DAT_00000002;
                local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                            (longlong)param_2->ArrayNum;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pdVar21 = (double *)((ulonglong)param_2->DataPtr[2].CompositeOffset + lVar18);
            }
            if (param_2->ArrayNum < 3) {
              local_388 = (TRefCountPtr<FBaseGraphTask> *)&DAT_00000002;
              local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)param_2->ArrayNum
              ;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            dVar2 = *(double *)
                     ((longlong)&local_328->Left + (ulonglong)param_2->DataPtr[2].CompositeOffset);
            if (param_2->ArrayNum < 3) {
              local_388 = (TRefCountPtr<FBaseGraphTask> *)&DAT_00000002;
              local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)param_2->ArrayNum
              ;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            uVar4 = param_2->DataPtr[2].CompositeOffset;
            dVar2 = FDecomposedValue::Recompose(&local_180,FVar3,dVar2,pdVar21);
            *(double *)((ulonglong)uVar4 + lVar17) = dVar2;
          }
          if ((local_340->DoubleCompositeMask & 8) != 0) {
            pdVar21 = (double *)0x0;
            if (lVar18 != 0) {
              if (param_2->ArrayNum < 4) {
                local_388 = (TRefCountPtr<FBaseGraphTask> *)&DAT_00000003;
                local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                            (longlong)param_2->ArrayNum;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pdVar21 = (double *)((ulonglong)param_2->DataPtr[3].CompositeOffset + lVar18);
            }
            if (param_2->ArrayNum < 4) {
              local_388 = (TRefCountPtr<FBaseGraphTask> *)&DAT_00000003;
              local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)param_2->ArrayNum
              ;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            dVar2 = *(double *)
                     ((longlong)&local_328->Left + (ulonglong)param_2->DataPtr[3].CompositeOffset);
            if (param_2->ArrayNum < 4) {
              local_388 = (TRefCountPtr<FBaseGraphTask> *)&DAT_00000003;
              local_380 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)param_2->ArrayNum
              ;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            uVar4 = param_2->DataPtr[3].CompositeOffset;
            dVar2 = FDecomposedValue::Recompose(&local_100,FVar3,dVar2,pdVar21);
            *(double *)((ulonglong)uVar4 + lVar17) = dVar2;
          }
          uVar19 = uVar19 + 1;
          local_318 = local_318 + 2;
          local_320 = (FValueDecompositionParams *)((longlong)local_320 + 0x48);
        } while ((int)uVar19 < (int)uStack_2f0);
      }
      local_310->LockdownState = Unlocked;
      if (local_308 != 0) {
        LOCK();
        *(int *)(local_308 + 0x30) = *(int *)(local_308 + 0x30) + -1;
        UNLOCK();
        if (local_338 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_308 + 0x20));
        }
      }
      FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_2b8;
      if (local_2b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar12 = local_2b8.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar12,local_290);
      if (local_2b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_2b8.SecondaryData);
      }
      if (local_100.DecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.DecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_100.DecomposedAdditives.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.DecomposedAdditives.AllocatorInstance.Data);
      }
      if (local_100.DecomposedAbsolutes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.DecomposedAbsolutes.AllocatorInstance.Data);
      }
      if (local_100.AllDecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_100.AllDecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_180.DecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.DecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_180.DecomposedAdditives.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.DecomposedAdditives.AllocatorInstance.Data);
      }
      if (local_180.DecomposedAbsolutes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.DecomposedAbsolutes.AllocatorInstance.Data);
      }
      if (local_180.AllDecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_180.AllDecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_200.DecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.DecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_200.DecomposedAdditives.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.DecomposedAdditives.AllocatorInstance.Data);
      }
      if (local_200.DecomposedAbsolutes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.DecomposedAbsolutes.AllocatorInstance.Data);
      }
      if (local_200.AllDecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_200.AllDecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_280.DecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.DecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_280.DecomposedAdditives.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.DecomposedAdditives.AllocatorInstance.Data);
      }
      if (local_280.DecomposedAbsolutes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.DecomposedAbsolutes.AllocatorInstance.Data);
      }
      if (local_280.AllDecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_280.AllDecomposedOverrides.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RecomposeBlendImpl @ 146938630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::RecomposeBlendImpl
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FValueDecompositionParams *param_3,UMovieSceneBlenderSystem *param_4,
          FIntermediateWidgetTransform *param_5,
          TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> *param_6)

{
  undefined1 *puVar1;
  double dVar2;
  FMovieSceneEntityID FVar3;
  ushort uVar4;
  code *pcVar5;
  FValueDecompositionParams *pFVar6;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *pTVar7;
  longlong lVar8;
  TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> *pTVar9;
  bool bVar10;
  UClass *pUVar11;
  longlong *plVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  FPropertyDefinition *pFVar14;
  FTaskGraphInterface *pFVar15;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateWidgetTransform>_>
  *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  TRefCountPtr<FBaseGraphTask> *pTVar21;
  uint uVar22;
  uint uVar23;
  TRefCountPtr<FBaseGraphTask> *pTVar25;
  double *pdVar26;
  FDecomposedValue *pFVar27;
  undefined1 auStack_568 [32];
  TRefCountPtr<FBaseGraphTask> *local_548;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_540;
  longlong local_538;
  longlong local_530;
  undefined8 local_528;
  FPropertyDefinition *local_500;
  int local_4f8;
  TRefCountPtr<FBaseGraphTask> local_4f0;
  uint local_4e8;
  FValueDecompositionParams *local_4e0;
  longlong local_4d8;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *local_4d0;
  FDecomposedValue *local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  FEntityManager *local_4b0;
  TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> *local_4a8;
  FIntermediateWidgetTransform *local_4a0;
  longlong local_498;
  FMovieSceneEntityID *local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  UObject *pUStack_478;
  undefined8 local_470;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateWidgetTransform>_>
  local_468;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_450;
  int local_428;
  int local_424 [9];
  FDecomposedValue local_400;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_370;
  void *local_368;
  undefined8 local_360;
  void *local_358;
  undefined8 local_350;
  void *local_348;
  undefined8 local_340;
  void *local_338;
  undefined8 local_330;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  void *local_2e8;
  undefined8 local_2e0;
  void *local_2d8;
  undefined8 local_2d0;
  void *local_2c8;
  undefined8 local_2c0;
  void *local_2b8;
  undefined8 local_2b0;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  void *local_268;
  undefined8 local_260;
  void *local_258;
  undefined8 local_250;
  void *local_248;
  undefined8 local_240;
  void *local_238;
  undefined8 local_230;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  ulonglong local_80;
  TRefCountPtr<FBaseGraphTask> *pTVar24;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_568;
  local_4a0 = param_5;
  local_4a8 = param_6;
  local_500 = param_1;
  local_4e0 = param_3;
  local_4d0 = param_2;
  if ((param_6->ArrayNum != (param_3->Query).Entities.ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutResults.Num() == InParams.Query.Entities.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                          ,0x1f7,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_4 != (UMovieSceneBlenderSystem *)0x0) {
    pUVar11 = Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
    plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_4,pUVar11);
    if (plVar12 != (longlong *)0x0) {
      pTVar21 = (TRefCountPtr<FBaseGraphTask> *)0x0;
      local_4b0 = (FEntityManager *)(param_4->_padding_ + 0x28);
      iVar20 = param_2->ArrayNum;
      *(undefined4 *)(param_4->_padding_ + 0x2d4) = 0;
      if ((iVar20 != 7) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Composites.Num() == NumComposites",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                              ,0x203,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar7 = local_4d0;
      local_490 = (param_3->Query).Entities.DataPtr;
      uStack_488 = *(undefined8 *)&(param_3->Query).Entities.ArrayNum;
      local_400.Result.Absolute.TotalWeight = 0.0;
      local_400.AllDecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_400.Result.Absolute.Total = 0.0;
      local_400.Result.Additive = 0.0;
      local_380 = 0;
      local_370 = 0;
      local_300 = 0;
      local_2f0 = 0;
      local_280 = 0;
      local_270 = 0;
      local_200 = 0;
      local_1f0 = 0;
      local_180 = 0;
      local_170 = 0;
      local_100 = 0;
      local_f0 = 0;
      local_480 = *(undefined8 *)&(param_3->Query).bConvertFromSourceEntityIDs;
      pUStack_478 = (param_3->Query).Object;
      local_400.AllDecomposedOverrides.ArrayNum = 0;
      local_400.AllDecomposedOverrides.ArrayMax = 0;
      local_400.DecomposedAbsolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_400.DecomposedAbsolutes.ArrayNum = 0;
      local_400.DecomposedAbsolutes.ArrayMax = 0;
      local_400.DecomposedAdditives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_400.DecomposedAdditives.ArrayNum = 0;
      local_400.DecomposedAdditives.ArrayMax = 0;
      local_400.DecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_400.DecomposedOverrides.ArrayNum = 0;
      local_400.DecomposedOverrides.ArrayMax = 0;
      local_378 = 0;
      local_368 = (void *)0x0;
      local_360 = 0;
      local_358 = (void *)0x0;
      local_350 = 0;
      local_348 = (void *)0x0;
      local_340 = 0;
      local_338 = (void *)0x0;
      local_330 = 0;
      local_2f8 = 0;
      local_2e8 = (void *)0x0;
      local_2e0 = 0;
      local_2d8 = (void *)0x0;
      local_2d0 = 0;
      local_2c8 = (void *)0x0;
      local_2c0 = 0;
      local_2b8 = (void *)0x0;
      local_2b0 = 0;
      local_278 = 0;
      local_268 = (void *)0x0;
      local_260 = 0;
      local_258 = (void *)0x0;
      local_250 = 0;
      local_248 = (void *)0x0;
      local_240 = 0;
      local_238 = (void *)0x0;
      local_230 = 0;
      local_1f8 = 0;
      local_1e8 = (void *)0x0;
      local_1e0 = 0;
      local_1d8 = (void *)0x0;
      local_1d0 = 0;
      local_1c8 = (void *)0x0;
      local_1c0 = 0;
      local_1b8 = (void *)0x0;
      local_1b0 = 0;
      local_178 = 0;
      local_168 = (void *)0x0;
      local_160 = 0;
      local_158 = (void *)0x0;
      local_150 = 0;
      local_148 = (void *)0x0;
      local_140 = 0;
      local_138 = (void *)0x0;
      local_130 = 0;
      local_f8 = 0;
      local_e8 = (void *)0x0;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_470._0_2_ = param_3->DecomposeBlendChannel;
      local_470._2_2_ = param_3->PropertyEntityID;
      local_470._4_2_ = param_3->ResultComponentType;
      local_470._6_2_ = param_3->PropertyTag;
      pFVar27 = &local_400;
      uVar19 = 1;
      local_450.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_428 = 0;
      local_424[0] = 4;
      pFVar14 = local_500;
      pTVar24 = pTVar21;
      pTVar25 = pTVar21;
      do {
        if ((pFVar14->DoubleCompositeMask & uVar19) != 0) {
          iVar20 = pTVar7->ArrayNum;
          if ((iVar20 <= (int)pTVar24) &&
             (local_548 = pTVar21,
             local_540 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)iVar20,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_470._0_6_ =
               CONCAT24(*(undefined2 *)
                         ((longlong)&(pTVar7->DataPtr->ComponentTypeID).Value +
                         (longlong)&pTVar25->Reference),(undefined4)local_470);
          (**(code **)(*plVar12 + 0x10))(plVar12,&local_4f0,&local_490,pFVar27);
          pFVar14 = local_500;
          if (local_4f0.Reference != (FBaseGraphTask *)0x0) {
            FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_450;
            if (local_450.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar13 = local_450.SecondaryData;
            }
            if ((ulonglong)FVar13 <= &local_4f0) {
              FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_450;
              if (local_450.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar13 = local_450.SecondaryData;
              }
              if (&local_4f0 <
                  (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar13 + (longlong)local_424[0] * 8)) {
                local_530 = (longlong)local_428;
                local_528 = 8;
                local_548 = &local_4f0;
                local_540 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_450;
                if (local_450.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                  local_540 = local_450.SecondaryData;
                }
                local_538 = (longlong)local_424[0];
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar10) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
            }
            if (local_428 == local_424[0]) {
              local_428 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                    (0x808,&local_450,local_424);
            }
            lVar18 = (longlong)local_428;
            FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_450;
            if (local_450.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar13 = local_450.SecondaryData;
            }
            local_428 = local_428 + 1;
            ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar13 + lVar18 * 8))->Reference =
                 (FBaseGraphTask *)0x0;
            ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar13 + lVar18 * 8))->Reference =
                 local_4f0.Reference;
            pFVar14 = local_500;
            if (local_4f0.Reference != (FBaseGraphTask *)0x0) {
              LOCK();
              *(int *)&(local_4f0.Reference)->field_0x30 =
                   *(int *)&(local_4f0.Reference)->field_0x30 + 1;
              UNLOCK();
              if (local_4f0.Reference != (FBaseGraphTask *)0x0) {
                LOCK();
                puVar1 = &(local_4f0.Reference)->field_0x30;
                iVar20 = *(int *)puVar1;
                *(int *)puVar1 = *(int *)puVar1 + -1;
                UNLOCK();
                if ((iVar20 == 1) && (local_4f0.Reference != (FBaseGraphTask *)0x0)) {
                  (*(code *)**(undefined8 **)local_4f0.Reference)(local_4f0.Reference,1);
                  pFVar14 = local_500;
                }
              }
            }
          }
        }
        pFVar6 = local_4e0;
        uVar22 = (int)pTVar24 + 1;
        pTVar24 = (TRefCountPtr<FBaseGraphTask> *)(ulonglong)uVar22;
        uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
        pTVar21 = (TRefCountPtr<FBaseGraphTask> *)((longlong)&pTVar21->Reference + 1);
        pFVar27 = (FDecomposedValue *)&pFVar27[1].DecomposedAbsolutes;
        pTVar25 = (TRefCountPtr<FBaseGraphTask> *)((longlong)&pTVar25->Reference + 4);
      } while ((int)uVar22 < 7);
      if (local_428 != 0) {
        pFVar15 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar15 + 0x60))(pFVar15,&local_450,1);
      }
      local_4e0 = (FValueDecompositionParams *)0x0;
      local_4d8 = 0;
      if ((pFVar6->PropertyEntityID).Value != 0xffff) {
        pTVar16 = FEntityManager::ReadComponent<UE::MovieScene::FIntermediateWidgetTransform>
                            (local_4b0,&local_468,
                             (FMovieSceneEntityID)(pFVar6->PropertyEntityID).Value,
                             (TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform>)
                             (local_500->InitialValueType).Value);
        local_4e0 = *(FValueDecompositionParams **)pTVar16;
        local_4f8 = *(int *)&pTVar16->field_0x8;
        *(undefined8 *)pTVar16 = 0;
        local_4d8 = *(longlong *)&pTVar16->field_0x10;
        *(undefined8 *)&pTVar16->field_0x10 = 0;
        if (local_468._0_8_ != 0) {
          LOCK();
          *(int *)(local_468._0_8_ + 0x30) = *(int *)(local_468._0_8_ + 0x30) + -1;
          UNLOCK();
          if (local_468._8_4_ == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_468._0_8_ + 0x20));
          }
        }
      }
      local_4e8 = 0;
      if (0 < (int)uStack_488) {
        local_4b8 = 0;
        local_4c0 = 0;
        do {
          lVar8 = local_4b8;
          lVar18 = local_4c0;
          uVar19 = local_4e8;
          uVar23 = ~local_4e8;
          uVar22 = 0;
          if ((int)local_4e8 < (int)uStack_488) {
            uVar22 = uVar23 >> 0x1f;
          }
          if (uVar22 == 0) {
            local_540 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)(int)uStack_488;
            local_548 = (TRefCountPtr<FBaseGraphTask> *)(longlong)(int)local_4e8;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pTVar9 = local_4a8;
          FVar3.Value = *(ushort *)((longlong)&local_490->Value + lVar18);
          uVar22 = 0;
          if ((int)uVar19 < local_4a8->ArrayNum) {
            uVar22 = uVar23 >> 0x1f;
          }
          if (uVar22 == 0) {
            local_548 = (TRefCountPtr<FBaseGraphTask> *)(longlong)(int)uVar19;
            local_540 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(longlong)local_4a8->ArrayNum
            ;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          plVar12 = (longlong *)(&pTVar9->DataPtr->field_0x0 + lVar8);
          if (((*(byte *)(plVar12 + 8) & 1) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bIsValid",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                  ,0x97,
                                  L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar17 = plVar12;
          if ((*(byte *)(plVar12 + 8) & 2) == 0) {
            plVar17 = (longlong *)*plVar12;
          }
          if (((int)plVar17[1] != 0x38) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Value->SizeofT == sizeof(T)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                                  ,0x185,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((*(byte *)(plVar12 + 8) & 1) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bIsValid",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                  ,0x97,
                                  L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((*(byte *)(plVar12 + 8) & 2) == 0) {
            plVar12 = (longlong *)*plVar12;
          }
          local_498 = (**(code **)(*plVar12 + 8))(plVar12);
          iVar20 = 0;
          lVar18 = 0;
          local_4c8 = &local_400;
          uVar19 = 1;
          pTVar21 = (TRefCountPtr<FBaseGraphTask> *)0x0;
          pFVar14 = local_500;
          do {
            pTVar7 = local_4d0;
            if ((pFVar14->DoubleCompositeMask & uVar19) != 0) {
              pdVar26 = (double *)0x0;
              if (local_4d8 != 0) {
                if ((local_4d0->ArrayNum <= iVar20) &&
                   (local_548 = pTVar21,
                   local_540 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                               (longlong)local_4d0->ArrayNum,
                   bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pdVar26 = (double *)
                          ((ulonglong)
                           *(ushort *)((longlong)&pTVar7->DataPtr->CompositeOffset + lVar18) +
                          local_4d8);
              }
              if ((pTVar7->ArrayNum <= iVar20) &&
                 (local_548 = pTVar21,
                 local_540 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                             (longlong)pTVar7->ArrayNum,
                 bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              dVar2 = *(double *)
                       ((longlong)&local_4a0->TranslationX +
                       (ulonglong)*(ushort *)((longlong)&pTVar7->DataPtr->CompositeOffset + lVar18))
              ;
              if ((pTVar7->ArrayNum <= iVar20) &&
                 (local_548 = pTVar21,
                 local_540 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                             (longlong)pTVar7->ArrayNum,
                 bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar4 = *(ushort *)((longlong)&pTVar7->DataPtr->CompositeOffset + lVar18);
              dVar2 = FDecomposedValue::Recompose(local_4c8,FVar3,dVar2,pdVar26);
              *(double *)((ulonglong)uVar4 + local_498) = dVar2;
              pFVar14 = local_500;
            }
            local_4c8 = (FDecomposedValue *)&local_4c8[1].DecomposedAbsolutes;
            uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
            iVar20 = iVar20 + 1;
            pTVar21 = (TRefCountPtr<FBaseGraphTask> *)((longlong)&pTVar21->Reference + 1);
            lVar18 = lVar18 + 4;
          } while (iVar20 < 7);
          local_4e8 = local_4e8 + 1;
          local_4c0 = local_4c0 + 2;
          local_4b8 = local_4b8 + 0x48;
        } while ((int)local_4e8 < (int)uStack_488);
      }
      local_4b0->LockdownState = Unlocked;
      if (local_4e0 != (FValueDecompositionParams *)0x0) {
        LOCK();
        *(int *)((longlong)local_4e0 + 0x30) = *(int *)((longlong)local_4e0 + 0x30) + -1;
        UNLOCK();
        if (local_4f8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)((longlong)local_4e0 + 0x20));
        }
      }
      FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_450;
      if (local_450.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar13 = local_450.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar13,local_428);
      if (local_450.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_450.SecondaryData);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_158 != (void *)0x0) {
        FMemory::Free(local_158);
      }
      if (local_168 != (void *)0x0) {
        FMemory::Free(local_168);
      }
      if (local_1b8 != (void *)0x0) {
        FMemory::Free(local_1b8);
      }
      if (local_1c8 != (void *)0x0) {
        FMemory::Free(local_1c8);
      }
      if (local_1d8 != (void *)0x0) {
        FMemory::Free(local_1d8);
      }
      if (local_1e8 != (void *)0x0) {
        FMemory::Free(local_1e8);
      }
      if (local_238 != (void *)0x0) {
        FMemory::Free(local_238);
      }
      if (local_248 != (void *)0x0) {
        FMemory::Free(local_248);
      }
      if (local_258 != (void *)0x0) {
        FMemory::Free(local_258);
      }
      if (local_268 != (void *)0x0) {
        FMemory::Free(local_268);
      }
      if (local_2b8 != (void *)0x0) {
        FMemory::Free(local_2b8);
      }
      if (local_2c8 != (void *)0x0) {
        FMemory::Free(local_2c8);
      }
      if (local_2d8 != (void *)0x0) {
        FMemory::Free(local_2d8);
      }
      if (local_2e8 != (void *)0x0) {
        FMemory::Free(local_2e8);
      }
      if (local_338 != (void *)0x0) {
        FMemory::Free(local_338);
      }
      if (local_348 != (void *)0x0) {
        FMemory::Free(local_348);
      }
      if (local_358 != (void *)0x0) {
        FMemory::Free(local_358);
      }
      if (local_368 != (void *)0x0) {
        FMemory::Free(local_368);
      }
      if (local_400.DecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.DecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_400.DecomposedAdditives.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.DecomposedAdditives.AllocatorInstance.Data);
      }
      if (local_400.DecomposedAbsolutes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.DecomposedAbsolutes.AllocatorInstance.Data);
      }
      if (local_400.AllDecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_400.AllDecomposedOverrides.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RecomposeBlendOperational @ 146939180

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::RecomposeBlendOperational
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FValueDecompositionParams *param_3,UMovieSceneBlenderSystem *param_4,
          FIntermediatePropertyValueConstRef *param_5,
          TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> *param_6)

{
  FIntermediateMargin *pFVar1;
  TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> local_28;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_18;
  
  pFVar1 = FIntermediatePropertyValueConstRef::Cast<UE::MovieScene::FIntermediateMargin>(param_5);
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.DataPtr = param_6->DataPtr;
  local_28.ArrayNum = param_6->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_6->field_0xc;
  RecomposeBlendImpl(this,param_1,&local_18,param_3,param_4,pFVar1,&local_28);
  return;
}

// RecomposeBlendOperational @ 146939220

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::RecomposeBlendOperational
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FValueDecompositionParams *param_3,UMovieSceneBlenderSystem *param_4,
          FIntermediatePropertyValueConstRef *param_5,
          TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> *param_6)

{
  FIntermediateWidgetTransform *pFVar1;
  TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> local_28;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_18;
  
  pFVar1 = FIntermediatePropertyValueConstRef::Cast<UE::MovieScene::FIntermediateWidgetTransform>
                     (param_5);
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.DataPtr = param_6->DataPtr;
  local_28.ArrayNum = param_6->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_6->field_0xc;
  RecomposeBlendImpl(this,param_1,&local_18,param_3,param_4,pFVar1,&local_28);
  return;
}

// ScheduleSetterTasks @ 146940290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ScheduleSetterTasks
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FPropertyStats *param_3,IEntitySystemScheduler *param_4,
          UMovieSceneEntitySystemLinker *param_5)

{
  undefined1 auStackY_e8 [32];
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_a8;
  FEntityComponentFilter local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.NumBits = 0;
  local_98.AllMask.Bits.MaxBits = 0x180;
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_a8.DataPtr = param_2->DataPtr;
  local_a8.ArrayNum = param_2->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_98.NoneMask.Bits.NumBits = 0;
  local_98.NoneMask.Bits.MaxBits = 0x180;
  local_98.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ComplexMasks.ArrayNum = 0;
  local_98.ComplexMasks.ArrayMax = 0;
  ScheduleSetterTasksImpl(this,param_1,&local_a8,param_3,param_4,param_5,&local_98);
  if (local_98.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// ScheduleSetterTasks @ 146940370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::ScheduleSetterTasks
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FPropertyStats *param_3,IEntitySystemScheduler *param_4,
          UMovieSceneEntitySystemLinker *param_5)

{
  undefined1 auStackY_e8 [32];
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_a8;
  FEntityComponentFilter local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.NumBits = 0;
  local_98.AllMask.Bits.MaxBits = 0x180;
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_a8.DataPtr = param_2->DataPtr;
  local_a8.ArrayNum = param_2->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_98.NoneMask.Bits.NumBits = 0;
  local_98.NoneMask.Bits.MaxBits = 0x180;
  local_98.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ComplexMasks.ArrayNum = 0;
  local_98.ComplexMasks.ArrayMax = 0;
  ScheduleSetterTasksImpl(this,param_1,&local_a8,param_3,param_4,param_5,&local_98);
  if (local_98.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// ScheduleSetterTasksImpl @ 146940450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ScheduleSetterTasksImpl
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FPropertyStats *param_3,IEntitySystemScheduler *param_4,
          UMovieSceneEntitySystemLinker *param_5,FEntityComponentFilter *param_6)

{
  undefined1 *puVar1;
  FPropertyCompositeDefinition *pFVar2;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  TComponentTypeID<UObject_*> TVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  Type TVar8;
  TTypeCompatibleBytes<unsigned_int> TVar9;
  code *pcVar10;
  undefined4 uVar11;
  FPropertyDefinition *pFVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined1 auVar15 [8];
  bool bVar16;
  byte bVar17;
  FBuiltInComponentTypes *pFVar18;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  *this_00;
  TBitArray<TFixedAllocator<12>_> *pTVar19;
  FPropertyCompositeDefinition *pFVar20;
  int iVar21;
  undefined1 auStackY_4f8 [32];
  FComponentTypeID local_4a8;
  FComponentTypeID local_4a6;
  FComponentTypeID local_4a4;
  FComponentTypeID local_4a2;
  FComponentTypeID local_4a0;
  FComponentTypeID local_49e;
  FComponentTypeID local_49c;
  FComponentTypeID local_49a;
  ushort local_498;
  undefined2 uStack_496;
  ushort local_494;
  undefined2 uStack_492;
  ushort local_490;
  undefined2 uStack_48e;
  TTypeCompatibleBytes<unsigned_int> local_48c;
  FEntityComponentFilter *local_488;
  UMovieSceneEntitySystemLinker *local_480;
  IPropertyTraits *local_478;
  FTaskParams *local_470;
  undefined1 local_468 [8];
  FPropertyDefinition *local_460;
  FPropertyStats *local_458;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_450;
  ulonglong local_440;
  undefined1 local_438 [16];
  byte local_428;
  TTypeCompatibleBytes<unsigned_int> aTStack_427 [3];
  ForElementType<unsigned_int> local_418;
  TStatIdData *pTStack_410;
  byte local_408;
  undefined7 uStack_407;
  undefined4 uStack_400;
  uint uStack_3fc;
  undefined8 local_3f0;
  TStatIdData *pTStack_3e8;
  byte local_3e0;
  undefined1 uStack_3df;
  undefined1 uStack_3de;
  undefined1 uStack_3dd;
  undefined1 uStack_3dc;
  undefined1 uStack_3db;
  undefined1 uStack_3da;
  undefined1 uStack_3d9;
  TTypeCompatibleBytes<unsigned_int> TStack_3d8;
  TTypeCompatibleBytes<unsigned_int> TStack_3d4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3b8;
  TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> *local_3a8;
  undefined1 local_3a0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_398;
  initializer_list<UE::MovieScene::FComponentTypeID> local_388;
  TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> *local_378;
  undefined1 local_370;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_368;
  undefined2 uStack_366;
  TComponentTypeID<unsigned_short> TStack_364;
  undefined2 uStack_362;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_360;
  undefined2 uStack_35e;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_358;
  undefined2 uStack_356;
  TComponentTypeID<unsigned_short> TStack_354;
  undefined2 uStack_352;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_350;
  undefined2 uStack_34e;
  TComponentTypeID<UObject_*> local_348;
  undefined8 local_346;
  undefined4 local_33e;
  ushort local_33a;
  ushort local_338;
  ushort local_336;
  ushort local_334;
  ForElementType<unsigned_int> local_330;
  TStatIdData *pTStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  TBitArray<TFixedAllocator<12>_> local_310;
  TComponentTypeID<UObject_*> local_2d8;
  undefined6 uStack_2d6;
  undefined2 uStack_2d0;
  undefined4 uStack_2ce;
  ushort uStack_2ca;
  undefined2 uStack_2c8;
  undefined4 uStack_2c6;
  ushort uStack_2c2;
  uchar auStack_2c0 [2];
  TTypeCompatibleBytes<unsigned_int> TStack_2be;
  uchar auStack_2ba [34];
  undefined1 local_298 [16];
  TTypeCompatibleBytes<unsigned_int> local_288 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_280 [2];
  TTypeCompatibleBytes<unsigned_int> local_278 [2];
  TStatIdData *pTStack_270;
  undefined1 local_268 [8];
  TTypeCompatibleBytes<unsigned_int> aTStack_260 [2];
  undefined1 local_258 [124];
  int aiStack_1dc [13];
  int local_1a8;
  int local_1a4;
  int local_170;
  int local_16c;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  local_168;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_470 = (FTaskParams *)param_4;
  local_480 = param_5;
  local_488 = param_6;
  local_460 = param_1;
  local_458 = param_3;
  pFVar18 = FBuiltInComponentTypes::Get();
  local_478 = param_1->TraitsInstance;
  local_408 = local_408 & 0xe0;
  pTStack_410 = &TStatId::TStatId_NAME_None;
  local_368 = pFVar18->CustomPropertyIndex;
  TVar4 = pFVar18->BoundObject;
  TStack_364 = pFVar18->FastPropertyOffset;
  local_418 = (ForElementType<unsigned_int>)0x0;
  uStack_400 = 0x6ff;
  uStack_3fc = uStack_3fc & 0xffffff00;
  uStack_366 = 0x7fff;
  uStack_362 = 0x7fff;
  uStack_35e = 0x7fff;
  local_360 = pFVar18->SlowProperty;
  if ((param_2->ArrayNum < 4) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar5 = param_2->DataPtr[3].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 3) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar6 = param_2->DataPtr[2].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 2) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar7 = param_2->DataPtr[1].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar12 = local_460;
  local_346._2_2_ = uStack_366;
  local_346._0_2_ = local_368;
  local_346._4_2_ = TStack_364;
  local_346._6_2_ = uStack_362;
  local_320._1_7_ = uStack_407;
  local_320._0_1_ = local_408;
  uStack_318._4_4_ = uStack_3fc;
  uStack_318._0_4_ = uStack_400;
  pFVar20 = param_2->DataPtr;
  local_33e = _local_360;
  local_33a = (pFVar20->ComponentTypeID).Value;
  local_4a8.Value = (local_460->PropertyType).Value;
  local_3c8._First = &local_4a8;
  local_3c8._Last = &local_4a6;
  local_330 = local_418;
  pTStack_328 = pTStack_410;
  local_348 = TVar4;
  local_338 = uVar7;
  local_336 = uVar6;
  local_334 = uVar5;
  this_00 = TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ::FilterAll((TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                         *)&local_348,&local_168,&local_3c8);
  local_4a4.Value = (pFVar18->Tags).Ignored.Value;
  local_3b8._First = &local_4a4;
  local_3b8._Last = &local_4a2;
  FComponentMask::SetAll(&(this_00->Filter).NoneMask,&local_3b8);
  FEntityComponentFilter::Combine(&this_00->Filter,local_488);
  *(TStatIdData **)&(this_00->Components).field_0x20 = (pFVar12->StatID).StatIdPtr;
  TVar8 = (local_480->EntityManager).GatherThread;
  *(Type *)&(this_00->Components).field_0x30 = TVar8;
  if ((TVar8 == GameThread) || (TVar8 == GameThread_Local)) {
    bVar17 = 1;
  }
  else {
    bVar17 = 0;
  }
  puVar1 = &(this_00->Components).field_0x28;
  *puVar1 = *puVar1 & 0xfe;
  puVar1 = &(this_00->Components).field_0x28;
  *puVar1 = *puVar1 | bVar17;
  local_450.TypeIndex = (this_00->Components).field_0x20;
  local_450._9_7_ = *(undefined7 *)&(this_00->Components).field_0x21;
  local_450._padding_ = 0x1513785a0;
  local_3a8 = (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> *)
              TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              ::ScheduledRun_PerAllocation;
  local_440 = *(ulonglong *)&(this_00->Components).field_0x28 & 0xfffffffffffffffd;
  local_3a0 = 3;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
            (this_00,(FEntityManager *)local_468,(IEntitySystemScheduler *)&local_480->EntityManager
             ,local_470,&local_450,&local_3a8,(ICustomPropertyRegistration **)&local_478);
  if (local_168.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  if (0 < local_458->NumPartialProperties) {
    local_310.NumBits = 0;
    local_310.MaxBits = 0x180;
    pFVar2 = pFVar20 + param_2->ArrayNum;
    for (; pFVar20 != pFVar2; pFVar20 = pFVar20 + 1) {
      uVar5 = (pFVar20->ComponentTypeID).Value;
      iVar21 = ((uint)uVar5 - local_310.NumBits) + 1;
      if (0 < iVar21) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_310,false,iVar21);
      }
      if ((local_310.NumBits <= (int)(uint)uVar5) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar3 = local_310.AllocatorInstance.InlineData + (uVar5 >> 5);
      *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
    }
    local_3e0 = local_3e0 & 0xe0;
    TVar4 = pFVar18->BoundObject;
    pTStack_3e8 = &TStatId::TStatId_NAME_None;
    local_358 = pFVar18->CustomPropertyIndex;
    TStack_354 = pFVar18->FastPropertyOffset;
    local_3f0._0_1_ = '\0';
    local_3f0._1_1_ = '\0';
    local_3f0._2_1_ = '\0';
    local_3f0._3_1_ = '\0';
    local_3f0._4_1_ = '\0';
    local_3f0._5_1_ = '\0';
    local_3f0._6_1_ = '\0';
    local_3f0._7_1_ = '\0';
    TStack_3d8.Pad[0] = 0xff;
    TStack_3d8.Pad[1] = '\x06';
    TStack_3d8.Pad[2] = '\0';
    TStack_3d8.Pad[3] = '\0';
    TStack_3d4.Pad = TStack_3d4.Pad & 0xffffff00;
    uStack_356 = 0x7fff;
    uStack_352 = 0x7fff;
    uStack_34e = 0x7fff;
    local_350 = pFVar18->SlowProperty;
    if ((param_2->ArrayNum < 4) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar5 = param_2->DataPtr[3].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 3) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar6 = param_2->DataPtr[2].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 2) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar7 = param_2->DataPtr[1].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar13 = local_3f0;
    uStack_2d6._2_2_ = uStack_356;
    uStack_2d6._0_2_ = local_358;
    uStack_2d6._4_2_ = TStack_354;
    uStack_2ca = (param_2->DataPtr->ComponentTypeID).Value;
    local_268[1] = uStack_3df;
    local_268[2] = uStack_3de;
    local_268[3] = uStack_3dd;
    local_268[4] = uStack_3dc;
    local_268[5] = uStack_3db;
    local_268[6] = uStack_3da;
    local_268[7] = uStack_3d9;
    local_268[0] = local_3e0;
    aTStack_260[1].Pad[0] = TStack_3d4.Pad[0];
    aTStack_260[1].Pad[1] = TStack_3d4.Pad[1];
    aTStack_260[1].Pad[2] = TStack_3d4.Pad[2];
    aTStack_260[1].Pad[3] = TStack_3d4.Pad[3];
    aTStack_260[0].Pad[0] = TStack_3d8.Pad[0];
    aTStack_260[0].Pad[1] = TStack_3d8.Pad[1];
    aTStack_260[0].Pad[2] = TStack_3d8.Pad[2];
    aTStack_260[0].Pad[3] = TStack_3d8.Pad[3];
    uStack_2ce = _local_350;
    _local_498 = CONCAT22(0x7fff,uStack_2ca);
    uStack_2c8 = 0x7fff;
    uStack_492 = 0x7fff;
    local_494 = uVar7;
    uVar11 = _local_494;
    uStack_2c6 = _local_494;
    uStack_2d0 = uStack_352;
    _local_490 = CONCAT22(0x7fff,uVar6);
    auStack_2c0[0] = 0xff;
    auStack_2c0[1] = '\x7f';
    local_48c.Pad[2] = 0xff;
    local_48c.Pad[3] = '\x7f';
    local_48c.Pad[0] = (char)uVar5;
    local_48c.Pad[1] = (char)(uVar5 >> 8);
    TVar9.Pad = local_48c.Pad;
    local_48c.Pad[0] = (uchar)uVar5;
    local_48c.Pad[1] = (uchar)(uVar5 >> 8);
    TStack_2be.Pad[0] = local_48c.Pad[0];
    TStack_2be.Pad[1] = local_48c.Pad[1];
    TStack_2be.Pad[2] = 0xff;
    TStack_2be.Pad[3] = '\x7f';
    local_494._0_1_ = (undefined1)uVar7;
    local_494._1_1_ = (undefined1)(uVar7 >> 8);
    uStack_492._0_1_ = (undefined1)0x7fff;
    uStack_492._1_1_ = (undefined1)(0x7fff >> 8);
    local_288[0].Pad[2] = (undefined1)local_494;
    local_288[0].Pad[3] = local_494._1_1_;
    local_288[1].Pad[0] = (undefined1)uStack_492;
    local_288[1].Pad[1] = uStack_492._1_1_;
    local_288[0].Pad[0] = 0xff;
    local_288[0].Pad[1] = '\x7f';
    local_288[1].Pad[2] = (char)uVar6;
    local_288[1].Pad[3] = (char)(uVar6 >> 8);
    local_48c.Pad[0] = (uchar)uVar5;
    local_48c.Pad[1] = (uchar)(uVar5 >> 8);
    aTStack_280[0].Pad[2] = local_48c.Pad[0];
    aTStack_280[0].Pad[3] = local_48c.Pad[1];
    aTStack_280[1].Pad[0] = 0xff;
    aTStack_280[1].Pad[1] = '\x7f';
    aTStack_280[0].Pad[0] = 0xff;
    aTStack_280[0].Pad[1] = '\x7f';
    aTStack_280[1].Pad[2] = auStack_2ba[0];
    aTStack_280[1].Pad[3] = auStack_2ba[1];
    local_298._2_6_ = uStack_2d6;
    local_298._0_2_ = TVar4;
    local_298._10_4_ = _local_350;
    local_298._8_2_ = uStack_352;
    local_298._14_2_ = uStack_2ca;
    local_278[0].Pad[0] = (uchar)local_3f0;
    local_278[0].Pad[1] = local_3f0._1_1_;
    local_278[0].Pad[2] = local_3f0._2_1_;
    local_278[0].Pad[3] = local_3f0._3_1_;
    local_278[1].Pad[0] = local_3f0._4_1_;
    local_278[1].Pad[1] = local_3f0._5_1_;
    local_278[1].Pad[2] = local_3f0._6_1_;
    local_278[1].Pad[3] = local_3f0._7_1_;
    pTStack_270 = pTStack_3e8;
    local_258[0x30] = '\0';
    local_258[0x31] = '\0';
    local_258[0x32] = '\0';
    local_258[0x33] = '\0';
    local_258[0x34] = 0x80;
    local_258[0x35] = '\x01';
    local_258[0x36] = '\0';
    local_258[0x37] = '\0';
    local_258._104_4_ = 0;
    local_258._108_4_ = 0x180;
    local_258._112_8_ = (FScriptContainerElement *)0x0;
    stack0xfffffffffffffe20 = (bool *)0x0;
    local_1a8 = 0;
    local_1a4 = 0x180;
    local_170 = 0;
    local_16c = 0x180;
    _local_494 = uVar11;
    local_48c.Pad = TVar9.Pad;
    local_3f0 = uVar13;
    local_2d8 = TVar4;
    uStack_2c2 = uVar6;
    AddAccessorToFilter((FComponentAccess *)local_298,(FEntityComponentFilter *)local_258);
    AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)(local_298 + 2),(FEntityComponentFilter *)local_258);
    if (0 < local_310.NumBits) {
      iVar21 = local_258._120_4_;
      if (local_258._120_4_ == aiStack_1dc[0]) {
        iVar21 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x43c,(ForAnyElementType *)(local_258 + 0x70),aiStack_1dc);
      }
      stack0xfffffffffffffe20 = (bool *)CONCAT44(aiStack_1dc[0],iVar21 + 1);
      pTVar19 = (TBitArray<TFixedAllocator<12>_> *)(local_258._112_8_ + (longlong)iVar21 * 0x3c);
      pTVar19->NumBits = 0;
      pTVar19->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(pTVar19,&local_310);
      pTVar19[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
    }
    local_4a0.Value = (pFVar12->PropertyType).Value;
    local_398._First = &local_4a0;
    local_398._Last = &local_49e;
    FComponentMask::SetAll((FComponentMask *)local_258,&local_398);
    local_49c.Value = (pFVar18->Tags).Ignored.Value;
    local_388._First = &local_49c;
    local_388._Last = &local_49a;
    FComponentMask::SetAll((FComponentMask *)(local_258 + 0x38),&local_388);
    FEntityComponentFilter::Combine((FEntityComponentFilter *)local_258,local_488);
    if (0 < local_310.NumBits) {
      iVar21 = local_258._120_4_;
      if (local_258._120_4_ == aiStack_1dc[0]) {
        iVar21 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x43c,(ForAnyElementType *)(local_258 + 0x70),aiStack_1dc);
      }
      stack0xfffffffffffffe20 = (bool *)CONCAT44(aiStack_1dc[0],iVar21 + 1);
      pTVar19 = (TBitArray<TFixedAllocator<12>_> *)(local_258._112_8_ + (longlong)iVar21 * 0x3c);
      pTVar19->NumBits = 0;
      pTVar19->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(pTVar19,&local_310);
      pTVar19[1].AllocatorInstance.InlineData[0].Pad[0] = 0x84;
    }
    local_438._8_8_ = (pFVar12->StatID).StatIdPtr;
    TVar9.Pad = (uchar  [4])(local_480->EntityManager).GatherThread;
    aTStack_260[0].Pad[0] = TVar9.Pad[0];
    aTStack_260[0].Pad[1] = TVar9.Pad[1];
    aTStack_260[0].Pad[2] = TVar9.Pad[2];
    aTStack_260[0].Pad[3] = TVar9.Pad[3];
    if ((TVar9.Pad == (uchar  [4])0x1) || (TVar9.Pad == (uchar  [4])0x101)) {
      bVar17 = 1;
    }
    else {
      bVar17 = 0;
    }
    bVar14 = local_268[0];
    local_268[0] = local_268[0] & 0xfe | bVar17;
    auVar15 = local_268;
    aTStack_427[0].Pad[0] = local_268[1];
    aTStack_427[0].Pad[1] = local_268[2];
    aTStack_427[0].Pad[2] = local_268[3];
    aTStack_427[0].Pad[3] = local_268[4];
    aTStack_427[1].Pad[0] = local_268[5];
    aTStack_427[1].Pad[1] = local_268[6];
    aTStack_427[1].Pad[2] = local_268[7];
    local_428 = bVar14 & 0xfc | bVar17;
    local_438._0_8_ =
         L"struct UE::MovieScene::TSetPartialPropertyValuesImpl<struct UE::MovieScene::TPropertyTraits<struct FMargin,struct UE::MovieScene::FIntermediateMargin,1>,struct UE::MovieScene::TPropertyMetaData<>,struct TIntegerSequence<int,0,1,2,3>,double,double,double,double>"
    ;
    local_378 = (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> *)
                TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                ::ScheduledRun_PerAllocation;
    local_370 = 3;
    pTStack_270 = (TStatIdData *)local_438._8_8_;
    local_268 = auVar15;
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::
    ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                *)local_298,(FEntityManager *)(local_468 + 4),
               (IEntitySystemScheduler *)&local_480->EntityManager,local_470,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_438,&local_378,(ICustomPropertyRegistration **)&local_478,
               (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *)pFVar12);
    if ((FScriptContainerElement *)local_258._112_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_258._112_8_);
    }
  }
  return;
}

// ScheduleSetterTasksImpl @ 146940d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::ScheduleSetterTasksImpl
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FPropertyStats *param_3,IEntitySystemScheduler *param_4,
          UMovieSceneEntitySystemLinker *param_5,FEntityComponentFilter *param_6)

{
  undefined1 *puVar1;
  FPropertyCompositeDefinition *pFVar2;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  TComponentTypeID<UObject_*> TVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  Type TVar11;
  TTypeCompatibleBytes<unsigned_int> TVar12;
  code *pcVar13;
  TTypeCompatibleBytes<unsigned_int> TVar14;
  FPropertyDefinition *pFVar15;
  byte bVar16;
  bool bVar17;
  byte bVar18;
  ELockdownState EVar19;
  FBuiltInComponentTypes *pFVar20;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  *this_00;
  TBitArray<TFixedAllocator<12>_> *pTVar21;
  FPropertyCompositeDefinition *pFVar22;
  int iVar23;
  undefined1 auStackY_538 [32];
  FComponentTypeID local_4e4;
  FComponentTypeID local_4e2;
  FComponentTypeID local_4e0;
  FComponentTypeID local_4de;
  FComponentTypeID local_4dc;
  FComponentTypeID local_4da;
  FComponentTypeID local_4d8;
  FComponentTypeID local_4d6;
  ushort local_4d4;
  ushort local_4d2;
  undefined2 uStack_4d0;
  ushort local_4ce;
  undefined2 uStack_4cc;
  ushort local_4ca;
  undefined2 uStack_4c8;
  TTypeCompatibleBytes<unsigned_int> local_4c6;
  ushort local_4c2;
  undefined2 uStack_4c0;
  TTypeCompatibleBytes<unsigned_int> local_4be;
  ushort local_4ba;
  undefined2 uStack_4b8;
  IPropertyTraits *local_4b0;
  FTaskParams *local_4a8;
  FPropertyDefinition *local_4a0;
  FEntityComponentFilter *local_498;
  UMovieSceneEntitySystemLinker *local_490;
  undefined1 local_488 [8];
  FPropertyStats *local_480;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_478;
  ulonglong local_468;
  undefined1 local_460 [16];
  byte local_450;
  TTypeCompatibleBytes<unsigned_int> aTStack_44f [3];
  uchar local_440 [8];
  ForElementType<unsigned_int> FStack_438;
  byte local_430;
  undefined7 uStack_42f;
  undefined1 auStack_428 [32];
  byte local_408;
  undefined1 uStack_407;
  undefined1 uStack_406;
  undefined1 uStack_405;
  undefined1 uStack_404;
  undefined1 uStack_403;
  undefined1 uStack_402;
  undefined1 uStack_401;
  TTypeCompatibleBytes<unsigned_int> TStack_400;
  TTypeCompatibleBytes<unsigned_int> TStack_3fc;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3e8;
  TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> *local_3d8;
  undefined1 local_3d0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3b8;
  TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> *local_3a8;
  undefined1 local_3a0;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_398;
  undefined2 uStack_396;
  TComponentTypeID<unsigned_short> TStack_394;
  undefined2 uStack_392;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_390;
  undefined2 uStack_38e;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_388;
  undefined2 uStack_386;
  TComponentTypeID<unsigned_short> TStack_384;
  undefined2 uStack_382;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_380;
  undefined2 uStack_37e;
  TComponentTypeID<UObject_*> local_378;
  undefined8 local_376;
  undefined4 local_36e;
  ushort local_36a;
  ushort local_368;
  ushort local_366;
  ushort local_364;
  ushort local_362;
  ushort local_360;
  ushort local_35e;
  uchar local_358 [8];
  ForElementType<unsigned_int> FStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  TBitArray<TFixedAllocator<12>_> local_338;
  TComponentTypeID<UObject_*> local_2f8;
  undefined6 uStack_2f6;
  undefined2 uStack_2f0;
  undefined4 uStack_2ee;
  ushort uStack_2ea;
  undefined2 uStack_2e8;
  undefined4 uStack_2e6;
  ushort uStack_2e2;
  uchar auStack_2e0 [2];
  TTypeCompatibleBytes<unsigned_int> TStack_2de;
  ushort uStack_2da;
  uchar auStack_2d8 [2];
  TTypeCompatibleBytes<unsigned_int> TStack_2d6;
  ushort uStack_2d2;
  uchar auStack_2d0 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_2ce [9];
  undefined1 local_2a8 [56];
  TStatIdData *pTStack_270;
  undefined1 local_268 [8];
  TTypeCompatibleBytes<unsigned_int> aTStack_260 [2];
  FEntityComponentFilter local_258;
  int local_1a8;
  int local_1a4;
  int local_170;
  int local_16c;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  local_168;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_4a8 = (FTaskParams *)param_4;
  local_490 = param_5;
  local_498 = param_6;
  local_4a0 = param_1;
  local_480 = param_3;
  pFVar20 = FBuiltInComponentTypes::Get();
  local_4b0 = param_1->TraitsInstance;
  local_430 = local_430 & 0xe0;
  FStack_438 = (ForElementType<unsigned_int>)&TStatId::TStatId_NAME_None;
  local_398 = pFVar20->CustomPropertyIndex;
  TVar4 = pFVar20->BoundObject;
  TStack_394 = pFVar20->FastPropertyOffset;
  local_440[0] = '\0';
  local_440[1] = '\0';
  local_440[2] = '\0';
  local_440[3] = '\0';
  local_440[4] = '\0';
  local_440[5] = '\0';
  local_440[6] = '\0';
  local_440[7] = '\0';
  auStack_428._0_4_ = 0x6ff;
  auStack_428._4_4_ = auStack_428._4_4_ & 0xffffff00;
  uStack_396 = 0x7fff;
  uStack_392 = 0x7fff;
  uStack_38e = 0x7fff;
  local_390 = pFVar20->SlowProperty;
  if ((param_2->ArrayNum < 7) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar5 = param_2->DataPtr[6].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 6) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar6 = param_2->DataPtr[5].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 5) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_4d4 = param_2->DataPtr[4].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 4) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar7 = param_2->DataPtr[3].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 3) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar8 = param_2->DataPtr[2].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 2) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar9 = param_2->DataPtr[1].ComponentTypeID.Value;
  if ((param_2->ArrayNum < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar15 = local_4a0;
  local_376._2_2_ = uStack_396;
  local_376._0_2_ = local_398;
  local_376._4_2_ = TStack_394;
  local_376._6_2_ = uStack_392;
  local_348._1_7_ = uStack_42f;
  local_348._0_1_ = local_430;
  uStack_340._4_4_ = auStack_428._4_4_;
  uStack_340._0_4_ = auStack_428._0_4_;
  pFVar22 = param_2->DataPtr;
  local_36e = _local_390;
  local_36a = (pFVar22->ComponentTypeID).Value;
  local_362 = local_4d4;
  local_4e4.Value = (local_4a0->PropertyType).Value;
  local_3f8._First = &local_4e4;
  local_3f8._Last = &local_4e2;
  local_358[0] = local_440[0];
  local_358[1] = local_440[1];
  local_358[2] = local_440[2];
  local_358[3] = local_440[3];
  local_358[4] = local_440[4];
  local_358[5] = local_440[5];
  local_358[6] = local_440[6];
  local_358[7] = local_440[7];
  FStack_350 = FStack_438;
  local_378 = TVar4;
  local_368 = uVar9;
  local_366 = uVar8;
  local_364 = uVar7;
  local_360 = uVar6;
  local_35e = uVar5;
  this_00 = TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ::FilterAll((TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                         *)&local_378,&local_168,&local_3f8);
  local_4e0.Value = (pFVar20->Tags).Ignored.Value;
  local_3e8._First = &local_4e0;
  local_3e8._Last = &local_4de;
  FComponentMask::SetAll(&(this_00->Filter).NoneMask,&local_3e8);
  FEntityComponentFilter::Combine(&this_00->Filter,local_498);
  *(TStatIdData **)&(this_00->Components).field_0x28 = (pFVar15->StatID).StatIdPtr;
  TVar11 = (local_490->EntityManager).GatherThread;
  *(Type *)&(this_00->Components).field_0x38 = TVar11;
  if ((TVar11 == GameThread) || (TVar11 == GameThread_Local)) {
    bVar18 = 1;
  }
  else {
    bVar18 = 0;
  }
  puVar1 = &(this_00->Components).field_0x30;
  *puVar1 = *puVar1 & 0xfe;
  puVar1 = &(this_00->Components).field_0x30;
  *puVar1 = *puVar1 | bVar18;
  local_478.TypeIndex = (this_00->Components).field_0x28;
  local_478._9_7_ = *(undefined7 *)&(this_00->Components).field_0x29;
  local_478._padding_ = 0x151378980;
  local_3d8 = (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> *)
              TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              ::ScheduledRun_PerAllocation;
  local_468 = *(ulonglong *)&(this_00->Components).field_0x30 & 0xfffffffffffffffd;
  local_3d0 = 3;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
            (this_00,(FEntityManager *)local_488,(IEntitySystemScheduler *)&local_490->EntityManager
             ,local_4a8,&local_478,&local_3d8,(ICustomPropertyRegistration **)&local_4b0);
  if (local_168.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  if (0 < local_480->NumPartialProperties) {
    local_338.NumBits = 0;
    local_338.MaxBits = 0x180;
    pFVar2 = pFVar22 + param_2->ArrayNum;
    for (; pFVar22 != pFVar2; pFVar22 = pFVar22 + 1) {
      uVar5 = (pFVar22->ComponentTypeID).Value;
      iVar23 = ((uint)uVar5 - local_338.NumBits) + 1;
      if (0 < iVar23) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_338,false,iVar23);
      }
      if ((local_338.NumBits <= (int)(uint)uVar5) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pTVar3 = local_338.AllocatorInstance.InlineData + (uVar5 >> 5);
      *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
    }
    local_408 = local_408 & 0xe0;
    TVar4 = pFVar20->BoundObject;
    auStack_428._24_8_ = &TStatId::TStatId_NAME_None;
    local_388 = pFVar20->CustomPropertyIndex;
    TStack_384 = pFVar20->FastPropertyOffset;
    auStack_428._16_8_ = 0;
    TStack_400.Pad[0] = 0xff;
    TStack_400.Pad[1] = '\x06';
    TStack_400.Pad[2] = '\0';
    TStack_400.Pad[3] = '\0';
    TStack_3fc.Pad = TStack_3fc.Pad & 0xffffff00;
    uStack_386 = 0x7fff;
    uStack_382 = 0x7fff;
    uStack_37e = 0x7fff;
    local_380 = pFVar20->SlowProperty;
    if ((param_2->ArrayNum < 7) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar5 = param_2->DataPtr[6].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar6 = param_2->DataPtr[5].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 5) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar7 = param_2->DataPtr[4].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 4) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar8 = param_2->DataPtr[3].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 3) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar9 = param_2->DataPtr[2].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 2) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar10 = param_2->DataPtr[1].ComponentTypeID.Value;
    if ((param_2->ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uStack_2f6._2_2_ = uStack_386;
    uStack_2f6._0_2_ = local_388;
    uStack_2f6._4_2_ = TStack_384;
    local_268[1] = uStack_407;
    local_268[2] = uStack_406;
    local_268[3] = uStack_405;
    local_268[4] = uStack_404;
    local_268[5] = uStack_403;
    local_268[6] = uStack_402;
    local_268[7] = uStack_401;
    local_268[0] = local_408;
    aTStack_260[1].Pad[0] = TStack_3fc.Pad[0];
    aTStack_260[1].Pad[1] = TStack_3fc.Pad[1];
    aTStack_260[1].Pad[2] = TStack_3fc.Pad[2];
    aTStack_260[1].Pad[3] = TStack_3fc.Pad[3];
    aTStack_260[0].Pad[0] = TStack_400.Pad[0];
    aTStack_260[0].Pad[1] = TStack_400.Pad[1];
    aTStack_260[0].Pad[2] = TStack_400.Pad[2];
    aTStack_260[0].Pad[3] = TStack_400.Pad[3];
    uStack_2ea = (param_2->DataPtr->ComponentTypeID).Value;
    uStack_2ee = _local_380;
    _local_4d2 = CONCAT22(0x7fff,uStack_2ea);
    uStack_2e8 = 0x7fff;
    local_4be.Pad[2] = 0xff;
    local_4be.Pad[3] = '\x7f';
    local_4be.Pad[0] = (char)uVar6;
    local_4be.Pad[1] = (char)(uVar6 >> 8);
    TVar14.Pad = local_4be.Pad;
    _local_4ba = CONCAT22(0x7fff,uVar5);
    uStack_2f0 = uStack_382;
    _local_4ca = CONCAT22(0x7fff,uVar9);
    uStack_4cc = 0x7fff;
    local_4ce = uVar10;
    uStack_2e6 = _local_4ce;
    auStack_2e0[0] = 0xff;
    auStack_2e0[1] = '\x7f';
    local_4c6.Pad[2] = 0xff;
    local_4c6.Pad[3] = '\x7f';
    local_4c6.Pad[0] = (char)uVar8;
    local_4c6.Pad[1] = (char)(uVar8 >> 8);
    TVar12.Pad = local_4c6.Pad;
    local_4c6.Pad[0] = (uchar)uVar8;
    local_4c6.Pad[1] = (uchar)(uVar8 >> 8);
    TStack_2de.Pad[0] = local_4c6.Pad[0];
    TStack_2de.Pad[1] = local_4c6.Pad[1];
    TStack_2de.Pad[2] = 0xff;
    TStack_2de.Pad[3] = '\x7f';
    _local_4c2 = CONCAT22(0x7fff,uVar7);
    auStack_2d8[0] = 0xff;
    auStack_2d8[1] = '\x7f';
    local_2a8._18_4_ = _local_4ce;
    local_2a8._16_2_ = 0x7fff;
    local_2a8._22_2_ = uVar9;
    local_4c6.Pad[0] = (uchar)uVar8;
    local_4c6.Pad[1] = (uchar)(uVar8 >> 8);
    local_2a8[0x1a] = local_4c6.Pad[0];
    local_2a8[0x1b] = local_4c6.Pad[1];
    local_2a8[0x1c] = 0xff;
    local_2a8[0x1d] = '\x7f';
    local_2a8._24_2_ = 0x7fff;
    local_2a8._30_2_ = uVar7;
    local_4be.Pad[0] = (uchar)uVar6;
    local_4be.Pad[1] = (uchar)(uVar6 >> 8);
    TStack_2d6.Pad[0] = local_4be.Pad[0];
    TStack_2d6.Pad[1] = local_4be.Pad[1];
    TStack_2d6.Pad[2] = 0xff;
    TStack_2d6.Pad[3] = '\x7f';
    auStack_2d0[0] = 0xff;
    auStack_2d0[1] = '\x7f';
    local_2a8._2_6_ = uStack_2f6;
    local_2a8._0_2_ = TVar4;
    local_2a8._10_4_ = _local_380;
    local_2a8._8_2_ = uStack_382;
    local_2a8._14_2_ = uStack_2ea;
    local_4be.Pad[0] = (uchar)uVar6;
    local_4be.Pad[1] = (uchar)(uVar6 >> 8);
    local_2a8[0x22] = local_4be.Pad[0];
    local_2a8[0x23] = local_4be.Pad[1];
    local_2a8[0x24] = 0xff;
    local_2a8[0x25] = '\x7f';
    local_2a8._32_2_ = 0x7fff;
    local_2a8._38_2_ = uVar5;
    local_2a8[0x2a] = aTStack_2ce[0].Pad[0];
    local_2a8[0x2b] = aTStack_2ce[0].Pad[1];
    local_2a8[0x2c] = aTStack_2ce[0].Pad[2];
    local_2a8[0x2d] = aTStack_2ce[0].Pad[3];
    local_2a8[0x2e] = aTStack_2ce[1].Pad[0];
    local_2a8[0x2f] = aTStack_2ce[1].Pad[1];
    local_2a8._40_2_ = 0x7fff;
    local_2a8._48_8_ = auStack_428._16_8_;
    pTStack_270 = (TStatIdData *)auStack_428._24_8_;
    local_258.AllMask.Bits.NumBits = 0;
    local_258.AllMask.Bits.MaxBits = 0x180;
    local_258.NoneMask.Bits.NumBits = 0;
    local_258.NoneMask.Bits.MaxBits = 0x180;
    local_258.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ComplexMasks.ArrayNum = 0;
    local_258.ComplexMasks.ArrayMax = 0;
    local_1a8 = 0;
    local_1a4 = 0x180;
    local_170 = 0;
    local_16c = 0x180;
    local_4c6.Pad = TVar12.Pad;
    local_4be.Pad = TVar14.Pad;
    local_2f8 = TVar4;
    uStack_2e2 = uVar9;
    uStack_2da = uVar7;
    uStack_2d2 = uVar5;
    AddAccessorToFilter((FComponentAccess *)local_2a8,&local_258);
    AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)(local_2a8 + 2),&local_258);
    if (0 < local_338.NumBits) {
      EVar19 = local_258.ComplexMasks.ArrayNum;
      if (local_258.ComplexMasks.ArrayNum == local_258.ComplexMasks.ArrayMax) {
        EVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x43c,&local_258.ComplexMasks.AllocatorInstance,
                            &local_258.ComplexMasks.ArrayMax);
      }
      local_258.ComplexMasks.ArrayNum = EVar19 + Unlocked;
      pTVar21 = (TBitArray<TFixedAllocator<12>_> *)
                (local_258.ComplexMasks.AllocatorInstance.Data + (longlong)(int)EVar19 * 0x3c);
      pTVar21->NumBits = 0;
      pTVar21->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(pTVar21,&local_338);
      pTVar21[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
    }
    pFVar15 = local_4a0;
    local_4dc.Value = (local_4a0->PropertyType).Value;
    local_3c8._First = &local_4dc;
    local_3c8._Last = &local_4da;
    FComponentMask::SetAll(&local_258.AllMask,&local_3c8);
    local_4d8.Value = (pFVar20->Tags).Ignored.Value;
    local_3b8._First = &local_4d8;
    local_3b8._Last = &local_4d6;
    FComponentMask::SetAll(&local_258.NoneMask,&local_3b8);
    FEntityComponentFilter::Combine(&local_258,local_498);
    if (0 < local_338.NumBits) {
      EVar19 = local_258.ComplexMasks.ArrayNum;
      if (local_258.ComplexMasks.ArrayNum == local_258.ComplexMasks.ArrayMax) {
        EVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x43c,&local_258.ComplexMasks.AllocatorInstance,
                            &local_258.ComplexMasks.ArrayMax);
      }
      local_258.ComplexMasks.ArrayNum = EVar19 + Unlocked;
      pTVar21 = (TBitArray<TFixedAllocator<12>_> *)
                (local_258.ComplexMasks.AllocatorInstance.Data + (longlong)(int)EVar19 * 0x3c);
      pTVar21->NumBits = 0;
      pTVar21->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(pTVar21,&local_338);
      pTVar21[1].AllocatorInstance.InlineData[0].Pad[0] = 0x84;
    }
    local_460._8_8_ = (pFVar15->StatID).StatIdPtr;
    TVar12.Pad = (uchar  [4])(local_490->EntityManager).GatherThread;
    aTStack_260[0].Pad[0] = TVar12.Pad[0];
    aTStack_260[0].Pad[1] = TVar12.Pad[1];
    aTStack_260[0].Pad[2] = TVar12.Pad[2];
    aTStack_260[0].Pad[3] = TVar12.Pad[3];
    if ((TVar12.Pad == (uchar  [4])0x1) || (TVar12.Pad == (uchar  [4])0x101)) {
      bVar18 = 1;
    }
    else {
      bVar18 = 0;
    }
    bVar16 = local_268[0];
    local_268[0] = local_268[0] & 0xfe | bVar18;
    aTStack_44f._0_7_ = local_268._1_7_;
    local_450 = bVar16 & 0xfc | bVar18;
    local_460._0_8_ =
         L"struct UE::MovieScene::TSetPartialPropertyValuesImpl<struct UE::MovieScene::TPropertyTraits<struct FWidgetTransform,struct UE::MovieScene::FIntermediateWidgetTransform,1>,struct UE::MovieScene::TPropertyMetaData<>,struct TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>"
    ;
    local_3a8 = (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> *)
                TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                ::ScheduledRun_PerAllocation;
    local_3a0 = 3;
    pTStack_270 = (TStatIdData *)local_460._8_8_;
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::
    ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                *)local_2a8,(FEntityManager *)(local_488 + 4),
               (IEntitySystemScheduler *)&local_490->EntityManager,local_4a8,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_460,&local_3a8,(ICustomPropertyRegistration **)&local_4b0,
               (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *)pFVar15);
    if (local_258.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// SupportsProperty @ 1469460f0

bool __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::SupportsProperty(TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                   *this,FPropertyDefinition *param_1,FProperty *param_2)

{
  UScriptStruct *pUVar1;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = FMargin::StaticStruct();
    if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_2[1]._padding_ == pUVar1;
  }
  return false;
}

// SupportsProperty @ 146946140

bool __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::SupportsProperty(TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
                   *this,FPropertyDefinition *param_1,FProperty *param_2)

{
  UPackage *pUVar1;
  
  if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    return false;
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetTransform.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FWidgetTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetTransform,(UObject *)pUVar1,
                         L"WidgetTransform");
  }
  if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetTransform.OuterSingleton == (UScriptStruct *)0x0
    ;
  }
  return (UScriptStruct *)param_2[1]._padding_ ==
         Z_Registration_Info_UScriptStruct_FWidgetTransform.OuterSingleton;
}

// UnpackChannels @ 14694a270

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::UnpackChannels(TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                 *this,FPropertyDefinition *param_1,FProperty *param_2,
                FIntermediatePropertyValueConstRef *param_3,FUnpackedChannelValues *param_4)

{
  FIntermediateMargin *pFVar1;
  
  pFVar1 = FIntermediatePropertyValueConstRef::Cast<UE::MovieScene::FIntermediateMargin>(param_3);
  UnpackChannelsFromOperational(pFVar1,param_2,param_4);
  return;
}

// UnpackChannels @ 14694a2a0

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::UnpackChannels(TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
                 *this,FPropertyDefinition *param_1,FProperty *param_2,
                FIntermediatePropertyValueConstRef *param_3,FUnpackedChannelValues *param_4)

{
  FIntermediateWidgetTransform *pFVar1;
  
  pFVar1 = FIntermediatePropertyValueConstRef::Cast<UE::MovieScene::FIntermediateWidgetTransform>
                     (param_3);
  UnpackChannelsFromOperational(pFVar1,param_2,param_4);
  return;
}

