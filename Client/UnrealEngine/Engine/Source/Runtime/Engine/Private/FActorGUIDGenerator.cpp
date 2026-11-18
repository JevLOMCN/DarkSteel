// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// NewActorGUID @ 147e70e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall FActorGUIDGenerator::NewActorGUID(FActorGUIDGenerator *this,FName param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName FVar7;
  FDateTime FVar8;
  ulonglong uVar9;
  FString *pFVar10;
  void *pvVar11;
  wchar_t *pwVar12;
  ulong64 uVar13;
  byte bVar14;
  short sVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong lVar20;
  double dVar21;
  FName local_res18;
  undefined1 auStack_8c8 [32];
  undefined4 local_8a8;
  undefined2 local_8a4;
  undefined2 local_8a2;
  undefined1 local_8a0;
  longlong local_898;
  undefined8 local_890;
  FString local_880;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8c8;
  FDateTime::Now();
  if ((local_898 <= (this->Origin).Ticks) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Now > Origin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActor.cpp"
                         ,0x13c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    FVar7 = (FName)(*pcVar5)();
    return FVar7;
  }
  FVar8 = FDateTime::Now();
  uVar2 = this->Counter;
  dVar21 = (double)(*(longlong *)FVar8.Ticks - (this->Origin).Ticks) * __real_3f1a36e2eb1c432d;
  if (__real_43e0000000000000 <= dVar21) {
    dVar21 = dVar21 - __real_43e0000000000000;
  }
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  this->Counter = uVar2 + 1;
  uVar18 = (longlong)dVar21 * 1000 + (ulonglong)(uVar2 % 1000);
  local_8a8 = *(undefined4 *)this->UniqueID;
  local_8a4 = *(undefined2 *)(this->UniqueID + 4);
  uVar9 = uVar18 >> 0x1e;
  local_8a2 = (undefined2)uVar9;
  local_890._2_1_ = (undefined1)(uVar9 >> 0x10);
  local_8a0 = local_890._2_1_;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  local_890 = uVar9;
  pFVar10 = ::FName::ToString(&local_res18,&local_880);
  iVar3 = (pFVar10->Data).ArrayNum;
  pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
  iVar17 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar17 = 0;
  }
  uVar13 = (ulong64)iVar17;
  if (local_868.End < local_868.CurPos + uVar13) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,uVar13);
  }
  if (iVar17 != 0) {
    pvVar11 = FGenericPlatformString::Memcpy(local_868.CurPos,pFVar4,uVar13 * 2);
    local_868.CurPos = (wchar_t *)((longlong)pvVar11 + uVar13 * 2);
  }
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  if (local_868.End < local_868.CurPos + 6) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,6);
  }
  pvVar11 = FGenericPlatformString::Memcpy(local_868.CurPos,L"_UAID_",0xc);
  pbVar19 = (byte *)&local_8a8;
  lVar20 = 9;
  local_868.CurPos = (wchar_t *)((longlong)pvVar11 + 0xc);
  do {
    bVar14 = *pbVar19;
    bVar16 = bVar14 >> 4;
    sVar15 = 0x37;
    if (bVar16 < 10) {
      sVar15 = 0x30;
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    bVar14 = bVar14 & 0xf;
    *local_868.CurPos = (ushort)bVar16 + sVar15;
    pwVar12 = local_868.CurPos + 1;
    sVar15 = 0x37;
    if (bVar14 < 10) {
      sVar15 = 0x30;
    }
    pwVar1 = local_868.CurPos + 2;
    local_868.CurPos = pwVar12;
    if (local_868.End < pwVar1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    pwVar12 = local_868.CurPos;
    pbVar19 = pbVar19 + 1;
    *local_868.CurPos = (ushort)bVar14 + sVar15;
    local_868.CurPos = local_868.CurPos + 1;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  if (local_868.End < pwVar12 + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = L'\0';
  ::FName::FName((FName *)param_1,local_868.Base,(uint)uVar18 & 0x3fffffff | 0x40000000);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return param_1;
}

