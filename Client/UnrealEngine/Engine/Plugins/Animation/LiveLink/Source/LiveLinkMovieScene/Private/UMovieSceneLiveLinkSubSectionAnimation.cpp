// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 12

// StaticClass @ 14d097750

UClass * __cdecl UMovieSceneLiveLinkSubSectionAnimation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSectionAnimation",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSubSectionAnimation,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSubSectionAnimation>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionAnimation>,local_res8,
               UMovieSceneLiveLinkSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.InnerSingleton;
}

// UMovieSceneLiveLinkSubSectionAnimation @ 14d09e820

UMovieSceneLiveLinkSubSectionAnimation * __thiscall
UMovieSceneLiveLinkSubSectionAnimation::UMovieSceneLiveLinkSubSectionAnimation
          (UMovieSceneLiveLinkSubSectionAnimation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionAnimation__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->TransformHandler).Object = (FMovieSceneLiveLinkTransformHandler *)0x0;
  (this->TransformHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieSceneLiveLinkSubSectionAnimation @ 14d09e870

UMovieSceneLiveLinkSubSectionAnimation * __thiscall
UMovieSceneLiveLinkSubSectionAnimation::UMovieSceneLiveLinkSubSectionAnimation
          (UMovieSceneLiveLinkSubSectionAnimation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionAnimation__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->TransformHandler).Object = (FMovieSceneLiveLinkTransformHandler *)0x0;
  (this->TransformHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMovieSceneLiveLinkSubSectionAnimation @ 14d09f0f0

void __thiscall
UMovieSceneLiveLinkSubSectionAnimation::~UMovieSceneLiveLinkSubSectionAnimation
          (UMovieSceneLiveLinkSubSectionAnimation *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionAnimation__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransformHandler).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  DestructItems<FLiveLinkPropertyData,int>
            ((FLiveLinkPropertyData *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateChannelProxy @ 14d0a2b20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
UMovieSceneLiveLinkSubSectionAnimation::CreateChannelProxy
          (UMovieSceneLiveLinkSubSectionAnimation *this,int param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,FMovieSceneChannelProxyData *param_3)

{
  void *_Src;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FLiveLinkSkeletonStaticData *pFVar6;
  ulonglong uVar7;
  FText *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint local_res8;
  uint local_res10 [2];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_118;
  uint local_108;
  FString local_100;
  longlong local_f0;
  FName local_e8;
  FLiveLinkSkeletonStaticData *local_e0;
  FTextFormat local_d8;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  uVar15 = 0;
  local_res10[0] = param_1;
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar6 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                     ((FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)this->_padding_);
  local_e0 = pFVar6;
  if ((pFVar6 == (FLiveLinkSkeletonStaticData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkeletonData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSubSectionAnimation.cpp"
                         ,0x33,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  local_res8 = 0;
  if (0 < (pFVar6->BoneNames).ArrayNum) {
    local_f0 = 0;
    do {
      lVar12 = local_f0;
      uVar5 = 0;
      if ((int)local_res8 < (pFVar6->BoneNames).ArrayNum) {
        uVar5 = ~local_res8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      local_e8 = *(FName *)((pFVar6->BoneNames).AllocatorInstance.Data + lVar12);
      uVar7 = (ulonglong)MovieSceneLiveLinkSubSectionAnimationUtil::StringArray.ArrayNum;
      pFVar14 = MovieSceneLiveLinkSubSectionAnimationUtil::StringArray.AllocatorInstance.Data +
                uVar7 * 0x10;
      local_108 = MovieSceneLiveLinkSubSectionAnimationUtil::StringArray.ArrayNum;
      FVar13.Data = MovieSceneLiveLinkSubSectionAnimationUtil::StringArray.AllocatorInstance.Data;
      while( true ) {
        if (MovieSceneLiveLinkSubSectionAnimationUtil::StringArray.ArrayNum != (int)uVar7) {
          local_res10[0] = local_res10[0] & 0xffffff00;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar13.Data == pFVar14) break;
        local_100.Data.ArrayNum = *(int *)(FVar13.Data + 8);
        lVar12 = (longlong)local_100.Data.ArrayNum;
        _Src = *(void **)FVar13.Data;
        local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_100.Data.ArrayNum == 0) {
          local_100.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                     local_100.Data.ArrayNum,&local_100.Data.ArrayMax);
          memcpy(local_100.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
        }
        pFVar8 = FText::FromString(&local_68,&local_100);
        pFVar9 = FText::FromName(&local_58,&local_e8);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_88,L"MovieSceneLiveLinkSubSectionAnimation",L"LinkLinkFormat",
                             L"{0} : {1}");
        pFVar11 = FTextFormat::FTextFormat(&local_48,pFVar10,Default);
        local_c8.Type = Text;
        FText::FText((FText *)&local_c8.TextValue,pFVar9);
        if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        local_a8 = 4;
        FText::FText(&local_98,pFVar8);
        if ((local_98.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_118.AllocatorInstance,2,&local_118.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_118.AllocatorInstance.Data,&local_c8,2);
        local_d8.TextFormatData.Object = (pFVar11->TextFormatData).Object;
        local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_78,&local_d8,&local_118);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
        if ((FFormatArgumentValue *)local_118.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_118.AllocatorInstance.Data);
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar1 = (pFVar9->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        pIVar1 = (pFVar8->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        if (((int)this->_padding_ < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar12 = this->_padding_;
        uVar5 = 0;
        if ((int)uVar15 < *(int *)(lVar12 + 0x10)) {
          uVar5 = ~uVar15 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                  (param_3,(FMovieSceneFloatChannel *)
                           ((longlong)(int)uVar15 * 0x128 + *(longlong *)(lVar12 + 8)));
        uVar15 = uVar15 + 1;
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        uVar7 = (ulonglong)local_108;
        FVar13.Data = FVar13.Data + 0x10;
      }
      local_res8 = local_res8 + 1;
      local_f0 = local_f0 + 8;
      pFVar6 = local_e0;
    } while ((int)local_res8 < (local_e0->BoneNames).ArrayNum);
  }
  return uVar15;
}

// CreatePropertiesChannel @ 14d0a6180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneLiveLinkSubSectionAnimation::CreatePropertiesChannel
          (UMovieSceneLiveLinkSubSectionAnimation *this)

{
  TSharedPtr<FMovieSceneLiveLinkTransformHandler,1> *pTVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FName FVar6;
  bool bVar7;
  FLiveLinkSkeletonStaticData *pFVar8;
  FName *pFVar9;
  FString *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  UScriptStruct *pUVar12;
  TReferenceControllerBase<1> *pTVar13;
  FMovieSceneLiveLinkTransformHandler *pFVar14;
  FName local_res8;
  FName local_res10;
  FMovieSceneLiveLinkTransformHandler *local_68;
  FSharedReferencer<1> FStack_60;
  FString local_58;
  FString local_48;
  FName local_38;
  
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                     ((FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)this->_padding_);
  if (pFVar8 == (FLiveLinkSkeletonStaticData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletonData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSubSectionAnimation.cpp"
                       ,0x4b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = ::FName::FName(&local_res10,10,L"Transforms",FNAME_Add);
  local_res8 = *pFVar9;
  iVar2 = (pFVar8->BoneNames).ArrayNum;
  if (0 < iVar2) {
    TArray<FLiveLinkPropertyData,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<FLiveLinkPropertyData,TSizedDefaultAllocator<32>_> *)&this->_padding_,1,
               Default);
    FVar6 = local_res8;
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    if ((int)this->_padding_ < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(FName *)this->_padding_ = FVar6;
    if ((int)this->_padding_ < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar4 = *(undefined4 *)&this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    pFVar10 = ::FName::ToString(&local_res8,&local_58);
    FVar6 = local_res8;
    ::FString::FString(&local_48,pFVar10);
    local_38 = FVar6;
    pTVar11 = ::operator_new(0x50);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      local_68 = ___xmm_00000000000000000000000000000010;
      pFVar14 = (FMovieSceneLiveLinkTransformHandler *)&DAT_00000010;
      FStack_60.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11[1].SharedReferenceCount = (atomic<int>)uVar4;
      pTVar11[1].WeakReferenceCount = (atomic<int>)uVar5;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMovieSceneLiveLinkTransformHandler___00_SharedPointerInternals__6B_
      ;
      pTVar11[1]._padding_ = (longlong)&___7FMovieSceneLiveLinkTransformHandler__6B_;
      ::FString::FString((FString *)(pTVar11 + 2),&local_48);
      pFVar14 = (FMovieSceneLiveLinkTransformHandler *)(pTVar11 + 1);
      pTVar11[3]._padding_ = (longlong)local_38;
      pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[4]._padding_ = 0;
      pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
      if (pFVar14 == (FMovieSceneLiveLinkTransformHandler *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      FStack_60.ReferenceController = pTVar11;
      pTVar13 = pTVar11;
      local_68 = pFVar14;
    }
    pTVar1 = &this->TransformHandler;
    if (pTVar1 != (TSharedPtr<FMovieSceneLiveLinkTransformHandler,1> *)&local_68) {
      pTVar1->Object = pFVar14;
      local_68 = (FMovieSceneLiveLinkTransformHandler *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->TransformHandler).SharedReferenceCount,&FStack_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (pTVar1->Object == (FMovieSceneLiveLinkTransformHandler *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar14 = pTVar1->Object;
    pcVar3 = *(code **)(pFVar14->_padding_ + 8);
    pUVar12 = FLiveLinkAnimationFrameData::StaticStruct();
    (*pcVar3)(pFVar14,pUVar12,iVar2);
  }
  return;
}

// FinalizeSection @ 14d0ae9c0

void __thiscall
UMovieSceneLiveLinkSubSectionAnimation::FinalizeSection
          (UMovieSceneLiveLinkSubSectionAnimation *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  FMovieSceneLiveLinkTransformHandler *pFVar1;
  
  pFVar1 = (this->TransformHandler).Object;
  if (pFVar1 != (FMovieSceneLiveLinkTransformHandler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0ae9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x18))();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14d0b2800

UClass * __cdecl UMovieSceneLiveLinkSubSectionAnimation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSectionAnimation",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSubSectionAnimation,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSubSectionAnimation>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionAnimation>,local_res8,
               UMovieSceneLiveLinkSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.InnerSingleton;
}

// Initialize @ 14d0b3370

void __thiscall
UMovieSceneLiveLinkSubSectionAnimation::Initialize
          (UMovieSceneLiveLinkSubSectionAnimation *this,TSubclassOf<ULiveLinkRole> param_1,
          TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *param_2)

{
  UObject *local_res10 [3];
  
  local_res10[0] = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  UMovieSceneLiveLinkSubSection::Initialize
            ((UMovieSceneLiveLinkSubSection *)this,(TSubclassOf<ULiveLinkRole>)local_res10,param_2);
  CreatePropertiesChannel(this);
  return;
}

// IsRoleSupported @ 14d0b4390

bool __thiscall
UMovieSceneLiveLinkSubSectionAnimation::IsRoleSupported
          (UMovieSceneLiveLinkSubSectionAnimation *this,TSubclassOf<ULiveLinkRole> *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar4 = (param_1->Class).field0_0x0.DebugPtr;
        goto LAB_14d0b43da;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14d0b43da:
  pUVar3 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  if (pUVar3 != (UClass *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= (int)pUVar4->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) == &pUVar3->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// RecordFrame @ 14d0b5c10

void __thiscall
UMovieSceneLiveLinkSubSectionAnimation::RecordFrame
          (UMovieSceneLiveLinkSubSectionAnimation *this,FFrameNumber param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  int iVar1;
  FMovieSceneLiveLinkTransformHandler *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  UClass *pUVar7;
  UScriptStruct *pUVar8;
  undefined8 uVar9;
  int local_res10 [2];
  
  local_res10[0] = param_1.Value;
  lVar5 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
  lVar6 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar6 != 0) {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      pUVar8 = FLiveLinkAnimationFrameData::StaticStruct();
      if (pUVar8 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar6 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (lVar5 != 0)) goto LAB_14d0b5cc8;
      }
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("AnimationFrameData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSubSectionAnimation.cpp"
                     ,0x5e,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14d0b5cc8:
  if ((this->TransformHandler).Object != (FMovieSceneLiveLinkTransformHandler *)0x0) {
    pFVar2 = (this->TransformHandler).Object;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x10);
    uVar9 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
    pUVar8 = FLiveLinkAnimationFrameData::StaticStruct();
    (*pcVar3)(pFVar2,local_res10,pUVar8,uVar9);
  }
  return;
}

// StaticRegisterNativesUMovieSceneLiveLinkSubSectionAnimation @ 14d0b7fd0

void __cdecl
UMovieSceneLiveLinkSubSectionAnimation::StaticRegisterNativesUMovieSceneLiveLinkSubSectionAnimation
          (void)

{
  return;
}

