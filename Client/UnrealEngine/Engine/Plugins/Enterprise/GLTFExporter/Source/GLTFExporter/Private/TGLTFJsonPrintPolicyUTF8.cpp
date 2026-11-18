// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// WriteFloat @ 14e619430

void __cdecl TGLTFJsonPrintPolicyUTF8::WriteFloat(FArchive *param_1,float param_2)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  ::FString::PrintfImpl(&local_28,L"%.9g");
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  WriteString(param_1,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteString @ 14e61f8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TGLTFJsonPrintPolicyUTF8::WriteString(FArchive *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t wVar1;
  int iVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  pwVar4 = param_2->DataPtr;
  if (0 < param_2->Size) {
    uVar5 = (ulonglong)(uint)param_2->Size;
    do {
      wVar1 = *pwVar4;
      if ((((wVar1 == L'\xfffe') || (wVar1 == L'\xffff')) || ((ushort)wVar1 - 0xd800 < 0x400)) ||
         ((ushort)wVar1 - 0xdc00 < 0x400)) {
        wVar1 = L'?';
LAB_14e61f960:
        local_28 = (ulonglong)(byte)wVar1;
        iVar2 = (int)&local_28 + 1;
      }
      else {
        if ((ushort)wVar1 < 0x80) goto LAB_14e61f960;
        uVar3 = (undefined1)((ushort)wVar1 >> 6);
        if ((ushort)wVar1 < 0x800) {
          local_28 = (ulonglong)CONCAT11((char)wVar1,uVar3) & 0xffffffffffff3fff | 0x80c0;
          iVar2 = (int)&local_28 + 2;
        }
        else {
          local_28 = (ulonglong)CONCAT12((char)wVar1,CONCAT11(uVar3,(byte)((ushort)wVar1 >> 0xc))) &
                     0xffffffffff3f3fff | 0x8080e0;
          iVar2 = (int)&local_28 + 3;
        }
      }
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,&local_28,(longlong)(iVar2 - (int)&local_28));
      pwVar4 = pwVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

