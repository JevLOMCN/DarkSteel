// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FInterpToOperator @ 14b0b4310

FInterpToOperator * __thiscall
Metasound::FInterpToOperator::FInterpToOperator
          (FInterpToOperator *this,FBuildOperatorParams *param_1,TDataReadReference<float> *param_2,
          TDataReadReference<Metasound::FTime> *param_3)

{
  longlong lVar1;
  FOperatorSettings *this_00;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  
  this->_padding_ = (longlong)&___7FInterpToOperator_Metasound__6B_;
  *(undefined ***)&this->TargetValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->TargetValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TargetValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TargetValue = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->InterpTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InterpTime).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->InterpTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InterpTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  TDataReference<float>::TDataReference<float><float_const_&>
            ((TDataReference<float> *)&this->ValueOutput,NewObject,
             *(float **)&(this->TargetValue).field_0x8);
  *(undefined ***)&this->ValueOutput = &___7__TDataWriteReference_M_Metasound__6B_;
  Audio::FVolumeFader::FVolumeFader(&this->VolumeFader);
  this->BlockTimeDelta = 0.0;
  this->PreviousTargetValue = 0.0;
  this_00 = param_1->OperatorSettings;
  Audio::FVolumeFader::SetVolume(&this->VolumeFader,**(float **)&(this->TargetValue).field_0x8);
  fVar4 = FOperatorSettings::GetActualBlockRate(this_00);
  pfVar2 = *(float **)&(this->TargetValue).field_0x8;
  pfVar3 = *(float **)&(this->ValueOutput).field_0x8;
  this->BlockTimeDelta = __real_3f800000 / fVar4;
  this->PreviousTargetValue = *pfVar2;
  *pfVar3 = *pfVar2;
  return this;
}

// operator() @ 14b0bc760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FInterpToOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FNodeClassName local_38;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res20,L"InterpTo");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,&local_res20,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_38.Name;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  pFVar8 = FText::FText(&local_68);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar8);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  pFVar8 = FText::FText(&local_58);
  FText::operator=(&__return_storage_ptr__->Description,pFVar8);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
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
  local_78.TextData.Reference = Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,local_res18);
  }
  local_78.Flags = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  pFVar9 = Metasound::FInterpToOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  pFVar10 = FText::FText(&local_48);
  pTVar2 = &__return_storage_ptr__->Keywords;
  pFVar8 = (FText *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar8 <= pFVar10) && (pFVar10 < pFVar8 + (__return_storage_ptr__->Keywords).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FNodeClassMetadata *)(*pcVar4)();
      return pFVar11;
    }
  }
  iVar7 = (__return_storage_ptr__->Keywords).ArrayNum;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar7 + 1;
  FText::FText((FText *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10),pFVar10);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b0bf600

void __thiscall
Metasound::FInterpToOperator::BindInputs(FInterpToOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<float> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&InterpToVertexNames::InParamTargetName);
  local_res18 = &this->TargetValue;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&InterpToVertexNames::InParamInterpTimeName);
  local_res18 = (TDataReadReference<float> *)&this->InterpTime;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0bfa20

void __thiscall
Metasound::FInterpToOperator::BindOutputs
          (FInterpToOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&InterpToVertexNames::OutParamValueName);
  local_res18[0] = &this->ValueOutput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// CreateOperator @ 14b0ccfd0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FInterpToOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FInterpToOperator *this_00;
  FInterpToOperator *pFVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&InterpToVertexNames::InParamTargetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&InterpToVertexNames::InParamInterpTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_48,&local_res8,pFVar1);
  this_00 = ::operator_new(0x90);
  pFVar2 = (FInterpToOperator *)0x0;
  if (this_00 != (FInterpToOperator *)0x0) {
    pFVar2 = FInterpToOperator(this_00,(FBuildOperatorParams *)param_2,
                               (TDataReadReference<float> *)local_28,
                               (TDataReadReference<Metasound::FTime> *)local_48);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b0d3540

void __thiscall Metasound::FInterpToOperator::Execute(FInterpToOperator *this)

{
  float *pfVar1;
  double *pdVar2;
  bool bVar3;
  float fVar4;
  
  pfVar1 = *(float **)&(this->TargetValue).field_0x8;
  fVar4 = *pfVar1;
  if (__real_322bcc77 <
      (float)((uint)(this->PreviousTargetValue - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pdVar2 = *(double **)&(this->InterpTime).field_0x8;
    this->PreviousTargetValue = fVar4;
    Audio::FVolumeFader::StartFade(&this->VolumeFader,*pfVar1,(float)*pdVar2,Linear);
  }
  bVar3 = Audio::FVolumeFader::IsFading(&this->VolumeFader);
  if (bVar3) {
    Audio::FVolumeFader::Update(&this->VolumeFader,this->BlockTimeDelta);
  }
  fVar4 = Audio::FVolumeFader::GetVolume(&this->VolumeFader);
  **(float **)&(this->ValueOutput).field_0x8 = fVar4;
  return;
}

// GetNodeInfo @ 14b0d9880

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FInterpToOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FInterpToOperator::GetNodeInfo'::__l2::<lambda_1>::operator()(local_res8,&::Info);
      atexit(`Metasound::FInterpToOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b0e14e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FInterpToOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TInputDataVertex<float> *pTVar4;
  TInputDataVertex<Metasound::FTime> *pTVar5;
  FInputVertexInterface *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_148 [32];
  float local_118;
  float local_114;
  FOutputVertexInterface local_110;
  FInputVertexInterface local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<float> local_a8;
  TInputDataVertex<Metasound::FTime> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_a8,&InterpToVertexNames::OutParamValueName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_110);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_d0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_110,
               &local_110.SubInterfaces);
    if ((local_d0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                 &(local_d0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_d0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_d0);
    local_118 = 1.0;
    pTVar4 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&InterpToVertexNames::InParamTargetName,
                        &FDataVertexMetadata::EmptyBasic,&local_118);
    local_114 = 0.1;
    pTVar5 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_88,&InterpToVertexNames::InParamInterpTimeName,
                        &FDataVertexMetadata::EmptyBasic,&local_114);
    pFVar6 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>_>
                       (&local_f0,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface(&::Interface,pFVar6,&local_110);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data,
               local_f0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f0._padding_,(int)local_f0._padding_);
    if ((FInputDataVertex *)local_f0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f0._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data,
               local_110.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_110.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_110._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_110._padding_);
    }
    atexit(`Metasound::FInterpToOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b0e5460

void __thiscall Metasound::FInterpToOperator::Reset(FInterpToOperator *this,FResetParams *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  Audio::FVolumeFader::SetVolume(&this->VolumeFader,**(float **)&(this->TargetValue).field_0x8);
  fVar3 = FOperatorSettings::GetActualBlockRate(param_1->OperatorSettings);
  pfVar1 = *(float **)&(this->TargetValue).field_0x8;
  pfVar2 = *(float **)&(this->ValueOutput).field_0x8;
  this->BlockTimeDelta = __real_3f800000 / fVar3;
  this->PreviousTargetValue = *pfVar1;
  *pfVar2 = *pfVar1;
  return;
}

