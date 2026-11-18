// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// BuildHierarchy @ 147115050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147115a93) */
/* WARNING: Removing unreachable block (ram,0x0001471163c2) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfEntityBuilder_TreeHierarchy::BuildHierarchy
          (FChildOfEntityBuilder_TreeHierarchy *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_7f8 [32];
  FMassEntityHandle local_7d8;
  FMassEntityHandle local_7d0;
  longlong local_7c8;
  longlong local_7c0;
  undefined8 local_7b8;
  FMassEntityHandle *local_7a8;
  FMassEntityHandle *local_7a0;
  FMassEntityHandle *local_798;
  FMassEntityHandle *local_790;
  FMassEntityHandle *local_788;
  FMassEntityHandle *local_780;
  FMassEntityHandle *local_778;
  FMassEntityHandle *local_770;
  int local_768;
  FTestFragment_Int *local_760;
  uint local_758;
  uint local_754;
  int local_750;
  uint local_74c;
  undefined4 local_748;
  int local_744;
  int local_740;
  int local_73c;
  uint local_738;
  undefined4 local_734;
  int local_730;
  int local_72c;
  int local_728;
  int local_724;
  longlong *local_720;
  FMassEntityHandle local_718;
  FMassEntityHandle local_710;
  FMassEntityHandle local_708;
  FMassEntityHandle local_700;
  FMassEntityHandle local_6f8;
  FMassEntityHandle local_6f0;
  FMassEntityHandle local_6e8;
  FMassEntityHandle local_6e0;
  int local_6d8;
  longlong *local_6d0;
  longlong *local_6c8;
  int local_6c0;
  int local_6bc;
  int local_6b8;
  int local_6b4;
  int local_6b0;
  int local_6ac;
  int local_6a8;
  int local_6a4;
  int local_6a0;
  int local_69c;
  int local_698;
  int local_694;
  int local_690;
  int local_68c;
  int local_688;
  int local_684;
  FMassEntityManager *local_680;
  FMassEntityHandle local_678;
  FMassEntityHandle local_670;
  FMassEntityHandle local_668;
  FMassEntityHandle local_660;
  FMassEntityHandle local_658;
  FMassEntityHandle local_650;
  undefined4 local_648;
  undefined4 local_644;
  FMassEntityHandle local_640;
  FMassEntityHandle local_638;
  FMassEntityHandle local_630;
  longlong local_628;
  longlong local_620;
  FMassEntityHandle local_618;
  FMassEntityHandle local_610;
  void *local_608;
  undefined8 *local_600;
  undefined4 local_5f8;
  undefined4 local_5f4;
  longlong local_5f0;
  longlong local_5e8;
  longlong local_5e0;
  longlong local_5d8;
  FMassEntityHandle *local_5d0;
  FMassEntityHandle local_5c8;
  FObjectKey local_5c0;
  FMassEntityHandle local_5b8;
  FMassEntityHandle local_5b0;
  FMassEntityHandle local_5a8;
  FMassEntityHandle local_5a0;
  FMassEntityHandle local_598;
  FMassEntityHandle local_590;
  undefined4 local_588;
  undefined4 local_584;
  FMassEntityHandle local_580;
  FMassEntityHandle local_578;
  FMassEntityHandle local_570;
  longlong local_568;
  longlong local_560;
  FMassEntityHandle local_558;
  FMassEntityHandle local_550;
  void *local_548;
  undefined8 *local_540;
  FMassEntityHandle local_538;
  FMassEntityHandle local_530;
  FMassEntityHandle local_528;
  FMassEntityHandle local_520;
  FMassEntityHandle local_518;
  FMassEntityHandle local_510;
  undefined4 local_508;
  undefined4 local_504;
  FMassEntityHandle local_500;
  FMassEntityHandle local_4f8;
  FMassEntityHandle local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  FMassEntityHandle local_4d8;
  FMassEntityHandle local_4d0;
  void *local_4c8;
  undefined8 *local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  longlong local_4b0;
  longlong local_4a8;
  FMassEntityHandle *local_4a0;
  FMassEntityHandle local_498;
  FObjectKey local_490;
  FMassEntityHandle local_488;
  FMassEntityHandle local_480;
  FMassEntityHandle local_478;
  FMassEntityHandle local_470;
  FMassEntityHandle local_468;
  FMassEntityHandle local_460;
  undefined4 local_458;
  undefined4 local_454;
  FMassEntityHandle local_450;
  FMassEntityHandle local_448;
  FMassEntityHandle local_440;
  longlong local_438;
  longlong local_430;
  FMassEntityHandle local_428;
  FMassEntityHandle local_420;
  void *local_418;
  undefined8 *local_410;
  FMassEntityHandle local_408;
  FMassEntityHandle local_400;
  FMassEntityHandle local_3f8;
  FMassEntityHandle local_3f0;
  FMassEntityHandle local_3e8;
  FMassEntityHandle local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  FMassEntityHandle local_3d0;
  FMassEntityHandle local_3c8;
  FMassEntityHandle local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  FMassEntityHandle local_3a8;
  FMassEntityHandle local_3a0;
  void *local_398;
  undefined8 *local_390;
  FMassEntityHandle local_388;
  FMassEntityHandle local_380;
  FMassEntityHandle local_378;
  FMassEntityHandle local_370;
  FMassEntityHandle local_368;
  FMassEntityHandle local_360;
  undefined4 local_358;
  undefined4 local_354;
  FMassEntityHandle local_350;
  FMassEntityHandle local_348;
  FMassEntityHandle local_340;
  longlong local_338;
  longlong local_330;
  FMassEntityHandle local_328;
  FMassEntityHandle local_320;
  void *local_318;
  undefined8 *local_310;
  undefined4 local_308;
  undefined4 local_304;
  longlong local_300;
  longlong local_2f8;
  FMassEntityHandle *local_2f0;
  FMassEntityHandle local_2e8;
  FObjectKey local_2e0;
  FMassEntityHandle local_2d8;
  FMassEntityHandle local_2d0;
  FMassEntityHandle local_2c8;
  FMassEntityHandle local_2c0;
  FMassEntityHandle local_2b8;
  FMassEntityHandle local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  FMassEntityHandle local_2a0;
  FMassEntityHandle local_298;
  FMassEntityHandle local_290;
  longlong local_288;
  longlong local_280;
  FMassEntityHandle local_278;
  FMassEntityHandle local_270;
  void *local_268;
  undefined8 *local_260;
  FMassEntityHandle local_258;
  FMassEntityHandle local_250;
  FMassEntityHandle local_248;
  FMassEntityHandle local_240;
  FMassEntityHandle local_238;
  FMassEntityHandle local_230;
  undefined4 local_228;
  undefined4 local_224;
  FMassEntityHandle local_220;
  FMassEntityHandle local_218;
  FMassEntityHandle local_210;
  longlong local_208;
  longlong local_200;
  FMassEntityHandle local_1f8;
  FMassEntityHandle local_1f0;
  void *local_1e8;
  undefined8 *local_1e0;
  FEntityBuilder local_198;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7f8;
  local_680 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::MakeEntityBuilder(local_680,&local_198);
  local_6b0 = *(int *)&this->field_0xa0;
  local_6a8 = local_6b0;
  local_760 = FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(&local_198,&local_6b0);
  local_778 = (FMassEntityHandle *)&this->field_0x98;
  local_6e8 = FEntityBuilder::CommitAndReprepare(&local_198);
  local_678 = *local_778;
  local_670 = local_678;
  local_668 = local_678;
  if (((ulonglong)local_678 <= (ulonglong)local_6e8) &&
     (local_660 = *local_778, local_658 = local_660, local_650 = local_660,
     (ulonglong)local_6e8 <
     (ulonglong)((longlong)local_660 + (longlong)local_778[1].SerialNumber * 8))) {
    local_648 = 0;
    local_644 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7c0 = (longlong)local_778[1].Index;
    local_7c8 = (longlong)local_778[1].SerialNumber;
    local_7d0 = *local_778;
    local_7b8 = 8;
    local_7d8 = local_6e8;
    local_640 = local_7d0;
    local_638 = local_7d0;
    local_630 = local_7d0;
    local_628 = local_7c0;
    local_620 = local_7c8;
    local_618 = local_7d0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_778[1].Index == local_778[1].SerialNumber) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_778,&local_778[1].SerialNumber);
    local_778[1].Index = iVar3;
  }
  local_724 = local_778[1].Index;
  local_778[1].Index = local_778[1].Index + 1;
  local_610 = *local_778;
  local_608 = (void *)((longlong)local_610 + (longlong)local_724 * 8);
  local_600 = ::operator_new(8,local_608);
  *local_600 = *(undefined8 *)local_6e8;
  local_6a0 = local_724;
  local_720 = (longlong *)&this->field_0x98;
  local_768 = *(int *)&this->field_0xa0 + -1;
  local_754 = (uint)(-1 < local_768);
  bVar2 = local_768 < *(int *)&this->field_0xa0;
  local_758 = (uint)bVar2;
  if (-1 >= local_768 || !bVar2) {
    local_5f8 = 0;
    local_5f4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7d0 = (FMassEntityHandle)(longlong)(int)local_720[1];
    local_7d8 = (FMassEntityHandle)(longlong)local_768;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_5f0 = *local_720;
  local_5e0 = (longlong)((int)local_720[1] + -1) * 8;
  local_5d0 = (FMassEntityHandle *)(local_5f0 + local_5e0);
  local_5c8 = *local_5d0;
  local_5c0.ObjectIndex = *(int *)&this->field_0xbc;
  local_5c0.ObjectSerialNumber = *(int *)&this->field_0xc0;
  local_5e8 = local_5f0;
  local_5d8 = local_5f0;
  FEntityBuilder::AddRelation(&local_198,(FTypeHandle)local_5c0,local_5c8,Object);
  local_6ac = *(int *)&this->field_0xa0;
  local_760->Value = local_6ac;
  local_780 = (FMassEntityHandle *)&this->field_0x98;
  local_6e0 = FEntityBuilder::CommitAndReprepare(&local_198);
  local_5b8 = *local_780;
  local_5b0 = local_5b8;
  local_5a8 = local_5b8;
  if (((ulonglong)local_5b8 <= (ulonglong)local_6e0) &&
     (local_5a0 = *local_780, local_598 = local_5a0, local_590 = local_5a0,
     (ulonglong)local_6e0 <
     (ulonglong)((longlong)local_5a0 + (longlong)local_780[1].SerialNumber * 8))) {
    local_588 = 0;
    local_584 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7c0 = (longlong)local_780[1].Index;
    local_7c8 = (longlong)local_780[1].SerialNumber;
    local_7d0 = *local_780;
    local_7b8 = 8;
    local_7d8 = local_6e0;
    local_580 = local_7d0;
    local_578 = local_7d0;
    local_570 = local_7d0;
    local_568 = local_7c0;
    local_560 = local_7c8;
    local_558 = local_7d0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_780[1].Index == local_780[1].SerialNumber) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_780,&local_780[1].SerialNumber);
    local_780[1].Index = iVar3;
  }
  local_750 = local_780[1].Index;
  local_780[1].Index = local_780[1].Index + 1;
  local_550 = *local_780;
  local_548 = (void *)((longlong)local_550 + (longlong)local_750 * 8);
  local_540 = ::operator_new(8,local_548);
  *local_540 = *(undefined8 *)local_6e0;
  local_69c = local_750;
  local_6b4 = *(int *)&this->field_0xa0;
  local_760->Value = local_6b4;
  local_790 = (FMassEntityHandle *)&this->field_0x98;
  local_6f0 = FEntityBuilder::CommitAndReprepare(&local_198);
  local_538 = *local_790;
  local_530 = local_538;
  local_528 = local_538;
  if (((ulonglong)local_538 <= (ulonglong)local_6f0) &&
     (local_520 = *local_790, local_518 = local_520, local_510 = local_520,
     (ulonglong)local_6f0 <
     (ulonglong)((longlong)local_520 + (longlong)local_790[1].SerialNumber * 8))) {
    local_508 = 0;
    local_504 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7c0 = (longlong)local_790[1].Index;
    local_7c8 = (longlong)local_790[1].SerialNumber;
    local_7d0 = *local_790;
    local_7b8 = 8;
    local_7d8 = local_6f0;
    local_500 = local_7d0;
    local_4f8 = local_7d0;
    local_4f0 = local_7d0;
    local_4e8 = local_7c0;
    local_4e0 = local_7c8;
    local_4d8 = local_7d0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_790[1].Index == local_790[1].SerialNumber) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_790,&local_790[1].SerialNumber);
    local_790[1].Index = iVar3;
  }
  local_728 = local_790[1].Index;
  local_790[1].Index = local_790[1].Index + 1;
  local_4d0 = *local_790;
  local_4c8 = (void *)((longlong)local_4d0 + (longlong)local_728 * 8);
  local_4c0 = ::operator_new(8,local_4c8);
  *local_4c0 = *(undefined8 *)local_6f0;
  local_698 = local_728;
  local_6d0 = (longlong *)&this->field_0x98;
  local_748 = 1;
  local_74c = (uint)(1 < *(int *)&this->field_0xa0);
  if (local_74c == 0) {
    local_4b8 = 0;
    local_4b4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7d0 = (FMassEntityHandle)(longlong)(int)local_6d0[1];
    local_7d8.Index = 1;
    local_7d8.SerialNumber = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_4b0 = *local_6d0;
  local_4a0 = (FMassEntityHandle *)(local_4b0 + 8);
  local_498 = *local_4a0;
  local_490.ObjectIndex = *(int *)&this->field_0xbc;
  local_490.ObjectSerialNumber = *(int *)&this->field_0xc0;
  local_4a8 = local_4b0;
  FEntityBuilder::AddRelation(&local_198,(FTypeHandle)local_490,local_498,Object);
  local_6b8 = *(int *)&this->field_0xa0;
  local_760->Value = local_6b8;
  local_798 = (FMassEntityHandle *)&this->field_0x98;
  local_718 = FEntityBuilder::CommitAndReprepare(&local_198);
  local_488 = *local_798;
  local_480 = local_488;
  local_478 = local_488;
  if (((ulonglong)local_488 <= (ulonglong)local_718) &&
     (local_470 = *local_798, local_468 = local_470, local_460 = local_470,
     (ulonglong)local_718 <
     (ulonglong)((longlong)local_470 + (longlong)local_798[1].SerialNumber * 8))) {
    local_458 = 0;
    local_454 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7c0 = (longlong)local_798[1].Index;
    local_7c8 = (longlong)local_798[1].SerialNumber;
    local_7d0 = *local_798;
    local_7b8 = 8;
    local_7d8 = local_718;
    local_450 = local_7d0;
    local_448 = local_7d0;
    local_440 = local_7d0;
    local_438 = local_7c0;
    local_430 = local_7c8;
    local_428 = local_7d0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_798[1].Index == local_798[1].SerialNumber) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_798,&local_798[1].SerialNumber);
    local_798[1].Index = iVar3;
  }
  local_744 = local_798[1].Index;
  local_798[1].Index = local_798[1].Index + 1;
  local_420 = *local_798;
  local_418 = (void *)((longlong)local_420 + (longlong)local_744 * 8);
  local_410 = ::operator_new(8,local_418);
  *local_410 = *(undefined8 *)local_718;
  local_694 = local_744;
  local_6bc = *(int *)&this->field_0xa0;
  local_760->Value = local_6bc;
  local_7a0 = (FMassEntityHandle *)&this->field_0x98;
  local_710 = FEntityBuilder::CommitAndReprepare(&local_198);
  local_408 = *local_7a0;
  local_400 = local_408;
  local_3f8 = local_408;
  if (((ulonglong)local_408 <= (ulonglong)local_710) &&
     (local_3f0 = *local_7a0, local_3e8 = local_3f0, local_3e0 = local_3f0,
     (ulonglong)local_710 <
     (ulonglong)((longlong)local_3f0 + (longlong)local_7a0[1].SerialNumber * 8))) {
    local_3d8 = 0;
    local_3d4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7c0 = (longlong)local_7a0[1].Index;
    local_7c8 = (longlong)local_7a0[1].SerialNumber;
    local_7d0 = *local_7a0;
    local_7b8 = 8;
    local_7d8 = local_710;
    local_3d0 = local_7d0;
    local_3c8 = local_7d0;
    local_3c0 = local_7d0;
    local_3b8 = local_7c0;
    local_3b0 = local_7c8;
    local_3a8 = local_7d0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_7a0[1].Index == local_7a0[1].SerialNumber) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_7a0,&local_7a0[1].SerialNumber);
    local_7a0[1].Index = iVar3;
  }
  local_740 = local_7a0[1].Index;
  local_7a0[1].Index = local_7a0[1].Index + 1;
  local_3a0 = *local_7a0;
  local_398 = (void *)((longlong)local_3a0 + (longlong)local_740 * 8);
  local_390 = ::operator_new(8,local_398);
  *local_390 = *(undefined8 *)local_710;
  local_690 = local_740;
  local_6c0 = *(int *)&this->field_0xa0;
  local_760->Value = local_6c0;
  local_7a8 = (FMassEntityHandle *)&this->field_0x98;
  local_6f8 = FEntityBuilder::CommitAndReprepare(&local_198);
  local_388 = *local_7a8;
  local_380 = local_388;
  local_378 = local_388;
  if (((ulonglong)local_388 <= (ulonglong)local_6f8) &&
     (local_370 = *local_7a8, local_368 = local_370, local_360 = local_370,
     (ulonglong)local_6f8 <
     (ulonglong)((longlong)local_370 + (longlong)local_7a8[1].SerialNumber * 8))) {
    local_358 = 0;
    local_354 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7c0 = (longlong)local_7a8[1].Index;
    local_7c8 = (longlong)local_7a8[1].SerialNumber;
    local_7d0 = *local_7a8;
    local_7b8 = 8;
    local_7d8 = local_6f8;
    local_350 = local_7d0;
    local_348 = local_7d0;
    local_340 = local_7d0;
    local_338 = local_7c0;
    local_330 = local_7c8;
    local_328 = local_7d0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_7a8[1].Index == local_7a8[1].SerialNumber) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_7a8,&local_7a8[1].SerialNumber);
    local_7a8[1].Index = iVar3;
  }
  local_73c = local_7a8[1].Index;
  local_7a8[1].Index = local_7a8[1].Index + 1;
  local_320 = *local_7a8;
  local_318 = (void *)((longlong)local_320 + (longlong)local_73c * 8);
  local_310 = ::operator_new(8,local_318);
  *local_310 = *(undefined8 *)local_6f8;
  local_68c = local_73c;
  local_6c8 = (longlong *)&this->field_0x98;
  local_734 = 1;
  local_738 = (uint)(2 < *(int *)&this->field_0xa0);
  if (local_738 == 0) {
    local_308 = 0;
    local_304 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7d0 = (FMassEntityHandle)(longlong)(int)local_6c8[1];
    local_7d8.Index = 2;
    local_7d8.SerialNumber = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_300 = *local_6c8;
  local_2f0 = (FMassEntityHandle *)(local_300 + 0x10);
  local_2e8 = *local_2f0;
  local_2e0.ObjectIndex = *(int *)&this->field_0xbc;
  local_2e0.ObjectSerialNumber = *(int *)&this->field_0xc0;
  local_2f8 = local_300;
  FEntityBuilder::AddRelation(&local_198,(FTypeHandle)local_2e0,local_2e8,Object);
  local_6d8 = *(int *)&this->field_0xa0;
  local_760->Value = local_6d8;
  local_788 = (FMassEntityHandle *)&this->field_0x98;
  local_708 = FEntityBuilder::CommitAndReprepare(&local_198);
  local_2d8 = *local_788;
  local_2d0 = local_2d8;
  local_2c8 = local_2d8;
  if (((ulonglong)local_2d8 <= (ulonglong)local_708) &&
     (local_2c0 = *local_788, local_2b8 = local_2c0, local_2b0 = local_2c0,
     (ulonglong)local_708 <
     (ulonglong)((longlong)local_2c0 + (longlong)local_788[1].SerialNumber * 8))) {
    local_2a8 = 0;
    local_2a4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7c0 = (longlong)local_788[1].Index;
    local_7c8 = (longlong)local_788[1].SerialNumber;
    local_7d0 = *local_788;
    local_7b8 = 8;
    local_7d8 = local_708;
    local_2a0 = local_7d0;
    local_298 = local_7d0;
    local_290 = local_7d0;
    local_288 = local_7c0;
    local_280 = local_7c8;
    local_278 = local_7d0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_788[1].Index == local_788[1].SerialNumber) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_788,&local_788[1].SerialNumber);
    local_788[1].Index = iVar3;
  }
  local_730 = local_788[1].Index;
  local_788[1].Index = local_788[1].Index + 1;
  local_270 = *local_788;
  local_268 = (void *)((longlong)local_270 + (longlong)local_730 * 8);
  local_260 = ::operator_new(8,local_268);
  *local_260 = *(undefined8 *)local_708;
  local_688 = local_730;
  local_6a4 = *(int *)&this->field_0xa0;
  local_760->Value = local_6a4;
  local_770 = (FMassEntityHandle *)&this->field_0x98;
  local_700 = FEntityBuilder::CommitAndReprepare(&local_198);
  local_258 = *local_770;
  local_250 = local_258;
  local_248 = local_258;
  if (((ulonglong)local_258 <= (ulonglong)local_700) &&
     (local_240 = *local_770, local_238 = local_240, local_230 = local_240,
     (ulonglong)local_700 <
     (ulonglong)((longlong)local_240 + (longlong)local_770[1].SerialNumber * 8))) {
    local_228 = 0;
    local_224 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_7c0 = (longlong)local_770[1].Index;
    local_7c8 = (longlong)local_770[1].SerialNumber;
    local_7d0 = *local_770;
    local_7b8 = 8;
    local_7d8 = local_700;
    local_220 = local_7d0;
    local_218 = local_7d0;
    local_210 = local_7d0;
    local_208 = local_7c0;
    local_200 = local_7c8;
    local_1f8 = local_7d0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_770[1].Index == local_770[1].SerialNumber) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_770,&local_770[1].SerialNumber);
    local_770[1].Index = iVar3;
  }
  local_72c = local_770[1].Index;
  local_770[1].Index = local_770[1].Index + 1;
  local_1f0 = *local_770;
  local_1e8 = (void *)((longlong)local_1f0 + (longlong)local_72c * 8);
  local_1e0 = ::operator_new(8,local_1e8);
  *local_1e0 = *(undefined8 *)local_700;
  local_684 = local_72c;
  FEntityBuilder::~FEntityBuilder(&local_198);
  return;
}

