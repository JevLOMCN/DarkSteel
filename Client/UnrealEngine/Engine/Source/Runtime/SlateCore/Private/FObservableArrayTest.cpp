// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// GetTestFlags @ 142531830

EAutomationTestFlags __thiscall
UE::Test::FObservableArrayTest::GetTestFlags(FObservableArrayTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 142531840

bool __thiscall UE::Test::FObservableArrayTest::IsStressTest(FObservableArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142531850

uint __thiscall UE::Test::FObservableArrayTest::GetRequiredDeviceNum(FObservableArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 142531860

FString * __thiscall
UE::Test::FObservableArrayTest::GetTestSourceFileName
          (FObservableArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\ObservableArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142531890

int __thiscall UE::Test::FObservableArrayTest::GetTestSourceFileLine(FObservableArrayTest *this)

{
  return 0xd;
}

// GetTests @ 1425318a0

/* WARNING: Removing unreachable block (ram,0x00014253198d) */
/* WARNING: Removing unreachable block (ram,0x000142531a58) */

void __thiscall
UE::Test::FObservableArrayTest::GetTests
          (FObservableArrayTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Slate.ObservableArray");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 142531a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::Test::FObservableArrayTest::RunTest(FObservableArrayTest *this,FString *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  FScriptContainerElement *pFVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  undefined1 auStackY_678 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_628;
  ForAnyElementType local_618;
  undefined8 local_610;
  undefined1 local_608;
  undefined1 local_607 [3];
  int local_604;
  uint local_600 [2];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [8];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTStack_5e0;
  int local_5d8;
  undefined8 uStack_5d0;
  undefined1 local_5c8 [4];
  int local_5c4;
  int local_5c0 [2];
  FScriptContainerElement *local_5b8;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  int local_580 [2];
  ForAnyElementType local_578;
  int local_570;
  int iStack_56c;
  ForAnyElementType local_568;
  undefined8 local_560;
  ForAnyElementType local_558;
  undefined8 local_550;
  ForAnyElementType local_548;
  undefined8 local_540;
  ForAnyElementType local_538;
  undefined8 local_530;
  ForAnyElementType local_528;
  undefined8 local_520;
  FScriptContainerElement *local_518;
  undefined8 local_510;
  int local_508 [3];
  int local_4fc;
  TArray<int,TSizedDefaultAllocator<32>_> local_4f8;
  int local_4e8 [2];
  FScriptContainerElement *local_4e0;
  undefined8 uStack_4d8;
  int local_4d0;
  int iStack_4cc;
  EObservableArrayChangedAction EStack_4c8;
  undefined7 uStack_4c7;
  undefined1 local_4c0 [16];
  FScriptContainerElement *local_4b0;
  int iStack_4a8;
  undefined4 uStack_4a4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_4a0;
  undefined4 uStack_498;
  uint uStack_494;
  undefined8 local_490;
  undefined1 uStack_488;
  uint7 uStack_487;
  FString local_480;
  FString local_470;
  FString local_460;
  FScriptContainerElement *local_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  int *local_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FScriptContainerElement *local_1e0;
  int *piStack_1d8;
  int local_1d0;
  undefined4 uStack_1cc;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  FObservableArrayTest *local_1c0;
  undefined1 *local_1b8;
  int *local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1a8;
  int *local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined1 uStack_188;
  undefined7 uStack_187;
  FObservableArrayTest *local_180;
  int *local_178;
  int *local_170;
  undefined1 *local_168;
  FScriptContainerElement **local_160;
  FObservableArrayTest *local_158;
  undefined1 *local_150;
  uint *local_148;
  FScriptContainerElement **local_140;
  undefined1 *local_138;
  undefined1 local_130 [16];
  int *piStack_120;
  TArray<int,TSizedDefaultAllocator<32>_> *local_118;
  undefined8 uStack_110;
  TObservableArrayChangedArgs<int> local_108;
  TObservableArrayChangedArgs<int> local_e8;
  TObservableArrayChangedArgs<int> local_c8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_1b8 = &local_608;
  uVar14 = 0;
  local_1b0 = &local_604;
  local_1a8 = &local_628;
  local_608 = 1;
  local_604 = 0;
  local_628.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.ArrayNum = 0;
  local_628.ArrayMax = 0;
  local_618.Data = (FScriptContainerElement *)0x0;
  local_610 = 0;
  local_5f8._0_8_ = (FScriptContainerElement *)0x0;
  local_5f8._8_4_ = 0;
  local_5f8._12_4_ = 0;
  local_5e8 = (undefined1  [8])0x0;
  pTStack_5e0 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  _local_5d8 = ___xmm_00000000000000020000000000000000;
  uStack_5d0 = _UNK_150631d48;
  local_1c0 = this;
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
  ::AddLambda<_UE::Test::FObservableArrayTest::RunTest_::__l2::<lambda_1>_&>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
              *)local_5e8,(<lambda_1> *)local_130);
  uVar17 = local_628._8_8_;
  uVar12 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  local_608 = 1;
  uVar8 = uVar14;
  if (((longlong)uVar17 < 0) && (uVar8 = 0, uVar12 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
    uVar12 = local_628.ArrayMax;
    uVar8 = local_628.ArrayNum;
  }
  local_5a8 = 2;
  if ((local_628.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5a8) &&
     ((FScriptContainerElement *)&local_5a8 <
      local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    uVar12 = local_628.ArrayMax;
    uVar8 = local_628.ArrayNum;
  }
  if (uVar8 == uVar12) {
    uVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
  }
  local_628.ArrayNum = uVar8 + 1;
  local_5a4 = 2;
  *(undefined4 *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = local_5a8;
  if (((local_618.Data <= (FScriptContainerElement *)&local_5a4) &&
      ((FScriptContainerElement *)&local_5a4 < local_618.Data + (longlong)(int)local_610._4_4_ * 4))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  iVar9 = (int)local_610;
  if ((int)local_610 == local_610._4_4_) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_618,(int *)((longlong)&local_610 + 4));
  }
  local_4fc = 2;
  local_610 = CONCAT44(local_610._4_4_,iVar9 + 1);
  *(undefined4 *)(local_618.Data + (longlong)iVar9 * 4) = local_5a4;
  Slate::Containers::TObservableArray<int>::Add((TObservableArray<int> *)local_5f8,&local_4fc);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_470,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  (*pcVar1)(this,uVar17,&local_470,0);
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_460,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == 1,&local_460,0);
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  uVar12 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  uVar8 = uVar14;
  if (((longlong)uVar17 < 0) && (uVar8 = 0, uVar12 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
    uVar12 = local_628.ArrayMax;
    uVar8 = local_628.ArrayNum;
  }
  local_5a0 = 3;
  if ((local_628.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5a0) &&
     ((FScriptContainerElement *)&local_5a0 <
      local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    uVar12 = local_628.ArrayMax;
    uVar8 = local_628.ArrayNum;
  }
  if (uVar8 == uVar12) {
    uVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
  }
  local_628.ArrayNum = uVar8 + 1;
  *(undefined4 *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = local_5a0;
  iVar9 = (int)local_610;
  if ((int)local_610 == local_610._4_4_) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_618,(int *)((longlong)&local_610 + 4));
  }
  local_610 = CONCAT44(local_610._4_4_,iVar9 + 1);
  *(undefined4 *)(local_618.Data + (longlong)iVar9 * 4) = 3;
  local_1d0 = local_5f8._8_4_;
  if (local_5f8._8_4_ == local_5f8._12_4_) {
    local_1d0 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)local_5f8,(int *)(local_5f8 + 0xc));
  }
  uStack_1cc = 0xffffffff;
  local_5f8._8_4_ = local_1d0 + 1;
  uStack_448 = 1;
  uStack_1c8 = 1;
  *(undefined4 *)(local_5f8._0_8_ + (longlong)local_1d0 * 4) = 3;
  pFVar18 = (FScriptContainerElement *)(local_5f8._0_8_ + (longlong)local_1d0 * 4);
  piVar2 = (int *)CONCAT44(uStack_444,1);
  local_450 = pFVar18;
  local_1e0 = pFVar18;
  piStack_1d8 = piVar2;
  if ((local_1d0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x3d,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  local_118 = (TArray<int,TSizedDefaultAllocator<32>_> *)CONCAT44(uStack_1cc,local_1d0);
  uStack_110 = CONCAT71(uStack_1c7,uStack_1c8);
  local_130._8_8_ = pFVar18;
  piStack_120 = piVar2;
  TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
               *)local_5e8,(TObservableArrayChangedArgs<int> *)(local_130 + 8));
  pwVar19 = L"ObservableValues == ArrayValues";
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_440,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (pwVar19 = (wchar_t *)local_618.Data,
      iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
  }
  (*pcVar1)(this,uVar16,&local_440,0);
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_430,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == 2,&local_430,0);
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  uVar12 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  uVar8 = uVar14;
  if (((longlong)uVar17 < 0) && (uVar8 = 0, uVar12 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
    uVar12 = local_628.ArrayMax;
    uVar8 = local_628.ArrayNum;
  }
  local_59c = 4;
  if ((local_628.AllocatorInstance.Data <= (FScriptContainerElement *)&local_59c) &&
     ((FScriptContainerElement *)&local_59c <
      local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    uVar12 = local_628.ArrayMax;
    uVar8 = local_628.ArrayNum;
  }
  if (uVar8 == uVar12) {
    uVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
  }
  local_628.ArrayNum = uVar8 + 1;
  *(undefined4 *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = local_59c;
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,&local_618,(int *)&local_610,(int *)((longlong)&local_610 + 4));
  memmove(local_618.Data + 0xc,local_618.Data + 8,(longlong)(iVar9 + -2) << 2);
  local_4e8[0] = 4;
  *(int *)(local_618.Data + 8) = 4;
  Slate::Containers::TObservableArray<int>::EmplaceAt<int>
            ((TObservableArray<int> *)local_5f8,2,local_4e8);
  pwVar19 = L"ObservableValues == ArrayValues";
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_480,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (pwVar19 = (wchar_t *)local_618.Data,
      iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
  }
  (*pcVar1)(this,uVar16,&local_480,0);
  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_410,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == 3,&local_410,0);
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  uVar12 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  uVar8 = uVar14;
  if (((longlong)uVar17 < 0) && (uVar8 = 0, uVar12 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
    uVar12 = local_628.ArrayMax;
    uVar8 = local_628.ArrayNum;
  }
  local_598 = 1;
  if ((local_628.AllocatorInstance.Data <= (FScriptContainerElement *)&local_598) &&
     ((FScriptContainerElement *)&local_598 <
      local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    uVar12 = local_628.ArrayMax;
    uVar8 = local_628.ArrayNum;
  }
  if (uVar8 == uVar12) {
    uVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
  }
  local_628.ArrayNum = uVar8 + 1;
  *(undefined4 *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = local_598;
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,&local_618,(int *)&local_610,(int *)((longlong)&local_610 + 4));
  memmove(local_618.Data + 4,local_618.Data,(longlong)iVar9 << 2);
  local_508[0] = 1;
  *(int *)local_618.Data = 1;
  Slate::Containers::TObservableArray<int>::EmplaceAt<int>
            ((TObservableArray<int> *)local_5f8,0,local_508);
  pwVar19 = L"ObservableValues == ArrayValues";
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_200,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (pwVar19 = (wchar_t *)local_618.Data,
      iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
  }
  (*pcVar1)(this,uVar16,&local_200,0);
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_290,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == 4,&local_290,0);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  uVar12 = local_628.ArrayMax;
  uVar8 = 0;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  uVar10 = uVar14;
  if (((longlong)uVar17 < 0) && (uVar10 = 0, uVar12 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
    uVar12 = local_628.ArrayMax;
    uVar10 = local_628.ArrayNum;
  }
  local_594 = 5;
  if ((local_628.AllocatorInstance.Data <= (FScriptContainerElement *)&local_594) &&
     ((FScriptContainerElement *)&local_594 <
      local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    uVar12 = local_628.ArrayMax;
    uVar10 = local_628.ArrayNum;
  }
  if (uVar10 == uVar12) {
    uVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
  }
  local_628.ArrayNum = uVar10 + 1;
  local_590 = 5;
  *(undefined4 *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) = local_594;
  if (((local_618.Data <= (FScriptContainerElement *)&local_590) &&
      ((FScriptContainerElement *)&local_590 < local_618.Data + (longlong)(int)local_610._4_4_ * 4))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  iVar9 = (int)local_610;
  if ((int)local_610 == local_610._4_4_) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_618,(int *)((longlong)&local_610 + 4));
  }
  local_508[1] = 5;
  local_610 = CONCAT44(local_610._4_4_,iVar9 + 1);
  *(undefined4 *)(local_618.Data + (longlong)iVar9 * 4) = local_590;
  Slate::Containers::TObservableArray<int>::Add((TObservableArray<int> *)local_5f8,local_508 + 1);
  pwVar19 = L"ObservableValues == ArrayValues";
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_1f0,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (pwVar19 = (wchar_t *)local_618.Data,
      iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
  }
  (*pcVar1)(this,uVar16,&local_1f0,0);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_400,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == 5,&local_400,0);
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  iVar9 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  if (((longlong)uVar17 < 0) && (iVar9 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
  }
  uVar3 = _UNK_15071d308;
  uVar17 = ___xmm_00000009000000080000000700000006;
  uStack_94 = 0xb;
  iVar22 = 10;
  local_98 = 10;
  local_90 = 0xc;
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,7,&local_628.AllocatorInstance,&local_628.ArrayNum,&local_628.ArrayMax);
  lVar15 = (longlong)iVar9;
  *(undefined8 *)(local_628.AllocatorInstance.Data + lVar15 * 4) = uVar17;
  *(undefined8 *)(local_628.AllocatorInstance.Data + lVar15 * 4 + 8) = uVar3;
  *(ulonglong *)(local_628.AllocatorInstance.Data + lVar15 * 4 + 0x10) =
       CONCAT44(uStack_94,local_98);
  *(undefined4 *)(local_628.AllocatorInstance.Data + lVar15 * 4 + 0x18) = local_90;
  lVar15 = (longlong)local_628.ArrayNum;
  local_a8 = uVar17;
  uStack_a0 = uVar3;
  if (local_628.ArrayNum != 0) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_628.ArrayNum,&local_618,(int *)&local_610,
                       (int *)((longlong)&local_610 + 4));
    memcpy(local_618.Data + (longlong)iVar9 * 4,local_628.AllocatorInstance.Data,lVar15 << 2);
  }
  Slate::Containers::TObservableArray<int>::Append<int,TSizedDefaultAllocator<32>_>
            ((TObservableArray<int> *)local_5f8,&local_628);
  pwVar19 = L"ObservableValues == ArrayValues";
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_3f0,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (pwVar19 = (wchar_t *)local_618.Data,
      iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
  }
  (*pcVar1)(this,uVar16,&local_3f0);
  if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_3e0,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == 6);
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  uVar12 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  uVar10 = uVar14;
  if (((longlong)uVar17 < 0) && (uVar10 = 0, uVar12 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
    uVar12 = local_628.ArrayMax;
    uVar10 = local_628.ArrayNum;
  }
  local_58c = 9;
  if ((local_628.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58c) &&
     ((FScriptContainerElement *)&local_58c <
      local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    uVar12 = local_628.ArrayMax;
    uVar10 = local_628.ArrayNum;
  }
  if (uVar10 == uVar12) {
    uVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
  }
  iVar9 = uVar10 + 1;
  local_628.ArrayNum = iVar9;
  *(undefined4 *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) = local_58c;
  if (iVar9 != 0) {
    iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar9,&local_618,(int *)&local_610,(int *)((longlong)&local_610 + 4));
    memcpy(local_618.Data + (longlong)iVar11 * 4,local_628.AllocatorInstance.Data,
           (longlong)iVar9 << 2);
  }
  Slate::Containers::TObservableArray<int>::Append<int,TSizedDefaultAllocator<32>_>
            ((TObservableArray<int> *)local_5f8,&local_628);
  pwVar19 = L"ObservableValues == ArrayValues";
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_3d0,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (pwVar19 = (wchar_t *)local_618.Data,
      iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
  }
  (*pcVar1)(this,uVar16,&local_3d0);
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_420,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == 7,&local_420);
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  local_178 = local_5c0;
  local_5c0[0] = -1;
  local_170 = &local_5c4;
  local_5c4 = -1;
  local_168 = local_5f8;
  local_518 = (FScriptContainerElement *)0x0;
  local_160 = &local_518;
  local_510 = 0;
  local_608 = 4;
  local_180 = this;
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
  ::AddLambda<_UE::Test::FObservableArrayTest::RunTest_::__l13::<lambda_2>_&>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
              *)local_5e8,(<lambda_2> *)local_4c0);
  uVar17 = local_628._8_8_;
  iVar9 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  if (((longlong)uVar17 < 0) && (iVar9 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
  }
  uVar3 = local_5f8._8_8_;
  uVar17 = local_5f8._0_8_;
  uVar13 = local_5f8._8_4_;
  lVar15 = (longlong)(int)local_5f8._8_4_;
  local_568.Data = (FScriptContainerElement *)0x0;
  if ((int)local_5f8._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(local_5f8._8_8_ & 0xffffffff);
  }
  if ((((FScriptContainerElement *)local_5f8._0_8_ == (FScriptContainerElement *)0x0) &&
      (local_5f8._8_4_ != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  local_560 = CONCAT44(local_560._4_4_,uVar13);
  if (uVar13 == 0) {
    local_560 = uVar3 & 0xffffffff;
    uVar13 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,0,&local_568,uVar13,(int *)((longlong)&local_560 + 4));
    memcpy(local_568.Data,(void *)uVar17,lVar15 << 2);
    uVar13 = (undefined4)local_560;
  }
  if (local_518 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518);
    uVar13 = (undefined4)local_560;
  }
  local_518 = local_568.Data;
  uVar16 = local_560 >> 0x20;
  local_560 = 0;
  local_568.Data = (FScriptContainerElement *)0x0;
  local_510 = CONCAT44((int)uVar16,uVar13);
  local_5c0[0] = 1;
  local_5c4 = 2;
  if (((int)local_610 < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xce7,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  iVar9 = *(int *)(local_618.Data + 4);
  *(int *)(local_618.Data + 4) = *(int *)(local_618.Data + 8);
  *(int *)(local_618.Data + 8) = iVar9;
  Slate::Containers::TObservableArray<int>::Swap
            ((TObservableArray<int> *)local_5f8,local_5c0[0],local_5c4);
  pwVar19 = L"ObservableValues == ArrayValues";
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_3b0,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (pwVar19 = (wchar_t *)local_618.Data,
      iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
  }
  (*pcVar1)(this,uVar16,&local_3b0);
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_3a0,"The delegate was not executed");
  (*pcVar1)(this,local_604 == 8);
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  iVar9 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  if (((longlong)uVar17 < 0) && (iVar9 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
  }
  uVar17 = local_5f8._0_8_;
  uVar13 = local_5f8._8_4_;
  local_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((int)local_5f8._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(local_5f8._8_8_ & 0xffffffff);
  }
  if ((((FScriptContainerElement *)local_5f8._0_8_ == (FScriptContainerElement *)0x0) &&
      (local_5f8._8_4_ != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>(&local_4f8,(int *)uVar17,uVar13,0);
  if (local_518 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518);
  }
  local_518 = local_4f8.AllocatorInstance.Data;
  local_4f8.ArrayNum = 0;
  local_4f8.ArrayMax = 0;
  local_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c0[0] = 3;
  local_5c4 = 1;
  if (((int)local_610 < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xce7,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  iVar9 = *(int *)(local_618.Data + 0xc);
  *(int *)(local_618.Data + 0xc) = *(int *)(local_618.Data + 4);
  *(int *)(local_618.Data + 4) = iVar9;
  Slate::Containers::TObservableArray<int>::Swap
            ((TObservableArray<int> *)local_5f8,local_5c0[0],local_5c4);
  pwVar19 = L"ObservableValues == ArrayValues";
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_390,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (pwVar19 = (wchar_t *)local_618.Data,
      iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
  }
  (*pcVar1)(this,uVar16,&local_390,0);
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_380,"The delegate was not executed");
  (*pcVar1)(this,local_604 == 9,&local_380,0);
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
            *)local_5e8,(FDelegateHandle)local_4c0._0_8_);
  if (local_518 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518);
  }
  uVar17 = local_628._8_8_;
  uVar12 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  local_608 = 2;
  uVar10 = uVar14;
  if (((longlong)uVar17 < 0) && (uVar10 = 0, uVar12 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
    uVar12 = local_628.ArrayMax;
    uVar10 = local_628.ArrayNum;
  }
  local_588 = 2;
  if ((local_628.AllocatorInstance.Data <= (FScriptContainerElement *)&local_588) &&
     ((FScriptContainerElement *)&local_588 <
      local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    uVar12 = local_628.ArrayMax;
    uVar10 = local_628.ArrayNum;
  }
  if (uVar10 == uVar12) {
    uVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
  }
  local_628.ArrayNum = uVar10 + 1;
  *(undefined4 *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) = local_588;
  for (FVar20.Data = local_618.Data; FVar20.Data != local_618.Data + (longlong)(int)local_610 * 4;
      FVar20.Data = FVar20.Data + 4) {
    if (*(int *)FVar20.Data == 2) {
      iVar9 = (int)((longlong)FVar20.Data - (longlong)local_618.Data >> 2);
      if (iVar9 != -1) {
        memmove(local_618.Data + (longlong)iVar9 * 4,local_618.Data + (longlong)iVar9 * 4 + 4,
                (longlong)(((int)local_610 - iVar9) + -1) << 2);
        local_610 = CONCAT44(local_610._4_4_,(int)local_610 + -1);
      }
      break;
    }
  }
  for (pFVar18 = (FScriptContainerElement *)local_5f8._0_8_;
      pFVar18 != (FScriptContainerElement *)(local_5f8._0_8_ + (longlong)(int)local_5f8._8_4_ * 4);
      pFVar18 = pFVar18 + 4) {
    if (*(int *)pFVar18 == 2) {
      iVar9 = (int)((longlong)pFVar18 - local_5f8._0_8_ >> 2);
      if (iVar9 != -1) {
        Slate::Containers::TObservableArray<int>::RemoveAt<int>
                  ((TObservableArray<int> *)local_5f8,iVar9,1,Default);
      }
      break;
    }
  }
  pwVar19 = L"ObservableValues == ArrayValues";
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_370,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (pwVar19 = (wchar_t *)local_618.Data,
      iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
  }
  (*pcVar1)(this,uVar16,&local_370,0);
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_360,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == 10,&local_360,0);
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  for (pFVar18 = (FScriptContainerElement *)local_5f8._0_8_; uVar12 = uVar8,
      pFVar18 != (FScriptContainerElement *)(local_5f8._0_8_ + (longlong)(int)local_5f8._8_4_ * 4);
      pFVar18 = pFVar18 + 4) {
    if (*(int *)pFVar18 == 2) {
      uVar12 = local_628.ArrayMax;
      local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
      uVar10 = uVar14;
      if (((longlong)uVar17 < 0) && (uVar10 = 0, uVar12 != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
        uVar12 = local_628.ArrayMax;
        uVar10 = local_628.ArrayNum;
      }
      local_584 = 2;
      if ((local_628.AllocatorInstance.Data <= (FScriptContainerElement *)&local_584) &&
         ((FScriptContainerElement *)&local_584 <
          local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
        uVar12 = local_628.ArrayMax;
        uVar10 = local_628.ArrayNum;
      }
      if (uVar10 == uVar12) {
        uVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
      }
      local_628.ArrayNum = uVar10 + 1;
      *(undefined4 *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) = local_584;
      uVar12 = 1;
      break;
    }
  }
  for (FVar20.Data = local_618.Data; FVar20.Data != local_618.Data + (longlong)(int)local_610 * 4;
      FVar20.Data = FVar20.Data + 4) {
    if (*(int *)FVar20.Data == 2) {
      iVar9 = (int)((longlong)FVar20.Data - (longlong)local_618.Data >> 2);
      if (iVar9 != -1) {
        memmove(local_618.Data + (longlong)iVar9 * 4,local_618.Data + (longlong)iVar9 * 4 + 4,
                (longlong)(((int)local_610 - iVar9) + -1) << 2);
        local_610 = CONCAT44(local_610._4_4_,(int)local_610 + -1);
      }
      break;
    }
  }
  for (pFVar18 = (FScriptContainerElement *)local_5f8._0_8_; uVar10 = uVar8,
      pFVar18 != (FScriptContainerElement *)(local_5f8._0_8_ + (longlong)(int)local_5f8._8_4_ * 4);
      pFVar18 = pFVar18 + 4) {
    if (*(int *)pFVar18 == 2) {
      iVar9 = (int)((longlong)pFVar18 - local_5f8._0_8_ >> 2);
      if (iVar9 != -1) {
        Slate::Containers::TObservableArray<int>::RemoveAt<int>
                  ((TObservableArray<int> *)local_5f8,iVar9,1,Default);
        iVar22 = 0xb;
        uVar10 = 1;
      }
      break;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_350,L"ObservableValues.Contains == ObservableValues.RemoveSingle");
  (*pcVar1)(this,uVar10 == uVar12,&local_350,0);
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_340,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  (*pcVar1)(this,uVar17,&local_340,0);
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_330,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == iVar22,&local_330,0);
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  uVar12 = local_628.ArrayMax;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  uVar10 = uVar14;
  if (((longlong)uVar17 < 0) && (uVar10 = 0, uVar12 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
    uVar12 = local_628.ArrayMax;
    uVar10 = local_628.ArrayNum;
  }
  pFVar18 = (FScriptContainerElement *)(local_5f8._0_8_ + 8);
  if ((local_628.AllocatorInstance.Data <= pFVar18) &&
     (pFVar18 < local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    uVar12 = local_628.ArrayMax;
    uVar10 = local_628.ArrayNum;
  }
  if (uVar10 == uVar12) {
    uVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
  }
  local_628.ArrayNum = uVar10 + 1;
  *(int *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) = *(int *)pFVar18;
  if ((int)local_610 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
  }
  iVar9 = (int)local_610;
  if ((int)local_610 + -3 != 0) {
    memmove(local_618.Data + 8,local_618.Data + 0xc,(longlong)((int)local_610 + -3) << 2);
    iVar9 = (int)local_610;
  }
  local_610 = CONCAT44(local_610._4_4_,iVar9 + -1);
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&local_618,iVar9 + -1,(int *)((longlong)&local_610 + 4));
  if ((int)local_5f8._8_4_ < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                       ,0x151,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    if ((int)local_5f8._8_4_ < 3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
  }
  local_508[2] = *(int *)(local_5f8._0_8_ + 8);
  iVar9 = local_5f8._8_4_;
  if ((int)local_5f8._8_4_ < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    iVar9 = local_5f8._8_4_;
  }
  if (iVar9 + -3 != 0) {
    memmove((FScriptContainerElement *)(local_5f8._0_8_ + 8),
            (FScriptContainerElement *)(local_5f8._0_8_ + 0xc),(longlong)(iVar9 + -3) << 2);
    iVar9 = local_5f8._8_4_;
  }
  local_5f8._8_4_ = iVar9 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,(ForAnyElementType *)local_5f8,iVar9 + -1,(int *)(local_5f8 + 0xc));
  local_320 = local_508 + 2;
  uStack_318 = 1;
  uStack_198._4_4_ = uStack_314;
  uStack_198._0_4_ = 1;
  uStack_18c = 0xffffffff;
  local_190 = 2;
  uStack_188 = 2;
  local_c8.StartIndex = 2;
  local_c8.MoveIndex = -1;
  local_c8._25_7_ = uStack_187;
  local_c8.Action = Remove;
  local_1a0 = local_320;
  local_c8.Array.DataPtr = local_320;
  local_c8.Array._8_8_ = uStack_198;
  TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
               *)local_5e8,&local_c8);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_310,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  (*pcVar1)(this,uVar17,&local_310,0);
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_300,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == iVar22 + 1,&local_300,0);
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  local_628._8_8_ = local_628._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar17 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
    uVar14 = local_628.ArrayNum;
  }
  if (2 < (int)local_5f8._8_4_) {
    pFVar18 = (FScriptContainerElement *)(local_5f8._0_8_ + 8);
    uVar12 = uVar14;
    if ((local_628.AllocatorInstance.Data <= pFVar18) &&
       (pFVar18 < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      uVar12 = local_628.ArrayNum;
    }
    if (uVar12 == local_628.ArrayMax) {
      uVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
    }
    uVar14 = uVar12 + 1;
    local_628.ArrayNum = uVar14;
    *(int *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = *(int *)pFVar18;
  }
  iVar9 = local_5f8._8_4_;
  if (3 < (int)local_5f8._8_4_) {
    pFVar18 = (FScriptContainerElement *)(local_5f8._0_8_ + 0xc);
    uVar12 = uVar14;
    if ((local_628.AllocatorInstance.Data <= pFVar18) &&
       (pFVar18 < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      uVar12 = local_628.ArrayNum;
    }
    if (uVar12 == local_628.ArrayMax) {
      uVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
    }
    uVar14 = uVar12 + 1;
    local_628.ArrayNum = uVar14;
    *(int *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = *(int *)pFVar18;
    iVar9 = local_5f8._8_4_;
  }
  if (4 < iVar9) {
    pFVar18 = (FScriptContainerElement *)(local_5f8._0_8_ + 0x10);
    if ((local_628.AllocatorInstance.Data <= pFVar18) &&
       (pFVar18 < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      uVar14 = local_628.ArrayNum;
    }
    if (uVar14 == local_628.ArrayMax) {
      uVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
    }
    local_628.ArrayNum = uVar14 + 1;
    *(int *)(local_628.AllocatorInstance.Data + (longlong)(int)uVar14 * 4) = *(int *)pFVar18;
  }
  if ((int)local_610 < 5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
  }
  iVar9 = (int)local_610;
  if ((int)local_610 + -5 != 0) {
    memmove(local_618.Data + 8,local_618.Data + 0x14,(longlong)((int)local_610 + -5) << 2);
    iVar9 = (int)local_610;
  }
  local_610 = CONCAT44(local_610._4_4_,iVar9 + -3);
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&local_618,iVar9 + -3,(int *)((longlong)&local_610 + 4));
  Slate::Containers::TObservableArray<int>::RemoveAt<int>
            ((TObservableArray<int> *)local_5f8,2,3,Default);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_2f0,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  (*pcVar1)(this,uVar17,&local_2f0,0);
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_2e0,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == iVar22 + 2,&local_2e0,0);
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  lVar15 = local_610;
  uVar12 = local_610._4_4_;
  local_608 = 0;
  local_610 = (ulonglong)local_610._4_4_ << 0x20;
  if ((lVar15 < 0) && (uVar12 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_618,0,(int *)((longlong)&local_610 + 4));
  }
  uVar17 = local_5f8._8_8_;
  uVar13 = local_5f8._8_4_;
  local_5f8._8_8_ = local_5f8._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar17 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)local_5f8,0,(int *)(local_5f8 + 0xc));
  }
  if (0 < (int)uVar13) {
    local_4a0 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    uStack_498 = 0;
    local_108.Array._8_8_ = (ulonglong)uStack_494 << 0x20;
    local_490 = 0xffffffffffffffff;
    uStack_488 = 0;
    local_108._24_8_ = (ulonglong)uStack_487 << 8;
    local_108.Array.DataPtr = (int *)0x0;
    local_108.StartIndex = -1;
    local_108.MoveIndex = -1;
    TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
                 *)local_5e8,&local_108);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_2d0,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  (*pcVar1)(this,uVar17,&local_2d0,0);
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_2c0,"The delegate was not executed");
  (*pcVar1)(this,local_604 == iVar22 + 3,&local_2c0,0);
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  uVar17 = local_628._8_8_;
  iVar9 = local_628.ArrayMax;
  local_608 = 1;
  local_628._8_8_ = (ulonglong)(uint)local_628.ArrayMax << 0x20;
  if (((longlong)uVar17 < 0) && (iVar9 != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
  }
  uVar5 = _UNK_1509250a8;
  uVar4 = ___xmm_00000007000000070000000600000006;
  uVar3 = _UNK_15071d318;
  uVar17 = ___xmm_0000000a000000090000000800000007;
  local_68 = 0xb;
  uStack_64 = 0xc;
  local_60 = 0xc;
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xb,&local_628.AllocatorInstance,&local_628.ArrayNum,&local_628.ArrayMax);
  lVar15 = (longlong)iVar9;
  *(undefined8 *)(local_628.AllocatorInstance.Data + lVar15 * 4) = uVar4;
  *(undefined8 *)(local_628.AllocatorInstance.Data + lVar15 * 4 + 8) = uVar5;
  *(undefined8 *)(local_628.AllocatorInstance.Data + lVar15 * 4 + 0x10) = uVar17;
  *(undefined8 *)(local_628.AllocatorInstance.Data + lVar15 * 4 + 0x10 + 8) = uVar3;
  *(ulonglong *)(local_628.AllocatorInstance.Data + lVar15 * 4 + 0x20) =
       CONCAT44(uStack_64,local_68);
  *(undefined4 *)(local_628.AllocatorInstance.Data + lVar15 * 4 + 0x28) = local_60;
  lVar15 = (longlong)local_628.ArrayNum;
  local_78 = uVar17;
  uStack_70 = uVar3;
  local_88 = uVar4;
  uStack_80 = uVar5;
  if (local_628.ArrayNum != 0) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_628.ArrayNum,&local_618,(int *)&local_610,
                       (int *)((longlong)&local_610 + 4));
    memcpy(local_618.Data + (longlong)iVar9 * 4,local_628.AllocatorInstance.Data,lVar15 << 2);
    iVar9 = local_628.ArrayNum;
    if (0 < local_628.ArrayNum) {
      uVar13 = local_5f8._8_4_;
      lVar15 = (longlong)(int)local_5f8._8_4_;
      iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,local_628.ArrayNum,(ForAnyElementType *)local_5f8,
                          (int *)(local_5f8 + 8),(int *)(local_5f8 + 0xc));
      memcpy((FScriptContainerElement *)(local_5f8._0_8_ + (longlong)iVar11 * 4),
             local_628.AllocatorInstance.Data,(longlong)iVar9 << 2);
      iVar9 = local_5f8._8_4_ - uVar13;
      local_4b0 = (FScriptContainerElement *)(local_5f8._0_8_ + lVar15 * 4);
      iStack_4a8 = iVar9;
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      pFVar18 = local_4b0;
      iStack_4cc = -1;
      local_4d0 = uVar13;
      EStack_4c8 = Add;
      uVar17._4_4_ = uStack_4a4;
      uVar17._0_4_ = iStack_4a8;
      local_4e0 = local_4b0;
      uStack_4d8 = uVar17;
      if (((iVar9 < 1) || ((int)uVar13 < 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                             ,0x3d,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      local_e8.MoveIndex = iStack_4cc;
      local_e8.StartIndex = local_4d0;
      local_e8._25_7_ = uStack_4c7;
      local_e8.Action = EStack_4c8;
      local_e8.Array.DataPtr = (int *)pFVar18;
      local_e8.Array._8_8_ = uVar17;
      TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
      ::Broadcast((TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
                   *)local_5e8,&local_e8);
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_2b0,L"ObservableValues == ArrayValues");
  if ((local_5f8._8_4_ == (int)local_610) &&
     ((local_5f8._8_4_ == 0 ||
      (iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2),
      iVar9 == 0)))) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  (*pcVar1)(this,uVar17,&local_2b0,0);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_2a0,L"The delegate was not executed");
  (*pcVar1)(this,local_604 == iVar22 + 4,&local_2a0,0);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  local_150 = local_607;
  local_608 = 3;
  local_148 = local_600;
  local_607[0] = 1;
  local_140 = &local_5b8;
  local_600[0] = 0xffffffff;
  local_138 = local_5f8;
  local_5b8 = (FScriptContainerElement *)0x0;
  local_5b0 = 0;
  local_158 = this;
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
  ::AddLambda<_UE::Test::FObservableArrayTest::RunTest_::__l35::<lambda_3>_&>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
              *)local_5e8,(<lambda_3> *)(local_4c0 + 8));
  uVar17 = local_628._8_8_;
  local_628.ArrayNum = 0;
  if (((longlong)uVar17 < 0) && (local_628.ArrayMax != 0)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
  }
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,&local_628.AllocatorInstance,&local_628.ArrayNum,&local_628.ArrayMax);
  uVar3 = local_5f8._8_8_;
  uVar17 = local_5f8._0_8_;
  local_558.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_628.AllocatorInstance.Data + (longlong)iVar9 * 4) = 7;
  uVar13 = local_5f8._8_4_;
  lVar15 = (longlong)(int)local_5f8._8_4_;
  if ((int)local_5f8._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(local_5f8._8_8_ & 0xffffffff);
  }
  if ((((FScriptContainerElement *)local_5f8._0_8_ == (FScriptContainerElement *)0x0) &&
      (local_5f8._8_4_ != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  local_550 = CONCAT44(local_550._4_4_,uVar13);
  if (uVar13 == 0) {
    local_550 = uVar3 & 0xffffffff;
    uVar13 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,0,&local_558,uVar13,(int *)((longlong)&local_550 + 4));
    memcpy(local_558.Data,(void *)uVar17,lVar15 << 2);
    uVar13 = (undefined4)local_550;
  }
  if (local_5b8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8);
    uVar13 = (undefined4)local_550;
  }
  local_5b8 = local_558.Data;
  local_5b0 = CONCAT44(local_550._4_4_,uVar13);
  local_558.Data = (FScriptContainerElement *)0x0;
  local_550 = 0;
  for (FVar20.Data = local_618.Data; FVar20.Data != local_618.Data + (longlong)(int)local_610 * 4;
      FVar20.Data = FVar20.Data + 4) {
    if (*(int *)FVar20.Data == 7) {
      local_600[0] = (uint)((longlong)FVar20.Data - (longlong)local_618.Data >> 2);
      goto LAB_142534009;
    }
  }
  local_600[0] = 0xffffffff;
LAB_142534009:
  local_607[0] = 1;
  for (FVar20.Data = local_618.Data; FVar20.Data != local_618.Data + (longlong)(int)local_610 * 4;
      FVar20.Data = FVar20.Data + 4) {
    if (*(int *)FVar20.Data == 7) {
      uVar12 = (uint)((longlong)FVar20.Data - (longlong)local_618.Data >> 2);
      if (uVar12 != 0xffffffff) {
        if ((int)(uVar12 + 1) <= (int)local_610) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return (bool)uVar7;
          }
        }
        iVar9 = ((int)local_610 - uVar12) + -1;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        iVar11 = (int)local_610;
        if (iVar9 != 0) {
          memmove(local_618.Data + (longlong)(int)uVar12 * 4,
                  local_618.Data + (longlong)((int)local_610 - iVar9) * 4,(longlong)iVar9 << 2);
          iVar11 = (int)local_610;
        }
        local_610 = CONCAT44(local_610._4_4_,iVar11 + -1);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_618,iVar11 + -1,(int *)((longlong)&local_610 + 4));
      }
      break;
    }
  }
  pFVar18 = (FScriptContainerElement *)local_5f8._0_8_;
  do {
    if (pFVar18 == (FScriptContainerElement *)(local_5f8._0_8_ + (longlong)(int)local_5f8._8_4_ * 4)
       ) {
LAB_14253414d:
      pwVar19 = L"ObservableValues == ArrayValues";
      pcVar1 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_3c0,L"ObservableValues == ArrayValues");
      if ((local_5f8._8_4_ == (int)local_610) &&
         ((local_5f8._8_4_ == 0 ||
          (pwVar19 = (wchar_t *)local_618.Data,
          iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2)
          , iVar9 == 0)))) {
        uVar16 = 1;
      }
      else {
        uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
      }
      (*pcVar1)(this,uVar16,&local_3c0);
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      pcVar1 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_280,L"The delegate was not executed");
      (*pcVar1)(this,local_604 == iVar22 + 5);
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      local_628.ArrayNum = 0;
      if (local_628.ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
      }
      uVar3 = local_5f8._8_8_;
      uVar17 = local_5f8._0_8_;
      uVar13 = local_5f8._8_4_;
      lVar15 = (longlong)(int)local_5f8._8_4_;
      local_548.Data = (FScriptContainerElement *)0x0;
      if ((int)local_5f8._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(local_5f8._8_8_ & 0xffffffff);
      }
      if ((((FScriptContainerElement *)local_5f8._0_8_ == (FScriptContainerElement *)0x0) &&
          (local_5f8._8_4_ != 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x2d3,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      local_540 = CONCAT44(local_540._4_4_,uVar13);
      if (uVar13 == 0) {
        local_540 = uVar3 & 0xffffffff;
        uVar13 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar13,0,&local_548,uVar13,(int *)((longlong)&local_540 + 4));
        memcpy(local_548.Data,(void *)uVar17,lVar15 << 2);
        uVar13 = (undefined4)local_540;
      }
      if (local_5b8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8);
        uVar13 = (undefined4)local_540;
      }
      local_5b8 = local_548.Data;
      local_548.Data = (FScriptContainerElement *)0x0;
      local_5b0 = CONCAT44((int)(local_540 >> 0x20),uVar13);
      local_540 = 0;
      local_600[0] = 0;
      if (((int)local_610 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      FVar20.Data = local_618.Data;
      if (((local_628.AllocatorInstance.Data <= local_618.Data) &&
          (local_618.Data < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      if (local_628.ArrayNum == local_628.ArrayMax) {
        local_628.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
      }
      uVar12 = local_600[0];
      lVar15 = (longlong)local_628.ArrayNum;
      local_628.ArrayNum = local_628.ArrayNum + 1;
      *(int *)(local_628.AllocatorInstance.Data + lVar15 * 4) = *(int *)FVar20.Data;
      lVar15 = (longlong)(int)local_600[0];
      local_607[0] = 1;
      uVar14 = 0;
      uVar8 = uVar14;
      if ((int)local_600[0] < (int)local_610) {
        uVar8 = ~local_600[0] >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
      }
      iVar9 = ((int)local_610 - uVar12) + -1;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      iVar11 = (int)local_610;
      if (iVar9 != 0) {
        memmove(local_618.Data + lVar15 * 4,local_618.Data + (longlong)((int)local_610 - iVar9) * 4,
                (longlong)iVar9 << 2);
        iVar11 = (int)local_610;
      }
      local_610 = CONCAT44(local_610._4_4_,iVar11 + -1);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_618,iVar11 + -1,(int *)((longlong)&local_610 + 4));
      Slate::Containers::TObservableArray<int>::RemoveAtSwap
                ((TObservableArray<int> *)local_5f8,local_600[0],Default);
      pwVar19 = L"ObservableValues == ArrayValues";
      pcVar1 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_270,L"ObservableValues == ArrayValues");
      if ((local_5f8._8_4_ == (int)local_610) &&
         ((local_5f8._8_4_ == 0 ||
          (pwVar19 = (wchar_t *)local_618.Data,
          iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2)
          , iVar9 == 0)))) {
        uVar16 = 1;
      }
      else {
        uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
      }
      (*pcVar1)(this,uVar16,&local_270);
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      pcVar1 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_260,L"The delegate was not executed");
      (*pcVar1)(this,local_604 == iVar22 + 6);
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      local_628.ArrayNum = 0;
      if (local_628.ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
      }
      uVar3 = local_5f8._8_8_;
      uVar17 = local_5f8._0_8_;
      uVar13 = local_5f8._8_4_;
      lVar15 = (longlong)(int)local_5f8._8_4_;
      local_538.Data = (FScriptContainerElement *)0x0;
      if ((int)local_5f8._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(local_5f8._8_8_ & 0xffffffff);
      }
      if ((((FScriptContainerElement *)local_5f8._0_8_ == (FScriptContainerElement *)0x0) &&
          (local_5f8._8_4_ != 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x2d3,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      local_530 = CONCAT44(local_530._4_4_,uVar13);
      if (uVar13 == 0) {
        local_530 = uVar3 & 0xffffffff;
        uVar13 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar13,0,&local_538,uVar13,(int *)((longlong)&local_530 + 4));
        memcpy(local_538.Data,(void *)uVar17,lVar15 << 2);
        uVar13 = (undefined4)local_530;
      }
      if (local_5b8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8);
        uVar13 = (undefined4)local_530;
      }
      local_5b8 = local_538.Data;
      local_538.Data = (FScriptContainerElement *)0x0;
      local_5b0 = CONCAT44((int)(local_530 >> 0x20),uVar13);
      local_530 = 0;
      local_600[0] = 1;
      if (((int)local_610 < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      pFVar18 = local_618.Data + 4;
      if (((local_628.AllocatorInstance.Data <= pFVar18) &&
          (pFVar18 < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      if (local_628.ArrayNum == local_628.ArrayMax) {
        local_628.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
      }
      lVar15 = (longlong)local_628.ArrayNum;
      local_628.ArrayNum = local_628.ArrayNum + 1;
      *(int *)(local_628.AllocatorInstance.Data + lVar15 * 4) = *(int *)pFVar18;
      uVar8 = local_600[0] + 1;
      uVar12 = uVar14;
      if ((int)uVar8 < (int)local_610) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      pFVar18 = local_618.Data + (longlong)(int)uVar8 * 4;
      if (((local_628.AllocatorInstance.Data <= pFVar18) &&
          (pFVar18 < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      if (local_628.ArrayNum == local_628.ArrayMax) {
        local_628.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
      }
      iVar9 = local_628.ArrayNum + 1;
      *(int *)(local_628.AllocatorInstance.Data + (longlong)local_628.ArrayNum * 4) =
           *(int *)pFVar18;
      uVar8 = local_600[0] + 2;
      uVar12 = uVar14;
      if ((int)uVar8 < (int)local_610) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      local_628.ArrayNum = iVar9;
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      pFVar18 = local_618.Data + (longlong)(int)uVar8 * 4;
      if (((local_628.AllocatorInstance.Data <= pFVar18) &&
          (pFVar18 < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      if (local_628.ArrayNum == local_628.ArrayMax) {
        local_628.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
      }
      iVar9 = local_628.ArrayNum + 1;
      *(int *)(local_628.AllocatorInstance.Data + (longlong)local_628.ArrayNum * 4) =
           *(int *)pFVar18;
      uVar8 = local_600[0] + 3;
      uVar12 = uVar14;
      if ((int)uVar8 < (int)local_610) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      local_628.ArrayNum = iVar9;
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      pFVar18 = local_618.Data + (longlong)(int)uVar8 * 4;
      if (((local_628.AllocatorInstance.Data <= pFVar18) &&
          (pFVar18 < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      if (local_628.ArrayNum == local_628.ArrayMax) {
        local_628.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
      }
      uVar12 = local_600[0];
      iVar9 = local_628.ArrayNum + 1;
      *(int *)(local_628.AllocatorInstance.Data + (longlong)local_628.ArrayNum * 4) =
           *(int *)pFVar18;
      lVar15 = (longlong)(int)local_600[0];
      local_607[0] = 1;
      uVar8 = uVar14;
      if ((int)(local_600[0] + 4) <= (int)local_610) {
        uVar8 = ~local_600[0] >> 0x1f;
      }
      local_628.ArrayNum = iVar9;
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
      }
      iVar9 = ((int)local_610 - uVar12) + -4;
      if (4 < iVar9) {
        iVar9 = 4;
      }
      iVar11 = (int)local_610;
      if (iVar9 != 0) {
        memmove(local_618.Data + lVar15 * 4,local_618.Data + (longlong)((int)local_610 - iVar9) * 4,
                (longlong)iVar9 << 2);
        iVar11 = (int)local_610;
      }
      local_610 = CONCAT44(local_610._4_4_,iVar11 + -4);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_618,iVar11 + -4,(int *)((longlong)&local_610 + 4));
      Slate::Containers::TObservableArray<int>::RemoveAtSwap<int>
                ((TObservableArray<int> *)local_5f8,local_600[0],4,Default);
      pwVar19 = L"ObservableValues == ArrayValues";
      pcVar1 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_250,L"ObservableValues == ArrayValues");
      if ((local_5f8._8_4_ == (int)local_610) &&
         ((local_5f8._8_4_ == 0 ||
          (pwVar19 = (wchar_t *)local_618.Data,
          iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,(longlong)(int)local_5f8._8_4_ << 2)
          , iVar9 == 0)))) {
        uVar16 = 1;
      }
      else {
        uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
      }
      (*pcVar1)(this,uVar16,&local_250);
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      pcVar1 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_240,L"The delegate was not executed");
      (*pcVar1)(this,local_604 == iVar22 + 7);
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      local_628.ArrayNum = 0;
      if (local_628.ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
      }
      uVar3 = local_5f8._8_8_;
      uVar17 = local_5f8._0_8_;
      uVar13 = local_5f8._8_4_;
      lVar15 = (longlong)(int)local_5f8._8_4_;
      local_528.Data = (FScriptContainerElement *)0x0;
      if (-1 < (int)local_5f8._8_4_) {
        if ((((FScriptContainerElement *)local_5f8._0_8_ == (FScriptContainerElement *)0x0) &&
            (local_5f8._8_4_ != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x2d3,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
        local_520 = CONCAT44(local_520._4_4_,uVar13);
        if (uVar13 == 0) {
          local_520 = uVar3 & 0xffffffff;
          uVar13 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar13,0,&local_528,uVar13,(int *)((longlong)&local_520 + 4));
          memcpy(local_528.Data,(void *)uVar17,lVar15 << 2);
          uVar13 = (undefined4)local_520;
        }
        if (local_5b8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b8);
          uVar13 = (undefined4)local_520;
        }
        local_5b8 = local_528.Data;
        uVar8 = (int)local_610 - 2;
        local_5b0 = CONCAT44(local_520._4_4_,uVar13);
        local_528.Data = (FScriptContainerElement *)0x0;
        local_520 = 0;
        uVar12 = uVar14;
        if ((int)uVar8 < (int)local_610) {
          uVar12 = ~uVar8 >> 0x1f;
        }
        local_600[0] = uVar8;
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
        pFVar18 = local_618.Data + (longlong)(int)uVar8 * 4;
        if (((local_628.AllocatorInstance.Data <= pFVar18) &&
            (pFVar18 < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
        if (local_628.ArrayNum == local_628.ArrayMax) {
          local_628.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
        }
        lVar15 = (longlong)local_628.ArrayNum;
        local_628.ArrayNum = local_628.ArrayNum + 1;
        *(int *)(local_628.AllocatorInstance.Data + lVar15 * 4) = *(int *)pFVar18;
        uVar8 = local_600[0] + 1;
        uVar12 = uVar14;
        if ((int)uVar8 < (int)local_610) {
          uVar12 = ~uVar8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
        pFVar18 = local_618.Data + (longlong)(int)uVar8 * 4;
        if (((local_628.AllocatorInstance.Data <= pFVar18) &&
            (pFVar18 < local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
        iVar9 = local_628.ArrayNum;
        if (local_628.ArrayNum == local_628.ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_628.AllocatorInstance,&local_628.ArrayMax);
        }
        uVar12 = local_600[0];
        local_628.ArrayNum = iVar9 + 1;
        *(int *)(local_628.AllocatorInstance.Data + (longlong)iVar9 * 4) = *(int *)pFVar18;
        lVar15 = (longlong)(int)local_600[0];
        local_607[0] = 0;
        if ((int)(local_600[0] + 2) <= (int)local_610) {
          uVar14 = ~local_600[0] >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return (bool)uVar7;
          }
        }
        iVar9 = ((int)local_610 - uVar12) + -2;
        if (2 < iVar9) {
          iVar9 = 2;
        }
        iVar11 = (int)local_610;
        if (iVar9 != 0) {
          memmove(local_618.Data + lVar15 * 4,
                  local_618.Data + (longlong)((int)local_610 - iVar9) * 4,(longlong)iVar9 << 2);
          iVar11 = (int)local_610;
        }
        local_610 = CONCAT44(local_610._4_4_,iVar11 + -2);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_618,iVar11 + -2,(int *)((longlong)&local_610 + 4));
        Slate::Containers::TObservableArray<int>::RemoveAtSwap<int>
                  ((TObservableArray<int> *)local_5f8,local_600[0],2,Default);
        pwVar19 = L"ObservableValues == ArrayValues";
        pcVar1 = *(code **)(*(longlong *)this + 0x30);
        ::FString::FString(&local_230,L"ObservableValues == ArrayValues");
        if ((local_5f8._8_4_ == (int)local_610) &&
           ((local_5f8._8_4_ == 0 ||
            (pwVar19 = (wchar_t *)local_618.Data,
            iVar9 = memcmp((void *)local_5f8._0_8_,local_618.Data,
                           (longlong)(int)local_5f8._8_4_ << 2), iVar9 == 0)))) {
          uVar16 = 1;
        }
        else {
          uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
        }
        (*pcVar1)(this,uVar16,&local_230,0);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        pcVar1 = *(code **)(*(longlong *)this + 0x30);
        ::FString::FString(&local_220,L"The delegate was not executed");
        (*pcVar1)(this,local_604 == iVar22 + 8,&local_220,0);
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
        ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
                  *)local_5e8,(FDelegateHandle)local_4c0._8_8_);
        if (local_5b8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b8);
        }
        uVar16 = local_5f8._8_8_ & 0xffffffff;
        local_578.Data = (FScriptContainerElement *)0x0;
        local_570 = 0;
        iStack_56c = 0;
        if (-1 < (int)local_5f8._8_4_) {
          if (0 < (int)local_5f8._8_4_) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_5f8._8_4_,&local_578,0,&iStack_56c);
            uVar16 = local_5f8._8_8_ & 0xffffffff;
          }
          iVar9 = (int)uVar16;
          pFVar18 = (FScriptContainerElement *)(local_5f8._0_8_ + (longlong)iVar9 * 4);
          pFVar21 = (FScriptContainerElement *)local_5f8._0_8_;
          while( true ) {
            if ((int)uVar16 != iVar9) {
              local_5c8[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_5c8);
            }
            if (pFVar21 == pFVar18) break;
            local_580[0] = *(int *)pFVar21;
            if (((local_578.Data <= (FScriptContainerElement *)local_580) &&
                ((FScriptContainerElement *)local_580 < local_578.Data + (longlong)iStack_56c * 4))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar1 = (code *)swi(3);
              uVar7 = (*pcVar1)();
              return (bool)uVar7;
            }
            if (local_570 == iStack_56c) {
              local_570 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_578,&iStack_56c);
            }
            lVar15 = (longlong)local_570;
            pFVar21 = pFVar21 + 4;
            local_570 = local_570 + 1;
            *(int *)(local_578.Data + lVar15 * 4) = local_580[0];
            uVar16 = local_5f8._8_8_ & 0xffffffff;
          }
          pwVar19 = L"ItteratingArrayValues == ArrayValues after itterator.";
          pcVar1 = *(code **)(*(longlong *)this + 0x30);
          ::FString::FString(&local_210,L"ItteratingArrayValues == ArrayValues after itterator.");
          if ((local_570 == (int)local_610) &&
             ((local_570 == 0 ||
              (pwVar19 = (wchar_t *)local_618.Data,
              iVar9 = memcmp(local_578.Data,local_618.Data,(longlong)local_570 << 2), iVar9 == 0))))
          {
            uVar16 = 1;
          }
          else {
            uVar16 = (ulonglong)pwVar19 & 0xffffffffffffff00;
          }
          (*pcVar1)(this,uVar16,&local_210,0);
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          if (local_578.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_578.Data);
          }
          DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                    (pTStack_5e0,local_5d8);
          if (pTStack_5e0 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
            FMemory::Free(pTStack_5e0);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_5e8);
          if ((FScriptContainerElement *)local_5f8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_5f8._0_8_);
          }
          if (local_618.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_618.Data);
          }
          if (local_628.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_628.AllocatorInstance.Data);
          }
          return true;
        }
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar16);
      }
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(local_5f8._8_8_ & 0xffffffff);
    }
    if (*(int *)pFVar18 == 7) {
      iVar9 = (int)((longlong)pFVar18 - local_5f8._0_8_ >> 2);
      if (iVar9 != -1) {
        Slate::Containers::TObservableArray<int>::RemoveAtSwap<int>
                  ((TObservableArray<int> *)local_5f8,iVar9,1,Default);
      }
      goto LAB_14253414d;
    }
    pFVar18 = pFVar18 + 4;
  } while( true );
}

// GetBeautifiedTestName @ 142535240

FString * __thiscall
UE::Test::FObservableArrayTest::GetBeautifiedTestName
          (FObservableArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Slate.ObservableArray");
  return __return_storage_ptr__;
}

// operator() @ 142552e80

void __thiscall
`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,TObservableArrayChangedArgs<int> *param_1)

{
  EObservableArrayChangedAction EVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  FString local_18;
  
  plVar2 = *(longlong **)this;
  pcVar3 = *(code **)(*plVar2 + 0x30);
  ::FString::FString(&local_18,L"The notification occurs with the wrong action");
  EVar1 = param_1->Action;
  (*pcVar3)(plVar2,EVar1 == **(EObservableArrayChangedAction **)((longlong)this + 8),&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (2 < (byte)(EVar1 - Add)) goto LAB_142552f5c;
  plVar2 = *(longlong **)this;
  pcVar3 = *(code **)(*plVar2 + 0x30);
  ::FString::FString(&local_18,L"The notification occurs with the GetItems");
  iVar4 = *(int *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  if (iVar4 == (int)*(undefined8 *)&(param_1->Array).ArrayNum) {
    if (iVar4 != 0) {
      iVar4 = memcmp((param_1->Array).DataPtr,(void *)**(undefined8 **)((longlong)this + 0x18),
                     (longlong)iVar4 << 2);
      if (iVar4 != 0) goto LAB_142552f3e;
    }
    uVar5 = 1;
  }
  else {
LAB_142552f3e:
    uVar5 = 0;
  }
  (*pcVar3)(plVar2,uVar5,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_142552f5c:
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  return;
}

// operator() @ 142554da0

void __thiscall
`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>::operator()
          (void *this,TObservableArrayChangedArgs<int> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (param_1->Action == Swap) {
    uVar1 = param_1->MoveIndex;
    plVar3 = *(longlong **)this;
    uVar9 = param_1->StartIndex;
    pcVar4 = *(code **)(*plVar3 + 0x30);
    ::FString::FString(&local_80,L"SecondIndex != FirstIndex.");
    (*pcVar4)(plVar3,uVar1 != uVar9,&local_80,0);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    plVar3 = *(longlong **)this;
    pcVar4 = *(code **)(*plVar3 + 0x30);
    ::FString::FString(&local_70,L"The swap index are invalid.");
    if (((((int)uVar1 < 0) ||
         (iVar2 = *(int *)(*(longlong *)((longlong)this + 0x18) + 8), iVar2 <= (int)uVar1)) ||
        ((int)uVar9 < 0)) || (iVar2 <= (int)uVar9)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    (*pcVar4)(plVar3,uVar8,&local_70,0);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    plVar3 = *(longlong **)this;
    pcVar4 = *(code **)(*plVar3 + 0x30);
    ::FString::FString(&local_60,L"The swap of FirstIndex do not matches");
    plVar5 = *(longlong **)((longlong)this + 0x20);
    iVar2 = *(int *)(**(longlong **)((longlong)this + 0x18) + (longlong)(int)uVar1 * 4);
    uVar7 = 0;
    if ((int)uVar9 < (int)plVar5[1]) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*pcVar4)(plVar3,iVar2 == *(int *)((longlong)(int)uVar9 * 4 + *plVar5),&local_60,0);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    plVar3 = *(longlong **)this;
    pcVar4 = *(code **)(*plVar3 + 0x30);
    ::FString::FString(&local_50,L"The swap of SecondIndex do not matches");
    plVar5 = *(longlong **)((longlong)this + 0x20);
    iVar2 = *(int *)((longlong)(int)uVar9 * 4 + **(longlong **)((longlong)this + 0x18));
    uVar9 = 0;
    if ((int)uVar1 < (int)plVar5[1]) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*pcVar4)(plVar3,iVar2 == *(int *)(*plVar5 + (longlong)(int)uVar1 * 4),&local_50,0);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1425567b0

void __thiscall
`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>::operator()
          (void *this,TObservableArrayChangedArgs<int> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1->Action == RemoveSwap) {
    uVar1 = param_1->MoveIndex;
    plVar3 = *(longlong **)this;
    iVar2 = param_1->StartIndex;
    pcVar4 = *(code **)(*plVar3 + 0x30);
    ::FString::FString(&local_58,L"The RemoveIndex is not the expected value.");
    (*pcVar4)(plVar3,**(int **)((longlong)this + 0x10) == iVar2,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8)) {
      plVar3 = *(longlong **)this;
      pcVar4 = *(code **)(*plVar3 + 0x30);
      if (**(char **)((longlong)this + 8) == '\0') {
        ::FString::FString(&local_38,L"PreviousMovedElmenentIndex is invalid.");
        if (((int)uVar1 < 0) || (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) <= (int)uVar1))
        {
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
        (*pcVar4)(plVar3,uVar8,&local_38,0);
        local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      }
      else {
        ::FString::FString(&local_48,L"PreviousMovedElmenentIndex is invalid.");
        if (((int)uVar1 < 0) || (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) <= (int)uVar1))
        {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        (*pcVar4)(plVar3,uVar8,&local_48,0);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((((-1 < iVar2) && (iVar2 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) &&
          (-1 < (int)uVar1)) && ((int)uVar1 < *(int *)(*(longlong *)((longlong)this + 0x18) + 8))) {
        plVar3 = *(longlong **)this;
        pcVar4 = *(code **)(*plVar3 + 0x30);
        ::FString::FString(&local_28,L"The swap index doesn\'t matches");
        plVar5 = *(longlong **)((longlong)this + 0x18);
        iVar2 = *(int *)(**(longlong **)((longlong)this + 0x20) + (longlong)iVar2 * 4);
        uVar7 = 0;
        if ((int)uVar1 < (int)plVar5[1]) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*pcVar4)(plVar3,iVar2 == *(int *)(*plVar5 + (longlong)(int)uVar1 * 4),&local_28,0);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

