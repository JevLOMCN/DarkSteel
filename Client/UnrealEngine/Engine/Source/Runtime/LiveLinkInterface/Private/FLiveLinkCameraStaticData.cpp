// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 2

// StaticStruct @ 14cfad090

UScriptStruct * __cdecl FLiveLinkCameraStaticData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData,(UObject *)pUVar1,
                         L"LiveLinkCameraStaticData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton;
}

// operator= @ 14cfb6cb0

FLiveLinkCameraStaticData * __thiscall
FLiveLinkCameraStaticData::operator=
          (FLiveLinkCameraStaticData *this,FLiveLinkCameraStaticData *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)this,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)param_1);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  this->bIsFieldOfViewSupported = param_1->bIsFieldOfViewSupported;
  this->bIsAspectRatioSupported = param_1->bIsAspectRatioSupported;
  this->bIsFocalLengthSupported = param_1->bIsFocalLengthSupported;
  this->bIsProjectionModeSupported = param_1->bIsProjectionModeSupported;
  this->FilmBackWidth = param_1->FilmBackWidth;
  this->FilmBackHeight = param_1->FilmBackHeight;
  this->bIsApertureSupported = param_1->bIsApertureSupported;
  this->bIsFocusDistanceSupported = param_1->bIsFocusDistanceSupported;
  this->bIsDepthOfFieldSupported = param_1->bIsDepthOfFieldSupported;
  this->bIsDynamicFilmbackSupported = param_1->bIsDynamicFilmbackSupported;
  return this;
}

