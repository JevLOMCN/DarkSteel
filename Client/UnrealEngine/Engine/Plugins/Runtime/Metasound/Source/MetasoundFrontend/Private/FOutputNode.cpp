// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// GetDefaultOperatorFactory @ 14aeb8bc0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::FOutputNode::GetDefaultOperatorFactory
          (FOutputNode *this,TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOperatorFactory *)(this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// FOutputNode @ 14af3d1d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FOutputNode * __thiscall
Metasound::FOutputNode::FOutputNode
          (FOutputNode *this,FName *param_1,FGuid *param_2,FName *param_3,FName *param_4,
          EVertexAccessType param_5)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeClassMetadata *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FOutputNode *pFVar6;
  FVertexInterface *pFVar7;
  FNodeData *this_00;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1d8;
  FVertexInterface local_1c8;
  FNodeData local_178;
  FNodeClassMetadata local_100;
  
  pFVar4 = CreateNodeClassMetadata(&local_100,param_1,param_4,param_5);
  pTVar5 = ::operator_new(0xf0);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_1d8.Object = ___xmm_00000000000000000000000000000010;
    local_1d8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNodeClassMetadata_Metasound___00_SharedPointerInternals__6B_
    ;
    FNodeClassMetadata::FNodeClassMetadata((FNodeClassMetadata *)(pTVar5 + 1),pFVar4);
    local_1d8.Object = (FNodeClassMetadata *)(pTVar5 + 1);
    if (local_1d8.Object == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FOutputNode *)(*pcVar1)();
        return pFVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_1d8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  pFVar7 = CreateVertexInterface(&local_1c8,param_1,param_4,param_5);
  this_00 = FNodeData::FNodeData(&local_178,param_3,param_2,pFVar7);
  FBasicNode::FBasicNode((FBasicNode *)this,this_00,&local_1d8);
  this->_padding_ = (longlong)&___7FOutputNode_Metasound__6B_;
  pTVar8 = ::operator_new(0x20);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    (this->Factory).Object = (FOutputOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)&___7FOutputOperatorFactory_OutputNodePrivate_Metasound__6B_;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOutputOperatorFactory_OutputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    uVar2 = param_1->Number;
    pTVar8[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar8[1].WeakReferenceCount = (atomic<int>)uVar2;
    (this->Factory).Object = (FOutputOperatorFactory *)(pTVar8 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar8;
    if (pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FOutputNode *)(*pcVar1)();
        return pFVar6;
      }
    }
  }
  FNodeData::~FNodeData(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FNodeClassMetadata::~FNodeClassMetadata(&local_100);
  this->_padding_ = (longlong)&___7FOutputNode_Metasound__6B_;
  return this;
}

// FOutputNode @ 14af3d3e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FOutputNode * __thiscall
Metasound::FOutputNode::FOutputNode
          (FOutputNode *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FOutputNode *pFVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7FOutputNode_Metasound__6B_;
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    (this->Factory).Object = (FOutputOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOutputOperatorFactory_OutputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7FOutputOperatorFactory_OutputNodePrivate_Metasound__6B_;
    uVar2 = param_1->Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    (this->Factory).Object = (FOutputOperatorFactory *)(pTVar4 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar4;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FOutputNode *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// CreateNodeClassMetadata @ 14af65ac0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FOutputNode::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FName *param_2,
          EVertexAccessType param_3)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FText *pFVar3;
  FVertexInterface *pFVar4;
  FLazyName *this;
  FName local_res8;
  undefined1 local_res20 [8];
  FText local_98;
  FNodeClassName local_88;
  FVertexInterface local_70;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName((FName *)&local_98,"Output");
  this = &OutputNodePrivate::ValueVertexAccessVariantName;
  if (param_3 != Value) {
    this = &OutputNodePrivate::ReferenceVertexAccessVariantName;
  }
  FLazyName::Resolve(this);
  FNodeClassName::FNodeClassName(&local_88,(FName *)&local_98,param_2,&local_res8);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_88.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_88.Name;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  pFVar3 = FText::FText(&local_98);
  FText::operator=(&__return_storage_ptr__->Description,pFVar3);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res20);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = CreateVertexInterface(&local_70,param_1,param_2,param_3);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_70);
  return __return_storage_ptr__;
}

// CreateVertexInterface @ 14af77140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FOutputNode::CreateVertexInterface
          (FVertexInterface *__return_storage_ptr__,FName *param_1,FName *param_2,
          EVertexAccessType param_3)

{
  code *pcVar1;
  bool bVar2;
  FVertexInterface *pFVar3;
  ulonglong uVar4;
  undefined1 auStackY_198 [32];
  FInputVertexInterface local_168;
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  FOutputVertexInterface local_140;
  undefined **local_120;
  FName local_118;
  FName local_110;
  EVertexAccessType local_108;
  ITextData *local_100;
  uint local_f8;
  FText local_f0;
  undefined1 local_e0;
  ITextData *local_d8;
  uint local_d0;
  FText local_c8;
  undefined1 local_b8;
  FOutputVertexInterfaceDeclarationBuilder local_b0;
  FInputVertexInterfaceDeclarationBuilder local_88;
  FInputDataVertex local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::FText(&VertexDescription);
      atexit(`Metasound::FOutputNode::CreateVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__VertexDescription__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_d8 = VertexDescription.TextData.Reference;
  if (VertexDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*VertexDescription.TextData.Reference + 8))
              (VertexDescription.TextData.Reference,local_148);
  }
  local_d0 = VertexDescription.Flags;
  FText::FText(&local_c8);
  local_118 = *param_1;
  local_110 = *param_2;
  local_120 = &___7FOutputDataVertex_Metasound__6B_;
  local_b8 = 0;
  local_108 = param_3;
  FOutputVertexInterface::FOutputVertexInterface(&local_140);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_b0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_140,
             &local_140.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_b0,(FOutputDataVertex *)&local_120);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  local_100 = VertexDescription.TextData.Reference;
  if (VertexDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*VertexDescription.TextData.Reference + 8))
              (VertexDescription.TextData.Reference,local_144);
  }
  local_f8 = VertexDescription.Flags;
  FText::FText(&local_f0);
  local_60._padding_ = *(longlong *)param_1;
  local_60._padding_ = *(longlong *)param_2;
  local_60._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.SubInterfaces.ArrayNum = 0;
  local_168.SubInterfaces.ArrayMax = 0;
  local_e0 = 0;
  local_60.Literal.Value.TypeIndex = 0;
  local_60._padding_._0_4_ = param_3;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_88,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_168
             ,&local_168.SubInterfaces);
  if ((local_88.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_88.Vertices)->AllocatorInstance,(local_88.Vertices)->ArrayNum,
               &(local_88.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_88,&local_60);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_88);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_168,&local_140);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data,
             local_168.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_168.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_168._padding_,(int)local_168._padding_);
  if ((FInputDataVertex *)local_168._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  uVar4 = (ulonglong)local_60.Literal.Value.TypeIndex;
  if (0xc < local_60.Literal.Value.TypeIndex) {
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
                ::__l2::Destructors)[uVar4])(&local_60.Literal);
  }
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  if (local_100 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100 + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data,
             local_140.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_140.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_140._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_140._padding_);
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_d8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetVariantName @ 14afa99f0

FName __cdecl Metasound::FOutputNode::GetVariantName(EVertexAccessType param_1)

{
  uint in_register_0000000c;
  FName FVar1;
  FLazyName *this;
  int in_EDX;
  
  FVar1.Number = in_register_0000000c;
  FVar1.ComparisonIndex.Value = param_1;
  this = &OutputNodePrivate::ValueVertexAccessVariantName;
  if (in_EDX != 1) {
    this = &OutputNodePrivate::ReferenceVertexAccessVariantName;
  }
  FLazyName::Resolve(this);
  return FVar1;
}

