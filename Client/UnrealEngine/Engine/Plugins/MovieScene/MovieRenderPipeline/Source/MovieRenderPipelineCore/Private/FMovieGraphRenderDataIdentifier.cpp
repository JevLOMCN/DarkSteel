// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// StaticStruct @ 14dc69180

UScriptStruct * __cdecl FMovieGraphRenderDataIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphRenderDataIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphRenderDataIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier,(UObject *)pUVar1
                         ,L"MovieGraphRenderDataIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphRenderDataIdentifier.OuterSingleton;
}

// operator= @ 14dc756b0

FMovieGraphRenderDataIdentifier * __thiscall
FMovieGraphRenderDataIdentifier::operator=
          (FMovieGraphRenderDataIdentifier *this,FMovieGraphRenderDataIdentifier *param_1)

{
  this->RootBranchName = param_1->RootBranchName;
  ::FString::operator=(&this->LayerName,&param_1->LayerName);
  ::FString::operator=(&this->RendererName,&param_1->RendererName);
  ::FString::operator=(&this->SubResourceName,&param_1->SubResourceName);
  ::FString::operator=(&this->CameraName,&param_1->CameraName);
  return this;
}

// operator== @ 14dcb4040

bool __thiscall
FMovieGraphRenderDataIdentifier::operator==
          (FMovieGraphRenderDataIdentifier *this,FMovieGraphRenderDataIdentifier *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (this->RootBranchName != param_1->RootBranchName) {
    return false;
  }
  iVar2 = (this->LayerName).Data.ArrayNum;
  iVar1 = (param_1->LayerName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->LayerName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->LayerName).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_14dcb4081;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_14dcb4081:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (this->RendererName).Data.ArrayNum;
  iVar1 = (param_1->RendererName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->RendererName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->RendererName).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_14dcb40b1;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_14dcb40b1:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (this->SubResourceName).Data.ArrayNum;
  iVar1 = (param_1->SubResourceName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14dcb40e4;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->SubResourceName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->SubResourceName).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14dcb40e4:
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

// ~FMovieGraphRenderDataIdentifier @ 14dd0d270

void __thiscall
FMovieGraphRenderDataIdentifier::~FMovieGraphRenderDataIdentifier
          (FMovieGraphRenderDataIdentifier *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CameraName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubResourceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

