// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// CoercePropertyValue @ 14d60e7b0

FIntermediatePropertyValue * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::CoercePropertyValue
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FIntermediatePropertyValue *__return_storage_ptr__,FPropertyDefinition *param_1,
          FProperty *param_2,FSourcePropertyValue *param_3)

{
  FCameraFramingZone *pFVar1;
  FCameraFramingZone local_28;
  
  pFVar1 = FSourcePropertyValue::Cast<FCameraFramingZone>(param_3);
  local_28.Left = pFVar1->Left;
  local_28.Top = pFVar1->Top;
  local_28.Right = pFVar1->Right;
  local_28.Bottom = pFVar1->Bottom;
  FIntermediatePropertyValue::FromValue<FCameraFramingZone_&>(__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// DispatchSetterTasks @ 14d6139c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::DispatchSetterTasks
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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
  Dispatch_PerAllocation<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
            (this_00,(FEntityManager *)local_430,
             (FSystemTaskPrerequisites *)&local_450->EntityManager,
             (FSystemSubsequentTasks *)local_438,
             (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> **)local_440,
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
    Dispatch_PerAllocation<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                *)local_2a8,(FEntityManager *)local_418,
               (FSystemTaskPrerequisites *)&local_450->EntityManager,
               (FSystemSubsequentTasks *)local_438,
               (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> **)local_440,
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

// GetPreAnimatedStateStorage @ 14d61b110

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::GetPreAnimatedStateStorage
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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
    if (pIVar15 != (IPreAnimatedStorage *)0x0) goto LAB_14d61b4ce;
  }
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = ::operator_new(0x120);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pIVar15 = (IPreAnimatedStorage *)&DAT_00000010;
LAB_14d61b359:
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
         ___7__TIntrusiveReferenceController_U__TPreAnimatedPropertyStorageImpl_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_S___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pIVar4 = param_1->TraitsInstance;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[2]._padding_ = 0;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TPreAnimatedStateStorage_U__TPreAnimatedPropertyTraits_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__U__TIntegerSequence_H_S____V_MovieScene_UE___MovieScene_UE__6B_
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
         &TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
          ::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>__
    ;
    pTVar11[0xf]._padding_ =
         (longlong)
         &TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
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
    if (pIVar15 != (IPreAnimatedStorage *)0x0) goto LAB_14d61b359;
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
LAB_14d61b4ce:
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

// MakeInitialValueProcessor @ 14d6216e0

TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::MakeInitialValueProcessor
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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
         ___7__TIntrusiveReferenceController_U__TInitialValueProcessor_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pIVar3 = param_1->CustomPropertyRegistration;
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7__TInitialValueProcessorImpl_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_S___MovieScene_UE__6B_
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
         ___7__TInitialValueProcessor_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE___MovieScene_UE__6B_
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

// RebuildOperational @ 14d62ee20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::RebuildOperational
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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
            goto LAB_14d62f08e;
          }
        }
        local_b0 = (FComponentHeader *)0x0;
        EVar2 = LockFree;
        local_98 = puVar20;
LAB_14d62f08e:
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
            goto LAB_14d62f154;
          }
        }
        local_c8 = (FComponentHeader *)0x0;
        EVar3 = LockFree;
        puVar16 = puVar20;
LAB_14d62f154:
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
            goto LAB_14d62f1e4;
          }
        }
        local_e0 = (FComponentHeader *)0x0;
        EVar4 = LockFree;
        puVar16 = puVar20;
LAB_14d62f1e4:
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
            goto LAB_14d62f277;
          }
        }
        local_f8 = (FComponentHeader *)0x0;
        EVar5 = LockFree;
        puVar16 = (uchar *)0x0;
LAB_14d62f277:
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

// RecomposeBlendChannel @ 14d62f580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::RecomposeBlendChannel
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,int param_3,
          FValueDecompositionParams *param_4,UMovieSceneBlenderSystem *param_5,double param_6,
          TArrayView<double,int> *param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  FPropertyCompositeDefinition *pFVar10;
  UClass *pUVar11;
  longlong *plVar12;
  FTaskGraphInterface *pFVar13;
  TComponentLock<UE::MovieScene::TReadOptional<FCameraFramingZone>_> *pTVar14;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  double *pdVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStackY_218 [32];
  int local_1c0;
  int local_1bc;
  FBaseGraphTask *local_1b0;
  TRefCountPtr<FBaseGraphTask> local_1a8;
  FPropertyDefinition *local_1a0;
  longlong local_198;
  FPropertyCompositeDefinition *local_190;
  FMovieSceneEntityID *local_188;
  ulonglong uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  ushort uStack_164;
  undefined2 uStack_162;
  TComponentLock<UE::MovieScene::TReadOptional<FCameraFramingZone>_> local_160;
  FDecomposedValue local_140;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_c0;
  int local_98;
  int local_94;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1a0 = param_1;
  if ((param_7->ArrayNum != (param_4->Query).Entities.ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutResults.Num() == InParams.Query.Entities.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                         ,0x245,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2->ArrayNum != 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Composites.Num() == NumComposites",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                         ,0x248,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar10 = TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>::operator[]
                      (param_2,param_3);
  if (param_5 != (UMovieSceneBlenderSystem *)0x0) {
    local_190 = pFVar10;
    pUVar11 = Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
    plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_5,pUVar11);
    if (plVar12 != (longlong *)0x0) {
      lVar4 = param_5->_padding_;
      lVar22 = 0;
      *(undefined4 *)(lVar4 + 0x2d4) = 0;
      local_188 = (param_4->Query).Entities.DataPtr;
      uStack_180 = *(ulonglong *)&(param_4->Query).Entities.ArrayNum;
      local_140.Result.Absolute.TotalWeight = 0.0;
      local_140.AllDecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Result.Absolute.Total = 0.0;
      local_140.Result.Additive = 0.0;
      local_178 = *(undefined4 *)&(param_4->Query).bConvertFromSourceEntityIDs;
      uStack_174 = *(undefined4 *)&(param_4->Query).field_0x14;
      uStack_170 = *(undefined4 *)&(param_4->Query).Object;
      uStack_16c = *(undefined4 *)((longlong)&(param_4->Query).Object + 4);
      local_140.AllDecomposedOverrides.ArrayNum = 0;
      local_140.AllDecomposedOverrides.ArrayMax = 0;
      local_140.DecomposedAbsolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar3._0_2_ = param_4->DecomposeBlendChannel;
      uVar3._2_2_ = param_4->PropertyEntityID;
      uVar3._4_2_ = param_4->ResultComponentType;
      uVar3._6_2_ = param_4->PropertyTag;
      local_140.DecomposedAbsolutes.ArrayNum = 0;
      local_140.DecomposedAbsolutes.ArrayMax = 0;
      local_140.DecomposedAdditives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.DecomposedAdditives.ArrayNum = 0;
      local_140.DecomposedAdditives.ArrayMax = 0;
      local_140.DecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.DecomposedOverrides.ArrayNum = 0;
      local_140.DecomposedOverrides.ArrayMax = 0;
      _local_168 = CONCAT26(uVar3._6_2_,CONCAT24((pFVar10->ComponentTypeID).Value,(int)uVar3));
      (**(code **)(*plVar12 + 0x10))(plVar12,&local_1b0,&local_188);
      if (local_1b0 != (FBaseGraphTask *)0x0) {
        pFVar13 = FTaskGraphInterface::Get();
        pcVar5 = *(code **)((longlong)*pFVar13 + 0x60);
        local_1a8.Reference = local_1b0;
        if (local_1b0 != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&local_1b0->field_0x30 = *(int *)&local_1b0->field_0x30 + 1;
          UNLOCK();
        }
        local_c0.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_98 = 1;
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                  (8,8,1,0,&local_c0,1,&local_94);
        FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_c0;
        if (local_c0.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar15 = local_c0.SecondaryData;
        }
        ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                  ((void *)FVar15,&local_1a8,1);
        (*pcVar5)(pFVar13,&local_c0,1);
        FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_c0;
        if (local_c0.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar15 = local_c0.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar15,local_98);
        if (local_c0.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_c0.SecondaryData);
        }
        if (local_1a8.Reference != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar1 = &(local_1a8.Reference)->field_0x30;
          iVar2 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (*(code *)**(undefined8 **)local_1a8.Reference)(local_1a8.Reference,1);
          }
        }
      }
      local_198 = 0;
      lVar20 = 0;
      if ((param_4->PropertyEntityID).Value == 0xffff) {
        local_1c0 = local_1bc;
      }
      else {
        pTVar14 = FEntityManager::ReadComponent<FCameraFramingZone>
                            ((FEntityManager *)(lVar4 + 0x28),&local_160,
                             (FMovieSceneEntityID)(param_4->PropertyEntityID).Value,
                             (TComponentTypeID<FCameraFramingZone>)
                             (local_1a0->InitialValueType).Value);
        lVar20 = *(longlong *)pTVar14;
        local_1c0 = *(int *)&pTVar14->field_0x8;
        *(undefined8 *)pTVar14 = 0;
        lVar22 = *(longlong *)&pTVar14->field_0x10;
        *(undefined8 *)&pTVar14->field_0x10 = 0;
        local_198 = lVar20;
        if (local_160._0_8_ != 0) {
          LOCK();
          *(int *)(local_160._0_8_ + 0x30) = *(int *)(local_160._0_8_ + 0x30) + -1;
          UNLOCK();
          if (local_160._8_4_ == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_160._0_8_ + 0x20));
          }
        }
      }
      uVar18 = uStack_180 & 0xffffffff;
      uVar16 = 0;
      if (0 < (int)uStack_180) {
        lVar17 = 0;
        bVar6 = (byte)param_3 & 0x1f;
        lVar21 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar16 < (int)uVar18) {
            uVar9 = ~uVar16 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar18 = uStack_180 & 0xffffffff;
          }
          if ((local_1a0->DoubleCompositeMask & (1 << bVar6 | 1U >> 0x20 - bVar6)) != 0) {
            pdVar19 = (double *)0x0;
            if (lVar22 != 0) {
              pdVar19 = (double *)((ulonglong)local_190->CompositeOffset + lVar22);
            }
            dVar7 = FDecomposedValue::Recompose
                              (&local_140,
                               (FMovieSceneEntityID)
                               *(ushort *)((longlong)&local_188->Value + lVar21),param_6,pdVar19);
            uVar9 = 0;
            if ((int)uVar16 < param_7->ArrayNum) {
              uVar9 = ~uVar16 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(double *)(lVar17 + (longlong)param_7->DataPtr) = dVar7;
            uVar18 = uStack_180 & 0xffffffff;
          }
          uVar16 = uVar16 + 1;
          lVar21 = lVar21 + 2;
          lVar17 = lVar17 + 8;
          lVar20 = local_198;
        } while ((int)uVar16 < (int)uVar18);
      }
      *(undefined4 *)(lVar4 + 0x2d4) = 1;
      if (lVar20 != 0) {
        LOCK();
        *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + -1;
        UNLOCK();
        if (local_1c0 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar20 + 0x20));
        }
      }
      if (local_1b0 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &local_1b0->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (local_1b0 != (FBaseGraphTask *)0x0)) {
          (*(code *)**(undefined8 **)local_1b0)(local_1b0,1);
        }
      }
      if (local_140.DecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.DecomposedOverrides.AllocatorInstance.Data);
      }
      if (local_140.DecomposedAdditives.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.DecomposedAdditives.AllocatorInstance.Data);
      }
      if (local_140.DecomposedAbsolutes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.DecomposedAbsolutes.AllocatorInstance.Data);
      }
      if (local_140.AllDecomposedOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_140.AllDecomposedOverrides.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RecomposeBlendImpl @ 14d62fa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::RecomposeBlendImpl
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FValueDecompositionParams *param_3,UMovieSceneBlenderSystem *param_4,
          FCameraFramingZone *param_5,
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
  TComponentLock<UE::MovieScene::TReadOptional<FCameraFramingZone>_> *pTVar15;
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
  FCameraFramingZone *local_328;
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
  TComponentLock<UE::MovieScene::TReadOptional<FCameraFramingZone>_> local_2d0;
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
        pTVar15 = FEntityManager::ReadComponent<FCameraFramingZone>
                            (local_310,&local_2d0,
                             (FMovieSceneEntityID)(local_320->PropertyEntityID).Value,
                             (TComponentTypeID<FCameraFramingZone>)
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

// RecomposeBlendOperational @ 14d6306a0

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::RecomposeBlendOperational
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FValueDecompositionParams *param_3,UMovieSceneBlenderSystem *param_4,
          FIntermediatePropertyValueConstRef *param_5,
          TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> *param_6)

{
  FCameraFramingZone *pFVar1;
  TArrayView<UE::MovieScene::FIntermediatePropertyValue,int> local_28;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_18;
  
  pFVar1 = FIntermediatePropertyValueConstRef::Cast<FCameraFramingZone>(param_5);
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.DataPtr = param_6->DataPtr;
  local_28.ArrayNum = param_6->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_6->field_0xc;
  RecomposeBlendImpl(this,param_1,&local_18,param_3,param_4,pFVar1,&local_28);
  return;
}

// ScheduleSetterTasks @ 14d634950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ScheduleSetterTasks
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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

// ScheduleSetterTasksImpl @ 14d634a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ScheduleSetterTasksImpl
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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
  TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> *local_3a8;
  undefined1 local_3a0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_398;
  initializer_list<UE::MovieScene::FComponentTypeID> local_388;
  TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> *local_378;
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
  local_450._padding_ = 0x152b974e0;
  local_3a8 = (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> *)
              TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              ::ScheduledRun_PerAllocation;
  local_440 = *(ulonglong *)&(this_00->Components).field_0x28 & 0xfffffffffffffffd;
  local_3a0 = 3;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
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
         L"struct UE::MovieScene::TSetPartialPropertyValuesImpl<struct UE::MovieScene::TPropertyTraits<struct FCameraFramingZone,struct FCameraFramingZone,1>,struct UE::MovieScene::TPropertyMetaData<>,struct TIntegerSequence<int,0,1,2,3>,double,double,double,double>"
    ;
    local_378 = (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> *)
                TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                ::ScheduledRun_PerAllocation;
    local_370 = 3;
    pTStack_270 = (TStatIdData *)local_438._8_8_;
    local_268 = auVar15;
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::
    ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
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

// SupportsProperty @ 14d639960

bool __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::SupportsProperty(TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                   *this,FPropertyDefinition *param_1,FProperty *param_2)

{
  UScriptStruct *pUVar1;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = FCameraFramingZone::StaticStruct();
    if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_2[1]._padding_ == pUVar1;
  }
  return false;
}

// UnpackChannels @ 14d63a7f0

void __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::UnpackChannels(TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                 *this,FPropertyDefinition *param_1,FProperty *param_2,
                FIntermediatePropertyValueConstRef *param_3,FUnpackedChannelValues *param_4)

{
  FCameraFramingZone *pFVar1;
  FCameraFramingZone local_28;
  
  pFVar1 = FIntermediatePropertyValueConstRef::Cast<FCameraFramingZone>(param_3);
  local_28.Left = pFVar1->Left;
  local_28.Top = pFVar1->Top;
  local_28.Right = pFVar1->Right;
  local_28.Bottom = pFVar1->Bottom;
  UnpackChannelsFromOperational(&local_28,param_2,param_4);
  return;
}

