// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Convert_Impl<wchar_t_*> @ 1418ac140

void __cdecl
TUTF32ToUTF16_Convert<char32_t,wchar_t>::Convert_Impl<wchar_t_*>
          (wchar_t **param_1,int param_2,wchar32 *param_3,int param_4)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar32 wVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    lVar6 = 0;
    do {
      pwVar2 = *param_1;
      wVar3 = param_3[lVar6];
      if (param_2 == 0) {
        return;
      }
      if (((((uint)wVar3 < 0xfffe) || ((uint)(wVar3 + L'\xffff0000') < 0x100000)) &&
          (0x3ff < (uint)(wVar3 + L'\xffff2800'))) && (0x3ff < (uint)(wVar3 + L'\xffff2400'))) {
        uVar1 = wVar3 + L'\xffff0000';
        if (0xfffff < uVar1) goto LAB_1418ac202;
        pwVar5 = pwVar2;
        if (1 < (uint)param_2) {
          pwVar5 = pwVar2 + 2;
          *pwVar2 = (short)(uVar1 >> 10) + L'\xd800';
          pwVar2[1] = ((ushort)uVar1 & 0x3ff) + L'\xdc00';
        }
      }
      else {
        wVar3 = L'?';
LAB_1418ac202:
        pwVar5 = pwVar2 + 1;
        if ((uint)wVar3 < 0x110000) {
          *pwVar2 = (wchar_t)wVar3;
        }
        else {
          *pwVar2 = L'?';
        }
      }
      iVar4 = (int)((longlong)pwVar5 - (longlong)pwVar2 >> 1);
      if (iVar4 < 1) {
        return;
      }
      param_2 = param_2 - iVar4;
      lVar6 = lVar6 + 1;
      *param_1 = *param_1 + iVar4;
    } while (lVar6 < param_4);
  }
  return;
}

