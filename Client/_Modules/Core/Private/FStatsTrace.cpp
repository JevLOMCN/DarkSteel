// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// Add @ 141a74e60

void __cdecl FStatsTrace::Add(FName *param_1,double param_2)

{
  double *local_res8;
  double local_res10;
  FThreadState *local_res18 [2];
  
  if ((*param_1 != (FName)0x0) && (-1 < StatsChannel->Enabled)) {
    local_res10 = param_2;
    FStatsTraceInternal::BeginEncodeOp(param_1,AddFloat,local_res18,(uchar **)&local_res8);
    *local_res8 = local_res10;
    local_res18[0]->BufferSize = ((short)local_res8 - (short)local_res18[0]) - 2;
  }
  return;
}

// Add @ 141a74ec0

void __cdecl FStatsTrace::Add(FName *param_1,long64 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  byte *local_res8 [2];
  FThreadState *local_res18 [2];
  
  if ((*param_1 != (FName)0x0) && (-1 < StatsChannel->Enabled)) {
    FStatsTraceInternal::BeginEncodeOp(param_1,AddInteger,local_res18,local_res8);
    uVar2 = param_2 >> 0x3f ^ param_2 * 2;
    do {
      bVar3 = 0;
      bVar1 = (byte)uVar2;
      if (0x7f < uVar2) {
        bVar3 = 0x80;
      }
      uVar2 = uVar2 >> 7;
      *local_res8[0] = bVar3 | bVar1 & 0x7f;
      local_res8[0] = local_res8[0] + 1;
    } while (uVar2 != 0);
    local_res18[0]->BufferSize = ((short)local_res8[0] - (short)local_res18[0]) - 10;
  }
  return;
}

// DeclareStat @ 141a7db10

void __cdecl
FStatsTrace::DeclareStat
          (FName *param_1,char *param_2,wchar_t *param_3,char *param_4,bool param_5,bool param_6,
          bool param_7)

{
  uint *puVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  uchar *puVar4;
  int iVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int iVar9;
  FImportantLogScope local_38;
  
  if ((*param_1 != (FName)0x0) && (-1 < StatsChannel->Enabled)) {
    sVar6 = strlen(param_2);
    iVar9 = (int)sVar6;
    uVar7 = wcslen(param_3);
    sVar6 = strlen(param_4);
    iVar5 = (int)sVar6;
    if (-1 < StatsChannel->Enabled) {
      UE::Trace::Private::FImportantLogScope::Enter<FStatsSpecFields>
                (&local_38,(int)uVar7 + iVar5 + iVar9);
      puVar4 = local_38.Ptr;
      *(uint *)local_38.Ptr = (param_1->ComparisonIndex).Value;
      *(bool *)((longlong)local_38.Ptr + 4) = param_5;
      *(bool *)((longlong)local_38.Ptr + 5) = param_6;
      *(bool *)((longlong)local_38.Ptr + 6) = param_7;
      if (iVar9 < 0) {
        sVar6 = strlen(param_2);
        iVar9 = (int)sVar6;
      }
      puVar1 = (uint *)((longlong)puVar4 + (longlong)local_38.AuxCursor);
      *puVar1 = iVar9 << 0xd | 0x400;
      *(undefined1 *)puVar1 = 1;
      memcpy(puVar1 + 1,param_2,(longlong)iVar9);
      local_38.AuxCursor = local_38.AuxCursor + iVar9;
      *(undefined1 *)((longlong)puVar4 + (longlong)local_38.AuxCursor + 4) = 3;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
        wVar2 = *param_3;
        pwVar3 = param_3;
        while (wVar2 != L'\0') {
          pwVar3 = pwVar3 + 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          wVar2 = *pwVar3;
        }
      }
      iVar9 = (int)uVar7;
      *(uint *)((longlong)puVar4 + (longlong)local_38.AuxCursor + 4) = iVar9 << 0xd | 0x500;
      *(undefined1 *)((longlong)puVar4 + (longlong)local_38.AuxCursor + 4) = 1;
      puVar8 = (undefined1 *)((longlong)puVar4 + (longlong)local_38.AuxCursor + 8);
      if (0 < iVar9) {
        uVar7 = uVar7 & 0xffffffff;
        do {
          wVar2 = *param_3;
          param_3 = param_3 + 1;
          *puVar8 = (char)wVar2;
          puVar8 = puVar8 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      iVar9 = local_38.AuxCursor + 4 + iVar9;
      *(undefined1 *)((longlong)puVar4 + (longlong)iVar9 + 4) = 3;
      if (iVar5 < 0) {
        sVar6 = strlen(param_4);
        iVar5 = (int)sVar6;
      }
      *(uint *)((longlong)puVar4 + (longlong)iVar9 + 4) = iVar5 << 0xd | 0x600;
      *(undefined1 *)((longlong)puVar4 + (longlong)iVar9 + 4) = 1;
      memcpy((void *)((longlong)puVar4 + (longlong)iVar9 + 8),param_4,(longlong)iVar5);
      *(undefined1 *)((longlong)puVar4 + (longlong)(iVar9 + iVar5) + 8) = 3;
      LOCK();
      *(int *)((longlong)local_38.Ptr + (longlong)local_38.BufferOffset) =
           *(int *)((longlong)local_38.Ptr + (longlong)local_38.BufferOffset) + 1;
      UNLOCK();
    }
  }
  return;
}

// Decrement @ 141a7dd00

void __cdecl FStatsTrace::Decrement(FName *param_1)

{
  short local_res8 [4];
  FThreadState *local_res10 [3];
  
  if ((*param_1 != (FName)0x0) && (-1 < StatsChannel->Enabled)) {
    FStatsTraceInternal::BeginEncodeOp(param_1,Decrement,local_res10,(uchar **)local_res8);
    local_res10[0]->BufferSize = (local_res8[0] - (short)local_res10[0]) - 10;
  }
  return;
}

// Increment @ 141a832c0

void __cdecl FStatsTrace::Increment(FName *param_1)

{
  short local_res8 [4];
  FThreadState *local_res10 [3];
  
  if ((*param_1 != (FName)0x0) && (-1 < StatsChannel->Enabled)) {
    FStatsTraceInternal::BeginEncodeOp(param_1,Increment,local_res10,(uchar **)local_res8);
    local_res10[0]->BufferSize = (local_res8[0] - (short)local_res10[0]) - 10;
  }
  return;
}

// Set @ 141a919b0

void __cdecl FStatsTrace::Set(FName *param_1,double param_2)

{
  double *local_res8;
  double local_res10;
  FThreadState *local_res18 [2];
  
  if ((*param_1 != (FName)0x0) && (-1 < StatsChannel->Enabled)) {
    local_res10 = param_2;
    FStatsTraceInternal::BeginEncodeOp(param_1,SetFloat,local_res18,(uchar **)&local_res8);
    *local_res8 = local_res10;
    local_res18[0]->BufferSize = ((short)local_res8 - (short)local_res18[0]) - 2;
  }
  return;
}

// Set @ 141a91a10

void __cdecl FStatsTrace::Set(FName *param_1,long64 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  byte *local_res8 [2];
  FThreadState *local_res18 [2];
  
  if ((*param_1 != (FName)0x0) && (-1 < StatsChannel->Enabled)) {
    FStatsTraceInternal::BeginEncodeOp(param_1,SetInteger,local_res18,local_res8);
    uVar2 = param_2 >> 0x3f ^ param_2 * 2;
    do {
      bVar3 = 0;
      bVar1 = (byte)uVar2;
      if (0x7f < uVar2) {
        bVar3 = 0x80;
      }
      uVar2 = uVar2 >> 7;
      *local_res8[0] = bVar3 | bVar1 & 0x7f;
      local_res8[0] = local_res8[0] + 1;
    } while (uVar2 != 0);
    local_res18[0]->BufferSize = ((short)local_res8[0] - (short)local_res18[0]) - 10;
  }
  return;
}

