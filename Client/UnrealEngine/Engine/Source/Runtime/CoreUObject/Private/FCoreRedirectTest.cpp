// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141fb3fd0

EAutomationTestFlags __thiscall FCoreRedirectTest::GetTestFlags(FCoreRedirectTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141fb3fe0

bool __thiscall FCoreRedirectTest::IsStressTest(FCoreRedirectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141fb3ff0

uint __thiscall FCoreRedirectTest::GetRequiredDeviceNum(FCoreRedirectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141fb4000

FString * __thiscall
FCoreRedirectTest::GetTestSourceFileName(FCoreRedirectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141fb4030

int __thiscall FCoreRedirectTest::GetTestSourceFileLine(FCoreRedirectTest *this)

{
  return 0x9e7;
}

// GetTests @ 141fb4040

/* WARNING: Removing unreachable block (ram,0x000141fb412d) */
/* WARNING: Removing unreachable block (ram,0x000141fb41f8) */

void __thiscall
FCoreRedirectTest::GetTests
          (FCoreRedirectTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.CoreRedirects");
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

// RunTest @ 141fb4220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall FCoreRedirectTest::RunTest(FCoreRedirectTest *this,FString *param_1)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  uint uVar15;
  FCoreRedirect *pFVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  ForAnyElementType FStack_1018;
  undefined8 uStack_1010;
  ForAnyElementType FStack_1008;
  undefined8 uStack_1000;
  TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_> TStack_ff8;
  FCoreRedirectObjectName FStack_fe8;
  FCoreRedirectObjectName FStack_fd0;
  FCoreRedirectObjectName FStack_fb8;
  FCoreRedirectObjectName FStack_fa0;
  FCoreRedirectObjectName FStack_f88;
  FCoreRedirectObjectName FStack_f70;
  FCoreRedirectObjectName FStack_f58;
  FCoreRedirectObjectName FStack_f40;
  FCoreRedirectObjectName FStack_f28;
  FCoreRedirectObjectName FStack_f10;
  FCoreRedirectObjectName FStack_ef8;
  FCoreRedirectObjectName FStack_ee0;
  FCoreRedirectObjectName FStack_ec8;
  FCoreRedirectObjectName FStack_eb0;
  FCoreRedirectObjectName FStack_e98;
  FCoreRedirectObjectName FStack_e80;
  FCoreRedirectObjectName FStack_e68;
  FCoreRedirectObjectName FStack_e50;
  FCoreRedirectObjectName FStack_e38;
  FCoreRedirectObjectName FStack_e20;
  FCoreRedirectObjectName FStack_e08;
  FCoreRedirectObjectName FStack_df0;
  FCoreRedirectObjectName FStack_dd8;
  FCoreRedirectObjectName FStack_dc0;
  FCoreRedirectObjectName FStack_da8;
  FCoreRedirectObjectName FStack_d90;
  FCoreRedirectObjectName FStack_d78;
  FCoreRedirectObjectName FStack_d60;
  FCoreRedirectObjectName FStack_d48;
  FCoreRedirectObjectName FStack_d30;
  FCoreRedirectObjectName FStack_d18;
  FCoreRedirectObjectName FStack_d00;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  FCoreRedirect *pFStack_bf8;
  int iStack_bf0;
  undefined4 uStack_bec;
  FString FStack_be8;
  FString FStack_bd8;
  FString FStack_bc8;
  FString FStack_bb8;
  FString FStack_ba8;
  FString FStack_b98;
  FString FStack_b88;
  FString FStack_b78;
  FString FStack_b68;
  FString FStack_b58;
  FString FStack_b48;
  FString FStack_b38;
  FString FStack_b28;
  FString FStack_b18;
  FString FStack_b08;
  FString FStack_af8;
  FString FStack_ae8;
  FString FStack_ad8;
  FString FStack_ac8;
  FString FStack_ab8;
  FString FStack_aa8;
  FString FStack_a98;
  FString FStack_a88;
  FString FStack_a78;
  FString FStack_a68;
  FString FStack_a58;
  FString FStack_a48;
  FString FStack_a38;
  FString FStack_a28;
  FString FStack_a18;
  FString FStack_a08;
  FString FStack_9f8;
  FString FStack_9e8;
  FString FStack_9d8;
  FString FStack_9c8;
  FString FStack_9b8;
  FString FStack_9a8;
  FString FStack_998;
  FString FStack_988;
  FString FStack_978;
  FString FStack_968;
  FString FStack_958;
  FString FStack_948;
  wchar_t *pwStack_938;
  int iStack_930;
  undefined4 uStack_92c;
  FScriptContainerElement *pFStack_928;
  int iStack_920;
  undefined4 uStack_91c;
  FScriptContainerElement *pFStack_918;
  int iStack_910;
  undefined4 uStack_90c;
  FScriptContainerElement *pFStack_908;
  int iStack_900;
  undefined4 uStack_8fc;
  FScriptContainerElement *pFStack_8f8;
  int iStack_8f0;
  undefined4 uStack_8ec;
  FScriptContainerElement *pFStack_8e8;
  int iStack_8e0;
  undefined4 uStack_8dc;
  FScriptContainerElement *pFStack_8d8;
  int iStack_8d0;
  undefined4 uStack_8cc;
  FScriptContainerElement *pFStack_8c8;
  int iStack_8c0;
  undefined4 uStack_8bc;
  FScriptContainerElement *pFStack_8b8;
  int iStack_8b0;
  undefined4 uStack_8ac;
  FScriptContainerElement *pFStack_8a8;
  int iStack_8a0;
  undefined4 uStack_89c;
  FScriptContainerElement *pFStack_898;
  int iStack_890;
  undefined4 uStack_88c;
  FScriptContainerElement *pFStack_888;
  int iStack_880;
  undefined4 uStack_87c;
  FScriptContainerElement *pFStack_878;
  int iStack_870;
  undefined4 uStack_86c;
  FScriptContainerElement *pFStack_868;
  int iStack_860;
  undefined4 uStack_85c;
  FScriptContainerElement *pFStack_858;
  int iStack_850;
  undefined4 uStack_84c;
  FScriptContainerElement *pFStack_848;
  int iStack_840;
  undefined4 uStack_83c;
  FScriptContainerElement *pFStack_838;
  int iStack_830;
  undefined4 uStack_82c;
  FScriptContainerElement *pFStack_828;
  int iStack_820;
  undefined4 uStack_81c;
  FScriptContainerElement *pFStack_818;
  int iStack_810;
  undefined4 uStack_80c;
  FScriptContainerElement *pFStack_808;
  int iStack_800;
  undefined4 uStack_7fc;
  FScriptContainerElement *pFStack_7f8;
  int iStack_7f0;
  undefined4 uStack_7ec;
  FScriptContainerElement *pFStack_7e8;
  int iStack_7e0;
  undefined4 uStack_7dc;
  FScriptContainerElement *pFStack_7d8;
  int iStack_7d0;
  undefined4 uStack_7cc;
  FScriptContainerElement *pFStack_7c8;
  int iStack_7c0;
  undefined4 uStack_7bc;
  FScriptContainerElement *pFStack_7b8;
  int iStack_7b0;
  undefined4 uStack_7ac;
  FScriptContainerElement *pFStack_7a8;
  int iStack_7a0;
  undefined4 uStack_79c;
  FScriptContainerElement *pFStack_798;
  int iStack_790;
  undefined4 uStack_78c;
  FScriptContainerElement *pFStack_788;
  int iStack_780;
  undefined4 uStack_77c;
  FScriptContainerElement *pFStack_778;
  int iStack_770;
  undefined4 uStack_76c;
  FScriptContainerElement *pFStack_768;
  int iStack_760;
  undefined4 uStack_75c;
  FScriptContainerElement *pFStack_758;
  int iStack_750;
  undefined4 uStack_74c;
  FScriptContainerElement *pFStack_748;
  int iStack_740;
  undefined4 uStack_73c;
  FString FStack_738;
  FString FStack_728;
  FString FStack_718;
  FString FStack_708;
  FString FStack_6f8;
  FString FStack_6e8;
  FString FStack_6d8;
  FString FStack_6c8;
  FString FStack_6b8;
  FString FStack_6a8;
  FString FStack_698;
  FString FStack_688;
  FString FStack_678;
  FString FStack_668;
  FString FStack_658;
  FString FStack_648;
  FString FStack_638;
  FString FStack_628;
  FString FStack_618;
  FString FStack_608;
  FString FStack_5f8;
  FString FStack_5e8;
  FString FStack_5d8;
  FString FStack_5c8;
  FString FStack_5b8;
  FString FStack_5a8;
  FString FStack_598;
  FString FStack_588;
  FString FStack_578;
  FString FStack_568;
  FString FStack_558;
  FString FStack_548;
  FCoreRedirectObjectName FStack_538;
  TStringView<wchar_t> TStack_518;
  TStringView<wchar_t> TStack_508;
  TArrayView<FCoreRedirect_const_,int> TStack_4f8;
  TStringView<wchar_t> TStack_4e8;
  TStringView<wchar_t> TStack_4d8;
  TStringView<wchar_t> TStack_4c8;
  TStringView<wchar_t> TStack_4b8;
  TStringView<wchar_t> TStack_4a8;
  TStringView<wchar_t> TStack_498;
  TStringView<wchar_t> TStack_488;
  TStringView<wchar_t> TStack_478;
  TStringView<wchar_t> TStack_468;
  TStringView<wchar_t> TStack_458;
  TStringView<wchar_t> TStack_448;
  TStringView<wchar_t> TStack_438;
  TStringView<wchar_t> TStack_428;
  TStringView<wchar_t> TStack_418;
  TStringView<wchar_t> TStack_408;
  TStringView<wchar_t> TStack_3f8;
  TStringView<wchar_t> TStack_3e8;
  TStringView<wchar_t> TStack_3d8;
  TStringView<wchar_t> TStack_3c8;
  TStringView<wchar_t> TStack_3b8;
  TStringView<wchar_t> TStack_3a8;
  TStringView<wchar_t> TStack_398;
  TStringView<wchar_t> TStack_388;
  TStringView<wchar_t> TStack_378;
  TStringView<wchar_t> TStack_368;
  TStringView<wchar_t> TStack_358;
  TStringView<wchar_t> TStack_348;
  TStringView<wchar_t> TStack_338;
  TStringView<wchar_t> TStack_328;
  TStringView<wchar_t> TStack_318;
  FString FStack_308;
  FString FStack_2f8;
  FString FStack_2e8;
  FString FStack_2d8;
  FString FStack_2c8;
  FString FStack_2b8;
  FString FStack_2a8;
  FString FStack_298;
  FString FStack_288;
  FString FStack_278;
  FString FStack_268;
  FString FStack_258;
  FString FStack_248;
  FString FStack_238;
  FString FStack_228;
  FString FStack_218;
  FString FStack_208;
  FString FStack_1f8;
  FString FStack_1e8;
  FString FStack_1d8;
  FString FStack_1c8;
  FString FStack_1b8;
  FString FStack_1a8;
  FString FStack_198;
  FString FStack_188;
  FString FStack_178;
  FString FStack_168;
  FString FStack_158;
  FString FStack_148;
  FString FStack_138;
  FString FStack_128;
  FString FStack_118;
  FString FStack_108;
  FString FStack_f8;
  FString FStack_e8;
  FString FStack_d8;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x141fe475f;
  uStackX_10 = 0;
  if (4 < (byte)LogCoreRedirects._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  FStack_1018.Data = (FScriptContainerElement *)0x0;
  uStack_1010 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)iVar8 * 0xa0);
  uStack_1010._0_4_ = iVar8 + 1;
  pFVar10 = ::FString::FString(&FStack_258,L"Property2");
  pFVar11 = ::FString::FString(&FStack_248,L"Property");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Property,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_238,L"Property3");
  pFVar11 = ::FString::FString(&FStack_218,L"Class.Property");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Property,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_208,L"Property4");
  pFVar11 = ::FString::FString(&FStack_1f8,L"/Game/PackageSpecific.Class.Property");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Property,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_1e8,L"/Game/Package.Class.OtherProperty2");
  pFVar11 = ::FString::FString(&FStack_1d8,L"/Game/Package.Class.OtherProperty");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Property,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_2b8,L"Class2");
  pFVar11 = ::FString::FString(&FStack_1c8,L"Class");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Class,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_1b8,L"Class3");
  pFVar11 = ::FString::FString(&FStack_1a8,L"/Game/Package.Class");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Class,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_198,L"/Game/Package.ClassInstance");
  pFVar11 = ::FString::FString(&FStack_188,L"/Game/Package.Class");
  FCoreRedirect::FCoreRedirect(pFVar16,Category_InstanceOnly|Type_Class,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_58,L"/Game/Package2");
  pFVar11 = ::FString::FString(&FStack_178,L"/Game/Package");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_168,L"/newgame");
  pFVar11 = ::FString::FString(&FStack_158,L"/oldgame");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSubstring|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_148,L"/新しいゲーム");
  pFVar11 = ::FString::FString(&FStack_138,L"/古いゲーム");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSubstring|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_128,L"/mixed_substring");
  pFVar11 = ::FString::FString(&FStack_118,L"/混合部分文字列");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSubstring|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_108,L"/newprefix");
  pFVar11 = ::FString::FString(&FStack_f8,L"/oldprefix");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_d8,L"/新しいプレフィックス");
  pFVar11 = ::FString::FString(&FStack_c8,L"/古いプレフィックス");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_b8,L"/mixed_prefix");
  pFVar11 = ::FString::FString(&FStack_a8,L"/混合接頭辞");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_98,L"/new/superobject.prefix2.");
  pFVar11 = ::FString::FString(&FStack_e8,L"/old/object.prefix.");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Object,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_88,L"/ShouldNeverHappen");
  pFVar11 = ::FString::FString(&FStack_78,L"/PrefixOverlappingDirectMatch");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchPrefix|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_68,L"/DirectMatchIsPreferred/NewPath");
  pFVar11 = ::FString::FString(&FStack_308,L"/PrefixOverlappingDirectMatch/Path");
  FCoreRedirect::FCoreRedirect(pFVar16,Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_2f8,L"/newsuffix");
  pFVar11 = ::FString::FString(&FStack_2e8,L"/oldsuffix");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSuffix|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_2d8,L"/新しい接尾辞");
  pFVar11 = ::FString::FString(&FStack_2c8,L"/古い接尾辞");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSuffix|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_228,L"/mixed_suffix");
  pFVar11 = ::FString::FString(&FStack_2a8,L"/混合接尾辞");
  FCoreRedirect::FCoreRedirect(pFVar16,Option_MatchSuffix|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + (longlong)(int)uStack_1010 * 0xa0);
  uStack_1010._0_4_ = (int)uStack_1010 + 1;
  pFVar10 = ::FString::FString(&FStack_298,L"/Game/RemovedPackage");
  pFVar11 = ::FString::FString(&FStack_288,L"/Game/RemovedPackage");
  FCoreRedirect::FCoreRedirect(pFVar16,Category_Removed|Type_Package,pFVar11,pFVar10);
  if ((int)uStack_1010 == uStack_1010._4_4_) {
    uStack_1010._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&FStack_1018,(int *)((longlong)&uStack_1010 + 4));
  }
  lVar12 = (longlong)(int)uStack_1010;
  uStack_1010 = CONCAT44(uStack_1010._4_4_,(int)uStack_1010 + 1);
  pFVar16 = (FCoreRedirect *)(FStack_1018.Data + lVar12 * 0xa0);
  pFVar10 = ::FString::FString(&FStack_278,L"/Game/MissingLoadPackage");
  pFVar11 = ::FString::FString(&FStack_268,L"/Game/MissingLoadPackage");
  FCoreRedirect::FCoreRedirect
            (pFVar16,Option_MissingLoad|Category_Removed|Type_Package,pFVar11,pFVar10);
  ::FString::FString(&FStack_738,L"RunTests");
  iStack_bf0 = (int)uStack_1010;
  pFStack_bf8 = (FCoreRedirect *)FStack_1018.Data;
  if (((int)uStack_1010 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  TStack_4f8._12_4_ = uStack_bec;
  TStack_4f8.ArrayNum = iStack_bf0;
  TStack_4f8.DataPtr = pFStack_bf8;
  FCoreRedirects::AddRedirectList(&TStack_4f8,&FStack_738);
  if (FStack_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_738.Data.AllocatorInstance.Data);
  }
  bVar5 = UE::CoreRedirects::Private::RunAssetRedirectTests();
  FStack_1008.Data = (FScriptContainerElement *)0x0;
  uStack_1000 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_718,L"/Game/PackageSpecific.Class:Property4");
  ::FString::FString(&FStack_728,L"/Game/PackageSpecific.Class:Property");
  ::FString::FString((FString *)pFVar17,&FStack_728);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_718);
  *(undefined4 *)(pFVar17 + 0x20) = 0x20;
  if (FStack_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_728.Data.AllocatorInstance.Data);
  }
  if (FStack_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_718.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_6f8,L"/Game/PackageSpecific.Class:Property4");
  ::FString::FString(&FStack_708,L"/Game/PackageSpecific.Class.Property");
  ::FString::FString((FString *)pFVar17,&FStack_708);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_6f8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x20;
  if (FStack_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_708.Data.AllocatorInstance.Data);
  }
  if (FStack_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6f8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_6d8,L"/Game/PackageSpecific.Class:Property");
  ::FString::FString(&FStack_6e8,L"/Game/PackageSpecific.Class:Property");
  ::FString::FString((FString *)pFVar17,&FStack_6e8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_6d8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x10;
  if (FStack_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6e8.Data.AllocatorInstance.Data);
  }
  if (FStack_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6d8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_6b8,L"/Game/Package2.Class:Property3");
  ::FString::FString(&FStack_6c8,L"/Game/Package.Class:Property");
  ::FString::FString((FString *)pFVar17,&FStack_6c8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_6b8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x20;
  if (FStack_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6c8.Data.AllocatorInstance.Data);
  }
  if (FStack_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6b8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_698,L"/Game/Package2.Class3");
  ::FString::FString(&FStack_6a8,L"/Game/Package.Class");
  ::FString::FString((FString *)pFVar17,&FStack_6a8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_698);
  *(undefined4 *)(pFVar17 + 0x20) = 2;
  if (FStack_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6a8.Data.AllocatorInstance.Data);
  }
  if (FStack_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_698.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_678,L"/Game/PackageOther.Class2");
  ::FString::FString(&FStack_688,L"/Game/PackageOther.Class");
  ::FString::FString((FString *)pFVar17,&FStack_688);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_678);
  *(undefined4 *)(pFVar17 + 0x20) = 2;
  if (FStack_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_688.Data.AllocatorInstance.Data);
  }
  if (FStack_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_678.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_658,L"/Game/Package2.ClassInstance");
  ::FString::FString(&FStack_668,L"/Game/Package.Class");
  ::FString::FString((FString *)pFVar17,&FStack_668);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_658);
  *(undefined4 *)(pFVar17 + 0x20) = 0x10002;
  if (FStack_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_668.Data.AllocatorInstance.Data);
  }
  if (FStack_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_658.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_638,L"/newgame/Package.DefaultClass");
  ::FString::FString(&FStack_648,L"/oldgame/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&FStack_648);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_638);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_648.Data.AllocatorInstance.Data);
  }
  if (FStack_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_638.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_618,L"/新しいゲーム/Package.DefaultClass");
  ::FString::FString(&FStack_628,L"/古いゲーム/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&FStack_628);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_618);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_628.Data.AllocatorInstance.Data);
  }
  if (FStack_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_618.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_5f8,L"/mixed_substring/Package.DefaultClass");
  ::FString::FString(&FStack_608,L"/混合部分文字列/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&FStack_608);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_5f8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_608.Data.AllocatorInstance.Data);
  }
  if (FStack_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5f8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_5d8,L"/newprefix_SomeGame/Package.DefaultClass");
  ::FString::FString(&FStack_5e8,L"/oldprefix_SomeGame/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&FStack_5e8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_5d8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5e8.Data.AllocatorInstance.Data);
  }
  if (FStack_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5d8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_5b8,L"/新しいプレフィックス_SomeGame/Package.DefaultClass");
  ::FString::FString(&FStack_5c8,L"/古いプレフィックス_SomeGame/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&FStack_5c8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_5b8);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5c8.Data.AllocatorInstance.Data);
  }
  if (FStack_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5b8.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_598,L"/mixed_prefix_SomeGame/Package.DefaultClass");
  ::FString::FString(&FStack_5a8,L"/混合接頭辞_SomeGame/Package.DefaultClass");
  ::FString::FString((FString *)pFVar17,&FStack_5a8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_598);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5a8.Data.AllocatorInstance.Data);
  }
  if (FStack_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_598.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_578,L"/new/superobject.prefix2.subobjects.do.not.change");
  ::FString::FString(&FStack_588,L"/old/object.prefix.subobjects.do.not.change");
  ::FString::FString((FString *)pFVar17,&FStack_588);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_578);
  *(undefined4 *)(pFVar17 + 0x20) = 1;
  if (FStack_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_588.Data.AllocatorInstance.Data);
  }
  if (FStack_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_578.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_558,L"/DirectMatchIsPreferred/NewPath.Remain:Unchanged");
  ::FString::FString(&FStack_568,L"/PrefixOverlappingDirectMatch/Path.Remain.Unchanged");
  ::FString::FString((FString *)pFVar17,&FStack_568);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_558);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_568.Data.AllocatorInstance.Data);
  }
  if (FStack_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_558.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_988,L"/Game/Package/newsuffix");
  ::FString::FString(&FStack_548,L"/Game/Package/oldsuffix");
  ::FString::FString((FString *)pFVar17,&FStack_548);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_988);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_548.Data.AllocatorInstance.Data);
  }
  if (FStack_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_988.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_968,L"/Game/Package/新しい接尾辞");
  ::FString::FString(&FStack_978,L"/Game/Package/古い接尾辞");
  ::FString::FString((FString *)pFVar17,&FStack_978);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_968);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_978.Data.AllocatorInstance.Data);
  }
  if (FStack_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_968.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  if ((int)uStack_1000 == uStack_1000._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_1008,(int *)((longlong)&uStack_1000 + 4));
  }
  uStack_1000 = CONCAT44(uStack_1000._4_4_,iVar8 + 1);
  pFVar17 = FStack_1008.Data + (longlong)iVar8 * 0x28;
  ::FString::FString(&FStack_948,L"/Game/Package/mixed_suffix");
  ::FString::FString(&FStack_958,L"/Game/Package/混合接尾辞");
  ::FString::FString((FString *)pFVar17,&FStack_958);
  ::FString::FString((FString *)(pFVar17 + 0x10),&FStack_948);
  *(undefined4 *)(pFVar17 + 0x20) = 0x40;
  if (FStack_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_958.Data.AllocatorInstance.Data);
  }
  if (FStack_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_948.Data.AllocatorInstance.Data);
  }
  iVar8 = (int)uStack_1000;
  uVar14 = (ulonglong)(int)uStack_1000;
  pFVar17 = FStack_1008.Data + 0x18;
  pFStack_bf8 = (FCoreRedirect *)(FStack_1008.Data + uVar14 * 0x28);
LAB_141fe5d45:
  do {
    pFVar16 = pFStack_bf8;
    bVar18 = false;
    if ((int)uVar14 != iVar8) {
      `TCheckedPointerIterator<`FCoreRedirects::RunTests'::__l2::FRedirectTest,int,0>::operator!='::
      __l2::<lambda_1>::operator()(auStackX_8);
    }
    iVar9 = 0;
    if ((FCoreRedirect *)(pFVar17 + -0x18) == pFVar16) break;
    pwStack_938 = *(wchar_t **)&pFVar17[-0x18].field_0x0;
    FStack_fe8.ObjectName.ComparisonIndex.Value = 0;
    FStack_fe8.ObjectName.Number = 0;
    FStack_fe8.OuterName.ComparisonIndex.Value = 0;
    FStack_fe8.OuterName.Number = 0;
    FStack_fe8.PackageName.ComparisonIndex.Value = 0;
    FStack_fe8.PackageName.Number = 0;
    iStack_930 = *(int *)(pFVar17 + -0x10) + -1;
    if (*(int *)(pFVar17 + -0x10) == 0) {
      iStack_930 = iVar9;
    }
    TStack_4d8._12_4_ = uStack_92c;
    TStack_4d8.Size = iStack_930;
    TStack_4d8.DataPtr = pwStack_938;
    bVar7 = FCoreRedirectObjectName::ExpandNames
                      (&TStack_4d8,&FStack_fe8.ObjectName,&FStack_fe8.OuterName,
                       &FStack_fe8.PackageName);
    if (!bVar7) {
      uStackX_18 = 0;
      FStack_fe8.PackageName.ComparisonIndex.Value = 0;
      FStack_fe8.PackageName.Number = 0;
      FStack_fe8.ObjectName.ComparisonIndex.Value = 0;
      FStack_fe8.ObjectName.Number = 0;
      FStack_fe8.OuterName.ComparisonIndex.Value = 0;
      FStack_fe8.OuterName.Number = 0;
    }
    FCoreRedirects::GetRedirectedName
              (&FStack_538,*(ECoreRedirectFlags *)(pFVar17 + 8),&FStack_fe8,None);
    FVar4 = FStack_538.PackageName;
    FVar3 = FStack_538.OuterName;
    FVar2 = FStack_538.ObjectName;
    FCoreRedirectObjectName::CombineNames
              (&FStack_a78,FStack_538.ObjectName,FStack_538.OuterName,FStack_538.PackageName);
    iVar9 = FStack_a78.Data.ArrayNum;
    if (iVar9 == *(int *)pFVar17) {
      if (1 < iVar9) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)FStack_a78.Data.AllocatorInstance.Data,
                           (wchar_t *)
                           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar17 + -8))->
                           AllocatorInstance).Data);
        bVar18 = iVar9 == 0;
        goto LAB_141fe5e58;
      }
    }
    else {
      bVar18 = iVar9 + *(int *)pFVar17 == 1;
LAB_141fe5e58:
      bVar18 = !bVar18;
    }
    if (FStack_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a78.Data.AllocatorInstance.Data);
    }
    if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
      FCoreRedirectObjectName::CombineNames(&FStack_a98,FVar2,FVar3,FVar4);
      FCoreRedirectObjectName::CombineNames
                (&FStack_a88,FStack_fe8.ObjectName,FStack_fe8.OuterName,FStack_fe8.PackageName);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
      if (FStack_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_a88.Data.AllocatorInstance.Data);
      }
      if (FStack_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_a98.Data.AllocatorInstance.Data);
        uVar14 = uStack_1000 & 0xffffffff;
        pFVar17 = pFVar17 + 0x28;
        goto LAB_141fe5d45;
      }
    }
    uVar14 = uStack_1000 & 0xffffffff;
    pFVar17 = pFVar17 + 0x28;
  } while( true );
  TStack_ff8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_ff8.ArrayNum = 0;
  TStack_ff8.ArrayMax = 0;
  ::FString::FString(&FStack_aa8,L"/Game/PackageOther.Class2");
  pFStack_928 = FStack_aa8.Data.AllocatorInstance.Data;
  FStack_f28.ObjectName.ComparisonIndex.Value = 0;
  FStack_f28.ObjectName.Number = 0;
  FStack_f28.OuterName.ComparisonIndex.Value = 0;
  FStack_f28.OuterName.Number = 0;
  FStack_f28.PackageName.ComparisonIndex.Value = 0;
  FStack_f28.PackageName.Number = 0;
  iStack_920 = FStack_aa8.Data.ArrayNum + -1;
  if (FStack_aa8.Data.ArrayNum == 0) {
    iStack_920 = iVar9;
  }
  TStack_4c8._12_4_ = uStack_91c;
  TStack_4c8.Size = iStack_920;
  TStack_4c8.DataPtr = (wchar_t *)FStack_aa8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_4c8,&FStack_f28.ObjectName,&FStack_f28.OuterName,
                      &FStack_f28.PackageName);
  if (!bVar18) {
    uStackX_20 = 0;
    FStack_f28.PackageName.ComparisonIndex.Value = 0;
    FStack_f28.PackageName.Number = 0;
    FStack_f28.ObjectName.ComparisonIndex.Value = 0;
    FStack_f28.ObjectName.Number = 0;
    FStack_f28.OuterName.ComparisonIndex.Value = 0;
    FStack_f28.OuterName.Number = 0;
  }
  FCoreRedirects::FindPreviousNames(Type_Class,&FStack_f28,&TStack_ff8);
  if (FStack_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_aa8.Data.AllocatorInstance.Data);
  }
  uVar15 = uStackX_10;
  if (TStack_ff8.ArrayNum == 1) {
    FCoreRedirectObjectName::CombineNames
              (&FStack_ab8,*(FName *)TStack_ff8.AllocatorInstance.Data,
               *(FName *)(TStack_ff8.AllocatorInstance.Data + 8),
               *(FName *)(TStack_ff8.AllocatorInstance.Data + 0x10));
    uVar15 = 1;
    FVar13.Data = (FScriptContainerElement *)L"";
    if (FStack_ab8.Data.ArrayNum != 0) {
      FVar13.Data = FStack_ab8.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"/Game/PackageOther.Class");
    if (iVar8 != 0) goto LAB_141fe6084;
    bVar18 = false;
  }
  else {
LAB_141fe6084:
    bVar18 = true;
  }
  if (((uVar15 & 1) != 0) &&
     (uVar15 = uVar15 & 0xfffffffe,
     FStack_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FStack_ab8.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  bVar18 = TStack_ff8.ArrayMax != 0;
  TStack_ff8._8_8_ = (ulonglong)(uint)TStack_ff8.ArrayMax << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&TStack_ff8.AllocatorInstance,0,&TStack_ff8.ArrayMax);
  }
  ::FString::FString(&FStack_ac8,L"/newgame/TestPackage");
  pFStack_918 = FStack_ac8.Data.AllocatorInstance.Data;
  FStack_f58.ObjectName.ComparisonIndex.Value = 0;
  FStack_f58.ObjectName.Number = 0;
  FStack_f58.OuterName.ComparisonIndex.Value = 0;
  FStack_f58.OuterName.Number = 0;
  FStack_f58.PackageName.ComparisonIndex.Value = 0;
  FStack_f58.PackageName.Number = 0;
  iStack_910 = FStack_ac8.Data.ArrayNum + -1;
  if (FStack_ac8.Data.ArrayNum == 0) {
    iStack_910 = iVar9;
  }
  TStack_508._12_4_ = uStack_90c;
  TStack_508.Size = iStack_910;
  TStack_508.DataPtr = (wchar_t *)FStack_ac8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_508,&FStack_f58.ObjectName,&FStack_f58.OuterName,
                      &FStack_f58.PackageName);
  if (!bVar18) {
    uStack_c68 = 0;
    FStack_f58.PackageName.ComparisonIndex.Value = 0;
    FStack_f58.PackageName.Number = 0;
    FStack_f58.ObjectName.ComparisonIndex.Value = 0;
    FStack_f58.ObjectName.Number = 0;
    FStack_f58.OuterName.ComparisonIndex.Value = 0;
    FStack_f58.OuterName.Number = 0;
  }
  FCoreRedirects::FindPreviousNames(Type_Package,&FStack_f58,&TStack_ff8);
  if (FStack_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ac8.Data.AllocatorInstance.Data);
  }
  if (TStack_ff8.ArrayNum == 1) {
    uVar15 = uVar15 | 2;
    FCoreRedirectObjectName::CombineNames
              (&FStack_ad8,*(FName *)TStack_ff8.AllocatorInstance.Data,
               *(FName *)(TStack_ff8.AllocatorInstance.Data + 8),
               *(FName *)(TStack_ff8.AllocatorInstance.Data + 0x10));
    FVar13.Data = (FScriptContainerElement *)L"";
    if (FStack_ad8.Data.ArrayNum != 0) {
      FVar13.Data = FStack_ad8.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"/oldgame/TestPackage");
    if (iVar8 != 0) goto LAB_141fe61fd;
    bVar18 = false;
  }
  else {
LAB_141fe61fd:
    bVar18 = true;
  }
  if (((uVar15 & 2) != 0) &&
     (uVar15 = uVar15 & 0xfffffffd,
     FStack_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FStack_ad8.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  bVar18 = TStack_ff8.ArrayMax != 0;
  TStack_ff8._8_8_ = (ulonglong)(uint)TStack_ff8.ArrayMax << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&TStack_ff8.AllocatorInstance,0,&TStack_ff8.ArrayMax);
  }
  ::FString::FString(&FStack_ae8,L"/newprefix_SomeGame/TestPackage");
  pFStack_908 = FStack_ae8.Data.AllocatorInstance.Data;
  FStack_f70.ObjectName.ComparisonIndex.Value = 0;
  FStack_f70.ObjectName.Number = 0;
  FStack_f70.OuterName.ComparisonIndex.Value = 0;
  FStack_f70.OuterName.Number = 0;
  FStack_f70.PackageName.ComparisonIndex.Value = 0;
  FStack_f70.PackageName.Number = 0;
  iStack_900 = FStack_ae8.Data.ArrayNum + -1;
  if (FStack_ae8.Data.ArrayNum == 0) {
    iStack_900 = iVar9;
  }
  TStack_4b8._12_4_ = uStack_8fc;
  TStack_4b8.Size = iStack_900;
  TStack_4b8.DataPtr = (wchar_t *)FStack_ae8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_4b8,&FStack_f70.ObjectName,&FStack_f70.OuterName,
                      &FStack_f70.PackageName);
  if (!bVar18) {
    uStack_c58 = 0;
    FStack_f70.PackageName.ComparisonIndex.Value = 0;
    FStack_f70.PackageName.Number = 0;
    FStack_f70.ObjectName.ComparisonIndex.Value = 0;
    FStack_f70.ObjectName.Number = 0;
    FStack_f70.OuterName.ComparisonIndex.Value = 0;
    FStack_f70.OuterName.Number = 0;
  }
  FCoreRedirects::FindPreviousNames(Type_Package,&FStack_f70,&TStack_ff8);
  if (FStack_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ae8.Data.AllocatorInstance.Data);
  }
  if (TStack_ff8.ArrayNum == 1) {
    uVar15 = uVar15 | 4;
    FCoreRedirectObjectName::CombineNames
              (&FStack_af8,*(FName *)TStack_ff8.AllocatorInstance.Data,
               *(FName *)(TStack_ff8.AllocatorInstance.Data + 8),
               *(FName *)(TStack_ff8.AllocatorInstance.Data + 0x10));
    FVar13.Data = (FScriptContainerElement *)L"";
    if (FStack_af8.Data.ArrayNum != 0) {
      FVar13.Data = FStack_af8.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)FVar13.Data,L"/oldprefix_SomeGame/TestPackage");
    if (iVar8 != 0) goto LAB_141fe6376;
    bVar18 = false;
  }
  else {
LAB_141fe6376:
    bVar18 = true;
  }
  if (((uVar15 & 4) != 0) &&
     (uVar15 = uVar15 & 0xfffffffb,
     FStack_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FStack_af8.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  bVar18 = TStack_ff8.ArrayMax != 0;
  TStack_ff8._8_8_ = (ulonglong)(uint)TStack_ff8.ArrayMax << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&TStack_ff8.AllocatorInstance,0,&TStack_ff8.ArrayMax);
  }
  ::FString::FString(&FStack_b08,L"/TestGame/newsuffix");
  pFStack_8f8 = FStack_b08.Data.AllocatorInstance.Data;
  FStack_f88.ObjectName.ComparisonIndex.Value = 0;
  FStack_f88.ObjectName.Number = 0;
  FStack_f88.OuterName.ComparisonIndex.Value = 0;
  FStack_f88.OuterName.Number = 0;
  FStack_f88.PackageName.ComparisonIndex.Value = 0;
  FStack_f88.PackageName.Number = 0;
  iStack_8f0 = FStack_b08.Data.ArrayNum + -1;
  if (FStack_b08.Data.ArrayNum == 0) {
    iStack_8f0 = iVar9;
  }
  TStack_4a8._12_4_ = uStack_8ec;
  TStack_4a8.Size = iStack_8f0;
  TStack_4a8.DataPtr = (wchar_t *)FStack_b08.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_4a8,&FStack_f88.ObjectName,&FStack_f88.OuterName,
                      &FStack_f88.PackageName);
  if (!bVar18) {
    uStack_c50 = 0;
    FStack_f88.PackageName.ComparisonIndex.Value = 0;
    FStack_f88.PackageName.Number = 0;
    FStack_f88.ObjectName.ComparisonIndex.Value = 0;
    FStack_f88.ObjectName.Number = 0;
    FStack_f88.OuterName.ComparisonIndex.Value = 0;
    FStack_f88.OuterName.Number = 0;
  }
  FCoreRedirects::FindPreviousNames(Type_Package,&FStack_f88,&TStack_ff8);
  if (FStack_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b08.Data.AllocatorInstance.Data);
  }
  if (TStack_ff8.ArrayNum == 1) {
    uVar15 = uVar15 | 8;
    FCoreRedirectObjectName::CombineNames
              (&FStack_b18,*(FName *)TStack_ff8.AllocatorInstance.Data,
               *(FName *)(TStack_ff8.AllocatorInstance.Data + 8),
               *(FName *)(TStack_ff8.AllocatorInstance.Data + 0x10));
    FVar13.Data = (FScriptContainerElement *)L"";
    if (FStack_b18.Data.ArrayNum != 0) {
      FVar13.Data = FStack_b18.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"/TestGame/oldsuffix");
    if (iVar8 == 0) {
      bVar18 = false;
      goto LAB_141fe64f1;
    }
  }
  bVar18 = true;
LAB_141fe64f1:
  if (((uVar15 & 8) != 0) &&
     (FStack_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FStack_b18.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  bVar18 = TStack_ff8.ArrayMax != 0;
  TStack_ff8._8_8_ = (ulonglong)(uint)TStack_ff8.ArrayMax << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&TStack_ff8.AllocatorInstance,0,&TStack_ff8.ArrayMax);
  }
  ::FString::FString(&FStack_b28,L"/Foo/Foo.Foo:\nNew");
  pFStack_8e8 = FStack_b28.Data.AllocatorInstance.Data;
  FStack_fa0.ObjectName.ComparisonIndex.Value = 0;
  FStack_fa0.ObjectName.Number = 0;
  FStack_fa0.OuterName.ComparisonIndex.Value = 0;
  FStack_fa0.OuterName.Number = 0;
  FStack_fa0.PackageName.ComparisonIndex.Value = 0;
  FStack_fa0.PackageName.Number = 0;
  iStack_8e0 = FStack_b28.Data.ArrayNum + -1;
  if (FStack_b28.Data.ArrayNum == 0) {
    iStack_8e0 = iVar9;
  }
  TStack_498._12_4_ = uStack_8dc;
  TStack_498.Size = iStack_8e0;
  TStack_498.DataPtr = (wchar_t *)FStack_b28.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_498,&FStack_fa0.ObjectName,&FStack_fa0.OuterName,
                      &FStack_fa0.PackageName);
  if (!bVar18) {
    uStack_c48 = 0;
    FStack_fa0.PackageName.ComparisonIndex.Value = 0;
    FStack_fa0.PackageName.Number = 0;
    FStack_fa0.ObjectName.ComparisonIndex.Value = 0;
    FStack_fa0.ObjectName.Number = 0;
    FStack_fa0.OuterName.ComparisonIndex.Value = 0;
    FStack_fa0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_fa0,Type_Object);
  if (FStack_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b28.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_FCoreRedirect_T_1508150e8,
               (FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_b38,L"/Foo/Foo.\nFoo:New");
  pFStack_8d8 = FStack_b38.Data.AllocatorInstance.Data;
  FStack_fb8.ObjectName.ComparisonIndex.Value = 0;
  FStack_fb8.ObjectName.Number = 0;
  FStack_fb8.OuterName.ComparisonIndex.Value = 0;
  FStack_fb8.OuterName.Number = 0;
  FStack_fb8.PackageName.ComparisonIndex.Value = 0;
  FStack_fb8.PackageName.Number = 0;
  iStack_8d0 = FStack_b38.Data.ArrayNum + -1;
  if (FStack_b38.Data.ArrayNum == 0) {
    iStack_8d0 = iVar9;
  }
  TStack_488._12_4_ = uStack_8cc;
  TStack_488.Size = iStack_8d0;
  TStack_488.DataPtr = (wchar_t *)FStack_b38.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_488,&FStack_fb8.ObjectName,&FStack_fb8.OuterName,
                      &FStack_fb8.PackageName);
  if (!bVar18) {
    uStack_c40 = 0;
    FStack_fb8.PackageName.ComparisonIndex.Value = 0;
    FStack_fb8.PackageName.Number = 0;
    FStack_fb8.ObjectName.ComparisonIndex.Value = 0;
    FStack_fb8.ObjectName.Number = 0;
    FStack_fb8.OuterName.ComparisonIndex.Value = 0;
    FStack_fb8.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_fb8,Type_Object);
  if (FStack_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b38.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_b48,L"/Foo/\nFoo.Foo:New");
  pFStack_8c8 = FStack_b48.Data.AllocatorInstance.Data;
  FStack_fd0.ObjectName.ComparisonIndex.Value = 0;
  FStack_fd0.ObjectName.Number = 0;
  FStack_fd0.OuterName.ComparisonIndex.Value = 0;
  FStack_fd0.OuterName.Number = 0;
  FStack_fd0.PackageName.ComparisonIndex.Value = 0;
  FStack_fd0.PackageName.Number = 0;
  iStack_8c0 = FStack_b48.Data.ArrayNum + -1;
  if (FStack_b48.Data.ArrayNum == 0) {
    iStack_8c0 = iVar9;
  }
  TStack_478._12_4_ = uStack_8bc;
  TStack_478.Size = iStack_8c0;
  TStack_478.DataPtr = (wchar_t *)FStack_b48.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_478,&FStack_fd0.ObjectName,&FStack_fd0.OuterName,
                      &FStack_fd0.PackageName);
  if (!bVar18) {
    uStack_c38 = 0;
    FStack_fd0.PackageName.ComparisonIndex.Value = 0;
    FStack_fd0.PackageName.Number = 0;
    FStack_fd0.ObjectName.ComparisonIndex.Value = 0;
    FStack_fd0.ObjectName.Number = 0;
    FStack_fd0.OuterName.ComparisonIndex.Value = 0;
    FStack_fd0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_fd0,Type_Object);
  if (FStack_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b48.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_b58,L"/Foo/_Verse/Foo.Foo:\nNew");
  pFStack_8b8 = FStack_b58.Data.AllocatorInstance.Data;
  FStack_e20.ObjectName.ComparisonIndex.Value = 0;
  FStack_e20.ObjectName.Number = 0;
  FStack_e20.OuterName.ComparisonIndex.Value = 0;
  FStack_e20.OuterName.Number = 0;
  FStack_e20.PackageName.ComparisonIndex.Value = 0;
  FStack_e20.PackageName.Number = 0;
  iStack_8b0 = FStack_b58.Data.ArrayNum + -1;
  if (FStack_b58.Data.ArrayNum == 0) {
    iStack_8b0 = iVar9;
  }
  TStack_468._12_4_ = uStack_8ac;
  TStack_468.Size = iStack_8b0;
  TStack_468.DataPtr = (wchar_t *)FStack_b58.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_468,&FStack_e20.ObjectName,&FStack_e20.OuterName,
                      &FStack_e20.PackageName);
  if (!bVar18) {
    uStack_c30 = 0;
    FStack_e20.PackageName.ComparisonIndex.Value = 0;
    FStack_e20.PackageName.Number = 0;
    FStack_e20.ObjectName.ComparisonIndex.Value = 0;
    FStack_e20.ObjectName.Number = 0;
    FStack_e20.OuterName.ComparisonIndex.Value = 0;
    FStack_e20.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_e20,Type_Object);
  if (FStack_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b58.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_b68,L"/Foo/_Verse/Foo.\nFoo:New");
  pFStack_8a8 = FStack_b68.Data.AllocatorInstance.Data;
  FStack_e38.ObjectName.ComparisonIndex.Value = 0;
  FStack_e38.ObjectName.Number = 0;
  FStack_e38.OuterName.ComparisonIndex.Value = 0;
  FStack_e38.OuterName.Number = 0;
  FStack_e38.PackageName.ComparisonIndex.Value = 0;
  FStack_e38.PackageName.Number = 0;
  iStack_8a0 = FStack_b68.Data.ArrayNum + -1;
  if (FStack_b68.Data.ArrayNum == 0) {
    iStack_8a0 = iVar9;
  }
  TStack_458._12_4_ = uStack_89c;
  TStack_458.Size = iStack_8a0;
  TStack_458.DataPtr = (wchar_t *)FStack_b68.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_458,&FStack_e38.ObjectName,&FStack_e38.OuterName,
                      &FStack_e38.PackageName);
  if (!bVar18) {
    uStack_c28 = 0;
    FStack_e38.PackageName.ComparisonIndex.Value = 0;
    FStack_e38.PackageName.Number = 0;
    FStack_e38.ObjectName.ComparisonIndex.Value = 0;
    FStack_e38.ObjectName.Number = 0;
    FStack_e38.OuterName.ComparisonIndex.Value = 0;
    FStack_e38.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_e38,Type_Object);
  if (FStack_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b68.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_b78,L"/Foo/_Verse/\nFoo.Foo:New");
  pFStack_898 = FStack_b78.Data.AllocatorInstance.Data;
  FStack_e50.ObjectName.ComparisonIndex.Value = 0;
  FStack_e50.ObjectName.Number = 0;
  FStack_e50.OuterName.ComparisonIndex.Value = 0;
  FStack_e50.OuterName.Number = 0;
  FStack_e50.PackageName.ComparisonIndex.Value = 0;
  FStack_e50.PackageName.Number = 0;
  iStack_890 = FStack_b78.Data.ArrayNum + -1;
  if (FStack_b78.Data.ArrayNum == 0) {
    iStack_890 = iVar9;
  }
  TStack_448._12_4_ = uStack_88c;
  TStack_448.Size = iStack_890;
  TStack_448.DataPtr = (wchar_t *)FStack_b78.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_448,&FStack_e50.ObjectName,&FStack_e50.OuterName,
                      &FStack_e50.PackageName);
  if (!bVar18) {
    uStack_c20 = 0;
    FStack_e50.PackageName.ComparisonIndex.Value = 0;
    FStack_e50.PackageName.Number = 0;
    FStack_e50.ObjectName.ComparisonIndex.Value = 0;
    FStack_e50.ObjectName.Number = 0;
    FStack_e50.OuterName.ComparisonIndex.Value = 0;
    FStack_e50.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_e50,Type_Object);
  if (FStack_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b78.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_b88,L"/Foo/Foo.Foo:$New");
  pFStack_888 = FStack_b88.Data.AllocatorInstance.Data;
  FStack_e68.ObjectName.ComparisonIndex.Value = 0;
  FStack_e68.ObjectName.Number = 0;
  FStack_e68.OuterName.ComparisonIndex.Value = 0;
  FStack_e68.OuterName.Number = 0;
  FStack_e68.PackageName.ComparisonIndex.Value = 0;
  FStack_e68.PackageName.Number = 0;
  iStack_880 = FStack_b88.Data.ArrayNum + -1;
  if (FStack_b88.Data.ArrayNum == 0) {
    iStack_880 = iVar9;
  }
  TStack_438._12_4_ = uStack_87c;
  TStack_438.Size = iStack_880;
  TStack_438.DataPtr = (wchar_t *)FStack_b88.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_438,&FStack_e68.ObjectName,&FStack_e68.OuterName,
                      &FStack_e68.PackageName);
  if (!bVar18) {
    uStack_c18 = 0;
    FStack_e68.PackageName.ComparisonIndex.Value = 0;
    FStack_e68.PackageName.Number = 0;
    FStack_e68.ObjectName.ComparisonIndex.Value = 0;
    FStack_e68.ObjectName.Number = 0;
    FStack_e68.OuterName.ComparisonIndex.Value = 0;
    FStack_e68.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_e68,Type_Object);
  if (FStack_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b88.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_a68,L"/Foo/Foo.$Foo:New");
  pFStack_878 = FStack_a68.Data.AllocatorInstance.Data;
  FStack_e80.ObjectName.ComparisonIndex.Value = 0;
  FStack_e80.ObjectName.Number = 0;
  FStack_e80.OuterName.ComparisonIndex.Value = 0;
  FStack_e80.OuterName.Number = 0;
  FStack_e80.PackageName.ComparisonIndex.Value = 0;
  FStack_e80.PackageName.Number = 0;
  iStack_870 = FStack_a68.Data.ArrayNum + -1;
  if (FStack_a68.Data.ArrayNum == 0) {
    iStack_870 = iVar9;
  }
  TStack_428._12_4_ = uStack_86c;
  TStack_428.Size = iStack_870;
  TStack_428.DataPtr = (wchar_t *)FStack_a68.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_428,&FStack_e80.ObjectName,&FStack_e80.OuterName,
                      &FStack_e80.PackageName);
  if (!bVar18) {
    uStack_c10 = 0;
    FStack_e80.PackageName.ComparisonIndex.Value = 0;
    FStack_e80.PackageName.Number = 0;
    FStack_e80.ObjectName.ComparisonIndex.Value = 0;
    FStack_e80.ObjectName.Number = 0;
    FStack_e80.OuterName.ComparisonIndex.Value = 0;
    FStack_e80.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_e80,Type_Object);
  if (FStack_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a68.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_a48,L"/Foo/$Foo.Foo:New");
  pFStack_868 = FStack_a48.Data.AllocatorInstance.Data;
  FStack_e98.ObjectName.ComparisonIndex.Value = 0;
  FStack_e98.ObjectName.Number = 0;
  FStack_e98.OuterName.ComparisonIndex.Value = 0;
  FStack_e98.OuterName.Number = 0;
  FStack_e98.PackageName.ComparisonIndex.Value = 0;
  FStack_e98.PackageName.Number = 0;
  iStack_860 = FStack_a48.Data.ArrayNum + -1;
  if (FStack_a48.Data.ArrayNum == 0) {
    iStack_860 = iVar9;
  }
  TStack_418._12_4_ = uStack_85c;
  TStack_418.Size = iStack_860;
  TStack_418.DataPtr = (wchar_t *)FStack_a48.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_418,&FStack_e98.ObjectName,&FStack_e98.OuterName,
                      &FStack_e98.PackageName);
  if (!bVar18) {
    uStack_c08 = 0;
    FStack_e98.PackageName.ComparisonIndex.Value = 0;
    FStack_e98.PackageName.Number = 0;
    FStack_e98.ObjectName.ComparisonIndex.Value = 0;
    FStack_e98.ObjectName.Number = 0;
    FStack_e98.OuterName.ComparisonIndex.Value = 0;
    FStack_e98.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_e98,Type_Object);
  if (FStack_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a48.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_a38,L"/Foo/_Verse/Foo.Foo:$New");
  pFStack_858 = FStack_a38.Data.AllocatorInstance.Data;
  FStack_eb0.ObjectName.ComparisonIndex.Value = 0;
  FStack_eb0.ObjectName.Number = 0;
  FStack_eb0.OuterName.ComparisonIndex.Value = 0;
  FStack_eb0.OuterName.Number = 0;
  FStack_eb0.PackageName.ComparisonIndex.Value = 0;
  FStack_eb0.PackageName.Number = 0;
  iStack_850 = FStack_a38.Data.ArrayNum + -1;
  if (FStack_a38.Data.ArrayNum == 0) {
    iStack_850 = iVar9;
  }
  TStack_408._12_4_ = uStack_84c;
  TStack_408.Size = iStack_850;
  TStack_408.DataPtr = (wchar_t *)FStack_a38.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_408,&FStack_eb0.ObjectName,&FStack_eb0.OuterName,
                      &FStack_eb0.PackageName);
  if (!bVar18) {
    uStack_c00 = 0;
    FStack_eb0.PackageName.ComparisonIndex.Value = 0;
    FStack_eb0.PackageName.Number = 0;
    FStack_eb0.ObjectName.ComparisonIndex.Value = 0;
    FStack_eb0.ObjectName.Number = 0;
    FStack_eb0.OuterName.ComparisonIndex.Value = 0;
    FStack_eb0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_eb0,Type_Object);
  if (FStack_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a38.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_a28,L"/Foo/_Verse/Foo.$Foo:New");
  pFStack_848 = FStack_a28.Data.AllocatorInstance.Data;
  FStack_ec8.ObjectName.ComparisonIndex.Value = 0;
  FStack_ec8.ObjectName.Number = 0;
  FStack_ec8.OuterName.ComparisonIndex.Value = 0;
  FStack_ec8.OuterName.Number = 0;
  FStack_ec8.PackageName.ComparisonIndex.Value = 0;
  FStack_ec8.PackageName.Number = 0;
  iStack_840 = FStack_a28.Data.ArrayNum + -1;
  if (FStack_a28.Data.ArrayNum == 0) {
    iStack_840 = iVar9;
  }
  TStack_3f8._12_4_ = uStack_83c;
  TStack_3f8.Size = iStack_840;
  TStack_3f8.DataPtr = (wchar_t *)FStack_a28.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_3f8,&FStack_ec8.ObjectName,&FStack_ec8.OuterName,
                      &FStack_ec8.PackageName);
  if (!bVar18) {
    uStack_c60 = 0;
    FStack_ec8.PackageName.ComparisonIndex.Value = 0;
    FStack_ec8.PackageName.Number = 0;
    FStack_ec8.ObjectName.ComparisonIndex.Value = 0;
    FStack_ec8.ObjectName.Number = 0;
    FStack_ec8.OuterName.ComparisonIndex.Value = 0;
    FStack_ec8.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_ec8,Type_Object);
  if (FStack_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a28.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_a18,L"/Foo/_Verse/$Foo.Foo:New");
  pFStack_838 = FStack_a18.Data.AllocatorInstance.Data;
  FStack_ee0.ObjectName.ComparisonIndex.Value = 0;
  FStack_ee0.ObjectName.Number = 0;
  FStack_ee0.OuterName.ComparisonIndex.Value = 0;
  FStack_ee0.OuterName.Number = 0;
  FStack_ee0.PackageName.ComparisonIndex.Value = 0;
  FStack_ee0.PackageName.Number = 0;
  iStack_830 = FStack_a18.Data.ArrayNum + -1;
  if (FStack_a18.Data.ArrayNum == 0) {
    iStack_830 = iVar9;
  }
  TStack_3e8._12_4_ = uStack_82c;
  TStack_3e8.Size = iStack_830;
  TStack_3e8.DataPtr = (wchar_t *)FStack_a18.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_3e8,&FStack_ee0.ObjectName,&FStack_ee0.OuterName,
                      &FStack_ee0.PackageName);
  if (!bVar18) {
    uStack_ce8 = 0;
    FStack_ee0.PackageName.ComparisonIndex.Value = 0;
    FStack_ee0.PackageName.Number = 0;
    FStack_ee0.ObjectName.ComparisonIndex.Value = 0;
    FStack_ee0.ObjectName.Number = 0;
    FStack_ee0.OuterName.ComparisonIndex.Value = 0;
    FStack_ee0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirectObjectName::HasValidCharacters(&FStack_ee0,Type_Object);
  if (FStack_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a18.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_a08,L"/Game/RemovedPackage");
  pFStack_828 = FStack_a08.Data.AllocatorInstance.Data;
  FStack_f10.ObjectName.ComparisonIndex.Value = 0;
  FStack_f10.ObjectName.Number = 0;
  FStack_f10.OuterName.ComparisonIndex.Value = 0;
  FStack_f10.OuterName.Number = 0;
  FStack_f10.PackageName.ComparisonIndex.Value = 0;
  FStack_f10.PackageName.Number = 0;
  iStack_820 = FStack_a08.Data.ArrayNum + -1;
  if (FStack_a08.Data.ArrayNum == 0) {
    iStack_820 = iVar9;
  }
  TStack_3d8._12_4_ = uStack_81c;
  TStack_3d8.Size = iStack_820;
  TStack_3d8.DataPtr = (wchar_t *)FStack_a08.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_3d8,&FStack_f10.ObjectName,&FStack_f10.OuterName,
                      &FStack_f10.PackageName);
  if (!bVar18) {
    uStack_ce0 = 0;
    FStack_f10.PackageName.ComparisonIndex.Value = 0;
    FStack_f10.PackageName.Number = 0;
    FStack_f10.ObjectName.ComparisonIndex.Value = 0;
    FStack_f10.ObjectName.Number = 0;
    FStack_f10.OuterName.ComparisonIndex.Value = 0;
    FStack_f10.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirects::IsKnownMissing(Type_Package,&FStack_f10);
  if (FStack_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a08.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_9f8,L"/Game/MissingLoadPackage");
  pFStack_818 = FStack_9f8.Data.AllocatorInstance.Data;
  FStack_ef8.ObjectName.ComparisonIndex.Value = 0;
  FStack_ef8.ObjectName.Number = 0;
  FStack_ef8.OuterName.ComparisonIndex.Value = 0;
  FStack_ef8.OuterName.Number = 0;
  FStack_ef8.PackageName.ComparisonIndex.Value = 0;
  FStack_ef8.PackageName.Number = 0;
  iStack_810 = FStack_9f8.Data.ArrayNum + -1;
  if (FStack_9f8.Data.ArrayNum == 0) {
    iStack_810 = iVar9;
  }
  TStack_3c8._12_4_ = uStack_80c;
  TStack_3c8.Size = iStack_810;
  TStack_3c8.DataPtr = (wchar_t *)FStack_9f8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_3c8,&FStack_ef8.ObjectName,&FStack_ef8.OuterName,
                      &FStack_ef8.PackageName);
  if (!bVar18) {
    uStack_cd8 = 0;
    FStack_ef8.PackageName.ComparisonIndex.Value = 0;
    FStack_ef8.PackageName.Number = 0;
    FStack_ef8.ObjectName.ComparisonIndex.Value = 0;
    FStack_ef8.ObjectName.Number = 0;
    FStack_ef8.OuterName.ComparisonIndex.Value = 0;
    FStack_ef8.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirects::IsKnownMissing(Type_Package,&FStack_ef8);
  if (FStack_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9f8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_9e8,L"/Game/NotRemovedPackage");
  pFStack_808 = FStack_9e8.Data.AllocatorInstance.Data;
  FStack_f40.ObjectName.ComparisonIndex.Value = 0;
  FStack_f40.ObjectName.Number = 0;
  FStack_f40.OuterName.ComparisonIndex.Value = 0;
  FStack_f40.OuterName.Number = 0;
  FStack_f40.PackageName.ComparisonIndex.Value = 0;
  FStack_f40.PackageName.Number = 0;
  iStack_800 = FStack_9e8.Data.ArrayNum + -1;
  if (FStack_9e8.Data.ArrayNum == 0) {
    iStack_800 = iVar9;
  }
  TStack_3b8._12_4_ = uStack_7fc;
  TStack_3b8.Size = iStack_800;
  TStack_3b8.DataPtr = (wchar_t *)FStack_9e8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_3b8,&FStack_f40.ObjectName,&FStack_f40.OuterName,
                      &FStack_f40.PackageName);
  if (!bVar18) {
    uStack_cd0 = 0;
    FStack_f40.PackageName.ComparisonIndex.Value = 0;
    FStack_f40.PackageName.Number = 0;
    FStack_f40.ObjectName.ComparisonIndex.Value = 0;
    FStack_f40.ObjectName.Number = 0;
    FStack_f40.OuterName.ComparisonIndex.Value = 0;
    FStack_f40.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirects::IsKnownMissing(Type_Package,&FStack_f40);
  if (FStack_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9e8.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_9d8,L"/Game/NotRemovedMissingLoad");
  pFStack_7f8 = FStack_9d8.Data.AllocatorInstance.Data;
  FStack_e08.ObjectName.ComparisonIndex.Value = 0;
  FStack_e08.ObjectName.Number = 0;
  FStack_e08.OuterName.ComparisonIndex.Value = 0;
  FStack_e08.OuterName.Number = 0;
  FStack_e08.PackageName.ComparisonIndex.Value = 0;
  FStack_e08.PackageName.Number = 0;
  iStack_7f0 = FStack_9d8.Data.ArrayNum + -1;
  if (FStack_9d8.Data.ArrayNum == 0) {
    iStack_7f0 = iVar9;
  }
  TStack_3a8._12_4_ = uStack_7ec;
  TStack_3a8.Size = iStack_7f0;
  TStack_3a8.DataPtr = (wchar_t *)FStack_9d8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_3a8,&FStack_e08.ObjectName,&FStack_e08.OuterName,
                      &FStack_e08.PackageName);
  if (!bVar18) {
    uStack_cc8 = 0;
    FStack_e08.PackageName.ComparisonIndex.Value = 0;
    FStack_e08.PackageName.Number = 0;
    FStack_e08.ObjectName.ComparisonIndex.Value = 0;
    FStack_e08.ObjectName.Number = 0;
    FStack_e08.OuterName.ComparisonIndex.Value = 0;
    FStack_e08.OuterName.Number = 0;
  }
  FCoreRedirects::AddKnownMissing(Type_Package,&FStack_e08,Option_MissingLoad);
  if (FStack_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_9c8,L"/Game/NotRemovedMissingLoad");
  pFStack_7e8 = FStack_9c8.Data.AllocatorInstance.Data;
  FStack_df0.ObjectName.ComparisonIndex.Value = 0;
  FStack_df0.ObjectName.Number = 0;
  FStack_df0.OuterName.ComparisonIndex.Value = 0;
  FStack_df0.OuterName.Number = 0;
  FStack_df0.PackageName.ComparisonIndex.Value = 0;
  FStack_df0.PackageName.Number = 0;
  iStack_7e0 = FStack_9c8.Data.ArrayNum + -1;
  if (FStack_9c8.Data.ArrayNum == 0) {
    iStack_7e0 = iVar9;
  }
  TStack_398._12_4_ = uStack_7dc;
  TStack_398.Size = iStack_7e0;
  TStack_398.DataPtr = (wchar_t *)FStack_9c8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_398,&FStack_df0.ObjectName,&FStack_df0.OuterName,
                      &FStack_df0.PackageName);
  if (!bVar18) {
    uStack_cc0 = 0;
    FStack_df0.PackageName.ComparisonIndex.Value = 0;
    FStack_df0.PackageName.Number = 0;
    FStack_df0.ObjectName.ComparisonIndex.Value = 0;
    FStack_df0.ObjectName.Number = 0;
    FStack_df0.OuterName.ComparisonIndex.Value = 0;
    FStack_df0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirects::IsKnownMissing(Type_Package,&FStack_df0);
  if (FStack_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9c8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_9b8,L"/Game/NotRemovedMissingLoad");
  pFStack_7d8 = FStack_9b8.Data.AllocatorInstance.Data;
  FStack_dd8.ObjectName.ComparisonIndex.Value = 0;
  FStack_dd8.ObjectName.Number = 0;
  FStack_dd8.OuterName.ComparisonIndex.Value = 0;
  FStack_dd8.OuterName.Number = 0;
  FStack_dd8.PackageName.ComparisonIndex.Value = 0;
  FStack_dd8.PackageName.Number = 0;
  iStack_7d0 = FStack_9b8.Data.ArrayNum + -1;
  if (FStack_9b8.Data.ArrayNum == 0) {
    iStack_7d0 = iVar9;
  }
  TStack_4e8._12_4_ = uStack_7cc;
  TStack_4e8.Size = iStack_7d0;
  TStack_4e8.DataPtr = (wchar_t *)FStack_9b8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_4e8,&FStack_dd8.ObjectName,&FStack_dd8.OuterName,
                      &FStack_dd8.PackageName);
  if (!bVar18) {
    uStack_cb8 = 0;
    FStack_dd8.PackageName.ComparisonIndex.Value = 0;
    FStack_dd8.PackageName.Number = 0;
    FStack_dd8.ObjectName.ComparisonIndex.Value = 0;
    FStack_dd8.ObjectName.Number = 0;
    FStack_dd8.OuterName.ComparisonIndex.Value = 0;
    FStack_dd8.OuterName.Number = 0;
  }
  FCoreRedirects::RemoveKnownMissing(Type_Package,&FStack_dd8,None);
  if (FStack_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_9a8,L"/Game/NotRemovedMissingLoad");
  pFStack_7c8 = FStack_9a8.Data.AllocatorInstance.Data;
  FStack_dc0.ObjectName.ComparisonIndex.Value = 0;
  FStack_dc0.ObjectName.Number = 0;
  FStack_dc0.OuterName.ComparisonIndex.Value = 0;
  FStack_dc0.OuterName.Number = 0;
  FStack_dc0.PackageName.ComparisonIndex.Value = 0;
  FStack_dc0.PackageName.Number = 0;
  iStack_7c0 = FStack_9a8.Data.ArrayNum + -1;
  if (FStack_9a8.Data.ArrayNum == 0) {
    iStack_7c0 = iVar9;
  }
  TStack_388._12_4_ = uStack_7bc;
  TStack_388.Size = iStack_7c0;
  TStack_388.DataPtr = (wchar_t *)FStack_9a8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_388,&FStack_dc0.ObjectName,&FStack_dc0.OuterName,
                      &FStack_dc0.PackageName);
  if (!bVar18) {
    uStack_cb0 = 0;
    FStack_dc0.PackageName.ComparisonIndex.Value = 0;
    FStack_dc0.PackageName.Number = 0;
    FStack_dc0.ObjectName.ComparisonIndex.Value = 0;
    FStack_dc0.ObjectName.Number = 0;
    FStack_dc0.OuterName.ComparisonIndex.Value = 0;
    FStack_dc0.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirects::IsKnownMissing(Type_Package,&FStack_dc0);
  if (FStack_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9a8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_998,L"/Game/NotRemovedMissingLoad");
  pFStack_7b8 = FStack_998.Data.AllocatorInstance.Data;
  FStack_da8.ObjectName.ComparisonIndex.Value = 0;
  FStack_da8.ObjectName.Number = 0;
  FStack_da8.OuterName.ComparisonIndex.Value = 0;
  FStack_da8.OuterName.Number = 0;
  FStack_da8.PackageName.ComparisonIndex.Value = 0;
  FStack_da8.PackageName.Number = 0;
  iStack_7b0 = FStack_998.Data.ArrayNum + -1;
  if (FStack_998.Data.ArrayNum == 0) {
    iStack_7b0 = iVar9;
  }
  TStack_378._12_4_ = uStack_7ac;
  TStack_378.Size = iStack_7b0;
  TStack_378.DataPtr = (wchar_t *)FStack_998.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_378,&FStack_da8.ObjectName,&FStack_da8.OuterName,
                      &FStack_da8.PackageName);
  if (!bVar18) {
    uStack_ca8 = 0;
    FStack_da8.PackageName.ComparisonIndex.Value = 0;
    FStack_da8.PackageName.Number = 0;
    FStack_da8.ObjectName.ComparisonIndex.Value = 0;
    FStack_da8.ObjectName.Number = 0;
    FStack_da8.OuterName.ComparisonIndex.Value = 0;
    FStack_da8.OuterName.Number = 0;
  }
  FCoreRedirects::RemoveKnownMissing(Type_Package,&FStack_da8,Option_MissingLoad);
  if (FStack_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_998.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_a58,L"/Game/NotRemovedMissingLoad");
  pFStack_7a8 = FStack_a58.Data.AllocatorInstance.Data;
  FStack_d90.ObjectName.ComparisonIndex.Value = 0;
  FStack_d90.ObjectName.Number = 0;
  FStack_d90.OuterName.ComparisonIndex.Value = 0;
  FStack_d90.OuterName.Number = 0;
  FStack_d90.PackageName.ComparisonIndex.Value = 0;
  FStack_d90.PackageName.Number = 0;
  iStack_7a0 = FStack_a58.Data.ArrayNum + -1;
  if (FStack_a58.Data.ArrayNum == 0) {
    iStack_7a0 = iVar9;
  }
  TStack_368._12_4_ = uStack_79c;
  TStack_368.Size = iStack_7a0;
  TStack_368.DataPtr = (wchar_t *)FStack_a58.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_368,&FStack_d90.ObjectName,&FStack_d90.OuterName,
                      &FStack_d90.PackageName);
  if (!bVar18) {
    uStack_ca0 = 0;
    FStack_d90.PackageName.ComparisonIndex.Value = 0;
    FStack_d90.PackageName.Number = 0;
    FStack_d90.ObjectName.ComparisonIndex.Value = 0;
    FStack_d90.ObjectName.Number = 0;
    FStack_d90.OuterName.ComparisonIndex.Value = 0;
    FStack_d90.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirects::IsKnownMissing(Type_Package,&FStack_d90);
  if (FStack_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a58.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_be8,L"/Game/NotRemovedPackage");
  pFStack_798 = FStack_be8.Data.AllocatorInstance.Data;
  FStack_d78.ObjectName.ComparisonIndex.Value = 0;
  FStack_d78.ObjectName.Number = 0;
  FStack_d78.OuterName.ComparisonIndex.Value = 0;
  FStack_d78.OuterName.Number = 0;
  FStack_d78.PackageName.ComparisonIndex.Value = 0;
  FStack_d78.PackageName.Number = 0;
  iStack_790 = FStack_be8.Data.ArrayNum + -1;
  if (FStack_be8.Data.ArrayNum == 0) {
    iStack_790 = iVar9;
  }
  TStack_358._12_4_ = uStack_78c;
  TStack_358.Size = iStack_790;
  TStack_358.DataPtr = (wchar_t *)FStack_be8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_358,&FStack_d78.ObjectName,&FStack_d78.OuterName,
                      &FStack_d78.PackageName);
  if (!bVar18) {
    uStack_c98 = 0;
    FStack_d78.PackageName.ComparisonIndex.Value = 0;
    FStack_d78.PackageName.Number = 0;
    FStack_d78.ObjectName.ComparisonIndex.Value = 0;
    FStack_d78.ObjectName.Number = 0;
    FStack_d78.OuterName.ComparisonIndex.Value = 0;
    FStack_d78.OuterName.Number = 0;
  }
  FCoreRedirects::AddKnownMissing(Type_Package,&FStack_d78,None);
  if (FStack_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_be8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_bd8,L"/Game/NotRemovedPackage");
  pFStack_788 = FStack_bd8.Data.AllocatorInstance.Data;
  FStack_d60.ObjectName.ComparisonIndex.Value = 0;
  FStack_d60.ObjectName.Number = 0;
  FStack_d60.OuterName.ComparisonIndex.Value = 0;
  FStack_d60.OuterName.Number = 0;
  FStack_d60.PackageName.ComparisonIndex.Value = 0;
  FStack_d60.PackageName.Number = 0;
  iStack_780 = FStack_bd8.Data.ArrayNum + -1;
  if (FStack_bd8.Data.ArrayNum == 0) {
    iStack_780 = iVar9;
  }
  TStack_348._12_4_ = uStack_77c;
  TStack_348.Size = iStack_780;
  TStack_348.DataPtr = (wchar_t *)FStack_bd8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_348,&FStack_d60.ObjectName,&FStack_d60.OuterName,
                      &FStack_d60.PackageName);
  if (!bVar18) {
    uStack_c90 = 0;
    FStack_d60.PackageName.ComparisonIndex.Value = 0;
    FStack_d60.PackageName.Number = 0;
    FStack_d60.ObjectName.ComparisonIndex.Value = 0;
    FStack_d60.ObjectName.Number = 0;
    FStack_d60.OuterName.ComparisonIndex.Value = 0;
    FStack_d60.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirects::IsKnownMissing(Type_Package,&FStack_d60);
  if (FStack_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_bd8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_bc8,L"/Game/NotRemovedPackage");
  pFStack_778 = FStack_bc8.Data.AllocatorInstance.Data;
  FStack_d48.ObjectName.ComparisonIndex.Value = 0;
  FStack_d48.ObjectName.Number = 0;
  FStack_d48.OuterName.ComparisonIndex.Value = 0;
  FStack_d48.OuterName.Number = 0;
  FStack_d48.PackageName.ComparisonIndex.Value = 0;
  FStack_d48.PackageName.Number = 0;
  iStack_770 = FStack_bc8.Data.ArrayNum + -1;
  if (FStack_bc8.Data.ArrayNum == 0) {
    iStack_770 = iVar9;
  }
  TStack_338._12_4_ = uStack_76c;
  TStack_338.Size = iStack_770;
  TStack_338.DataPtr = (wchar_t *)FStack_bc8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_338,&FStack_d48.ObjectName,&FStack_d48.OuterName,
                      &FStack_d48.PackageName);
  if (!bVar18) {
    uStack_c88 = 0;
    FStack_d48.PackageName.ComparisonIndex.Value = 0;
    FStack_d48.PackageName.Number = 0;
    FStack_d48.ObjectName.ComparisonIndex.Value = 0;
    FStack_d48.ObjectName.Number = 0;
    FStack_d48.OuterName.ComparisonIndex.Value = 0;
    FStack_d48.OuterName.Number = 0;
  }
  FCoreRedirects::RemoveKnownMissing(Type_Package,&FStack_d48,Option_MissingLoad);
  if (FStack_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_bc8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_bb8,L"/Game/NotRemovedPackage");
  pFStack_768 = FStack_bb8.Data.AllocatorInstance.Data;
  FStack_d30.ObjectName.ComparisonIndex.Value = 0;
  FStack_d30.ObjectName.Number = 0;
  FStack_d30.OuterName.ComparisonIndex.Value = 0;
  FStack_d30.OuterName.Number = 0;
  FStack_d30.PackageName.ComparisonIndex.Value = 0;
  FStack_d30.PackageName.Number = 0;
  iStack_760 = FStack_bb8.Data.ArrayNum + -1;
  if (FStack_bb8.Data.ArrayNum == 0) {
    iStack_760 = iVar9;
  }
  TStack_328._12_4_ = uStack_75c;
  TStack_328.Size = iStack_760;
  TStack_328.DataPtr = (wchar_t *)FStack_bb8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_328,&FStack_d30.ObjectName,&FStack_d30.OuterName,
                      &FStack_d30.PackageName);
  if (!bVar18) {
    uStack_c80 = 0;
    FStack_d30.PackageName.ComparisonIndex.Value = 0;
    FStack_d30.PackageName.Number = 0;
    FStack_d30.ObjectName.ComparisonIndex.Value = 0;
    FStack_d30.ObjectName.Number = 0;
    FStack_d30.OuterName.ComparisonIndex.Value = 0;
    FStack_d30.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirects::IsKnownMissing(Type_Package,&FStack_d30);
  if (FStack_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_bb8.Data.AllocatorInstance.Data);
  }
  if ((!bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(&FStack_ba8,L"/Game/NotRemovedPackage");
  pFStack_758 = FStack_ba8.Data.AllocatorInstance.Data;
  FStack_d18.ObjectName.ComparisonIndex.Value = 0;
  FStack_d18.ObjectName.Number = 0;
  FStack_d18.OuterName.ComparisonIndex.Value = 0;
  FStack_d18.OuterName.Number = 0;
  FStack_d18.PackageName.ComparisonIndex.Value = 0;
  FStack_d18.PackageName.Number = 0;
  iStack_750 = FStack_ba8.Data.ArrayNum + -1;
  if (FStack_ba8.Data.ArrayNum == 0) {
    iStack_750 = iVar9;
  }
  TStack_318._12_4_ = uStack_74c;
  TStack_318.Size = iStack_750;
  TStack_318.DataPtr = (wchar_t *)FStack_ba8.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_318,&FStack_d18.ObjectName,&FStack_d18.OuterName,
                      &FStack_d18.PackageName);
  if (!bVar18) {
    uStack_c78 = 0;
    FStack_d18.PackageName.ComparisonIndex.Value = 0;
    FStack_d18.PackageName.Number = 0;
    FStack_d18.ObjectName.ComparisonIndex.Value = 0;
    FStack_d18.ObjectName.Number = 0;
    FStack_d18.OuterName.ComparisonIndex.Value = 0;
    FStack_d18.OuterName.Number = 0;
  }
  FCoreRedirects::RemoveKnownMissing(Type_Package,&FStack_d18,None);
  if (FStack_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ba8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_b98,L"/Game/NotRemovedPackage");
  pFStack_748 = FStack_b98.Data.AllocatorInstance.Data;
  FStack_d00.ObjectName.ComparisonIndex.Value = 0;
  FStack_d00.ObjectName.Number = 0;
  FStack_d00.OuterName.ComparisonIndex.Value = 0;
  FStack_d00.OuterName.Number = 0;
  FStack_d00.PackageName.ComparisonIndex.Value = 0;
  FStack_d00.PackageName.Number = 0;
  iStack_740 = FStack_b98.Data.ArrayNum + -1;
  if (FStack_b98.Data.ArrayNum == 0) {
    iStack_740 = iVar9;
  }
  TStack_518._12_4_ = uStack_73c;
  TStack_518.Size = iStack_740;
  TStack_518.DataPtr = (wchar_t *)FStack_b98.Data.AllocatorInstance.Data;
  bVar18 = FCoreRedirectObjectName::ExpandNames
                     (&TStack_518,&FStack_d00.ObjectName,&FStack_d00.OuterName,
                      &FStack_d00.PackageName);
  if (!bVar18) {
    uStack_c70 = 0;
    FStack_d00.PackageName.ComparisonIndex.Value = 0;
    FStack_d00.PackageName.Number = 0;
    FStack_d00.ObjectName.ComparisonIndex.Value = 0;
    FStack_d00.ObjectName.Number = 0;
    FStack_d00.OuterName.ComparisonIndex.Value = 0;
    FStack_d00.OuterName.Number = 0;
  }
  bVar18 = FCoreRedirects::IsKnownMissing(Type_Package,&FStack_d00);
  if (FStack_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b98.Data.AllocatorInstance.Data);
  }
  if ((bVar18) && (bVar5 = false, 1 < (byte)LogCoreRedirects._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  if (4 < (byte)LogCoreRedirects._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  if ((FName *)TStack_ff8.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(TStack_ff8.AllocatorInstance.Data);
  }
  DestructItems<_FCoreRedirects::RunTests_::__l2::FRedirectTest,int>
            ((FRedirectTest *)FStack_1008.Data,(int)uStack_1000);
  if ((FRedirectTest *)FStack_1008.Data != (FRedirectTest *)0x0) {
    FMemory::Free(FStack_1008.Data);
  }
  DestructItems<FCoreRedirect,int>((FCoreRedirect *)FStack_1018.Data,(int)uStack_1010);
  if ((FCoreRedirect *)FStack_1018.Data != (FCoreRedirect *)0x0) {
    FMemory::Free(FStack_1018.Data);
  }
  return bVar5;
}

// GetBeautifiedTestName @ 141fb4230

FString * __thiscall
FCoreRedirectTest::GetBeautifiedTestName(FCoreRedirectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.CoreRedirects");
  return __return_storage_ptr__;
}

