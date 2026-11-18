// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 10

// FDocumentNodeClassRegistryEntry @ 14ae57da0

FDocumentNodeClassRegistryEntry * __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::
FDocumentNodeClassRegistryEntry
          (FDocumentNodeClassRegistryEntry *this,FMetasoundFrontendGraphClass *param_1,
          TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *param_2,FNodeClassInfo *param_3,TSharedPtr<Metasound::IGraph_const_,1> *param_4,
          FTopLevelAssetPath *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  this->_padding_ =
       (longlong)&___7FDocumentNodeClassRegistryEntry_RegistryPrivate_Frontend_Metasound__6B_;
  (this->FrontendClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined4 *)&param_1->_padding_;
  uVar5 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->FrontendClass).ID.A = *(undefined4 *)&param_1->_padding_;
  (this->FrontendClass).ID.B = uVar3;
  (this->FrontendClass).ID.C = uVar4;
  (this->FrontendClass).ID.D = uVar5;
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined4 *)&param_1->_padding_;
  uVar5 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->FrontendClass).Metadata.ClassName.Namespace.ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->FrontendClass).Metadata.ClassName.Namespace.Number = uVar3;
  (this->FrontendClass).Metadata.ClassName.Name.ComparisonIndex = (FNameEntryId)uVar4;
  (this->FrontendClass).Metadata.ClassName.Name.Number = uVar5;
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined4 *)&param_1->_padding_;
  uVar5 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->FrontendClass).Metadata.ClassName.Variant.ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->FrontendClass).Metadata.ClassName.Variant.Number = uVar3;
  (this->FrontendClass).Metadata.Version.Major = uVar4;
  (this->FrontendClass).Metadata.Version.Minor = uVar5;
  uVar6 = *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  uVar7 = *(undefined2 *)((longlong)&param_1->_padding_ + 2);
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined4 *)&param_1->_padding_;
  uVar5 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->FrontendClass).Metadata.Type = *(undefined1 *)&param_1->_padding_;
  (this->FrontendClass).Metadata.field_0x21 = uVar6;
  (this->FrontendClass).Metadata.AccessFlags = uVar7;
  (this->FrontendClass).Metadata.ChangeID.A = uVar3;
  (this->FrontendClass).Metadata.ChangeID.B = uVar4;
  (this->FrontendClass).Metadata.ChangeID.C = uVar5;
  (this->FrontendClass).Metadata.ChangeID.D = (uint)param_1->_padding_;
  FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
            (&(this->FrontendClass).Interface,
             (FMetasoundFrontendClassInterface *)&param_1->_padding_);
  *(undefined8 *)&(this->Interfaces).Elements = 0;
  *(undefined8 *)&(this->Interfaces).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Interfaces).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x34 = 0;
  (this->Interfaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Interfaces).HashSize = 0;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  ::operator=(&this->Interfaces,param_2);
  FVar2 = (param_3->ClassName).Name;
  (this->ClassInfo).ClassName.Namespace = (param_3->ClassName).Namespace;
  (this->ClassInfo).ClassName.Name = FVar2;
  (this->ClassInfo).ClassName.Variant = (param_3->ClassName).Variant;
  (this->ClassInfo).Type = param_3->Type;
  uVar8 = (param_3->AssetClassID).B;
  uVar9 = (param_3->AssetClassID).C;
  uVar10 = (param_3->AssetClassID).D;
  (this->ClassInfo).AssetClassID.A = (param_3->AssetClassID).A;
  (this->ClassInfo).AssetClassID.B = uVar8;
  (this->ClassInfo).AssetClassID.C = uVar9;
  (this->ClassInfo).AssetClassID.D = uVar10;
  FVar2 = (param_3->AssetPath).AssetName;
  (this->ClassInfo).AssetPath.PackageName = (param_3->AssetPath).PackageName;
  (this->ClassInfo).AssetPath.AssetName = FVar2;
  (this->ClassInfo).Version = param_3->Version;
  (this->Graph).Object = param_4->Object;
  pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
  (this->Graph).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar2 = param_5->AssetName;
  (this->AssetPath).PackageName = param_5->PackageName;
  (this->AssetPath).AssetName = FVar2;
  (this->FrontendClass).Metadata.Type = External;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FDocumentNodeClassRegistryEntry @ 14ae5c130

void __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::
~FDocumentNodeClassRegistryEntry(FDocumentNodeClassRegistryEntry *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Graph).SharedReferenceCount.ReferenceController);
  (this->Interfaces).HashSize = 0;
  FVar1 = (this->Interfaces).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Interfaces).Elements);
  pFVar2 = (this->FrontendClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FrontendClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->FrontendClass).Interface.Inputs.AllocatorInstance.Data,
             (this->FrontendClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->FrontendClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// CreateFrontendNodeConfiguration @ 14ae67bc0

TInstancedStruct<FMetaSoundFrontendNodeConfiguration> * __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::
CreateFrontendNodeConfiguration
          (FDocumentNodeClassRegistryEntry *this,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__)

{
  (__return_storage_ptr__->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (__return_storage_ptr__->InstancedStruct).StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  return __return_storage_ptr__;
}

// CreateNode @ 14ae694f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::CreateNode
          (FDocumentNodeClassRegistryEntry *this,FNodeInitData *param_1)

{
  IGraph *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGraphNode *this_00;
  FName FVar3;
  FNodeInitData *in_R8;
  TSharedRef<Metasound::IGraph_const_,1> local_18;
  
  pIVar1 = (this->Graph).Object;
  if (pIVar1 != (IGraph *)0x0) {
    pTVar2 = (this->Graph).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    FVar3.ComparisonIndex.Value = 0;
    FVar3.Number = 0;
    if (this_00 != (FGraphNode *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.Object = pIVar1;
      local_18.SharedReferenceCount.ReferenceController = pTVar2;
      FVar3 = (FName)FGraphNode::FGraphNode(this_00,in_R8,&local_18);
    }
    param_1->InstanceName = FVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    FMetasoundFrontendClassName::ToString(&(this->ClassInfo).ClassName,(FString *)&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>___cdecl_Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::CreateNode(Metasound::FNodeInitData_const&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Object != (IGraph *)0x0) {
      FMemory::Free(local_18.Object);
    }
  }
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae69600

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::CreateNode
          (FDocumentNodeClassRegistryEntry *this,FNodeData *param_1)

{
  IGraph *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGraphNode *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  FNodeData *in_R8;
  TSharedRef<Metasound::IGraph_const_,1> local_a8;
  FNodeData local_98;
  
  pIVar1 = (this->Graph).Object;
  if (pIVar1 != (IGraph *)0x0) {
    pTVar2 = (this->Graph).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = ::operator_new(0xa0);
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
    if (this_00 != (FGraphNode *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a8.Object = pIVar1;
      local_a8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
      FVar4 = (FName)FGraphNode::FGraphNode(this_00,pFVar3,&local_a8);
    }
    param_1->Name = FVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FNodeData::~FNodeData(in_R8);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    FTopLevelAssetPath::ToString(&this->AssetPath,(FString *)&local_a8);
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>___cdecl_Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::CreateNode(Metasound::FNodeData)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_a8.Object != (IGraph *)0x0) {
      FMemory::Free(local_a8.Object);
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// GetClassInfo @ 14ae74830

FNodeClassInfo * __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::GetClassInfo
          (FDocumentNodeClassRegistryEntry *this)

{
  return &this->ClassInfo;
}

// GetDefaultVertexInterface @ 14ae758d0

FVertexInterface * __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::GetDefaultVertexInterface
          (FDocumentNodeClassRegistryEntry *this,FVertexInterface *__return_storage_ptr__)

{
  IGraph *pIVar1;
  code *pcVar2;
  bool bVar3;
  FVertexInterface *pFVar4;
  longlong lVar5;
  
  pIVar1 = (this->Graph).Object;
  if (pIVar1 != (IGraph *)0x0) {
    lVar5 = (**(code **)((longlong)*pIVar1 + 0x18))();
    FVertexInterface::FVertexInterface(__return_storage_ptr__,(FVertexInterface *)(lVar5 + 0x60));
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<773741605369675954>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                     ,0xb2,"Graph.IsValid()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVertexInterface *)(*pcVar2)();
    return pFVar4;
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFrontendClass @ 14ae75950

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::GetFrontendClass
          (FDocumentNodeClassRegistryEntry *this)

{
  return &this->FrontendClass;
}

// GetImplementedInterfaces @ 14ae75c00

TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator> *
__thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::GetImplementedInterfaces
          (FDocumentNodeClassRegistryEntry *this)

{
  return &this->Interfaces;
}

// IsCompatibleNodeConfiguration @ 14ae7a190

bool __thiscall
Metasound::Frontend::RegistryPrivate::FDocumentNodeClassRegistryEntry::IsCompatibleNodeConfiguration
          (FDocumentNodeClassRegistryEntry *this,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *param_1)

{
  if ((*(longlong *)&param_1->field_0x8 != 0) && (*(longlong *)param_1 != 0)) {
    return false;
  }
  return true;
}

