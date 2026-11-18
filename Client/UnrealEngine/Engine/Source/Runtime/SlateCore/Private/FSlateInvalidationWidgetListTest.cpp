// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// GetTestFlags @ 1425ad5b0

EAutomationTestFlags __thiscall
FSlateInvalidationWidgetListTest::GetTestFlags(FSlateInvalidationWidgetListTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1425ad5c0

bool __thiscall
FSlateInvalidationWidgetListTest::IsStressTest(FSlateInvalidationWidgetListTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1425ad5d0

uint __thiscall
FSlateInvalidationWidgetListTest::GetRequiredDeviceNum(FSlateInvalidationWidgetListTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1425ad5e0

FString * __thiscall
FSlateInvalidationWidgetListTest::GetTestSourceFileName
          (FSlateInvalidationWidgetListTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateInvalidationWidgetListTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1425ad610

int __thiscall
FSlateInvalidationWidgetListTest::GetTestSourceFileLine(FSlateInvalidationWidgetListTest *this)

{
  return 0x12;
}

// GetTests @ 1425ad620

/* WARNING: Removing unreachable block (ram,0x0001425ad70d) */
/* WARNING: Removing unreachable block (ram,0x0001425ad7d8) */

void __thiscall
FSlateInvalidationWidgetListTest::GetTests
          (FSlateInvalidationWidgetListTest *this,
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
  
  ::FString::FString(&local_18,"Slate.InvalidationWidgetList.AddBuildRemove");
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

// RunTest @ 1425ad800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSlateInvalidationWidgetListTest::RunTest(FSlateInvalidationWidgetListTest *this,FString *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  TVector2<float>_u_0 TVar6;
  SVerticalBox *pSVar7;
  TVector2<float>_u_0 TVar8;
  ForAnyElementType FVar9;
  undefined8 uVar10;
  FSharedReferencer<1> FVar11;
  SVerticalBox *this_00;
  SWidget *pSVar12;
  FSlateInvalidationWidgetIndex FVar13;
  FSlateInvalidationWidgetIndex FVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  FSlateInvalidationWidgetIndex FVar18;
  FSlateInvalidationRootHandle *pFVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  TSharedRef<SWidget,1> *pTVar22;
  undefined4 extraout_var;
  FSlateInvalidationWidgetSortOrder *pFVar23;
  longlong lVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  float (*pafVar29) [2];
  undefined1 auStackY_c28 [32];
  IProcessChildOrderInvalidationCallback local_bc8;
  FSlateInvalidationWidgetListTest *local_bc0;
  ForAnyElementType local_bb8;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  ForAnyElementType local_b88;
  undefined8 local_b80;
  FSlateInvalidationWidgetIndex local_b78;
  FSlateInvalidationWidgetIndex local_b74;
  FSlateInvalidationWidgetIndex local_b70;
  FSlateInvalidationWidgetIndex local_b6c;
  FSlateInvalidationWidgetIndex local_b68 [2];
  FSlateInvalidationWidgetIndex local_b60;
  TVector2<float>_u_0 local_b58;
  TReferenceControllerBase<1> *pTStack_b50;
  FSlateInvalidationWidgetIndex local_b48;
  FSlateInvalidationWidgetIndex local_b44;
  FSlateInvalidationWidgetIndex local_b40;
  FSlateInvalidationWidgetIndex local_b3c;
  FSlateInvalidationWidgetIndex local_b38 [4];
  TSharedRef<SVerticalBox,1> local_b28;
  TSharedPtr<SVerticalBox,1> local_b18;
  TVector2<float>_u_0 local_b08;
  TVector2<float>_u_0 TStack_b00;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> local_af8;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> local_ae8;
  undefined1 local_ad8 [16];
  undefined1 local_ac8 [8];
  TVector2<float>_u_0 local_ac0;
  TVector2<float>_u_0 local_ab8 [2];
  undefined1 local_aa8 [16];
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> local_a98;
  TVector2<float>_u_0 local_a88;
  TVector2<float>_u_0 TStack_a80;
  TSharedPtr<SVerticalBox,1> local_a78;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> local_a68;
  undefined1 local_a58 [16];
  undefined1 local_a48 [16];
  undefined1 local_a38 [16];
  TSharedPtr<SVerticalBox,1> local_a28;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> local_a18;
  undefined1 local_a08 [16];
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> local_9f8;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> local_9e8;
  TSharedPtr<SVerticalBox,1> local_9d8;
  TSharedPtr<SVerticalBox,1> local_9c8;
  TSharedPtr<SVerticalBox,1> local_9b8;
  FArguments local_9a8;
  undefined1 local_998 [8];
  FSlateInvalidationWidgetSortOrder local_990;
  FSlateInvalidationWidgetSortOrder local_98c;
  FSlateInvalidationWidgetSortOrder local_988;
  FSlateInvalidationWidgetSortOrder local_984;
  FSlateInvalidationWidgetSortOrder local_980;
  FSlateInvalidationWidgetSortOrder local_97c;
  FSlateInvalidationWidgetSortOrder local_978;
  FSlateInvalidationWidgetSortOrder local_974;
  FSlateInvalidationWidgetSortOrder local_970;
  FSlateInvalidationWidgetSortOrder local_96c;
  FSlateInvalidationWidgetSortOrder local_968;
  FSlateInvalidationWidgetSortOrder local_964;
  FSlateInvalidationWidgetSortOrder local_960 [2];
  SWidget *local_958;
  FSlateInvalidationWidgetSortOrder local_950;
  FSlateInvalidationWidgetSortOrder local_94c;
  FSlateInvalidationWidgetSortOrder local_948 [4];
  TVector2<float>_u_0 local_938;
  TVector2<float>_u_0 TStack_930;
  TSharedRef<SWidget,1> local_928;
  TSharedRef<SVerticalBox,1> local_918;
  undefined1 *local_908;
  FSlateInvalidationWidgetListTest *local_900;
  FDeprecateSlateVector2D local_8f8;
  TSharedRef<SVerticalBox,1> *local_8f0;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  TSharedRef<SWidget,1> local_898;
  FString local_888;
  FLinearColor_u_0 local_878;
  FLinearColor_u_0 local_868;
  FLinearColor_u_0 local_858;
  FString local_848;
  FString local_838;
  TVector2<float>_u_0 local_828;
  TReferenceControllerBase<1> *local_820;
  TVector2<float>_u_0 local_818;
  TVector2<float>_u_0 local_810;
  float local_808 [2];
  uint5 uStack_800;
  undefined3 uStack_7fb;
  TSharedRef<SWidget,1> local_7f8;
  FString local_7e8;
  float local_7d8 [2];
  uint5 uStack_7d0;
  undefined3 uStack_7cb;
  TSharedRef<SWidget,1> local_7c8;
  FString local_7b8;
  TSharedPtr<SVerticalBox,1> local_7a8;
  TSharedRef<SWidget,1> local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  TSharedRef<SWidget,1> local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  TSharedRef<SVerticalBox,1> local_6d8;
  TSharedPtr<SVerticalBox,1> local_6c8;
  TVector2<float>_u_0 local_6b8;
  TVector2<float>_u_0 TStack_6b0;
  FString local_6a8 [2];
  undefined8 local_688;
  undefined8 local_670;
  undefined8 local_658;
  undefined8 local_640;
  undefined1 local_638 [8];
  TReferenceControllerBase<1> *local_630;
  FSlateInvalidationRootHandle local_628;
  FSlateInvalidationRootHandle local_618;
  FSlateInvalidationRootHandle local_608;
  FSlateInvalidationRootHandle local_5f8;
  undefined1 local_5e8 [8];
  TReferenceControllerBase<1> *local_5e0;
  undefined1 local_5d8 [8];
  TReferenceControllerBase<1> *local_5d0;
  undefined1 local_5c8 [8];
  TReferenceControllerBase<1> *local_5c0;
  undefined1 local_5b8 [8];
  TReferenceControllerBase<1> *local_5b0;
  FSlateInvalidationRootHandle local_5a8;
  undefined1 local_598 [8];
  TReferenceControllerBase<1> *local_590;
  undefined1 local_588 [8];
  TReferenceControllerBase<1> *local_580;
  undefined1 local_578 [8];
  TReferenceControllerBase<1> *local_570;
  undefined1 local_568 [8];
  TReferenceControllerBase<1> *local_560;
  undefined1 local_558 [8];
  TReferenceControllerBase<1> *local_550;
  undefined1 local_548 [8];
  TReferenceControllerBase<1> *local_540;
  undefined1 local_538 [8];
  TReferenceControllerBase<1> *local_530;
  undefined1 local_528 [8];
  TReferenceControllerBase<1> *local_520;
  undefined1 local_518 [8];
  TReferenceControllerBase<1> *local_510;
  undefined1 local_508 [8];
  TReferenceControllerBase<1> *local_500;
  undefined1 local_4f8 [8];
  TReferenceControllerBase<1> *local_4f0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  longlong local_4a8;
  undefined8 local_490;
  FSlateInvalidationRootHandle local_488;
  FSlateInvalidationRootHandle local_478;
  FSlateInvalidationRootHandle local_468;
  FSlateInvalidationRootHandle local_458;
  FSlateInvalidationRootHandle local_448;
  FSlateInvalidationRootHandle local_438;
  FSlateInvalidationRootHandle local_428;
  FSlateInvalidationRootHandle local_418;
  FSlateInvalidationRootHandle local_408;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [32];
  undefined1 *local_3c8;
  int local_3c0;
  uint local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  FWeakReferencer<1> local_3a8;
  FSlateInvalidationWidgetList local_378;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [32];
  void *local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  FWeakReferencer<1> local_2a8;
  undefined1 local_278 [16];
  undefined1 local_268 [32];
  void *local_248;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  FWeakReferencer<1> local_228;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [32];
  void *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  FWeakReferencer<1> local_1a8;
  undefined1 local_178 [16];
  undefined1 local_168 [32];
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  FWeakReferencer<1> local_128;
  undefined1 local_f8 [16];
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  FWeakReferencer<1> local_a8;
  float local_78;
  float fStack_74;
  TVector2<float>_u_0 TStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  float local_38 [2] [2];
  
  local_38[0][0] = (float)(__security_cookie.value ^ (ulonglong)auStackY_c28);
  local_38[0][1] = SUB84(__security_cookie.value ^ (ulonglong)auStackY_c28,4);
  local_78 = 5.60519e-45;
  pafVar29 = (float (*) [2])&local_78;
  fStack_74 = 2.8026e-45;
  TStack_70._0_4_ = 1000;
  TStack_70._4_1_ = 1;
  local_68 = 4;
  local_64 = 3;
  local_60 = 1000;
  local_5c = 1;
  local_58 = 5;
  local_54 = 1;
  local_50 = 1000;
  local_4c = 1;
  local_48 = 6;
  local_44 = 1;
  local_40 = 1000;
  local_3c = 1;
  local_958 = (SWidget *)this;
  do {
    local_aa8._0_8_ = *pafVar29;
    local_aa8._8_8_ = *(TVector2<float>_u_0 *)(pafVar29 + 1);
    local_ac8 = (undefined1  [8])0x0;
    local_ac0 = (TVector2<float>_u_0)0x0;
    local_ad8._0_8_ = (TSharedPtr<SWidget,1> *)0x0;
    local_ad8._8_8_ = (FDeprecateSlateVector2D)0x0;
    local_a98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a98.ArrayNum = 0;
    local_a98.ArrayMax = 0;
    local_a28.Object = (SVerticalBox *)0x0;
    local_a28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_af8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a38._0_8_ = (SVerticalBox *)0x0;
    local_a38._8_8_ = (TReferenceControllerBase<1> *)0x0;
    local_af8.ArrayNum = 0;
    local_af8.ArrayMax = 0;
    local_a48._0_8_ = (SVerticalBox *)0x0;
    local_a48._8_8_ = (TReferenceControllerBase<1> *)0x0;
    local_ae8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a58._0_8_ = (SVerticalBox *)0x0;
    local_a58._8_8_ = (TReferenceControllerBase<1> *)0x0;
    local_ae8.ArrayNum = 0;
    local_ae8.ArrayMax = 0;
    local_9d8.Object = (SVerticalBox *)0x0;
    local_9d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    UE::Slate::Private::BuildTestUI_Child
              ((TSharedRef<SVerticalBox,1> *)&local_938._s_0,&local_a28,
               (TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *)local_ac8,
               (TSharedPtr<SVerticalBox,1> *)local_a38,
               (TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *)local_ad8,
               (TSharedPtr<SVerticalBox,1> *)local_a48,&local_a98,
               (TSharedPtr<SVerticalBox,1> *)local_a58,&local_af8,&local_9d8,&local_ae8);
    pFVar19 = FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_408);
    local_488.InvalidationRoot = pFVar19->InvalidationRoot;
    local_488.UniqueId = pFVar19->UniqueId;
    local_488._12_4_ = *(undefined4 *)&pFVar19->field_0xc;
    FSlateInvalidationWidgetList::FSlateInvalidationWidgetList
              ((FSlateInvalidationWidgetList *)local_2f8,&local_488,(FArguments *)local_aa8);
    local_6b8 = local_938;
    TStack_6b0 = TStack_930;
    if (TStack_930 != (TVector2<float>_u_0)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)TStack_930 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)TStack_930 + 8) + 1);
      UNLOCK();
    }
    FSlateInvalidationWidgetList::BuildWidgetList
              ((FSlateInvalidationWidgetList *)local_2f8,(TSharedRef<SWidget,1> *)&local_6b8._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TStack_6b0);
    pcVar4 = *(code **)(*(longlong *)this + 0x30);
    ::FString::FString(local_6a8,L"The widget list integrity has failed.");
    bVar15 = FSlateInvalidationWidgetList::VerifyWidgetsIndex
                       ((FSlateInvalidationWidgetList *)local_2f8);
    (*pcVar4)(this,bVar15,local_6a8,0);
    if (local_6a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8[0].Data.AllocatorInstance.Data);
    }
    pSVar7 = local_a28.Object;
    if (local_a28.Object == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    FVar11.ReferenceController = local_a28.SharedReferenceCount.ReferenceController;
    if (local_a28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar7 == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    FSlateInvalidationWidgetList::FindChildren
              ((FSlateInvalidationWidgetList *)local_2f8,
               (TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *)local_a08,
               (SWidget *)pSVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
    if (local_ac0._s_0.X == (float)local_a08._8_4_) {
      bVar15 = CompareItems<TSharedPtr<SWidget,1>,int>
                         ((TSharedPtr<SWidget,1> *)local_ac8,
                          (TSharedPtr<SWidget,1> *)local_a08._0_8_,(int)local_ac0._s_0.X);
      if (!bVar15) goto LAB_1425adb24;
    }
    else {
LAB_1425adb24:
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_8e8,L"Was not able to find the child of VerticalBox A.");
      (*pcVar4)(this,&local_8e8,0);
      if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_a08._0_8_,local_a08._8_4_);
    if ((TSharedPtr<SWidget,1> *)local_a08._0_8_ != (TSharedPtr<SWidget,1> *)0x0) {
      FMemory::Free((void *)local_a08._0_8_);
    }
    uVar25 = local_a38._0_8_;
    if ((SVerticalBox *)local_a38._0_8_ == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    uVar10 = local_a38._8_8_;
    if ((TReferenceControllerBase<1> *)local_a38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a38._8_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a38._8_8_ + 8) + 1);
      UNLOCK();
    }
    if ((SVerticalBox *)uVar25 == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    FSlateInvalidationWidgetList::FindChildren
              ((FSlateInvalidationWidgetList *)local_2f8,&local_9f8,(SWidget *)uVar25);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)uVar10);
    if (local_ad8._8_4_ == local_9f8.ArrayNum) {
      bVar15 = CompareItems<TSharedPtr<SWidget,1>,int>
                         ((TSharedPtr<SWidget,1> *)local_ad8._0_8_,
                          (TSharedPtr<SWidget,1> *)local_9f8.AllocatorInstance.Data,local_ad8._8_4_)
      ;
      if (!bVar15) goto LAB_1425adc34;
    }
    else {
LAB_1425adc34:
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_8d8,L"Was not able to find the child of VerticalBox B.");
      (*pcVar4)(this,&local_8d8,0);
      if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_9f8.AllocatorInstance.Data,local_9f8.ArrayNum);
    if ((TSharedPtr<SWidget,1> *)local_9f8.AllocatorInstance.Data != (TSharedPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_9f8.AllocatorInstance.Data);
    }
    uVar25 = local_a48._0_8_;
    if ((SVerticalBox *)local_a48._0_8_ == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    uVar10 = local_a48._8_8_;
    if ((TReferenceControllerBase<1> *)local_a48._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a48._8_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a48._8_8_ + 8) + 1);
      UNLOCK();
    }
    if ((SVerticalBox *)uVar25 == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    FSlateInvalidationWidgetList::FindChildren
              ((FSlateInvalidationWidgetList *)local_2f8,&local_9e8,(SWidget *)uVar25);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)uVar10);
    if (local_a98.ArrayNum == local_9e8.ArrayNum) {
      bVar15 = CompareItems<TSharedPtr<SWidget,1>,int>
                         ((TSharedPtr<SWidget,1> *)local_a98.AllocatorInstance.Data,
                          (TSharedPtr<SWidget,1> *)local_9e8.AllocatorInstance.Data,
                          local_a98.ArrayNum);
      if (!bVar15) goto LAB_1425add4a;
    }
    else {
LAB_1425add4a:
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_8c8,L"Was not able to find the child of VerticalBox C.");
      (*pcVar4)(this,&local_8c8,0);
      if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_9e8.AllocatorInstance.Data,local_9e8.ArrayNum);
    if ((TSharedPtr<SWidget,1> *)local_9e8.AllocatorInstance.Data != (TSharedPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_9e8.AllocatorInstance.Data);
    }
    uVar25 = local_a58._0_8_;
    if ((SVerticalBox *)local_a58._0_8_ == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    uVar10 = local_a58._8_8_;
    if ((TReferenceControllerBase<1> *)local_a58._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a58._8_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a58._8_8_ + 8) + 1);
      UNLOCK();
    }
    if ((SVerticalBox *)uVar25 == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    FSlateInvalidationWidgetList::FindChildren
              ((FSlateInvalidationWidgetList *)local_2f8,&local_a18,(SWidget *)uVar25);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)uVar10);
    if (local_af8.ArrayNum == local_a18.ArrayNum) {
      bVar15 = CompareItems<TSharedPtr<SWidget,1>,int>
                         ((TSharedPtr<SWidget,1> *)local_af8.AllocatorInstance.Data,
                          (TSharedPtr<SWidget,1> *)local_a18.AllocatorInstance.Data,
                          local_af8.ArrayNum);
      if (!bVar15) goto LAB_1425ade5a;
    }
    else {
LAB_1425ade5a:
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_8b8,L"Was not able to find the child of VerticalBox D.");
      (*pcVar4)(this,&local_8b8,0);
      if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_a18.AllocatorInstance.Data,local_a18.ArrayNum);
    if ((TSharedPtr<SWidget,1> *)local_a18.AllocatorInstance.Data != (TSharedPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_a18.AllocatorInstance.Data);
    }
    pSVar7 = local_9d8.Object;
    if (local_9d8.Object == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    FVar11.ReferenceController = local_9d8.SharedReferenceCount.ReferenceController;
    if (local_9d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_9d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_9d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar7 == (SVerticalBox *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    FSlateInvalidationWidgetList::FindChildren
              ((FSlateInvalidationWidgetList *)local_2f8,&local_a68,(SWidget *)pSVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
    if (local_ae8.ArrayNum == local_a68.ArrayNum) {
      bVar15 = CompareItems<TSharedPtr<SWidget,1>,int>
                         ((TSharedPtr<SWidget,1> *)local_ae8.AllocatorInstance.Data,
                          (TSharedPtr<SWidget,1> *)local_a68.AllocatorInstance.Data,
                          local_ae8.ArrayNum);
      if (!bVar15) goto LAB_1425adf74;
    }
    else {
LAB_1425adf74:
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_8a8,L"Was not able to find the child of VerticalBox H.");
      (*pcVar4)(this,&local_8a8,0);
      if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_a68.AllocatorInstance.Data,local_a68.ArrayNum);
    if ((TSharedPtr<SWidget,1> *)local_a68.AllocatorInstance.Data != (TSharedPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_a68.AllocatorInstance.Data);
    }
    if (local_2a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2a8.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_2a8.ReferenceController)->_padding_ + 8))();
      }
    }
    TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
    DestroyElements((TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>
                     *)local_2e8,0,local_2e8._8_4_);
    local_2e8._8_4_ = 0;
    if (local_2e8._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)local_2e8,0,(int *)(local_2e8 + 0xc));
    }
    local_2b8 = 0xffffffff;
    local_2b4 = 0;
    local_2c0 = 0;
    if (0x80 < local_2bc) {
      local_2bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10),0);
    }
    if (local_2c8 != (void *)0x0) {
      FMemory::Free(local_2c8);
    }
    if ((FScriptContainerElement *)local_2e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2e8._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TStack_930);
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_ae8.AllocatorInstance.Data,local_ae8.ArrayNum);
    if ((TSharedPtr<SWidget,1> *)local_ae8.AllocatorInstance.Data != (TSharedPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_ae8.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_af8.AllocatorInstance.Data,local_af8.ArrayNum);
    if ((TSharedPtr<SWidget,1> *)local_af8.AllocatorInstance.Data != (TSharedPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_af8.AllocatorInstance.Data);
    }
    FVar9.Data = local_a98.AllocatorInstance.Data;
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_a98.AllocatorInstance.Data,local_a98.ArrayNum);
    if ((TSharedPtr<SWidget,1> *)FVar9.Data != (TSharedPtr<SWidget,1> *)0x0) {
      FMemory::Free(FVar9.Data);
    }
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_ad8._0_8_,local_ad8._8_4_);
    if ((TSharedPtr<SWidget,1> *)local_ad8._0_8_ != (TSharedPtr<SWidget,1> *)0x0) {
      FMemory::Free((void *)local_ad8._0_8_);
    }
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)local_ac8,(int)local_ac0._s_0.X);
    if (local_ac8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_ac8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a58._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a48._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a38._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a28.SharedReferenceCount.ReferenceController);
    local_b08 = (TVector2<float>_u_0)0x0;
    TStack_b00 = (TVector2<float>_u_0)0x0;
    local_7a8.Object = (SVerticalBox *)0x0;
    local_7a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_b58 = (TVector2<float>_u_0)0x0;
    pTStack_b50 = (TReferenceControllerBase<1> *)0x0;
    UE::Slate::Private::BuildTestUI_ChildOrder
              (&local_b28,(TSharedPtr<SVerticalBox,1> *)&local_b08._s_0,&local_7a8,
               (TSharedPtr<SVerticalBox,1> *)&local_b58._s_0);
    pFVar19 = FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_418);
    local_478.InvalidationRoot = pFVar19->InvalidationRoot;
    local_478.UniqueId = pFVar19->UniqueId;
    local_478._12_4_ = *(undefined4 *)&pFVar19->field_0xc;
    FSlateInvalidationWidgetList::FSlateInvalidationWidgetList
              ((FSlateInvalidationWidgetList *)local_3f8,&local_478,(FArguments *)local_aa8);
    local_898.Object = (SWidget *)local_b28.Object;
    local_898.SharedReferenceCount.ReferenceController =
         local_b28.SharedReferenceCount.ReferenceController;
    if ((FName)local_b28.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_b28.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)((longlong)local_b28.SharedReferenceCount.ReferenceController + 8)
           + 1);
      UNLOCK();
    }
    FSlateInvalidationWidgetList::BuildWidgetList
              ((FSlateInvalidationWidgetList *)local_3f8,&local_898);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_898.SharedReferenceCount.ReferenceController);
    pcVar4 = *(code **)(*(longlong *)this + 0x30);
    ::FString::FString(&local_888,L"The widget list integrity has failed.");
    bVar15 = FSlateInvalidationWidgetList::VerifyWidgetsIndex
                       ((FSlateInvalidationWidgetList *)local_3f8);
    (*pcVar4)(this,bVar15,&local_888,0);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
    if (local_b58 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    TVar6 = local_b58;
    plVar20 = (longlong *)(**(code **)(*(longlong *)local_b58 + 0x188))(local_b58);
    puVar21 = (undefined8 *)(**(code **)(*plVar20 + 0x10))(plVar20,local_4f8,1);
    FSlateInvalidationWidgetList::RemoveWidget
              ((FSlateInvalidationWidgetList *)local_3f8,(SWidget *)*puVar21);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4f0);
    if (TVar6 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    TVar6 = local_b58;
    if (local_b58 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    plVar20 = (longlong *)(**(code **)(*(longlong *)local_b58 + 0x188))(local_b58);
    pTVar22 = (TSharedRef<SWidget,1> *)(**(code **)(*plVar20 + 0x10))(plVar20,local_638,1);
    SBoxPanel::RemoveSlot((SBoxPanel *)TVar6,pTVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_630);
    local_878._0_8_ = local_aa8._0_8_;
    local_878._13_3_ = SUB83(local_aa8._8_8_,5);
    local_878._s_0.B = (float)local_aa8._8_8_;
    local_878._12_1_ = 0;
    pFVar19 = FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_428);
    local_628.InvalidationRoot = pFVar19->InvalidationRoot;
    local_628.UniqueId = pFVar19->UniqueId;
    local_628._12_4_ = *(undefined4 *)&pFVar19->field_0xc;
    FSlateInvalidationWidgetList::FSlateInvalidationWidgetList
              ((FSlateInvalidationWidgetList *)local_1f8,&local_628,(FArguments *)&local_878._s_0);
    local_868._0_8_ = local_b28.Object;
    local_868._8_8_ = local_b28.SharedReferenceCount.ReferenceController;
    if ((FName)local_b28.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_b28.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)((longlong)local_b28.SharedReferenceCount.ReferenceController + 8)
           + 1);
      UNLOCK();
    }
    FSlateInvalidationWidgetList::BuildWidgetList
              ((FSlateInvalidationWidgetList *)local_1f8,(TSharedRef<SWidget,1> *)&local_868._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_868._8_8_);
    bVar15 = FSlateInvalidationWidgetList::DeepCompare
                       ((FSlateInvalidationWidgetList *)local_1f8,
                        (FSlateInvalidationWidgetList *)local_3f8);
    if (!bVar15) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString((FString *)&local_858._s_0,L"Was not able to remove a child of F.");
      (*pcVar4)(this,&local_858,0);
      if ((void *)local_858._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_858._0_8_);
      }
    }
    if (local_1a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1a8.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_1a8.ReferenceController)->_padding_ + 8))();
      }
    }
    TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
    DestroyElements((TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>
                     *)local_1e8,0,local_1e8._8_4_);
    local_1e8._8_4_ = 0;
    if (local_1e8._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)local_1e8,0,(int *)(local_1e8 + 0xc));
    }
    local_1b8 = 0xffffffff;
    local_1b4 = 0;
    local_1c0 = 0;
    if (0x80 < local_1bc) {
      local_1bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10),0);
    }
    if (local_1c8 != (void *)0x0) {
      FMemory::Free(local_1c8);
    }
    if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1e8._0_8_);
    }
    if (local_b58 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    pTVar5 = pTStack_b50;
    if (pTStack_b50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_b50->SharedReferenceCount = (atomic<int>)((int)pTStack_b50->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_b58 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    FSlateInvalidationWidgetList::FindWidget
              ((FSlateInvalidationWidgetList *)local_3f8,(SWidget *)&local_b70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    uVar25 = local_3e8._0_8_;
    local_b60 = local_b70;
    FVar18 = local_b60;
    if ((int)((uint)local_b70 & 0xffff) < local_3c0) {
      puVar28 = local_3e8 + 0x10;
      if (local_3c8 != (undefined1 *)0x0) {
        puVar28 = local_3c8;
      }
      if ((*(uint *)(puVar28 + (ulonglong)(((uint)local_b70 & 0xffff) >> 5) * 4) >>
           ((uint)local_b70 & 0x1f) & 1) == 0) goto LAB_1425ae651;
      local_b60.ElementIndex = local_b70.ElementIndex;
      lVar24 = (ulonglong)((uint)local_b70 & 0xffff) * 0x40;
      if ((local_b60.ElementIndex < *(ushort *)(local_3e8._0_8_ + lVar24 + 0xc)) ||
         (*(int *)(local_3e8._0_8_ + lVar24 + 0x18) <= (int)(uint)local_b60.ElementIndex))
      goto LAB_1425ae651;
      uVar26 = (uint)local_b70 & 0xffff;
      uVar27 = (uint)local_b70 >> 0x10;
      local_b60 = FVar18;
      if (*(int *)(local_3e8._0_8_ + (ulonglong)uVar26 * 0x40 + 0x18) <= (int)uVar27) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          uVar16 = (*pcVar4)();
          return (bool)uVar16;
        }
      }
      FVar18 = local_b60;
      if (*(TVector2<float>_u_0 *)
           (*(longlong *)(uVar25 + (ulonglong)uVar26 * 0x40 + 0x10) + (ulonglong)uVar27 * 0x18) !=
          local_b58) goto LAB_1425ae651;
    }
    else {
LAB_1425ae651:
      local_b60 = FVar18;
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_848,L"The index of F is not valid anymore.");
      (*pcVar4)(this,&local_848,0);
      if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_848.Data.AllocatorInstance.Data);
      }
    }
    FSlateInvalidationWidgetList::RemoveWidget((FSlateInvalidationWidgetList *)local_3f8,local_b70);
    if (local_b08 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    TVar6 = TStack_b00;
    if (TStack_b00 != (TVector2<float>_u_0)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)TStack_b00 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)TStack_b00 + 8) + 1);
      UNLOCK();
    }
    if (local_b08 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    FSlateInvalidationWidgetList::FindWidget
              ((FSlateInvalidationWidgetList *)local_3f8,(SWidget *)&local_b6c);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar6);
    uVar25 = local_3e8._0_8_;
    local_b60 = local_b6c;
    FVar18 = local_b60;
    if ((int)((uint)local_b6c & 0xffff) < local_3c0) {
      puVar28 = local_3e8 + 0x10;
      if (local_3c8 != (undefined1 *)0x0) {
        puVar28 = local_3c8;
      }
      if ((*(uint *)(puVar28 + (ulonglong)(((uint)local_b6c & 0xffff) >> 5) * 4) >>
           ((uint)local_b6c & 0x1f) & 1) == 0) goto LAB_1425ae7de;
      local_b60.ElementIndex = local_b6c.ElementIndex;
      lVar24 = (ulonglong)((uint)local_b6c & 0xffff) * 0x40;
      if ((local_b60.ElementIndex < *(ushort *)(local_3e8._0_8_ + lVar24 + 0xc)) ||
         (*(int *)(local_3e8._0_8_ + lVar24 + 0x18) <= (int)(uint)local_b60.ElementIndex))
      goto LAB_1425ae7de;
      uVar26 = (uint)local_b6c & 0xffff;
      uVar27 = (uint)local_b6c >> 0x10;
      local_b60 = FVar18;
      if (*(int *)(local_3e8._0_8_ + (ulonglong)uVar26 * 0x40 + 0x18) <= (int)uVar27) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          uVar16 = (*pcVar4)();
          return (bool)uVar16;
        }
      }
      FVar18 = local_b60;
      if (*(TVector2<float>_u_0 *)
           (*(longlong *)(uVar25 + (ulonglong)uVar26 * 0x40 + 0x10) + (ulonglong)uVar27 * 0x18) !=
          local_b08) goto LAB_1425ae7de;
    }
    else {
LAB_1425ae7de:
      local_b60 = FVar18;
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_838,L"The index of C is not valid anymore.");
      (*pcVar4)(this,&local_838,0);
      if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_838.Data.AllocatorInstance.Data);
      }
    }
    FSlateInvalidationWidgetList::RemoveWidget((FSlateInvalidationWidgetList *)local_3f8,local_b6c);
    pSVar7 = local_b28.Object;
    if (local_b58 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    pTVar5 = pTStack_b50;
    TVar6 = local_b58;
    if (pTStack_b50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_b50->SharedReferenceCount = (atomic<int>)((int)pTStack_b50->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_b58 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    local_828 = TVar6;
    local_820 = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SBoxPanel::RemoveSlot((SBoxPanel *)pSVar7,(TSharedRef<SWidget,1> *)&local_828._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pSVar7 = local_b28.Object;
    if (local_b08 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    TVar8 = TStack_b00;
    TVar6 = local_b08;
    if (TStack_b00 != (TVector2<float>_u_0)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)TStack_b00 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)TStack_b00 + 8) + 1);
      UNLOCK();
    }
    if (local_b08 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    local_818 = TVar6;
    local_810 = TVar8;
    if (TVar8 != (TVector2<float>_u_0)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)TVar8 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)TVar8 + 8) + 1);
      UNLOCK();
    }
    SBoxPanel::RemoveSlot((SBoxPanel *)pSVar7,(TSharedRef<SWidget,1> *)&local_818._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8);
    local_808[0] = (float)local_aa8._0_4_;
    local_808[1] = (float)local_aa8._4_4_;
    uStack_7fb = SUB83(local_aa8._8_8_,5);
    uStack_800._0_4_ = (float)local_aa8._8_8_;
    uStack_800._4_1_ = false;
    pFVar19 = FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_468);
    local_618.InvalidationRoot = pFVar19->InvalidationRoot;
    local_618.UniqueId = pFVar19->UniqueId;
    local_618._12_4_ = *(undefined4 *)&pFVar19->field_0xc;
    FSlateInvalidationWidgetList::FSlateInvalidationWidgetList
              ((FSlateInvalidationWidgetList *)local_178,&local_618,(FArguments *)local_808);
    local_7f8.Object = (SWidget *)local_b28.Object;
    local_7f8.SharedReferenceCount.ReferenceController =
         local_b28.SharedReferenceCount.ReferenceController;
    if ((FName)local_b28.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_b28.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)((longlong)local_b28.SharedReferenceCount.ReferenceController + 8)
           + 1);
      UNLOCK();
    }
    FSlateInvalidationWidgetList::BuildWidgetList
              ((FSlateInvalidationWidgetList *)local_178,&local_7f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f8.SharedReferenceCount.ReferenceController);
    bVar15 = FSlateInvalidationWidgetList::DeepCompare
                       ((FSlateInvalidationWidgetList *)local_178,
                        (FSlateInvalidationWidgetList *)local_3f8);
    if (!bVar15) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_7e8,L"Was not able to remove F and C.");
      (*pcVar4)(this,&local_7e8,0);
      if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
      }
    }
    if (local_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_128.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_128.ReferenceController)->_padding_ + 8))();
      }
    }
    TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
    DestroyElements((TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>
                     *)local_168,0,local_168._8_4_);
    local_168._8_4_ = 0;
    if (local_168._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
    }
    local_138 = 0xffffffff;
    local_134 = 0;
    local_140 = 0;
    if (0x80 < local_13c) {
      local_13c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
    if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._0_8_);
    }
    puVar21 = (undefined8 *)(**(code **)(*(longlong *)&(local_b28.Object)->field_0x0 + 0x188))();
    iVar17 = (**(code **)*puVar21)(puVar21);
    plVar20 = (longlong *)(**(code **)(*(longlong *)&(local_b28.Object)->field_0x0 + 0x188))();
    (**(code **)(*plVar20 + 0x10))(plVar20,&local_928,iVar17 + -1);
    SBoxPanel::RemoveSlot((SBoxPanel *)local_b28.Object,&local_928);
    FVar18 = FSlateInvalidationWidgetList::FindWidget
                       ((FSlateInvalidationWidgetList *)local_3f8,(SWidget *)local_998);
    FSlateInvalidationWidgetList::RemoveWidget
              ((FSlateInvalidationWidgetList *)local_3f8,
               *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar18));
    local_7d8[0] = (float)local_aa8._0_4_;
    local_7d8[1] = (float)local_aa8._4_4_;
    uStack_7cb = SUB83(local_aa8._8_8_,5);
    uStack_7d0 = (uint5)(uint)(float)local_aa8._8_8_;
    pFVar19 = FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_458);
    local_608.InvalidationRoot = pFVar19->InvalidationRoot;
    local_608.UniqueId = pFVar19->UniqueId;
    local_608._12_4_ = *(undefined4 *)&pFVar19->field_0xc;
    FSlateInvalidationWidgetList::FSlateInvalidationWidgetList
              ((FSlateInvalidationWidgetList *)local_f8,&local_608,(FArguments *)local_7d8);
    local_7c8.Object = (SWidget *)local_b28.Object;
    local_7c8.SharedReferenceCount.ReferenceController =
         local_b28.SharedReferenceCount.ReferenceController;
    if ((FName)local_b28.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_b28.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)((longlong)local_b28.SharedReferenceCount.ReferenceController + 8)
           + 1);
      UNLOCK();
    }
    FSlateInvalidationWidgetList::BuildWidgetList
              ((FSlateInvalidationWidgetList *)local_f8,&local_7c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7c8.SharedReferenceCount.ReferenceController);
    bVar15 = FSlateInvalidationWidgetList::DeepCompare
                       ((FSlateInvalidationWidgetList *)local_f8,
                        (FSlateInvalidationWidgetList *)local_3f8);
    if (!bVar15) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_7b8,L"Was not able to remove the last item of A.");
      (*pcVar4)(this,&local_7b8,0);
      if ((FName)local_7b8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_a8.ReferenceController)->_padding_ + 8))();
      }
    }
    TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
    DestroyElements((TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>
                     *)local_e8,0,local_e8._8_4_);
    local_e8._8_4_ = 0;
    if (local_e8._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
    }
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_c0 = 0;
    if (0x80 < local_bc) {
      local_bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_928.SharedReferenceCount.ReferenceController);
    if (local_3a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_3a8.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_3a8.ReferenceController)->_padding_ + 8))();
      }
    }
    TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
    DestroyElements((TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>
                     *)local_3e8,0,local_3e8._8_4_);
    local_3e8._8_4_ = 0;
    if (local_3e8._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)local_3e8,0,(int *)(local_3e8 + 0xc));
    }
    local_3b8 = 0xffffffff;
    local_3b4 = 0;
    local_3c0 = 0;
    if (0x80 < local_3bc) {
      local_3bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_3e8 + 0x10),0);
    }
    if (local_3c8 != (undefined1 *)0x0) {
      FMemory::Free(local_3c8);
    }
    if ((FScriptContainerElement *)local_3e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3e8._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b50)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TStack_b00);
    local_b18.Object = (SVerticalBox *)0x0;
    local_b18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a88 = (TVector2<float>_u_0)0x0;
    TStack_a80 = (TVector2<float>_u_0)0x0;
    local_a78.Object = (SVerticalBox *)0x0;
    local_a78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    UE::Slate::Private::BuildTestUI_ChildOrder
              (&local_918,&local_b18,(TSharedPtr<SVerticalBox,1> *)&local_a88._s_0,&local_a78);
    pFVar19 = FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_448);
    local_5f8.InvalidationRoot = pFVar19->InvalidationRoot;
    local_5f8.UniqueId = pFVar19->UniqueId;
    local_5f8._12_4_ = *(undefined4 *)&pFVar19->field_0xc;
    FSlateInvalidationWidgetList::FSlateInvalidationWidgetList
              ((FSlateInvalidationWidgetList *)local_278,&local_5f8,(FArguments *)local_aa8);
    local_798.Object = (SWidget *)local_918.Object;
    local_798.SharedReferenceCount.ReferenceController =
         local_918.SharedReferenceCount.ReferenceController;
    if (local_918.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_918.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_918.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateInvalidationWidgetList::BuildWidgetList
              ((FSlateInvalidationWidgetList *)local_278,&local_798);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_798.SharedReferenceCount.ReferenceController);
    pcVar4 = *(code **)(*(longlong *)this + 0x30);
    ::FString::FString(&local_788,L"The widget list integrity has failed.");
    bVar15 = FSlateInvalidationWidgetList::VerifyWidgetsIndex
                       ((FSlateInvalidationWidgetList *)local_278);
    (*pcVar4)(this,bVar15,&local_788,0);
    if ((TStatIdData *)local_788.Data.AllocatorInstance.Data != (TStatIdData *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
    }
    pSVar7 = local_a78.Object;
    local_908 = local_278;
    local_8f8 = (FDeprecateSlateVector2D)local_aa8;
    local_8f0 = &local_918;
    local_900 = this;
    if ((float  [2])local_a78.Object == (float  [2])0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    if ((float  [2])pSVar7 == (float  [2])0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    plVar20 = (longlong *)(**(code **)(*(longlong *)pSVar7 + 0x188))(pSVar7);
    pTVar22 = (TSharedRef<SWidget,1> *)(**(code **)(*plVar20 + 0x10))(plVar20,local_5e8,0);
    SBoxPanel::RemoveSlot((SBoxPanel *)pSVar7,pTVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5e0);
    bVar15 = `FSlateInvalidationWidgetListTest::RunTest'::__l52::<lambda_1>::operator()
                       (&local_908,&local_a78,L"F");
    pcVar4 = *(code **)(*(longlong *)this + 0x30);
    ::FString::FString(&local_778,L"F has to removed 1 widget");
    (*pcVar4)(this,bVar15,&local_778,0);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
    TVar6 = local_a88;
    if (local_a88 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    if (TVar6 == (TVector2<float>_u_0)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    plVar20 = (longlong *)(**(code **)(*(longlong *)TVar6 + 0x188))(TVar6);
    pTVar22 = (TSharedRef<SWidget,1> *)(**(code **)(*plVar20 + 0x10))(plVar20,local_5d8,1);
    SBoxPanel::RemoveSlot((SBoxPanel *)TVar6,pTVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5d0);
    bVar15 = `FSlateInvalidationWidgetListTest::RunTest'::__l52::<lambda_1>::operator()
                       (&local_908,(TSharedPtr<SVerticalBox,1> *)&local_a88._s_0,L"E");
    pcVar4 = *(code **)(*(longlong *)this + 0x30);
    ::FString::FString(&local_768,L"E has to removed 1 widget");
    (*pcVar4)(this,bVar15,&local_768,0);
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
    pSVar7 = local_b18.Object;
    if ((SBoxPanel *)local_b18.Object == (SBoxPanel *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    if ((SBoxPanel *)pSVar7 == (SBoxPanel *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    plVar20 = (longlong *)(**(code **)(*(longlong *)&pSVar7->field_0x0 + 0x188))(pSVar7);
    pTVar22 = (TSharedRef<SWidget,1> *)(**(code **)(*plVar20 + 0x10))(plVar20,local_5c8,1);
    SBoxPanel::RemoveSlot((SBoxPanel *)pSVar7,pTVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5c0);
    if ((SBoxPanel *)pSVar7 == (SBoxPanel *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    if ((SBoxPanel *)pSVar7 == (SBoxPanel *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
    }
    plVar20 = (longlong *)(**(code **)(*(longlong *)&pSVar7->field_0x0 + 0x188))(pSVar7);
    pTVar22 = (TSharedRef<SWidget,1> *)(**(code **)(*plVar20 + 0x10))(plVar20,local_5b8,1);
    SBoxPanel::RemoveSlot((SBoxPanel *)pSVar7,pTVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5b0);
    bVar15 = `FSlateInvalidationWidgetListTest::RunTest'::__l52::<lambda_1>::operator()
                       (&local_908,&local_b18,L"C");
    pcVar4 = *(code **)(*(longlong *)this + 0x30);
    ::FString::FString(&local_758,L"C has to removed 2 widget");
    (*pcVar4)(this,bVar15,&local_758,0);
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
    `FSlateInvalidationWidgetListTest::RunTest'::__l52::<lambda_1>::operator()
              (&local_908,&local_b18,L"C");
    pcVar4 = *(code **)(*(longlong *)this + 0x30);
    ::FString::FString(&local_748,L"C no widget was removed");
    (*pcVar4)(this,1,&local_748,0);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
    if (local_228.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_228.ReferenceController)->_padding_ + 8))();
      }
    }
    TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
    DestroyElements((TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>
                     *)local_268,0,local_268._8_4_);
    local_268._8_4_ = 0;
    if (local_268._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)local_268,0,(int *)(local_268 + 0xc));
    }
    local_238 = 0xffffffff;
    local_234 = 0;
    local_240 = 0;
    if (0x80 < local_23c) {
      local_23c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10),0);
    }
    if (local_248 != (void *)0x0) {
      FMemory::Free(local_248);
    }
    if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_268._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_918.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TStack_a80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b18.SharedReferenceCount.ReferenceController);
    pafVar29 = pafVar29 + 2;
    if (pafVar29 == local_38) {
      local_9b8.Object = (SVerticalBox *)0x0;
      local_9b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_6c8.Object = (SVerticalBox *)0x0;
      local_6c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_9c8.Object = (SVerticalBox *)0x0;
      local_9c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      UE::Slate::Private::BuildTestUI_ChildOrder(&local_6d8,&local_9b8,&local_6c8,&local_9c8);
      local_9a8.PreferedElementsNum = 4;
      local_9a8.NumberElementsLeftBeforeSplitting = 2;
      local_9a8.SortOrderPaddingBetweenArray = 1000;
      local_9a8.bAssignedWidgetIndex = true;
      pFVar19 = FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_438);
      local_5a8.InvalidationRoot = pFVar19->InvalidationRoot;
      local_5a8.UniqueId = pFVar19->UniqueId;
      local_5a8._12_4_ = *(undefined4 *)&pFVar19->field_0xc;
      FSlateInvalidationWidgetList::FSlateInvalidationWidgetList(&local_378,&local_5a8,&local_9a8);
      local_738.Object = (SWidget *)local_6d8.Object;
      local_738.SharedReferenceCount.ReferenceController =
           local_6d8.SharedReferenceCount.ReferenceController;
      if (local_6d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateInvalidationWidgetList::BuildWidgetList(&local_378,&local_738);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_738.SharedReferenceCount.ReferenceController);
      pcVar4 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_728,L"The widget list integrity has failed.");
      bVar15 = FSlateInvalidationWidgetList::VerifyWidgetsIndex(&local_378);
      (*pcVar4)(this,bVar15,&local_728,0);
      if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Data.AllocatorInstance.Data);
      }
      pSVar7 = local_9b8.Object;
      local_bc8 = (IProcessChildOrderInvalidationCallback)
                  &`FSlateInvalidationWidgetListTest::RunTest'::`58'::
                   FChildOrderInvalidationCallback_RemoveG::_vftable_;
      local_bb8.Data = (FScriptContainerElement *)0x0;
      local_bb0 = 0;
      local_ba8 = 0;
      local_ba0 = 0;
      local_b98 = 0;
      local_b90 = 0;
      local_b88.Data = (FScriptContainerElement *)0x0;
      local_b80 = 0;
      local_bc0 = this;
      if (local_9b8.Object == (SVerticalBox *)0x0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          uVar16 = (*pcVar4)();
          return (bool)uVar16;
        }
      }
      this_00 = local_9c8.Object;
      local_4d0 = *(undefined8 *)((longlong)pSVar7 + 0x18);
      uStack_4c8 = *(undefined8 *)((longlong)pSVar7 + 0x20);
      local_4c0 = *(undefined8 *)((longlong)pSVar7 + 0x28);
      if ((SBoxPanel *)local_9c8.Object == (SBoxPanel *)0x0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          uVar16 = (*pcVar4)();
          return (bool)uVar16;
        }
      }
      local_4a8 = *(longlong *)&this_00->field_0x28;
      plVar20 = (longlong *)(**(code **)(*(longlong *)&this_00->field_0x0 + 0x188))(this_00);
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x10))(plVar20,local_598,0);
      local_640 = *(undefined8 *)(*plVar20 + 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_590)
      ;
      FSlateInvalidationWidgetList::IncrementIndex(&local_378,SUB84(&local_b78,0));
      pcVar4 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_718,L"Index of 11 is not identical.");
      plVar20 = (longlong *)(**(code **)(*(longlong *)&this_00->field_0x0 + 0x188))(this_00);
      puVar21 = (undefined8 *)(**(code **)(*plVar20 + 0x10))(plVar20,local_578,0);
      pTVar5 = (TReferenceControllerBase<1> *)puVar21[1];
      plVar20 = (longlong *)*puVar21;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x188))();
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x10))(plVar20,local_588,0);
      local_688 = *(undefined8 *)(*plVar20 + 0x28);
      if ((local_b78.ArrayIndex == (ushort)local_688) &&
         (local_b78.ElementIndex == (ushort)((ulonglong)local_688 >> 0x10))) {
        uVar25 = 1;
      }
      else {
        uVar25 = 0;
      }
      (*pcVar4)(this,uVar25,&local_718,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_580)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_570)
      ;
      if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_718.Data.AllocatorInstance.Data);
      }
      FSlateInvalidationWidgetList::IncrementIndex(&local_378,SUB84(local_b68,0));
      pcVar4 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_708,L"Index of 12 is not identical.");
      plVar20 = (longlong *)(**(code **)(*(longlong *)&this_00->field_0x0 + 0x188))(this_00);
      puVar21 = (undefined8 *)(**(code **)(*plVar20 + 0x10))(plVar20,local_558,0);
      pTVar5 = (TReferenceControllerBase<1> *)puVar21[1];
      plVar20 = (longlong *)*puVar21;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x188))();
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x10))(plVar20,local_568,2);
      local_658 = *(undefined8 *)(*plVar20 + 0x28);
      if ((local_b68[0].ArrayIndex == (ushort)local_658) &&
         (local_b68[0].ElementIndex == (ushort)((ulonglong)local_658 >> 0x10))) {
        uVar25 = 1;
      }
      else {
        uVar25 = 0;
      }
      (*pcVar4)(this,uVar25,&local_708,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_560)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_550)
      ;
      if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_708.Data.AllocatorInstance.Data);
      }
      plVar20 = (longlong *)(**(code **)(*(longlong *)&this_00->field_0x0 + 0x188))(this_00);
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x10))(plVar20,local_548,1);
      local_4d8 = *(undefined8 *)(*plVar20 + 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_540)
      ;
      FVar18 = local_4d8._0_4_;
      FSlateInvalidationWidgetList::IncrementIndex(&local_378,SUB84(&local_b74,0));
      pcVar4 = *(code **)(*(longlong *)this + 0x30);
      ::FString::FString(&local_6f8,L"Index of 13 is not identical.");
      plVar20 = (longlong *)(**(code **)(*(longlong *)&this_00->field_0x0 + 0x188))(this_00);
      puVar21 = (undefined8 *)(**(code **)(*plVar20 + 0x10))(plVar20,local_508,1);
      pTVar5 = (TReferenceControllerBase<1> *)puVar21[1];
      plVar20 = (longlong *)*puVar21;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x188))();
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x10))(plVar20,local_538,0);
      local_670 = *(undefined8 *)(*plVar20 + 0x28);
      if ((local_b74.ArrayIndex == (ushort)local_670) &&
         (local_b74.ElementIndex == (ushort)((ulonglong)local_670 >> 0x10))) {
        uVar25 = 1;
      }
      else {
        uVar25 = 0;
      }
      (*pcVar4)(this,uVar25,&local_6f8,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_530)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_500)
      ;
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
      FSlateInvalidationWidgetList::IncrementIndex(&local_378,SUB84(&local_b48,0));
      FSlateInvalidationWidgetList::IncrementIndex(&local_378,SUB84(&local_b44,0));
      FSlateInvalidationWidgetList::IncrementIndex(&local_378,SUB84(local_ab8,0));
      FVar13 = local_4c0._0_4_;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          ((FSlateInvalidationWidgetSortOrder *)(local_998 + 4),&local_378,
                           local_4c0._0_4_);
      iVar17 = (int)local_bb0;
      if ((int)local_bb0 == local_bb0._4_4_) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      pFVar2 = local_bb8.Data + (longlong)iVar17 * 0x18;
      local_bb0._0_4_ = iVar17 + 1;
      ::FString::FString((FString *)pFVar2,L"C");
      FVar14 = local_4a8._0_4_;
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x0;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_990,&local_378,local_4a8._0_4_);
      if ((int)local_bb0 == local_bb0._4_4_) {
        local_bb0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      pFVar2 = local_bb8.Data + (longlong)(int)local_bb0 * 0x18;
      local_bb0._0_4_ = (int)local_bb0 + 1;
      ::FString::FString((FString *)pFVar2,L"F");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x0;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_98c,&local_378,local_640._0_4_);
      if ((int)local_bb0 == local_bb0._4_4_) {
        local_bb0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      pFVar2 = local_bb8.Data + (longlong)(int)local_bb0 * 0x18;
      local_bb0._0_4_ = (int)local_bb0 + 1;
      ::FString::FString((FString *)pFVar2,L"G");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x1;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_988,&local_378,local_b78);
      if ((int)local_bb0 == local_bb0._4_4_) {
        local_bb0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      pFVar2 = local_bb8.Data + (longlong)(int)local_bb0 * 0x18;
      local_bb0._0_4_ = (int)local_bb0 + 1;
      ::FString::FString((FString *)pFVar2,L"11");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x1;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_964,&local_378,local_b68[0]);
      if ((int)local_bb0 == local_bb0._4_4_) {
        local_bb0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      pFVar2 = local_bb8.Data + (longlong)(int)local_bb0 * 0x18;
      local_bb0._0_4_ = (int)local_bb0 + 1;
      ::FString::FString((FString *)pFVar2,L"12");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x1;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_96c,&local_378,FVar18);
      if ((int)local_bb0 == local_bb0._4_4_) {
        local_bb0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      pFVar2 = local_bb8.Data + (longlong)(int)local_bb0 * 0x18;
      local_bb0._0_4_ = (int)local_bb0 + 1;
      ::FString::FString((FString *)pFVar2,L"H");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x1;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_97c,&local_378,local_b74);
      if ((int)local_bb0 == local_bb0._4_4_) {
        local_bb0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      pFVar2 = local_bb8.Data + (longlong)(int)local_bb0 * 0x18;
      local_bb0._0_4_ = (int)local_bb0 + 1;
      ::FString::FString((FString *)pFVar2,L"13");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x1;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_980,&local_378,local_b48);
      if ((int)local_bb0 == local_bb0._4_4_) {
        local_bb0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      pFVar2 = local_bb8.Data + (longlong)(int)local_bb0 * 0x18;
      local_bb0._0_4_ = (int)local_bb0 + 1;
      ::FString::FString((FString *)pFVar2,L"I");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x1;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_984,&local_378,local_b44);
      if ((int)local_bb0 == local_bb0._4_4_) {
        local_bb0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      pFVar2 = local_bb8.Data + (longlong)(int)local_bb0 * 0x18;
      local_bb0._0_4_ = (int)local_bb0 + 1;
      ::FString::FString((FString *)pFVar2,L"J");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x0;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_94c,&local_378,(FSlateInvalidationWidgetIndex)local_ab8[0]._0_4_);
      if ((int)local_bb0 == local_bb0._4_4_) {
        local_bb0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_bb8,(int *)((longlong)&local_bb0 + 4));
      }
      lVar24 = (longlong)(int)local_bb0;
      local_bb0 = CONCAT44(local_bb0._4_4_,(int)local_bb0 + 1);
      pFVar2 = local_bb8.Data + lVar24 * 0x18;
      ::FString::FString((FString *)pFVar2,L"14");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x0;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (local_948,&local_378,FVar13);
      iVar17 = (int)local_b80;
      if ((int)local_b80 == local_b80._4_4_) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_b88,(int *)((longlong)&local_b80 + 4));
      }
      pFVar2 = local_b88.Data + (longlong)iVar17 * 0x18;
      local_b80._0_4_ = iVar17 + 1;
      ::FString::FString((FString *)pFVar2,L"C");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x0;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_950,&local_378,FVar14);
      if ((int)local_b80 == local_b80._4_4_) {
        local_b80._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_b88,(int *)((longlong)&local_b80 + 4));
      }
      pFVar2 = local_b88.Data + (longlong)(int)local_b80 * 0x18;
      local_b80._0_4_ = (int)local_b80 + 1;
      ::FString::FString((FString *)pFVar2,L"F");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x0;
      plVar20 = (longlong *)(**(code **)(*(longlong *)&this_00->field_0x0 + 0x188))(this_00);
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x10))(plVar20,local_528,0);
      local_490 = *(undefined8 *)(*plVar20 + 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_520)
      ;
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (local_960,&local_378,local_490._0_4_);
      if ((int)local_b80 == local_b80._4_4_) {
        local_b80._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_b88,(int *)((longlong)&local_b80 + 4));
      }
      pFVar2 = local_b88.Data + (longlong)(int)local_b80 * 0x18;
      local_b80._0_4_ = (int)local_b80 + 1;
      ::FString::FString((FString *)pFVar2,L"H");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x1;
      FSlateInvalidationWidgetList::IncrementIndex(&local_378,SUB84(&local_b40,0));
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_968,&local_378,local_b40);
      if ((int)local_b80 == local_b80._4_4_) {
        local_b80._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_b88,(int *)((longlong)&local_b80 + 4));
      }
      pFVar2 = local_b88.Data + (longlong)(int)local_b80 * 0x18;
      local_b80._0_4_ = (int)local_b80 + 1;
      ::FString::FString((FString *)pFVar2,L"13");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x1;
      FSlateInvalidationWidgetList::IncrementIndex(&local_378,SUB84(&local_b3c,0));
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_970,&local_378,local_b3c);
      if ((int)local_b80 == local_b80._4_4_) {
        local_b80._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_b88,(int *)((longlong)&local_b80 + 4));
      }
      pFVar2 = local_b88.Data + (longlong)(int)local_b80 * 0x18;
      local_b80._0_4_ = (int)local_b80 + 1;
      ::FString::FString((FString *)pFVar2,L"I");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x1;
      FSlateInvalidationWidgetList::IncrementIndex(&local_378,SUB84(local_b38,0));
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_974,&local_378,local_b38[0]);
      if ((int)local_b80 == local_b80._4_4_) {
        local_b80._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_b88,(int *)((longlong)&local_b80 + 4));
      }
      pFVar2 = local_b88.Data + (longlong)(int)local_b80 * 0x18;
      local_b80._0_4_ = (int)local_b80 + 1;
      ::FString::FString((FString *)pFVar2,L"J");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x0;
      FSlateInvalidationWidgetList::IncrementIndex
                (&local_378,(FSlateInvalidationWidgetIndex)((int)local_ab8 + 4));
      pFVar23 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (&local_978,&local_378,(FSlateInvalidationWidgetIndex)local_ab8[0]._4_4_);
      if ((int)local_b80 == local_b80._4_4_) {
        local_b80._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_b88,(int *)((longlong)&local_b80 + 4));
      }
      lVar24 = (longlong)(int)local_b80;
      local_b80 = CONCAT44(local_b80._4_4_,(int)local_b80 + 1);
      pFVar2 = local_b88.Data + lVar24 * 0x18;
      ::FString::FString((FString *)pFVar2,L"14");
      *(uint *)(pFVar2 + 0x10) = pFVar23->Order;
      pFVar2[0x14] = (FScriptContainerElement)0x0;
      plVar20 = (longlong *)(**(code **)(*(longlong *)&this_00->field_0x0 + 0x188))(this_00);
      pTVar22 = (TSharedRef<SWidget,1> *)(**(code **)(*plVar20 + 0x10))(plVar20,local_518,0);
      SBoxPanel::RemoveSlot((SBoxPanel *)this_00,pTVar22);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_510)
      ;
      bVar15 = FSlateInvalidationWidgetList::ProcessChildOrderInvalidation
                         (&local_378,FVar14,&local_bc8);
      pSVar12 = local_958;
      pcVar4 = *(code **)(local_958->_padding_ + 0x30);
      ::FString::FString(&local_6e8,L"The F widget should still be valid");
      (*pcVar4)(pSVar12,bVar15,&local_6e8,0);
      if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
      }
      `FSlateInvalidationWidgetListTest::RunTest'::__l58::FChildOrderInvalidationCallback_RemoveG::
      ~FChildOrderInvalidationCallback_RemoveG(&local_bc8);
      FSlateInvalidationWidgetList::~FSlateInvalidationWidgetList(&local_378);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_9c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_9b8.SharedReferenceCount.ReferenceController);
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 1425b0250

FString * __thiscall
FSlateInvalidationWidgetListTest::GetBeautifiedTestName
          (FSlateInvalidationWidgetListTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Slate.InvalidationWidgetList.AddBuildRemove");
  return __return_storage_ptr__;
}

// operator() @ 1425c3ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l52::<lambda_1>::operator()
          (void *this,TSharedPtr<SVerticalBox,1> *param_1,wchar_t *param_2)

{
  FSlateInvalidationWidgetList *this_00;
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  FSlateInvalidationRootHandle *pFVar6;
  undefined1 auStack_198 [32];
  TSharedRef<SWidget,1> local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FArguments local_138;
  FString local_128;
  IProcessChildOrderInvalidationCallback local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  FSlateInvalidationRootHandle local_f8 [2];
  undefined8 local_d8;
  FSlateInvalidationRootHandle local_d0;
  FSlateInvalidationWidgetList local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  this_00 = *(FSlateInvalidationWidgetList **)this;
  local_118 = (IProcessChildOrderInvalidationCallback)
              &RunTest'::`52'::FChildOrderInvalidationCallback_Count::_vftable_;
  local_110 = 0;
  uStack_108 = 0;
  if (param_1->Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_d8 = *(undefined8 *)&param_1->Object->field_0x28;
  bVar4 = FSlateInvalidationWidgetList::ProcessChildOrderInvalidation
                    (this_00,local_d8._0_4_,&local_118);
  plVar1 = *(longlong **)((longlong)this + 8);
  pcVar2 = *(code **)(*plVar1 + 0x30);
  ::FString::PrintfImpl(&local_168,L"The proxy should be valid for \'%s\'.");
  (*pcVar2)(plVar1,bVar4,&local_168,0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  pcVar2 = *(code **)(*plVar1 + 0x30);
  ::FString::PrintfImpl(&local_158,L"The widget list integrity has failed for \'%s\'.");
  bVar4 = FSlateInvalidationWidgetList::VerifyWidgetsIndex(*(FSlateInvalidationWidgetList **)this);
  (*pcVar2)(plVar1,bVar4,&local_158,0);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  pcVar2 = *(code **)(*plVar1 + 0x30);
  ::FString::PrintfImpl(&local_148,L"The widget list sort order has failed for \'%s\'.");
  bVar4 = FSlateInvalidationWidgetList::VerifySortOrder(*(FSlateInvalidationWidgetList **)this);
  (*pcVar2)(plVar1,bVar4,&local_148,0);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  local_138._0_8_ = **(undefined8 **)((longlong)this + 0x10);
  uVar3 = (*(undefined8 **)((longlong)this + 0x10))[1];
  local_138._13_3_ = SUB83((ulonglong)uVar3 >> 0x28,0);
  local_138.SortOrderPaddingBetweenArray = (int)uVar3;
  local_138.bAssignedWidgetIndex = false;
  pFVar6 = FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_d0);
  local_f8[0].InvalidationRoot = pFVar6->InvalidationRoot;
  local_f8[0].UniqueId = pFVar6->UniqueId;
  local_f8[0]._12_4_ = *(undefined4 *)&pFVar6->field_0xc;
  FSlateInvalidationWidgetList::FSlateInvalidationWidgetList(&local_b8,local_f8,&local_138);
  local_178.Object = (SWidget *)**(undefined8 **)((longlong)this + 0x18);
  local_178.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)((longlong)this + 0x18))[1];
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateInvalidationWidgetList::BuildWidgetList(&local_b8,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  bVar4 = FSlateInvalidationWidgetList::DeepCompare
                    (&local_b8,*(FSlateInvalidationWidgetList **)this);
  if (!bVar4) {
    plVar1 = *(longlong **)((longlong)this + 8);
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_128,L"Was not able to process invalidation of widget \'%s\'.");
    (*pcVar2)(plVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FSlateInvalidationWidgetList::~FSlateInvalidationWidgetList(&local_b8);
  return 0 < (int)local_110;
}

