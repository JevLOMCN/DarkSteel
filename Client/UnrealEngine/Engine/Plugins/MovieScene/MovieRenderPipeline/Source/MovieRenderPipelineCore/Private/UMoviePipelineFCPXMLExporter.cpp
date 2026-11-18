// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// StaticClass @ 14dd5ad20

UClass * __cdecl UMoviePipelineFCPXMLExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineFCPXMLExporter",
               &Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.InnerSingleton,
               StaticRegisterNativesUMoviePipelineFCPXMLExporter,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineFCPXMLExporter>,
               InternalVTableHelperCtorCaller<UMoviePipelineFCPXMLExporter>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.InnerSingleton;
}

// UMoviePipelineFCPXMLExporter @ 14dd6b190

UMoviePipelineFCPXMLExporter * __thiscall
UMoviePipelineFCPXMLExporter::UMoviePipelineFCPXMLExporter
          (UMoviePipelineFCPXMLExporter *this,FVTableHelper *param_1)

{
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineFCPXMLExporter__6B_;
  (this->FileNameFormatOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameFormatOverride).Data.ArrayNum = 0;
  (this->FileNameFormatOverride).Data.ArrayMax = 0;
  (this->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePath).Data.ArrayNum = 0;
  (this->FilePath).Data.ArrayMax = 0;
  return this;
}

// ~UMoviePipelineFCPXMLExporter @ 14dd6c130

void __thiscall
UMoviePipelineFCPXMLExporter::~UMoviePipelineFCPXMLExporter(UMoviePipelineFCPXMLExporter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineFCPXMLExporter__6B_;
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileNameFormatOverride).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  return;
}

// BeginExportImpl @ 14dd77ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipelineFCPXMLExporter::BeginExportImpl(UMoviePipelineFCPXMLExporter *this)

{
  this->bHasFinishedExporting = true;
  if (1 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    return;
  }
  return;
}

// EnsureWritableFile @ 14dd7f8d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMoviePipelineFCPXMLExporter::EnsureWritableFile(UMoviePipelineFCPXMLExporter *this)

{
  char cVar1;
  IFileManager *pIVar2;
  UMoviePipeline *this_00;
  UMoviePipelinePrimaryConfig *this_01;
  UMoviePipelineOutputSetting *pUVar3;
  longlong lVar4;
  FPlatformFileManager *this_02;
  IPlatformFile *pIVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  bool bVar8;
  FString local_18;
  
  FPaths::GetPath(&local_18,&this->FilePath);
  pIVar2 = IFileManager::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2);
  if (cVar1 == '\0') {
    pIVar2 = IFileManager::Get();
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar6.Data = local_18.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2,FVar6.Data,0);
  }
  this_00 = (UMoviePipeline *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_01 = UMoviePipeline::GetPipelinePrimaryConfig(this_00);
  pUVar3 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)this_01,false);
  pIVar2 = IFileManager::Get();
  if ((this->FilePath).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
  }
  lVar4 = (**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,pwVar7);
  if (lVar4 == -1) {
LAB_14dd7f9f9:
    bVar8 = true;
  }
  else {
    if (pUVar3->bOverrideExistingOutput != false) {
      this_02 = FPlatformFileManager::Get();
      pIVar5 = FPlatformFileManager::GetPlatformFile(this_02);
      if ((this->FilePath).Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
      }
      cVar1 = (**(code **)((longlong)*pIVar5 + 0x88))(pIVar5,pwVar7);
      if (cVar1 != '\0') goto LAB_14dd7f9f9;
    }
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    bVar8 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar8;
}

// GetPrivateStaticClass @ 14dd8bc50

UClass * __cdecl UMoviePipelineFCPXMLExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineFCPXMLExporter",
               &Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.InnerSingleton,
               StaticRegisterNativesUMoviePipelineFCPXMLExporter,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineFCPXMLExporter>,
               InternalVTableHelperCtorCaller<UMoviePipelineFCPXMLExporter>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.InnerSingleton;
}

// HasFinishedExportingImpl @ 14dd8eb10

bool __thiscall
UMoviePipelineFCPXMLExporter::HasFinishedExportingImpl(UMoviePipelineFCPXMLExporter *this)

{
  return this->bHasFinishedExporting;
}

// StaticRegisterNativesUMoviePipelineFCPXMLExporter @ 14dda66c0

void __cdecl UMoviePipelineFCPXMLExporter::StaticRegisterNativesUMoviePipelineFCPXMLExporter(void)

{
  return;
}

