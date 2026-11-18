// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// operator() @ 149896e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGSpatialDataProcessing::
SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'
::__l2::<lambda_2>::operator()(void *this,int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  UPCGBasePointData *pUVar2;
  UPCGBasePointData *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_> FVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStackY_a298 [32];
  TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int> local_a230;
  undefined8 local_a220;
  undefined8 uStack_a218;
  undefined8 local_a210;
  undefined8 uStack_a208;
  undefined8 uStack_a200;
  undefined8 uStack_a1f8;
  undefined1 local_a1f0;
  undefined7 uStack_a1ef;
  longlong local_a1e8;
  int local_a1e0;
  int local_a1dc;
  int local_a1d8;
  longlong local_a1b8;
  int local_a1b0;
  int local_a1ac;
  int local_a1a8;
  undefined8 local_a188;
  undefined8 uStack_a180;
  undefined8 local_a178;
  undefined8 uStack_a170;
  undefined8 local_a168;
  undefined8 uStack_a160;
  undefined8 local_a158;
  undefined8 uStack_a150;
  undefined8 local_a148;
  undefined8 uStack_a140;
  undefined8 local_a138;
  undefined8 uStack_a130;
  undefined8 local_a128;
  undefined8 uStack_a120;
  undefined8 local_a118;
  undefined8 uStack_a110;
  undefined8 local_a108;
  undefined8 uStack_a100;
  undefined8 local_a0f8;
  undefined8 uStack_a0f0;
  longlong local_a0e8;
  int local_a0e0;
  int local_a0dc;
  int local_a0d8;
  ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_> local_a068;
  int local_58;
  int local_54 [3];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a298;
  uVar15 = (ulonglong)(uint)param_3;
  if ((0x100 < (uint)param_3) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3304061870582792274>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialDataTpl.h"
                         ,0x52,"Count >= 0 && Count <= ChunkSize"), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  local_a068.SecondaryData =
       (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0;
  local_58 = 0;
  local_54[0] = 0x100;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId87,"FPCGSpatialDataProcessing::SamplePoints::PrepareSamples"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialDataTpl.h"
               ,0x57);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId87);
  }
  (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x500))
            (*(longlong **)((longlong)this + 0x28),&local_a0e8);
  (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x510))
            (*(longlong **)((longlong)this + 0x28),&local_a1b8);
  (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x518))
            (*(longlong **)((longlong)this + 0x28),&local_a1e8);
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  if (local_54[0] < param_3) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>_>
              (0xa0,0x10,param_3,&local_a068,local_58,local_54);
  }
  uVar16 = param_1;
  if (0 < param_3) {
    do {
      uVar14 = ~uVar16 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar16 < local_a1d8) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      puVar13 = (undefined8 *)
                ((longlong)((int)uVar16 % local_a1dc) * (longlong)local_a1e0 + local_a1e8);
      uVar10 = 0;
      if ((int)uVar16 < local_a1a8) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      uStack_a208 = *puVar13;
      uStack_a200 = puVar13[1];
      local_a1f0 = 1;
      lVar12 = (longlong)((int)uVar16 % local_a1ac) * (longlong)local_a1b0;
      puVar1 = (undefined8 *)(lVar12 + local_a1b8);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      local_a210 = *(undefined8 *)(lVar12 + 0x10 + local_a1b8);
      uStack_a1f8 = puVar13[2];
      uVar10 = 0;
      if ((int)uVar16 < local_a0d8) {
        uVar10 = uVar14;
      }
      local_a220 = uVar5;
      uStack_a218 = uVar6;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      lVar12 = (longlong)((int)uVar16 % local_a0dc) * (longlong)local_a0e0;
      local_a188 = *(undefined8 *)(lVar12 + local_a0e8);
      uStack_a180 = ((undefined8 *)(lVar12 + local_a0e8))[1];
      puVar13 = (undefined8 *)(lVar12 + 0x10 + local_a0e8);
      local_a178 = *puVar13;
      uStack_a170 = puVar13[1];
      puVar13 = (undefined8 *)(lVar12 + 0x20 + local_a0e8);
      local_a168 = *puVar13;
      uStack_a160 = puVar13[1];
      puVar13 = (undefined8 *)(lVar12 + 0x30 + local_a0e8);
      local_a158 = *puVar13;
      uStack_a150 = puVar13[1];
      puVar13 = (undefined8 *)(lVar12 + 0x40 + local_a0e8);
      local_a148 = *puVar13;
      uStack_a140 = puVar13[1];
      puVar13 = (undefined8 *)(lVar12 + 0x50 + local_a0e8);
      local_a138 = *puVar13;
      uStack_a130 = puVar13[1];
      FVar11 = (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)
               &local_a068;
      if (local_a068.SecondaryData !=
          (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
        FVar11 = local_a068.SecondaryData;
      }
      local_a118 = local_a210;
      uStack_a110 = uStack_a208;
      local_a0f8 = CONCAT71(uStack_a1ef,local_a1f0);
      local_a108 = uStack_a200;
      uStack_a100 = uStack_a1f8;
      local_a128 = uVar5;
      uStack_a120 = uVar6;
      if ((ulonglong)FVar11 <= &local_a188) {
        FVar11 = (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)
                 &local_a068;
        if (local_a068.SecondaryData !=
            (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
          FVar11 = local_a068.SecondaryData;
        }
        if ((&local_a188 < (undefined8 *)((longlong)local_54[0] * 0xa0 + (longlong)FVar11)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
      }
      if (local_58 == local_54[0]) {
        local_58 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>_>
                             (0x10a0,&local_a068,local_54);
      }
      iVar9 = local_58 + 1;
      FVar11 = (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)
               &local_a068;
      if (local_a068.SecondaryData !=
          (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
        FVar11 = local_a068.SecondaryData;
      }
      puVar13 = (undefined8 *)((longlong)local_58 * 0xa0 + (longlong)FVar11);
      *puVar13 = local_a188;
      puVar13[1] = uStack_a180;
      puVar13[2] = local_a178;
      puVar13[3] = uStack_a170;
      puVar13[4] = local_a168;
      puVar13[5] = uStack_a160;
      puVar13[6] = local_a158;
      puVar13[7] = uStack_a150;
      puVar13[8] = local_a148;
      puVar13[9] = uStack_a140;
      puVar13[10] = local_a138;
      puVar13[0xb] = uStack_a130;
      puVar13[0xc] = local_a128;
      puVar13[0xd] = uStack_a120;
      puVar13[0xe] = local_a118;
      puVar13[0xf] = uStack_a110;
      puVar13[0x10] = local_a108;
      puVar13[0x11] = uStack_a100;
      puVar13[0x12] = local_a0f8;
      puVar13[0x13] = uStack_a0f0;
      uVar15 = uVar15 - 1;
      uVar16 = uVar16 + 1;
      local_58 = iVar9;
    } while (uVar15 != 0);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId101,"FPCGSpatialDataProcessing::SamplePoints::RangeFunc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialDataTpl.h"
               ,0x65);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId101);
  }
  iVar9 = local_58;
  pUVar2 = *(UPCGBasePointData **)((longlong)this + 0x30);
  pUVar3 = *(UPCGBasePointData **)((longlong)this + 0x28);
  local_a230.DataPtr = (TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> *)&local_a068;
  if (local_a068.SecondaryData !=
      (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
    local_a230.DataPtr =
         (TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> *)local_a068.SecondaryData;
  }
  if ((local_58 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  local_a230.ArrayNum = iVar9;
  iVar9 = `UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>::operator()
                    (this,&local_a230,pUVar3,param_1,pUVar2,param_2);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_a068.SecondaryData !=
      (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
    FMemory::Free((void *)local_a068.SecondaryData);
  }
  return iVar9;
}

// operator() @ 1498973d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGSpatialDataProcessing::
SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2
::<lambda_2>::operator()(void *this,int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  UPCGBasePointData *pUVar2;
  UPCGBasePointData *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_> FVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStackY_a298 [32];
  TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int> local_a230;
  undefined8 local_a220;
  undefined8 uStack_a218;
  undefined8 local_a210;
  undefined8 uStack_a208;
  undefined8 uStack_a200;
  undefined8 uStack_a1f8;
  undefined1 local_a1f0;
  undefined7 uStack_a1ef;
  longlong local_a1e8;
  int local_a1e0;
  int local_a1dc;
  int local_a1d8;
  longlong local_a1b8;
  int local_a1b0;
  int local_a1ac;
  int local_a1a8;
  undefined8 local_a188;
  undefined8 uStack_a180;
  undefined8 local_a178;
  undefined8 uStack_a170;
  undefined8 local_a168;
  undefined8 uStack_a160;
  undefined8 local_a158;
  undefined8 uStack_a150;
  undefined8 local_a148;
  undefined8 uStack_a140;
  undefined8 local_a138;
  undefined8 uStack_a130;
  undefined8 local_a128;
  undefined8 uStack_a120;
  undefined8 local_a118;
  undefined8 uStack_a110;
  undefined8 local_a108;
  undefined8 uStack_a100;
  undefined8 local_a0f8;
  undefined8 uStack_a0f0;
  longlong local_a0e8;
  int local_a0e0;
  int local_a0dc;
  int local_a0d8;
  ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_> local_a068;
  int local_58;
  int local_54 [3];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a298;
  uVar15 = (ulonglong)(uint)param_3;
  if ((0x100 < (uint)param_3) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3304061870582792274>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialDataTpl.h"
                         ,0x52,"Count >= 0 && Count <= ChunkSize"), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  local_a068.SecondaryData =
       (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0;
  local_58 = 0;
  local_54[0] = 0x100;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId87,"FPCGSpatialDataProcessing::SamplePoints::PrepareSamples"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialDataTpl.h"
               ,0x57);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId87);
  }
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x500))
            (*(longlong **)((longlong)this + 0x20),&local_a0e8);
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x510))
            (*(longlong **)((longlong)this + 0x20),&local_a1b8);
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x518))
            (*(longlong **)((longlong)this + 0x20),&local_a1e8);
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  if (local_54[0] < param_3) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>_>
              (0xa0,0x10,param_3,&local_a068,local_58,local_54);
  }
  uVar16 = param_1;
  if (0 < param_3) {
    do {
      uVar14 = ~uVar16 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar16 < local_a1d8) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      puVar13 = (undefined8 *)
                ((longlong)((int)uVar16 % local_a1dc) * (longlong)local_a1e0 + local_a1e8);
      uVar10 = 0;
      if ((int)uVar16 < local_a1a8) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      uStack_a208 = *puVar13;
      uStack_a200 = puVar13[1];
      local_a1f0 = 1;
      lVar12 = (longlong)((int)uVar16 % local_a1ac) * (longlong)local_a1b0;
      puVar1 = (undefined8 *)(lVar12 + local_a1b8);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      local_a210 = *(undefined8 *)(lVar12 + 0x10 + local_a1b8);
      uStack_a1f8 = puVar13[2];
      uVar10 = 0;
      if ((int)uVar16 < local_a0d8) {
        uVar10 = uVar14;
      }
      local_a220 = uVar5;
      uStack_a218 = uVar6;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      lVar12 = (longlong)((int)uVar16 % local_a0dc) * (longlong)local_a0e0;
      local_a188 = *(undefined8 *)(lVar12 + local_a0e8);
      uStack_a180 = ((undefined8 *)(lVar12 + local_a0e8))[1];
      puVar13 = (undefined8 *)(lVar12 + 0x10 + local_a0e8);
      local_a178 = *puVar13;
      uStack_a170 = puVar13[1];
      puVar13 = (undefined8 *)(lVar12 + 0x20 + local_a0e8);
      local_a168 = *puVar13;
      uStack_a160 = puVar13[1];
      puVar13 = (undefined8 *)(lVar12 + 0x30 + local_a0e8);
      local_a158 = *puVar13;
      uStack_a150 = puVar13[1];
      puVar13 = (undefined8 *)(lVar12 + 0x40 + local_a0e8);
      local_a148 = *puVar13;
      uStack_a140 = puVar13[1];
      puVar13 = (undefined8 *)(lVar12 + 0x50 + local_a0e8);
      local_a138 = *puVar13;
      uStack_a130 = puVar13[1];
      FVar11 = (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)
               &local_a068;
      if (local_a068.SecondaryData !=
          (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
        FVar11 = local_a068.SecondaryData;
      }
      local_a118 = local_a210;
      uStack_a110 = uStack_a208;
      local_a0f8 = CONCAT71(uStack_a1ef,local_a1f0);
      local_a108 = uStack_a200;
      uStack_a100 = uStack_a1f8;
      local_a128 = uVar5;
      uStack_a120 = uVar6;
      if ((ulonglong)FVar11 <= &local_a188) {
        FVar11 = (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)
                 &local_a068;
        if (local_a068.SecondaryData !=
            (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
          FVar11 = local_a068.SecondaryData;
        }
        if ((&local_a188 < (undefined8 *)((longlong)local_54[0] * 0xa0 + (longlong)FVar11)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
      }
      if (local_58 == local_54[0]) {
        local_58 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>_>
                             (0x10a0,&local_a068,local_54);
      }
      iVar9 = local_58 + 1;
      FVar11 = (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)
               &local_a068;
      if (local_a068.SecondaryData !=
          (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
        FVar11 = local_a068.SecondaryData;
      }
      puVar13 = (undefined8 *)((longlong)local_58 * 0xa0 + (longlong)FVar11);
      *puVar13 = local_a188;
      puVar13[1] = uStack_a180;
      puVar13[2] = local_a178;
      puVar13[3] = uStack_a170;
      puVar13[4] = local_a168;
      puVar13[5] = uStack_a160;
      puVar13[6] = local_a158;
      puVar13[7] = uStack_a150;
      puVar13[8] = local_a148;
      puVar13[9] = uStack_a140;
      puVar13[10] = local_a138;
      puVar13[0xb] = uStack_a130;
      puVar13[0xc] = local_a128;
      puVar13[0xd] = uStack_a120;
      puVar13[0xe] = local_a118;
      puVar13[0xf] = uStack_a110;
      puVar13[0x10] = local_a108;
      puVar13[0x11] = uStack_a100;
      puVar13[0x12] = local_a0f8;
      puVar13[0x13] = uStack_a0f0;
      uVar15 = uVar15 - 1;
      uVar16 = uVar16 + 1;
      local_58 = iVar9;
    } while (uVar15 != 0);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId101,"FPCGSpatialDataProcessing::SamplePoints::RangeFunc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialDataTpl.h"
               ,0x65);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId101);
  }
  iVar9 = local_58;
  pUVar2 = *(UPCGBasePointData **)((longlong)this + 0x28);
  pUVar3 = *(UPCGBasePointData **)((longlong)this + 0x20);
  local_a230.DataPtr = (TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> *)&local_a068;
  if (local_a068.SecondaryData !=
      (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
    local_a230.DataPtr =
         (TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> *)local_a068.SecondaryData;
  }
  if ((local_58 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  local_a230.ArrayNum = iVar9;
  iVar9 = `UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>::operator()
                    (this,&local_a230,pUVar3,param_1,pUVar2,param_2);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_a068.SecondaryData !=
      (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0) {
    FMemory::Free((void *)local_a068.SecondaryData);
  }
  return iVar9;
}

