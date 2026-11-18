// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// GetVertexInterface @ 14aeb5060

FVertexInterface * __thiscall Metasound::FLiteralNode::GetVertexInterface(FLiteralNode *this)

{
  return &this->Interface;
}

// SetVertexInterface @ 14aeb5100

bool __thiscall
Metasound::FLiteralNode::SetVertexInterface(FLiteralNode *this,FVertexInterface *param_1)

{
  bool bVar1;
  
  bVar1 = Metasound::operator==(&this->Interface,param_1);
  return bVar1;
}

// IsVertexInterfaceSupported @ 14aeb5120

bool __thiscall
Metasound::FLiteralNode::IsVertexInterfaceSupported(FLiteralNode *this,FVertexInterface *param_1)

{
  bool bVar1;
  
  bVar1 = Metasound::operator==(&this->Interface,param_1);
  return bVar1;
}

// GetDefaultOperatorFactory @ 14aeb5140

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::FLiteralNode::GetDefaultOperatorFactory
          (FLiteralNode *this,TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// FLiteralNode @ 14af3b860

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FLiteralNode * __thiscall
Metasound::FLiteralNode::FLiteralNode
          (FLiteralNode *this,FName *param_1,FGuid *param_2,FName *param_3,EVertexAccessType param_4
          ,TSharedRef<Metasound::IOperatorFactory,1> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  TRefCountPtr<ITextData> TVar2;
  FVertexInterface *pFVar3;
  FName local_res8;
  FName local_178;
  TSharedPtr<Metasound::IOperatorData_const_,1> local_170;
  FNodeClassName local_160;
  FNodeClassMetadata local_148;
  FVertexInterface local_68;
  
  local_170.Object = (IOperatorData *)0x0;
  local_170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FNodeClassMetadata::FNodeClassMetadata(&local_148);
  ::FName::FName(&local_178,"Literal");
  ::FName::FName(&local_res8,"");
  FNodeClassName::FNodeClassName(&local_160,&local_178,param_3,&local_res8);
  local_148.MajorVersion = 1;
  local_148.MinorVersion = 0;
  local_148.ClassName.Namespace = local_160.Namespace;
  local_148.ClassName.Name = local_160.Name;
  local_148.ClassName.Variant = local_160.Variant;
  ::FString::operator=(&local_148.Author,&PluginAuthor);
  TVar2.Reference = local_148.PromptIfMissing.TextData.Reference;
  if (local_148.PromptIfMissing.TextData.Reference != PluginNodeMissingPrompt.TextData.Reference) {
    local_148.PromptIfMissing.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
    if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                (PluginNodeMissingPrompt.TextData.Reference,&local_res8);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_148.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
  pFVar3 = CreateVertexInterface(&local_68,param_3,param_4);
  FVertexInterface::operator=(&local_148.DefaultInterface,pFVar3);
  FVertexInterface::~FVertexInterface(&local_68);
  Metasound::FNode::FNode((FNode *)this,param_1,param_2,&local_148,&local_170);
  FNodeClassMetadata::~FNodeClassMetadata(&local_148);
  this->_padding_ = (longlong)&___7FLiteralNode_Metasound__6B_;
  CreateVertexInterface(&this->Interface,param_3,param_4);
  (this->Factory).Object = param_5->Object;
  pTVar1 = (param_5->SharedReferenceCount).ReferenceController;
  (this->Factory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return this;
}

// CreateVertexInterface @ 14af76fa0

FVertexInterface * __cdecl
Metasound::FLiteralNode::CreateVertexInterface
          (FVertexInterface *__return_storage_ptr__,FName *param_1,EVertexAccessType param_2)

{
  FText *pFVar1;
  FInputVertexInterface *pFVar2;
  undefined1 local_res18 [8];
  FOutputVertexInterface local_c8;
  FInputVertexInterface local_a8;
  undefined **local_88 [2];
  FName local_78;
  EVertexAccessType local_70;
  ITextData *local_68;
  uint local_60;
  FText local_58;
  undefined1 local_48;
  FOutputVertexInterfaceDeclarationBuilder local_40;
  
  pFVar1 = FText::GetEmpty();
  local_68 = (pFVar1->TextData).Reference;
  if (local_68 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68 + 8))(local_68,local_res18);
  }
  local_60 = pFVar1->Flags;
  FText::FText(&local_58);
  local_48 = 0;
  FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
  local_78 = *param_1;
  local_88[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_70 = param_2;
  FOutputVertexInterface::FOutputVertexInterface(&local_c8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_40,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_c8
             ,&local_c8.SubInterfaces);
  if ((local_40.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_40.Vertices)->AllocatorInstance,(local_40.Vertices)->ArrayNum,
               &(local_40.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_40,(FOutputDataVertex *)local_88);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_40);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_a8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_c8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_a8.SubInterfaces.AllocatorInstance.Data,
             local_a8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_a8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_a8.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_a8._padding_,(int)local_a8._padding_);
  if ((FInputDataVertex *)local_a8._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_c8.SubInterfaces.AllocatorInstance.Data,
             local_c8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_c8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_c8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_68 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetNodeMetadata @ 14afa61c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FLiteralNode::GetNodeMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,EVertexAccessType param_2)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FVertexInterface *pFVar3;
  FName local_res8;
  FName local_res20;
  FNodeClassName local_88;
  FVertexInterface local_70;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res20,"Literal");
  ::FName::FName(&local_res8,"");
  FNodeClassName::FNodeClassName(&local_88,&local_res20,param_1,&local_res8);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_88.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_88.Name;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar3 = CreateVertexInterface(&local_70,param_1,param_2);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar3);
  FVertexInterface::~FVertexInterface(&local_70);
  return __return_storage_ptr__;
}

