// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 17

// GetArray<unsigned_char> @ 14d3c8680

TArrayReader<unsigned_char> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArray<unsigned_char>(FEventData *this,char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  FAuxData *pFVar4;
  uint *puVar5;
  FAuxData *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  puVar5 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar2 ^ uVar3) * 0x1000193;
    bVar2 = *param_1;
  }
  pbVar1 = (byte *)((longlong)puVar5 + 6);
  uVar8 = 0;
  if ((ulonglong)*pbVar1 != 0) {
    lVar7 = 0;
    do {
      puVar5 = puVar5 + 4;
      if (*puVar5 == uVar3) {
        if ((int)uVar8 < 0) {
          return (TArrayReader<unsigned_char> *)&EmptyAuxData;
        }
        pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar8);
        pFVar6 = &EmptyAuxData;
        if (pFVar4 != (FAuxData *)0x0) {
          pFVar6 = pFVar4;
        }
        return (TArrayReader<unsigned_char> *)pFVar6;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)(ulonglong)*pbVar1);
  }
  return (TArrayReader<unsigned_char> *)&EmptyAuxData;
}

// GetArray<unsigned_short> @ 14d3c8690

TArrayReader<unsigned_short> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArray<unsigned_short>(FEventData *this,char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  FAuxData *pFVar4;
  uint *puVar5;
  FAuxData *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  puVar5 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar2 ^ uVar3) * 0x1000193;
    bVar2 = *param_1;
  }
  pbVar1 = (byte *)((longlong)puVar5 + 6);
  uVar8 = 0;
  if ((ulonglong)*pbVar1 != 0) {
    lVar7 = 0;
    do {
      puVar5 = puVar5 + 4;
      if (*puVar5 == uVar3) {
        if ((int)uVar8 < 0) {
          return (TArrayReader<unsigned_short> *)&EmptyAuxData;
        }
        pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar8);
        pFVar6 = &EmptyAuxData;
        if (pFVar4 != (FAuxData *)0x0) {
          pFVar6 = pFVar4;
        }
        return (TArrayReader<unsigned_short> *)pFVar6;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)(ulonglong)*pbVar1);
  }
  return (TArrayReader<unsigned_short> *)&EmptyAuxData;
}

// GetArray<unsigned_int> @ 14d3c86a0

TArrayReader<unsigned_int> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArray<unsigned_int>(FEventData *this,char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  FAuxData *pFVar4;
  uint *puVar5;
  FAuxData *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  puVar5 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar2 ^ uVar3) * 0x1000193;
    bVar2 = *param_1;
  }
  pbVar1 = (byte *)((longlong)puVar5 + 6);
  uVar8 = 0;
  if ((ulonglong)*pbVar1 != 0) {
    lVar7 = 0;
    do {
      puVar5 = puVar5 + 4;
      if (*puVar5 == uVar3) {
        if ((int)uVar8 < 0) {
          return (TArrayReader<unsigned_int> *)&EmptyAuxData;
        }
        pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar8);
        pFVar6 = &EmptyAuxData;
        if (pFVar4 != (FAuxData *)0x0) {
          pFVar6 = pFVar4;
        }
        return (TArrayReader<unsigned_int> *)pFVar6;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)(ulonglong)*pbVar1);
  }
  return (TArrayReader<unsigned_int> *)&EmptyAuxData;
}

// GetArray<__int64> @ 14d3c86b0

TArrayReader<__int64> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArray<__int64>(FEventData *this,char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  FAuxData *pFVar4;
  uint *puVar5;
  FAuxData *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  puVar5 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar2 ^ uVar3) * 0x1000193;
    bVar2 = *param_1;
  }
  pbVar1 = (byte *)((longlong)puVar5 + 6);
  uVar8 = 0;
  if ((ulonglong)*pbVar1 != 0) {
    lVar7 = 0;
    do {
      puVar5 = puVar5 + 4;
      if (*puVar5 == uVar3) {
        if ((int)uVar8 < 0) {
          return (TArrayReader<__int64> *)&EmptyAuxData;
        }
        pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar8);
        pFVar6 = &EmptyAuxData;
        if (pFVar4 != (FAuxData *)0x0) {
          pFVar6 = pFVar4;
        }
        return (TArrayReader<__int64> *)pFVar6;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)(ulonglong)*pbVar1);
  }
  return (TArrayReader<__int64> *)&EmptyAuxData;
}

// GetArrayView<unsigned_char> @ 14d3c86c0

TArrayView<unsigned_char_const_,int> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_char>
          (FEventData *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          char *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FArrayReader *this_00;
  uchar *puVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  int iVar6;
  char local_res10 [8];
  
  this_00 = GetArrayImpl(this,param_1);
  uVar3 = FArrayReader::Num(this_00);
  puVar4 = FArrayReader::GetImpl(this_00,0,local_res10);
  if (puVar4 != (uchar *)0x0) {
    iVar6 = -(int)local_res10[0];
    if (iVar6 < 0) {
      iVar6 = (int)local_res10[0];
    }
    if (iVar6 == 1) goto LAB_14d3c870e;
  }
  puVar4 = (uchar *)0x0;
LAB_14d3c870e:
  __return_storage_ptr__->DataPtr = puVar4;
  __return_storage_ptr__->ArrayNum = uVar3;
  if ((int)uVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetArrayView<unsigned_int> @ 14d3c8760

TArrayView<unsigned_int_const_,int> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_int>
          (FEventData *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          char *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FArrayReader *this_00;
  uint *puVar4;
  TArrayView<unsigned_int_const_,int> *pTVar5;
  int iVar6;
  char local_res10 [8];
  
  this_00 = GetArrayImpl(this,param_1);
  uVar3 = FArrayReader::Num(this_00);
  puVar4 = FArrayReader::GetImpl(this_00,0,local_res10);
  if (puVar4 != (uint *)0x0) {
    iVar6 = -(int)local_res10[0];
    if (iVar6 < 0) {
      iVar6 = (int)local_res10[0];
    }
    if (iVar6 == 4) goto LAB_14d3c87ae;
  }
  puVar4 = (uint *)0x0;
LAB_14d3c87ae:
  __return_storage_ptr__->DataPtr = puVar4;
  __return_storage_ptr__->ArrayNum = uVar3;
  if ((int)uVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_int_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetDefinitionId<unsigned_int> @ 14d3c8800

TEventRef<unsigned_int> __thiscall
UE::Trace::IAnalyzer::FEventData::GetDefinitionId<unsigned_int>(FEventData *this)

{
  bool bVar1;
  uint uVar2;
  TEventRef<unsigned_int> in_RDX;
  uint local_res18 [4];
  
  bVar1 = IsDefinitionImpl(this,local_res18);
  if (bVar1) {
    uVar2 = GetValue<unsigned_int>(this,"DefinitionId",0);
    *(uint *)in_RDX = uVar2;
    *(uint *)((longlong)in_RDX + 4) = local_res18[0];
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetDefinitionId<unsigned___int64> @ 14d3c8870

TEventRef<unsigned___int64> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetDefinitionId<unsigned___int64>
          (FEventData *this,TEventRef<unsigned___int64> *__return_storage_ptr__)

{
  bool bVar1;
  ulong64 uVar2;
  uint local_res18 [4];
  
  bVar1 = IsDefinitionImpl(this,local_res18);
  if (bVar1) {
    uVar2 = GetValue<unsigned___int64>(this,"DefinitionId",0);
    __return_storage_ptr__->Id = uVar2;
    __return_storage_ptr__->RefTypeId = local_res18[0];
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->RefTypeId = 0;
  __return_storage_ptr__->Id = 0;
  return __return_storage_ptr__;
}

// GetReferenceValue<unsigned_char> @ 14d3c88e0

TEventRef<unsigned_char> __thiscall
UE::Trace::IAnalyzer::FEventData::GetReferenceValue<unsigned_char>(FEventData *this,uint param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint in_register_00000014;
  TEventRef<unsigned_char> TVar3;
  uint in_R8D;
  uint local_res10 [6];
  
  TVar3.RefTypeId = in_register_00000014;
  TVar3._0_4_ = param_1;
  puVar2 = GetReferenceValueImpl(this,in_R8D,local_res10);
  uVar1 = *puVar2;
  *(uint *)((longlong)TVar3 + 4) = local_res10[0];
  *(undefined1 *)TVar3 = uVar1;
  return TVar3;
}

// GetReferenceValue<unsigned_short> @ 14d3c8920

TEventRef<unsigned_short> __thiscall
UE::Trace::IAnalyzer::FEventData::GetReferenceValue<unsigned_short>(FEventData *this,uint param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  uint in_register_00000014;
  TEventRef<unsigned_short> TVar3;
  uint in_R8D;
  uint local_res10 [6];
  
  TVar3.RefTypeId = in_register_00000014;
  TVar3._0_4_ = param_1;
  puVar2 = GetReferenceValueImpl(this,in_R8D,local_res10);
  uVar1 = *puVar2;
  *(uint *)((longlong)TVar3 + 4) = local_res10[0];
  *(undefined2 *)TVar3 = uVar1;
  return TVar3;
}

// GetReferenceValue<unsigned_int> @ 14d3c8960

TEventRef<unsigned_int> __thiscall
UE::Trace::IAnalyzer::FEventData::GetReferenceValue<unsigned_int>(FEventData *this,uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint in_register_00000014;
  TEventRef<unsigned_int> TVar3;
  uint in_R8D;
  uint local_res10 [6];
  
  TVar3.RefTypeId = in_register_00000014;
  TVar3.Id = param_1;
  puVar2 = GetReferenceValueImpl(this,in_R8D,local_res10);
  uVar1 = *puVar2;
  *(uint *)((longlong)TVar3 + 4) = local_res10[0];
  *(undefined4 *)TVar3 = uVar1;
  return TVar3;
}

// GetReferenceValue<unsigned___int64> @ 14d3c89a0

TEventRef<unsigned___int64> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetReferenceValue<unsigned___int64>
          (FEventData *this,TEventRef<unsigned___int64> *__return_storage_ptr__,uint param_1)

{
  ulong64 uVar1;
  ulong64 *puVar2;
  uint local_res10 [6];
  
  puVar2 = GetReferenceValueImpl(this,param_1,local_res10);
  uVar1 = *puVar2;
  __return_storage_ptr__->RefTypeId = local_res10[0];
  __return_storage_ptr__->Id = uVar1;
  return __return_storage_ptr__;
}

// GetValue<unsigned_short> @ 14d3c89e0

ushort __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
          (FEventData *this,char *param_1,ushort param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
      return (ushort)*(byte *)pdVar1;
    case '\x02':
    case '\x04':
    case '\b':
      return *(ushort *)pdVar1;
    case -8:
      return (ushort)(int)*pdVar1;
    default:
      return 0;
    case -4:
      return (ushort)(int)*(float *)pdVar1;
    }
  }
  return param_2;
}

// GetValue<float> @ 14d3c8aa0

float __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<float>(FEventData *this,char *param_1,float param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
      return (float)(int)*(char *)pdVar1;
    case '\x02':
      return (float)(int)*(short *)pdVar1;
    case '\x04':
      return (float)*(int *)pdVar1;
    case '\b':
      return (float)(longlong)*pdVar1;
    case -8:
      return (float)*pdVar1;
    default:
      return 0.0;
    case -4:
      return *(float *)pdVar1;
    }
  }
  return param_2;
}

// GetValue<enum_EMemoryTraceHeapAllocationFlags> @ 14d3c8bc0

EMemoryTraceHeapAllocationFlags __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<enum_EMemoryTraceHeapAllocationFlags>
          (FEventData *this,char *param_1,EMemoryTraceHeapAllocationFlags param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
    case '\x02':
    case '\x04':
    case '\b':
      return *(EMemoryTraceHeapAllocationFlags *)pdVar1;
    case -8:
      return (EMemoryTraceHeapAllocationFlags)(int)*pdVar1;
    default:
      return None;
    case -4:
      return (EMemoryTraceHeapAllocationFlags)(int)*(float *)pdVar1;
    }
  }
  return param_2;
}

// GetValue<enum_EMemoryTraceHeapFlags> @ 14d3c8c80

EMemoryTraceHeapFlags __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<enum_EMemoryTraceHeapFlags>
          (FEventData *this,char *param_1,EMemoryTraceHeapFlags param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
      return (EMemoryTraceHeapFlags)*(byte *)pdVar1;
    case '\x02':
    case '\x04':
    case '\b':
      return *(EMemoryTraceHeapFlags *)pdVar1;
    case -8:
      return (EMemoryTraceHeapFlags)(int)*pdVar1;
    default:
      return None;
    case -4:
      return (EMemoryTraceHeapFlags)(int)*(float *)pdVar1;
    }
  }
  return param_2;
}

// GetValue<bool> @ 14d3c8d40

bool __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<bool>(FEventData *this,char *param_1,bool param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 == (double *)0x0) {
    return param_2;
  }
  switch(local_res20[0]) {
  case '\x01':
    return *(char *)pdVar1 != '\0';
  case '\x02':
    return *(short *)pdVar1 != 0;
  case '\x04':
    return *(float *)pdVar1 != 0.0;
  case '\b':
    return *pdVar1 != 0.0;
  case -8:
    if (*pdVar1 != 0.0) {
      return true;
    }
    break;
  case -4:
    if (*(float *)pdVar1 != 0.0) {
      return true;
    }
  }
  return false;
}

