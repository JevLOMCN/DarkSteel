// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// CaptureStackTraceInternal @ 14181ddc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FMicrosoftPlatformStackWalk::CaptureStackTraceInternal
          (ulong64 *param_1,uint param_2,void *param_3,void *param_4,uint *param_5)

{
  DWORD64 DVar1;
  _CONTEXT *p_Var2;
  _CONTEXT *p_Var3;
  PRUNTIME_FUNCTION FunctionEntry;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  DWORD64 DVar7;
  DWORD64 *pDVar8;
  undefined1 auStackY_748 [32];
  ulonglong local_708;
  uint local_700;
  ulonglong local_6f8;
  PVOID local_6f0;
  _KNONVOLATILE_CONTEXT_POINTERS local_6e8;
  _CONTEXT local_5e8;
  _UNWIND_HISTORY_TABLE local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_748;
  uVar6 = 0;
  lVar4 = 9;
  p_Var2 = &local_5e8;
  do {
    pDVar8 = param_3;
    p_Var3 = p_Var2;
    DVar7 = pDVar8[1];
    p_Var3->P1Home = *pDVar8;
    p_Var3->P2Home = DVar7;
    DVar7 = pDVar8[3];
    p_Var3->P3Home = pDVar8[2];
    p_Var3->P4Home = DVar7;
    DVar7 = pDVar8[5];
    p_Var3->P5Home = pDVar8[4];
    p_Var3->P6Home = DVar7;
    DVar7 = pDVar8[6];
    DVar1 = pDVar8[7];
    p_Var3->ContextFlags = (int)DVar7;
    p_Var3->MxCsr = (int)(DVar7 >> 0x20);
    p_Var3->SegCs = (short)DVar1;
    p_Var3->SegDs = (short)(DVar1 >> 0x10);
    p_Var3->SegEs = (short)(DVar1 >> 0x20);
    p_Var3->SegFs = (short)(DVar1 >> 0x30);
    DVar7 = pDVar8[8];
    DVar1 = pDVar8[9];
    p_Var3->SegGs = (short)DVar7;
    p_Var3->SegSs = (short)(DVar7 >> 0x10);
    p_Var3->EFlags = (int)(DVar7 >> 0x20);
    p_Var3->Dr0 = DVar1;
    DVar7 = pDVar8[0xb];
    p_Var3->Dr1 = pDVar8[10];
    p_Var3->Dr2 = DVar7;
    DVar7 = pDVar8[0xd];
    p_Var3->Dr3 = pDVar8[0xc];
    p_Var3->Dr6 = DVar7;
    DVar7 = pDVar8[0xf];
    p_Var3->Dr7 = pDVar8[0xe];
    p_Var3->Rax = DVar7;
    lVar4 = lVar4 + -1;
    p_Var2 = (_CONTEXT *)&p_Var3->Rcx;
    param_3 = pDVar8 + 0x10;
  } while (lVar4 != 0);
  DVar7 = pDVar8[0x11];
  p_Var3->Rcx = pDVar8[0x10];
  p_Var3->Rdx = DVar7;
  DVar7 = pDVar8[0x13];
  p_Var3->Rbx = pDVar8[0x12];
  p_Var3->Rsp = DVar7;
  DVar7 = pDVar8[0x15];
  p_Var3->Rbp = pDVar8[0x14];
  p_Var3->Rsi = DVar7;
  DVar7 = pDVar8[0x17];
  p_Var3->Rdi = pDVar8[0x16];
  p_Var3->R8 = DVar7;
  DVar7 = pDVar8[0x19];
  p_Var3->R9 = pDVar8[0x18];
  p_Var3->R10 = DVar7;
  DVar7 = local_5e8.Rip;
  *param_5 = 0;
  if ((local_5e8.Rip != 0) && ((ulong64 *)local_5e8.Rsp != (ulong64 *)0x0)) {
    memset(&local_118,0,0xd8);
    while ((uVar5 = (uint)uVar6, uVar5 < param_2 && (DVar7 != 0))) {
      param_1[uVar6] = DVar7;
      *param_5 = uVar5;
      local_708 = 0;
      FunctionEntry = RtlLookupFunctionEntry(local_5e8.Rip,&local_708,&local_118);
      if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
        local_5e8.Rip = *(DWORD64 *)local_5e8.Rsp;
        local_5e8.Rsp = local_5e8.Rsp + 8;
      }
      else {
        memset(&local_6e8,0,0x100);
        local_6f0 = (PVOID)0x0;
        local_6f8 = 0;
        RtlVirtualUnwind(0,local_708,local_5e8.Rip,FunctionEntry,&local_5e8,&local_6f0,&local_6f8,
                         &local_6e8);
      }
      local_700 = uVar5 + 1;
      uVar6 = (ulonglong)local_700;
      DVar7 = local_5e8.Rip;
    }
    if (uVar5 < param_2) {
      memset(param_1 + uVar6,0,(ulonglong)(param_2 - uVar5) << 3);
    }
  }
  return 1;
}

// ExtractInfoFromModule @ 1418232c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FMicrosoftPlatformStackWalk::ExtractInfoFromModule
          (void *param_1,void *param_2,FStackWalkModuleInfo *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short *psVar5;
  bool bVar6;
  longlong lVar7;
  ForAnyElementType _Source;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  undefined1 auStack_4b8 [32];
  FString local_498;
  FString local_488;
  short *local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  wchar_t local_458 [264];
  wchar_t local_248 [264];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  local_468 = 0;
  local_478 = (short *)0x0;
  uStack_470 = 0;
  memset(local_248,0,0x208);
  memset(local_458,0,0x208);
  K32GetModuleInformation(param_1,param_2,&local_478,0x18);
  K32GetModuleFileNameExW(param_1,param_2,local_458,0x104);
  K32GetModuleBaseNameW(param_1,param_2,local_248,0x104);
  psVar5 = local_478;
  piVar12 = (int *)((longlong)*(int *)(local_478 + 0x1e) + (longlong)local_478);
  if ((*local_478 == 0x5a4d) && (*piVar12 == 0x4550)) {
    param_3->BaseOfImage = (ulong64)local_478;
    param_3->ImageSize = piVar12[0x14];
    param_3->TimeDateStamp = piVar12[2];
    ::FString::FString(&local_488,local_248);
    FPaths::GetBaseFilename(&local_498,&local_488,true);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
    _Source.Data = (FScriptContainerElement *)L"";
    if (local_498.Data.ArrayNum != 0) {
      _Source.Data = local_498.Data.AllocatorInstance.Data;
    }
    wcsncpy(param_3->ModuleName,(wchar_t *)_Source.Data,0x1f);
    uVar10 = 0;
    param_3->ModuleName[0x1f] = L'\0';
    wcscpy(param_3->LoadedImageName,local_458);
    wcscpy(param_3->ImageName,local_458);
    uVar2 = piVar12[0x2e];
    uVar8 = (ulonglong)(uint)piVar12[0x2f] / 7;
    uVar11 = (uint)(((uint)piVar12[0x2f] - uVar8 >> 1) + uVar8 >> 4);
    if (uVar11 != 0) {
      do {
        lVar7 = uVar10 * 0x1c;
        if (((*(int *)((longlong)psVar5 + lVar7 + 0xc + (ulonglong)uVar2) == 2) &&
            (0x17 < *(uint *)((longlong)psVar5 + lVar7 + 0x10 + (ulonglong)uVar2))) &&
           (uVar8 = (ulonglong)*(uint *)((longlong)psVar5 + lVar7 + 0x14 + (ulonglong)uVar2),
           *(int *)(uVar8 + (longlong)psVar5) == 0x53445352)) {
          puVar1 = (undefined8 *)(uVar8 + 4 + (longlong)psVar5);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          (param_3->PdbSig70).Data1 = (int)uVar3;
          (param_3->PdbSig70).Data2 = (short)((ulonglong)uVar3 >> 0x20);
          (param_3->PdbSig70).Data3 = (short)((ulonglong)uVar3 >> 0x30);
          *(undefined8 *)(param_3->PdbSig70).Data4 = uVar4;
          param_3->PdbAge = *(uint *)(uVar8 + 0x14 + (longlong)psVar5);
          break;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < uVar11);
    }
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

