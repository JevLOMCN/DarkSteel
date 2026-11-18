// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 26

// StaticClass @ 14ea212f0

UClass * __cdecl UMovieSceneNiagaraCacheTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraSimCaching",L"MovieSceneNiagaraCacheTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraCacheTrack,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraCacheTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.InnerSingleton;
}

// UMovieSceneNiagaraCacheTrack @ 14ea22930

UMovieSceneNiagaraCacheTrack * __thiscall
UMovieSceneNiagaraCacheTrack::UMovieSceneNiagaraCacheTrack
          (UMovieSceneNiagaraCacheTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->bIsRecording = false;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCachedTrack__;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  this->bCacheRecordingEnabled = true;
  return this;
}

// UMovieSceneNiagaraCacheTrack @ 14ea229a0

UMovieSceneNiagaraCacheTrack * __thiscall
UMovieSceneNiagaraCacheTrack::UMovieSceneNiagaraCacheTrack
          (UMovieSceneNiagaraCacheTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->bIsRecording = false;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->bCacheRecordingEnabled = true;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCachedTrack__;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 5;
  return this;
}

// ~UMovieSceneNiagaraCacheTrack @ 14ea22b10

void __thiscall
UMovieSceneNiagaraCacheTrack::~UMovieSceneNiagaraCacheTrack(UMovieSceneNiagaraCacheTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCachedTrack__;
  pFVar1 = (this->AnimationSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneCachedTrack__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddNewAnimation @ 14ea23090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneNiagaraCacheTrack::AddNewAnimation
          (UMovieSceneNiagaraCacheTrack *this,FFrameNumber param_1,UNiagaraComponent *param_2)

{
  int iVar1;
  UMovieSceneSection *pUVar2;
  UClass *pUVar3;
  undefined4 in_register_00000014;
  
  pUVar2 = (UMovieSceneSection *)
           (**(code **)(this->_padding_ + 0x358))(this,CONCAT44(in_register_00000014,param_1.Value))
  ;
  if (pUVar2 != (UMovieSceneSection *)0x0) {
    pUVar3 = UMovieSceneNiagaraCacheSection::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14ea230d3;
  }
  pUVar2 = (UMovieSceneSection *)0x0;
LAB_14ea230d3:
  (**(code **)this->_padding_)(&this->_padding_,pUVar2);
  return pUVar2;
}

// AddSection @ 14ea23100

void __thiscall
UMovieSceneNiagaraCacheTrack::AddSection
          (UMovieSceneNiagaraCacheTrack *this,UMovieSceneSection *param_1)

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

// CreateNewSection @ 14ea232d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneNiagaraCacheTrack::CreateNewSection(UMovieSceneNiagaraCacheTrack *this)

{
  uint *puVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UMovieSceneNiagaraCacheSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar2);
  local_118._48_8_ = (FObjectInstancingGraph *)0x0;
  local_118._56_8_ = (UPackage *)0x0;
  local_118._16_4_ = 0;
  local_118._20_4_ = 0;
  local_118._24_4_ = RF_Transactional;
  local_118._40_8_ = (UObject *)0x0;
  local_118[0x20] = false;
  local_118._8_8_ = this;
  pUVar3 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar5 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_128 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UNiagaraSimCache_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar3;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&pUVar3[1].Easing.EaseIn = pUVar4;
  puVar1 = (uint *)((longlong)&pUVar3[1]._padding_ + 4);
  *puVar1 = *puVar1 | 0x14;
  *(undefined1 *)&pUVar3[1]._padding_ = 1;
  return pUVar3;
}

// CreateTemplateForSection @ 14ea23480

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneNiagaraCacheTrack::CreateTemplateForSection
          (UMovieSceneNiagaraCacheTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
  __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 2;
  return __return_storage_ptr__;
}

// GetAllSections @ 14ea238a0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneNiagaraCacheTrack::GetAllSections(UMovieSceneNiagaraCacheTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->AnimationSections;
}

// GetAnimSectionsAtTime @ 14ea238b0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneNiagaraCacheTrack::GetAnimSectionsAtTime
          (UMovieSceneNiagaraCacheTrack *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FFrameNumber param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *pTVar9;
  char *pcVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  UObject *local_48;
  char local_40 [4];
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar12 = (this->AnimationSections).AllocatorInstance.Data;
  iVar3 = (this->AnimationSections).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar3 * 8;
  do {
    if ((this->AnimationSections).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar12 == pFVar1) {
      return __return_storage_ptr__;
    }
    pUVar4 = *(UObject **)pFVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pcVar10 = &pUVar4[4].field_0x10;
    local_40[0] = '\x01';
    cVar2 = *pcVar10;
    local_3c = param_1.Value;
    if (cVar2 == '\x02') {
LAB_14ea2397e:
      puVar11 = &pUVar4[4].field_0x18;
      local_38[0] = 1;
      local_34 = param_1.Value;
      if (pUVar4[4].field_0x18 != '\x02') {
        if (*(int *)&pUVar4[4].field_0x1c <= param_1.Value) {
          if (*(int *)&pUVar4[4].field_0x1c < param_1.Value) {
            puVar11 = local_38;
          }
          if (pUVar4[4].field_0x18 != '\x01') goto LAB_14ea23a51;
        }
        if (*(int *)(puVar11 + 4) != *(int *)&pUVar4[4].field_0x1c) goto LAB_14ea23a51;
      }
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_48 = pUVar4;
      if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_48;
    }
    else if (*(int *)&pUVar4[4].field_0x14 < param_1.Value) {
LAB_14ea23972:
      if (*(int *)(pcVar10 + 4) == *(int *)&pUVar4[4].field_0x14) goto LAB_14ea2397e;
    }
    else {
      if (param_1.Value < *(int *)&pUVar4[4].field_0x14) {
        pcVar10 = local_40;
      }
      if (cVar2 == '\x01') goto LAB_14ea23972;
    }
LAB_14ea23a51:
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// GetMinimumEngineScalabilitySetting @ 14ea23aa0

int __thiscall
UMovieSceneNiagaraCacheTrack::GetMinimumEngineScalabilitySetting(UMovieSceneNiagaraCacheTrack *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  plVar7 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  uVar8 = 0xffffffff;
  plVar1 = plVar7 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar7 == plVar1) break;
    lVar4 = *plVar7;
    uVar5 = uVar8;
    if (lVar4 != 0) {
      pUVar6 = UMovieSceneNiagaraCacheSection::StaticClass();
      iVar3 = (int)pUVar6->_padding_;
      if ((((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar6->_padding_)) && (*(char *)(lVar4 + 0x199) != '\0')) &&
         (uVar5 = (uint)*(byte *)(lVar4 + 0x19a), (int)(uint)*(byte *)(lVar4 + 0x19a) < (int)uVar8))
      {
        uVar5 = uVar8;
      }
    }
    uVar8 = uVar5;
    plVar7 = plVar7 + 1;
  }
  return uVar8;
}

// GetPrivateStaticClass @ 14ea23c10

UClass * __cdecl UMovieSceneNiagaraCacheTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraSimCaching",L"MovieSceneNiagaraCacheTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraCacheTrack,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraCacheTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.InnerSingleton;
}

// HasSection @ 14ea23cf0

bool __thiscall
UMovieSceneNiagaraCacheTrack::HasSection
          (UMovieSceneNiagaraCacheTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->AnimationSections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->AnimationSections).ArrayNum * 8;
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

// IsCacheRecordingAllowed @ 14ea23d80

bool __thiscall
UMovieSceneNiagaraCacheTrack::IsCacheRecordingAllowed(UMovieSceneNiagaraCacheTrack *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  plVar8 = (longlong *)this->_padding_;
  bVar5 = true;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar8 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar8 == plVar1) break;
    lVar4 = *plVar8;
    if (lVar4 != 0) {
      pUVar7 = UMovieSceneNiagaraCacheSection::StaticClass();
      iVar3 = (int)pUVar7->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
           == &pUVar7->_padding_)) &&
         (((*(uint *)(lVar4 + 0xd8) >> 1 & 1) != 0 || (*(char *)(lVar4 + 0x198) != '\0')))) {
        bVar5 = false;
      }
    }
    plVar8 = plVar8 + 1;
  }
  if ((char)this->_padding_ != '\0') {
    bVar6 = UMovieSceneTrack::IsEvalDisabled((UMovieSceneTrack *)&this[-1]._padding_,true);
    if ((!bVar6) && (bVar5)) {
      return true;
    }
  }
  return false;
}

// IsEmpty @ 14ea23e60

bool __thiscall UMovieSceneNiagaraCacheTrack::IsEmpty(UMovieSceneNiagaraCacheTrack *this)

{
  return (this->AnimationSections).ArrayNum == 0;
}

// PopulateEvaluationTree @ 14ea243d0

bool __thiscall
UMovieSceneNiagaraCacheTrack::PopulateEvaluationTree
          (UMovieSceneNiagaraCacheTrack *this,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_1)

{
  FMovieSceneTrackEvaluationData *pFVar1;
  uint local_res8;
  uint local_res10;
  TRange<FFrameNumber> local_58;
  FMovieSceneTrackEvaluationData local_48;
  IMovieSceneEvaluationTreeNodeOperator local_30;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_28;
  FWeakObjectPtr local_20;
  FWeakObjectPtr FStack_18;
  undefined8 local_10;
  
  pFVar1 = FMovieSceneTrackEvaluationData::FromTrack(&local_48,(UMovieSceneTrack *)this);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_20 = (pFVar1->Track).WeakPtr;
  FStack_18 = (pFVar1->Section).WeakPtr;
  local_30 = (IMovieSceneEvaluationTreeNodeOperator)
             &___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_;
  local_10._0_4_ = pFVar1->ForcedTime;
  local_10._4_2_ = pFVar1->SortOrder;
  local_10._6_1_ = pFVar1->Flags;
  local_10._7_1_ = pFVar1->field_0x17;
  local_58.LowerBound.Value.Value = 0;
  local_58.LowerBound._0_4_ = local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  local_58.UpperBound.Value.Value = 0;
  local_58.UpperBound._0_4_ = local_res10;
  local_28 = param_1;
  FMovieSceneEvaluationTree::AddTimeRange
            ((FMovieSceneEvaluationTree *)param_1,&local_58,&local_30,
             (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  return true;
}

// PostCompile @ 14ea24480

void __thiscall
UMovieSceneNiagaraCacheTrack::PostCompile
          (UMovieSceneNiagaraCacheTrack *this,FMovieSceneEvaluationTrack *param_1,
          FMovieSceneTrackCompilerArgs *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FMovieSceneNiagaraCacheSectionTemplate local_48;
  
  plVar9 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  plVar1 = plVar9 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    FVar5.Data = local_68.Data;
    if (plVar9 == plVar1) break;
    lVar3 = *plVar9;
    if (lVar3 != 0) {
      pUVar7 = UMovieSceneNiagaraCacheSection::StaticClass();
      iVar6 = (int)pUVar7->_padding_;
      if ((((iVar6 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar7->_padding_)) && ((*(byte *)(lVar3 + 0xd8) & 1) != 0)) &&
         (*(longlong *)(lVar3 + 400) != 0)) {
        iVar6 = (int)local_60;
        if ((int)local_60 == local_60._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x898,&local_68,(int *)((longlong)&local_60 + 4));
        }
        local_60 = CONCAT44(local_60._4_4_,iVar6 + 1);
        pFVar8 = local_68.Data + (longlong)iVar6 * 0x98;
        DefaultConstructItems<FMovieSceneNiagaraSectionTemplateParameter,int>(pFVar8,1);
        uVar4 = *(undefined8 *)(lVar3 + 0xb8);
        *(undefined8 *)&pFVar8->field_0x0 = *(undefined8 *)(lVar3 + 0xb0);
        *(undefined8 *)(pFVar8 + 8) = uVar4;
        FMovieSceneNiagaraCacheParams::operator=
                  ((FMovieSceneNiagaraCacheParams *)(pFVar8 + 0x10),
                   (FMovieSceneNiagaraCacheParams *)(lVar3 + 0x118));
      }
    }
    plVar9 = plVar9 + 1;
  }
  iVar2 = (int)local_60;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (int)local_60;
  if ((int)local_60 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,(int)local_60,0,&local_58,(int)local_60,&local_4c);
    ConstructItems<FMovieSceneNiagaraSectionTemplateParameter,FMovieSceneNiagaraSectionTemplateParameter,int>
              (local_58.Data,(FMovieSceneNiagaraSectionTemplateParameter *)FVar5.Data,iVar2);
  }
  iVar2 = local_50;
  FVar5.Data = local_58.Data;
  local_48._padding_._0_1_ = 0;
  local_48._padding_ = (longlong)&___7FMovieSceneNiagaraCacheSectionTemplate__6B_;
  local_48.CacheSections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.CacheSections.ArrayNum = local_50;
  if (local_50 == 0) {
    local_48.CacheSections.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,local_50,0,&local_48.CacheSections.AllocatorInstance,local_50,
               &local_48.CacheSections.ArrayMax);
    ConstructItems<FMovieSceneNiagaraSectionTemplateParameter,FMovieSceneNiagaraSectionTemplateParameter,int>
              (local_48.CacheSections.AllocatorInstance.Data,
               (FMovieSceneNiagaraSectionTemplateParameter *)FVar5.Data,iVar2);
  }
  DestructItems<FMovieSceneNiagaraSectionTemplateParameter,int>
            ((FMovieSceneNiagaraSectionTemplateParameter *)local_58.Data,local_50);
  if ((FMovieSceneNiagaraSectionTemplateParameter *)local_58.Data !=
      (FMovieSceneNiagaraSectionTemplateParameter *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FMovieSceneEvaluationTrack::SetTrackImplementation<FMovieSceneNiagaraCacheSectionTemplate>
            (param_1,&local_48);
  DestructItems<FMovieSceneNiagaraSectionTemplateParameter,int>
            ((FMovieSceneNiagaraSectionTemplateParameter *)
             local_48.CacheSections.AllocatorInstance.Data,local_48.CacheSections.ArrayNum);
  if ((FMovieSceneNiagaraSectionTemplateParameter *)local_48.CacheSections.AllocatorInstance.Data !=
      (FMovieSceneNiagaraSectionTemplateParameter *)0x0) {
    FMemory::Free(local_48.CacheSections.AllocatorInstance.Data);
  }
  param_1->EvaluationPriority = 10000;
  DestructItems<FMovieSceneNiagaraSectionTemplateParameter,int>
            ((FMovieSceneNiagaraSectionTemplateParameter *)local_68.Data,(int)local_60);
  if ((FMovieSceneNiagaraSectionTemplateParameter *)local_68.Data !=
      (FMovieSceneNiagaraSectionTemplateParameter *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// RemoveAllAnimationData @ 14ea24860

void __thiscall
UMovieSceneNiagaraCacheTrack::RemoveAllAnimationData(UMovieSceneNiagaraCacheTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->AnimationSections).ArrayMax;
  (this->AnimationSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AnimationSections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 14ea248a0

void __thiscall
UMovieSceneNiagaraCacheTrack::RemoveSection
          (UMovieSceneNiagaraCacheTrack *this,UMovieSceneSection *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UMovieSceneSection *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UMovieSceneSection *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if ((((UMovieSceneSection **)this->_padding_ <= local_38) &&
      (local_38 < (UMovieSceneSection **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 != 0) {
    iVar9 = 0;
    plVar2 = (longlong *)this->_padding_;
    bVar4 = (UMovieSceneSection *)*plVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == ((UMovieSceneSection *)plVar2[lVar6] != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(plVar2 + iVar9,plVar2 + iVar7,(longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    *(int *)&this->_padding_ = iVar9;
  }
  return;
}

// RemoveSectionAt @ 14ea24a50

void __thiscall
UMovieSceneNiagaraCacheTrack::RemoveSectionAt(UMovieSceneNiagaraCacheTrack *this,int param_1)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (void *)(this->_padding_ + (longlong)param_1 * 8);
  iVar4 = (int)this->_padding_ + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
             (int *)((longlong)&this->_padding_ + 4));
  return;
}

// ResetCache @ 14ea24b20

void __thiscall UMovieSceneNiagaraCacheTrack::ResetCache(UMovieSceneNiagaraCacheTrack *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 *this_00;
  undefined1 local_res8 [8];
  
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar3 = UMovieSceneNiagaraCacheSection::StaticClass();
      FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    }
    this_00 = this_00 + 1;
  }
  return;
}

// SetCacheRecordingAllowed @ 14ea24bf0

void __thiscall
UMovieSceneNiagaraCacheTrack::SetCacheRecordingAllowed
          (UMovieSceneNiagaraCacheTrack *this,bool param_1)

{
  *(bool *)&this->_padding_ = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneNiagaraCacheTrack @ 14ea24c10

void __cdecl UMovieSceneNiagaraCacheTrack::StaticRegisterNativesUMovieSceneNiagaraCacheTrack(void)

{
  return;
}

// SupportsType @ 14ea24c20

bool __thiscall
UMovieSceneNiagaraCacheTrack::SupportsType
          (UMovieSceneNiagaraCacheTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_14ea24c6a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14ea24c6a:
  pUVar5 = UMovieSceneNiagaraCacheSection::StaticClass();
  return pUVar4 == pUVar5;
}

// _getUObject @ 14ea250f0

UObject * __thiscall UMovieSceneNiagaraCacheTrack::_getUObject(UMovieSceneNiagaraCacheTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14ea25100

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneNiagaraCacheTrack::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneNiagaraCacheTrack::_getUObject_adjustor_8__(UMovieSceneNiagaraCacheTrack *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneNiagaraCacheTrack *)&this[-1].bCacheRecordingEnabled);
  return (UObject *)pUVar1;
}

