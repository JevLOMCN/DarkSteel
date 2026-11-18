// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Visit @ 142aac760

bool __thiscall
UE::PakFile::Private::FPreventDuplicatesStatVisitor::Visit
          (FPreventDuplicatesStatVisitor *this,wchar_t *param_1,FFileStatData *param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = FPreventDuplicatesVisitorBase::CheckDuplicate
                    ((FPreventDuplicatesVisitorBase *)&this->_padding_,param_1);
  if (bVar1) {
    return true;
  }
  if ((int)this->_padding_ == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)this->_padding_;
  }
  bVar1 = IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit
                    (this->Visitor,pwVar2,param_2);
  return bVar1;
}

