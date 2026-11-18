// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 254

// `dynamic_initializer_for_'CVarMetaSoundDisableAsyncGraphRegistration'' @ 1411e1de0

void __cdecl
Metasound::Frontend::ConsoleVariables::
_dynamic_initializer_for__CVarMetaSoundDisableAsyncGraphRegistration__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundDisableAsyncGraphRegistration,
             L"au.MetaSound.DisableAsyncGraphRegistration",&bDisableAsyncGraphRegistration,
             L"Disables async registration of MetaSound graphs\nDefault: false",0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundDisableAsyncGraphRegistration__);
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundFrontendDiscardStreamedRegistryTransactions'' @ 1411e1e30

void __cdecl
Metasound::Frontend::
_dynamic_initializer_for__CVarMetaSoundFrontendDiscardStreamedRegistryTransactions__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundFrontendDiscardStreamedRegistryTransactions,
             L"au.MetaSound.Frontend.DiscardStreamedRegistryTransactions",
             &MetaSoundFrontendDiscardStreamedRegistryTransactionsCVar,
             L"If enabled, MetaSound registry transactions are discarded after they have been streamed.\n0: Disabled, !0: Enabled (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundFrontendDiscardStreamedRegistryTransactions__)
  ;
  return;
}

// `dynamic_initializer_for_'Conversions'' @ 1411e1e80

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Conversions__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Conversions,L"MetasoundNodeCategories",L"Metasound_ConversionsCategory",L"Conversions"
            );
  atexit(_dynamic_atexit_destructor_for__Conversions__);
  return;
}

// `dynamic_initializer_for_'EnumConversions'' @ 1411e1ec0

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__EnumConversions__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&EnumConversions,L"MetasoundNodeCategories",L"Metasound_EnumConversionsCategory",
             L"EnumConversions");
  atexit(_dynamic_atexit_destructor_for__EnumConversions__);
  return;
}

// `dynamic_initializer_for_'Functions'' @ 1411e1f00

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Functions__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Functions,L"MetasoundNodeCategories",L"Metasound_FunctionsCategory",L"Functions");
  atexit(_dynamic_atexit_destructor_for__Functions__);
  return;
}

// `dynamic_initializer_for_'Graphs'' @ 1411e1f40

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Graphs__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Graphs,L"MetasoundNodeCategories",L"Metasound_GraphsCategory",L"Graphs");
  atexit(_dynamic_atexit_destructor_for__Graphs__);
  return;
}

// `dynamic_initializer_for_'Inputs'' @ 1411e1f80

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Inputs__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Inputs,L"MetasoundNodeCategories",L"Metasound_InputsCategory",L"Inputs");
  atexit(_dynamic_atexit_destructor_for__Inputs__);
  return;
}

// `dynamic_initializer_for_'Outputs'' @ 1411e1fc0

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Outputs__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Outputs,L"MetasoundNodeCategories",L"Metasound_OutputsCategory",L"Outputs");
  atexit(_dynamic_atexit_destructor_for__Outputs__);
  return;
}

// `dynamic_initializer_for_'Variables'' @ 1411e2000

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Variables__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Variables,L"MetasoundNodeCategories",L"Metasound_VariablesCategory",L"Variables");
  atexit(_dynamic_atexit_destructor_for__Variables__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendNodeTemplateRegistry_h__Script_MetasoundFrontend_1285201837'' @ 1411e2040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendNodeTemplateRegistry_h__Script_MetasoundFrontend_1285201837__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MetasoundFrontend",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendNodeTemplateRegistry_h__Script_MetasoundFrontend_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendQuery_h__Script_MetasoundFrontend_1774606720'' @ 1411e2080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendQuery_h__Script_MetasoundFrontend_1774606720__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MetasoundFrontend",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendQuery_h__Script_MetasoundFrontend_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendTemplateNodeConfiguration_h__Script_MetasoundFrontend_2433382615'' @ 1411e20c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendTemplateNodeConfiguration_h__Script_MetasoundFrontend_2433382615__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MetasoundFrontend",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendTemplateNodeConfiguration_h__Script_MetasoundFrontend_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// NewStructOps @ 14ae49e20

void * __cdecl
Z_Construct_UScriptStruct_FMetaSoundFrontendTemplateNodeConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMetaSoundFrontendTemplateNodeConfiguration,&UE::CoreUObject::Private::Construct<FMetaSoundFrontendTemplateNodeConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FMetaSoundFrontendTemplateNodeConfiguration>,&UE::CoreUObject::Private::Destruct<FMetaSoundFrontendTemplateNodeConfiguration>,&UE::CoreUObject::Private::Copy<FMetaSoundFrontendTemplateNodeConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ae49e60

void * __thiscall
Metasound::Frontend::FNodeTemplateRegistry::_scalar_deleting_destructor_
          (FNodeTemplateRegistry *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->TemplateByClassName).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TemplateByClassName).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TemplateByClassName);
  *(undefined4 *)&(this->Templates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Templates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Templates);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// Z_Construct_UScriptStruct_FMetaSoundClassSearchInfo @ 14ae49ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMetaSoundClassSearchInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassSearchInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMetaSoundClassSearchInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMetaSoundClassSearchInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassSearchInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMetaSoundClassSearchInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FMetaSoundClassVertexInfo @ 14ae49f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMetaSoundClassVertexInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassVertexInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMetaSoundClassVertexInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMetaSoundClassVertexInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassVertexInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMetaSoundClassVertexInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14ae49ff0

void * __cdecl Z_Construct_UScriptStruct_FMetaSoundClassVertexInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMetaSoundClassVertexInfo,&UE::CoreUObject::Private::Construct<FMetaSoundClassVertexInfo>,&UE::CoreUObject::Private::ConstructForTests<FMetaSoundClassVertexInfo>,&UE::CoreUObject::Private::Destruct<FMetaSoundClassVertexInfo>,&UE::CoreUObject::Private::Copy<FMetaSoundClassVertexInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ae4a030

void * __cdecl Z_Construct_UScriptStruct_FMetaSoundClassSearchInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMetaSoundClassSearchInfo,&UE::CoreUObject::Private::Construct<FMetaSoundClassSearchInfo>,&UE::CoreUObject::Private::ConstructForTests<FMetaSoundClassSearchInfo>,&UE::CoreUObject::Private::Destruct<FMetaSoundClassSearchInfo>,&UE::CoreUObject::Private::Copy<FMetaSoundClassSearchInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ae4a070

void * __cdecl
Z_Construct_UScriptStruct_FMetaSoundClassVertexCollectionInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMetaSoundClassVertexCollectionInfo,&UE::CoreUObject::Private::Construct<FMetaSoundClassVertexCollectionInfo>,&UE::CoreUObject::Private::ConstructForTests<FMetaSoundClassVertexCollectionInfo>,&UE::CoreUObject::Private::Destruct<FMetaSoundClassVertexCollectionInfo>,&UE::CoreUObject::Private::Copy<FMetaSoundClassVertexCollectionInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ae4a0b0

void * __cdecl Z_Construct_UScriptStruct_FMetaSoundClassInterfaceInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMetaSoundClassInterfaceInfo,&UE::CoreUObject::Private::Construct<FMetaSoundClassInterfaceInfo>,&UE::CoreUObject::Private::ConstructForTests<FMetaSoundClassInterfaceInfo>,&UE::CoreUObject::Private::Destruct<FMetaSoundClassInterfaceInfo>,&UE::CoreUObject::Private::Copy<FMetaSoundClassInterfaceInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ae4a130

void * __thiscall
FMetaSoundFrontendTemplateNodeConfiguration::_scalar_deleting_destructor_
          (FMetaSoundFrontendTemplateNodeConfiguration *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 14ae4a1a0

void * __cdecl
Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNodeTemplateGenerateInterfaceParams,&UE::CoreUObject::Private::Construct<FNodeTemplateGenerateInterfaceParams>,&UE::CoreUObject::Private::ConstructForTests<FNodeTemplateGenerateInterfaceParams>,&UE::CoreUObject::Private::Destruct<FNodeTemplateGenerateInterfaceParams>,&UE::CoreUObject::Private::Copy<FNodeTemplateGenerateInterfaceParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_> @ 14ae4b140

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
          (TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,FFrontendQueryKey *param_2,FKeyForward param_3,
          TLess<Metasound::FFrontendQueryKey_const_&> param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_const_,int,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                    ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4)
  ;
  if (iVar2 < param_1->ArrayNum) {
    bVar1 = Metasound::operator<
                      (param_2,(FFrontendQueryKey *)
                               ((param_1->AllocatorInstance).Data + (longlong)iVar2 * 0xe0));
    iVar3 = -1;
    if (!bVar1) {
      iVar3 = iVar2;
    }
    return iVar3;
  }
  return -1;
}

// ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassInput> @ 14ae4b1c0

bool __cdecl
Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::
ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassInput>
          (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FGuid *pFVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  bool local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8;
  undefined1 local_d7 [7];
  TArray<FMetasoundFrontendClassInput_const_*,TSizedDefaultAllocator<32>_> local_d0;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> local_c0;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  uint local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58;
  
  iVar13 = param_1->ArrayNum;
  iVar7 = 0;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar10 + (longlong)iVar13 * 0x20;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
      iVar7 = local_c0.ArrayNum;
    }
    if (pFVar10 == pFVar14) break;
    iVar5 = iVar7;
    local_b0 = pFVar10;
    if ((local_c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b0) &&
       ((FScriptContainerElement *)&local_b0 <
        local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = local_c0.ArrayNum;
    }
    if (iVar5 == local_c0.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
    }
    iVar7 = iVar5 + 1;
    local_c0.ArrayNum = iVar7;
    pFVar10 = pFVar10 + 0x20;
    *(FScriptContainerElement **)(local_c0.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_b0;
  }
  iVar13 = param_2->ArrayNum;
  iVar7 = 0;
  pFVar14 = (param_2->AllocatorInstance).Data;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  pFVar10 = pFVar14 + (longlong)iVar13 * 0x48;
  while( true ) {
    if (param_2->ArrayNum != iVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
      iVar7 = local_d0.ArrayNum;
    }
    if (pFVar14 == pFVar10) break;
    iVar5 = iVar7;
    local_a8 = pFVar14;
    if ((local_d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
       ((FScriptContainerElement *)&local_a8 <
        local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = local_d0.ArrayNum;
    }
    if (iVar5 == local_d0.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
    }
    iVar7 = iVar5 + 1;
    local_d0.ArrayNum = iVar7;
    pFVar14 = pFVar14 + 0x48;
    *(FScriptContainerElement **)(local_d0.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_a8;
  }
  InplaceBidirectionalVertexSetDifference<FMetasoundFrontendVertex,FMetasoundFrontendClassInput>
            (&local_c0,&local_d0);
  if (local_c0.ArrayNum < 1) {
    local_res10 = false;
    if (local_d0.ArrayNum < 1) goto LAB_14ae4b3d9;
  }
  local_res10 = true;
LAB_14ae4b3d9:
  uVar8 = (ulonglong)local_c0.ArrayNum;
  local_a0 = local_c0.ArrayNum;
  pFVar10 = local_c0.AllocatorInstance.Data + uVar8 * 8;
  FVar12.Data = local_c0.AllocatorInstance.Data;
  local_80 = pFVar10;
  do {
    local_90 = FVar12.Data;
    if (local_c0.ArrayNum != (int)uVar8) {
      local_d8 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_d8);
    }
    if (FVar12.Data == pFVar10) {
      iVar13 = local_d0.ArrayNum;
      uVar8 = (ulonglong)local_d0.ArrayNum;
      pFVar10 = local_d0.AllocatorInstance.Data + uVar8 * 8;
      FVar12.Data = local_d0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar8 != iVar13) {
          local_d7[0] = 0;
          `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_d7);
        }
        if (FVar12.Data == pFVar10) break;
                    /* WARNING: Load size is inaccurate */
        pFVar14 = *FVar12.Data;
        local_78 = *(undefined8 *)pFVar14;
        uStack_70 = *(undefined8 *)(pFVar14 + 8);
        local_68 = *(undefined8 *)(pFVar14 + 0x10);
        uStack_60 = *(undefined8 *)(pFVar14 + 0x18);
        pFVar6 = FGuid::NewGuid(&local_58);
        pFVar14 = (param_1->AllocatorInstance).Data;
        local_68._0_4_ = pFVar6->A;
        local_68._4_4_ = pFVar6->B;
        uStack_60._0_4_ = pFVar6->C;
        uStack_60._4_4_ = pFVar6->D;
        if (((pFVar14 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar14 + (longlong)param_1->ArrayMax * 0x20))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x420,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        pFVar1 = (param_1->AllocatorInstance).Data;
        FVar12.Data = FVar12.Data + 8;
        pFVar14 = pFVar1 + (longlong)iVar7 * 0x20;
        *(undefined8 *)pFVar14 = local_78;
        *(undefined8 *)(pFVar14 + 8) = uStack_70;
        pFVar1 = pFVar1 + (longlong)iVar7 * 0x20 + 0x10;
        *(undefined8 *)pFVar1 = local_68;
        *(undefined8 *)(pFVar1 + 8) = uStack_60;
        uVar8 = local_d0._8_8_ & 0xffffffff;
      }
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      return local_res10;
    }
    lVar9 = (longlong)param_1->ArrayNum;
                    /* WARNING: Load size is inaccurate */
    local_88 = *FVar12.Data;
    if (param_1->ArrayNum != 0) {
      local_98 = (param_1->AllocatorInstance).Data;
      iVar7 = 0;
      lVar11 = 0;
      bVar3 = ((*(int *)(local_88 + 0x1c) != *(int *)(local_98 + 0x1c) ||
               *(int *)(local_88 + 0x18) != *(int *)(local_98 + 0x18)) ||
              *(int *)(local_88 + 0x14) != *(int *)(local_98 + 0x14)) ||
              *(int *)(local_98 + 0x10) != *(int *)(local_88 + 0x10);
      iVar13 = 0;
      do {
        lVar11 = lVar11 + 1;
        iVar5 = iVar13 + 1;
        if (lVar11 < lVar9) {
          pFVar10 = local_98 + lVar11 * 0x20 + 0x18;
          do {
            if (bVar3 != (((*(int *)(local_88 + 0x10) != *(int *)(pFVar10 + -8) ||
                           *(int *)(local_88 + 0x14) != *(int *)(pFVar10 + -4)) ||
                          *(int *)(local_88 + 0x1c) != *(int *)(pFVar10 + 4)) ||
                         *(int *)(local_88 + 0x18) != *(int *)pFVar10)) break;
            iVar5 = iVar5 + 1;
            lVar11 = lVar11 + 1;
            pFVar10 = pFVar10 + 0x20;
          } while (lVar11 < lVar9);
        }
        if (bVar3 != false) {
          if (iVar7 != iVar13) {
            memmove(local_98 + (longlong)iVar7 * 0x20,local_98 + (longlong)iVar13 * 0x20,
                    (longlong)(iVar5 - iVar13) << 5);
          }
          iVar7 = iVar7 + (iVar5 - iVar13);
        }
        bVar3 = (bool)(bVar3 ^ 1);
        iVar13 = iVar5;
      } while (lVar11 < lVar9);
      param_1->ArrayNum = iVar7;
      FVar12.Data = local_90;
      pFVar10 = local_80;
    }
    uVar8 = (ulonglong)local_a0;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassOutput> @ 14ae4b670

bool __cdecl
Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::
ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassOutput>
          (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FGuid *pFVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  bool local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8;
  undefined1 local_d7 [7];
  TArray<FMetasoundFrontendClassOutput_const_*,TSizedDefaultAllocator<32>_> local_d0;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> local_c0;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  uint local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58;
  
  iVar13 = param_1->ArrayNum;
  iVar7 = 0;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar10 + (longlong)iVar13 * 0x20;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
      iVar7 = local_c0.ArrayNum;
    }
    if (pFVar10 == pFVar14) break;
    iVar5 = iVar7;
    local_b0 = pFVar10;
    if ((local_c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b0) &&
       ((FScriptContainerElement *)&local_b0 <
        local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = local_c0.ArrayNum;
    }
    if (iVar5 == local_c0.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
    }
    iVar7 = iVar5 + 1;
    local_c0.ArrayNum = iVar7;
    pFVar10 = pFVar10 + 0x20;
    *(FScriptContainerElement **)(local_c0.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_b0;
  }
  iVar13 = param_2->ArrayNum;
  iVar7 = 0;
  pFVar10 = (param_2->AllocatorInstance).Data;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar14 = pFVar10 + (longlong)iVar13 * 0x34;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  while( true ) {
    if (param_2->ArrayNum != iVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
      iVar7 = local_d0.ArrayNum;
    }
    if (pFVar10 == pFVar14) break;
    iVar5 = iVar7;
    local_a8 = pFVar10;
    if ((local_d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
       ((FScriptContainerElement *)&local_a8 <
        local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = local_d0.ArrayNum;
    }
    if (iVar5 == local_d0.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
    }
    iVar7 = iVar5 + 1;
    local_d0.ArrayNum = iVar7;
    pFVar10 = pFVar10 + 0x34;
    *(FScriptContainerElement **)(local_d0.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_a8;
  }
  InplaceBidirectionalVertexSetDifference<FMetasoundFrontendVertex,FMetasoundFrontendClassOutput>
            (&local_c0,&local_d0);
  if (local_c0.ArrayNum < 1) {
    local_res10 = false;
    if (local_d0.ArrayNum < 1) goto LAB_14ae4b889;
  }
  local_res10 = true;
LAB_14ae4b889:
  uVar8 = (ulonglong)local_c0.ArrayNum;
  local_a0 = local_c0.ArrayNum;
  pFVar10 = local_c0.AllocatorInstance.Data + uVar8 * 8;
  FVar12.Data = local_c0.AllocatorInstance.Data;
  local_80 = pFVar10;
  do {
    local_90 = FVar12.Data;
    if (local_c0.ArrayNum != (int)uVar8) {
      local_d8 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_d8);
    }
    if (FVar12.Data == pFVar10) {
      iVar13 = local_d0.ArrayNum;
      uVar8 = (ulonglong)local_d0.ArrayNum;
      pFVar10 = local_d0.AllocatorInstance.Data + uVar8 * 8;
      FVar12.Data = local_d0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar8 != iVar13) {
          local_d7[0] = 0;
          `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_d7);
        }
        if (FVar12.Data == pFVar10) break;
                    /* WARNING: Load size is inaccurate */
        pFVar14 = *FVar12.Data;
        local_78 = *(undefined8 *)pFVar14;
        uStack_70 = *(undefined8 *)(pFVar14 + 8);
        local_68 = *(undefined8 *)(pFVar14 + 0x10);
        uStack_60 = *(undefined8 *)(pFVar14 + 0x18);
        pFVar6 = FGuid::NewGuid(&local_58);
        pFVar14 = (param_1->AllocatorInstance).Data;
        local_68._0_4_ = pFVar6->A;
        local_68._4_4_ = pFVar6->B;
        uStack_60._0_4_ = pFVar6->C;
        uStack_60._4_4_ = pFVar6->D;
        if (((pFVar14 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar14 + (longlong)param_1->ArrayMax * 0x20))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x420,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        pFVar1 = (param_1->AllocatorInstance).Data;
        FVar12.Data = FVar12.Data + 8;
        pFVar14 = pFVar1 + (longlong)iVar7 * 0x20;
        *(undefined8 *)pFVar14 = local_78;
        *(undefined8 *)(pFVar14 + 8) = uStack_70;
        pFVar1 = pFVar1 + (longlong)iVar7 * 0x20 + 0x10;
        *(undefined8 *)pFVar1 = local_68;
        *(undefined8 *)(pFVar1 + 8) = uStack_60;
        uVar8 = local_d0._8_8_ & 0xffffffff;
      }
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      return local_res10;
    }
    lVar9 = (longlong)param_1->ArrayNum;
                    /* WARNING: Load size is inaccurate */
    local_88 = *FVar12.Data;
    if (param_1->ArrayNum != 0) {
      local_98 = (param_1->AllocatorInstance).Data;
      iVar7 = 0;
      lVar11 = 0;
      bVar3 = ((*(int *)(local_88 + 0x1c) != *(int *)(local_98 + 0x1c) ||
               *(int *)(local_88 + 0x18) != *(int *)(local_98 + 0x18)) ||
              *(int *)(local_88 + 0x14) != *(int *)(local_98 + 0x14)) ||
              *(int *)(local_98 + 0x10) != *(int *)(local_88 + 0x10);
      iVar13 = 0;
      do {
        lVar11 = lVar11 + 1;
        iVar5 = iVar13 + 1;
        if (lVar11 < lVar9) {
          pFVar10 = local_98 + lVar11 * 0x20 + 0x18;
          do {
            if (bVar3 != (((*(int *)(local_88 + 0x10) != *(int *)(pFVar10 + -8) ||
                           *(int *)(local_88 + 0x14) != *(int *)(pFVar10 + -4)) ||
                          *(int *)(local_88 + 0x1c) != *(int *)(pFVar10 + 4)) ||
                         *(int *)(local_88 + 0x18) != *(int *)pFVar10)) break;
            iVar5 = iVar5 + 1;
            lVar11 = lVar11 + 1;
            pFVar10 = pFVar10 + 0x20;
          } while (lVar11 < lVar9);
        }
        if (bVar3 != false) {
          if (iVar7 != iVar13) {
            memmove(local_98 + (longlong)iVar7 * 0x20,local_98 + (longlong)iVar13 * 0x20,
                    (longlong)(iVar5 - iVar13) << 5);
          }
          iVar7 = iVar7 + (iVar5 - iVar13);
        }
        bVar3 = (bool)(bVar3 ^ 1);
        iVar13 = iVar5;
      } while (lVar11 < lVar9);
      param_1->ArrayNum = iVar7;
      FVar12.Data = local_90;
      pFVar10 = local_80;
    }
    uVar8 = (ulonglong)local_a0;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// ConstructItems<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,int> @ 14ae4bb20

void __cdecl
ConstructItems<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,int>
          (void *param_1,TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *param_2,
          int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)param_1 + 8) = uVar1;
    Metasound::Frontend::FGraphModifyDelegates::FGraphModifyDelegates
              ((FGraphModifyDelegates *)((longlong)param_1 + 0x10),
               (FGraphModifyDelegates *)&param_2->field_0x10);
    param_2 = param_2 + 1;
    param_1 = (void *)((longlong)param_1 + 0xf0);
  }
  return;
}

// ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int> @ 14ae4bb80

void __cdecl
ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
          (void *param_1,FFrontendQueryEntry *param_2,int param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
  *pTVar8;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_1 + 0x10;
    pTVar8 = &param_2->Value;
    do {
      puVar2 = (undefined8 *)((longlong)param_2 + ((lVar7 + -0x10) - (longlong)param_1));
      uVar5 = puVar2[1];
      *(undefined8 *)(lVar7 + -0x10) = *puVar2;
      *(undefined8 *)(lVar7 + -8) = uVar5;
      bVar3 = pTVar8->TypeIndex;
      *(byte *)(lVar7 + 0x90) = bVar3;
      if ((4 < bVar3) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                  ::__l2::CopyConstructors)[bVar3])(lVar7,pTVar8);
      pfVar1 = (float *)(pTVar8 + 1);
      pTVar8 = (TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
                *)((longlong)(pTVar8 + 1) + 0x18);
      *(float *)(lVar7 + 0x98) = *pfVar1;
      lVar7 = lVar7 + 0xb0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int> @ 14ae4bc60

void __cdecl
ConstructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>
          (void *param_1,FInputData *param_2,int param_3)

{
  FMetasoundFrontendInterface **ppFVar1;
  FMetasoundFrontendClassInput *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FMetasoundFrontendClassInput *)(lVar2 + (longlong)param_2);
      FMetasoundFrontendClassInput::FMetasoundFrontendClassInput(this,&param_2->Input);
      ppFVar1 = &param_2->InputInterface;
      param_2 = param_2 + 1;
      this[1]._padding_ = (longlong)*ppFVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMetasoundFrontendInterfaceMetadata,FMetasoundFrontendInterfaceMetadata,int> @ 14ae4bcd0

void __cdecl
ConstructItems<FMetasoundFrontendInterfaceMetadata,FMetasoundFrontendInterfaceMetadata,int>
          (void *param_1,FMetasoundFrontendInterfaceMetadata *param_2,int param_3)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int iVar4;
  ForAnyElementType *pFVar5;
  TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    pTVar6 = &param_2->UClassOptions;
    do {
      iVar3 = pTVar6[-1].ArrayNum;
      iVar4 = pTVar6[-1].ArrayMax;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar2 = (FName *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pTVar6);
      *pFVar2 = (((FMetasoundFrontendInterfaceMetadata *)(pTVar6 + -1))->Version).Name;
      pFVar2[1].ComparisonIndex = (FNameEntryId)iVar3;
      pFVar2[1].Number = iVar4;
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar3 = pTVar6->ArrayNum;
      _Src = (pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar3,0,pFVar5,iVar3,piVar1);
        memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x14);
      }
      pTVar6 = pTVar6 + 2;
      pFVar5 = pFVar5 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateAndCacheProxies<FMetasoundFrontendClass> @ 14ae4ce20

void __cdecl
Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::
CreateAndCacheProxies<FMetasoundFrontendClass>
          (FProxyDataCache *param_1,FMetasoundFrontendClass *param_2,
          TArrayView<FGuid_const_,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  void *local_58;
  undefined8 local_50;
  code *local_48;
  FProxyDataCache **local_40;
  TArrayView<FGuid_const_,int> local_38;
  FProxyDataCache *local_28;
  IDataTypeRegistry *local_20;
  void **local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInAudioThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
                         ,0x1c,L"Proxies should only be created in the game thread or audio thread")
      ;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_20 = IDataTypeRegistry::Get();
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18 = &local_58;
  local_58 = (void *)0x0;
  local_40 = &local_28;
  local_50 = 0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::CreateAndCacheProxies<FMetasoundFrontendClass>'::__l2::<lambda_1>,void,FName_const_&,FMetasoundFrontendLiteral_const_&>
             ::Call;
  local_28 = param_1;
  ForEachLiteral(param_2,(TFunctionRef<void___cdecl(FName_const_&,FMetasoundFrontendLiteral_const_&)>
                          *)&local_48,&local_38);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// CreateAndCacheProxies<FMetasoundFrontendDocument> @ 14ae4cef0

void __cdecl
Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::
CreateAndCacheProxies<FMetasoundFrontendDocument>
          (FProxyDataCache *param_1,FMetasoundFrontendDocument *param_2,
          TArrayView<FGuid_const_,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  void *local_58;
  undefined8 local_50;
  code *local_48;
  FProxyDataCache **local_40;
  TArrayView<FGuid_const_,int> local_38;
  FProxyDataCache *local_28;
  IDataTypeRegistry *local_20;
  void **local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInAudioThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
                         ,0x1c,L"Proxies should only be created in the game thread or audio thread")
      ;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_20 = IDataTypeRegistry::Get();
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18 = &local_58;
  local_58 = (void *)0x0;
  local_40 = &local_28;
  local_50 = 0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::CreateAndCacheProxies<FMetasoundFrontendDocument>'::__l2::<lambda_1>,void,FName_const_&,FMetasoundFrontendLiteral_const_&>
             ::Call;
  local_28 = param_1;
  ForEachLiteral(param_2,(TFunctionRef<void___cdecl(FName_const_&,FMetasoundFrontendLiteral_const_&)>
                          *)&local_48,&local_38);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// CreateAndCacheProxies<FMetasoundFrontendGraphClass> @ 14ae4cfc0

void __cdecl
Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::
CreateAndCacheProxies<FMetasoundFrontendGraphClass>
          (FProxyDataCache *param_1,FMetasoundFrontendGraphClass *param_2,
          TArrayView<FGuid_const_,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  void *local_58;
  undefined8 local_50;
  code *local_48;
  FProxyDataCache **local_40;
  TArrayView<FGuid_const_,int> local_38;
  FProxyDataCache *local_28;
  IDataTypeRegistry *local_20;
  void **local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInAudioThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
                         ,0x1c,L"Proxies should only be created in the game thread or audio thread")
      ;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_20 = IDataTypeRegistry::Get();
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18 = &local_58;
  local_58 = (void *)0x0;
  local_40 = &local_28;
  local_50 = 0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::CreateAndCacheProxies<FMetasoundFrontendGraphClass>'::__l2::<lambda_1>,void,FName_const_&,FMetasoundFrontendLiteral_const_&>
             ::Call;
  local_28 = param_1;
  ForEachLiteral(param_2,(TFunctionRef<void___cdecl(FName_const_&,FMetasoundFrontendLiteral_const_&)>
                          *)&local_48,&local_38);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int> @ 14ae4d0c0

void __cdecl
DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
          (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::Core::Private::Tuple::
    TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
    ::
    ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
              ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,int> @ 14ae4d100

void __cdecl
DestructItems<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,int>
          (FActiveRegistrationTaskInfo *param_1,int param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FTaskHandle *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->Task;
    do {
      pFVar3 = (pFVar4->Pimpl).Reference;
      if (pFVar3 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar3->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
      pFVar4 = pFVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::FFrontendQueryEntry,int> @ 14ae4d150

void __cdecl
DestructItems<Metasound::FFrontendQueryEntry,int>(FFrontendQueryEntry *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
  *pTVar4;
  
  if (param_2 != 0) {
    pTVar4 = &param_1->Value;
    do {
      bVar1 = pTVar4->TypeIndex;
      if ((4 < (ulonglong)bVar1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar4);
      pTVar4 = (TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
                *)((longlong)(pTVar4 + 1) + 0x18);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::FFrontendQueryKey,int> @ 14ae4d1f0

void __cdecl DestructItems<Metasound::FFrontendQueryKey,int>(FFrontendQueryKey *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    uVar3 = (ulonglong)(param_1->Key).TypeIndex;
    if ((3 < uVar3) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int> @ 14ae4d280

void __cdecl
DestructItems<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int>
          (FInputControllerParams *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->ClassInputPtr).GetObject.field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0xd] != 0) {
        plVar1 = plVar2 + -0xb;
        if ((longlong *)plVar2[-8] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-8];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMetasoundFrontendInterfaceMetadata,int> @ 14ae4d2f0

void __cdecl
DestructItems<FMetasoundFrontendInterfaceMetadata,int>
          (FMetasoundFrontendInterfaceMetadata *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->UClassOptions;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int> @ 14ae4d330

void __cdecl
DestructItems<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int>
          (FOutputControllerParams *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->ClassOutputPtr).GetObject.field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0xd] != 0) {
        plVar1 = plVar2 + -0xb;
        if ((longlong *)plVar2[-8] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-8];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::FFrontendQuery::FStepInfo,int> @ 14ae4d3a0

void __cdecl DestructItems<Metasound::FFrontendQuery::FStepInfo,int>(FStepInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *pTVar4;
  
  if (param_2 != 0) {
    pTVar4 = &param_1->OutputCache;
    do {
      DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
                ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                  *)(pTVar4->Pairs).AllocatorInstance.Data,(pTVar4->Pairs).ArrayNum);
      pFVar1 = (pTVar4->Pairs).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      plVar2 = *(longlong **)((longlong)(pTVar4 + -1) + 8);
      if (plVar2 != (longlong *)0x0) {
        puVar3 = (undefined8 *)*plVar2;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        operator_delete(plVar2,8);
      }
      pTVar4 = pTVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,int> @ 14ae4d420

void __cdecl
DestructItems<TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,int>
          (TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,int> @ 14ae4d460

void __cdecl
DestructItems<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,int>
          (TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
           *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    bVar1 = param_1->TypeIndex;
    if ((4 < (ulonglong)bVar1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// FindByPredicate<`Metasound::Frontend::FBaseNodeController::SetInputLiteral'::__l5::<lambda_1>_> @ 14ae4fa00

FMetasoundFrontendVertex * __thiscall
TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>::
FindByPredicate<_Metasound::Frontend::FBaseNodeController::SetInputLiteral_::__l5::<lambda_1>_>
          (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  FMetasoundFrontendVertex *pFVar1;
  FMetasoundFrontendVertex *pFVar2;
  
  pFVar1 = (FMetasoundFrontendVertex *)(this->AllocatorInstance).Data;
  pFVar2 = pFVar1 + this->ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if ((((param_1->InVertexLiteral).VertexID.D == (pFVar1->VertexID).D &&
           (param_1->InVertexLiteral).VertexID.A == (pFVar1->VertexID).A) &&
          (param_1->InVertexLiteral).VertexID.C == (pFVar1->VertexID).C) &&
          (param_1->InVertexLiteral).VertexID.B == (pFVar1->VertexID).B) {
        FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&(param_1->InVertexLiteral).Value);
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&(param_1->InVertexLiteral).Value);
  return (FMetasoundFrontendVertex *)0x0;
}

// ForEach<TArrayView<Metasound::Frontend::FNodeClassRegistryTransaction_const_,int>_&,`Metasound::FNodeClassRegistrationEventsPimpl::Stream'::__l2::<lambda_1>_> @ 14ae4ff80

void __cdecl
Algo::
ForEach<TArrayView<Metasound::Frontend::FNodeClassRegistryTransaction_const_,int>_&,_Metasound::FNodeClassRegistrationEventsPimpl::Stream_::__l2::<lambda_1>_>
          (TArrayView<Metasound::Frontend::FNodeClassRegistryTransaction_const_,int> *param_1,
          <lambda_1> param_2)

{
  FNodeClassRegistryTransaction *pFVar1;
  FNodeClassRegistryTransaction *pFVar2;
  TArray<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,TSizedDefaultAllocator<32>_>
  *local_res10 [3];
  
  pFVar1 = param_1->DataPtr;
  pFVar2 = pFVar1 + param_1->ArrayNum;
  local_res10[0] = param_2.OutValues;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
    `Metasound::FNodeClassRegistrationEventsPimpl::Stream'::__l2::<lambda_1>::operator()
              (local_res10,pFVar1);
  }
  return;
}

// ForEach<TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>_const_&,`Metasound::Frontend::FNodeClassRegistry::IterateRegistry'::__l2::<lambda_1>_> @ 14ae4ffe0

void __cdecl
Algo::
ForEach<TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>_const_&,_Metasound::Frontend::FNodeClassRegistry::IterateRegistry_::__l2::<lambda_1>_>
          (TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ae5007e;
      uVar12 = puVar16[lVar11 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (int)lVar11 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14ae5007e:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ae50180;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14ae50180:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)
              ((longlong)TStack_60.CurrentBitIndex * 0x40 + 0x30 + *(longlong *)param_1);
    plVar5 = *(longlong **)
              ((longlong)TStack_60.CurrentBitIndex * 0x40 + 0x28 + *(longlong *)param_1);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar5 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) break;
    uVar10 = (**(code **)(*plVar5 + 0x38))(plVar5);
    (**(code **)param_2.InIterFunc)(*(undefined8 *)&(param_2.InIterFunc)->field_0x8,uVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// ForEachIf<TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>_const_&,`Metasound::Frontend::FNodeClassRegistry::IterateRegistry'::__l25::<lambda_2>,`Metasound::Frontend::FNodeClassRegistry::IterateRegistry'::__l2::<lambda_1>_> @ 14ae50250

void __cdecl
Algo::
ForEachIf<TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>_const_&,_Metasound::Frontend::FNodeClassRegistry::IterateRegistry_::__l25::<lambda_2>,_Metasound::Frontend::FNodeClassRegistry::IterateRegistry_::__l2::<lambda_1>_>
          (TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>
           *param_1,<lambda_2> param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  EMetasoundFrontendClassType EVar3;
  EMetasoundFrontendClassType EVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_res20 [8];
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar5 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar15 = 0;
  uVar10 = 1;
  iVar17 = 0;
  iVar11 = 0;
  if (iVar5 != 0) {
    puVar18 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar19 = *puVar18;
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar11 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14ae502ff;
      uVar19 = puVar18[lVar14 + 1];
    }
    uVar10 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar11 = (int)lVar14 + -1 + iVar17;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_14ae502ff:
  uVar19 = *(uint *)&param_1->field_0x28;
  uVar20 = uVar19 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar15);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar17;
  uStack_40 = CONCAT44(uStack_7c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar5 < (int)uVar19)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&param_1->field_0x28;
  if (uVar19 != uVar10) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      uVar19 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14ae50410;
      uVar19 = *(uint *)(puVar16 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar19 = (int)lVar14 + -1 + uVar20;
    if ((int)uVar10 < (int)uVar19) {
      uVar19 = uVar10;
    }
  }
LAB_14ae50410:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_60.CurrentBitIndex == uVar19) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    lVar14 = (longlong)TStack_60.CurrentBitIndex * 0x40 + *(longlong *)param_1;
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar14 + 0x30);
    plVar7 = *(longlong **)(lVar14 + 0x28);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar7 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) break;
    lVar12 = (**(code **)(*plVar7 + 8))(plVar7);
    EVar3 = *param_2.InClassType;
    EVar4 = *(EMetasoundFrontendClassType *)(lVar12 + 0x18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (EVar4 == EVar3) {
      pTVar6 = *(TReferenceControllerBase<1> **)(lVar14 + 0x30);
      plVar7 = *(longlong **)(lVar14 + 0x28);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((plVar7 == (longlong *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = (**(code **)(*plVar7 + 0x38))(plVar7);
      (**(code **)param_3.InIterFunc)(*(undefined8 *)&(param_3.InIterFunc)->field_0x8,uVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,`Metasound::FrontendQueryPrivate::Difference'::__l2::<lambda_1>_>_>_> @ 14ae506b0

void __cdecl
AlgoImpl::
HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::Difference_::__l2::<lambda_1>_>_>_>
          (FFrontendQueryEntry *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FrontendQueryPrivate::Difference(TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&)_::_2_::<lambda_1>_>_>
          *param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  undefined7 uVar24;
  float fVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uchar uVar31;
  undefined7 uVar32;
  float fVar33;
  undefined4 uVar34;
  FFrontendQueryEntry *pFVar35;
  FFrontendQueryEntry *pFVar36;
  int iVar37;
  bool bVar38;
  
  do {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar4 = param_2 * 2;
    iVar37 = iVar4 + 1;
    if (iVar4 + 2 < param_3) {
      lVar1 = (longlong)iVar4 + 2;
      pFVar35 = param_1 + (longlong)iVar4 + 1;
      uVar2 = (pFVar35->ID).A;
      uVar3 = param_1[lVar1].ID.A;
      if (uVar3 < uVar2) {
        bVar38 = true;
      }
      else if (uVar2 < uVar3) {
        bVar38 = false;
      }
      else {
        uVar2 = (pFVar35->ID).B;
        uVar3 = param_1[lVar1].ID.B;
        if (uVar3 < uVar2) {
          bVar38 = true;
        }
        else if (uVar2 < uVar3) {
          bVar38 = false;
        }
        else {
          uVar2 = (pFVar35->ID).C;
          uVar3 = param_1[lVar1].ID.C;
          if (uVar3 < uVar2) {
            bVar38 = true;
          }
          else if (uVar2 < uVar3) {
            bVar38 = false;
          }
          else {
            bVar38 = param_1[lVar1].ID.D < (pFVar35->ID).D;
          }
        }
      }
      if (bVar38) {
        iVar37 = iVar4;
      }
      iVar37 = iVar37 + 1;
    }
    pFVar35 = param_1 + iVar37;
    pFVar36 = param_1 + param_2;
    uVar2 = (pFVar35->ID).A;
    uVar3 = (pFVar36->ID).A;
    if (uVar2 <= uVar3) {
      if (uVar3 != uVar2) {
        return;
      }
      uVar2 = (pFVar35->ID).B;
      uVar3 = (pFVar36->ID).B;
      if (uVar2 <= uVar3) {
        if (uVar3 != uVar2) {
          return;
        }
        uVar2 = (pFVar35->ID).C;
        uVar3 = (pFVar36->ID).C;
        if (uVar2 <= uVar3) {
          if (uVar3 != uVar2) {
            return;
          }
          if ((pFVar35->ID).D <= (pFVar36->ID).D) {
            return;
          }
        }
      }
    }
    uVar27 = (pFVar36->ID).A;
    uVar28 = (pFVar36->ID).B;
    uVar29 = (pFVar36->ID).C;
    uVar30 = (pFVar36->ID).D;
    lVar1 = (pFVar36->Value)._padding_;
    lVar5 = (pFVar36->Value)._padding_;
    lVar6 = (pFVar36->Value)._padding_;
    lVar7 = (pFVar36->Value)._padding_;
    lVar8 = (pFVar36->Value)._padding_;
    lVar9 = (pFVar36->Value)._padding_;
    lVar10 = (pFVar36->Value)._padding_;
    lVar11 = (pFVar36->Value)._padding_;
    lVar12 = (pFVar36->Value)._padding_;
    lVar13 = (pFVar36->Value)._padding_;
    lVar14 = (pFVar36->Value)._padding_;
    lVar15 = (pFVar36->Value)._padding_;
    lVar16 = (pFVar36->Value)._padding_;
    lVar17 = (pFVar36->Value)._padding_;
    lVar18 = (pFVar36->Value)._padding_;
    lVar19 = (pFVar36->Value)._padding_;
    lVar20 = (pFVar36->Value)._padding_;
    lVar21 = (pFVar36->Value)._padding_;
    uVar31 = (pFVar36->Value).TypeIndex;
    uVar32 = *(undefined7 *)&(pFVar36->Value).field_0x91;
    fVar33 = pFVar36->Score;
    uVar34 = *(undefined4 *)&pFVar36->field_0xac;
    uVar2 = (pFVar35->ID).B;
    uVar3 = (pFVar35->ID).C;
    uVar23 = (pFVar35->ID).D;
    (pFVar36->ID).A = (pFVar35->ID).A;
    (pFVar36->ID).B = uVar2;
    (pFVar36->ID).C = uVar3;
    (pFVar36->ID).D = uVar23;
    lVar22 = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = lVar22;
    lVar22 = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = lVar22;
    lVar22 = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = lVar22;
    lVar22 = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = lVar22;
    lVar22 = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = lVar22;
    lVar22 = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = lVar22;
    lVar22 = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = lVar22;
    lVar22 = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = lVar22;
    lVar22 = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = (pFVar35->Value)._padding_;
    (pFVar36->Value)._padding_ = lVar22;
    uVar24 = *(undefined7 *)&(pFVar35->Value).field_0x91;
    fVar25 = pFVar35->Score;
    uVar26 = *(undefined4 *)&pFVar35->field_0xac;
    (pFVar36->Value).TypeIndex = (pFVar35->Value).TypeIndex;
    *(undefined7 *)&(pFVar36->Value).field_0x91 = uVar24;
    pFVar36->Score = fVar25;
    *(undefined4 *)&pFVar36->field_0xac = uVar26;
    (pFVar35->ID).A = uVar27;
    (pFVar35->ID).B = uVar28;
    (pFVar35->ID).C = uVar29;
    (pFVar35->ID).D = uVar30;
    (pFVar35->Value)._padding_ = lVar1;
    (pFVar35->Value)._padding_ = lVar5;
    (pFVar35->Value)._padding_ = lVar6;
    (pFVar35->Value)._padding_ = lVar7;
    (pFVar35->Value)._padding_ = lVar8;
    (pFVar35->Value)._padding_ = lVar9;
    (pFVar35->Value)._padding_ = lVar10;
    (pFVar35->Value)._padding_ = lVar11;
    (pFVar35->Value)._padding_ = lVar12;
    (pFVar35->Value)._padding_ = lVar13;
    (pFVar35->Value)._padding_ = lVar14;
    (pFVar35->Value)._padding_ = lVar15;
    (pFVar35->Value)._padding_ = lVar16;
    (pFVar35->Value)._padding_ = lVar17;
    (pFVar35->Value)._padding_ = lVar18;
    (pFVar35->Value)._padding_ = lVar19;
    (pFVar35->Value)._padding_ = lVar20;
    (pFVar35->Value)._padding_ = lVar21;
    (pFVar35->Value).TypeIndex = uVar31;
    *(undefined7 *)&(pFVar35->Value).field_0x91 = uVar32;
    pFVar35->Score = fVar33;
    *(undefined4 *)&pFVar35->field_0xac = uVar34;
    param_2 = iVar37;
  } while( true );
}

// HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,`Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute'::__l5::<lambda_1>_>_>_> @ 14ae50930

void __cdecl
AlgoImpl::
HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute_::__l5::<lambda_1>_>_>_>
          (FFrontendQueryEntry *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>_>
          *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined7 uVar25;
  float fVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uchar uVar32;
  undefined7 uVar33;
  float fVar34;
  undefined4 uVar35;
  char cVar36;
  int iVar37;
  FFrontendQueryEntry *pFVar38;
  FFrontendQueryEntry *pFVar39;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar2 = param_2 * 2;
    iVar37 = iVar2 + 1;
    if (iVar2 + 2 < param_3) {
      plVar1 = *(longlong **)&param_5->Predicate->Predicate->__this->field_0x8;
      cVar36 = (**(code **)(*plVar1 + 8))(plVar1,param_1 + (iVar2 + 2),param_1 + iVar37);
      if (cVar36 != '\0') {
        iVar37 = iVar2;
      }
      iVar37 = iVar37 + 1;
    }
    plVar1 = *(longlong **)&param_5->Predicate->Predicate->__this->field_0x8;
    pFVar39 = param_1 + iVar37;
    pFVar38 = param_1 + param_2;
    cVar36 = (**(code **)(*plVar1 + 8))(plVar1,pFVar38,pFVar39);
    if (cVar36 == '\0') break;
    uVar28 = (pFVar38->ID).A;
    uVar29 = (pFVar38->ID).B;
    uVar30 = (pFVar38->ID).C;
    uVar31 = (pFVar38->ID).D;
    lVar3 = (pFVar38->Value)._padding_;
    lVar4 = (pFVar38->Value)._padding_;
    lVar5 = (pFVar38->Value)._padding_;
    lVar6 = (pFVar38->Value)._padding_;
    lVar7 = (pFVar38->Value)._padding_;
    lVar8 = (pFVar38->Value)._padding_;
    lVar9 = (pFVar38->Value)._padding_;
    lVar10 = (pFVar38->Value)._padding_;
    lVar11 = (pFVar38->Value)._padding_;
    lVar12 = (pFVar38->Value)._padding_;
    lVar13 = (pFVar38->Value)._padding_;
    lVar14 = (pFVar38->Value)._padding_;
    lVar15 = (pFVar38->Value)._padding_;
    lVar16 = (pFVar38->Value)._padding_;
    lVar17 = (pFVar38->Value)._padding_;
    lVar18 = (pFVar38->Value)._padding_;
    lVar19 = (pFVar38->Value)._padding_;
    lVar20 = (pFVar38->Value)._padding_;
    uVar32 = (pFVar38->Value).TypeIndex;
    uVar33 = *(undefined7 *)&(pFVar38->Value).field_0x91;
    fVar34 = pFVar38->Score;
    uVar35 = *(undefined4 *)&pFVar38->field_0xac;
    uVar22 = (pFVar39->ID).B;
    uVar23 = (pFVar39->ID).C;
    uVar24 = (pFVar39->ID).D;
    (pFVar38->ID).A = (pFVar39->ID).A;
    (pFVar38->ID).B = uVar22;
    (pFVar38->ID).C = uVar23;
    (pFVar38->ID).D = uVar24;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    uVar25 = *(undefined7 *)&(pFVar39->Value).field_0x91;
    fVar26 = pFVar39->Score;
    uVar27 = *(undefined4 *)&pFVar39->field_0xac;
    (pFVar38->Value).TypeIndex = (pFVar39->Value).TypeIndex;
    *(undefined7 *)&(pFVar38->Value).field_0x91 = uVar25;
    pFVar38->Score = fVar26;
    *(undefined4 *)&pFVar38->field_0xac = uVar27;
    (pFVar39->ID).A = uVar28;
    (pFVar39->ID).B = uVar29;
    (pFVar39->ID).C = uVar30;
    (pFVar39->ID).D = uVar31;
    (pFVar39->Value)._padding_ = lVar3;
    (pFVar39->Value)._padding_ = lVar4;
    (pFVar39->Value)._padding_ = lVar5;
    (pFVar39->Value)._padding_ = lVar6;
    (pFVar39->Value)._padding_ = lVar7;
    (pFVar39->Value)._padding_ = lVar8;
    (pFVar39->Value)._padding_ = lVar9;
    (pFVar39->Value)._padding_ = lVar10;
    (pFVar39->Value)._padding_ = lVar11;
    (pFVar39->Value)._padding_ = lVar12;
    (pFVar39->Value)._padding_ = lVar13;
    (pFVar39->Value)._padding_ = lVar14;
    (pFVar39->Value)._padding_ = lVar15;
    (pFVar39->Value)._padding_ = lVar16;
    (pFVar39->Value)._padding_ = lVar17;
    (pFVar39->Value)._padding_ = lVar18;
    (pFVar39->Value)._padding_ = lVar19;
    (pFVar39->Value)._padding_ = lVar20;
    (pFVar39->Value).TypeIndex = uVar32;
    *(undefined7 *)&(pFVar39->Value).field_0x91 = uVar33;
    pFVar39->Score = fVar34;
    *(undefined4 *)&pFVar39->field_0xac = uVar35;
    param_2 = iVar37;
  }
  return;
}

// HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,`Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge'::__l5::<lambda_1>_>_>_> @ 14ae50b80

void __cdecl
AlgoImpl::
HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge_::__l5::<lambda_1>_>_>_>
          (FFrontendQueryEntry *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>_>
          *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined7 uVar25;
  float fVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uchar uVar32;
  undefined7 uVar33;
  float fVar34;
  undefined4 uVar35;
  char cVar36;
  int iVar37;
  FFrontendQueryEntry *pFVar38;
  FFrontendQueryEntry *pFVar39;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar2 = param_2 * 2;
    iVar37 = iVar2 + 1;
    if (iVar2 + 2 < param_3) {
      plVar1 = *(longlong **)&param_5->Predicate->Predicate->__this->field_0x8;
      cVar36 = (**(code **)(*plVar1 + 8))(plVar1,param_1 + (iVar2 + 2),param_1 + iVar37);
      if (cVar36 != '\0') {
        iVar37 = iVar2;
      }
      iVar37 = iVar37 + 1;
    }
    plVar1 = *(longlong **)&param_5->Predicate->Predicate->__this->field_0x8;
    pFVar39 = param_1 + iVar37;
    pFVar38 = param_1 + param_2;
    cVar36 = (**(code **)(*plVar1 + 8))(plVar1,pFVar38,pFVar39);
    if (cVar36 == '\0') break;
    uVar28 = (pFVar38->ID).A;
    uVar29 = (pFVar38->ID).B;
    uVar30 = (pFVar38->ID).C;
    uVar31 = (pFVar38->ID).D;
    lVar3 = (pFVar38->Value)._padding_;
    lVar4 = (pFVar38->Value)._padding_;
    lVar5 = (pFVar38->Value)._padding_;
    lVar6 = (pFVar38->Value)._padding_;
    lVar7 = (pFVar38->Value)._padding_;
    lVar8 = (pFVar38->Value)._padding_;
    lVar9 = (pFVar38->Value)._padding_;
    lVar10 = (pFVar38->Value)._padding_;
    lVar11 = (pFVar38->Value)._padding_;
    lVar12 = (pFVar38->Value)._padding_;
    lVar13 = (pFVar38->Value)._padding_;
    lVar14 = (pFVar38->Value)._padding_;
    lVar15 = (pFVar38->Value)._padding_;
    lVar16 = (pFVar38->Value)._padding_;
    lVar17 = (pFVar38->Value)._padding_;
    lVar18 = (pFVar38->Value)._padding_;
    lVar19 = (pFVar38->Value)._padding_;
    lVar20 = (pFVar38->Value)._padding_;
    uVar32 = (pFVar38->Value).TypeIndex;
    uVar33 = *(undefined7 *)&(pFVar38->Value).field_0x91;
    fVar34 = pFVar38->Score;
    uVar35 = *(undefined4 *)&pFVar38->field_0xac;
    uVar22 = (pFVar39->ID).B;
    uVar23 = (pFVar39->ID).C;
    uVar24 = (pFVar39->ID).D;
    (pFVar38->ID).A = (pFVar39->ID).A;
    (pFVar38->ID).B = uVar22;
    (pFVar38->ID).C = uVar23;
    (pFVar38->ID).D = uVar24;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    lVar21 = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = (pFVar39->Value)._padding_;
    (pFVar38->Value)._padding_ = lVar21;
    uVar25 = *(undefined7 *)&(pFVar39->Value).field_0x91;
    fVar26 = pFVar39->Score;
    uVar27 = *(undefined4 *)&pFVar39->field_0xac;
    (pFVar38->Value).TypeIndex = (pFVar39->Value).TypeIndex;
    *(undefined7 *)&(pFVar38->Value).field_0x91 = uVar25;
    pFVar38->Score = fVar26;
    *(undefined4 *)&pFVar38->field_0xac = uVar27;
    (pFVar39->ID).A = uVar28;
    (pFVar39->ID).B = uVar29;
    (pFVar39->ID).C = uVar30;
    (pFVar39->ID).D = uVar31;
    (pFVar39->Value)._padding_ = lVar3;
    (pFVar39->Value)._padding_ = lVar4;
    (pFVar39->Value)._padding_ = lVar5;
    (pFVar39->Value)._padding_ = lVar6;
    (pFVar39->Value)._padding_ = lVar7;
    (pFVar39->Value)._padding_ = lVar8;
    (pFVar39->Value)._padding_ = lVar9;
    (pFVar39->Value)._padding_ = lVar10;
    (pFVar39->Value)._padding_ = lVar11;
    (pFVar39->Value)._padding_ = lVar12;
    (pFVar39->Value)._padding_ = lVar13;
    (pFVar39->Value)._padding_ = lVar14;
    (pFVar39->Value)._padding_ = lVar15;
    (pFVar39->Value)._padding_ = lVar16;
    (pFVar39->Value)._padding_ = lVar17;
    (pFVar39->Value)._padding_ = lVar18;
    (pFVar39->Value)._padding_ = lVar19;
    (pFVar39->Value)._padding_ = lVar20;
    (pFVar39->Value).TypeIndex = uVar32;
    *(undefined7 *)&(pFVar39->Value).field_0x91 = uVar33;
    pFVar39->Score = fVar34;
    *(undefined4 *)&pFVar39->field_0xac = uVar35;
    param_2 = iVar37;
  }
  return;
}

// HeapSortInternal<Metasound::Frontend::INodeTemplate_const_*,int,FIdentityFunctor,`Metasound::Frontend::FNodeTemplateRegistry::FindTemplate'::__l5::<lambda_1>_> @ 14ae50dd0

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::Frontend::INodeTemplate_const_*,int,FIdentityFunctor,_Metasound::Frontend::FNodeTemplateRegistry::FindTemplate_::__l5::<lambda_1>_>
          (INodeTemplate **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  INodeTemplate *pIVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  <lambda_1> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<Metasound::Frontend::INodeTemplate_const_*,int,FIdentityFunctor,TReversePredicate<_Metasound::Frontend::FNodeTemplateRegistry::FindTemplate_::__l5::<lambda_1>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar8 = param_2 + -1;
  lVar9 = (longlong)iVar8;
  if (0 < iVar8) {
    do {
      pIVar1 = *param_1;
      *param_1 = param_1[lVar9];
      param_1[lVar9] = pIVar1;
      iVar10 = 0;
      if (1 < iVar8) {
        do {
          iVar3 = iVar10 * 2;
          iVar7 = iVar3 + 1;
          if (iVar3 + 2 < iVar8) {
            pIVar1 = param_1[(longlong)iVar3 + 2];
            piVar5 = (int *)(**(code **)((longlong)*param_1[iVar7] + 0x48))();
            piVar6 = (int *)(**(code **)((longlong)*pIVar1 + 0x48))(pIVar1);
            if (*piVar6 < *piVar5) {
              bVar4 = true;
            }
            else if (*piVar6 == *piVar5) {
              bVar4 = piVar6[1] < piVar5[1];
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              iVar7 = iVar3;
            }
            iVar7 = iVar7 + 1;
          }
          pIVar1 = param_1[iVar10];
          piVar5 = (int *)(**(code **)((longlong)*param_1[iVar7] + 0x48))();
          piVar6 = (int *)(**(code **)((longlong)*pIVar1 + 0x48))(pIVar1);
          if ((*piVar5 <= *piVar6) && ((*piVar6 != *piVar5 || (piVar5[1] <= piVar6[1])))) break;
          pIVar1 = param_1[iVar10];
          param_1[iVar10] = param_1[iVar7];
          param_1[iVar7] = pIVar1;
          iVar10 = iVar7;
        } while (iVar7 * 2 + 1 < iVar8);
      }
      iVar8 = iVar8 + -1;
      lVar9 = lVar9 + -1;
    } while (0 < lVar9);
  }
  return;
}

// HeapSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,`Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute'::__l5::<lambda_1>_>_> @ 14ae50f70

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute_::__l5::<lambda_1>_>_>
          (FFrontendQueryEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>
          param_4)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined7 uVar12;
  float fVar13;
  undefined4 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  FFrontendQueryEntry *pFVar19;
  FFrontendQueryEntry *pFVar20;
  longlong lVar21;
  FFrontendQueryEntry *pFVar22;
  int iVar23;
  FIdentityFunctor local_res10 [16];
  TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>
  local_res20;
  TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>_>
  local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_f8.Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar15)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar17 = (param_2 + -2) / 2;
  HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute_::__l5::<lambda_1>_>_>_>
            (param_1,iVar17,param_2,local_res10,&local_f8);
  while (iVar17 != 0) {
    iVar17 = iVar17 + -1;
    HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute_::__l5::<lambda_1>_>_>_>
              (param_1,iVar17,param_2,local_res10,&local_f8);
  }
  iVar17 = param_2 + -1;
  lVar21 = (longlong)iVar17;
  if (0 < iVar17) {
    pFVar22 = param_1 + lVar21;
    do {
      local_f0._0_4_ = (param_1->ID).A;
      local_f0._4_4_ = (param_1->ID).B;
      uStack_e8._0_4_ = (param_1->ID).C;
      uStack_e8._4_4_ = (param_1->ID).D;
      iVar23 = 0;
      local_e0 = (param_1->Value)._padding_;
      lStack_d8 = (param_1->Value)._padding_;
      local_d0 = (param_1->Value)._padding_;
      lStack_c8 = (param_1->Value)._padding_;
      local_c0 = (param_1->Value)._padding_;
      lStack_b8 = (param_1->Value)._padding_;
      local_b0 = (param_1->Value)._padding_;
      lStack_a8 = (param_1->Value)._padding_;
      local_a0 = (param_1->Value)._padding_;
      lStack_98 = (param_1->Value)._padding_;
      local_90 = (param_1->Value)._padding_;
      lStack_88 = (param_1->Value)._padding_;
      local_80 = (param_1->Value)._padding_;
      lStack_78 = (param_1->Value)._padding_;
      local_70 = (param_1->Value)._padding_;
      lStack_68 = (param_1->Value)._padding_;
      lVar4 = (param_1->Value)._padding_;
      lVar5 = (param_1->Value)._padding_;
      uVar6 = *(undefined8 *)&(param_1->Value).TypeIndex;
      uVar7 = *(undefined8 *)&param_1->Score;
      uVar9 = (pFVar22->ID).B;
      uVar10 = (pFVar22->ID).C;
      uVar11 = (pFVar22->ID).D;
      (param_1->ID).A = (pFVar22->ID).A;
      (param_1->ID).B = uVar9;
      (param_1->ID).C = uVar10;
      (param_1->ID).D = uVar11;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      uVar12 = *(undefined7 *)&(pFVar22->Value).field_0x91;
      fVar13 = pFVar22->Score;
      uVar14 = *(undefined4 *)&pFVar22->field_0xac;
      (param_1->Value).TypeIndex = (pFVar22->Value).TypeIndex;
      *(undefined7 *)&(param_1->Value).field_0x91 = uVar12;
      param_1->Score = fVar13;
      *(undefined4 *)&param_1->field_0xac = uVar14;
      (pFVar22->ID).A = (undefined4)local_f0;
      (pFVar22->ID).B = local_f0._4_4_;
      (pFVar22->ID).C = (undefined4)uStack_e8;
      (pFVar22->ID).D = uStack_e8._4_4_;
      (pFVar22->Value)._padding_ = local_e0;
      (pFVar22->Value)._padding_ = lStack_d8;
      (pFVar22->Value)._padding_ = local_d0;
      (pFVar22->Value)._padding_ = lStack_c8;
      (pFVar22->Value)._padding_ = local_c0;
      (pFVar22->Value)._padding_ = lStack_b8;
      (pFVar22->Value)._padding_ = local_b0;
      (pFVar22->Value)._padding_ = lStack_a8;
      (pFVar22->Value)._padding_ = local_a0;
      (pFVar22->Value)._padding_ = lStack_98;
      (pFVar22->Value)._padding_ = local_90;
      (pFVar22->Value)._padding_ = lStack_88;
      (pFVar22->Value)._padding_ = local_80;
      (pFVar22->Value)._padding_ = lStack_78;
      local_60._0_4_ = (undefined4)lVar4;
      local_60._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      uStack_58._0_4_ = (undefined4)lVar5;
      uStack_58._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      (pFVar22->Value)._padding_ = local_70;
      (pFVar22->Value)._padding_ = lStack_68;
      local_50._0_4_ = (undefined4)uVar6;
      local_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_48._0_4_ = (float)uVar7;
      uStack_48._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      *(undefined4 *)&(pFVar22->Value)._padding_ = (undefined4)local_60;
      *(undefined4 *)((longlong)&(pFVar22->Value)._padding_ + 4) = local_60._4_4_;
      *(undefined4 *)&(pFVar22->Value)._padding_ = (undefined4)uStack_58;
      *(undefined4 *)((longlong)&(pFVar22->Value)._padding_ + 4) = uStack_58._4_4_;
      *(undefined4 *)&(pFVar22->Value).TypeIndex = (undefined4)local_50;
      *(undefined4 *)&(pFVar22->Value).field_0x94 = local_50._4_4_;
      pFVar22->Score = (float)uStack_48;
      *(undefined4 *)&pFVar22->field_0xac = uStack_48._4_4_;
      local_60 = lVar4;
      uStack_58 = lVar5;
      local_50 = uVar6;
      uStack_48 = uVar7;
      if (1 < iVar17) {
        do {
          iVar3 = iVar23 * 2;
          iVar18 = iVar3 + 1;
          if (iVar3 + 2 < iVar17) {
            plVar1 = *(longlong **)&(local_res20.Predicate)->__this->field_0x8;
            cVar16 = (**(code **)(*plVar1 + 8))(plVar1,param_1 + (iVar3 + 2),param_1 + iVar18);
            if (cVar16 != '\0') {
              iVar18 = iVar3;
            }
            iVar18 = iVar18 + 1;
          }
          plVar1 = *(longlong **)&(local_res20.Predicate)->__this->field_0x8;
          pFVar20 = param_1 + iVar18;
          pFVar19 = param_1 + iVar23;
          cVar16 = (**(code **)(*plVar1 + 8))(plVar1,pFVar19,pFVar20);
          if (cVar16 == '\0') break;
          local_f0._0_4_ = (pFVar19->ID).A;
          local_f0._4_4_ = (pFVar19->ID).B;
          uStack_e8._0_4_ = (pFVar19->ID).C;
          uStack_e8._4_4_ = (pFVar19->ID).D;
          local_e0 = (pFVar19->Value)._padding_;
          lStack_d8 = (pFVar19->Value)._padding_;
          local_d0 = (pFVar19->Value)._padding_;
          lStack_c8 = (pFVar19->Value)._padding_;
          local_c0 = (pFVar19->Value)._padding_;
          lStack_b8 = (pFVar19->Value)._padding_;
          local_b0 = (pFVar19->Value)._padding_;
          lStack_a8 = (pFVar19->Value)._padding_;
          local_a0 = (pFVar19->Value)._padding_;
          lStack_98 = (pFVar19->Value)._padding_;
          local_90 = (pFVar19->Value)._padding_;
          lStack_88 = (pFVar19->Value)._padding_;
          local_80 = (pFVar19->Value)._padding_;
          lStack_78 = (pFVar19->Value)._padding_;
          local_70 = (pFVar19->Value)._padding_;
          lStack_68 = (pFVar19->Value)._padding_;
          lVar4 = (pFVar19->Value)._padding_;
          lVar5 = (pFVar19->Value)._padding_;
          uVar6 = *(undefined8 *)&(pFVar19->Value).TypeIndex;
          uVar7 = *(undefined8 *)&pFVar19->Score;
          uVar9 = (pFVar20->ID).B;
          uVar10 = (pFVar20->ID).C;
          uVar11 = (pFVar20->ID).D;
          (pFVar19->ID).A = (pFVar20->ID).A;
          (pFVar19->ID).B = uVar9;
          (pFVar19->ID).C = uVar10;
          (pFVar19->ID).D = uVar11;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          uVar12 = *(undefined7 *)&(pFVar20->Value).field_0x91;
          fVar13 = pFVar20->Score;
          uVar14 = *(undefined4 *)&pFVar20->field_0xac;
          (pFVar19->Value).TypeIndex = (pFVar20->Value).TypeIndex;
          *(undefined7 *)&(pFVar19->Value).field_0x91 = uVar12;
          pFVar19->Score = fVar13;
          *(undefined4 *)&pFVar19->field_0xac = uVar14;
          (pFVar20->ID).A = (undefined4)local_f0;
          (pFVar20->ID).B = local_f0._4_4_;
          (pFVar20->ID).C = (undefined4)uStack_e8;
          (pFVar20->ID).D = uStack_e8._4_4_;
          (pFVar20->Value)._padding_ = local_e0;
          (pFVar20->Value)._padding_ = lStack_d8;
          (pFVar20->Value)._padding_ = local_d0;
          (pFVar20->Value)._padding_ = lStack_c8;
          (pFVar20->Value)._padding_ = local_c0;
          (pFVar20->Value)._padding_ = lStack_b8;
          (pFVar20->Value)._padding_ = local_b0;
          (pFVar20->Value)._padding_ = lStack_a8;
          (pFVar20->Value)._padding_ = local_a0;
          (pFVar20->Value)._padding_ = lStack_98;
          (pFVar20->Value)._padding_ = local_90;
          (pFVar20->Value)._padding_ = lStack_88;
          (pFVar20->Value)._padding_ = local_80;
          (pFVar20->Value)._padding_ = lStack_78;
          local_60._0_4_ = (undefined4)lVar4;
          local_60._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
          uStack_58._0_4_ = (undefined4)lVar5;
          uStack_58._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
          (pFVar20->Value)._padding_ = local_70;
          (pFVar20->Value)._padding_ = lStack_68;
          local_50._0_4_ = (undefined4)uVar6;
          local_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_48._0_4_ = (float)uVar7;
          uStack_48._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)&(pFVar20->Value)._padding_ = (undefined4)local_60;
          *(undefined4 *)((longlong)&(pFVar20->Value)._padding_ + 4) = local_60._4_4_;
          *(undefined4 *)&(pFVar20->Value)._padding_ = (undefined4)uStack_58;
          *(undefined4 *)((longlong)&(pFVar20->Value)._padding_ + 4) = uStack_58._4_4_;
          *(undefined4 *)&(pFVar20->Value).TypeIndex = (undefined4)local_50;
          *(undefined4 *)&(pFVar20->Value).field_0x94 = local_50._4_4_;
          pFVar20->Score = (float)uStack_48;
          *(undefined4 *)&pFVar20->field_0xac = uStack_48._4_4_;
          local_60 = lVar4;
          uStack_58 = lVar5;
          local_50 = uVar6;
          uStack_48 = uVar7;
          iVar23 = iVar18;
        } while (iVar18 * 2 + 1 < iVar17);
      }
      iVar17 = iVar17 + -1;
      lVar21 = lVar21 + -1;
      pFVar22 = pFVar22 + -1;
    } while (0 < lVar21);
  }
  return;
}

// HeapSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,`Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge'::__l5::<lambda_1>_>_> @ 14ae51450

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge_::__l5::<lambda_1>_>_>
          (FFrontendQueryEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>
          param_4)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined7 uVar12;
  float fVar13;
  undefined4 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  FFrontendQueryEntry *pFVar19;
  FFrontendQueryEntry *pFVar20;
  longlong lVar21;
  FFrontendQueryEntry *pFVar22;
  int iVar23;
  FIdentityFunctor local_res10 [16];
  TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>
  local_res20;
  TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>_>
  local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_f8.Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar15)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar17 = (param_2 + -2) / 2;
  HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge_::__l5::<lambda_1>_>_>_>
            (param_1,iVar17,param_2,local_res10,&local_f8);
  while (iVar17 != 0) {
    iVar17 = iVar17 + -1;
    HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge_::__l5::<lambda_1>_>_>_>
              (param_1,iVar17,param_2,local_res10,&local_f8);
  }
  iVar17 = param_2 + -1;
  lVar21 = (longlong)iVar17;
  if (0 < iVar17) {
    pFVar22 = param_1 + lVar21;
    do {
      local_f0._0_4_ = (param_1->ID).A;
      local_f0._4_4_ = (param_1->ID).B;
      uStack_e8._0_4_ = (param_1->ID).C;
      uStack_e8._4_4_ = (param_1->ID).D;
      iVar23 = 0;
      local_e0 = (param_1->Value)._padding_;
      lStack_d8 = (param_1->Value)._padding_;
      local_d0 = (param_1->Value)._padding_;
      lStack_c8 = (param_1->Value)._padding_;
      local_c0 = (param_1->Value)._padding_;
      lStack_b8 = (param_1->Value)._padding_;
      local_b0 = (param_1->Value)._padding_;
      lStack_a8 = (param_1->Value)._padding_;
      local_a0 = (param_1->Value)._padding_;
      lStack_98 = (param_1->Value)._padding_;
      local_90 = (param_1->Value)._padding_;
      lStack_88 = (param_1->Value)._padding_;
      local_80 = (param_1->Value)._padding_;
      lStack_78 = (param_1->Value)._padding_;
      local_70 = (param_1->Value)._padding_;
      lStack_68 = (param_1->Value)._padding_;
      lVar4 = (param_1->Value)._padding_;
      lVar5 = (param_1->Value)._padding_;
      uVar6 = *(undefined8 *)&(param_1->Value).TypeIndex;
      uVar7 = *(undefined8 *)&param_1->Score;
      uVar9 = (pFVar22->ID).B;
      uVar10 = (pFVar22->ID).C;
      uVar11 = (pFVar22->ID).D;
      (param_1->ID).A = (pFVar22->ID).A;
      (param_1->ID).B = uVar9;
      (param_1->ID).C = uVar10;
      (param_1->ID).D = uVar11;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      lVar8 = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = (pFVar22->Value)._padding_;
      (param_1->Value)._padding_ = lVar8;
      uVar12 = *(undefined7 *)&(pFVar22->Value).field_0x91;
      fVar13 = pFVar22->Score;
      uVar14 = *(undefined4 *)&pFVar22->field_0xac;
      (param_1->Value).TypeIndex = (pFVar22->Value).TypeIndex;
      *(undefined7 *)&(param_1->Value).field_0x91 = uVar12;
      param_1->Score = fVar13;
      *(undefined4 *)&param_1->field_0xac = uVar14;
      (pFVar22->ID).A = (undefined4)local_f0;
      (pFVar22->ID).B = local_f0._4_4_;
      (pFVar22->ID).C = (undefined4)uStack_e8;
      (pFVar22->ID).D = uStack_e8._4_4_;
      (pFVar22->Value)._padding_ = local_e0;
      (pFVar22->Value)._padding_ = lStack_d8;
      (pFVar22->Value)._padding_ = local_d0;
      (pFVar22->Value)._padding_ = lStack_c8;
      (pFVar22->Value)._padding_ = local_c0;
      (pFVar22->Value)._padding_ = lStack_b8;
      (pFVar22->Value)._padding_ = local_b0;
      (pFVar22->Value)._padding_ = lStack_a8;
      (pFVar22->Value)._padding_ = local_a0;
      (pFVar22->Value)._padding_ = lStack_98;
      (pFVar22->Value)._padding_ = local_90;
      (pFVar22->Value)._padding_ = lStack_88;
      (pFVar22->Value)._padding_ = local_80;
      (pFVar22->Value)._padding_ = lStack_78;
      local_60._0_4_ = (undefined4)lVar4;
      local_60._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      uStack_58._0_4_ = (undefined4)lVar5;
      uStack_58._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      (pFVar22->Value)._padding_ = local_70;
      (pFVar22->Value)._padding_ = lStack_68;
      local_50._0_4_ = (undefined4)uVar6;
      local_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_48._0_4_ = (float)uVar7;
      uStack_48._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      *(undefined4 *)&(pFVar22->Value)._padding_ = (undefined4)local_60;
      *(undefined4 *)((longlong)&(pFVar22->Value)._padding_ + 4) = local_60._4_4_;
      *(undefined4 *)&(pFVar22->Value)._padding_ = (undefined4)uStack_58;
      *(undefined4 *)((longlong)&(pFVar22->Value)._padding_ + 4) = uStack_58._4_4_;
      *(undefined4 *)&(pFVar22->Value).TypeIndex = (undefined4)local_50;
      *(undefined4 *)&(pFVar22->Value).field_0x94 = local_50._4_4_;
      pFVar22->Score = (float)uStack_48;
      *(undefined4 *)&pFVar22->field_0xac = uStack_48._4_4_;
      local_60 = lVar4;
      uStack_58 = lVar5;
      local_50 = uVar6;
      uStack_48 = uVar7;
      if (1 < iVar17) {
        do {
          iVar3 = iVar23 * 2;
          iVar18 = iVar3 + 1;
          if (iVar3 + 2 < iVar17) {
            plVar1 = *(longlong **)&(local_res20.Predicate)->__this->field_0x8;
            cVar16 = (**(code **)(*plVar1 + 8))(plVar1,param_1 + (iVar3 + 2),param_1 + iVar18);
            if (cVar16 != '\0') {
              iVar18 = iVar3;
            }
            iVar18 = iVar18 + 1;
          }
          plVar1 = *(longlong **)&(local_res20.Predicate)->__this->field_0x8;
          pFVar20 = param_1 + iVar18;
          pFVar19 = param_1 + iVar23;
          cVar16 = (**(code **)(*plVar1 + 8))(plVar1,pFVar19,pFVar20);
          if (cVar16 == '\0') break;
          local_f0._0_4_ = (pFVar19->ID).A;
          local_f0._4_4_ = (pFVar19->ID).B;
          uStack_e8._0_4_ = (pFVar19->ID).C;
          uStack_e8._4_4_ = (pFVar19->ID).D;
          local_e0 = (pFVar19->Value)._padding_;
          lStack_d8 = (pFVar19->Value)._padding_;
          local_d0 = (pFVar19->Value)._padding_;
          lStack_c8 = (pFVar19->Value)._padding_;
          local_c0 = (pFVar19->Value)._padding_;
          lStack_b8 = (pFVar19->Value)._padding_;
          local_b0 = (pFVar19->Value)._padding_;
          lStack_a8 = (pFVar19->Value)._padding_;
          local_a0 = (pFVar19->Value)._padding_;
          lStack_98 = (pFVar19->Value)._padding_;
          local_90 = (pFVar19->Value)._padding_;
          lStack_88 = (pFVar19->Value)._padding_;
          local_80 = (pFVar19->Value)._padding_;
          lStack_78 = (pFVar19->Value)._padding_;
          local_70 = (pFVar19->Value)._padding_;
          lStack_68 = (pFVar19->Value)._padding_;
          lVar4 = (pFVar19->Value)._padding_;
          lVar5 = (pFVar19->Value)._padding_;
          uVar6 = *(undefined8 *)&(pFVar19->Value).TypeIndex;
          uVar7 = *(undefined8 *)&pFVar19->Score;
          uVar9 = (pFVar20->ID).B;
          uVar10 = (pFVar20->ID).C;
          uVar11 = (pFVar20->ID).D;
          (pFVar19->ID).A = (pFVar20->ID).A;
          (pFVar19->ID).B = uVar9;
          (pFVar19->ID).C = uVar10;
          (pFVar19->ID).D = uVar11;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          lVar8 = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = (pFVar20->Value)._padding_;
          (pFVar19->Value)._padding_ = lVar8;
          uVar12 = *(undefined7 *)&(pFVar20->Value).field_0x91;
          fVar13 = pFVar20->Score;
          uVar14 = *(undefined4 *)&pFVar20->field_0xac;
          (pFVar19->Value).TypeIndex = (pFVar20->Value).TypeIndex;
          *(undefined7 *)&(pFVar19->Value).field_0x91 = uVar12;
          pFVar19->Score = fVar13;
          *(undefined4 *)&pFVar19->field_0xac = uVar14;
          (pFVar20->ID).A = (undefined4)local_f0;
          (pFVar20->ID).B = local_f0._4_4_;
          (pFVar20->ID).C = (undefined4)uStack_e8;
          (pFVar20->ID).D = uStack_e8._4_4_;
          (pFVar20->Value)._padding_ = local_e0;
          (pFVar20->Value)._padding_ = lStack_d8;
          (pFVar20->Value)._padding_ = local_d0;
          (pFVar20->Value)._padding_ = lStack_c8;
          (pFVar20->Value)._padding_ = local_c0;
          (pFVar20->Value)._padding_ = lStack_b8;
          (pFVar20->Value)._padding_ = local_b0;
          (pFVar20->Value)._padding_ = lStack_a8;
          (pFVar20->Value)._padding_ = local_a0;
          (pFVar20->Value)._padding_ = lStack_98;
          (pFVar20->Value)._padding_ = local_90;
          (pFVar20->Value)._padding_ = lStack_88;
          (pFVar20->Value)._padding_ = local_80;
          (pFVar20->Value)._padding_ = lStack_78;
          local_60._0_4_ = (undefined4)lVar4;
          local_60._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
          uStack_58._0_4_ = (undefined4)lVar5;
          uStack_58._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
          (pFVar20->Value)._padding_ = local_70;
          (pFVar20->Value)._padding_ = lStack_68;
          local_50._0_4_ = (undefined4)uVar6;
          local_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_48._0_4_ = (float)uVar7;
          uStack_48._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)&(pFVar20->Value)._padding_ = (undefined4)local_60;
          *(undefined4 *)((longlong)&(pFVar20->Value)._padding_ + 4) = local_60._4_4_;
          *(undefined4 *)&(pFVar20->Value)._padding_ = (undefined4)uStack_58;
          *(undefined4 *)((longlong)&(pFVar20->Value)._padding_ + 4) = uStack_58._4_4_;
          *(undefined4 *)&(pFVar20->Value).TypeIndex = (undefined4)local_50;
          *(undefined4 *)&(pFVar20->Value).field_0x94 = local_50._4_4_;
          pFVar20->Score = (float)uStack_48;
          *(undefined4 *)&pFVar20->field_0xac = uStack_48._4_4_;
          local_60 = lVar4;
          uStack_58 = lVar5;
          local_50 = uVar6;
          uStack_48 = uVar7;
          iVar23 = iVar18;
        } while (iVar18 * 2 + 1 < iVar17);
      }
      iVar17 = iVar17 + -1;
      lVar21 = lVar21 + -1;
      pFVar22 = pFVar22 + -1;
    } while (0 < lVar21);
  }
  return;
}

// HeapifyInternal<Metasound::Frontend::INodeTemplate_const_*,int,FIdentityFunctor,TReversePredicate<`Metasound::Frontend::FNodeTemplateRegistry::FindTemplate'::__l5::<lambda_1>_>_> @ 14ae51930

void __cdecl
AlgoImpl::
HeapifyInternal<Metasound::Frontend::INodeTemplate_const_*,int,FIdentityFunctor,TReversePredicate<_Metasound::Frontend::FNodeTemplateRegistry::FindTemplate_::__l5::<lambda_1>_>_>
          (INodeTemplate **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_public:_virtual_class_Metasound::Frontend::INodeTemplate_const_*___cdecl_Metasound::Frontend::FNodeTemplateRegistry::FindTemplate(FMetasoundFrontendClassName_const_&)const_::_5_::<lambda_1>_>
          param_4)

{
  INodeTemplate *pIVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar9 = iVar5 * 2 + 1;
  iVar3 = iVar9;
  iVar10 = iVar5;
  do {
    while (param_2 <= iVar9) {
LAB_14ae51a73:
      if (iVar10 == 0) {
        return;
      }
      iVar5 = iVar10 + -1;
      iVar9 = iVar3 + -2;
      iVar3 = iVar9;
      iVar10 = iVar5;
    }
    iVar9 = iVar5 * 2;
    iVar8 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      pIVar1 = param_1[(longlong)iVar9 + 2];
      piVar6 = (int *)(**(code **)((longlong)*param_1[iVar8] + 0x48))();
      piVar7 = (int *)(**(code **)((longlong)*pIVar1 + 0x48))(pIVar1);
      if (*piVar7 < *piVar6) {
        bVar4 = true;
      }
      else if (*piVar7 == *piVar6) {
        bVar4 = piVar7[1] < piVar6[1];
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        iVar8 = iVar9;
      }
      iVar8 = iVar8 + 1;
    }
    pIVar1 = param_1[iVar5];
    piVar6 = (int *)(**(code **)((longlong)*param_1[iVar8] + 0x48))();
    piVar7 = (int *)(**(code **)((longlong)*pIVar1 + 0x48))(pIVar1);
    if ((*piVar6 <= *piVar7) && ((*piVar7 != *piVar6 || (piVar6[1] <= piVar7[1]))))
    goto LAB_14ae51a73;
    pIVar1 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar8];
    iVar9 = iVar8 * 2 + 1;
    param_1[iVar8] = pIVar1;
    iVar5 = iVar8;
  } while( true );
}

// HeapifyInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,`Metasound::FrontendQueryPrivate::Difference'::__l2::<lambda_1>_>_>_> @ 14ae51ab0

void __cdecl
AlgoImpl::
HeapifyInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::Difference_::__l2::<lambda_1>_>_>_>
          (FFrontendQueryEntry *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FrontendQueryPrivate::Difference(TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&)_::_2_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  undefined7 uVar25;
  float fVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uchar uVar32;
  undefined7 uVar33;
  float fVar34;
  undefined4 uVar35;
  bool bVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  FFrontendQueryEntry *pFVar41;
  FFrontendQueryEntry *pFVar42;
  
  if (param_2 < 0) {
    bVar36 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar36) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar37 = (param_2 + -2) / 2;
  iVar38 = iVar37 * 2 + 1;
  iVar5 = iVar38;
  iVar39 = iVar37;
  do {
    while (param_2 <= iVar38) {
LAB_14ae51d67:
      if (iVar39 == 0) {
        return;
      }
      iVar37 = iVar39 + -1;
      iVar38 = iVar5 + -2;
      iVar5 = iVar38;
      iVar39 = iVar37;
    }
    iVar38 = iVar37 * 2;
    iVar40 = iVar38 + 1;
    if (iVar38 + 2 < param_2) {
      lVar1 = (longlong)iVar38 + 2;
      pFVar42 = param_1 + (longlong)iVar38 + 1;
      uVar2 = (pFVar42->ID).A;
      uVar3 = param_1[lVar1].ID.A;
      if (uVar3 < uVar2) {
        bVar36 = true;
      }
      else if (uVar2 < uVar3) {
        bVar36 = false;
      }
      else {
        uVar2 = (pFVar42->ID).B;
        uVar3 = param_1[lVar1].ID.B;
        if (uVar3 < uVar2) {
          bVar36 = true;
        }
        else if (uVar2 < uVar3) {
          bVar36 = false;
        }
        else {
          uVar2 = (pFVar42->ID).C;
          uVar3 = param_1[lVar1].ID.C;
          if (uVar3 < uVar2) {
            bVar36 = true;
          }
          else if (uVar2 < uVar3) {
            bVar36 = false;
          }
          else {
            bVar36 = param_1[lVar1].ID.D < (pFVar42->ID).D;
          }
        }
      }
      if (bVar36) {
        iVar40 = iVar38;
      }
      iVar40 = iVar40 + 1;
    }
    pFVar42 = param_1 + iVar40;
    pFVar41 = param_1 + iVar37;
    uVar2 = (pFVar42->ID).A;
    uVar3 = (pFVar41->ID).A;
    if ((uVar2 <= uVar3) &&
       ((uVar3 != uVar2 ||
        ((uVar2 = (pFVar42->ID).B, uVar3 = (pFVar41->ID).B, uVar2 <= uVar3 &&
         ((uVar3 != uVar2 ||
          ((uVar2 = (pFVar42->ID).C, uVar3 = (pFVar41->ID).C, uVar2 <= uVar3 &&
           ((uVar3 != uVar2 || ((pFVar42->ID).D <= (pFVar41->ID).D)))))))))))) goto LAB_14ae51d67;
    uVar28 = (pFVar41->ID).A;
    uVar29 = (pFVar41->ID).B;
    uVar30 = (pFVar41->ID).C;
    uVar31 = (pFVar41->ID).D;
    lVar1 = (pFVar41->Value)._padding_;
    lVar6 = (pFVar41->Value)._padding_;
    lVar7 = (pFVar41->Value)._padding_;
    lVar8 = (pFVar41->Value)._padding_;
    lVar9 = (pFVar41->Value)._padding_;
    lVar10 = (pFVar41->Value)._padding_;
    lVar11 = (pFVar41->Value)._padding_;
    lVar12 = (pFVar41->Value)._padding_;
    lVar13 = (pFVar41->Value)._padding_;
    lVar14 = (pFVar41->Value)._padding_;
    lVar15 = (pFVar41->Value)._padding_;
    lVar16 = (pFVar41->Value)._padding_;
    lVar17 = (pFVar41->Value)._padding_;
    lVar18 = (pFVar41->Value)._padding_;
    lVar19 = (pFVar41->Value)._padding_;
    lVar20 = (pFVar41->Value)._padding_;
    lVar21 = (pFVar41->Value)._padding_;
    lVar22 = (pFVar41->Value)._padding_;
    uVar32 = (pFVar41->Value).TypeIndex;
    uVar33 = *(undefined7 *)&(pFVar41->Value).field_0x91;
    fVar34 = pFVar41->Score;
    uVar35 = *(undefined4 *)&pFVar41->field_0xac;
    uVar2 = (pFVar42->ID).B;
    uVar3 = (pFVar42->ID).C;
    uVar24 = (pFVar42->ID).D;
    (pFVar41->ID).A = (pFVar42->ID).A;
    (pFVar41->ID).B = uVar2;
    (pFVar41->ID).C = uVar3;
    (pFVar41->ID).D = uVar24;
    lVar23 = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = lVar23;
    lVar23 = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = lVar23;
    lVar23 = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = lVar23;
    lVar23 = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = lVar23;
    lVar23 = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = lVar23;
    lVar23 = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = lVar23;
    lVar23 = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = lVar23;
    lVar23 = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = lVar23;
    lVar23 = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = (pFVar42->Value)._padding_;
    (pFVar41->Value)._padding_ = lVar23;
    uVar25 = *(undefined7 *)&(pFVar42->Value).field_0x91;
    fVar26 = pFVar42->Score;
    uVar27 = *(undefined4 *)&pFVar42->field_0xac;
    (pFVar41->Value).TypeIndex = (pFVar42->Value).TypeIndex;
    *(undefined7 *)&(pFVar41->Value).field_0x91 = uVar25;
    pFVar41->Score = fVar26;
    *(undefined4 *)&pFVar41->field_0xac = uVar27;
    (pFVar42->ID).A = uVar28;
    (pFVar42->ID).B = uVar29;
    (pFVar42->ID).C = uVar30;
    (pFVar42->ID).D = uVar31;
    (pFVar42->Value)._padding_ = lVar1;
    (pFVar42->Value)._padding_ = lVar6;
    (pFVar42->Value)._padding_ = lVar7;
    (pFVar42->Value)._padding_ = lVar8;
    (pFVar42->Value)._padding_ = lVar9;
    (pFVar42->Value)._padding_ = lVar10;
    (pFVar42->Value)._padding_ = lVar11;
    (pFVar42->Value)._padding_ = lVar12;
    (pFVar42->Value)._padding_ = lVar13;
    (pFVar42->Value)._padding_ = lVar14;
    (pFVar42->Value)._padding_ = lVar15;
    (pFVar42->Value)._padding_ = lVar16;
    (pFVar42->Value)._padding_ = lVar17;
    (pFVar42->Value)._padding_ = lVar18;
    (pFVar42->Value)._padding_ = lVar19;
    (pFVar42->Value)._padding_ = lVar20;
    iVar38 = iVar40 * 2 + 1;
    (pFVar42->Value)._padding_ = lVar21;
    (pFVar42->Value)._padding_ = lVar22;
    (pFVar42->Value).TypeIndex = uVar32;
    *(undefined7 *)&(pFVar42->Value).field_0x91 = uVar33;
    pFVar42->Score = fVar34;
    *(undefined4 *)&pFVar42->field_0xac = uVar35;
    iVar37 = iVar40;
  } while( true );
}

// InplaceBidirectionalVertexSetDifference<FMetasoundFrontendVertex,FMetasoundFrontendClassInput> @ 14ae51da0

void __cdecl
Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::
InplaceBidirectionalVertexSetDifference<FMetasoundFrontendVertex,FMetasoundFrontendClassInput>
          (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendClassInput_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar9 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar8 = (longlong)(int)uVar9;
    lVar10 = lVar8 * 8;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (pFVar1 != pFVar1 + (longlong)param_2->ArrayNum * 8) {
        pFVar7 = pFVar1;
        do {
          if (**(longlong **)pFVar7 == **(longlong **)((param_1->AllocatorInstance).Data + lVar10))
          {
            uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
            if (uVar6 != 0xffffffff) {
              uVar4 = 0;
              if ((int)uVar9 < param_1->ArrayNum) {
                uVar4 = uVar11;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (param_1->AllocatorInstance).Data + lVar8 * 8;
              iVar5 = param_1->ArrayNum + ~uVar9;
              if (iVar5 != 0) {
                memmove(pFVar1,pFVar1 + 8,(longlong)iVar5 << 3);
              }
              param_1->ArrayNum = param_1->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
              uVar11 = 0;
              if ((int)uVar6 < param_2->ArrayNum) {
                uVar11 = ~uVar6 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
              iVar5 = param_2->ArrayNum + ~uVar6;
              if (iVar5 != 0) {
                memmove(pFVar1,pFVar1 + 8,(longlong)iVar5 << 3);
              }
              param_2->ArrayNum = param_2->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
            }
            break;
          }
          pFVar7 = pFVar7 + 8;
        } while (pFVar7 != pFVar1 + (longlong)param_2->ArrayNum * 8);
      }
      lVar8 = lVar8 + -1;
      lVar10 = lVar10 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// InplaceBidirectionalVertexSetDifference<FMetasoundFrontendVertex,FMetasoundFrontendClassOutput> @ 14ae51fc0

void __cdecl
Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::
InplaceBidirectionalVertexSetDifference<FMetasoundFrontendVertex,FMetasoundFrontendClassOutput>
          (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendClassOutput_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar9 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar8 = (longlong)(int)uVar9;
    lVar10 = lVar8 * 8;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (pFVar1 != pFVar1 + (longlong)param_2->ArrayNum * 8) {
        pFVar7 = pFVar1;
        do {
          if (**(longlong **)pFVar7 == **(longlong **)((param_1->AllocatorInstance).Data + lVar10))
          {
            uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
            if (uVar6 != 0xffffffff) {
              uVar4 = 0;
              if ((int)uVar9 < param_1->ArrayNum) {
                uVar4 = uVar11;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (param_1->AllocatorInstance).Data + lVar8 * 8;
              iVar5 = param_1->ArrayNum + ~uVar9;
              if (iVar5 != 0) {
                memmove(pFVar1,pFVar1 + 8,(longlong)iVar5 << 3);
              }
              param_1->ArrayNum = param_1->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
              uVar11 = 0;
              if ((int)uVar6 < param_2->ArrayNum) {
                uVar11 = ~uVar6 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
              iVar5 = param_2->ArrayNum + ~uVar6;
              if (iVar5 != 0) {
                memmove(pFVar1,pFVar1 + 8,(longlong)iVar5 << 3);
              }
              param_2->ArrayNum = param_2->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
            }
            break;
          }
          pFVar7 = pFVar7 + 8;
        } while (pFVar7 != pFVar1 + (longlong)param_2->ArrayNum * 8);
      }
      lVar8 = lVar8 + -1;
      lVar10 = lVar10 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// IntroSortInternal<Metasound::Frontend::INodeTemplate_const_*,int,FIdentityFunctor,`Metasound::Frontend::FNodeTemplateRegistry::FindTemplate'::__l5::<lambda_1>_> @ 14ae521e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::Frontend::INodeTemplate_const_*,int,FIdentityFunctor,_Metasound::Frontend::FNodeTemplateRegistry::FindTemplate_::__l5::<lambda_1>_>
          (INodeTemplate **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  INodeTemplate *pIVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  INodeTemplate **ppIVar6;
  INodeTemplate **ppIVar7;
  INodeTemplate **ppIVar8;
  INodeTemplate **ppIVar9;
  INodeTemplate **ppIVar10;
  float fVar11;
  undefined1 auStack_398 [32];
  <lambda_1> local_378;
  INodeTemplate ***local_370;
  int local_368;
  INodeTemplate **local_350;
  INodeTemplate **local_348;
  INodeTemplate **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_378 = param_4;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    local_370 = &local_348;
    do {
      ppIVar8 = local_370[1];
      ppIVar7 = *local_370;
      local_350 = local_370[2];
      iVar3 = (int)((longlong)ppIVar8 - (longlong)ppIVar7 >> 3) + 1;
      local_368 = (int)local_350;
      ppIVar6 = ppIVar7;
      if ((int)local_350 != 0) {
LAB_14ae522b0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppIVar9 = ppIVar8 + 1;
          pIVar1 = ppIVar6[iVar3 >> 1];
          ppIVar6[iVar3 >> 1] = *ppIVar6;
          *ppIVar6 = pIVar1;
          ppIVar7 = ppIVar6;
LAB_14ae522e0:
          ppIVar7 = ppIVar7 + 1;
          if (ppIVar7 <= ppIVar8) goto code_r0x00014ae522e9;
          goto LAB_14ae52316;
        }
        for (; ppIVar9 = ppIVar6, ppIVar7 = ppIVar6, ppIVar6 < ppIVar8; ppIVar8 = ppIVar8 + -1) {
          while (ppIVar10 = ppIVar9, ppIVar7 = ppIVar7 + 1, ppIVar7 <= ppIVar8) {
            pIVar1 = *ppIVar10;
            piVar4 = (int *)(**(code **)((longlong)**ppIVar7 + 0x48))();
            piVar5 = (int *)(**(code **)((longlong)*pIVar1 + 0x48))(pIVar1);
            if (*piVar5 < *piVar4) {
              bVar2 = true;
            }
            else if (*piVar5 == *piVar4) {
              bVar2 = piVar5[1] < piVar4[1];
            }
            else {
              bVar2 = false;
            }
            ppIVar9 = ppIVar7;
            if (!bVar2) {
              ppIVar9 = ppIVar10;
            }
          }
          pIVar1 = *ppIVar10;
          *ppIVar10 = *ppIVar8;
          *ppIVar8 = pIVar1;
          param_4 = local_378;
        }
        goto LAB_14ae52415;
      }
LAB_14ae523fe:
      HeapSortInternal<Metasound::Frontend::INodeTemplate_const_*,int,FIdentityFunctor,_Metasound::Frontend::FNodeTemplateRegistry::FindTemplate_::__l5::<lambda_1>_>
                (ppIVar7,iVar3,param_3,param_4);
LAB_14ae52415:
      local_370 = local_370 + -3;
    } while (&local_348 <= local_370);
  }
  return;
code_r0x00014ae522e9:
  pIVar1 = *ppIVar6;
  piVar4 = (int *)(**(code **)((longlong)**ppIVar7 + 0x48))();
  piVar5 = (int *)(**(code **)((longlong)*pIVar1 + 0x48))(pIVar1);
  if ((*piVar4 <= *piVar5) && ((*piVar5 != *piVar4 || (piVar4[1] <= piVar5[1]))))
  goto LAB_14ae522e0;
LAB_14ae52316:
  while (ppIVar10 = ppIVar9, ppIVar9 = ppIVar10 + -1, ppIVar6 < ppIVar9) {
    pIVar1 = *ppIVar9;
    piVar4 = (int *)(**(code **)((longlong)**ppIVar6 + 0x48))();
    piVar5 = (int *)(**(code **)((longlong)*pIVar1 + 0x48))(pIVar1);
    if ((*piVar5 < *piVar4) || ((*piVar5 == *piVar4 && (piVar5[1] < piVar4[1])))) break;
  }
  if (ppIVar7 <= ppIVar9) {
    pIVar1 = *ppIVar7;
    *ppIVar7 = *ppIVar9;
    *ppIVar9 = pIVar1;
    goto LAB_14ae522e0;
  }
  pIVar1 = *ppIVar6;
  *ppIVar6 = *ppIVar9;
  local_368 = local_368 + -1;
  *ppIVar9 = pIVar1;
  if ((longlong)((longlong)ppIVar9 + (-8 - (longlong)ppIVar6) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppIVar8 - (longlong)ppIVar7 & 0xfffffffffffffff8U)) {
    if (ppIVar7 < ppIVar8) {
      *local_370 = ppIVar7;
      local_370[1] = ppIVar8;
      *(int *)(local_370 + 2) = local_368;
      local_370 = local_370 + 3;
    }
    if (ppIVar9 <= ppIVar6 + 1) goto LAB_14ae52415;
    ppIVar8 = ppIVar10 + -2;
    ppIVar7 = ppIVar6;
  }
  else {
    if (ppIVar6 + 1 < ppIVar9) {
      *local_370 = ppIVar6;
      local_370[1] = ppIVar10 + -2;
      *(int *)(local_370 + 2) = local_368;
      local_370 = local_370 + 3;
    }
    if (ppIVar8 <= ppIVar7) goto LAB_14ae52415;
  }
  iVar3 = (int)((longlong)ppIVar8 - (longlong)ppIVar7 >> 3) + 1;
  ppIVar6 = ppIVar7;
  if (local_368 == 0) goto LAB_14ae523fe;
  goto LAB_14ae522b0;
}

// IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,`Metasound::FrontendQueryPrivate::Difference'::__l2::<lambda_1>_>_> @ 14ae52510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::Difference_::__l2::<lambda_1>_>_>
          (FFrontendQueryEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::FFrontendQueryEntry,,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FrontendQueryPrivate::Difference(TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  FFrontendQueryEntry *pFVar25;
  int iVar26;
  uint uVar27;
  undefined7 uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uchar uVar34;
  undefined7 uVar35;
  float fVar36;
  undefined4 uVar37;
  bool bVar38;
  int iVar39;
  longlong lVar40;
  FFrontendQueryEntry *pFVar41;
  FFrontendQueryEntry *pFVar42;
  FFrontendQueryEntry *pFVar43;
  FFrontendQueryEntry *pFVar44;
  FFrontendQueryEntry **ppFVar45;
  FFrontendQueryEntry *pFVar46;
  int iVar47;
  float fVar48;
  undefined1 auStackY_458 [32];
  FIdentityFunctor local_428 [8];
  TDereferenceWrapper<Metasound::FFrontendQueryEntry,,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FrontendQueryPrivate::Difference(TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&)_::_2_::<lambda_1>_>
  local_420;
  TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FrontendQueryPrivate::Difference(TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&)_::_2_::<lambda_1>_>_>
  local_418 [3];
  FFrontendQueryEntry *local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  longlong local_3e8;
  longlong lStack_3e0;
  longlong local_3d8;
  longlong lStack_3d0;
  longlong local_3c8;
  longlong lStack_3c0;
  longlong local_3b8;
  longlong lStack_3b0;
  longlong local_3a8;
  longlong lStack_3a0;
  longlong local_398;
  longlong lStack_390;
  longlong local_388;
  longlong lStack_380;
  longlong local_378;
  longlong lStack_370;
  longlong local_368;
  longlong lStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  FFrontendQueryEntry *local_348;
  FFrontendQueryEntry *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar48 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar48;
    memset(local_330,0,0x2e8);
    ppFVar45 = &local_348;
    do {
      pFVar44 = ppFVar45[1];
      local_400 = ppFVar45[2];
      iVar47 = (int)(((longlong)pFVar44 - (longlong)*ppFVar45) / 0xb0);
      pFVar25 = *ppFVar45;
      iVar39 = (int)local_400;
joined_r0x00014ae525ec:
      iVar26 = iVar47 + 1;
      if (iVar39 != 0) {
        if (8 < iVar26) {
          pFVar41 = pFVar44 + 1;
          pFVar46 = pFVar25 + iVar26 / 2;
          uVar30 = (pFVar46->ID).A;
          uVar31 = (pFVar46->ID).B;
          uVar32 = (pFVar46->ID).C;
          uVar33 = (pFVar46->ID).D;
          lVar40 = (pFVar46->Value)._padding_;
          lVar5 = (pFVar46->Value)._padding_;
          lVar6 = (pFVar46->Value)._padding_;
          lVar7 = (pFVar46->Value)._padding_;
          lVar8 = (pFVar46->Value)._padding_;
          lVar9 = (pFVar46->Value)._padding_;
          lVar10 = (pFVar46->Value)._padding_;
          lVar11 = (pFVar46->Value)._padding_;
          lVar12 = (pFVar46->Value)._padding_;
          lVar13 = (pFVar46->Value)._padding_;
          lVar14 = (pFVar46->Value)._padding_;
          lVar15 = (pFVar46->Value)._padding_;
          lVar16 = (pFVar46->Value)._padding_;
          lVar17 = (pFVar46->Value)._padding_;
          lVar18 = (pFVar46->Value)._padding_;
          lVar19 = (pFVar46->Value)._padding_;
          lVar20 = (pFVar46->Value)._padding_;
          lVar21 = (pFVar46->Value)._padding_;
          uVar34 = (pFVar46->Value).TypeIndex;
          uVar35 = *(undefined7 *)&(pFVar46->Value).field_0x91;
          fVar36 = pFVar46->Score;
          uVar37 = *(undefined4 *)&pFVar46->field_0xac;
          uVar2 = (pFVar25->ID).B;
          uVar3 = (pFVar25->ID).C;
          uVar27 = (pFVar25->ID).D;
          (pFVar46->ID).A = (pFVar25->ID).A;
          (pFVar46->ID).B = uVar2;
          (pFVar46->ID).C = uVar3;
          (pFVar46->ID).D = uVar27;
          lVar22 = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = lVar22;
          lVar22 = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = lVar22;
          lVar22 = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = lVar22;
          lVar22 = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = lVar22;
          lVar22 = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = lVar22;
          lVar22 = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = lVar22;
          lVar22 = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = lVar22;
          lVar22 = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = lVar22;
          lVar22 = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = (pFVar25->Value)._padding_;
          (pFVar46->Value)._padding_ = lVar22;
          uVar28 = *(undefined7 *)&(pFVar25->Value).field_0x91;
          fVar48 = pFVar25->Score;
          uVar29 = *(undefined4 *)&pFVar25->field_0xac;
          (pFVar46->Value).TypeIndex = (pFVar25->Value).TypeIndex;
          *(undefined7 *)&(pFVar46->Value).field_0x91 = uVar28;
          pFVar46->Score = fVar48;
          *(undefined4 *)&pFVar46->field_0xac = uVar29;
          (pFVar25->ID).A = uVar30;
          (pFVar25->ID).B = uVar31;
          (pFVar25->ID).C = uVar32;
          (pFVar25->ID).D = uVar33;
          (pFVar25->Value)._padding_ = lVar40;
          (pFVar25->Value)._padding_ = lVar5;
          (pFVar25->Value)._padding_ = lVar6;
          (pFVar25->Value)._padding_ = lVar7;
          (pFVar25->Value)._padding_ = lVar8;
          (pFVar25->Value)._padding_ = lVar9;
          (pFVar25->Value)._padding_ = lVar10;
          (pFVar25->Value)._padding_ = lVar11;
          (pFVar25->Value)._padding_ = lVar12;
          (pFVar25->Value)._padding_ = lVar13;
          (pFVar25->Value)._padding_ = lVar14;
          (pFVar25->Value)._padding_ = lVar15;
          (pFVar25->Value)._padding_ = lVar16;
          (pFVar25->Value)._padding_ = lVar17;
          (pFVar25->Value)._padding_ = lVar18;
          (pFVar25->Value)._padding_ = lVar19;
          (pFVar25->Value)._padding_ = lVar20;
          (pFVar25->Value)._padding_ = lVar21;
          (pFVar25->Value).TypeIndex = uVar34;
          *(undefined7 *)&(pFVar25->Value).field_0x91 = uVar35;
          pFVar25->Score = fVar36;
          *(undefined4 *)&pFVar25->field_0xac = uVar37;
          pFVar46 = pFVar25;
LAB_14ae52773:
          pFVar43 = pFVar46;
          pFVar46 = pFVar43 + 1;
          if ((pFVar46 <= pFVar44) &&
             (uVar2 = (pFVar46->ID).A, uVar3 = (pFVar25->ID).A, uVar2 <= uVar3))
          goto code_r0x00014ae52787;
          goto LAB_14ae527b0;
        }
        for (; pFVar41 = pFVar25, pFVar46 = pFVar25, pFVar25 < pFVar44; pFVar44 = pFVar44 + -1) {
          while (pFVar43 = pFVar41, pFVar41 = pFVar46 + 1, pFVar41 <= pFVar44) {
            uVar2 = (pFVar41->ID).A;
            uVar3 = (pFVar43->ID).A;
            if (uVar3 < uVar2) {
              bVar38 = true;
            }
            else if (uVar2 < uVar3) {
              bVar38 = false;
            }
            else {
              uVar2 = pFVar46[1].ID.B;
              uVar3 = (pFVar43->ID).B;
              if (uVar3 < uVar2) {
                bVar38 = true;
              }
              else if (uVar2 < uVar3) {
                bVar38 = false;
              }
              else {
                uVar2 = pFVar46[1].ID.C;
                uVar3 = (pFVar43->ID).C;
                if (uVar3 < uVar2) {
                  bVar38 = true;
                }
                else if (uVar2 < uVar3) {
                  bVar38 = false;
                }
                else {
                  bVar38 = (pFVar43->ID).D < pFVar46[1].ID.D;
                }
              }
            }
            pFVar46 = pFVar41;
            if (!bVar38) {
              pFVar41 = pFVar43;
            }
          }
          local_3f8._0_4_ = (pFVar43->ID).A;
          local_3f8._4_4_ = (pFVar43->ID).B;
          uStack_3f0._0_4_ = (pFVar43->ID).C;
          uStack_3f0._4_4_ = (pFVar43->ID).D;
          local_3e8 = (pFVar43->Value)._padding_;
          lStack_3e0 = (pFVar43->Value)._padding_;
          local_3d8 = (pFVar43->Value)._padding_;
          lStack_3d0 = (pFVar43->Value)._padding_;
          local_3c8 = (pFVar43->Value)._padding_;
          lStack_3c0 = (pFVar43->Value)._padding_;
          local_3b8 = (pFVar43->Value)._padding_;
          lStack_3b0 = (pFVar43->Value)._padding_;
          local_3a8 = (pFVar43->Value)._padding_;
          lStack_3a0 = (pFVar43->Value)._padding_;
          local_398 = (pFVar43->Value)._padding_;
          lStack_390 = (pFVar43->Value)._padding_;
          local_388 = (pFVar43->Value)._padding_;
          lStack_380 = (pFVar43->Value)._padding_;
          local_378 = (pFVar43->Value)._padding_;
          lStack_370 = (pFVar43->Value)._padding_;
          local_368 = (pFVar43->Value)._padding_;
          lStack_360 = (pFVar43->Value)._padding_;
          local_358 = *(undefined8 *)&(pFVar43->Value).TypeIndex;
          uStack_350 = *(undefined8 *)&pFVar43->Score;
          uVar2 = (pFVar44->ID).B;
          uVar3 = (pFVar44->ID).C;
          uVar27 = (pFVar44->ID).D;
          (pFVar43->ID).A = (pFVar44->ID).A;
          (pFVar43->ID).B = uVar2;
          (pFVar43->ID).C = uVar3;
          (pFVar43->ID).D = uVar27;
          lVar40 = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = lVar40;
          lVar40 = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = lVar40;
          lVar40 = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = lVar40;
          lVar40 = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = lVar40;
          lVar40 = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = lVar40;
          lVar40 = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = lVar40;
          lVar40 = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = lVar40;
          lVar40 = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = lVar40;
          lVar40 = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = (pFVar44->Value)._padding_;
          (pFVar43->Value)._padding_ = lVar40;
          uVar28 = *(undefined7 *)&(pFVar44->Value).field_0x91;
          fVar48 = pFVar44->Score;
          uVar29 = *(undefined4 *)&pFVar44->field_0xac;
          (pFVar43->Value).TypeIndex = (pFVar44->Value).TypeIndex;
          *(undefined7 *)&(pFVar43->Value).field_0x91 = uVar28;
          pFVar43->Score = fVar48;
          *(undefined4 *)&pFVar43->field_0xac = uVar29;
          (pFVar44->ID).A = (undefined4)local_3f8;
          (pFVar44->ID).B = local_3f8._4_4_;
          (pFVar44->ID).C = (undefined4)uStack_3f0;
          (pFVar44->ID).D = uStack_3f0._4_4_;
          (pFVar44->Value)._padding_ = local_3e8;
          (pFVar44->Value)._padding_ = lStack_3e0;
          (pFVar44->Value)._padding_ = local_3d8;
          (pFVar44->Value)._padding_ = lStack_3d0;
          (pFVar44->Value)._padding_ = local_3c8;
          (pFVar44->Value)._padding_ = lStack_3c0;
          (pFVar44->Value)._padding_ = local_3b8;
          (pFVar44->Value)._padding_ = lStack_3b0;
          (pFVar44->Value)._padding_ = local_3a8;
          (pFVar44->Value)._padding_ = lStack_3a0;
          (pFVar44->Value)._padding_ = local_398;
          (pFVar44->Value)._padding_ = lStack_390;
          (pFVar44->Value)._padding_ = local_388;
          (pFVar44->Value)._padding_ = lStack_380;
          (pFVar44->Value)._padding_ = local_378;
          (pFVar44->Value)._padding_ = lStack_370;
          (pFVar44->Value)._padding_ = local_368;
          (pFVar44->Value)._padding_ = lStack_360;
          *(undefined8 *)&(pFVar44->Value).TypeIndex = local_358;
          *(undefined8 *)&pFVar44->Score = uStack_350;
        }
        goto LAB_14ae52f9b;
      }
      local_428[0] = param_3;
      local_420.Predicate = param_4.Predicate;
      if (iVar26 < 0) {
        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar38) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_14ae52dcf:
        local_418[0].Predicate = &local_420;
        HeapifyInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::Difference_::__l2::<lambda_1>_>_>_>
                  (pFVar25,iVar26,param_3,&local_420);
        if (0 < iVar47) {
          lVar40 = (longlong)iVar47 * 0xb0;
          do {
            local_3f8._0_4_ = (pFVar25->ID).A;
            local_3f8._4_4_ = (pFVar25->ID).B;
            uStack_3f0._0_4_ = (pFVar25->ID).C;
            uStack_3f0._4_4_ = (pFVar25->ID).D;
            puVar1 = (undefined8 *)((longlong)&(pFVar25->ID).A + lVar40);
            local_3e8 = (pFVar25->Value)._padding_;
            lStack_3e0 = (pFVar25->Value)._padding_;
            local_3d8 = (pFVar25->Value)._padding_;
            lStack_3d0 = (pFVar25->Value)._padding_;
            local_3c8 = (pFVar25->Value)._padding_;
            lStack_3c0 = (pFVar25->Value)._padding_;
            local_3b8 = (pFVar25->Value)._padding_;
            lStack_3b0 = (pFVar25->Value)._padding_;
            local_3a8 = (pFVar25->Value)._padding_;
            lStack_3a0 = (pFVar25->Value)._padding_;
            local_398 = (pFVar25->Value)._padding_;
            lStack_390 = (pFVar25->Value)._padding_;
            local_388 = (pFVar25->Value)._padding_;
            lStack_380 = (pFVar25->Value)._padding_;
            local_378 = (pFVar25->Value)._padding_;
            lStack_370 = (pFVar25->Value)._padding_;
            local_368 = (pFVar25->Value)._padding_;
            lStack_360 = (pFVar25->Value)._padding_;
            local_358 = *(undefined8 *)&(pFVar25->Value).TypeIndex;
            uStack_350 = *(undefined8 *)&pFVar25->Score;
            uVar23 = *puVar1;
            uVar24 = puVar1[1];
            (pFVar25->ID).A = (int)uVar23;
            (pFVar25->ID).B = (int)((ulonglong)uVar23 >> 0x20);
            (pFVar25->ID).C = (int)uVar24;
            (pFVar25->ID).D = (int)((ulonglong)uVar24 >> 0x20);
            lVar5 = puVar1[3];
            (pFVar25->Value)._padding_ = puVar1[2];
            (pFVar25->Value)._padding_ = lVar5;
            lVar5 = puVar1[5];
            (pFVar25->Value)._padding_ = puVar1[4];
            (pFVar25->Value)._padding_ = lVar5;
            lVar5 = puVar1[7];
            (pFVar25->Value)._padding_ = puVar1[6];
            (pFVar25->Value)._padding_ = lVar5;
            lVar5 = puVar1[9];
            (pFVar25->Value)._padding_ = puVar1[8];
            (pFVar25->Value)._padding_ = lVar5;
            lVar5 = puVar1[0xb];
            (pFVar25->Value)._padding_ = puVar1[10];
            (pFVar25->Value)._padding_ = lVar5;
            lVar5 = puVar1[0xd];
            (pFVar25->Value)._padding_ = puVar1[0xc];
            (pFVar25->Value)._padding_ = lVar5;
            lVar5 = puVar1[0xf];
            (pFVar25->Value)._padding_ = puVar1[0xe];
            (pFVar25->Value)._padding_ = lVar5;
            lVar5 = puVar1[0x11];
            (pFVar25->Value)._padding_ = puVar1[0x10];
            (pFVar25->Value)._padding_ = lVar5;
            lVar5 = puVar1[0x13];
            (pFVar25->Value)._padding_ = puVar1[0x12];
            (pFVar25->Value)._padding_ = lVar5;
            uVar23 = puVar1[0x15];
            *(undefined8 *)&(pFVar25->Value).TypeIndex = puVar1[0x14];
            *(undefined8 *)&pFVar25->Score = uVar23;
            *puVar1 = local_3f8;
            puVar1[1] = uStack_3f0;
            puVar1[2] = local_3e8;
            puVar1[3] = lStack_3e0;
            puVar1[4] = local_3d8;
            puVar1[5] = lStack_3d0;
            puVar1[6] = local_3c8;
            puVar1[7] = lStack_3c0;
            puVar1[8] = local_3b8;
            puVar1[9] = lStack_3b0;
            puVar1[10] = local_3a8;
            puVar1[0xb] = lStack_3a0;
            puVar1[0xc] = local_398;
            puVar1[0xd] = lStack_390;
            puVar1[0xe] = local_388;
            puVar1[0xf] = lStack_380;
            puVar1[0x10] = local_378;
            puVar1[0x11] = lStack_370;
            puVar1[0x12] = local_368;
            puVar1[0x13] = lStack_360;
            puVar1[0x14] = local_358;
            puVar1[0x15] = uStack_350;
            HeapSiftDown<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::Difference_::__l2::<lambda_1>_>_>_>
                      (pFVar25,0,iVar47,local_428,local_418);
            iVar47 = iVar47 + -1;
            lVar40 = lVar40 + -0xb0;
          } while (0 < iVar47);
        }
      }
      else if (iVar26 != 0) goto LAB_14ae52dcf;
LAB_14ae52f9b:
      ppFVar45 = ppFVar45 + -3;
    } while (&local_348 <= ppFVar45);
  }
  return;
code_r0x00014ae52787:
  if ((uVar3 != uVar2) ||
     ((uVar2 = pFVar43[1].ID.B, uVar3 = (pFVar25->ID).B, uVar2 <= uVar3 &&
      ((uVar3 != uVar2 ||
       ((uVar2 = pFVar43[1].ID.C, uVar3 = (pFVar25->ID).C, uVar2 <= uVar3 &&
        ((uVar3 != uVar2 || (pFVar43[1].ID.D <= (pFVar25->ID).D)))))))))) goto LAB_14ae52773;
LAB_14ae527b0:
  do {
    pFVar42 = pFVar41;
    pFVar41 = pFVar42 + -1;
    if ((pFVar41 <= pFVar25) || (uVar2 = (pFVar25->ID).A, uVar3 = (pFVar41->ID).A, uVar3 < uVar2))
    break;
  } while ((uVar3 != uVar2) ||
          ((uVar2 = (pFVar25->ID).B, uVar3 = pFVar42[-1].ID.B, uVar2 <= uVar3 &&
           ((uVar3 != uVar2 ||
            ((uVar2 = (pFVar25->ID).C, uVar3 = pFVar42[-1].ID.C, uVar2 <= uVar3 &&
             ((uVar3 != uVar2 || ((pFVar25->ID).D <= pFVar42[-1].ID.D))))))))));
  if (pFVar46 <= pFVar41) {
    uVar30 = (pFVar46->ID).A;
    uVar31 = (pFVar46->ID).B;
    uVar32 = pFVar43[1].ID.C;
    uVar33 = pFVar43[1].ID.D;
    lVar40 = pFVar43[1].Value._padding_;
    lVar5 = pFVar43[1].Value._padding_;
    lVar6 = pFVar43[1].Value._padding_;
    lVar7 = pFVar43[1].Value._padding_;
    lVar8 = pFVar43[1].Value._padding_;
    lVar9 = pFVar43[1].Value._padding_;
    lVar10 = pFVar43[1].Value._padding_;
    lVar11 = pFVar43[1].Value._padding_;
    lVar12 = pFVar43[1].Value._padding_;
    lVar13 = pFVar43[1].Value._padding_;
    lVar14 = pFVar43[1].Value._padding_;
    lVar15 = pFVar43[1].Value._padding_;
    lVar16 = pFVar43[1].Value._padding_;
    lVar17 = pFVar43[1].Value._padding_;
    lVar18 = pFVar43[1].Value._padding_;
    lVar19 = pFVar43[1].Value._padding_;
    lVar20 = pFVar43[1].Value._padding_;
    lVar21 = pFVar43[1].Value._padding_;
    uVar34 = pFVar43[1].Value.TypeIndex;
    uVar35 = *(undefined7 *)&pFVar43[1].Value.field_0x91;
    fVar36 = pFVar43[1].Score;
    uVar37 = *(undefined4 *)&pFVar43[1].field_0xac;
    uVar2 = (pFVar41->ID).B;
    uVar3 = pFVar42[-1].ID.C;
    uVar27 = pFVar42[-1].ID.D;
    (pFVar46->ID).A = (pFVar41->ID).A;
    (pFVar46->ID).B = uVar2;
    pFVar43[1].ID.C = uVar3;
    pFVar43[1].ID.D = uVar27;
    lVar22 = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = lVar22;
    lVar22 = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = lVar22;
    lVar22 = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = lVar22;
    lVar22 = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = lVar22;
    lVar22 = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = lVar22;
    lVar22 = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = lVar22;
    lVar22 = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = lVar22;
    lVar22 = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = lVar22;
    lVar22 = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = pFVar42[-1].Value._padding_;
    pFVar43[1].Value._padding_ = lVar22;
    uVar28 = *(undefined7 *)&pFVar42[-1].Value.field_0x91;
    fVar48 = pFVar42[-1].Score;
    uVar29 = *(undefined4 *)&pFVar42[-1].field_0xac;
    pFVar43[1].Value.TypeIndex = pFVar42[-1].Value.TypeIndex;
    *(undefined7 *)&pFVar43[1].Value.field_0x91 = uVar28;
    pFVar43[1].Score = fVar48;
    *(undefined4 *)&pFVar43[1].field_0xac = uVar29;
    (pFVar41->ID).A = uVar30;
    (pFVar41->ID).B = uVar31;
    pFVar42[-1].ID.C = uVar32;
    pFVar42[-1].ID.D = uVar33;
    pFVar42[-1].Value._padding_ = lVar40;
    pFVar42[-1].Value._padding_ = lVar5;
    pFVar42[-1].Value._padding_ = lVar6;
    pFVar42[-1].Value._padding_ = lVar7;
    pFVar42[-1].Value._padding_ = lVar8;
    pFVar42[-1].Value._padding_ = lVar9;
    pFVar42[-1].Value._padding_ = lVar10;
    pFVar42[-1].Value._padding_ = lVar11;
    pFVar42[-1].Value._padding_ = lVar12;
    pFVar42[-1].Value._padding_ = lVar13;
    pFVar42[-1].Value._padding_ = lVar14;
    pFVar42[-1].Value._padding_ = lVar15;
    pFVar42[-1].Value._padding_ = lVar16;
    pFVar42[-1].Value._padding_ = lVar17;
    pFVar42[-1].Value._padding_ = lVar18;
    pFVar42[-1].Value._padding_ = lVar19;
    pFVar42[-1].Value._padding_ = lVar20;
    pFVar42[-1].Value._padding_ = lVar21;
    pFVar42[-1].Value.TypeIndex = uVar34;
    *(undefined7 *)&pFVar42[-1].Value.field_0x91 = uVar35;
    pFVar42[-1].Score = fVar36;
    *(undefined4 *)&pFVar42[-1].field_0xac = uVar37;
    goto LAB_14ae52773;
  }
  local_3f8._0_4_ = (pFVar25->ID).A;
  local_3f8._4_4_ = (pFVar25->ID).B;
  uStack_3f0._0_4_ = (pFVar25->ID).C;
  uStack_3f0._4_4_ = (pFVar25->ID).D;
  iVar39 = iVar39 + -1;
  local_3e8 = (pFVar25->Value)._padding_;
  lStack_3e0 = (pFVar25->Value)._padding_;
  local_3d8 = (pFVar25->Value)._padding_;
  lStack_3d0 = (pFVar25->Value)._padding_;
  local_3c8 = (pFVar25->Value)._padding_;
  lStack_3c0 = (pFVar25->Value)._padding_;
  local_3b8 = (pFVar25->Value)._padding_;
  lStack_3b0 = (pFVar25->Value)._padding_;
  local_3a8 = (pFVar25->Value)._padding_;
  lStack_3a0 = (pFVar25->Value)._padding_;
  local_398 = (pFVar25->Value)._padding_;
  lStack_390 = (pFVar25->Value)._padding_;
  local_388 = (pFVar25->Value)._padding_;
  lStack_380 = (pFVar25->Value)._padding_;
  local_378 = (pFVar25->Value)._padding_;
  lStack_370 = (pFVar25->Value)._padding_;
  local_368 = (pFVar25->Value)._padding_;
  lStack_360 = (pFVar25->Value)._padding_;
  local_358 = *(undefined8 *)&(pFVar25->Value).TypeIndex;
  uStack_350 = *(undefined8 *)&pFVar25->Score;
  uVar2 = (pFVar41->ID).B;
  uVar3 = pFVar42[-1].ID.C;
  uVar27 = pFVar42[-1].ID.D;
  (pFVar25->ID).A = (pFVar41->ID).A;
  (pFVar25->ID).B = uVar2;
  (pFVar25->ID).C = uVar3;
  (pFVar25->ID).D = uVar27;
  lVar40 = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = lVar40;
  lVar40 = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = lVar40;
  lVar40 = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = lVar40;
  lVar40 = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = lVar40;
  lVar40 = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = lVar40;
  lVar40 = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = lVar40;
  lVar40 = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = lVar40;
  lVar40 = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = lVar40;
  lVar40 = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = pFVar42[-1].Value._padding_;
  (pFVar25->Value)._padding_ = lVar40;
  uVar28 = *(undefined7 *)&pFVar42[-1].Value.field_0x91;
  fVar48 = pFVar42[-1].Score;
  uVar29 = *(undefined4 *)&pFVar42[-1].field_0xac;
  (pFVar25->Value).TypeIndex = pFVar42[-1].Value.TypeIndex;
  *(undefined7 *)&(pFVar25->Value).field_0x91 = uVar28;
  pFVar25->Score = fVar48;
  *(undefined4 *)&pFVar25->field_0xac = uVar29;
  (pFVar41->ID).A = (undefined4)local_3f8;
  (pFVar41->ID).B = local_3f8._4_4_;
  pFVar42[-1].ID.C = (undefined4)uStack_3f0;
  pFVar42[-1].ID.D = uStack_3f0._4_4_;
  pFVar42[-1].Value._padding_ = local_3e8;
  pFVar42[-1].Value._padding_ = lStack_3e0;
  pFVar42[-1].Value._padding_ = local_3d8;
  pFVar42[-1].Value._padding_ = lStack_3d0;
  pFVar42[-1].Value._padding_ = local_3c8;
  pFVar42[-1].Value._padding_ = lStack_3c0;
  pFVar42[-1].Value._padding_ = local_3b8;
  pFVar42[-1].Value._padding_ = lStack_3b0;
  pFVar42[-1].Value._padding_ = local_3a8;
  pFVar42[-1].Value._padding_ = lStack_3a0;
  pFVar42[-1].Value._padding_ = local_398;
  pFVar42[-1].Value._padding_ = lStack_390;
  pFVar42[-1].Value._padding_ = local_388;
  pFVar42[-1].Value._padding_ = lStack_380;
  pFVar42[-1].Value._padding_ = local_378;
  pFVar42[-1].Value._padding_ = lStack_370;
  pFVar42[-1].Value._padding_ = local_368;
  pFVar42[-1].Value._padding_ = lStack_360;
  *(undefined8 *)&pFVar42[-1].Value.TypeIndex = local_358;
  *(undefined8 *)&pFVar42[-1].Score = uStack_350;
  if (((longlong)pFVar41 + (-0xb0 - (longlong)pFVar25)) / 0xb0 <
      ((longlong)pFVar44 - (longlong)pFVar46) / 0xb0) {
    if (pFVar46 < pFVar44) {
      *ppFVar45 = pFVar46;
      ppFVar45[1] = pFVar44;
      *(int *)(ppFVar45 + 2) = iVar39;
      ppFVar45 = ppFVar45 + 3;
    }
    if (pFVar41 <= pFVar25 + 1) goto LAB_14ae52f9b;
    pFVar44 = pFVar42 + -2;
    pFVar46 = pFVar25;
  }
  else {
    if (pFVar25 + 1 < pFVar41) {
      *ppFVar45 = pFVar25;
      ppFVar45[1] = pFVar42 + -2;
      *(int *)(ppFVar45 + 2) = iVar39;
      ppFVar45 = ppFVar45 + 3;
    }
    if (pFVar44 <= pFVar46) goto LAB_14ae52f9b;
  }
  iVar47 = (int)(((longlong)pFVar44 - (longlong)pFVar46) / 0xb0);
  pFVar25 = pFVar46;
  goto joined_r0x00014ae525ec;
}

// IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,`Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute'::__l5::<lambda_1>_>_> @ 14ae53000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute_::__l5::<lambda_1>_>_>
          (FFrontendQueryEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>
          param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined7 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  FFrontendQueryEntry *pFVar10;
  FFrontendQueryEntry *pFVar11;
  FFrontendQueryEntry *pFVar12;
  FFrontendQueryEntry **ppFVar13;
  int iVar14;
  FFrontendQueryEntry *pFVar15;
  FFrontendQueryEntry *pFVar16;
  FFrontendQueryEntry *pFVar17;
  float fVar18;
  undefined1 auStack_438 [48];
  FFrontendQueryEntry *local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  longlong local_3f0;
  longlong lStack_3e8;
  longlong local_3e0;
  longlong lStack_3d8;
  longlong local_3d0;
  longlong lStack_3c8;
  longlong local_3c0;
  longlong lStack_3b8;
  longlong local_3b0;
  longlong lStack_3a8;
  longlong local_3a0;
  longlong lStack_398;
  longlong local_390;
  longlong lStack_388;
  longlong local_380;
  longlong lStack_378;
  longlong local_370;
  longlong lStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  FFrontendQueryEntry *local_348;
  FFrontendQueryEntry *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_438;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    ppFVar13 = &local_348;
    do {
      pFVar17 = ppFVar13[1];
      pFVar16 = *ppFVar13;
      local_408 = ppFVar13[2];
      iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0xb0) + 1;
      pFVar15 = pFVar16;
      iVar14 = (int)local_408;
      if ((int)local_408 != 0) {
LAB_14ae530f0:
        if (8 < iVar9) {
          pFVar10 = pFVar17 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          local_400._0_4_ = (pFVar16->ID).A;
          local_400._4_4_ = (pFVar16->ID).B;
          uStack_3f8._0_4_ = (pFVar16->ID).C;
          uStack_3f8._4_4_ = (pFVar16->ID).D;
          local_3f0 = (pFVar16->Value)._padding_;
          lStack_3e8 = (pFVar16->Value)._padding_;
          local_3e0 = (pFVar16->Value)._padding_;
          lStack_3d8 = (pFVar16->Value)._padding_;
          local_3d0 = (pFVar16->Value)._padding_;
          lStack_3c8 = (pFVar16->Value)._padding_;
          local_3c0 = (pFVar16->Value)._padding_;
          lStack_3b8 = (pFVar16->Value)._padding_;
          local_3b0 = (pFVar16->Value)._padding_;
          lStack_3a8 = (pFVar16->Value)._padding_;
          local_3a0 = (pFVar16->Value)._padding_;
          lStack_398 = (pFVar16->Value)._padding_;
          local_390 = (pFVar16->Value)._padding_;
          lStack_388 = (pFVar16->Value)._padding_;
          local_380 = (pFVar16->Value)._padding_;
          lStack_378 = (pFVar16->Value)._padding_;
          local_370 = (pFVar16->Value)._padding_;
          lStack_368 = (pFVar16->Value)._padding_;
          local_360 = *(undefined8 *)&(pFVar16->Value).TypeIndex;
          uStack_358 = *(undefined8 *)&pFVar16->Score;
          uVar3 = (pFVar15->ID).B;
          uVar4 = (pFVar15->ID).C;
          uVar5 = (pFVar15->ID).D;
          (pFVar16->ID).A = (pFVar15->ID).A;
          (pFVar16->ID).B = uVar3;
          (pFVar16->ID).C = uVar4;
          (pFVar16->ID).D = uVar5;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          uVar6 = *(undefined7 *)&(pFVar15->Value).field_0x91;
          fVar18 = pFVar15->Score;
          uVar7 = *(undefined4 *)&pFVar15->field_0xac;
          (pFVar16->Value).TypeIndex = (pFVar15->Value).TypeIndex;
          *(undefined7 *)&(pFVar16->Value).field_0x91 = uVar6;
          pFVar16->Score = fVar18;
          *(undefined4 *)&pFVar16->field_0xac = uVar7;
          (pFVar15->ID).A = (undefined4)local_400;
          (pFVar15->ID).B = local_400._4_4_;
          (pFVar15->ID).C = (undefined4)uStack_3f8;
          (pFVar15->ID).D = uStack_3f8._4_4_;
          (pFVar15->Value)._padding_ = local_3f0;
          (pFVar15->Value)._padding_ = lStack_3e8;
          (pFVar15->Value)._padding_ = local_3e0;
          (pFVar15->Value)._padding_ = lStack_3d8;
          (pFVar15->Value)._padding_ = local_3d0;
          (pFVar15->Value)._padding_ = lStack_3c8;
          (pFVar15->Value)._padding_ = local_3c0;
          (pFVar15->Value)._padding_ = lStack_3b8;
          (pFVar15->Value)._padding_ = local_3b0;
          (pFVar15->Value)._padding_ = lStack_3a8;
          (pFVar15->Value)._padding_ = local_3a0;
          (pFVar15->Value)._padding_ = lStack_398;
          (pFVar15->Value)._padding_ = local_390;
          (pFVar15->Value)._padding_ = lStack_388;
          (pFVar15->Value)._padding_ = local_380;
          (pFVar15->Value)._padding_ = lStack_378;
          (pFVar15->Value)._padding_ = local_370;
          (pFVar15->Value)._padding_ = lStack_368;
          *(undefined8 *)&(pFVar15->Value).TypeIndex = local_360;
          *(undefined8 *)&pFVar15->Score = uStack_358;
          pFVar16 = pFVar15;
LAB_14ae53270:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar17) goto code_r0x00014ae5327c;
          goto LAB_14ae53293;
        }
        for (; pFVar10 = pFVar15, pFVar16 = pFVar15, pFVar15 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar12 = pFVar10, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar17) {
            plVar1 = *(longlong **)&(param_4.Predicate)->__this->field_0x8;
            cVar8 = (**(code **)(*plVar1 + 8))(plVar1,pFVar12,pFVar16);
            pFVar10 = pFVar16;
            if (cVar8 == '\0') {
              pFVar10 = pFVar12;
            }
          }
          local_400._0_4_ = (pFVar12->ID).A;
          local_400._4_4_ = (pFVar12->ID).B;
          uStack_3f8._0_4_ = (pFVar12->ID).C;
          uStack_3f8._4_4_ = (pFVar12->ID).D;
          local_3f0 = (pFVar12->Value)._padding_;
          lStack_3e8 = (pFVar12->Value)._padding_;
          local_3e0 = (pFVar12->Value)._padding_;
          lStack_3d8 = (pFVar12->Value)._padding_;
          local_3d0 = (pFVar12->Value)._padding_;
          lStack_3c8 = (pFVar12->Value)._padding_;
          local_3c0 = (pFVar12->Value)._padding_;
          lStack_3b8 = (pFVar12->Value)._padding_;
          local_3b0 = (pFVar12->Value)._padding_;
          lStack_3a8 = (pFVar12->Value)._padding_;
          local_3a0 = (pFVar12->Value)._padding_;
          lStack_398 = (pFVar12->Value)._padding_;
          local_390 = (pFVar12->Value)._padding_;
          lStack_388 = (pFVar12->Value)._padding_;
          local_380 = (pFVar12->Value)._padding_;
          lStack_378 = (pFVar12->Value)._padding_;
          local_370 = (pFVar12->Value)._padding_;
          lStack_368 = (pFVar12->Value)._padding_;
          local_360 = *(undefined8 *)&(pFVar12->Value).TypeIndex;
          uStack_358 = *(undefined8 *)&pFVar12->Score;
          uVar3 = (pFVar17->ID).B;
          uVar4 = (pFVar17->ID).C;
          uVar5 = (pFVar17->ID).D;
          (pFVar12->ID).A = (pFVar17->ID).A;
          (pFVar12->ID).B = uVar3;
          (pFVar12->ID).C = uVar4;
          (pFVar12->ID).D = uVar5;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          uVar6 = *(undefined7 *)&(pFVar17->Value).field_0x91;
          fVar18 = pFVar17->Score;
          uVar7 = *(undefined4 *)&pFVar17->field_0xac;
          (pFVar12->Value).TypeIndex = (pFVar17->Value).TypeIndex;
          *(undefined7 *)&(pFVar12->Value).field_0x91 = uVar6;
          pFVar12->Score = fVar18;
          *(undefined4 *)&pFVar12->field_0xac = uVar7;
          (pFVar17->ID).A = (undefined4)local_400;
          (pFVar17->ID).B = local_400._4_4_;
          (pFVar17->ID).C = (undefined4)uStack_3f8;
          (pFVar17->ID).D = uStack_3f8._4_4_;
          (pFVar17->Value)._padding_ = local_3f0;
          (pFVar17->Value)._padding_ = lStack_3e8;
          (pFVar17->Value)._padding_ = local_3e0;
          (pFVar17->Value)._padding_ = lStack_3d8;
          (pFVar17->Value)._padding_ = local_3d0;
          (pFVar17->Value)._padding_ = lStack_3c8;
          (pFVar17->Value)._padding_ = local_3c0;
          (pFVar17->Value)._padding_ = lStack_3b8;
          (pFVar17->Value)._padding_ = local_3b0;
          (pFVar17->Value)._padding_ = lStack_3a8;
          (pFVar17->Value)._padding_ = local_3a0;
          (pFVar17->Value)._padding_ = lStack_398;
          (pFVar17->Value)._padding_ = local_390;
          (pFVar17->Value)._padding_ = lStack_388;
          (pFVar17->Value)._padding_ = local_380;
          (pFVar17->Value)._padding_ = lStack_378;
          (pFVar17->Value)._padding_ = local_370;
          (pFVar17->Value)._padding_ = lStack_368;
          *(undefined8 *)&(pFVar17->Value).TypeIndex = local_360;
          *(undefined8 *)&pFVar17->Score = uStack_358;
        }
        goto LAB_14ae53644;
      }
LAB_14ae5362b:
      HeapSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute_::__l5::<lambda_1>_>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ae53644:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_348 <= ppFVar13);
  }
  return;
code_r0x00014ae5327c:
  plVar1 = *(longlong **)&(param_4.Predicate)->__this->field_0x8;
  cVar8 = (**(code **)(*plVar1 + 8))(plVar1,pFVar15,pFVar16);
  if (cVar8 == '\0') goto LAB_14ae53270;
LAB_14ae53293:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar15) break;
    plVar1 = *(longlong **)&(param_4.Predicate)->__this->field_0x8;
    cVar8 = (**(code **)(*plVar1 + 8))(plVar1,pFVar10,pFVar15);
  } while (cVar8 == '\0');
  if (pFVar16 <= pFVar10) {
    local_400._0_4_ = (pFVar16->ID).A;
    local_400._4_4_ = (pFVar16->ID).B;
    uStack_3f8._0_4_ = pFVar12[1].ID.C;
    uStack_3f8._4_4_ = pFVar12[1].ID.D;
    local_3f0 = pFVar12[1].Value._padding_;
    lStack_3e8 = pFVar12[1].Value._padding_;
    local_3e0 = pFVar12[1].Value._padding_;
    lStack_3d8 = pFVar12[1].Value._padding_;
    local_3d0 = pFVar12[1].Value._padding_;
    lStack_3c8 = pFVar12[1].Value._padding_;
    local_3c0 = pFVar12[1].Value._padding_;
    lStack_3b8 = pFVar12[1].Value._padding_;
    local_3b0 = pFVar12[1].Value._padding_;
    lStack_3a8 = pFVar12[1].Value._padding_;
    local_3a0 = pFVar12[1].Value._padding_;
    lStack_398 = pFVar12[1].Value._padding_;
    local_390 = pFVar12[1].Value._padding_;
    lStack_388 = pFVar12[1].Value._padding_;
    local_380 = pFVar12[1].Value._padding_;
    lStack_378 = pFVar12[1].Value._padding_;
    local_370 = pFVar12[1].Value._padding_;
    lStack_368 = pFVar12[1].Value._padding_;
    local_360 = *(undefined8 *)&pFVar12[1].Value.TypeIndex;
    uStack_358 = *(undefined8 *)&pFVar12[1].Score;
    uVar3 = (pFVar10->ID).B;
    uVar4 = pFVar11[-1].ID.C;
    uVar5 = pFVar11[-1].ID.D;
    (pFVar16->ID).A = (pFVar10->ID).A;
    (pFVar16->ID).B = uVar3;
    pFVar12[1].ID.C = uVar4;
    pFVar12[1].ID.D = uVar5;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    uVar6 = *(undefined7 *)&pFVar11[-1].Value.field_0x91;
    fVar18 = pFVar11[-1].Score;
    uVar7 = *(undefined4 *)&pFVar11[-1].field_0xac;
    pFVar12[1].Value.TypeIndex = pFVar11[-1].Value.TypeIndex;
    *(undefined7 *)&pFVar12[1].Value.field_0x91 = uVar6;
    pFVar12[1].Score = fVar18;
    *(undefined4 *)&pFVar12[1].field_0xac = uVar7;
    (pFVar10->ID).A = (undefined4)local_400;
    (pFVar10->ID).B = local_400._4_4_;
    pFVar11[-1].ID.C = (undefined4)uStack_3f8;
    pFVar11[-1].ID.D = uStack_3f8._4_4_;
    pFVar11[-1].Value._padding_ = local_3f0;
    pFVar11[-1].Value._padding_ = lStack_3e8;
    pFVar11[-1].Value._padding_ = local_3e0;
    pFVar11[-1].Value._padding_ = lStack_3d8;
    pFVar11[-1].Value._padding_ = local_3d0;
    pFVar11[-1].Value._padding_ = lStack_3c8;
    pFVar11[-1].Value._padding_ = local_3c0;
    pFVar11[-1].Value._padding_ = lStack_3b8;
    pFVar11[-1].Value._padding_ = local_3b0;
    pFVar11[-1].Value._padding_ = lStack_3a8;
    pFVar11[-1].Value._padding_ = local_3a0;
    pFVar11[-1].Value._padding_ = lStack_398;
    pFVar11[-1].Value._padding_ = local_390;
    pFVar11[-1].Value._padding_ = lStack_388;
    pFVar11[-1].Value._padding_ = local_380;
    pFVar11[-1].Value._padding_ = lStack_378;
    pFVar11[-1].Value._padding_ = local_370;
    pFVar11[-1].Value._padding_ = lStack_368;
    *(undefined8 *)&pFVar11[-1].Value.TypeIndex = local_360;
    *(undefined8 *)&pFVar11[-1].Score = uStack_358;
    goto LAB_14ae53270;
  }
  local_400._0_4_ = (pFVar15->ID).A;
  local_400._4_4_ = (pFVar15->ID).B;
  uStack_3f8._0_4_ = (pFVar15->ID).C;
  uStack_3f8._4_4_ = (pFVar15->ID).D;
  local_3f0 = (pFVar15->Value)._padding_;
  lStack_3e8 = (pFVar15->Value)._padding_;
  iVar14 = iVar14 + -1;
  local_3e0 = (pFVar15->Value)._padding_;
  lStack_3d8 = (pFVar15->Value)._padding_;
  local_3d0 = (pFVar15->Value)._padding_;
  lStack_3c8 = (pFVar15->Value)._padding_;
  local_3c0 = (pFVar15->Value)._padding_;
  lStack_3b8 = (pFVar15->Value)._padding_;
  local_3b0 = (pFVar15->Value)._padding_;
  lStack_3a8 = (pFVar15->Value)._padding_;
  local_3a0 = (pFVar15->Value)._padding_;
  lStack_398 = (pFVar15->Value)._padding_;
  local_390 = (pFVar15->Value)._padding_;
  lStack_388 = (pFVar15->Value)._padding_;
  local_380 = (pFVar15->Value)._padding_;
  lStack_378 = (pFVar15->Value)._padding_;
  local_370 = (pFVar15->Value)._padding_;
  lStack_368 = (pFVar15->Value)._padding_;
  local_360 = *(undefined8 *)&(pFVar15->Value).TypeIndex;
  uStack_358 = *(undefined8 *)&pFVar15->Score;
  uVar3 = (pFVar10->ID).B;
  uVar4 = pFVar11[-1].ID.C;
  uVar5 = pFVar11[-1].ID.D;
  (pFVar15->ID).A = (pFVar10->ID).A;
  (pFVar15->ID).B = uVar3;
  (pFVar15->ID).C = uVar4;
  (pFVar15->ID).D = uVar5;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  uVar6 = *(undefined7 *)&pFVar11[-1].Value.field_0x91;
  fVar18 = pFVar11[-1].Score;
  uVar7 = *(undefined4 *)&pFVar11[-1].field_0xac;
  (pFVar15->Value).TypeIndex = pFVar11[-1].Value.TypeIndex;
  *(undefined7 *)&(pFVar15->Value).field_0x91 = uVar6;
  pFVar15->Score = fVar18;
  *(undefined4 *)&pFVar15->field_0xac = uVar7;
  (pFVar10->ID).A = (undefined4)local_400;
  (pFVar10->ID).B = local_400._4_4_;
  pFVar11[-1].ID.C = (undefined4)uStack_3f8;
  pFVar11[-1].ID.D = uStack_3f8._4_4_;
  pFVar11[-1].Value._padding_ = local_3f0;
  pFVar11[-1].Value._padding_ = lStack_3e8;
  pFVar11[-1].Value._padding_ = local_3e0;
  pFVar11[-1].Value._padding_ = lStack_3d8;
  pFVar11[-1].Value._padding_ = local_3d0;
  pFVar11[-1].Value._padding_ = lStack_3c8;
  pFVar11[-1].Value._padding_ = local_3c0;
  pFVar11[-1].Value._padding_ = lStack_3b8;
  pFVar11[-1].Value._padding_ = local_3b0;
  pFVar11[-1].Value._padding_ = lStack_3a8;
  pFVar11[-1].Value._padding_ = local_3a0;
  pFVar11[-1].Value._padding_ = lStack_398;
  pFVar11[-1].Value._padding_ = local_390;
  pFVar11[-1].Value._padding_ = lStack_388;
  pFVar11[-1].Value._padding_ = local_380;
  pFVar11[-1].Value._padding_ = lStack_378;
  pFVar11[-1].Value._padding_ = local_370;
  pFVar11[-1].Value._padding_ = lStack_368;
  *(undefined8 *)&pFVar11[-1].Value.TypeIndex = local_360;
  *(undefined8 *)&pFVar11[-1].Score = uStack_358;
  if (((longlong)pFVar10 + (-0xb0 - (longlong)pFVar15)) / 0xb0 <
      ((longlong)pFVar17 - (longlong)pFVar16) / 0xb0) {
    if (pFVar16 < pFVar17) {
      *ppFVar13 = pFVar16;
      ppFVar13[1] = pFVar17;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar10 <= pFVar15 + 1) goto LAB_14ae53644;
    pFVar17 = pFVar11 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar10) {
      *ppFVar13 = pFVar15;
      ppFVar13[1] = pFVar11 + -2;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar17 <= pFVar16) goto LAB_14ae53644;
  }
  iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0xb0) + 1;
  pFVar15 = pFVar16;
  if (iVar14 == 0) goto LAB_14ae5362b;
  goto LAB_14ae530f0;
}

// IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,`Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge'::__l5::<lambda_1>_>_> @ 14ae53850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge_::__l5::<lambda_1>_>_>
          (FFrontendQueryEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::FFrontendQueryEntry,_public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental_&,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>_&)const_::_5_::<lambda_1>_>
          param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined7 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  FFrontendQueryEntry *pFVar10;
  FFrontendQueryEntry *pFVar11;
  FFrontendQueryEntry *pFVar12;
  FFrontendQueryEntry **ppFVar13;
  int iVar14;
  FFrontendQueryEntry *pFVar15;
  FFrontendQueryEntry *pFVar16;
  FFrontendQueryEntry *pFVar17;
  float fVar18;
  undefined1 auStack_438 [48];
  FFrontendQueryEntry *local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  longlong local_3f0;
  longlong lStack_3e8;
  longlong local_3e0;
  longlong lStack_3d8;
  longlong local_3d0;
  longlong lStack_3c8;
  longlong local_3c0;
  longlong lStack_3b8;
  longlong local_3b0;
  longlong lStack_3a8;
  longlong local_3a0;
  longlong lStack_398;
  longlong local_390;
  longlong lStack_388;
  longlong local_380;
  longlong lStack_378;
  longlong local_370;
  longlong lStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  FFrontendQueryEntry *local_348;
  FFrontendQueryEntry *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_438;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    ppFVar13 = &local_348;
    do {
      pFVar17 = ppFVar13[1];
      pFVar16 = *ppFVar13;
      local_408 = ppFVar13[2];
      iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0xb0) + 1;
      pFVar15 = pFVar16;
      iVar14 = (int)local_408;
      if ((int)local_408 != 0) {
LAB_14ae53940:
        if (8 < iVar9) {
          pFVar10 = pFVar17 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          local_400._0_4_ = (pFVar16->ID).A;
          local_400._4_4_ = (pFVar16->ID).B;
          uStack_3f8._0_4_ = (pFVar16->ID).C;
          uStack_3f8._4_4_ = (pFVar16->ID).D;
          local_3f0 = (pFVar16->Value)._padding_;
          lStack_3e8 = (pFVar16->Value)._padding_;
          local_3e0 = (pFVar16->Value)._padding_;
          lStack_3d8 = (pFVar16->Value)._padding_;
          local_3d0 = (pFVar16->Value)._padding_;
          lStack_3c8 = (pFVar16->Value)._padding_;
          local_3c0 = (pFVar16->Value)._padding_;
          lStack_3b8 = (pFVar16->Value)._padding_;
          local_3b0 = (pFVar16->Value)._padding_;
          lStack_3a8 = (pFVar16->Value)._padding_;
          local_3a0 = (pFVar16->Value)._padding_;
          lStack_398 = (pFVar16->Value)._padding_;
          local_390 = (pFVar16->Value)._padding_;
          lStack_388 = (pFVar16->Value)._padding_;
          local_380 = (pFVar16->Value)._padding_;
          lStack_378 = (pFVar16->Value)._padding_;
          local_370 = (pFVar16->Value)._padding_;
          lStack_368 = (pFVar16->Value)._padding_;
          local_360 = *(undefined8 *)&(pFVar16->Value).TypeIndex;
          uStack_358 = *(undefined8 *)&pFVar16->Score;
          uVar3 = (pFVar15->ID).B;
          uVar4 = (pFVar15->ID).C;
          uVar5 = (pFVar15->ID).D;
          (pFVar16->ID).A = (pFVar15->ID).A;
          (pFVar16->ID).B = uVar3;
          (pFVar16->ID).C = uVar4;
          (pFVar16->ID).D = uVar5;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          lVar2 = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = (pFVar15->Value)._padding_;
          (pFVar16->Value)._padding_ = lVar2;
          uVar6 = *(undefined7 *)&(pFVar15->Value).field_0x91;
          fVar18 = pFVar15->Score;
          uVar7 = *(undefined4 *)&pFVar15->field_0xac;
          (pFVar16->Value).TypeIndex = (pFVar15->Value).TypeIndex;
          *(undefined7 *)&(pFVar16->Value).field_0x91 = uVar6;
          pFVar16->Score = fVar18;
          *(undefined4 *)&pFVar16->field_0xac = uVar7;
          (pFVar15->ID).A = (undefined4)local_400;
          (pFVar15->ID).B = local_400._4_4_;
          (pFVar15->ID).C = (undefined4)uStack_3f8;
          (pFVar15->ID).D = uStack_3f8._4_4_;
          (pFVar15->Value)._padding_ = local_3f0;
          (pFVar15->Value)._padding_ = lStack_3e8;
          (pFVar15->Value)._padding_ = local_3e0;
          (pFVar15->Value)._padding_ = lStack_3d8;
          (pFVar15->Value)._padding_ = local_3d0;
          (pFVar15->Value)._padding_ = lStack_3c8;
          (pFVar15->Value)._padding_ = local_3c0;
          (pFVar15->Value)._padding_ = lStack_3b8;
          (pFVar15->Value)._padding_ = local_3b0;
          (pFVar15->Value)._padding_ = lStack_3a8;
          (pFVar15->Value)._padding_ = local_3a0;
          (pFVar15->Value)._padding_ = lStack_398;
          (pFVar15->Value)._padding_ = local_390;
          (pFVar15->Value)._padding_ = lStack_388;
          (pFVar15->Value)._padding_ = local_380;
          (pFVar15->Value)._padding_ = lStack_378;
          (pFVar15->Value)._padding_ = local_370;
          (pFVar15->Value)._padding_ = lStack_368;
          *(undefined8 *)&(pFVar15->Value).TypeIndex = local_360;
          *(undefined8 *)&pFVar15->Score = uStack_358;
          pFVar16 = pFVar15;
LAB_14ae53ac0:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar17) goto code_r0x00014ae53acc;
          goto LAB_14ae53ae3;
        }
        for (; pFVar10 = pFVar15, pFVar16 = pFVar15, pFVar15 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar12 = pFVar10, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar17) {
            plVar1 = *(longlong **)&(param_4.Predicate)->__this->field_0x8;
            cVar8 = (**(code **)(*plVar1 + 8))(plVar1,pFVar12,pFVar16);
            pFVar10 = pFVar16;
            if (cVar8 == '\0') {
              pFVar10 = pFVar12;
            }
          }
          local_400._0_4_ = (pFVar12->ID).A;
          local_400._4_4_ = (pFVar12->ID).B;
          uStack_3f8._0_4_ = (pFVar12->ID).C;
          uStack_3f8._4_4_ = (pFVar12->ID).D;
          local_3f0 = (pFVar12->Value)._padding_;
          lStack_3e8 = (pFVar12->Value)._padding_;
          local_3e0 = (pFVar12->Value)._padding_;
          lStack_3d8 = (pFVar12->Value)._padding_;
          local_3d0 = (pFVar12->Value)._padding_;
          lStack_3c8 = (pFVar12->Value)._padding_;
          local_3c0 = (pFVar12->Value)._padding_;
          lStack_3b8 = (pFVar12->Value)._padding_;
          local_3b0 = (pFVar12->Value)._padding_;
          lStack_3a8 = (pFVar12->Value)._padding_;
          local_3a0 = (pFVar12->Value)._padding_;
          lStack_398 = (pFVar12->Value)._padding_;
          local_390 = (pFVar12->Value)._padding_;
          lStack_388 = (pFVar12->Value)._padding_;
          local_380 = (pFVar12->Value)._padding_;
          lStack_378 = (pFVar12->Value)._padding_;
          local_370 = (pFVar12->Value)._padding_;
          lStack_368 = (pFVar12->Value)._padding_;
          local_360 = *(undefined8 *)&(pFVar12->Value).TypeIndex;
          uStack_358 = *(undefined8 *)&pFVar12->Score;
          uVar3 = (pFVar17->ID).B;
          uVar4 = (pFVar17->ID).C;
          uVar5 = (pFVar17->ID).D;
          (pFVar12->ID).A = (pFVar17->ID).A;
          (pFVar12->ID).B = uVar3;
          (pFVar12->ID).C = uVar4;
          (pFVar12->ID).D = uVar5;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          lVar2 = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = (pFVar17->Value)._padding_;
          (pFVar12->Value)._padding_ = lVar2;
          uVar6 = *(undefined7 *)&(pFVar17->Value).field_0x91;
          fVar18 = pFVar17->Score;
          uVar7 = *(undefined4 *)&pFVar17->field_0xac;
          (pFVar12->Value).TypeIndex = (pFVar17->Value).TypeIndex;
          *(undefined7 *)&(pFVar12->Value).field_0x91 = uVar6;
          pFVar12->Score = fVar18;
          *(undefined4 *)&pFVar12->field_0xac = uVar7;
          (pFVar17->ID).A = (undefined4)local_400;
          (pFVar17->ID).B = local_400._4_4_;
          (pFVar17->ID).C = (undefined4)uStack_3f8;
          (pFVar17->ID).D = uStack_3f8._4_4_;
          (pFVar17->Value)._padding_ = local_3f0;
          (pFVar17->Value)._padding_ = lStack_3e8;
          (pFVar17->Value)._padding_ = local_3e0;
          (pFVar17->Value)._padding_ = lStack_3d8;
          (pFVar17->Value)._padding_ = local_3d0;
          (pFVar17->Value)._padding_ = lStack_3c8;
          (pFVar17->Value)._padding_ = local_3c0;
          (pFVar17->Value)._padding_ = lStack_3b8;
          (pFVar17->Value)._padding_ = local_3b0;
          (pFVar17->Value)._padding_ = lStack_3a8;
          (pFVar17->Value)._padding_ = local_3a0;
          (pFVar17->Value)._padding_ = lStack_398;
          (pFVar17->Value)._padding_ = local_390;
          (pFVar17->Value)._padding_ = lStack_388;
          (pFVar17->Value)._padding_ = local_380;
          (pFVar17->Value)._padding_ = lStack_378;
          (pFVar17->Value)._padding_ = local_370;
          (pFVar17->Value)._padding_ = lStack_368;
          *(undefined8 *)&(pFVar17->Value).TypeIndex = local_360;
          *(undefined8 *)&pFVar17->Score = uStack_358;
        }
        goto LAB_14ae53e94;
      }
LAB_14ae53e7b:
      HeapSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge_::__l5::<lambda_1>_>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ae53e94:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_348 <= ppFVar13);
  }
  return;
code_r0x00014ae53acc:
  plVar1 = *(longlong **)&(param_4.Predicate)->__this->field_0x8;
  cVar8 = (**(code **)(*plVar1 + 8))(plVar1,pFVar15,pFVar16);
  if (cVar8 == '\0') goto LAB_14ae53ac0;
LAB_14ae53ae3:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar15) break;
    plVar1 = *(longlong **)&(param_4.Predicate)->__this->field_0x8;
    cVar8 = (**(code **)(*plVar1 + 8))(plVar1,pFVar10,pFVar15);
  } while (cVar8 == '\0');
  if (pFVar16 <= pFVar10) {
    local_400._0_4_ = (pFVar16->ID).A;
    local_400._4_4_ = (pFVar16->ID).B;
    uStack_3f8._0_4_ = pFVar12[1].ID.C;
    uStack_3f8._4_4_ = pFVar12[1].ID.D;
    local_3f0 = pFVar12[1].Value._padding_;
    lStack_3e8 = pFVar12[1].Value._padding_;
    local_3e0 = pFVar12[1].Value._padding_;
    lStack_3d8 = pFVar12[1].Value._padding_;
    local_3d0 = pFVar12[1].Value._padding_;
    lStack_3c8 = pFVar12[1].Value._padding_;
    local_3c0 = pFVar12[1].Value._padding_;
    lStack_3b8 = pFVar12[1].Value._padding_;
    local_3b0 = pFVar12[1].Value._padding_;
    lStack_3a8 = pFVar12[1].Value._padding_;
    local_3a0 = pFVar12[1].Value._padding_;
    lStack_398 = pFVar12[1].Value._padding_;
    local_390 = pFVar12[1].Value._padding_;
    lStack_388 = pFVar12[1].Value._padding_;
    local_380 = pFVar12[1].Value._padding_;
    lStack_378 = pFVar12[1].Value._padding_;
    local_370 = pFVar12[1].Value._padding_;
    lStack_368 = pFVar12[1].Value._padding_;
    local_360 = *(undefined8 *)&pFVar12[1].Value.TypeIndex;
    uStack_358 = *(undefined8 *)&pFVar12[1].Score;
    uVar3 = (pFVar10->ID).B;
    uVar4 = pFVar11[-1].ID.C;
    uVar5 = pFVar11[-1].ID.D;
    (pFVar16->ID).A = (pFVar10->ID).A;
    (pFVar16->ID).B = uVar3;
    pFVar12[1].ID.C = uVar4;
    pFVar12[1].ID.D = uVar5;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    lVar2 = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = pFVar11[-1].Value._padding_;
    pFVar12[1].Value._padding_ = lVar2;
    uVar6 = *(undefined7 *)&pFVar11[-1].Value.field_0x91;
    fVar18 = pFVar11[-1].Score;
    uVar7 = *(undefined4 *)&pFVar11[-1].field_0xac;
    pFVar12[1].Value.TypeIndex = pFVar11[-1].Value.TypeIndex;
    *(undefined7 *)&pFVar12[1].Value.field_0x91 = uVar6;
    pFVar12[1].Score = fVar18;
    *(undefined4 *)&pFVar12[1].field_0xac = uVar7;
    (pFVar10->ID).A = (undefined4)local_400;
    (pFVar10->ID).B = local_400._4_4_;
    pFVar11[-1].ID.C = (undefined4)uStack_3f8;
    pFVar11[-1].ID.D = uStack_3f8._4_4_;
    pFVar11[-1].Value._padding_ = local_3f0;
    pFVar11[-1].Value._padding_ = lStack_3e8;
    pFVar11[-1].Value._padding_ = local_3e0;
    pFVar11[-1].Value._padding_ = lStack_3d8;
    pFVar11[-1].Value._padding_ = local_3d0;
    pFVar11[-1].Value._padding_ = lStack_3c8;
    pFVar11[-1].Value._padding_ = local_3c0;
    pFVar11[-1].Value._padding_ = lStack_3b8;
    pFVar11[-1].Value._padding_ = local_3b0;
    pFVar11[-1].Value._padding_ = lStack_3a8;
    pFVar11[-1].Value._padding_ = local_3a0;
    pFVar11[-1].Value._padding_ = lStack_398;
    pFVar11[-1].Value._padding_ = local_390;
    pFVar11[-1].Value._padding_ = lStack_388;
    pFVar11[-1].Value._padding_ = local_380;
    pFVar11[-1].Value._padding_ = lStack_378;
    pFVar11[-1].Value._padding_ = local_370;
    pFVar11[-1].Value._padding_ = lStack_368;
    *(undefined8 *)&pFVar11[-1].Value.TypeIndex = local_360;
    *(undefined8 *)&pFVar11[-1].Score = uStack_358;
    goto LAB_14ae53ac0;
  }
  local_400._0_4_ = (pFVar15->ID).A;
  local_400._4_4_ = (pFVar15->ID).B;
  uStack_3f8._0_4_ = (pFVar15->ID).C;
  uStack_3f8._4_4_ = (pFVar15->ID).D;
  local_3f0 = (pFVar15->Value)._padding_;
  lStack_3e8 = (pFVar15->Value)._padding_;
  iVar14 = iVar14 + -1;
  local_3e0 = (pFVar15->Value)._padding_;
  lStack_3d8 = (pFVar15->Value)._padding_;
  local_3d0 = (pFVar15->Value)._padding_;
  lStack_3c8 = (pFVar15->Value)._padding_;
  local_3c0 = (pFVar15->Value)._padding_;
  lStack_3b8 = (pFVar15->Value)._padding_;
  local_3b0 = (pFVar15->Value)._padding_;
  lStack_3a8 = (pFVar15->Value)._padding_;
  local_3a0 = (pFVar15->Value)._padding_;
  lStack_398 = (pFVar15->Value)._padding_;
  local_390 = (pFVar15->Value)._padding_;
  lStack_388 = (pFVar15->Value)._padding_;
  local_380 = (pFVar15->Value)._padding_;
  lStack_378 = (pFVar15->Value)._padding_;
  local_370 = (pFVar15->Value)._padding_;
  lStack_368 = (pFVar15->Value)._padding_;
  local_360 = *(undefined8 *)&(pFVar15->Value).TypeIndex;
  uStack_358 = *(undefined8 *)&pFVar15->Score;
  uVar3 = (pFVar10->ID).B;
  uVar4 = pFVar11[-1].ID.C;
  uVar5 = pFVar11[-1].ID.D;
  (pFVar15->ID).A = (pFVar10->ID).A;
  (pFVar15->ID).B = uVar3;
  (pFVar15->ID).C = uVar4;
  (pFVar15->ID).D = uVar5;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  lVar2 = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = pFVar11[-1].Value._padding_;
  (pFVar15->Value)._padding_ = lVar2;
  uVar6 = *(undefined7 *)&pFVar11[-1].Value.field_0x91;
  fVar18 = pFVar11[-1].Score;
  uVar7 = *(undefined4 *)&pFVar11[-1].field_0xac;
  (pFVar15->Value).TypeIndex = pFVar11[-1].Value.TypeIndex;
  *(undefined7 *)&(pFVar15->Value).field_0x91 = uVar6;
  pFVar15->Score = fVar18;
  *(undefined4 *)&pFVar15->field_0xac = uVar7;
  (pFVar10->ID).A = (undefined4)local_400;
  (pFVar10->ID).B = local_400._4_4_;
  pFVar11[-1].ID.C = (undefined4)uStack_3f8;
  pFVar11[-1].ID.D = uStack_3f8._4_4_;
  pFVar11[-1].Value._padding_ = local_3f0;
  pFVar11[-1].Value._padding_ = lStack_3e8;
  pFVar11[-1].Value._padding_ = local_3e0;
  pFVar11[-1].Value._padding_ = lStack_3d8;
  pFVar11[-1].Value._padding_ = local_3d0;
  pFVar11[-1].Value._padding_ = lStack_3c8;
  pFVar11[-1].Value._padding_ = local_3c0;
  pFVar11[-1].Value._padding_ = lStack_3b8;
  pFVar11[-1].Value._padding_ = local_3b0;
  pFVar11[-1].Value._padding_ = lStack_3a8;
  pFVar11[-1].Value._padding_ = local_3a0;
  pFVar11[-1].Value._padding_ = lStack_398;
  pFVar11[-1].Value._padding_ = local_390;
  pFVar11[-1].Value._padding_ = lStack_388;
  pFVar11[-1].Value._padding_ = local_380;
  pFVar11[-1].Value._padding_ = lStack_378;
  pFVar11[-1].Value._padding_ = local_370;
  pFVar11[-1].Value._padding_ = lStack_368;
  *(undefined8 *)&pFVar11[-1].Value.TypeIndex = local_360;
  *(undefined8 *)&pFVar11[-1].Score = uStack_358;
  if (((longlong)pFVar10 + (-0xb0 - (longlong)pFVar15)) / 0xb0 <
      ((longlong)pFVar17 - (longlong)pFVar16) / 0xb0) {
    if (pFVar16 < pFVar17) {
      *ppFVar13 = pFVar16;
      ppFVar13[1] = pFVar17;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar10 <= pFVar15 + 1) goto LAB_14ae53e94;
    pFVar17 = pFVar11 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar10) {
      *ppFVar13 = pFVar15;
      ppFVar13[1] = pFVar11 + -2;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar17 <= pFVar16) goto LAB_14ae53e94;
  }
  iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0xb0) + 1;
  pFVar15 = pFVar16;
  if (iVar14 == 0) goto LAB_14ae53e7b;
  goto LAB_14ae53940;
}

// LowerBoundInternal<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_const_,int,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_> @ 14ae540a0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_const_,int,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
          (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
           *param_1,int param_2,FFrontendQueryKey *param_3,FKeyForward param_4,
          TLess<Metasound::FFrontendQueryKey_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = Metasound::operator<((FFrontendQueryKey *)(param_1 + iVar1),param_3);
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// MakeAccessPtr<Metasound::Frontend::FDocumentAccessPtr,FMetasoundFrontendDocument> @ 14ae54120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccessPtr * __cdecl
Metasound::Frontend::
MakeAccessPtr<Metasound::Frontend::FDocumentAccessPtr,FMetasoundFrontendDocument>
          (FDocumentAccessPtr *__return_storage_ptr__,FAccessPoint *param_1,
          FMetasoundFrontendDocument *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FAccessToken *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar1 = (param_1->Token).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Token).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  local_48 = (code *)0x0;
  puVar10 = FMemory::Malloc(0x20,8);
  puVar10[1] = pFVar2;
  puVar10[2] = pTVar1;
  *puVar10 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEAA_V__TWeakPtr_UFAccessToken_Frontend_Metasound___00__AEAUFMetasoundFrontendDocument___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar10[3] = param_2;
  lVar8 = *(longlong *)&__return_storage_ptr__->field_0x10;
  uVar9 = *(undefined8 *)&__return_storage_ptr__->field_0x18;
  uVar4 = *(undefined4 *)&__return_storage_ptr__->field_0x20;
  uVar5 = *(undefined4 *)&__return_storage_ptr__->field_0x24;
  uVar6 = *(undefined4 *)&__return_storage_ptr__->field_0x28;
  uVar7 = *(undefined4 *)&__return_storage_ptr__->field_0x2c;
  uVar11 = *(undefined8 *)&__return_storage_ptr__->field_0x30;
  plVar13 = *(longlong **)&__return_storage_ptr__->field_0x38;
  if (puVar10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::TAccessPtr<FMetasoundFrontendDocument>'::__l2::<lambda_1>,FMetasoundFrontendDocument_*>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->field_0x10 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar10,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar10 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_38;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_34;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = (undefined4)uStack_20;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = uStack_20._4_4_;
  local_38 = uVar4;
  uStack_34 = uVar5;
  uStack_30 = uVar6;
  uStack_2c = uVar7;
  local_28 = uVar11;
  uStack_20 = plVar13;
  local_48 = (code *)lVar8;
  uStack_40 = uVar9;
  if (lVar8 != 0) {
    plVar12 = (longlong *)&local_38;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->field_0x10);
  pcVar3 = *(code **)&__return_storage_ptr__->field_0x10;
  plVar13 = (longlong *)&__return_storage_ptr__->field_0x20;
  if (*(longlong **)&__return_storage_ptr__->field_0x38 != (longlong *)0x0) {
    plVar13 = *(longlong **)&__return_storage_ptr__->field_0x38;
  }
  uVar11 = (**(code **)(*plVar13 + 8))();
  uVar11 = (*pcVar3)(uVar11);
  *(undefined8 *)__return_storage_ptr__ = uVar11;
  return __return_storage_ptr__;
}

// MakePimpl<Metasound::FNodeClassRegistrationEventsPimpl,0> @ 14ae54270

TPimplPtr<Metasound::FNodeClassRegistrationEventsPimpl,0> __cdecl
MakePimpl<Metasound::FNodeClassRegistrationEventsPimpl,0>(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *pTVar4;
  undefined8 *puVar5;
  FNodeClassRegistry *pFVar6;
  TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *this;
  TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *pTVar7;
  FNodeClassRegistrationEventsPimpl *in_RCX;
  undefined8 local_38;
  TSharedRef<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>,1>
  local_30;
  
  puVar5 = operator_new(0x20);
  pTVar7 = (TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *puVar5 = UE::Core::Private::PimplPtr::DeleterFunc<Metasound::FNodeClassRegistrationEventsPimpl>
    ;
    puVar1 = puVar5 + 3;
    *puVar1 = 0;
    puVar5[2] = &___7FNodeClassRegistrationEventsPimpl_Metasound__6B_;
    if (Metasound::Frontend::FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
      pFVar6 = operator_new(0x182b0);
      if (pFVar6 == (FNodeClassRegistry *)0x0) {
        Metasound::Frontend::FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
      }
      else {
        Metasound::Frontend::FNodeClassRegistry::LazySingleton =
             Metasound::Frontend::FNodeClassRegistry::FNodeClassRegistry(pFVar6);
      }
    }
    pFVar6 = Metasound::Frontend::FNodeClassRegistry::LazySingleton;
    this = operator_new(0x18);
    if (this != (TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
      local_30.Object = (pFVar6->TransactionBuffer).Object;
      local_30.SharedReferenceCount.ReferenceController =
           (pFVar6->TransactionBuffer).SharedReferenceCount.ReferenceController;
      if (local_30.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_30.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = Metasound::Frontend::
               TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>::
               TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>
                         (this,&local_30);
    }
    if (puVar1 == &local_38) {
      if (pTVar7 != (TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
        pTVar4 = (pTVar7->Buffer).Object;
        uVar2 = pTVar7->ReaderHandle;
        if (pTVar4 == (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0)
        goto LAB_14ae54414;
        EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
        TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::Remove
                  (&pTVar4->ReaderPositions,uVar2);
        Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>
        ::RemoveTransactionsStreamedToAllReaders(pTVar4);
        LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar7->Buffer).SharedReferenceCount.ReferenceController);
        operator_delete(pTVar7,0x18);
      }
    }
    else {
      puVar3 = (undefined8 *)*puVar1;
      *puVar1 = pTVar7;
      if (puVar3 != (undefined8 *)0x0) {
        pTVar4 = (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)*puVar3;
        uVar2 = *(uint *)(puVar3 + 2);
        if (pTVar4 == (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0)
        {
LAB_14ae54414:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
        TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::Remove
                  (&pTVar4->ReaderPositions,uVar2);
        Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>
        ::RemoveTransactionsStreamedToAllReaders(pTVar4);
        LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)puVar3[1]);
        operator_delete(puVar3,0x18);
      }
    }
  }
  in_RCX->_padding_ = (longlong)(puVar5 + 2);
  return (TPimplPtr<Metasound::FNodeClassRegistrationEventsPimpl,0>)in_RCX;
}

// MaxElementBy<TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,unsigned___int64_(__cdecl*)(Metasound::FFrontendQueryEntry_const_&),TLess<void>_> @ 14ae54420

FFrontendQueryEntry * __cdecl
AlgoImpl::
MaxElementBy<TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,unsigned___int64_(__cdecl*)(Metasound::FFrontendQueryEntry_const_&),TLess<void>_>
          (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *param_1,_func___cdecl_ulong64_FFrontendQueryEntry_ptr *param_2,TLess<void> param_3)

{
  int *piVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ForElementType<Metasound::FFrontendQueryEntry> FVar5;
  ForElementType<Metasound::FFrontendQueryEntry> FVar6;
  undefined1 local_res8 [8];
  
  FVar6 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  FVar5 = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
  if (FVar6 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar6;
  }
  FVar6 = (ForElementType<Metasound::FFrontendQueryEntry>)
          ((longlong)iVar2 * 0xb0 + (longlong)param_1);
  do {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<Metasound::FFrontendQueryEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if ((ForElementType<Metasound::FFrontendQueryEntry>)param_1 == FVar6) {
      return (FFrontendQueryEntry *)FVar5;
    }
    if (FVar5 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
LAB_14ae5449d:
      FVar5 = (ForElementType<Metasound::FFrontendQueryEntry>)param_1;
    }
    else {
      uVar3 = (*param_2)((FFrontendQueryEntry *)param_1);
      uVar4 = (*param_2)((FFrontendQueryEntry *)FVar5);
      if (uVar4 < uVar3) goto LAB_14ae5449d;
    }
    param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 0xb0);
  } while( true );
}

// MinElementBy<TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>,`Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::RemoveTransactionsStreamedToAllReaders'::__l5::<lambda_1>,TLess<void>_> @ 14ae544d0

TTuple<unsigned_int,int> * __cdecl
AlgoImpl::
MinElementBy<TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>,_Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::RemoveTransactionsStreamedToAllReaders_::__l5::<lambda_1>,TLess<void>_>
          (TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
           *param_1,<lambda_1> param_2,TLess<void> param_3)

{
  TTuple<unsigned_int,int> *pTVar1;
  int iVar2;
  TTuple<unsigned_int,int> *pTVar3;
  TTuple<unsigned_int,int> *pTVar4;
  undefined1 local_res8 [8];
  
  pTVar3 = (TTuple<unsigned_int,int> *)(param_1->Pairs).AllocatorInstance.Data;
  iVar2 = (param_1->Pairs).ArrayNum;
  pTVar4 = (TTuple<unsigned_int,int> *)0x0;
  pTVar1 = pTVar3 + iVar2;
  while( true ) {
    if ((param_1->Pairs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<unsigned_int,int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar3 == pTVar1) break;
    if ((pTVar4 == (TTuple<unsigned_int,int> *)0x0) ||
       (*(int *)&pTVar3->field_0x4 < *(int *)&pTVar4->field_0x4)) {
      pTVar4 = pTVar3;
    }
    pTVar3 = pTVar3 + 1;
  }
  return pTVar4;
}

// Reverse<Metasound::Frontend::INodeTemplate_const_*> @ 14ae55f30

void __cdecl
AlgoImpl::Reverse<Metasound::Frontend::INodeTemplate_const_*>(INodeTemplate **param_1,int param_2)

{
  INodeTemplate *pIVar1;
  INodeTemplate **ppIVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppIVar2 = param_1 + (param_2 + -1);
    do {
      pIVar1 = param_1[lVar3];
      param_1[lVar3] = *ppIVar2;
      lVar3 = lVar3 + 1;
      *ppIVar2 = pIVar1;
      ppIVar2 = ppIVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// Reverse<TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_> @ 14ae55f90

void __cdecl
AlgoImpl::Reverse<TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>
          (TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  INodeClassRegistryEntry *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pIVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pIVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// StreamTransactions<`Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource::Stream'::__l2::<lambda_1>_> @ 14ae56060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>::
StreamTransactions<_Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource::Stream_::__l2::<lambda_1>_>
          (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *this,uint param_1
          ,<lambda_1> param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  
  if (this == (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  piVar6 = TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::Find
                     (&this->ReaderPositions,param_1);
  if (piVar6 == (int *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6476580802833416091>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryTransaction.h"
                       ,0x65,"ReaderPositions.Contains(InReaderHandle)");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    piVar6 = TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::
             Find(&this->ReaderPositions,param_1);
    if ((piVar6 == (int *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x141,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = *piVar6 - this->NumRemovedTransactions;
    if ((int)uVar8 < 0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      uVar8 = 0;
    }
    iVar5 = (this->TransactionHistory).ArrayNum;
    iVar10 = iVar5 - uVar8;
    if (0 < iVar10) {
      uVar7 = 0;
      if ((int)uVar8 < iVar5) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (this->TransactionHistory).AllocatorInstance.Data + (ulonglong)uVar8 * 0x30;
      pFVar13 = pFVar12 + (longlong)iVar10 * 0x30;
      if (pFVar12 != pFVar13) {
        pFVar11 = pFVar12 + 0x18;
        do {
          iVar5 = (param_2.OutEntries)->ArrayNum;
          if (iVar5 == (param_2.OutEntries)->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x898,&(param_2.OutEntries)->AllocatorInstance,
                               &(param_2.OutEntries)->ArrayMax);
          }
          (param_2.OutEntries)->ArrayNum = iVar5 + 1;
          pFVar9 = ((param_2.OutEntries)->AllocatorInstance).Data + (longlong)iVar5 * 0x98;
          *pFVar9 = *pFVar12;
          ::FString::FString((FString *)(pFVar9 + 8),(FString *)(pFVar11 + -0x10));
          uVar3 = *(undefined8 *)(pFVar11 + 8);
          pFVar12 = pFVar12 + 0x30;
          *(undefined8 *)(pFVar9 + 0x18) = *(undefined8 *)pFVar11;
          *(undefined8 *)(pFVar9 + 0x20) = uVar3;
          pFVar1 = pFVar11 + 0x10;
          pFVar11 = pFVar11 + 0x30;
          *(undefined8 *)(pFVar9 + 0x28) = *(undefined8 *)pFVar1;
          pFVar9[0x90] = (FScriptContainerElement)0x3;
        } while (pFVar12 != pFVar13);
      }
      piVar6 = TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::
               Find(&this->ReaderPositions,param_1);
      if ((piVar6 == (int *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x141,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *piVar6 = *piVar6 + iVar10;
      RemoveTransactionsStreamedToAllReaders(this);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ae5628c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// StreamTransactions<`Metasound::FNodeClassRegistrationEventsPimpl::Stream'::__l2::<lambda_1>_> @ 14ae562a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::
StreamTransactions<_Metasound::FNodeClassRegistrationEventsPimpl::Stream_::__l2::<lambda_1>_>
          (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *this,uint param_1
          ,<lambda_1> param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  FNodeClassRegistryTransaction *pFVar5;
  int iVar6;
  uint uVar7;
  FNodeClassRegistryTransaction *pFVar8;
  uint uVar9;
  TArray<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,TSizedDefaultAllocator<32>_>
  *local_res8;
  
  if (this == (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  piVar4 = TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::Find
                     (&this->ReaderPositions,param_1);
  if (piVar4 == (int *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6476580802833416091>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryTransaction.h"
                       ,0x65,"ReaderPositions.Contains(InReaderHandle)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    piVar4 = TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::
             Find(&this->ReaderPositions,param_1);
    if ((piVar4 == (int *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x141,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = *piVar4 - this->NumRemovedTransactions;
    if ((int)uVar7 < 0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::StreamTransactions<`public:_virtual_void___cdecl_Metasound::FNodeClassRegistrationEventsPimpl::Stream(TArray<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'::`2'::<lambda_1>_>(unsigned_int,`public:_virtual_void___cdecl_Metasound::FNodeClassRegistrationEventsPimpl::Stream(TArray<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'::`2'::<lambda_1>)___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      uVar7 = 0;
    }
    iVar1 = (this->TransactionHistory).ArrayNum;
    iVar6 = iVar1 - uVar7;
    if (0 < iVar6) {
      uVar9 = 0;
      if ((int)uVar7 < iVar1) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (FNodeClassRegistryTransaction *)
               ((this->TransactionHistory).AllocatorInstance.Data + (ulonglong)uVar7 * 0x50);
      pFVar5 = pFVar8 + iVar6;
      local_res8 = param_2.OutValues;
      for (; pFVar8 != pFVar5; pFVar8 = pFVar8 + 1) {
        `Metasound::FNodeClassRegistrationEventsPimpl::Stream'::__l2::<lambda_1>::operator()
                  (&local_res8,pFVar8);
      }
      piVar4 = TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::
               Find(&this->ReaderPositions,param_1);
      if ((piVar4 == (int *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x141,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *piVar4 = *piVar4 + iVar6;
      RemoveTransactionsStreamedToAllReaders(this);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ae56479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Transform<TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendClassInput_const_*,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassInput>'::__l2::<lambda_2>_> @ 14ae56490

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendClassInput_const_*,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassInput>_::__l2::<lambda_2>_>
          (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendClassInput_const_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_2> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_28 [2];
  
  iVar2 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_28[0] = pFVar7;
    if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)param_2->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar6;
    }
    pFVar7 = pFVar7 + 0x48;
    param_2->ArrayNum = iVar6 + 1;
    *(FScriptContainerElement **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_28[0];
  }
  return;
}

// Transform<TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendClassOutput_const_*,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassOutput>'::__l2::<lambda_2>_> @ 14ae565c0

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendClassOutput_const_*,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassOutput>_::__l2::<lambda_2>_>
          (TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendClassOutput_const_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_2> param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_28 [2];
  
  iVar1 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x34;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_28[0] = pFVar6;
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    pFVar6 = pFVar6 + 0x34;
    param_2->ArrayNum = iVar5 + 1;
    *(FScriptContainerElement **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_28[0];
  }
  return;
}

// Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces'::__l2::<lambda_1>_> @ 14ae566e0

/* WARNING: Removing unreachable block (ram,0x00014ae56882) */
/* WARNING: Removing unreachable block (ram,0x00014ae56890) */
/* WARNING: Removing unreachable block (ram,0x00014ae5689e) */

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces_::__l2::<lambda_1>_>
          (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  int iVar1;
  FMetasoundFrontendInterface *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FMetasoundFrontendVersion *pFVar7;
  FMetasoundFrontendVersion *pFVar8;
  undefined1 local_res8 [8];
  <lambda_1> local_res18 [16];
  FMetasoundFrontendInterface local_98;
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (FMetasoundFrontendVersion *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + iVar1;
  local_res18[0] = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVersion_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    `Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces'::__l2::<lambda_1>
    ::operator()(local_res18,&local_98,pFVar7);
    pFVar2 = (FMetasoundFrontendInterface *)(param_2->AllocatorInstance).Data;
    if (((pFVar2 <= &local_98) && (&local_98 < pFVar2 + param_2->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x60;
    *(undefined8 *)pFVar6 = 0;
    *(longlong *)pFVar6 = local_98._padding_;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0xc) = local_98._padding_._4_4_;
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(longlong *)(pFVar6 + 0x10) = local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x18) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x1c) = local_98._padding_._4_4_;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(longlong *)(pFVar6 + 0x20) = local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x28) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x2c) = local_98._padding_._4_4_;
    *(longlong *)(pFVar6 + 0x30) = local_98._padding_;
    *(longlong *)(pFVar6 + 0x38) = local_98._padding_;
    *(FName *)(pFVar6 + 0x40) = local_98.Metadata.Version.Name;
    *(FMetasoundFrontendVersionNumber *)(pFVar6 + 0x48) = local_98.Metadata.Version.Number;
    *(undefined8 *)(pFVar6 + 0x50) = 0;
    *(FScriptContainerElement **)(pFVar6 + 0x50) =
         local_98.Metadata.UClassOptions.AllocatorInstance.Data;
    *(int *)(pFVar6 + 0x58) = local_98.Metadata.UClassOptions.ArrayNum;
    *(int *)(pFVar6 + 0x5c) = local_98.Metadata.UClassOptions.ArrayMax;
    local_98.Metadata.UClassOptions.ArrayNum = 0;
    local_98.Metadata.UClassOptions.ArrayMax = 0;
    local_98.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    DestructItems<FMetasoundFrontendClassInput,int>((FMetasoundFrontendClassInput *)0x0,0);
    if ((void *)local_98._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_98._padding_);
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::FSearchEngineCore::FindUClassDefaultInterfaces'::__l2::<lambda_1>_> @ 14ae568f0

/* WARNING: Removing unreachable block (ram,0x00014ae56b15) */
/* WARNING: Removing unreachable block (ram,0x00014ae56b23) */
/* WARNING: Removing unreachable block (ram,0x00014ae56b31) */

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FSearchEngineCore::FindUClassDefaultInterfaces_::__l2::<lambda_1>_>
          (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  IInterfaceRegistry *pIVar6;
  FScriptContainerElement *pFVar7;
  FMetasoundFrontendVersion *pFVar8;
  FMetasoundFrontendVersion *pFVar9;
  undefined1 local_res8 [8];
  FString local_98;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar1 = param_1->ArrayNum;
  pFVar9 = (FMetasoundFrontendVersion *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar9 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVersion_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) {
      return;
    }
    local_88 = (void *)0x0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 1;
    local_38 = 0;
    local_30 = 0;
    Metasound::Frontend::GetInterfaceRegistryKey(&local_98,pFVar9);
    pIVar6 = Metasound::Frontend::IInterfaceRegistry::Get();
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,&local_98,&local_88);
    if ((cVar3 == '\0') &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5349767403691572770>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                           ,0x1de,"IInterfaceRegistry::Get().FindInterface(Key, Interface)"), bVar4)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pFVar7 = (param_2->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 < pFVar7 + (longlong)param_2->ArrayMax * 0x60)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x60;
    *(undefined8 *)pFVar7 = 0;
    *(void **)pFVar7 = local_88;
    *(undefined4 *)(pFVar7 + 8) = (undefined4)local_80;
    *(undefined4 *)(pFVar7 + 0xc) = local_80._4_4_;
    *(undefined8 *)(pFVar7 + 0x10) = 0;
    *(undefined8 *)(pFVar7 + 0x10) = local_78;
    *(undefined4 *)(pFVar7 + 0x18) = (undefined4)local_70;
    *(undefined4 *)(pFVar7 + 0x1c) = local_70._4_4_;
    *(undefined8 *)(pFVar7 + 0x20) = 0;
    *(undefined8 *)(pFVar7 + 0x20) = local_68;
    *(undefined4 *)(pFVar7 + 0x28) = (undefined4)local_60;
    *(undefined4 *)(pFVar7 + 0x2c) = local_60._4_4_;
    *(undefined8 *)(pFVar7 + 0x30) = local_58;
    *(undefined8 *)(pFVar7 + 0x38) = uStack_50;
    *(undefined8 *)(pFVar7 + 0x40) = local_48;
    *(undefined8 *)(pFVar7 + 0x48) = uStack_40;
    *(undefined8 *)(pFVar7 + 0x50) = 0;
    *(undefined8 *)(pFVar7 + 0x50) = local_38;
    *(undefined4 *)(pFVar7 + 0x58) = (undefined4)local_30;
    *(undefined4 *)(pFVar7 + 0x5c) = local_30._4_4_;
    local_30 = 0;
    local_38 = 0;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = (void *)0x0;
    DestructItems<FMetasoundFrontendClassInput,int>((FMetasoundFrontendClassInput *)0x0,0);
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    pFVar9 = pFVar9 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces'::__l2::<lambda_2>_> @ 14ae56b80

/* WARNING: Removing unreachable block (ram,0x00014ae56d22) */
/* WARNING: Removing unreachable block (ram,0x00014ae56d30) */
/* WARNING: Removing unreachable block (ram,0x00014ae56d3e) */

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces_::__l2::<lambda_2>_>
          (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_2> param_3)

{
  int iVar1;
  FMetasoundFrontendInterface *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FMetasoundFrontendVersion *pFVar7;
  FMetasoundFrontendVersion *pFVar8;
  undefined1 local_res8 [8];
  <lambda_2> local_res18 [16];
  FMetasoundFrontendInterface local_98;
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (FMetasoundFrontendVersion *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + iVar1;
  local_res18[0] = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVersion_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    `Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces'::__l2::<lambda_2>
    ::operator()(local_res18,&local_98,pFVar7);
    pFVar2 = (FMetasoundFrontendInterface *)(param_2->AllocatorInstance).Data;
    if (((pFVar2 <= &local_98) && (&local_98 < pFVar2 + param_2->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x60;
    *(undefined8 *)pFVar6 = 0;
    *(longlong *)pFVar6 = local_98._padding_;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0xc) = local_98._padding_._4_4_;
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(longlong *)(pFVar6 + 0x10) = local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x18) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x1c) = local_98._padding_._4_4_;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(longlong *)(pFVar6 + 0x20) = local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x28) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x2c) = local_98._padding_._4_4_;
    *(longlong *)(pFVar6 + 0x30) = local_98._padding_;
    *(longlong *)(pFVar6 + 0x38) = local_98._padding_;
    *(FName *)(pFVar6 + 0x40) = local_98.Metadata.Version.Name;
    *(FMetasoundFrontendVersionNumber *)(pFVar6 + 0x48) = local_98.Metadata.Version.Number;
    *(undefined8 *)(pFVar6 + 0x50) = 0;
    *(FScriptContainerElement **)(pFVar6 + 0x50) =
         local_98.Metadata.UClassOptions.AllocatorInstance.Data;
    *(int *)(pFVar6 + 0x58) = local_98.Metadata.UClassOptions.ArrayNum;
    *(int *)(pFVar6 + 0x5c) = local_98.Metadata.UClassOptions.ArrayMax;
    local_98.Metadata.UClassOptions.ArrayNum = 0;
    local_98.Metadata.UClassOptions.ArrayMax = 0;
    local_98.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    DestructItems<FMetasoundFrontendClassInput,int>((FMetasoundFrontendClassInput *)0x0,0);
    if ((void *)local_98._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_98._padding_);
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// Transform<TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassInput>'::__l2::<lambda_1>_> @ 14ae56d90

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassInput>_::__l2::<lambda_1>_>
          (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_28 [2];
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_28[0] = pFVar7;
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    pFVar7 = pFVar7 + 0x20;
    param_2->ArrayNum = iVar5 + 1;
    *(FScriptContainerElement **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_28[0];
  }
  return;
}

// Transform<TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassOutput>'::__l2::<lambda_1>_> @ 14ae56eb0

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FrontendSubgraphNodeControllerPrivate::ConformNodeVertexArrayToClassVertexArray<FMetasoundFrontendVertex,FMetasoundFrontendClassOutput>_::__l2::<lambda_1>_>
          (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_28 [2];
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_28[0] = pFVar7;
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    pFVar7 = pFVar7 + 0x20;
    param_2->ArrayNum = iVar5 + 1;
    *(FScriptContainerElement **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_28[0];
  }
  return;
}

// TransformIf<TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_>,TArray<Metasound::FFrontendQueryKey,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::SearchEngineQuerySteps::FMapUClassToDefaultInterface::Map'::__l5::<lambda_1>,`Metasound::Frontend::SearchEngineQuerySteps::FMapUClassToDefaultInterface::Map'::__l5::<lambda_2>_> @ 14ae56fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Algo::
TransformIf<TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_>,TArray<Metasound::FFrontendQueryKey,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::SearchEngineQuerySteps::FMapUClassToDefaultInterface::Map_::__l5::<lambda_1>,_Metasound::Frontend::SearchEngineQuerySteps::FMapUClassToDefaultInterface::Map_::__l5::<lambda_2>_>
          (TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Metasound::FFrontendQueryKey,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3,<lambda_2> param_4)

{
  FTopLevelAssetPath *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  FTopLevelAssetPath *this;
  undefined1 auStack_b8 [32];
  FString *local_98;
  FScriptContainerElement *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_68 [8];
  FString local_60;
  FString local_50;
  FScriptContainerElement local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar2 = param_1->ArrayNum;
  this = (FTopLevelAssetPath *)(param_1->AllocatorInstance).Data;
  pFVar1 = (FTopLevelAssetPath *)((longlong)this + (longlong)iVar2 * 0x14);
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_68[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendInterfaceUClassOptions_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_68);
      }
      if (this == pFVar1) {
        return;
      }
      if (*(char *)((longlong)&this[1].PackageName.ComparisonIndex.Value + 1) != '\0') break;
LAB_14ae5722b:
      this = (FTopLevelAssetPath *)&this[1].PackageName.Number;
    }
    pFVar7 = FTopLevelAssetPath::ToString(this,&local_60);
    ::FString::FString(&local_50,pFVar7);
    local_40 = (FScriptContainerElement)0x2;
    iVar3 = (pFVar7->Data).ArrayNum;
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      pwVar8 = L"";
      iVar6 = 0;
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    local_38 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    pFVar9 = (param_2->AllocatorInstance).Data;
    if ((pFVar9 <= (FScriptContainerElement *)&local_50) &&
       ((FScriptContainerElement *)&local_50 < pFVar9 + (longlong)param_2->ArrayMax * 0x20)) {
      local_80 = (longlong)param_2->ArrayNum;
      local_78 = 0x20;
      local_98 = &local_50;
      local_90 = pFVar9;
      local_88 = (longlong)param_2->ArrayMax;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    uVar10 = (ulonglong)(byte)local_40;
    pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x20;
    param_2->ArrayNum = iVar6 + 1;
    pFVar9[0x10] = local_40;
    if ((3 < (byte)local_40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar10] ==
        UE::Core::Private::TMoveConstructorCaller<FString>::Construct) {
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_50.Data.AllocatorInstance.Data;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = local_50.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_50.Data.ArrayMax;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar10])(pFVar9,&local_50);
    }
    *(uint *)(pFVar9 + 0x18) = local_38;
    uVar10 = (ulonglong)(byte)local_40;
    if ((3 < (byte)local_40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] !=
        UE::Core::Private::TDestructorCaller<FString>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(&local_50);
      goto LAB_14ae5722b;
    }
    if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14ae5722b;
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
    this = (FTopLevelAssetPath *)&this[1].PackageName.Number;
  } while( true );
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::TAccessPtr<FMetasoundFrontendNode_const_><FMetasoundFrontendNode>'::__l2::<lambda_1>,0,1> @ 14ae5b3b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::TAccessPtr<FMetasoundFrontendNode_const_><FMetasoundFrontendNode>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::TAccessPtr<FMetasoundFrontendNode_const_><FMetasoundFrontendNode>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendNode_____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendNode___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae5b3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_1>,1,0> @ 14ae5b3e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_1>,1,0> @ 14ae5b400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_2>,1,0> @ 14ae5b420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_2>,1,0> @ 14ae5b440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// operator== @ 14ae5cca0

bool __cdecl Metasound::operator==(FFrontendQueryEntry *param_1,FFrontendQueryEntry *param_2)

{
  return (((param_1->ID).D == (param_2->ID).D && (param_1->ID).C == (param_2->ID).C) &&
         (param_1->ID).B == (param_2->ID).B) && (param_1->ID).A == (param_2->ID).A;
}

// operator== @ 14ae5ccd0

bool __cdecl Metasound::operator==(FFrontendQueryKey *param_1,FFrontendQueryKey *param_2)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FName *pFVar7;
  FName *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  int *piVar11;
  
  if ((param_1->Hash != param_2->Hash) ||
     (uVar1 = (param_1->Key).TypeIndex, uVar1 != (param_2->Key).TypeIndex)) {
    return false;
  }
  if (uVar1 != '\0') {
    if (uVar1 == '\x01') {
      piVar11 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<int>
                          (&param_1->Key);
      iVar6 = *piVar11;
      piVar11 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<int>
                          (&param_2->Key);
      return iVar6 == *piVar11;
    }
    if (uVar1 != '\x02') {
      if (uVar1 == '\x03') {
        pFVar7 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<FName>
                           (&param_2->Key);
        pFVar8 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<FName>
                           (&param_1->Key);
        return *pFVar8 == *pFVar7;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x3f1,L"");
      if (!bVar4) {
        return false;
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar9 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<FString>
                       (&param_2->Key);
    pFVar10 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<FString>
                        (&param_1->Key);
    iVar6 = (pFVar9->Data).ArrayNum;
    iVar2 = (pFVar10->Data).ArrayNum;
    if (iVar2 != iVar6) {
      return iVar6 + iVar2 == 1;
    }
    if (1 < iVar2) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      return iVar6 == 0;
    }
  }
  return true;
}

// operator!= @ 14ae5ce20

bool __cdecl Metasound::operator!=(FFrontendQueryKey *param_1,FFrontendQueryKey *param_2)

{
  bool bVar1;
  
  bVar1 = operator==(param_1,param_2);
  return !bVar1;
}

// operator< @ 14ae5ce40

bool __cdecl Metasound::operator<(FFrontendQueryKey *param_1,FFrontendQueryKey *param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  FName *pFVar6;
  FName *pFVar7;
  FString *pFVar8;
  FString *pFVar9;
  int *piVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  bool bVar13;
  
  bVar13 = param_1->Hash < param_2->Hash;
  if (param_1->Hash == param_2->Hash) {
    bVar1 = (param_1->Key).TypeIndex;
    bVar2 = (param_2->Key).TypeIndex;
    bVar13 = bVar1 < bVar2;
    if (bVar1 == bVar2) {
      if (bVar1 != 0) {
        if (bVar1 == 1) {
          piVar10 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<int>
                              (&param_1->Key);
          iVar5 = *piVar10;
          piVar10 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<int>
                              (&param_2->Key);
          return iVar5 < *piVar10;
        }
        if (bVar1 == 2) {
          pFVar8 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<FString>
                             (&param_2->Key);
          pFVar9 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<FString>
                             (&param_1->Key);
          pwVar11 = L"";
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          if ((pFVar9->Data).ArrayNum != 0) {
            pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp(pwVar11,pwVar12);
          return SUB41((uint)iVar5 >> 0x1f,0);
        }
        if (bVar1 == 3) {
          pFVar6 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<FName>
                             (&param_1->Key);
          pFVar7 = TVariant<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Get<FName>
                             (&param_2->Key);
          iVar5 = (pFVar6->ComparisonIndex).Value - (pFVar7->ComparisonIndex).Value;
          if (iVar5 == 0) {
            iVar5 = pFVar6->Number - pFVar7->Number;
          }
          return SUB41((uint)iVar5 >> 0x1f,0);
        }
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                            ,0x41a,L"");
        if (bVar13) {
          pcVar3 = (code *)swi(3);
          uVar4 = (*pcVar3)();
          return (bool)uVar4;
        }
      }
      return false;
    }
  }
  return bVar13;
}

// operator() @ 14ae5cf60

void __thiscall
`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::
CreateAndCacheProxies<FMetasoundFrontendClass>'::__l2::<lambda_1>::operator()
          (void *this,FName *param_1,FMetasoundFrontendLiteral *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
  *pTVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  UObject *pUVar6;
  void **ppvVar7;
  EMetasoundFrontendLiteralType EVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  UObject *local_res20;
  TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&> local_58;
  TSharedPtr<Audio::IProxyData,1> **local_48;
  longlong local_40;
  undefined1 local_38 [16];
  
  EVar8 = FMetasoundFrontendLiteral::GetType(param_2);
  if (EVar8 == UObject) {
    local_58.Key = (void **)0x0;
    FMetasoundFrontendLiteral::TryGet(param_2,(UObject **)&local_58);
    ppvVar7 = local_58.Key;
    if ((UObject *)local_58.Key != (UObject *)0x0) {
      pTVar3 = *(TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                 **)this;
      bVar9 = Metasound::Frontend::FProxyDataCache::Contains
                        ((FProxyDataCache *)pTVar3,(UObject *)local_58.Key);
      if (!bVar9) {
        lVar10 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x78))
                           (*(longlong **)((longlong)this + 8),local_38,param_1,ppvVar7);
        local_58.Value = (TSharedPtr<Audio::IProxyData,1> *)local_58.Key;
        local_48 = &local_58.Value;
        local_40 = lVar10;
        TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&>_>
                  (pTVar3,(TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&> *)
                          &local_res20,(bool *)&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(lVar10 + 8));
        return;
      }
    }
  }
  else if (EVar8 == UObjectArray) {
    Metasound::CreateElementTypeNameFromArrayTypeName((FName)&local_58.Value);
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
    iVar2 = *(int *)((longlong)&pFVar4[1].Data + 4);
    *(undefined4 *)&pFVar4[1].Data = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
    }
    FMetasoundFrontendLiteral::TryGet
              (param_2,*(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10));
    plVar5 = *(longlong **)((longlong)this + 0x10);
    puVar12 = (undefined8 *)*plVar5;
    lVar10 = plVar5[1];
    puVar1 = puVar12 + (int)lVar10;
    while( true ) {
      if ((int)plVar5[1] != (int)lVar10) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res20);
      }
      if (puVar12 == puVar1) break;
      pUVar6 = (UObject *)*puVar12;
      if (pUVar6 != (UObject *)0x0) {
        pTVar3 = *(TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                   **)this;
        bVar9 = Metasound::Frontend::FProxyDataCache::Contains((FProxyDataCache *)pTVar3,pUVar6);
        if (!bVar9) {
          lVar11 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x78))
                             (*(longlong **)((longlong)this + 8),local_38,&local_58.Value,pUVar6);
          local_48 = (TSharedPtr<Audio::IProxyData,1> **)&local_res20;
          local_res20 = pUVar6;
          local_40 = lVar11;
          TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&>_>
                    (pTVar3,&local_58,(bool *)&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(lVar11 + 8));
        }
      }
      puVar12 = puVar12 + 1;
    }
  }
  return;
}

// operator() @ 14ae5d150

void __thiscall
`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::
CreateAndCacheProxies<FMetasoundFrontendDocument>'::__l2::<lambda_1>::operator()
          (void *this,FName *param_1,FMetasoundFrontendLiteral *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
  *pTVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  UObject *pUVar6;
  void **ppvVar7;
  EMetasoundFrontendLiteralType EVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  UObject *local_res20;
  TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&> local_58;
  TSharedPtr<Audio::IProxyData,1> **local_48;
  longlong local_40;
  undefined1 local_38 [16];
  
  EVar8 = FMetasoundFrontendLiteral::GetType(param_2);
  if (EVar8 == UObject) {
    local_58.Key = (void **)0x0;
    FMetasoundFrontendLiteral::TryGet(param_2,(UObject **)&local_58);
    ppvVar7 = local_58.Key;
    if ((UObject *)local_58.Key != (UObject *)0x0) {
      pTVar3 = *(TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                 **)this;
      bVar9 = Metasound::Frontend::FProxyDataCache::Contains
                        ((FProxyDataCache *)pTVar3,(UObject *)local_58.Key);
      if (!bVar9) {
        lVar10 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x78))
                           (*(longlong **)((longlong)this + 8),local_38,param_1,ppvVar7);
        local_58.Value = (TSharedPtr<Audio::IProxyData,1> *)local_58.Key;
        local_48 = &local_58.Value;
        local_40 = lVar10;
        TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&>_>
                  (pTVar3,(TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&> *)
                          &local_res20,(bool *)&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(lVar10 + 8));
        return;
      }
    }
  }
  else if (EVar8 == UObjectArray) {
    Metasound::CreateElementTypeNameFromArrayTypeName((FName)&local_58.Value);
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
    iVar2 = *(int *)((longlong)&pFVar4[1].Data + 4);
    *(undefined4 *)&pFVar4[1].Data = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
    }
    FMetasoundFrontendLiteral::TryGet
              (param_2,*(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10));
    plVar5 = *(longlong **)((longlong)this + 0x10);
    puVar12 = (undefined8 *)*plVar5;
    lVar10 = plVar5[1];
    puVar1 = puVar12 + (int)lVar10;
    while( true ) {
      if ((int)plVar5[1] != (int)lVar10) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res20);
      }
      if (puVar12 == puVar1) break;
      pUVar6 = (UObject *)*puVar12;
      if (pUVar6 != (UObject *)0x0) {
        pTVar3 = *(TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                   **)this;
        bVar9 = Metasound::Frontend::FProxyDataCache::Contains((FProxyDataCache *)pTVar3,pUVar6);
        if (!bVar9) {
          lVar11 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x78))
                             (*(longlong **)((longlong)this + 8),local_38,&local_58.Value,pUVar6);
          local_48 = (TSharedPtr<Audio::IProxyData,1> **)&local_res20;
          local_res20 = pUVar6;
          local_40 = lVar11;
          TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&>_>
                    (pTVar3,&local_58,(bool *)&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(lVar11 + 8));
        }
      }
      puVar12 = puVar12 + 1;
    }
  }
  return;
}

// operator() @ 14ae5d340

void __thiscall
`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::
CreateAndCacheProxies<FMetasoundFrontendGraphClass>'::__l2::<lambda_1>::operator()
          (void *this,FName *param_1,FMetasoundFrontendLiteral *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
  *pTVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  UObject *pUVar6;
  void **ppvVar7;
  EMetasoundFrontendLiteralType EVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  UObject *local_res20;
  TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&> local_58;
  TSharedPtr<Audio::IProxyData,1> **local_48;
  longlong local_40;
  undefined1 local_38 [16];
  
  EVar8 = FMetasoundFrontendLiteral::GetType(param_2);
  if (EVar8 == UObject) {
    local_58.Key = (void **)0x0;
    FMetasoundFrontendLiteral::TryGet(param_2,(UObject **)&local_58);
    ppvVar7 = local_58.Key;
    if ((UObject *)local_58.Key != (UObject *)0x0) {
      pTVar3 = *(TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                 **)this;
      bVar9 = Metasound::Frontend::FProxyDataCache::Contains
                        ((FProxyDataCache *)pTVar3,(UObject *)local_58.Key);
      if (!bVar9) {
        lVar10 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x78))
                           (*(longlong **)((longlong)this + 8),local_38,param_1,ppvVar7);
        local_58.Value = (TSharedPtr<Audio::IProxyData,1> *)local_58.Key;
        local_48 = &local_58.Value;
        local_40 = lVar10;
        TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&>_>
                  (pTVar3,(TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&> *)
                          &local_res20,(bool *)&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(lVar10 + 8));
        return;
      }
    }
  }
  else if (EVar8 == UObjectArray) {
    Metasound::CreateElementTypeNameFromArrayTypeName((FName)&local_58.Value);
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
    iVar2 = *(int *)((longlong)&pFVar4[1].Data + 4);
    *(undefined4 *)&pFVar4[1].Data = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
    }
    FMetasoundFrontendLiteral::TryGet
              (param_2,*(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10));
    plVar5 = *(longlong **)((longlong)this + 0x10);
    puVar12 = (undefined8 *)*plVar5;
    lVar10 = plVar5[1];
    puVar1 = puVar12 + (int)lVar10;
    while( true ) {
      if ((int)plVar5[1] != (int)lVar10) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res20);
      }
      if (puVar12 == puVar1) break;
      pUVar6 = (UObject *)*puVar12;
      if (pUVar6 != (UObject *)0x0) {
        pTVar3 = *(TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                   **)this;
        bVar9 = Metasound::Frontend::FProxyDataCache::Contains((FProxyDataCache *)pTVar3,pUVar6);
        if (!bVar9) {
          lVar11 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x78))
                             (*(longlong **)((longlong)this + 8),local_38,&local_58.Value,pUVar6);
          local_48 = (TSharedPtr<Audio::IProxyData,1> **)&local_res20;
          local_res20 = pUVar6;
          local_40 = lVar11;
          TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&>_>
                    (pTVar3,&local_58,(bool *)&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(lVar11 + 8));
        }
      }
      puVar12 = puVar12 + 1;
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14ae5e5e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`Metasound::Frontend::FNodeClassRegistry::UnregisterGraph'::__l41::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e640

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`Metasound::Frontend::FNodeClassRegistry::RegisterGraph'::__l92::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x200,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e6a0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Metasound::Frontend::FNodeClassRegistry::UnregisterGraph'::__l41::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e6e0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Metasound::Frontend::FNodeClassRegistry::RegisterGraph'::__l92::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::TAccessPtr<FMetasoundFrontendNode_const_><FMetasoundFrontendNode>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendNode_____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendNode___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e7c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e880

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInputNodeController_const_,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FInputNodeController_const_,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e8c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FNodeController_const_,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FNodeController_const_,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e900

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeController_const_,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeController_const_,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e940

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FSubgraphNodeController_const_,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FSubgraphNodeController_const_,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e980

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FVariableNodeController_const_,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FVariableNodeController_const_,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5e9c0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ea00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ea40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FBaseInputController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FBaseInputController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ea80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FBaseOutputController,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FBaseOutputController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5eac0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FInputNodeController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FInputNodeController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5eb00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInputNodeInputController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FInputNodeInputController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5eb40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInputNodeOutputController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FInputNodeOutputController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5eb80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FNodeController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FNodeController,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ebc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeController,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ec00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeInputController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeInputController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ec40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeOutputController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeOutputController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ec80

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FSubgraphNodeController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FSubgraphNodeController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ecc0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FVariableInputController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FVariableInputController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ed00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FVariableNodeController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FVariableNodeController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ed40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FVariableOutputController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FVariableOutputController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ed80

void * __thiscall
Metasound::FrontendQueryPrivate::TMapStepExecuterBase<Metasound::IFrontendQueryMapStep>::
_scalar_deleting_destructor_
          (TMapStepExecuterBase<Metasound::IFrontendQueryMapStep> *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5edd0

void * __thiscall
Metasound::FrontendQueryPrivate::TMapStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::
_scalar_deleting_destructor_
          (TMapStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ee20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::INodeClassRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::INodeClassRegistryEntry>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Metasound::Frontend::INodeClassRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::INodeClassRegistryEntry>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ee60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::INodeTemplateRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::INodeTemplateRegistryEntry>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Metasound::Frontend::INodeTemplateRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::INodeTemplateRegistryEntry>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5eea0

void * __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::
_scalar_deleting_destructor_
          (TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>
           *this,uint param_1)

{
  ~TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5eee0

void * __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::
_scalar_deleting_destructor_
          (TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>
           *this,uint param_1)

{
  ~TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ef20

void * __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::
_scalar_deleting_destructor_
          (TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>
           *this,uint param_1)

{
  ~TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ef60

void * __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::
_scalar_deleting_destructor_
          (TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>
           *this,uint param_1)

{
  ~TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5efa0

void * __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryFilterStep>::
_scalar_deleting_destructor_
          (TStepExecuterBase<Metasound::IFrontendQueryFilterStep> *this,uint param_1)

{
  IFrontendQueryFilterStep *pIVar1;
  
  pIVar1 = (this->Step).Ptr;
  if (pIVar1 != (IFrontendQueryFilterStep *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5eff0

void * __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::
_scalar_deleting_destructor_
          (TStepExecuterBase<Metasound::IFrontendQueryLimitStep> *this,uint param_1)

{
  IFrontendQueryLimitStep *pIVar1;
  
  pIVar1 = (this->Step).Ptr;
  if (pIVar1 != (IFrontendQueryLimitStep *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f040

void * __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMapStep>::
_scalar_deleting_destructor_(TStepExecuterBase<Metasound::IFrontendQueryMapStep> *this,uint param_1)

{
  IFrontendQueryMapStep *pIVar1;
  
  pIVar1 = (this->Step).Ptr;
  if (pIVar1 != (IFrontendQueryMapStep *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f090

void * __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::
_scalar_deleting_destructor_
          (TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *this,uint param_1)

{
  IFrontendQueryMultiMapStep *pIVar1;
  
  pIVar1 = (this->Step).Ptr;
  if (pIVar1 != (IFrontendQueryMultiMapStep *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f0e0

void * __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::
_scalar_deleting_destructor_
          (TStepExecuterBase<Metasound::IFrontendQueryReduceStep> *this,uint param_1)

{
  IFrontendQueryReduceStep *pIVar1;
  
  pIVar1 = (this->Step).Ptr;
  if (pIVar1 != (IFrontendQueryReduceStep *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f130

void * __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryScoreStep>::
_scalar_deleting_destructor_
          (TStepExecuterBase<Metasound::IFrontendQueryScoreStep> *this,uint param_1)

{
  IFrontendQueryScoreStep *pIVar1;
  
  pIVar1 = (this->Step).Ptr;
  if (pIVar1 != (IFrontendQueryScoreStep *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f180

void * __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQuerySortStep>::
_scalar_deleting_destructor_
          (TStepExecuterBase<Metasound::IFrontendQuerySortStep> *this,uint param_1)

{
  IFrontendQuerySortStep *pIVar1;
  
  pIVar1 = (this->Step).Ptr;
  if (pIVar1 != (IFrontendQuerySortStep *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f1d0

void * __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryStreamStep>::
_scalar_deleting_destructor_
          (TStepExecuterBase<Metasound::IFrontendQueryStreamStep> *this,uint param_1)

{
  IFrontendQueryStreamStep *pIVar1;
  
  pIVar1 = (this->Step).Ptr;
  if (pIVar1 != (IFrontendQueryStreamStep *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f220

void * __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryTransformStep>::
_scalar_deleting_destructor_
          (TStepExecuterBase<Metasound::IFrontendQueryTransformStep> *this,uint param_1)

{
  IFrontendQueryTransformStep *pIVar1;
  
  pIVar1 = (this->Step).Ptr;
  if (pIVar1 != (IFrontendQueryTransformStep *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f270

void * __thiscall
Metasound::Frontend::FBaseNodeController::_scalar_deleting_destructor_
          (FBaseNodeController *this,uint param_1)

{
  ~FBaseNodeController(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f2b0

void * __thiscall
Metasound::Frontend::FBaseOutputController::_scalar_deleting_destructor_
          (FBaseOutputController *this,uint param_1)

{
  ~FBaseOutputController(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f2f0

void * __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::_scalar_deleting_destructor_
          (FDocumentNodeClassRegistryEntry *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Graph).SharedReferenceCount.ReferenceController);
  (this->Interfaces).HashSize = 0;
  FVar1 = (this->Interfaces).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Interfaces).Elements);
  pFVar2 = (this->FrontendClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FrontendClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->FrontendClass).Interface.Inputs.AllocatorInstance.Data,
             (this->FrontendClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->FrontendClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f3a0

void * __thiscall
Metasound::FFilterClassesByClassID::_scalar_deleting_destructor_
          (FFilterClassesByClassID *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f3d0

void * __thiscall
Metasound::FFilterClassesByInputVertexDataType::_scalar_deleting_destructor_
          (FFilterClassesByInputVertexDataType *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f400

void * __thiscall
Metasound::FFilterClassesByOutputVertexDataType::_scalar_deleting_destructor_
          (FFilterClassesByOutputVertexDataType *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f430

void * __thiscall
Metasound::FrontendQueryPrivate::FFilterFunctionFrontendQueryStep::_scalar_deleting_destructor_
          (FFilterFunctionFrontendQueryStep *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f490

void * __thiscall
Metasound::FrontendQueryPrivate::FFilterStepExecuter::_scalar_deleting_destructor_
          (FFilterStepExecuter *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f4e0

void * __thiscall
Metasound::Frontend::FInputNodeController::_scalar_deleting_destructor_
          (FInputNodeController *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->OwningGraphClassInputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FBaseNodeController::~FBaseNodeController((FBaseNodeController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f570

void * __thiscall
Metasound::Frontend::FInputNodeOutputController::_scalar_deleting_destructor_
          (FInputNodeOutputController *this,uint param_1)

{
  longlong *plVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  
  if (*(longlong *)&(this->OwningGraphClassInputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    plVar3 = (longlong *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pIVar2 = (this->CachedDisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FBaseOutputController::~FBaseOutputController((FBaseOutputController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f5f0

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource::
_scalar_deleting_destructor_(FInterfaceRegistryTransactionSource *this,uint param_1)

{
  uint uVar1;
  TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> *pTVar2;
  TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *this_00;
  
  pTVar2 = (this->TransactionStream).Ptr;
  if (pTVar2 != (TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
    this_00 = (pTVar2->Buffer).Object;
    uVar1 = pTVar2->ReaderHandle;
    if (this_00 == (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::Remove
              (&this_00->ReaderPositions,uVar1);
    TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>::
    RemoveTransactionsStreamedToAllReaders(this_00);
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar2->Buffer).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar2,0x18);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f6a0

void * __thiscall
Metasound::FrontendQueryPrivate::FLimitFunctionFrontendQueryStep::_scalar_deleting_destructor_
          (FLimitFunctionFrontendQueryStep *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f700

void * __thiscall
Metasound::FrontendQueryPrivate::FLimitStepExecuter::_scalar_deleting_destructor_
          (FLimitStepExecuter *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f750

void * __thiscall
Metasound::FrontendQueryPrivate::FMapFunctionFrontendQueryStep::_scalar_deleting_destructor_
          (FMapFunctionFrontendQueryStep *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f7b0

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceRegistryTransactionToInterfaceName::
_scalar_deleting_destructor_(FMapInterfaceRegistryTransactionToInterfaceName *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f7e0

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::
FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys::_scalar_deleting_destructor_
          (FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f810

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceToInterfaceName::
_scalar_deleting_destructor_(FMapInterfaceToInterfaceName *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f840

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceToInterfaceNameAndMajorVersion::
_scalar_deleting_destructor_(FMapInterfaceToInterfaceNameAndMajorVersion *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f870

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapNodeRegistrationEventsToClassAndMajorVersion::
_scalar_deleting_destructor_(FMapNodeRegistrationEventsToClassAndMajorVersion *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f8a0

void * __thiscall
Metasound::FMapRegistrationEventsToNodeRegistryKeys::_scalar_deleting_destructor_
          (FMapRegistrationEventsToNodeRegistryKeys *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f8d0

void * __thiscall
Metasound::FrontendQueryPrivate::FMapStepExecuter::_scalar_deleting_destructor_
          (FMapStepExecuter *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f920

void * __thiscall Metasound::FMapToNull::_scalar_deleting_destructor_(FMapToNull *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f950

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapUClassToDefaultInterface::
_scalar_deleting_destructor_(FMapUClassToDefaultInterface *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f980

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void * __thiscall
Metasound::Frontend::FMetaSoundClassInfo::_scalar_deleting_destructor_
          (FMetaSoundClassInfo *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5f9b0

void * __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::_scalar_deleting_destructor_
          (FModifyRootGraphInterfaces *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OutputsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputsToAdd).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)(this->InputsToRemove).AllocatorInstance.Data,
             (this->InputsToRemove).ArrayNum);
  pFVar1 = (this->InputsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>
            ((FInputData *)(this->InputsToAdd).AllocatorInstance.Data,(this->InputsToAdd).ArrayNum);
  pFVar1 = (this->InputsToAdd).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PairedOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PairedInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)(this->InterfacesToAdd).AllocatorInstance.Data,
             (this->InterfacesToAdd).ArrayNum);
  pFVar1 = (this->InterfacesToAdd).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)(this->InterfacesToRemove).AllocatorInstance.Data,
             (this->InterfacesToRemove).ArrayNum);
  pFVar1 = (this->InterfacesToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fa90

void * __thiscall
Metasound::FrontendQueryPrivate::FMultiMapFunctionFrontendQueryStep::_scalar_deleting_destructor_
          (FMultiMapFunctionFrontendQueryStep *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5faf0

void * __thiscall
Metasound::FrontendQueryPrivate::FMultiMapStepExecuter::_scalar_deleting_destructor_
          (FMultiMapStepExecuter *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fb40

void * __thiscall
Metasound::FNodeClassRegistrationEvents::_scalar_deleting_destructor_
          (FNodeClassRegistrationEvents *this,uint param_1)

{
  FNodeClassRegistrationEventsPimpl *pFVar1;
  
  pFVar1 = (this->Pimpl).Ptr;
  if (pFVar1 != (FNodeClassRegistrationEventsPimpl *)0x0) {
    (*(code *)pFVar1[-1]._padding_)(pFVar1 + -1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fb90

void * __thiscall
Metasound::FNodeClassRegistrationEventsPimpl::_scalar_deleting_destructor_
          (FNodeClassRegistrationEventsPimpl *this,uint param_1)

{
  ~FNodeClassRegistrationEventsPimpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fbd0

void * __thiscall
Metasound::Frontend::FNodeClassRegistry::_scalar_deleting_destructor_
          (FNodeClassRegistry *this,uint param_1)

{
  ~FNodeClassRegistry(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x182b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fc10

void * __thiscall
Metasound::Frontend::FNodeController::_scalar_deleting_destructor_
          (FNodeController *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FBaseNodeController::~FBaseNodeController((FBaseNodeController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fc70

void * __thiscall
Metasound::Frontend::FOutputNodeController::_scalar_deleting_destructor_
          (FOutputNodeController *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->OwningGraphClassOutputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassOutputPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->OwningGraphClassOutputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FBaseNodeController::~FBaseNodeController((FBaseNodeController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fd00

void * __thiscall
Metasound::Frontend::FOutputNodeOutputController::_scalar_deleting_destructor_
          (FOutputNodeOutputController *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->OwningGraphClassOutputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassOutputPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->OwningGraphClassOutputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FBaseOutputController::~FBaseOutputController((FBaseOutputController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fd60

void * __thiscall
Metasound::FrontendQueryPrivate::FReduceFunctionFrontendQueryStep::_scalar_deleting_destructor_
          (FReduceFunctionFrontendQueryStep *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fdc0

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus::
_scalar_deleting_destructor_(FReduceInterfaceRegistryTransactionsToCurrentStatus *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fdf0

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfacesToHighestVersion::
_scalar_deleting_destructor_(FReduceInterfacesToHighestVersion *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fe20

void * __thiscall
Metasound::FReduceRegistrationEventsToCurrentStatus::_scalar_deleting_destructor_
          (FReduceRegistrationEventsToCurrentStatus *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fe50

void * __thiscall
Metasound::FrontendQueryPrivate::FReduceStepExecuter::_scalar_deleting_destructor_
          (FReduceStepExecuter *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5fea0

void * __thiscall
Metasound::FrontendQueryPrivate::FScoreFunctionFrontendQueryStep::_scalar_deleting_destructor_
          (FScoreFunctionFrontendQueryStep *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ff00

void * __thiscall
Metasound::FrontendQueryPrivate::FScoreStepExecuter::_scalar_deleting_destructor_
          (FScoreStepExecuter *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ff50

void * __thiscall
Metasound::Frontend::FSearchEngineCore::_scalar_deleting_destructor_
          (FSearchEngineCore *this,uint param_1)

{
  TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>
            (&this->FindInterfaceWithHighestVersionQuery);
  TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>
            (&this->FindAllDefaultInterfaceVersionsForUClassQuery);
  TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>
            (&this->FindAllRegisteredInterfacesWithNameQuery);
  TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>
            (&this->FindClassWithHighestMinorVersionQuery);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae5ffc0

void * __thiscall
Metasound::FrontendQueryPrivate::FSortFunctionFrontendQueryStep::_scalar_deleting_destructor_
          (FSortFunctionFrontendQueryStep *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60020

void * __thiscall
Metasound::FrontendQueryPrivate::FSortStepExecuter::_scalar_deleting_destructor_
          (FSortStepExecuter *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60070

void * __thiscall
Metasound::FrontendQueryPrivate::FStreamFunctionFrontendQueryStep::_scalar_deleting_destructor_
          (FStreamFunctionFrontendQueryStep *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae600d0

void * __thiscall
Metasound::FrontendQueryPrivate::FStreamStepExecuter::_scalar_deleting_destructor_
          (FStreamStepExecuter *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60120

void * __thiscall
Metasound::Frontend::FSubgraphNodeController::_scalar_deleting_destructor_
          (FSubgraphNodeController *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FBaseNodeController::~FBaseNodeController((FBaseNodeController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60180

void * __thiscall
`Metasound::Frontend::RegisterNodeTemplate'::__l2::FTemplateRegistryEntry::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xa0),
             *(int *)((longlong)this + 0xa8));
  if (*(void **)((longlong)this + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa0));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60200

void * __thiscall
Metasound::FrontendQueryPrivate::FTransformFunctionFrontendQueryStep::_scalar_deleting_destructor_
          (FTransformFunctionFrontendQueryStep *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60260

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FTransformInterfaceRegistryTransactionToInterface::
_scalar_deleting_destructor_(FTransformInterfaceRegistryTransactionToInterface *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60290

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::
FTransformInterfaceRegistryTransactionToInterfaceVersion::_scalar_deleting_destructor_
          (FTransformInterfaceRegistryTransactionToInterfaceVersion *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae602c0

void * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FTransformInterfaceToInterfaceVersion::
_scalar_deleting_destructor_(FTransformInterfaceToInterfaceVersion *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae602f0

void * __thiscall
Metasound::FrontendQueryPrivate::FTransformStepExecuter::_scalar_deleting_destructor_
          (FTransformStepExecuter *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60340

void * __thiscall
Metasound::Frontend::FVariableNodeController::_scalar_deleting_destructor_
          (FVariableNodeController *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0xc0 != 0) {
    plVar1 = (longlong *)&this->field_0xd0;
    if (*(longlong **)&this->field_0xe8 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0xe8;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FBaseNodeController::~FBaseNodeController((FBaseNodeController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae603a0

void * __thiscall
Metasound::Frontend::FVariableOutputController::_scalar_deleting_destructor_
          (FVariableOutputController *this,uint param_1)

{
  FBaseOutputController::~FBaseOutputController((FBaseOutputController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae603e0

void * __thiscall
Metasound::IFrontendQueryFilterStep::_scalar_deleting_destructor_
          (IFrontendQueryFilterStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60410

void * __thiscall
Metasound::IFrontendQueryLimitStep::_scalar_deleting_destructor_
          (IFrontendQueryLimitStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60440

void * __thiscall
Metasound::IFrontendQueryMapStep::_scalar_deleting_destructor_
          (IFrontendQueryMapStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60470

void * __thiscall
Metasound::IFrontendQueryMultiMapStep::_scalar_deleting_destructor_
          (IFrontendQueryMultiMapStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae604a0

void * __thiscall
Metasound::IFrontendQueryReduceStep::_scalar_deleting_destructor_
          (IFrontendQueryReduceStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae604d0

void * __thiscall
Metasound::IFrontendQueryScoreStep::_scalar_deleting_destructor_
          (IFrontendQueryScoreStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60500

void * __thiscall
Metasound::IFrontendQuerySortStep::_scalar_deleting_destructor_
          (IFrontendQuerySortStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60530

void * __thiscall
Metasound::IFrontendQueryStep::_scalar_deleting_destructor_(IFrontendQueryStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60560

void * __thiscall
Metasound::IFrontendQueryStreamStep::_scalar_deleting_destructor_
          (IFrontendQueryStreamStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60590

void * __thiscall
Metasound::IFrontendQueryTransformStep::_scalar_deleting_destructor_
          (IFrontendQueryTransformStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae605c0

void * __thiscall
Metasound::Frontend::INodeClassRegistry::_scalar_deleting_destructor_
          (INodeClassRegistry *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae605f0

void * __thiscall
Metasound::Frontend::INodeTemplateRegistryEntry::_scalar_deleting_destructor_
          (INodeTemplateRegistryEntry *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60620

void * __thiscall
Metasound::Frontend::ISearchEngine::_scalar_deleting_destructor_(ISearchEngine *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60650

void * __thiscall
Metasound::Frontend::ISearchEngineQuery::_scalar_deleting_destructor_
          (ISearchEngineQuery *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae60680

void * __thiscall
Metasound::FFrontendQueryStep::IStepExecuter::_scalar_deleting_destructor_
          (IStepExecuter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// BuildArrayOfClassesFromPartition @ 14ae649e0

TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Frontend::SearchEngineQuerySteps::BuildArrayOfClassesFromPartition
          (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  ForElementType<Metasound::FFrontendQueryEntry> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  uchar *puVar11;
  undefined1 local_res8 [8];
  
  piVar1 = &param_1->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar4 = (param_1->AllocatorInstance).SecondaryData;
  iVar3 = *piVar1;
  if (FVar4 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar4;
  }
  puVar11 = (uchar *)((longlong)param_1 + 0x18);
  while( true ) {
    if (*piVar1 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<Metasound::FFrontendQueryEntry> *)(puVar11 + -0x18) ==
        (ForElementType<Metasound::FFrontendQueryEntry> *)
        ((longlong)iVar3 * 0xb0 + (longlong)param_1)) {
      return __return_storage_ptr__;
    }
    bVar2 = puVar11[0x88];
    if ((4 < (ulonglong)bVar2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FMetasoundFrontendClass,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + (ulonglong)bVar2) == '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry.Value.IsType<FMetasoundFrontendClass>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                           ,0x101,L""), bVar7)) break;
    if ((puVar11[0x88] != '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)(puVar11 + -8)) &&
        ((FScriptContainerElement *)(puVar11 + -8) <
         pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x90)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x890,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x90;
    *(undefined ***)pFVar10 = &___7FMetasoundFrontendClass__6B_;
    uVar6 = *(undefined8 *)(puVar11 + 8);
    *(undefined8 *)(pFVar10 + 8) = *(undefined8 *)puVar11;
    *(undefined8 *)(pFVar10 + 0x10) = uVar6;
    uVar6 = *(undefined8 *)(puVar11 + 0x18);
    *(undefined8 *)(pFVar10 + 0x18) = *(undefined8 *)(puVar11 + 0x10);
    *(undefined8 *)(pFVar10 + 0x20) = uVar6;
    uVar6 = *(undefined8 *)(puVar11 + 0x28);
    *(undefined8 *)(pFVar10 + 0x28) = *(undefined8 *)(puVar11 + 0x20);
    *(undefined8 *)(pFVar10 + 0x30) = uVar6;
    uVar6 = *(undefined8 *)(puVar11 + 0x38);
    *(undefined8 *)(pFVar10 + 0x38) = *(undefined8 *)(puVar11 + 0x30);
    *(undefined8 *)(pFVar10 + 0x40) = uVar6;
    *(undefined4 *)(pFVar10 + 0x48) = *(undefined4 *)(puVar11 + 0x40);
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
              ((FMetasoundFrontendClassInterface *)(pFVar10 + 0x50),
               (FMetasoundFrontendClassInterface *)(puVar11 + 0x48));
    puVar11 = puVar11 + 0xb0;
  }
  pcVar5 = (code *)swi(3);
  pTVar9 = (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
  return pTVar9;
}

// BuildArrayOfInterfacesFromPartition @ 14ae64c00

TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Frontend::SearchEngineQuerySteps::BuildArrayOfInterfacesFromPartition
          (TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<Metasound::FFrontendQueryEntry> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  FMetasoundFrontendClassInterface *pFVar10;
  undefined1 local_res8 [8];
  
  piVar1 = &param_1->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  pFVar10 = (FMetasoundFrontendClassInterface *)((longlong)param_1 + 0x10);
  while( true ) {
    if (*piVar1 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (&pFVar10[-1].ChangeID == (FGuid *)((longlong)iVar2 * 0xb0 + (longlong)param_1)) {
      return __return_storage_ptr__;
    }
    uVar8 = (ulonglong)*(byte *)&pFVar10[2].Outputs.AllocatorInstance.Data;
    if ((4 < uVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FMetasoundFrontendInterface,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar8) == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry.Value.IsType<FMetasoundFrontendInterface>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                           ,0x116,L""), bVar5)) break;
    if ((*(char *)&pFVar10[2].Outputs.AllocatorInstance.Data != '\x04') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
    pFVar9 = (FMetasoundFrontendClassInterface *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar9 <= pFVar10) &&
        (pFVar10 < (FMetasoundFrontendClassInterface *)
                   ((longlong)pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x60))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar9 = (FMetasoundFrontendClassInterface *)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x60);
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface(pFVar9,pFVar10);
    FMetasoundFrontendInterfaceMetadata::FMetasoundFrontendInterfaceMetadata
              ((FMetasoundFrontendInterfaceMetadata *)(pFVar9 + 1),
               (FMetasoundFrontendInterfaceMetadata *)(pFVar10 + 1));
    pFVar10 = (FMetasoundFrontendClassInterface *)&pFVar10[2].ChangeID;
  }
  pcVar4 = (code *)swi(3);
  pTVar7 = (TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
  return pTVar7;
}

// BuildArrayOfVersionsFromPartition @ 14ae64e00

TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Frontend::SearchEngineQuerySteps::BuildArrayOfVersionsFromPartition
          (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  ForElementType<Metasound::FFrontendQueryEntry> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  piVar1 = &param_1->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar4 = (param_1->AllocatorInstance).SecondaryData;
  iVar3 = *piVar1;
  if (FVar4 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar4;
  }
  pFVar12 = (FScriptContainerElement *)((longlong)param_1 + 0x10);
  while( true ) {
    if (*piVar1 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 + -0x10 == (FScriptContainerElement *)((longlong)iVar3 * 0xb0 + (longlong)param_1))
    {
      return __return_storage_ptr__;
    }
    FVar2 = pFVar12[0x90];
    if ((4 < (ulonglong)(byte)FVar2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar11;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FMetasoundFrontendVersion,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + (ulonglong)(byte)FVar2) == '\0') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry.Value.IsType<FMetasoundFrontendVersion>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                           ,299,L""), bVar9)) break;
    if ((pFVar12[0x90] != (FScriptContainerElement)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar11;
    }
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar5 <= pFVar12) &&
        (pFVar12 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar11;
    }
    iVar10 = __return_storage_ptr__->ArrayNum;
    if (iVar10 == __return_storage_ptr__->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar10 + 1;
    uVar7 = *(undefined8 *)pFVar12;
    uVar8 = *(undefined8 *)(pFVar12 + 8);
    pFVar12 = pFVar12 + 0xb0;
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar5 = uVar7;
    *(undefined8 *)(pFVar5 + 8) = uVar8;
  }
  pcVar6 = (code *)swi(3);
  pTVar11 = (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
  return pTVar11;
}

// BuildRegistryDocument @ 14ae64fe0

TScriptInterface<IMetaSoundDocumentInterface> * __cdecl
Metasound::Frontend::RegistryPrivate::BuildRegistryDocument
          (TScriptInterface<IMetaSoundDocumentInterface> *__return_storage_ptr__,
          TScriptInterface<IMetaSoundDocumentInterface> *param_1,bool param_2)

{
  UObject *pUVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  TScriptInterface<IMetaSoundDocumentInterface> *pTVar6;
  UMetaSoundBuilderDocument *pUVar7;
  IMetaSoundDocumentInterface *pIVar8;
  IMetaSoundDocumentInterface *pIVar9;
  bool bVar10;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::Frontend::BuildRegistryDocument");
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId57,"Metasound::Frontend::BuildRegistryDocument",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x39);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId57);
  }
  if ((*(longlong *)param_1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DocObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                         ,0x3c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TScriptInterface<IMetaSoundDocumentInterface> *)(*pcVar3)();
    return pTVar6;
  }
  pIVar9 = (IMetaSoundDocumentInterface *)0x0;
  pIVar8 = pIVar9;
  if (*(longlong *)param_1 != 0) {
    pIVar8 = *(IMetaSoundDocumentInterface **)&param_1->field_0x8;
  }
  (**(code **)((longlong)*pIVar8 + 0x18))();
  pIVar8 = pIVar9;
  if (*(longlong *)param_1 != 0) {
    pIVar8 = *(IMetaSoundDocumentInterface **)&param_1->field_0x8;
  }
  cVar5 = (**(code **)((longlong)*pIVar8 + 0x40))();
  if ((cVar5 == '\0') || (!param_2)) {
    pUVar1 = *(UObject **)param_1;
    *(UObject **)__return_storage_ptr__ = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  }
  else {
    pIVar8 = pIVar9;
    if (*(longlong *)param_1 != 0) {
      pIVar8 = *(IMetaSoundDocumentInterface **)&param_1->field_0x8;
    }
    pUVar7 = UMetaSoundBuilderDocument::Create(pIVar8);
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar7 == (UMetaSoundBuilderDocument *)0x0)) {
      *(UMetaSoundBuilderDocument **)__return_storage_ptr__ = pUVar7;
      if (pUVar7 != (UMetaSoundBuilderDocument *)0x0) {
        pIVar9 = (IMetaSoundDocumentInterface *)&pUVar7->_padding_;
      }
      *(IMetaSoundDocumentInterface **)&__return_storage_ptr__->field_0x8 = pIVar9;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      *(UMetaSoundBuilderDocument **)__return_storage_ptr__ = pUVar7;
      *(longlong **)&__return_storage_ptr__->field_0x8 = &pUVar7->_padding_;
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// BuildSingleClassFromPartition @ 14ae654e0

FMetasoundFrontendClass * __cdecl
Metasound::Frontend::SearchEngineQuerySteps::BuildSingleClassFromPartition
          (FMetasoundFrontendClass *__return_storage_ptr__,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForElementType<Metasound::FFrontendQueryEntry> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FName FVar5;
  FMetasoundFrontendVersionNumber FVar6;
  bool bVar7;
  FMetasoundFrontendClass *pFVar8;
  undefined1 local_res8 [8];
  
  __return_storage_ptr__->_padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  __return_storage_ptr__->ID = FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata
            (&__return_storage_ptr__->Metadata);
  (__return_storage_ptr__->Interface).Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Interface).Inputs.ArrayNum = 0;
  (__return_storage_ptr__->Interface).Inputs.ArrayMax = 0;
  (__return_storage_ptr__->Interface).Outputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Interface).Outputs.ArrayNum = 0;
  (__return_storage_ptr__->Interface).Outputs.ArrayMax = 0;
  (__return_storage_ptr__->Interface).Environment.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Interface).Environment.ArrayNum = 0;
  (__return_storage_ptr__->Interface).Environment.ArrayMax = 0;
  (__return_storage_ptr__->Interface).ChangeID.A = 0;
  (__return_storage_ptr__->Interface).ChangeID.B = 0;
  (__return_storage_ptr__->Interface).ChangeID.C = 0;
  (__return_storage_ptr__->Interface).ChangeID.D = 0;
  if (param_1->ArrayNum < 1) {
    local_res8[0] = 0;
    bVar7 = `Metasound::Frontend::SearchEngineQuerySteps::BuildSingleClassFromPartition'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar7) {
      return __return_storage_ptr__;
    }
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendClass *)(*pcVar2)();
    return pFVar8;
  }
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar1;
  }
  if ((*(uchar *)((longlong)param_1 + 0xa0) != '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendClass *)(*pcVar2)();
    return pFVar8;
  }
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x18);
  uVar4 = *(undefined8 *)((longlong)param_1 + 0x20);
  (__return_storage_ptr__->ID).A = (int)uVar3;
  (__return_storage_ptr__->ID).B = (int)((ulonglong)uVar3 >> 0x20);
  (__return_storage_ptr__->ID).C = (int)uVar4;
  (__return_storage_ptr__->ID).D = (int)((ulonglong)uVar4 >> 0x20);
  FVar5 = *(FName *)((longlong)param_1 + 0x30);
  (__return_storage_ptr__->Metadata).ClassName.Namespace = *(FName *)((longlong)param_1 + 0x28);
  (__return_storage_ptr__->Metadata).ClassName.Name = FVar5;
  FVar6 = *(FMetasoundFrontendVersionNumber *)((longlong)param_1 + 0x40);
  (__return_storage_ptr__->Metadata).ClassName.Variant = *(FName *)((longlong)param_1 + 0x38);
  (__return_storage_ptr__->Metadata).Version = FVar6;
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x48);
  uVar4 = *(undefined8 *)((longlong)param_1 + 0x50);
  (__return_storage_ptr__->Metadata).Type = (char)uVar3;
  (__return_storage_ptr__->Metadata).field_0x21 = (char)((ulonglong)uVar3 >> 8);
  (__return_storage_ptr__->Metadata).AccessFlags = (short)((ulonglong)uVar3 >> 0x10);
  (__return_storage_ptr__->Metadata).ChangeID.A = (int)((ulonglong)uVar3 >> 0x20);
  (__return_storage_ptr__->Metadata).ChangeID.B = (int)uVar4;
  (__return_storage_ptr__->Metadata).ChangeID.C = (int)((ulonglong)uVar4 >> 0x20);
  (__return_storage_ptr__->Metadata).ChangeID.D = *(uint *)((longlong)param_1 + 0x58);
  FMetasoundFrontendClassInterface::operator=
            (&__return_storage_ptr__->Interface,
             (FMetasoundFrontendClassInterface *)((longlong)param_1 + 0x60));
  return __return_storage_ptr__;
}

// BuildSingleInterfaceFromPartition @ 14ae65620

FMetasoundFrontendInterface * __cdecl
Metasound::Frontend::SearchEngineQuerySteps::BuildSingleInterfaceFromPartition
          (FMetasoundFrontendInterface *__return_storage_ptr__,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForElementType<Metasound::FFrontendQueryEntry> FVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendInterface *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Metadata).Version.Number.Major = 1;
  (__return_storage_ptr__->Metadata).Version.Number.Minor = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->Metadata).Version.Name.ComparisonIndex = 0;
  (__return_storage_ptr__->Metadata).Version.Name.Number = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayNum = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayMax = 0;
  if (param_1->ArrayNum < 1) {
    local_res8[0] = 0;
    bVar3 = `Metasound::Frontend::SearchEngineQuerySteps::BuildSingleInterfaceFromPartition'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar3) {
      return __return_storage_ptr__;
    }
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetasoundFrontendInterface *)(*pcVar2)();
    return pFVar4;
  }
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar1;
  }
  if ((*(uchar *)((longlong)param_1 + 0xa0) != '\x04') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetasoundFrontendInterface *)(*pcVar2)();
    return pFVar4;
  }
  FMetasoundFrontendInterface::operator=
            (__return_storage_ptr__,(FMetasoundFrontendInterface *)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// CompactSelection @ 14ae66320

void __cdecl
Metasound::FrontendQueryPrivate::CompactSelection
          (TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
           *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (param_1->Pairs).ArrayNum;
  piVar1 = &(param_1->Pairs).ArrayMax;
  if (*piVar1 != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,iVar2,(ForAnyElementType *)param_1,iVar2,piVar1);
  }
  return;
}

// CreateKey @ 14ae69080

FNodeClassRegistryKey * __cdecl
Metasound::Frontend::NodeClassRegistryKey::CreateKey
          (FNodeClassRegistryKey *__return_storage_ptr__,FMetasoundFrontendClassMetadata *param_1)

{
  FName FVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  EMetasoundFrontendClassType EVar5;
  bool bVar6;
  FNodeClassRegistryKey *pFVar7;
  FMetasoundFrontendVersionNumber *pFVar8;
  
  EVar5 = FMetasoundFrontendClassMetadata::GetType(param_1);
  if (EVar5 == Graph) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                       ,0x15e,
                       L"Cannot create key from \'graph\' type. Likely meant to use CreateKey overload that is provided FMetasoundFrontendGraphClass"
                      );
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FNodeClassRegistryKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  EVar5 = FMetasoundFrontendClassMetadata::GetType(param_1);
  FVar3 = (param_1->ClassName).Namespace;
  FVar4 = (param_1->ClassName).Name;
  __return_storage_ptr__->Type = EVar5;
  FVar1 = (param_1->ClassName).Variant;
  (__return_storage_ptr__->ClassName).Namespace = FVar3;
  (__return_storage_ptr__->ClassName).Name = FVar4;
  (__return_storage_ptr__->ClassName).Variant = FVar1;
  pFVar8 = FMetasoundFrontendClassMetadata::GetVersion(param_1);
  __return_storage_ptr__->Version = *pFVar8;
  EVar5 = FMetasoundFrontendClassMetadata::GetType(param_1);
  if (EVar5 == Graph) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                       ,0xa9,
                       L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                      );
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FNodeClassRegistryKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  return __return_storage_ptr__;
}

// CreateKey @ 14ae69140

FNodeClassRegistryKey * __cdecl
Metasound::Frontend::NodeClassRegistryKey::CreateKey
          (FNodeClassRegistryKey *__return_storage_ptr__,FMetasoundFrontendGraphClass *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FMetasoundFrontendVersionNumber *pFVar7;
  
  uVar1 = *(undefined4 *)&param_1->_padding_;
  uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar3 = *(undefined4 *)&param_1->_padding_;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  __return_storage_ptr__->Type = External;
  uVar5 = *(undefined4 *)&param_1->_padding_;
  uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = (FNameEntryId)uVar1;
  (__return_storage_ptr__->ClassName).Namespace.Number = uVar2;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex = (FNameEntryId)uVar3;
  (__return_storage_ptr__->ClassName).Name.Number = uVar4;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = (FNameEntryId)uVar5;
  (__return_storage_ptr__->ClassName).Variant.Number = uVar6;
  pFVar7 = FMetasoundFrontendClassMetadata::GetVersion
                     ((FMetasoundFrontendClassMetadata *)&param_1->_padding_);
  __return_storage_ptr__->Version = *pFVar7;
  return __return_storage_ptr__;
}

// CreateKey @ 14ae69180

FNodeClassRegistryKey * __cdecl
Metasound::Frontend::NodeClassRegistryKey::CreateKey
          (FNodeClassRegistryKey *__return_storage_ptr__,FNodeClassInfo *param_1)

{
  FName FVar1;
  EMetasoundFrontendClassType EVar2;
  FMetasoundFrontendVersionNumber FVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FNodeClassRegistryKey *pFVar7;
  
  EVar2 = param_1->Type;
  FVar1 = (param_1->ClassName).Variant;
  FVar3 = param_1->Version;
  __return_storage_ptr__->Type = EVar2;
  __return_storage_ptr__->Version = FVar3;
  FVar5 = (param_1->ClassName).Name;
  (__return_storage_ptr__->ClassName).Namespace = (param_1->ClassName).Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  (__return_storage_ptr__->ClassName).Variant = FVar1;
  if (EVar2 == Graph) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InClassInfo.Type != EMetasoundFrontendClassType::Graph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                       ,0xb8,
                       L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNodeClassRegistryKey *)(*pcVar4)();
      return pFVar7;
    }
  }
  return __return_storage_ptr__;
}

// CreateKey @ 14ae691f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassRegistryKey * __cdecl
Metasound::Frontend::NodeClassRegistryKey::CreateKey
          (FNodeClassRegistryKey *__return_storage_ptr__,FNodeClassMetadata *param_1)

{
  int iVar1;
  
  __return_storage_ptr__->Type = External;
  FMetasoundFrontendClassName::FMetasoundFrontendClassName
            (&__return_storage_ptr__->ClassName,&param_1->ClassName);
  iVar1 = param_1->MinorVersion;
  (__return_storage_ptr__->Version).Major = param_1->MajorVersion;
  (__return_storage_ptr__->Version).Minor = iVar1;
  return __return_storage_ptr__;
}

// CreateKey @ 14ae69240

FNodeClassRegistryKey * __cdecl
Metasound::Frontend::NodeClassRegistryKey::CreateKey
          (FNodeClassRegistryKey *__return_storage_ptr__,EMetasoundFrontendClassType param_1,
          FString *param_2,int param_3,int param_4)

{
  FMetasoundFrontendVersionNumber FVar1;
  EMetasoundFrontendClassType EVar2;
  FMetasoundFrontendClassName local_28;
  
  local_28.Namespace.ComparisonIndex.Value = 0;
  local_28.Namespace.Number = 0;
  local_28.Name.ComparisonIndex.Value = 0;
  local_28.Name.Number = 0;
  local_28.Variant.ComparisonIndex.Value = 0;
  local_28.Variant.Number = 0;
  FMetasoundFrontendClassName::Parse(param_2,&local_28);
  EVar2 = External;
  if (param_1 != Graph) {
    EVar2 = param_1;
  }
  FVar1.Minor = param_4;
  FVar1.Major = param_3;
  __return_storage_ptr__->Type = EVar2;
  __return_storage_ptr__->Version = FVar1;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  return __return_storage_ptr__;
}

// CreateKeyFromFullClassNameAndMajorVersion @ 14ae692d0

FFrontendQueryKey * __cdecl
Metasound::Frontend::SearchEngineQuerySteps::CreateKeyFromFullClassNameAndMajorVersion
          (FFrontendQueryKey *__return_storage_ptr__,FMetasoundFrontendClassName *param_1,
          int param_2)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar4 = FMetasoundFrontendClassName::ToString(param_1,&local_58);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  FStringFormatArg::FStringFormatArg(&local_28,param_2);
  local_78.ArrayNum = 2;
  iVar6 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_78.AllocatorInstance,2,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(&local_68,L"{0}_v{1}",&local_78);
  iVar2 = local_68.Data.ArrayNum;
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(__return_storage_ptr__->Key)._padding_ + 4);
  (__return_storage_ptr__->Key)._padding_ = 0;
  *(int *)&(__return_storage_ptr__->Key)._padding_ = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_68.Data.ArrayNum,piVar1);
    memcpy((void *)(__return_storage_ptr__->Key)._padding_,_Src.Data,(longlong)iVar2 * 2);
  }
  (__return_storage_ptr__->Key).TypeIndex = '\x02';
  pwVar5 = L"";
  if (local_68.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    iVar6 = local_68.Data.ArrayNum + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar5);
  __return_storage_ptr__->Hash = uVar3;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateKeyFromUClassPathName @ 14ae69470

FFrontendQueryKey * __cdecl
Metasound::Frontend::SearchEngineQuerySteps::CreateKeyFromUClassPathName
          (FFrontendQueryKey *__return_storage_ptr__,FTopLevelAssetPath *param_1)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pFVar3 = FTopLevelAssetPath::ToString(param_1,&local_18);
  ::FString::FString((FString *)__return_storage_ptr__,pFVar3);
  (__return_storage_ptr__->Key).TypeIndex = '\x02';
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  __return_storage_ptr__->Hash = uVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Difference @ 14ae6d470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
__cdecl Metasound::FrontendQueryPrivate::Difference
                  (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   *__return_storage_ptr__,
                  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                  *param_1,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                           *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<Metasound::FFrontendQueryEntry> FVar8;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  ForElementType<Metasound::FFrontendQueryEntry> FVar11;
  ForElementType<Metasound::FFrontendQueryEntry> FVar12;
  undefined1 auStackY_148 [32];
  FIdentityFunctor local_f8 [8];
  ForElementType<Metasound::FFrontendQueryEntry> local_f0;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_148;
  piVar1 = &param_1->ArrayNum;
  if ((*piVar1 == 0) || (piVar2 = &param_2->ArrayNum, *piVar2 == 0)) {
    (__return_storage_ptr__->AllocatorInstance).SecondaryData =
         (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
    FVar10 = (param_1->AllocatorInstance).SecondaryData;
    iVar7 = *piVar1;
    __return_storage_ptr__->ArrayNum = iVar7;
    if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar10;
    }
    if (iVar7 == 0) {
      __return_storage_ptr__->ArrayMax = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                (0xb0,8,iVar7,0,&__return_storage_ptr__->AllocatorInstance,iVar7,
                 &__return_storage_ptr__->ArrayMax);
      FVar10 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)__return_storage_ptr__;
      if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar11 = FVar10;
      }
      ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                ((void *)FVar11,(FFrontendQueryEntry *)param_1,iVar7);
    }
  }
  else {
    FVar10 = (param_1->AllocatorInstance).SecondaryData;
    FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)param_1;
    if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FVar11 = FVar10;
    }
    AlgoImpl::
    IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::Difference_::__l2::<lambda_1>_>_>
              ((FFrontendQueryEntry *)FVar11,*piVar1,local_f8[0],(<lambda_1> *)local_f8);
    FVar10 = (param_2->AllocatorInstance).SecondaryData;
    FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)param_2;
    if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FVar11 = FVar10;
    }
    AlgoImpl::
    IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::Difference_::__l2::<lambda_1>_>_>
              ((FFrontendQueryEntry *)FVar11,*piVar2,local_f8[0],(<lambda_1> *)local_f8);
    FVar10 = (param_1->AllocatorInstance).SecondaryData;
    local_f0.SecondaryData = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
    local_38 = 0;
    local_34 = 1;
    if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar10;
    }
    FVar10 = (param_2->AllocatorInstance).SecondaryData;
    FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)
             ((longlong)*piVar1 * 0xb0 + (longlong)param_1);
    if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      param_2 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar10;
    }
    FVar12 = (ForElementType<Metasound::FFrontendQueryEntry>)
             ((longlong)*piVar2 * 0xb0 + (longlong)param_2);
    FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
    iVar7 = 0;
joined_r0x00014ae6d555:
    if ((ForElementType<Metasound::FFrontendQueryEntry>)param_1 != FVar11) {
      if ((ForElementType<Metasound::FFrontendQueryEntry>)param_2 != FVar12) {
        uVar3 = *(uint *)param_2;
        uVar4 = *(uint *)param_1;
        if ((uVar3 <= uVar4) &&
           ((uVar3 < uVar4 ||
            ((*(uint *)((longlong)param_2 + 4) <= *(uint *)((longlong)param_1 + 4) &&
             ((*(uint *)((longlong)param_1 + 4) != *(uint *)((longlong)param_2 + 4) ||
              ((*(uint *)((longlong)param_2 + 8) <= *(uint *)((longlong)param_1 + 8) &&
               ((*(uint *)((longlong)param_1 + 8) != *(uint *)((longlong)param_2 + 8) ||
                (*(uint *)((longlong)param_2 + 0xc) <= *(uint *)((longlong)param_1 + 0xc))))))))))))
           ) {
          if (((uVar3 < uVar4) ||
              (*(uint *)((longlong)param_2 + 4) < *(uint *)((longlong)param_1 + 4))) ||
             ((*(uint *)((longlong)param_2 + 4) == *(uint *)((longlong)param_1 + 4) &&
              ((*(uint *)((longlong)param_2 + 8) < *(uint *)((longlong)param_1 + 8) ||
               ((*(uint *)((longlong)param_2 + 8) == *(uint *)((longlong)param_1 + 8) &&
                (*(uint *)((longlong)param_2 + 0xc) < *(uint *)((longlong)param_1 + 0xc))))))))) {
            param_2 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                       *)((longlong)param_2 + 0xb0);
          }
          else {
            param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                       *)((longlong)param_1 + 0xb0);
            param_2 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                       *)((longlong)param_2 + 0xb0);
          }
          goto joined_r0x00014ae6d555;
        }
      }
      FVar8 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
      if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar8 = FVar10;
      }
      if ((ulonglong)FVar8 <= param_1) {
        FVar8 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
        if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar8 = FVar10;
        }
        if ((param_1 < (ulonglong)((longlong)local_34 * 0xb0 + (longlong)FVar8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), FVar10 = local_f0.SecondaryData, iVar7 = local_38, bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *)(*pcVar5)();
          return pTVar9;
        }
      }
      if (iVar7 == local_34) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                          (0x8b0,&local_f0,&local_34);
        FVar10 = local_f0.SecondaryData;
      }
      local_38 = iVar7 + 1;
      FVar8 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
      if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar8 = FVar10;
      }
      FFrontendQueryEntry::FFrontendQueryEntry
                ((FFrontendQueryEntry *)((longlong)iVar7 * 0xb0 + (longlong)FVar8),
                 (FFrontendQueryEntry *)param_1);
      param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)param_1 + 0xb0);
      FVar10 = local_f0.SecondaryData;
      iVar7 = local_38;
      goto joined_r0x00014ae6d555;
    }
    (__return_storage_ptr__->AllocatorInstance).SecondaryData =
         (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
    if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      *(undefined8 *)(__return_storage_ptr__->AllocatorInstance).InlineData =
           local_f0.InlineData._0_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 8) =
           local_f0.InlineData._8_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x10) =
           local_f0.InlineData._16_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x18) =
           local_f0.InlineData._24_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x20) =
           local_f0.InlineData._32_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x28) =
           local_f0.InlineData._40_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x30) =
           local_f0.InlineData._48_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x38) =
           local_f0.InlineData._56_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x40) =
           local_f0.InlineData._64_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x48) =
           local_f0.InlineData._72_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x50) =
           local_f0.InlineData._80_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x58) =
           local_f0.InlineData._88_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x60) =
           local_f0.InlineData._96_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x68) =
           local_f0.InlineData._104_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x70) =
           local_f0.InlineData._112_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x78) =
           local_f0.InlineData._120_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x80) =
           local_f0.InlineData._128_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x88) =
           local_f0.InlineData._136_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x90) =
           local_f0.InlineData._144_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0x98) =
           local_f0.InlineData._152_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0xa0) =
           local_f0.InlineData._160_8_;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).InlineData + 0xa8) =
           local_f0.InlineData._168_8_;
    }
    (__return_storage_ptr__->AllocatorInstance).SecondaryData = FVar10;
    __return_storage_ptr__->ArrayMax = local_34;
    local_f0.SecondaryData = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
    __return_storage_ptr__->ArrayNum = iVar7;
    local_38 = 0;
    local_34 = 1;
    DestructItems<Metasound::FFrontendQueryEntry,int>((FFrontendQueryEntry *)&local_f0,0);
    if (local_f0.SecondaryData != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FMemory::Free((void *)local_f0.SecondaryData);
    }
  }
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeMetasoundFrontendNodeTemplateRegistry @ 14ae6d930

void __cdecl EmptyLinkFunctionForGeneratedCodeMetasoundFrontendNodeTemplateRegistry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMetasoundFrontendQuery @ 14ae6d940

void __cdecl EmptyLinkFunctionForGeneratedCodeMetasoundFrontendQuery(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMetasoundFrontendTemplateNodeConfiguration @ 14ae6d950

void __cdecl EmptyLinkFunctionForGeneratedCodeMetasoundFrontendTemplateNodeConfiguration(void)

{
  return;
}

// GetInvalid @ 14ae77260

FNodeClassRegistryKey * __cdecl Metasound::Frontend::NodeClassRegistryKey::GetInvalid(void)

{
  return &InvalidKey;
}

// GetPageOrderForTargetPage @ 14ae785d0

TArrayView<FGuid_const_,int> * __cdecl
Metasound::Frontend::GetPageOrderForTargetPage
          (TArrayView<FGuid_const_,int> *__return_storage_ptr__,FGuid *param_1,
          TArrayView<FGuid_const_,int> *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArrayView<FGuid_const_,int> *pTVar6;
  
  iVar5 = TArrayView<FGuid_const_,int>::Find(param_2,param_1);
  if (iVar5 == -1) {
    __return_storage_ptr__->DataPtr = (FGuid *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  iVar1 = param_2->ArrayNum;
  iVar3 = iVar1;
  if (iVar1 - iVar5 < iVar1) {
    iVar3 = iVar1 - iVar5;
  }
  iVar5 = 0;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  __return_storage_ptr__->ArrayNum = iVar5;
  __return_storage_ptr__->DataPtr = param_2->DataPtr + ((longlong)iVar1 - (longlong)iVar5);
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<FGuid_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 14ae78980

uint __cdecl Metasound::Frontend::GetTypeHash(FConverterNodeClassRegistryKey *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FVar1 = param_1->ToDataType;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  FVar1 = param_1->FromDataType;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar5 = (FVar1.Number - uVar2) + uVar3 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar4 = (uVar2 - uVar5) - uVar3 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar2 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar3 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar4 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14ae78a50

uint __cdecl Metasound::Frontend::GetTypeHash(FGraphClassRegistryKey *param_1)

{
  EMetasoundFrontendClassType EVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  FVar2 = (param_1->AssetPath).AssetName;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = (param_1->AssetPath).PackageName;
  uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar5 = FVar3.Number + uVar5;
  uVar6 = ::GetTypeHash(&(param_1->NodeKey).ClassName);
  EVar1 = (param_1->NodeKey).Type;
  uVar7 = (uint)EVar1 * 0x40 + uVar6 + (EVar1 >> 2) + 0x9e3779b9 ^ (uint)EVar1;
  uVar6 = (param_1->NodeKey).Version.Major;
  uVar7 = (uVar7 >> 2) +
          ((param_1->NodeKey).Version.Minor + -0x61c88647 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6) +
          uVar7 * 0x40 + -0x61c88647 ^ uVar7;
  uVar6 = param_1->ObjectID;
  return (uVar6 >> 2) + 0x9e3779b9 +
         ((uVar7 >> 2) + 0x9e3779b9 +
          (uVar5 * 0x40 + uVar4 + FVar2.Number + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5) + uVar7 * 0x40 ^
         uVar7) + uVar6 * 0x40 ^ uVar6;
}

// GetTypeHash @ 14ae78b50

uint __cdecl Metasound::Frontend::GetTypeHash(FNodeClassRegistryKey *param_1)

{
  EMetasoundFrontendClassType EVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = ::GetTypeHash(&param_1->ClassName);
  EVar1 = param_1->Type;
  uVar2 = (param_1->Version).Major;
  uVar3 = (uint)EVar1 * 0x40 + uVar3 + (EVar1 >> 2) + 0x9e3779b9 ^ (uint)EVar1;
  return (uVar3 >> 2) + 0x9e3779b9 +
         ((param_1->Version).Minor + -0x61c88647 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2) +
         uVar3 * 0x40 ^ uVar3;
}

// GetTypeHash @ 14ae78bd0

uint __cdecl Metasound::GetTypeHash(FFrontendQueryEntry *param_1)

{
  ulong64 uVar1;
  
  uVar1 = CityHash64((char *)param_1,0x10);
  return (uint)uVar1;
}

// GetTypeHash @ 14ae78be0

uint __cdecl Metasound::GetTypeHash(FFrontendQueryKey *param_1)

{
  return param_1->Hash;
}

// IsEqual @ 14ae7a4c0

bool __cdecl
Metasound::Frontend::NodeClassRegistryKey::IsEqual
          (FMetasoundFrontendClassMetadata *param_1,FMetasoundFrontendClassMetadata *param_2)

{
  EMetasoundFrontendClassType EVar1;
  EMetasoundFrontendClassType EVar2;
  FMetasoundFrontendVersionNumber *pFVar3;
  FMetasoundFrontendVersionNumber *pFVar4;
  
  if ((((param_1->ClassName).Namespace == (param_2->ClassName).Namespace) &&
      ((param_1->ClassName).Name == (param_2->ClassName).Name)) &&
     ((param_1->ClassName).Variant == (param_2->ClassName).Variant)) {
    EVar1 = FMetasoundFrontendClassMetadata::GetType(param_1);
    EVar2 = FMetasoundFrontendClassMetadata::GetType(param_2);
    if (EVar1 == EVar2) {
      pFVar3 = FMetasoundFrontendClassMetadata::GetVersion(param_2);
      pFVar4 = FMetasoundFrontendClassMetadata::GetVersion(param_1);
      if ((pFVar4->Major == pFVar3->Major) && (pFVar4->Minor == pFVar3->Minor)) {
        return true;
      }
    }
  }
  return false;
}

// IsEqual @ 14ae7a550

bool __cdecl
Metasound::Frontend::NodeClassRegistryKey::IsEqual
          (FNodeClassInfo *param_1,FMetasoundFrontendClassMetadata *param_2)

{
  EMetasoundFrontendClassType EVar1;
  EMetasoundFrontendClassType EVar2;
  FMetasoundFrontendVersionNumber *pFVar3;
  
  if ((((param_1->ClassName).Namespace == (param_2->ClassName).Namespace) &&
      ((param_1->ClassName).Name == (param_2->ClassName).Name)) &&
     ((param_1->ClassName).Variant == (param_2->ClassName).Variant)) {
    EVar1 = param_1->Type;
    EVar2 = FMetasoundFrontendClassMetadata::GetType(param_2);
    if (EVar1 == EVar2) {
      pFVar3 = FMetasoundFrontendClassMetadata::GetVersion(param_2);
      if (((param_1->Version).Major == pFVar3->Major) && ((param_1->Version).Minor == pFVar3->Minor)
         ) {
        return true;
      }
    }
  }
  return false;
}

// IsEqual @ 14ae7a5d0

bool __cdecl
Metasound::Frontend::NodeClassRegistryKey::IsEqual
          (FNodeClassRegistryKey *param_1,FNodeClassRegistryKey *param_2)

{
  if ((((param_1->Type == param_2->Type) &&
       ((param_1->ClassName).Namespace == (param_2->ClassName).Namespace)) &&
      ((param_1->ClassName).Name == (param_2->ClassName).Name)) &&
     ((((param_1->ClassName).Variant == (param_2->ClassName).Variant &&
       ((param_1->Version).Major == (param_2->Version).Major)) &&
      ((param_1->Version).Minor == (param_2->Version).Minor)))) {
    return true;
  }
  return false;
}

// IsValid @ 14ae7ace0

bool __cdecl Metasound::Frontend::NodeClassRegistryKey::IsValid(FNodeClassRegistryKey *param_1)

{
  bool bVar1;
  
  if (param_1->Type != Invalid) {
    bVar1 = FMetasoundFrontendClassName::IsValid(&param_1->ClassName);
    if (bVar1) {
      bVar1 = FMetasoundFrontendVersionNumber::IsValid(&param_1->Version);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// LogAutoUpdateWarning @ 14ae7bbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Metasound::Frontend::DocumentTransform::LogAutoUpdateWarning(FString *param_1)

{
  if ((bVersioningLoggingEnabled) && (2 < (byte)LogMetaSound._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    return;
  }
  return;
}

// RegisterNodeTemplate @ 14ae81b70

void __cdecl
Metasound::Frontend::RegisterNodeTemplate
          (TUniquePtr<Metasound::Frontend::INodeTemplate,TDefaultDelete<Metasound::Frontend::INodeTemplate>_>
           *param_1)

{
  FMetasoundFrontendClassMetadata *this;
  INodeTemplate *pIVar1;
  INodeTemplateRegistry IVar2;
  code *pcVar3;
  INodeTemplateRegistryEntry IVar4;
  bool bVar5;
  EMetasoundFrontendClassType EVar6;
  longlong lVar7;
  FNodeClassRegistry *this_00;
  FNodeClassRegistry *pFVar8;
  INodeTemplateRegistry *pIVar9;
  FMetasoundFrontendVersionNumber *pFVar10;
  undefined1 local_res8 [16];
  INodeTemplate *local_res18;
  TUniquePtr<Metasound::Frontend::INodeTemplateRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeTemplateRegistryEntry>_>
  local_res20;
  longlong *local_a8;
  EMetasoundFrontendClassType local_a0 [4];
  FMetasoundFrontendClassName local_9c;
  FMetasoundFrontendVersionNumber local_84;
  EMetasoundFrontendClassType *local_78;
  INodeTemplate **local_70;
  longlong local_68;
  longlong **local_60;
  FNodeClassRegistryKey local_58;
  
  local_res20.Ptr = ::operator_new(0xe0);
  if (local_res20.Ptr == (INodeTemplateRegistryEntry *)0x0) {
    local_res20.Ptr = (INodeTemplateRegistryEntry *)0x0;
  }
  else {
    pIVar1 = param_1->Ptr;
    *local_res20.Ptr =
         (INodeTemplateRegistryEntry)
         &`Metasound::Frontend::RegisterNodeTemplate'::`2'::FTemplateRegistryEntry::_vftable_;
    lVar7 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1);
    FNodeClassInfo::FNodeClassInfo
              ((FNodeClassInfo *)(local_res20.Ptr + 1),
               (FMetasoundFrontendClassMetadata *)(lVar7 + 0x18));
    lVar7 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1);
    local_res20.Ptr[10] = (INodeTemplateRegistryEntry)&___7FMetasoundFrontendClass__6B_;
    IVar4 = *(INodeTemplateRegistryEntry *)(lVar7 + 0x10);
    local_res20.Ptr[0xb] = *(INodeTemplateRegistryEntry *)(lVar7 + 8);
    local_res20.Ptr[0xc] = IVar4;
    IVar4 = *(INodeTemplateRegistryEntry *)(lVar7 + 0x20);
    local_res20.Ptr[0xd] = *(INodeTemplateRegistryEntry *)(lVar7 + 0x18);
    local_res20.Ptr[0xe] = IVar4;
    IVar4 = *(INodeTemplateRegistryEntry *)(lVar7 + 0x30);
    local_res20.Ptr[0xf] = *(INodeTemplateRegistryEntry *)(lVar7 + 0x28);
    local_res20.Ptr[0x10] = IVar4;
    IVar4 = *(INodeTemplateRegistryEntry *)(lVar7 + 0x40);
    local_res20.Ptr[0x11] = *(INodeTemplateRegistryEntry *)(lVar7 + 0x38);
    local_res20.Ptr[0x12] = IVar4;
    *(undefined4 *)(local_res20.Ptr + 0x13) = *(undefined4 *)(lVar7 + 0x48);
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
              ((FMetasoundFrontendClassInterface *)(local_res20.Ptr + 0x14),
               (FMetasoundFrontendClassInterface *)(lVar7 + 0x50));
  }
  pFVar8 = FNodeClassRegistry::LazySingleton;
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    this_00 = ::operator_new(0x182b0);
    pFVar8 = (FNodeClassRegistry *)0x0;
    if (this_00 != (FNodeClassRegistry *)0x0) {
      pFVar8 = FNodeClassRegistry::FNodeClassRegistry(this_00);
    }
  }
  FNodeClassRegistry::LazySingleton = pFVar8;
  FNodeClassRegistry::RegisterNodeTemplate(FNodeClassRegistry::LazySingleton,&local_58,&local_res20)
  ;
  pIVar9 = INodeTemplateRegistry::Get();
  if (param_1->Ptr == (INodeTemplate *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4935647954091376698>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeTemplateRegistry.cpp"
                       ,0x3a,"InTemplate.IsValid()");
    if (bVar5) {
code_r0x00014ae81de4:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    lVar7 = (**(code **)((longlong)*param_1->Ptr + 0x30))();
    this = (FMetasoundFrontendClassMetadata *)(lVar7 + 0x18);
    local_a0[0] = FMetasoundFrontendClassMetadata::GetType(this);
    local_9c.Namespace = (this->ClassName).Namespace;
    local_9c.Name = *(FName *)(lVar7 + 0x20);
    local_9c.Variant = *(FName *)(lVar7 + 0x28);
    pFVar10 = FMetasoundFrontendClassMetadata::GetVersion(this);
    local_84 = *pFVar10;
    EVar6 = FMetasoundFrontendClassMetadata::GetType(this);
    if ((EVar6 == Graph) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                           ,0xa9,
                           L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((local_a0[0] == Invalid) ||
        (bVar5 = FMetasoundFrontendClassName::IsValid(&local_9c), !bVar5)) ||
       (bVar5 = FMetasoundFrontendVersionNumber::IsValid(&local_84), !bVar5)) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4935647954091376701>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeTemplateRegistry.cpp"
                         ,0x3d,"Key.IsValid()");
      if (bVar5) goto code_r0x00014ae81de4;
    }
    else {
      local_res18 = param_1->Ptr;
      local_78 = local_a0;
      param_1->Ptr = (INodeTemplate *)0x0;
      local_70 = &local_res18;
      TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_&&>_>
                ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
                  *)(pIVar9 + 1),
                 (TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_&&>
                  *)local_res8,(bool *)&local_78);
      IVar2 = pIVar9[1];
      if (local_res18 != (INodeTemplate *)0x0) {
        (**(code **)((longlong)*local_res18 + 8))(local_res18,1);
      }
      local_a8 = *(longlong **)((longlong)IVar2 + (longlong)(int)local_res8._0_4_ * 0x38 + 0x28);
      local_68 = (**(code **)(*local_a8 + 0x30))();
      local_68 = local_68 + 0x18;
      local_60 = &local_a8;
      TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FMetasoundFrontendClassName_const_&,Metasound::Frontend::INodeTemplate_const_*_&&>_>
                ((TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
                  *)(pIVar9 + 0xb),
                 (TPairInitializer<FMetasoundFrontendClassName_const_&,Metasound::Frontend::INodeTemplate_const_*_&&>
                  *)(local_res8 + 8),(bool *)&local_68);
    }
  }
  if (local_res20.Ptr != (INodeTemplateRegistryEntry *)0x0) {
    (**(code **)*local_res20.Ptr)(local_res20.Ptr,1);
  }
  return;
}

// UnregisterNodeTemplate @ 14ae8eb60

void __cdecl
Metasound::Frontend::UnregisterNodeTemplate
          (FMetasoundFrontendClassName *param_1,FMetasoundFrontendVersionNumber *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNodeClassRegistry *pFVar4;
  INodeTemplateRegistryEntry *pIVar5;
  FName *pFVar6;
  FNodeTemplateRegistry *this_00;
  FLLMScope local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  FNodeClassRegistryKey local_a8;
  FNodeClassRegistryTransaction local_80;
  
  local_a8.ClassName.Namespace = param_1->Namespace;
  local_a8.ClassName.Name = param_1->Name;
  local_a8.Version = *param_2;
  local_a8.ClassName.Variant = param_1->Variant;
  local_a8.Type = Template;
  bVar2 = FMetasoundFrontendClassName::IsValid(&local_a8.ClassName);
  if ((!bVar2) || (bVar2 = FMetasoundFrontendVersionNumber::IsValid(&local_a8.Version), !bVar2)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4935647954091376861>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeTemplateRegistry.cpp"
                       ,0xdd,"Key.IsValid()");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    pFVar4 = ::operator_new(0x182b0);
    if (pFVar4 == (FNodeClassRegistry *)0x0) {
      FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
    }
    else {
      FNodeClassRegistry::LazySingleton = FNodeClassRegistry::FNodeClassRegistry(pFVar4);
    }
  }
  pFVar4 = FNodeClassRegistry::LazySingleton;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  if ((((local_a8.Type != Invalid) &&
       (bVar2 = FMetasoundFrontendClassName::IsValid(&local_a8.ClassName), bVar2)) &&
      (bVar2 = FMetasoundFrontendVersionNumber::IsValid(&local_a8.Version), bVar2)) &&
     (pIVar5 = FNodeClassRegistry::FindNodeTemplateEntry(pFVar4,&local_a8),
     pIVar5 != (INodeTemplateRegistryEntry *)0x0)) {
    QueryPerformanceCounter(&local_res18);
    this = (pFVar4->TransactionBuffer).Object;
    pFVar6 = (FName *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5);
    local_80.Type = NodeUnregistration;
    local_80.NodeClassInfo.ClassName.Namespace = *pFVar6;
    local_80.NodeClassInfo.ClassName.Name = pFVar6[1];
    local_80.NodeClassInfo.ClassName.Variant = pFVar6[2];
    local_80.NodeClassInfo.Type = (EMetasoundFrontendClassType)pFVar6[3].ComparisonIndex.Value;
    local_80.NodeClassInfo.AssetClassID._0_8_ = *(undefined8 *)&pFVar6[3].Number;
    local_80.NodeClassInfo.AssetClassID._8_8_ = *(undefined8 *)&pFVar6[4].Number;
    local_80.NodeClassInfo.AssetPath.PackageName = *(FName *)&pFVar6[5].Number;
    local_80.NodeClassInfo.AssetPath.AssetName = *(FName *)&pFVar6[6].Number;
    local_80.NodeClassInfo.Version = *(FMetasoundFrontendVersionNumber *)&pFVar6[7].Number;
    local_80.Timestamp = (ulong64)local_res18;
    TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::AddTransaction
              (this,&local_80);
    lpCriticalSection = &pFVar4->RegistryMapsCriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(pFVar4->RegisteredNodeTemplates).field_0x8 !=
        *(int *)&(pFVar4->RegisteredNodeTemplates).field_0x34) {
      uVar3 = ::GetTypeHash(&local_a8.ClassName);
      uVar3 = (uint)local_a8.Type * 0x40 + uVar3 + (local_a8.Type >> 2) + 0x9e3779b9 ^
              (uint)local_a8.Type;
      TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<Metasound::Frontend::FNodeClassRegistryKey>
                ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
                  *)&pFVar4->RegisteredNodeTemplates,
                 (uVar3 >> 2) +
                 (local_a8.Version.Major * 0x40 + local_a8.Version.Minor +
                  ((uint)local_a8.Version.Major >> 2) + 0x9e3779b9 ^ local_a8.Version.Major) +
                 0x9e3779b9 + uVar3 * 0x40 ^ uVar3,&local_a8);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  this_00 = (FNodeTemplateRegistry *)INodeTemplateRegistry::Get();
  FNodeTemplateRegistry::Unregister(this_00,&local_a8);
  return;
}

// Z_Construct_UScriptStruct_FMetaSoundClassInterfaceInfo @ 14ae90cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMetaSoundClassInterfaceInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassInterfaceInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMetaSoundClassInterfaceInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMetaSoundClassInterfaceInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassInterfaceInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMetaSoundClassInterfaceInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FMetaSoundClassVertexCollectionInfo @ 14ae90d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMetaSoundClassVertexCollectionInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassVertexCollectionInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMetaSoundClassVertexCollectionInfo.InnerSingleton
               ,&Z_Construct_UScriptStruct_FMetaSoundClassVertexCollectionInfo_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassVertexCollectionInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMetaSoundClassVertexCollectionInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FMetaSoundFrontendTemplateNodeConfiguration @ 14ae90df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMetaSoundFrontendTemplateNodeConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendTemplateNodeConfiguration.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMetaSoundFrontendTemplateNodeConfiguration.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMetaSoundFrontendTemplateNodeConfiguration_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendTemplateNodeConfiguration.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMetaSoundFrontendTemplateNodeConfiguration.
           InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams @ 14ae90e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNodeTemplateGenerateInterfaceParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNodeTemplateGenerateInterfaceParams.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNodeTemplateGenerateInterfaceParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNodeTemplateGenerateInterfaceParams.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundDisableAsyncGraphRegistration'' @ 1504247e0

void __cdecl
Metasound::Frontend::ConsoleVariables::
_dynamic_atexit_destructor_for__CVarMetaSoundDisableAsyncGraphRegistration__(void)

{
  CVarMetaSoundDisableAsyncGraphRegistration._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundDisableAsyncGraphRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundFrontendDiscardStreamedRegistryTransactions'' @ 150424800

void __cdecl
Metasound::Frontend::
_dynamic_atexit_destructor_for__CVarMetaSoundFrontendDiscardStreamedRegistryTransactions__(void)

{
  CVarMetaSoundFrontendDiscardStreamedRegistryTransactions._0_8_ = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundFrontendDiscardStreamedRegistryTransactions);
  return;
}

// `dynamic_atexit_destructor_for_'Connectability'' @ 150424820

void __cdecl
`Metasound::Frontend::FOutputNodeOutputController::CanConnectTo'::__l2::
_dynamic_atexit_destructor_for__Connectability__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Connectability.PossibleConverterNodeClasses.AllocatorInstance.Data;
  if (Connectability.PossibleConverterNodeClasses.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (Connectability.PossibleConverterNodeClasses.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Conversions'' @ 150424840

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Conversions__(void)

{
  if (Conversions.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042484f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Conversions.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EnumConversions'' @ 150424860

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__EnumConversions__(void)

{
  if (EnumConversions.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042486f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*EnumConversions.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Functions'' @ 150424880

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Functions__(void)

{
  if (Functions.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042488f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Functions.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Graphs'' @ 1504248a0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Graphs__(void)

{
  if (Graphs.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504248af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Graphs.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Inputs'' @ 1504248c0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Inputs__(void)

{
  if (Inputs.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504248cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Inputs.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Outputs'' @ 1504248e0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Outputs__(void)

{
  if (Outputs.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504248ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Outputs.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Registry'' @ 150424900

void __cdecl
`Metasound::Frontend::INodeTemplateRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Registry__
          (void)

{
  ::Registry.TemplateByClassName._72_4_ = 0;
  if (::Registry.TemplateByClassName._64_8_ != 0) {
    FMemory::Free((void *)::Registry.TemplateByClassName._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Registry.TemplateByClassName);
  ::Registry.Templates._72_4_ = 0;
  if (::Registry.Templates._64_8_ != 0) {
    FMemory::Free((void *)::Registry.Templates._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Registry.Templates);
  return;
}

// `dynamic_atexit_destructor_for_'SearchEngine'' @ 150424960

void __cdecl
`Metasound::Frontend::ISearchEngine::Get'::__l2::_dynamic_atexit_destructor_for__SearchEngine__
          (void)

{
  Metasound::Frontend::
  TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>
            (&SearchEngine.FindInterfaceWithHighestVersionQuery);
  Metasound::Frontend::
  TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>
            (&SearchEngine.FindAllDefaultInterfaceVersionsForUClassQuery);
  Metasound::Frontend::
  TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>
            (&SearchEngine.FindAllRegisteredInterfacesWithNameQuery);
  Metasound::Frontend::
  TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>
            (&SearchEngine.FindClassWithHighestMinorVersionQuery);
  return;
}

// `dynamic_atexit_destructor_for_'Variables'' @ 1504249a0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Variables__(void)

{
  if (Variables.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504249af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Variables.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// operator() @ 15055e910

bool __thiscall
`Metasound::Frontend::SearchEngineQuerySteps::BuildSingleClassFromPartition'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5349767403691572982>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5349767403691572982>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15055e950

bool __thiscall
`Metasound::Frontend::SearchEngineQuerySteps::BuildSingleInterfaceFromPartition'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5349767403691572961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5349767403691572961>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

