// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 9

// GetFieldCount @ 14d39c850

uint __thiscall UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldCount(FEventTypeInfo *this)

{
  return (uint)(byte)this[6];
}

// GetFieldHandleImpl @ 14d39c860

FEventFieldHandle __thiscall
UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldHandleImpl
          (FEventTypeInfo *this,char *param_1,short *param_2)

{
  byte bVar1;
  uint uVar2;
  FEventTypeInfo *pFVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  short *in_R9;
  
  uVar2 = 0x811c9dc5;
  bVar1 = (byte)*param_2;
  while (bVar1 != 0) {
    param_2 = (short *)((longlong)param_2 + 1);
    uVar2 = (bVar1 ^ uVar2) * 0x1000193;
    bVar1 = *(byte *)param_2;
  }
  uVar4 = 0;
  uVar6 = uVar4;
  pFVar3 = this;
  if ((ulonglong)(byte)this[6] != 0) {
    do {
      iVar5 = (int)uVar6;
      if (*(uint *)(pFVar3 + 0x10) == uVar2) {
        if (-1 < iVar5) {
          *in_R9 = (short)(char)this[(longlong)iVar5 * 0x10 + 0x1a];
          *(uint *)param_1 = (uint)*(ushort *)(this + (longlong)iVar5 * 0x10 + 0x14);
          return (FEventFieldHandle)(int)param_1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      pFVar3 = pFVar3 + 0x10;
    } while ((longlong)uVar4 < (longlong)(ulonglong)(byte)this[6]);
  }
  param_1[0] = -1;
  param_1[1] = -1;
  param_1[2] = -1;
  param_1[3] = -1;
  return (FEventFieldHandle)(int)param_1;
}

// GetFieldHandleUnchecked @ 14d39c910

FEventFieldHandle __thiscall
UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldHandleUnchecked(FEventTypeInfo *this,uint param_1)

{
  undefined4 in_register_00000014;
  uint in_R8D;
  
  if ((byte)this[6] <= in_R8D) {
    *(undefined4 *)CONCAT44(in_register_00000014,param_1) = 0xffffffff;
    return (FEventFieldHandle)param_1;
  }
  *(uint *)CONCAT44(in_register_00000014,param_1) =
       (uint)*(ushort *)(this + (ulonglong)in_R8D * 0x10 + 0x14);
  return (FEventFieldHandle)param_1;
}

// GetFieldIndex @ 14d39c9b0

int __thiscall
UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldIndex(FEventTypeInfo *this,char *param_1)

{
  FEventTypeInfo *pFVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar3 = 0x811c9dc5;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar2 ^ uVar3) * 0x1000193;
    bVar2 = *param_1;
  }
  pFVar1 = this + 6;
  iVar5 = 0;
  if ((ulonglong)(byte)*pFVar1 != 0) {
    lVar4 = 0;
    do {
      this = this + 0x10;
      if (*(uint *)this == uVar3) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < (longlong)(ulonglong)(byte)*pFVar1);
  }
  return -1;
}

// GetFieldInfo @ 14d39ca20

FEventFieldInfo * __thiscall
UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldInfo(FEventTypeInfo *this,uint param_1)

{
  if ((byte)this[6] <= param_1) {
    return (FEventFieldInfo *)0x0;
  }
  return (FEventFieldInfo *)(this + ((ulonglong)param_1 + 1) * 0x10);
}

// GetId @ 14d39ca80

uint __thiscall UE::Trace::IAnalyzer::FEventTypeInfo::GetId(FEventTypeInfo *this)

{
  return (uint)*(ushort *)(this + 4);
}

// GetLoggerName @ 14d39cdb0

char * __thiscall UE::Trace::IAnalyzer::FEventTypeInfo::GetLoggerName(FEventTypeInfo *this)

{
  return (char *)(this + *(ushort *)(this + 10));
}

// GetName @ 14d39ce90

char * __thiscall UE::Trace::IAnalyzer::FEventTypeInfo::GetName(FEventTypeInfo *this)

{
  return (char *)(this + *(ushort *)(this + 0xc));
}

// GetSize @ 14d39e470

uint __thiscall UE::Trace::IAnalyzer::FEventTypeInfo::GetSize(FEventTypeInfo *this)

{
  return (uint)*(ushort *)(this + 8);
}

