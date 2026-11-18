// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 7

// StaticStruct @ 148c38800

UScriptStruct * __cdecl FImageComparisonResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
    Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImageComparisonResult,(UObject *)pUVar1,
                         L"ImageComparisonResult");
  }
  return Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton;
}

// FImageComparisonResult @ 148c3d460

FImageComparisonResult * __thiscall
FImageComparisonResult::FImageComparisonResult
          (FImageComparisonResult *this,FImageComparisonResult *param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  (this->CreationTime).Ticks = (param_1->CreationTime).Ticks;
  (this->SourcePlatform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcePlatform).Data.AllocatorInstance.Data =
       (param_1->SourcePlatform).Data.AllocatorInstance.Data;
  (param_1->SourcePlatform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcePlatform).Data.ArrayNum = (param_1->SourcePlatform).Data.ArrayNum;
  (this->SourcePlatform).Data.ArrayMax = (param_1->SourcePlatform).Data.ArrayMax;
  (param_1->SourcePlatform).Data.ArrayNum = 0;
  (param_1->SourcePlatform).Data.ArrayMax = 0;
  (this->SourceRHI).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceRHI).Data.AllocatorInstance.Data = (param_1->SourceRHI).Data.AllocatorInstance.Data;
  (param_1->SourceRHI).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceRHI).Data.ArrayNum = (param_1->SourceRHI).Data.ArrayNum;
  (this->SourceRHI).Data.ArrayMax = (param_1->SourceRHI).Data.ArrayMax;
  (param_1->SourceRHI).Data.ArrayNum = 0;
  (param_1->SourceRHI).Data.ArrayMax = 0;
  (this->IdealApprovedFolderPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IdealApprovedFolderPath).Data.AllocatorInstance.Data =
       (param_1->IdealApprovedFolderPath).Data.AllocatorInstance.Data;
  (param_1->IdealApprovedFolderPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IdealApprovedFolderPath).Data.ArrayNum = (param_1->IdealApprovedFolderPath).Data.ArrayNum;
  (this->IdealApprovedFolderPath).Data.ArrayMax = (param_1->IdealApprovedFolderPath).Data.ArrayMax;
  (param_1->IdealApprovedFolderPath).Data.ArrayNum = 0;
  (param_1->IdealApprovedFolderPath).Data.ArrayMax = 0;
  (this->ApprovedFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ApprovedFilePath).Data.AllocatorInstance.Data =
       (param_1->ApprovedFilePath).Data.AllocatorInstance.Data;
  (param_1->ApprovedFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ApprovedFilePath).Data.ArrayNum = (param_1->ApprovedFilePath).Data.ArrayNum;
  (this->ApprovedFilePath).Data.ArrayMax = (param_1->ApprovedFilePath).Data.ArrayMax;
  (param_1->ApprovedFilePath).Data.ArrayNum = 0;
  (param_1->ApprovedFilePath).Data.ArrayMax = 0;
  (this->IncomingFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingFilePath).Data.AllocatorInstance.Data =
       (param_1->IncomingFilePath).Data.AllocatorInstance.Data;
  (param_1->IncomingFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingFilePath).Data.ArrayNum = (param_1->IncomingFilePath).Data.ArrayNum;
  (this->IncomingFilePath).Data.ArrayMax = (param_1->IncomingFilePath).Data.ArrayMax;
  (param_1->IncomingFilePath).Data.ArrayNum = 0;
  (param_1->IncomingFilePath).Data.ArrayMax = 0;
  (this->ComparisonFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComparisonFilePath).Data.AllocatorInstance.Data =
       (param_1->ComparisonFilePath).Data.AllocatorInstance.Data;
  (param_1->ComparisonFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComparisonFilePath).Data.ArrayNum = (param_1->ComparisonFilePath).Data.ArrayNum;
  (this->ComparisonFilePath).Data.ArrayMax = (param_1->ComparisonFilePath).Data.ArrayMax;
  (param_1->ComparisonFilePath).Data.ArrayNum = 0;
  (param_1->ComparisonFilePath).Data.ArrayMax = 0;
  (this->ReportApprovedFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportApprovedFilePath).Data.AllocatorInstance.Data =
       (param_1->ReportApprovedFilePath).Data.AllocatorInstance.Data;
  (param_1->ReportApprovedFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportApprovedFilePath).Data.ArrayNum = (param_1->ReportApprovedFilePath).Data.ArrayNum;
  (this->ReportApprovedFilePath).Data.ArrayMax = (param_1->ReportApprovedFilePath).Data.ArrayMax;
  (param_1->ReportApprovedFilePath).Data.ArrayNum = 0;
  (param_1->ReportApprovedFilePath).Data.ArrayMax = 0;
  (this->ReportIncomingFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportIncomingFilePath).Data.AllocatorInstance.Data =
       (param_1->ReportIncomingFilePath).Data.AllocatorInstance.Data;
  (param_1->ReportIncomingFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportIncomingFilePath).Data.ArrayNum = (param_1->ReportIncomingFilePath).Data.ArrayNum;
  (this->ReportIncomingFilePath).Data.ArrayMax = (param_1->ReportIncomingFilePath).Data.ArrayMax;
  (param_1->ReportIncomingFilePath).Data.ArrayNum = 0;
  (param_1->ReportIncomingFilePath).Data.ArrayMax = 0;
  (this->ReportComparisonFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportComparisonFilePath).Data.AllocatorInstance.Data =
       (param_1->ReportComparisonFilePath).Data.AllocatorInstance.Data;
  (param_1->ReportComparisonFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportComparisonFilePath).Data.ArrayNum = (param_1->ReportComparisonFilePath).Data.ArrayNum
  ;
  (this->ReportComparisonFilePath).Data.ArrayMax = (param_1->ReportComparisonFilePath).Data.ArrayMax
  ;
  (param_1->ReportComparisonFilePath).Data.ArrayNum = 0;
  (param_1->ReportComparisonFilePath).Data.ArrayMax = 0;
  this->MaxLocalDifference = param_1->MaxLocalDifference;
  this->GlobalDifference = param_1->GlobalDifference;
  uVar1 = (param_1->Tolerance).Green;
  uVar2 = (param_1->Tolerance).Blue;
  uVar3 = (param_1->Tolerance).Alpha;
  uVar4 = (param_1->Tolerance).MinBrightness;
  uVar5 = (param_1->Tolerance).MaxBrightness;
  bVar6 = (param_1->Tolerance).IgnoreAntiAliasing;
  bVar7 = (param_1->Tolerance).IgnoreColors;
  fVar8 = (param_1->Tolerance).MaximumLocalError;
  fVar9 = (param_1->Tolerance).MaximumGlobalError;
  (this->Tolerance).Red = (param_1->Tolerance).Red;
  (this->Tolerance).Green = uVar1;
  (this->Tolerance).Blue = uVar2;
  (this->Tolerance).Alpha = uVar3;
  (this->Tolerance).MinBrightness = uVar4;
  (this->Tolerance).MaxBrightness = uVar5;
  (this->Tolerance).IgnoreAntiAliasing = bVar6;
  (this->Tolerance).IgnoreColors = bVar7;
  (this->Tolerance).MaximumLocalError = fVar8;
  (this->Tolerance).MaximumGlobalError = fVar9;
  FText::FText(&this->ErrorMessage,&param_1->ErrorMessage);
  (this->ScreenshotPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScreenshotPath).Data.AllocatorInstance.Data =
       (param_1->ScreenshotPath).Data.AllocatorInstance.Data;
  (param_1->ScreenshotPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScreenshotPath).Data.ArrayNum = (param_1->ScreenshotPath).Data.ArrayNum;
  (this->ScreenshotPath).Data.ArrayMax = (param_1->ScreenshotPath).Data.ArrayMax;
  (param_1->ScreenshotPath).Data.ArrayNum = 0;
  (param_1->ScreenshotPath).Data.ArrayMax = 0;
  uVar10 = (param_1->ComparisonId).B;
  uVar11 = (param_1->ComparisonId).C;
  uVar12 = (param_1->ComparisonId).D;
  (this->ComparisonId).A = (param_1->ComparisonId).A;
  (this->ComparisonId).B = uVar10;
  (this->ComparisonId).C = uVar11;
  (this->ComparisonId).D = uVar12;
  this->bSkipAttachingImages = param_1->bSkipAttachingImages;
  this->Version = param_1->Version;
  return this;
}

// FImageComparisonResult @ 148c3d680

FImageComparisonResult * __thiscall
FImageComparisonResult::FImageComparisonResult
          (FImageComparisonResult *this,FImageComparisonResult *param_1)

{
  ITextData *pIVar1;
  float fVar2;
  float fVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  
  (this->CreationTime).Ticks = (param_1->CreationTime).Ticks;
  ::FString::FString(&this->SourcePlatform,&param_1->SourcePlatform);
  ::FString::FString(&this->SourceRHI,&param_1->SourceRHI);
  ::FString::FString(&this->IdealApprovedFolderPath,&param_1->IdealApprovedFolderPath);
  ::FString::FString(&this->ApprovedFilePath,&param_1->ApprovedFilePath);
  ::FString::FString(&this->IncomingFilePath,&param_1->IncomingFilePath);
  ::FString::FString(&this->ComparisonFilePath,&param_1->ComparisonFilePath);
  ::FString::FString(&this->ReportApprovedFilePath,&param_1->ReportApprovedFilePath);
  ::FString::FString(&this->ReportIncomingFilePath,&param_1->ReportIncomingFilePath);
  ::FString::FString(&this->ReportComparisonFilePath,&param_1->ReportComparisonFilePath);
  this->MaxLocalDifference = param_1->MaxLocalDifference;
  this->GlobalDifference = param_1->GlobalDifference;
  uVar4 = (param_1->Tolerance).Green;
  uVar5 = (param_1->Tolerance).Blue;
  uVar6 = (param_1->Tolerance).Alpha;
  uVar7 = (param_1->Tolerance).MinBrightness;
  uVar8 = (param_1->Tolerance).MaxBrightness;
  bVar9 = (param_1->Tolerance).IgnoreAntiAliasing;
  bVar10 = (param_1->Tolerance).IgnoreColors;
  fVar2 = (param_1->Tolerance).MaximumLocalError;
  fVar3 = (param_1->Tolerance).MaximumGlobalError;
  (this->Tolerance).Red = (param_1->Tolerance).Red;
  (this->Tolerance).Green = uVar4;
  (this->Tolerance).Blue = uVar5;
  (this->Tolerance).Alpha = uVar6;
  (this->Tolerance).MinBrightness = uVar7;
  (this->Tolerance).MaxBrightness = uVar8;
  (this->Tolerance).IgnoreAntiAliasing = bVar9;
  (this->Tolerance).IgnoreColors = bVar10;
  (this->Tolerance).MaximumLocalError = fVar2;
  (this->Tolerance).MaximumGlobalError = fVar3;
  (this->ErrorMessage).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->ErrorMessage).TextData.Reference;
  (this->ErrorMessage).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ErrorMessage).Flags = (param_1->ErrorMessage).Flags;
  ::FString::FString(&this->ScreenshotPath,&param_1->ScreenshotPath);
  uVar11 = (param_1->ComparisonId).B;
  uVar12 = (param_1->ComparisonId).C;
  uVar13 = (param_1->ComparisonId).D;
  (this->ComparisonId).A = (param_1->ComparisonId).A;
  (this->ComparisonId).B = uVar11;
  (this->ComparisonId).C = uVar12;
  (this->ComparisonId).D = uVar13;
  this->bSkipAttachingImages = param_1->bSkipAttachingImages;
  this->Version = param_1->Version;
  return this;
}

// FImageComparisonResult @ 148c3d7c0

FImageComparisonResult * __thiscall
FImageComparisonResult::FImageComparisonResult(FImageComparisonResult *this)

{
  (this->Tolerance).MinBrightness = '\0';
  (this->Tolerance).MaxBrightness = 0xff;
  (this->Tolerance).IgnoreAntiAliasing = false;
  (this->Tolerance).IgnoreColors = false;
  (this->CreationTime).Ticks = 0;
  (this->SourcePlatform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcePlatform).Data.ArrayNum = 0;
  (this->SourcePlatform).Data.ArrayMax = 0;
  (this->SourceRHI).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceRHI).Data.ArrayNum = 0;
  (this->SourceRHI).Data.ArrayMax = 0;
  (this->IdealApprovedFolderPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IdealApprovedFolderPath).Data.ArrayNum = 0;
  (this->IdealApprovedFolderPath).Data.ArrayMax = 0;
  (this->ApprovedFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ApprovedFilePath).Data.ArrayNum = 0;
  (this->ApprovedFilePath).Data.ArrayMax = 0;
  (this->IncomingFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingFilePath).Data.ArrayNum = 0;
  (this->IncomingFilePath).Data.ArrayMax = 0;
  (this->ComparisonFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComparisonFilePath).Data.ArrayNum = 0;
  (this->ComparisonFilePath).Data.ArrayMax = 0;
  (this->ReportApprovedFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportApprovedFilePath).Data.ArrayNum = 0;
  (this->ReportApprovedFilePath).Data.ArrayMax = 0;
  (this->ReportIncomingFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportIncomingFilePath).Data.ArrayNum = 0;
  (this->ReportIncomingFilePath).Data.ArrayMax = 0;
  (this->ReportComparisonFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportComparisonFilePath).Data.ArrayNum = 0;
  (this->ReportComparisonFilePath).Data.ArrayMax = 0;
  this->MaxLocalDifference = 0.0;
  this->GlobalDifference = 0.0;
  (this->Tolerance).Red = '\0';
  (this->Tolerance).Green = '\0';
  (this->Tolerance).Blue = '\0';
  (this->Tolerance).Alpha = '\0';
  (this->Tolerance).MaximumLocalError = 0.0;
  (this->Tolerance).MaximumGlobalError = 0.0;
  FText::FText(&this->ErrorMessage);
  (this->ScreenshotPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScreenshotPath).Data.ArrayNum = 0;
  (this->ScreenshotPath).Data.ArrayMax = 0;
  (this->ComparisonId).A = 0;
  (this->ComparisonId).B = 0;
  (this->ComparisonId).C = 0;
  (this->ComparisonId).D = 0;
  this->bSkipAttachingImages = false;
  this->Version = 3;
  return this;
}

// ~FImageComparisonResult @ 148c3e000

void __thiscall FImageComparisonResult::~FImageComparisonResult(FImageComparisonResult *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = (this->ScreenshotPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->ErrorMessage).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->ReportComparisonFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReportIncomingFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReportApprovedFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComparisonFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ApprovedFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IdealApprovedFolderPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceRHI).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourcePlatform).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 148c3e1d0

FImageComparisonResult * __thiscall
FImageComparisonResult::operator=(FImageComparisonResult *this,FImageComparisonResult *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  pFVar1 = &param_1->SourcePlatform;
  pFVar2 = &this->SourcePlatform;
  (this->CreationTime).Ticks = (param_1->CreationTime).Ticks;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SourcePlatform).Data.ArrayNum = (param_1->SourcePlatform).Data.ArrayNum;
    (this->SourcePlatform).Data.ArrayMax = (param_1->SourcePlatform).Data.ArrayMax;
    (param_1->SourcePlatform).Data.ArrayNum = 0;
    (param_1->SourcePlatform).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->SourceRHI;
  pFVar2 = &this->SourceRHI;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SourceRHI).Data.ArrayNum = (param_1->SourceRHI).Data.ArrayNum;
    (this->SourceRHI).Data.ArrayMax = (param_1->SourceRHI).Data.ArrayMax;
    (param_1->SourceRHI).Data.ArrayNum = 0;
    (param_1->SourceRHI).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->IdealApprovedFolderPath;
  pFVar2 = &this->IdealApprovedFolderPath;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->IdealApprovedFolderPath).Data.ArrayNum = (param_1->IdealApprovedFolderPath).Data.ArrayNum
    ;
    (this->IdealApprovedFolderPath).Data.ArrayMax = (param_1->IdealApprovedFolderPath).Data.ArrayMax
    ;
    (param_1->IdealApprovedFolderPath).Data.ArrayNum = 0;
    (param_1->IdealApprovedFolderPath).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->ApprovedFilePath;
  pFVar2 = &this->ApprovedFilePath;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ApprovedFilePath).Data.ArrayNum = (param_1->ApprovedFilePath).Data.ArrayNum;
    (this->ApprovedFilePath).Data.ArrayMax = (param_1->ApprovedFilePath).Data.ArrayMax;
    (param_1->ApprovedFilePath).Data.ArrayNum = 0;
    (param_1->ApprovedFilePath).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->IncomingFilePath;
  pFVar2 = &this->IncomingFilePath;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->IncomingFilePath).Data.ArrayNum = (param_1->IncomingFilePath).Data.ArrayNum;
    (this->IncomingFilePath).Data.ArrayMax = (param_1->IncomingFilePath).Data.ArrayMax;
    (param_1->IncomingFilePath).Data.ArrayNum = 0;
    (param_1->IncomingFilePath).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->ComparisonFilePath;
  pFVar2 = &this->ComparisonFilePath;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ComparisonFilePath).Data.ArrayNum = (param_1->ComparisonFilePath).Data.ArrayNum;
    (this->ComparisonFilePath).Data.ArrayMax = (param_1->ComparisonFilePath).Data.ArrayMax;
    (param_1->ComparisonFilePath).Data.ArrayNum = 0;
    (param_1->ComparisonFilePath).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->ReportApprovedFilePath;
  pFVar2 = &this->ReportApprovedFilePath;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ReportApprovedFilePath).Data.ArrayNum = (param_1->ReportApprovedFilePath).Data.ArrayNum;
    (this->ReportApprovedFilePath).Data.ArrayMax = (param_1->ReportApprovedFilePath).Data.ArrayMax;
    (param_1->ReportApprovedFilePath).Data.ArrayNum = 0;
    (param_1->ReportApprovedFilePath).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->ReportIncomingFilePath;
  pFVar2 = &this->ReportIncomingFilePath;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ReportIncomingFilePath).Data.ArrayNum = (param_1->ReportIncomingFilePath).Data.ArrayNum;
    (this->ReportIncomingFilePath).Data.ArrayMax = (param_1->ReportIncomingFilePath).Data.ArrayMax;
    (param_1->ReportIncomingFilePath).Data.ArrayNum = 0;
    (param_1->ReportIncomingFilePath).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->ReportComparisonFilePath;
  pFVar2 = &this->ReportComparisonFilePath;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ReportComparisonFilePath).Data.ArrayNum =
         (param_1->ReportComparisonFilePath).Data.ArrayNum;
    (this->ReportComparisonFilePath).Data.ArrayMax =
         (param_1->ReportComparisonFilePath).Data.ArrayMax;
    (param_1->ReportComparisonFilePath).Data.ArrayNum = 0;
    (param_1->ReportComparisonFilePath).Data.ArrayMax = 0;
  }
  this->MaxLocalDifference = param_1->MaxLocalDifference;
  this->GlobalDifference = param_1->GlobalDifference;
  uVar4 = (param_1->Tolerance).Green;
  uVar5 = (param_1->Tolerance).Blue;
  uVar6 = (param_1->Tolerance).Alpha;
  uVar7 = (param_1->Tolerance).MinBrightness;
  uVar8 = (param_1->Tolerance).MaxBrightness;
  bVar9 = (param_1->Tolerance).IgnoreAntiAliasing;
  bVar10 = (param_1->Tolerance).IgnoreColors;
  fVar11 = (param_1->Tolerance).MaximumLocalError;
  fVar12 = (param_1->Tolerance).MaximumGlobalError;
  (this->Tolerance).Red = (param_1->Tolerance).Red;
  (this->Tolerance).Green = uVar4;
  (this->Tolerance).Blue = uVar5;
  (this->Tolerance).Alpha = uVar6;
  (this->Tolerance).MinBrightness = uVar7;
  (this->Tolerance).MaxBrightness = uVar8;
  (this->Tolerance).IgnoreAntiAliasing = bVar9;
  (this->Tolerance).IgnoreColors = bVar10;
  (this->Tolerance).MaximumLocalError = fVar11;
  (this->Tolerance).MaximumGlobalError = fVar12;
  FText::operator=(&this->ErrorMessage,&param_1->ErrorMessage);
  pFVar1 = &param_1->ScreenshotPath;
  pFVar2 = &this->ScreenshotPath;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ScreenshotPath).Data.ArrayNum = (param_1->ScreenshotPath).Data.ArrayNum;
    (this->ScreenshotPath).Data.ArrayMax = (param_1->ScreenshotPath).Data.ArrayMax;
    (param_1->ScreenshotPath).Data.ArrayNum = 0;
    (param_1->ScreenshotPath).Data.ArrayMax = 0;
  }
  uVar13 = (param_1->ComparisonId).B;
  uVar14 = (param_1->ComparisonId).C;
  uVar15 = (param_1->ComparisonId).D;
  (this->ComparisonId).A = (param_1->ComparisonId).A;
  (this->ComparisonId).B = uVar13;
  (this->ComparisonId).C = uVar14;
  (this->ComparisonId).D = uVar15;
  this->bSkipAttachingImages = param_1->bSkipAttachingImages;
  this->Version = param_1->Version;
  return this;
}

// operator= @ 148c3e4a0

FImageComparisonResult * __thiscall
FImageComparisonResult::operator=(FImageComparisonResult *this,FImageComparisonResult *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  float fVar3;
  float fVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  
  (this->CreationTime).Ticks = (param_1->CreationTime).Ticks;
  ::FString::operator=(&this->SourcePlatform,&param_1->SourcePlatform);
  ::FString::operator=(&this->SourceRHI,&param_1->SourceRHI);
  ::FString::operator=(&this->IdealApprovedFolderPath,&param_1->IdealApprovedFolderPath);
  ::FString::operator=(&this->ApprovedFilePath,&param_1->ApprovedFilePath);
  ::FString::operator=(&this->IncomingFilePath,&param_1->IncomingFilePath);
  ::FString::operator=(&this->ComparisonFilePath,&param_1->ComparisonFilePath);
  ::FString::operator=(&this->ReportApprovedFilePath,&param_1->ReportApprovedFilePath);
  ::FString::operator=(&this->ReportIncomingFilePath,&param_1->ReportIncomingFilePath);
  ::FString::operator=(&this->ReportComparisonFilePath,&param_1->ReportComparisonFilePath);
  this->MaxLocalDifference = param_1->MaxLocalDifference;
  this->GlobalDifference = param_1->GlobalDifference;
  uVar5 = (param_1->Tolerance).Green;
  uVar6 = (param_1->Tolerance).Blue;
  uVar7 = (param_1->Tolerance).Alpha;
  uVar8 = (param_1->Tolerance).MinBrightness;
  uVar9 = (param_1->Tolerance).MaxBrightness;
  bVar10 = (param_1->Tolerance).IgnoreAntiAliasing;
  bVar11 = (param_1->Tolerance).IgnoreColors;
  fVar3 = (param_1->Tolerance).MaximumLocalError;
  fVar4 = (param_1->Tolerance).MaximumGlobalError;
  (this->Tolerance).Red = (param_1->Tolerance).Red;
  (this->Tolerance).Green = uVar5;
  (this->Tolerance).Blue = uVar6;
  (this->Tolerance).Alpha = uVar7;
  (this->Tolerance).MinBrightness = uVar8;
  (this->Tolerance).MaxBrightness = uVar9;
  (this->Tolerance).IgnoreAntiAliasing = bVar10;
  (this->Tolerance).IgnoreColors = bVar11;
  (this->Tolerance).MaximumLocalError = fVar3;
  (this->Tolerance).MaximumGlobalError = fVar4;
  pIVar1 = (param_1->ErrorMessage).TextData.Reference;
  pIVar2 = (this->ErrorMessage).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ErrorMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ErrorMessage).Flags = (param_1->ErrorMessage).Flags;
  ::FString::operator=(&this->ScreenshotPath,&param_1->ScreenshotPath);
  uVar12 = (param_1->ComparisonId).B;
  uVar13 = (param_1->ComparisonId).C;
  uVar14 = (param_1->ComparisonId).D;
  (this->ComparisonId).A = (param_1->ComparisonId).A;
  (this->ComparisonId).B = uVar12;
  (this->ComparisonId).C = uVar13;
  (this->ComparisonId).D = uVar14;
  this->bSkipAttachingImages = param_1->bSkipAttachingImages;
  this->Version = param_1->Version;
  return this;
}

