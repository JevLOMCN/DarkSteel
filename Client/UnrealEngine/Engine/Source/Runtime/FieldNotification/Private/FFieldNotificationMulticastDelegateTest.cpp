// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 9

// GetTestFlags @ 1441bd690

EAutomationTestFlags __thiscall
FFieldNotificationMulticastDelegateTest::GetTestFlags(FFieldNotificationMulticastDelegateTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1441bd6a0

bool __thiscall
FFieldNotificationMulticastDelegateTest::IsStressTest(FFieldNotificationMulticastDelegateTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1441bd6b0

uint __thiscall
FFieldNotificationMulticastDelegateTest::GetRequiredDeviceNum
          (FFieldNotificationMulticastDelegateTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1441bd6c0

FString * __thiscall
FFieldNotificationMulticastDelegateTest::GetTestSourceFileName
          (FFieldNotificationMulticastDelegateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\FieldNotification\\Private\\Tests\\FieldNotificationMulticastDelegateTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1441bd6f0

int __thiscall
FFieldNotificationMulticastDelegateTest::GetTestSourceFileLine
          (FFieldNotificationMulticastDelegateTest *this)

{
  return 0xb;
}

// GetTests @ 1441bd700

/* WARNING: Removing unreachable block (ram,0x0001441bd7ed) */
/* WARNING: Removing unreachable block (ram,0x0001441bd8b8) */

void __thiscall
FFieldNotificationMulticastDelegateTest::GetTests
          (FFieldNotificationMulticastDelegateTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.UMG.FieldNotificationMulticastDelegateTest");
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
    iVar3 = UE::Core::Private::
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
    iVar3 = UE::Core::Private::
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

// RunTest @ 1441bd8e0

bool __thiscall
FFieldNotificationMulticastDelegateTest::RunTest
          (FFieldNotificationMulticastDelegateTest *this,FString *param_1)

{
  FName FVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FName FVar10;
  UClass *pUVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  FName local_res8;
  FDelegateAllocation local_148;
  undefined1 local_138 [16];
  FFieldNotificationMulticastDelegateTest *local_128;
  FFieldMulticastDelegate local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e4;
  FName local_d8;
  FName FStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  ForElementType<TAlignedBytes<16,16>_> local_98;
  int local_90;
  FName local_88;
  undefined4 local_80;
  FName local_78;
  undefined4 local_70;
  FName local_68;
  undefined4 local_60;
  FFieldNotificationMulticastDelegateTest **local_58;
  FName *local_50;
  FName *local_48;
  FName *local_40;
  FFieldNotificationMulticastDelegateTest *local_38;
  FName local_30;
  
  pFVar7 = ::FName::FName(&local_res8,"FieldA");
  iVar13 = 0;
  iVar16 = 0;
  local_88 = *pFVar7;
  local_80 = 0;
  pFVar7 = ::FName::FName(&local_res8,"FieldB");
  local_78 = *pFVar7;
  local_70 = 1;
  pFVar7 = ::FName::FName(&local_res8,"FieldC");
  local_68 = *pFVar7;
  local_60 = 2;
  pFVar7 = ::FName::FName(&local_res8,"FieldD");
  FVar1 = *pFVar7;
  local_120.AddedEmplaceAt = 0xffff;
  local_58 = &local_128;
  local_50 = &local_88;
  local_48 = &local_78;
  local_120.Delegates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Delegates.ArrayNum = 0;
  local_120.Delegates.ArrayMax = 0;
  local_120.DelegateLockCount = 0;
  local_120.CompactionCount = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e4 = 0;
  local_128 = this;
  local_40 = &local_68;
  local_38 = this;
  local_30 = FVar1;
  `FFieldNotificationMulticastDelegateTest::RunTest'::__l2::<lambda_1>::operator()(&local_58);
  local_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_148.DelegateSize = 0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_148);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,`FFieldNotificationMulticastDelegateTest::RunTest'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar8[3] = &local_58;
  }
  FVar10 = (FName)Z_Construct_UClass_UObject_NoRegister();
  local_138._0_8_ = FVar1;
  if (local_148.DelegateSize != 0) {
    if ((local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) &&
       (cVar5 = (**(code **)(*(longlong *)local_148.DelegateAllocator + 0x38))(), cVar5 != '\0')) {
      if ((local_148.DelegateSize != 0) &&
         (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_148.DelegateAllocator + 0x40))
                  (local_148.DelegateAllocator,&local_res8);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar10 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar10);
      }
      local_d8.ComparisonIndex.Value = 0;
      local_d8.Number = 0;
      local_res8 = FVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar10 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar10);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_d8,(FObjectPtr)&local_res8);
      uVar4 = local_138._0_8_;
      iVar3 = local_148.DelegateSize;
      FVar2 = local_148.DelegateAllocator;
      FStack_d0.ComparisonIndex.Value = local_138._0_4_;
      FStack_d0.Number = local_138._4_4_;
      FVar10 = FStack_d0;
      local_c8 = 3;
      local_c0 = 0;
      if (local_120.DelegateLockCount < 1) {
        uVar6 = local_120.Delegates.ArrayNum;
        if ((int)(uint)local_120.AddedEmplaceAt <= local_120.Delegates.ArrayNum) {
          uVar6 = (uint)local_120.AddedEmplaceAt;
        }
        if (0 < (int)uVar6) {
          do {
            uVar15 = uVar6 >> 1;
            iVar12 = FVar1.ComparisonIndex.Value.Value -
                     (int)*(undefined8 *)
                           (local_120.Delegates.AllocatorInstance.Data +
                           (longlong)(int)(uVar15 + iVar13) * 0x30 + 8);
            if (iVar12 == 0) {
              iVar12 = FVar1.Number -
                       (int)((ulonglong)
                             *(undefined8 *)
                              (local_120.Delegates.AllocatorInstance.Data +
                              (longlong)(int)(uVar15 + iVar13) * 0x30 + 8) >> 0x20);
            }
            iVar16 = iVar13;
            if (-1 < iVar12) {
              iVar16 = uVar15 + iVar13 + (uVar6 & 1);
            }
            uVar6 = uVar15;
            iVar13 = iVar16;
          } while (uVar15 != 0);
        }
        local_a0 = 0;
        local_138._0_4_ = local_d8.ComparisonIndex.Value;
        local_138._4_4_ = local_d8.Number;
        local_138._8_8_ = uVar4;
        local_res8.ComparisonIndex.Value = 3;
        local_res8.Number = 0;
        local_98 = local_148.DelegateAllocator;
        local_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_90 = local_148.DelegateSize;
        local_148.DelegateSize = 0;
        TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
        ::InsertUninitializedImpl(&local_120.Delegates,iVar16,1);
        pFVar14 = local_120.Delegates.AllocatorInstance.Data + (longlong)iVar16 * 0x30;
        *(undefined8 *)&pFVar14->field_0x0 = local_138._0_8_;
        *(undefined8 *)(pFVar14 + 8) = local_138._8_8_;
        *(FName *)(pFVar14 + 0x10) = local_res8;
        *(undefined4 *)(pFVar14 + 0x18) = 0;
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar14 + 0x20) = FVar2;
        *(int *)(pFVar14 + 0x28) = iVar3;
      }
      else {
        FStack_d0.ComparisonIndex.Value = (uint)local_138._0_8_;
        FStack_d0.Number = SUB84(local_138._0_8_,4);
        local_b8 = local_d8.ComparisonIndex.Value;
        uStack_b4 = local_d8.Number;
        uStack_b0 = FStack_d0.ComparisonIndex.Value;
        uStack_ac = FStack_d0.Number;
        local_a0 = 0;
        local_a8 = 3;
        local_98 = local_148.DelegateAllocator;
        local_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_90 = local_148.DelegateSize;
        local_148.DelegateSize = 0;
        uVar6 = local_120.Delegates.ArrayNum;
        FStack_d0 = FVar10;
        if (local_120.Delegates.ArrayNum == local_120.Delegates.ArrayMax) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,(ForAnyElementType *)&local_120,&local_120.Delegates.ArrayMax);
        }
        local_120.Delegates.ArrayNum = uVar6 + 1;
        pFVar14 = local_120.Delegates.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30;
        *(uint *)&pFVar14->field_0x0 = local_b8;
        *(uint *)(pFVar14 + 4) = uStack_b4;
        *(uint *)(pFVar14 + 8) = uStack_b0;
        *(uint *)(pFVar14 + 0xc) = uStack_ac;
        *(undefined8 *)(pFVar14 + 0x10) = local_a8;
        *(undefined4 *)(pFVar14 + 0x18) = local_a0;
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar14 + 0x20) = local_98;
        *(int *)(pFVar14 + 0x28) = local_90;
        if (local_120.AddedEmplaceAt < (ushort)uVar6) {
          uVar6 = (uint)local_120.AddedEmplaceAt;
        }
        local_120.AddedEmplaceAt = (ushort)uVar6;
      }
    }
    if (local_148.DelegateSize != 0) {
      if (local_148.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
      goto LAB_1441bdcbb;
      (*(code *)**(undefined8 **)local_148.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_148,0,0,0x10);
      local_148.DelegateSize = 0;
    }
  }
  if (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_148.DelegateAllocator);
  }
LAB_1441bdcbb:
  pUVar11 = Z_Construct_UClass_UObject_NoRegister();
  local_138._0_4_ = local_30.ComparisonIndex.Value;
  local_138._4_4_ = local_30.Number;
  local_138._8_4_ = 3;
  UE::FieldNotification::FFieldMulticastDelegate::Broadcast
            (&local_120,(UObject *)pUVar11,(FFieldId *)local_138);
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            ((FInvocationElement *)local_120.Delegates.AllocatorInstance.Data,
             local_120.Delegates.ArrayNum);
  if ((FInvocationElement *)local_120.Delegates.AllocatorInstance.Data != (FInvocationElement *)0x0)
  {
    FMemory::Free(local_120.Delegates.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1441bdd30

FString * __thiscall
FFieldNotificationMulticastDelegateTest::GetBeautifiedTestName
          (FFieldNotificationMulticastDelegateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.UMG.FieldNotificationMulticastDelegateTest");
  return __return_storage_ptr__;
}

// operator() @ 1441bee40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::<lambda_1>::operator()(void *this)

{
  FFieldMulticastDelegate *pFVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  FLocal *pFVar5;
  void *pvVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  ForElementType<TAlignedBytes<16,16>_> FVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  UClass *pUVar18;
  FName *pFVar19;
  FWeakObjectPtr FVar20;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  *pTVar21;
  ulonglong uVar22;
  FName FVar23;
  FName FVar24;
  FName FVar25;
  FWeakObjectPtr *pFVar26;
  FName FVar27;
  uint uVar28;
  ForElementType<unsigned_int> FVar29;
  FDelegateHandle FVar30;
  FScriptContainerElement *pFVar31;
  undefined1 auStack_6f8 [32];
  FName local_6d8;
  bool local_6c8;
  bool local_6c7;
  bool local_6c6;
  bool local_6c5;
  bool local_6c4;
  bool local_6c3 [3];
  FName local_6c0;
  FName local_6b8;
  FDelegateAllocation local_6b0;
  FDelegateAllocation local_6a0;
  FDelegateAllocation local_690;
  undefined1 local_680 [24];
  FName local_668;
  FName local_660;
  FDelegateHandle local_658;
  longlong *local_650;
  FInvocationKey local_648;
  FInvocationKey local_628;
  FInvocationKey local_608;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 local_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 local_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 local_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 local_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  FName local_578;
  FName local_570;
  FFieldId local_568;
  FFieldId local_558;
  FFieldId local_548;
  FFieldId local_538;
  FFieldId local_528;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_518;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_508;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_4f8;
  FFieldId local_4e8;
  FFieldId local_4d8;
  FFieldId local_4c8;
  FFieldId local_4b8;
  undefined1 local_4a8 [8];
  undefined4 local_4a0;
  FWeakObjectPtr local_498;
  FName FStack_490;
  FWeakObjectPtr local_488;
  FName FStack_480;
  UClass *local_478;
  int local_470;
  int iStack_46c;
  uint uStack_468;
  uint uStack_464;
  ulonglong local_460;
  undefined4 local_458;
  FWeakObjectPtr local_450;
  int local_448;
  int local_440;
  int iStack_43c;
  uint uStack_438;
  uint uStack_434;
  ulonglong local_430;
  undefined4 local_428;
  FWeakObjectPtr local_420;
  int local_418;
  int local_410;
  int iStack_40c;
  uint uStack_408;
  uint uStack_404;
  ulonglong local_400;
  undefined4 local_3f8;
  FWeakObjectPtr local_3f0;
  int local_3e8;
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
  FString local_320;
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
  FString local_210 [2];
  undefined4 local_1e8;
  FWeakObjectPtr local_1e0;
  int local_1d8;
  FWeakObjectPtr local_1d0;
  FName FStack_1c8;
  FName local_1c0;
  undefined4 local_1b8;
  FWeakObjectPtr local_1b0;
  int local_1a8;
  FWeakObjectPtr local_1a0;
  FName FStack_198;
  FName local_190;
  undefined4 local_188;
  FWeakObjectPtr local_180;
  int local_178;
  FRemoveResult local_170;
  <lambda_1>_conflict local_150;
  <lambda_1>_conflict local_128;
  <lambda_1>_conflict local_100;
  UObject local_d8;
  FDelegateAllocation *local_b0;
  undefined1 local_a8 [24];
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_90;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_80;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_70;
  FRemoveAllResult local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_6f8;
  lVar3 = *(longlong *)this;
  FVar24.ComparisonIndex.Value = 0;
  FVar24.Number = 0;
  uStack_584 = 0;
  uStack_580 = 0;
  local_588 = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined4 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x34) = 0;
  uStack_5c0 = 0;
  uStack_5bc = 0;
  local_5c4 = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined4 *)(lVar3 + 0x40) = 0;
  uStack_5b4 = 0;
  uStack_5b0 = 0;
  local_5b8 = 0;
  *(undefined8 *)(lVar3 + 0x44) = 0;
  *(undefined4 *)(lVar3 + 0x4c) = 0;
  lVar3 = *(longlong *)this;
  local_d8._32_1_ = 0;
  local_b0 = &local_690;
  local_690.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  pFVar1 = (FFieldMulticastDelegate *)(lVar3 + 8);
  local_690.DelegateSize = 0;
  local_650 = this;
  puVar16 = UE::Core::Private::DelegateAllocate(0x28,&local_690);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    puVar16[4] = __l2::FLocal::FooA;
    *puVar16 = &TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::`2'::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
                ::_vftable_;
    puVar16[3] = lVar3;
    if ((lVar3 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && MethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                            ,0x1d8,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_6c0 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UObject_NoRegister();
  local_680[0x12] = 0;
  FVar23 = FVar24;
  if (((local_690.DelegateSize == 0) ||
      ((FWeakObjectPtr)local_690.DelegateAllocator == (FWeakObjectPtr)0x0)) ||
     (cVar12 = (**(code **)(*(longlong *)local_690.DelegateAllocator + 0x38))(), cVar12 == '\0')) {
    local_680[7] = 0;
    if (local_690.DelegateSize == 0) goto LAB_1441bf203;
    if ((FWeakObjectPtr)local_690.DelegateAllocator != (FWeakObjectPtr)0x0) goto LAB_1441bf1e0;
  }
  else {
    local_680[0x13] = 0;
    if ((local_690.DelegateSize != 0) &&
       ((FWeakObjectPtr)local_690.DelegateAllocator != (FWeakObjectPtr)0x0)) {
      pFVar19 = (FName *)(**(code **)(*(longlong *)local_690.DelegateAllocator + 0x40))
                                   (local_690.DelegateAllocator,&local_d8.field_0x10);
      FVar23 = *pFVar19;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    local_628.Object.WeakPtr.ObjectIndex = 0;
    local_628.Object.WeakPtr.ObjectSerialNumber = 0;
    local_668 = (FName)pUVar18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_628,(FObjectPtr)&local_668);
    iVar15 = local_690.DelegateSize;
    FVar10 = local_690.DelegateAllocator;
    local_628.Id.FieldName = local_6c0;
    FVar25 = local_628.Id.FieldName;
    local_628.DynamicName.ComparisonIndex.Value = 0;
    local_628.DynamicName.Number = 0;
    local_628.Id.BitNumber = uVar13;
    if (*(short *)(lVar3 + 0x18) < 1) {
      iVar15 = UE::FieldNotification::FFieldMulticastDelegate::UpperBound(pFVar1,&local_628);
      local_1b0 = (FWeakObjectPtr)local_690.DelegateAllocator;
      local_6c0.Number = local_628.DynamicName.ComparisonIndex.Value;
      local_6c0.ComparisonIndex.Value = local_628.Id.BitNumber;
      local_1a8 = local_690.DelegateSize;
      local_498 = local_628.Object.WeakPtr;
      FStack_490 = local_628.Id.FieldName;
      local_1b8 = 0;
      local_680[0x17] = 0;
      local_690.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_690.DelegateSize = 0;
      TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
      ::InsertUninitializedImpl
                ((TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
                  *)pFVar1,iVar15,1);
      pFVar26 = (FWeakObjectPtr *)
                ((pFVar1->Delegates).AllocatorInstance.Data + (longlong)iVar15 * 0x30);
      local_1d0 = local_498;
      FStack_1c8 = FStack_490;
      *pFVar26 = local_498;
      *(FName *)(pFVar26 + 1) = FStack_490;
      *(FName *)(pFVar26 + 2) = local_6c0;
      pFVar26[3].ObjectIndex = 0;
      local_680[4] = 0;
      pFVar26[4] = local_1b0;
      pFVar26[5].ObjectIndex = local_1a8;
      local_680[5] = 0;
      local_1c0 = local_6c0;
    }
    else {
      local_628.Id.FieldName.ComparisonIndex = local_6c0.ComparisonIndex.Value;
      local_628.Id.FieldName.Number = local_6c0.Number;
      local_460 = (ulonglong)uVar13;
      local_680[0x14] = 0;
      local_690.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_450 = (FWeakObjectPtr)FVar10;
      local_690.DelegateSize = 0;
      uVar13 = *(uint *)(lVar3 + 0x10);
      local_470 = local_628.Object.WeakPtr.ObjectIndex;
      iStack_46c = local_628.Object.WeakPtr.ObjectSerialNumber;
      uStack_468 = local_628.Id.FieldName.ComparisonIndex.Value;
      uStack_464 = local_628.Id.FieldName.Number;
      local_458 = 0;
      local_448 = iVar15;
      local_628.Id.FieldName = FVar25;
      if (uVar13 == *(uint *)(lVar3 + 0x14)) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,(ForAnyElementType *)pFVar1,(int *)(lVar3 + 0x14));
      }
      *(uint *)(lVar3 + 0x10) = uVar13 + 1;
      pFVar31 = (pFVar1->Delegates).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
      *(int *)pFVar31 = local_470;
      *(int *)(pFVar31 + 4) = iStack_46c;
      *(uint *)(pFVar31 + 8) = uStack_468;
      *(uint *)(pFVar31 + 0xc) = uStack_464;
      *(ulonglong *)(pFVar31 + 0x10) = local_460;
      *(undefined4 *)(pFVar31 + 0x18) = local_458;
      local_680[0x15] = 0;
      *(FWeakObjectPtr *)(pFVar31 + 0x20) = local_450;
      *(int *)(pFVar31 + 0x28) = local_448;
      local_680[0x16] = 0;
      if (*(ushort *)(lVar3 + 0x1c) < (ushort)uVar13) {
        uVar13 = (uint)*(ushort *)(lVar3 + 0x1c);
      }
      *(short *)(lVar3 + 0x1c) = (short)uVar13;
    }
    local_680[6] = 0;
    if (local_690.DelegateSize != 0) {
      if ((FWeakObjectPtr)local_690.DelegateAllocator == (FWeakObjectPtr)0x0) goto LAB_1441bf20d;
LAB_1441bf1e0:
      (*(code *)**(undefined8 **)local_690.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_690,0,0,0x10);
      local_690.DelegateSize = 0;
    }
LAB_1441bf203:
    if ((FWeakObjectPtr)local_690.DelegateAllocator != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_690.DelegateAllocator);
    }
  }
LAB_1441bf20d:
  puVar16 = *(undefined8 **)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  *(undefined8 *)(lVar3 + 0x2c) = *puVar16;
  *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(puVar16 + 1);
  lVar3 = *(longlong *)this;
  local_6c0 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UObject_NoRegister();
  local_568.FieldName = local_6c0;
  local_568.BitNumber = uVar13;
  UE::FieldNotification::FFieldMulticastDelegate::Broadcast
            ((FFieldMulticastDelegate *)(lVar3 + 8),(UObject *)pUVar18,&local_568);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_230,L"Bad amount of FooA");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x20) == 1,&local_230,0);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_220,L"Bad amount of FooB");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x24) == 0,&local_220,0);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  uStack_5a8 = 0;
  uStack_5a4 = 0;
  local_5ac = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined4 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x34) = 0;
  uStack_59c = 0;
  uStack_598 = 0;
  local_5a0 = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined4 *)(lVar3 + 0x40) = 0;
  uStack_590 = 0;
  uStack_58c = 0;
  local_594 = 0;
  *(undefined8 *)(lVar3 + 0x44) = 0;
  *(undefined4 *)(lVar3 + 0x4c) = 0;
  lVar3 = *(longlong *)this;
  local_a8[8] = 0;
  local_a8._16_8_ = &local_6a0;
  local_6a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  pFVar1 = (FFieldMulticastDelegate *)(lVar3 + 8);
  local_6a0.DelegateSize = 0;
  puVar16 = UE::Core::Private::DelegateAllocate(0x28,&local_6a0);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::`2'::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
                ::_vftable_;
    puVar16[4] = __l2::FLocal::FooA;
    puVar16[3] = lVar3;
    if ((lVar3 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && MethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                            ,0x1d8,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_6c0 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UObject_NoRegister();
  local_680[8] = 0;
  FVar25 = FVar24;
  if (((local_6a0.DelegateSize == 0) ||
      ((FWeakObjectPtr)local_6a0.DelegateAllocator == (FWeakObjectPtr)0x0)) ||
     (cVar12 = (**(code **)(*(longlong *)local_6a0.DelegateAllocator + 0x38))(), cVar12 == '\0')) {
    local_680[0x11] = 0;
    if (local_6a0.DelegateSize == 0) goto LAB_1441bf681;
    if ((FWeakObjectPtr)local_6a0.DelegateAllocator != (FWeakObjectPtr)0x0) goto LAB_1441bf65e;
  }
  else {
    local_680[9] = 0;
    if ((local_6a0.DelegateSize != 0) &&
       ((FWeakObjectPtr)local_6a0.DelegateAllocator != (FWeakObjectPtr)0x0)) {
      pFVar19 = (FName *)(**(code **)(*(longlong *)local_6a0.DelegateAllocator + 0x40))
                                   (local_6a0.DelegateAllocator,&local_d8.field_0x8);
      FVar25 = *pFVar19;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    local_648.Object.WeakPtr.ObjectIndex = 0;
    local_648.Object.WeakPtr.ObjectSerialNumber = 0;
    local_478 = pUVar18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_648,(FObjectPtr)&local_478);
    iVar15 = local_6a0.DelegateSize;
    FVar10 = local_6a0.DelegateAllocator;
    local_648.Id.FieldName = local_6c0;
    FVar27 = local_648.Id.FieldName;
    local_648.DynamicName.ComparisonIndex.Value = 0;
    local_648.DynamicName.Number = 0;
    local_648.Id.BitNumber = uVar13;
    if (*(short *)(lVar3 + 0x18) < 1) {
      iVar15 = UE::FieldNotification::FFieldMulticastDelegate::UpperBound(pFVar1,&local_648);
      local_180 = (FWeakObjectPtr)local_6a0.DelegateAllocator;
      local_6c0.Number = local_648.DynamicName.ComparisonIndex.Value;
      local_6c0.ComparisonIndex.Value = local_648.Id.BitNumber;
      local_178 = local_6a0.DelegateSize;
      local_498 = local_648.Object.WeakPtr;
      FStack_490 = local_648.Id.FieldName;
      local_188 = 0;
      local_680[0xd] = 0;
      local_6a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_6a0.DelegateSize = 0;
      TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
      ::InsertUninitializedImpl
                ((TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
                  *)pFVar1,iVar15,1);
      pFVar26 = (FWeakObjectPtr *)
                ((pFVar1->Delegates).AllocatorInstance.Data + (longlong)iVar15 * 0x30);
      local_1a0 = local_498;
      FStack_198 = FStack_490;
      *pFVar26 = local_498;
      *(FName *)(pFVar26 + 1) = FStack_490;
      *(FName *)(pFVar26 + 2) = local_6c0;
      pFVar26[3].ObjectIndex = 0;
      local_680[0xe] = 0;
      pFVar26[4] = local_180;
      pFVar26[5].ObjectIndex = local_178;
      local_680[0xf] = 0;
      local_190 = local_6c0;
    }
    else {
      local_648.Id.FieldName.ComparisonIndex = local_6c0.ComparisonIndex.Value;
      local_648.Id.FieldName.Number = local_6c0.Number;
      local_430 = (ulonglong)uVar13;
      local_680[10] = 0;
      local_6a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_420 = (FWeakObjectPtr)FVar10;
      local_6a0.DelegateSize = 0;
      uVar13 = *(uint *)(lVar3 + 0x10);
      local_440 = local_648.Object.WeakPtr.ObjectIndex;
      iStack_43c = local_648.Object.WeakPtr.ObjectSerialNumber;
      uStack_438 = local_648.Id.FieldName.ComparisonIndex.Value;
      uStack_434 = local_648.Id.FieldName.Number;
      local_428 = 0;
      local_418 = iVar15;
      local_648.Id.FieldName = FVar27;
      if (uVar13 == *(uint *)(lVar3 + 0x14)) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,(ForAnyElementType *)pFVar1,(int *)(lVar3 + 0x14));
      }
      *(uint *)(lVar3 + 0x10) = uVar13 + 1;
      pFVar31 = (pFVar1->Delegates).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
      *(int *)pFVar31 = local_440;
      *(int *)(pFVar31 + 4) = iStack_43c;
      *(uint *)(pFVar31 + 8) = uStack_438;
      *(uint *)(pFVar31 + 0xc) = uStack_434;
      *(ulonglong *)(pFVar31 + 0x10) = local_430;
      *(undefined4 *)(pFVar31 + 0x18) = local_428;
      local_680[0xb] = 0;
      *(FWeakObjectPtr *)(pFVar31 + 0x20) = local_420;
      *(int *)(pFVar31 + 0x28) = local_418;
      local_680[0xc] = 0;
      if (*(ushort *)(lVar3 + 0x1c) < (ushort)uVar13) {
        uVar13 = (uint)*(ushort *)(lVar3 + 0x1c);
      }
      *(short *)(lVar3 + 0x1c) = (short)uVar13;
    }
    local_680[0x10] = 0;
    if (local_6a0.DelegateSize != 0) {
      if ((FWeakObjectPtr)local_6a0.DelegateAllocator == (FWeakObjectPtr)0x0) goto LAB_1441bf68b;
LAB_1441bf65e:
      (*(code *)**(undefined8 **)local_6a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_6a0,0,0,0x10);
      local_6a0.DelegateSize = 0;
    }
LAB_1441bf681:
    if ((FWeakObjectPtr)local_6a0.DelegateAllocator != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_6a0.DelegateAllocator);
    }
  }
LAB_1441bf68b:
  puVar16 = *(undefined8 **)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  *(undefined8 *)(lVar3 + 0x2c) = *puVar16;
  *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(puVar16 + 1);
  lVar3 = *(longlong *)this;
  local_6c0 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UObject_NoRegister();
  local_558.FieldName = local_6c0;
  local_558.BitNumber = uVar13;
  UE::FieldNotification::FFieldMulticastDelegate::Broadcast
            ((FFieldMulticastDelegate *)(lVar3 + 8),(UObject *)pUVar18,&local_558);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(local_210,L"Bad amount of FooA");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x20) == 2,local_210,0);
  if (local_210[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210[0].Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_3e0,L"Bad amount of FooB");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x24) == 0,&local_3e0,0);
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  local_6c0 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UObject_NoRegister();
  local_6c5 = false;
  local_6c7 = false;
  local_578 = FVar23;
  if (FVar23 != (FName)0x0) {
    local_150.InDynamicDelegate = (FFieldValueChangedDynamicDelegate *)&local_578;
    local_150.bRemoved = &local_6c5;
    local_150.bFieldPresent = &local_6c7;
    local_548.FieldName = local_6c0;
    local_548.BitNumber = uVar13;
    local_150.Self = (FFieldMulticastDelegate *)(lVar3 + 8);
    local_150.InObject = (UObject *)pUVar18;
    UE::FieldNotification::FFieldMulticastDelegate::
    RemoveFrom<_UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom_::__l2::<lambda_1>_>
              ((FFieldMulticastDelegate *)(lVar3 + 8),&local_150,&local_548,&local_6c7);
  }
  bVar11 = local_6c5;
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  local_6c8 = local_6c7;
  ::FString::FString(&local_3d0,L"Bad Remove of Handle1");
  (*pcVar7)(plVar4,bVar11,&local_3d0,0);
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_3c0,L"Remove of Handle1 should have other bound delegates.");
  (*pcVar7)(plVar4,local_6c8,&local_3c0,0);
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  local_6c0 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UObject_NoRegister();
  local_6c4 = false;
  local_6c6 = false;
  local_570 = FVar23;
  if (FVar23 != (FName)0x0) {
    local_128.InDynamicDelegate = (FFieldValueChangedDynamicDelegate *)&local_570;
    local_128.bRemoved = &local_6c4;
    local_128.bFieldPresent = &local_6c6;
    local_538.FieldName = local_6c0;
    local_538.BitNumber = uVar13;
    local_128.Self = (FFieldMulticastDelegate *)(lVar3 + 8);
    local_128.InObject = (UObject *)pUVar18;
    UE::FieldNotification::FFieldMulticastDelegate::
    RemoveFrom<_UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom_::__l2::<lambda_1>_>
              ((FFieldMulticastDelegate *)(lVar3 + 8),&local_128,&local_538,&local_6c6);
  }
  bVar9 = local_6c4;
  bVar11 = local_6c6;
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_3b0,L"Bad Remove of Handle1");
  (*pcVar7)(plVar4,bVar9 == false,&local_3b0,0);
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_3a0,L"Remove of Handle1 should not have other bound delegates.");
  (*pcVar7)(plVar4,bVar11,&local_3a0,0);
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  local_6c0 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UObject_NoRegister();
  local_6c3[0] = false;
  local_6c8 = false;
  local_660 = FVar25;
  if (FVar25 != (FName)0x0) {
    local_100.InDynamicDelegate = (FFieldValueChangedDynamicDelegate *)&local_660;
    local_100.bRemoved = local_6c3;
    local_100.bFieldPresent = &local_6c8;
    local_528.FieldName = local_6c0;
    local_528.BitNumber = uVar13;
    local_100.Self = (FFieldMulticastDelegate *)(lVar3 + 8);
    local_100.InObject = (UObject *)pUVar18;
    UE::FieldNotification::FFieldMulticastDelegate::
    RemoveFrom<_UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom_::__l2::<lambda_1>_>
              ((FFieldMulticastDelegate *)(lVar3 + 8),&local_100,&local_528,&local_6c8);
  }
  bVar9 = local_6c3[0];
  bVar11 = local_6c8;
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_390,L"Bad Remove of Handle2");
  (*pcVar7)(plVar4,bVar9,&local_390,0);
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_380,L"Remove of Handle2 should not have other bound delegates.");
  (*pcVar7)(plVar4,bVar11 == false,&local_380,0);
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  uStack_5e4 = 0;
  uStack_5e0 = 0;
  local_5e8 = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined4 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x34) = 0;
  uStack_5d8 = 0;
  uStack_5d4 = 0;
  local_5dc = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined4 *)(lVar3 + 0x40) = 0;
  uStack_5cc = 0;
  uStack_5c8 = 0;
  local_5d0 = 0;
  *(undefined8 *)(lVar3 + 0x44) = 0;
  *(undefined4 *)(lVar3 + 0x4c) = 0;
  lVar3 = *(longlong *)this;
  local_488 = (FWeakObjectPtr)((ulonglong)local_488 & 0xffffffffffffff00);
  FStack_480 = (FName)&local_6b0;
  local_6b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  pFVar1 = (FFieldMulticastDelegate *)(lVar3 + 8);
  local_6b0.DelegateSize = 0;
  puVar16 = UE::Core::Private::DelegateAllocate(0x28,&local_6b0);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::`2'::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
                ::_vftable_;
    puVar16[4] = __l2::FLocal::FooA;
    puVar16[3] = lVar3;
    if ((lVar3 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && MethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                            ,0x1d8,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_660 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  FVar20 = (FWeakObjectPtr)Z_Construct_UClass_UObject_NoRegister();
  FVar23 = FVar24;
  if (((local_6b0.DelegateSize == 0) ||
      ((FWeakObjectPtr)local_6b0.DelegateAllocator == (FWeakObjectPtr)0x0)) ||
     (cVar12 = (**(code **)(*(longlong *)local_6b0.DelegateAllocator + 0x38))(), cVar12 == '\0')) {
    bVar11 = local_6b0.DelegateSize == 0;
    local_668.ComparisonIndex.Value = 0;
    local_668.Number = 0;
  }
  else {
    if ((local_6b0.DelegateSize != 0) &&
       ((FWeakObjectPtr)local_6b0.DelegateAllocator != (FWeakObjectPtr)0x0)) {
      pFVar19 = (FName *)(**(code **)(*(longlong *)local_6b0.DelegateAllocator + 0x40))
                                   (local_6b0.DelegateAllocator,&local_d8.field_0x18);
      FVar23 = *pFVar19;
    }
    local_668 = FVar23;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar20 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar20);
    }
    local_608.Object.WeakPtr.ObjectIndex = 0;
    local_608.Object.WeakPtr.ObjectSerialNumber = 0;
    local_6b8 = (FName)FVar20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar20 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar20);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_608,(FObjectPtr)&local_6b8);
    iVar15 = local_6b0.DelegateSize;
    FVar10 = local_6b0.DelegateAllocator;
    local_608.Id.FieldName = local_660;
    FVar25 = local_608.Id.FieldName;
    local_608.DynamicName.ComparisonIndex.Value = 0;
    local_608.DynamicName.Number = 0;
    local_608.Id.BitNumber = uVar13;
    if (*(short *)(lVar3 + 0x18) < 1) {
      iVar14 = UE::FieldNotification::FFieldMulticastDelegate::UpperBound(pFVar1,&local_608);
      iVar15 = local_6b0.DelegateSize;
      FVar10 = local_6b0.DelegateAllocator;
      local_6b8.Number = local_608.DynamicName.ComparisonIndex.Value;
      local_6b8.ComparisonIndex.Value = local_608.Id.BitNumber;
      local_488 = local_608.Object.WeakPtr;
      FStack_480 = local_608.Id.FieldName;
      local_1e8 = 0;
      local_1e0 = (FWeakObjectPtr)local_6b0.DelegateAllocator;
      local_6b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1d8 = local_6b0.DelegateSize;
      local_6b0.DelegateSize = 0;
      TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
      ::InsertUninitializedImpl
                ((TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
                  *)pFVar1,iVar14,1);
      pFVar26 = (FWeakObjectPtr *)
                ((pFVar1->Delegates).AllocatorInstance.Data + (longlong)iVar14 * 0x30);
      *pFVar26 = local_488;
      *(FName *)(pFVar26 + 1) = FStack_480;
      pFVar26[2].ObjectIndex = local_6b8.ComparisonIndex.Value;
      pFVar26[2].ObjectSerialNumber = local_6b8.Number;
      pFVar26[3].ObjectIndex = 0;
      pFVar26[4] = (FWeakObjectPtr)FVar10;
      pFVar26[5].ObjectIndex = iVar15;
      bVar11 = local_6b0.DelegateSize == 0;
    }
    else {
      local_608.Id.FieldName.ComparisonIndex = local_660.ComparisonIndex.Value;
      local_608.Id.FieldName.Number = local_660.Number;
      local_6b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_400 = (ulonglong)uVar13;
      local_6b0.DelegateSize = 0;
      uVar13 = *(uint *)(lVar3 + 0x10);
      local_410 = local_608.Object.WeakPtr.ObjectIndex;
      iStack_40c = local_608.Object.WeakPtr.ObjectSerialNumber;
      uStack_408 = local_608.Id.FieldName.ComparisonIndex.Value;
      uStack_404 = local_608.Id.FieldName.Number;
      local_3f8 = 0;
      local_3f0 = (FWeakObjectPtr)FVar10;
      local_3e8 = iVar15;
      local_608.Id.FieldName = FVar25;
      if (uVar13 == *(uint *)(lVar3 + 0x14)) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,(ForAnyElementType *)pFVar1,(int *)(lVar3 + 0x14));
      }
      *(uint *)(lVar3 + 0x10) = uVar13 + 1;
      pFVar31 = (pFVar1->Delegates).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
      *(int *)pFVar31 = local_410;
      *(int *)(pFVar31 + 4) = iStack_40c;
      *(uint *)(pFVar31 + 8) = uStack_408;
      *(uint *)(pFVar31 + 0xc) = uStack_404;
      *(ulonglong *)(pFVar31 + 0x10) = local_400;
      *(undefined4 *)(pFVar31 + 0x18) = local_3f8;
      *(FWeakObjectPtr *)(pFVar31 + 0x20) = local_3f0;
      *(int *)(pFVar31 + 0x28) = local_3e8;
      if (*(ushort *)(lVar3 + 0x1c) < (ushort)uVar13) {
        uVar13 = (uint)*(ushort *)(lVar3 + 0x1c);
      }
      *(short *)(lVar3 + 0x1c) = (short)uVar13;
      bVar11 = local_6b0.DelegateSize == 0;
    }
  }
  if (!bVar11) {
    if ((FWeakObjectPtr)local_6b0.DelegateAllocator == (FWeakObjectPtr)0x0) goto LAB_1441bfe6a;
    (*(code *)**(undefined8 **)local_6b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_6b0,0,0,0x10);
    local_6b0.DelegateSize = 0;
  }
  if ((FWeakObjectPtr)local_6b0.DelegateAllocator != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_6b0.DelegateAllocator);
  }
LAB_1441bfe6a:
  pFVar5 = *(FLocal **)this;
  pTVar21 = TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
            ::CreateRaw<_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal>
                      (&local_90,pFVar5,(pmf_95f7dea9)0x1441c21b0);
  local_6b8 = (FName)**(undefined8 **)((longlong)this + 8);
  uVar2 = *(undefined4 *)(*(undefined8 **)((longlong)this + 8) + 1);
  pUVar18 = Z_Construct_UClass_UClass_NoRegister();
  local_518._0_4_ = local_6b8.ComparisonIndex.Value;
  local_518._4_4_ = local_6b8.Number;
  local_6d8 = (FName)pTVar21;
  local_518._8_4_ = uVar2;
  UE::FieldNotification::FFieldMulticastDelegate::Add
            (&pFVar5->Delegate,(UObject *)&local_658,(FFieldId *)pUVar18,&local_518);
  pFVar5 = *(FLocal **)this;
  pTVar21 = TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
            ::CreateRaw<_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal>
                      (&local_80,pFVar5,(pmf_95f7dea9)0x1441c2220);
  local_6b8 = (FName)**(undefined8 **)((longlong)this + 0x10);
  uVar2 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x10) + 1);
  pUVar18 = Z_Construct_UClass_UClass_NoRegister();
  local_508._0_4_ = local_6b8.ComparisonIndex.Value;
  local_508._4_4_ = local_6b8.Number;
  local_6d8 = (FName)pTVar21;
  local_508._8_4_ = uVar2;
  UE::FieldNotification::FFieldMulticastDelegate::Add
            (&pFVar5->Delegate,&local_d8,(FFieldId *)pUVar18,&local_508);
  pFVar5 = *(FLocal **)this;
  pTVar21 = TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
            ::CreateRaw<_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal>
                      (&local_70,pFVar5,(pmf_95f7dea9)0x1441c2290);
  local_6b8 = (FName)**(undefined8 **)((longlong)this + 0x18);
  uVar2 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  pUVar18 = Z_Construct_UClass_UClass_NoRegister();
  local_4f8._0_4_ = local_6b8.ComparisonIndex.Value;
  local_4f8._4_4_ = local_6b8.Number;
  local_6d8 = (FName)pTVar21;
  local_4f8._8_4_ = uVar2;
  UE::FieldNotification::FFieldMulticastDelegate::Add
            (&pFVar5->Delegate,(UObject *)local_a8,(FFieldId *)pUVar18,&local_4f8);
  puVar16 = *(undefined8 **)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  *(undefined8 *)(lVar3 + 0x2c) = *puVar16;
  *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(puVar16 + 1);
  puVar16 = *(undefined8 **)((longlong)this + 0x10);
  lVar3 = *(longlong *)this;
  *(undefined8 *)(lVar3 + 0x38) = *puVar16;
  *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(puVar16 + 1);
  puVar16 = *(undefined8 **)((longlong)this + 0x18);
  lVar3 = *(longlong *)this;
  *(undefined8 *)(lVar3 + 0x44) = *puVar16;
  *(undefined4 *)(lVar3 + 0x4c) = *(undefined4 *)(puVar16 + 1);
  lVar3 = *(longlong *)this;
  local_6b8 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UObject_NoRegister();
  local_4e8.FieldName = local_6b8;
  local_4e8.BitNumber = uVar13;
  UE::FieldNotification::FFieldMulticastDelegate::Broadcast
            ((FFieldMulticastDelegate *)(lVar3 + 8),(UObject *)pUVar18,&local_4e8);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_370,L"Bad amount of FooA");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x20) == 1,&local_370,0);
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_360,L"Bad amount of FooB");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x24) == 0,&local_360,0);
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_350,L"Bad amount of FooC");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x28) == 0,&local_350,0);
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  local_6b8 = **(FName **)((longlong)this + 8);
  uVar13 = (*(FName **)((longlong)this + 8))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UClass_NoRegister();
  local_4d8.FieldName = local_6b8;
  local_4d8.BitNumber = uVar13;
  UE::FieldNotification::FFieldMulticastDelegate::Broadcast
            ((FFieldMulticastDelegate *)(lVar3 + 8),(UObject *)pUVar18,&local_4d8);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_340,L"Bad amount of FooA");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x20) == 2,&local_340,0);
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_330,L"Bad amount of FooB");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x24) == 0,&local_330,0);
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_320,L"Bad amount of FooC");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x28) == 0,&local_320,0);
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  local_6b8 = **(FName **)((longlong)this + 0x10);
  uVar13 = (*(FName **)((longlong)this + 0x10))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UClass_NoRegister();
  local_4c8.FieldName = local_6b8;
  local_4c8.BitNumber = uVar13;
  UE::FieldNotification::FFieldMulticastDelegate::Broadcast
            ((FFieldMulticastDelegate *)(lVar3 + 8),(UObject *)pUVar18,&local_4c8);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_310,L"Bad amount of FooA");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x20) == 2,&local_310,0);
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_300,L"Bad amount of FooB");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x24) == 1,&local_300,0);
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_2f0,L"Bad amount of FooC");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x28) == 0,&local_2f0,0);
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  local_6b8 = **(FName **)((longlong)this + 0x18);
  uVar13 = (*(FName **)((longlong)this + 0x18))[1].ComparisonIndex.Value;
  pUVar18 = Z_Construct_UClass_UClass_NoRegister();
  local_4b8.FieldName = local_6b8;
  local_4b8.BitNumber = uVar13;
  UE::FieldNotification::FFieldMulticastDelegate::Broadcast
            ((FFieldMulticastDelegate *)(lVar3 + 8),(UObject *)pUVar18,&local_4b8);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_2e0,L"Bad amount of FooA");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x20) == 2,&local_2e0,0);
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_2d0,L"Bad amount of FooB");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x24) == 1,&local_2d0,0);
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_2c0,L"Bad amount of FooC");
  (*pcVar7)(plVar4,*(int *)(*(longlong *)this + 0x28) == 1,&local_2c0,0);
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  UE::FieldNotification::FFieldMulticastDelegate::Remove
            ((FFieldMulticastDelegate *)(*(longlong *)this + 8),&local_170,local_658);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_2b0,L"Failed Remove Handle2, bad Object");
  pUVar18 = Z_Construct_UClass_UClass_NoRegister();
  (*pcVar7)(plVar4,(UClass *)local_170.Object == pUVar18,&local_2b0,0);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_2a0,L"Failed Remove Handle2, bad FieldId");
  (*pcVar7)(plVar4,CONCAT71(SUB87(**(FName **)((longlong)this + 8),1),
                            local_170.FieldId.FieldName == **(FName **)((longlong)this + 8)),
            &local_2a0,0);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_290,L"Failed Remove Handle2, bad bRemoved");
  (*pcVar7)(plVar4,local_170.bRemoved,&local_290,0);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_280,L"Failed Remove Handle2, bad bHasOtherBoundDelegates");
  (*pcVar7)(plVar4,local_170.bHasOtherBoundDelegates == false,&local_280,0);
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  pvVar6 = *(void **)this;
  pUVar18 = Z_Construct_UClass_UClass_NoRegister();
  UE::FieldNotification::FFieldMulticastDelegate::RemoveAll
            ((FFieldMulticastDelegate *)((longlong)pvVar6 + 8),&local_60,(UObject *)pUVar18,pvVar6);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_270,L"Failed RemoveAll, bad count");
  (*pcVar7)(plVar4,local_60.RemoveCount == 2,&local_270,0);
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  FVar30.ID = *(undefined8 *)((longlong)this + 0x20);
  FVar25 = *(FName *)(*(longlong *)FVar30.ID + 0x30);
  local_6b8 = FVar25;
  local_658.ID = FVar30.ID;
  ::FString::FString(&local_260,L"Failed RemoveAll, bad HasFields");
  FVar29 = (ForElementType<unsigned_int>)&local_60.HasFields;
  if (local_60.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar29 = local_60.HasFields.AllocatorInstance.SecondaryData;
  }
  iVar15 = (int)(local_60.HasFields.NumBits + 0x1fU +
                ((int)(local_60.HasFields.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
  uVar13 = local_60.HasFields.NumBits & 0x8000001f;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
  }
  uVar22 = 0xffffffff;
  uVar28 = 0xffffffff >> ((byte)(0x20 - uVar13) & 0x1f);
  if (0x1f < (int)(0x20 - uVar13)) {
    uVar28 = 0xffffffff;
  }
  if (iVar15 == 1) {
    uVar22 = (ulonglong)uVar28;
  }
  FVar27 = FVar24;
  uVar13 = 0;
  if (0 < iVar15) {
    do {
      uVar13 = *(uint *)((longlong)FVar29 + (longlong)FVar27 * 4);
      uVar8 = uVar13 & (uint)uVar22;
      if ((uint)uVar22 == 0xffffffff) {
        uVar8 = uVar13;
      }
      FVar27.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value + 1;
      FVar27.Number = 0;
      uVar22 = (ulonglong)uVar8 - ((ulonglong)(uVar8 >> 1) & 0x5555555555555555);
      uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
      FVar24.ComparisonIndex.Value =
           FVar24.ComparisonIndex.Value.Value +
           (uint)(byte)(((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
      FVar24.Number = 0;
      uVar13 = 0xffffffff;
      if (FVar27.ComparisonIndex.Value == iVar15 - 1U) {
        uVar13 = uVar28;
      }
      uVar22 = (ulonglong)uVar13;
      FVar23 = local_668;
      this = local_650;
      FVar30.ID = local_658.ID;
      FVar25 = local_6b8;
      uVar13 = FVar24.ComparisonIndex.Value;
    } while ((int)FVar27.ComparisonIndex.Value < iVar15);
  }
  (*(code *)FVar25)(FVar30.ID,CONCAT71((int7)(uVar22 >> 8),uVar13 == 0),&local_260,0);
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  local_650 = (longlong *)**(undefined8 **)((longlong)this + 8);
  uVar2 = *(undefined4 *)(*(undefined8 **)((longlong)this + 8) + 1);
  pUVar18 = Z_Construct_UClass_UObject_NoRegister();
  local_4a8 = (undefined1  [8])local_650;
  local_6d8 = FVar23;
  local_4a0 = uVar2;
  UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom
            ((FFieldMulticastDelegate *)(lVar3 + 8),(UObject *)local_680,(FFieldId *)pUVar18,
             (FDelegateHandle)local_4a8);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_250,L"Bad Remove of FieldA");
  (*pcVar7)(plVar4,local_680[0],&local_250,0);
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  plVar4 = *(longlong **)((longlong)this + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x30);
  ::FString::FString(&local_240,L"Remove of Handle1 should have other bound delegates.");
  (*pcVar7)(plVar4,local_680[1] == '\0',&local_240,0);
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  if (local_60.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.HasFields.AllocatorInstance.SecondaryData);
  }
  return;
}

