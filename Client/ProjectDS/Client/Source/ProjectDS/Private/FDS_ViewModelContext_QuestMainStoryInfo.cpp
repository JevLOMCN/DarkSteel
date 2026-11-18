// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f0e80

UScriptStruct * __cdecl FDS_ViewModelContext_QuestMainStoryInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_QuestMainStoryInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_QuestMainStoryInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_QuestMainStoryInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_QuestMainStoryInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_QuestMainStoryInfo.OuterSingleton;
}

// ~FDS_ViewModelContext_QuestMainStoryInfo @ 14b5f7a40

void __thiscall
FDS_ViewModelContext_QuestMainStoryInfo::~FDS_ViewModelContext_QuestMainStoryInfo
          (FDS_ViewModelContext_QuestMainStoryInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Story).FormatArgs.AllocatorInstance.Data,
             (this->Story).FormatArgs.ArrayNum);
  pFVar1 = (this->Story).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Story).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Title).FormatArgs.AllocatorInstance.Data,
             (this->Title).FormatArgs.ArrayNum);
  pFVar1 = (this->Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

