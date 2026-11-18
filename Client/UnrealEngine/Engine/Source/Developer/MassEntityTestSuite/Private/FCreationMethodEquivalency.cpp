// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147151000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471511e3) */
/* WARNING: Removing unreachable block (ram,0x00014715136a) */
/* WARNING: Removing unreachable block (ram,0x000147151466) */
/* WARNING: Removing unreachable block (ram,0x000147151911) */
/* WARNING: Removing unreachable block (ram,0x000147151a3b) */
/* WARNING: Removing unreachable block (ram,0x000147151ec1) */
/* WARNING: Removing unreachable block (ram,0x0001471526b3) */
/* WARNING: Removing unreachable block (ram,0x000147152800) */
/* WARNING: Removing unreachable block (ram,0x000147152953) */
/* WARNING: Removing unreachable block (ram,0x000147152aff) */
/* WARNING: Removing unreachable block (ram,0x000147152c10) */
/* WARNING: Removing unreachable block (ram,0x000147152d61) */
/* WARNING: Removing unreachable block (ram,0x000147152e79) */
/* WARNING: Removing unreachable block (ram,0x000147152fd0) */
/* WARNING: Removing unreachable block (ram,0x0001471530e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityCollection::FCreationMethodEquivalency::InstantTest
          (FCreationMethodEquivalency *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> *piVar5;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar6;
  TArrayView<FMassEntityHandle,int> *pTVar7;
  initializer_list<FMassArchetypeEntityCollection> *piVar8;
  longlong lVar9;
  undefined1 *puVar10;
  initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> *piVar11;
  bool *pbVar12;
  TArrayView<FMassEntityHandle_const_,int> *pTVar13;
  initializer_list<FMassArchetypeEntityCollection> *piVar14;
  undefined1 auStack_ba8 [32];
  longlong local_b88;
  longlong local_b80;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b78;
  TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_b68;
  bool local_b58 [3];
  char local_b55;
  undefined1 local_b54;
  bool local_b53;
  char local_b52;
  undefined1 local_b51;
  bool local_b50;
  char local_b4f;
  undefined1 local_b4e;
  bool local_b4d;
  char local_b4c;
  undefined1 local_b4b;
  undefined1 local_b4a;
  int local_b48;
  int local_b44;
  int local_b40;
  int local_b38;
  int local_b30;
  uint local_b2c;
  undefined4 local_b28;
  uint local_b24;
  undefined4 local_b20;
  uint local_b1c;
  uint local_b18;
  uint local_b14;
  undefined4 local_b10;
  uint local_b0c;
  undefined4 local_b08;
  uint local_b04;
  uint local_b00;
  uint local_afc;
  uint local_af8;
  uint local_af4;
  undefined4 local_af0;
  uint local_aec;
  uint local_ae8;
  uint local_ae4;
  uint local_ae0;
  uint local_adc;
  uint local_ad8;
  uint local_ad4;
  undefined4 local_ad0;
  uint local_acc;
  undefined4 local_ac8;
  uint local_ac4;
  undefined4 local_ac0;
  uint local_abc;
  undefined4 local_ab8;
  uint local_ab4;
  undefined4 local_ab0;
  uint local_aac;
  undefined4 local_aa8;
  uint local_aa4;
  undefined4 local_aa0;
  uint local_a9c;
  undefined4 local_a98;
  uint local_a94;
  undefined4 local_a90;
  uint local_a8c;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_a88;
  uint local_a80;
  undefined4 local_a7c;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_a78;
  int local_a68;
  int local_a64;
  int local_a60;
  int local_a5c;
  int local_a58;
  int local_a54;
  int local_a50;
  int local_a4c;
  int local_a48;
  int local_a44;
  int local_a40;
  int local_a3c;
  int local_a38;
  int local_a34;
  int local_a30;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_a28;
  FEntityCollection local_a20;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_9f8;
  FEntityCollection local_9e0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_9b8;
  FMassEntityHandle *local_9b0;
  FMassEntityHandle *local_9a8;
  FMassEntityHandle *local_9a0;
  FMassEntityHandle *local_998;
  undefined4 local_990;
  undefined4 local_98c;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_988;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_980;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_978;
  undefined4 local_970;
  undefined4 local_96c;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_968;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_960;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_958;
  TArrayView<FMassEntityHandle_const_,int> *local_950;
  FScriptContainerElement *local_938;
  FScriptContainerElement *local_930;
  FMassEntityHandle *local_928;
  FMassEntityHandle *local_920;
  FMassEntityManager *local_918;
  FMassEntityManager *local_910;
  FAutomationTestBase *local_908;
  undefined4 local_900;
  undefined4 local_8fc;
  FMassEntityHandle *local_8f8;
  FMassEntityHandle *local_8f0;
  FMassEntityHandle *local_8e8;
  undefined4 local_8e0;
  undefined4 local_8dc;
  FMassEntityHandle *local_8d8;
  FMassEntityHandle *local_8d0;
  FMassEntityHandle *local_8c8;
  FMassEntityHandle *local_8c0;
  TArrayView<FMassEntityHandle_const_,int> *local_8b8;
  TArrayView<FMassEntityHandle_const_,int> *local_8b0;
  undefined4 local_8a8;
  undefined4 local_8a4;
  FMassEntityHandle *local_8a0;
  FMassEntityHandle *local_898;
  FMassEntityHandle *local_890;
  TArrayView<FMassEntityHandle_const_,int> *local_888;
  undefined4 local_880;
  undefined4 local_87c;
  FMassEntityHandle *local_878;
  FMassEntityHandle *local_870;
  FMassEntityHandle *local_868;
  FMassEntityHandle *local_860;
  TArrayView<FMassEntityHandle_const_,int> *local_858;
  undefined4 local_850;
  undefined4 local_84c;
  FMassEntityHandle *local_848;
  FMassEntityHandle *local_840;
  FMassEntityHandle *local_838;
  FMassEntityHandle *local_830;
  TArrayView<FMassEntityHandle_const_,int> *local_828;
  TArrayView<FMassEntityHandle_const_,int> *local_820;
  undefined4 local_818;
  undefined4 local_814;
  FMassEntityHandle *local_810;
  FMassEntityHandle *local_808;
  FMassEntityHandle *local_800;
  TArrayView<FMassEntityHandle_const_,int> *local_7f8;
  undefined4 local_7f0;
  undefined4 local_7ec;
  FMassEntityHandle *local_7e8;
  FMassEntityHandle *local_7e0;
  FMassEntityHandle *local_7d8;
  FMassEntityHandle *local_7d0;
  TArrayView<FMassEntityHandle_const_,int> *local_7c8;
  FMassEntityManager *local_7c0;
  FMassEntityManager *local_7b8;
  FAutomationTestBase *local_7b0;
  FMassEntityManager *local_7a8;
  FMassEntityManager *local_7a0;
  FAutomationTestBase *local_798;
  undefined4 local_790;
  undefined4 local_78c;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_788;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_780;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_778;
  TArrayView<FMassEntityHandle_const_,int> *local_770;
  undefined4 local_768;
  undefined4 local_764;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_760;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_758;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_750;
  TArrayView<FMassEntityHandle_const_,int> *local_748;
  undefined4 local_740;
  undefined4 local_73c;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_738;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_730;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_728;
  TArrayView<FMassEntityHandle_const_,int> *local_720;
  undefined4 local_718;
  undefined4 local_714;
  FMassArchetypeEntityCollection *local_710;
  FMassArchetypeEntityCollection *local_708;
  FMassArchetypeEntityCollection *local_700;
  undefined4 local_6f8;
  undefined4 local_6f4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_6f0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_6e8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_6e0;
  TArrayView<FMassEntityHandle_const_,int> *local_6d8;
  FMassArchetypeEntityCollection *local_6d0;
  undefined4 local_6c8;
  undefined4 local_6c4;
  FMassArchetypeEntityCollection *local_6c0;
  FMassArchetypeEntityCollection *local_6b8;
  FMassArchetypeEntityCollection *local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_6a0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_698;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_690;
  TArrayView<FMassEntityHandle_const_,int> *local_688;
  FMassArchetypeEntityCollection *local_680;
  undefined4 local_678;
  undefined4 local_674;
  FMassArchetypeEntityCollection *local_670;
  FMassArchetypeEntityCollection *local_668;
  FMassArchetypeEntityCollection *local_660;
  undefined4 local_658;
  undefined4 local_654;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_650;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_648;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_640;
  TArrayView<FMassEntityHandle_const_,int> *local_638;
  FMassArchetypeEntityCollection *local_630;
  FMassEntityManager *local_628;
  FMassEntityManager *local_620;
  FAutomationTestBase *local_618;
  TArrayView<FMassEntityHandle_const_,int> *local_610;
  TArrayView<FMassEntityHandle_const_,int> *local_608;
  TArrayView<FMassEntityHandle_const_,int> *local_600;
  undefined4 local_5f8;
  undefined4 local_5f4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_5f0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_5e8;
  FEntityCollection local_5e0;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FEntityCollection local_578;
  FEntityCollection local_550;
  undefined1 local_528 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_518;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_508;
  TArrayView<FMassEntityHandle_const_,int> local_4f8;
  TArrayView<FMassEntityHandle_const_,int> local_4e8;
  TArrayView<FMassEntityHandle_const_,int> local_4d8;
  TArrayView<FMassEntityHandle_const_,int> local_4c8;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_498;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_488;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_458;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_448;
  TArrayView<FMassEntityHandle_const_,int> local_438;
  TArrayView<FMassEntityHandle_const_,int> local_428;
  TArrayView<FMassEntityHandle_const_,int> local_418;
  initializer_list<FMassArchetypeEntityCollection> local_408;
  undefined1 local_3f8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_3e8;
  undefined1 local_3d8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_3c8;
  undefined1 local_3b8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_3a8;
  TArrayView<FMassEntityHandle_const_,int> local_398;
  undefined1 local_388 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_378;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_368;
  TArrayView<FMassEntityHandle_const_,int> local_358;
  undefined1 local_348 [16];
  TArrayView<FMassEntityHandle_const_,int> local_338;
  initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> local_328;
  TArrayView<FMassEntityHandle_const_,int> local_318;
  undefined1 local_308 [16];
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_2f8;
  TArrayView<FMassEntityHandle_const_,int> local_2e0;
  TArrayView<FMassEntityHandle,int> local_2d0;
  TArrayView<FMassEntityHandle_const_,int> local_2c0;
  TArrayView<FMassEntityHandle_const_,int> local_2b0;
  TArrayView<FMassEntityHandle_const_,int> local_2a0;
  TArrayView<FMassEntityHandle,int> local_290;
  TArrayView<FMassEntityHandle_const_,int> local_280;
  TArrayView<FMassEntityHandle,int> local_270;
  TArrayView<FMassEntityHandle_const_,int> local_260;
  TArrayView<FMassEntityHandle_const_,int> local_250;
  TArrayView<FMassEntityHandle_const_,int> local_240;
  TArrayView<FMassEntityHandle,int> local_230;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_220;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_210;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_200;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_1f0;
  TArrayView<FMassEntityHandle_const_,int> local_1e0;
  TArrayView<FMassEntityHandle_const_,int> local_1d0;
  TArrayView<FMassEntityHandle_const_,int> local_1c0;
  initializer_list<FMassArchetypeEntityCollection> local_1b0;
  TArrayView<FMassEntityHandle_const_,int> local_1a0;
  TArrayView<FMassEntityHandle_const_,int> local_190;
  TArrayView<FMassEntityHandle_const_,int> local_180;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_170;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_160;
  TArrayView<FMassEntityHandle_const_,int> local_150;
  TArrayView<FMassEntityHandle_const_,int> local_140;
  TArrayView<FMassEntityHandle_const_,int> local_130;
  initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> local_120;
  TArrayView<FMassEntityHandle_const_,int> local_110;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_100;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_f0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_e0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_d0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_b0 [48];
  FMassArchetypeEntityCollection local_80;
  FMassArchetypeEntityCollection local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_ba8;
  local_b30 = *(int *)&this->field_0xc0 / 3;
  local_610 = &local_150;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_610,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x90);
  pTVar13 = &local_398;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
  }
  FEntityCollectionTestBase::GetArraySubset
            ((FEntityCollectionTestBase *)this,&local_e0,&local_398,local_b30);
  local_608 = &local_140;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_608,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xa0);
  pTVar13 = &local_358;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
  }
  FEntityCollectionTestBase::GetArraySubset
            ((FEntityCollectionTestBase *)this,&local_d0,&local_358,local_b30);
  local_600 = &local_130;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_600,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xb0);
  pTVar13 = &local_338;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
  }
  FEntityCollectionTestBase::GetArraySubset
            ((FEntityCollectionTestBase *)this,&local_c0,&local_338,local_b30);
  piVar5 = std::initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (&local_120,&local_e0,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)local_b0);
  piVar11 = &local_328;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&piVar11->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
    piVar11 = (initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)&piVar11->_First + 1);
  }
  TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&local_b68,&local_328);
  _vector_destructor_iterator_
            (&local_e0,0x10,3,
             TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
             ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>);
  local_a7c = 1;
  local_a80 = (uint)(0 < local_b68.ArrayNum);
  if (local_a80 == 0) {
    local_5f8 = 0;
    local_5f4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_b80 = (longlong)local_b68.ArrayNum;
    local_b88 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_5f0 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_b68.AllocatorInstance.Data;
  local_5e8 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_b68.AllocatorInstance.Data;
  local_9b8 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_b68.AllocatorInstance.Data;
  local_a28 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_b68.AllocatorInstance.Data;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_b78.AllocatorInstance);
  local_a3c = local_a28->ArrayNum;
  local_9b0 = (FMassEntityHandle *)(local_a28->AllocatorInstance).Data;
  local_a38 = local_a3c;
  local_9a8 = local_9b0;
  local_9a0 = local_9b0;
  local_998 = local_9b0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::CopyToEmpty<FMassEntityHandle,int>
            (&local_b78,local_9b0,local_a3c,0);
  local_b28 = 1;
  local_b2c = (uint)(1 < local_b68.ArrayNum);
  if (local_b2c == 0) {
    local_990 = 0;
    local_98c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_b80 = (longlong)local_b68.ArrayNum;
    local_b88 = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_988 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_b68.AllocatorInstance.Data;
  local_980 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_b68.AllocatorInstance.Data;
  local_978 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              (local_b68.AllocatorInstance.Data + 0x10);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b78,local_978);
  local_b20 = 1;
  local_b24 = (uint)(2 < local_b68.ArrayNum);
  if (local_b24 == 0) {
    local_970 = 0;
    local_96c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_b80 = (longlong)local_b68.ArrayNum;
    local_b88 = 2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_968 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_b68.AllocatorInstance.Data;
  local_960 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_b68.AllocatorInstance.Data;
  local_958 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              (local_b68.AllocatorInstance.Data + 0x20);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b78,local_958);
  local_950 = &local_110;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_950,&local_b78);
  pTVar13 = &local_318;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
  }
  FEntityCollection::FEntityCollection(&local_578,&local_318);
  FEntityCollection::FEntityCollection(&local_5e0);
  local_a88 = &local_b78;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_9f8,&local_b78.ArrayNum,(FMassEntityHandle *)local_b78.AllocatorInstance.Data);
  local_938 = (local_a88->AllocatorInstance).Data;
  local_a34 = local_a88->ArrayNum;
  local_930 = local_938;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_2f8,&local_a88->ArrayNum,
             (FMassEntityHandle *)(local_938 + (longlong)local_a34 * 8));
  while( true ) {
    if (*local_9f8.CurrentNum != local_9f8.InitialNum) {
      pbVar12 = local_b58;
      for (lVar9 = 1; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pbVar12 = false;
        pbVar12 = pbVar12 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_b58);
    }
    local_b58[1] = local_9f8.Ptr != local_2f8.Ptr;
    local_b1c = (uint)local_b58[1];
    if (!local_b58[1]) break;
    local_928 = local_9f8.Ptr;
    local_920 = local_9f8.Ptr;
    FEntityCollection::AddHandle(&local_5e0,*local_9f8.Ptr);
    local_9f8.Ptr = local_9f8.Ptr + 1;
  }
  local_908 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_918 = *(FMassEntityManager **)&this->field_0x28;
  pTVar6 = FEntityCollection::GetUpToDatePerArchetypeCollections(&local_5e0,&local_100,local_918);
  puVar10 = local_308;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  local_910 = *(FMassEntityManager **)&this->field_0x28;
  pTVar6 = FEntityCollection::GetUpToDatePerArchetypeCollections(&local_578,&local_f0,local_910);
  puVar10 = local_528;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_308;
  pTVar6 = &local_518;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
  }
  puVar10 = local_528;
  pTVar6 = &local_508;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
  }
  local_b58[2] = FEntityCollectionTestBase::CompareCollectionArrays
                           ((FEntityCollectionTestBase *)this,&local_508,&local_518);
  ::FString::FString(&local_5b8,"Collections created from an array of handles vs individual handles"
                    );
  bVar2 = FAutomationTestBase::TestTrue(local_908,&local_5b8,local_b58[2]);
  local_b55 = !bVar2;
  local_b18 = (uint)(byte)local_b55;
  ::FString::~FString(&local_5b8);
  if (local_b55 == '\0') {
    FEntityCollection::FEntityCollection(&local_a20);
    local_b10 = 1;
    local_b14 = (uint)(0 < local_b78.ArrayNum);
    if (local_b14 == 0) {
      local_900 = 0;
      local_8fc = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_b80 = (longlong)local_b78.ArrayNum;
      local_b88 = 0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_8f8 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_8f0 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_8e8 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    FEntityCollection::AddHandle(&local_a20,*(FMassEntityHandle *)local_b78.AllocatorInstance.Data);
    local_8b8 = &local_2e0;
    local_a30 = local_b78.ArrayNum;
    local_a68 = local_b78.ArrayNum / 2;
    local_b08 = 1;
    local_b0c = (uint)(1 < local_b78.ArrayNum);
    if (local_b0c == 0) {
      local_8e0 = 0;
      local_8dc = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_b80 = (longlong)local_b78.ArrayNum;
      local_b88 = 1;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_8d8 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_8d0 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_8c8 = (FMassEntityHandle *)(local_b78.AllocatorInstance.Data + 8);
    local_8c0 = local_8c8;
    pTVar7 = MakeArrayView<FMassEntityHandle>(&local_2d0,local_8c8,local_a68);
    pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
             TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                       (local_8b8,pTVar7);
    pTVar13 = &local_4f8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
      pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
      pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
    }
    FEntityCollection::AppendHandles(&local_a20,&local_4f8);
    local_8b0 = FEntityCollection::GetEntityHandlesView(&local_a20,&local_2c0);
    local_b40 = local_8b0->ArrayNum;
    local_b00 = (uint)(-1 < local_b40);
    local_b04 = (uint)(local_b40 < local_b78.ArrayNum);
    local_a64 = local_b40;
    if (-1 >= local_b40 || local_b40 >= local_b78.ArrayNum) {
      local_8a8 = 0;
      local_8a4 = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_b80 = (longlong)local_b78.ArrayNum;
      local_b88 = (longlong)local_b40;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_8a0 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_898 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_890 = (FMassEntityHandle *)(local_b78.AllocatorInstance.Data + (longlong)local_b40 * 8);
    FEntityCollection::AddHandle(&local_a20,*local_890);
    local_888 = FEntityCollection::GetEntityHandlesView(&local_a20,&local_2b0);
    local_b48 = local_888->ArrayNum;
    local_858 = &local_2a0;
    local_a5c = local_b78.ArrayNum;
    local_a58 = local_b78.ArrayNum - local_b48;
    local_af8 = (uint)(-1 < local_b48);
    local_afc = (uint)(local_b48 < local_b78.ArrayNum);
    local_a60 = local_b48;
    if (-1 >= local_b48 || local_b48 >= local_b78.ArrayNum) {
      local_880 = 0;
      local_87c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_b80 = (longlong)local_b78.ArrayNum;
      local_b88 = (longlong)local_b48;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_878 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_870 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_868 = (FMassEntityHandle *)(local_b78.AllocatorInstance.Data + (longlong)local_b48 * 8);
    local_860 = local_868;
    pTVar7 = MakeArrayView<FMassEntityHandle>(&local_290,local_868,local_a58);
    pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
             TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                       (local_858,pTVar7);
    pTVar13 = &local_4e8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
      pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
      pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
    }
    FEntityCollection::AppendHandles(&local_a20,&local_4e8);
    FEntityCollection::FEntityCollection(&local_9e0);
    local_828 = &local_280;
    local_a54 = local_b78.ArrayNum;
    local_a50 = local_b78.ArrayNum / 2;
    local_af0 = 1;
    local_af4 = (uint)(0 < local_b78.ArrayNum);
    if (local_af4 == 0) {
      local_850 = 0;
      local_84c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_b80 = (longlong)local_b78.ArrayNum;
      local_b88 = 0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_848 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_840 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_838 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_830 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    pTVar7 = MakeArrayView<FMassEntityHandle>
                       (&local_270,(FMassEntityHandle *)local_b78.AllocatorInstance.Data,local_a50);
    pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
             TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                       (local_828,pTVar7);
    pTVar13 = &local_4d8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
      pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
      pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
    }
    FEntityCollection::AppendHandles(&local_9e0,&local_4d8);
    local_820 = FEntityCollection::GetEntityHandlesView(&local_9e0,&local_260);
    local_b38 = local_820->ArrayNum;
    local_ae8 = (uint)(-1 < local_b38);
    local_aec = (uint)(local_b38 < local_b78.ArrayNum);
    local_a4c = local_b38;
    if (-1 >= local_b38 || local_b38 >= local_b78.ArrayNum) {
      local_818 = 0;
      local_814 = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_b80 = (longlong)local_b78.ArrayNum;
      local_b88 = (longlong)local_b38;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_810 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_808 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_800 = (FMassEntityHandle *)(local_b78.AllocatorInstance.Data + (longlong)local_b38 * 8);
    FEntityCollection::AddHandle(&local_9e0,*local_800);
    local_7f8 = FEntityCollection::GetEntityHandlesView(&local_9e0,&local_250);
    local_b44 = local_7f8->ArrayNum;
    local_7c8 = &local_240;
    local_a44 = local_b78.ArrayNum;
    local_a40 = local_b78.ArrayNum - local_b44;
    local_ae0 = (uint)(-1 < local_b44);
    local_ae4 = (uint)(local_b44 < local_b78.ArrayNum);
    local_a48 = local_b44;
    if (-1 >= local_b44 || local_b44 >= local_b78.ArrayNum) {
      local_7f0 = 0;
      local_7ec = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_b80 = (longlong)local_b78.ArrayNum;
      local_b88 = (longlong)local_b44;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_7e8 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_7e0 = (FMassEntityHandle *)local_b78.AllocatorInstance.Data;
    local_7d8 = (FMassEntityHandle *)(local_b78.AllocatorInstance.Data + (longlong)local_b44 * 8);
    local_7d0 = local_7d8;
    pTVar7 = MakeArrayView<FMassEntityHandle>(&local_230,local_7d8,local_a40);
    pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
             TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                       (local_7c8,pTVar7);
    pTVar13 = &local_4c8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
      pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
      pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
    }
    FEntityCollection::AppendHandles(&local_9e0,&local_4c8);
    local_7b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_7c0 = *(FMassEntityManager **)&this->field_0x28;
    pTVar6 = FEntityCollection::GetUpToDatePerArchetypeCollections(&local_9e0,&local_220,local_7c0);
    puVar10 = local_4b8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
      pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar6->DataPtr + 1);
      puVar10 = puVar10 + 1;
    }
    local_7b8 = *(FMassEntityManager **)&this->field_0x28;
    pTVar6 = FEntityCollection::GetUpToDatePerArchetypeCollections(&local_a20,&local_210,local_7b8);
    puVar10 = local_4a8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
      pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar6->DataPtr + 1);
      puVar10 = puVar10 + 1;
    }
    puVar10 = local_4b8;
    pTVar6 = &local_498;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar6->DataPtr = *puVar10;
      puVar10 = puVar10 + 1;
      pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar6->DataPtr + 1);
    }
    puVar10 = local_4a8;
    pTVar6 = &local_488;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar6->DataPtr = *puVar10;
      puVar10 = puVar10 + 1;
      pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar6->DataPtr + 1);
    }
    local_b53 = FEntityCollectionTestBase::CompareCollectionArrays
                          ((FEntityCollectionTestBase *)this,&local_488,&local_498);
    ::FString::FString(&local_5a8,"Collections created with a mix of handles and arrays");
    bVar2 = FAutomationTestBase::TestTrue(local_7b0,&local_5a8,local_b53);
    local_b52 = !bVar2;
    local_adc = (uint)(byte)local_b52;
    ::FString::~FString(&local_5a8);
    if (local_b52 == '\0') {
      local_798 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_7a8 = *(FMassEntityManager **)&this->field_0x28;
      pTVar6 = FEntityCollection::GetUpToDatePerArchetypeCollections
                         (&local_5e0,&local_200,local_7a8);
      puVar10 = local_478;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
        pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                 ((longlong)&pTVar6->DataPtr + 1);
        puVar10 = puVar10 + 1;
      }
      local_7a0 = *(FMassEntityManager **)&this->field_0x28;
      pTVar6 = FEntityCollection::GetUpToDatePerArchetypeCollections
                         (&local_a20,&local_1f0,local_7a0);
      puVar10 = local_468;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
        pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                 ((longlong)&pTVar6->DataPtr + 1);
        puVar10 = puVar10 + 1;
      }
      puVar10 = local_478;
      pTVar6 = &local_458;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined1 *)&pTVar6->DataPtr = *puVar10;
        puVar10 = puVar10 + 1;
        pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                 ((longlong)&pTVar6->DataPtr + 1);
      }
      puVar10 = local_468;
      pTVar6 = &local_448;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined1 *)&pTVar6->DataPtr = *puVar10;
        puVar10 = puVar10 + 1;
        pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                 ((longlong)&pTVar6->DataPtr + 1);
      }
      local_b50 = FEntityCollectionTestBase::CompareCollectionArrays
                            ((FEntityCollectionTestBase *)this,&local_448,&local_458);
      ::FString::FString(&local_598,
                         "Collections created with a mix of handles and arrays vs heterogeneous approaches"
                        );
      bVar2 = FAutomationTestBase::TestTrue(local_798,&local_598,local_b50);
      local_b4f = !bVar2;
      local_ad8 = (uint)(byte)local_b4f;
      ::FString::~FString(&local_598);
      if (local_b4f == '\0') {
        local_770 = &local_1e0;
        local_ad0 = 1;
        local_ad4 = (uint)(0 < local_b68.ArrayNum);
        if (local_ad4 == 0) {
          local_790 = 0;
          local_78c = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_b80 = (longlong)local_b68.ArrayNum;
          local_b88 = 0;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_788 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_780 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_778 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
                 TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                           (local_770,
                            (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                            local_b68.AllocatorInstance.Data);
        pTVar13 = &local_438;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
          pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
        }
        FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
                  ((FMassArchetypeEntityCollection *)(local_b0 + 8),
                   (FMassArchetypeHandle *)&this->field_0x50,&local_438,NoDuplicates);
        local_748 = &local_1d0;
        local_ac8 = 1;
        local_acc = (uint)(1 < local_b68.ArrayNum);
        if (local_acc == 0) {
          local_768 = 0;
          local_764 = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_b80 = (longlong)local_b68.ArrayNum;
          local_b88 = 1;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_760 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_758 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_750 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    (local_b68.AllocatorInstance.Data + 0x10);
        pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
                 TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                           (local_748,local_750);
        pTVar13 = &local_428;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
          pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
        }
        FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
                  (&local_80,(FMassArchetypeHandle *)&this->field_0x60,&local_428,NoDuplicates);
        local_720 = &local_1c0;
        local_ac0 = 1;
        local_ac4 = (uint)(2 < local_b68.ArrayNum);
        if (local_ac4 == 0) {
          local_740 = 0;
          local_73c = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_b80 = (longlong)local_b68.ArrayNum;
          local_b88 = 2;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_738 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_730 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_728 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    (local_b68.AllocatorInstance.Data + 0x20);
        pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
                 TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                           (local_720,local_728);
        pTVar13 = &local_418;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined1 *)&pTVar13->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
          pTVar13 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar13->DataPtr + 1);
        }
        FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
                  (&local_58,(FMassArchetypeHandle *)&this->field_0x70,&local_418,NoDuplicates);
        piVar8 = std::initializer_list<FMassArchetypeEntityCollection>::
                 initializer_list<FMassArchetypeEntityCollection>
                           (&local_1b0,(FMassArchetypeEntityCollection *)(local_b0 + 8),
                            (FMassArchetypeEntityCollection *)&stack0xffffffffffffffd0);
        piVar14 = &local_408;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined1 *)&piVar14->_First = *(undefined1 *)&piVar8->_First;
          piVar8 = (initializer_list<FMassArchetypeEntityCollection> *)
                   ((longlong)&piVar8->_First + 1);
          piVar14 = (initializer_list<FMassArchetypeEntityCollection> *)
                    ((longlong)&piVar14->_First + 1);
        }
        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_a78,&local_408);
        _vector_destructor_iterator_
                  (local_b0 + 8,0x28,3,
                   FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection);
        local_ab8 = 1;
        local_abc = (uint)(0 < local_a78.ArrayNum);
        if (local_abc == 0) {
          local_718 = 0;
          local_714 = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_b80 = (longlong)local_a78.ArrayNum;
          local_b88 = 0;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_710 = (FMassArchetypeEntityCollection *)local_a78.AllocatorInstance.Data;
        local_708 = (FMassArchetypeEntityCollection *)local_a78.AllocatorInstance.Data;
        local_700 = (FMassArchetypeEntityCollection *)local_a78.AllocatorInstance.Data;
        local_6d0 = (FMassArchetypeEntityCollection *)local_a78.AllocatorInstance.Data;
        local_6d8 = &local_1a0;
        local_ab0 = 1;
        local_ab4 = (uint)(0 < local_b68.ArrayNum);
        if (local_ab4 == 0) {
          local_6f8 = 0;
          local_6f4 = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_b80 = (longlong)local_b68.ArrayNum;
          local_b88 = 0;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_6f0 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_6e8 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_6e0 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
                 TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                           (local_6d8,
                            (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                            local_b68.AllocatorInstance.Data);
        puVar10 = local_3f8;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *(undefined1 *)&pTVar4->DataPtr;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
          puVar10 = puVar10 + 1;
        }
        puVar10 = local_3f8;
        pTVar4 = &local_3e8;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined1 *)&pTVar4->DataPtr = *puVar10;
          puVar10 = puVar10 + 1;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
        }
        FEntityCollection::FEntityCollection(&local_550,&local_3e8,local_6d0);
        local_aa8 = 1;
        local_aac = (uint)(1 < local_a78.ArrayNum);
        if (local_aac == 0) {
          local_6c8 = 0;
          local_6c4 = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_b80 = (longlong)local_a78.ArrayNum;
          local_b88 = 1;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_6c0 = (FMassArchetypeEntityCollection *)local_a78.AllocatorInstance.Data;
        local_6b8 = (FMassArchetypeEntityCollection *)local_a78.AllocatorInstance.Data;
        local_6b0 = (FMassArchetypeEntityCollection *)(local_a78.AllocatorInstance.Data + 0x28);
        local_688 = &local_190;
        local_aa0 = 1;
        local_aa4 = (uint)(1 < local_b68.ArrayNum);
        local_680 = local_6b0;
        if (local_aa4 == 0) {
          local_6a8 = 0;
          local_6a4 = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_b80 = (longlong)local_b68.ArrayNum;
          local_b88 = 1;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_6a0 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_698 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_690 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    (local_b68.AllocatorInstance.Data + 0x10);
        pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
                 TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                           (local_688,local_690);
        puVar10 = local_3d8;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *(undefined1 *)&pTVar4->DataPtr;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
          puVar10 = puVar10 + 1;
        }
        puVar10 = local_3d8;
        pTVar4 = &local_3c8;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined1 *)&pTVar4->DataPtr = *puVar10;
          puVar10 = puVar10 + 1;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
        }
        FEntityCollection::AppendHandles(&local_550,&local_3c8,local_680);
        local_a98 = 1;
        local_a9c = (uint)(2 < local_a78.ArrayNum);
        if (local_a9c == 0) {
          local_678 = 0;
          local_674 = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_b80 = (longlong)local_a78.ArrayNum;
          local_b88 = 2;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_670 = (FMassArchetypeEntityCollection *)local_a78.AllocatorInstance.Data;
        local_668 = (FMassArchetypeEntityCollection *)local_a78.AllocatorInstance.Data;
        local_660 = (FMassArchetypeEntityCollection *)(local_a78.AllocatorInstance.Data + 0x50);
        local_638 = &local_180;
        local_a90 = 1;
        local_a94 = (uint)(2 < local_b68.ArrayNum);
        local_630 = local_660;
        if (local_a94 == 0) {
          local_658 = 0;
          local_654 = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_b80 = (longlong)local_b68.ArrayNum;
          local_b88 = 2;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_650 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_648 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    local_b68.AllocatorInstance.Data;
        local_640 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                    (local_b68.AllocatorInstance.Data + 0x20);
        pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
                 TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                           (local_638,local_640);
        puVar10 = local_3b8;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *(undefined1 *)&pTVar4->DataPtr;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
          puVar10 = puVar10 + 1;
        }
        puVar10 = local_3b8;
        pTVar4 = &local_3a8;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined1 *)&pTVar4->DataPtr = *puVar10;
          puVar10 = puVar10 + 1;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
        }
        FEntityCollection::AppendHandles(&local_550,&local_3a8,local_630);
        local_618 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_628 = *(FMassEntityManager **)&this->field_0x28;
        pTVar6 = FEntityCollection::GetUpToDatePerArchetypeCollections
                           (&local_5e0,&local_170,local_628);
        puVar10 = local_348;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
          pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                   ((longlong)&pTVar6->DataPtr + 1);
          puVar10 = puVar10 + 1;
        }
        local_620 = *(FMassEntityManager **)&this->field_0x28;
        pTVar6 = FEntityCollection::GetUpToDatePerArchetypeCollections
                           (&local_550,&local_160,local_620);
        puVar10 = local_388;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
          pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                   ((longlong)&pTVar6->DataPtr + 1);
          puVar10 = puVar10 + 1;
        }
        puVar10 = local_348;
        pTVar6 = &local_378;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined1 *)&pTVar6->DataPtr = *puVar10;
          puVar10 = puVar10 + 1;
          pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                   ((longlong)&pTVar6->DataPtr + 1);
        }
        puVar10 = local_388;
        pTVar6 = &local_368;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined1 *)&pTVar6->DataPtr = *puVar10;
          puVar10 = puVar10 + 1;
          pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                   ((longlong)&pTVar6->DataPtr + 1);
        }
        local_b4d = FEntityCollectionTestBase::CompareCollectionArrays
                              ((FEntityCollectionTestBase *)this,&local_368,&local_378);
        ::FString::FString(&local_588,
                           "Collection created with handles-and-archetype-collections vs handles-only"
                          );
        bVar2 = FAutomationTestBase::TestTrue(local_618,&local_588,local_b4d);
        local_b4c = !bVar2;
        local_a8c = (uint)(byte)local_b4c;
        ::FString::~FString(&local_588);
        if (local_b4c == '\0') {
          local_b4a = 1;
          FEntityCollection::~FEntityCollection(&local_550);
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_a78);
          FEntityCollection::~FEntityCollection(&local_9e0);
          FEntityCollection::~FEntityCollection(&local_a20);
          FEntityCollection::~FEntityCollection(&local_5e0);
          FEntityCollection::~FEntityCollection(&local_578);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b78);
          TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          ::
          ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    (&local_b68);
          local_b54 = local_b4a;
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_b4b = 0;
          FEntityCollection::~FEntityCollection(&local_550);
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_a78);
          FEntityCollection::~FEntityCollection(&local_9e0);
          FEntityCollection::~FEntityCollection(&local_a20);
          FEntityCollection::~FEntityCollection(&local_5e0);
          FEntityCollection::~FEntityCollection(&local_578);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b78);
          TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          ::
          ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    (&local_b68);
          local_b54 = local_b4b;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_b4e = 0;
        FEntityCollection::~FEntityCollection(&local_9e0);
        FEntityCollection::~FEntityCollection(&local_a20);
        FEntityCollection::~FEntityCollection(&local_5e0);
        FEntityCollection::~FEntityCollection(&local_578);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b78);
        TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  (&local_b68);
        local_b54 = local_b4e;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_b51 = 0;
      FEntityCollection::~FEntityCollection(&local_9e0);
      FEntityCollection::~FEntityCollection(&local_a20);
      FEntityCollection::~FEntityCollection(&local_5e0);
      FEntityCollection::~FEntityCollection(&local_578);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b78);
      TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
      ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                (&local_b68);
      local_b54 = local_b51;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_b54 = 0;
    FEntityCollection::~FEntityCollection(&local_5e0);
    FEntityCollection::~FEntityCollection(&local_578);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b78);
    TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
    ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              (&local_b68);
  }
  return (bool)local_b54;
}

