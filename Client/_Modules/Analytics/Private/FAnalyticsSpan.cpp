// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 13

// AddAttributes @ 1431351a0

void __thiscall
FAnalyticsSpan::AddAttributes
          (FAnalyticsSpan *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  AggregateAttributes(&this->Attributes,param_1);
  return;
}

// End @ 143136900

void __thiscall
FAnalyticsSpan::End(FAnalyticsSpan *this,
                   TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDateTime FVar3;
  FTimespan this_00;
  FString *pFVar4;
  double dVar5;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_7d8;
  undefined1 local_7c8;
  undefined1 local_7c7;
  int local_7c4;
  int local_7c0;
  int local_7bc;
  int local_7b8;
  int local_7b4;
  int local_7b0;
  int local_7ac;
  int local_7a8;
  FAnalyticsEventAttribute *local_7a0;
  FAnalyticsEventAttribute *local_798;
  FAnalyticsEventAttribute *local_790;
  FAnalyticsEventAttribute *local_788;
  FAnalyticsEventAttribute *local_780;
  FAnalyticsEventAttribute *local_778;
  FAnalyticsEventAttribute *local_770;
  FAnalyticsEventAttribute *local_768;
  int local_760;
  int local_75c;
  uint local_758 [2];
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_750;
  IAnalyticsProvider *local_748;
  int local_740;
  int local_73c;
  int local_738;
  int local_734;
  int local_730;
  int local_72c;
  int local_728;
  FDateTime *local_720;
  code *local_718;
  FAnalyticsEventAttribute *local_710;
  FAnalyticsEventAttribute *local_708;
  FAnalyticsEventAttribute *local_700;
  FAnalyticsEventAttribute *local_6f8;
  FString *local_6f0;
  FAnalyticsEventAttribute *local_6e8;
  FAnalyticsEventAttribute *local_6e0;
  FAnalyticsEventAttribute *local_6d8;
  FAnalyticsEventAttribute *local_6d0;
  FAnalyticsEventAttribute *local_6c8;
  FAnalyticsEventAttribute *local_6c0;
  undefined4 local_6b8;
  undefined4 local_6b4;
  FAnalyticsEventAttribute *local_6b0;
  FAnalyticsEventAttribute *local_6a8;
  FAnalyticsEventAttribute *local_6a0;
  longlong local_698;
  longlong local_690;
  FAnalyticsEventAttribute *local_688;
  FAnalyticsEventAttribute *local_680;
  FScriptContainerElement *local_678;
  FAnalyticsEventAttribute *local_670;
  FName *local_668;
  FString *local_660;
  FString *local_658;
  FString *local_650;
  FAnalyticsEventAttribute *local_648;
  FAnalyticsEventAttribute *local_640;
  FAnalyticsEventAttribute *local_638;
  FAnalyticsEventAttribute *local_630;
  FAnalyticsEventAttribute *local_628;
  FAnalyticsEventAttribute *local_620;
  undefined4 local_618;
  undefined4 local_614;
  FAnalyticsEventAttribute *local_610;
  FAnalyticsEventAttribute *local_608;
  FAnalyticsEventAttribute *local_600;
  longlong local_5f8;
  longlong local_5f0;
  FAnalyticsEventAttribute *local_5e8;
  FAnalyticsEventAttribute *local_5e0;
  FScriptContainerElement *local_5d8;
  FAnalyticsEventAttribute *local_5d0;
  FGuid *local_5c8;
  FString *local_5c0;
  FString *local_5b8;
  FString *local_5b0;
  FAnalyticsEventAttribute *local_5a8;
  FAnalyticsEventAttribute *local_5a0;
  FAnalyticsEventAttribute *local_598;
  FAnalyticsEventAttribute *local_590;
  FAnalyticsEventAttribute *local_588;
  FAnalyticsEventAttribute *local_580;
  undefined4 local_578;
  undefined4 local_574;
  FAnalyticsEventAttribute *local_570;
  FAnalyticsEventAttribute *local_568;
  FAnalyticsEventAttribute *local_560;
  longlong local_558;
  longlong local_550;
  FAnalyticsEventAttribute *local_548;
  FAnalyticsEventAttribute *local_540;
  FScriptContainerElement *local_538;
  FAnalyticsEventAttribute *local_530;
  FString *local_528;
  uint *local_520;
  FAnalyticsEventAttribute *local_518;
  FAnalyticsEventAttribute *local_510;
  FAnalyticsEventAttribute *local_508;
  FAnalyticsEventAttribute *local_500;
  FAnalyticsEventAttribute *local_4f8;
  FAnalyticsEventAttribute *local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  FAnalyticsEventAttribute *local_4e0;
  FAnalyticsEventAttribute *local_4d8;
  FAnalyticsEventAttribute *local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  FAnalyticsEventAttribute *local_4b8;
  FAnalyticsEventAttribute *local_4b0;
  FScriptContainerElement *local_4a8;
  FAnalyticsEventAttribute *local_4a0;
  FString *local_498;
  uint *local_490;
  FAnalyticsEventAttribute *local_488;
  FAnalyticsEventAttribute *local_480;
  FAnalyticsEventAttribute *local_478;
  FAnalyticsEventAttribute *local_470;
  FAnalyticsEventAttribute *local_468;
  FAnalyticsEventAttribute *local_460;
  undefined4 local_458;
  undefined4 local_454;
  FAnalyticsEventAttribute *local_450;
  FAnalyticsEventAttribute *local_448;
  FAnalyticsEventAttribute *local_440;
  longlong local_438;
  longlong local_430;
  FAnalyticsEventAttribute *local_428;
  FAnalyticsEventAttribute *local_420;
  FScriptContainerElement *local_418;
  FAnalyticsEventAttribute *local_410;
  FString *local_408;
  double local_400;
  FAnalyticsEventAttribute *local_3f8;
  FAnalyticsEventAttribute *local_3f0;
  FAnalyticsEventAttribute *local_3e8;
  FAnalyticsEventAttribute *local_3e0;
  FAnalyticsEventAttribute *local_3d8;
  FAnalyticsEventAttribute *local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  FAnalyticsEventAttribute *local_3c0;
  FAnalyticsEventAttribute *local_3b8;
  FAnalyticsEventAttribute *local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  FAnalyticsEventAttribute *local_398;
  FAnalyticsEventAttribute *local_390;
  FScriptContainerElement *local_388;
  FAnalyticsEventAttribute *local_380;
  FString *local_378;
  double local_370;
  FAnalyticsEventAttribute *local_368;
  FAnalyticsEventAttribute *local_360;
  FAnalyticsEventAttribute *local_358;
  FAnalyticsEventAttribute *local_350;
  FAnalyticsEventAttribute *local_348;
  FAnalyticsEventAttribute *local_340;
  undefined4 local_338;
  undefined4 local_334;
  FAnalyticsEventAttribute *local_330;
  FAnalyticsEventAttribute *local_328;
  FAnalyticsEventAttribute *local_320;
  longlong local_318;
  longlong local_310;
  FAnalyticsEventAttribute *local_308;
  FAnalyticsEventAttribute *local_300;
  FScriptContainerElement *local_2f8;
  FAnalyticsEventAttribute *local_2f0;
  FString *local_2e8;
  double *local_2e0;
  FAnalyticsEventAttribute *local_2d8;
  FAnalyticsEventAttribute *local_2d0;
  FAnalyticsEventAttribute *local_2c8;
  FAnalyticsEventAttribute *local_2c0;
  FAnalyticsEventAttribute *local_2b8;
  FAnalyticsEventAttribute *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  FAnalyticsEventAttribute *local_2a0;
  FAnalyticsEventAttribute *local_298;
  FAnalyticsEventAttribute *local_290;
  longlong local_288;
  longlong local_280;
  FAnalyticsEventAttribute *local_278;
  FAnalyticsEventAttribute *local_270;
  FScriptContainerElement *local_268;
  FAnalyticsEventAttribute *local_260;
  code *local_258;
  int local_250;
  FString local_248;
  FDateTime local_238 [2];
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FAnalyticsEventAttribute local_188;
  FAnalyticsEventAttribute local_158;
  FAnalyticsEventAttribute local_128;
  FAnalyticsEventAttribute local_f8;
  FAnalyticsEventAttribute local_c8;
  FAnalyticsEventAttribute local_98;
  FAnalyticsEventAttribute local_68;
  FAnalyticsEventAttribute local_38;
  
  if (this->IsActive != false) {
    FVar3 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
    (this->EndTime).Ticks = *FVar3.Ticks;
    local_720 = &this->EndTime;
    this_00 = FDateTime::operator-(local_720,local_238);
    dVar5 = FTimespan::GetTotalSeconds((FTimespan *)this_00.Ticks);
    this->Duration = dVar5;
    local_718 = *(code **)(this->_padding_ + 0x20);
    (*local_718)(this,param_1);
    local_758[0] = 2;
    ::FString::FString(&local_248,L"Span");
    local_750 = &this->Attributes;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_7d8.AllocatorInstance);
    local_760 = local_750->ArrayNum;
    local_710 = (FAnalyticsEventAttribute *)(local_750->AllocatorInstance).Data;
    local_75c = local_760;
    local_708 = local_710;
    local_700 = local_710;
    local_6f8 = local_710;
    TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<FAnalyticsEventAttribute,int>(&local_7d8,local_710,local_760,0);
    local_6f0 = &local_208;
    pFVar4 = ::FString::FString(local_6f0,L"SchemaVersion");
    local_770 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned_int_const_&>
                          (&local_188,pFVar4,local_758);
    local_6e8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_6e0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_6d8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    if (local_7d8.AllocatorInstance.Data <= local_770) {
      local_6d0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_6c8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_6c0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      if (local_770 <
          (FAnalyticsEventAttribute *)
          (local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 0x30)) {
        local_6b8 = 0;
        local_6b4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_698 = (longlong)local_7d8.ArrayNum;
        local_690 = (longlong)local_7d8.ArrayMax;
        local_6b0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_6a8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_6a0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_688 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
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
    }
    if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
      local_7d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
    }
    local_7c4 = local_7d8.ArrayNum;
    local_680 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_678 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 0x30;
    local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
    local_670 = ::operator_new(0x30,local_678);
    FAnalyticsEventAttribute::FAnalyticsEventAttribute(local_670,local_770);
    local_250 = local_7c4;
    FAnalyticsEventAttribute::~FAnalyticsEventAttribute(&local_188);
    local_668 = &this->Name;
    local_658 = ::FName::ToString(local_668,&local_228);
    local_660 = &local_1f8;
    local_650 = ::FString::FString(local_660,L"Span_Name");
    local_768 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                          (&local_158,local_650,local_658);
    local_648 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_640 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_638 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    if (local_7d8.AllocatorInstance.Data <= local_768) {
      local_630 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_628 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_620 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      if (local_768 <
          (FAnalyticsEventAttribute *)
          (local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 0x30)) {
        local_618 = 0;
        local_614 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_5f8 = (longlong)local_7d8.ArrayNum;
        local_5f0 = (longlong)local_7d8.ArrayMax;
        local_610 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_608 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_600 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_5e8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
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
    }
    if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
      local_7d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
    }
    local_7c0 = local_7d8.ArrayNum;
    local_5e0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_5d8 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 0x30;
    local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
    local_5d0 = ::operator_new(0x30,local_5d8);
    FAnalyticsEventAttribute::FAnalyticsEventAttribute(local_5d0,local_768);
    local_740 = local_7c0;
    FAnalyticsEventAttribute::~FAnalyticsEventAttribute(&local_158);
    ::FString::~FString(&local_228);
    local_5c8 = &this->Guid;
    local_5b8 = FGuid::ToString(local_5c8,&local_218,Digits);
    local_5c0 = &local_1e8;
    local_5b0 = ::FString::FString(local_5c0,L"Span_GUID");
    local_7a0 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                          (&local_128,local_5b0,local_5b8);
    local_5a8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_5a0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_598 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    if (local_7d8.AllocatorInstance.Data <= local_7a0) {
      local_590 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_588 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_580 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      if (local_7a0 <
          (FAnalyticsEventAttribute *)
          (local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 0x30)) {
        local_578 = 0;
        local_574 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_558 = (longlong)local_7d8.ArrayNum;
        local_550 = (longlong)local_7d8.ArrayMax;
        local_570 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_568 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_560 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_548 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
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
    }
    if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
      local_7d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
    }
    local_7bc = local_7d8.ArrayNum;
    local_540 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_538 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 0x30;
    local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
    local_530 = ::operator_new(0x30,local_538);
    FAnalyticsEventAttribute::FAnalyticsEventAttribute(local_530,local_7a0);
    local_73c = local_7bc;
    FAnalyticsEventAttribute::~FAnalyticsEventAttribute(&local_128);
    ::FString::~FString(&local_218);
    local_528 = &local_1d8;
    local_520 = &this->ThreadId;
    pFVar4 = ::FString::FString(local_528,L"Span_ThreadId");
    local_798 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned_int_&>
                          (&local_f8,pFVar4,local_520);
    local_518 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_510 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_508 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    if (local_7d8.AllocatorInstance.Data <= local_798) {
      local_500 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_4f8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_4f0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      if (local_798 <
          (FAnalyticsEventAttribute *)
          (local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 0x30)) {
        local_4e8 = 0;
        local_4e4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_4c8 = (longlong)local_7d8.ArrayNum;
        local_4c0 = (longlong)local_7d8.ArrayMax;
        local_4e0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_4d8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_4d0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_4b8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
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
    }
    if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
      local_7d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
    }
    local_7b8 = local_7d8.ArrayNum;
    local_4b0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_4a8 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 0x30;
    local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
    local_4a0 = ::operator_new(0x30,local_4a8);
    FAnalyticsEventAttribute::FAnalyticsEventAttribute(local_4a0,local_798);
    local_738 = local_7b8;
    FAnalyticsEventAttribute::~FAnalyticsEventAttribute(&local_f8);
    local_498 = &local_1c8;
    local_490 = &this->StackDepth;
    pFVar4 = ::FString::FString(local_498,L"Span_Depth");
    local_790 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned_int_&>
                          (&local_c8,pFVar4,local_490);
    local_488 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_480 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_478 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    if (local_7d8.AllocatorInstance.Data <= local_790) {
      local_470 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_468 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_460 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      if (local_790 <
          (FAnalyticsEventAttribute *)
          (local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 0x30)) {
        local_458 = 0;
        local_454 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_438 = (longlong)local_7d8.ArrayNum;
        local_430 = (longlong)local_7d8.ArrayMax;
        local_450 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_448 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_440 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_428 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
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
    }
    if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
      local_7d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
    }
    local_7b4 = local_7d8.ArrayNum;
    local_420 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_418 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 0x30;
    local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
    local_410 = ::operator_new(0x30,local_418);
    FAnalyticsEventAttribute::FAnalyticsEventAttribute(local_410,local_790);
    local_734 = local_7b4;
    FAnalyticsEventAttribute::~FAnalyticsEventAttribute(&local_c8);
    local_400 = FDateTime::ToUnixTimestampDecimal(&this->StartTime);
    local_408 = &local_1b8;
    pFVar4 = ::FString::FString(local_408,L"Span_StartUTC");
    local_788 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<double>
                          (&local_98,pFVar4,&local_400);
    local_3f8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_3f0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_3e8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    if (local_7d8.AllocatorInstance.Data <= local_788) {
      local_3e0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_3d8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_3d0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      if (local_788 <
          (FAnalyticsEventAttribute *)
          (local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 0x30)) {
        local_3c8 = 0;
        local_3c4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_3a8 = (longlong)local_7d8.ArrayNum;
        local_3a0 = (longlong)local_7d8.ArrayMax;
        local_3c0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_3b8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_3b0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_398 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
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
    }
    if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
      local_7d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
    }
    local_7b0 = local_7d8.ArrayNum;
    local_390 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_388 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 0x30;
    local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
    local_380 = ::operator_new(0x30,local_388);
    FAnalyticsEventAttribute::FAnalyticsEventAttribute(local_380,local_788);
    local_730 = local_7b0;
    FAnalyticsEventAttribute::~FAnalyticsEventAttribute(&local_98);
    local_370 = FDateTime::ToUnixTimestampDecimal(&this->EndTime);
    local_378 = &local_1a8;
    pFVar4 = ::FString::FString(local_378,L"Span_EndUTC");
    local_780 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<double>
                          (&local_68,pFVar4,&local_370);
    local_368 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_360 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_358 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    if (local_7d8.AllocatorInstance.Data <= local_780) {
      local_350 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_348 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_340 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      if (local_780 <
          (FAnalyticsEventAttribute *)
          (local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 0x30)) {
        local_338 = 0;
        local_334 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_318 = (longlong)local_7d8.ArrayNum;
        local_310 = (longlong)local_7d8.ArrayMax;
        local_330 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_328 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_320 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_308 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
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
    }
    if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
      local_7d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
    }
    local_7ac = local_7d8.ArrayNum;
    local_300 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_2f8 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 0x30;
    local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
    local_2f0 = ::operator_new(0x30,local_2f8);
    FAnalyticsEventAttribute::FAnalyticsEventAttribute(local_2f0,local_780);
    local_72c = local_7ac;
    FAnalyticsEventAttribute::~FAnalyticsEventAttribute(&local_68);
    local_2e8 = &local_198;
    local_2e0 = &this->Duration;
    pFVar4 = ::FString::FString(local_2e8,L"Span_TimeInSec");
    local_778 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_&>
                          (&local_38,pFVar4,local_2e0);
    local_2d8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_2d0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_2c8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    if (local_7d8.AllocatorInstance.Data <= local_778) {
      local_2c0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_2b8 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      local_2b0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
      if (local_778 <
          (FAnalyticsEventAttribute *)
          (local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 0x30)) {
        local_2a8 = 0;
        local_2a4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_288 = (longlong)local_7d8.ArrayNum;
        local_280 = (longlong)local_7d8.ArrayMax;
        local_2a0 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_298 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_290 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
        local_278 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
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
    }
    if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
      local_7d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
    }
    local_7a8 = local_7d8.ArrayNum;
    local_270 = (FAnalyticsEventAttribute *)local_7d8.AllocatorInstance.Data;
    local_268 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 0x30;
    local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
    local_260 = ::operator_new(0x30,local_268);
    FAnalyticsEventAttribute::FAnalyticsEventAttribute(local_260,local_778);
    local_728 = local_7a8;
    FAnalyticsEventAttribute::~FAnalyticsEventAttribute(&local_38);
    local_7c8 = (this->AnalyticsProvider).Object != (IAnalyticsProvider *)0x0;
    local_7c7 = local_7c8;
    if ((bool)local_7c8) {
      local_748 = TSharedPtr<IAnalyticsProvider,1>::operator->(&this->AnalyticsProvider);
      local_258 = *(code **)((longlong)*local_748 + 0x80);
      (*local_258)(local_748,&local_248,&local_7d8);
    }
    this->IsActive = false;
    TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::
    ~TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>(&local_7d8);
    ::FString::~FString(&local_248);
  }
  return;
}

// GetAttributes @ 143139ba0

TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> * __thiscall
FAnalyticsSpan::GetAttributes(FAnalyticsSpan *this)

{
  return &this->Attributes;
}

// GetDuration @ 14313a250

double __thiscall FAnalyticsSpan::GetDuration(FAnalyticsSpan *this)

{
  return this->Duration;
}

// GetElapsedTime @ 14313a270

double __thiscall FAnalyticsSpan::GetElapsedTime(FAnalyticsSpan *this)

{
  FDateTime this_00;
  FTimespan this_01;
  double dVar1;
  FDateTime local_18 [3];
  
  this_00 = FDateTime::UtcNow();
  this_01 = FDateTime::operator-(this_00.Ticks,local_18);
  dVar1 = FTimespan::GetTotalSeconds((FTimespan *)this_01.Ticks);
  return dVar1;
}

// GetId @ 14313a3c0

FGuid * __thiscall FAnalyticsSpan::GetId(FAnalyticsSpan *this,FGuid *__return_storage_ptr__)

{
  longlong lVar1;
  FGuid *pFVar2;
  FGuid *pFVar3;
  
  pFVar2 = &this->Guid;
  pFVar3 = __return_storage_ptr__;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(char *)&pFVar3->A = (char)pFVar2->A;
    pFVar2 = (FGuid *)((longlong)&pFVar2->A + 1);
    pFVar3 = (FGuid *)((longlong)&pFVar3->A + 1);
  }
  return __return_storage_ptr__;
}

// GetIsActive @ 14313a3f0

bool __thiscall FAnalyticsSpan::GetIsActive(FAnalyticsSpan *this)

{
  return this->IsActive;
}

// GetName @ 14313a420

FName * __thiscall FAnalyticsSpan::GetName(FAnalyticsSpan *this)

{
  return &this->Name;
}

// GetStackDepth @ 14313a7f0

uint __thiscall FAnalyticsSpan::GetStackDepth(FAnalyticsSpan *this)

{
  return this->StackDepth;
}

// RecordEvent @ 14313afd0

void __thiscall
FAnalyticsSpan::RecordEvent
          (FAnalyticsSpan *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  IAnalyticsProvider *pIVar1;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_48;
  FAnalyticsEventAttribute *local_38;
  FAnalyticsEventAttribute *local_30;
  FAnalyticsEventAttribute *local_28;
  FAnalyticsEventAttribute *local_20;
  code *local_18;
  
  if ((this->AnalyticsProvider).Object != (IAnalyticsProvider *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_48.AllocatorInstance);
    local_38 = (FAnalyticsEventAttribute *)(this->Attributes).AllocatorInstance.Data;
    local_30 = local_38;
    local_28 = local_38;
    local_20 = local_38;
    TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<FAnalyticsEventAttribute,int>(&local_48,local_38,(this->Attributes).ArrayNum,0);
    AggregateAttributes(&local_48,param_2);
    pIVar1 = TSharedPtr<IAnalyticsProvider,1>::operator->(&this->AnalyticsProvider);
    local_18 = *(code **)((longlong)*pIVar1 + 0x80);
    (*local_18)(pIVar1,param_1,&local_48);
    TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::
    ~TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>(&local_48);
  }
  return;
}

// SetProvider @ 14313d350

void __thiscall
FAnalyticsSpan::SetProvider(FAnalyticsSpan *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  TSharedPtr<IAnalyticsProvider,1>::operator=(&this->AnalyticsProvider,param_1);
  TSharedPtr<IAnalyticsProvider,1>::~TSharedPtr<IAnalyticsProvider,1>(param_1);
  return;
}

// SetStackDepth @ 14313d3d0

void __thiscall FAnalyticsSpan::SetStackDepth(FAnalyticsSpan *this,uint param_1)

{
  this->StackDepth = param_1;
  return;
}

// Start @ 14313d5e0

void __thiscall
FAnalyticsSpan::Start
          (FAnalyticsSpan *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  DWORD DVar1;
  FGuid *pFVar2;
  FDateTime FVar3;
  longlong lVar4;
  FGuid *pFVar5;
  FGuid local_30 [2];
  
  pFVar2 = FGuid::NewGuid(local_30);
  pFVar5 = &this->Guid;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(char *)&pFVar5->A = (char)pFVar2->A;
    pFVar2 = (FGuid *)((longlong)&pFVar2->A + 1);
    pFVar5 = (FGuid *)((longlong)&pFVar5->A + 1);
  }
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::operator=(&this->Attributes,param_1)
  ;
  DVar1 = GetCurrentThreadId();
  this->ThreadId = DVar1;
  FVar3 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
  (this->StartTime).Ticks = *FVar3.Ticks;
  FVar3 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
  (this->EndTime).Ticks = *FVar3.Ticks;
  this->Duration = 0.0;
  this->IsActive = true;
  return;
}

