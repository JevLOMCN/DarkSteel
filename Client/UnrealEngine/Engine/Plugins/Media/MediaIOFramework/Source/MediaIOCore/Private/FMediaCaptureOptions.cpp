// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 7

// StaticStruct @ 14d77e760

UScriptStruct * __cdecl FMediaCaptureOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaCaptureOptions.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UScriptStruct_FMediaCaptureOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaCaptureOptions,(UObject *)pUVar1,
                         L"MediaCaptureOptions");
  }
  return Z_Registration_Info_UScriptStruct_FMediaCaptureOptions.OuterSingleton;
}

// FMediaCaptureOptions @ 14d789b20

FMediaCaptureOptions * __thiscall
FMediaCaptureOptions::FMediaCaptureOptions(FMediaCaptureOptions *this,FMediaCaptureOptions *param_1)

{
  this->bAutoRestartOnSourceSizeChange = param_1->bAutoRestartOnSourceSizeChange;
  this->OverrunAction = param_1->OverrunAction;
  this->Crop = param_1->Crop;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&this->ColorConversionSettings,&param_1->ColorConversionSettings);
  (this->CustomCapturePoint).field0_0x0 = (param_1->CustomCapturePoint).field0_0x0;
  this->ResizeMethod = param_1->ResizeMethod;
  this->bSkipFrameWhenRunningExpensiveTasks = param_1->bSkipFrameWhenRunningExpensiveTasks;
  this->bConvertToDesiredPixelFormat = param_1->bConvertToDesiredPixelFormat;
  this->bForceAlphaToOneOnConversion = param_1->bForceAlphaToOneOnConversion;
  this->bApplyLinearToSRGBConversion = param_1->bApplyLinearToSRGBConversion;
  this->bAutostopOnCapture = param_1->bAutostopOnCapture;
  this->NumberOfFramesToCapture = param_1->NumberOfFramesToCapture;
  this->CapturePhase = param_1->CapturePhase;
  return this;
}

// FMediaCaptureOptions @ 14d789be0

FMediaCaptureOptions * __thiscall
FMediaCaptureOptions::FMediaCaptureOptions(FMediaCaptureOptions *this,FMediaCaptureOptions *param_1)

{
  this->bAutoRestartOnSourceSizeChange = param_1->bAutoRestartOnSourceSizeChange;
  this->OverrunAction = param_1->OverrunAction;
  this->Crop = param_1->Crop;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&this->ColorConversionSettings,&param_1->ColorConversionSettings);
  (this->CustomCapturePoint).field0_0x0 = (param_1->CustomCapturePoint).field0_0x0;
  this->ResizeMethod = param_1->ResizeMethod;
  this->bSkipFrameWhenRunningExpensiveTasks = param_1->bSkipFrameWhenRunningExpensiveTasks;
  this->bConvertToDesiredPixelFormat = param_1->bConvertToDesiredPixelFormat;
  this->bForceAlphaToOneOnConversion = param_1->bForceAlphaToOneOnConversion;
  this->bApplyLinearToSRGBConversion = param_1->bApplyLinearToSRGBConversion;
  this->bAutostopOnCapture = param_1->bAutostopOnCapture;
  this->NumberOfFramesToCapture = param_1->NumberOfFramesToCapture;
  this->CapturePhase = param_1->CapturePhase;
  return this;
}

// FMediaCaptureOptions @ 14d789ca0

FMediaCaptureOptions * __thiscall
FMediaCaptureOptions::FMediaCaptureOptions(FMediaCaptureOptions *this)

{
  this->bAutoRestartOnSourceSizeChange = false;
  this->OverrunAction = Flush;
  this->Crop = None;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&this->ColorConversionSettings);
  (this->CustomCapturePoint).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->ResizeMethod = None;
  this->bSkipFrameWhenRunningExpensiveTasks = true;
  this->bConvertToDesiredPixelFormat = true;
  this->bForceAlphaToOneOnConversion = false;
  this->bApplyLinearToSRGBConversion = false;
  this->bAutostopOnCapture = false;
  this->NumberOfFramesToCapture = -1;
  this->CapturePhase = EndFrame;
  return this;
}

// operator= @ 14d78d7b0

FMediaCaptureOptions * __thiscall
FMediaCaptureOptions::operator=(FMediaCaptureOptions *this,FMediaCaptureOptions *param_1)

{
  this->bAutoRestartOnSourceSizeChange = param_1->bAutoRestartOnSourceSizeChange;
  this->OverrunAction = param_1->OverrunAction;
  this->Crop = param_1->Crop;
  FOpenColorIOColorConversionSettings::operator=
            (&this->ColorConversionSettings,&param_1->ColorConversionSettings);
  (this->CustomCapturePoint).field0_0x0 = (param_1->CustomCapturePoint).field0_0x0;
  this->ResizeMethod = param_1->ResizeMethod;
  this->bSkipFrameWhenRunningExpensiveTasks = param_1->bSkipFrameWhenRunningExpensiveTasks;
  this->bConvertToDesiredPixelFormat = param_1->bConvertToDesiredPixelFormat;
  this->bForceAlphaToOneOnConversion = param_1->bForceAlphaToOneOnConversion;
  this->bApplyLinearToSRGBConversion = param_1->bApplyLinearToSRGBConversion;
  this->bAutostopOnCapture = param_1->bAutostopOnCapture;
  this->NumberOfFramesToCapture = param_1->NumberOfFramesToCapture;
  this->CapturePhase = param_1->CapturePhase;
  return this;
}

// GetColorConversionSettingsString @ 14d7a9810

FString * __thiscall
FMediaCaptureOptions::GetColorConversionSettingsString
          (FMediaCaptureOptions *this,FString *__return_storage_ptr__)

{
  FOpenColorIOColorConversionSettings::ToString
            (&this->ColorConversionSettings,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PostSerialize @ 14d7b6880

void __thiscall FMediaCaptureOptions::PostSerialize(FMediaCaptureOptions *this,FArchive *param_1)

{
  return;
}

