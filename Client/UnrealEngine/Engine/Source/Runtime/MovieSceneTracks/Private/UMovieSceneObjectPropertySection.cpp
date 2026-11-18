// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 146727230

UClass * __cdecl UMovieSceneObjectPropertySection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneObjectPropertySection",
               &Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.InnerSingleton,
               StaticRegisterNativesUMovieSceneObjectPropertySection,0x260,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneObjectPropertySection>,
               InternalVTableHelperCtorCaller<UMovieSceneObjectPropertySection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.InnerSingleton;
}

// UMovieSceneObjectPropertySection @ 146765990

UMovieSceneObjectPropertySection * __thiscall
UMovieSceneObjectPropertySection::UMovieSceneObjectPropertySection
          (UMovieSceneObjectPropertySection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneObjectPathChannel::FMovieSceneObjectPathChannel(&this->ObjectChannel);
  return this;
}

// UMovieSceneObjectPropertySection @ 1467659e0

UMovieSceneObjectPropertySection * __thiscall
UMovieSceneObjectPropertySection::UMovieSceneObjectPropertySection
          (UMovieSceneObjectPropertySection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UMovieSceneObjectPropertySection *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint local_res8;
  uint local_res18;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  TRange<FFrameNumber> local_28;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneObjectPathChannel::FMovieSceneObjectPathChannel(&this->ObjectChannel);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_28.LowerBound.Value.Value = 0;
  local_28.LowerBound._0_4_ = local_res8;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  local_28.UpperBound.Value.Value = 0;
  local_28.UpperBound._0_4_ = local_res18;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined2 *)&this->_padding_ = 0x201;
  UMovieSceneSection::SetRange((UMovieSceneSection *)this,&local_28);
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneObjectPathChannel>
              ((FMovieSceneChannelProxy *)(pTVar6 + 1),&this->ObjectChannel);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UMovieSceneObjectPropertySection *)(*pcVar4)();
        return pUVar7;
      }
      goto LAB_146765b4c;
    }
  }
  if (((pTVar8->_padding_ == 0) || (*(longlong *)&pTVar8->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8->SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8->_padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8->SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_146765b4c:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pTVar8;
  local_30.ReferenceController = pTVar6;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_38) {
    this->_padding_ = (longlong)pTVar8;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// ~UMovieSceneObjectPropertySection @ 14676a9f0

void __thiscall
UMovieSceneObjectPropertySection::~UMovieSceneObjectPropertySection
          (UMovieSceneObjectPropertySection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneObjectPathChannel::~FMovieSceneObjectPathChannel(&this->ObjectChannel);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146799160

UClass * __cdecl UMovieSceneObjectPropertySection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneObjectPropertySection",
               &Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.InnerSingleton,
               StaticRegisterNativesUMovieSceneObjectPropertySection,0x260,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneObjectPropertySection>,
               InternalVTableHelperCtorCaller<UMovieSceneObjectPropertySection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.InnerSingleton;
}

// ImportEntityImpl @ 14679ff60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneObjectPropertySection::ImportEntityImpl
          (UMovieSceneObjectPropertySection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined **local_48;
  ushort local_40;
  TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel> local_38;
  longlong *local_30;
  undefined1 local_28;
  undefined1 local_20;
  FComponentTypeID local_18;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_28 = 1;
  local_20 = 0;
  local_40 = (pFVar2->Object).PropertyTag.Value;
  local_38 = pFVar1->ObjectPathChannel;
  local_30 = &this->_padding_;
  local_48 = &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceObjectPathChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  local_18.Value = local_40;
  UE::MovieScene::
  TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>_>
  ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>_>
            *)&local_48,(UMovieSceneSection *)&this[-1].ObjectChannel._padding_,param_2,param_3);
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1660

bool __thiscall
UMovieSceneObjectPropertySection::PopulateEvaluationFieldImpl
          (UMovieSceneObjectPropertySection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].ObjectChannel._padding_,param_1,param_2,param_3);
  return true;
}

// PostLoad @ 1467b23f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneObjectPropertySection::PostLoad(UMovieSceneObjectPropertySection *this)

{
  int iVar1;
  longlong lVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  UClass *pUVar4;
  TObjectPtr<UClass>_u_0 local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  FName local_res18 [2];
  FString local_48;
  undefined1 local_38 [16];
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      local_res10 = (TObjectPtr<UClass>_u_0)(this->ObjectChannel).PropertyClass.field0_0x0.DebugPtr;
      local_res8 = (TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)(lVar2 + 0x148))->DebugPtr;
      if (local_res8.DebugPtr == (UClass *)0x0) {
        if (local_res10.DebugPtr != (UClass *)0x0) {
          if (2 < (byte)LogMovieScene._0_1_) {
            local_res18[0] = (FName)(local_res10.DebugPtr)->_padding_;
            ::FName::ToString(local_res18,&local_48);
            local_res18[0] = (FName)(local_res10.DebugPtr)->_padding_;
            ::FName::ToString(local_res18,(FString *)local_38);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
            if ((TObjectPtr<UClass>_u_0 *)local_38._0_8_ != (TObjectPtr<UClass>_u_0 *)0x0) {
              FMemory::Free((void *)local_38._0_8_);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          TVar3 = local_res10;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res10.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
          }
          ((TObjectPtr<UClass>_u_0 *)(lVar2 + 0x148))->DebugPtr = (UClass *)TVar3;
        }
      }
      else if (local_res10.DebugPtr == (UClass *)0x0) {
        if (2 < (byte)LogMovieScene._0_1_) {
          local_res18[0] = (FName)(local_res8.DebugPtr)->_padding_;
          ::FName::ToString(local_res18,(FString *)local_38);
          local_res18[0] = (FName)(local_res8.DebugPtr)->_padding_;
          ::FName::ToString(local_res18,&local_48);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if ((TObjectPtr<UClass>_u_0 *)local_38._0_8_ != (TObjectPtr<UClass>_u_0 *)0x0) {
            FMemory::Free((void *)local_38._0_8_);
          }
        }
        TVar3 = local_res8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res8.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
        }
        (this->ObjectChannel).PropertyClass.field0_0x0.DebugPtr = (UClass *)TVar3;
      }
      else if (local_res8.DebugPtr != local_res10.DebugPtr) {
        local_38._0_8_ = &local_res8;
        local_38._8_8_ = &local_res10;
        `UMovieSceneObjectPropertySection::PostLoad'::__l52::<lambda_1>::operator()(local_38);
      }
    }
  }
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  return;
}

// StaticRegisterNativesUMovieSceneObjectPropertySection @ 1467c29c0

void __cdecl
UMovieSceneObjectPropertySection::StaticRegisterNativesUMovieSceneObjectPropertySection(void)

{
  return;
}

// _getUObject @ 1467ca820

UObject * __thiscall
UMovieSceneObjectPropertySection::_getUObject(UMovieSceneObjectPropertySection *this)

{
  return (UObject *)&this[-1].ObjectChannel._padding_;
}

// operator() @ 1504f3730

bool __thiscall
`UMovieSceneObjectPropertySection::PostLoad'::__l52::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2629221757038362582>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2629221757038362582>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f37ef;
    }
  }
  bVar4 = false;
LAB_1504f37ef:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

