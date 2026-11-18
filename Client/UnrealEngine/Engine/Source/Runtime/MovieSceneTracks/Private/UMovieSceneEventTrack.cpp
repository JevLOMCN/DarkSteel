// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 21

// StaticClass @ 14687db10

UClass * __cdecl UMovieSceneEventTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventTrack",
               &Z_Registration_Info_UClass_UMovieSceneEventTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventTrack,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEventTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneEventTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTrack.InnerSingleton;
}

// UMovieSceneEventTrack @ 14689de70

UMovieSceneEventTrack * __thiscall
UMovieSceneEventTrack::UMovieSceneEventTrack(UMovieSceneEventTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDeterminismSource__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// ~UMovieSceneEventTrack @ 1468a09d0

void __thiscall UMovieSceneEventTrack::~UMovieSceneEventTrack(UMovieSceneEventTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDeterminismSource__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneDeterminismSource__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddSection @ 1468a8f60

void __thiscall
UMovieSceneEventTrack::AddSection(UMovieSceneEventTrack *this,UMovieSceneSection *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneSection *local_18 [2];
  
  plVar2 = &this->_padding_;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (((UMovieSceneSection **)*plVar2 <= local_18) &&
     (local_18 < (UMovieSceneSection **)*plVar2 + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  *(UMovieSceneSection **)(*plVar2 + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// CreateNewSection @ 1468ae7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall UMovieSceneEventTrack::CreateNewSection(UMovieSceneEventTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// CreateTemplateForSection @ 1468afa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneEventTrack::CreateTemplateForSection
          (UMovieSceneEventTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FMovieSceneEventSectionTemplate *pFVar3;
  undefined1 auStack_178 [32];
  FMovieSceneEventSectionTemplate local_158;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieSceneEventSection_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_1468afa90;
  }
  param_1 = (UMovieSceneSection *)0x0;
LAB_1468afa90:
  if ((UMovieSceneEventSection *)param_1 == (UMovieSceneEventSection *)0x0) {
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 2;
  }
  else {
    pFVar3 = FMovieSceneEventSectionTemplate::FMovieSceneEventSectionTemplate
                       (&local_158,(UMovieSceneEventSection *)param_1,
                        (UMovieSceneEventTrack *)&this[-1]._padding_);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    TInlineValue<FMovieSceneEvalTemplate,128,8>::
    InitializeFrom<FMovieSceneEventSectionTemplate,FMovieSceneEventSectionTemplate>
              ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)__return_storage_ptr__,pFVar3);
    FMovieSceneEventSectionData::~FMovieSceneEventSectionData(&local_158.EventData);
  }
  return __return_storage_ptr__;
}

// CustomCompile @ 1468afd30

EMovieSceneCompileResult __thiscall
UMovieSceneEventTrack::CustomCompile
          (UMovieSceneEventTrack *this,FMovieSceneEvaluationTrack *param_1,
          FMovieSceneTrackCompilerArgs *param_2)

{
  EMovieSceneCompileResult EVar1;
  TObjectPtr<UMovieSceneSection> *pTVar2;
  <lambda_1> local_res8;
  
  pTVar2 = TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UMovieSceneEventTrack::CustomCompile_::__l2::<lambda_1>_>
                     ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)
                      &this->_padding_,local_res8);
  if (pTVar2 == (TObjectPtr<UMovieSceneSection> *)0x0) {
    return Failure;
  }
  EVar1 = IMovieSceneTrackTemplateProducer::Compile
                    ((IMovieSceneTrackTemplateProducer *)this,param_1,param_2);
  return EVar1;
}

// GetAllSections @ 1468b5750

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneEventTrack::GetAllSections(UMovieSceneEventTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1468b7500

UClass * __cdecl UMovieSceneEventTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventTrack",
               &Z_Registration_Info_UClass_UMovieSceneEventTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventTrack,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEventTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneEventTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTrack.InnerSingleton;
}

// HasSection @ 1468ba900

bool __thiscall
UMovieSceneEventTrack::HasSection(UMovieSceneEventTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Sections).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(UMovieSceneSection **)pFVar2 == (UMovieSceneSection *)0x0) {
      bVar3 = param_1 == (UMovieSceneSection *)0x0;
    }
    else {
      bVar3 = *(UMovieSceneSection **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// IsEmpty @ 1468bc810

bool __thiscall UMovieSceneEventTrack::IsEmpty(UMovieSceneEventTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// PopulateDeterminismData @ 1468c4320

void __thiscall
UMovieSceneEventTrack::PopulateDeterminismData
          (UMovieSceneEventTrack *this,FMovieSceneDeterminismData *param_1,
          TRange<FFrameNumber> *param_2)

{
  param_1->bParentSequenceRequiresLowerFence = true;
  param_1->bParentSequenceRequiresUpperFence = true;
  return;
}

// PostCompile @ 1468c5940

void __thiscall
UMovieSceneEventTrack::PostCompile
          (UMovieSceneEventTrack *this,FMovieSceneEvaluationTrack *param_1,
          FMovieSceneTrackCompilerArgs *param_2)

{
  char cVar1;
  FName FVar2;
  undefined1 local_res8 [32];
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  if ((cVar1 != '\0') && (cVar1 != '\x01')) {
    FVar2 = IMovieSceneTracksModule::GetEvaluationGroupName((Type)local_res8);
    FVar2 = *(FName *)FVar2;
    param_1->EvaluationPriority = 0xf9b;
    param_1->EvaluationGroup = FVar2;
    param_1->EvaluationMethod = Swept;
    return;
  }
  FVar2 = IMovieSceneTracksModule::GetEvaluationGroupName((Type)local_res8);
  param_1->EvaluationGroup = *(FName *)FVar2;
  param_1->EvaluationMethod = Swept;
  return;
}

// RemoveAllAnimationData @ 1468c8f30

void __thiscall UMovieSceneEventTrack::RemoveAllAnimationData(UMovieSceneEventTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Sections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 1468c9de0

void __thiscall
UMovieSceneEventTrack::RemoveSection(UMovieSceneEventTrack *this,UMovieSceneSection *param_1)

{
  TObjectPtr<UMovieSceneSection>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TObjectPtr<UMovieSceneSection> *)&local_res8[0].ObjectPtr);
  return;
}

// RemoveSectionAt @ 1468ca6e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMovieSceneEventTrack::RemoveSectionAt(UMovieSceneEventTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneEventTrack @ 1468d00a0

void __cdecl UMovieSceneEventTrack::StaticRegisterNativesUMovieSceneEventTrack(void)

{
  return;
}

// SupportsMultipleRows @ 1468d0c50

bool __thiscall UMovieSceneEventTrack::SupportsMultipleRows(UMovieSceneEventTrack *this)

{
  return true;
}

// SupportsType @ 1468d1620

bool __thiscall
UMovieSceneEventTrack::SupportsType
          (UMovieSceneEventTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_1468d166a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d166a:
  pUVar5 = Z_Construct_UClass_UMovieSceneEventSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1468d55b0

UObject * __thiscall UMovieSceneEventTrack::_getUObject(UMovieSceneEventTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 1468d55c0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneEventTrack::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UMovieSceneEventTrack::_getUObject_adjustor_8__(UMovieSceneEventTrack *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneEventTrack *)&this[-1].Sections.ArrayNum);
  return (UObject *)pUVar1;
}

