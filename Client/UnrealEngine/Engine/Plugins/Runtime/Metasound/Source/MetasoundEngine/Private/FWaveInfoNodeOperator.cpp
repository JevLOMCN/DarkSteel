// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// FWaveInfoNodeOperator @ 14b34b530

FWaveInfoNodeOperator * __thiscall
Metasound::FWaveInfoNodeOperator::FWaveInfoNodeOperator
          (FWaveInfoNodeOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FWaveAsset> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FWaveInfoNodeOperator *pFVar5;
  
  this->_padding_ = (longlong)&___7FWaveInfoNodeOperator_Metasound__6B_;
  *(undefined ***)&this->WaveAsset = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->WaveAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->WaveAsset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->WaveAsset =
       &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->DurationSeconds = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  puVar4 = ::operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->DurationSeconds).field_0x8 = 0x10;
    *(undefined8 *)&(this->DurationSeconds).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &
              ___7__TIntrusiveReferenceController_VFTime_Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    puVar4[2] = 0;
    *(undefined8 **)&(this->DurationSeconds).field_0x8 = puVar4 + 2;
    *(undefined8 **)&(this->DurationSeconds).field_0x10 = puVar4;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FWaveInfoNodeOperator *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  *(undefined ***)&this->DurationSeconds =
       &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
  TDataWriteReference<FString>::CreateNew<wchar_t_const_(&)[1]>
            (&this->NameOutput,(wchar_t (*) [1])L"");
  TDataWriteReference<FString>::CreateNew<wchar_t_const_(&)[1]>
            (&this->PathOutput,(wchar_t (*) [1])L"");
  (this->SoundWaveProxy).Object = (FSoundWaveProxy *)0x0;
  (this->SoundWaveProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  Execute(this);
  return this;
}

// operator() @ 14b359140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FWaveInfoNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  longlong *plVar1;
  int *piVar2;
  ITextData *pIVar3;
  TRefCountPtr<ITextData> TVar4;
  int iVar5;
  FText *pFVar6;
  FVertexInterface *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  FName local_78;
  FText local_70;
  undefined1 local_60 [48];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName((FName *)&local_70,"Get Wave Duration");
  ::FName::FName(&local_78," ");
  Metasound::FNodeClassName::FNodeClassName
            ((FNodeClassName *)local_60,&Metasound::EngineNodes::Namespace,(FName *)&local_70,
             &local_78);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = (FNameEntryId)local_60._0_4_;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_60._4_4_;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex = (FNameEntryId)local_60._8_4_;
  (__return_storage_ptr__->ClassName).Name.Number = local_60._12_4_;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = (FNameEntryId)local_60._16_4_;
  (__return_storage_ptr__->ClassName).Variant.Number = local_60._20_4_;
  pFVar6 = FText::FText(&local_70);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar6);
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::FText(&local_70);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  TVar4.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_78);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar7 = Metasound::FWaveInfoNodeOperator::DeclareVertexInterface((FVertexInterface *)local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar7);
  Metasound::FVertexInterface::~FVertexInterface((FVertexInterface *)local_60);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar2 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar2);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar8 = pFVar8 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar4 = Metasound::NodeCategories::Debug.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Debug.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_78);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Debug.Flags;
  FText::FText((FText *)local_60);
  FText::FText((FText *)(local_60 + 0x10));
  FText::FText((FText *)(local_60 + 0x20));
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  lVar10 = 3;
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)local_60,3,
             (__return_storage_ptr__->Keywords).ArrayMax);
  puVar9 = local_30;
  do {
    plVar1 = (longlong *)(puVar9 + -0x10);
    puVar9 = puVar9 + -0x10;
    lVar10 = lVar10 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar10 != 0);
  return __return_storage_ptr__;
}

// BindInputs @ 14b366140

void __thiscall
Metasound::FWaveInfoNodeOperator::BindInputs
          (FWaveInfoNodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FWaveAsset> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FWaveAsset> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FWaveAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&WaveInfoNodeParameterNames::ParamWaveAssetName);
  local_res18[0] = &this->WaveAsset;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b3661d0

void __thiscall
Metasound::FWaveInfoNodeOperator::BindOutputs
          (FWaveInfoNodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTime> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTime> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&WaveInfoNodeParameterNames::ParamDurationSecondsName);
  local_res18 = &this->DurationSeconds;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&WaveInfoNodeParameterNames::OutParamAssetNameName);
  local_res18 = (TDataWriteReference<Metasound::FTime> *)&this->NameOutput;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<FString>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&WaveInfoNodeParameterNames::OutParamAssetPathName);
  local_res18 = (TDataWriteReference<Metasound::FTime> *)&this->PathOutput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<FString>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// CreateOperator @ 14b388aa0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FWaveInfoNodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FWaveInfoNodeOperator *this_00;
  FWaveInfoNodeOperator *pFVar2;
  FName local_res8;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WaveInfoNodeParameterNames::ParamWaveAssetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveAsset>
            (this,(TDataReadReference<Metasound::FWaveAsset> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x98);
  pFVar2 = (FWaveInfoNodeOperator *)0x0;
  if (this_00 != (FWaveInfoNodeOperator *)0x0) {
    pFVar2 = FWaveInfoNodeOperator
                       (this_00,pFVar1,(TDataReadReference<Metasound::FWaveAsset> *)local_28);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b397a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FWaveInfoNodeOperator::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<FString> *pTVar3;
  TOutputDataVertex<FString> *pTVar4;
  TOutputDataVertex<Metasound::FTime> *pTVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_178 [32];
  FInputVertexInterface local_148;
  FOutputVertexInterface local_128;
  FOutputVertexInterfaceDeclarationBuilder local_108;
  FInputVertexInterfaceDeclarationBuilder local_e0;
  TOutputDataVertex<FString> local_b8;
  TOutputDataVertex<FString> local_98;
  TOutputDataVertex<Metasound::FTime> local_78;
  TInputDataVertex<Metasound::FWaveAsset> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = TOutputDataVertex<FString>::TOutputDataVertex<FString><>
                         (&local_b8,&WaveInfoNodeParameterNames::OutParamAssetPathName,
                          &FDataVertexMetadata::EmptyBasic);
      pTVar4 = TOutputDataVertex<FString>::TOutputDataVertex<FString><>
                         (&local_98,&WaveInfoNodeParameterNames::OutParamAssetNameName,
                          &FDataVertexMetadata::EmptyBasic);
      pTVar5 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                         (&local_78,&WaveInfoNodeParameterNames::ParamDurationSecondsName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_128);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_108,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
                 &local_128.SubInterfaces);
      if ((local_108.Vertices)->ArrayMax < 3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,3,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
                   &(local_108.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_108,(FOutputDataVertex *)pTVar5);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_108,(FOutputDataVertex *)pTVar4);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_108,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_108);
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FWaveAsset>::TInputDataVertex<Metasound::FWaveAsset><>
                         (&local_58,&WaveInfoNodeParameterNames::ParamWaveAssetName,
                          &FDataVertexMetadata::EmptyBasic);
      local_148._padding_ = 0;
      local_148._padding_ = 0;
      local_148.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.SubInterfaces.ArrayNum = 0;
      local_148.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_e0,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_148,
                 &local_148.SubInterfaces);
      if ((local_e0.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
                   &(local_e0.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_e0,pFVar6);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_e0);
      FVertexInterface::FVertexInterface(&::Interface,&local_148,&local_128);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
                 local_148.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_148._padding_,(int)local_148._padding_);
      if ((FInputDataVertex *)local_148._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (0xc < (byte)local_58._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
                 local_128.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_128._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_128._padding_);
      }
      atexit(`Metasound::FWaveInfoNodeOperator::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&::Interface);
  return __return_storage_ptr__;
}

// Execute @ 14b3a0ce0

void __thiscall Metasound::FWaveInfoNodeOperator::Execute(FWaveInfoNodeOperator *this)

{
  TSharedPtr<FSoundWaveProxy,1> *this_00;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> *paVar4;
  FSoundWaveProxy *pFVar5;
  FName *pFVar6;
  FString *pFVar7;
  int iVar8;
  float fVar9;
  FName local_res8;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *pTStack_20;
  FString local_18;
  
  plVar1 = *(longlong **)&(this->WaveAsset).field_0x8;
  pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
  pFVar5 = (FSoundWaveProxy *)*plVar1;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  this_00 = &this->SoundWaveProxy;
  if (this_00->Object != pFVar5) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    pTVar3 = (this->SoundWaveProxy).SharedReferenceCount.ReferenceController;
    this_00->Object = pFVar5;
    (this->SoundWaveProxy).SharedReferenceCount.ReferenceController = pTVar2;
    local_28 = (undefined1  [8])pFVar5;
    pTStack_20 = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((this_00->Object == (FSoundWaveProxy *)0x0) ||
       (pFVar5 = (FSoundWaveProxy *)**(undefined8 **)&(this->WaveAsset).field_0x8,
       pFVar5 == (FSoundWaveProxy *)0x0)) {
      **(undefined8 **)&(this->DurationSeconds).field_0x8 = 0;
      ::FString::operator=(*(FString **)&(this->NameOutput).field_0x8,L"");
      ::FString::operator=(*(FString **)&(this->PathOutput).field_0x8,L"");
    }
    else {
      fVar9 = FSoundWaveProxy::GetDuration(pFVar5);
      **(double **)&(this->DurationSeconds).field_0x8 = (double)fVar9;
      pFVar5 = TSharedPtr<FSoundWaveProxy,1>::operator->(this_00);
      pFVar6 = FSoundWaveProxy::GetFName(pFVar5);
      local_res8 = *pFVar6;
      pFVar7 = ::FName::ToString(&local_res8,&local_18);
      ::FString::operator=(*(FString **)&(this->NameOutput).field_0x8,pFVar7);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      local_28 = (undefined1  [8])0x0;
      pTStack_20 = (TReferenceControllerBase<1> *)0x0;
      pFVar5 = TSharedPtr<FSoundWaveProxy,1>::operator->(this_00);
      pFVar6 = FSoundWaveProxy::GetPackageName(pFVar5);
      ::FName::AppendString(pFVar6,(FString *)local_28);
      if (local_res8 != (FName)0x0) {
        ::FString::AppendChars((FString *)local_28,L".",1);
        ::FName::AppendString(&local_res8,(FString *)local_28);
      }
      iVar8 = (int)pTStack_20 + -1;
      if ((int)pTStack_20 == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange(*(FString **)&(this->PathOutput).field_0x8,(wchar_t *)local_28,iVar8);
      if (local_28 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_28);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// GetNodeInfo @ 14b3bddd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FWaveInfoNodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FWaveInfoNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FWaveInfoNodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// Reset @ 14b3daf50

void __thiscall
Metasound::FWaveInfoNodeOperator::Reset(FWaveInfoNodeOperator *this,FResetParams *param_1)

{
  TSharedPtr<FSoundWaveProxy,1> *this_00;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> *paVar4;
  FSoundWaveProxy *pFVar5;
  FName *pFVar6;
  FString *pFVar7;
  int iVar8;
  float fVar9;
  FName FStackX_8;
  undefined1 auStack_28 [8];
  TReferenceControllerBase<1> *pTStack_20;
  FString FStack_18;
  
  plVar1 = *(longlong **)&(this->WaveAsset).field_0x8;
  pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
  pFVar5 = (FSoundWaveProxy *)*plVar1;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  this_00 = &this->SoundWaveProxy;
  if (this_00->Object != pFVar5) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    pTVar3 = (this->SoundWaveProxy).SharedReferenceCount.ReferenceController;
    this_00->Object = pFVar5;
    (this->SoundWaveProxy).SharedReferenceCount.ReferenceController = pTVar2;
    auStack_28 = (undefined1  [8])pFVar5;
    pTStack_20 = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((this_00->Object == (FSoundWaveProxy *)0x0) ||
       (pFVar5 = (FSoundWaveProxy *)**(undefined8 **)&(this->WaveAsset).field_0x8,
       pFVar5 == (FSoundWaveProxy *)0x0)) {
      **(undefined8 **)&(this->DurationSeconds).field_0x8 = 0;
      ::FString::operator=(*(FString **)&(this->NameOutput).field_0x8,L"");
      ::FString::operator=(*(FString **)&(this->PathOutput).field_0x8,L"");
    }
    else {
      fVar9 = FSoundWaveProxy::GetDuration(pFVar5);
      **(double **)&(this->DurationSeconds).field_0x8 = (double)fVar9;
      pFVar5 = TSharedPtr<FSoundWaveProxy,1>::operator->(this_00);
      pFVar6 = FSoundWaveProxy::GetFName(pFVar5);
      FStackX_8 = *pFVar6;
      pFVar7 = ::FName::ToString(&FStackX_8,&FStack_18);
      ::FString::operator=(*(FString **)&(this->NameOutput).field_0x8,pFVar7);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      auStack_28 = (undefined1  [8])0x0;
      pTStack_20 = (TReferenceControllerBase<1> *)0x0;
      pFVar5 = TSharedPtr<FSoundWaveProxy,1>::operator->(this_00);
      pFVar6 = FSoundWaveProxy::GetPackageName(pFVar5);
      ::FName::AppendString(pFVar6,(FString *)auStack_28);
      if (FStackX_8 != (FName)0x0) {
        ::FString::AppendChars((FString *)auStack_28,L".",1);
        ::FName::AppendString(&FStackX_8,(FString *)auStack_28);
      }
      iVar8 = (int)pTStack_20 + -1;
      if ((int)pTStack_20 == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange(*(FString **)&(this->PathOutput).field_0x8,(wchar_t *)auStack_28,iVar8)
      ;
      if (auStack_28 != (undefined1  [8])0x0) {
        FMemory::Free((void *)auStack_28);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

