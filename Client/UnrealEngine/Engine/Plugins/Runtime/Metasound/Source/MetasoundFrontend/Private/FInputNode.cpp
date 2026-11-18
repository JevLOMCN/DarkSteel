// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 10

// GetDefaultOperatorFactory @ 14aea9a00

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::FInputNode::GetDefaultOperatorFactory
          (FInputNode *this,TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

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

// FInputNode @ 14af3b6d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FInputNode * __thiscall
Metasound::FInputNode::FInputNode
          (FInputNode *this,TSharedRef<Metasound::IOperatorFactory,1> *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7FInputNode_Metasound__6B_;
  (this->Factory).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Factory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// FInputNode @ 14af3b760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FInputNode * __thiscall
Metasound::FInputNode::FInputNode
          (FInputNode *this,FInputNodeConstructorParams *param_1,FName *param_2,
          EVertexAccessType param_3,TSharedRef<Metasound::IOperatorFactory,1> *param_4)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TSharedRef<Metasound::IOperatorFactory,1> local_1e8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1d8;
  FVertexInterface local_1c8;
  FNodeData local_178;
  FNodeClassMetadata local_100;
  
  pFVar1 = CreateNodeClassMetadata(&local_100,&param_1->VertexName,param_2,param_3);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1d8,pFVar1);
  pFVar3 = CreateVertexInterface
                     (&local_1c8,&param_1->VertexName,param_2,param_3,&param_1->InitParam);
  pFVar4 = FNodeData::FNodeData(&local_178,&param_1->NodeName,&param_1->InstanceID,pFVar3);
  local_1e8.Object = param_4->Object;
  local_1e8.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FInputNode(this,&local_1e8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_100);
  this->_padding_ = (longlong)&___7FInputNode_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// CreateDefaultVertexInterface @ 14af52100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FInputNode::CreateDefaultVertexInterface
          (FVertexInterface *__return_storage_ptr__,FName *param_1,FName *param_2,
          EVertexAccessType param_3,FLiteral *param_4)

{
  code *pcVar1;
  bool bVar2;
  FVertexInterface *pFVar3;
  ulonglong uVar4;
  undefined1 auStackY_68 [32];
  FLiteral local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if (param_4 == (FLiteral *)0x0) {
    local_38.Value.TypeIndex = 0;
    CreateVertexInterface(__return_storage_ptr__,param_1,param_2,param_3,&local_38);
    uVar4 = (ulonglong)local_38.Value.TypeIndex;
    if (0xc < local_38.Value.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FVertexInterface *)(*pcVar1)();
        return pFVar3;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar4] !=
        UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar4])(&local_38);
    }
  }
  else {
    CreateVertexInterface(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af658f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FInputNode::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FName *param_2,
          EVertexAccessType param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  FNodeClassMetadata *pFVar5;
  ulonglong uVar6;
  undefined1 auStackY_108 [32];
  FName local_d8;
  undefined1 local_d0 [4];
  FName local_cc;
  FText local_c0;
  FNodeClassName local_b0;
  FVertexInterface local_98;
  FLiteral local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_cc,"Input");
  if (param_3 == Value) {
    FLazyName::Resolve(&ConstructorVariant);
  }
  else {
    local_d8.ComparisonIndex.Value = 0;
    local_d8.Number = 0;
  }
  FNodeClassName::FNodeClassName(&local_b0,&local_cc,param_2,&local_d8);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_b0.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_b0.Name;
  (__return_storage_ptr__->ClassName).Variant = local_b0.Variant;
  FText::FText(&local_c0);
  FText::operator=(&__return_storage_ptr__->Description,&local_c0);
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar3 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_d0);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  local_48.Value.TypeIndex = 0;
  CreateVertexInterface(&local_98,param_1,param_2,param_3,&local_48);
  uVar6 = (ulonglong)local_48.Value.TypeIndex;
  if (0xc < local_48.Value.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNodeClassMetadata *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_48);
  }
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,&local_98);
  FVertexInterface::~FVertexInterface(&local_98);
  return __return_storage_ptr__;
}

// CreateVertexInterface @ 14af76cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FInputNode::CreateVertexInterface
          (FVertexInterface *__return_storage_ptr__,FName *param_1,FName *param_2,
          EVertexAccessType param_3,FLiteral *param_4)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FVertexInterface *pFVar4;
  undefined1 auStackY_1a8 [32];
  FInputVertexInterface local_178;
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  FOutputVertexInterface local_150;
  undefined **local_130;
  FName local_128;
  FName local_120;
  EVertexAccessType local_118;
  ITextData *local_110;
  uint local_108;
  FText local_100;
  undefined1 local_f0;
  ITextData *local_e8;
  uint local_e0;
  FText local_d8;
  undefined1 local_c8;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  FInputDataVertex local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar3 = FText::GetEmpty();
  local_e8 = (pFVar3->TextData).Reference;
  if (local_e8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8 + 8))(local_e8,local_158);
  }
  local_e0 = pFVar3->Flags;
  FText::FText(&local_d8);
  local_128 = *param_1;
  local_120 = *param_2;
  local_130 = &___7FOutputDataVertex_Metasound__6B_;
  local_c8 = 0;
  local_118 = param_3;
  FOutputVertexInterface::FOutputVertexInterface(&local_150);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_c0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_150,
             &local_150.SubInterfaces);
  if ((local_c0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
               &(local_c0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_c0,(FOutputDataVertex *)&local_130);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_c0);
  pFVar3 = FText::GetEmpty();
  local_110 = (pFVar3->TextData).Reference;
  if (local_110 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110 + 8))(local_110,local_154);
  }
  local_108 = pFVar3->Flags;
  FText::FText(&local_100);
  local_70._padding_ = *(longlong *)param_1;
  local_70._padding_ = *(longlong *)param_2;
  local_70._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_f0 = 0;
  local_70._padding_._0_4_ = param_3;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_70.Literal.Value,&param_4->Value);
  local_178._padding_ = 0;
  local_178._padding_ = 0;
  local_178.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.SubInterfaces.ArrayNum = 0;
  local_178.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_98,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_178
             ,&local_178.SubInterfaces);
  if ((local_98.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
               &(local_98.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,&local_70);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_98);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_178,&local_150);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_178.SubInterfaces.AllocatorInstance.Data,
             local_178.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_178.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_178.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_178._padding_,(int)local_178._padding_);
  if ((FInputDataVertex *)local_178._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (0xc < local_70.Literal.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_70.Literal.Value.TypeIndex])(&local_70.Literal);
  if (local_100.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
  }
  if (local_110 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110 + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
             local_150.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_150._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_150._padding_);
  }
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  if (local_e8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputDescription @ 14af9ac80

FText * __cdecl Metasound::FInputNode::GetInputDescription(FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNodeMetadata @ 14afa61a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FInputNode::GetNodeMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FName *param_2,
          EVertexAccessType param_3)

{
  CreateNodeClassMetadata(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetVariantName @ 14afa99b0

FName __cdecl Metasound::FInputNode::GetVariantName(EVertexAccessType param_1)

{
  uint in_register_0000000c;
  FName FVar1;
  int in_EDX;
  
  FVar1.Number = in_register_0000000c;
  FVar1.ComparisonIndex.Value = param_1;
  if (in_EDX == 1) {
    FLazyName::Resolve(&ConstructorVariant);
    return FVar1;
  }
  *(undefined8 *)FVar1 = 0;
  return FVar1;
}

// GetVertexName @ 14afa9a60

FName * __thiscall Metasound::FInputNode::GetVertexName(FInputNode *this)

{
  code *pcVar1;
  bool bVar2;
  FVertexInterface *this_00;
  FInputVertexInterface *pFVar3;
  FName *pFVar4;
  
  this_00 = (FVertexInterface *)(**(code **)(this->_padding_ + 0x20))();
  pFVar3 = FVertexInterface::GetInputInterface(this_00);
  if ((int)pFVar3->_padding_ != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inputs.Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundInputNode.cpp"
                       ,0x7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FName *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((int)pFVar3->_padding_ < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FName *)(pFVar3->_padding_ + 8);
}

