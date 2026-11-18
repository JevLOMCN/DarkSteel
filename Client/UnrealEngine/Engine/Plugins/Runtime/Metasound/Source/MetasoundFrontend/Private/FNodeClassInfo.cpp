// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// FNodeClassInfo @ 14ae59e60

FNodeClassInfo * __thiscall
Metasound::Frontend::FNodeClassInfo::FNodeClassInfo(FNodeClassInfo *this,FNodeClassInfo *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = (param_1->ClassName).Name;
  (this->ClassName).Namespace = (param_1->ClassName).Namespace;
  (this->ClassName).Name = FVar1;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  this->Type = param_1->Type;
  uVar2 = (param_1->AssetClassID).B;
  uVar3 = (param_1->AssetClassID).C;
  uVar4 = (param_1->AssetClassID).D;
  (this->AssetClassID).A = (param_1->AssetClassID).A;
  (this->AssetClassID).B = uVar2;
  (this->AssetClassID).C = uVar3;
  (this->AssetClassID).D = uVar4;
  FVar1 = (param_1->AssetPath).AssetName;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar1;
  this->Version = param_1->Version;
  return this;
}

// FNodeClassInfo @ 14ae59ea0

FNodeClassInfo * __thiscall
Metasound::Frontend::FNodeClassInfo::FNodeClassInfo(FNodeClassInfo *this,FNodeClassInfo *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = (param_1->ClassName).Name;
  (this->ClassName).Namespace = (param_1->ClassName).Namespace;
  (this->ClassName).Name = FVar1;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  this->Type = param_1->Type;
  uVar2 = (param_1->AssetClassID).B;
  uVar3 = (param_1->AssetClassID).C;
  uVar4 = (param_1->AssetClassID).D;
  (this->AssetClassID).A = (param_1->AssetClassID).A;
  (this->AssetClassID).B = uVar2;
  (this->AssetClassID).C = uVar3;
  (this->AssetClassID).D = uVar4;
  FVar1 = (param_1->AssetPath).AssetName;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar1;
  this->Version = param_1->Version;
  return this;
}

// FNodeClassInfo @ 14ae59ee0

FNodeClassInfo * __thiscall
Metasound::Frontend::FNodeClassInfo::FNodeClassInfo
          (FNodeClassInfo *this,FMetasoundFrontendClassMetadata *param_1)

{
  FName FVar1;
  EMetasoundFrontendClassType EVar2;
  bool bVar3;
  FString *pFVar4;
  FMetasoundFrontendVersionNumber *pFVar5;
  FString local_18;
  
  FVar1 = (param_1->ClassName).Name;
  (this->ClassName).Namespace = (param_1->ClassName).Namespace;
  (this->ClassName).Name = FVar1;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  EVar2 = FMetasoundFrontendClassMetadata::GetType(param_1);
  this->Type = EVar2;
  pFVar4 = ::FName::ToString(&(param_1->ClassName).Name,&local_18);
  bVar3 = FGuid::Parse(pFVar4,&this->AssetClassID);
  if (!bVar3) {
    (this->AssetClassID).C = 0;
    (this->AssetClassID).D = 0;
    (this->AssetClassID).A = 0;
    (this->AssetClassID).B = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  pFVar5 = FMetasoundFrontendClassMetadata::GetVersion(param_1);
  this->Version = *pFVar5;
  return this;
}

// FNodeClassInfo @ 14ae59f90

FNodeClassInfo * __thiscall
Metasound::Frontend::FNodeClassInfo::FNodeClassInfo
          (FNodeClassInfo *this,FMetasoundFrontendGraphClass *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  FString *pFVar5;
  FMetasoundFrontendVersionNumber *pFVar6;
  FString local_18;
  
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar2 = *(undefined4 *)&param_1->_padding_;
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->ClassName).Namespace.ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->ClassName).Namespace.Number = uVar1;
  (this->ClassName).Name.ComparisonIndex = (FNameEntryId)uVar2;
  (this->ClassName).Name.Number = uVar3;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->ClassName).Variant.ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->ClassName).Variant.Number = uVar1;
  this->Type = External;
  pFVar5 = ::FName::ToString(&(this->ClassName).Name,&local_18);
  bVar4 = FGuid::Parse(pFVar5,&this->AssetClassID);
  if (!bVar4) {
    (this->AssetClassID).C = 0;
    (this->AssetClassID).D = 0;
    (this->AssetClassID).A = 0;
    (this->AssetClassID).B = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  pFVar6 = FMetasoundFrontendClassMetadata::GetVersion
                     ((FMetasoundFrontendClassMetadata *)&param_1->_padding_);
  this->Version = *pFVar6;
  return this;
}

// FNodeClassInfo @ 14ae5a030

FNodeClassInfo * __thiscall
Metasound::Frontend::FNodeClassInfo::FNodeClassInfo
          (FNodeClassInfo *this,FMetasoundFrontendGraphClass *param_1,FTopLevelAssetPath *param_2)

{
  FName FVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  FString *pFVar6;
  FMetasoundFrontendVersionNumber *pFVar7;
  FString local_18;
  
  uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar3 = *(undefined4 *)&param_1->_padding_;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->ClassName).Namespace.ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->ClassName).Namespace.Number = uVar2;
  (this->ClassName).Name.ComparisonIndex = (FNameEntryId)uVar3;
  (this->ClassName).Name.Number = uVar4;
  uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->ClassName).Variant.ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->ClassName).Variant.Number = uVar2;
  this->Type = External;
  pFVar6 = ::FName::ToString(&(this->ClassName).Name,&local_18);
  bVar5 = FGuid::Parse(pFVar6,&this->AssetClassID);
  if (!bVar5) {
    (this->AssetClassID).C = 0;
    (this->AssetClassID).D = 0;
    (this->AssetClassID).A = 0;
    (this->AssetClassID).B = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar1 = param_2->AssetName;
  (this->AssetPath).PackageName = param_2->PackageName;
  (this->AssetPath).AssetName = FVar1;
  pFVar7 = FMetasoundFrontendClassMetadata::GetVersion
                     ((FMetasoundFrontendClassMetadata *)&param_1->_padding_);
  this->Version = *pFVar7;
  return this;
}

// FNodeClassInfo @ 14ae5a0d0

FNodeClassInfo * __thiscall
Metasound::Frontend::FNodeClassInfo::FNodeClassInfo(FNodeClassInfo *this)

{
  this->Type = Invalid;
  (this->ClassName).Namespace.ComparisonIndex = 0;
  (this->ClassName).Namespace.Number = 0;
  (this->ClassName).Name.ComparisonIndex = 0;
  (this->ClassName).Name.Number = 0;
  (this->ClassName).Variant.ComparisonIndex = 0;
  (this->ClassName).Variant.Number = 0;
  (this->AssetClassID).A = 0;
  (this->AssetClassID).B = 0;
  (this->AssetClassID).C = 0;
  (this->AssetClassID).D = 0;
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  (this->Version).Major = 1;
  (this->Version).Minor = 0;
  return this;
}

// operator= @ 14ae5cc20

FNodeClassInfo * __thiscall
Metasound::Frontend::FNodeClassInfo::operator=(FNodeClassInfo *this,FNodeClassInfo *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = (param_1->ClassName).Name;
  (this->ClassName).Namespace = (param_1->ClassName).Namespace;
  (this->ClassName).Name = FVar1;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  this->Type = param_1->Type;
  uVar2 = (param_1->AssetClassID).B;
  uVar3 = (param_1->AssetClassID).C;
  uVar4 = (param_1->AssetClassID).D;
  (this->AssetClassID).A = (param_1->AssetClassID).A;
  (this->AssetClassID).B = uVar2;
  (this->AssetClassID).C = uVar3;
  (this->AssetClassID).D = uVar4;
  FVar1 = (param_1->AssetPath).AssetName;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar1;
  this->Version = param_1->Version;
  return this;
}

// operator= @ 14ae5cc60

FNodeClassInfo * __thiscall
Metasound::Frontend::FNodeClassInfo::operator=(FNodeClassInfo *this,FNodeClassInfo *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = (param_1->ClassName).Name;
  (this->ClassName).Namespace = (param_1->ClassName).Namespace;
  (this->ClassName).Name = FVar1;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  this->Type = param_1->Type;
  uVar2 = (param_1->AssetClassID).B;
  uVar3 = (param_1->AssetClassID).C;
  uVar4 = (param_1->AssetClassID).D;
  (this->AssetClassID).A = (param_1->AssetClassID).A;
  (this->AssetClassID).B = uVar2;
  (this->AssetClassID).C = uVar3;
  (this->AssetClassID).D = uVar4;
  FVar1 = (param_1->AssetPath).AssetName;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar1;
  this->Version = param_1->Version;
  return this;
}

