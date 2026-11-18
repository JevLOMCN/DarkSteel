// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 16

// StaticClass @ 146bd23e0

UClass * __cdecl UUserDefinedImageCaptureProtocol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"UserDefinedImageCaptureProtocol",
               &Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUUserDefinedImageCaptureProtocol,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UUserDefinedImageCaptureProtocol>
               ,InternalVTableHelperCtorCaller<UUserDefinedImageCaptureProtocol>,local_res8,
               UUserDefinedCaptureProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.InnerSingleton;
}

// UUserDefinedImageCaptureProtocol @ 146bd8f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUserDefinedImageCaptureProtocol * __thiscall
UUserDefinedImageCaptureProtocol::UUserDefinedImageCaptureProtocol
          (UUserDefinedImageCaptureProtocol *this,FVTableHelper *param_1)

{
  UUserDefinedCaptureProtocol::UUserDefinedCaptureProtocol
            ((UUserDefinedCaptureProtocol *)this,param_1);
  this->_padding_ = (longlong)&___7UUserDefinedImageCaptureProtocol__6B_;
  return this;
}

// UUserDefinedImageCaptureProtocol @ 146bd8f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUserDefinedImageCaptureProtocol * __thiscall
UUserDefinedImageCaptureProtocol::UUserDefinedImageCaptureProtocol
          (UUserDefinedImageCaptureProtocol *this,FObjectInitializer *param_1)

{
  UUserDefinedCaptureProtocol::UUserDefinedCaptureProtocol
            ((UUserDefinedCaptureProtocol *)this,param_1);
  this->Format = EXR;
  this->bEnableCompression = false;
  this->_padding_ = (longlong)&___7UUserDefinedImageCaptureProtocol__6B_;
  this->CompressionQuality = 100;
  return this;
}

// ~UUserDefinedImageCaptureProtocol @ 146bd9970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UUserDefinedImageCaptureProtocol::~UUserDefinedImageCaptureProtocol
          (UUserDefinedImageCaptureProtocol *this)

{
  this->_padding_ = (longlong)&___7UUserDefinedImageCaptureProtocol__6B_;
  UUserDefinedCaptureProtocol::~UUserDefinedCaptureProtocol((UUserDefinedCaptureProtocol *)this);
  return;
}

// GenerateFilename @ 146bdf3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __thiscall
UUserDefinedImageCaptureProtocol::GenerateFilename
          (UUserDefinedImageCaptureProtocol *this,FString *__return_storage_ptr__,
          FFrameMetrics *param_1)

{
  EDesiredImageFormat EVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (this->_padding_ == 0) {
    FFrame::KismetExecutionMessage
              (L"Capture protocol is not currently set up to generate filenames.",Error,(FName)0x0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  EVar1 = this->Format;
  if (EVar1 == PNG) {
    pwVar2 = L".png";
  }
  else if (EVar1 == JPG) {
    pwVar2 = L".jpg";
  }
  else if (EVar1 == BMP) {
    pwVar2 = L".bmp";
  }
  else {
    pwVar2 = L".exr";
  }
  (**(code **)(this->_padding_ + 800))(this,&local_18,param_1,pwVar2,0);
  UMovieSceneCaptureProtocolBase::EnsureFileWritableImpl
            ((UMovieSceneCaptureProtocolBase *)this,&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GenerateFilenameForBuffer @ 146bdf490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __thiscall
UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer
          (UUserDefinedImageCaptureProtocol *this,FString *__return_storage_ptr__,UTexture *param_1,
          FCapturedPixelsID *param_2)

{
  EDesiredImageFormat EVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (this->_padding_ == 0) {
    FFrame::KismetExecutionMessage
              (L"Capture protocol is not currently set up to generate filenames.",Error,(FName)0x0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  EVar1 = this->Format;
  pwVar2 = L".ext";
  if (EVar1 == PNG) {
    pwVar2 = L".png";
  }
  else if (EVar1 == JPG) {
    pwVar2 = L".jpg";
  }
  else if (EVar1 == BMP) {
    pwVar2 = L".bmp";
  }
  else if (EVar1 == EXR) {
    pwVar2 = L".exr";
  }
  this->_padding_ = (longlong)param_2;
  (**(code **)(this->_padding_ + 800))
            (this,&local_18,(undefined1 *)((longlong)&this->_padding_ + 4),pwVar2,0);
  UMovieSceneCaptureProtocolBase::EnsureFileWritableImpl
            ((UMovieSceneCaptureProtocolBase *)this,&local_18);
  this->_padding_ = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GenerateFilenameForCurrentFrame @ 146bdf590

FString * __thiscall
UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame
          (UUserDefinedImageCaptureProtocol *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x338))
            (this,__return_storage_ptr__,(undefined1 *)((longlong)&this->_padding_ + 4));
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146be10b0

UClass * __cdecl UUserDefinedImageCaptureProtocol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"UserDefinedImageCaptureProtocol",
               &Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUUserDefinedImageCaptureProtocol,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UUserDefinedImageCaptureProtocol>
               ,InternalVTableHelperCtorCaller<UUserDefinedImageCaptureProtocol>,local_res8,
               UUserDefinedCaptureProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.InnerSingleton;
}

// OnFileWritten @ 146be3930

void __thiscall
UUserDefinedImageCaptureProtocol::OnFileWritten(UUserDefinedImageCaptureProtocol *this)

{
  LOCK();
  *(int *)&this->_padding_ = (int)this->_padding_ + -1;
  UNLOCK();
  return;
}

// OnLoadConfigImpl @ 146be40a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUserDefinedImageCaptureProtocol::OnLoadConfigImpl
          (UUserDefinedImageCaptureProtocol *this,FMovieSceneCaptureSettings *param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  longlong lVar2;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->OutputFormat).Data.ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->OutputFormat).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  iVar1 = ::FString::Find(&local_18,L"{frame}",7,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(&local_18,L"{shot_frame}",0xc,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      ::FString::AppendChars(&local_18,L".{frame}",8);
      iVar1 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar1 = 0;
      }
      ::FString::AssignRange
                (&param_1->OutputFormat,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
      if (3 < (byte)LogMovieSceneCapture._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneCapture);
      }
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnReleaseConfigImpl @ 146be4950

void __thiscall
UUserDefinedImageCaptureProtocol::OnReleaseConfigImpl
          (UUserDefinedImageCaptureProtocol *this,FMovieSceneCaptureSettings *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  this_00 = &param_1->OutputFormat;
  pFVar2 = ::FString::Replace(this_00,&local_18,L".{frame}",L"",IgnoreCase);
  if (this_00 != pFVar2) {
    pFVar1 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->OutputFormat).Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->OutputFormat).Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUUserDefinedImageCaptureProtocol @ 146be8e90

void __cdecl
UUserDefinedImageCaptureProtocol::StaticRegisterNativesUUserDefinedImageCaptureProtocol(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WriteImageToDisk @ 146be9d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UUserDefinedImageCaptureProtocol::WriteImageToDisk
          (UUserDefinedImageCaptureProtocol *this,FCapturedPixels *param_1,
          FCapturedPixelsID *param_2,FFrameMetrics *param_3,bool param_4)

{
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar1;
  FImagePixelData *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  EImageFormat EVar9;
  uint uVar10;
  FMessageLog *pFVar11;
  FImagePixelData *pFVar12;
  FText *pFVar13;
  FString *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  FImageWriteTask *pFVar18;
  undefined8 *puVar19;
  FName *pFVar20;
  FModuleManager *this_00;
  IModuleInterface *pIVar21;
  longlong *plVar22;
  FImageWriteTask *this_01;
  FImagePixelData **ppFVar23;
  bool bVar24;
  undefined1 auStack_268 [32];
  FImagePixelData *local_248;
  FWeakObjectPtr local_240;
  FImagePixelData *local_238;
  FImageWriteTask *local_230;
  FName local_228;
  FName local_220;
  UUserDefinedImageCaptureProtocol *local_218;
  TSharedPtr<FCulture,1> local_210;
  TSharedPtr<FCulture,1> local_200;
  longlong local_1f0;
  TReferenceControllerBase<1> *local_1e8;
  FName local_1e0;
  TSharedRef<FTokenizedMessage,1> local_1d8;
  FText local_1c8;
  FText local_1b8;
  FString local_1a8;
  TSharedRef<FTokenizedMessage,1> local_198;
  FText local_188;
  FText local_178;
  FString local_168;
  void *local_158 [2];
  FText local_148;
  FText local_138;
  FTextFormat local_128;
  FText local_118;
  FText local_108;
  FTextFormat local_f8;
  FMessageLog local_e8;
  FMessageLog local_b8;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_268;
  this_01 = (FImageWriteTask *)0x0;
  local_240 = (FWeakObjectPtr)((ulonglong)local_240 & 0xffffffff00000000);
  pFVar12 = (param_1->ImageData).Object;
  if (pFVar12 == (FImagePixelData *)0x0) {
    return;
  }
  if (pFVar12->BitDepth != '\b') {
    if (this->Format == BMP) {
      ::FName::FName(&local_228,"PIE");
      pFVar11 = FMessageLog::FMessageLog(&local_e8,&local_228);
      local_210.Object = (FCulture *)0x0;
      local_210.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar12 = TSharedPtr<FImagePixelData,1>::operator->(&param_1->ImageData);
      pFVar13 = FText::AsNumber(&local_148,pFVar12->BitDepth,(FNumberFormattingOptions *)0x0,
                                &local_210);
      pFVar14 = FCapturedPixelsID::ToString(param_2,&local_1a8);
      pFVar15 = FText::FromString(&local_138,pFVar14);
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_1b8,L"UserDefinedImageCaptureProtocol",L"InvalidBMPExport",
                           L"Unable to write the specified render target (stream \'{0}\' is {1}bit) as BMP. BMPs must be supplied 8bit render targets."
                          );
      pFVar17 = FTextFormat::FTextFormat(&local_128,pFVar16,Default);
      pFVar13 = FText::Format<FText,FText>(&local_1c8,pFVar17,pFVar15,pFVar13);
      FMessageLog::Warning(pFVar11,&local_1d8,pFVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
      if (local_1c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
      }
      if (local_1b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_210.SharedReferenceCount.ReferenceController);
      FMessageLog::~FMessageLog(&local_e8);
      return;
    }
    if (this->Format == JPG) {
      ::FName::FName(&local_220,"PIE");
      pFVar11 = FMessageLog::FMessageLog(&local_b8,&local_220);
      local_200.Object = (FCulture *)0x0;
      local_200.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar12 = TSharedPtr<FImagePixelData,1>::operator->(&param_1->ImageData);
      pFVar13 = FText::AsNumber(&local_118,pFVar12->BitDepth,(FNumberFormattingOptions *)0x0,
                                &local_200);
      pFVar14 = FCapturedPixelsID::ToString(param_2,&local_168);
      pFVar15 = FText::FromString(&local_108,pFVar14);
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_178,L"UserDefinedImageCaptureProtocol",L"InvalidJPGExport",
                           L"Unable to write the specified render target (stream \'{0}\' is {1}bit) as JPG. JPGs must be supplied 8bit render targets."
                          );
      pFVar17 = FTextFormat::FTextFormat(&local_f8,pFVar16,Default);
      pFVar13 = FText::Format<FText,FText>(&local_188,pFVar17,pFVar15,pFVar13);
      FMessageLog::Warning(pFVar11,&local_198,pFVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_200.SharedReferenceCount.ReferenceController);
      FMessageLog::~FMessageLog(&local_b8);
      return;
    }
  }
  pFVar18 = ::operator_new(0x80);
  if (pFVar18 != (FImageWriteTask *)0x0) {
    (pFVar18->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined ***)pFVar18 = &___7FImageWriteTask__6B_;
    (pFVar18->Filename).Data.ArrayNum = 0;
    (pFVar18->Filename).Data.ArrayMax = 0;
    pFVar18->Format = BMP;
    pFVar18->CompressionQuality = 0;
    pFVar18->bOverwriteFile = true;
    *(undefined8 *)&pFVar18->OnCompleted = 0;
    *(undefined8 *)&(pFVar18->OnCompleted).field_0x28 = 0;
    (pFVar18->PixelData).Ptr = (FImagePixelData *)0x0;
    (pFVar18->PixelPreProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar18->PixelPreProcessors).ArrayNum = 0;
    (pFVar18->PixelPreProcessors).ArrayMax = 0;
    this_01 = pFVar18;
  }
  this->_padding_ = (longlong)param_2;
  pFVar12 = TSharedPtr<FImagePixelData,1>::operator->(&param_1->ImageData);
  bVar24 = !param_4;
  if (bVar24) {
    (**(code **)(pFVar12->_padding_ + 0x18))(pFVar12,&local_248);
    ppFVar23 = &local_248;
    pFVar12 = local_248;
  }
  else {
    (**(code **)(pFVar12->_padding_ + 0x10))(pFVar12,&local_238);
    ppFVar23 = &local_238;
    pFVar12 = local_238;
  }
  pTVar1 = &this_01->PixelData;
  if (pTVar1 != (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)ppFVar23) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar12;
    *ppFVar23 = (FImagePixelData *)0x0;
    if (pFVar2 != (FImagePixelData *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  if ((bVar24) && (local_248 != (FImagePixelData *)0x0)) {
    (**(code **)local_248->_padding_)(local_248,1);
  }
  if ((!bVar24) && (local_238 != (FImagePixelData *)0x0)) {
    (**(code **)local_238->_padding_)(local_238,1);
  }
  puVar19 = (undefined8 *)(**(code **)(this->_padding_ + 0x338))(this,local_158,param_3);
  pFVar14 = &this_01->Filename;
  if (pFVar14 != (FString *)puVar19) {
    pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar19;
    *puVar19 = 0;
    (this_01->Filename).Data.ArrayNum = *(int *)(puVar19 + 1);
    (this_01->Filename).Data.ArrayMax = *(int *)((longlong)puVar19 + 0xc);
    puVar19[1] = 0;
  }
  if (local_158[0] != (void *)0x0) {
    FMemory::Free(local_158[0]);
  }
  EVar9 = ImageFormatFromDesired(this->Format);
  this_01->Format = EVar9;
  this_01->bOverwriteFile = false;
  this->_padding_ = 0;
  if (((param_1->ImageData).Object == (FImagePixelData *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((((param_1->ImageData).Object)->Type == Color) && (this_01->Format == PNG)) &&
     (bVar24 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::OrderIndependentCompareEqual
                         ((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)param_2,
                          (TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)&this->_padding_), bVar24)) {
    FImageWriteTask::AddPreProcessorToSetAlphaOpaque(this_01);
  }
  if (this->Format == EXR) {
    uVar10 = (uint)(this->bEnableCompression == false);
  }
  else if (this->bEnableCompression == false) {
    uVar10 = 100;
  }
  else {
    uVar10 = this->CompressionQuality;
  }
  this_01->CompressionQuality = uVar10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_240.ObjectIndex = 0;
  local_240.ObjectSerialNumber = 0;
  local_218 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_240,(FObjectPtr)&local_218);
  local_88 = *(longlong *)&this_01->OnCompleted;
  uVar7 = *(undefined8 *)&(this_01->OnCompleted).field_0x8;
  local_78 = *(longlong *)&(this_01->OnCompleted).field_0x10;
  uVar8 = *(undefined8 *)&(this_01->OnCompleted).field_0x18;
  uVar6 = *(undefined8 *)&(this_01->OnCompleted).field_0x20;
  plStack_60 = *(longlong **)&(this_01->OnCompleted).field_0x28;
  *(code **)&this_01->OnCompleted =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::__l25::<lambda_1>,void,bool>
       ::Call;
  *(undefined8 *)&(this_01->OnCompleted).field_0x8 = uStack_80;
  uStack_70._0_4_ = local_240.ObjectIndex;
  uStack_70._4_4_ = local_240.ObjectSerialNumber;
  *(undefined4 *)&(this_01->OnCompleted).field_0x10 = 0x5141db58;
  *(undefined4 *)&(this_01->OnCompleted).field_0x14 = 1;
  *(int *)&(this_01->OnCompleted).field_0x18 = (int)uStack_70;
  *(int *)&(this_01->OnCompleted).field_0x1c = uStack_70._4_4_;
  *(undefined4 *)&(this_01->OnCompleted).field_0x20 = (undefined4)local_68;
  *(undefined4 *)&(this_01->OnCompleted).field_0x24 = local_68._4_4_;
  *(undefined4 *)&(this_01->OnCompleted).field_0x28 = 0;
  *(undefined4 *)&(this_01->OnCompleted).field_0x2c = 0;
  uStack_70 = uVar8;
  local_68 = uVar6;
  uStack_80 = uVar7;
  if (local_88 != 0) {
    plVar22 = &local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar22 = plStack_60;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  FModuleManager::Get();
  pFVar20 = ::FName::FName(&local_1e0,"ImageWriteQueue");
  FVar4 = *pFVar20;
  this_00 = FModuleManager::Get();
  pIVar21 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  plVar22 = (longlong *)(**(code **)((longlong)*pIVar21 + 0x40))(pIVar21);
  local_230 = this_01;
  (**(code **)(*plVar22 + 8))(plVar22,&local_1f0,&local_230,1);
  if (local_230 != (FImageWriteTask *)0x0) {
    (*(code *)**(undefined8 **)local_230)(local_230,1);
  }
  if (local_1f0 != 0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e8);
  return;
}

// execGenerateFilenameForBuffer @ 146beb260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UUserDefinedImageCaptureProtocol::execGenerateFilenameForBuffer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  FProperty *pFVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  ForAnyElementType *pFVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar6 = &local_88;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[1].field_0x20 == 0) {
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FFrame::KismetExecutionMessage
              (L"Capture protocol is not currently set up to generate filenames.",Error,(FName)0x0);
    FVar5.Data = (FScriptContainerElement *)0x0;
    iVar7 = 0;
    iVar8 = 0;
  }
  else {
    cVar1 = param_1[5].field_0x10;
    pwVar9 = L".ext";
    if (cVar1 == '\0') {
      pwVar9 = L".png";
    }
    else if (cVar1 == '\x01') {
      pwVar9 = L".jpg";
    }
    else if (cVar1 == '\x02') {
      pwVar9 = L".bmp";
    }
    else if (cVar1 == '\x03') {
      pwVar9 = L".exr";
    }
    lVar3 = *(longlong *)param_1;
    *(ForAnyElementType **)&param_1[5].field_0x8 = pFVar6;
    (**(code **)(lVar3 + 800))(param_1,&local_b8,&param_1[2].field_0x1c,pwVar9);
    UMovieSceneCaptureProtocolBase::EnsureFileWritableImpl
              ((UMovieSceneCaptureProtocolBase *)param_1,&local_b8);
    *(undefined8 *)&param_1[5].field_0x8 = 0;
    FVar5.Data = local_b8.Data.AllocatorInstance.Data;
    iVar7 = local_b8.Data.ArrayNum;
    iVar8 = local_b8.Data.ArrayMax;
  }
  if (param_3 != local_a0) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar5.Data;
    *(int *)((longlong)param_3 + 8) = iVar7;
    *(int *)((longlong)param_3 + 0xc) = iVar8;
    FVar5.Data = (FScriptContainerElement *)0x0;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar4 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_54 = 0;
  local_78.NumBits = 0;
  local_58 = 0xffffffff;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// execGenerateFilenameForCurrentFrame @ 146beb510

void __cdecl
UUserDefinedImageCaptureProtocol::execGenerateFilenameForCurrentFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void *local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x338))(param_1,&local_18,&param_1[2].field_0x1c);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_18;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18 = (void *)0x0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execWriteImageToDisk @ 146bebe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UUserDefinedImageCaptureProtocol::execWriteImageToDisk
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FCapturedPixelsID *pFVar3;
  FFrameMetrics *pFVar4;
  FCapturedPixels *pFVar5;
  undefined1 auStackY_e8 [32];
  int local_b8 [2];
  FFrameMetrics local_b0;
  FCapturedPixels local_a0;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_a0.ImageData.Object = (FImagePixelData *)0x0;
  local_a0.ImageData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  pFVar5 = &local_a0;
  if ((FCapturedPixels *)param_2->MostRecentPropertyAddress != (FCapturedPixels *)0x0) {
    pFVar5 = (FCapturedPixels *)param_2->MostRecentPropertyAddress;
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_b0.TotalElapsedTime = 0.0;
  local_b0.FrameDelta = 0.0;
  local_b0.FrameNumber = 0;
  local_b0.NumDroppedFrames = 0;
  pFVar3 = (FCapturedPixelsID *)local_88;
  if ((FCapturedPixelsID *)param_2->MostRecentPropertyAddress != (FCapturedPixelsID *)0x0) {
    pFVar3 = (FCapturedPixelsID *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8[0] = 0;
  pFVar4 = &local_b0;
  if ((FFrameMetrics *)param_2->MostRecentPropertyAddress != (FFrameMetrics *)0x0) {
    pFVar4 = (FFrameMetrics *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  WriteImageToDisk((UUserDefinedImageCaptureProtocol *)param_1,pFVar5,pFVar3,pFVar4,local_b8[0] != 0
                  );
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ImageData.SharedReferenceCount.ReferenceController);
  return;
}

