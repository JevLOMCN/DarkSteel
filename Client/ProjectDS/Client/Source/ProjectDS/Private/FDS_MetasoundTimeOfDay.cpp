// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// FDS_MetasoundTimeOfDay @ 14bba8920

FDS_MetasoundTimeOfDay * __thiscall
Metasound::FDS_MetasoundTimeOfDay::FDS_MetasoundTimeOfDay
          (FDS_MetasoundTimeOfDay *this,FBuildOperatorParams *param_1)

{
  this->_padding_ = (longlong)&___7FDS_MetasoundTimeOfDay_Metasound__6B_;
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->TimeOfDay,NewObject);
  *(undefined ***)&this->TimeOfDay = &___7__TDataWriteReference_M_Metasound__6B_;
  UpdateTime(this);
  return this;
}

// operator() @ 14bbaa430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FDS_MetasoundTimeOfDay::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FName FVar2;
  TRefCountPtr<ITextData> TVar3;
  FText *pFVar4;
  TOutputDataVertex<float> *pTVar5;
  FInputVertexInterface *pFVar6;
  ulonglong uVar7;
  FName local_res10;
  FName local_res18;
  undefined1 local_98 [12];
  uint uStack_8c;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> local_88;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<float> local_30;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"DS_TimeOfDay");
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            ((FNodeClassName *)local_98,&Metasound::StandardNodes::Namespace,&local_res18,
             &local_res10);
  FVar2.Number = uStack_8c;
  FVar2.ComparisonIndex.Value = local_98._8_4_;
  __return_storage_ptr__->MajorVersion = 1;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = (FNameEntryId)local_98._0_4_;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_98._4_4_;
  (__return_storage_ptr__->ClassName).Name = FVar2;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = (FName)local_88.AllocatorInstance.Data;
  pFVar4 = FText::FText((FText *)local_98);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if ((FName)local_98._0_8_ != (FName)0x0) {
    (**(code **)(*(longlong *)local_98._0_8_ + 0x10))();
  }
  pFVar4 = FText::FText((FText *)local_98);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if ((FName)local_98._0_8_ != (FName)0x0) {
    (**(code **)(*(longlong *)local_98._0_8_ + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  local_98._0_8_ = Metasound::NodeCategories::Functions.TextData.Reference;
  if (Metasound::NodeCategories::Functions.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Functions.TextData.Reference + 8))
              (Metasound::NodeCategories::Functions.TextData.Reference,&local_res10);
  }
  local_98._8_4_ = Metasound::NodeCategories::Functions.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)local_98,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if ((FName)local_98._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_98._0_8_ + 0x10))();
  }
  TVar3.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  uVar7 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar5 = Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
                         (&local_30,&Metasound::DS_MetaSoundTimeOfDayNames::OutputTimeOfDayName,
                          &Metasound::FDataVertexMetadata::EmptyBasic);
      Metasound::FOutputVertexInterface::FOutputVertexInterface((FOutputVertexInterface *)local_98);
      Metasound::VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_58,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)local_98,
                 &local_88);
      if ((local_58.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
                   &(local_58.Vertices)->ArrayMax);
      }
      Metasound::VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_58,(FOutputDataVertex *)pTVar5);
      Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_58);
      pFVar6 = Metasound::FInputVertexInterface::FInputVertexInterface(&local_78);
      Metasound::FVertexInterface::FVertexInterface
                (&::Interface,pFVar6,(FOutputVertexInterface *)local_98);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
                 local_78.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
      if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_78._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
      if ((FName)local_88.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      if ((FName)local_98._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      atexit(FDS_MetasoundTimeOfDay::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,&::Interface);
  return __return_storage_ptr__;
}

// BindInputs @ 14bbac2b0

void __thiscall
Metasound::FDS_MetasoundTimeOfDay::BindInputs
          (FDS_MetasoundTimeOfDay *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14bbac350

void __thiscall
Metasound::FDS_MetasoundTimeOfDay::BindOutputs
          (FDS_MetasoundTimeOfDay *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&DS_MetaSoundTimeOfDayNames::OutputTimeOfDayName);
  local_res18[0] = &this->TimeOfDay;
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

// CreateOperator @ 14bbb2760

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FDS_MetasoundTimeOfDay::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FDS_MetasoundTimeOfDay *this;
  
  this = ::operator_new(0x28);
  if (this != (FDS_MetasoundTimeOfDay *)0x0) {
    this->_padding_ = (longlong)&___7FDS_MetasoundTimeOfDay_Metasound__6B_;
    TDataReference<float>::TDataReference<float><>
              ((TDataReference<float> *)&this->TimeOfDay,NewObject);
    *(undefined ***)&this->TimeOfDay = &___7__TDataWriteReference_M_Metasound__6B_;
    UpdateTime(this);
    param_1->Node = (INode *)this;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14bbb5a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall Metasound::FDS_MetasoundTimeOfDay::Execute(FDS_MetasoundTimeOfDay *this)

{
  int iVar1;
  bool bVar2;
  UDS_GameInstance *this_00;
  UWorld *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UWN_UDS_Subsystem *this_01;
  double dVar6;
  
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar3 = UGameInstance::GetWorld((UGameInstance *)this_00);
  if (pUVar3 == (UWorld *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14bbe5dda;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14bbe5dda:
    pUVar5 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14bbe5e0a;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14bbe5e0a:
  this_01 = (UWN_UDS_Subsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  if (this_01 != (UWN_UDS_Subsystem *)0x0) {
    dVar6 = UWN_UDS_Subsystem::GetUDSTOD(this_01);
    **(float **)&(this->TimeOfDay).field_0x8 = (float)(dVar6 * __real_3f847ae147ae147b);
  }
  return;
}

// GetNodeInfo @ 14bbbc950

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FDS_MetasoundTimeOfDay::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FDS_MetasoundTimeOfDay::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FDS_MetasoundTimeOfDay::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14bbbe950

FVertexInterface * __cdecl Metasound::FDS_MetasoundTimeOfDay::GetVertexInterface(void)

{
  TOutputDataVertex<float> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<float> local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar1 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                         (&local_30,&DS_MetaSoundTimeOfDayNames::OutputTimeOfDayName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_98);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_58,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98,
                 &local_98.SubInterfaces);
      if ((local_58.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
                   &(local_58.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_58,(FOutputDataVertex *)pTVar1);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_58);
      pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
      FVertexInterface::FVertexInterface(&::Interface,pFVar2,&local_98);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
                 local_78.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
      if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_78._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
                 local_98.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_98._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_98._padding_);
      }
      atexit(`Metasound::FDS_MetasoundTimeOfDay::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
      return &::Interface;
    }
  }
  return &::Interface;
}

// Reset @ 14bbdc430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
Metasound::FDS_MetasoundTimeOfDay::Reset(FDS_MetasoundTimeOfDay *this,FResetParams *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_GameInstance *this_00;
  UWorld *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UWN_UDS_Subsystem *this_01;
  double dVar6;
  
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar3 = UGameInstance::GetWorld((UGameInstance *)this_00);
  if (pUVar3 == (UWorld *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14bbe5dda;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14bbe5dda:
    pUVar5 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14bbe5e0a;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14bbe5e0a:
  this_01 = (UWN_UDS_Subsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  if (this_01 != (UWN_UDS_Subsystem *)0x0) {
    dVar6 = UWN_UDS_Subsystem::GetUDSTOD(this_01);
    **(float **)&(this->TimeOfDay).field_0x8 = (float)(dVar6 * __real_3f847ae147ae147b);
  }
  return;
}

// UpdateTime @ 14bbe5d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall Metasound::FDS_MetasoundTimeOfDay::UpdateTime(FDS_MetasoundTimeOfDay *this)

{
  int iVar1;
  bool bVar2;
  UDS_GameInstance *this_00;
  UWorld *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UWN_UDS_Subsystem *this_01;
  double dVar6;
  
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar3 = UGameInstance::GetWorld((UGameInstance *)this_00);
  if (pUVar3 == (UWorld *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14bbe5dda;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14bbe5dda:
    pUVar5 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14bbe5e0a;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14bbe5e0a:
  this_01 = (UWN_UDS_Subsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  if (this_01 != (UWN_UDS_Subsystem *)0x0) {
    dVar6 = UWN_UDS_Subsystem::GetUDSTOD(this_01);
    **(float **)&(this->TimeOfDay).field_0x8 = (float)(dVar6 * __real_3f847ae147ae147b);
  }
  return;
}

