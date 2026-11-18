// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 378

// CreateVariableNode @ 14b2c3090

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TVariableNode<Metasound::FWaveAsset> *this_00;
  FNodeData *pFVar3;
  TVariableNode<Metasound::FWaveAsset> *pTVar4;
  FNodeData *in_R9;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_d8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x3f0);
  if (pFVar1 != (FNodeClassMetadata *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x3f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    pTVar4 = (TVariableNode<Metasound::FWaveAsset> *)0x0;
    if (this_00 != (TVariableNode<Metasound::FWaveAsset> *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = Metasound::FNodeData::FNodeData(&local_b0,in_R9);
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_c8,
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)param_2);
      pTVar4 = Metasound::TVariableNode<Metasound::FWaveAsset>::TVariableNode<Metasound::FWaveAsset>
                         (this_00,(FLiteral *)&local_c8,pFVar3,&local_d8);
    }
    (param_1->Value)._padding_ = (longlong)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
    Metasound::FNodeData::~FNodeData(in_R9);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->Value)._padding_ = 0;
  Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2c31a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableMutatorOperator<Metasound::FWaveAsset>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableMutatorOperator_VFWaveAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2c3230

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x490);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x498);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<Metasound::FWaveAsset>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_VFWaveAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2c3390

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableAccessorOperator<Metasound::FWaveAsset>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableAccessorOperator_VFWaveAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2c3420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<Metasound::FWaveAsset>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_VFWaveAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2c35a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableDeferredAccessorOperator<Metasound::FWaveAsset>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_VFWaveAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2c3630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<Metasound::FWaveAsset>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_VFWaveAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2c3720

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  IDataTypeRegistry *pIVar5;
  UClass *pUVar6;
  TSharedPtr<Audio::IProxyData,1> *pTVar7;
  undefined1 *puVar8;
  FName local_res20;
  FName local_18 [2];
  
  pIVar5 = Metasound::Frontend::IDataTypeRegistry::Get();
  cVar3 = (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5,param_1);
  if (cVar3 != '\0') {
    if (param_1 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_USoundWave_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5387723863637360494>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\IAudioProxyInitializer.h"
                           ,0x92,"DowncastObject");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar2)();
          return pTVar7;
        }
      }
      else {
        puVar8 = &param_1[9].field_0x18;
        if (puVar8 != (undefined1 *)0x0) {
          ::FName::FName(&local_res20,"MetaSound");
          local_18[0] = local_res20;
          (**(code **)(*(longlong *)puVar8 + 8))(puVar8,__return_storage_ptr__,local_18);
          return __return_storage_ptr__;
        }
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082685>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x2fd,"ObjectAsFactory");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2c3840

/* WARNING: Removing unreachable block (ram,0x00014b2c3937) */
/* WARNING: Removing unreachable block (ram,0x00014b2c395c) */

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  code *pcVar1;
  EDataReferenceAccessType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FWaveAsset> *pTVar4;
  TOptional<Metasound::FAnyDataReference> *pTVar5;
  TDataWriteReference<Metasound::FWaveAsset> *pTVar6;
  TDataReadReference<Metasound::FWaveAsset> *pTVar7;
  longlong *local_a8;
  undefined **local_a0;
  EDataReferenceAccessType local_98;
  longlong *local_90;
  undefined **local_88;
  EDataReferenceAccessType local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (param_1 == Read) {
    pTVar7 = Metasound::
             TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataReadReference<Metasound::FWaveAsset>_>
             ::CreateExplicitArgs
                       ((TDataReadReference<Metasound::FWaveAsset> *)local_30,param_3,param_2);
    local_80 = Read;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar7 + 0x18))(pTVar7,&local_78);
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_80;
    (__return_storage_ptr__->TypedValue).AccessType = local_80;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_78 + 0x18))(local_78,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  else if (param_1 == Write) {
    pTVar6 = Metasound::
             TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataWriteReference<Metasound::FWaveAsset>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FWaveAsset> *)local_50,param_3,param_2);
    local_98 = Write;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar6 + 0x18))(pTVar6,&local_90);
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_98;
    (__return_storage_ptr__->TypedValue).AccessType = local_98;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_90 + 0x18))(local_90,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_50._16_8_;
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,1);
      local_30._16_8_ = local_50._16_8_;
    }
  }
  else {
    if (param_1 != Value) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pTVar4 = Metasound::
             TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataValueReference<Metasound::FWaveAsset>_>
             ::CreateExplicitArgs
                       ((TDataValueReference<Metasound::FWaveAsset> *)local_70,param_3,param_2);
    (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_a8);
    if ((local_a8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue).AccessType = Value;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_a8 + 0x18))(local_a8,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_70._16_8_;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
      local_30._16_8_ = local_70._16_8_;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2c3ba0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<Metasound::FWaveAsset> *pTVar6;
  FName *pFVar7;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FWaveAsset>_> local_res10;
  TSharedRef<Metasound::IDataChannel,1> local_18;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<Metasound::FWaveAsset> *)0x0) {
    pTVar6 = (TCopyableDataChannel<Metasound::FWaveAsset> *)0x0;
  }
  else {
    pFVar7 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ = (longlong)&___7__TCopyableDataChannel_VFWaveAsset_Metasound___Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (FWaveAsset *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res10.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FWaveAsset>_>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2c52f0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2c5310

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2c5350

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2c5370

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2c53b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2c54d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2c54f0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2c5510

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2c5570

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2c55d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  ulonglong uVar4;
  FNodeData *in_R9;
  
  (param_1->Value)._padding_ = 0;
  uVar4 = (ulonglong)(byte)(param_2->ID).C;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2c56e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2c5810

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2c5890

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2c58c0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2c58f0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2c59d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2c5a00

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2c5a60

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2c5a70

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2cc480

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2cc4b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2cc4e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2cc540

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2cc5b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2cc790

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2cc830

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2cc8e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2cc980

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2ccae0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  ulonglong uVar4;
  FNodeData *in_R9;
  
  (param_1->Value)._padding_ = 0;
  uVar4 = (ulonglong)(byte)(param_2->ID).C;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2ccbe0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2ccc00

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2ccd90

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2ccdb0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2cce70

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2ccef0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2ccf20

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2ccfd0

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2cd100

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2d0f80

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  void *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    FVar1 = (FName)Metasound::
                   TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
                   ::
                   TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2d0fe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  void *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0xe0) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0xe0);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0xe8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (void *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
                       ::
                       TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x22f,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2d1180

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  void *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    FVar1 = (FName)Metasound::
                   TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>
                   ::
                   TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2d11e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  void *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0x180) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x180);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x188);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (void *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>
                       ::
                       TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x24d,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2d1370

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       ();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Reference);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2d14e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       ();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Value);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___00_Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2d1570

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  void *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0x170);
  if (this_00 != (void *)0x0) {
    FVar1 = (FName)Metasound::
                   TLiteralNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                   ::
                   TLiteralNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2d15d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2d16a0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  void *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    FVar1 = (FName)Metasound::
                   TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                   ::
                   TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2d1700

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  void *this_00;
  FNodeData *pFVar3;
  TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  FNodeData *in_R9;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_d8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x3f0);
  if (pFVar1 != (FNodeClassMetadata *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x3f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    pTVar4 = (TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
             )0x0;
    if (this_00 != (void *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = Metasound::FNodeData::FNodeData(&local_b0,in_R9);
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_c8,
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)param_2);
      pTVar4 = Metasound::
               TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::
               TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         (this_00,(FLiteral *)&local_c8,pFVar3,&local_d8);
    }
    (param_1->Value)._padding_ = (longlong)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
    Metasound::FNodeData::~FNodeData(in_R9);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->Value)._padding_ = 0;
  Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2d18c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableMutatorOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2d1a20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x490);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x498);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2d1b60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableAccessorOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2d1c30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2d1d30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableDeferredAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2d1ed0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2d2050

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2d2110

/* WARNING: Removing unreachable block (ram,0x00014b2d2207) */
/* WARNING: Removing unreachable block (ram,0x00014b2d222c) */

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  code *pcVar1;
  EDataReferenceAccessType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4
  ;
  TOptional<Metasound::FAnyDataReference> *pTVar5;
  TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar6
  ;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar7;
  longlong *local_a8;
  undefined **local_a0;
  EDataReferenceAccessType local_98;
  longlong *local_90;
  undefined **local_88;
  EDataReferenceAccessType local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (param_1 == Read) {
    pTVar7 = Metasound::
             TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
             ::CreateExplicitArgs
                       ((TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         *)local_30,param_3,param_2);
    local_80 = Read;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar7 + 0x18))(pTVar7,&local_78);
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_80;
    (__return_storage_ptr__->TypedValue).AccessType = local_80;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_78 + 0x18))(local_78,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  else if (param_1 == Write) {
    pTVar6 = Metasound::
             TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         *)local_50,param_3,param_2);
    local_98 = Write;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar6 + 0x18))(pTVar6,&local_90);
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_98;
    (__return_storage_ptr__->TypedValue).AccessType = local_98;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_90 + 0x18))(local_90,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_50._16_8_;
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,1);
      local_30._16_8_ = local_50._16_8_;
    }
  }
  else {
    if (param_1 != Value) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pTVar4 = Metasound::
             TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
             ::CreateExplicitArgs
                       ((TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         *)local_70,param_3,param_2);
    (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_a8);
    if ((local_a8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue).AccessType = Value;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_a8 + 0x18))(local_a8,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_70._16_8_;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
      local_30._16_8_ = local_70._16_8_;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2d2470

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
  *pTVar6;
  FName *pFVar7;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  local_res10;
  TSharedRef<Metasound::IDataChannel,1> local_18;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                 *)0x0) {
    pTVar6 = (TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              *)0x0;
  }
  else {
    pFVar7 = Metasound::
             GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       ();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TCopyableDataChannel_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res10.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2da060

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  void *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    FVar1 = (FName)Metasound::
                   TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
                   ::
                   TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2da0c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  void *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0xe0) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0xe0);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0xe8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (void *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
                       ::
                       TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x22f,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2da330

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  void *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    FVar1 = (FName)Metasound::
                   TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>
                   ::
                   TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2da3a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  void *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0x180) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x180);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x188);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (void *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>
                       ::
                       TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x24d,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2da570

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       ();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Reference);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2da6a0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       ();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Value);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___00_Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2da730

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  void *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0x170);
  if (this_00 != (void *)0x0) {
    FVar1 = (FName)Metasound::
                   TLiteralNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                   ::
                   TLiteralNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2da7e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2da9d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  void *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    FVar1 = (FName)Metasound::
                   TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                   ::
                   TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2daa30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  void *this_00;
  FNodeData *pFVar3;
  TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  FNodeData *in_R9;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_d8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x3f0);
  if (pFVar1 != (FNodeClassMetadata *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x3f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    pTVar4 = (TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
             0x0;
    if (this_00 != (void *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = Metasound::FNodeData::FNodeData(&local_b0,in_R9);
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_c8,
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)param_2);
      pTVar4 = Metasound::
               TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::
               TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         (this_00,(FLiteral *)&local_c8,pFVar3,&local_d8);
    }
    (param_1->Value)._padding_ = (longlong)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
    Metasound::FNodeData::~FNodeData(in_R9);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->Value)._padding_ = 0;
  Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2dac20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableMutatorOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2dacb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x490);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x498);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2dae40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableAccessorOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2dafc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2db0b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableDeferredAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2db140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2db230

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2db250

/* WARNING: Removing unreachable block (ram,0x00014b2db347) */
/* WARNING: Removing unreachable block (ram,0x00014b2db36c) */

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  code *pcVar1;
  EDataReferenceAccessType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  TOptional<Metasound::FAnyDataReference> *pTVar5;
  TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar6;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar7;
  longlong *local_a8;
  undefined **local_a0;
  EDataReferenceAccessType local_98;
  longlong *local_90;
  undefined **local_88;
  EDataReferenceAccessType local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (param_1 == Read) {
    pTVar7 = Metasound::
             TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
             ::CreateExplicitArgs
                       ((TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         *)local_30,param_3,param_2);
    local_80 = Read;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar7 + 0x18))(pTVar7,&local_78);
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_80;
    (__return_storage_ptr__->TypedValue).AccessType = local_80;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_78 + 0x18))(local_78,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  else if (param_1 == Write) {
    pTVar6 = Metasound::
             TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         *)local_50,param_3,param_2);
    local_98 = Write;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar6 + 0x18))(pTVar6,&local_90);
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_98;
    (__return_storage_ptr__->TypedValue).AccessType = local_98;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_90 + 0x18))(local_90,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_50._16_8_;
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,1);
      local_30._16_8_ = local_50._16_8_;
    }
  }
  else {
    if (param_1 != Value) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pTVar4 = Metasound::
             TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
             ::CreateExplicitArgs
                       ((TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         *)local_70,param_3,param_2);
    (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_a8);
    if ((local_a8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue).AccessType = Value;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_a8 + 0x18))(local_a8,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_70._16_8_;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
      local_30._16_8_ = local_70._16_8_;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2db5b0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar6
  ;
  FName *pFVar7;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  local_res10;
  TSharedRef<Metasound::IDataChannel,1> local_18;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                 *)0x0) {
    pTVar6 = (TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              *)0x0;
  }
  else {
    pFVar7 = Metasound::
             GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       ();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TCopyableDataChannel_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res10.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2e3f60

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2e4010

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2e4070

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2e4240

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2e4270

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2e4350

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2e4380

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2e43a0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2e43c0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2e4420

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  ulonglong uVar4;
  FNodeData *in_R9;
  
  (param_1->Value)._padding_ = 0;
  uVar4 = (ulonglong)(byte)(param_2->ID).C;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2e44a0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2e44c0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2e44f0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2e4550

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2e4580

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2e4630

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2e4910

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2e4c20

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2e4c30

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0,void>'::
__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2e7160

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *)0x0) {
    FVar1 = (FName)Metasound::
                   TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>::
                   TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2e71c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0xe0) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0xe0);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0xe8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *)0x0)
      {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>::
                       TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x22f,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2e73b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *)0x0) {
    FVar1 = (FName)Metasound::
                   TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>::
                   TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2e7470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0x180) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x180);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x188);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *)0x0)
      {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>::
                       TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x24d,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2e7600

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Reference);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2e7690

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Value);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2e7720

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TLiteralNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0x170);
  if (this_00 != (TLiteralNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FVar1 = (FName)Metasound::
                   TLiteralNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
                   TLiteralNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2e7780

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::ReceiveNodePrivate::
               TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2e7870

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FVar1 = (FName)Metasound::
                   TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
                   TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2e78d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  FNodeData *pFVar3;
  TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FNodeData *in_R9;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_d8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x3f0);
  if (pFVar1 != (FNodeClassMetadata *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x3f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    pTVar4 = (TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this_00 != (TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
    {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = Metasound::FNodeData::FNodeData(&local_b0,in_R9);
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_c8,
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)param_2);
      pTVar4 = Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
               ::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         (this_00,(FLiteral *)&local_c8,pFVar3,&local_d8);
    }
    (param_1->Value)._padding_ = (longlong)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
    Metasound::FNodeData::~FNodeData(in_R9);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->Value)._padding_ = 0;
  Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2e7a20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableMutatorOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2e7ab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x490);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x498);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2e7ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableAccessorOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2e7cb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2e7de0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableDeferredAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2e7e70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2e7f60

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2e7f80

/* WARNING: Removing unreachable block (ram,0x00014b2e8077) */
/* WARNING: Removing unreachable block (ram,0x00014b2e809c) */

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  code *pcVar1;
  EDataReferenceAccessType EVar2;
  bool bVar3;
  TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TOptional<Metasound::FAnyDataReference> *pTVar5;
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  longlong *local_a8;
  undefined **local_a0;
  EDataReferenceAccessType local_98;
  longlong *local_90;
  undefined **local_88;
  EDataReferenceAccessType local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (param_1 == Read) {
    pTVar7 = Metasound::
             TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_30,param_3,param_2);
    local_80 = Read;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar7 + 0x18))(pTVar7,&local_78);
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_80;
    (__return_storage_ptr__->TypedValue).AccessType = local_80;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_78 + 0x18))(local_78,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  else if (param_1 == Write) {
    pTVar6 = Metasound::
             TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_50,param_3,param_2);
    local_98 = Write;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar6 + 0x18))(pTVar6,&local_90);
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_98;
    (__return_storage_ptr__->TypedValue).AccessType = local_98;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_90 + 0x18))(local_90,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_50._16_8_;
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,1);
      local_30._16_8_ = local_50._16_8_;
    }
  }
  else {
    if (param_1 != Value) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pTVar4 = Metasound::
             TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_70,param_3,param_2);
    (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_a8);
    if ((local_a8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue).AccessType = Value;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_a8 + 0x18))(local_a8,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_70._16_8_;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
      local_30._16_8_ = local_70._16_8_;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2e82f0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FName *pFVar7;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  local_res10;
  TSharedRef<Metasound::IDataChannel,1> local_18;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    pTVar6 = (TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0
    ;
  }
  else {
    pFVar7 = Metasound::
             GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TCopyableDataChannel_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res10.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2eb300

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 !=
      (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *)0x0) {
    FVar1 = (FName)Metasound::
                   TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>
                   ::
                   TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2eb3d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0xe0) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0xe0);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0xe8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 !=
          (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>
                       ::
                       TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x22f,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2eb560

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 !=
      (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *)0x0) {
    FVar1 = (FName)Metasound::
                   TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>
                   ::
                   TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2eb5c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0x180) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x180);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x188);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 !=
          (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>
                       ::
                       TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x24d,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2eb7e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Reference);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2eb8e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Value);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2eb970

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TLiteralNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0x170);
  if (this_00 !=
      (TLiteralNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FVar1 = (FName)Metasound::
                   TLiteralNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   ::
                   TLiteralNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2eba00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::ReceiveNodePrivate::
               TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2ebb20

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 !=
      (TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FVar1 = (FName)Metasound::
                   TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   ::
                   TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2ebb80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  FNodeData *pFVar3;
  TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FNodeData *in_R9;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_d8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x3f0);
  if (pFVar1 != (FNodeClassMetadata *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x3f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    pTVar4 = (TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
             0x0;
    if (this_00 !=
        (TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = Metasound::FNodeData::FNodeData(&local_b0,in_R9);
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_c8,
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)param_2);
      pTVar4 = Metasound::
               TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
               TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         (this_00,(FLiteral *)&local_c8,pFVar3,&local_d8);
    }
    (param_1->Value)._padding_ = (longlong)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
    Metasound::FNodeData::~FNodeData(in_R9);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->Value)._padding_ = 0;
  Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2ebcd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableMutatorOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2ebde0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x490);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x498);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2ebed0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableAccessorOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2ebf60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2ec0e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableDeferredAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2ec1b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2ec2a0

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2ec500

/* WARNING: Removing unreachable block (ram,0x00014b2ec5f7) */
/* WARNING: Removing unreachable block (ram,0x00014b2ec61c) */

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  code *pcVar1;
  EDataReferenceAccessType EVar2;
  bool bVar3;
  TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TOptional<Metasound::FAnyDataReference> *pTVar5;
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  longlong *local_a8;
  undefined **local_a0;
  EDataReferenceAccessType local_98;
  longlong *local_90;
  undefined **local_88;
  EDataReferenceAccessType local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (param_1 == Read) {
    pTVar7 = Metasound::
             TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_30,param_3,param_2);
    local_80 = Read;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar7 + 0x18))(pTVar7,&local_78);
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_80;
    (__return_storage_ptr__->TypedValue).AccessType = local_80;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_78 + 0x18))(local_78,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  else if (param_1 == Write) {
    pTVar6 = Metasound::
             TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_50,param_3,param_2);
    local_98 = Write;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar6 + 0x18))(pTVar6,&local_90);
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_98;
    (__return_storage_ptr__->TypedValue).AccessType = local_98;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_90 + 0x18))(local_90,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_50._16_8_;
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,1);
      local_30._16_8_ = local_50._16_8_;
    }
  }
  else {
    if (param_1 != Value) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pTVar4 = Metasound::
             TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_70,param_3,param_2);
    (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_a8);
    if ((local_a8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue).AccessType = Value;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_a8 + 0x18))(local_a8,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_70._16_8_;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
      local_30._16_8_ = local_70._16_8_;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2ec860

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FName *pFVar7;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  local_res10;
  TSharedRef<Metasound::IDataChannel,1> local_18;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = (TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)0x0;
  }
  else {
    pFVar7 = Metasound::
             GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TCopyableDataChannel_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr =
         (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res10.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2ed7b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2ed7d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2ed800

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2ed820

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2ed850

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2ed8a0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2ed8c0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateLiteralNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2ed940

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2ed9e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2eda90

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  ulonglong uVar4;
  FNodeData *in_R9;
  
  (param_1->Value)._padding_ = 0;
  uVar4 = (ulonglong)(byte)(param_2->ID).C;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2edba0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2edbc0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2edbf0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2edc10

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2edcd0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2edcf0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2edd20

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2edd40

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2edd90

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<WaveTable::FWaveTable>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2efe70

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2efe90

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2efec0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2efee0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2effa0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2f0020

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2f0050

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2f0080

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2f00a0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<Metasound::FWaveTableBankAsset,0> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<Metasound::FWaveTableBankAsset,0> *)0x0) {
    FVar1 = (FName)Metasound::TInputNode<Metasound::FWaveTableBankAsset,0>::
                   TInputNode<Metasound::FWaveTableBankAsset,0>(this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2f0160

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<Metasound::FWaveTableBankAsset,0> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0xe0) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0xe0);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0xe8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<Metasound::FWaveTableBankAsset,0> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::TInputNode<Metasound::FWaveTableBankAsset,0>::
                       TInputNode<Metasound::FWaveTableBankAsset,0>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x22f,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f02f0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f03b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<Metasound::FWaveTableBankAsset,1> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<Metasound::FWaveTableBankAsset,1> *)0x0) {
    FVar1 = (FName)Metasound::TInputNode<Metasound::FWaveTableBankAsset,1>::
                   TInputNode<Metasound::FWaveTableBankAsset,1>(this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f0410

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  ulonglong uVar4;
  FNodeData *in_R9;
  
  (param_1->Value)._padding_ = 0;
  uVar4 = (ulonglong)(byte)(param_2->ID).C;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f0490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<Metasound::FWaveTableBankAsset,1> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0x180) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x180);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x188);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<Metasound::FWaveTableBankAsset,1> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::TInputNode<Metasound::FWaveTableBankAsset,1>::
                       TInputNode<Metasound::FWaveTableBankAsset,1>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x24d,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f0620

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2f0680

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Reference);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 = &___7__TOutputNode_VFWaveTableBankAsset_Metasound___0A__Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f0750

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2f07c0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Value);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 = &___7__TOutputNode_VFWaveTableBankAsset_Metasound___00_Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f0850

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f09d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2f0a00

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateLiteralNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TLiteralNode<Metasound::FWaveTableBankAsset> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0x170);
  if (this_00 != (TLiteralNode<Metasound::FWaveTableBankAsset> *)0x0) {
    FVar1 = (FName)Metasound::TLiteralNode<Metasound::FWaveTableBankAsset>::
                   TLiteralNode<Metasound::FWaveTableBankAsset>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f0b30

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2f0b50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
             GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
               CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 = &___7__TReceiveNode_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f0c70

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f0ca0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TVariableNode<Metasound::FWaveTableBankAsset> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TVariableNode<Metasound::FWaveTableBankAsset> *)0x0) {
    FVar1 = (FName)Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::
                   TVariableNode<Metasound::FWaveTableBankAsset>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2f0d00

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateVariableNode @ 14b2f0d20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TVariableNode<Metasound::FWaveTableBankAsset> *this_00;
  FNodeData *pFVar3;
  TVariableNode<Metasound::FWaveTableBankAsset> *pTVar4;
  FNodeData *in_R9;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_d8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x3f0);
  if (pFVar1 != (FNodeClassMetadata *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x3f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    pTVar4 = (TVariableNode<Metasound::FWaveTableBankAsset> *)0x0;
    if (this_00 != (TVariableNode<Metasound::FWaveTableBankAsset> *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = Metasound::FNodeData::FNodeData(&local_b0,in_R9);
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_c8,
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)param_2);
      pTVar4 = Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::
               TVariableNode<Metasound::FWaveTableBankAsset>
                         (this_00,(FLiteral *)&local_c8,pFVar3,&local_d8);
    }
    (param_1->Value)._padding_ = (longlong)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
    Metasound::FNodeData::~FNodeData(in_R9);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->Value)._padding_ = 0;
  Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateDataReference @ 14b2f0e30

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2f0e40

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateVariableMutatorNode @ 14b2f0e60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableMutatorOperator_VFWaveTableBankAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f0f20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x490);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x498);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_VFWaveTableBankAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f1050

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableAccessorOperator_VFWaveTableBankAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f1170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_VFWaveTableBankAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f12a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableDeferredAccessorOperator<Metasound::FWaveTableBankAsset>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_VFWaveTableBankAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f1390

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<Metasound::FWaveTableBankAsset>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_VFWaveTableBankAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2f1480

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  IDataTypeRegistry *pIVar5;
  UClass *pUVar6;
  TSharedPtr<Audio::IProxyData,1> *pTVar7;
  UObject *pUVar8;
  FName local_res20;
  FName local_18 [2];
  
  pIVar5 = Metasound::Frontend::IDataTypeRegistry::Get();
  cVar3 = (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5,param_1);
  if (cVar3 != '\0') {
    if (param_1 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UWaveTableBank_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5387723863637360494>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\IAudioProxyInitializer.h"
                           ,0x92,"DowncastObject");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar2)();
          return pTVar7;
        }
      }
      else {
        pUVar8 = param_1 + 1;
        if (pUVar8 != (UObject *)0x0) {
          ::FName::FName(&local_res20,"MetaSound");
          local_18[0] = local_res20;
          (**(code **)(*(longlong *)pUVar8 + 8))(pUVar8,__return_storage_ptr__,local_18);
          return __return_storage_ptr__;
        }
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082685>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x2fd,"ObjectAsFactory");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2f1590

/* WARNING: Removing unreachable block (ram,0x00014b2f1687) */
/* WARNING: Removing unreachable block (ram,0x00014b2f16ac) */

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  code *pcVar1;
  EDataReferenceAccessType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FWaveTableBankAsset> *pTVar4;
  TOptional<Metasound::FAnyDataReference> *pTVar5;
  TDataWriteReference<Metasound::FWaveTableBankAsset> *pTVar6;
  TDataReadReference<Metasound::FWaveTableBankAsset> *pTVar7;
  longlong *local_a8;
  undefined **local_a0;
  EDataReferenceAccessType local_98;
  longlong *local_90;
  undefined **local_88;
  EDataReferenceAccessType local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (param_1 == Read) {
    pTVar7 = Metasound::
             TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
             ::CreateExplicitArgs
                       ((TDataReadReference<Metasound::FWaveTableBankAsset> *)local_30,param_3,
                        param_2);
    local_80 = Read;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar7 + 0x18))(pTVar7,&local_78);
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_80;
    (__return_storage_ptr__->TypedValue).AccessType = local_80;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_78 + 0x18))(local_78,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  else if (param_1 == Write) {
    pTVar6 = Metasound::
             TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FWaveTableBankAsset> *)local_50,param_3,
                        param_2);
    local_98 = Write;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar6 + 0x18))(pTVar6,&local_90);
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_98;
    (__return_storage_ptr__->TypedValue).AccessType = local_98;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_90 + 0x18))(local_90,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_50._16_8_;
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,1);
      local_30._16_8_ = local_50._16_8_;
    }
  }
  else {
    if (param_1 != Value) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pTVar4 = Metasound::
             TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataValueReference<Metasound::FWaveTableBankAsset>_>
             ::CreateExplicitArgs
                       ((TDataValueReference<Metasound::FWaveTableBankAsset> *)local_70,param_3,
                        param_2);
    (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_a8);
    if ((local_a8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue).AccessType = Value;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_a8 + 0x18))(local_a8,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_70._16_8_;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
      local_30._16_8_ = local_70._16_8_;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2f18f0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<Metasound::FWaveTableBankAsset> *pTVar6;
  FName *pFVar7;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>_> local_res10;
  TSharedRef<Metasound::IDataChannel,1> local_18;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *)0x0) {
    pTVar6 = (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *)0x0;
  }
  else {
    pFVar7 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)&___7__TCopyableDataChannel_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (FWaveTableBankAsset *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res10.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>_>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2f29b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2f2c10

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f2e10

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f2fc0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2f3110

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2f31e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2f3200

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2f3250

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f3270

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f32c0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  ulonglong uVar4;
  FNodeData *in_R9;
  
  (param_1->Value)._padding_ = 0;
  uVar4 = (ulonglong)(byte)(param_2->ID).C;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f3340

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f3360

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f3390

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f33b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f33e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f3400

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2f34f0

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2f3600

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2f36f0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2f4070

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *)0x0)
  {
    FVar1 = (FName)Metasound::
                   TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>::
                   TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2f4170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0xe0) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0xe0);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0xe8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 !=
          (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>::
                       TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x22f,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f4340

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *)0x0)
  {
    FVar1 = (FName)Metasound::
                   TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>::
                   TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>
                             (this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f43a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0x180) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x180);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x188);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 !=
          (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::
                       TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>::
                       TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x24d,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2f4570

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Reference);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2f4600

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::
             GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Value);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TOutputNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2f4b40

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TLiteralNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0x170);
  if (this_00 != (TLiteralNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    FVar1 = (FName)Metasound::
                   TLiteralNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
                   TLiteralNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2f51d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::ReceiveNodePrivate::
               TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f5270

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 !=
      (TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FVar1 = (FName)Metasound::
                   TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
                   TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f5350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  FNodeData *pFVar3;
  TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FNodeData *in_R9;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_d8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x3f0);
  if (pFVar1 != (FNodeClassMetadata *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x3f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    pTVar4 = (TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this_00 !=
        (TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = Metasound::FNodeData::FNodeData(&local_b0,in_R9);
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_c8,
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)param_2);
      pTVar4 = Metasound::
               TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         (this_00,(FLiteral *)&local_c8,pFVar3,&local_d8);
    }
    (param_1->Value)._padding_ = (longlong)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
    Metasound::FNodeData::~FNodeData(in_R9);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->Value)._padding_ = 0;
  Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f5460

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableMutatorOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f5580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x490);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x498);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f56b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableAccessorOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f5740

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f5870

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableDeferredAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f5930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                 ::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2f5a20

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2f5a40

/* WARNING: Removing unreachable block (ram,0x00014b2f5b37) */
/* WARNING: Removing unreachable block (ram,0x00014b2f5b5c) */

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  code *pcVar1;
  EDataReferenceAccessType EVar2;
  bool bVar3;
  TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TOptional<Metasound::FAnyDataReference> *pTVar5;
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  longlong *local_a8;
  undefined **local_a0;
  EDataReferenceAccessType local_98;
  longlong *local_90;
  undefined **local_88;
  EDataReferenceAccessType local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (param_1 == Read) {
    pTVar7 = Metasound::
             TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_30,param_3,param_2);
    local_80 = Read;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar7 + 0x18))(pTVar7,&local_78);
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_80;
    (__return_storage_ptr__->TypedValue).AccessType = local_80;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_78 + 0x18))(local_78,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  else if (param_1 == Write) {
    pTVar6 = Metasound::
             TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_50,param_3,param_2);
    local_98 = Write;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar6 + 0x18))(pTVar6,&local_90);
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_98;
    (__return_storage_ptr__->TypedValue).AccessType = local_98;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_90 + 0x18))(local_90,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_50._16_8_;
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,1);
      local_30._16_8_ = local_50._16_8_;
    }
  }
  else {
    if (param_1 != Value) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pTVar4 = Metasound::
             TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_70,param_3,param_2);
    (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_a8);
    if ((local_a8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue).AccessType = Value;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_a8 + 0x18))(local_a8,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_70._16_8_;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
      local_30._16_8_ = local_70._16_8_;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2f5da0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FName *pFVar7;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  local_res10;
  TSharedRef<Metasound::IDataChannel,1> local_18;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = (TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
             )0x0;
  }
  else {
    pFVar7 = Metasound::
             GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TCopyableDataChannel_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res10.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2f6090

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2f60b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f6140

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f6160

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2f6210

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2f6270

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2f6290

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateLiteralNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2f62b0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f6310

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f6350

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  ulonglong uVar4;
  FNodeData *in_R9;
  
  (param_1->Value)._padding_ = 0;
  uVar4 = (ulonglong)(byte)(param_2->ID).C;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f63e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f6400

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f64d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f6530

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f6560

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f6580

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2f65b0

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2f65d0

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2f65e0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FWaveAsset>,0,void>'::__l2::
FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2f7190

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<Metasound::FAudioBusAsset,0> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<Metasound::FAudioBusAsset,0> *)0x0) {
    FVar1 = (FName)Metasound::TInputNode<Metasound::FAudioBusAsset,0>::
                   TInputNode<Metasound::FAudioBusAsset,0>(this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2f71f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<Metasound::FAudioBusAsset,0> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0xe0) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0xe0);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0xe8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<Metasound::FAudioBusAsset,0> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::TInputNode<Metasound::FAudioBusAsset,0>::
                       TInputNode<Metasound::FAudioBusAsset,0>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x22f,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f73f0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<Metasound::FAudioBusAsset,1> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<Metasound::FAudioBusAsset,1> *)0x0) {
    FVar1 = (FName)Metasound::TInputNode<Metasound::FAudioBusAsset,1>::
                   TInputNode<Metasound::FAudioBusAsset,1>(this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f7630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<Metasound::FAudioBusAsset,1> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0x180) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x180);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x188);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<Metasound::FAudioBusAsset,1> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::TInputNode<Metasound::FAudioBusAsset,1>::
                       TInputNode<Metasound::FAudioBusAsset,1>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x24d,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2f77c0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Reference);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 = &___7__TOutputNode_VFAudioBusAsset_Metasound___0A__Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2f7850

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Value);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 = &___7__TOutputNode_VFAudioBusAsset_Metasound___00_Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2f7920

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateLiteralNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TLiteralNode<Metasound::FAudioBusAsset> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0x170);
  if (this_00 != (TLiteralNode<Metasound::FAudioBusAsset> *)0x0) {
    FVar1 = (FName)Metasound::TLiteralNode<Metasound::FAudioBusAsset>::
                   TLiteralNode<Metasound::FAudioBusAsset>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2f7980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::
             GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::
               CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 = &___7__TReceiveNode_VFAudioBusAsset_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f7a40

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TVariableNode<Metasound::FAudioBusAsset> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TVariableNode<Metasound::FAudioBusAsset> *)0x0) {
    FVar1 = (FName)Metasound::TVariableNode<Metasound::FAudioBusAsset>::
                   TVariableNode<Metasound::FAudioBusAsset>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2f7aa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TVariableNode<Metasound::FAudioBusAsset> *this_00;
  FNodeData *pFVar3;
  TVariableNode<Metasound::FAudioBusAsset> *pTVar4;
  FNodeData *in_R9;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_d8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x3f0);
  if (pFVar1 != (FNodeClassMetadata *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x3f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    pTVar4 = (TVariableNode<Metasound::FAudioBusAsset> *)0x0;
    if (this_00 != (TVariableNode<Metasound::FAudioBusAsset> *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = Metasound::FNodeData::FNodeData(&local_b0,in_R9);
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_c8,
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)param_2);
      pTVar4 = Metasound::TVariableNode<Metasound::FAudioBusAsset>::
               TVariableNode<Metasound::FAudioBusAsset>
                         (this_00,(FLiteral *)&local_c8,pFVar3,&local_d8);
    }
    (param_1->Value)._padding_ = (longlong)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
    Metasound::FNodeData::~FNodeData(in_R9);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->Value)._padding_ = 0;
  Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f7bb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableMutatorOperator<Metasound::FAudioBusAsset>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableMutatorOperator_VFAudioBusAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2f7c80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x490);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x498);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<Metasound::FAudioBusAsset>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_VFAudioBusAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f7e10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableAccessorOperator<Metasound::FAudioBusAsset>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableAccessorOperator_VFAudioBusAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2f7ea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<Metasound::FAudioBusAsset>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_VFAudioBusAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f7f90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableDeferredAccessorOperator<Metasound::FAudioBusAsset>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_VFAudioBusAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2f8020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<Metasound::FAudioBusAsset>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_VFAudioBusAsset_Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2f81d0

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  IDataTypeRegistry *pIVar5;
  UClass *pUVar6;
  TSharedPtr<Audio::IProxyData,1> *pTVar7;
  UObject *pUVar8;
  FName local_res20;
  FName local_18 [2];
  
  pIVar5 = Metasound::Frontend::IDataTypeRegistry::Get();
  cVar3 = (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5,param_1);
  if (cVar3 != '\0') {
    if (param_1 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UAudioBus_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5387723863637360494>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\IAudioProxyInitializer.h"
                           ,0x92,"DowncastObject");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar2)();
          return pTVar7;
        }
      }
      else {
        pUVar8 = param_1 + 1;
        if (pUVar8 != (UObject *)0x0) {
          ::FName::FName(&local_res20,"MetaSound");
          local_18[0] = local_res20;
          (**(code **)(*(longlong *)pUVar8 + 8))(pUVar8,__return_storage_ptr__,local_18);
          return __return_storage_ptr__;
        }
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082685>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x2fd,"ObjectAsFactory");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2f82e0

/* WARNING: Removing unreachable block (ram,0x00014b2f83d7) */
/* WARNING: Removing unreachable block (ram,0x00014b2f83fc) */

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  code *pcVar1;
  EDataReferenceAccessType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FAudioBusAsset> *pTVar4;
  TOptional<Metasound::FAnyDataReference> *pTVar5;
  TDataWriteReference<Metasound::FAudioBusAsset> *pTVar6;
  TDataReadReference<Metasound::FAudioBusAsset> *pTVar7;
  longlong *local_a8;
  undefined **local_a0;
  EDataReferenceAccessType local_98;
  longlong *local_90;
  undefined **local_88;
  EDataReferenceAccessType local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (param_1 == Read) {
    pTVar7 = Metasound::
             TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
             ::CreateExplicitArgs
                       ((TDataReadReference<Metasound::FAudioBusAsset> *)local_30,param_3,param_2);
    local_80 = Read;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar7 + 0x18))(pTVar7,&local_78);
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_80;
    (__return_storage_ptr__->TypedValue).AccessType = local_80;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_78 + 0x18))(local_78,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  else if (param_1 == Write) {
    pTVar6 = Metasound::
             TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FAudioBusAsset> *)local_50,param_3,param_2);
    local_98 = Write;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar6 + 0x18))(pTVar6,&local_90);
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_98;
    (__return_storage_ptr__->TypedValue).AccessType = local_98;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_90 + 0x18))(local_90,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_50._16_8_;
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,1);
      local_30._16_8_ = local_50._16_8_;
    }
  }
  else {
    if (param_1 != Value) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pTVar4 = Metasound::
             TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataValueReference<Metasound::FAudioBusAsset>_>
             ::CreateExplicitArgs
                       ((TDataValueReference<Metasound::FAudioBusAsset> *)local_70,param_3,param_2);
    (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_a8);
    if ((local_a8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue).AccessType = Value;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_a8 + 0x18))(local_a8,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_70._16_8_;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
      local_30._16_8_ = local_70._16_8_;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2f8640

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<Metasound::FAudioBusAsset> *pTVar6;
  FName *pFVar7;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>_> local_res10;
  TSharedRef<Metasound::IDataChannel,1> local_18;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<Metasound::FAudioBusAsset> *)0x0) {
    pTVar6 = (TCopyableDataChannel<Metasound::FAudioBusAsset> *)0x0;
  }
  else {
    pFVar7 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)&___7__TCopyableDataChannel_VFAudioBusAsset_Metasound___Metasound__6B_;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (FAudioBusAsset *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res10.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>_>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2f9b60

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<WaveTable::FWaveTable,0> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<WaveTable::FWaveTable,0> *)0x0) {
    FVar1 = (FName)Metasound::TInputNode<WaveTable::FWaveTable,0>::
                   TInputNode<WaveTable::FWaveTable,0>(this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2f9c90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<WaveTable::FWaveTable,0> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0xe0) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0xe0);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0xe8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<WaveTable::FWaveTable,0> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::TInputNode<WaveTable::FWaveTable,0>::
                       TInputNode<WaveTable::FWaveTable,0>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x22f,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f9e70

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateConstructorInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<WaveTable::FWaveTable,1> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<WaveTable::FWaveTable,1> *)0x0) {
    FVar1 = (FName)Metasound::TInputNode<WaveTable::FWaveTable,1>::
                   TInputNode<WaveTable::FWaveTable,1>(this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2f9f20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<WaveTable::FWaveTable,1> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0x180) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x180);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x188);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<WaveTable::FWaveTable,1> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::TInputNode<WaveTable::FWaveTable,1>::
                       TInputNode<WaveTable::FWaveTable,1>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x24d,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2fa0f0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateOutputNode(void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Reference);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 = &___7__TOutputNode_UFWaveTable_WaveTable___0A__Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2fa180

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateConstructorOutputNode(void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Value);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 = &___7__TOutputNode_UFWaveTable_WaveTable___00_Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2fa210

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateLiteralNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TLiteralNode<WaveTable::FWaveTable> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0x170);
  if (this_00 != (TLiteralNode<WaveTable::FWaveTable> *)0x0) {
    FVar1 = (FName)Metasound::TLiteralNode<WaveTable::FWaveTable>::
                   TLiteralNode<WaveTable::FWaveTable>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2fa270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::
               CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 = &___7__TReceiveNode_UFWaveTable_WaveTable___Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2fa380

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateVariableNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TVariableNode<WaveTable::FWaveTable> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TVariableNode<WaveTable::FWaveTable> *)0x0) {
    FVar1 = (FName)Metasound::TVariableNode<WaveTable::FWaveTable>::
                   TVariableNode<WaveTable::FWaveTable>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2fa3e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TVariableNode<WaveTable::FWaveTable> *this_00;
  FNodeData *pFVar3;
  TVariableNode<WaveTable::FWaveTable> *pTVar4;
  FNodeData *in_R9;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_d8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x3f0);
  if (pFVar1 != (FNodeClassMetadata *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x3f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    pTVar4 = (TVariableNode<WaveTable::FWaveTable> *)0x0;
    if (this_00 != (TVariableNode<WaveTable::FWaveTable> *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = Metasound::FNodeData::FNodeData(&local_b0,in_R9);
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_c8,
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)param_2);
      pTVar4 = Metasound::TVariableNode<WaveTable::FWaveTable>::TVariableNode<WaveTable::FWaveTable>
                         (this_00,(FLiteral *)&local_c8,pFVar3,&local_d8);
    }
    (param_1->Value)._padding_ = (longlong)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
    Metasound::FNodeData::~FNodeData(in_R9);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->Value)._padding_ = 0;
  Metasound::FLiteral::~FLiteral((FLiteral *)param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2fa4f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableMutatorOperator<WaveTable::FWaveTable>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableMutatorOperator_UFWaveTable_WaveTable___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2fa590

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x490);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x498);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<WaveTable::FWaveTable>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_UFWaveTable_WaveTable___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2fa6e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableAccessorOperator<WaveTable::FWaveTable>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableAccessorOperator_UFWaveTable_WaveTable___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2fa770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<WaveTable::FWaveTable>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_UFWaveTable_WaveTable___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2fa860

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateVariableDeferredAccessorNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::MetasoundVariableNodesPrivate::
               TVariableDeferredAccessorOperator<WaveTable::FWaveTable>::CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_UFWaveTable_WaveTable___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2fa8f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x530);
  if (pFVar1 == (FNodeClassMetadata *)0x0) {
    (param_1->Name).ComparisonIndex = 0;
    (param_1->Name).Number = 0;
  }
  else {
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x538);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FNodeClassMetadata *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (INode *)(*pcVar2)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
      }
    }
    this_00 = (FName)::operator_new(0xa0);
    if (this_00 == (FName)0x0) {
      (param_1->Name).ComparisonIndex = 0;
      (param_1->Name).Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      Metasound::FNodeFacade::FNodeFacade
                ((FNodeFacade *)this_00,in_R8,&local_18,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<WaveTable::FWaveTable>::CreateOperator);
      param_1->Name = this_00;
      *(undefined ***)this_00 =
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_UFWaveTable_WaveTable___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2fa9e0

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateProxy(void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2faa00

/* WARNING: Removing unreachable block (ram,0x00014b2faaf7) */
/* WARNING: Removing unreachable block (ram,0x00014b2fab1c) */

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateDataReference(void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
                   EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  code *pcVar1;
  EDataReferenceAccessType EVar2;
  bool bVar3;
  TDataValueReference<WaveTable::FWaveTable> *pTVar4;
  TOptional<Metasound::FAnyDataReference> *pTVar5;
  TDataWriteReference<WaveTable::FWaveTable> *pTVar6;
  TDataReadReference<WaveTable::FWaveTable> *pTVar7;
  longlong *local_a8;
  undefined **local_a0;
  EDataReferenceAccessType local_98;
  longlong *local_90;
  undefined **local_88;
  EDataReferenceAccessType local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (param_1 == Read) {
    pTVar7 = Metasound::
             TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataReadReference<WaveTable::FWaveTable>_>
             ::CreateExplicitArgs
                       ((TDataReadReference<WaveTable::FWaveTable> *)local_30,param_3,param_2);
    local_80 = Read;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar7 + 0x18))(pTVar7,&local_78);
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_80;
    (__return_storage_ptr__->TypedValue).AccessType = local_80;
    local_88 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_78 + 0x18))(local_78,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  else if (param_1 == Write) {
    pTVar6 = Metasound::
             TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataWriteReference<WaveTable::FWaveTable>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<WaveTable::FWaveTable> *)local_50,param_3,param_2);
    local_98 = Write;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar6 + 0x18))(pTVar6,&local_90);
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    EVar2 = local_98;
    (__return_storage_ptr__->TypedValue).AccessType = local_98;
    local_a0 = &___7FAnyDataReference_Metasound__6B_;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_90 + 0x18))(local_90,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    if ((EVar2 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_50._16_8_;
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,1);
      local_30._16_8_ = local_50._16_8_;
    }
  }
  else {
    if (param_1 != Value) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pTVar4 = Metasound::
             TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataValueReference<WaveTable::FWaveTable>_>
             ::CreateExplicitArgs
                       ((TDataValueReference<WaveTable::FWaveTable> *)local_70,param_3,param_2);
    (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_a8);
    if ((local_a8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue).AccessType = Value;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    (**(code **)(*local_a8 + 0x18))(local_a8,&(__return_storage_ptr__->TypedValue).DataRefPtr);
    if (((__return_storage_ptr__->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<Metasound::FAnyDataReference> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_
    ;
    __return_storage_ptr__->bIsSet = true;
    local_30._16_8_ = local_70._16_8_;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
      local_30._16_8_ = local_70._16_8_;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2fad60

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
CreateDataChannel(void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
                 FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<WaveTable::FWaveTable> *pTVar6;
  FName *pFVar7;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<WaveTable::FWaveTable>_> local_res10;
  TSharedRef<Metasound::IDataChannel,1> local_18;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<WaveTable::FWaveTable> *)0x0) {
    pTVar6 = (TCopyableDataChannel<WaveTable::FWaveTable> *)0x0;
  }
  else {
    pFVar7 = Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ = (longlong)&___7__TCopyableDataChannel_UFWaveTable_WaveTable___Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (FWaveTable *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res10.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<WaveTable::FWaveTable>_>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2fcb60

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2fcb80

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2fcbb0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2fcc00

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2fcc30

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2fcc50

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2fccc0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2fcce0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2fcd00

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2fcd20

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  ulonglong uVar4;
  FNodeData *in_R9;
  
  (param_1->Value)._padding_ = 0;
  uVar4 = (ulonglong)(byte)(param_2->ID).C;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2fcf60

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2fcf80

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2fcfb0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2fcfd0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2fd000

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2fd020

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2fd050

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2fd0b0

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2fd0c0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::FAudioBusAsset>,0,void>'::__l2
::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2fe8d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2fe970

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2fe9a0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode
          (void *this,FInputNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2fea10

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2feb30

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2feb50

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2feb70

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateLiteralNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2feb90

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2fece0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode
          (void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b2fed00

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableNode(void *this,FLiteral *param_1,FNodeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  ulonglong uVar4;
  FNodeData *in_R9;
  
  (param_1->Value)._padding_ = 0;
  uVar4 = (ulonglong)(byte)(param_2->ID).C;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_2);
  Metasound::FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2fee10

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14b2fee30

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableMutatorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2feec0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14b2feee0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2ff110

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode
          (void *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14b2ff170

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateVariableDeferredAccessorNode(void *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxy @ 14b2ff1a0

TSharedPtr<Audio::IProxyData,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateProxy
          (void *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14b2ff200

TOptional<Metasound::FAnyDataReference> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataReference
          (void *this,TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,FLiteral *param_2,FOperatorSettings *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDataChannel @ 14b2ff2b0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0,void>'
::__l2::FDataTypeRegistryEntry::CreateDataChannel
          (void *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateInputNode @ 14b2ff9d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<Metasound::FWaveAsset,0> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<Metasound::FWaveAsset,0> *)0x0) {
    FVar1 = (FName)Metasound::TInputNode<Metasound::FWaveAsset,0>::
                   TInputNode<Metasound::FWaveAsset,0>(this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14b2ffa90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<Metasound::FWaveAsset,0> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0xe0) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0xe0);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0xe8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<Metasound::FWaveAsset,0> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::TInputNode<Metasound::FWaveAsset,0>::
                       TInputNode<Metasound::FWaveAsset,0>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x22f,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2ffc60

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FInputNodeConstructorParams *param_1)

{
  TInputNode<Metasound::FWaveAsset,1> *this_00;
  FName FVar1;
  FInputNodeConstructorParams *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TInputNode<Metasound::FWaveAsset,1> *)0x0) {
    FVar1 = (FName)Metasound::TInputNode<Metasound::FWaveAsset,1>::
                   TInputNode<Metasound::FWaveAsset,1>(this_00,in_R8);
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14b2ffcc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateConstructorInputNode(void *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FInputDataVertex *pFVar6;
  TInputNode<Metasound::FWaveAsset,1> *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    this_00 = Metasound::FVertexInterface::GetInputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,0);
      if (*(longlong *)((longlong)this + 0x180) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = *(FNodeClassMetadata **)((longlong)this + 0x180);
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x188);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (TInputNode<Metasound::FWaveAsset,1> *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = Metasound::FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)Metasound::TInputNode<Metasound::FWaveAsset,1>::
                       TInputNode<Metasound::FWaveAsset,1>
                                 (this_01,(FName *)&pFVar6->_padding_,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      Metasound::FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8072795382528082509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                       ,0x24d,"Inputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  Metasound::FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14b2ffe50

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Reference);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 = &___7__TOutputNode_VFWaveAsset_Metasound___0A__Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14b2ffee0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateConstructorOutputNode
          (void *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  FName this_00;
  FName *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>();
    Metasound::FOutputNode::FOutputNode
              ((FOutputNode *)this_00,in_R8 + 3,(FGuid *)(in_R8 + 1),in_R8,pFVar1,Value);
    param_1->NodeName = this_00;
    *(undefined ***)this_00 = &___7__TOutputNode_VFWaveAsset_Metasound___00_Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralNode @ 14b2fff70

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateLiteralNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TLiteralNode<Metasound::FWaveAsset> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0x170);
  if (this_00 != (TLiteralNode<Metasound::FWaveAsset> *)0x0) {
    FVar1 = (FName)Metasound::TLiteralNode<Metasound::FWaveAsset>::
                   TLiteralNode<Metasound::FWaveAsset>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateReceiveNode @ 14b2fffd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateReceiveNode(void *this,FNodeInitData *param_1)

{
  FName this_00;
  FNodeClassMetadata *pFVar1;
  FName *in_R8;
  
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 != (FName)0x0) {
    pFVar1 = Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo();
    Metasound::FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,(FGuid *)(in_R8 + 1),pFVar1,
               Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::
               CreateOperator);
    param_1->InstanceName = this_00;
    *(undefined ***)this_00 = &___7__TReceiveNode_VFWaveAsset_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14b300180

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::CreateVariableNode(void *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  TVariableNode<Metasound::FWaveAsset> *this_00;
  FName FVar1;
  FName *in_R8;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TVariableNode<Metasound::FWaveAsset> *)0x0) {
    FVar1 = (FName)Metasound::TVariableNode<Metasound::FWaveAsset>::
                   TVariableNode<Metasound::FWaveAsset>
                             (this_00,in_R8,(FGuid *)(in_R8 + 1),(FLiteral *)(in_R8 + 3));
    param_1->NodeName = FVar1;
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// <lambda_invoker_cdecl> @ 14b300590

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
InitRawAssignmentFunction'::__l4::<lambda_1>::<lambda_invoker_cdecl>(void *param_1,void *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(param_2,param_1);
  *(undefined4 *)((longlong)param_2 + 0x10) = *(undefined4 *)((longlong)param_1 + 0x10);
  return;
}

// <lambda_invoker_cdecl> @ 14b3005d0

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::InitRawAssignmentFunction'::__l4::<lambda_1>::<lambda_invoker_cdecl>
          (void *param_1,void *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  DestructItems<Metasound::FAudioBusAsset,int>
            (*(FAudioBusAsset **)param_2,*(int *)((longlong)param_2 + 8));
  iVar8 = 0;
  piVar1 = (int *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,param_2,0,piVar1);
  }
  if (0 < *(int *)param_1) {
    puVar7 = (undefined8 *)((longlong)param_1 + 8);
    do {
      if (((*(undefined8 **)param_2 <= puVar7) &&
          (puVar7 < *(undefined8 **)param_2 + (longlong)*piVar1 * 2)) &&
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
      iVar5 = *(int *)((longlong)param_2 + 8);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,param_2,piVar1);
      }
      *(int *)((longlong)param_2 + 8) = iVar5 + 1;
      puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)param_2);
      *puVar6 = *puVar7;
      lVar2 = puVar7[1];
      puVar6[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 2;
    } while (iVar8 < *(int *)param_1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 14b300710

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::InitRawAssignmentFunction'::__l4::<lambda_1>::<lambda_invoker_cdecl>
          (void *param_1,void *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  DestructItems<Metasound::FWaveAsset,int>(*(FWaveAsset **)param_2,*(int *)((longlong)param_2 + 8));
  iVar8 = 0;
  piVar1 = (int *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,param_2,0,piVar1);
  }
  if (0 < *(int *)param_1) {
    puVar7 = (undefined8 *)((longlong)param_1 + 8);
    do {
      if (((*(undefined8 **)param_2 <= puVar7) &&
          (puVar7 < *(undefined8 **)param_2 + (longlong)*piVar1 * 2)) &&
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
      iVar5 = *(int *)((longlong)param_2 + 8);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,param_2,piVar1);
      }
      *(int *)((longlong)param_2 + 8) = iVar5 + 1;
      puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)param_2);
      *puVar6 = *puVar7;
      lVar2 = puVar7[1];
      puVar6[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 2;
    } while (iVar8 < *(int *)param_1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 14b300850

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::InitRawAssignmentFunction'::__l4::<lambda_1>::<lambda_invoker_cdecl>
          (void *param_1,void *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  DestructItems<Metasound::FWaveTableBankAsset,int>
            (*(FWaveTableBankAsset **)param_2,*(int *)((longlong)param_2 + 8));
  iVar8 = 0;
  piVar1 = (int *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,param_2,0,piVar1);
  }
  if (0 < *(int *)param_1) {
    puVar7 = (undefined8 *)((longlong)param_1 + 8);
    do {
      if (((*(undefined8 **)param_2 <= puVar7) &&
          (puVar7 < *(undefined8 **)param_2 + (longlong)*piVar1 * 2)) &&
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
      iVar5 = *(int *)((longlong)param_2 + 8);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,param_2,piVar1);
      }
      *(int *)((longlong)param_2 + 8) = iVar5 + 1;
      puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)param_2);
      *puVar6 = *puVar7;
      lVar2 = puVar7[1];
      puVar6[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 2;
    } while (iVar8 < *(int *)param_1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 14b300990

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::InitRawAssignmentFunction'::__l4::<lambda_1>::<lambda_invoker_cdecl>
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  return;
}

// <lambda_invoker_cdecl> @ 14b3009a0

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::InitRawAssignmentFunction'::__l4::<lambda_1>::<lambda_invoker_cdecl>
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  return;
}

// <lambda_invoker_cdecl> @ 14b3009b0

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::InitRawAssignmentFunction'::__l4::<lambda_1>::<lambda_invoker_cdecl>
          (void *param_1,void *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_2 + 8);
  *(undefined8 *)param_2 = uVar2;
  *(longlong *)((longlong)param_2 + 8) = lVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// <lambda_invoker_cdecl> @ 14b3009e0

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::InitRawAssignmentFunction'::__l4::<lambda_1>::<lambda_invoker_cdecl>
          (void *param_1,void *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_2 + 8);
  *(undefined8 *)param_2 = uVar2;
  *(longlong *)((longlong)param_2 + 8) = lVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// <lambda_invoker_cdecl> @ 14b300a10

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::InitRawAssignmentFunction'::__l4::<lambda_1>::<lambda_invoker_cdecl>
          (void *param_1,void *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_2 + 8);
  *(undefined8 *)param_2 = uVar2;
  *(longlong *)((longlong)param_2 + 8) = lVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// <lambda_invoker_cdecl> @ 14b300a40

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
InitLiteralAssignmentFunction'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FOperatorSettings *param_1,FLiteral *param_2,FAnyDataReference *param_3)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  IDataReference IVar4;
  IDataReference IVar5;
  FWaveTable local_28;
  
  IVar4 = (IDataReference)
          Metasound::
          TDataLiteralFactory<WaveTable::FWaveTable,Metasound::DataFactoryPrivate::TDataTypeCreator<WaveTable::FWaveTable>_>
          ::CreateExplicitArgs(&local_28,param_1,param_2);
  pIVar1 = (param_3->DataRefPtr).Ptr;
  if (pIVar1 == (IDataReference *)0x0) {
    IVar5 = (IDataReference)0x0;
  }
  else {
    bVar3 = Metasound::IsDataReferenceOfType<WaveTable::FWaveTable>(pIVar1);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x389,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_3->AccessType != Write) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::Write == AccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x38a,
                         L"Writable values can only be obtained with data references which have writable access"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    IVar5 = (param_3->DataRefPtr).Ptr[1];
  }
  if (IVar5 != IVar4) {
    if (*(void **)IVar5 != (void *)0x0) {
      FMemory::Free(*(void **)IVar5);
    }
    *(undefined8 *)IVar5 = *(undefined8 *)IVar4;
    *(undefined8 *)IVar4 = 0;
    *(int *)((longlong)IVar5 + 8) = *(int *)((longlong)IVar4 + 8);
    *(int *)((longlong)IVar5 + 0xc) = *(int *)((longlong)IVar4 + 0xc);
    *(undefined8 *)((longlong)IVar4 + 8) = 0;
  }
  *(float *)((longlong)IVar5 + 0x10) = *(float *)((longlong)IVar4 + 0x10);
  if (local_28.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Samples.AllocatorInstance.Data);
  }
  return;
}

// <lambda_invoker_cdecl> @ 14b300b30

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FOperatorSettings *param_1,FLiteral *param_2,FAnyDataReference *param_3)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  IDataReference IVar4;
  IDataReference IVar5;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_18;
  
  IVar4 = (IDataReference)
          Metasound::
          TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          ::CreateExplicitArgs(&local_18,param_1,param_2);
  pIVar1 = (param_3->DataRefPtr).Ptr;
  if (pIVar1 == (IDataReference *)0x0) {
    IVar5 = (IDataReference)0x0;
  }
  else {
    bVar3 = Metasound::
            IsDataReferenceOfType<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                      (pIVar1);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x389,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_3->AccessType != Write) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::Write == AccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x38a,
                         L"Writable values can only be obtained with data references which have writable access"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    IVar5 = (param_3->DataRefPtr).Ptr[1];
  }
  if (IVar5 != IVar4) {
    DestructItems<Metasound::FAudioBusAsset,int>
              (*(FAudioBusAsset **)IVar5,*(int *)((longlong)IVar5 + 8));
    if (*(void **)IVar5 != (void *)0x0) {
      FMemory::Free(*(void **)IVar5);
    }
    *(undefined8 *)IVar5 = *(undefined8 *)IVar4;
    *(undefined8 *)IVar4 = 0;
    *(int *)((longlong)IVar5 + 8) = *(int *)((longlong)IVar4 + 8);
    *(int *)((longlong)IVar5 + 0xc) = *(int *)((longlong)IVar4 + 0xc);
    *(undefined8 *)((longlong)IVar4 + 8) = 0;
  }
  DestructItems<Metasound::FAudioBusAsset,int>
            ((FAudioBusAsset *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// <lambda_invoker_cdecl> @ 14b300c30

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FOperatorSettings *param_1,FLiteral *param_2,FAnyDataReference *param_3)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  IDataReference IVar4;
  IDataReference IVar5;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_18;
  
  IVar4 = (IDataReference)
          Metasound::
          TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          ::CreateExplicitArgs(&local_18,param_1,param_2);
  pIVar1 = (param_3->DataRefPtr).Ptr;
  if (pIVar1 == (IDataReference *)0x0) {
    IVar5 = (IDataReference)0x0;
  }
  else {
    bVar3 = Metasound::
            IsDataReferenceOfType<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                      (pIVar1);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x389,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_3->AccessType != Write) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::Write == AccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x38a,
                         L"Writable values can only be obtained with data references which have writable access"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    IVar5 = (param_3->DataRefPtr).Ptr[1];
  }
  if (IVar5 != IVar4) {
    DestructItems<Metasound::FWaveAsset,int>(*(FWaveAsset **)IVar5,*(int *)((longlong)IVar5 + 8));
    if (*(void **)IVar5 != (void *)0x0) {
      FMemory::Free(*(void **)IVar5);
    }
    *(undefined8 *)IVar5 = *(undefined8 *)IVar4;
    *(undefined8 *)IVar4 = 0;
    *(int *)((longlong)IVar5 + 8) = *(int *)((longlong)IVar4 + 8);
    *(int *)((longlong)IVar5 + 0xc) = *(int *)((longlong)IVar4 + 0xc);
    *(undefined8 *)((longlong)IVar4 + 8) = 0;
  }
  DestructItems<Metasound::FWaveAsset,int>
            ((FWaveAsset *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// <lambda_invoker_cdecl> @ 14b300d30

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FOperatorSettings *param_1,FLiteral *param_2,FAnyDataReference *param_3)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  IDataReference IVar4;
  IDataReference IVar5;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_18;
  
  IVar4 = (IDataReference)
          Metasound::
          TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          ::CreateExplicitArgs(&local_18,param_1,param_2);
  pIVar1 = (param_3->DataRefPtr).Ptr;
  if (pIVar1 == (IDataReference *)0x0) {
    IVar5 = (IDataReference)0x0;
  }
  else {
    bVar3 = Metasound::
            IsDataReferenceOfType<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                      (pIVar1);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x389,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_3->AccessType != Write) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::Write == AccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x38a,
                         L"Writable values can only be obtained with data references which have writable access"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    IVar5 = (param_3->DataRefPtr).Ptr[1];
  }
  if (IVar5 != IVar4) {
    DestructItems<Metasound::FWaveTableBankAsset,int>
              (*(FWaveTableBankAsset **)IVar5,*(int *)((longlong)IVar5 + 8));
    if (*(void **)IVar5 != (void *)0x0) {
      FMemory::Free(*(void **)IVar5);
    }
    *(undefined8 *)IVar5 = *(undefined8 *)IVar4;
    *(undefined8 *)IVar4 = 0;
    *(int *)((longlong)IVar5 + 8) = *(int *)((longlong)IVar4 + 8);
    *(int *)((longlong)IVar5 + 0xc) = *(int *)((longlong)IVar4 + 0xc);
    *(undefined8 *)((longlong)IVar4 + 8) = 0;
  }
  DestructItems<Metasound::FWaveTableBankAsset,int>
            ((FWaveTableBankAsset *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// <lambda_invoker_cdecl> @ 14b300e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FOperatorSettings *param_1,FLiteral *param_2,FAnyDataReference *param_3)

{
  undefined4 uVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> TVar5;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  
  TVar5 = Metasound::
          TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)param_1);
  pIVar2 = (param_3->DataRefPtr).Ptr;
  uVar1 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
  if (pIVar2 == (IDataReference *)0x0) {
    _DAT_00000000 = uVar1;
    return;
  }
  bVar4 = Metasound::
          IsDataReferenceOfType<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                    (pIVar2);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x389,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3->AccessType != Write) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == AccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x38a,
                       L"Writable values can only be obtained with data references which have writable access"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)(param_3->DataRefPtr).Ptr[1] = uVar1;
  return;
}

// <lambda_invoker_cdecl> @ 14b300ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FOperatorSettings *param_1,FLiteral *param_2,FAnyDataReference *param_3)

{
  undefined4 uVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> TVar5;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  
  TVar5 = Metasound::
          TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)param_1);
  pIVar2 = (param_3->DataRefPtr).Ptr;
  uVar1 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
  if (pIVar2 == (IDataReference *)0x0) {
    _DAT_00000000 = uVar1;
    return;
  }
  bVar4 = Metasound::
          IsDataReferenceOfType<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                    (pIVar2);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x389,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3->AccessType != Write) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == AccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x38a,
                       L"Writable values can only be obtained with data references which have writable access"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)(param_3->DataRefPtr).Ptr[1] = uVar1;
  return;
}

// <lambda_invoker_cdecl> @ 14b300f90

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FOperatorSettings *param_1,FLiteral *param_2,FAnyDataReference *param_3)

{
  IDataReference *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  FAudioBusProxy *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FAudioBusAsset *pFVar7;
  IDataReference IVar8;
  FAudioBusAsset local_18;
  
  pFVar7 = Metasound::
           TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FAudioBusAsset>_>
           ::CreateExplicitArgs(&local_18,param_1,param_2);
  pIVar1 = (param_3->DataRefPtr).Ptr;
  IVar8 = (IDataReference)0x0;
  if (pIVar1 != (IDataReference *)0x0) {
    bVar6 = Metasound::IsDataReferenceOfType<Metasound::FAudioBusAsset>(pIVar1);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x389,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (param_3->AccessType != Write) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::Write == AccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x38a,
                         L"Writable values can only be obtained with data references which have writable access"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    IVar8 = (param_3->DataRefPtr).Ptr[1];
  }
  pTVar2 = (pFVar7->AudioBusProxy).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar7->AudioBusProxy).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)IVar8 + 8);
  *(FAudioBusProxy **)IVar8 = pFVar3;
  *(TReferenceControllerBase<1> **)((longlong)IVar8 + 8) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.AudioBusProxy.SharedReferenceCount.ReferenceController);
  return;
}

// <lambda_invoker_cdecl> @ 14b301060

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FOperatorSettings *param_1,FLiteral *param_2,FAnyDataReference *param_3)

{
  IDataReference *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSoundWaveProxy *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FWaveAsset *pFVar7;
  IDataReference IVar8;
  FWaveAsset local_18;
  
  pFVar7 = Metasound::
           TDataLiteralFactory<Metasound::FWaveAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveAsset>_>
           ::CreateExplicitArgs(&local_18,param_1,param_2);
  pIVar1 = (param_3->DataRefPtr).Ptr;
  IVar8 = (IDataReference)0x0;
  if (pIVar1 != (IDataReference *)0x0) {
    bVar6 = Metasound::IsDataReferenceOfType<Metasound::FWaveAsset>(pIVar1);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x389,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (param_3->AccessType != Write) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::Write == AccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x38a,
                         L"Writable values can only be obtained with data references which have writable access"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    IVar8 = (param_3->DataRefPtr).Ptr[1];
  }
  pTVar2 = (pFVar7->SoundWaveProxy).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar7->SoundWaveProxy).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)IVar8 + 8);
  *(FSoundWaveProxy **)IVar8 = pFVar3;
  *(TReferenceControllerBase<1> **)((longlong)IVar8 + 8) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SoundWaveProxy.SharedReferenceCount.ReferenceController);
  return;
}

// <lambda_invoker_cdecl> @ 14b301130

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FOperatorSettings *param_1,FLiteral *param_2,FAnyDataReference *param_3)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  IDataReference IVar4;
  IDataReference IVar5;
  FWaveTableBankAsset local_18;
  
  IVar4 = (IDataReference)
          Metasound::
          TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveTableBankAsset>_>
          ::CreateExplicitArgs(&local_18,param_1,param_2);
  pIVar1 = (param_3->DataRefPtr).Ptr;
  IVar5 = (IDataReference)0x0;
  if (pIVar1 != (IDataReference *)0x0) {
    bVar3 = Metasound::IsDataReferenceOfType<Metasound::FWaveTableBankAsset>(pIVar1);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x389,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_3->AccessType != Write) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::Write == AccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x38a,
                         L"Writable values can only be obtained with data references which have writable access"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    IVar5 = (param_3->DataRefPtr).Ptr[1];
  }
  if (IVar5 != IVar4) {
    *(undefined8 *)IVar5 = *(undefined8 *)IVar4;
    *(undefined8 *)IVar4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)IVar5 + 8),
               (FSharedReferencer<1> *)((longlong)IVar4 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Proxy.SharedReferenceCount.ReferenceController);
  return;
}

// FDataTypeRegistryEntry @ 14b3454f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntry * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
FDataTypeRegistryEntry(void *this)

{
  undefined8 uVar1;
  ITextData *pIVar2;
  FDataTypeRegistryInfo *pFVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Object = (IEnumDataTypeInterface *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           CreateDataTypeInfo<WaveTable::FWaveTable,9,void>((FDataTypeRegistryInfo *)local_68);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  FDataTypeRegistryEntryBase(this,pFVar3,&local_78);
  if ((ITextData *)local_68._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68._8_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  *(undefined ***)this =
       &
       ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_UFWaveTable_WaveTable___08X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
  ;
  local_68._0_8_ = *(FName *)((longlong)this + 0x600);
  pIVar2 = *(ITextData **)((longlong)this + 0x608);
  local_68._16_8_ = *(undefined8 *)((longlong)this + 0x610);
  local_68._24_8_ = *(undefined8 *)((longlong)this + 0x618);
  uVar1 = *(undefined8 *)((longlong)this + 0x620);
  local_68._40_8_ = *(undefined8 *)((longlong)this + 0x628);
  *(code **)((longlong)this + 0x600) =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_const_*,void_*),void,void_const_*,void_*>::Call;
  *(undefined8 *)((longlong)this + 0x608) = local_68._8_8_;
  *(undefined4 *)((longlong)this + 0x610) = 0x52323798;
  *(undefined4 *)((longlong)this + 0x614) = 1;
  *(undefined4 *)((longlong)this + 0x618) = 0x4b300590;
  *(undefined4 *)((longlong)this + 0x61c) = 1;
  *(undefined4 *)((longlong)this + 0x620) = local_68._32_4_;
  *(undefined4 *)((longlong)this + 0x624) = local_68._36_4_;
  *(undefined4 *)((longlong)this + 0x628) = 0;
  *(undefined4 *)((longlong)this + 0x62c) = 0;
  local_68._32_8_ = uVar1;
  local_68._8_8_ = pIVar2;
  if ((FName)local_68._0_8_ != (FName)0x0) {
    plVar4 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(code **)((longlong)this + 0x630) =
       ``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
       RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::
       FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  InitNodeClasses(this);
  return this;
}

// FDataTypeRegistryEntry @ 14b345630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntry * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(void *this)

{
  undefined8 uVar1;
  ITextData *pIVar2;
  FDataTypeRegistryInfo *pFVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Object = (IEnumDataTypeInterface *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           CreateDataTypeInfo<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>
                     ((FDataTypeRegistryInfo *)local_68);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  FDataTypeRegistryEntryBase(this,pFVar3,&local_78);
  if ((ITextData *)local_68._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68._8_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  *(undefined ***)this =
       &
       ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0L_X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
  ;
  local_68._0_8_ = *(FName *)((longlong)this + 0x600);
  pIVar2 = *(ITextData **)((longlong)this + 0x608);
  local_68._16_8_ = *(undefined8 *)((longlong)this + 0x610);
  local_68._24_8_ = *(undefined8 *)((longlong)this + 0x618);
  uVar1 = *(undefined8 *)((longlong)this + 0x620);
  local_68._40_8_ = *(undefined8 *)((longlong)this + 0x628);
  *(code **)((longlong)this + 0x600) =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_const_*,void_*),void,void_const_*,void_*>::Call;
  *(undefined8 *)((longlong)this + 0x608) = local_68._8_8_;
  *(undefined4 *)((longlong)this + 0x610) = 0x52323798;
  *(undefined4 *)((longlong)this + 0x614) = 1;
  *(undefined4 *)((longlong)this + 0x618) = 0x4b3005d0;
  *(undefined4 *)((longlong)this + 0x61c) = 1;
  *(undefined4 *)((longlong)this + 0x620) = local_68._32_4_;
  *(undefined4 *)((longlong)this + 0x624) = local_68._36_4_;
  *(undefined4 *)((longlong)this + 0x628) = 0;
  *(undefined4 *)((longlong)this + 0x62c) = 0;
  local_68._32_8_ = uVar1;
  local_68._8_8_ = pIVar2;
  if ((FName)local_68._0_8_ != (FName)0x0) {
    plVar4 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(code **)((longlong)this + 0x630) =
       ``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
       RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
       ::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  InitNodeClasses(this);
  return this;
}

// FDataTypeRegistryEntry @ 14b345770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntry * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(void *this)

{
  undefined8 uVar1;
  ITextData *pIVar2;
  FDataTypeRegistryInfo *pFVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Object = (IEnumDataTypeInterface *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           CreateDataTypeInfo<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>
                     ((FDataTypeRegistryInfo *)local_68);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  FDataTypeRegistryEntryBase(this,pFVar3,&local_78);
  if ((ITextData *)local_68._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68._8_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  *(undefined ***)this =
       &
       ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0L_X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
  ;
  local_68._0_8_ = *(FName *)((longlong)this + 0x600);
  pIVar2 = *(ITextData **)((longlong)this + 0x608);
  local_68._16_8_ = *(undefined8 *)((longlong)this + 0x610);
  local_68._24_8_ = *(undefined8 *)((longlong)this + 0x618);
  uVar1 = *(undefined8 *)((longlong)this + 0x620);
  local_68._40_8_ = *(undefined8 *)((longlong)this + 0x628);
  *(code **)((longlong)this + 0x600) =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_const_*,void_*),void,void_const_*,void_*>::Call;
  *(undefined8 *)((longlong)this + 0x608) = local_68._8_8_;
  *(undefined4 *)((longlong)this + 0x610) = 0x52323798;
  *(undefined4 *)((longlong)this + 0x614) = 1;
  *(undefined4 *)((longlong)this + 0x618) = 0x4b300710;
  *(undefined4 *)((longlong)this + 0x61c) = 1;
  *(undefined4 *)((longlong)this + 0x620) = local_68._32_4_;
  *(undefined4 *)((longlong)this + 0x624) = local_68._36_4_;
  *(undefined4 *)((longlong)this + 0x628) = 0;
  *(undefined4 *)((longlong)this + 0x62c) = 0;
  local_68._32_8_ = uVar1;
  local_68._8_8_ = pIVar2;
  if ((FName)local_68._0_8_ != (FName)0x0) {
    plVar4 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(code **)((longlong)this + 0x630) =
       ``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
       RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
       ::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  InitNodeClasses(this);
  return this;
}

// FDataTypeRegistryEntry @ 14b3458b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntry * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(void *this)

{
  undefined8 uVar1;
  ITextData *pIVar2;
  FDataTypeRegistryInfo *pFVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Object = (IEnumDataTypeInterface *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           CreateDataTypeInfo<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>
                     ((FDataTypeRegistryInfo *)local_68);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  FDataTypeRegistryEntryBase(this,pFVar3,&local_78);
  if ((ITextData *)local_68._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68._8_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  *(undefined ***)this =
       &
       ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0L_X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
  ;
  local_68._0_8_ = *(FName *)((longlong)this + 0x600);
  pIVar2 = *(ITextData **)((longlong)this + 0x608);
  local_68._16_8_ = *(undefined8 *)((longlong)this + 0x610);
  local_68._24_8_ = *(undefined8 *)((longlong)this + 0x618);
  uVar1 = *(undefined8 *)((longlong)this + 0x620);
  local_68._40_8_ = *(undefined8 *)((longlong)this + 0x628);
  *(code **)((longlong)this + 0x600) =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_const_*,void_*),void,void_const_*,void_*>::Call;
  *(undefined8 *)((longlong)this + 0x608) = local_68._8_8_;
  *(undefined4 *)((longlong)this + 0x610) = 0x52323798;
  *(undefined4 *)((longlong)this + 0x614) = 1;
  *(undefined4 *)((longlong)this + 0x618) = 0x4b300850;
  *(undefined4 *)((longlong)this + 0x61c) = 1;
  *(undefined4 *)((longlong)this + 0x620) = local_68._32_4_;
  *(undefined4 *)((longlong)this + 0x624) = local_68._36_4_;
  *(undefined4 *)((longlong)this + 0x628) = 0;
  *(undefined4 *)((longlong)this + 0x62c) = 0;
  local_68._32_8_ = uVar1;
  local_68._8_8_ = pIVar2;
  if ((FName)local_68._0_8_ != (FName)0x0) {
    plVar4 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(code **)((longlong)this + 0x630) =
       ``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
       RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
       ::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  InitNodeClasses(this);
  return this;
}

// FDataTypeRegistryEntry @ 14b3459f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntry * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(void *this)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FDataTypeRegistryEntry *pFVar6;
  FDataTypeRegistryInfo *pFVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_b8;
  FDataTypeRegistryInfo local_a8;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c0.ReferenceController = ::operator_new(0x18);
  if (local_c0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    (local_c0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9 = local_c0.ReferenceController + 1;
    (local_c0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_c0.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ__00_SharedPointerInternals__6B_
    ;
    local_c0.ReferenceController[1]._padding_ =
         (longlong)
         &
         ___7FEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ_6B_
    ;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FDataTypeRegistryEntry *)(*pcVar1)();
        return pFVar6;
      }
    }
    LOCK();
    (local_c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar4.ReferenceController = local_c0.ReferenceController;
  local_c8 = 0;
  local_b8.Object = (IEnumDataTypeInterface *)pTVar9;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_b8.SharedReferenceCount,&local_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  pFVar7 = Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           CreateDataTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>
                     (&local_a8);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  FDataTypeRegistryEntryBase(this,pFVar7,&local_b8);
  if (local_a8.DataTypeDisplayText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.DataTypeDisplayText.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  *(undefined ***)this =
       &
       ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___01X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
  ;
  local_58 = *(longlong *)((longlong)this + 0x600);
  uVar3 = *(undefined8 *)((longlong)this + 0x608);
  local_48 = *(longlong *)((longlong)this + 0x610);
  uStack_40 = *(undefined8 *)((longlong)this + 0x618);
  uVar2 = *(undefined8 *)((longlong)this + 0x620);
  plStack_30 = *(longlong **)((longlong)this + 0x628);
  *(code **)((longlong)this + 0x600) =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_const_*,void_*),void,void_const_*,void_*>::Call;
  *(undefined8 *)((longlong)this + 0x608) = uStack_50;
  *(undefined4 *)((longlong)this + 0x610) = 0x52323798;
  *(undefined4 *)((longlong)this + 0x614) = 1;
  *(undefined4 *)((longlong)this + 0x618) = 0x4b300990;
  *(undefined4 *)((longlong)this + 0x61c) = 1;
  *(undefined4 *)((longlong)this + 0x620) = (undefined4)local_38;
  *(undefined4 *)((longlong)this + 0x624) = local_38._4_4_;
  *(undefined4 *)((longlong)this + 0x628) = 0;
  *(undefined4 *)((longlong)this + 0x62c) = 0;
  local_38 = uVar2;
  uStack_50 = uVar3;
  if (local_58 != 0) {
    plVar8 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  *(code **)((longlong)this + 0x630) =
       ``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
       RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
       ::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  InitNodeClasses(this);
  return this;
}

// FDataTypeRegistryEntry @ 14b345c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntry * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(void *this)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FDataTypeRegistryEntry *pFVar6;
  FDataTypeRegistryInfo *pFVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_b8;
  FDataTypeRegistryInfo local_a8;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c0.ReferenceController = ::operator_new(0x18);
  if (local_c0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    (local_c0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9 = local_c0.ReferenceController + 1;
    (local_c0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_c0.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ__00_SharedPointerInternals__6B_
    ;
    local_c0.ReferenceController[1]._padding_ =
         (longlong)
         &
         ___7FEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ_6B_
    ;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FDataTypeRegistryEntry *)(*pcVar1)();
        return pFVar6;
      }
    }
    LOCK();
    (local_c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar4.ReferenceController = local_c0.ReferenceController;
  local_c8 = 0;
  local_b8.Object = (IEnumDataTypeInterface *)pTVar9;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_b8.SharedReferenceCount,&local_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  pFVar7 = Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           CreateDataTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>
                     (&local_a8);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  FDataTypeRegistryEntryBase(this,pFVar7,&local_b8);
  if (local_a8.DataTypeDisplayText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.DataTypeDisplayText.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  *(undefined ***)this =
       &
       ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___01X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
  ;
  local_58 = *(longlong *)((longlong)this + 0x600);
  uVar3 = *(undefined8 *)((longlong)this + 0x608);
  local_48 = *(longlong *)((longlong)this + 0x610);
  uStack_40 = *(undefined8 *)((longlong)this + 0x618);
  uVar2 = *(undefined8 *)((longlong)this + 0x620);
  plStack_30 = *(longlong **)((longlong)this + 0x628);
  *(code **)((longlong)this + 0x600) =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_const_*,void_*),void,void_const_*,void_*>::Call;
  *(undefined8 *)((longlong)this + 0x608) = uStack_50;
  *(undefined4 *)((longlong)this + 0x610) = 0x52323798;
  *(undefined4 *)((longlong)this + 0x614) = 1;
  *(undefined4 *)((longlong)this + 0x618) = 0x4b3009a0;
  *(undefined4 *)((longlong)this + 0x61c) = 1;
  *(undefined4 *)((longlong)this + 0x620) = (undefined4)local_38;
  *(undefined4 *)((longlong)this + 0x624) = local_38._4_4_;
  *(undefined4 *)((longlong)this + 0x628) = 0;
  *(undefined4 *)((longlong)this + 0x62c) = 0;
  local_38 = uVar2;
  uStack_50 = uVar3;
  if (local_58 != 0) {
    plVar8 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  *(code **)((longlong)this + 0x630) =
       ``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
       RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
       ::__l2::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  InitNodeClasses(this);
  return this;
}

// FDataTypeRegistryEntry @ 14b345e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntry * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::FDataTypeRegistryEntry(void *this)

{
  undefined8 uVar1;
  ITextData *pIVar2;
  FDataTypeRegistryInfo *pFVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Object = (IEnumDataTypeInterface *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           CreateDataTypeInfo<Metasound::FAudioBusAsset,5,UAudioBus>
                     ((FDataTypeRegistryInfo *)local_68);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  FDataTypeRegistryEntryBase(this,pFVar3,&local_78);
  if ((ITextData *)local_68._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68._8_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  *(undefined ***)this =
       &
       ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_VFAudioBusAsset_Metasound___04VUAudioBus___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
  ;
  local_68._0_8_ = *(FName *)((longlong)this + 0x600);
  pIVar2 = *(ITextData **)((longlong)this + 0x608);
  local_68._16_8_ = *(undefined8 *)((longlong)this + 0x610);
  local_68._24_8_ = *(undefined8 *)((longlong)this + 0x618);
  uVar1 = *(undefined8 *)((longlong)this + 0x620);
  local_68._40_8_ = *(undefined8 *)((longlong)this + 0x628);
  *(code **)((longlong)this + 0x600) =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_const_*,void_*),void,void_const_*,void_*>::Call;
  *(undefined8 *)((longlong)this + 0x608) = local_68._8_8_;
  *(undefined4 *)((longlong)this + 0x610) = 0x52323798;
  *(undefined4 *)((longlong)this + 0x614) = 1;
  *(undefined4 *)((longlong)this + 0x618) = 0x4b3009b0;
  *(undefined4 *)((longlong)this + 0x61c) = 1;
  *(undefined4 *)((longlong)this + 0x620) = local_68._32_4_;
  *(undefined4 *)((longlong)this + 0x624) = local_68._36_4_;
  *(undefined4 *)((longlong)this + 0x628) = 0;
  *(undefined4 *)((longlong)this + 0x62c) = 0;
  local_68._32_8_ = uVar1;
  local_68._8_8_ = pIVar2;
  if ((FName)local_68._0_8_ != (FName)0x0) {
    plVar4 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(code **)((longlong)this + 0x630) =
       ``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
       RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
       FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  InitNodeClasses(this);
  return this;
}

// FDataTypeRegistryEntry @ 14b345f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntry * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::FDataTypeRegistryEntry(void *this)

{
  undefined8 uVar1;
  ITextData *pIVar2;
  FDataTypeRegistryInfo *pFVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Object = (IEnumDataTypeInterface *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           CreateDataTypeInfo<Metasound::FWaveAsset,5,USoundWave>((FDataTypeRegistryInfo *)local_68)
  ;
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  FDataTypeRegistryEntryBase(this,pFVar3,&local_78);
  if ((ITextData *)local_68._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68._8_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  *(undefined ***)this =
       &
       ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_VFWaveAsset_Metasound___04VUSoundWave___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
  ;
  local_68._0_8_ = *(FName *)((longlong)this + 0x600);
  pIVar2 = *(ITextData **)((longlong)this + 0x608);
  local_68._16_8_ = *(undefined8 *)((longlong)this + 0x610);
  local_68._24_8_ = *(undefined8 *)((longlong)this + 0x618);
  uVar1 = *(undefined8 *)((longlong)this + 0x620);
  local_68._40_8_ = *(undefined8 *)((longlong)this + 0x628);
  *(code **)((longlong)this + 0x600) =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_const_*,void_*),void,void_const_*,void_*>::Call;
  *(undefined8 *)((longlong)this + 0x608) = local_68._8_8_;
  *(undefined4 *)((longlong)this + 0x610) = 0x52323798;
  *(undefined4 *)((longlong)this + 0x614) = 1;
  *(undefined4 *)((longlong)this + 0x618) = 0x4b3009e0;
  *(undefined4 *)((longlong)this + 0x61c) = 1;
  *(undefined4 *)((longlong)this + 0x620) = local_68._32_4_;
  *(undefined4 *)((longlong)this + 0x624) = local_68._36_4_;
  *(undefined4 *)((longlong)this + 0x628) = 0;
  *(undefined4 *)((longlong)this + 0x62c) = 0;
  local_68._32_8_ = uVar1;
  local_68._8_8_ = pIVar2;
  if ((FName)local_68._0_8_ != (FName)0x0) {
    plVar4 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(code **)((longlong)this + 0x630) =
       ``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
       RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
       FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  InitNodeClasses(this);
  return this;
}

// FDataTypeRegistryEntry @ 14b3460b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntry * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::FDataTypeRegistryEntry(void *this)

{
  undefined8 uVar1;
  ITextData *pIVar2;
  FDataTypeRegistryInfo *pFVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Object = (IEnumDataTypeInterface *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           CreateDataTypeInfo<Metasound::FWaveTableBankAsset,5,UWaveTableBank>
                     ((FDataTypeRegistryInfo *)local_68);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  FDataTypeRegistryEntryBase(this,pFVar3,&local_78);
  if ((ITextData *)local_68._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68._8_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  *(undefined ***)this =
       &
       ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_VFWaveTableBankAsset_Metasound___04VUWaveTableBank___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
  ;
  local_68._0_8_ = *(FName *)((longlong)this + 0x600);
  pIVar2 = *(ITextData **)((longlong)this + 0x608);
  local_68._16_8_ = *(undefined8 *)((longlong)this + 0x610);
  local_68._24_8_ = *(undefined8 *)((longlong)this + 0x618);
  uVar1 = *(undefined8 *)((longlong)this + 0x620);
  local_68._40_8_ = *(undefined8 *)((longlong)this + 0x628);
  *(code **)((longlong)this + 0x600) =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_const_*,void_*),void,void_const_*,void_*>::Call;
  *(undefined8 *)((longlong)this + 0x608) = local_68._8_8_;
  *(undefined4 *)((longlong)this + 0x610) = 0x52323798;
  *(undefined4 *)((longlong)this + 0x614) = 1;
  *(undefined4 *)((longlong)this + 0x618) = 0x4b300a10;
  *(undefined4 *)((longlong)this + 0x61c) = 1;
  *(undefined4 *)((longlong)this + 0x620) = local_68._32_4_;
  *(undefined4 *)((longlong)this + 0x624) = local_68._36_4_;
  *(undefined4 *)((longlong)this + 0x628) = 0;
  *(undefined4 *)((longlong)this + 0x62c) = 0;
  local_68._32_8_ = uVar1;
  local_68._8_8_ = pIVar2;
  if ((FName)local_68._0_8_ != (FName)0x0) {
    plVar4 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(code **)((longlong)this + 0x630) =
       ``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
       RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2
       ::FDataTypeRegistryEntry::InitLiteralAssignmentFunction'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  InitNodeClasses(this);
  return this;
}

// InitNodeClasses @ 14b3c4ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<WaveTable::FWaveTable,9,void>'::__l2::FDataTypeRegistryEntry::
InitNodeClasses(void *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FNodeClassMetadata *pFVar4;
  TLiteralNode<WaveTable::FWaveTable> *pTVar5;
  FNodeClassMetadata *pFVar6;
  FNodeClassMetadata *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_918 [32];
  FName local_8d8;
  FName local_8d0;
  FGuid local_8c8;
  FName local_8b8;
  undefined **local_8b0 [4];
  FNodeClassMetadata local_890;
  TReferenceControllerBase<1> *local_7a8;
  FVertexInterface local_7a0;
  TReferenceControllerBase<1> *local_748;
  FNodeClassMetadata local_740;
  FNodeClassMetadata local_660;
  FNodeClassMetadata local_580;
  FNodeClassMetadata local_4a0;
  FNodeClassMetadata local_3c0;
  FNodeClassMetadata local_2e0;
  FNodeClassMetadata local_200;
  FNodeClassMetadata local_120;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar3 = Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  local_8d0 = *pFVar3;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableDeferredAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_4a0,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_580,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_660,pFVar4);
  pFVar4 = Metasound::TVariableNode<WaveTable::FWaveTable>::CreateNodeClassMetadata(&local_200);
  local_40.Value.TypeIndex = 0;
  local_8c8.A = 0;
  local_8c8.B = 0;
  local_8c8.C = 0;
  local_8c8.D = 0;
  ::FName::FName(&local_8b8,L"");
  pTVar5 = Metasound::TLiteralNode<WaveTable::FWaveTable>::TLiteralNode<WaveTable::FWaveTable>
                     ((TLiteralNode<WaveTable::FWaveTable> *)local_8b0,&local_8b8,&local_8c8,
                      &local_40);
  pFVar6 = (FNodeClassMetadata *)(**(code **)(*(longlong *)pTVar5 + 0x18))(pTVar5);
  pFVar7 = Metasound::FOutputNode::CreateNodeClassMetadata
                     (&local_2e0,&local_8d8,&local_8d0,Reference);
  pFVar3 = Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_740,&local_8d8,pFVar3,Reference);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBase(this,&local_740,pFVar7,pFVar6,pFVar4,&local_660,&local_580,&local_4a0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_740);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_2e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_748);
  Metasound::FVertexInterface::~FVertexInterface(&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a8);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_890);
  uVar8 = (ulonglong)local_40.Value.TypeIndex;
  local_8b0[0] = &___7INode_Metasound__6B_;
  if (0xc < local_40.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_40);
  }
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_200);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_660);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_580);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_4a0);
  pFVar4 = Metasound::FOutputNode::CreateNodeClassMetadata(&local_120,&local_8d8,&local_8d0,Value);
  pFVar3 = Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_3c0,&local_8d8,pFVar3,Value);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBaseConstructor(this,&local_3c0,pFVar4);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_3c0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_120);
  return;
}

// InitNodeClasses @ 14b3c5180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::InitNodeClasses(void *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FNodeClassMetadata *pFVar4;
  TLiteralNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FNodeClassMetadata *pFVar6;
  FNodeClassMetadata *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_918 [32];
  FName local_8d8;
  FName local_8d0;
  FGuid local_8c8;
  FName local_8b8;
  undefined **local_8b0 [4];
  FNodeClassMetadata local_890;
  TReferenceControllerBase<1> *local_7a8;
  FVertexInterface local_7a0;
  TReferenceControllerBase<1> *local_748;
  FNodeClassMetadata local_740;
  FNodeClassMetadata local_660;
  FNodeClassMetadata local_580;
  FNodeClassMetadata local_4a0;
  FNodeClassMetadata local_3c0;
  FNodeClassMetadata local_2e0;
  FNodeClassMetadata local_200;
  FNodeClassMetadata local_120;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  local_8d0 = *pFVar3;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableDeferredAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_4a0,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_580,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_660,pFVar4);
  pFVar4 = Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           ::CreateNodeClassMetadata(&local_200);
  local_40.Value.TypeIndex = 0;
  local_8c8.A = 0;
  local_8c8.B = 0;
  local_8c8.C = 0;
  local_8c8.D = 0;
  ::FName::FName(&local_8b8,L"");
  pTVar5 = Metasound::TLiteralNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
           TLiteralNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ((TLiteralNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       *)local_8b0,&local_8b8,&local_8c8,&local_40);
  pFVar6 = (FNodeClassMetadata *)(**(code **)(*(longlong *)pTVar5 + 0x18))(pTVar5);
  pFVar7 = Metasound::FOutputNode::CreateNodeClassMetadata
                     (&local_2e0,&local_8d8,&local_8d0,Reference);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_740,&local_8d8,pFVar3,Reference);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBase(this,&local_740,pFVar7,pFVar6,pFVar4,&local_660,&local_580,&local_4a0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_740);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_2e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_748);
  Metasound::FVertexInterface::~FVertexInterface(&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a8);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_890);
  uVar8 = (ulonglong)local_40.Value.TypeIndex;
  local_8b0[0] = &___7INode_Metasound__6B_;
  if (0xc < local_40.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_40);
  }
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_200);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_660);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_580);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_4a0);
  pFVar4 = Metasound::FOutputNode::CreateNodeClassMetadata(&local_120,&local_8d8,&local_8d0,Value);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_3c0,&local_8d8,pFVar3,Value);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBaseConstructor(this,&local_3c0,pFVar4);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_3c0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_120);
  return;
}

// InitNodeClasses @ 14b3c5440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::InitNodeClasses(void *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FNodeClassMetadata *pFVar4;
  TLiteralNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FNodeClassMetadata *pFVar6;
  FNodeClassMetadata *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_918 [32];
  FName local_8d8;
  FName local_8d0;
  FGuid local_8c8;
  FName local_8b8;
  undefined **local_8b0 [4];
  FNodeClassMetadata local_890;
  TReferenceControllerBase<1> *local_7a8;
  FVertexInterface local_7a0;
  TReferenceControllerBase<1> *local_748;
  FNodeClassMetadata local_740;
  FNodeClassMetadata local_660;
  FNodeClassMetadata local_580;
  FNodeClassMetadata local_4a0;
  FNodeClassMetadata local_3c0;
  FNodeClassMetadata local_2e0;
  FNodeClassMetadata local_200;
  FNodeClassMetadata local_120;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  local_8d0 = *pFVar3;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableDeferredAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_4a0,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_580,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_660,pFVar4);
  pFVar4 = Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           CreateNodeClassMetadata(&local_200);
  local_40.Value.TypeIndex = 0;
  local_8c8.A = 0;
  local_8c8.B = 0;
  local_8c8.C = 0;
  local_8c8.D = 0;
  ::FName::FName(&local_8b8,L"");
  pTVar5 = Metasound::TLiteralNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           TLiteralNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                     ((TLiteralNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                      local_8b0,&local_8b8,&local_8c8,&local_40);
  pFVar6 = (FNodeClassMetadata *)(**(code **)(*(longlong *)pTVar5 + 0x18))(pTVar5);
  pFVar7 = Metasound::FOutputNode::CreateNodeClassMetadata
                     (&local_2e0,&local_8d8,&local_8d0,Reference);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_740,&local_8d8,pFVar3,Reference);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBase(this,&local_740,pFVar7,pFVar6,pFVar4,&local_660,&local_580,&local_4a0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_740);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_2e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_748);
  Metasound::FVertexInterface::~FVertexInterface(&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a8);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_890);
  uVar8 = (ulonglong)local_40.Value.TypeIndex;
  local_8b0[0] = &___7INode_Metasound__6B_;
  if (0xc < local_40.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_40);
  }
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_200);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_660);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_580);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_4a0);
  pFVar4 = Metasound::FOutputNode::CreateNodeClassMetadata(&local_120,&local_8d8,&local_8d0,Value);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_3c0,&local_8d8,pFVar3,Value);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBaseConstructor(this,&local_3c0,pFVar4);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_3c0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_120);
  return;
}

// InitNodeClasses @ 14b3c5700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,11,void>'
::__l2::FDataTypeRegistryEntry::InitNodeClasses(void *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FNodeClassMetadata *pFVar4;
  TLiteralNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FNodeClassMetadata *pFVar6;
  FNodeClassMetadata *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_918 [32];
  FName local_8d8;
  FName local_8d0;
  FGuid local_8c8;
  FName local_8b8;
  undefined **local_8b0 [4];
  FNodeClassMetadata local_890;
  TReferenceControllerBase<1> *local_7a8;
  FVertexInterface local_7a0;
  TReferenceControllerBase<1> *local_748;
  FNodeClassMetadata local_740;
  FNodeClassMetadata local_660;
  FNodeClassMetadata local_580;
  FNodeClassMetadata local_4a0;
  FNodeClassMetadata local_3c0;
  FNodeClassMetadata local_2e0;
  FNodeClassMetadata local_200;
  FNodeClassMetadata local_120;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  local_8d0 = *pFVar3;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableDeferredAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_4a0,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_580,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_660,pFVar4);
  pFVar4 = Metasound::
           TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
           CreateNodeClassMetadata(&local_200);
  local_40.Value.TypeIndex = 0;
  local_8c8.A = 0;
  local_8c8.B = 0;
  local_8c8.C = 0;
  local_8c8.D = 0;
  ::FName::FName(&local_8b8,L"");
  pTVar5 = Metasound::
           TLiteralNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
           TLiteralNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ((TLiteralNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       *)local_8b0,&local_8b8,&local_8c8,&local_40);
  pFVar6 = (FNodeClassMetadata *)(**(code **)(*(longlong *)pTVar5 + 0x18))(pTVar5);
  pFVar7 = Metasound::FOutputNode::CreateNodeClassMetadata
                     (&local_2e0,&local_8d8,&local_8d0,Reference);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_740,&local_8d8,pFVar3,Reference);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBase(this,&local_740,pFVar7,pFVar6,pFVar4,&local_660,&local_580,&local_4a0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_740);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_2e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_748);
  Metasound::FVertexInterface::~FVertexInterface(&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a8);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_890);
  uVar8 = (ulonglong)local_40.Value.TypeIndex;
  local_8b0[0] = &___7INode_Metasound__6B_;
  if (0xc < local_40.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_40);
  }
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_200);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_660);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_580);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_4a0);
  pFVar4 = Metasound::FOutputNode::CreateNodeClassMetadata(&local_120,&local_8d8,&local_8d0,Value);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_3c0,&local_8d8,pFVar3,Value);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBaseConstructor(this,&local_3c0,pFVar4);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_3c0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_120);
  return;
}

// InitNodeClasses @ 14b3c59c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,2,void>'
::__l2::FDataTypeRegistryEntry::InitNodeClasses(void *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FNodeClassMetadata *pFVar4;
  TLiteralNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar5;
  FNodeClassMetadata *pFVar6;
  FNodeClassMetadata *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_918 [32];
  FName local_8d8;
  FName local_8d0;
  FGuid local_8c8;
  FName local_8b8;
  undefined **local_8b0 [4];
  FNodeClassMetadata local_890;
  TReferenceControllerBase<1> *local_7a8;
  FVertexInterface local_7a0;
  TReferenceControllerBase<1> *local_748;
  FNodeClassMetadata local_740;
  FNodeClassMetadata local_660;
  FNodeClassMetadata local_580;
  FNodeClassMetadata local_4a0;
  FNodeClassMetadata local_3c0;
  FNodeClassMetadata local_2e0;
  FNodeClassMetadata local_200;
  FNodeClassMetadata local_120;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  local_8d0 = *pFVar3;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableDeferredAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_4a0,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_580,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_660,pFVar4);
  pFVar4 = Metasound::
           TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::CreateNodeClassMetadata(&local_200);
  local_40.Value.TypeIndex = 0;
  local_8c8.A = 0;
  local_8c8.B = 0;
  local_8c8.C = 0;
  local_8c8.D = 0;
  ::FName::FName(&local_8b8,L"");
  pTVar5 = Metasound::
           TLiteralNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::
           TLiteralNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     (local_8b0,&local_8b8,&local_8c8,&local_40);
  pFVar6 = (FNodeClassMetadata *)(**(code **)(*(longlong *)pTVar5 + 0x18))(pTVar5);
  pFVar7 = Metasound::FOutputNode::CreateNodeClassMetadata
                     (&local_2e0,&local_8d8,&local_8d0,Reference);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_740,&local_8d8,pFVar3,Reference);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBase(this,&local_740,pFVar7,pFVar6,pFVar4,&local_660,&local_580,&local_4a0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_740);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_2e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_748);
  Metasound::FVertexInterface::~FVertexInterface(&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a8);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_890);
  uVar8 = (ulonglong)local_40.Value.TypeIndex;
  local_8b0[0] = &___7INode_Metasound__6B_;
  if (0xc < local_40.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_40);
  }
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_200);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_660);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_580);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_4a0);
  pFVar4 = Metasound::FOutputNode::CreateNodeClassMetadata(&local_120,&local_8d8,&local_8d0,Value);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_3c0,&local_8d8,pFVar3,Value);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBaseConstructor(this,&local_3c0,pFVar4);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_3c0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_120);
  return;
}

// InitNodeClasses @ 14b3c5c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,2,void>'
::__l2::FDataTypeRegistryEntry::InitNodeClasses(void *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FNodeClassMetadata *pFVar4;
  TLiteralNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar5;
  FNodeClassMetadata *pFVar6;
  FNodeClassMetadata *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_918 [32];
  FName local_8d8;
  FName local_8d0;
  FGuid local_8c8;
  FName local_8b8;
  undefined **local_8b0 [4];
  FNodeClassMetadata local_890;
  TReferenceControllerBase<1> *local_7a8;
  FVertexInterface local_7a0;
  TReferenceControllerBase<1> *local_748;
  FNodeClassMetadata local_740;
  FNodeClassMetadata local_660;
  FNodeClassMetadata local_580;
  FNodeClassMetadata local_4a0;
  FNodeClassMetadata local_3c0;
  FNodeClassMetadata local_2e0;
  FNodeClassMetadata local_200;
  FNodeClassMetadata local_120;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  local_8d0 = *pFVar3;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableDeferredAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_4a0,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_580,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_660,pFVar4);
  pFVar4 = Metasound::
           TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::CreateNodeClassMetadata(&local_200);
  local_40.Value.TypeIndex = 0;
  local_8c8.A = 0;
  local_8c8.B = 0;
  local_8c8.C = 0;
  local_8c8.D = 0;
  ::FName::FName(&local_8b8,L"");
  pTVar5 = Metasound::
           TLiteralNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
           TLiteralNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     (local_8b0,&local_8b8,&local_8c8,&local_40);
  pFVar6 = (FNodeClassMetadata *)(**(code **)(*(longlong *)pTVar5 + 0x18))(pTVar5);
  pFVar7 = Metasound::FOutputNode::CreateNodeClassMetadata
                     (&local_2e0,&local_8d8,&local_8d0,Reference);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_740,&local_8d8,pFVar3,Reference);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBase(this,&local_740,pFVar7,pFVar6,pFVar4,&local_660,&local_580,&local_4a0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_740);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_2e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_748);
  Metasound::FVertexInterface::~FVertexInterface(&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a8);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_890);
  uVar8 = (ulonglong)local_40.Value.TypeIndex;
  local_8b0[0] = &___7INode_Metasound__6B_;
  if (0xc < local_40.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_40);
  }
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_200);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_660);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_580);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_4a0);
  pFVar4 = Metasound::FOutputNode::CreateNodeClassMetadata(&local_120,&local_8d8,&local_8d0,Value);
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_3c0,&local_8d8,pFVar3,Value);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBaseConstructor(this,&local_3c0,pFVar4);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_3c0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_120);
  return;
}

// InitNodeClasses @ 14b3c5f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FAudioBusAsset,5,UAudioBus>'::__l2::
FDataTypeRegistryEntry::InitNodeClasses(void *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FNodeClassMetadata *pFVar4;
  TLiteralNode<Metasound::FAudioBusAsset> *pTVar5;
  FNodeClassMetadata *pFVar6;
  FNodeClassMetadata *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_918 [32];
  FName local_8d8;
  FName local_8d0;
  FGuid local_8c8;
  FName local_8b8;
  undefined **local_8b0 [4];
  FNodeClassMetadata local_890;
  TReferenceControllerBase<1> *local_7a8;
  FVertexInterface local_7a0;
  TReferenceControllerBase<1> *local_748;
  FNodeClassMetadata local_740;
  FNodeClassMetadata local_660;
  FNodeClassMetadata local_580;
  FNodeClassMetadata local_4a0;
  FNodeClassMetadata local_3c0;
  FNodeClassMetadata local_2e0;
  FNodeClassMetadata local_200;
  FNodeClassMetadata local_120;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  local_8d0 = *pFVar3;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableDeferredAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_4a0,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_580,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_660,pFVar4);
  pFVar4 = Metasound::TVariableNode<Metasound::FAudioBusAsset>::CreateNodeClassMetadata(&local_200);
  local_40.Value.TypeIndex = 0;
  local_8c8.A = 0;
  local_8c8.B = 0;
  local_8c8.C = 0;
  local_8c8.D = 0;
  ::FName::FName(&local_8b8,L"");
  pTVar5 = Metasound::TLiteralNode<Metasound::FAudioBusAsset>::
           TLiteralNode<Metasound::FAudioBusAsset>
                     ((TLiteralNode<Metasound::FAudioBusAsset> *)local_8b0,&local_8b8,&local_8c8,
                      &local_40);
  pFVar6 = (FNodeClassMetadata *)(**(code **)(*(longlong *)pTVar5 + 0x18))(pTVar5);
  pFVar7 = Metasound::FOutputNode::CreateNodeClassMetadata
                     (&local_2e0,&local_8d8,&local_8d0,Reference);
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_740,&local_8d8,pFVar3,Reference);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBase(this,&local_740,pFVar7,pFVar6,pFVar4,&local_660,&local_580,&local_4a0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_740);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_2e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_748);
  Metasound::FVertexInterface::~FVertexInterface(&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a8);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_890);
  uVar8 = (ulonglong)local_40.Value.TypeIndex;
  local_8b0[0] = &___7INode_Metasound__6B_;
  if (0xc < local_40.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_40);
  }
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_200);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_660);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_580);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_4a0);
  pFVar4 = Metasound::FOutputNode::CreateNodeClassMetadata(&local_120,&local_8d8,&local_8d0,Value);
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_3c0,&local_8d8,pFVar3,Value);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBaseConstructor(this,&local_3c0,pFVar4);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_3c0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_120);
  return;
}

// InitNodeClasses @ 14b3c6200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveAsset,5,USoundWave>'::__l2::
FDataTypeRegistryEntry::InitNodeClasses(void *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FNodeClassMetadata *pFVar4;
  TLiteralNode<Metasound::FWaveAsset> *pTVar5;
  FNodeClassMetadata *pFVar6;
  FNodeClassMetadata *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_918 [32];
  FName local_8d8;
  FName local_8d0;
  FGuid local_8c8;
  FName local_8b8;
  undefined **local_8b0 [4];
  FNodeClassMetadata local_890;
  TReferenceControllerBase<1> *local_7a8;
  FVertexInterface local_7a0;
  TReferenceControllerBase<1> *local_748;
  FNodeClassMetadata local_740;
  FNodeClassMetadata local_660;
  FNodeClassMetadata local_580;
  FNodeClassMetadata local_4a0;
  FNodeClassMetadata local_3c0;
  FNodeClassMetadata local_2e0;
  FNodeClassMetadata local_200;
  FNodeClassMetadata local_120;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  local_8d0 = *pFVar3;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableDeferredAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_4a0,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_580,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>
           ::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_660,pFVar4);
  pFVar4 = Metasound::TVariableNode<Metasound::FWaveAsset>::CreateNodeClassMetadata(&local_200);
  local_40.Value.TypeIndex = 0;
  local_8c8.A = 0;
  local_8c8.B = 0;
  local_8c8.C = 0;
  local_8c8.D = 0;
  ::FName::FName(&local_8b8,L"");
  pTVar5 = Metasound::TLiteralNode<Metasound::FWaveAsset>::TLiteralNode<Metasound::FWaveAsset>
                     ((TLiteralNode<Metasound::FWaveAsset> *)local_8b0,&local_8b8,&local_8c8,
                      &local_40);
  pFVar6 = (FNodeClassMetadata *)(**(code **)(*(longlong *)pTVar5 + 0x18))(pTVar5);
  pFVar7 = Metasound::FOutputNode::CreateNodeClassMetadata
                     (&local_2e0,&local_8d8,&local_8d0,Reference);
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_740,&local_8d8,pFVar3,Reference);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBase(this,&local_740,pFVar7,pFVar6,pFVar4,&local_660,&local_580,&local_4a0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_740);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_2e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_748);
  Metasound::FVertexInterface::~FVertexInterface(&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a8);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_890);
  uVar8 = (ulonglong)local_40.Value.TypeIndex;
  local_8b0[0] = &___7INode_Metasound__6B_;
  if (0xc < local_40.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_40);
  }
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_200);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_660);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_580);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_4a0);
  pFVar4 = Metasound::FOutputNode::CreateNodeClassMetadata(&local_120,&local_8d8,&local_8d0,Value);
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_3c0,&local_8d8,pFVar3,Value);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBaseConstructor(this,&local_3c0,pFVar4);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_3c0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_120);
  return;
}

// InitNodeClasses @ 14b3c64c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::FWaveTableBankAsset,5,UWaveTableBank>'::__l2::
FDataTypeRegistryEntry::InitNodeClasses(void *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FNodeClassMetadata *pFVar4;
  TLiteralNode<Metasound::FWaveTableBankAsset> *pTVar5;
  FNodeClassMetadata *pFVar6;
  FNodeClassMetadata *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_918 [32];
  FName local_8d8;
  FName local_8d0;
  FGuid local_8c8;
  FName local_8b8;
  undefined **local_8b0 [4];
  FNodeClassMetadata local_890;
  TReferenceControllerBase<1> *local_7a8;
  FVertexInterface local_7a0;
  TReferenceControllerBase<1> *local_748;
  FNodeClassMetadata local_740;
  FNodeClassMetadata local_660;
  FNodeClassMetadata local_580;
  FNodeClassMetadata local_4a0;
  FNodeClassMetadata local_3c0;
  FNodeClassMetadata local_2e0;
  FNodeClassMetadata local_200;
  FNodeClassMetadata local_120;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  local_8d0 = *pFVar3;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableDeferredAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_4a0,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_580,pFVar4);
  pFVar4 = Metasound::MetasoundVariableNodesPrivate::
           TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(&local_660,pFVar4);
  pFVar4 = Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::CreateNodeClassMetadata
                     (&local_200);
  local_40.Value.TypeIndex = 0;
  local_8c8.A = 0;
  local_8c8.B = 0;
  local_8c8.C = 0;
  local_8c8.D = 0;
  ::FName::FName(&local_8b8,L"");
  pTVar5 = Metasound::TLiteralNode<Metasound::FWaveTableBankAsset>::
           TLiteralNode<Metasound::FWaveTableBankAsset>
                     ((TLiteralNode<Metasound::FWaveTableBankAsset> *)local_8b0,&local_8b8,
                      &local_8c8,&local_40);
  pFVar6 = (FNodeClassMetadata *)(**(code **)(*(longlong *)pTVar5 + 0x18))(pTVar5);
  pFVar7 = Metasound::FOutputNode::CreateNodeClassMetadata
                     (&local_2e0,&local_8d8,&local_8d0,Reference);
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_740,&local_8d8,pFVar3,Reference);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBase(this,&local_740,pFVar7,pFVar6,pFVar4,&local_660,&local_580,&local_4a0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_740);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_2e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_748);
  Metasound::FVertexInterface::~FVertexInterface(&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a8);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_890);
  uVar8 = (ulonglong)local_40.Value.TypeIndex;
  local_8b0[0] = &___7INode_Metasound__6B_;
  if (0xc < local_40.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_40);
  }
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_200);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_660);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_580);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_4a0);
  pFVar4 = Metasound::FOutputNode::CreateNodeClassMetadata(&local_120,&local_8d8,&local_8d0,Value);
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  Metasound::FInputNode::CreateNodeClassMetadata(&local_3c0,&local_8d8,pFVar3,Value);
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  InitNodeClassesBaseConstructor(this,&local_3c0,pFVar4);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_3c0);
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&local_120);
  return;
}

