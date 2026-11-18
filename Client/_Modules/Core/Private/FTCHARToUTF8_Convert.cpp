// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Convert<wchar_t> @ 14160eb50

int __cdecl
UE::Core::Private::FTCHARToUTF8_Convert::Convert<wchar_t>
          (uchar *param_1,int param_2,wchar_t *param_3,int param_4)

{
  wchar_t wVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  wchar_t *pwVar7;
  uchar *local_res8;
  int local_res10 [6];
  int iVar5;
  
  uVar6 = (ulonglong)(uint)param_4;
  local_res8 = param_1;
  local_res10[0] = param_2;
  do {
    if (param_4 < 1) {
LAB_14160ebe4:
      if (((int)local_res8 - (int)param_1 != -1) && (local_res8 != (uchar *)0x0)) {
        return (int)local_res8 - (int)param_1;
      }
      return -1;
    }
    uVar3 = (uint)(ushort)*param_3;
    pwVar7 = param_3 + 1;
    iVar5 = (int)uVar6;
    uVar4 = iVar5 - 1;
    uVar6 = (ulonglong)uVar4;
    if ((uVar3 & 0xfffffc00) == 0xd800) {
      if ((int)uVar4 < 1) {
        bVar2 = WriteCodepointToBuffer<char8_t_*>((uint)(ushort)*param_3,&local_res8,local_res10);
        if (!bVar2) {
          return -1;
        }
        goto LAB_14160ebe4;
      }
      wVar1 = *pwVar7;
      if ((wVar1 & 0xfc00U) == 0xdc00) {
        pwVar7 = param_3 + 2;
        uVar3 = uVar3 * 0x400 + -0x35fdc00 + (uint)(ushort)wVar1;
        uVar6 = (ulonglong)(iVar5 - 2);
      }
    }
    bVar2 = WriteCodepointToBuffer<char8_t_*>(uVar3,&local_res8,local_res10);
    if (!bVar2) {
      return -1;
    }
    param_4 = (int)uVar6;
    param_3 = pwVar7;
  } while( true );
}

