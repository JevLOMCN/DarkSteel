// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Exec_Runtime @ 148766a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FStatCmdEngine::Exec_Runtime
          (FStatCmdEngine *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  int iVar2;
  FStatRenderGlobals *pFVar3;
  UFont *pUVar4;
  EStatFontTypes EVar5;
  undefined1 auStackY_d8 [32];
  wchar_t *local_a8 [2];
  wchar_t local_98 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_a8[0] = param_2;
  bVar1 = FParse::Command(local_a8,L"stat",true);
  if (!bVar1) {
    return false;
  }
  bVar1 = FParse::Command(local_a8,L"display",true);
  if (!bVar1) {
    return false;
  }
  EVar5 = Small;
  if (local_a8[0] != (wchar_t *)0x0) {
    local_98[0x39] = L'\0';
    local_98[0x3a] = L'\0';
    local_98[0x3b] = L'\0';
    local_98[0x3c] = L'\0';
    local_98[0] = L'\0';
    local_98[1] = L'\0';
    local_98[2] = L'\0';
    local_98[3] = L'\0';
    local_98[4] = L'\0';
    local_98[5] = L'\0';
    local_98[6] = L'\0';
    local_98[7] = L'\0';
    local_98[8] = L'\0';
    local_98[0x3d] = L'\0';
    local_98[0x3e] = L'\0';
    local_98[9] = L'\0';
    local_98[10] = L'\0';
    local_98[0xb] = L'\0';
    local_98[0xc] = L'\0';
    local_98[0xd] = L'\0';
    local_98[0xe] = L'\0';
    local_98[0xf] = L'\0';
    local_98[0x10] = L'\0';
    local_98[0x3f] = 0;
    local_98[0x11] = L'\0';
    local_98[0x12] = L'\0';
    local_98[0x13] = L'\0';
    local_98[0x14] = L'\0';
    local_98[0x15] = L'\0';
    local_98[0x16] = L'\0';
    local_98[0x17] = L'\0';
    local_98[0x18] = L'\0';
    local_98[0x19] = L'\0';
    local_98[0x1a] = L'\0';
    local_98[0x1b] = L'\0';
    local_98[0x1c] = L'\0';
    local_98[0x1d] = L'\0';
    local_98[0x1e] = L'\0';
    local_98[0x1f] = L'\0';
    local_98[0x20] = L'\0';
    local_98[0x21] = L'\0';
    local_98[0x22] = L'\0';
    local_98[0x23] = L'\0';
    local_98[0x24] = L'\0';
    local_98[0x25] = L'\0';
    local_98[0x26] = L'\0';
    local_98[0x27] = L'\0';
    local_98[0x28] = L'\0';
    local_98[0x29] = L'\0';
    local_98[0x2a] = L'\0';
    local_98[0x2b] = L'\0';
    local_98[0x2c] = L'\0';
    local_98[0x2d] = L'\0';
    local_98[0x2e] = L'\0';
    local_98[0x2f] = L'\0';
    local_98[0x30] = L'\0';
    local_98[0x31] = L'\0';
    local_98[0x32] = L'\0';
    local_98[0x33] = L'\0';
    local_98[0x34] = L'\0';
    local_98[0x35] = L'\0';
    local_98[0x36] = L'\0';
    local_98[0x37] = L'\0';
    local_98[0x38] = L'\0';
    bVar1 = FParse::Value(local_a8[0],L"font=",local_98,0x40,true,(wchar_t **)0x0);
    if (bVar1) {
      iVar2 = FGenericPlatformStricmp::Stricmp(local_98,L"Tiny");
      EVar5 = Small;
      if (iVar2 == 0) {
        EVar5 = Tiny;
      }
    }
  }
  pFVar3 = GetStatRenderGlobals();
  if (pFVar3->StatFontType == EVar5) {
    return true;
  }
  pFVar3->StatFontType = EVar5;
  if (EVar5 == Tiny) {
    pUVar4 = UEngine::GetTinyFont();
  }
  else {
    if (EVar5 != Small) goto LAB_148766bbb;
    pUVar4 = UEngine::GetSmallFont();
  }
  pFVar3->StatFont = pUVar4;
LAB_148766bbb:
  pFVar3->bNeedRefresh = true;
  return true;
}

