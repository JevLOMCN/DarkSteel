// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 20

// StaticClass @ 14d097430

UClass * __cdecl UMovieSceneLiveLinkSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSection",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSection,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSection>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton;
}

// UMovieSceneLiveLinkSection @ 14d09e5d0

UMovieSceneLiveLinkSection * __thiscall
UMovieSceneLiveLinkSection::UMovieSceneLiveLinkSection
          (UMovieSceneLiveLinkSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSection__6B_;
  (this->SubjectPreset).Key.Source.A = 0;
  (this->SubjectPreset).Key.Source.B = 0;
  (this->SubjectPreset).Key.Source.C = 0;
  (this->SubjectPreset).Key.Source.D = 0;
  (this->SubjectPreset).Key.SubjectName.Name = (FName)0x0;
  (this->SubjectPreset).Role.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SubjectPreset).Settings.field0_0x0.DebugPtr = (ULiveLinkSubjectSettings *)0x0;
  (this->SubjectPreset).VirtualSubject.field0_0x0.DebugPtr = (ULiveLinkVirtualSubject *)0x0;
  (this->SubjectPreset).bEnabled = false;
  (this->ChannelMask).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelMask).ArrayNum = 0;
  (this->ChannelMask).ArrayMax = 0;
  (this->SubSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubSections).ArrayNum = 0;
  (this->SubSections).ArrayMax = 0;
  (this->StaticData).Object = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
  (this->StaticData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SubjectName_DEPRECATED).ComparisonIndex = 0;
  (this->SubjectName_DEPRECATED).Number = 0;
  FLiveLinkFrameData::FLiveLinkFrameData(&this->TemplateToPush_DEPRECATED);
  (this->RefSkeleton_DEPRECATED).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefSkeleton_DEPRECATED).BoneNames.ArrayNum = 0;
  (this->RefSkeleton_DEPRECATED).BoneNames.ArrayMax = 0;
  (this->RefSkeleton_DEPRECATED).BoneParents.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RefSkeleton_DEPRECATED).BoneParents.ArrayNum = 0;
  (this->RefSkeleton_DEPRECATED).BoneParents.ArrayMax = 0;
  (this->CurveNames_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveNames_DEPRECATED).ArrayNum = 0;
  (this->CurveNames_DEPRECATED).ArrayMax = 0;
  (this->PropertyFloatChannels_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyFloatChannels_DEPRECATED).ArrayNum = 0;
  (this->PropertyFloatChannels_DEPRECATED).ArrayMax = 0;
  return this;
}

// UMovieSceneLiveLinkSection @ 14d09e6b0

UMovieSceneLiveLinkSection * __thiscall
UMovieSceneLiveLinkSection::UMovieSceneLiveLinkSection
          (UMovieSceneLiveLinkSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSection__6B_;
  (this->SubjectPreset).Key.Source.A = 0;
  (this->SubjectPreset).Key.Source.B = 0;
  (this->SubjectPreset).Key.Source.C = 0;
  (this->SubjectPreset).Key.Source.D = 0;
  (this->SubjectPreset).Key.SubjectName.Name = (FName)0x0;
  (this->SubjectPreset).Role.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SubjectPreset).Settings.field0_0x0.DebugPtr = (ULiveLinkSubjectSettings *)0x0;
  (this->SubjectPreset).VirtualSubject.field0_0x0.DebugPtr = (ULiveLinkVirtualSubject *)0x0;
  (this->SubjectPreset).bEnabled = false;
  (this->ChannelMask).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelMask).ArrayNum = 0;
  (this->ChannelMask).ArrayMax = 0;
  (this->SubSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubSections).ArrayNum = 0;
  (this->SubSections).ArrayMax = 0;
  (this->StaticData).Object = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
  (this->StaticData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SubjectName_DEPRECATED).ComparisonIndex = 0;
  (this->SubjectName_DEPRECATED).Number = 0;
  FLiveLinkFrameData::FLiveLinkFrameData(&this->TemplateToPush_DEPRECATED);
  (this->RefSkeleton_DEPRECATED).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefSkeleton_DEPRECATED).BoneNames.ArrayNum = 0;
  (this->RefSkeleton_DEPRECATED).BoneNames.ArrayMax = 0;
  (this->RefSkeleton_DEPRECATED).BoneParents.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RefSkeleton_DEPRECATED).BoneParents.ArrayNum = 0;
  (this->RefSkeleton_DEPRECATED).BoneParents.ArrayMax = 0;
  (this->CurveNames_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveNames_DEPRECATED).ArrayNum = 0;
  (this->CurveNames_DEPRECATED).ArrayMax = 0;
  (this->PropertyFloatChannels_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyFloatChannels_DEPRECATED).ArrayNum = 0;
  (this->PropertyFloatChannels_DEPRECATED).ArrayMax = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  return this;
}

// ~UMovieSceneLiveLinkSection @ 14d09efa0

void __thiscall
UMovieSceneLiveLinkSection::~UMovieSceneLiveLinkSection(UMovieSceneLiveLinkSection *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSection__6B_;
  DestructItems<FMovieSceneFloatChannel,int>
            ((FMovieSceneFloatChannel *)
             (this->PropertyFloatChannels_DEPRECATED).AllocatorInstance.Data,
             (this->PropertyFloatChannels_DEPRECATED).ArrayNum);
  pFVar1 = (this->PropertyFloatChannels_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurveNames_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RefSkeleton_DEPRECATED).BoneParents.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RefSkeleton_DEPRECATED).BoneNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TemplateToPush_DEPRECATED).MetaData.StringMetaData.field_0x48 = 0;
  pvVar2 = *(void **)&(this->TemplateToPush_DEPRECATED).MetaData.StringMetaData.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TemplateToPush_DEPRECATED).MetaData);
  pFVar1 = (this->TemplateToPush_DEPRECATED).CurveElements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TemplateToPush_DEPRECATED).Transforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StaticData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SubSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChannelMask).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// ConvertPreRoleData @ 14d0a1cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMovieSceneLiveLinkSection::ConvertPreRoleData(UMovieSceneLiveLinkSection *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *pTVar4;
  FLiveLinkRefSkeleton *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<TObjectPtr<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_> *pTVar8;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar9;
  FMovieSceneFloatChannel *pFVar10;
  code *pcVar11;
  FWeakObjectPtr FVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  UClass *pUVar17;
  UScriptStruct *pUVar18;
  FLiveLinkSkeletonStaticData *pFVar19;
  UClass *pUVar20;
  UObject *pUVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong *plVar24;
  FScriptContainerElement *pFVar25;
  ForAnyElementType *pFVar26;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 auStackY_298 [32];
  bool local_248 [8];
  ForAnyElementType local_240;
  int local_238;
  int local_234;
  UObject *local_230;
  UObject *local_228;
  UObject *local_220;
  FWeakObjectPtr local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  UScriptStruct *local_1e0;
  TObjectPtr<UClass>_u_0 local_1d8;
  TObjectPtr<UClass>_u_0 local_1d0;
  TObjectPtr<UClass>_u_0 local_1c8 [2];
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  (this->SubjectPreset).Key.Source.C = 0;
  (this->SubjectPreset).Key.Source.D = 0;
  (this->SubjectPreset).Key.Source.A = 0;
  (this->SubjectPreset).Key.Source.B = 0;
  (this->SubjectPreset).Key.SubjectName.Name = this->SubjectName_DEPRECATED;
  pUVar17 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  pTVar4 = &this->StaticData;
  (this->SubjectPreset).Role.Class.field0_0x0.DebugPtr = pUVar17;
  if ((pTVar4->Object == (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar9 = pTVar4->Object;
  pUVar18 = FLiveLinkSkeletonStaticData::StaticStruct();
  if ((pUVar18 == (UScriptStruct *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InOtherStruct",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                          ,0x16d,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  local_218.ObjectIndex = 0;
  local_218.ObjectSerialNumber = 0;
  local_1e0 = pUVar18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_1e0);
  FVar12 = local_218;
  (**(code **)((pFVar9->WrappedStruct)._padding_ + 0x40))(pFVar9);
  puVar22 = (undefined8 *)(pFVar9->WrappedStruct)._padding_;
  (pFVar9->WrappedStruct).ScriptStruct.WeakPtr = FVar12;
  (*(code *)*puVar22)(pFVar9);
  if ((pTVar4->Object == (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar19 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                      (pTVar4->Object);
  pFVar5 = &this->RefSkeleton_DEPRECATED;
  pTVar1 = &pFVar19->BoneNames;
  if ((FLiveLinkRefSkeleton *)pTVar1 != pFVar5) {
    pFVar25 = (pTVar1->AllocatorInstance).Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    (pTVar1->AllocatorInstance).Data = (pFVar5->BoneNames).AllocatorInstance.Data;
    (pFVar5->BoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar19->BoneNames).ArrayNum = (this->RefSkeleton_DEPRECATED).BoneNames.ArrayNum;
    (pFVar19->BoneNames).ArrayMax = (this->RefSkeleton_DEPRECATED).BoneNames.ArrayMax;
    (this->RefSkeleton_DEPRECATED).BoneNames.ArrayNum = 0;
    (this->RefSkeleton_DEPRECATED).BoneNames.ArrayMax = 0;
  }
  pTVar6 = &(this->RefSkeleton_DEPRECATED).BoneParents;
  pTVar2 = &pFVar19->BoneParents;
  if (pTVar2 != pTVar6) {
    pFVar25 = (pTVar2->AllocatorInstance).Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar19->BoneParents).ArrayNum = (this->RefSkeleton_DEPRECATED).BoneParents.ArrayNum;
    (pFVar19->BoneParents).ArrayMax = (this->RefSkeleton_DEPRECATED).BoneParents.ArrayMax;
    (this->RefSkeleton_DEPRECATED).BoneParents.ArrayNum = 0;
    (this->RefSkeleton_DEPRECATED).BoneParents.ArrayMax = 0;
  }
  local_210 = 0;
  pUVar17 = UMovieSceneLiveLinkSubSectionAnimation::StaticClass();
  local_208 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar20 = UMovieSceneLiveLinkSubSectionAnimation::StaticClass();
  CheckIsClassChildOf_Internal(pUVar20,pUVar17);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar17);
  local_1b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1b8._56_8_ = (UPackage *)0x0;
  local_1b8._16_4_ = 0;
  local_1b8._20_4_ = 0;
  local_1b8._24_4_ = RF_Transactional;
  local_1b8._40_8_ = (UObject *)0x0;
  local_1b8[0x20] = false;
  local_1b8._8_8_ = this;
  pUVar21 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar24 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  local_1d8 = (TObjectPtr<UClass>_u_0)(this->SubjectPreset).Role.Class.field0_0x0.DebugPtr;
  pcVar11 = *(code **)(*(longlong *)pUVar21 + 0x2b0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d8.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_1d8.DebugPtr);
  }
  (*pcVar11)(pUVar21,&local_1d8,pTVar4);
  iVar14 = (pFVar19->BoneNames).ArrayNum * 9;
  if (0 < iVar14) {
    if ((*(int *)&pUVar21[1].field_0x8 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)(pUVar21 + 1) + 0x10) != iVar14) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<9040024143596093778>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSection.cpp"
                            ,0x152,
                            "AnimationSubSection->SubSectionData.Properties[0].FloatChannel.Num() == TransformCount"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pTVar7 = &this->PropertyFloatChannels_DEPRECATED;
    local_240.Data = (FScriptContainerElement *)0x0;
    pFVar10 = (FMovieSceneFloatChannel *)(pTVar7->AllocatorInstance).Data;
    if ((pFVar10 == (FMovieSceneFloatChannel *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x2d3,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_238 = iVar14;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x128,8,iVar14,0,&local_240,iVar14,&local_234);
    ConstructItems<FMovieSceneFloatChannel,FMovieSceneFloatChannel,int>
              (local_240.Data,pFVar10,iVar14);
    if ((*(int *)&pUVar21[1].field_0x8 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar23 = *(longlong *)(pUVar21 + 1);
    pFVar26 = (ForAnyElementType *)(lVar23 + 8);
    if (pFVar26 != &local_240) {
      DestructItems<FMovieSceneFloatChannel,int>
                ((FMovieSceneFloatChannel *)pFVar26->Data,*(int *)(lVar23 + 0x10));
      if (pFVar26->Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar26->Data);
      }
      pFVar26->Data = local_240.Data;
      local_240.Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar23 + 0x10) = local_238;
      *(int *)(lVar23 + 0x14) = local_234;
      local_238 = 0;
      local_234 = 0;
    }
    DestructItems<FMovieSceneFloatChannel,int>((FMovieSceneFloatChannel *)local_240.Data,local_238);
    if ((FMovieSceneFloatChannel *)local_240.Data != (FMovieSceneFloatChannel *)0x0) {
      FMemory::Free(local_240.Data);
    }
    if (((this->PropertyFloatChannels_DEPRECATED).ArrayNum < iVar14) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(pTVar7,0,iVar14);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x128,8,&pTVar7->AllocatorInstance,(this->PropertyFloatChannels_DEPRECATED).ArrayNum,
               &(this->PropertyFloatChannels_DEPRECATED).ArrayMax);
    pTVar8 = &this->SubSections;
    local_230 = pUVar21;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar21);
    }
    pFVar25 = (pTVar8->AllocatorInstance).Data;
    if (((pFVar25 <= (FScriptContainerElement *)&local_230) &&
        ((FScriptContainerElement *)&local_230 <
         pFVar25 + (longlong)(this->SubSections).ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar14 = (this->SubSections).ArrayNum;
    piVar3 = &(this->SubSections).ArrayMax;
    if (iVar14 == *piVar3) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar8->AllocatorInstance,piVar3);
    }
    (this->SubSections).ArrayNum = iVar14 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_230;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_230 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_230);
    }
  }
  if (0 < (this->CurveNames_DEPRECATED).ArrayNum) {
    if ((pTVar4->Object == (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar9 = pTVar4->Object;
    puVar22 = (undefined8 *)(**(code **)((pFVar9->WrappedStruct)._padding_ + 0x18))(pFVar9);
    lVar23 = (**(code **)((pFVar9->WrappedStruct)._padding_ + 0x20))(pFVar9);
    if (lVar23 != 0) {
      Z_Construct_UClass_UScriptStruct_NoRegister();
    }
    pTVar1 = &this->CurveNames_DEPRECATED;
    if ((TArray<FName,TSizedDefaultAllocator<32>_> *)puVar22 != pTVar1) {
      if ((void *)*puVar22 != (void *)0x0) {
        FMemory::Free((void *)*puVar22);
      }
      *puVar22 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar22 + 1) = (this->CurveNames_DEPRECATED).ArrayNum;
      *(int *)((longlong)puVar22 + 0xc) = (this->CurveNames_DEPRECATED).ArrayMax;
      (this->CurveNames_DEPRECATED).ArrayNum = 0;
      (this->CurveNames_DEPRECATED).ArrayMax = 0;
    }
    local_200 = 0;
    pUVar17 = UMovieSceneLiveLinkSubSectionBasicRole::StaticClass();
    local_1f8 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar20 = UMovieSceneLiveLinkSubSectionBasicRole::StaticClass();
    CheckIsClassChildOf_Internal(pUVar20,pUVar17);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar17);
    local_138._48_8_ = (FObjectInstancingGraph *)0x0;
    local_138._56_8_ = (UPackage *)0x0;
    local_138._16_4_ = 0;
    local_138._20_4_ = 0;
    local_138._24_4_ = RF_Transactional;
    local_138._40_8_ = (UObject *)0x0;
    local_138[0x20] = false;
    local_138._8_8_ = this;
    pUVar21 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    if (local_138._64_8_ != 0) {
      plVar24 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar24 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    local_1d0 = (TObjectPtr<UClass>_u_0)(this->SubjectPreset).Role.Class.field0_0x0.DebugPtr;
    pcVar11 = *(code **)(*(longlong *)pUVar21 + 0x2b0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1d0.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1d0.DebugPtr);
    }
    (*pcVar11)(pUVar21,&local_1d0,pTVar4);
    if ((*(int *)&pUVar21[1].field_0x8 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)(pUVar21 + 1) + 0x10) !=
         (this->PropertyFloatChannels_DEPRECATED).ArrayNum) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<9040024143596093793>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSection.cpp"
                            ,0x161,
                            "BasicRoleSubSection->SubSectionData.Properties[0].FloatChannel.Num() == PropertyFloatChannels_DEPRECATED.Num()"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)&pUVar21[1].field_0x8 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar23 = *(longlong *)(pUVar21 + 1);
    pTVar7 = &this->PropertyFloatChannels_DEPRECATED;
    puVar22 = (undefined8 *)(lVar23 + 8);
    if ((TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *)puVar22 != pTVar7) {
      DestructItems<FMovieSceneFloatChannel,int>
                ((FMovieSceneFloatChannel *)*puVar22,*(int *)(lVar23 + 0x10));
      if ((void *)*puVar22 != (void *)0x0) {
        FMemory::Free((void *)*puVar22);
      }
      *puVar22 = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar23 + 0x10) = (this->PropertyFloatChannels_DEPRECATED).ArrayNum;
      *(int *)(lVar23 + 0x14) = (this->PropertyFloatChannels_DEPRECATED).ArrayMax;
      (this->PropertyFloatChannels_DEPRECATED).ArrayNum = 0;
      (this->PropertyFloatChannels_DEPRECATED).ArrayMax = 0;
    }
    pTVar8 = &this->SubSections;
    local_228 = pUVar21;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar21);
    }
    pFVar25 = (pTVar8->AllocatorInstance).Data;
    if (((pFVar25 <= (FScriptContainerElement *)&local_228) &&
        ((FScriptContainerElement *)&local_228 <
         pFVar25 + (longlong)(this->SubSections).ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar14 = (this->SubSections).ArrayNum;
    piVar3 = &(this->SubSections).ArrayMax;
    if (iVar14 == *piVar3) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar8->AllocatorInstance,piVar3);
    }
    (this->SubSections).ArrayNum = iVar14 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_228;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_228);
    }
  }
  local_1f0 = 0;
  pUVar17 = UMovieSceneLiveLinkSubSectionProperties::StaticClass();
  local_1e8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar20 = UMovieSceneLiveLinkSubSectionProperties::StaticClass();
  CheckIsClassChildOf_Internal(pUVar20,pUVar17);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar17);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_Transactional;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  pUVar21 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar24 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  local_1c8[0] = (TObjectPtr<UClass>_u_0)(this->SubjectPreset).Role.Class.field0_0x0.DebugPtr;
  pcVar11 = *(code **)(*(longlong *)pUVar21 + 0x2b0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1c8[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1c8[0].DebugPtr);
  }
  (*pcVar11)(pUVar21,local_1c8,pTVar4);
  pTVar8 = &this->SubSections;
  local_220 = pUVar21;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar21);
  }
  pFVar25 = (pTVar8->AllocatorInstance).Data;
  if (((pFVar25 <= (FScriptContainerElement *)&local_220) &&
      ((FScriptContainerElement *)&local_220 < pFVar25 + (longlong)(this->SubSections).ArrayMax * 8)
      ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar14 = (this->SubSections).ArrayNum;
  piVar3 = &(this->SubSections).ArrayMax;
  if (iVar14 == *piVar3) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar8->AllocatorInstance,piVar3);
  }
  (this->SubSections).ArrayNum = iVar14 + 1;
  *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_220;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_220);
  }
  uVar15 = (**(code **)(this->_padding_ + 0x3b0))(this);
  this_00 = &this->ChannelMask;
  iVar14 = (this->ChannelMask).ArrayNum;
  piVar3 = &(this->ChannelMask).ArrayNum;
  if (iVar14 < (int)uVar15) {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar15 - iVar14,&this_00->AllocatorInstance,piVar3,
                        &(this->ChannelMask).ArrayMax);
    memset((this_00->AllocatorInstance).Data + iVar16,0,(longlong)(int)(uVar15 - iVar14));
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar14) {
      iVar14 = iVar14 - uVar15;
      if (iVar14 < 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      else if (iVar14 == 0) goto LAB_14d0a2806;
      pFVar25 = (this_00->AllocatorInstance).Data + (int)uVar15;
      iVar16 = (*piVar3 - iVar14) - uVar15;
      if (iVar16 != 0) {
        memmove(pFVar25,pFVar25 + iVar14,(longlong)iVar16);
      }
      *piVar3 = *piVar3 - iVar14;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,&this_00->AllocatorInstance,*piVar3,&(this->ChannelMask).ArrayMax);
    }
  }
LAB_14d0a2806:
  local_248[0] = true;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(this_00,local_248,uVar15);
  return;
}

// CreateChannelProxy @ 14d0a2860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall UMovieSceneLiveLinkSection::CreateChannelProxy(UMovieSceneLiveLinkSection *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMovieSceneChannelEntry *pFVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  FSharedReferencer<1> local_68;
  FMovieSceneChannelEntry local_60;
  FMovieSceneChannelEntry *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar10 = (this->SubSections).AllocatorInstance.Data;
  iVar7 = (this->SubSections).ArrayNum;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (FMovieSceneChannelEntry *)0x0;
  pFVar2 = pFVar10 + (longlong)iVar7 * 8;
  local_40 = 0;
  local_3c = 1;
  pTVar13 = pTVar11;
  while( true ) {
    if ((this->SubSections).ArrayNum != iVar7) {
      local_78[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneLiveLinkSubSection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_78);
    }
    if (pFVar10 == pFVar2) break;
    iVar6 = (**(code **)(**(longlong **)pFVar10 + 0x2b8))
                      (*(longlong **)pFVar10,pTVar13,&this->ChannelMask,&local_60);
    pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(uint)((int)pTVar13 + iVar6);
    pFVar10 = pFVar10 + 8;
  }
  pTVar8 = ::operator_new(0x68);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[3]._padding_ = 0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_48 == (FMovieSceneChannelEntry *)0x0) {
      memmove(pTVar8 + 4,&local_60,0x18);
    }
    if (*(void **)&pTVar8[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar8[5].SharedReferenceCount);
    }
    pTVar12 = pTVar8 + 1;
    *(FMovieSceneChannelEntry **)&pTVar8[5].SharedReferenceCount = local_48;
    local_48 = (FMovieSceneChannelEntry *)0x0;
    *(int *)&pTVar8[6]._padding_ = local_40;
    *(undefined4 *)((longlong)&pTVar8[6]._padding_ + 4) = local_3c;
    local_40 = 0;
    local_3c = 1;
    pTVar11 = pTVar8;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      goto LAB_14d0a2a47;
    }
  }
  if (((pTVar12->_padding_ == 0) || (*(longlong *)&pTVar12->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar12->SharedReferenceCount + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12->_padding_ = (longlong)pTVar12;
    if (pTVar11 != *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar12->SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount = pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_14d0a2a47:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70 = pTVar12;
  local_68.ReferenceController = pTVar11;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_70) {
    this->_padding_ = (longlong)pTVar12;
    local_70 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pFVar9 = &local_60;
  if (local_48 != (FMovieSceneChannelEntry *)0x0) {
    pFVar9 = local_48;
  }
  DestructItems<FMovieSceneChannelEntry,int>(pFVar9,local_40);
  if (local_48 != (FMovieSceneChannelEntry *)0x0) {
    FMemory::Free(local_48);
  }
  return (int)pTVar13;
}

// CreateSectionTemplate @ 14d0a6dc0

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneLiveLinkSection::CreateSectionTemplate
          (UMovieSceneLiveLinkSection *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieScenePropertyTrack *param_1)

{
  FMovieSceneLiveLinkSectionTemplate *pFVar1;
  FMovieSceneLiveLinkSectionTemplate local_c8;
  
  pFVar1 = FMovieSceneLiveLinkSectionTemplate::FMovieSceneLiveLinkSectionTemplate
                     (&local_c8,this,param_1);
  __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
  TInlineValue<FMovieSceneEvalTemplate,128,8>::
  InitializeFrom<FMovieSceneLiveLinkSectionTemplate,FMovieSceneLiveLinkSectionTemplate>
            ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)__return_storage_ptr__,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.StaticData.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
            ((TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
             local_c8.PropertyHandlers.AllocatorInstance.Data,local_c8.PropertyHandlers.ArrayNum);
  if ((TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
      local_c8.PropertyHandlers.AllocatorInstance.Data !=
      (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)0x0) {
    FMemory::Free(local_c8.PropertyHandlers.AllocatorInstance.Data);
  }
  DestructItems<FLiveLinkSubSectionData,int>
            ((FLiveLinkSubSectionData *)local_c8.SubSectionsData.AllocatorInstance.Data,
             local_c8.SubSectionsData.ArrayNum);
  if (local_c8.SubSectionsData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.SubSectionsData.AllocatorInstance.Data);
  }
  if (local_c8.ChannelMask.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ChannelMask.AllocatorInstance.Data);
  }
  FMovieScenePropertySectionTemplate::~FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)&local_c8);
  return __return_storage_ptr__;
}

// FinalizeSection @ 14d0ae920

void __thiscall
UMovieSceneLiveLinkSection::FinalizeSection
          (UMovieSceneLiveLinkSection *this,bool param_1,FKeyDataOptimizationParams *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieSceneLiveLinkSubSection *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->SubSections).AllocatorInstance.Data;
  iVar2 = (this->SubSections).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubSections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneLiveLinkSubSection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pUVar3 = *(UMovieSceneLiveLinkSubSection **)pFVar4;
    (**(code **)(pUVar3->_padding_ + 0x2c8))(pUVar3,param_1,param_2);
    LiveLinkSectionUtils::SetupDefaultValues(pUVar3);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GetChannelCount @ 14d0b0020

int __thiscall UMovieSceneLiveLinkSection::GetChannelCount(UMovieSceneLiveLinkSection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->SubSections).AllocatorInstance.Data;
  iVar2 = (this->SubSections).ArrayNum;
  iVar5 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubSections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneLiveLinkSubSection>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = (**(code **)(**(longlong **)pFVar4 + 0x2d0))();
    iVar5 = iVar5 + iVar3;
    pFVar4 = pFVar4 + 8;
  }
  return iVar5;
}

// GetMovieSectionForRole @ 14d0b2300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<UMovieSceneLiveLinkSection>,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneLiveLinkSection::GetMovieSectionForRole
          (TArray<TSubclassOf<UMovieSceneLiveLinkSection>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<TSubclassOf<UMovieSceneLiveLinkSection>,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  uint uVar10;
  FUObjectCppClassStaticFunctions local_res18 [2];
  UObject *local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  TObjectIterator<UClass> local_50;
  
  local_50.Index = 0xffffffff;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ObjectArray.ArrayNum = 0;
  local_50.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar7,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_50);
  do {
    lVar9 = (longlong)local_50.Index;
    if ((local_50.Index < 0) || (local_50.ObjectArray.ArrayNum <= local_50.Index)) {
      if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    uVar10 = 0;
    uVar5 = uVar10;
    if (local_50.Index < local_50.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_50.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TSubclassOf<UMovieSceneLiveLinkSection>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
    }
    lVar9 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
    iVar6 = local_50.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton == (UClass *)0x0) {
      local_res18[0].AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSection",
                 &Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton,
                 StaticRegisterNativesUMovieSceneLiveLinkSection,0x250,8,CLASS_Intrinsic,
                 CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSection>,
                 InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSection>,local_res18,
                 UMovieSceneSection::StaticClass,UObject::StaticClass);
      iVar6 = local_50.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton != (UClass *)0x0)
      goto LAB_14d0b2487;
    }
    else {
LAB_14d0b2487:
      iVar1 = (int)(Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton)->_padding_
      ;
      if ((*(int *)(lVar9 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton)->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar9 = (longlong)local_50.Index;
        uVar5 = uVar10;
        if (local_50.Index < iVar6) {
          uVar5 = (uint)~local_50.Index >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TSubclassOf<UMovieSceneLiveLinkSection>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          iVar6 = local_50.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar9 * 8) + 0xd4
                      ) & 0x2000001) == 0) {
          lVar9 = (longlong)local_50.Index;
          if (local_50.Index < iVar6) {
            uVar10 = (uint)~local_50.Index >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TSubclassOf<UMovieSceneLiveLinkSection>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          local_68 = *(UObject **)(local_50.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_68);
          }
          if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)local_58._4_4_ * 8))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TSubclassOf<UMovieSceneLiveLinkSection>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          iVar6 = (int)local_58;
          if ((int)local_58 == local_58._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_60,(int *)((longlong)&local_58 + 4));
          }
          local_58 = CONCAT44(local_58._4_4_,iVar6 + 1);
          *(UObject **)(local_60.Data + (longlong)iVar6 * 8) = local_68;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_68);
          }
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_50);
  } while( true );
}

// GetPrivateStaticClass @ 14d0b2690

UClass * __cdecl UMovieSceneLiveLinkSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSection",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSection,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSection>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton;
}

// Initialize @ 14d0b2f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMovieSceneLiveLinkSection::Initialize
          (UMovieSceneLiveLinkSection *this,FLiveLinkSubjectPreset *param_1,
          TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_> *pTVar2;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  longlong *plVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  undefined1 auStack_168 [32];
  UObject **local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_118;
  bool local_117 [7];
  UObject *local_110;
  FName local_108;
  undefined8 local_100;
  TArray<TSubclassOf<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_> local_f8;
  TObjectPtr<UClass>_u_0 local_e8;
  FScriptContainerElement *local_e0;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  FLiveLinkSubjectPreset::operator=(&this->SubjectPreset,param_1);
  pFVar3 = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8 = (this->StaticData).Object;
  pTStack_d0 = (this->StaticData).SharedReferenceCount.ReferenceController;
  (this->StaticData).Object = pFVar3;
  (this->StaticData).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  UMovieSceneLiveLinkSubSection::GetLiveLinkSubSectionForRole(&local_f8,&(this->SubjectPreset).Role)
  ;
  iVar12 = local_f8.ArrayNum;
  local_e0 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 8;
  FVar18.Data = local_f8.AllocatorInstance.Data;
  do {
    pFVar5 = local_e0;
    if (local_f8.ArrayNum != iVar12) {
      local_118 = 0;
      `TCheckedPointerIterator<TSubclassOf<UMovieSceneLiveLinkSubSection>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_118);
    }
    if (FVar18.Data == pFVar5) {
      iVar12 = (**(code **)(this->_padding_ + 0x3b0))(this);
      local_117[0] = true;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->ChannelMask,local_117,iVar12);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      return;
    }
    pUVar13 = *(UClass **)FVar18.Data;
    pUVar15 = (UObject *)0x0;
    if (pUVar13 != (UClass *)0x0) {
      if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar13);
      }
      pUVar15 = (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar15 != (UObject *)0x0) {
        pUVar13 = UMovieSceneLiveLinkSubSection::StaticClass();
        iVar11 = (int)pUVar13->_padding_;
        if ((iVar11 <= *(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
            &pUVar13->_padding_)) goto LAB_14d0b3070;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                         ,0x93,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
LAB_14d0b3070:
    cVar10 = (**(code **)(*(longlong *)pUVar15 + 0x2d8))(pUVar15,&(this->SubjectPreset).Role);
    if (cVar10 != '\0') {
      lVar17 = *(longlong *)FVar18.Data;
      pUVar13 = (UClass *)0x0;
      local_108.ComparisonIndex.Value = 0;
      local_108.Number = 0;
      if (lVar17 != 0) {
        pUVar14 = UMovieSceneLiveLinkSubSection::StaticClass();
        if (pUVar14 != (UClass *)0x0) {
          iVar11 = (int)pUVar14->_padding_;
          if ((*(int *)(lVar17 + 0x38) < iVar11) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar11 * 8) !=
              &pUVar14->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            pUVar13 = *(UClass **)FVar18.Data;
          }
        }
      }
      FVar7 = local_108;
      local_100 = 0;
      if (local_108 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar14 = UMovieSceneLiveLinkSubSection::StaticClass();
      CheckIsClassChildOf_Internal(pUVar14,pUVar13);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar13);
      FVar8 = local_108;
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_108.ComparisonIndex = FVar7.ComparisonIndex.Value;
      local_108.Number = FVar7.Number;
      local_c8._16_4_ = local_108.ComparisonIndex.Value;
      local_c8._20_4_ = local_108.Number;
      local_c8._24_4_ = RF_Transactional;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_108 = FVar8;
      local_c8._8_8_ = this;
      pUVar15 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar16 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      local_e8 = (TObjectPtr<UClass>_u_0)(this->SubjectPreset).Role.Class.field0_0x0.DebugPtr;
      pcVar6 = *(code **)(*(longlong *)pUVar15 + 0x2b0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_e8.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_e8.DebugPtr);
      }
      (*pcVar6)(pUVar15,&local_e8,&this->StaticData);
      pTVar2 = &this->SubSections;
      local_110 = pUVar15;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_110) &&
         (lVar17 = (longlong)(this->SubSections).ArrayMax,
         (FScriptContainerElement *)&local_110 < pFVar5 + lVar17 * 8)) {
        local_130 = (longlong)(this->SubSections).ArrayNum;
        local_128 = 8;
        local_148 = &local_110;
        local_140 = pFVar5;
        local_138 = lVar17;
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
      iVar11 = (this->SubSections).ArrayNum;
      piVar1 = &(this->SubSections).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SubSections).ArrayNum = iVar11 + 1;
      *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_110;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_110 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_110);
      }
    }
    FVar18.Data = FVar18.Data + 8;
  } while( true );
}

// PostEditImport @ 14d0b4460

void __thiscall UMovieSceneLiveLinkSection::PostEditImport(UMovieSceneLiveLinkSection *this)

{
  UMovieSceneSection::PostEditImport((UMovieSceneSection *)this);
  UpdateChannelProxy(this);
  return;
}

// PostLoad @ 14d0b4490

void __thiscall UMovieSceneLiveLinkSection::PostLoad(UMovieSceneLiveLinkSection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  pFVar3 = (this->SubSections).AllocatorInstance.Data;
  iVar2 = (this->SubSections).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubSections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneLiveLinkSubSection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  UpdateChannelProxy(this);
  pFVar3 = (this->SubSections).AllocatorInstance.Data;
  iVar2 = (this->SubSections).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubSections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneLiveLinkSubSection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    LiveLinkSectionUtils::SetupDefaultValues(*(UMovieSceneLiveLinkSubSection **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// RecordFrame @ 14d0b5b70

void __thiscall
UMovieSceneLiveLinkSection::RecordFrame
          (UMovieSceneLiveLinkSection *this,FFrameNumber param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UMovieSceneSection::ExpandToFrame((UMovieSceneSection *)this,param_1);
  pFVar3 = (this->SubSections).AllocatorInstance.Data;
  iVar2 = (this->SubSections).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubSections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneLiveLinkSubSection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x2c0))(*(longlong **)pFVar3,param_1.Value,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// Serialize @ 14d0b6cc0

void __thiscall
UMovieSceneLiveLinkSection::Serialize(UMovieSceneLiveLinkSection *this,FArchive *param_1)

{
  uint *puVar1;
  TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *pTVar2;
  uint uVar3;
  ulonglong *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedRef<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *pTVar8;
  bool local_res10 [8];
  uint local_res18 [2];
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> local_18;
  
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FLiveLinkCustomVersion::GUID);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      local_res10[0] =
           (this->StaticData).Object != (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
      ::operator<<(param_1,local_res10);
      if (local_res10[0] != false) {
        if (((this->StaticData).Object == (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::operator<<(param_1,(this->StaticData).Object);
        return;
      }
    }
  }
  else {
    pTVar8 = MakeShared<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1>(&local_18);
    local_20.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_28 = pTVar8->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = &this->StaticData;
    if (pTVar2 != (TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *)&local_28) {
      pTVar2->Object = local_28;
      local_28 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StaticData).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FLiveLinkCustomVersion::GUID);
    if (iVar7 < 1) {
      ConvertPreRoleData(this);
    }
    else {
      puVar4 = *(ulonglong **)&param_1->field_0x8;
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_res18[0] = 0;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        if (1 < local_res18[0]) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        uVar3 = local_res18[0];
        if ((param_1->field_0x28 & 1) == 0) {
          return;
        }
      }
      else {
        uVar3 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      if (uVar3 != 0) {
        if ((pTVar2->Object == (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::operator<<(param_1,pTVar2->Object);
        return;
      }
    }
  }
  return;
}

// Serialize @ 14d0b6eb0

void __thiscall
UMovieSceneLiveLinkSection::Serialize
          (UMovieSceneLiveLinkSection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetMask @ 14d0b72b0

void __thiscall
UMovieSceneLiveLinkSection::SetMask
          (UMovieSceneLiveLinkSection *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=(&this->ChannelMask,param_1);
  UpdateChannelProxy(this);
  return;
}

// StaticRegisterNativesUMovieSceneLiveLinkSection @ 14d0b7fb0

void __cdecl UMovieSceneLiveLinkSection::StaticRegisterNativesUMovieSceneLiveLinkSection(void)

{
  return;
}

// UpdateChannelProxy @ 14d0b8360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMovieSceneLiveLinkSection::UpdateChannelProxy(UMovieSceneLiveLinkSection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  TSharedRef<FMovieSceneChannelProxy,1> *pTVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  FMovieSceneChannelProxy *local_70;
  FSharedReferencer<1> local_68;
  TSharedRef<FMovieSceneChannelProxy,1> local_60;
  FMovieSceneChannelProxyData local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar2 = (this->SubSections).ArrayNum;
  pFVar10 = (this->SubSections).AllocatorInstance.Data;
  iVar11 = 0;
  local_50.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_50.Entries.ArrayNum = 0;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  local_50.Entries.ArrayMax = 1;
  while( true ) {
    if ((this->SubSections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneLiveLinkSubSection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_78);
    }
    if (pFVar10 == pFVar1) break;
    pTVar3 = (this->StaticData).SharedReferenceCount.ReferenceController;
    plVar4 = *(longlong **)pFVar10;
    pFVar5 = (this->StaticData).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TReferenceControllerBase<1> *)plVar4[9];
    plVar4[8] = (longlong)pFVar5;
    plVar4[9] = (longlong)pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    iVar7 = (**(code **)(*plVar4 + 0x2b8))(plVar4,iVar11,&this->ChannelMask,&local_50);
    iVar11 = iVar11 + iVar7;
    pFVar10 = pFVar10 + 8;
  }
  pTVar8 = MakeShared<FMovieSceneChannelProxy,1,FMovieSceneChannelProxyData>(&local_60,&local_50);
  local_68.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_70 = pTVar8->Object;
  if (local_68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_68.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FMovieSceneChannelProxy **)&this->_padding_ != &local_70) {
    this->_padding_ = (longlong)local_70;
    local_70 = (FMovieSceneChannelProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  FVar9 = (ForElementType<FMovieSceneChannelEntry>)&local_50;
  if (local_50.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = local_50.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar9,local_50.Entries.ArrayNum);
  if (local_50.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_50.Entries.AllocatorInstance.SecondaryData);
  }
  return;
}

