// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 16

// GetSwapRootBone_WrapperImpl @ 14687fae0

void __cdecl
UMovieSceneSkeletalAnimationTrack::GetSwapRootBone_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1b9);
  return;
}

// SetSwapRootBone_WrapperImpl @ 14687faf0

void __cdecl
UMovieSceneSkeletalAnimationTrack::SetSwapRootBone_WrapperImpl(void *param_1,void *param_2)

{
  SetSwapRootBone(param_1,*(ESwapRootBone *)param_2);
  return;
}

// StaticClass @ 14687fb00

UClass * __cdecl UMovieSceneSkeletalAnimationTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationTrack",
               &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneSkeletalAnimationTrack,0x1c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSkeletalAnimationTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneSkeletalAnimationTrack>,local_res8,
               UMovieSceneCommonAnimationTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.InnerSingleton;
}

// UMovieSceneSkeletalAnimationTrack @ 14689eec0

UMovieSceneSkeletalAnimationTrack * __thiscall
UMovieSceneSkeletalAnimationTrack::UMovieSceneSkeletalAnimationTrack
          (UMovieSceneSkeletalAnimationTrack *this,FVTableHelper *param_1)

{
  UMovieSceneCommonAnimationTrack::UMovieSceneCommonAnimationTrack
            ((UMovieSceneCommonAnimationTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UMovieSceneSkeletalAnimationTrack @ 14689ef00

UMovieSceneSkeletalAnimationTrack * __thiscall
UMovieSceneSkeletalAnimationTrack::UMovieSceneSkeletalAnimationTrack
          (UMovieSceneSkeletalAnimationTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneCommonAnimationTrack::UMovieSceneCommonAnimationTrack
            ((UMovieSceneCommonAnimationTrack *)this,param_1);
  this->bUseLegacySectionIndexBlend = false;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
  this->SwapRootBone = SwapRootBone_None;
  return this;
}

// ~UMovieSceneSkeletalAnimationTrack @ 1468a0f80

void __thiscall
UMovieSceneSkeletalAnimationTrack::~UMovieSceneSkeletalAnimationTrack
          (UMovieSceneSkeletalAnimationTrack *this)

{
  this->_padding_ =
       (longlong)
       &UMovieSceneCommonAnimationTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ =
       (longlong)&UMovieSceneCommonAnimationTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// GetAnimSectionsAtTime @ 1468b57e0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneSkeletalAnimationTrack::GetAnimSectionsAtTime
          (UMovieSceneSkeletalAnimationTrack *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FFrameNumber param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *pTVar8;
  char *pcVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong local_48;
  char local_40 [4];
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  plVar11 = (longlong *)this->_padding_;
  iVar3 = (int)this->_padding_;
  plVar1 = plVar11 + iVar3;
  do {
    if ((int)this->_padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (plVar11 == plVar1) {
      return __return_storage_ptr__;
    }
    local_48 = *plVar11;
    local_40[0] = '\x01';
    local_3c = param_1.Value;
    pcVar9 = (char *)(local_48 + 0xb0);
    cVar2 = *pcVar9;
    if (cVar2 == '\x02') {
LAB_1468b589a:
      puVar10 = (undefined1 *)(local_48 + 0xb8);
      local_38[0] = 1;
      local_34 = param_1.Value;
      if (*(char *)(local_48 + 0xb8) != '\x02') {
        if (*(int *)(local_48 + 0xbc) <= param_1.Value) {
          if (*(int *)(local_48 + 0xbc) < param_1.Value) {
            puVar10 = local_38;
          }
          if (*(char *)(local_48 + 0xb8) != '\x01') goto LAB_1468b5968;
        }
        if (*(int *)(puVar10 + 4) != *(int *)(local_48 + 0xbc)) goto LAB_1468b5968;
      }
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_48;
    }
    else if (*(int *)(local_48 + 0xb4) < param_1.Value) {
LAB_1468b588e:
      if (*(int *)(pcVar9 + 4) == *(int *)(local_48 + 0xb4)) goto LAB_1468b589a;
    }
    else {
      if (param_1.Value < *(int *)(local_48 + 0xb4)) {
        pcVar9 = local_40;
      }
      if (cVar2 == '\x01') goto LAB_1468b588e;
    }
LAB_1468b5968:
    plVar11 = plVar11 + 1;
  } while( true );
}

// GetPrivateStaticClass @ 1468b83f0

UClass * __cdecl UMovieSceneSkeletalAnimationTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationTrack",
               &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneSkeletalAnimationTrack,0x1c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSkeletalAnimationTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneSkeletalAnimationTrack>,local_res8,
               UMovieSceneCommonAnimationTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.InnerSingleton;
}

// GetSwapRootBone @ 1468b9a90

ESwapRootBone __thiscall
UMovieSceneSkeletalAnimationTrack::GetSwapRootBone(UMovieSceneSkeletalAnimationTrack *this)

{
  return this->SwapRootBone;
}

// PopulateEvaluationTree @ 1468c58b0

bool __thiscall
UMovieSceneSkeletalAnimationTrack::PopulateEvaluationTree
          (UMovieSceneSkeletalAnimationTrack *this,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_1)

{
  TArrayView<UMovieSceneSection_*_const,int> *pTVar1;
  undefined1 local_res8 [32];
  undefined1 local_38 [16];
  TArrayView<UMovieSceneSection_*_const,int> local_28;
  TArrayView<UMovieSceneSection_*_const,int> local_18;
  
  if (this->bUseLegacySectionIndexBlend == false) {
    pTVar1 = TArrayView<UMovieSceneSection_*_const,int>::
             TArrayView<UMovieSceneSection_*_const,int><TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_>
                       (&local_28,
                        (TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_);
    local_38._0_8_ = pTVar1->DataPtr;
    local_38._8_4_ = pTVar1->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    UE::MovieScene::FEvaluationTreePopulationRules::HighPassPerRow
              ((TArrayView<UMovieSceneSection_*_const,int> *)local_38,param_1);
    return true;
  }
  local_38._8_8_ = local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMovieSceneSkeletalAnimationTrack::PopulateEvaluationTree'::__l7::<lambda_1>,bool,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&>
       ::Call;
  pTVar1 = TArrayView<UMovieSceneSection_*_const,int>::
           TArrayView<UMovieSceneSection_*_const,int><TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_>
                     (&local_18,
                      (TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)
                      &this->_padding_);
  local_28.DataPtr = pTVar1->DataPtr;
  local_28.ArrayNum = pTVar1->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
  UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustomPerRow
            (&local_28,param_1,
             (TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
              *)local_38);
  return true;
}

// PostLoad @ 1468c5ba0

void __thiscall UMovieSceneSkeletalAnimationTrack::PostLoad(UMovieSceneSkeletalAnimationTrack *this)

{
  longlong *plVar1;
  ESwapRootBone *pEVar2;
  void *_Dst;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FFrameNumber *pFVar10;
  UClass *pUVar11;
  longlong lVar12;
  uint uVar13;
  longlong local_res8;
  ESwapRootBone local_58 [4];
  TRangeBound<FFrameNumber> local_54;
  TRangeBound<FFrameNumber> aTStack_4c [2];
  FGuid local_38;
  
  uVar13 = 0;
  bVar5 = false;
  bVar6 = false;
  if (0 < (int)this->_padding_) {
    lVar12 = 0;
    plVar1 = &this->_padding_;
    local_res8 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(*plVar1 + lVar12);
      if (lVar3 == 0) {
LAB_1468c5c4c:
        uVar8 = 0;
        if ((int)uVar13 < (int)this->_padding_) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (void *)(*plVar1 + (longlong)(int)uVar13 * 8);
        iVar9 = ((int)this->_padding_ - uVar13) + -1;
        if (iVar9 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar9 << 3);
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)plVar1,(int)this->_padding_,
                   (int *)((longlong)&this->_padding_ + 4));
      }
      else {
        local_54._0_4_ = *(undefined4 *)(lVar3 + 0xb0);
        local_54.Value.Value = *(int *)(lVar3 + 0xb4);
        aTStack_4c[0]._0_4_ = *(undefined4 *)(lVar3 + 0xb8);
        aTStack_4c[0].Value.Value = *(int *)(lVar3 + 0xbc);
        if ((local_54.Type.Value != '\x02') && ((uchar)aTStack_4c[0]._0_4_ != '\x02')) {
          if (local_54.Value.Value <= aTStack_4c[0].Value.Value) {
            pFVar10 = TRangeBound<FFrameNumber>::GetValue(aTStack_4c);
            iVar9 = pFVar10->Value;
            pFVar10 = TRangeBound<FFrameNumber>::GetValue(&local_54);
            lVar12 = local_res8;
            if ((pFVar10->Value != iVar9) ||
               ((local_54.Type.Value != '\0' && (aTStack_4c[0].Type.Value != '\0'))))
            goto LAB_1468c5dd7;
          }
          goto LAB_1468c5c4c;
        }
LAB_1468c5dd7:
        lVar12 = lVar12 + 8;
        uVar13 = uVar13 + 1;
        pUVar11 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
        iVar9 = (int)pUVar11->_padding_;
        local_res8 = lVar12;
        if ((iVar9 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar11->_padding_)) {
          pEVar2 = (ESwapRootBone *)(lVar3 + 0x282);
          if (bVar6) {
            if (local_58[0] != *pEVar2) {
              bVar5 = false;
            }
          }
          else if (pEVar2 == local_58) {
            bVar5 = true;
          }
          else {
            local_58[0] = *pEVar2;
            bVar6 = true;
            bVar5 = true;
          }
        }
      }
    } while ((int)uVar13 < (int)this->_padding_);
    if ((bVar5) && (bVar6)) {
      this->SwapRootBone = local_58[0];
    }
  }
  UMovieSceneTrack::PostLoad((UMovieSceneTrack *)this);
  local_38 = FMovieSceneEvaluationCustomVersion::GUID;
  iVar9 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_38);
  if (iVar9 < 2) {
    this->bUseLegacySectionIndexBlend = true;
  }
  return;
}

// SetSwapRootBone @ 1468cedc0

void __thiscall
UMovieSceneSkeletalAnimationTrack::SetSwapRootBone
          (UMovieSceneSkeletalAnimationTrack *this,ESwapRootBone param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  
  this->SwapRootBone = param_1;
  plVar6 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (plVar6 == plVar1) break;
    lVar4 = *plVar6;
    if (lVar4 != 0) {
      pUVar5 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
      iVar3 = (int)pUVar5->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar5->_padding_)) {
        *(ESwapRootBone *)(lVar4 + 0x282) = this->SwapRootBone;
      }
    }
    plVar6 = plVar6 + 1;
  }
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// ShouldUseRootMotions @ 1468cfe00

bool __thiscall
UMovieSceneSkeletalAnimationTrack::ShouldUseRootMotions(UMovieSceneSkeletalAnimationTrack *this)

{
  return this->SwapRootBone != SwapRootBone_None;
}

// StaticRegisterNativesUMovieSceneSkeletalAnimationTrack @ 1468d0210

void __cdecl
UMovieSceneSkeletalAnimationTrack::StaticRegisterNativesUMovieSceneSkeletalAnimationTrack(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSwapRootBone @ 1468d56b0

void __cdecl
UMovieSceneSkeletalAnimationTrack::execGetSwapRootBone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xb].field_0x1;
  return;
}

// execSetSwapRootBone @ 1468d56e0

void __cdecl
UMovieSceneSkeletalAnimationTrack::execSetSwapRootBone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESwapRootBone local_res10 [24];
  
  local_res10[0] = SwapRootBone_Component;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSwapRootBone((UMovieSceneSkeletalAnimationTrack *)param_1,local_res10[0]);
  return;
}

