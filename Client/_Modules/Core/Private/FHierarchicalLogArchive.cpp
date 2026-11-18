// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FHierarchicalLogArchive @ 1418bbd40

FHierarchicalLogArchive * __thiscall
FHierarchicalLogArchive::FHierarchicalLogArchive(FHierarchicalLogArchive *this,FArchive *param_1)

{
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,param_1);
  this->Indentation = 0;
  this->_padding_ = (longlong)&___7FHierarchicalLogArchive__6B_;
  return this;
}

// WriteLine @ 1419005c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHierarchicalLogArchive::WriteLine(FHierarchicalLogArchive *this,FString *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  int iVar4;
  undefined1 auStack_268 [32];
  TStringBuilderBase<char> local_248;
  char local_228 [512];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_248.Base = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.End = (char *)local_28;
  local_248.CurPos = local_228;
  if (this->Indentation < 1) {
    if (!param_2) goto LAB_141900775;
  }
  else {
    iVar4 = 0;
    if (0 < this->Indentation + -1) {
      do {
        if (local_248.End < local_248.CurPos + 4) {
          TStringBuilderBase<char>::Extend(&local_248,4);
        }
        pvVar3 = FGenericPlatformString::Memcpy(local_248.CurPos," |  ",4);
        iVar4 = iVar4 + 1;
        local_248.CurPos = (char *)((longlong)pvVar3 + 4);
      } while (iVar4 < this->Indentation + -1);
    }
    if (local_248.End < local_248.CurPos + 3) {
      TStringBuilderBase<char>::Extend(&local_248,3);
    }
    pvVar3 = FGenericPlatformString::Memcpy(local_248.CurPos," |-",3);
    local_248.CurPos = (char *)((longlong)pvVar3 + 3);
    if (!param_2) {
      if (local_248.End < (ulonglong *)((longlong)pvVar3 + 4U)) {
        TStringBuilderBase<char>::Extend(&local_248,1);
      }
      pvVar3 = FGenericPlatformString::Memcpy(local_248.CurPos,&::s__,1);
      local_248.CurPos = (char *)((longlong)pvVar3 + 1);
      goto LAB_141900775;
    }
    if (local_248.End < (ulonglong *)((longlong)pvVar3 + 4U)) {
      TStringBuilderBase<char>::Extend(&local_248,1);
    }
    pvVar3 = FGenericPlatformString::Memcpy(local_248.CurPos,&s__,1);
    local_248.CurPos = (char *)((longlong)pvVar3 + 1);
  }
  if (local_248.End < local_248.CurPos + 4) {
    TStringBuilderBase<char>::Extend(&local_248,4);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_248.CurPos,"[+] ",4);
  local_248.CurPos = (char *)((longlong)pvVar3 + 4);
LAB_141900775:
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (local_248.End < local_248.CurPos + iVar4) {
    TStringBuilderBase<char>::Extend(&local_248,(longlong)iVar4);
  }
  if (iVar4 != 0) {
    local_248.CurPos =
         FGenericPlatformString::Convert<wchar_t,char>
                   (local_248.CurPos,iVar4,(wchar_t *)pFVar2,iVar4);
  }
  if (local_248.End < local_248.CurPos + 2) {
    TStringBuilderBase<char>::Extend(&local_248,2);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_248.CurPos,&::s___,2);
  local_248.CurPos = (char *)((longlong)pvVar3 + 2);
  (**(code **)(this->_padding_ + 0x188))
            (this,local_248.Base,(longlong)((int)local_248.CurPos - (int)local_248.Base));
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_248);
  return;
}

