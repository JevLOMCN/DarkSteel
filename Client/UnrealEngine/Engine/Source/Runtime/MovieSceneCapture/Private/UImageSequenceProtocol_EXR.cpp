// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 10

// StaticClass @ 146bd0e50

UClass * __cdecl UImageSequenceProtocol_EXR::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_EXR",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol_EXR,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_EXR>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_EXR>,local_res8,
               UImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.InnerSingleton;
}

// UImageSequenceProtocol_EXR @ 146bd8560

UImageSequenceProtocol_EXR * __thiscall
UImageSequenceProtocol_EXR::UImageSequenceProtocol_EXR
          (UImageSequenceProtocol_EXR *this,FVTableHelper *param_1)

{
  UImageSequenceProtocol::UImageSequenceProtocol((UImageSequenceProtocol *)this,param_1);
  this->_padding_ = (longlong)&___7UImageSequenceProtocol_EXR__6B_;
  return this;
}

// UImageSequenceProtocol_EXR @ 146bd8590

UImageSequenceProtocol_EXR * __thiscall
UImageSequenceProtocol_EXR::UImageSequenceProtocol_EXR
          (UImageSequenceProtocol_EXR *this,FObjectInitializer *param_1)

{
  UImageSequenceProtocol::UImageSequenceProtocol((UImageSequenceProtocol *)this,param_1);
  *(undefined1 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7UImageSequenceProtocol_EXR__6B_;
  this->bCompressed = false;
  this->CaptureGamut = '\0';
  return this;
}

// ~UImageSequenceProtocol_EXR @ 146bd9580

void __thiscall
UImageSequenceProtocol_EXR::~UImageSequenceProtocol_EXR(UImageSequenceProtocol_EXR *this)

{
  this->_padding_ = (longlong)&___7UImageSequenceProtocol_EXR__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  return;
}

// AddFormatMappingsImpl @ 146bdb2e0

void __thiscall
UImageSequenceProtocol_EXR::AddFormatMappingsImpl
          (UImageSequenceProtocol_EXR *this,
          TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_res8;
  FString *local_88;
  FStringFormatArg *local_80;
  FString local_78;
  FString *local_68;
  FStringFormatArg *local_60;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pwVar3 = L"Uncompressed";
  if (this->bCompressed != false) {
    pwVar3 = L"Compressed";
  }
  FStringFormatArg::FStringFormatArg(&local_48,pwVar3);
  ::FString::FString(&local_78,L"quality");
  local_88 = &local_78;
  local_80 = &local_48;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)&local_88);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  pwVar3 = L"";
  switch((this->CaptureGamut).Value) {
  case '\0':
    pwVar3 = L"sRGB";
    break;
  case '\x01':
    pwVar3 = L"P3D65";
    break;
  case '\x02':
    pwVar3 = L"Rec2020";
    break;
  case '\x03':
    pwVar3 = L"ACES";
    break;
  case '\x04':
    pwVar3 = L"ACEScg";
    break;
  case '\x05':
    pwVar3 = L"Linear";
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\ImageSequenceProtocol.cpp"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FStringFormatArg::FStringFormatArg(&local_28,pwVar3);
  ::FString::FString(&local_58,L"gamut");
  local_68 = &local_58;
  local_60 = &local_28;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)&local_res8.Value,
             (bool *)&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  return;
}

// FinalizeImpl @ 146bde180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UImageSequenceProtocol_EXR::FinalizeImpl(UImageSequenceProtocol_EXR *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FGenericWindow,1> *pTVar3;
  void *pvVar4;
  TSharedPtr<SWindow,1> local_28;
  TSharedPtr<FGenericWindow,1> local_18;
  
  if ((char)this->_padding_ == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSceneViewport::FindWindow((FSceneViewport *)this->_padding_,&local_28);
  if (local_28.Object == (SWindow *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = SWindow::GetNativeWindow(local_28.Object,&local_18);
  if (pTVar3->Object == (FGenericWindow *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pvVar4 = (void *)(**(code **)(pTVar3->Object->_padding_ + 0xc0))();
  HDRRemoveCustomMetaData(pvVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  UImageSequenceProtocol::FinalizeImpl((UImageSequenceProtocol *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// GetCompressionQuality @ 146bdffd0

int __thiscall UImageSequenceProtocol_EXR::GetCompressionQuality(UImageSequenceProtocol_EXR *this)

{
  return (int)(this->bCompressed == false);
}

// GetPrivateStaticClass @ 146be0720

UClass * __cdecl UImageSequenceProtocol_EXR::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_EXR",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol_EXR,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_EXR>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_EXR>,local_res8,
               UImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.InnerSingleton;
}

// SetupImpl @ 146be7f10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall UImageSequenceProtocol_EXR::SetupImpl(UImageSequenceProtocol_EXR *this)

{
  byte bVar1;
  code *pcVar2;
  UEnum *this_00;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  EDisplayOutputFormat EVar6;
  wchar_t *pwVar7;
  UPackage *pUVar8;
  FName *pFVar9;
  long64 lVar10;
  TSharedPtr<FGenericWindow,1> *pTVar11;
  void *pvVar12;
  ForAnyElementType FVar13;
  EDisplayColorGamut EVar14;
  uint local_res8 [2];
  int local_res10 [2];
  FName local_res18 [2];
  FString local_58;
  TSharedPtr<SWindow,1> local_48;
  TSharedPtr<FGenericWindow,1> local_38;
  
  local_res8[0] = (uint)(this->CaptureGamut).Value;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pwVar7 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar7,L"-CaptureGamut=",&local_58,true,(wchar_t **)0x0);
  if (bVar3) {
    bVar3 = FDefaultValueHelper::ParseInt(&local_58,(int *)local_res8);
    if (!bVar3) {
      if (Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton == (UEnum *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_MovieSceneCapture();
        Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut,(UObject *)pUVar8,
                           L"EHDRCaptureGamut");
      }
      this_00 = Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton;
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar13.Data = local_58.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::FName(local_res18,(wchar_t *)FVar13.Data);
      lVar10 = UEnum::GetValueByName(this_00,*pFVar9,None);
      local_res8[0] = (uint)lVar10;
    }
    if (local_res8[0] < 6) {
      (this->CaptureGamut).Value = (uchar)local_res8[0];
    }
    else if (2 < (byte)LogMovieSceneCapture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneCapture);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_res10[0] = 0;
  pwVar7 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar7,L"-HDRCompressionQuality=",local_res10);
  if (bVar3) {
    this->bCompressed = local_res10[0] != 1;
  }
  EVar6 = HDRGetDefaultDisplayOutputFormat();
  HDRGetDefaultDisplayColorGamut();
  bVar3 = IsHDREnabled();
  if ((bVar3) && (GRHIGlobals.SupportsHDROutput != false)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar1 = (this->CaptureGamut).Value;
  EVar14 = (EDisplayColorGamut)bVar1;
  if (bVar1 == 5) {
    EVar14 = DCIP3_D65;
    EVar6 = HDR_LinearEXR;
  }
  if (((char)this->_padding_ == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FSceneViewport::FindWindow((FSceneViewport *)this->_padding_,&local_48);
  if ((local_48.Object == (SWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pTVar11 = SWindow::GetNativeWindow(local_48.Object,&local_38);
  if ((pTVar11->Object == (FGenericWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pvVar12 = (void *)(**(code **)(pTVar11->Object->_padding_ + 0xc0))();
  HDRAddCustomMetaData(pvVar12,EVar6,EVar14,bVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  bVar3 = UImageSequenceProtocol::SetupImpl((UImageSequenceProtocol *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// StaticRegisterNativesUImageSequenceProtocol_EXR @ 146be8d00

void __cdecl UImageSequenceProtocol_EXR::StaticRegisterNativesUImageSequenceProtocol_EXR(void)

{
  return;
}

