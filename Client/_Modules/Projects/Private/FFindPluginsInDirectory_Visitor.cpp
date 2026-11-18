// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 1

// Visit @ 141e44a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPluginManager::FindPluginsInDirectory'::__l2::FFindPluginsInDirectory_Visitor::Visit
          (void *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  size_t sVar4;
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  sVar4 = wcslen(param_1);
  local_28[8] = 0;
  iVar3 = (int)sVar4;
  if (param_2) {
    builtin_wcsncpy(local_28,L"/Content",8);
    if ((iVar3 < 8) ||
       (iVar3 = FGenericPlatformStricmp::Stricmp(param_1 + (iVar3 + -8),local_28), iVar3 != 0)) {
      pFVar2 = *(ForAnyElementType **)((longlong)this + 0x20);
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      iVar3 = *(int *)&pFVar2[1].Data;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar3 + 1;
      ::FString::FString((FString *)(pFVar2->Data + (longlong)iVar3 * 0x10),param_1);
    }
  }
  else {
    builtin_wcsncpy(local_28,L".uplugin",8);
    if ((7 < iVar3) && (iVar3 = wcscmp(param_1 + (iVar3 + -8),local_28), iVar3 == 0)) {
      ::FString::operator=((FString *)((longlong)this + 0x10),param_1);
      return false;
    }
  }
  return true;
}

