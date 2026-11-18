// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147174900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassQueryExecutorTest::FQueryExecutor_IteratorConsistency::InstantTest
          (FQueryExecutor_IteratorConsistency *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  TNotNull<UObject_*> *pTVar5;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar6;
  TArrayView<UMassProcessor_*_const,int> *pTVar7;
  FTestQueryExecutor_AnyTag *pFVar8;
  FTestQueryExecutor_NeedTagA *pFVar9;
  FTestQueryExecutor_BlockTagB *pFVar10;
  longlong lVar11;
  undefined1 *puVar12;
  FMassArchetypeSharedFragmentValues *pFVar13;
  char *pcVar14;
  undefined1 auStackY_1118 [32];
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> local_10c8;
  char local_10b8 [9];
  undefined1 local_10af;
  char local_10ae;
  undefined1 local_10ad;
  undefined1 local_10ac;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_10a8;
  uint local_1098;
  uint local_1094;
  uint local_1090;
  int local_108c;
  int local_1088;
  int local_1084;
  uint local_1080;
  uint local_107c;
  uint local_1078;
  FObjectPtr_u_0 local_1070;
  FObjectPtr_u_0 local_1068;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_1060;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_1058;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_1050;
  FObjectPtr_u_0 local_1048;
  int local_1040;
  int local_103c;
  FScriptContainerElement *local_1038;
  FScriptContainerElement *local_1030;
  int local_1028;
  int local_1024;
  UMassTestProcessorAutoExecuteQuery *local_1020;
  UMassTestProcessorAutoExecuteQuery *local_1018;
  UMassTestProcessorAutoExecuteQuery *local_1010;
  FScriptContainerElement *local_1008;
  int local_1000;
  int local_ffc;
  TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> local_ff8;
  TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> local_fe8;
  TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> local_fd8;
  FMassEntityHandle *local_fc8;
  FObjectPtr local_fc0;
  FObjectPtr local_fb8;
  FObjectPtr local_fb0;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_fa8;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_f90;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_f78;
  undefined4 local_f60;
  undefined4 local_f5c;
  FMassEntityManager *local_f58;
  FMassEntityManager *local_f50;
  FScriptContainerElement *local_f38;
  FScriptContainerElement *local_f30;
  FMassEntityHandle *local_f28;
  FMassEntityHandle *local_f20;
  FMassEntityHandle local_f18;
  UScriptStruct *local_f10;
  FMassEntityHandle local_f08;
  FMassEntityManager *local_f00;
  FMassEntityManager *local_ef8;
  FScriptContainerElement *local_ee0;
  FScriptContainerElement *local_ed8;
  FMassEntityHandle *local_ed0;
  FMassEntityHandle *local_ec8;
  FMassEntityHandle local_ec0;
  UScriptStruct *local_eb8;
  FMassEntityHandle local_eb0;
  FMassEntityManager *local_ea8;
  FMassEntityManager *local_ea0;
  FScriptContainerElement *local_e88;
  FScriptContainerElement *local_e80;
  FMassEntityHandle *local_e78;
  FMassEntityHandle local_e70;
  UScriptStruct *local_e68;
  FMassEntityHandle local_e60;
  FMassEntityManager *local_e58;
  FMassEntityHandle local_e50;
  UScriptStruct *local_e48;
  FMassEntityHandle local_e40;
  FMassEntityManager *local_e38;
  UMassTestProcessorAutoExecuteQuery *local_e30;
  UMassTestProcessorAutoExecuteQuery *local_e28;
  FObjectPtr_u_0 *local_e20;
  UObject *local_e18;
  UObject *local_e10;
  UObject *local_e08;
  UObject *local_e00;
  UObject *local_df8;
  UObject *local_df0;
  UObject *local_de8;
  UObject *local_de0;
  UObject *local_dd8;
  undefined1 *local_dd0;
  UMassTestProcessorAutoExecuteQuery *local_dc8;
  UMassTestProcessorAutoExecuteQuery *local_dc0;
  UMassTestProcessorAutoExecuteQuery *local_db8;
  UMassTestProcessorAutoExecuteQuery *local_db0;
  TSharedPtr<UE::Mass::FQueryExecutor,1> *local_da8;
  TSharedPtr<UE::Mass::FQueryExecutor,1> *local_da0;
  UMassTestProcessorAutoExecuteQuery *local_d98;
  UMassProcessor *local_d90;
  UMassProcessor *local_d88;
  UMassProcessor *local_d80;
  UMassProcessor *local_d78;
  undefined1 *local_d70;
  UPackage *local_d68;
  TNotNull<UObject_*> *local_d60;
  UObject *local_d58;
  TSharedRef<FMassEntityManager,1> *local_d50;
  UObject *local_d48;
  UMassProcessor *local_d40;
  UMassTestProcessorAutoExecuteQuery *local_d38;
  UMassTestProcessorAutoExecuteQuery *local_d30;
  FObjectPtr_u_0 *local_d28;
  UObject *local_d20;
  UObject *local_d18;
  UObject *local_d10;
  UObject *local_d08;
  UObject *local_d00;
  UObject *local_cf8;
  UObject *local_cf0;
  UObject *local_ce8;
  UObject *local_ce0;
  undefined1 *local_cd8;
  UMassTestProcessorAutoExecuteQuery *local_cd0;
  UMassTestProcessorAutoExecuteQuery *local_cc8;
  UMassTestProcessorAutoExecuteQuery *local_cc0;
  UMassTestProcessorAutoExecuteQuery *local_cb8;
  TSharedPtr<UE::Mass::FQueryExecutor,1> *local_cb0;
  TSharedPtr<UE::Mass::FQueryExecutor,1> *local_ca8;
  UMassTestProcessorAutoExecuteQuery *local_ca0;
  UMassProcessor *local_c98;
  UMassProcessor *local_c90;
  UMassProcessor *local_c88;
  UMassProcessor *local_c80;
  undefined1 *local_c78;
  UPackage *local_c70;
  TNotNull<UObject_*> *local_c68;
  UObject *local_c60;
  TSharedRef<FMassEntityManager,1> *local_c58;
  UObject *local_c50;
  UMassProcessor *local_c48;
  UMassTestProcessorAutoExecuteQuery *local_c40;
  UMassTestProcessorAutoExecuteQuery *local_c38;
  FObjectPtr_u_0 *local_c30;
  UObject *local_c28;
  UObject *local_c20;
  UObject *local_c18;
  UObject *local_c10;
  UObject *local_c08;
  UObject *local_c00;
  UObject *local_bf8;
  UObject *local_bf0;
  UObject *local_be8;
  undefined1 *local_be0;
  UMassTestProcessorAutoExecuteQuery *local_bd8;
  UMassTestProcessorAutoExecuteQuery *local_bd0;
  UMassTestProcessorAutoExecuteQuery *local_bc8;
  UMassTestProcessorAutoExecuteQuery *local_bc0;
  TSharedPtr<UE::Mass::FQueryExecutor,1> *local_bb8;
  TSharedPtr<UE::Mass::FQueryExecutor,1> *local_bb0;
  UMassTestProcessorAutoExecuteQuery *local_ba8;
  UMassProcessor *local_ba0;
  UMassProcessor *local_b98;
  UMassProcessor *local_b90;
  UMassProcessor *local_b88;
  undefined1 *local_b80;
  UPackage *local_b78;
  TNotNull<UObject_*> *local_b70;
  UObject *local_b68;
  TSharedRef<FMassEntityManager,1> *local_b60;
  UObject *local_b58;
  UMassProcessor *local_b50;
  FObjectPtr *local_b48;
  FScriptContainerElement *local_b40;
  FScriptContainerElement *local_b38;
  FScriptContainerElement *local_b30;
  FScriptContainerElement *local_b28;
  FScriptContainerElement *local_b20;
  FScriptContainerElement *local_b18;
  undefined4 local_b10;
  undefined4 local_b0c;
  FScriptContainerElement *local_b08;
  FScriptContainerElement *local_b00;
  FScriptContainerElement *local_af8;
  longlong local_af0;
  longlong local_ae8;
  FScriptContainerElement *local_ae0;
  FScriptContainerElement *local_ad8;
  FScriptContainerElement *local_ad0;
  TObjectPtr<UMassProcessor> *local_ac8;
  FObjectPtr *local_ac0;
  FScriptContainerElement *local_ab8;
  FScriptContainerElement *local_ab0;
  FScriptContainerElement *local_aa8;
  FScriptContainerElement *local_aa0;
  FScriptContainerElement *local_a98;
  FScriptContainerElement *local_a90;
  undefined4 local_a88;
  undefined4 local_a84;
  undefined4 local_a80;
  FScriptContainerElement *local_a78;
  FScriptContainerElement *local_a70;
  longlong local_a68;
  longlong local_a60;
  FScriptContainerElement *local_a58;
  FScriptContainerElement *local_a50;
  FScriptContainerElement *local_a48;
  TObjectPtr<UMassProcessor> *local_a40;
  FObjectPtr *local_a38;
  FScriptContainerElement *local_a30;
  FScriptContainerElement *local_a28;
  FScriptContainerElement *local_a20;
  FScriptContainerElement *local_a18;
  FScriptContainerElement *local_a10;
  FScriptContainerElement *local_a08;
  undefined4 local_a00;
  undefined4 local_9fc;
  FScriptContainerElement *local_9f8;
  FScriptContainerElement *local_9f0;
  FScriptContainerElement *local_9e8;
  longlong local_9e0;
  longlong local_9d8;
  FScriptContainerElement *local_9d0;
  FScriptContainerElement *local_9c8;
  FScriptContainerElement *local_9c0;
  TObjectPtr<UMassProcessor> *local_9b8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_9b0;
  TArrayView<UMassProcessor_*_const,int> *local_9a8;
  FAutomationTestBase *local_9a0;
  FAutomationTestBase *local_998;
  FAutomationTestBase *local_990;
  FScriptContainerElement *local_988;
  undefined4 local_980;
  undefined4 local_97c;
  undefined4 local_978;
  int local_974;
  int local_970;
  int local_96c;
  undefined4 local_968;
  FString local_960;
  FString local_950;
  FString local_940;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_930;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_920;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_910;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_900;
  TSharedRef<FMassEntityManager,1> local_8f0;
  TSharedRef<FMassEntityManager,1> local_8e0;
  TSharedRef<FMassEntityManager,1> local_8d0;
  undefined1 local_8c0 [16];
  undefined1 local_8b0 [24];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_898;
  TArrayView<UMassProcessor_*_const,int> local_888;
  TNotNull<UObject_*> local_878;
  TNotNull<UObject_*> local_870;
  TNotNull<UObject_*> local_868;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_860;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_848;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_830;
  TSharedPtr<UE::Mass::FQueryExecutor,1> local_818;
  TSharedPtr<UE::Mass::FQueryExecutor,1> local_808;
  TSharedPtr<UE::Mass::FQueryExecutor,1> local_7f8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_7e8;
  TArrayView<UMassProcessor_*_const,int> local_7d8;
  FMassArchetypeSharedFragmentValues local_7c8;
  FMassArchetypeSharedFragmentValues local_758;
  FMassArchetypeSharedFragmentValues local_6e8;
  FMassArchetypeSharedFragmentValues local_678;
  FProcessingContext local_608;
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x147174911;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1118;
  local_a80 = 7;
  local_980 = 9;
  local_97c = 0xd;
  local_978 = 0x11;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_10a8.AllocatorInstance);
  local_10a8.ArrayNum = 0;
  local_10a8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_10a8.AllocatorInstance);
  local_f58 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar13 = &local_7c8;
  for (lVar11 = 0x68; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&pFVar13->HashCache = 0;
    pFVar13 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar13->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_7c8);
  FMassEntityManager::BatchCreateEntities
            (local_f58,&local_930,(FMassArchetypeHandle *)&this->field_0x50,&local_7c8,7,&local_10a8
            );
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_930);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_7c8);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset(&local_10a8,0);
  local_f50 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar13 = &local_758;
  for (lVar11 = 0x68; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&pFVar13->HashCache = 0;
    pFVar13 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar13->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_758);
  FMassEntityManager::BatchCreateEntities
            (local_f50,&local_920,(FMassArchetypeHandle *)&this->field_0x50,&local_758,9,&local_10a8
            );
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_920);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_758);
  local_1058 = &local_10a8;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_fa8,&local_10a8.ArrayNum,(FMassEntityHandle *)local_10a8.AllocatorInstance.Data)
  ;
  local_f38 = (local_1058->AllocatorInstance).Data;
  local_1040 = local_1058->ArrayNum;
  local_f30 = local_f38;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_860,&local_1058->ArrayNum,
             (FMassEntityHandle *)(local_f38 + (longlong)local_1040 * 8));
  while( true ) {
    if (*local_fa8.CurrentNum != local_fa8.InitialNum) {
      pcVar14 = local_10b8;
      for (lVar11 = 1; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pcVar14 = '\0';
        pcVar14 = pcVar14 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_10b8);
    }
    local_10b8[1] = local_fa8.Ptr != local_860.Ptr;
    local_1098 = (uint)(byte)local_10b8[1];
    if (!(bool)local_10b8[1]) break;
    local_f28 = local_fa8.Ptr;
    local_f20 = local_fa8.Ptr;
    local_f00 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_f10 = FTestTag_A::StaticStruct();
    local_f18 = *local_f20;
    local_f08 = local_f18;
    FMassEntityManager::AddTagToEntity(local_f00,local_f18,local_f10);
    local_fa8.Ptr = local_fa8.Ptr + 1;
  }
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset(&local_10a8,0);
  local_ef8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar13 = &local_6e8;
  for (lVar11 = 0x68; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&pFVar13->HashCache = 0;
    pFVar13 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar13->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_6e8);
  FMassEntityManager::BatchCreateEntities
            (local_ef8,&local_910,(FMassArchetypeHandle *)&this->field_0x50,&local_6e8,0xd,
             &local_10a8);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_910);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_6e8);
  local_1060 = &local_10a8;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_f90,&local_10a8.ArrayNum,(FMassEntityHandle *)local_10a8.AllocatorInstance.Data)
  ;
  local_ee0 = (local_1060->AllocatorInstance).Data;
  local_103c = local_1060->ArrayNum;
  local_ed8 = local_ee0;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_848,&local_1060->ArrayNum,
             (FMassEntityHandle *)(local_ee0 + (longlong)local_103c * 8));
  while( true ) {
    if (*local_f90.CurrentNum != local_f90.InitialNum) {
      pcVar14 = local_10b8 + 2;
      for (lVar11 = 1; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pcVar14 = '\0';
        pcVar14 = pcVar14 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_10b8 + 2);
    }
    local_10b8[3] = local_f90.Ptr != local_848.Ptr;
    local_1094 = (uint)(byte)local_10b8[3];
    if (!(bool)local_10b8[3]) break;
    local_ed0 = local_f90.Ptr;
    local_ec8 = local_f90.Ptr;
    local_ea8 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_eb8 = FTestTag_B::StaticStruct();
    local_ec0 = *local_ec8;
    local_eb0 = local_ec0;
    FMassEntityManager::AddTagToEntity(local_ea8,local_ec0,local_eb8);
    local_f90.Ptr = local_f90.Ptr + 1;
  }
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset(&local_10a8,0);
  local_ea0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar13 = &local_678;
  for (lVar11 = 0x68; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&pFVar13->HashCache = 0;
    pFVar13 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar13->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_678);
  FMassEntityManager::BatchCreateEntities
            (local_ea0,&local_900,(FMassArchetypeHandle *)&this->field_0x50,&local_678,0x11,
             &local_10a8);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_900);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_678);
  local_1050 = &local_10a8;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_f78,&local_10a8.ArrayNum,(FMassEntityHandle *)local_10a8.AllocatorInstance.Data)
  ;
  local_e88 = (local_1050->AllocatorInstance).Data;
  local_1000 = local_1050->ArrayNum;
  local_e80 = local_e88;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_830,&local_1050->ArrayNum,
             (FMassEntityHandle *)(local_e88 + (longlong)local_1000 * 8));
  while( true ) {
    if (*local_f78.CurrentNum != local_f78.InitialNum) {
      pcVar14 = local_10b8 + 4;
      for (lVar11 = 1; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pcVar14 = '\0';
        pcVar14 = pcVar14 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_10b8 + 4);
    }
    local_10b8[5] = local_f78.Ptr != local_830.Ptr;
    local_1090 = (uint)(byte)local_10b8[5];
    if (!(bool)local_10b8[5]) break;
    local_e78 = local_f78.Ptr;
    local_fc8 = local_f78.Ptr;
    local_e58 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_e68 = FTestTag_A::StaticStruct();
    local_e70 = *local_fc8;
    local_e60 = local_e70;
    FMassEntityManager::AddTagToEntity(local_e58,local_e70,local_e68);
    local_e38 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_e48 = FTestTag_B::StaticStruct();
    local_e50 = *local_fc8;
    local_e40 = local_e50;
    FMassEntityManager::AddTagToEntity(local_e38,local_e50,local_e48);
    local_f78.Ptr = local_f78.Ptr + 1;
  }
  pUVar4 = GetTransientPackageAsObject();
  local_1020 = NewObject<UMassTestProcessorAutoExecuteQuery>(pUVar4);
  local_e20 = &local_1048;
  local_e30 = local_1020;
  local_e28 = local_1020;
  pUVar4 = UE::CoreUObject::Private::MakeObjectHandle((UObject *)local_1020);
  local_e20->Handle = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1020 != (UMassTestProcessorAutoExecuteQuery *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1020);
  }
  local_e18 = UE::CoreUObject::Private::ResolveObjectHandle(&local_1048.Handle);
  local_e10 = local_e18;
  local_e08 = local_e18;
  local_e00 = local_e18;
  local_dd8 = local_e18;
  local_df8 = UE::CoreUObject::Private::ResolveObjectHandle(&local_1048.Handle);
  local_dd0 = &local_df8[5].field_0x18;
  local_df0 = local_df8;
  local_de8 = local_df8;
  local_de0 = local_df8;
  UE::Mass::FQueryExecutor::CreateQuery<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,void>
            (&local_fd8,(FMassEntityQuery *)local_dd0,local_dd8);
  local_dc8 = (UMassTestProcessorAutoExecuteQuery *)
              UE::CoreUObject::Private::ResolveObjectHandle(&local_1048.Handle);
  local_da8 = &local_818;
  local_dc0 = local_dc8;
  local_db8 = local_dc8;
  local_db0 = local_dc8;
  local_d98 = local_dc8;
  local_da0 = TSharedPtr<UE::Mass::FQueryExecutor,1>::
              TSharedPtr<UE::Mass::FQueryExecutor,1><FMassQueryExecutorTest::FTestQueryExecutor_AnyTag>
                        (local_da8,&local_fd8);
  UMassTestProcessorAutoExecuteQuery::SetAutoExecuteQuery(local_d98,local_da0);
  local_d90 = (UMassProcessor *)UE::CoreUObject::Private::ResolveObjectHandle(&local_1048.Handle);
  local_d70 = &this->field_0x28;
  local_d88 = local_d90;
  local_d80 = local_d90;
  local_d78 = local_d90;
  local_d40 = local_d90;
  local_d50 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                        ((TSharedPtr<FMassEntityManager,1> *)local_d70,&local_8f0);
  local_d60 = &local_870;
  local_d68 = GetTransientPackage();
  pTVar5 = TNotNull<UObject_*>::TNotNull<UObject_*><UPackage_*>(local_d60,&local_d68);
  local_d58 = pTVar5->Val;
  local_d48 = local_d58;
  UMassProcessor::CallInitialize(local_d40,(TNotNull<UObject_*>)local_d58,local_d50);
  TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_8f0);
  pUVar4 = GetTransientPackageAsObject();
  local_1018 = NewObject<UMassTestProcessorAutoExecuteQuery>(pUVar4);
  local_d28 = &local_1070;
  local_d38 = local_1018;
  local_d30 = local_1018;
  pUVar4 = UE::CoreUObject::Private::MakeObjectHandle((UObject *)local_1018);
  local_d28->Handle = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1018 != (UMassTestProcessorAutoExecuteQuery *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1018);
  }
  local_d20 = UE::CoreUObject::Private::ResolveObjectHandle(&local_1070.Handle);
  local_d18 = local_d20;
  local_d10 = local_d20;
  local_d08 = local_d20;
  local_ce0 = local_d20;
  local_d00 = UE::CoreUObject::Private::ResolveObjectHandle(&local_1070.Handle);
  local_cd8 = &local_d00[5].field_0x18;
  local_cf8 = local_d00;
  local_cf0 = local_d00;
  local_ce8 = local_d00;
  UE::Mass::FQueryExecutor::CreateQuery<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,void>
            (&local_fe8,(FMassEntityQuery *)local_cd8,local_ce0);
  local_cd0 = (UMassTestProcessorAutoExecuteQuery *)
              UE::CoreUObject::Private::ResolveObjectHandle(&local_1070.Handle);
  local_cb0 = &local_808;
  local_cc8 = local_cd0;
  local_cc0 = local_cd0;
  local_cb8 = local_cd0;
  local_ca0 = local_cd0;
  local_ca8 = TSharedPtr<UE::Mass::FQueryExecutor,1>::
              TSharedPtr<UE::Mass::FQueryExecutor,1><FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA>
                        (local_cb0,&local_fe8);
  UMassTestProcessorAutoExecuteQuery::SetAutoExecuteQuery(local_ca0,local_ca8);
  local_c98 = (UMassProcessor *)UE::CoreUObject::Private::ResolveObjectHandle(&local_1070.Handle);
  local_c78 = &this->field_0x28;
  local_c90 = local_c98;
  local_c88 = local_c98;
  local_c80 = local_c98;
  local_c48 = local_c98;
  local_c58 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                        ((TSharedPtr<FMassEntityManager,1> *)local_c78,&local_8e0);
  local_c68 = &local_868;
  local_c70 = GetTransientPackage();
  pTVar5 = TNotNull<UObject_*>::TNotNull<UObject_*><UPackage_*>(local_c68,&local_c70);
  local_c60 = pTVar5->Val;
  local_c50 = local_c60;
  UMassProcessor::CallInitialize(local_c48,(TNotNull<UObject_*>)local_c60,local_c58);
  TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_8e0);
  pUVar4 = GetTransientPackageAsObject();
  local_1010 = NewObject<UMassTestProcessorAutoExecuteQuery>(pUVar4);
  local_c30 = &local_1068;
  local_c40 = local_1010;
  local_c38 = local_1010;
  pUVar4 = UE::CoreUObject::Private::MakeObjectHandle((UObject *)local_1010);
  local_c30->Handle = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1010 != (UMassTestProcessorAutoExecuteQuery *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1010);
  }
  local_c28 = UE::CoreUObject::Private::ResolveObjectHandle(&local_1068.Handle);
  local_c20 = local_c28;
  local_c18 = local_c28;
  local_c10 = local_c28;
  local_be8 = local_c28;
  local_c08 = UE::CoreUObject::Private::ResolveObjectHandle(&local_1068.Handle);
  local_be0 = &local_c08[5].field_0x18;
  local_c00 = local_c08;
  local_bf8 = local_c08;
  local_bf0 = local_c08;
  UE::Mass::FQueryExecutor::CreateQuery<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,void>
            (&local_ff8,(FMassEntityQuery *)local_be0,local_be8);
  local_bd8 = (UMassTestProcessorAutoExecuteQuery *)
              UE::CoreUObject::Private::ResolveObjectHandle(&local_1068.Handle);
  local_bb8 = &local_7f8;
  local_bd0 = local_bd8;
  local_bc8 = local_bd8;
  local_bc0 = local_bd8;
  local_ba8 = local_bd8;
  local_bb0 = TSharedPtr<UE::Mass::FQueryExecutor,1>::
              TSharedPtr<UE::Mass::FQueryExecutor,1><FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB>
                        (local_bb8,&local_ff8);
  UMassTestProcessorAutoExecuteQuery::SetAutoExecuteQuery(local_ba8,local_bb0);
  local_ba0 = (UMassProcessor *)UE::CoreUObject::Private::ResolveObjectHandle(&local_1068.Handle);
  local_b80 = &this->field_0x28;
  local_b98 = local_ba0;
  local_b90 = local_ba0;
  local_b88 = local_ba0;
  local_b50 = local_ba0;
  local_b60 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                        ((TSharedPtr<FMassEntityManager,1> *)local_b80,&local_8d0);
  local_b70 = &local_878;
  local_b78 = GetTransientPackage();
  pTVar5 = TNotNull<UObject_*>::TNotNull<UObject_*><UPackage_*>(local_b70,&local_b78);
  local_b68 = pTVar5->Val;
  local_b58 = local_b68;
  UMassProcessor::CallInitialize(local_b50,(TNotNull<UObject_*>)local_b68,local_b60);
  TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_8d0);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_10c8.AllocatorInstance);
  local_10c8.ArrayNum = 0;
  local_10c8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_10c8.AllocatorInstance);
  local_b48 = &local_fc0;
  FObjectPtr::FObjectPtr(local_b48,(FObjectPtr *)&local_1048);
  local_1008 = (FScriptContainerElement *)&local_fc0;
  local_b40 = local_10c8.AllocatorInstance.Data;
  local_b38 = local_10c8.AllocatorInstance.Data;
  local_b30 = local_10c8.AllocatorInstance.Data;
  if (local_10c8.AllocatorInstance.Data <= local_1008) {
    local_b28 = local_10c8.AllocatorInstance.Data;
    local_b20 = local_10c8.AllocatorInstance.Data;
    local_b18 = local_10c8.AllocatorInstance.Data;
    if (local_1008 < local_10c8.AllocatorInstance.Data + (longlong)local_10c8.ArrayMax * 8) {
      local_b10 = 0;
      local_b0c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_af0 = (longlong)local_10c8.ArrayNum;
      local_ae8 = (longlong)local_10c8.ArrayMax;
      local_b08 = local_10c8.AllocatorInstance.Data;
      local_b00 = local_10c8.AllocatorInstance.Data;
      local_af8 = local_10c8.AllocatorInstance.Data;
      local_ae0 = local_10c8.AllocatorInstance.Data;
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
  if (local_10c8.ArrayNum == local_10c8.ArrayMax) {
    local_10c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_10c8.AllocatorInstance,&local_10c8.ArrayMax);
  }
  local_108c = local_10c8.ArrayNum;
  local_ad8 = local_10c8.AllocatorInstance.Data;
  local_ad0 = local_10c8.AllocatorInstance.Data + (longlong)local_10c8.ArrayNum * 8;
  local_10c8.ArrayNum = local_10c8.ArrayNum + 1;
  local_ac8 = ::operator_new(8,local_ad0);
  TObjectPtr<UMassProcessor>::TObjectPtr<UMassProcessor>
            (local_ac8,(TObjectPtr<UMassProcessor> *)&local_fc0);
  local_974 = local_108c;
  local_ac0 = &local_fb8;
  FObjectPtr::FObjectPtr(local_ac0,(FObjectPtr *)&local_1070);
  local_1038 = (FScriptContainerElement *)&local_fb8;
  local_ab8 = local_10c8.AllocatorInstance.Data;
  local_ab0 = local_10c8.AllocatorInstance.Data;
  local_aa8 = local_10c8.AllocatorInstance.Data;
  if (local_10c8.AllocatorInstance.Data <= local_1038) {
    local_aa0 = local_10c8.AllocatorInstance.Data;
    local_a98 = local_10c8.AllocatorInstance.Data;
    local_a90 = local_10c8.AllocatorInstance.Data;
    if (local_1038 < local_10c8.AllocatorInstance.Data + (longlong)local_10c8.ArrayMax * 8) {
      local_a88 = 0;
      local_a84 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_a68 = (longlong)local_10c8.ArrayNum;
      local_a60 = (longlong)local_10c8.ArrayMax;
      local_988 = local_10c8.AllocatorInstance.Data;
      local_a78 = local_10c8.AllocatorInstance.Data;
      local_a70 = local_10c8.AllocatorInstance.Data;
      local_a58 = local_10c8.AllocatorInstance.Data;
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
  if (local_10c8.ArrayNum == local_10c8.ArrayMax) {
    local_10c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_10c8.AllocatorInstance,&local_10c8.ArrayMax);
  }
  local_1088 = local_10c8.ArrayNum;
  local_a50 = local_10c8.AllocatorInstance.Data;
  local_a48 = local_10c8.AllocatorInstance.Data + (longlong)local_10c8.ArrayNum * 8;
  local_10c8.ArrayNum = local_10c8.ArrayNum + 1;
  local_a40 = ::operator_new(8,local_a48);
  TObjectPtr<UMassProcessor>::TObjectPtr<UMassProcessor>
            (local_a40,(TObjectPtr<UMassProcessor> *)&local_fb8);
  local_970 = local_1088;
  local_a38 = &local_fb0;
  FObjectPtr::FObjectPtr(local_a38,(FObjectPtr *)&local_1068);
  local_1030 = (FScriptContainerElement *)&local_fb0;
  local_a30 = local_10c8.AllocatorInstance.Data;
  local_a28 = local_10c8.AllocatorInstance.Data;
  local_a20 = local_10c8.AllocatorInstance.Data;
  if (local_10c8.AllocatorInstance.Data <= local_1030) {
    local_a18 = local_10c8.AllocatorInstance.Data;
    local_a10 = local_10c8.AllocatorInstance.Data;
    local_a08 = local_10c8.AllocatorInstance.Data;
    if (local_1030 < local_10c8.AllocatorInstance.Data + (longlong)local_10c8.ArrayMax * 8) {
      local_a00 = 0;
      local_9fc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_9e0 = (longlong)local_10c8.ArrayNum;
      local_9d8 = (longlong)local_10c8.ArrayMax;
      local_9f8 = local_10c8.AllocatorInstance.Data;
      local_9f0 = local_10c8.AllocatorInstance.Data;
      local_9e8 = local_10c8.AllocatorInstance.Data;
      local_9d0 = local_10c8.AllocatorInstance.Data;
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
  if (local_10c8.ArrayNum == local_10c8.ArrayMax) {
    local_10c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_10c8.AllocatorInstance,&local_10c8.ArrayMax);
  }
  local_1084 = local_10c8.ArrayNum;
  local_9c8 = local_10c8.AllocatorInstance.Data;
  local_9c0 = local_10c8.AllocatorInstance.Data + (longlong)local_10c8.ArrayNum * 8;
  local_10c8.ArrayNum = local_10c8.ArrayNum + 1;
  local_9b8 = ::operator_new(8,local_9c0);
  TObjectPtr<UMassProcessor>::TObjectPtr<UMassProcessor>
            (local_9b8,(TObjectPtr<UMassProcessor> *)&local_fb0);
  local_96c = local_1084;
  UE::Mass::FProcessingContext::FProcessingContext
            (&local_608,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,true);
  local_9b0 = &local_7e8;
  pTVar6 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int>(local_9b0);
  puVar12 = local_8c0;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
    puVar12 = puVar12 + 1;
  }
  local_9a8 = &local_7d8;
  pTVar7 = TArrayView<UMassProcessor_*_const,int>::
           TArrayView<UMassProcessor_*_const,int><TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>_>
                     (local_9a8,&local_10c8);
  puVar12 = local_8b0;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_8c0;
  pTVar6 = &local_898;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar12;
    puVar12 = puVar12 + 1;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
  }
  puVar12 = local_8b0;
  pTVar7 = &local_888;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar12;
    puVar12 = puVar12 + 1;
    pTVar7 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  UE::Mass::Executor::RunProcessorsView(&local_888,&local_608,&local_898);
  pFVar8 = TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1>::operator->(&local_fd8);
  local_1024 = pFVar8->EntityCount;
  local_968 = 0x2e;
  pFVar9 = TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1>::operator->(&local_fe8)
  ;
  local_ffc = pFVar9->EntityCount;
  local_f60 = 0x1a;
  pFVar10 = TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1>::operator->
                      (&local_ff8);
  local_1028 = pFVar10->EntityCount;
  local_f5c = 0x10;
  local_9a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_960,L"Any Tag Entities Processed");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_960,local_1024,0x2e,local_9a0);
  local_10b8[6] = !bVar2;
  local_1080 = (uint)(byte)local_10b8[6];
  ::FString::~FString(&local_960);
  if (local_10b8[6] == '\0') {
    local_998 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_950,L"Require TagA Entities Processed");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_950,local_ffc,0x1a,local_998);
    local_10b8[8] = !bVar2;
    local_107c = (uint)(byte)local_10b8[8];
    ::FString::~FString(&local_950);
    if (local_10b8[8] == '\0') {
      local_990 = FAITestBase::GetTestRunner((FAITestBase *)this);
      ::FString::FString(&local_940,L"Blocked TagB Entities Processed");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_940,local_1028,0x10,local_990);
      local_10ae = !bVar2;
      local_1078 = (uint)(byte)local_10ae;
      ::FString::~FString(&local_940);
      if (local_10ae == '\0') {
        local_10ac = 1;
        UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
        TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
        ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>(&local_10c8);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_ff8.SharedReferenceCount);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_fe8.SharedReferenceCount);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_fd8.SharedReferenceCount);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_10a8);
        local_10b8[7] = local_10ac;
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_10ad = 0;
        UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
        TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
        ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>(&local_10c8);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_ff8.SharedReferenceCount);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_fe8.SharedReferenceCount);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_fd8.SharedReferenceCount);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_10a8);
        local_10b8[7] = local_10ad;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_10af = 0;
      UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
      TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
      ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>(&local_10c8);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_ff8.SharedReferenceCount);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_fe8.SharedReferenceCount);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_fd8.SharedReferenceCount);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_10a8);
      local_10b8[7] = local_10af;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_10b8[7] = 0;
    UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
    TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
    ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>(&local_10c8);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_ff8.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_fe8.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_fd8.SharedReferenceCount);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_10a8);
  }
  return (bool)local_10b8[7];
}

