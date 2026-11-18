// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// StaticStruct @ 14ad78a70

UScriptStruct * __cdecl FMetaSoundDocumentInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundDocumentInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundDocumentInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundDocumentInfo,(UObject *)pUVar1,
                         L"MetaSoundDocumentInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMetaSoundDocumentInfo.OuterSingleton;
}

// FMetaSoundDocumentInfo @ 14ad99d70

FMetaSoundDocumentInfo * __thiscall
FMetaSoundDocumentInfo::FMetaSoundDocumentInfo
          (FMetaSoundDocumentInfo *this,FAssetData *param_1,bool *param_2)

{
  (this->DocumentVersion).Major = 1;
  (this->DocumentVersion).Minor = 0;
  (this->ReferencedAssetKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedAssetKeys).ArrayNum = 0;
  (this->ReferencedAssetKeys).ArrayMax = 0;
  *param_2 = true;
  return this;
}

// FMetaSoundDocumentInfo @ 14ad99d90

FMetaSoundDocumentInfo * __thiscall
FMetaSoundDocumentInfo::FMetaSoundDocumentInfo
          (FMetaSoundDocumentInfo *this,IMetaSoundDocumentInterface *param_1)

{
  (this->DocumentVersion).Major = 1;
  (this->DocumentVersion).Minor = 0;
  (this->ReferencedAssetKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedAssetKeys).ArrayNum = 0;
  (this->ReferencedAssetKeys).ArrayMax = 0;
  return this;
}

// FMetaSoundDocumentInfo @ 14ad99db0

FMetaSoundDocumentInfo * __thiscall
FMetaSoundDocumentInfo::FMetaSoundDocumentInfo(FMetaSoundDocumentInfo *this)

{
  this->bIsPreset = '\0';
  (this->ReferencedAssetKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedAssetKeys).ArrayNum = 0;
  (this->ReferencedAssetKeys).ArrayMax = 0;
  (this->DocumentVersion).Major = 1;
  (this->DocumentVersion).Minor = 0;
  return this;
}

// ExportToContext @ 14adb8760

void __thiscall
FMetaSoundDocumentInfo::ExportToContext
          (FMetaSoundDocumentInfo *this,FAssetRegistryTagsContext *param_1)

{
  return;
}

