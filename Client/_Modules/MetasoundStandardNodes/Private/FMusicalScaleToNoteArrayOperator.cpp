// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FMusicalScaleToNoteArrayOperator @ 14b1411e0

FMusicalScaleToNoteArrayOperator * __thiscall
Metasound::FMusicalScaleToNoteArrayOperator::FMusicalScaleToNoteArrayOperator
          (FMusicalScaleToNoteArrayOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_2,
          TDataReadReference<bool> *param_3)

{
  Scale SVar1;
  longlong lVar2;
  Scale *pSVar3;
  undefined1 *puVar4;
  ScaleDegreeSet *this_00;
  TArrayView<float,int> *pTVar5;
  TArrayView<float,int> local_18;
  
  this->_padding_ = (longlong)&___7FMusicalScaleToNoteArrayOperator_Metasound__6B_;
  *(undefined ***)&this->Scale =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Scale).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Scale).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Scale =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bChordTonesOnly = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bChordTonesOnly).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->bChordTonesOnly).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->bChordTonesOnly = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
  TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><>
            ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->ScaleArrayOutput,
             NewObject);
  *(undefined ***)&this->ScaleArrayOutput =
       &___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  pSVar3 = *(Scale **)&(this->Scale).field_0x8;
  this->PreviousScale = Count;
  this->bPreviousChordTones = false;
  SVar1 = *pSVar3;
  puVar4 = *(undefined1 **)&(this->bChordTonesOnly).field_0x8;
  this->PreviousScale = SVar1;
  this->bPreviousChordTones = (bool)*puVar4;
  this_00 = TMapBase<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
            ::FindChecked(&Audio::FMidiNoteQuantizer::ScaleDegreeSetMap,SVar1);
  pTVar5 = Audio::ScaleDegreeSet::GetScaleDegreeSet(this_00,&local_18,this->bPreviousChordTones);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=<float,int>
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->ScaleArrayOutput).field_0x8,
             pTVar5);
  return this;
}

// operator() @ 14b14e490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMusicalScaleToNoteArrayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FVertexInterface *pFVar9;
  FText *pFVar10;
  FNodeClassMetadata *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res20,L"Musical Scale To Note Array");
  Metasound::FNodeClassName::FNodeClassName
            (&local_98,&Metasound::StandardNodes::Namespace,&local_res20,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_98.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_98.Name;
  (__return_storage_ptr__->ClassName).Variant = local_98.Variant;
  pFVar8 = FText::FText(&local_d8);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar8);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  pFVar8 = FText::FText(&local_c8);
  FText::operator=(&__return_storage_ptr__->Description,pFVar8);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::FMusicalScaleToNoteArrayOperator::DeclareVertexInterface(&local_80);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  Metasound::FVertexInterface::~FVertexInterface(&local_80);
  iVar7 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar12 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar7 + 1;
  pFVar12 = pFVar12 + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  TVar5 = Metasound::NodeCategories::Music.TextData;
  *(ITextData **)pFVar12 = Metasound::NodeCategories::Music.TextData.Reference;
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res18);
  }
  *(uint *)(pFVar12 + 8) = Metasound::NodeCategories::Music.Flags;
  pFVar10 = FText::FText(&local_b8);
  pTVar2 = &__return_storage_ptr__->Keywords;
  pFVar8 = (FText *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar8 <= pFVar10) && (pFVar10 < pFVar8 + (__return_storage_ptr__->Keywords).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FNodeClassMetadata *)(*pcVar4)();
    return pFVar11;
  }
  iVar7 = (__return_storage_ptr__->Keywords).ArrayNum;
  if (iVar7 == (__return_storage_ptr__->Keywords).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(__return_storage_ptr__->Keywords).ArrayMax
                      );
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar7 + 1;
  FText::FText((FText *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10),pFVar10);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  pFVar10 = FText::FText(&local_a8);
  pFVar8 = (FText *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar8 <= pFVar10) && (pFVar10 < pFVar8 + (__return_storage_ptr__->Keywords).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FNodeClassMetadata *)(*pcVar4)();
    return pFVar11;
  }
  iVar7 = (__return_storage_ptr__->Keywords).ArrayNum;
  if (iVar7 == (__return_storage_ptr__->Keywords).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(__return_storage_ptr__->Keywords).ArrayMax
                      );
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar7 + 1;
  FText::FText((FText *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10),pFVar10);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b15f6d0

void __thiscall
Metasound::FMusicalScaleToNoteArrayOperator::BindInputs
          (FMusicalScaleToNoteArrayOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&MusicalScaleToNoteArrayParameterNames::ParamScaleDegreesPresetName);
  local_res18 = &this->Scale;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&MusicalScaleToNoteArrayParameterNames::ParamChordTonesOnlyName);
  local_res18 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                &this->bChordTonesOnly;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b160360

void __thiscall
Metasound::FMusicalScaleToNoteArrayOperator::BindOutputs
          (FMusicalScaleToNoteArrayOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MusicalScaleToNoteArrayParameterNames::ParamNoteArrayOutputName);
  local_res18[0] = &this->ScaleArrayOutput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// CreateOperator @ 14b178270

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMusicalScaleToNoteArrayOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  Scale SVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  INode IVar3;
  INode *pIVar4;
  ScaleDegreeSet *this_00;
  TArrayView<float,int> *pTVar5;
  FName local_res8;
  undefined1 local_58 [16];
  INode local_48;
  undefined1 local_38 [16];
  INode local_28;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MusicalScaleToNoteArrayParameterNames::ParamScaleDegreesPresetName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)local_58,
             &local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MusicalScaleToNoteArrayParameterNames::ParamChordTonesOnlyName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_38,&local_res8,pFVar2);
  pIVar4 = ::operator_new(0x70);
  if (pIVar4 == (INode *)0x0) {
    pIVar4 = (INode *)0x0;
  }
  else {
    *pIVar4 = (INode)&___7FMusicalScaleToNoteArrayOperator_Metasound__6B_;
    pIVar4[1] = (INode)&
                       ___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
    ;
    pIVar4[2] = (INode)local_58._8_8_;
    pIVar4[3] = local_48;
    if (local_48 != (INode)0x0) {
      *(int *)((longlong)local_48 + 8) = *(int *)((longlong)local_48 + 8) + 1;
    }
    pIVar4[1] = (INode)&
                       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
    ;
    pIVar4[5] = (INode)&___7__TDataReference__N_Metasound__6B_;
    pIVar4[6] = (INode)local_38._8_8_;
    pIVar4[7] = local_28;
    if (local_28 != (INode)0x0) {
      *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
    }
    pIVar4[5] = (INode)&___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(pIVar4 + 9),NewObject)
    ;
    pIVar4[9] = (INode)&
                       ___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    IVar3 = pIVar4[2];
    *(undefined4 *)(pIVar4 + 0xd) = 0x1e;
    pIVar4[0xd].field_0x4 = 0;
    SVar1 = *(Scale *)IVar3;
    *(Scale *)(pIVar4 + 0xd) = SVar1;
    pIVar4[0xd].field_0x4 = *(undefined1 *)pIVar4[6];
    this_00 = TMapBase<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
              ::FindChecked(&Audio::FMidiNoteQuantizer::ScaleDegreeSetMap,SVar1);
    pTVar5 = Audio::ScaleDegreeSet::GetScaleDegreeSet
                       (this_00,(TArrayView<float,int> *)local_58,(bool)pIVar4[0xd].field_0x4);
    TArray<float,TSizedDefaultAllocator<32>_>::operator=<float,int>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)pIVar4[10],pTVar5);
  }
  param_1->Node = pIVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b17fe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FMusicalScaleToNoteArrayOperator::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_178 [32];
  bool local_148 [4];
  int local_144;
  FInputVertexInterface local_140;
  FOutputVertexInterface local_120;
  FInputVertexInterfaceDeclarationBuilder local_100;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_b0;
  undefined1 local_90 [32];
  undefined1 local_70 [16];
  byte local_60;
  TInputDataVertex<bool> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
               TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                         (&local_b0,&MusicalScaleToNoteArrayParameterNames::ParamNoteArrayOutputName
                          ,&FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_120);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_d8,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_120,
                 &local_120.SubInterfaces);
      if ((local_d8.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
                   &(local_d8.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_d8,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_d8);
      local_148[0] = false;
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                         (&local_58,&MusicalScaleToNoteArrayParameterNames::ParamChordTonesOnlyName,
                          &FDataVertexMetadata::EmptyBasic,local_148);
      local_144 = 0;
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
               TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><int>
                         (local_90,&MusicalScaleToNoteArrayParameterNames::
                                    ParamScaleDegreesPresetName,&FDataVertexMetadata::EmptyBasic,
                          &local_144);
      local_140._padding_ = 0;
      local_140._padding_ = 0;
      local_140.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.SubInterfaces.ArrayNum = 0;
      local_140.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_100,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_140,
                 &local_140.SubInterfaces);
      if ((local_100.Vertices)->ArrayMax < 2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,2,&(local_100.Vertices)->AllocatorInstance,(local_100.Vertices)->ArrayNum,
                   &(local_100.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_100,pFVar5);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_100,pFVar4);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_100);
      FVertexInterface::FVertexInterface(&::Interface,&local_140,&local_120);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data,
                 local_140.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_140.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_140._padding_,(int)local_140._padding_);
      if ((FInputDataVertex *)local_140._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_140._padding_);
      }
      if (0xc < local_60) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FVertexInterface *)(*pcVar1)();
          return pFVar6;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60])(local_70);
      if (0xc < (byte)local_58._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FVertexInterface *)(*pcVar1)();
          return pFVar6;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_120.SubInterfaces.AllocatorInstance.Data,
                 local_120.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_120.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_120.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_120._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_120._padding_);
      }
      atexit(`Metasound::FMusicalScaleToNoteArrayOperator::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&::Interface);
  return __return_storage_ptr__;
}

// Execute @ 14b18a9f0

void __thiscall
Metasound::FMusicalScaleToNoteArrayOperator::Execute(FMusicalScaleToNoteArrayOperator *this)

{
  Scale SVar1;
  undefined1 *puVar2;
  ScaleDegreeSet *this_00;
  TArrayView<float,int> *pTVar3;
  TArrayView<float,int> local_18;
  
  SVar1 = **(Scale **)&(this->Scale).field_0x8;
  if ((this->PreviousScale != SVar1) ||
     (this->bPreviousChordTones != (bool)**(char **)&(this->bChordTonesOnly).field_0x8)) {
    puVar2 = *(undefined1 **)&(this->bChordTonesOnly).field_0x8;
    this->PreviousScale = SVar1;
    this->bPreviousChordTones = (bool)*puVar2;
    this_00 = TMapBase<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
              ::FindChecked(&Audio::FMidiNoteQuantizer::ScaleDegreeSetMap,SVar1);
    pTVar3 = Audio::ScaleDegreeSet::GetScaleDegreeSet(this_00,&local_18,this->bPreviousChordTones);
    TArray<float,TSizedDefaultAllocator<32>_>::operator=<float,int>
              (*(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->ScaleArrayOutput).field_0x8,
               pTVar3);
  }
  return;
}

// GetNodeInfo @ 14b197e10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FMusicalScaleToNoteArrayOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FMusicalScaleToNoteArrayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FMusicalScaleToNoteArrayOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// Reset @ 14b1a7e90

void __thiscall
Metasound::FMusicalScaleToNoteArrayOperator::Reset
          (FMusicalScaleToNoteArrayOperator *this,FResetParams *param_1)

{
  Scale SVar1;
  undefined1 *puVar2;
  ScaleDegreeSet *this_00;
  TArrayView<float,int> *pTVar3;
  TArrayView<float,int> local_18;
  
  SVar1 = **(Scale **)&(this->Scale).field_0x8;
  puVar2 = *(undefined1 **)&(this->bChordTonesOnly).field_0x8;
  this->PreviousScale = SVar1;
  this->bPreviousChordTones = (bool)*puVar2;
  this_00 = TMapBase<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
            ::FindChecked(&Audio::FMidiNoteQuantizer::ScaleDegreeSetMap,SVar1);
  pTVar3 = Audio::ScaleDegreeSet::GetScaleDegreeSet(this_00,&local_18,this->bPreviousChordTones);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=<float,int>
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->ScaleArrayOutput).field_0x8,
             pTVar3);
  return;
}

