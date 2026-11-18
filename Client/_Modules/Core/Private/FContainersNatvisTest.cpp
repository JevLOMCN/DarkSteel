// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414c3fe0

EAutomationTestFlags __thiscall FContainersNatvisTest::GetTestFlags(FContainersNatvisTest *this)

{
  EAutomationTestFlags EVar1;
  
  EVar1 = ::operator|(ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext,
                      SmokeFilter);
  return EVar1;
}

// IsStressTest @ 1414c4010

bool __thiscall FContainersNatvisTest::IsStressTest(FContainersNatvisTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414c4020

uint __thiscall FContainersNatvisTest::GetRequiredDeviceNum(FContainersNatvisTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414c4040

FString * __thiscall
FContainersNatvisTest::GetTestSourceFileName
          (FContainersNatvisTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414c4070

int __thiscall FContainersNatvisTest::GetTestSourceFileLine(FContainersNatvisTest *this)

{
  return 0x785;
}

// GetTests @ 1414c4090

void __thiscall
FContainersNatvisTest::GetTests
          (FContainersNatvisTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,"System.Core.Containers.Natvis");
  if (((param_1->AllocatorInstance).Data <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      (param_1->AllocatorInstance).Data + (longlong)param_1->ArrayMax * 0x10)) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
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
  if (param_1->ArrayNum == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    param_1->ArrayNum = iVar3;
  }
  iVar3 = param_1->ArrayNum;
  param_1->ArrayNum = param_1->ArrayNum + 1;
  pFVar4 = ::operator_new(0x10,(param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  ::FString::FString(pFVar4,&local_28);
  ::FString::~FString(&local_28);
  pFVar4 = &local_18;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&(pFVar4->Data).AllocatorInstance.Data = 0;
    pFVar4 = (FString *)((longlong)&(pFVar4->Data).AllocatorInstance.Data + 1);
  }
  pFVar5 = (FScriptContainerElement *)::FString::FString(&local_18);
  if (((param_2->AllocatorInstance).Data <= pFVar5) &&
     (pFVar5 < (param_2->AllocatorInstance).Data + (longlong)param_2->ArrayMax * 0x10)) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
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
  if (param_2->ArrayNum == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    param_2->ArrayNum = iVar3;
  }
  iVar3 = param_2->ArrayNum;
  param_2->ArrayNum = param_2->ArrayNum + 1;
  pFVar4 = ::operator_new(0x10,(param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  ::FString::FString(pFVar4,(FString *)pFVar5);
  ::FString::~FString(&local_18);
  return;
}

// RunTest @ 1414c45e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001414c6483) */
/* WARNING: Removing unreachable block (ram,0x0001414c5b9d) */
/* WARNING: Removing unreachable block (ram,0x0001414c5777) */
/* WARNING: Removing unreachable block (ram,0x0001414c48ec) */
/* WARNING: Removing unreachable block (ram,0x0001414c58f0) */
/* WARNING: Removing unreachable block (ram,0x0001414c609e) */
/* WARNING: Removing unreachable block (ram,0x0001414c672b) */
/* WARNING: Removing unreachable block (ram,0x0001414c4670) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FContainersNatvisTest::RunTest(FContainersNatvisTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<int> *piVar4;
  initializer_list<FString> *piVar5;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *piVar6;
  longlong lVar7;
  initializer_list<int> *piVar8;
  initializer_list<FString> *piVar9;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *piVar10;
  undefined1 auStackY_cd8 [32];
  TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_> local_c88;
  TSetNatvisTest<_anonymous_namespace_::FSetResolver> local_c78;
  TSetNatvisTest<_anonymous_namespace_::FSparseSetResolver> local_c77;
  TSetNatvisTest<_anonymous_namespace_::FCompactSetResolver> local_c76;
  TLess<int> local_c75;
  TLess<int> local_c74;
  TMapNatvisTest<_anonymous_namespace_::FSetResolver> local_c73;
  TMapNatvisTest<_anonymous_namespace_::FSparseSetResolver> local_c72;
  TMapNatvisTest<_anonymous_namespace_::FCompactSetResolver> local_c71;
  int local_c70;
  int local_c6c;
  int local_c68;
  int local_c64;
  int local_c60;
  int local_c5c;
  int local_c58;
  TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>
  *local_c50;
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> *local_c48;
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> *local_c40;
  TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_> *local_c38;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c30;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c28;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_c20;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_c18;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_c10;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_c08;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_c00;
  TArray<int,TSizedDefaultAllocator<32>_> local_bf8;
  int local_be8;
  int local_be0 [2];
  int local_bd8;
  int local_bd4 [21];
  FScriptContainerElement *local_b80;
  FScriptContainerElement *local_b78;
  FScriptContainerElement *local_b70;
  FScriptContainerElement *local_b68;
  FScriptContainerElement *local_b60;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b58;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b50;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b48;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b40;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b38;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b30;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b28;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b20;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b18;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_b10;
  int local_b08 [2];
  TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_> local_b00;
  TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>
  local_af0;
  FString *local_ae0;
  FString *local_ad8;
  FString *local_ad0;
  FString *local_ac8;
  FString *local_ac0;
  FString *local_ab8;
  FString *local_ab0;
  FString *local_aa8;
  FString *local_aa0;
  FString *local_a98;
  FString *local_a90;
  FString *local_a88;
  FString *local_a80;
  FString *local_a78;
  FString *local_a70;
  FString *local_a68;
  FString *local_a60;
  FString *local_a58;
  FString *local_a50;
  FString *local_a48;
  FString *local_a40;
  FString *local_a38;
  FString *local_a30;
  FString *local_a28;
  FString *local_a20;
  FString *local_a18;
  FString *local_a10;
  FString *local_a08;
  FString *local_a00;
  FString *local_9f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_9f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_9e0;
  undefined1 local_9d0 [8];
  undefined1 local_9c8 [8];
  FScriptContainerElement *local_9c0;
  FScriptContainerElement *local_9b8;
  FScriptContainerElement *local_9b0;
  FScriptContainerElement *local_9a8;
  FScriptContainerElement *local_9a0;
  FScriptContainerElement *local_998;
  undefined4 local_990;
  undefined4 local_98c;
  FScriptContainerElement *local_988;
  FScriptContainerElement *local_980;
  FScriptContainerElement *local_978;
  longlong local_970;
  longlong local_968;
  FScriptContainerElement *local_960;
  FScriptContainerElement *local_958;
  FScriptContainerElement *local_950;
  TUniquePtr<FString,TDefaultDelete<FString>_> *local_948;
  TDefaultDelete<FString> *local_940;
  FString *local_938;
  TDefaultDelete<FString> *local_930;
  FScriptContainerElement *local_928;
  FScriptContainerElement *local_920;
  FScriptContainerElement *local_918;
  FScriptContainerElement *local_910;
  FScriptContainerElement *local_908;
  FScriptContainerElement *local_900;
  undefined4 local_8f8;
  undefined4 local_8f4;
  FScriptContainerElement *local_8f0;
  FScriptContainerElement *local_8e8;
  FScriptContainerElement *local_8e0;
  longlong local_8d8;
  longlong local_8d0;
  FScriptContainerElement *local_8c8;
  FScriptContainerElement *local_8c0;
  FScriptContainerElement *local_8b8;
  TUniquePtr<FString,TDefaultDelete<FString>_> *local_8b0;
  TDefaultDelete<FString> *local_8a8;
  FString *local_8a0;
  TDefaultDelete<FString> *local_898;
  FScriptContainerElement *local_890;
  FScriptContainerElement *local_888;
  FScriptContainerElement *local_880;
  FScriptContainerElement *local_878;
  FScriptContainerElement *local_870;
  FScriptContainerElement *local_868;
  undefined4 local_860;
  undefined4 local_85c;
  FScriptContainerElement *local_858;
  FScriptContainerElement *local_850;
  FScriptContainerElement *local_848;
  longlong local_840;
  longlong local_838;
  FScriptContainerElement *local_830;
  FScriptContainerElement *local_828;
  FScriptContainerElement *local_820;
  TUniquePtr<FString,TDefaultDelete<FString>_> *local_818;
  TDefaultDelete<FString> *local_810;
  FString *local_808;
  TDefaultDelete<FString> *local_800;
  FScriptContainerElement *local_7f8;
  FScriptContainerElement *local_7f0;
  FScriptContainerElement *local_7e8;
  FScriptContainerElement *local_7e0;
  FScriptContainerElement *local_7d8;
  FScriptContainerElement *local_7d0;
  undefined4 local_7c8;
  undefined4 local_7c4;
  FScriptContainerElement *local_7c0;
  FScriptContainerElement *local_7b8;
  FScriptContainerElement *local_7b0;
  longlong local_7a8;
  longlong local_7a0;
  FScriptContainerElement *local_798;
  FScriptContainerElement *local_790;
  FScriptContainerElement *local_788;
  TUniquePtr<FString,TDefaultDelete<FString>_> *local_780;
  TDefaultDelete<FString> *local_778;
  FString *local_770;
  TDefaultDelete<FString> *local_768;
  FScriptContainerElement *local_760;
  FScriptContainerElement *local_758;
  FScriptContainerElement *local_750;
  FScriptContainerElement *local_748;
  FScriptContainerElement *local_740;
  FScriptContainerElement *local_738;
  undefined4 local_730;
  undefined4 local_72c;
  FScriptContainerElement *local_728;
  FScriptContainerElement *local_720;
  FScriptContainerElement *local_718;
  longlong local_710;
  longlong local_708;
  FScriptContainerElement *local_700;
  FScriptContainerElement *local_6f8;
  FScriptContainerElement *local_6f0;
  TUniquePtr<FString,TDefaultDelete<FString>_> *local_6e8;
  TDefaultDelete<FString> *local_6e0;
  FString *local_6d8;
  TDefaultDelete<FString> *local_6d0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_6c8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_6c0;
  TDefaultDelete<FString> *local_6b8;
  FString *local_6b0;
  TDefaultDelete<FString> *local_6a8;
  TDefaultDelete<FString> *local_6a0;
  FString *local_698;
  TDefaultDelete<FString> *local_690;
  TDefaultDelete<FString> *local_688;
  FString *local_680;
  TDefaultDelete<FString> *local_678;
  TDefaultDelete<FString> *local_670;
  FString *local_668;
  TDefaultDelete<FString> *local_660;
  TDefaultDelete<FString> *local_658;
  FString *local_650;
  TDefaultDelete<FString> *local_648;
  TDefaultDelete<FString> *local_640;
  FString *local_638;
  TDefaultDelete<FString> *local_630;
  TDefaultDelete<FString> *local_628;
  FString *local_620;
  TDefaultDelete<FString> *local_618;
  TDefaultDelete<FString> *local_610;
  FString *local_608;
  TDefaultDelete<FString> *local_600;
  TDefaultDelete<FString> *local_5f8;
  FString *local_5f0;
  TDefaultDelete<FString> *local_5e8;
  TDefaultDelete<FString> *local_5e0;
  FString *local_5d8;
  TDefaultDelete<FString> *local_5d0;
  int local_5c8;
  int local_5c4;
  int local_5c0;
  int local_5bc;
  int local_5b8;
  undefined1 local_5b4 [20];
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> local_5a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_590;
  TArray<int,TSizedDefaultAllocator<32>_> local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> local_460;
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> local_450;
  initializer_list<int> local_438;
  initializer_list<int> local_428;
  initializer_list<FString> local_418;
  TArray<FString,TSizedDefaultAllocator<32>_> local_408;
  TArray<int,TSizedDefaultAllocator<32>_> local_3f8;
  initializer_list<int> local_3e8;
  initializer_list<int> local_3d8;
  initializer_list<int> local_3c8;
  initializer_list<FString> local_3b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_398;
  TArray<int,TSizedDefaultAllocator<32>_> local_388;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_378;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_368;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_358;
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> local_348;
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_> local_338;
  initializer_list<int> local_328;
  initializer_list<int> local_318;
  initializer_list<FString> local_308;
  initializer_list<int> local_2f8;
  initializer_list<int> local_2e8;
  initializer_list<int> local_2d8;
  initializer_list<FString> local_2c8;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_2b8;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_2a8;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_298;
  int local_288 [6];
  int local_270 [6];
  int local_258 [6];
  int local_240 [6];
  int local_228 [8];
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  TPairInitializer<FString_const_&,int_const_&> local_148;
  TPairInitializer<FString_const_&,int_const_&> local_138;
  TPairInitializer<FString_const_&,int_const_&> local_128;
  TPairInitializer<FString_const_&,int_const_&> local_118;
  TPairInitializer<FString_const_&,int_const_&> local_108;
  TPairInitializer<FString_const_&,int_const_&> local_f8;
  TPairInitializer<FString_const_&,int_const_&> local_e8;
  TPairInitializer<FString_const_&,int_const_&> local_d8;
  TPairInitializer<FString_const_&,int_const_&> local_c8;
  TPairInitializer<FString_const_&,int_const_&> local_b8;
  TPairInitializer<FString_const_&,int_const_&> local_a8;
  TPairInitializer<FString_const_&,int_const_&> local_98;
  TPairInitializer<FString_const_&,int_const_&> local_88;
  TPairInitializer<FString_const_&,int_const_&> local_78;
  TPairInitializer<FString_const_&,int_const_&> local_68;
  TPairInitializer<FString_const_&,int_const_&> local_58;
  TPairInitializer<FString_const_&,int_const_&> local_48;
  TPairInitializer<FString_const_&,int_const_&> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_cd8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_9e0.AllocatorInstance);
  local_9e0.ArrayNum = 0;
  local_9e0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_9e0.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_bf8.AllocatorInstance);
  local_bf8.ArrayNum = 0;
  local_bf8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_bf8.AllocatorInstance);
  if (local_bf8.ArrayMax < 0x10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x10,&local_bf8.AllocatorInstance,local_bf8.ArrayNum,&local_bf8.ArrayMax);
  }
  local_288[0] = 4;
  local_288[1] = 1;
  local_288[2] = 2;
  local_288[3] = 5;
  local_288[4] = 3;
  piVar4 = std::initializer_list<int>::initializer_list<int>(&local_328,local_288,local_288 + 5);
  piVar8 = &local_438;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
    piVar8 = (initializer_list<int> *)((longlong)&piVar8->_First + 1);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
            (&local_3f8,&local_438);
  local_270[0] = 4;
  local_270[1] = 1;
  local_270[2] = 2;
  local_270[3] = 5;
  local_270[4] = 3;
  piVar4 = std::initializer_list<int>::initializer_list<int>(&local_318,local_270,local_270 + 5);
  piVar8 = &local_428;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
    piVar8 = (initializer_list<int> *)((longlong)&piVar8->_First + 1);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_5b4 + 4),&local_428);
  TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_5b4 + 4),3,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_5b4 + 4),1,Default);
  ::FString::FString(&local_208,"d1");
  ::FString::FString(&local_1f8,"a2");
  ::FString::FString(&local_1e8,"b3");
  ::FString::FString(&local_1d8,"e4");
  ::FString::FString(&local_1c8,"c5");
  piVar5 = std::initializer_list<FString>::initializer_list<FString>
                     (&local_308,&local_208,&local_1b8);
  piVar9 = &local_418;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar9->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<FString> *)((longlong)&piVar5->_First + 1);
    piVar9 = (initializer_list<FString> *)((longlong)&piVar9->_First + 1);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
            (&local_408,&local_418);
  _vector_destructor_iterator_(&local_208,0x10,5,::FString::~FString);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_c88.AllocatorInstance);
  local_c88.ArrayNum = 0;
  local_c88.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_c88.AllocatorInstance);
  if (local_c88.ArrayMax < 5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,5,&local_c88.AllocatorInstance,local_c88.ArrayNum,&local_c88.ArrayMax);
  }
  local_ab0 = ::operator_new(0x10);
  if (local_ab0 == (FString *)0x0) {
    local_aa8 = (FString *)0x0;
  }
  else {
    local_aa8 = ::FString::FString(local_ab0,"d1");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_c08,local_aa8);
  local_b80 = (FScriptContainerElement *)&local_c08;
  local_9c0 = local_c88.AllocatorInstance.Data;
  local_9b8 = local_c88.AllocatorInstance.Data;
  local_9b0 = local_c88.AllocatorInstance.Data;
  if (local_c88.AllocatorInstance.Data <= local_b80) {
    local_9a8 = local_c88.AllocatorInstance.Data;
    local_9a0 = local_c88.AllocatorInstance.Data;
    local_998 = local_c88.AllocatorInstance.Data;
    if (local_b80 < local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayMax * 8) {
      local_990 = 0;
      local_98c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_970 = (longlong)local_c88.ArrayNum;
      local_968 = (longlong)local_c88.ArrayMax;
      local_988 = local_c88.AllocatorInstance.Data;
      local_980 = local_c88.AllocatorInstance.Data;
      local_978 = local_c88.AllocatorInstance.Data;
      local_960 = local_c88.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_c88.ArrayNum == local_c88.ArrayMax) {
    local_c88.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_c88.AllocatorInstance,&local_c88.ArrayMax);
  }
  local_c70 = local_c88.ArrayNum;
  local_958 = local_c88.AllocatorInstance.Data;
  local_950 = local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayNum * 8;
  local_c88.ArrayNum = local_c88.ArrayNum + 1;
  local_948 = ::operator_new(8,local_950);
  TUniquePtr<FString,TDefaultDelete<FString>_>::TUniquePtr<FString,TDefaultDelete<FString>_>
            (local_948,&local_c08);
  local_5c8 = local_c70;
  local_940 = (TDefaultDelete<FString> *)&local_c08;
  local_938 = local_c08.Ptr;
  local_930 = local_940;
  TDefaultDelete<FString>::operator()(local_940,local_c08.Ptr);
  local_aa0 = ::operator_new(0x10);
  if (local_aa0 == (FString *)0x0) {
    local_a98 = (FString *)0x0;
  }
  else {
    local_a98 = ::FString::FString(local_aa0,"a2");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_c00,local_a98);
  local_b78 = (FScriptContainerElement *)&local_c00;
  local_928 = local_c88.AllocatorInstance.Data;
  local_920 = local_c88.AllocatorInstance.Data;
  local_918 = local_c88.AllocatorInstance.Data;
  if (local_c88.AllocatorInstance.Data <= local_b78) {
    local_910 = local_c88.AllocatorInstance.Data;
    local_908 = local_c88.AllocatorInstance.Data;
    local_900 = local_c88.AllocatorInstance.Data;
    if (local_b78 < local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayMax * 8) {
      local_8f8 = 0;
      local_8f4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_8d8 = (longlong)local_c88.ArrayNum;
      local_8d0 = (longlong)local_c88.ArrayMax;
      local_8f0 = local_c88.AllocatorInstance.Data;
      local_8e8 = local_c88.AllocatorInstance.Data;
      local_8e0 = local_c88.AllocatorInstance.Data;
      local_8c8 = local_c88.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_c88.ArrayNum == local_c88.ArrayMax) {
    local_c88.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_c88.AllocatorInstance,&local_c88.ArrayMax);
  }
  local_c6c = local_c88.ArrayNum;
  local_8c0 = local_c88.AllocatorInstance.Data;
  local_8b8 = local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayNum * 8;
  local_c88.ArrayNum = local_c88.ArrayNum + 1;
  local_8b0 = ::operator_new(8,local_8b8);
  TUniquePtr<FString,TDefaultDelete<FString>_>::TUniquePtr<FString,TDefaultDelete<FString>_>
            (local_8b0,&local_c00);
  local_5c4 = local_c6c;
  local_8a8 = (TDefaultDelete<FString> *)&local_c00;
  local_8a0 = local_c00.Ptr;
  local_898 = local_8a8;
  TDefaultDelete<FString>::operator()(local_8a8,local_c00.Ptr);
  local_a90 = ::operator_new(0x10);
  if (local_a90 == (FString *)0x0) {
    local_a88 = (FString *)0x0;
  }
  else {
    local_a88 = ::FString::FString(local_a90,"b3");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_c10,local_a88);
  local_b70 = (FScriptContainerElement *)&local_c10;
  local_890 = local_c88.AllocatorInstance.Data;
  local_888 = local_c88.AllocatorInstance.Data;
  local_880 = local_c88.AllocatorInstance.Data;
  if (local_c88.AllocatorInstance.Data <= local_b70) {
    local_878 = local_c88.AllocatorInstance.Data;
    local_870 = local_c88.AllocatorInstance.Data;
    local_868 = local_c88.AllocatorInstance.Data;
    if (local_b70 < local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayMax * 8) {
      local_860 = 0;
      local_85c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_840 = (longlong)local_c88.ArrayNum;
      local_838 = (longlong)local_c88.ArrayMax;
      local_858 = local_c88.AllocatorInstance.Data;
      local_850 = local_c88.AllocatorInstance.Data;
      local_848 = local_c88.AllocatorInstance.Data;
      local_830 = local_c88.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_c88.ArrayNum == local_c88.ArrayMax) {
    local_c88.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_c88.AllocatorInstance,&local_c88.ArrayMax);
  }
  local_c68 = local_c88.ArrayNum;
  local_828 = local_c88.AllocatorInstance.Data;
  local_820 = local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayNum * 8;
  local_c88.ArrayNum = local_c88.ArrayNum + 1;
  local_818 = ::operator_new(8,local_820);
  TUniquePtr<FString,TDefaultDelete<FString>_>::TUniquePtr<FString,TDefaultDelete<FString>_>
            (local_818,&local_c10);
  local_5c0 = local_c68;
  local_810 = (TDefaultDelete<FString> *)&local_c10;
  local_808 = local_c10.Ptr;
  local_800 = local_810;
  TDefaultDelete<FString>::operator()(local_810,local_c10.Ptr);
  local_a80 = ::operator_new(0x10);
  if (local_a80 == (FString *)0x0) {
    local_a78 = (FString *)0x0;
  }
  else {
    local_a78 = ::FString::FString(local_a80,"e4");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_c18,local_a78);
  local_b68 = (FScriptContainerElement *)&local_c18;
  local_7f8 = local_c88.AllocatorInstance.Data;
  local_7f0 = local_c88.AllocatorInstance.Data;
  local_7e8 = local_c88.AllocatorInstance.Data;
  if (local_c88.AllocatorInstance.Data <= local_b68) {
    local_7e0 = local_c88.AllocatorInstance.Data;
    local_7d8 = local_c88.AllocatorInstance.Data;
    local_7d0 = local_c88.AllocatorInstance.Data;
    if (local_b68 < local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayMax * 8) {
      local_7c8 = 0;
      local_7c4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_7a8 = (longlong)local_c88.ArrayNum;
      local_7a0 = (longlong)local_c88.ArrayMax;
      local_7c0 = local_c88.AllocatorInstance.Data;
      local_7b8 = local_c88.AllocatorInstance.Data;
      local_7b0 = local_c88.AllocatorInstance.Data;
      local_798 = local_c88.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_c88.ArrayNum == local_c88.ArrayMax) {
    local_c88.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_c88.AllocatorInstance,&local_c88.ArrayMax);
  }
  local_c64 = local_c88.ArrayNum;
  local_790 = local_c88.AllocatorInstance.Data;
  local_788 = local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayNum * 8;
  local_c88.ArrayNum = local_c88.ArrayNum + 1;
  local_780 = ::operator_new(8,local_788);
  TUniquePtr<FString,TDefaultDelete<FString>_>::TUniquePtr<FString,TDefaultDelete<FString>_>
            (local_780,&local_c18);
  local_5bc = local_c64;
  local_778 = (TDefaultDelete<FString> *)&local_c18;
  local_770 = local_c18.Ptr;
  local_768 = local_778;
  TDefaultDelete<FString>::operator()(local_778,local_c18.Ptr);
  local_a70 = ::operator_new(0x10);
  if (local_a70 == (FString *)0x0) {
    local_a68 = (FString *)0x0;
  }
  else {
    local_a68 = ::FString::FString(local_a70,"c5");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_c20,local_a68);
  local_b60 = (FScriptContainerElement *)&local_c20;
  local_760 = local_c88.AllocatorInstance.Data;
  local_758 = local_c88.AllocatorInstance.Data;
  local_750 = local_c88.AllocatorInstance.Data;
  if (local_c88.AllocatorInstance.Data <= local_b60) {
    local_748 = local_c88.AllocatorInstance.Data;
    local_740 = local_c88.AllocatorInstance.Data;
    local_738 = local_c88.AllocatorInstance.Data;
    if (local_b60 < local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayMax * 8) {
      local_730 = 0;
      local_72c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_710 = (longlong)local_c88.ArrayNum;
      local_708 = (longlong)local_c88.ArrayMax;
      local_728 = local_c88.AllocatorInstance.Data;
      local_720 = local_c88.AllocatorInstance.Data;
      local_718 = local_c88.AllocatorInstance.Data;
      local_700 = local_c88.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_c88.ArrayNum == local_c88.ArrayMax) {
    local_c88.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_c88.AllocatorInstance,&local_c88.ArrayMax);
  }
  local_c60 = local_c88.ArrayNum;
  local_6f8 = local_c88.AllocatorInstance.Data;
  local_6f0 = local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayNum * 8;
  local_c88.ArrayNum = local_c88.ArrayNum + 1;
  local_6e8 = ::operator_new(8,local_6f0);
  TUniquePtr<FString,TDefaultDelete<FString>_>::TUniquePtr<FString,TDefaultDelete<FString>_>
            (local_6e8,&local_c20);
  local_5b8 = local_c60;
  local_6e0 = (TDefaultDelete<FString> *)&local_c20;
  local_6d8 = local_c20.Ptr;
  local_6d0 = local_6e0;
  TDefaultDelete<FString>::operator()(local_6e0,local_c20.Ptr);
  PlaceBreakpointHere();
  TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_>(&local_c88);
  TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
            (&local_408);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_5b4 + 4));
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_3f8);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_bf8);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_9e0);
  TSetNatvisTest<`anonymous_namespace'::FSetResolver>::
  TSetNatvisTest<_anonymous_namespace_::FSetResolver>(&local_c78);
  TSetNatvisTest<`anonymous_namespace'::FSparseSetResolver>::
  TSetNatvisTest<_anonymous_namespace_::FSparseSetResolver>(&local_c77);
  TSetNatvisTest<`anonymous_namespace'::FCompactSetResolver>::
  TSetNatvisTest<_anonymous_namespace_::FCompactSetResolver>(&local_c76);
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>
            ((TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *)&local_388);
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>
            ((TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *)&local_580);
  local_c28 = &local_580;
  if (local_580.ArrayMax < 0x10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x10,&local_c28->AllocatorInstance,local_580.ArrayNum,&local_580.ArrayMax);
  }
  local_258[0] = 4;
  local_258[1] = 1;
  local_258[2] = 2;
  local_258[3] = 5;
  local_258[4] = 3;
  piVar4 = std::initializer_list<int>::initializer_list<int>(&local_2f8,local_258,local_258 + 5);
  piVar8 = &local_3e8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
    piVar8 = (initializer_list<int> *)((longlong)&piVar8->_First + 1);
  }
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>
            ((TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *)&local_398,&local_3e8);
  local_240[0] = 4;
  local_240[1] = 1;
  local_240[2] = 2;
  local_240[3] = 5;
  local_240[4] = 3;
  piVar4 = std::initializer_list<int>::initializer_list<int>(&local_2e8,local_240,local_240 + 5);
  piVar8 = &local_3d8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
    piVar8 = (initializer_list<int> *)((longlong)&piVar8->_First + 1);
  }
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>
            ((TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *)&local_590,&local_3d8);
  local_c30 = &local_590;
  if (local_590.ArrayMax < 0x10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x10,&local_c30->AllocatorInstance,local_590.ArrayNum,&local_590.ArrayMax);
  }
  local_228[0] = 4;
  local_228[1] = 1;
  local_228[2] = 2;
  local_228[3] = 5;
  local_228[4] = 3;
  piVar4 = std::initializer_list<int>::initializer_list<int>(&local_2d8,local_228,local_228 + 5);
  piVar8 = &local_3c8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
    piVar8 = (initializer_list<int> *)((longlong)&piVar8->_First + 1);
  }
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::
  TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>
            ((TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *)&local_9f0,&local_3c8);
  local_b08[0] = 1;
  local_c5c = Algo::BinarySearch<TArray<int,TSizedDefaultAllocator<32>_>,int,TLess<int>_>
                        (&local_9f0,local_b08,local_c75);
  local_be8 = local_c5c;
  if (local_c5c != -1) {
    local_6c8 = &local_9f0;
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(local_6c8,local_c5c,Default);
  }
  local_be0[0] = 5;
  local_c58 = Algo::BinarySearch<TArray<int,TSizedDefaultAllocator<32>_>,int,TLess<int>_>
                        (&local_9f0,local_be0,local_c74);
  local_bd8 = local_c58;
  if (local_c58 != -1) {
    local_6c0 = &local_9f0;
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(local_6c0,local_c58,Default);
  }
  ::FString::FString(&local_1a8,"d1");
  ::FString::FString(&local_198,"a2");
  ::FString::FString(&local_188,"b3");
  ::FString::FString(&local_178,"e4");
  ::FString::FString(&local_168,"c5");
  piVar5 = std::initializer_list<FString>::initializer_list<FString>
                     (&local_2c8,&local_1a8,&local_158);
  piVar9 = &local_3b8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar9->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<FString> *)((longlong)&piVar5->_First + 1);
    piVar9 = (initializer_list<FString> *)((longlong)&piVar9->_First + 1);
  }
  TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>::
  TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>
            ((TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_> *)&local_3a8,&local_3b8
            );
  _vector_destructor_iterator_(&local_1a8,0x10,5,::FString::~FString);
  TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
  ::
  TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
            ((TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
              *)&local_b00);
  local_c38 = &local_b00;
  if (local_b00.ArrayMax < 5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,5,&local_c38->AllocatorInstance,local_b00.ArrayNum,&local_b00.ArrayMax);
  }
  local_a60 = ::operator_new(0x10);
  if (local_a60 == (FString *)0x0) {
    local_a58 = (FString *)0x0;
  }
  else {
    local_a58 = ::FString::FString(local_a60,"d1");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b58,local_a58);
  TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>_>
            ((TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
              *)&local_b00,(TUniquePtr<FString,TDefaultDelete<FString>_> *)local_5b4,
             (bool *)&local_b58);
  local_6b8 = (TDefaultDelete<FString> *)&local_b58;
  local_6b0 = local_b58.Ptr;
  local_6a8 = local_6b8;
  TDefaultDelete<FString>::operator()(local_6b8,local_b58.Ptr);
  local_a50 = ::operator_new(0x10);
  if (local_a50 == (FString *)0x0) {
    local_a48 = (FString *)0x0;
  }
  else {
    local_a48 = ::FString::FString(local_a50,"a2");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b50,local_a48);
  TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>_>
            ((TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
              *)&local_b00,(TUniquePtr<FString,TDefaultDelete<FString>_> *)local_9d0,
             (bool *)&local_b50);
  local_6a0 = (TDefaultDelete<FString> *)&local_b50;
  local_698 = local_b50.Ptr;
  local_690 = local_6a0;
  TDefaultDelete<FString>::operator()(local_6a0,local_b50.Ptr);
  local_a40 = ::operator_new(0x10);
  if (local_a40 == (FString *)0x0) {
    local_a38 = (FString *)0x0;
  }
  else {
    local_a38 = ::FString::FString(local_a40,"b3");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b48,local_a38);
  TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>_>
            ((TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
              *)&local_b00,(TUniquePtr<FString,TDefaultDelete<FString>_> *)(local_9d0 + 4),
             (bool *)&local_b48);
  local_688 = (TDefaultDelete<FString> *)&local_b48;
  local_680 = local_b48.Ptr;
  local_678 = local_688;
  TDefaultDelete<FString>::operator()(local_688,local_b48.Ptr);
  local_a30 = ::operator_new(0x10);
  if (local_a30 == (FString *)0x0) {
    local_a28 = (FString *)0x0;
  }
  else {
    local_a28 = ::FString::FString(local_a30,"e4");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b40,local_a28);
  TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>_>
            ((TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
              *)&local_b00,(TUniquePtr<FString,TDefaultDelete<FString>_> *)local_9c8,
             (bool *)&local_b40);
  local_670 = (TDefaultDelete<FString> *)&local_b40;
  local_668 = local_b40.Ptr;
  local_660 = local_670;
  TDefaultDelete<FString>::operator()(local_670,local_b40.Ptr);
  local_a20 = ::operator_new(0x10);
  if (local_a20 == (FString *)0x0) {
    local_a18 = (FString *)0x0;
  }
  else {
    local_a18 = ::FString::FString(local_a20,"c5");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b38,local_a18);
  TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>_>
            ((TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
              *)&local_b00,(TUniquePtr<FString,TDefaultDelete<FString>_> *)(local_9c8 + 4),
             (bool *)&local_b38);
  local_658 = (TDefaultDelete<FString> *)&local_b38;
  local_650 = local_b38.Ptr;
  local_648 = local_658;
  TDefaultDelete<FString>::operator()(local_658,local_b38.Ptr);
  PlaceBreakpointHere();
  TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>_>(&local_b00);
  TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
            (&local_3a8);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_9f0);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_590);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_398);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_580);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_388);
  TMapNatvisTest<`anonymous_namespace'::FSetResolver>::Run(&local_c73);
  TMapNatvisTest<`anonymous_namespace'::FSparseSetResolver>::Run(&local_c72);
  TMapNatvisTest<`anonymous_namespace'::FCompactSetResolver>::Run(&local_c71);
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
            ((TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *)
             &local_338);
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
            ((TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *)
             &local_450);
  local_c40 = &local_450;
  if (local_450.ArrayMax < 0x10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x10,&local_c40->AllocatorInstance,local_450.ArrayNum,&local_450.ArrayMax);
  }
  ::FString::FString(&local_530,"d");
  local_bd4[0] = 1;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_148,&local_530,local_bd4);
  ::FString::FString(&local_540,"a");
  local_bd4[1] = 2;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_138,&local_540,local_bd4 + 1);
  ::FString::FString(&local_550,"b");
  local_bd4[2] = 3;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_128,&local_550,local_bd4 + 2);
  ::FString::FString(&local_560,"e");
  local_bd4[3] = 4;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_118,&local_560,local_bd4 + 3);
  ::FString::FString(&local_570,"c");
  local_bd4[4] = 5;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_108,&local_570,local_bd4 + 4);
  piVar6 = std::initializer_list<TPairInitializer<FString_const_&,int_const_&>_>::
           initializer_list<TPairInitializer<FString_const_&,int_const_&>_>
                     (&local_2b8,&local_148,&local_f8);
  piVar10 = &local_378;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar10->_First = *(undefined1 *)&piVar6->_First;
    piVar6 = (initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *)
             ((longlong)&piVar6->_First + 1);
    piVar10 = (initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *)
              ((longlong)&piVar10->_First + 1);
  }
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
            ((TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *)
             &local_348,&local_378);
  ::FString::~FString(&local_570);
  ::FString::~FString(&local_560);
  ::FString::~FString(&local_550);
  ::FString::~FString(&local_540);
  ::FString::~FString(&local_530);
  ::FString::FString(&local_4e0,"d");
  local_bd4[5] = 1;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_e8,&local_4e0,local_bd4 + 5);
  ::FString::FString(&local_4f0,"a");
  local_bd4[6] = 2;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_d8,&local_4f0,local_bd4 + 6);
  ::FString::FString(&local_500,"b");
  local_bd4[7] = 3;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_c8,&local_500,local_bd4 + 7);
  ::FString::FString(&local_510,"e");
  local_bd4[8] = 4;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_b8,&local_510,local_bd4 + 8);
  ::FString::FString(&local_520,"c");
  local_bd4[9] = 5;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_a8,&local_520,local_bd4 + 9);
  piVar6 = std::initializer_list<TPairInitializer<FString_const_&,int_const_&>_>::
           initializer_list<TPairInitializer<FString_const_&,int_const_&>_>
                     (&local_2a8,&local_e8,&local_98);
  piVar10 = &local_368;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar10->_First = *(undefined1 *)&piVar6->_First;
    piVar6 = (initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *)
             ((longlong)&piVar6->_First + 1);
    piVar10 = (initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *)
              ((longlong)&piVar10->_First + 1);
  }
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
            ((TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *)
             &local_460,&local_368);
  ::FString::~FString(&local_520);
  ::FString::~FString(&local_510);
  ::FString::~FString(&local_500);
  ::FString::~FString(&local_4f0);
  ::FString::~FString(&local_4e0);
  local_c48 = &local_460;
  if (local_460.ArrayMax < 0x10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x10,&local_c48->AllocatorInstance,local_460.ArrayNum,&local_460.ArrayMax);
  }
  ::FString::FString(&local_490,"d");
  local_bd4[10] = 1;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_88,&local_490,local_bd4 + 10);
  ::FString::FString(&local_4a0,"a");
  local_bd4[0xb] = 2;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_78,&local_4a0,local_bd4 + 0xb);
  ::FString::FString(&local_4b0,"b");
  local_bd4[0xc] = 3;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_68,&local_4b0,local_bd4 + 0xc);
  ::FString::FString(&local_4c0,"e");
  local_bd4[0xd] = 4;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_58,&local_4c0,local_bd4 + 0xd);
  ::FString::FString(&local_4d0,"c");
  local_bd4[0xe] = 5;
  TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
            (&local_48,&local_4d0,local_bd4 + 0xe);
  piVar6 = std::initializer_list<TPairInitializer<FString_const_&,int_const_&>_>::
           initializer_list<TPairInitializer<FString_const_&,int_const_&>_>
                     (&local_298,&local_88,&local_38);
  piVar10 = &local_358;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar10->_First = *(undefined1 *)&piVar6->_First;
    piVar6 = (initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *)
             ((longlong)&piVar6->_First + 1);
    piVar10 = (initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *)
              ((longlong)&piVar10->_First + 1);
  }
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
            ((TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *)
             &local_5a0,&local_358);
  ::FString::~FString(&local_4d0);
  ::FString::~FString(&local_4c0);
  ::FString::~FString(&local_4b0);
  ::FString::~FString(&local_4a0);
  ::FString::~FString(&local_490);
  ::FString::FString(&local_480,"a");
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::Remove
            ((TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *)
             &local_5a0,&local_480);
  ::FString::~FString(&local_480);
  ::FString::FString(&local_470,"e");
  TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::Remove
            ((TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *)
             &local_5a0,&local_470);
  ::FString::~FString(&local_470);
  TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
  ::
  TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
            ((TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
              *)&local_af0);
  local_c50 = &local_af0;
  if (local_af0.ArrayMax < 5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,5,&local_c50->AllocatorInstance,local_af0.ArrayNum,&local_af0.ArrayMax);
  }
  local_bd4[0xf] = 1;
  local_a10 = ::operator_new(0x10);
  if (local_a10 == (FString *)0x0) {
    local_9f8 = (FString *)0x0;
  }
  else {
    local_9f8 = ::FString::FString(local_a10,"d");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b30,local_9f8);
  TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>,int>
            ((TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
              *)&local_af0,&local_b30,local_bd4 + 0xf);
  local_640 = (TDefaultDelete<FString> *)&local_b30;
  local_638 = local_b30.Ptr;
  local_630 = local_640;
  TDefaultDelete<FString>::operator()(local_640,local_b30.Ptr);
  local_bd4[0x10] = 2;
  local_a00 = ::operator_new(0x10);
  if (local_a00 == (FString *)0x0) {
    local_a08 = (FString *)0x0;
  }
  else {
    local_a08 = ::FString::FString(local_a00,"a");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b28,local_a08);
  TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>,int>
            ((TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
              *)&local_af0,&local_b28,local_bd4 + 0x10);
  local_628 = (TDefaultDelete<FString> *)&local_b28;
  local_620 = local_b28.Ptr;
  local_618 = local_628;
  TDefaultDelete<FString>::operator()(local_628,local_b28.Ptr);
  local_bd4[0x11] = 3;
  local_ab8 = ::operator_new(0x10);
  if (local_ab8 == (FString *)0x0) {
    local_ac0 = (FString *)0x0;
  }
  else {
    local_ac0 = ::FString::FString(local_ab8,"b");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b20,local_ac0);
  TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>,int>
            ((TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
              *)&local_af0,&local_b20,local_bd4 + 0x11);
  local_610 = (TDefaultDelete<FString> *)&local_b20;
  local_608 = local_b20.Ptr;
  local_600 = local_610;
  TDefaultDelete<FString>::operator()(local_610,local_b20.Ptr);
  local_bd4[0x12] = 4;
  local_ac8 = ::operator_new(0x10);
  if (local_ac8 == (FString *)0x0) {
    local_ad0 = (FString *)0x0;
  }
  else {
    local_ad0 = ::FString::FString(local_ac8,"e");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b18,local_ad0);
  TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>,int>
            ((TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
              *)&local_af0,&local_b18,local_bd4 + 0x12);
  local_5f8 = (TDefaultDelete<FString> *)&local_b18;
  local_5f0 = local_b18.Ptr;
  local_5e8 = local_5f8;
  TDefaultDelete<FString>::operator()(local_5f8,local_b18.Ptr);
  local_bd4[0x13] = 5;
  local_ad8 = ::operator_new(0x10);
  if (local_ad8 == (FString *)0x0) {
    local_ae0 = (FString *)0x0;
  }
  else {
    local_ae0 = ::FString::FString(local_ad8,"c");
  }
  TUniquePtr<FString,TDefaultDelete<FString>_>::
  TUniquePtr<FString,TDefaultDelete<FString>_><FString>(&local_b10,local_ae0);
  TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
  ::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>,int>
            ((TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
              *)&local_af0,&local_b10,local_bd4 + 0x13);
  local_5e0 = (TDefaultDelete<FString> *)&local_b10;
  local_5d8 = local_b10.Ptr;
  local_5d0 = local_5e0;
  TDefaultDelete<FString>::operator()(local_5e0,local_b10.Ptr);
  PlaceBreakpointHere();
  TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>::
  ~TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>
            (&local_af0);
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>::
  ~TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>(&local_5a0);
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>::
  ~TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>(&local_460);
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>::
  ~TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>(&local_348);
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>::
  ~TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>(&local_450);
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>::
  ~TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>(&local_338);
  return true;
}

// GetBeautifiedTestName @ 1414c6c10

FString * __thiscall
FContainersNatvisTest::GetBeautifiedTestName
          (FContainersNatvisTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Containers.Natvis");
  return __return_storage_ptr__;
}

