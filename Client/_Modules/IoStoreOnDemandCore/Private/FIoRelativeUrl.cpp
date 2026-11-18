// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 1

// From @ 14458bef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoRelativeUrl __cdecl UE::FIoRelativeUrl::From(TStringView<char> *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char *_Src;
  bool bVar3;
  FIoRelativeUrl FVar4;
  void *pvVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined8 *in_RDX;
  ulong64 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TStringBuilderBase<char> local_c8;
  char local_a8 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar10 = *(int *)(in_RDX + 1);
  if (iVar10 == 0) {
    param_1->DataPtr = (char *)0x0;
  }
  else {
    iVar9 = 0;
    if (iVar10 < 1) {
      local_e8 = 0;
      local_e0 = iVar10;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4.Url.Chars = (TSharedString<char>)(*pcVar2)();
        return (FIoRelativeUrl)FVar4.Url.Chars;
      }
    }
    if (*(char *)*in_RDX == '/') {
      param_1->DataPtr = (char *)0x0;
      iVar10 = (int)in_RDX[1];
      if (iVar10 != 0) {
        sVar6 = (size_t)iVar10;
        puVar7 = FMemory::Malloc(sVar6 + 9,0);
        *puVar7 = 1;
        puVar7[1] = iVar10;
        param_1->DataPtr = (char *)(puVar7 + 2);
        if (0 < iVar10) {
          memcpy(puVar7 + 2,(void *)*in_RDX,sVar6);
        }
        param_1->DataPtr[sVar6] = '\0';
      }
    }
    else {
      local_c8.Base = local_a8;
      local_c8.CurPos = local_a8;
      local_c8.bIsDynamic = false;
      local_c8.bIsExternal = false;
      local_c8.End = (char *)local_28;
      pvVar5 = FGenericPlatformString::Memcpy(local_a8,&s__,1);
      local_d8 = *(undefined4 *)in_RDX;
      uStack_d4 = *(undefined4 *)((longlong)in_RDX + 4);
      uStack_d0 = *(undefined4 *)(in_RDX + 1);
      uStack_cc = *(undefined4 *)((longlong)in_RDX + 0xc);
      uVar1 = in_RDX[1];
      uVar8 = (ulong64)(int)uVar1;
      local_c8.CurPos = (char *)((longlong)pvVar5 + 1);
      if (local_c8.End < local_c8.CurPos + uVar8) {
        TStringBuilderBase<char>::Extend(&local_c8,uVar8);
      }
      if ((int)uVar1 != 0) {
        pvVar5 = FGenericPlatformString::Memcpy
                           (local_c8.CurPos,(void *)CONCAT44(uStack_d4,local_d8),uVar8);
        local_c8.CurPos = (char *)((longlong)pvVar5 + uVar8);
      }
      if (local_c8.End < local_c8.CurPos + 1) {
        TStringBuilderBase<char>::Extend(&local_c8,1);
      }
      _Src = local_c8.Base;
      *local_c8.CurPos = '\0';
      if (local_c8.Base != (char *)0x0) {
        sVar6 = strlen(local_c8.Base);
        iVar9 = (int)sVar6;
      }
      param_1->DataPtr = (char *)0x0;
      if (iVar9 != 0) {
        sVar6 = (size_t)iVar9;
        puVar7 = FMemory::Malloc(sVar6 + 9,0);
        *puVar7 = 1;
        puVar7[1] = iVar9;
        param_1->DataPtr = (char *)(puVar7 + 2);
        if (0 < iVar9) {
          memcpy(puVar7 + 2,_Src,sVar6);
        }
        param_1->DataPtr[sVar6] = '\0';
      }
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_c8);
    }
  }
  return (FIoRelativeUrl)(TSharedString<char>)param_1;
}

