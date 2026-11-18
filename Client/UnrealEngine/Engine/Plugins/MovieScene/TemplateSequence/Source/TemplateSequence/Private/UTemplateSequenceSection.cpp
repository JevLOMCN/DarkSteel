// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 13

// StaticClass @ 14ac630e0

UClass * __cdecl UTemplateSequenceSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequenceSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceSection",
               &Z_Registration_Info_UClass_UTemplateSequenceSection.InnerSingleton,
               StaticRegisterNativesUTemplateSequenceSection,0x8a0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UTemplateSequenceSection>,
               InternalVTableHelperCtorCaller<UTemplateSequenceSection>,local_res8,
               UMovieSceneSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceSection.InnerSingleton;
}

// UTemplateSequenceSection @ 14ac70be0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UTemplateSequenceSection * __thiscall
UTemplateSequenceSection::UTemplateSequenceSection
          (UTemplateSequenceSection *this,FVTableHelper *param_1)

{
  UMovieSceneSubSection::UMovieSceneSubSection((UMovieSceneSubSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->PropertyScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyScales).ArrayNum = 0;
  (this->PropertyScales).ArrayMax = 0;
  return this;
}

// UTemplateSequenceSection @ 14ac70c30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UTemplateSequenceSection * __thiscall
UTemplateSequenceSection::UTemplateSequenceSection
          (UTemplateSequenceSection *this,FObjectInitializer *param_1)

{
  FMovieSceneBlendTypeField FVar1;
  bool bVar2;
  undefined7 extraout_var;
  
  UMovieSceneSubSection::UMovieSceneSubSection((UMovieSceneSubSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  (this->PropertyScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->PropertyScales).ArrayNum = 0;
  (this->PropertyScales).ArrayMax = 0;
  FVar1 = UMovieSceneSection::GetSupportedBlendTypes((UMovieSceneSection *)this);
  bVar2 = FMovieSceneBlendTypeField::Contains
                    ((FMovieSceneBlendTypeField *)CONCAT71(extraout_var,FVar1.BlendTypeField),
                     Absolute);
  if (bVar2) {
    *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  }
  *(undefined4 *)&this->_padding_ = 0;
  return this;
}

// ~UTemplateSequenceSection @ 14ac717e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UTemplateSequenceSection::~UTemplateSequenceSection(UTemplateSequenceSection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  DestructItems<FTemplateSectionPropertyScale,int>
            ((FTemplateSectionPropertyScale *)(this->PropertyScales).AllocatorInstance.Data,
             (this->PropertyScales).ArrayNum);
  pFVar1 = (this->PropertyScales).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSubSection::~UMovieSceneSubSection((UMovieSceneSubSection *)this);
  return;
}

// AddPropertyScale @ 14ac73460

void __thiscall
UTemplateSequenceSection::AddPropertyScale
          (UTemplateSequenceSection *this,FTemplateSectionPropertyScale *param_1)

{
  int *piVar1;
  TArray<FTemplateSectionPropertyScale,TSizedDefaultAllocator<32>_> *pTVar2;
  FTemplateSectionPropertyScale *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar2 = &this->PropertyScales;
  pFVar3 = (FTemplateSectionPropertyScale *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->PropertyScales).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->PropertyScales).ArrayNum;
  piVar1 = &(this->PropertyScales).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x150,8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PropertyScales).ArrayNum = iVar8 + 1;
  uVar5 = *(undefined8 *)&(param_1->ObjectBinding).C;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x150;
  *(undefined8 *)pFVar9 = *(undefined8 *)&param_1->ObjectBinding;
  *(undefined8 *)(pFVar9 + 8) = uVar5;
  FVar6 = (param_1->PropertyBinding).PropertyPath;
  *(FName *)(pFVar9 + 0x10) = (param_1->PropertyBinding).PropertyName;
  *(FName *)(pFVar9 + 0x18) = FVar6;
  *(undefined4 *)(pFVar9 + 0x20) = *(undefined4 *)&(param_1->PropertyBinding).bCanUseClassLookup;
  *(ETemplateSectionPropertyScaleType *)(pFVar9 + 0x24) = param_1->PropertyScaleType;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(pFVar9 + 0x28),&param_1->FloatChannel);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// CacheChannelProxy @ 14ac73990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMovieSceneChannelProxyType __thiscall
UTemplateSequenceSection::CacheChannelProxy(UTemplateSequenceSection *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  EMovieSceneChannelProxyType EVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  FSharedReferencer<1> local_68;
  FMovieSceneChannelProxyData local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar9 = (this->PropertyScales).AllocatorInstance.Data;
  iVar2 = (this->PropertyScales).ArrayNum;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pFVar11 = pFVar9 + (longlong)iVar2 * 0x150;
  local_60.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_60.Entries.ArrayNum = 0;
  local_60.Entries.ArrayMax = 1;
  while( true ) {
    if ((this->PropertyScales).ArrayNum != iVar2) {
      local_78[0] = 0;
      `TCheckedPointerIterator<FTemplateSectionPropertyScale,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (pFVar9 == pFVar11) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_60,(FMovieSceneFloatChannel *)(pFVar9 + 0x28));
    pFVar9 = pFVar9 + 0x150;
  }
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_60.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(pTVar7 + 4,&local_60,0x18);
    }
    if (*(void **)&pTVar7[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[5].SharedReferenceCount);
    }
    pTVar12 = pTVar7 + 1;
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar7[5].SharedReferenceCount =
         local_60.Entries.AllocatorInstance.SecondaryData;
    local_60.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pTVar7[6]._padding_ = local_60.Entries.ArrayNum;
    *(int *)((longlong)&pTVar7[6]._padding_ + 4) = local_60.Entries.ArrayMax;
    local_60.Entries.ArrayNum = 0;
    local_60.Entries.ArrayMax = 1;
    pTVar10 = pTVar7;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      goto LAB_14ac73b67;
    }
  }
  if (((pTVar12->_padding_ == 0) || (*(longlong *)&pTVar12->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar12->SharedReferenceCount + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12->_padding_ = (longlong)pTVar12;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar12->SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14ac73b67:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70 = pTVar12;
  local_68.ReferenceController = pTVar10;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_70) {
    this->_padding_ = (longlong)pTVar12;
    local_70 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)&local_60;
  if (local_60.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = local_60.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar8,local_60.Entries.ArrayNum);
  if (local_60.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_60.Entries.AllocatorInstance.SecondaryData);
  }
  return Dynamic;
}

// GetPrivateStaticClass @ 14ac78130

UClass * __cdecl UTemplateSequenceSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequenceSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceSection",
               &Z_Registration_Info_UClass_UTemplateSequenceSection.InnerSingleton,
               StaticRegisterNativesUTemplateSequenceSection,0x8a0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UTemplateSequenceSection>,
               InternalVTableHelperCtorCaller<UTemplateSequenceSection>,local_res8,
               UMovieSceneSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceSection.InnerSingleton;
}

// ImportEntityImpl @ 14ac78ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UTemplateSequenceSection::ImportEntityImpl
          (UTemplateSequenceSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar1;
  undefined8 *puVar2;
  FInstanceHandle FVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  FMovieSceneSequenceID FVar12;
  int iVar13;
  UMovieSceneSequence *pUVar14;
  UClass *pUVar15;
  FInstanceRegistry *pFVar16;
  undefined4 extraout_var;
  FMovieSceneSpawnable *pFVar17;
  FBuiltInComponentTypes *pFVar18;
  FTemplateSequenceComponentTypes *pFVar19;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar20;
  longlong *plVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  UMovieSceneEntitySystemLinker *pUVar28;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [8];
  UMovieSceneEntitySystemLinker *local_1f0;
  FInstanceHandle local_1e8;
  FImportedEntity *local_1e0;
  FGuid local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  TComponentTypeID<FGuid> local_198;
  undefined1 uStack_196;
  undefined1 uStack_195;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined **local_168 [3];
  undefined1 local_14c;
  TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  uint local_134;
  undefined1 local_130;
  undefined1 local_12c;
  undefined **local_120;
  TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined1 local_e8;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_e0;
  longlong *local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  FSubSequencePath local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1f0 = param_1;
  local_1e0 = param_3;
  pUVar14 = UMovieSceneSubSection::GetSequence((UMovieSceneSubSection *)&this[-1]._padding_);
  if (pUVar14 != (UMovieSceneSequence *)0x0) {
    pUVar15 = UTemplateSequence::StaticClass();
    iVar13 = (int)pUVar15->_padding_;
    if ((iVar13 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar15->_padding_)) {
      if (((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceRegistry.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                              ,0x96,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar3 = (param_2->Sequence).InstanceHandle;
      pFVar16 = (param_1->InstanceRegistry).Ptr;
      uVar27 = (uint)FVar3 & 0xffff;
      if ((int)uVar27 < *(int *)&(pFVar16->Instances).field_0x28) {
        local_1e8 = FVar3;
        if ((*(int *)&(pFVar16->Instances).field_0x28 <= (int)uVar27) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar28 = local_1f0;
        puVar4 = *(undefined1 **)&(pFVar16->Instances).field_0x20;
        puVar24 = &(pFVar16->Instances).field_0x10;
        if (puVar4 != (undefined1 *)0x0) {
          puVar24 = puVar4;
        }
        if (((*(uint *)(puVar24 + (ulonglong)(uVar27 >> 5) * 4) >> ((uint)FVar3 & 0x1f) & 1) != 0)
           && (*(ushort *)
                ((ulonglong)((uint)FVar3 & 0xffff) * 0x140 + 0x134 +
                *(longlong *)&pFVar16->Instances) == local_1e8.InstanceSerial)) {
          pFVar16 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(local_1f0);
          UE::MovieScene::FSequenceInstance::GetSubSequencePath
                    ((FSequenceInstance *)
                     ((ulonglong)(param_2->Sequence).InstanceHandle.InstanceID * 0x140 +
                     *(longlong *)&pFVar16->Instances),&local_b8);
          FVar12 = UMovieSceneSubSection::GetSequenceID
                             ((UMovieSceneSubSection *)&this[-1]._padding_);
          iVar13 = local_b8.PathToRoot.ArrayNum;
          uVar26 = (ulonglong)local_b8.PathToRoot.ArrayNum;
          uVar27 = *(uint *)CONCAT44(extraout_var,FVar12.Value);
          if (local_b8.PathToRoot.ArrayNum != 0) {
            FVar20 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)&local_b8;
            if (local_b8.PathToRoot.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
              FVar20 = local_b8.PathToRoot.AllocatorInstance.SecondaryData;
            }
            FVar1 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                    ((longlong)FVar20 + uVar26 * 8);
            while( true ) {
              if ((uint)uVar26 != iVar13) {
                local_1f8[0] = 0;
                `TCheckedPointerIterator<UE::MovieScene::FSubSequencePath::FSequenceIDPair_const_,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_1f8);
                uVar26 = (ulonglong)(uint)local_b8.PathToRoot.ArrayNum;
              }
              pUVar28 = local_1f0;
              if (FVar20 == FVar1) break;
              uVar23 = (uint)*(ulonglong *)FVar20;
              if (uVar27 == 0) {
                FVar20 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                         ((longlong)FVar20 + 8);
                uVar27 = uVar23;
              }
              else {
                uVar27 = uVar27 - uVar23 ^ (uint)(*(ulonglong *)FVar20 >> 0xd) & 0x7ffff;
                uVar25 = (-0x61c88647 - uVar23) - uVar27 ^ uVar27 << 8;
                uVar23 = (uVar23 - uVar25) - uVar27 ^ uVar25 >> 0xd;
                uVar27 = (uVar27 - uVar23) - uVar25 ^ uVar23 >> 0xc;
                uVar25 = (uVar25 - uVar27) - uVar23 ^ uVar27 << 0x10;
                uVar23 = (uVar23 - uVar25) - uVar27 ^ uVar25 >> 5;
                uVar27 = (uVar27 - uVar23) - uVar25 ^ uVar23 >> 3;
                uVar25 = (uVar25 - uVar27) - uVar23 ^ uVar27 << 10;
                uVar27 = (uVar23 - uVar25) - uVar27 ^ uVar25 >> 0xf;
                FVar20 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                         ((longlong)FVar20 + 8);
              }
            }
          }
          if (param_2->EntityID == 0) {
            if (((UMovieScene *)pUVar14[1]._padding_ == (UMovieScene *)0x0) ||
               (iVar13 = UMovieScene::GetSpawnableCount((UMovieScene *)pUVar14[1]._padding_),
               iVar13 < 1)) {
              local_1c8 = 0;
              uStack_1c0 = 0;
              local_1c8._0_4_ = 0;
              local_1c8._4_4_ = 0;
              uStack_1c0._0_4_ = 0;
              uStack_1c0._4_4_ = 0;
              local_1b0 = (uint)local_1c8;
              uStack_1ac = local_1c8._4_4_;
              uStack_1a8 = (uint)uStack_1c0;
              uStack_1a4 = uStack_1c0._4_4_;
            }
            else {
              pFVar17 = UMovieScene::GetSpawnable((UMovieScene *)pUVar14[1]._padding_,0);
              local_1b0 = (pFVar17->Guid).A;
              uStack_1ac = (pFVar17->Guid).B;
              uStack_1a8 = (pFVar17->Guid).C;
              uStack_1a4 = (pFVar17->Guid).D;
            }
            UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_1d8);
            pFVar18 = UE::MovieScene::FBuiltInComponentTypes::Get();
            uStack_196 = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) ||
                         local_1d8.A != 0;
            local_198 = pFVar18->GenericObjectBinding;
            pFVar19 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
            local_144._4_4_ = uStack_1ac;
            local_144._0_4_ = local_1b0;
            uStack_13c._4_4_ = uStack_1a4;
            uStack_13c._0_4_ = uStack_1a8;
            local_168[1]._2_1_ = uStack_196;
            local_168[1]._0_2_ = local_198;
            local_168[1]._3_1_ = uStack_195;
            local_148 = pFVar19->TemplateSequence;
            local_168[0] = &
                           ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFTemplateSequenceComponentData_MovieScene_UE___23__MovieScene_UE__6B_
            ;
            local_14c = 1;
            local_130 = 1;
            local_12c = 0;
            local_134 = uVar27;
            UE::MovieScene::FImportedEntity::
            AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>_>
                      (local_1e0,
                       (TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
                        *)local_168);
            UMovieSceneSubSection::BuildDefaultSubSectionComponents
                      ((UMovieSceneSubSection *)&this[-1]._padding_,pUVar28,param_2,local_1e0);
          }
          else {
            iVar13 = param_2->EntityID - 1;
            if ((iVar13 < 0) || ((int)this->_padding_ <= iVar13)) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3061869755683045230>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Section\\TemplateSequenceSection.cpp"
                                  ,0x92,"PropertyScales.IsValidIndex(Params.EntityID - 1)");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              pFVar18 = UE::MovieScene::FBuiltInComponentTypes::Get();
              local_1f0 = (UMovieSceneEntitySystemLinker *)
                          UE::MovieScene::FTemplateSequenceComponentTypes::Get();
              uVar25 = param_2->EntityID - 1;
              uVar23 = 0;
              if ((int)uVar25 < (int)this->_padding_) {
                uVar23 = ~uVar25 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar5 = this->_padding_;
              lVar22 = (longlong)(int)uVar25 * 0x150;
              plVar21 = (longlong *)(lVar5 + 0x28 + lVar22);
              iVar13 = (**(code **)(*plVar21 + 0x50))(plVar21);
              if ((0 < iVar13) ||
                 ((*(char *)((longlong)plVar21 + 0x94) != '\0' &&
                  (*(float *)(plVar21 + 0x12) != __real_3f800000)))) {
                uVar7 = *(undefined8 *)(lVar22 + lVar5);
                uVar8 = ((undefined8 *)(lVar22 + lVar5))[1];
                local_174 = *(undefined4 *)(lVar22 + 0x20 + lVar5);
                puVar2 = (undefined8 *)(lVar22 + 0x10 + lVar5);
                uVar9 = *puVar2;
                uVar10 = puVar2[1];
                local_e0 = pFVar18->FloatChannel[0];
                local_ec = *(undefined4 *)(lVar22 + 0x24 + lVar5);
                uStack_194 = (undefined4)uVar7;
                uStack_190 = (undefined4)((ulonglong)uVar7 >> 0x20);
                uStack_18c = (undefined4)uVar8;
                uStack_188 = (undefined4)((ulonglong)uVar8 >> 0x20);
                uStack_184 = (undefined4)uVar9;
                uStack_180 = (undefined4)((ulonglong)uVar9 >> 0x20);
                uStack_17c = (undefined4)uVar10;
                uStack_178 = (undefined4)((ulonglong)uVar10 >> 0x20);
                local_118 = *(TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
                              *)((TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> *
                                 )&local_1f0->_padding_ + 1);
                local_104._4_4_ = uStack_184;
                local_104._0_4_ = uStack_188;
                uStack_fc._4_4_ = uStack_17c;
                uStack_fc._0_4_ = uStack_180;
                local_198 = SUB42(uVar27,0);
                uStack_196 = (undefined1)(uVar27 >> 0x10);
                uStack_195 = (undefined1)(uVar27 >> 0x18);
                local_114._4_4_ = uStack_194;
                local_114._0_4_ = uVar27;
                uStack_10c._4_4_ = uStack_18c;
                uStack_10c._0_4_ = uStack_190;
                local_120 = &
                            ___7__TEntityBuilder_U__TAdd_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
                ;
                local_e8 = 1;
                local_d0 = 1;
                local_f4._4_4_ = local_174;
                local_f4._0_4_ = uStack_178;
                local_c8 = 1;
                local_d8 = plVar21;
                UE::MovieScene::FImportedEntity::
                AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                          (local_1e0,
                           (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                            *)&local_120);
              }
            }
          }
          if (local_b8.PathToRoot.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
            FMemory::Free((void *)local_b8.PathToRoot.AllocatorInstance.SecondaryData);
          }
        }
      }
    }
  }
  return;
}

// OnDilated @ 14ac7ae00

void __thiscall
UTemplateSequenceSection::OnDilated
          (UTemplateSequenceSection *this,float param_1,FFrameNumber param_2)

{
  FMovieSceneTimeWarpVariant::ScaleBy
            ((FMovieSceneTimeWarpVariant *)&this->_padding_,(double)(__real_3f800000 / param_1));
  return;
}

// PopulateEvaluationFieldImpl @ 14ac7c810

bool __thiscall
UTemplateSequenceSection::PopulateEvaluationFieldImpl
          (UTemplateSequenceSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                    (param_3,(UObject *)&this[-1]._padding_,0);
  iVar5 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar4,iVar5);
  iVar4 = (int)this->_padding_;
  uVar7 = 0;
  if (0 < iVar4) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar4) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar7 = uVar7 + 1;
      iVar4 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                        (param_3,(UObject *)&this[-1]._padding_,uVar7);
      iVar5 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar4,iVar5);
      iVar4 = (int)this->_padding_;
    } while ((int)uVar7 < iVar4);
  }
  return true;
}

// RemovePropertyScale @ 14ac7e880

void __thiscall
UTemplateSequenceSection::RemovePropertyScale(UTemplateSequenceSection *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((-1 < param_1) && (param_1 < (this->PropertyScales).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->PropertyScales).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    _Dst = (this->PropertyScales).AllocatorInstance.Data + (longlong)param_1 * 0x150;
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 0x28));
    iVar5 = (this->PropertyScales).ArrayNum + ~param_1;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 0x150,(longlong)iVar5 * 0x150);
    }
    piVar1 = &(this->PropertyScales).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,8,&(this->PropertyScales).AllocatorInstance,(this->PropertyScales).ArrayNum,
               &(this->PropertyScales).ArrayMax);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &local_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3061869755683045340>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Section\\TemplateSequenceSection.cpp"
                     ,0x24,"PropertyScales.IsValidIndex(InIndex)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ShowCurveForChannel @ 14ac802e0

bool __thiscall
UTemplateSequenceSection::ShowCurveForChannel(UTemplateSequenceSection *this,void *param_1)

{
  return true;
}

// StaticRegisterNativesUTemplateSequenceSection @ 14ac805b0

void __cdecl UTemplateSequenceSection::StaticRegisterNativesUTemplateSequenceSection(void)

{
  return;
}

