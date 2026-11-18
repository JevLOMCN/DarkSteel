// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// operator== @ 14dd0ea00

bool __thiscall
FMoviePipelinePassIdentifier::operator==
          (FMoviePipelinePassIdentifier *this,FMoviePipelinePassIdentifier *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->Name).Data.ArrayNum;
  iVar1 = (param_1->Name).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14dd0ea3a;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Name).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14dd0ea3a:
  iVar2 = (this->CameraName).Data.ArrayNum;
  iVar1 = (param_1->CameraName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->CameraName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->CameraName).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (bVar3) {
    return true;
  }
  return false;
}

// StaticStruct @ 14dd5c910

UScriptStruct * __cdecl FMoviePipelinePassIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelinePassIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMoviePipelinePassIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier,(UObject *)pUVar1,
                         L"MoviePipelinePassIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FMoviePipelinePassIdentifier.OuterSingleton;
}

