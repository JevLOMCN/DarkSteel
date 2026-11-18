// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 12

// StaticClass @ 14d097810

UClass * __cdecl UMovieSceneLiveLinkSubSectionBasicRole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSectionBasicRole",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSubSectionBasicRole,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSubSectionBasicRole>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionBasicRole>,local_res8,
               UMovieSceneLiveLinkSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.InnerSingleton;
}

// UMovieSceneLiveLinkSubSectionBasicRole @ 14d09e8c0

UMovieSceneLiveLinkSubSectionBasicRole * __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::UMovieSceneLiveLinkSubSectionBasicRole
          (UMovieSceneLiveLinkSubSectionBasicRole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionBasicRole__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PropertyHandler).Object = (IMovieSceneLiveLinkPropertyHandler *)0x0;
  (this->PropertyHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieSceneLiveLinkSubSectionBasicRole @ 14d09e910

UMovieSceneLiveLinkSubSectionBasicRole * __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::UMovieSceneLiveLinkSubSectionBasicRole
          (UMovieSceneLiveLinkSubSectionBasicRole *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionBasicRole__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PropertyHandler).Object = (IMovieSceneLiveLinkPropertyHandler *)0x0;
  (this->PropertyHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMovieSceneLiveLinkSubSectionBasicRole @ 14d09f150

void __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::~UMovieSceneLiveLinkSubSectionBasicRole
          (UMovieSceneLiveLinkSubSectionBasicRole *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionBasicRole__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PropertyHandler).SharedReferenceCount.ReferenceController);
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

// CreateChannelProxy @ 14d0a2fc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::CreateChannelProxy
          (UMovieSceneLiveLinkSubSectionBasicRole *this,int param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,FMovieSceneChannelProxyData *param_3)

{
  longlong *plVar1;
  ITextData *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  uint uVar13;
  FName local_res8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_b8;
  FTextFormat local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FFormatArgumentValue local_58;
  
  uVar13 = 0;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  plVar1 = (longlong *)this->_padding_;
  plVar8 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1);
  lVar9 = (**(code **)(*plVar1 + 0x20))(plVar1);
  if (lVar9 != 0) {
    Z_Construct_UClass_UScriptStruct_NoRegister();
  }
  if ((plVar8 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BasicData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSubSectionBasicRole.cpp"
                         ,0x21,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = (int)plVar8[1];
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar13 < iVar6) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      local_res8 = *(FName *)(lVar9 + *plVar8);
      pFVar10 = FText::FromName(&local_78,&local_res8);
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_98,L"MovieSceneLiveLinkSubSectionBasicRole",L"LinkLinkFormat",
                           L"{0}");
      pFVar12 = FTextFormat::FTextFormat(&local_68,pFVar11,Default);
      local_58.Type = Text;
      FText::FText((FText *)&local_58.TextValue,pFVar10);
      if ((local_58.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_b8.AllocatorInstance.Data,&local_58,1);
      local_a8.TextFormatData.Object = (pFVar12->TextFormatData).Object;
      local_a8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar12->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_a8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_88,&local_a8,&local_b8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if ((FFormatArgumentValue *)local_b8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if (local_58.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_58.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar12->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar2 = (pFVar10->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (((int)this->_padding_ < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      lVar3 = this->_padding_;
      uVar7 = 0;
      if ((int)uVar13 < *(int *)(lVar3 + 0x10)) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                (param_3,(FMovieSceneFloatChannel *)
                         ((longlong)(int)uVar13 * 0x128 + *(longlong *)(lVar3 + 8)));
      uVar13 = uVar13 + 1;
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      iVar6 = (int)plVar8[1];
      lVar9 = lVar9 + 8;
    } while ((int)uVar13 < iVar6);
  }
  return uVar13;
}

// CreatePropertiesChannel @ 14d0a6490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::CreatePropertiesChannel
          (UMovieSceneLiveLinkSubSectionBasicRole *this)

{
  int iVar1;
  longlong *plVar2;
  FName FVar3;
  FLiveLinkPropertyData *pFVar4;
  IMovieSceneLiveLinkPropertyHandler *pIVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  FName *pFVar10;
  UScriptStruct *pUVar11;
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *pTVar12;
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *pTVar13;
  FName local_res8;
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> local_18;
  
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  plVar2 = (longlong *)this->_padding_;
  lVar8 = (**(code **)(*plVar2 + 0x18))(plVar2);
  lVar9 = (**(code **)(*plVar2 + 0x20))(plVar2);
  if (lVar9 != 0) {
    Z_Construct_UClass_UScriptStruct_NoRegister();
  }
  if (lVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BasicData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSubSectionBasicRole.cpp"
                       ,0x35,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar1 = *(int *)(lVar8 + 8);
  if (0 < iVar1) {
    pFVar10 = ::FName::FName(&local_res8,0xe,L"PropertyValues",FNAME_Add);
    FVar3 = *pFVar10;
    TArray<FLiveLinkPropertyData,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<FLiveLinkPropertyData,TSizedDefaultAllocator<32>_> *)&this->_padding_,1,
               Default);
    if ((int)this->_padding_ < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(FName *)this->_padding_ = FVar3;
    if ((int)this->_padding_ < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (FLiveLinkPropertyData *)this->_padding_;
    pUVar11 = FLiveLinkBaseFrameData::StaticStruct();
    pTVar12 = LiveLinkPropertiesUtils::CreatePropertyHandler(&local_18,pUVar11,pFVar4);
    pTVar13 = &this->PropertyHandler;
    if (pTVar13 != pTVar12) {
      pTVar13->Object = pTVar12->Object;
      pTVar12->Object = (IMovieSceneLiveLinkPropertyHandler *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PropertyHandler).SharedReferenceCount,&pTVar12->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pTVar13->Object == (IMovieSceneLiveLinkPropertyHandler *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar5 = pTVar13->Object;
    pcVar6 = *(code **)((longlong)*pIVar5 + 8);
    pUVar11 = FLiveLinkBaseFrameData::StaticStruct();
    (*pcVar6)(pIVar5,pUVar11,iVar1);
  }
  return;
}

// FinalizeSection @ 14d0ae9e0

void __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::FinalizeSection
          (UMovieSceneLiveLinkSubSectionBasicRole *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  IMovieSceneLiveLinkPropertyHandler *pIVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x18))();
  if (0 < *(int *)(lVar4 + 8)) {
    if ((this->PropertyHandler).Object == (IMovieSceneLiveLinkPropertyHandler *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->PropertyHandler).Object;
    (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1,param_2);
  }
  return;
}

// GetPrivateStaticClass @ 14d0b28c0

UClass * __cdecl UMovieSceneLiveLinkSubSectionBasicRole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSectionBasicRole",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSubSectionBasicRole,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSubSectionBasicRole>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionBasicRole>,local_res8,
               UMovieSceneLiveLinkSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.InnerSingleton;
}

// Initialize @ 14d0b33d0

void __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::Initialize
          (UMovieSceneLiveLinkSubSectionBasicRole *this,TSubclassOf<ULiveLinkRole> param_1,
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

// IsRoleSupported @ 14d0b4420

bool __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::IsRoleSupported
          (UMovieSceneLiveLinkSubSectionBasicRole *this,TSubclassOf<ULiveLinkRole> *param_1)

{
  return true;
}

// RecordFrame @ 14d0b5d20

void __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::RecordFrame
          (UMovieSceneLiveLinkSubSectionBasicRole *this,FFrameNumber param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  IMovieSceneLiveLinkPropertyHandler *pIVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  UScriptStruct *pUVar6;
  int local_res10 [2];
  
  local_res10[0] = param_1.Value;
  lVar4 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
  if (lVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseFrameData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSubSectionBasicRole.cpp"
                       ,0x47,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->PropertyHandler).Object;
  if (pIVar1 != (IMovieSceneLiveLinkPropertyHandler *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x10);
    uVar5 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
    pUVar6 = FLiveLinkBaseFrameData::StaticStruct();
    (*pcVar2)(pIVar1,local_res10,pUVar6,uVar5);
  }
  return;
}

// StaticRegisterNativesUMovieSceneLiveLinkSubSectionBasicRole @ 14d0b7fe0

void __cdecl
UMovieSceneLiveLinkSubSectionBasicRole::StaticRegisterNativesUMovieSceneLiveLinkSubSectionBasicRole
          (void)

{
  return;
}

