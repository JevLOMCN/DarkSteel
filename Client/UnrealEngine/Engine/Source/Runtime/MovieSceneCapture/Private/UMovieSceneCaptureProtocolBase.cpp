// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 38

// StaticClass @ 146bd2cf0

UClass * __cdecl UMovieSceneCaptureProtocolBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCaptureProtocolBase",
               &Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneCaptureProtocolBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneCaptureProtocolBase>,
               InternalVTableHelperCtorCaller<UMovieSceneCaptureProtocolBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton;
}

// UMovieSceneCaptureProtocolBase @ 146bd8d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UMovieSceneCaptureProtocolBase * __thiscall
UMovieSceneCaptureProtocolBase::UMovieSceneCaptureProtocolBase
          (UMovieSceneCaptureProtocolBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  (this->InitSettings).bIsSet = false;
  return this;
}

// UMovieSceneCaptureProtocolBase @ 146bd8d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UMovieSceneCaptureProtocolBase * __thiscall
UMovieSceneCaptureProtocolBase::UMovieSceneCaptureProtocolBase
          (UMovieSceneCaptureProtocolBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->State = Idle;
  this->bFrameRequested[0] = false;
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  (this->InitSettings).bIsSet = false;
  this->bFrameRequested[1] = false;
  this->CaptureHost = (ICaptureProtocolHost *)0x0;
  return this;
}

// ~UMovieSceneCaptureProtocolBase @ 146bd9830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::~UMovieSceneCaptureProtocolBase
          (UMovieSceneCaptureProtocolBase *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((this->InitSettings).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->InitSettings).TypedValue.SceneViewport.SharedReferenceCount.
               ReferenceController);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddFormatMappings @ 146bdb1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::AddFormatMappings
          (UMovieSceneCaptureProtocolBase *this,
          TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146bdb1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x300))();
  return;
}

// AddFormatMappingsImpl @ 146bdb4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::AddFormatMappingsImpl
          (UMovieSceneCaptureProtocolBase *this,
          TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          *param_1)

{
  return;
}

// BeginFinalize @ 146bdb820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCaptureProtocolBase::BeginFinalize(UMovieSceneCaptureProtocolBase *this)

{
  if (this->State != Idle) {
    if (this->State == Capturing) {
      (**(code **)(this->_padding_ + 0x2e0))();
    }
    this->State = Finalizing;
                    /* WARNING: Could not recover jumptable at 0x000146bdb84d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2e8))(this);
    return;
  }
  return;
}

// BeginFinalizeImpl @ 146bdbb10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::BeginFinalizeImpl(UMovieSceneCaptureProtocolBase *this)

{
  return;
}

// CanWriteToFile @ 146bdbcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCaptureProtocolBase::CanWriteToFile
          (UMovieSceneCaptureProtocolBase *this,wchar_t *param_1,bool param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bdbcd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x318))();
  return (bool)uVar1;
}

// CanWriteToFileImpl @ 146bdbce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCaptureProtocolBase::CanWriteToFileImpl
          (UMovieSceneCaptureProtocolBase *this,wchar_t *param_1,bool param_2)

{
  IFileManager *pIVar1;
  longlong lVar2;
  
  if (!param_2) {
    pIVar1 = IFileManager::Get();
    lVar2 = (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,param_1);
    if (lVar2 != -1) {
      return false;
    }
  }
  return true;
}

// CaptureFrame @ 146bdbde0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::CaptureFrame
          (UMovieSceneCaptureProtocolBase *this,FFrameMetrics *param_1)

{
  if (this->State == Capturing) {
    this->bFrameRequested[(uint)GFrameCounter & 1] = true;
                    /* WARNING: Could not recover jumptable at 0x000146bdbdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2d8))();
    return;
  }
  return;
}

// CaptureFrameImpl @ 146bdbfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::CaptureFrameImpl
          (UMovieSceneCaptureProtocolBase *this,FFrameMetrics *param_1)

{
  return;
}

// EnsureFileWritableImpl @ 146bdd600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::EnsureFileWritableImpl
          (UMovieSceneCaptureProtocolBase *this,FString *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  IFileManager *pIVar5;
  longlong lVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FTextFormat local_88;
  FText local_78;
  FFormatArgumentValue local_68;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  FPaths::GetPath(&local_98,param_1);
  pIVar5 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar12.Data = local_98.Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar5 + 0x58))(pIVar5,FVar12.Data);
  if (cVar3 == '\0') {
    pIVar5 = IFileManager::Get();
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar12.Data = local_98.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5,FVar12.Data,0);
  }
  lVar6 = (**(code **)*this->CaptureHost)();
  if (*(char *)(lVar6 + 0x28) != '\0') {
    while( true ) {
      pIVar5 = IFileManager::Get();
      if ((param_1->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      lVar6 = (**(code **)((longlong)*pIVar5 + 0x110))(pIVar5,pwVar14);
      if (lVar6 == -1) break;
      this_00 = FPlatformFileManager::Get();
      pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
      if ((param_1->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar7 + 0x88))(pIVar7,pwVar14);
      if (cVar3 != '\0') break;
      pFVar8 = FText::FromString(&local_28,param_1);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"MovieSceneCaptureProtocol",L"UnableToRemoveFile_Format",
                          L"The destination file \'{0}\' could not be deleted because it\'s in use by another application.\n\nPlease close this application before continuing."
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_18,pFVar9,Default);
      local_68.Type = Text;
      FText::FText((FText *)&local_68.TextValue,pFVar8);
      if ((local_68.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_a8.AllocatorInstance.Data,&local_68,1);
      local_88.TextFormatData.Object = (pFVar10->TextFormatData).Object;
      local_88.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_88.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_78,&local_88,&local_a8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar1 = (pFVar8->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"MovieSceneCaptureProtocol",L"UnableToRemoveFile",
                          L"Unable to remove file");
      pFVar11 = FText::ToString(pFVar8);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = FText::ToString(&local_78);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar13,pwVar14);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// Finalize @ 146bddd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCaptureProtocolBase::Finalize(UMovieSceneCaptureProtocolBase *this)

{
  EMovieSceneCaptureProtocolState EVar1;
  
  EVar1 = this->State;
  if ((EVar1 != Finalizing) && (EVar1 != Idle)) {
    if (EVar1 == Capturing) {
      (**(code **)(this->_padding_ + 0x2e0))();
    }
    this->State = Finalizing;
    (**(code **)(this->_padding_ + 0x2e8))(this);
  }
  if (this->State == Finalizing) {
    this->State = Idle;
                    /* WARNING: Could not recover jumptable at 0x000146bddd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2f8))(this);
    return;
  }
  return;
}

// FinalizeImpl @ 146bde2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCaptureProtocolBase::FinalizeImpl(UMovieSceneCaptureProtocolBase *this)

{
  return;
}

// GenerateFilenameImpl @ 146bdf5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __thiscall
UMovieSceneCaptureProtocolBase::GenerateFilenameImpl
          (UMovieSceneCaptureProtocolBase *this,FString *__return_storage_ptr__,
          FFrameMetrics *param_1,wchar_t *param_2,FString *param_3)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  wchar_t *pwVar6;
  int iVar7;
  longlong lVar8;
  FString local_78;
  FString local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  puVar4 = (undefined8 *)(**(code **)*this->CaptureHost)();
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = *(int *)(puVar4 + 1);
  lVar8 = (longlong)local_78.Data.ArrayNum;
  _Src = (void *)*puVar4;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  FPaths::NormalizeFilename(&local_78);
  if (param_3 == (FString *)0x0) {
    lVar8 = (**(code **)*this->CaptureHost)();
    param_3 = (FString *)(lVar8 + 0x18);
  }
  puVar4 = (undefined8 *)
           (**(code **)((longlong)*this->CaptureHost + 0x20))
                     (this->CaptureHost,&local_48,param_3,param_1);
  pTVar5 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
           (**(code **)((longlong)*this->CaptureHost + 0x20))
                     (this->CaptureHost,&local_38,&local_78,param_1);
  iVar7 = *(int *)(puVar4 + 1) + -1;
  if (*(int *)(puVar4 + 1) == 0) {
    iVar7 = 0;
  }
  if ((pTVar5->ArrayNum != 0) || (iVar3 = 2, iVar7 == -1)) {
    iVar3 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,pTVar5,iVar7 + iVar3);
  ::FString::PathAppend((FString *)&local_58,(wchar_t *)*puVar4,iVar7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(__return_storage_ptr__,(FString *)&local_58,param_2);
  lVar8 = (**(code **)*this->CaptureHost)();
  if ((__return_storage_ptr__->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
  }
  cVar2 = (**(code **)(this->_padding_ + 0x318))(this,pwVar6,*(undefined1 *)(lVar8 + 0x28));
  while (cVar2 == '\0') {
    ::FString::PrintfImpl(&local_38,L"_(%d)");
    ::FString::ConcatFF(&local_48,(FString *)&local_58,&local_38);
    ::FString::ConcatFC(&local_68,&local_48,param_2);
    if (__return_storage_ptr__ != &local_68) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    lVar8 = (**(code **)*this->CaptureHost)();
    if ((__return_storage_ptr__->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    cVar2 = (**(code **)(this->_padding_ + 0x318))(this,pwVar6,*(undefined1 *)(lVar8 + 0x28));
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146be0dc0

UClass * __cdecl UMovieSceneCaptureProtocolBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCaptureProtocolBase",
               &Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneCaptureProtocolBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneCaptureProtocolBase>,
               InternalVTableHelperCtorCaller<UMovieSceneCaptureProtocolBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton;
}

// GetWorld @ 146be1480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UMovieSceneCaptureProtocolBase::GetWorld(UMovieSceneCaptureProtocolBase *this)

{
  TOptional<FCaptureProtocolInitSettings> *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FSceneViewport *pFVar4;
  
  if (((this->InitSettings).bIsSet != false) &&
     (this_00 = &this->InitSettings,
     (this->InitSettings).TypedValue.SceneViewport.Object != (FSceneViewport *)0x0)) {
    if ((this->InitSettings).bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UWorld *)(*pcVar1)();
        return pUVar3;
      }
    }
    if ((this_00->TypedValue).SceneViewport.Object == (FSceneViewport *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UWorld *)(*pcVar1)();
        return pUVar3;
      }
    }
    if (((this_00->TypedValue).SceneViewport.Object)->_padding_ != 0) {
      if ((this->InitSettings).bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UWorld *)(*pcVar1)();
          return pUVar3;
        }
      }
      pFVar4 = TSharedPtr<FSceneViewport,1>::operator->((TSharedPtr<FSceneViewport,1> *)this_00);
                    /* WARNING: Could not recover jumptable at 0x000146be1541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar3 = (UWorld *)(**(code **)(*(longlong *)pFVar4->_padding_ + 0x30))();
      return pUVar3;
    }
  }
  return (UWorld *)0x0;
}

// HasFinishedProcessing @ 146be1570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCaptureProtocolBase::HasFinishedProcessing(UMovieSceneCaptureProtocolBase *this)

{
  char cVar1;
  
  if (this->bFrameRequested[(uint)GFrameCounter & 1] == false) {
    cVar1 = (**(code **)(this->_padding_ + 0x2f0))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// HasFinishedProcessingImpl @ 146be1720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCaptureProtocolBase::HasFinishedProcessingImpl(UMovieSceneCaptureProtocolBase *this)

{
  return true;
}

// OnLoadConfig @ 146be3d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::OnLoadConfig
          (UMovieSceneCaptureProtocolBase *this,FMovieSceneCaptureSettings *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146be3d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x310))();
  return;
}

// OnLoadConfigImpl @ 146be4090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::OnLoadConfigImpl
          (UMovieSceneCaptureProtocolBase *this,FMovieSceneCaptureSettings *param_1)

{
  return;
}

// OnReleaseConfig @ 146be47b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::OnReleaseConfig
          (UMovieSceneCaptureProtocolBase *this,FMovieSceneCaptureSettings *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146be47b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x308))();
  return;
}

// OnReleaseConfigImpl @ 146be4940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::OnReleaseConfigImpl
          (UMovieSceneCaptureProtocolBase *this,FMovieSceneCaptureSettings *param_1)

{
  return;
}

// PauseCaptureImpl @ 146be50d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCaptureProtocolBase::PauseCaptureImpl(UMovieSceneCaptureProtocolBase *this)

{
  return;
}

// PreTick @ 146be51d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCaptureProtocolBase::PreTick(UMovieSceneCaptureProtocolBase *this)

{
  this->bFrameRequested[(int)GFrameCounter - 1U & 1] = false;
                    /* WARNING: Could not recover jumptable at 0x000146be51e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))();
  return;
}

// PreTickImpl @ 146be5200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCaptureProtocolBase::PreTickImpl(UMovieSceneCaptureProtocolBase *this)

{
  return;
}

// Setup @ 146be7720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCaptureProtocolBase::Setup
          (UMovieSceneCaptureProtocolBase *this,FCaptureProtocolInitSettings *param_1,
          ICaptureProtocolHost *param_2)

{
  EMovieSceneCaptureProtocolState EVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  
  if ((TOptional<FCaptureProtocolInitSettings> *)param_1 != &this->InitSettings) {
    if ((this->InitSettings).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->InitSettings).TypedValue.SceneViewport.SharedReferenceCount.
                 ReferenceController);
    }
    (this->InitSettings).TypedValue.SceneViewport.Object = (param_1->SceneViewport).Object;
    pTVar2 = (param_1->SceneViewport).SharedReferenceCount.ReferenceController;
    (this->InitSettings).TypedValue.SceneViewport.SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    (this->InitSettings).TypedValue.DesiredSize.field0_0x0 = (param_1->DesiredSize).field0_0x0;
    (this->InitSettings).bIsSet = true;
  }
  this->CaptureHost = param_2;
  if (this->State == Capturing) {
    (**(code **)(this->_padding_ + 0x2e0))(this);
    this->State = Finalizing;
    (**(code **)(this->_padding_ + 0x2e8))(this);
  }
  else if (this->State != Finalizing) goto LAB_146be781a;
  EVar1 = this->State;
  if ((EVar1 != Finalizing) && (EVar1 != Idle)) {
    if (EVar1 == Capturing) {
      (**(code **)(this->_padding_ + 0x2e0))(this);
    }
    this->State = Finalizing;
    (**(code **)(this->_padding_ + 0x2e8))(this);
  }
  if (this->State == Finalizing) {
    this->State = Idle;
    (**(code **)(this->_padding_ + 0x2f8))(this);
  }
LAB_146be781a:
  this->State = Idle;
  cVar3 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (cVar3 == '\0') {
    return false;
  }
  this->State = Initialized;
  return true;
}

// SetupImpl @ 146be81d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall UMovieSceneCaptureProtocolBase::SetupImpl(UMovieSceneCaptureProtocolBase *this)

{
  return true;
}

// StartCapture @ 146be8910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall UMovieSceneCaptureProtocolBase::StartCapture(UMovieSceneCaptureProtocolBase *this)

{
  EMovieSceneCaptureProtocolState EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  EVar1 = this->State;
  if (EVar1 == Idle) {
    return false;
  }
  if (EVar1 != Capturing) {
    if ((EVar1 != Initialized) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2042168756389543843>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\MovieSceneCaptureProtocolBase.cpp"
                           ,0x5d,"State == EMovieSceneCaptureProtocolState::Initialized"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this->State = Capturing;
    cVar5 = (**(code **)(this->_padding_ + 0x2d0))(this);
    if (cVar5 == '\0') {
      this->State = Initialized;
      return false;
    }
  }
  return true;
}

// StartCaptureImpl @ 146be8ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCaptureProtocolBase::StartCaptureImpl(UMovieSceneCaptureProtocolBase *this)

{
  return true;
}

// StaticRegisterNativesUMovieSceneCaptureProtocolBase @ 146be8df0

void __cdecl
UMovieSceneCaptureProtocolBase::StaticRegisterNativesUMovieSceneCaptureProtocolBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 146be91e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCaptureProtocolBase::Tick(UMovieSceneCaptureProtocolBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146be91e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))();
  return;
}

// TickImpl @ 146be9300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCaptureProtocolBase::TickImpl(UMovieSceneCaptureProtocolBase *this)

{
  return;
}

// WarmUp @ 146be9cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCaptureProtocolBase::WarmUp(UMovieSceneCaptureProtocolBase *this)

{
  if (this->State == Capturing) {
    (**(code **)(this->_padding_ + 0x2e0))();
  }
  if ((this->State != Capturing) && (this->State != Initialized)) {
    return;
  }
  this->State = Initialized;
                    /* WARNING: Could not recover jumptable at 0x000146be9cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// WarmUpImpl @ 146be9d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCaptureProtocolBase::WarmUpImpl(UMovieSceneCaptureProtocolBase *this)

{
  return;
}

// execGetState @ 146beb720

void __cdecl
UMovieSceneCaptureProtocolBase::execGetState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 2);
  return;
}

// execIsCapturing @ 146beb7a0

void __cdecl
UMovieSceneCaptureProtocolBase::execIsCapturing(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(char *)(param_1 + 2) != '\x02') &&
     ((&param_1[2].field_0x1)[(uint)GFrameCounter & 1] != '\x01')) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

