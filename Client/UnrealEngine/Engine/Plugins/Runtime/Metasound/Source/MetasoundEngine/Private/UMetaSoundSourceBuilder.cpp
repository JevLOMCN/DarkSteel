// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 58

// StaticClass @ 14b2f6660

UClass * __cdecl UMetaSoundSourceBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSourceBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSourceBuilder",
               &Z_Registration_Info_UClass_UMetaSoundSourceBuilder.InnerSingleton,
               StaticRegisterNativesUMetaSoundSourceBuilder,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundSourceBuilder>,
               InternalVTableHelperCtorCaller<UMetaSoundSourceBuilder>,local_res8,
               UMetaSoundBuilderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSourceBuilder.InnerSingleton;
}

// UMetaSoundSourceBuilder @ 14b34cfc0

UMetaSoundSourceBuilder * __thiscall
UMetaSoundSourceBuilder::UMetaSoundSourceBuilder
          (UMetaSoundSourceBuilder *this,FVTableHelper *param_1)

{
  UMetaSoundBuilderBase::UMetaSoundBuilderBase((UMetaSoundBuilderBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMetaSoundSourceBuilder__6B_;
  (this->LiveComponentIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LiveComponentIDs).ArrayNum = 0;
  (this->LiveComponentIDs).ArrayMax = 0;
  (this->LiveComponentHandle).ID = 0;
  this->TargetPageID = Metasound::Frontend::DefaultPageID;
  return this;
}

// UMetaSoundSourceBuilder @ 14b34d010

UMetaSoundSourceBuilder * __thiscall
UMetaSoundSourceBuilder::UMetaSoundSourceBuilder
          (UMetaSoundSourceBuilder *this,FObjectInitializer *param_1)

{
  UMetaSoundBuilderBase::UMetaSoundBuilderBase((UMetaSoundBuilderBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMetaSoundSourceBuilder__6B_;
  (this->LiveComponentIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LiveComponentIDs).ArrayNum = 0;
  (this->LiveComponentIDs).ArrayMax = 0;
  (this->LiveComponentHandle).ID = 0;
  this->TargetPageID = Metasound::Frontend::DefaultPageID;
  return this;
}

// ~UMetaSoundSourceBuilder @ 14b352950

void __thiscall UMetaSoundSourceBuilder::~UMetaSoundSourceBuilder(UMetaSoundSourceBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMetaSoundSourceBuilder__6B_;
  pFVar1 = (this->LiveComponentIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMetaSoundBuilderBase::~UMetaSoundBuilderBase((UMetaSoundBuilderBase *)this);
  return;
}

// operator() @ 14b35baf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::InitTargetPageDelegates'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  UAudioComponent *pUVar4;
  ulong64 *puVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  bVar6 = false;
  puVar5 = *(ulong64 **)(lVar3 + 0xa8);
  iVar2 = *(int *)(lVar3 + 0xb0);
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0xb0) != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar5 == puVar1) break;
    pUVar4 = UAudioComponent::GetAudioComponentFromID(*puVar5);
    if (pUVar4 != (UAudioComponent *)0x0) {
      (**(code **)(*(longlong *)pUVar4 + 0x668))(pUVar4);
      bVar6 = true;
    }
    puVar5 = puVar5 + 1;
  }
  return bVar6;
}

// operator() @ 14b35bb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnInputAdded'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UAudioComponent *pUVar8;
  FAudioDevice *this_00;
  FMetasoundFrontendLiteral *this_01;
  ulong64 *puVar9;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  FDynamicOperatorTransactor *local_90;
  code *local_88 [2];
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_60;
  FLiteral local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  lVar3 = *(longlong *)this;
  puVar9 = *(ulong64 **)(lVar3 + 0xa8);
  iVar2 = *(int *)(lVar3 + 0xb0);
  puVar1 = puVar9 + iVar2;
  local_90 = param_1;
  while( true ) {
    if (*(int *)(lVar3 + 0xb0) != iVar2) {
      local_98[0] = 0;
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_98);
    }
    if (puVar9 == puVar1) break;
    uVar4 = *puVar9;
    pUVar8 = UAudioComponent::GetAudioComponentFromID(uVar4);
    if (pUVar8 != (UAudioComponent *)0x0) {
      this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar8->field_0x250 + 0x88))();
      if (this_00 != (FAudioDevice *)0x0) {
        local_70 = **(undefined8 **)((longlong)this + 0x10);
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``UMetaSoundSourceBuilder::OnInputAdded'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,void,FActiveSound_&>
                      ::Call;
        local_60 = 0;
        local_78 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnInputAdded'::`2'::<lambda_1>::operator()'::`12'::<lambda_1>,1,0>
                    ::_vftable_;
        FAudioDevice::SendCommandToActiveSounds
                  (this_00,uVar4,(TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_88,
                   (TStatId)0x154f11430);
      }
    }
    puVar9 = puVar9 + 1;
  }
  this_01 = FMetasoundFrontendClassInput::FindConstDefaultChecked
                      (*(FMetasoundFrontendClassInput **)((longlong)this + 0x10),
                       &Metasound::Frontend::DefaultPageID);
  FMetasoundFrontendLiteral::ToLiteral
            (this_01,&local_58,(FName *)(*(longlong *)((longlong)this + 0x10) + 8),
             (IDataTypeRegistry *)0x0,(FProxyDataCache *)0x0);
  Metasound::DynamicGraph::FDynamicOperatorTransactor::AddInputDataDestination
            (local_90,(FGuid *)(*(FName **)((longlong)this + 0x10) + 4),
             *(FName **)((longlong)this + 0x10),&local_58,
             FMetaSoundFrontendDocumentBuilder::CreateDataReference);
  if (0xc < local_58.Value.TypeIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_58.Value.TypeIndex])(&local_58);
  return true;
}

// operator() @ 14b35bd50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnNodeAdded'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IMetaSoundDocumentInterface *pIVar6;
  longlong lVar7;
  FMetasoundFrontendDocument *pFVar8;
  FMetasoundFrontendGraph *pFVar9;
  uint uVar10;
  FGuid *pFVar11;
  FMetasoundFrontendNode *local_res8;
  FMetasoundFrontendNode *local_res18;
  undefined1 local_a8 [16];
  FString local_98;
  FString local_88;
  FGuid *local_78;
  FMetasoundFrontendClass *local_70;
  FMetasoundFrontendGraph *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 *local_30;
  
  pIVar6 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentInterfaceChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28));
  lVar7 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6);
  lVar2 = *(longlong *)this;
  pFVar8 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar2 + 0x28));
  pFVar9 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar8->RootGraph,(FGuid *)(lVar2 + 0xc0));
  uVar1 = *(uint *)((longlong)this + 8);
  uVar10 = 0;
  if ((int)uVar1 < (pFVar9->Nodes).ArrayNum) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar11 = (FGuid *)((pFVar9->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
  local_70 = FMetaSoundFrontendDocumentBuilder::FindDependency
                       ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28),pFVar11 + 1)
  ;
  if ((local_70 == (FMetasoundFrontendClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x228,
                         L"Node successfully added to graph but document is missing associated dependency"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_78 = pFVar11;
  local_68 = pFVar9;
  local_60 = lVar7 + 0x70;
  (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,local_a8);
  local_30 = local_a8;
  Metasound::Frontend::FGraphBuilder::CreateNode((FCreateNodeParams *)&local_res8);
  if (local_res8 == (FMetasoundFrontendNode *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)(pFVar11 + 2),&local_88);
      FMetaSoundFrontendDocumentBuilder::GetDebugName
                ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28),&local_98);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = false;
  }
  else {
    local_res18 = local_res8;
    local_res8 = (FMetasoundFrontendNode *)0x0;
    Metasound::DynamicGraph::FDynamicOperatorTransactor::AddNode
              (param_1,pFVar11,(INode *)&local_res18);
    bVar4 = true;
  }
  if (local_res8 != (FMetasoundFrontendNode *)0x0) {
    (*(code *)**(undefined8 **)&local_res8->ID)(local_res8,1);
  }
  return bVar4;
}

// operator() @ 14b35bfb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnNodeConfigurationUpdated'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  IMetaSoundDocumentInterface *pIVar7;
  longlong lVar8;
  FMetasoundFrontendDocument *pFVar9;
  FMetasoundFrontendGraph *pFVar10;
  FMetasoundFrontendVertex *pFVar11;
  uint uVar12;
  FGuid *pFVar13;
  byte bVar14;
  FMetasoundFrontendNode *pFVar15;
  FGuid *pFVar16;
  char local_res8 [8];
  undefined1 local_res18 [8];
  FMetasoundFrontendNode *local_res20;
  FMetasoundFrontendNode *local_e8;
  undefined8 local_e0;
  FMetasoundFrontendNode *local_d8;
  char *local_d0;
  FDynamicOperatorTransactor *local_c8;
  undefined1 local_c0 [16];
  FString local_b0;
  FString local_a0;
  FMetasoundFrontendNode *local_88;
  FMetasoundFrontendClass *local_80;
  FMetasoundFrontendGraph *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 *local_40;
  
  pIVar7 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentInterfaceChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28));
  lVar8 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7);
  lVar3 = *(longlong *)this;
  pFVar9 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar3 + 0x28));
  pFVar10 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                      (&pFVar9->RootGraph,(FGuid *)(lVar3 + 0xc0));
  uVar1 = *(uint *)((longlong)this + 8);
  uVar12 = 0;
  if ((int)uVar1 < (pFVar10->Nodes).ArrayNum) {
    uVar12 = ~uVar1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar15 = (FMetasoundFrontendNode *)
            ((pFVar10->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
  local_80 = FMetaSoundFrontendDocumentBuilder::FindDependency
                       ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28),
                        &pFVar15->ClassID);
  if ((local_80 == (FMetasoundFrontendClass *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x25d,
                         L"Node successfully configured on graph but document is missing associated dependency"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_48 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = pFVar15;
  local_78 = pFVar10;
  local_70 = lVar8 + 0x70;
  (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7,local_c0);
  local_40 = local_c0;
  Metasound::Frontend::FGraphBuilder::CreateNode((FCreateNodeParams *)&local_res20);
  if (local_res20 == (FMetasoundFrontendNode *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&pFVar15->Name,&local_a0);
      FMetaSoundFrontendDocumentBuilder::GetDebugName
                ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28),&local_b0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar5 = Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveNode
                      (param_1,(FGuid *)pFVar15);
    if (bVar5) {
      local_e8 = local_res20;
      local_res20 = (FMetasoundFrontendNode *)0x0;
      bVar5 = Metasound::DynamicGraph::FDynamicOperatorTransactor::AddNode
                        (param_1,(FGuid *)pFVar15,(INode *)&local_e8);
      if (bVar5) {
        local_e0 = *(undefined8 *)this;
        local_d0 = local_res8;
        local_res8[0] = '\x01';
        local_d8 = pFVar15;
        local_c8 = param_1;
        ``UMetaSoundSourceBuilder::OnNodeConfigurationUpdated'::__l2::<lambda_1>::operator()'::__l30
        ::<lambda_1>::operator()(&local_e0,&(pFVar15->Interface).Inputs);
        ``UMetaSoundSourceBuilder::OnNodeConfigurationUpdated'::__l2::<lambda_1>::operator()'::__l30
        ::<lambda_1>::operator()(&local_e0,&(pFVar15->Interface).Outputs);
        iVar2 = (pFVar15->InputLiterals).ArrayNum;
        bVar14 = 1;
        pFVar13 = (FGuid *)(pFVar15->InputLiterals).AllocatorInstance.Data;
        pFVar16 = (FGuid *)((longlong)pFVar13 + (longlong)iVar2 * 0x68);
        while( true ) {
          if ((pFVar15->InputLiterals).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FMetasoundFrontendVertexLiteral_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res18);
          }
          if (pFVar13 == pFVar16) break;
          pFVar11 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                              ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28),
                               (FGuid *)pFVar15,pFVar13,(FGuid *)0x0);
          if (pFVar11 == (FMetasoundFrontendVertex *)0x0) {
            bVar14 = 0;
            pFVar13 = (FGuid *)&pFVar13[6].C;
          }
          else {
            bVar5 = UMetaSoundSourceBuilder::AddNodeInputLiteralToTransactor
                              (*(UMetaSoundSourceBuilder **)this,pFVar15,pFVar11,
                               (FMetasoundFrontendLiteral *)(pFVar13 + 1),param_1);
            bVar14 = bVar14 & bVar5;
            pFVar13 = (FGuid *)&pFVar13[6].C;
          }
        }
        if ((local_res8[0] != '\0') && (bVar14 != 0)) {
          bVar5 = true;
          goto LAB_14b35c16f;
        }
      }
    }
  }
  bVar5 = false;
LAB_14b35c16f:
  if (local_res20 != (FMetasoundFrontendNode *)0x0) {
    (*(code *)**(undefined8 **)&local_res20->ID)(local_res20,1);
  }
  return bVar5;
}

// operator() @ 14b35c2a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnOutputAdded'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetasoundFrontendDocument *pFVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  uint uVar7;
  FName *pFVar8;
  
  pFVar5 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28));
  pFVar6 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar5->RootGraph);
  uVar1 = *(uint *)((longlong)this + 8);
  uVar7 = 0;
  if ((int)uVar1 < (pFVar6->Outputs).ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar8 = (FName *)((pFVar6->Outputs).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x34);
  Metasound::DynamicGraph::FDynamicOperatorTransactor::AddOutputDataSource
            (param_1,(FGuid *)(pFVar8 + 4),pFVar8);
  return true;
}

// operator() @ 14b35c350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnRemoveSwappingEdge'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  FGuid *pFVar1;
  longlong lVar2;
  bool bVar3;
  FMetasoundFrontendVertex *pFVar4;
  FMetasoundFrontendVertex *pFVar5;
  FMetasoundFrontendLiteral *this_00;
  FLiteral *pFVar6;
  undefined1 local_res8 [8];
  FLiteral local_38;
  
  lVar2 = *(longlong *)this;
  pFVar4 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar2 + 0x28),
                      (FGuid *)((longlong)this + 8),(FGuid *)((longlong)this + 0x18),(FGuid *)0x0);
  pFVar1 = (FGuid *)((longlong)this + 0x28);
  pFVar5 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar2 + 0x28),pFVar1,
                      (FGuid *)((longlong)this + 0x38),(FGuid *)0x0);
  if ((pFVar4 == (FMetasoundFrontendVertex *)0x0) || (pFVar5 == (FMetasoundFrontendVertex *)0x0)) {
LAB_14b35c422:
    bVar3 = false;
  }
  else {
    this_00 = Metasound::Engine::BuilderSubsystemPrivate::TryResolveNodeInputDefault
                        ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28),pFVar1,
                         pFVar5->Name);
    if (this_00 == (FMetasoundFrontendLiteral *)0x0) {
      bVar3 = ``UMetaSoundSourceBuilder::OnRemoveSwappingEdge'::__l2::<lambda_1>::operator()'::__l5
              ::<lambda_1>::operator()(local_res8);
      if (!bVar3) goto LAB_14b35c422;
    }
    pFVar6 = FMetasoundFrontendLiteral::ToLiteral
                       (this_00,&local_38,&pFVar5->TypeName,(IDataTypeRegistry *)0x0,
                        (FProxyDataCache *)0x0);
    Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveDataEdge
              (param_1,(FGuid *)((longlong)this + 8),&pFVar4->Name,pFVar1,&pFVar5->Name,pFVar6,
               FMetaSoundFrontendDocumentBuilder::CreateDataReference);
    bVar3 = true;
  }
  return bVar3;
}

// operator() @ 14b35c450

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnRemoveSwappingNode'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMetasoundFrontendDocument *pFVar6;
  FMetasoundFrontendGraph *pFVar7;
  uint uVar8;
  
  lVar2 = *(longlong *)this;
  pFVar6 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar2 + 0x28));
  pFVar7 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar6->RootGraph,(FGuid *)(lVar2 + 0xc0));
  uVar1 = *(uint *)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar1 < (pFVar7->Nodes).ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveNode
            (param_1,(FGuid *)((pFVar7->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88)
            );
  return true;
}

// operator() @ 14b35c510

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnRemovingInput'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  ulong64 uVar4;
  UAudioComponent *pUVar5;
  FAudioDevice *this_00;
  ulong64 *puVar6;
  undefined1 local_res8 [8];
  code *local_58 [2];
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_30;
  
  Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveInputDataDestination
            (param_1,*(FName **)((longlong)this + 0x10));
  lVar3 = *(longlong *)this;
  puVar6 = *(ulong64 **)(lVar3 + 0xa8);
  iVar2 = *(int *)(lVar3 + 0xb0);
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0xb0) != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar6 == puVar1) break;
    uVar4 = *puVar6;
    pUVar5 = UAudioComponent::GetAudioComponentFromID(uVar4);
    if (pUVar5 != (UAudioComponent *)0x0) {
      this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar5->field_0x250 + 0x88))();
      if (this_00 != (FAudioDevice *)0x0) {
        local_40 = **(undefined8 **)((longlong)this + 0x10);
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``UMetaSoundSourceBuilder::OnRemovingInput'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,void,FActiveSound_&>
                      ::Call;
        local_30 = 0;
        local_48 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnRemovingInput'::`2'::<lambda_1>::operator()'::`12'::<lambda_1>,1,0>
                    ::_vftable_;
        FAudioDevice::SendCommandToActiveSounds
                  (this_00,uVar4,(TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_58,
                   (TStatId)0x154f11430);
      }
    }
    puVar6 = puVar6 + 1;
  }
  return true;
}

// operator() @ 14b35c610

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnRemovingOutput'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetasoundFrontendDocument *pFVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  uint uVar7;
  
  pFVar5 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28));
  pFVar6 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar5->RootGraph);
  uVar1 = *(uint *)((longlong)this + 8);
  uVar7 = 0;
  if ((int)uVar1 < (pFVar6->Outputs).ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveOutputDataSource
            (param_1,(FName *)((pFVar6->Outputs).AllocatorInstance.Data +
                              (longlong)(int)uVar1 * 0x34));
  return true;
}

// operator() @ 14b35ca00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnNodeInputLiteralSet'::__l5::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar1 = **(uint **)((longlong)this + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x60)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar4 = UMetaSoundSourceBuilder::AddNodeInputLiteralToTransactor
                    (*(UMetaSoundSourceBuilder **)this,
                     *(FMetasoundFrontendNode **)((longlong)this + 8),
                     *(FMetasoundFrontendVertex **)((longlong)this + 0x10),
                     (FMetasoundFrontendLiteral *)
                     (*(longlong *)(lVar2 + 0x58) + 0x10 + (longlong)(int)uVar1 * 0x68),param_1);
  return bVar4;
}

// operator() @ 14b35cab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
`UMetaSoundSourceBuilder::OnRemovingNodeInputLiteral'::__l5::<lambda_1>::operator()
          (void *this,FDynamicOperatorTransactor *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMetasoundFrontendLiteral *this_00;
  FLiteral *pFVar4;
  undefined1 auStackY_68 [32];
  undefined8 local_38;
  FLiteral local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this_00 = Metasound::Engine::BuilderSubsystemPrivate::TryResolveNodeInputDefault
                      ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)this + 0x28),
                       *(FGuid **)((longlong)this + 8),**(FName **)((longlong)this + 0x10));
  if (this_00 == (FMetasoundFrontendLiteral *)0x0) {
    local_38 = *(undefined8 *)((longlong)this + 0x10);
    bVar2 = ``UMetaSoundSourceBuilder::OnRemovingNodeInputLiteral'::__l5::<lambda_1>::operator()'::
            __l2::<lambda_1>::operator()(&local_38);
    if (!bVar2) {
      return bVar2;
    }
  }
  pFVar4 = FMetasoundFrontendLiteral::ToLiteral
                     (this_00,&local_30,(FName *)(*(longlong *)((longlong)this + 0x10) + 8),
                      (IDataTypeRegistry *)0x0,(FProxyDataCache *)0x0);
  Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue
            (param_1,*(FGuid **)((longlong)this + 8),*(FName **)((longlong)this + 0x10),pFVar4,
             FMetaSoundFrontendDocumentBuilder::CreateDataReference);
  if ((0xc < local_30.Value.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_30.Value.TypeIndex])(&local_30);
  return true;
}

// operator() @ 14b35d080

void __thiscall
`UMetaSoundSourceBuilder::InitTargetPageDelegates'::__l2::<lambda_2>::operator()
          (void *this,FGraphModifyDelegates *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->NodeDelegates,
             *(void **)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->NodeDelegates).OnNodeConfigurationUpdated,*(void **)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->NodeDelegates).OnNodeInputLiteralSet,*(void **)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->NodeDelegates).OnRemoveSwappingNode,*(void **)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->NodeDelegates).OnRemovingNodeInputLiteral,*(void **)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)param_1,*(void **)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->EdgeDelegates).OnRemoveSwappingEdge,*(void **)this);
  return;
}

// AddEdgeToTransactor @ 14b363760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
UMetaSoundSourceBuilder::AddEdgeToTransactor
          (UMetaSoundSourceBuilder *this,FMetasoundFrontendEdge *param_1,
          FDynamicOperatorTransactor *param_2)

{
  bool bVar1;
  FMetasoundFrontendVertex *pFVar2;
  FMetasoundFrontendVertex *pFVar3;
  
  pFVar2 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_,&param_1->FromNodeID,
                      &param_1->FromVertexID,(FGuid *)0x0);
  pFVar3 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_,&param_1->ToNodeID,
                      &param_1->ToVertexID,(FGuid *)0x0);
  if ((pFVar2 == (FMetasoundFrontendVertex *)0x0) || (pFVar3 == (FMetasoundFrontendVertex *)0x0)) {
    bVar1 = false;
  }
  else {
    Metasound::DynamicGraph::FDynamicOperatorTransactor::AddDataEdge
              (param_2,&param_1->FromNodeID,&pFVar2->Name,&param_1->ToNodeID,&pFVar3->Name);
    bVar1 = true;
  }
  return bVar1;
}

// AddNodeInputLiteralToTransactor @ 14b364580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
UMetaSoundSourceBuilder::AddNodeInputLiteralToTransactor
          (UMetaSoundSourceBuilder *this,FMetasoundFrontendNode *param_1,
          FMetasoundFrontendVertex *param_2,FMetasoundFrontendLiteral *param_3,
          FDynamicOperatorTransactor *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FLiteral *pFVar4;
  undefined1 auStackY_68 [32];
  FLiteral local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  pFVar4 = FMetasoundFrontendLiteral::ToLiteral
                     (param_3,&local_38,&param_2->TypeName,(IDataTypeRegistry *)0x0,
                      (FProxyDataCache *)0x0);
  Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue
            (param_4,&param_1->ID,&param_2->Name,pFVar4,
             FMetaSoundFrontendDocumentBuilder::CreateDataReference);
  if (0xc < local_38.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_38.Value.TypeIndex])(&local_38);
  return true;
}

// Audition @ 14b365cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::Audition
          (UMetaSoundSourceBuilder *this,UObject *param_1,UAudioComponent *param_2,
          FOnCreateAuditionGeneratorHandleDelegate *param_3,bool param_4)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UMetaSoundSource *this_00;
  UMetasoundGeneratorHandle *pUVar8;
  FDelegateHandle FVar9;
  bool bVar10;
  FName local_res18 [2];
  ulong64 local_78;
  UMetasoundGeneratorHandle *local_70;
  undefined1 local_68 [24];
  FString local_50;
  TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> local_40;
  
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetaSoundSourceBuilder::Audition");
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId201,"UMetaSoundSourceBuilder::Audition",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
               ,0xc9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId201);
  }
  if (param_2 == (UAudioComponent *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    this_00 = CastChecked<UMetaSoundSource,UObject>((UObject *)this->_padding_);
    UMetaSoundBuilderBase::RegisterGraphIfOutstandingTransactions((UObject *)this_00);
    UMetaSoundSource::SetDynamicGeneratorEnabled(this_00,&local_40,param_4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.SharedReferenceCount.ReferenceController);
    (**(code **)(*(longlong *)&this_00->field_0x4b8 + 0x38))();
    UAudioComponent::SetSound(param_2,(USoundBase *)this_00);
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_3);
    if (bVar6) {
      pUVar8 = UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle(param_2);
      if (pUVar8 == (UMetasoundGeneratorHandle *)0x0) {
        local_res18[0] = (FName)this->_padding_;
        ::FName::ToString(local_res18,(FString *)(local_68 + 8));
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                           ,0xdd,
                           L"BindToGeneratorDelegate Failed when attempting to audition MetaSoundSource builder \'%s\'"
                          );
        if ((void *)local_68._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_68._8_8_);
        }
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_70 = pUVar8;
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_3,&local_70);
    }
    if (param_4) {
      local_78 = param_2->AudioComponentID;
      pTVar2 = &this->LiveComponentIDs;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           pFVar3 + (longlong)(this->LiveComponentIDs).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->LiveComponentIDs).ArrayNum;
      piVar1 = &(this->LiveComponentIDs).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->LiveComponentIDs).ArrayNum = iVar7 + 1;
      *(ulong64 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_78;
      FVar9 = TMulticastDelegateRegistration<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>
              ::AddUObject<UMetaSoundSourceBuilder>
                        ((TMulticastDelegateRegistration<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>
                          *)&param_2->OnAudioFinishedNative,(UMetaSoundSourceBuilder *)local_68,
                         (pmf_2a32482d)this);
                    /* WARNING: Load size is inaccurate */
      (this->LiveComponentHandle).ID = *FVar9.ID;
    }
    (**(code **)(*(longlong *)param_2 + 0x650))(param_2,0);
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// BuildAndOverwriteMetaSoundInternal @ 14b366850

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::BuildAndOverwriteMetaSoundInternal
          (UMetaSoundSourceBuilder *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1,
          bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FMetaSoundBuilderOptions local_28;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExistingMetaSound.GetObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                       ,0x15b,L"ExistingMetaSound interface must point to valid MetaSound object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.bAddToRegistry = true;
  local_28.Name.ComparisonIndex.Value = 0;
  local_28.Name.Number = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1);
  }
  local_28.ExistingMetaSound._0_8_ = *(undefined8 *)param_1;
  local_28.ExistingMetaSound._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_28.bForceUniqueClassName = param_2;
  UMetaSoundBuilderBase::BuildInternal<UMetaSoundSource>
            ((UMetaSoundBuilderBase *)this,(UObject *)0x0,&local_28);
  return;
}

// BuildNewMetaSound @ 14b366aa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TScriptInterface<IMetaSoundDocumentInterface> * __thiscall
UMetaSoundSourceBuilder::BuildNewMetaSound
          (UMetaSoundSourceBuilder *this,
          TScriptInterface<IMetaSoundDocumentInterface> *__return_storage_ptr__,FName param_1)

{
  UMetaSoundSource *pUVar1;
  undefined1 *puVar2;
  FMetaSoundBuilderOptions local_28;
  
  local_28.bForceUniqueClassName = false;
  local_28.bAddToRegistry = true;
  local_28.ExistingMetaSound._0_8_ = 0;
  local_28.ExistingMetaSound._8_8_ = 0;
  local_28.Name = param_1;
  pUVar1 = UMetaSoundBuilderBase::BuildInternal<UMetaSoundSource>
                     ((UMetaSoundBuilderBase *)this,(UObject *)0x0,&local_28);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMetaSoundSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UMetaSoundSource **)__return_storage_ptr__ = pUVar1;
  puVar2 = &pUVar1->field_0x4b8;
  if (pUVar1 == (UMetaSoundSource *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  *(undefined1 **)&__return_storage_ptr__->field_0x8 = puVar2;
  return __return_storage_ptr__;
}

// ExecuteAuditionableTransaction @ 14b3a1200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
UMetaSoundSourceBuilder::ExecuteAuditionableTransaction
          (UMetaSoundSourceBuilder *this,
          TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicOperatorTransactor *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  UMetaSoundSource *pUVar5;
  bool bVar6;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetaSoundSourceBuilder::ExecuteAuditionableTransaction");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId329,
               "UMetaSoundSourceBuilder::ExecuteAuditionableTransaction",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
               ,0x149);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId329);
  }
  pUVar5 = CastChecked<UMetaSoundSource,UObject>((UObject *)this->_padding_);
  pTVar1 = (pUVar5->DynamicTransactor).SharedReferenceCount.ReferenceController;
  pFVar2 = (pUVar5->DynamicTransactor).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FDynamicOperatorTransactor *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  return (bool)uVar4;
}

// FindOutputAudioFormatInfo @ 14b3a8de0

TTuple<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo> * __thiscall
UMetaSoundSourceBuilder::FindOutputAudioFormatInfo(UMetaSoundSourceBuilder *this)

{
  TMap<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
  *pTVar1;
  TTuple<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo> *pTVar2;
  
  pTVar1 = Metasound::Engine::GetOutputAudioFormatInfo();
  pTVar2 = AlgoImpl::
           FindByPredicate<TMap<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>_const_&,_UMetaSoundSourceBuilder::FindOutputAudioFormatInfo_::__l2::<lambda_1>_>
                     (pTVar1,(<lambda_1>)this);
  return pTVar2;
}

// GetBaseMetaSoundUClass @ 14b3ae180

UClass * __thiscall UMetaSoundSourceBuilder::GetBaseMetaSoundUClass(UMetaSoundSourceBuilder *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSource",
               &Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton,
               UMetaSoundSource::StaticRegisterNativesUMetaSoundSource,0x8c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundSource>,
               InternalVTableHelperCtorCaller<UMetaSoundSource>,aFStackX_8,
               USoundWaveProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton;
}

// GetConstTargetPageGraphChecked @ 14b3ae990

FMetasoundFrontendGraph * __thiscall
UMetaSoundSourceBuilder::GetConstTargetPageGraphChecked(UMetaSoundSourceBuilder *this)

{
  FMetasoundFrontendDocument *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  pFVar2 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar1->RootGraph,&this->TargetPageID);
  return pFVar2;
}

// GetLiveUpdatesEnabled @ 14b3b6800

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall UMetaSoundSourceBuilder::GetLiveUpdatesEnabled(UMetaSoundSourceBuilder *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicOperatorTransactor *pFVar2;
  UMetaSoundSource *pUVar3;
  
  pUVar3 = CastChecked<UMetaSoundSource,UObject>((UObject *)this->_padding_);
  pTVar1 = (pUVar3->DynamicTransactor).SharedReferenceCount.ReferenceController;
  pFVar2 = (pUVar3->DynamicTransactor).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pFVar2 != (FDynamicOperatorTransactor *)0x0;
}

// GetMetaSoundSource @ 14b3b6d10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UMetaSoundSource * __thiscall
UMetaSoundSourceBuilder::GetMetaSoundSource(UMetaSoundSourceBuilder *this)

{
  UMetaSoundSource *pUVar1;
  
  pUVar1 = CastChecked<UMetaSoundSource,UObject>((UObject *)this->_padding_);
  return pUVar1;
}

// GetPrivateStaticClass @ 14b3bf7c0

UClass * __cdecl UMetaSoundSourceBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSourceBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSourceBuilder",
               &Z_Registration_Info_UClass_UMetaSoundSourceBuilder.InnerSingleton,
               StaticRegisterNativesUMetaSoundSourceBuilder,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundSourceBuilder>,
               InternalVTableHelperCtorCaller<UMetaSoundSourceBuilder>,local_res8,
               UMetaSoundBuilderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSourceBuilder.InnerSingleton;
}

// InitDelegates @ 14b3c49e0

void __thiscall
UMetaSoundSourceBuilder::InitDelegates
          (UMetaSoundSourceBuilder *this,FDocumentModifyDelegates *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  FMRSWRecursiveAccessDetector *local_48;
  char local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)(local_58 + 8));
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  bVar4 = false;
  uVar8 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(this->_padding_ + 8 + lVar9) == 0) ||
          (plVar2 = *(longlong **)(this->_padding_ + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
  }
  if (local_40 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (local_48,(FDestructionSentinel *)(local_58 + 8));
  }
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundBuilderBase>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnDependencyAdded,(UMetaSoundBuilderBase *)&stack0x00000008,
             (pmf_a886c6ad)this);
  TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundBuilderBase>
            ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
             &param_1->OnRemoveSwappingDependency,(UMetaSoundBuilderBase *)&stack0x00000010,
             (pmf_b05325b7)this);
  TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
              *)&param_1->PageDelegates,(UMetaSoundSourceBuilder *)&stack0x00000018,
             (pmf_acc7b8aa)this);
  TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
              *)&(param_1->PageDelegates).OnRemovingPage,(UMetaSoundSourceBuilder *)&stack0x00000020
             ,(pmf_acc7b8aa)this);
  TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentPresetStateChangedArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentPresetStateChangedArgs_const_&),FDefaultDelegateUserPolicy>
              *)&param_1->OnPresetStateChanged,(UMetaSoundSourceBuilder *)local_78,
             (pmf_5f5279d0)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &(param_1->InterfaceDelegates).OnInputAdded,(UMetaSoundSourceBuilder *)(local_78 + 8),
             (pmf_fd129811)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &(param_1->InterfaceDelegates).OnOutputAdded,(UMetaSoundSourceBuilder *)local_68,
             (pmf_4d202216)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &(param_1->InterfaceDelegates).OnRemovingInput,
             (UMetaSoundSourceBuilder *)(local_68 + 8),(pmf_fd129811)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &(param_1->InterfaceDelegates).OnRemovingOutput,(UMetaSoundSourceBuilder *)local_58,
             (pmf_4d202216)this);
  InitTargetPageDelegates(this,param_1);
  return;
}

// InitTargetPageDelegates @ 14b3c7040

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::InitTargetPageDelegates
          (UMetaSoundSourceBuilder *this,FDocumentModifyDelegates *param_1)

{
  UMetaSoundSettings *this_00;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  IMetaSoundDocumentInterface *pIVar6;
  longlong lVar7;
  UClass *this_01;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar8;
  FMetasoundFrontendGraph *pFVar9;
  TArrayView<FGuid_const_,int> *pTVar10;
  FGraphModifyDelegates *this_02;
  int iVar11;
  FGuid *pFVar12;
  UMetaSoundSourceBuilder *local_res8;
  UMetaSoundSourceBuilder *local_res18 [2];
  code *local_e8;
  UMetaSoundSourceBuilder **local_e0;
  code *local_d8;
  UMetaSoundSourceBuilder **local_d0;
  FGuid *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_88;
  TArrayView<FGuid_const_,int> local_78;
  TArrayView<FGuid_const_,int> local_68;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<FGuid_const_,int> local_48;
  
  local_e0 = &local_res8;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::InitTargetPageDelegates'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
             ::Call;
  local_res8 = this;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_e8);
  local_d0 = local_res18;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::InitTargetPageDelegates'::__l2::<lambda_2>,void,Metasound::Frontend::FGraphModifyDelegates_&>
             ::Call;
  local_res18[0] = this;
  Metasound::Frontend::FDocumentModifyDelegates::IterateGraphDelegates
            (param_1,(TFunctionRef<void___cdecl(Metasound::Frontend::FGraphModifyDelegates_&)> *)
                     &local_d8);
  pIVar6 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentInterfaceChecked
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  this->TargetPageID = Metasound::Frontend::DefaultPageID;
  lVar7 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6);
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = IsInAudioThread();
    if (!bVar5) {
      pFVar12 = (FGuid *)0x0;
      iVar11 = 0;
      this_01 = UMetaSoundSettings::StaticClass();
      if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_01);
      }
      this_00 = (UMetaSoundSettings *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
      if (this_00 != (UMetaSoundSettings *)0x0) {
        pTVar8 = UMetaSoundSettings::GeneratePageOrder(this_00,&local_88);
        iVar11 = 0;
        if (&local_58 != pTVar8) {
          pFVar12 = (FGuid *)(pTVar8->AllocatorInstance).Data;
          (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          iVar11 = pTVar8->ArrayNum;
          pTVar8->ArrayNum = 0;
          pTVar8->ArrayMax = 0;
        }
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
      }
      local_c8 = pFVar12;
      if (iVar11 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_78._8_8_ = CONCAT44(uStack_bc,iVar11);
      local_78.DataPtr = local_c8;
      iStack_c0 = iVar11;
      pFVar9 = Metasound::Frontend::FindPreferredPage<FMetasoundFrontendGraph>
                         ((TArray<FMetasoundFrontendGraph,TSizedDefaultAllocator<32>_> *)
                          (lVar7 + 0x100),&local_78);
      if (pFVar12 != (FGuid *)0x0) {
        FMemory::Free(pFVar12);
      }
      goto LAB_14b3c71d4;
    }
  }
  pTVar10 = UMetaSoundSettings::GetPageOrder(&local_48);
  local_68.DataPtr = pTVar10->DataPtr;
  local_68._8_8_ = *(undefined8 *)&pTVar10->ArrayNum;
  pFVar9 = Metasound::Frontend::FindPreferredPage<FMetasoundFrontendGraph>
                     ((TArray<FMetasoundFrontendGraph,TSizedDefaultAllocator<32>_> *)(lVar7 + 0x100)
                      ,&local_68);
LAB_14b3c71d4:
  if (pFVar9 != (FMetasoundFrontendGraph *)0x0) {
    uVar2 = (pFVar9->PageID).B;
    uVar3 = (pFVar9->PageID).C;
    uVar4 = (pFVar9->PageID).D;
    (this->TargetPageID).A = (pFVar9->PageID).A;
    (this->TargetPageID).B = uVar2;
    (this->TargetPageID).C = uVar3;
    (this->TargetPageID).D = uVar4;
  }
  this_02 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                      (param_1,&this->TargetPageID);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)this_02
             ,(UMetaSoundSourceBuilder *)(local_res18 + 1),(pmf_4d202216)this);
  TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
             &(this_02->EdgeDelegates).OnRemoveSwappingEdge,(UMetaSoundSourceBuilder *)local_b8,
             (pmf_7c5dbdde)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &this_02->NodeDelegates,(UMetaSoundSourceBuilder *)(local_b8 + 8),(pmf_4d202216)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &(this_02->NodeDelegates).OnNodeConfigurationUpdated,
             (UMetaSoundSourceBuilder *)local_a8,(pmf_4d202216)this);
  TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *
             )&(this_02->NodeDelegates).OnNodeInputLiteralSet,
             (UMetaSoundSourceBuilder *)(local_a8 + 8),(pmf_b7d115f8)this);
  TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
             &(this_02->NodeDelegates).OnRemoveSwappingNode,(UMetaSoundSourceBuilder *)local_98,
             (pmf_7c5dbdde)this);
  TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundSourceBuilder>
            ((TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *
             )&(this_02->NodeDelegates).OnRemovingNodeInputLiteral,
             (UMetaSoundSourceBuilder *)(local_98 + 8),(pmf_b7d115f8)this);
  return;
}

// OnAssetReferenceAdded @ 14b3c9d80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::OnAssetReferenceAdded
          (UMetaSoundSourceBuilder *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMetaSoundSource *pUVar3;
  longlong lVar4;
  FString *pFVar5;
  longlong *plVar6;
  TObjectPtr<UObject> local_res8;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FString local_48;
  FNodeClassRegistryKey local_38;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DocInterface.GetObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                       ,0x1e0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = CastChecked<UMetaSoundSource,UObject>((UObject *)this->_padding_);
  local_res18 = *(UObject **)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
  Emplace<TObjectPtr<UObject>_>
            (&pUVar3->ReferencedAssetClassObjects,&local_res8,(bool *)&local_res18);
  if (*(longlong *)param_1 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)&param_1->field_0x8;
  }
  lVar4 = (**(code **)(*plVar6 + 0x18))();
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_38,(FMetasoundFrontendGraphClass *)(lVar4 + 0x70));
  pFVar5 = Metasound::Frontend::FNodeClassRegistryKey::ToString(&local_38,&local_48);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (&pUVar3->ReferencedAssetClassKeys,(FString *)local_res10,(bool *)pFVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// OnEdgeAdded @ 14b3ca470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSourceBuilder::OnEdgeAdded(UMetaSoundSourceBuilder *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendDocument *pFVar3;
  FMetasoundFrontendGraph *pFVar4;
  uint uVar5;
  UMetaSoundSourceBuilder *local_28;
  FScriptContainerElement *local_20;
  code *local_18;
  UMetaSoundSourceBuilder **local_10;
  
  pFVar3 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  pFVar4 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar3->RootGraph,&this->TargetPageID);
  uVar5 = 0;
  if (param_1 < (pFVar4->Edges).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  local_20 = (pFVar4->Edges).AllocatorInstance.Data + (longlong)param_1 * 0x40;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::OnEdgeAdded'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
             ::Call;
  local_28 = this;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_18);
  return;
}

// OnInputAdded @ 14b3ca5b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSourceBuilder::OnInputAdded(UMetaSoundSourceBuilder *this,int param_1)

{
  FMetasoundFrontendClassInput *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendDocument *pFVar4;
  FMetasoundFrontendClassInterface *pFVar5;
  UMetaSoundSource *pUVar6;
  TArrayView<FGuid_const_,int> *pTVar7;
  IDataTypeRegistry *pIVar8;
  FRuntimeInput *pFVar9;
  TTuple<FName,UMetaSoundSource::FRuntimeInput> *pTVar10;
  uint uVar11;
  TArrayView<FGuid_const_,int> local_118;
  code *local_108;
  UMetaSoundSourceBuilder **local_100;
  UMetaSoundSourceBuilder *local_f8;
  int local_f0;
  FMetasoundFrontendClassInput *local_e8;
  TArrayView<FGuid_const_,int> local_e0;
  FRuntimeInput local_d0;
  
  pFVar4 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  pFVar5 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar4->RootGraph);
  uVar11 = 0;
  if (param_1 < (pFVar5->Inputs).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (FMetasoundFrontendClassInput *)
           ((pFVar5->Inputs).AllocatorInstance.Data + (longlong)param_1 * 0x48);
  pUVar6 = CastChecked<UMetaSoundSource,UObject>((UObject *)this->_padding_);
  pTVar7 = UMetaSoundSettings::GetPageOrder(&local_e0);
  local_118.DataPtr = pTVar7->DataPtr;
  local_118.ArrayNum = pTVar7->ArrayNum;
  local_118._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
  pIVar8 = Metasound::Frontend::IDataTypeRegistry::Get();
  pFVar9 = UMetaSoundSource::CreateRuntimeInput(&local_d0,pIVar8,pFVar1,true,&local_118);
  pTVar10 = TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
            ::AllocateMemoryForEmplace<FName_const_&>
                      (&(pUVar6->RuntimeInputData).InputMap,(FName *)pFVar1);
  *(longlong *)pTVar10 = pFVar1->_padding_;
  uVar11 = (pFVar9->Name).Number;
  *(uint *)&pTVar10->field_0x8 = (pFVar9->Name).ComparisonIndex.Value;
  *(uint *)&pTVar10->field_0xc = uVar11;
  uVar11 = (pFVar9->TypeName).Number;
  *(uint *)&pTVar10->field_0x10 = (pFVar9->TypeName).ComparisonIndex.Value;
  *(uint *)&pTVar10->field_0x14 = uVar11;
  *(EMetasoundFrontendVertexAccessType *)&pTVar10->field_0x18 = pFVar9->AccessType;
  FAudioParameter::FAudioParameter
            ((FAudioParameter *)&pTVar10->field_0x20,&pFVar9->DefaultParameter);
  pTVar10->field_0xc0 = pFVar9->bIsTransmittable;
  FAudioParameter::~FAudioParameter(&local_d0.DefaultParameter);
  local_100 = &local_f8;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMetaSoundSourceBuilder::OnInputAdded'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
              ::Call;
  local_f8 = this;
  local_f0 = param_1;
  local_e8 = pFVar1;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_108);
  return;
}

// OnLiveComponentFinished @ 14b3ca740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::OnLiveComponentFinished
          (UMetaSoundSourceBuilder *this,UAudioComponent *param_1)

{
  FDelegateHandle FVar1;
  USoundBase *pUVar2;
  USoundAttenuation *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  USoundBase *pUVar6;
  ulong64 local_res8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_res8 = param_1->AudioComponentID;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&this->LiveComponentIDs,&local_res8,No);
  if ((this->LiveComponentIDs).ArrayNum == 0) {
    FVar1.ID = (this->LiveComponentHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &param_1->OnAudioFinishedNative,FVar1);
    }
    if ((param_1->Sound).field0_0x0.DebugPtr != (USoundBase *)0x0) {
      pUVar5 = UMetaSoundSource::StaticClass();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->Sound,pUVar5);
      if ((bVar4) && (pUVar2 = (param_1->Sound).field0_0x0.DebugPtr, pUVar2 != (USoundBase *)0x0)) {
        bVar4 = FMetaSoundFrontendDocumentBuilder::IsValid
                          ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
        if (bVar4) {
          pUVar6 = (USoundBase *)
                   FMetaSoundFrontendDocumentBuilder::CastDocumentObjectChecked<UObject>
                             ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
          if (pUVar6 == pUVar2) {
            local_18 = 0;
            FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (&pUVar2[5].Priority != (float *)&local_18) {
              *(undefined8 *)&pUVar2[5].Priority = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&pUVar2[5].AttenuationSettings,&FStack_10);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_10.ReferenceController);
            pUVar3 = pUVar2[5].AttenuationSettings.field0_0x0.DebugPtr;
            if (pUVar3 != (USoundAttenuation *)0x0) {
              LOCK();
              *(atomic<int> *)&pUVar3->_padding_ =
                   (atomic<int>)((int)*(atomic<int> *)&pUVar3->_padding_ + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pUVar3);
          }
        }
      }
    }
  }
  return;
}

// OnNodeAdded @ 14b3ca850

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSourceBuilder::OnNodeAdded(UMetaSoundSourceBuilder *this,int param_1)

{
  UMetaSoundSourceBuilder *local_28;
  int local_20;
  code *local_18;
  UMetaSoundSourceBuilder **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::OnNodeAdded'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_18);
  return;
}

// OnNodeConfigurationUpdated @ 14b3ca890

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::OnNodeConfigurationUpdated(UMetaSoundSourceBuilder *this,int param_1)

{
  UMetaSoundSourceBuilder *local_28;
  int local_20;
  code *local_18;
  UMetaSoundSourceBuilder **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::OnNodeConfigurationUpdated'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_18);
  return;
}

// OnNodeInputLiteralSet @ 14b3ca8d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::OnNodeInputLiteralSet
          (UMetaSoundSourceBuilder *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendDocument *pFVar3;
  FMetasoundFrontendGraph *pFVar4;
  uint uVar5;
  FGuid *pFVar6;
  longlong lVar7;
  int local_res20 [2];
  code *local_48;
  UMetaSoundSourceBuilder **local_40;
  UMetaSoundSourceBuilder *local_38;
  FGuid *local_30;
  longlong local_28;
  int *local_20;
  
  local_res20[0] = param_3;
  pFVar3 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  pFVar4 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar3->RootGraph,&this->TargetPageID);
  uVar5 = 0;
  if (param_1 < (pFVar4->Nodes).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar6 = (FGuid *)((pFVar4->Nodes).AllocatorInstance.Data + (longlong)param_1 * 0x88);
  uVar5 = 0;
  if (param_2 < (int)pFVar6[3].A) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  lVar7 = (longlong)param_2 * 0x20 + *(longlong *)&pFVar6[2].C;
  bVar2 = FMetaSoundFrontendDocumentBuilder::IsNodeInputConnected
                    ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_,pFVar6,
                     (FGuid *)(lVar7 + 0x10),(FGuid *)0x0);
  if (!bVar2) {
    local_20 = local_res20;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMetaSoundSourceBuilder::OnNodeInputLiteralSet'::__l5::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
               ::Call;
    local_38 = this;
    local_30 = pFVar6;
    local_28 = lVar7;
    ExecuteAuditionableTransaction
              (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                     *)&local_48);
  }
  return;
}

// OnOutputAdded @ 14b3caa30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSourceBuilder::OnOutputAdded(UMetaSoundSourceBuilder *this,int param_1)

{
  UMetaSoundSourceBuilder *local_28;
  int local_20;
  code *local_18;
  UMetaSoundSourceBuilder **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::OnOutputAdded'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_18);
  return;
}

// OnPageAdded @ 14b3cac50

void __thiscall
UMetaSoundSourceBuilder::OnPageAdded(UMetaSoundSourceBuilder *this,FDocumentMutatePageArgs *param_1)

{
  FDocumentModifyDelegates *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::GetDocumentDelegates
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  InitTargetPageDelegates(this,pFVar1);
  return;
}

// OnPresetStateChanged @ 14b3cac80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::OnPresetStateChanged
          (UMetaSoundSourceBuilder *this,FDocumentPresetStateChangedArgs *param_1)

{
  UMetaSoundSource *pUVar1;
  
  pUVar1 = CastChecked<UMetaSoundSource,UObject>((UObject *)this->_padding_);
  pUVar1->bIsPresetGraphInflationSupported = false;
  LOCK();
  (pUVar1->RuntimeInputData).bIsValid = (atomic<bool>)0x0;
  UNLOCK();
  return;
}

// OnRemoveSwappingEdge @ 14b3cb080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::OnRemoveSwappingEdge(UMetaSoundSourceBuilder *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendDocument *pFVar4;
  FMetasoundFrontendGraph *pFVar5;
  uint uVar6;
  longlong lVar7;
  code *local_68;
  UMetaSoundSourceBuilder **local_60;
  UMetaSoundSourceBuilder *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  pFVar4 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  pFVar5 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar4->RootGraph,&this->TargetPageID);
  uVar6 = 0;
  if (param_1 < (pFVar5->Edges).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (pFVar5->Edges).AllocatorInstance.Data;
  lVar7 = (longlong)param_1 * 0x40;
  local_50 = *(undefined8 *)(pFVar1 + lVar7);
  uStack_48 = *(undefined8 *)(pFVar1 + lVar7 + 8);
  local_40 = *(undefined8 *)(pFVar1 + lVar7 + 0x10);
  uStack_38 = *(undefined8 *)(pFVar1 + lVar7 + 0x10 + 8);
  local_30 = *(undefined8 *)(pFVar1 + lVar7 + 0x20);
  uStack_28 = *(undefined8 *)(pFVar1 + lVar7 + 0x20 + 8);
  local_20 = *(undefined8 *)(pFVar1 + lVar7 + 0x30);
  uStack_18 = *(undefined8 *)(pFVar1 + lVar7 + 0x30 + 8);
  local_60 = &local_58;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemoveSwappingEdge'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
             ::Call;
  local_58 = this;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_68);
  return;
}

// OnRemoveSwappingNode @ 14b3cb170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::OnRemoveSwappingNode(UMetaSoundSourceBuilder *this,int param_1,int param_2)

{
  UMetaSoundSourceBuilder *local_28;
  int local_20;
  code *local_18;
  UMetaSoundSourceBuilder **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemoveSwappingNode'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_18);
  return;
}

// OnRemovingAssetReference @ 14b3cb300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::OnRemovingAssetReference
          (UMetaSoundSourceBuilder *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMetaSoundSource *pUVar5;
  longlong lVar6;
  FString *pFVar7;
  int iVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  UObject *local_res8;
  FString local_48;
  FNodeClassRegistryKey local_38;
  
  pwVar10 = L"";
  if ((*(longlong *)param_1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DocInterface.GetObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x347,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = CastChecked<UMetaSoundSource,UObject>((UObject *)this->_padding_);
  local_res8 = *(UObject **)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::Remove
            (&pUVar5->ReferencedAssetClassObjects,(TObjectPtr<UObject_const_>)&local_res8);
  plVar9 = (longlong *)0x0;
  if (*(longlong *)param_1 != 0) {
    plVar9 = *(longlong **)&param_1->field_0x8;
  }
  lVar6 = (**(code **)(*plVar9 + 0x18))();
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_38,(FMetasoundFrontendGraphClass *)(lVar6 + 0x70));
  pFVar7 = Metasound::Frontend::FNodeClassRegistryKey::ToString(&local_38,&local_48);
  if (*(int *)&(pUVar5->ReferencedAssetClassKeys).Elements.field_0x8 !=
      *(int *)&(pUVar5->ReferencedAssetClassKeys).Elements.field_0x34) {
    iVar1 = (pFVar7->Data).ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    else {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
              (&pUVar5->ReferencedAssetClassKeys,uVar4,pFVar7);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// OnRemovingInput @ 14b3cb420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSourceBuilder::OnRemovingInput(UMetaSoundSourceBuilder *this,int param_1)

{
  int *piVar1;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar2
  ;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMetasoundFrontendDocument *pFVar7;
  FMetasoundFrontendClassInterface *pFVar8;
  UMetaSoundSource *pUVar9;
  int iVar10;
  FScriptContainerElement *_Dst;
  uint uVar11;
  FName local_res8;
  FKeyForward local_res10;
  code *local_58;
  UMetaSoundSourceBuilder **local_50;
  UMetaSoundSourceBuilder *local_48;
  int local_40;
  FName *local_38;
  
  pFVar7 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar7->RootGraph);
  uVar6 = 0;
  if (param_1 < (pFVar8->Inputs).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (FName *)((pFVar8->Inputs).AllocatorInstance.Data + (longlong)param_1 * 0x48);
  pUVar9 = CastChecked<UMetaSoundSource,UObject>((UObject *)this->_padding_);
  pTVar2 = &(pUVar9->RuntimeInputData).InputMap;
  local_res8 = *pFVar3;
  uVar6 = Algo::
          BinarySearchBy<TArray<TTuple<FName,UMetaSoundSource::FRuntimeInput>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&pTVar2->Pairs,&local_res8,local_res10,(FNameFastLess)local_res10);
  if (uVar6 != 0xffffffff) {
    uVar11 = 0;
    if ((int)uVar6 < (pUVar9->RuntimeInputData).InputMap.Pairs.ArrayNum) {
      uVar11 = ~uVar6 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    _Dst = (pTVar2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar6 * 200;
    FAudioParameter::~FAudioParameter((FAudioParameter *)(_Dst + 0x20));
    iVar10 = (pUVar9->RuntimeInputData).InputMap.Pairs.ArrayNum + ~uVar6;
    if (iVar10 != 0) {
      memmove(_Dst,_Dst + 200,(longlong)iVar10 * 200);
    }
    piVar1 = &(pUVar9->RuntimeInputData).InputMap.Pairs.ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,(ForAnyElementType *)pTVar2,(pUVar9->RuntimeInputData).InputMap.Pairs.ArrayNum,
               &(pUVar9->RuntimeInputData).InputMap.Pairs.ArrayMax);
  }
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemovingInput'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
             ::Call;
  local_48 = this;
  local_40 = param_1;
  local_38 = pFVar3;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_58);
  return;
}

// OnRemovingNodeInputLiteral @ 14b3cb5f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSourceBuilder::OnRemovingNodeInputLiteral
          (UMetaSoundSourceBuilder *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendDocument *pFVar3;
  FMetasoundFrontendGraph *pFVar4;
  uint uVar5;
  longlong lVar6;
  FGuid *pFVar7;
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20 [2];
  code *local_68;
  UMetaSoundSourceBuilder **local_60;
  UMetaSoundSourceBuilder *local_58;
  FGuid *local_50;
  longlong local_48;
  uint *local_40;
  uint *local_38;
  int *local_30;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  pFVar3 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  pFVar4 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar3->RootGraph,&this->TargetPageID);
  lVar6 = (longlong)(int)local_res10[0];
  uVar5 = 0;
  if ((int)local_res10[0] < (pFVar4->Nodes).ArrayNum) {
    uVar5 = ~local_res10[0] >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar7 = (FGuid *)((pFVar4->Nodes).AllocatorInstance.Data + lVar6 * 0x88);
  lVar6 = (longlong)(int)local_res18[0];
  uVar5 = 0;
  if ((int)local_res18[0] < (int)pFVar7[3].A) {
    uVar5 = ~local_res18[0] >> 0x1f;
  }
  if (uVar5 == 0) {
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
  lVar6 = lVar6 * 0x20 + *(longlong *)&pFVar7[2].C;
  bVar2 = FMetaSoundFrontendDocumentBuilder::IsNodeInputConnected
                    ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_,pFVar7,
                     (FGuid *)(lVar6 + 0x10),(FGuid *)0x0);
  if (!bVar2) {
    local_40 = local_res10;
    local_38 = local_res18;
    local_30 = local_res20;
    local_60 = &local_58;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemovingNodeInputLiteral'::__l5::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
               ::Call;
    local_58 = this;
    local_50 = pFVar7;
    local_48 = lVar6;
    ExecuteAuditionableTransaction
              (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                     *)&local_68);
  }
  return;
}

// OnRemovingOutput @ 14b3cb760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSourceBuilder::OnRemovingOutput(UMetaSoundSourceBuilder *this,int param_1)

{
  UMetaSoundSourceBuilder *local_28;
  int local_20;
  code *local_18;
  UMetaSoundSourceBuilder **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemovingOutput'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  ExecuteAuditionableTransaction
            (this,(TFunctionRef<bool___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor_&)>
                   *)&local_18);
  return;
}

// OnRemovingPage @ 14b3cb7a0

void __thiscall
UMetaSoundSourceBuilder::OnRemovingPage
          (UMetaSoundSourceBuilder *this,FDocumentMutatePageArgs *param_1)

{
  FDocumentModifyDelegates *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::GetDocumentDelegates
                     ((FMetaSoundFrontendDocumentBuilder *)&this->_padding_);
  InitTargetPageDelegates(this,pFVar1);
  return;
}

// SetBlockRateOverride @ 14b3df1e0

void __thiscall
UMetaSoundSourceBuilder::SetBlockRateOverride(UMetaSoundSourceBuilder *this,float param_1)

{
  return;
}

// SetFormat @ 14b3df560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMetaSoundSourceBuilder::SetFormat
          (UMetaSoundSourceBuilder *this,EMetaSoundOutputAudioFormat param_1,
          EMetaSoundBuilderResult *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  FName FVar5;
  code *pcVar6;
  FMetasoundFrontendVersionNumber FVar7;
  FMetasoundFrontendDocument *pFVar8;
  TMap<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  TMap<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
  *this_00;
  FOutputAudioFormatInfo *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  FMetasoundFrontendVersion *pFVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 auStack_1a8 [32];
  FMetasoundFrontendVersion *local_188;
  FMetasoundFrontendVersion *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_158 [8];
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_150;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_140;
  TMap<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  FMetasoundFrontendDocument *local_f8;
  FMetaSoundFrontendDocumentBuilder *local_f0;
  EMetaSoundBuilderResult *local_e8;
  TMap<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  plVar16 = &this->_padding_;
  local_f0 = (FMetaSoundFrontendDocumentBuilder *)plVar16;
  local_e8 = param_2;
  FMetaSoundFrontendDocumentBuilder::ConvertFromPreset((FMetaSoundFrontendDocumentBuilder *)plVar16)
  ;
  this_00 = Metasound::Engine::GetOutputAudioFormatInfo();
  iVar20 = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  pFVar13 = TMapBase<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
            ::Find(this_00,param_1);
  if (pFVar13 != (FOutputAudioFormatInfo *)0x0) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_140.AllocatorInstance,&local_140.ArrayMax);
    local_140.ArrayNum = iVar11 + 1;
    iVar4 = (pFVar13->InterfaceVersion).Number.Major;
    iVar17 = (pFVar13->InterfaceVersion).Number.Minor;
    pFVar2 = (FName *)(local_140.AllocatorInstance.Data + (longlong)iVar11 * 0x10);
    *pFVar2 = (pFVar13->InterfaceVersion).Name;
    pFVar2[1].ComparisonIndex = (FNameEntryId)iVar4;
    pFVar2[1].Number = iVar17;
  }
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  local_f8 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                       ((FMetaSoundFrontendDocumentBuilder *)plVar16);
  iVar4 = *(int *)&this_00->field_0x28;
  puVar1 = &this_00->field_0x10;
  uStack_124 = 1;
  local_110 = 0;
  iStack_114 = iVar20;
  if (iVar4 != 0) {
    puVar23 = *(uint **)&this_00->field_0x20;
    if (*(uint **)&this_00->field_0x20 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar21 = *puVar23;
    local_110 = 0;
    iVar20 = 0;
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar20;
      local_110 = local_110 + 0x20;
      iVar20 = iVar20 + 1;
      iStack_114 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14b3df68d;
      uVar21 = puVar23[lVar15 + 1];
    }
    uStack_124 = -uVar21 & uVar21;
    uVar3 = (ulonglong)uStack_124 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_100 = (int)lVar15;
    iStack_114 = local_110 + -1 + local_100;
    if (iVar4 < iStack_114) {
      iStack_114 = iVar4;
    }
  }
LAB_14b3df68d:
  uVar21 = *(uint *)&this_00->field_0x28;
  uVar18 = uVar21 & 0xffffffe0;
  iStack_108 = *(int *)&this_00->field_0x8 - *(int *)&this_00->field_0x34;
  uStack_118 = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_124,iVar20);
  TStack_d8.CurrentBitIndex = iStack_114;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_d8._28_4_ = iStack_114;
  TStack_d8.BaseBitIndex = local_110;
  uStack_b8 = CONCAT44(uStack_104,iStack_108);
  local_130 = this_00;
  iStack_128 = iVar20;
  local_120 = puVar1;
  iStack_10c = iStack_114;
  local_e0 = this_00;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar4 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar8 = local_f8;
  uVar12 = *(uint *)&this_00->field_0x28;
  if (uVar21 != uVar12) {
    puVar22 = *(undefined1 **)&this_00->field_0x20;
    if (*(undefined1 **)&this_00->field_0x20 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      uVar18 = uVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14b3df791;
      uVar21 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_fc = (int)lVar15;
    uVar21 = local_fc + -1 + uVar18;
    if ((int)uVar12 < (int)uVar21) {
      uVar21 = uVar12;
    }
  }
LAB_14b3df791:
  do {
    pTVar9 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      local_158[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (((TStack_d8.CurrentBitIndex == uVar21) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this_00))
    {
      Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions
                ((FModifyInterfaceOptions *)local_a8,&local_150,&local_140,
                 (FMetaSoundFrontendDocumentBuilder *)0x0);
      bVar10 = FMetaSoundFrontendDocumentBuilder::ModifyInterfaces
                         (local_f0,(FModifyInterfaceOptions *)local_a8);
      *local_e8 = !bVar10;
      if (local_a8._32_8_ != 0) {
        plVar16 = (longlong *)(local_a8 + 0x30);
        if ((longlong *)local_a8._72_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_a8._72_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)local_a8._16_8_,local_a8._24_4_);
      if ((FMetasoundFrontendInterface *)local_a8._16_8_ != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free((void *)local_a8._16_8_);
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)local_a8._0_8_,local_a8._8_4_);
      if ((FMetasoundFrontendInterface *)local_a8._0_8_ != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      if ((FMetasoundFrontendVersion *)local_150.AllocatorInstance.Data !=
          (FMetasoundFrontendVersion *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
      if ((FName *)local_140.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      return;
    }
    pFVar19 = (FMetasoundFrontendVersion *)
              (*(longlong *)pTVar9 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x30);
    uVar18 = (pFVar19->Number).Major;
    iVar20 = (pFVar19->Number).Minor;
    FVar5 = pFVar19->Name;
    uVar12 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    uVar12 = uVar12 + FVar5.Number;
    iVar20 = TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FMetasoundFrontendVersion>
                       (&pFVar8->Interfaces,
                        uVar12 * 0x40 +
                        (iVar20 + -0x61c88647 + uVar18 * 0x40 + (uVar18 >> 2) ^ uVar18) +
                        (uVar12 >> 2) + 0x9e3779b9 ^ uVar12,pFVar19);
    if (iVar20 != -1) {
      if ((FName *)local_140.AllocatorInstance.Data !=
          (FName *)(local_140.AllocatorInstance.Data + (longlong)local_140.ArrayNum * 0x10)) {
        FVar14.Data = local_140.AllocatorInstance.Data;
        do {
          if (((*(FName *)FVar14.Data == pFVar19->Name) &&
              ((((FName *)((longlong)FVar14.Data + 8))->ComparisonIndex).Value ==
               (pFVar19->Number).Major)) &&
             (((FName *)((longlong)FVar14.Data + 8))->Number == (pFVar19->Number).Minor))
          goto LAB_14b3df913;
          FVar14.Data = FVar14.Data + 0x10;
        } while ((FName *)FVar14.Data !=
                 (FName *)(local_140.AllocatorInstance.Data + (longlong)local_140.ArrayNum * 0x10));
      }
      if (local_150.AllocatorInstance.Data <= pFVar19) {
        if (pFVar19 < (FMetasoundFrontendVersion *)
                      (local_150.AllocatorInstance.Data + (longlong)local_150.ArrayMax * 0x10)) {
          local_170 = (longlong)local_150.ArrayNum;
          local_168 = 0x10;
          local_180 = (FMetasoundFrontendVersion *)local_150.AllocatorInstance.Data;
          local_188 = pFVar19;
          local_178 = (longlong)local_150.ArrayMax;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      iVar20 = local_150.ArrayNum;
      if (local_150.ArrayNum == local_150.ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_150.AllocatorInstance,&local_150.ArrayMax);
      }
      local_150.ArrayNum = iVar20 + 1;
      FVar7 = pFVar19->Number;
      *(FName *)&local_150.AllocatorInstance.Data[(longlong)iVar20 * 0x10].field_0x0 = pFVar19->Name
      ;
      *(FMetasoundFrontendVersionNumber *)
       (local_150.AllocatorInstance.Data + (longlong)iVar20 * 0x10 + 8) = FVar7;
    }
LAB_14b3df913:
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  } while( true );
}

// SetQuality @ 14b3e0070

void __thiscall UMetaSoundSourceBuilder::SetQuality(UMetaSoundSourceBuilder *this,FName param_1)

{
  return;
}

// SetSampleRateOverride @ 14b3e0080

void __thiscall
UMetaSoundSourceBuilder::SetSampleRateOverride(UMetaSoundSourceBuilder *this,int param_1)

{
  return;
}

// StaticRegisterNativesUMetaSoundSourceBuilder @ 14b3e15a0

void __cdecl UMetaSoundSourceBuilder::StaticRegisterNativesUMetaSoundSourceBuilder(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAudition @ 14b3e99f0

void __cdecl UMetaSoundSourceBuilder::execAudition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  UAudioComponent *local_res20;
  UObject *local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  undefined8 local_58;
  undefined8 local_50;
  FOnCreateAuditionGeneratorHandleDelegate local_48;
  FReadAccessScope local_30;
  
  local_68 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20 = (UAudioComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58 = 0;
  local_50 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_48._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_30);
  local_48._8_8_ = local_58;
  local_48._16_8_ = local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  Audition((UMetaSoundSourceBuilder *)param_1,local_68,local_res20,&local_48,bVar2);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

// execGetLiveUpdatesEnabled @ 14b3f1ce0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
UMetaSoundSourceBuilder::execGetLiveUpdatesEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicOperatorTransactor *pFVar2;
  UMetaSoundSource *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = CastChecked<UMetaSoundSource,UObject>(*(UObject **)&param_1[1].field_0x8);
  pTVar1 = (pUVar3->DynamicTransactor).SharedReferenceCount.ReferenceController;
  pFVar2 = (pUVar3->DynamicTransactor).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(bool *)param_3 = pFVar2 != (FDynamicOperatorTransactor *)0x0;
  return;
}

// execSetBlockRateOverride @ 14b3f56f0

void __cdecl
UMetaSoundSourceBuilder::execSetBlockRateOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetFormat @ 14b3f5760

void __cdecl UMetaSoundSourceBuilder::execSetFormat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMetaSoundBuilderResult *pEVar2;
  EMetaSoundBuilderResult local_res10 [8];
  EMetaSoundOutputAudioFormat local_res20 [8];
  
  local_res20[0] = Mono;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetFormat((UMetaSoundSourceBuilder *)param_1,local_res20[0],pEVar2);
  return;
}

// execSetQuality @ 14b3f62d0

void __cdecl UMetaSoundSourceBuilder::execSetQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetSampleRateOverride @ 14b3f6350

void __cdecl
UMetaSoundSourceBuilder::execSetSampleRateOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

