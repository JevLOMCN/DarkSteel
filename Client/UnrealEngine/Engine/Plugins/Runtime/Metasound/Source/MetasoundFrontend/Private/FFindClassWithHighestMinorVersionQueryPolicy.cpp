// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// BuildResult @ 14ae651f0

FNodeClassRegistryKey * __cdecl
Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy::BuildResult
          (FNodeClassRegistryKey *__return_storage_ptr__,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  ForElementType<Metasound::FFrontendQueryEntry> FVar5;
  code *pcVar6;
  undefined3 uVar7;
  FNameEntryId FVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  FNodeClassRegistryKey *pFVar14;
  uchar *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  
  iVar12 = InvalidKey.Version.Minor;
  uVar11 = InvalidKey._24_8_;
  uVar10 = InvalidKey.ClassName._12_8_;
  uVar9 = InvalidKey.ClassName._4_8_;
  piVar1 = &param_1->ArrayNum;
  FVar5 = (param_1->AllocatorInstance).SecondaryData;
  iVar17 = -1;
  iVar4 = *piVar1;
  iVar16 = -1;
  uVar7 = InvalidKey._1_3_;
  FVar8.Value = InvalidKey.ClassName.Namespace.ComparisonIndex.Value;
  __return_storage_ptr__->Type = InvalidKey.Type;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar7;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = (FNameEntryId)FVar8.Value;
  *(undefined8 *)&(__return_storage_ptr__->ClassName).Namespace.Number = uVar9;
  *(undefined8 *)&(__return_storage_ptr__->ClassName).Name.Number = uVar10;
  *(undefined8 *)&(__return_storage_ptr__->ClassName).Variant.Number = uVar11;
  (__return_storage_ptr__->Version).Minor = iVar12;
  if (FVar5 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar5;
  }
  puVar15 = (uchar *)((longlong)param_1 + 0x50);
  while( true ) {
    if (*piVar1 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<Metasound::FFrontendQueryEntry> *)(puVar15 + -0x50) ==
        (ForElementType<Metasound::FFrontendQueryEntry> *)
        ((longlong)iVar4 * 0xb0 + (longlong)param_1)) break;
    bVar2 = puVar15[0x50];
    if ((4 < (ulonglong)bVar2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FNodeClassRegistryKey *)(*pcVar6)();
      return pFVar14;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') {
      if ((puVar15[0x50] != '\x01') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FNodeClassRegistryKey *)(*pcVar6)();
        return pFVar14;
      }
      if ((puVar15[-0x40] == '\0') &&
         ((iVar17 < *(int *)puVar15 ||
          ((*(int *)puVar15 == iVar17 && (iVar16 < *(int *)(puVar15 + 4))))))) {
        uVar3 = puVar15[-0x24];
        local_res10 = *(undefined8 *)puVar15;
        local_68 = CONCAT31(local_68._1_3_,uVar3);
        uStack_54 = (undefined4)*(undefined8 *)(puVar15 + -0x2c);
        uStack_50 = (undefined4)((ulonglong)*(undefined8 *)(puVar15 + -0x2c) >> 0x20);
        uStack_4c = (undefined4)local_res10;
        iStack_48 = (int)((ulonglong)local_res10 >> 0x20);
        uStack_64 = (undefined4)*(undefined8 *)(puVar15 + -0x3c);
        uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(puVar15 + -0x3c) >> 0x20);
        uStack_5c = (undefined4)*(undefined8 *)(puVar15 + -0x34);
        uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(puVar15 + -0x34) >> 0x20);
        if ((uVar3 == '\x01') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InClassInfo.Type != EMetasoundFrontendClassType::Graph",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                                ,0xb8,
                                L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FNodeClassRegistryKey *)(*pcVar6)();
          return pFVar14;
        }
        __return_storage_ptr__->Type = uVar3;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = local_68._1_3_;
        (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = (FNameEntryId)uStack_64;
        *(ulonglong *)&(__return_storage_ptr__->ClassName).Namespace.Number =
             CONCAT44(uStack_5c,uStack_60);
        *(ulonglong *)&(__return_storage_ptr__->ClassName).Name.Number =
             CONCAT44(uStack_54,uStack_58);
        *(ulonglong *)&(__return_storage_ptr__->ClassName).Variant.Number =
             CONCAT44(uStack_4c,uStack_50);
        (__return_storage_ptr__->Version).Minor = iStack_48;
        iVar16 = local_res10._4_4_;
        iVar17 = (int)local_res10;
      }
    }
    puVar15 = puVar15 + 0xb0;
  }
  return __return_storage_ptr__;
}

// CreateQuery @ 14ae6bca0

FFrontendQuery * __cdecl
Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy::CreateQuery
          (FFrontendQuery *__return_storage_ptr__)

{
  FFrontendQueryStep FVar1;
  bool bVar2;
  IStepExecuter IVar3;
  IStepExecuter IVar4;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar5;
  IStepExecuter *pIVar6;
  FFrontendQuery *pFVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res8;
  
  bVar2 = false;
  local_res8.Ptr = (FFrontendQueryStep *)((ulonglong)local_res8.Ptr & 0xffffffff00000000);
  FFrontendQuery::FFrontendQuery(__return_storage_ptr__);
  IVar4 = (IStepExecuter)::operator_new(0x10);
  if (IVar4 == (IStepExecuter)0x0) {
    IVar4 = (IStepExecuter)0x0;
  }
  else {
    *(undefined ***)IVar4 = &___7FNodeClassRegistrationEvents_Metasound__6B_;
    MakePimpl<Metasound::FNodeClassRegistrationEventsPimpl,0>();
  }
  TVar5.Ptr = ::operator_new(8);
  if (&(TVar5.Ptr)->StepExecuter ==
      (TUniquePtr<Metasound::FFrontendQueryStep::IStepExecuter,TDefaultDelete<Metasound::FFrontendQueryStep::IStepExecuter>_>
       *)0x0) {
    TVar5.Ptr = (FFrontendQueryStep *)0x0;
  }
  else {
    pIVar6 = ::operator_new(0x10);
    if (pIVar6 == (IStepExecuter *)0x0) {
      ((TVar5.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      bVar2 = true;
      local_res8.Ptr = (FFrontendQueryStep *)IVar4;
      IVar4 = (IStepExecuter)0x0;
    }
    else {
      pIVar6[1] = IVar4;
      *pIVar6 = (IStepExecuter)&___7FStreamStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar5.Ptr)->StepExecuter).Ptr = pIVar6;
      bVar2 = true;
      local_res8.Ptr = (FFrontendQueryStep *)(IStepExecuter)0x0;
      IVar4 = (IStepExecuter)0x0;
    }
  }
  if ((bVar2) && ((IStepExecuter)local_res8.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res8.Ptr)->StepExecuter;
    IVar3 = (IStepExecuter)local_res8.Ptr;
    local_res8.Ptr = TVar5.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar3,1);
    TVar5.Ptr = local_res8.Ptr;
  }
  local_res8.Ptr = TVar5.Ptr;
  bVar2 = false;
  pFVar7 = FFrontendQuery::AddStep(__return_storage_ptr__,&local_res8);
  TVar5.Ptr = local_res8.Ptr;
  if (&(local_res8.Ptr)->StepExecuter !=
      (TUniquePtr<Metasound::FFrontendQueryStep::IStepExecuter,TDefaultDelete<Metasound::FFrontendQueryStep::IStepExecuter>_>
       *)0x0) {
    pIVar6 = ((local_res8.Ptr)->StepExecuter).Ptr;
    if (pIVar6 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    ::operator_delete(TVar5.Ptr,8);
  }
  if (IVar4 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar4)(IVar4,1);
  }
  IVar4 = (IStepExecuter)::operator_new(8);
  if (IVar4 == (IStepExecuter)0x0) {
    IVar4 = (IStepExecuter)0x0;
  }
  else {
    *(undefined ***)IVar4 = &___7FMapRegistrationEventsToNodeRegistryKeys_Metasound__6B_;
  }
  TVar5.Ptr = ::operator_new(8);
  if (&(TVar5.Ptr)->StepExecuter ==
      (TUniquePtr<Metasound::FFrontendQueryStep::IStepExecuter,TDefaultDelete<Metasound::FFrontendQueryStep::IStepExecuter>_>
       *)0x0) {
    TVar5.Ptr = (FFrontendQueryStep *)0x0;
  }
  else {
    bVar2 = true;
    pIVar6 = ::operator_new(0x10);
    if (pIVar6 == (IStepExecuter *)0x0) {
      ((TVar5.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res8.Ptr = (FFrontendQueryStep *)IVar4;
      IVar4 = (IStepExecuter)0x0;
    }
    else {
      pIVar6[1] = IVar4;
      *pIVar6 = (IStepExecuter)&___7FMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar5.Ptr)->StepExecuter).Ptr = pIVar6;
      local_res8.Ptr = (FFrontendQueryStep *)(IStepExecuter)0x0;
      IVar4 = (IStepExecuter)0x0;
    }
  }
  if ((bVar2) && ((IStepExecuter)local_res8.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res8.Ptr)->StepExecuter;
    IVar3 = (IStepExecuter)local_res8.Ptr;
    local_res8.Ptr = TVar5.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar3,1);
    TVar5.Ptr = local_res8.Ptr;
  }
  local_res8.Ptr = TVar5.Ptr;
  bVar2 = false;
  pFVar7 = FFrontendQuery::AddStep(pFVar7,&local_res8);
  TVar5.Ptr = local_res8.Ptr;
  if (&(local_res8.Ptr)->StepExecuter !=
      (TUniquePtr<Metasound::FFrontendQueryStep::IStepExecuter,TDefaultDelete<Metasound::FFrontendQueryStep::IStepExecuter>_>
       *)0x0) {
    pIVar6 = ((local_res8.Ptr)->StepExecuter).Ptr;
    if (pIVar6 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    ::operator_delete(TVar5.Ptr,8);
  }
  if (IVar4 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar4)(IVar4,1);
  }
  IVar4 = (IStepExecuter)::operator_new(8);
  if (IVar4 == (IStepExecuter)0x0) {
    IVar4 = (IStepExecuter)0x0;
  }
  else {
    *(undefined ***)IVar4 = &___7FReduceRegistrationEventsToCurrentStatus_Metasound__6B_;
  }
  TVar5.Ptr = ::operator_new(8);
  if (&(TVar5.Ptr)->StepExecuter ==
      (TUniquePtr<Metasound::FFrontendQueryStep::IStepExecuter,TDefaultDelete<Metasound::FFrontendQueryStep::IStepExecuter>_>
       *)0x0) {
    TVar5.Ptr = (FFrontendQueryStep *)0x0;
  }
  else {
    bVar2 = true;
    pIVar6 = ::operator_new(0x10);
    if (pIVar6 == (IStepExecuter *)0x0) {
      ((TVar5.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res8.Ptr = (FFrontendQueryStep *)IVar4;
      IVar4 = (IStepExecuter)0x0;
    }
    else {
      pIVar6[1] = IVar4;
      *pIVar6 = (IStepExecuter)&___7FReduceStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar5.Ptr)->StepExecuter).Ptr = pIVar6;
      local_res8.Ptr = (FFrontendQueryStep *)(IStepExecuter)0x0;
      IVar4 = (IStepExecuter)0x0;
    }
  }
  if ((bVar2) && ((IStepExecuter)local_res8.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res8.Ptr)->StepExecuter;
    IVar3 = (IStepExecuter)local_res8.Ptr;
    local_res8.Ptr = TVar5.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar3,1);
    TVar5.Ptr = local_res8.Ptr;
  }
  local_res8.Ptr = TVar5.Ptr;
  bVar2 = false;
  pFVar7 = FFrontendQuery::AddStep(pFVar7,&local_res8);
  TVar5.Ptr = local_res8.Ptr;
  if (&(local_res8.Ptr)->StepExecuter !=
      (TUniquePtr<Metasound::FFrontendQueryStep::IStepExecuter,TDefaultDelete<Metasound::FFrontendQueryStep::IStepExecuter>_>
       *)0x0) {
    pIVar6 = ((local_res8.Ptr)->StepExecuter).Ptr;
    if (pIVar6 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    ::operator_delete(TVar5.Ptr,8);
  }
  if (IVar4 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar4)(IVar4,1);
  }
  IVar4 = (IStepExecuter)::operator_new(8);
  if (IVar4 == (IStepExecuter)0x0) {
    IVar4 = (IStepExecuter)0x0;
  }
  else {
    *(undefined ***)IVar4 =
         &
         ___7FMapNodeRegistrationEventsToClassAndMajorVersion_SearchEngineQuerySteps_Frontend_Metasound__6B_
    ;
  }
  TVar5.Ptr = ::operator_new(8);
  if (TVar5.Ptr == (FFrontendQueryStep *)0x0) {
    TVar5.Ptr = (FFrontendQueryStep *)0x0;
  }
  else {
    bVar2 = true;
    pIVar6 = ::operator_new(0x10);
    if (pIVar6 == (IStepExecuter *)0x0) {
      ((TVar5.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res8.Ptr = (FFrontendQueryStep *)IVar4;
      IVar4 = (IStepExecuter)0x0;
    }
    else {
      pIVar6[1] = IVar4;
      *pIVar6 = (IStepExecuter)&___7FMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar5.Ptr)->StepExecuter).Ptr = pIVar6;
      local_res8.Ptr = (FFrontendQueryStep *)(IStepExecuter)0x0;
      IVar4 = (IStepExecuter)0x0;
    }
  }
  if ((bVar2) && ((IStepExecuter)local_res8.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res8.Ptr)->StepExecuter;
    IVar3 = (IStepExecuter)local_res8.Ptr;
    local_res8.Ptr = TVar5.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar3,1);
    TVar5.Ptr = local_res8.Ptr;
  }
  local_res8.Ptr = TVar5.Ptr;
  FFrontendQuery::AddStep(pFVar7,&local_res8);
  TVar5.Ptr = local_res8.Ptr;
  if (local_res8.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar6 = ((local_res8.Ptr)->StepExecuter).Ptr;
    if (pIVar6 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    ::operator_delete(TVar5.Ptr,8);
  }
  if (IVar4 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar4)(IVar4,1);
  }
  return __return_storage_ptr__;
}

