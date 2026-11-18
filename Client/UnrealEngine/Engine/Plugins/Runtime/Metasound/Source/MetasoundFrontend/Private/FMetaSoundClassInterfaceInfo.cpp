// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// StaticStruct @ 14ae49ce0

UScriptStruct * __cdecl FMetaSoundClassInterfaceInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassInterfaceInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundClassInterfaceInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundClassInterfaceInfo,(UObject *)pUVar1,
                         L"MetaSoundClassInterfaceInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMetaSoundClassInterfaceInfo.OuterSingleton;
}

// FMetaSoundClassInterfaceInfo @ 14ae599c0

FMetaSoundClassInterfaceInfo * __thiscall
FMetaSoundClassInterfaceInfo::FMetaSoundClassInterfaceInfo
          (FMetaSoundClassInterfaceInfo *this,FAssetData *param_1,bool *param_2)

{
  (this->DefinedInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefinedInterfaces).ArrayNum = 0;
  (this->DefinedInterfaces).ArrayMax = 0;
  FText::FText(&(this->SearchInfo).ClassDisplayName);
  FText::FText(&(this->SearchInfo).ClassDescription);
  (this->SearchInfo).Hierarchy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchInfo).Hierarchy.ArrayNum = 0;
  (this->SearchInfo).Hierarchy.ArrayMax = 0;
  (this->SearchInfo).Keywords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchInfo).Keywords.ArrayNum = 0;
  (this->SearchInfo).Keywords.ArrayMax = 0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  (this->InheritedInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InheritedInterfaces).ArrayNum = 0;
  (this->InheritedInterfaces).ArrayMax = 0;
  *param_2 = true;
  return this;
}

// FMetaSoundClassInterfaceInfo @ 14ae59a40

FMetaSoundClassInterfaceInfo * __thiscall
FMetaSoundClassInterfaceInfo::FMetaSoundClassInterfaceInfo
          (FMetaSoundClassInterfaceInfo *this,IMetaSoundDocumentInterface *param_1)

{
  (this->DefinedInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefinedInterfaces).ArrayNum = 0;
  (this->DefinedInterfaces).ArrayMax = 0;
  FText::FText(&(this->SearchInfo).ClassDisplayName);
  FText::FText(&(this->SearchInfo).ClassDescription);
  (this->SearchInfo).Hierarchy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchInfo).Hierarchy.ArrayNum = 0;
  (this->SearchInfo).Hierarchy.ArrayMax = 0;
  (this->SearchInfo).Keywords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchInfo).Keywords.ArrayNum = 0;
  (this->SearchInfo).Keywords.ArrayMax = 0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  (this->InheritedInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InheritedInterfaces).ArrayNum = 0;
  (this->InheritedInterfaces).ArrayMax = 0;
  return this;
}

// FMetaSoundClassInterfaceInfo @ 14ae59ab0

FMetaSoundClassInterfaceInfo * __thiscall
FMetaSoundClassInterfaceInfo::FMetaSoundClassInterfaceInfo(FMetaSoundClassInterfaceInfo *this)

{
  (this->DefinedInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefinedInterfaces).ArrayNum = 0;
  (this->DefinedInterfaces).ArrayMax = 0;
  FText::FText(&(this->SearchInfo).ClassDisplayName);
  FText::FText(&(this->SearchInfo).ClassDescription);
  (this->SearchInfo).Hierarchy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchInfo).Hierarchy.ArrayNum = 0;
  (this->SearchInfo).Hierarchy.ArrayMax = 0;
  (this->SearchInfo).Keywords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchInfo).Keywords.ArrayNum = 0;
  (this->SearchInfo).Keywords.ArrayMax = 0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  (this->InheritedInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InheritedInterfaces).ArrayNum = 0;
  (this->InheritedInterfaces).ArrayMax = 0;
  return this;
}

// ExportToContext @ 14ae70f00

void __thiscall
FMetaSoundClassInterfaceInfo::ExportToContext
          (FMetaSoundClassInterfaceInfo *this,FAssetRegistryTagsContext *param_1)

{
  return;
}

