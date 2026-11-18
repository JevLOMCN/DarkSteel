// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 15

// StaticClass @ 14d097990

UClass * __cdecl UMovieSceneLiveLinkSubSectionProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSectionProperties",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSubSectionProperties,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSubSectionProperties>
               ,InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionProperties>,local_res8,
               UMovieSceneLiveLinkSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.InnerSingleton;
}

// UMovieSceneLiveLinkSubSectionProperties @ 14d09e960

UMovieSceneLiveLinkSubSectionProperties * __thiscall
UMovieSceneLiveLinkSubSectionProperties::UMovieSceneLiveLinkSubSectionProperties
          (UMovieSceneLiveLinkSubSectionProperties *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionProperties__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PropertyHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyHandlers).ArrayNum = 0;
  (this->PropertyHandlers).ArrayMax = 0;
  return this;
}

// UMovieSceneLiveLinkSubSectionProperties @ 14d09e9b0

UMovieSceneLiveLinkSubSectionProperties * __thiscall
UMovieSceneLiveLinkSubSectionProperties::UMovieSceneLiveLinkSubSectionProperties
          (UMovieSceneLiveLinkSubSectionProperties *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionProperties__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PropertyHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyHandlers).ArrayNum = 0;
  (this->PropertyHandlers).ArrayMax = 0;
  return this;
}

// ~UMovieSceneLiveLinkSubSectionProperties @ 14d09f1b0

void __thiscall
UMovieSceneLiveLinkSubSectionProperties::~UMovieSceneLiveLinkSubSectionProperties
          (UMovieSceneLiveLinkSubSectionProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionProperties__6B_;
  DestructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
            ((TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
             (this->PropertyHandlers).AllocatorInstance.Data,(this->PropertyHandlers).ArrayNum);
  pFVar1 = (this->PropertyHandlers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// CreateChannelProxy @ 14d0a3320

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
UMovieSceneLiveLinkSubSectionProperties::CreateChannelProxy
          (UMovieSceneLiveLinkSubSectionProperties *this,int param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,FMovieSceneChannelProxyData *param_3)

{
  FName FVar1;
  ITextData *pIVar2;
  code *pcVar3;
  FLiveLinkPropertyData *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  UScriptStruct *pUVar9;
  FString *pFVar10;
  FProperty *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  ulonglong uVar15;
  int iVar16;
  UObject *pUVar17;
  FLiveLinkPropertyData *this_00;
  int iVar18;
  undefined1 local_138 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_130;
  uint local_120;
  FLiveLinkPropertyData *local_118;
  FTextFormat local_110;
  FText local_100;
  FText local_f0;
  FLiveLinkStructPropertyBindings local_e0;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined4 local_90;
  FString local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  
  this_00 = (FLiveLinkPropertyData *)this->_padding_;
  local_120 = (uint)this->_padding_;
  uVar15 = (ulonglong)(int)local_120;
  iVar6 = 0;
  local_118 = this_00 + uVar15;
  do {
    pFVar4 = local_118;
    if ((int)this->_padding_ != (int)uVar15) {
      local_138[0] = 0;
      `TCheckedPointerIterator<FLiveLinkPropertyData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_138);
    }
    if (this_00 == pFVar4) {
      return iVar6;
    }
    pUVar8 = (UClass *)this->_padding_;
    pUVar17 = (UObject *)0x0;
    if (pUVar8 != (UClass *)0x0) {
      if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar8);
      }
      pUVar17 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar17 != (UObject *)0x0) {
        pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
        iVar16 = (int)pUVar8->_padding_;
        if ((iVar16 <= *(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
            &pUVar8->_padding_)) goto LAB_14d0a33fe;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                         ,0x93,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
LAB_14d0a33fe:
    pUVar9 = (UScriptStruct *)(**(code **)(*(longlong *)pUVar17 + 0x2b8))(pUVar17);
    pFVar10 = ::FName::ToString(&this_00->PropertyName,&local_88);
    FVar1 = this_00->PropertyName;
    ::FString::FString(&local_e0.PropertyPath,pFVar10);
    local_e0.PropertyName = FVar1;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar11 = FLiveLinkStructPropertyBindings::GetProperty(&local_e0,pUVar9);
    if (pFVar11 != (FProperty *)0x0) {
      if (pFVar11->ArrayDim < 2) {
        FText::FromName(&local_f0,&this_00->PropertyName);
        iVar16 = CreateChannelProxyInternal
                           (this,pFVar11,this_00,0,param_1 + iVar6,param_2,param_3,&local_f0);
        iVar6 = iVar6 + iVar16;
        if (local_f0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
        }
      }
      else {
        iVar16 = 0;
        iVar18 = param_1 + iVar6;
        do {
          pFVar12 = FText::FromName(&local_68,&this_00->PropertyName);
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_78,L"MovieSceneLiveLinkSubSectionProperties",
                               L"LiveLinkRecordedPropertyName",L"{0}[{1}]");
          pFVar14 = FTextFormat::FTextFormat(&local_58,pFVar13,Default);
          local_c8.Type = Text;
          FText::FText((FText *)&local_c8.TextValue,pFVar12);
          if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          local_a0 = (longlong)iVar16;
          local_a8 = 0;
          local_98 = (longlong *)0x0;
          local_90 = 0;
          local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_130.AllocatorInstance,2,&local_130.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_130.AllocatorInstance.Data,&local_c8,2);
          local_110.TextFormatData.Object = (pFVar14->TextFormatData).Object;
          local_110.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar14->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_110.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_110.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_110.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_100,&local_110,&local_130);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
          if ((FFormatArgumentValue *)local_130.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_130.AllocatorInstance.Data);
          }
          if (local_98 != (longlong *)0x0) {
            (**(code **)(*local_98 + 0x10))();
          }
          if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar14->TextFormatData).SharedReferenceCount.ReferenceController);
          pIVar2 = (pFVar12->TextData).Reference;
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))();
          }
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          iVar7 = CreateChannelProxyInternal
                            (this,pFVar11,this_00,iVar16,iVar18,param_2,param_3,&local_100);
          iVar18 = iVar18 + iVar7;
          iVar6 = iVar6 + iVar7;
          if (local_100.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < pFVar11->ArrayDim);
      }
    }
    if (local_e0.PropertyPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.PropertyPath.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
    uVar15 = (ulonglong)local_120;
  } while( true );
}

// CreateChannelProxyInternal @ 14d0a36f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMovieSceneLiveLinkSubSectionProperties::CreateChannelProxyInternal
          (UMovieSceneLiveLinkSubSectionProperties *this,FProperty *param_1,
          FLiveLinkPropertyData *param_2,int param_3,int param_4,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_5,FMovieSceneChannelProxyData *param_6,
          FText *param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNameEntryId FVar4;
  uint uVar5;
  undefined4 extraout_var;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ULiveLinkRole *pUVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  FName local_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  FName local_168;
  FText local_160;
  FText local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  longlong *local_d0 [2];
  FString local_c0;
  longlong *local_b0 [2];
  FString local_a0;
  FText local_90;
  FTextFormat local_80;
  FText local_70;
  FTextFormat local_60;
  FText local_50;
  FTextFormat local_40;
  
  uVar12 = 0;
  lVar13 = (longlong)param_3;
  uVar14 = 0;
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSubSectionProperties.cpp"
                       ,0xd7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else {
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 8 & 1) != 0) {
      if (param_3 < (param_2->FloatChannel).ArrayNum) {
        uVar14 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                (param_6,(FMovieSceneFloatChannel *)
                         ((param_2->FloatChannel).AllocatorInstance.Data + lVar13 * 0x128));
      return 1;
    }
    if ((*(byte *)(param_1->_padding_ + 0x18) & 0x80) != 0) {
      if (param_3 < (param_2->IntegerChannel).ArrayNum) {
        uVar14 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneIntegerChannel>
                (param_6,(FMovieSceneIntegerChannel *)
                         ((param_2->IntegerChannel).AllocatorInstance.Data + lVar13 * 0x120));
      return 1;
    }
  }
  if (param_1 != (FProperty *)0x0) {
    uVar5 = *(uint *)(param_1->_padding_ + 0x18);
    if ((uVar5 >> 0x11 & 1) != 0) {
      if (param_3 < (param_2->BoolChannel).ArrayNum) {
        uVar14 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneBoolChannel>
                (param_6,(FMovieSceneBoolChannel *)
                         ((param_2->BoolChannel).AllocatorInstance.Data + lVar13 * 0x120));
      return 1;
    }
    if ((uVar5 >> 0xe & 1) != 0) {
      if (param_3 < (param_2->StringChannel).ArrayNum) {
        uVar14 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneStringChannel>
                (param_6,(FMovieSceneStringChannel *)
                         ((param_2->StringChannel).AllocatorInstance.Data + lVar13 * 0x128));
      return 1;
    }
    if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) {
      if (param_3 < (param_2->ByteChannel).ArrayNum) {
        uVar14 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneByteChannel>
                (param_6,(FMovieSceneByteChannel *)
                         ((param_2->ByteChannel).AllocatorInstance.Data + lVar13 * 0x128));
      return 1;
    }
  }
  if (param_1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      if (param_3 < (param_2->ByteChannel).ArrayNum) {
        uVar14 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneByteChannel>
                (param_6,(FMovieSceneByteChannel *)
                         ((param_2->ByteChannel).AllocatorInstance.Data + lVar13 * 0x128));
      return 1;
    }
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0) {
      uVar15 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
      FVar4 = FNameEntryId::FromValidEName((EName)local_180);
      if (uVar15 == *(uint *)CONCAT44(extraout_var,FVar4.Value)) {
        iVar3 = MovieSceneLiveLinkPropertiesUtil::TransformStrings.ArrayNum;
        if (iVar3 < 1) {
          return 0;
        }
        lVar13 = (longlong)(param_3 * iVar3) * 0x128;
        uVar15 = uVar12;
        while( true ) {
          uVar11 = (uint)uVar12;
          uVar5 = uVar14;
          if ((int)uVar11 < MovieSceneLiveLinkPropertiesUtil::TransformStrings.ArrayNum) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) break;
          pFVar6 = FText::FromString(&local_90,
                                     (FString *)
                                     (MovieSceneLiveLinkPropertiesUtil::TransformStrings.
                                      AllocatorInstance.Data + uVar15));
          local_160.TextData.Reference = (param_7->TextData).Reference;
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 8))
                      (local_160.TextData.Reference,local_17c);
          }
          local_160.Flags = param_7->Flags;
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_130,L"MovieSceneLiveLinkSubSectionProperties",L"LinkLinkFormat"
                              ,L"{0} : {1}");
          pFVar8 = FTextFormat::FTextFormat(&local_80,pFVar7,Default);
          FText::Format<FText,FText>(&local_120,pFVar8,&local_160,pFVar6);
          if (local_130.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
          }
          uVar10 = uVar11 + param_3 * iVar3;
          uVar5 = uVar14;
          if ((int)uVar10 < (param_2->FloatChannel).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
          FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                    (param_6,(FMovieSceneFloatChannel *)
                             ((param_2->FloatChannel).AllocatorInstance.Data + lVar13));
          if (local_120.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar15 = uVar15 + 0x10;
          lVar13 = lVar13 + 0x128;
          if (iVar3 <= (int)(uVar11 + 1)) {
            return iVar3;
          }
        }
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar15 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
      FVar4 = FNameEntryId::FromValidEName((EName)local_178);
      if (uVar15 == *(uint *)CONCAT44(extraout_var_00,FVar4.Value)) {
        iVar3 = MovieSceneLiveLinkPropertiesUtil::VectorStrings.ArrayNum;
        if (iVar3 < 1) {
          return 0;
        }
        lVar13 = (longlong)(param_3 * iVar3) * 0x128;
        uVar15 = uVar12;
        while( true ) {
          uVar11 = (uint)uVar12;
          uVar5 = uVar14;
          if ((int)uVar11 < MovieSceneLiveLinkPropertiesUtil::VectorStrings.ArrayNum) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) break;
          pFVar6 = FText::FromString(&local_70,
                                     (FString *)
                                     (MovieSceneLiveLinkPropertiesUtil::VectorStrings.
                                      AllocatorInstance.Data + uVar15));
          local_150.TextData.Reference = (param_7->TextData).Reference;
          if (local_150.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_150.TextData.Reference + 8))
                      (local_150.TextData.Reference,local_174);
          }
          local_150.Flags = param_7->Flags;
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_110,L"MovieSceneLiveLinkSubSectionProperties",L"LinkLinkFormat"
                              ,L"{0} : {1}");
          pFVar8 = FTextFormat::FTextFormat(&local_60,pFVar7,Default);
          FText::Format<FText,FText>(&local_100,pFVar8,&local_150,pFVar6);
          if (local_110.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
          }
          uVar10 = uVar11 + param_3 * iVar3;
          uVar5 = uVar14;
          if ((int)uVar10 < (param_2->FloatChannel).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
          FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                    (param_6,(FMovieSceneFloatChannel *)
                             ((param_2->FloatChannel).AllocatorInstance.Data + lVar13));
          if (local_100.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar15 = uVar15 + 0x10;
          lVar13 = lVar13 + 0x128;
          if (iVar3 <= (int)(uVar11 + 1)) {
            return iVar3;
          }
        }
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar15 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
      FVar4 = FNameEntryId::FromValidEName((EName)local_170);
      if (uVar15 == *(uint *)CONCAT44(extraout_var_01,FVar4.Value)) {
        iVar3 = MovieSceneLiveLinkPropertiesUtil::ColorStrings.ArrayNum;
        if (iVar3 < 1) {
          return 0;
        }
        lVar13 = (longlong)(param_3 * iVar3) * 0x128;
        uVar15 = uVar12;
        while( true ) {
          uVar11 = (uint)uVar12;
          uVar5 = uVar14;
          if ((int)uVar11 < MovieSceneLiveLinkPropertiesUtil::ColorStrings.ArrayNum) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
          pFVar6 = FText::FromString(&local_50,
                                     (FString *)
                                     (MovieSceneLiveLinkPropertiesUtil::ColorStrings.
                                      AllocatorInstance.Data + uVar15));
          local_140.TextData.Reference = (param_7->TextData).Reference;
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 8))
                      (local_140.TextData.Reference,local_16c);
          }
          local_140.Flags = param_7->Flags;
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_f0,L"MovieSceneLiveLinkSubSectionProperties",L"LinkLinkFormat",
                              L"{0} : {1}");
          pFVar8 = FTextFormat::FTextFormat(&local_40,pFVar7,Default);
          FText::Format<FText,FText>(&local_e0,pFVar8,&local_140,pFVar6);
          if (local_f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
          }
          uVar10 = uVar11 + param_3 * iVar3;
          uVar5 = uVar14;
          if ((int)uVar10 < (param_2->ByteChannel).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) break;
          FMovieSceneChannelProxyData::AddInternal<FMovieSceneByteChannel>
                    (param_6,(FMovieSceneByteChannel *)
                             ((param_2->ByteChannel).AllocatorInstance.Data + lVar13));
          if (local_e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar15 = uVar15 + 0x10;
          lVar13 = lVar13 + 0x128;
          if (iVar3 <= (int)(uVar11 + 1)) {
            return iVar3;
          }
        }
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if ((byte)LogLiveLinkMovieScene._0_1_ < 3) {
        return 0;
      }
      local_168 = *(FName *)(param_1[1]._padding_ + 0x18);
      ::FName::ToString(&local_168,&local_c0);
      pUVar9 = TSubclassOf<ULiveLinkRole>::GetDefaultObject
                         ((TSubclassOf<ULiveLinkRole> *)&this->_padding_);
      pFVar6 = (FText *)(**(code **)(*(longlong *)pUVar9 + 0x2d0))(pUVar9,local_d0);
      FText::ToString(pFVar6);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
      local_a0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
      if (local_d0[0] != (longlong *)0x0) {
        (**(code **)(*local_d0[0] + 0x10))();
        local_a0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
      }
      goto LAB_14d0a401e;
    }
  }
  if ((byte)LogLiveLinkMovieScene._0_1_ < 3) {
    return 0;
  }
  bVar2 = IsThisNotNull(param_1,"FField::GetFName");
  if (bVar2) {
    local_188 = (FName)param_1->_padding_;
  }
  else {
    local_188.ComparisonIndex.Value = 0;
    local_188.Number = 0;
  }
  ::FName::ToString(&local_188,&local_a0);
  pUVar9 = TSubclassOf<ULiveLinkRole>::GetDefaultObject
                     ((TSubclassOf<ULiveLinkRole> *)&this->_padding_);
  pFVar6 = (FText *)(**(code **)(*(longlong *)pUVar9 + 0x2d0))(pUVar9,local_b0);
  FText::ToString(pFVar6);
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
  if (local_b0[0] != (longlong *)0x0) {
    (**(code **)(*local_b0[0] + 0x10))();
  }
LAB_14d0a401e:
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return 0;
}

// CreatePropertiesChannel @ 14d0a6690

void __thiscall
UMovieSceneLiveLinkSubSectionProperties::CreatePropertiesChannel
          (UMovieSceneLiveLinkSubSectionProperties *this,UScriptStruct *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ULiveLinkRole *pUVar8;
  UScriptStruct *pUVar9;
  FString *pFVar10;
  FProperty *pFVar11;
  FScriptContainerElement *pFVar12;
  FLiveLinkPropertyData *this_00;
  FLiveLinkPropertyData *pFVar13;
  undefined1 local_res8 [8];
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> local_78;
  FString local_68;
  FString local_58;
  FLiveLinkStructPropertyBindings local_48;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  CreatePropertyList(this,param_1,true,&local_68);
  pUVar8 = TSubclassOf<ULiveLinkRole>::GetDefaultObject
                     ((TSubclassOf<ULiveLinkRole> *)&this->_padding_);
  pUVar9 = (UScriptStruct *)(**(code **)(*(longlong *)pUVar8 + 0x2b8))(pUVar8);
  iVar2 = (int)this->_padding_;
  this_00 = (FLiveLinkPropertyData *)this->_padding_;
  pFVar13 = this_00 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FLiveLinkPropertyData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar13) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      return;
    }
    pFVar10 = ::FName::ToString(&this_00->PropertyName,&local_58);
    FVar3 = this_00->PropertyName;
    ::FString::FString(&local_48.PropertyPath,pFVar10);
    local_48.PropertyName = FVar3;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar11 = FLiveLinkStructPropertyBindings::GetProperty(&local_48,pUVar9);
    if ((pFVar11 == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PropertyPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSubSectionProperties.cpp"
                           ,0x9c,L""), bVar6)) break;
    LiveLinkPropertiesUtils::CreatePropertyHandler(&local_78,pUVar9,this_00);
    if ((local_78.Object == (IMovieSceneLiveLinkPropertyHandler *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)((longlong)*local_78.Object + 8))(local_78.Object,pUVar9,pFVar11->ArrayDim);
    pTVar4 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
             (this->PropertyHandlers).AllocatorInstance.Data;
    if (((pTVar4 <= &local_78) && (&local_78 < pTVar4 + (this->PropertyHandlers).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->PropertyHandlers).ArrayNum;
    piVar1 = &(this->PropertyHandlers).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PropertyHandlers).AllocatorInstance,piVar1);
    }
    (this->PropertyHandlers).ArrayNum = iVar7 + 1;
    pFVar12 = (this->PropertyHandlers).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(IMovieSceneLiveLinkPropertyHandler **)pFVar12 = local_78.Object;
    *(TReferenceControllerBase<1> **)(pFVar12 + 8) =
         local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (local_48.PropertyPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.PropertyPath.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// CreatePropertyList @ 14d0a6a80

void __thiscall
UMovieSceneLiveLinkSubSectionProperties::CreatePropertyList
          (UMovieSceneLiveLinkSubSectionProperties *this,UScriptStruct *param_1,bool param_2,
          FString *param_3)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  EClassCastFlags EVar2;
  FField *pFVar3;
  FField *pFVar4;
  bool bVar5;
  FNameEntryId FVar6;
  int iVar7;
  FString *pFVar8;
  size_t sVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ForAnyElementType FVar10;
  longlong lVar11;
  wchar_t *_Str;
  FName *pFVar12;
  undefined1 local_res10 [8];
  FString local_98;
  FName local_88;
  TFieldIterator<FProperty> local_80;
  uint local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  FName local_48;
  FString local_40;
  
  if (param_1 == (UScriptStruct *)0x0) {
    local_80.Field = (FField *)0x0;
  }
  else {
    local_80.Field = (FField *)param_1->_padding_;
  }
  local_80.InterfaceIndex = -1;
  local_80.bIncludeSuper = true;
  local_80.bIncludeDeprecated = false;
  local_80.bIncludeInterface = false;
  local_80.Struct = (UStruct *)param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_80);
  pFVar4 = local_80.Field;
  do {
    if (pFVar4 == (FField *)0x0) {
      return;
    }
    if (((!param_2) || (((ulonglong)pFVar4[1].ClassPrivate & 0x200000000) != 0)) &&
       (pFVar4 != (FField *)0x0)) {
      local_98.Data.ArrayNum = (param_3->Data).ArrayNum;
      lVar11 = (longlong)local_98.Data.ArrayNum;
      _Src = (param_3->Data).AllocatorInstance.Data;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.Field = pFVar4;
      if (local_98.Data.ArrayNum == 0) {
        local_98.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                   local_98.Data.ArrayNum,&local_98.Data.ArrayMax);
        memcpy(local_98.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
      }
      if (1 < local_98.Data.ArrayNum) {
        ::FString::AppendChars(&local_98,".",1);
      }
      bVar5 = IsThisNotNull(pFVar4,"FField::GetFName");
      if (bVar5) {
        local_88 = pFVar4->NamePrivate;
      }
      else {
        local_88.ComparisonIndex.Value = 0;
        local_88.Number = 0;
      }
      pFVar8 = ::FName::ToString(&local_88,&local_40);
      if ((pFVar8->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      sVar9 = wcslen(_Str);
      ::FString::AppendChars(&local_98,_Str,(int)sVar9);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      EVar2 = pFVar4->ClassPrivate->CastFlags;
      if (((((EVar2 >> 8 & 1) == 0) && (-1 < (char)(byte)EVar2)) &&
          (((EVar2 >> 0xe & 1) == 0 && ((((byte)EVar2 >> 6 & 1) == 0 && ((EVar2 >> 0x11 & 1) == 0)))
           ))) && ((EVar2 >> 0x30 & 1) == 0)) {
        if (((EVar2 >> 0x14 & 1) != 0) && (pFVar4 != (FField *)0x0)) {
          pFVar3 = (pFVar4[2].Owner.Container.Field)->Next;
          FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
          uStack_64 = 0;
          local_68 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
          if (pFVar3 != (FField *)(ulonglong)local_68) {
            pFVar3 = (pFVar4[2].Owner.Container.Field)->Next;
            FVar6 = FNameEntryId::FromValidEName((EName)local_50);
            uStack_5c = 0;
            local_60 = *(uint *)CONCAT44(extraout_var_00,FVar6.Value);
            if (pFVar3 != (FField *)(ulonglong)local_60) {
              pFVar3 = (pFVar4[2].Owner.Container.Field)->Next;
              FVar6 = FNameEntryId::FromValidEName((EName)local_4c);
              uStack_54 = 0;
              local_58 = *(uint *)CONCAT44(extraout_var_01,FVar6.Value);
              if (pFVar3 != (FField *)(ulonglong)local_58) goto LAB_14d0a6cca;
            }
          }
          goto LAB_14d0a6cf4;
        }
LAB_14d0a6cca:
        if ((((uint)(int)pFVar4->ClassPrivate->CastFlags >> 0x14 & 1) != 0) &&
           (pFVar4 != (FField *)0x0)) {
          CreatePropertyList(this,(UScriptStruct *)pFVar4[2].Owner.Container.Field,false,&local_98);
        }
      }
      else {
LAB_14d0a6cf4:
        iVar7 = (int)this->_padding_;
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x858,(ForAnyElementType *)&this->_padding_,piVar1);
        }
        *(int *)&this->_padding_ = iVar7 + 1;
        pFVar12 = (FName *)(this->_padding_ + (longlong)iVar7 * 0x58);
        DefaultConstructItems<FLiveLinkPropertyData,int>(pFVar12,1);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar10.Data = local_98.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_48,(wchar_t *)FVar10.Data);
        *pFVar12 = local_48;
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    local_80.Field = pFVar4->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_80);
    pFVar4 = local_80.Field;
  } while( true );
}

// FinalizeSection @ 14d0aea90

void __thiscall
UMovieSceneLiveLinkSubSectionProperties::FinalizeSection
          (UMovieSceneLiveLinkSubSectionProperties *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PropertyHandlers).ArrayNum;
  pFVar4 = (this->PropertyHandlers).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PropertyHandlers).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
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
    (**(code **)(**(longlong **)pFVar4 + 0x18))(*(longlong **)pFVar4,param_1,param_2);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// GetPrivateStaticClass @ 14d0b2980

UClass * __cdecl UMovieSceneLiveLinkSubSectionProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSectionProperties",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSubSectionProperties,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSubSectionProperties>
               ,InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionProperties>,local_res8,
               UMovieSceneLiveLinkSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.InnerSingleton;
}

// Initialize @ 14d0b3430

void __thiscall
UMovieSceneLiveLinkSubSectionProperties::Initialize
          (UMovieSceneLiveLinkSubSectionProperties *this,TSubclassOf<ULiveLinkRole> param_1,
          TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *param_2)

{
  ULiveLinkRole *pUVar1;
  UScriptStruct *pUVar2;
  UObject *local_res8;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  UMovieSceneLiveLinkSubSection::Initialize
            ((UMovieSceneLiveLinkSubSection *)this,(TSubclassOf<ULiveLinkRole>)&local_res8,param_2);
  pUVar1 = TSubclassOf<ULiveLinkRole>::GetDefaultObject
                     ((TSubclassOf<ULiveLinkRole> *)&this->_padding_);
  pUVar2 = (UScriptStruct *)(**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1);
  CreatePropertiesChannel(this,pUVar2);
  return;
}

// IsPropertyTypeSupported @ 14d0b42a0

bool __thiscall
UMovieSceneLiveLinkSubSectionProperties::IsPropertyTypeSupported
          (UMovieSceneLiveLinkSubSectionProperties *this,FProperty *param_1)

{
  ulonglong uVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined1 local_res10 [24];
  
  if (param_1 == (FProperty *)0x0) {
    return false;
  }
  uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if ((((((uVar1 >> 8 & 1) == 0) && (-1 < (char)uVar1)) && ((uVar1 >> 0xe & 1) == 0)) &&
      (((uVar1 & 0x40) == 0 && ((uVar1 >> 0x11 & 1) == 0)))) && ((uVar1 >> 0x30 & 1) == 0)) {
    if ((uVar1 >> 0x14 & 1) == 0) {
      return false;
    }
    uVar1 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
    FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
    if (((uVar1 != *(uint *)CONCAT44(extraout_var,FVar2.Value)) &&
        (uVar1 = *(ulonglong *)(param_1[1]._padding_ + 0x18),
        FVar2 = FNameEntryId::FromValidEName((EName)local_res10),
        uVar1 != *(uint *)CONCAT44(extraout_var_00,FVar2.Value))) &&
       (uVar1 = *(ulonglong *)(param_1[1]._padding_ + 0x18),
       FVar2 = FNameEntryId::FromValidEName((EName)local_res10),
       uVar1 != *(uint *)CONCAT44(extraout_var_01,FVar2.Value))) {
      return false;
    }
  }
  return true;
}

// IsRoleSupported @ 14d0b4430

bool __thiscall
UMovieSceneLiveLinkSubSectionProperties::IsRoleSupported
          (UMovieSceneLiveLinkSubSectionProperties *this,TSubclassOf<ULiveLinkRole> *param_1)

{
  return true;
}

// RecordFrame @ 14d0b5dc0

void __thiscall
UMovieSceneLiveLinkSubSectionProperties::RecordFrame
          (UMovieSceneLiveLinkSubSectionProperties *this,FFrameNumber param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  UClass *pUVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *local_res18;
  uint local_res20;
  
  local_res20 = (this->PropertyHandlers).ArrayNum;
  uVar6 = (ulonglong)(int)local_res20;
  pFVar10 = (this->PropertyHandlers).AllocatorInstance.Data;
  pFVar12 = pFVar10 + uVar6 * 0x10;
  local_res10[0] = param_1.Value;
  local_res18 = param_2;
  do {
    pFVar4 = local_res18;
    if ((this->PropertyHandlers).ArrayNum != (int)uVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    if (*(longlong *)pFVar10 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)pFVar10;
    pcVar3 = *(code **)(*plVar2 + 0x10);
    uVar7 = (**(code **)((pFVar4->WrappedStruct)._padding_ + 0x10))(pFVar4);
    pUVar8 = (UClass *)this->_padding_;
    pUVar11 = (UObject *)0x0;
    if (pUVar8 != (UClass *)0x0) {
      if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar8);
      }
      pUVar11 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar11 != (UObject *)0x0) {
        pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
        iVar1 = (int)pUVar8->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar8->_padding_)) goto LAB_14d0b5ed5;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                         ,0x93,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
LAB_14d0b5ed5:
    uVar9 = (**(code **)(*(longlong *)pUVar11 + 0x2b8))(pUVar11);
    (*pcVar3)(plVar2,local_res10,uVar9,uVar7);
    uVar6 = (ulonglong)local_res20;
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// StaticRegisterNativesUMovieSceneLiveLinkSubSectionProperties @ 14d0b7ff0

void __cdecl
UMovieSceneLiveLinkSubSectionProperties::
StaticRegisterNativesUMovieSceneLiveLinkSubSectionProperties(void)

{
  return;
}

