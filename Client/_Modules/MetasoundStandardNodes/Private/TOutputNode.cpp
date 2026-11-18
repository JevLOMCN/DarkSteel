// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 12

// GetVertexInterface @ 14afc7ad0

FVertexInterface * __thiscall
Metasound::TOutputNode<Metasound::FMonoAudioFormat,0>::GetVertexInterface
          (TOutputNode<Metasound::FMonoAudioFormat,0> *this)

{
  return &this->VertexInterface;
}

// SetVertexInterface @ 14afc7ae0

bool __thiscall
Metasound::TOutputNode<Metasound::FMonoAudioFormat,0>::SetVertexInterface
          (TOutputNode<Metasound::FMonoAudioFormat,0> *this,FVertexInterface *param_1)

{
  bool bVar1;
  
  bVar1 = Metasound::operator==(&this->VertexInterface,param_1);
  return bVar1;
}

// IsVertexInterfaceSupported @ 14afc7b00

bool __thiscall
Metasound::TOutputNode<Metasound::FMonoAudioFormat,0>::IsVertexInterfaceSupported
          (TOutputNode<Metasound::FMonoAudioFormat,0> *this,FVertexInterface *param_1)

{
  bool bVar1;
  
  bVar1 = Metasound::operator==(&this->VertexInterface,param_1);
  return bVar1;
}

// GetDefaultOperatorFactory @ 14afc7b20

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TOutputNode<Metasound::FMonoAudioFormat,0>::GetDefaultOperatorFactory
          (TOutputNode<Metasound::FMonoAudioFormat,0> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

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

// GetVertexInterface @ 14afdcc80

FVertexInterface * __thiscall
Metasound::TOutputNode<Metasound::FStereoAudioFormat,0>::GetVertexInterface
          (TOutputNode<Metasound::FStereoAudioFormat,0> *this)

{
  return &this->VertexInterface;
}

// SetVertexInterface @ 14afdcc90

bool __thiscall
Metasound::TOutputNode<Metasound::FStereoAudioFormat,0>::SetVertexInterface
          (TOutputNode<Metasound::FStereoAudioFormat,0> *this,FVertexInterface *param_1)

{
  bool bVar1;
  
  bVar1 = Metasound::operator==(&this->VertexInterface,param_1);
  return bVar1;
}

// IsVertexInterfaceSupported @ 14afdcd30

bool __thiscall
Metasound::TOutputNode<Metasound::FStereoAudioFormat,0>::IsVertexInterfaceSupported
          (TOutputNode<Metasound::FStereoAudioFormat,0> *this,FVertexInterface *param_1)

{
  bool bVar1;
  
  bVar1 = Metasound::operator==(&this->VertexInterface,param_1);
  return bVar1;
}

// GetDefaultOperatorFactory @ 14afdcd50

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TOutputNode<Metasound::FStereoAudioFormat,0>::GetDefaultOperatorFactory
          (TOutputNode<Metasound::FStereoAudioFormat,0> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

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

// TOutputNode<Metasound::FMonoAudioFormat,0> @ 14aff5000

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TOutputNode<Metasound::FMonoAudioFormat,0> * __thiscall
Metasound::TOutputNode<Metasound::FMonoAudioFormat,0>::TOutputNode<Metasound::FMonoAudioFormat,0>
          (TOutputNode<Metasound::FMonoAudioFormat,0> *this,FName *param_1,FGuid *param_2,
          FName *param_3)

{
  code *pcVar1;
  uint uVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  FName *pFVar5;
  FText *pFVar6;
  FVertexInterface *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TOutputNode<Metasound::FMonoAudioFormat,0> *pTVar9;
  undefined1 local_res8 [8];
  FName local_1b8;
  FName local_1b0;
  FText local_1a8;
  FText local_198;
  TSharedPtr<Metasound::IOperatorData_const_,1> local_188;
  FNodeClassName local_178;
  FNodeClassMetadata local_160;
  FVertexInterface local_80;
  
  local_188.Object = (IOperatorData *)0x0;
  local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FNodeClassMetadata::FNodeClassMetadata(&local_160);
  ::FName::FName(&local_1b0,"Output");
  pFVar5 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
  ::FName::FName(&local_1b8,"");
  FNodeClassName::FNodeClassName(&local_178,&local_1b0,pFVar5,&local_1b8);
  local_160.ClassName.Namespace = local_178.Namespace;
  local_160.ClassName.Name = local_178.Name;
  local_160.MajorVersion = 1;
  local_160.MinorVersion = 0;
  local_160.ClassName.Variant = local_178.Variant;
  pFVar6 = FText::FText(&local_1a8);
  FText::operator=(&local_160.DisplayName,pFVar6);
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::FText(&local_198);
  FText::operator=(&local_160.Description,pFVar6);
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&local_160.Author,&PluginAuthor);
  TVar3.Reference = local_160.PromptIfMissing.TextData.Reference;
  if (local_160.PromptIfMissing.TextData.Reference != PluginNodeMissingPrompt.TextData.Reference) {
    local_160.PromptIfMissing.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
    if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                (PluginNodeMissingPrompt.TextData.Reference,local_res8);
    }
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
    }
  }
  local_160.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
  pFVar7 = CreateVertexInterface(&local_80,param_3);
  FVertexInterface::operator=(&local_160.DefaultInterface,pFVar7);
  FVertexInterface::~FVertexInterface(&local_80);
  local_160.AccessFlags = Deprecated;
  Metasound::FNode::FNode((FNode *)this,param_1,param_2,&local_160,&local_188);
  FNodeClassMetadata::~FNodeClassMetadata(&local_160);
  this->_padding_ = (longlong)&___7__TOutputNode_VFMonoAudioFormat_Metasound___0A__Metasound__6B_;
  CreateVertexInterface(&this->VertexInterface,param_3);
  pTVar8 = ::operator_new(0x20);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    (this->Factory).Object = (FOutputOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOutputOperatorFactory___TOutputNode_VFMonoAudioFormat_Metasound___0A__Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ =
         (longlong)
         &___7FOutputOperatorFactory___TOutputNode_VFMonoAudioFormat_Metasound___0A__Metasound__6B_;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    uVar2 = param_3->Number;
    pTVar8[1].SharedReferenceCount = (atomic<int>)(param_3->ComparisonIndex).Value;
    pTVar8[1].WeakReferenceCount = (atomic<int>)uVar2;
    (this->Factory).Object = (FOutputOperatorFactory *)(pTVar8 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar8;
    if (pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TOutputNode<Metasound::FMonoAudioFormat,0> *)(*pcVar1)();
        return pTVar9;
      }
    }
  }
  return this;
}

// TOutputNode<Metasound::FStereoAudioFormat,0> @ 14aff5250

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TOutputNode<Metasound::FStereoAudioFormat,0> * __thiscall
Metasound::TOutputNode<Metasound::FStereoAudioFormat,0>::
TOutputNode<Metasound::FStereoAudioFormat,0>
          (TOutputNode<Metasound::FStereoAudioFormat,0> *this,FName *param_1,FGuid *param_2,
          FName *param_3)

{
  code *pcVar1;
  uint uVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  FName *pFVar5;
  FText *pFVar6;
  FVertexInterface *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TOutputNode<Metasound::FStereoAudioFormat,0> *pTVar9;
  undefined1 local_res8 [8];
  FName local_1b8;
  FName local_1b0;
  FText local_1a8;
  FText local_198;
  TSharedPtr<Metasound::IOperatorData_const_,1> local_188;
  FNodeClassName local_178;
  FNodeClassMetadata local_160;
  FVertexInterface local_80;
  
  local_188.Object = (IOperatorData *)0x0;
  local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FNodeClassMetadata::FNodeClassMetadata(&local_160);
  ::FName::FName(&local_1b0,"Output");
  pFVar5 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
  ::FName::FName(&local_1b8,"");
  FNodeClassName::FNodeClassName(&local_178,&local_1b0,pFVar5,&local_1b8);
  local_160.ClassName.Namespace = local_178.Namespace;
  local_160.ClassName.Name = local_178.Name;
  local_160.MajorVersion = 1;
  local_160.MinorVersion = 0;
  local_160.ClassName.Variant = local_178.Variant;
  pFVar6 = FText::FText(&local_1a8);
  FText::operator=(&local_160.DisplayName,pFVar6);
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::FText(&local_198);
  FText::operator=(&local_160.Description,pFVar6);
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&local_160.Author,&PluginAuthor);
  TVar3.Reference = local_160.PromptIfMissing.TextData.Reference;
  if (local_160.PromptIfMissing.TextData.Reference != PluginNodeMissingPrompt.TextData.Reference) {
    local_160.PromptIfMissing.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
    if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                (PluginNodeMissingPrompt.TextData.Reference,local_res8);
    }
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
    }
  }
  local_160.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
  pFVar7 = CreateVertexInterface(&local_80,param_3);
  FVertexInterface::operator=(&local_160.DefaultInterface,pFVar7);
  FVertexInterface::~FVertexInterface(&local_80);
  local_160.AccessFlags = Deprecated;
  Metasound::FNode::FNode((FNode *)this,param_1,param_2,&local_160,&local_188);
  FNodeClassMetadata::~FNodeClassMetadata(&local_160);
  this->_padding_ = (longlong)&___7__TOutputNode_VFStereoAudioFormat_Metasound___0A__Metasound__6B_;
  CreateVertexInterface(&this->VertexInterface,param_3);
  pTVar8 = ::operator_new(0x20);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    (this->Factory).Object = (FOutputOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOutputOperatorFactory___TOutputNode_VFStereoAudioFormat_Metasound___0A__Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ =
         (longlong)
         &
         ___7FOutputOperatorFactory___TOutputNode_VFStereoAudioFormat_Metasound___0A__Metasound__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    uVar2 = param_3->Number;
    pTVar8[1].SharedReferenceCount = (atomic<int>)(param_3->ComparisonIndex).Value;
    pTVar8[1].WeakReferenceCount = (atomic<int>)uVar2;
    (this->Factory).Object = (FOutputOperatorFactory *)(pTVar8 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar8;
    if (pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TOutputNode<Metasound::FStereoAudioFormat,0> *)(*pcVar1)();
        return pTVar9;
      }
    }
  }
  return this;
}

// CreateVertexInterface @ 14b0152e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TOutputNode<Metasound::FMonoAudioFormat,0>::CreateVertexInterface
          (FVertexInterface *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FMonoAudioFormat> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  FOutputVertexInterface local_138;
  FDataVertexMetadata local_118;
  FDataVertexMetadata local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_c8;
  FInputVertexInterfaceDeclarationBuilder local_a0;
  TOutputDataVertex<Metasound::FMonoAudioFormat> local_78;
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FText::FText(&local_f0.Description);
  FText::FText(&local_f0.DisplayName);
  local_f0.bIsAdvancedDisplay = false;
  pTVar3 = TOutputDataVertex<Metasound::FMonoAudioFormat>::
           TOutputDataVertex<Metasound::FMonoAudioFormat><>(&local_78,param_1,&local_f0);
  FOutputVertexInterface::FOutputVertexInterface(&local_138);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_c8,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138,
             &local_138.SubInterfaces);
  if ((local_c8.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_c8.Vertices)->AllocatorInstance,(local_c8.Vertices)->ArrayNum,
               &(local_c8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_c8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_c8);
  FText::FText(&local_118.Description);
  FText::FText(&local_118.DisplayName);
  local_118.bIsAdvancedDisplay = false;
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_58,param_1,&local_118);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_a0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158
             ,&local_158.SubInterfaces);
  if ((local_a0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_a0.Vertices)->AllocatorInstance,(local_a0.Vertices)->ArrayNum,
               &(local_a0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_a0,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_a0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_138);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_118.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_118.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (local_f0.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_f0.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.Description.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateVertexInterface @ 14b015550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TOutputNode<Metasound::FStereoAudioFormat,0>::CreateVertexInterface
          (FVertexInterface *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FStereoAudioFormat> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_198 [32];
  FInputVertexInterface local_168;
  FOutputVertexInterface local_148;
  FDataVertexMetadata local_128;
  FInputVertexInterfaceDeclarationBuilder local_100;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  TOutputDataVertex<Metasound::FStereoAudioFormat> local_b0;
  TInputDataVertex<Metasound::FAudioBuffer> local_90;
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FText::FText(&local_128.Description);
  FText::FText(&local_128.DisplayName);
  local_128.bIsAdvancedDisplay = false;
  pTVar3 = TOutputDataVertex<Metasound::FStereoAudioFormat>::
           TOutputDataVertex<Metasound::FStereoAudioFormat><>(&local_b0,param_1,&local_128);
  FOutputVertexInterface::FOutputVertexInterface(&local_148);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_148,
             &local_148.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_58,&StereoAudioFormatVertexKeys::RightChannelVertexName,
                      &FDataVertexMetadata::EmptyBasic);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_90,&StereoAudioFormatVertexKeys::LeftChannelVertexName,
                      &FDataVertexMetadata::EmptyBasic);
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.SubInterfaces.ArrayNum = 0;
  local_168.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_100,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_168,
             &local_168.SubInterfaces);
  if ((local_100.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_100.Vertices)->AllocatorInstance,(local_100.Vertices)->ArrayNum,
               &(local_100.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_100,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_100,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_100);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_168,&local_148);
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
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  if (local_128.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_128.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.Description.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

