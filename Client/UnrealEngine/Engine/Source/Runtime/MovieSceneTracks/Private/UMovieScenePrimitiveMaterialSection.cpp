// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1467272f0

UClass * __cdecl UMovieScenePrimitiveMaterialSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePrimitiveMaterialSection",
               &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.InnerSingleton,
               StaticRegisterNativesUMovieScenePrimitiveMaterialSection,0x260,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePrimitiveMaterialSection>,
               InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.InnerSingleton;
}

// UMovieScenePrimitiveMaterialSection @ 146766010

UMovieScenePrimitiveMaterialSection * __thiscall
UMovieScenePrimitiveMaterialSection::UMovieScenePrimitiveMaterialSection
          (UMovieScenePrimitiveMaterialSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneObjectPathChannel::FMovieSceneObjectPathChannel(&this->MaterialChannel);
  return this;
}

// UMovieScenePrimitiveMaterialSection @ 146766060

UMovieScenePrimitiveMaterialSection * __thiscall
UMovieScenePrimitiveMaterialSection::UMovieScenePrimitiveMaterialSection
          (UMovieScenePrimitiveMaterialSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  UMovieScenePrimitiveMaterialSection *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint local_res8;
  uint local_res18;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  TRange<FFrameNumber> local_28;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneObjectPathChannel::FMovieSceneObjectPathChannel(&this->MaterialChannel);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_28.LowerBound.Value.Value = 0;
  local_28.LowerBound._0_4_ = local_res8;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  local_28.UpperBound.Value.Value = 0;
  local_28.UpperBound._0_4_ = local_res18;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined2 *)&this->_padding_ = 0x201;
  UMovieSceneSection::SetRange((UMovieSceneSection *)this,&local_28);
  pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->MaterialChannel).PropertyClass.field0_0x0.DebugPtr = pUVar6;
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneObjectPathChannel>
              ((FMovieSceneChannelProxy *)(pTVar7 + 1),&this->MaterialChannel);
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UMovieScenePrimitiveMaterialSection *)(*pcVar4)();
        return pUVar8;
      }
      goto LAB_1467661f2;
    }
  }
  if (((pTVar9->_padding_ == 0) || (*(longlong *)&pTVar9->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9->SharedReferenceCount + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9->_padding_ = (longlong)pTVar9;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9->SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1467661f2:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pTVar9;
  local_30.ReferenceController = pTVar7;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_38) {
    this->_padding_ = (longlong)pTVar9;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

// ~UMovieScenePrimitiveMaterialSection @ 14676abb0

void __thiscall
UMovieScenePrimitiveMaterialSection::~UMovieScenePrimitiveMaterialSection
          (UMovieScenePrimitiveMaterialSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneObjectPathChannel::~FMovieSceneObjectPathChannel(&this->MaterialChannel);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146799460

UClass * __cdecl UMovieScenePrimitiveMaterialSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePrimitiveMaterialSection",
               &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.InnerSingleton,
               StaticRegisterNativesUMovieScenePrimitiveMaterialSection,0x260,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePrimitiveMaterialSection>,
               InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.InnerSingleton;
}

// ImportEntityImpl @ 1467a0fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieScenePrimitiveMaterialSection::ImportEntityImpl
          (UMovieScenePrimitiveMaterialSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  TComponentTypeID<UE::MovieScene::FObjectComponent> TVar1;
  TComponentTypeID<FComponentMaterialInfo> TVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  UMovieScenePrimitiveMaterialTrack *this_00;
  FComponentMaterialInfo *pFVar8;
  FBuiltInComponentTypes *pFVar9;
  FMovieSceneTracksComponentTypes *pFVar10;
  FMovieSceneObjectPathChannelKeyValue *pFVar11;
  UObject *pUVar12;
  FGuid local_118;
  undefined1 local_108 [8];
  FSoftObjectPath local_100;
  TObjectPtr<UObject>_u_0 local_e0;
  TArrayView<FMovieSceneObjectPathChannelKeyValue,int> local_d8;
  FMovieSceneChannelData local_c8;
  longlong *local_b0;
  undefined **local_a8;
  undefined4 local_a0;
  FMovieSceneObjectPathChannelKeyValue *local_9c;
  int iStack_94;
  undefined4 uStack_90;
  undefined1 local_8c;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_88;
  UObject *local_80;
  undefined8 local_78;
  undefined1 local_70;
  TComponentTypeID<FComponentMaterialInfo> local_68;
  uint local_64;
  uint uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined1 local_50;
  TComponentTypeID<FGuid> local_48;
  bool bStack_46;
  undefined1 uStack_45;
  
  pUVar7 = Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister();
  this_00 = (UMovieScenePrimitiveMaterialTrack *)
            UObjectBaseUtility::GetTypedOuter
                      ((UObjectBaseUtility *)&this[-1].MaterialChannel._padding_,pUVar7);
  if ((this_00 == (UMovieScenePrimitiveMaterialTrack *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Track",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieScenePrimitiveMaterialSection.cpp"
                         ,0x61,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = UMovieScenePrimitiveMaterialTrack::GetMaterialInfo(this_00);
  pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar10 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_100.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.SubPathString.Data.ArrayNum = 0;
  local_100.SubPathString.Data.ArrayMax = 0;
  local_108 = (undefined1  [8])0x0;
  local_100.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_100.AssetPath.AssetName.Number = 0;
  local_100.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_100.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_100.SubPathString,0);
  local_e0.DebugPtr = (UObject *)0x0;
  uVar3 = param_2->EntityID;
  if (uVar3 == UE::MovieScene::PrimitiveMaterialParameterSectionDefaultValueID) {
    local_108 = (undefined1  [8])this->_padding_;
    FSoftObjectPath::operator=(&local_100,(FSoftObjectPath *)&this->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)this->_padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    local_e0 = (TObjectPtr<UObject>_u_0)this->_padding_;
  }
  else {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_c8,(FMovieSceneChannel *)&this->_padding_,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (FKeyHandleLookupTable *)&this->_padding_);
    local_b0 = &this->_padding_;
    if (((CONCAT44(local_c8.Times._4_4_,(uint)local_c8.Times) == 0) || (local_b0 == (longlong *)0x0)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Times && Values",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                 ,0x122,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_d8.DataPtr = (FMovieSceneObjectPathChannelKeyValue *)*local_b0;
    lVar5 = local_b0[1];
    if (((int)lVar5 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_d8.ArrayNum = (int)lVar5;
    pFVar11 = TArrayView<FMovieSceneObjectPathChannelKeyValue,int>::operator[](&local_d8,uVar3);
    local_108 = *(undefined1 (*) [8])&(pFVar11->SoftPtr).SoftObjectPtr;
    FSoftObjectPath::operator=
              (&local_100,(FSoftObjectPath *)&(pFVar11->SoftPtr).SoftObjectPtr.field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 = (pFVar11->HardPtr).field0_0x0.DebugPtr, pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    local_e0 = (pFVar11->HardPtr).field0_0x0;
  }
  UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_118);
  local_d8.DataPtr = (FMovieSceneObjectPathChannelKeyValue *)CONCAT44(local_118.B,local_118.A);
  local_d8._12_4_ = local_118.D;
  local_d8.ArrayNum = local_118.C;
  bStack_46 = ((local_118.D != 0 || local_118.C != 0) || local_118.A != 0) || local_118.B != 0;
  local_48 = pFVar9->GenericObjectBinding;
  pUVar12 = FMovieSceneObjectPathChannelKeyValue::Get
                      ((FMovieSceneObjectPathChannelKeyValue *)local_108);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  TVar1 = pFVar9->ObjectResult;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar12 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
  }
  TVar2 = pFVar10->ComponentMaterialInfo;
  local_a0 = _local_48;
  local_8c = 1;
  local_70 = 1;
  local_c8.Times._0_4_ = (pFVar8->MaterialSlotName).ComparisonIndex.Value;
  local_c8.Times._4_4_ = (pFVar8->MaterialSlotName).Number;
  local_c8.KeyHandles._0_4_ = pFVar8->MaterialSlotIndex;
  local_c8.KeyHandles._4_1_ = pFVar8->MaterialType;
  local_c8.KeyHandles._5_3_ = *(undefined3 *)&pFVar8->field_0xd;
  local_9c = local_d8.DataPtr;
  iStack_94 = local_d8.ArrayNum;
  uStack_90 = local_d8._12_4_;
  local_88 = TVar1;
  local_80 = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  local_78 = 0;
  local_a8 = &
             ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFObjectComponent_MovieScene_UE___23_U__TAdd_UFComponentMaterialInfo___23__MovieScene_UE__6B_
  ;
  local_54 = 1;
  local_50 = 0;
  local_68 = TVar2;
  local_64 = (uint)local_c8.Times;
  uStack_60 = local_c8.Times._4_4_;
  iStack_5c = (int)local_c8.KeyHandles;
  uStack_58 = local_c8.KeyHandles._4_4_;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>
                      *)&local_a8);
  if (local_100.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1690

bool __thiscall
UMovieScenePrimitiveMaterialSection::PopulateEvaluationFieldImpl
          (UMovieScenePrimitiveMaterialSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  FFrameNumber *pFVar12;
  TRangeBound<FFrameNumber> *pTVar13;
  TRange<FFrameNumber> *pTVar14;
  TRangeBound<FFrameNumber> TVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int local_res8;
  FFrameNumber FStack_a4;
  TRange<FFrameNumber> local_a0;
  TRange<FFrameNumber> local_90;
  TRange<FFrameNumber> local_80;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  int iStack_64;
  UObject *local_60;
  FMovieSceneChannelData local_58;
  longlong *local_40;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_58,(FMovieSceneChannel *)&this->_padding_,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (FKeyHandleLookupTable *)&this->_padding_);
  local_40 = &this->_padding_;
  if (((local_58.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_40 == (longlong *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  plVar7 = local_40;
  if (((local_58.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_40 == (longlong *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x2f3,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  uVar2 = (local_58.Times)->ArrayNum;
  pFVar4 = ((local_58.Times)->AllocatorInstance).Data;
  if (((int)uVar2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  if (((int)plVar7[1] < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  iVar10 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  if (uVar2 == 0) {
    local_res8 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)&this[-1].MaterialChannel._padding_,
                            UE::MovieScene::PrimitiveMaterialParameterSectionDefaultValueID);
  }
  else {
    TVar15 = param_1->LowerBound;
    uVar16 = 0;
    uVar17 = uVar16;
    if (TVar15.Type.Value.Value != '\x02') {
      lVar11 = 0;
      if (TVar15.Type.Value.Value == '\0') {
        lVar11 = 4;
      }
      uVar17 = 0;
      uVar18 = uVar2;
      if (0 < (int)uVar2) {
        do {
          iVar3 = (uVar18 >> 1) + uVar16;
          uVar17 = uVar16;
          if (*(int *)(pFVar4 + (longlong)iVar3 * 4) <=
              *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar11) + TVar15.Value.Value.Value) {
            uVar17 = iVar3 + (uVar18 & 1);
          }
          uVar6 = uVar18 >> 1;
          uVar16 = uVar17;
          uVar18 = uVar18 >> 1;
        } while (uVar6 != 0);
      }
    }
    uVar16 = uVar2 - 1;
    if ((int)uVar17 < (int)(uVar2 - 1)) {
      uVar16 = uVar17;
    }
    if ((int)uVar16 < 0) {
      return true;
    }
    if ((int)uVar2 <= (int)uVar16) {
      return true;
    }
    local_60 = (UObject *)&this[-1].MaterialChannel._padding_;
    local_res8 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity(param_3,local_60,uVar16);
    lVar11 = (longlong)(int)uVar16;
    do {
      if (((int)uVar16 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      uVar1 = (param_1->LowerBound).Type.Value;
      local_80.LowerBound.Type.Value = '\x01';
      local_80.LowerBound.Value.Value = *(int *)(pFVar4 + lVar11 * 4);
      if (uVar1 != '\x02') {
        iVar3 = (param_1->LowerBound).Value.Value;
        pTVar14 = param_1;
        if (local_80.LowerBound.Value.Value <= iVar3) {
          if (local_80.LowerBound.Value.Value < iVar3) {
            pTVar14 = &local_80;
          }
          if (uVar1 != '\x01') break;
        }
        if ((pTVar14->LowerBound).Value.Value != (param_1->LowerBound).Value.Value) break;
      }
      uVar1 = (param_1->UpperBound).Type.Value;
      pTVar13 = &param_1->UpperBound;
      local_80.UpperBound.Type.Value = '\x01';
      local_80.UpperBound.Value.Value = local_80.LowerBound.Value.Value;
      if (uVar1 != '\x02') {
        iVar3 = (param_1->UpperBound).Value.Value;
        if (iVar3 <= local_80.LowerBound.Value.Value) {
          if (iVar3 < local_80.LowerBound.Value.Value) {
            pTVar13 = &local_80.UpperBound;
          }
          if (uVar1 != '\x01') break;
        }
        if ((pTVar13->Value).Value != (param_1->UpperBound).Value.Value) break;
      }
      if (((int)uVar16 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      uVar17 = local_70;
      local_70 = local_70 & 0xffffff00;
      iStack_6c = *(int *)(pFVar4 + lVar11 * 4);
      local_a0.UpperBound =
           (TRangeBound<FFrameNumber>)(CONCAT44(iStack_6c,uVar17) & 0xffffffffffffff00);
      local_a0.LowerBound = TVar15;
      if (TVar15.Type.Value.Value == '\x02') {
LAB_1467b19d1:
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
                  (param_3,&local_a0,local_res8,iVar10);
        if (((int)uVar16 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        local_68 = CONCAT31(local_68._1_3_,1);
        iStack_64 = *(int *)(pFVar4 + lVar11 * 4);
        TVar15.Value.Value = iStack_64;
        TVar15._0_4_ = local_68;
        local_res8 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                               (param_3,local_60,uVar16);
      }
      else {
        local_a0.LowerBound.Value = TVar15.Value.Value;
        bVar8 = local_a0.LowerBound.Value.Value <= iStack_6c;
        if (bVar8) {
          pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_a0.UpperBound);
          iVar3 = pFVar12->Value;
          pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_a0.LowerBound);
          if ((pFVar12->Value != iVar3) ||
             ((local_a0.LowerBound.Type.Value != '\0' && (local_a0.UpperBound.Type.Value != '\0'))))
          goto LAB_1467b19d1;
        }
      }
      uVar16 = uVar16 + 1;
      lVar11 = lVar11 + 1;
    } while ((int)uVar16 < (int)uVar2);
    local_90.UpperBound = param_1->UpperBound;
    local_90.LowerBound = TVar15;
    if ((TVar15.Type.Value.Value != '\x02') && (local_90.UpperBound.Type.Value.Value != '\x02')) {
      FStack_a4 = TVar15.Value.Value;
      if (local_90.UpperBound.Value.Value.Value < FStack_a4.Value) {
        return true;
      }
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_90.UpperBound);
      iVar3 = pFVar12->Value;
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_90.LowerBound);
      if (pFVar12->Value == iVar3) {
        if (local_90.LowerBound.Type.Value == '\0') {
          return true;
        }
        if (local_90.UpperBound.Type.Value == '\0') {
          return true;
        }
      }
    }
    param_1 = &local_90;
  }
  FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,local_res8,iVar10);
  return true;
}

// StaticRegisterNativesUMovieScenePrimitiveMaterialSection @ 1467c2a30

void __cdecl
UMovieScenePrimitiveMaterialSection::StaticRegisterNativesUMovieScenePrimitiveMaterialSection(void)

{
  return;
}

// _getUObject @ 1467ca840

UObject * __thiscall
UMovieScenePrimitiveMaterialSection::_getUObject(UMovieScenePrimitiveMaterialSection *this)

{
  return (UObject *)&this[-1].MaterialChannel._padding_;
}

