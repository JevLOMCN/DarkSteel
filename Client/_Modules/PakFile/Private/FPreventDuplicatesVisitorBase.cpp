// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// CheckDuplicate @ 142a61f40

bool __thiscall
UE::PakFile::Private::FPreventDuplicatesVisitorBase::CheckDuplicate
          (FPreventDuplicatesVisitorBase *this,wchar_t *param_1)

{
  int iVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  
  ::FString::Reset(&this->NormalizedFilename,0);
  sVar4 = wcslen(param_1);
  ::FString::AppendChars(&this->NormalizedFilename,param_1,(int)sVar4);
  FPaths::MakeStandardFilename(&this->NormalizedFilename);
  iVar1 = (this->NormalizedFilename).Data.ArrayNum;
  this_00 = this->VisitedFiles;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->NormalizedFilename).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (this_00,uVar2,&this->NormalizedFilename);
  if (iVar3 == -1) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (this->VisitedFiles,(FString *)&stack0x00000008,(bool *)&this->NormalizedFilename);
    return false;
  }
  return true;
}

