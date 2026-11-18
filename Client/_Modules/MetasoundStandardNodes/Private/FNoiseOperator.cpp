// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 8

// FNoiseOperator @ 14b1414c0

FNoiseOperator * __thiscall
Metasound::FNoiseOperator::FNoiseOperator
          (FNoiseOperator *this,FOperatorSettings *param_1,TDataReadReference<int> *param_2,
          TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *param_3)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FNoiseOperator_Metasound__6B_;
  *(undefined ***)&this->Seed = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Seed).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Seed).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Seed = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->NoiseType =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&(this->NoiseType).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->NoiseType).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->NoiseType =
       &___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->Out,NewObject,param_1);
  *(undefined ***)&this->Out = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  this->OldSeed = **(int **)&(this->Seed).field_0x8;
  return this;
}

// operator() @ 14b14e7e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FNoiseOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10 [3];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res10,L"Noise");
  Metasound::FNodeClassName::FNodeClassName
            (&local_78,&Metasound::StandardNodes::Namespace,local_res10,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar5 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar5);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::FNoiseOperator::DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Generators.Flags;
  return __return_storage_ptr__;
}

// BindInputs @ 14b15f7c0

void __thiscall
Metasound::FNoiseOperator::BindInputs(FNoiseOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<int> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<int> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&NoiseGeneratorVertexNames::InputSeedName);
  local_res18 = &this->Seed;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&NoiseGeneratorVertexNames::InputTypeName);
  local_res18 = (TDataReadReference<int> *)&this->NoiseType;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1603f0

void __thiscall
Metasound::FNoiseOperator::BindOutputs(FNoiseOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&NoiseGeneratorVertexNames::OutAudioName);
  local_res18[0] = &this->Out;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// CreateOperator @ 14b178400

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FNoiseOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FOperatorSettings *pFVar2;
  FInputVertexInterfaceData *this;
  INode *pIVar3;
  INode IVar4;
  FName local_res10;
  undefined1 local_58 [16];
  INode local_48;
  undefined1 local_38 [16];
  INode local_28;
  
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&NoiseGeneratorVertexNames::InputTypeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_38,
             &local_res10,pFVar2);
  FLazyName::Resolve(&NoiseGeneratorVertexNames::InputSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_58,&local_res10,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if (*(int *)local_38._8_8_ == 0) {
    pIVar3 = ::operator_new(0xa0);
    if (pIVar3 != (INode *)0x0) {
      *pIVar3 = (INode)&___7FNoiseOperator_Metasound__6B_;
      pIVar3[1] = (INode)&___7__TDataReference_H_Metasound__6B_;
      pIVar3[2] = (INode)local_58._8_8_;
      pIVar3[3] = local_48;
      if (local_48 != (INode)0x0) {
        *(int *)((longlong)local_48 + 8) = *(int *)((longlong)local_48 + 8) + 1;
      }
      pIVar3[1] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
      pIVar3[5] = (INode)&
                         ___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pIVar3[6] = (INode)local_38._8_8_;
      pIVar3[7] = local_28;
      if (local_28 != (INode)0x0) {
        *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
      }
      pIVar3[5] = (INode)&
                         ___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
      ;
      TDataReference<Metasound::FAudioBuffer>::
      TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
                ((TDataReference<Metasound::FAudioBuffer> *)(pIVar3 + 9),NewObject,pFVar2);
      pIVar3[9] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(int *)(pIVar3 + 0xd) = *(int *)pIVar3[2];
      *pIVar3 = (INode)&___7FNoiseOperator_Pink_Metasound__6B_;
      iVar1 = *(int *)pIVar3[2];
      IVar4 = local_28;
      if (iVar1 == -1) {
        Audio::FPinkNoise::FPinkNoise((FPinkNoise *)(pIVar3 + 0xe));
      }
      else {
        Audio::FPinkNoise::FPinkNoise((FPinkNoise *)(pIVar3 + 0xe),iVar1);
      }
      goto LAB_14b178614;
    }
  }
  else {
    pIVar3 = ::operator_new(0x78);
    if (pIVar3 != (INode *)0x0) {
      *pIVar3 = (INode)&___7FNoiseOperator_Metasound__6B_;
      pIVar3[1] = (INode)&___7__TDataReference_H_Metasound__6B_;
      pIVar3[2] = (INode)local_58._8_8_;
      pIVar3[3] = local_48;
      if (local_48 != (INode)0x0) {
        *(int *)((longlong)local_48 + 8) = *(int *)((longlong)local_48 + 8) + 1;
      }
      pIVar3[1] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
      pIVar3[5] = (INode)&
                         ___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pIVar3[6] = (INode)local_38._8_8_;
      pIVar3[7] = local_28;
      if (local_28 != (INode)0x0) {
        *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
      }
      pIVar3[5] = (INode)&
                         ___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
      ;
      TDataReference<Metasound::FAudioBuffer>::
      TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
                ((TDataReference<Metasound::FAudioBuffer> *)(pIVar3 + 9),NewObject,pFVar2);
      pIVar3[9] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(int *)(pIVar3 + 0xd) = *(int *)pIVar3[2];
      *pIVar3 = (INode)&___7FNoiseOperator_White_Metasound__6B_;
      iVar1 = *(int *)pIVar3[2];
      IVar4 = local_28;
      if (iVar1 == -1) {
        Audio::FWhiteNoise::FWhiteNoise((FWhiteNoise *)(pIVar3 + 0xe));
      }
      else {
        Audio::FWhiteNoise::FWhiteNoise((FWhiteNoise *)(pIVar3 + 0xe),iVar1);
      }
      goto LAB_14b178614;
    }
  }
  pIVar3 = (INode *)0x0;
  IVar4 = local_28;
LAB_14b178614:
  param_1->Node = pIVar3;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)IVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b1801b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FNoiseOperator::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_178 [32];
  int local_148 [2];
  FInputVertexInterface local_140;
  FOutputVertexInterface local_120;
  FInputVertexInterfaceDeclarationBuilder local_100;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  TOutputDataVertex<Metasound::FAudioBuffer> local_b0;
  TInputDataVertex<int> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_b0,&NoiseGeneratorVertexNames::OutAudioName,
                          &FDataVertexMetadata::EmptyBasic);
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
      local_148[0] = 0;
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
               TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><int>
                         (local_58,&NoiseGeneratorVertexNames::InputTypeName,
                          &FDataVertexMetadata::EmptyBasic,local_148);
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<int>::TInputDataVertex<int><int_const_&>
                         (&local_90,&NoiseGeneratorVertexNames::InputSeedName,
                          &FDataVertexMetadata::EmptyBasic,&DefaultSeed);
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
      if (0xc < (byte)local_90._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
      if (0xc < local_28) {
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
                  ::__l2::Destructors)[local_28])(local_38);
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
      atexit(`Metasound::FNoiseOperator::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&::Interface);
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b197ea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FNoiseOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FNoiseOperator::GetNodeInfo'::__l2::<lambda_1>::operator()(local_res8,&::Info);
      atexit(`Metasound::FNoiseOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetPostExecuteFunction @ 14b198770

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::FNoiseOperator::GetPostExecuteFunction(FNoiseOperator *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

