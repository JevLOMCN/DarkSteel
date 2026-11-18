// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// operator<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue>_TTuple<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue> @ 14d3c28a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue>_TTuple<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue> *__return_storage_ptr__)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50 [9];
  
  local_50[7] = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar3 = local_50 + 2;
  lVar2 = 2;
  local_50[2] = 0;
  local_50[3] = 0;
  local_68 = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  return __return_storage_ptr__;
}

// operator<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry> @ 14d407160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>
* __thiscall
TKeyInitializer<TraceServices::FClassInfo_const_*_const_&>::
operator<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>
          (TKeyInitializer<TraceServices::FClassInfo_const_*_const_&> *this,
          TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>
          *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_3a8 [50];
  undefined8 local_218;
  undefined1 local_210 [400];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_70 = 0;
  local_58 = ___xmm_0000000000000000ffefffffffffffff;
  uStack_50 = _UNK_1508ffae8;
  local_68 = ___xmm_7fefffffffffffff0000000000000000;
  uStack_60 = _UNK_152b1eab8;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_78 = 0;
  local_38 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_30 = _UNK_150a9e6d8;
  memset(local_3a8,0,400);
  uVar1 = __real_3ff0000000000000;
  local_218 = __real_3ff0000000000000;
  memset(local_210,0,400);
  local_80 = uVar1;
  lVar9 = 7;
  *(FClassInfo **)__return_storage_ptr__ = *this->Key;
  puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x8;
  puVar6 = local_3a8;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    uVar1 = puVar8[4];
    uVar4 = puVar8[5];
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = puVar8[8];
    uVar4 = puVar8[9];
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = puVar8[10];
    uVar3 = puVar8[0xb];
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = puVar8[0xc];
    uVar4 = puVar8[0xd];
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = puVar8[0xe];
    uVar3 = puVar8[0xf];
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar1 = puVar8[0x11];
  puVar7[0x10] = puVar8[0x10];
  puVar7[0x11] = uVar1;
  return __return_storage_ptr__;
}

// operator<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry> @ 14d407290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>
* __thiscall
TKeyInitializer<TraceServices::FPackageInfo_const_*_const_&>::
operator<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>
          (TKeyInitializer<TraceServices::FPackageInfo_const_*_const_&> *this,
          TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>
          *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_3a8 [50];
  undefined8 local_218;
  undefined1 local_210 [400];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_70 = 0;
  local_58 = ___xmm_0000000000000000ffefffffffffffff;
  uStack_50 = _UNK_1508ffae8;
  local_68 = ___xmm_7fefffffffffffff0000000000000000;
  uStack_60 = _UNK_152b1eab8;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_78 = 0;
  local_38 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_30 = _UNK_150a9e6d8;
  memset(local_3a8,0,400);
  uVar1 = __real_3ff0000000000000;
  local_218 = __real_3ff0000000000000;
  memset(local_210,0,400);
  local_80 = uVar1;
  lVar9 = 7;
  *(FPackageInfo **)__return_storage_ptr__ = *this->Key;
  puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x8;
  puVar6 = local_3a8;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    uVar1 = puVar8[4];
    uVar4 = puVar8[5];
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = puVar8[8];
    uVar4 = puVar8[9];
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = puVar8[10];
    uVar3 = puVar8[0xb];
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = puVar8[0xc];
    uVar4 = puVar8[0xd];
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = puVar8[0xe];
    uVar3 = puVar8[0xf];
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar1 = puVar8[0x11];
  puVar7[0x10] = puVar8[0x10];
  puVar7[0x11] = uVar1;
  return __return_storage_ptr__;
}

// operator<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry> @ 14d4073c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>
* __thiscall
TKeyInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&>::
operator<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>
          (TKeyInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&> *this,
          TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>
          *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_3a8 [50];
  undefined8 local_218;
  undefined1 local_210 [400];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_70 = 0;
  local_58 = ___xmm_0000000000000000ffefffffffffffff;
  uStack_50 = _UNK_1508ffae8;
  local_68 = ___xmm_7fefffffffffffff0000000000000000;
  uStack_60 = _UNK_152b1eab8;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_78 = 0;
  local_38 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_30 = _UNK_150a9e6d8;
  memset(local_3a8,0,400);
  uVar1 = __real_3ff0000000000000;
  local_218 = __real_3ff0000000000000;
  memset(local_210,0,400);
  local_80 = uVar1;
  lVar9 = 7;
  *(FTimingProfilerTimer **)__return_storage_ptr__ = *this->Key;
  puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x8;
  puVar6 = local_3a8;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    uVar1 = puVar8[4];
    uVar4 = puVar8[5];
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = puVar8[8];
    uVar4 = puVar8[9];
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = puVar8[10];
    uVar3 = puVar8[0xb];
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = puVar8[0xc];
    uVar4 = puVar8[0xd];
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = puVar8[0xe];
    uVar3 = puVar8[0xf];
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar1 = puVar8[0x11];
  puVar7[0x10] = puVar8[0x10];
  puVar7[0x11] = uVar1;
  return __return_storage_ptr__;
}

