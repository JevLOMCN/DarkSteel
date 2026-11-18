// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// ShouldVisitLeafPathname @ 142aa03c0

bool __thiscall
UE::PakFile::Private::FPakFileDirectoryVisitor::ShouldVisitLeafPathname
          (FPakFileDirectoryVisitor *this,TStringView<wchar_t> *param_1)

{
  undefined1 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  uVar1 = (**(code **)(this->Inner->_padding_ + 8))(this->Inner,&local_18);
  return (bool)uVar1;
}

// Visit @ 142aac3e0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
UE::PakFile::Private::FPakFileDirectoryVisitor::Visit
          (FPakFileDirectoryVisitor *this,FString *param_1,FString *param_2,bool param_3,
          FPakFile *param_4)

{
  FDirectoryVisitor *pFVar1;
  undefined1 uVar2;
  
  pFVar1 = this->Inner;
  if ((param_2->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142aac3f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pFVar1->_padding_ + 0x10))
                      (pFVar1,(param_2->Data).AllocatorInstance.Data,param_3);
    return (bool)uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000142aac404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,L"",param_3);
  return (bool)uVar2;
}

