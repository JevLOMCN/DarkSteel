// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 15

// StaticClass @ 14e1106b0

UClass * __cdecl UOptimusFunctionNodeGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusFunctionNodeGraph",
               &Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.InnerSingleton,
               StaticRegisterNativesUOptimusFunctionNodeGraph,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UOptimusFunctionNodeGraph>,
               InternalVTableHelperCtorCaller<UOptimusFunctionNodeGraph>,local_res8,
               UOptimusNodeSubGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.InnerSingleton;
}

// UOptimusFunctionNodeGraph @ 14e159f30

UOptimusFunctionNodeGraph * __thiscall
UOptimusFunctionNodeGraph::UOptimusFunctionNodeGraph
          (UOptimusFunctionNodeGraph *this,FVTableHelper *param_1)

{
  UOptimusNodeSubGraph::UOptimusNodeSubGraph((UOptimusNodeSubGraph *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  this->_padding_ = (longlong)&___7UOptimusFunctionNodeGraph__6B_;
  this->Category = UOptimusNode::CategoryName::Deformers;
  this->AccessSpecifier = AccessSpecifierPrivateName;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// UOptimusFunctionNodeGraph @ 14e159fa0

UOptimusFunctionNodeGraph * __thiscall
UOptimusFunctionNodeGraph::UOptimusFunctionNodeGraph(UOptimusFunctionNodeGraph *this)

{
  UOptimusNodeSubGraph::UOptimusNodeSubGraph((UOptimusNodeSubGraph *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  this->_padding_ = (longlong)&___7UOptimusFunctionNodeGraph__6B_;
  this->Category = UOptimusNode::CategoryName::Deformers;
  this->AccessSpecifier = AccessSpecifierPrivateName;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~UOptimusFunctionNodeGraph @ 14e162b80

void __thiscall
UOptimusFunctionNodeGraph::~UOptimusFunctionNodeGraph(UOptimusFunctionNodeGraph *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  this->_padding_ = (longlong)&___7UOptimusFunctionNodeGraph__6B_;
  UOptimusNodeSubGraph::~UOptimusNodeSubGraph((UOptimusNodeSubGraph *)this);
  return;
}

// GetAccessSpecifierOptions @ 14e1b7730

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusFunctionNodeGraph::GetAccessSpecifierOptions
          (UOptimusFunctionNodeGraph *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  FName FVar2;
  FName FVar3;
  
  FVar3 = AccessSpecifierPrivateName;
  FVar2 = AccessSpecifierPublicName;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&__return_storage_ptr__->AllocatorInstance,2,&__return_storage_ptr__->ArrayMax)
  ;
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  *pFVar1 = FVar2;
  pFVar1[1] = FVar3;
  return __return_storage_ptr__;
}

// GetGraphIdentifier @ 14e1c5770

FOptimusFunctionGraphIdentifier * __thiscall
UOptimusFunctionNodeGraph::GetGraphIdentifier
          (UOptimusFunctionNodeGraph *this,FOptimusFunctionGraphIdentifier *__return_storage_ptr__)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  UClass *pUVar6;
  UOptimusDeformer *pUVar7;
  FOptimusFunctionGraphIdentifier *pFVar8;
  
  (__return_storage_ptr__->Asset).field0_0x0.DebugPtr = (UOptimusDeformer *)0x0;
  (__return_storage_ptr__->Guid).A = 0;
  (__return_storage_ptr__->Guid).B = 0;
  (__return_storage_ptr__->Guid).C = 0;
  (__return_storage_ptr__->Guid).D = 0;
  pUVar6 = UOptimusDeformer::StaticClass();
  pUVar7 = (UOptimusDeformer *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UOptimusDeformer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (__return_storage_ptr__->Asset).field0_0x0.DebugPtr = pUVar7;
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Guid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusFunctionNodeGraph.cpp"
                       ,0x2f,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FOptimusFunctionGraphIdentifier *)(*pcVar1)();
      return pFVar8;
    }
  }
  uVar2 = (this->Guid).B;
  uVar3 = (this->Guid).C;
  uVar4 = (this->Guid).D;
  (__return_storage_ptr__->Guid).A = (this->Guid).A;
  (__return_storage_ptr__->Guid).B = uVar2;
  (__return_storage_ptr__->Guid).C = uVar3;
  (__return_storage_ptr__->Guid).D = uVar4;
  return __return_storage_ptr__;
}

// GetGuid @ 14e1c5980

FGuid * __thiscall
UOptimusFunctionNodeGraph::GetGuid(UOptimusFunctionNodeGraph *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->Guid).B;
  uVar2 = (this->Guid).C;
  uVar3 = (this->Guid).D;
  __return_storage_ptr__->A = (this->Guid).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetGuidForGraphWithoutGuid @ 14e1c59a0

FGuid * __cdecl
UOptimusFunctionNodeGraph::GetGuidForGraphWithoutGuid
          (FGuid *__return_storage_ptr__,TSoftObjectPtr<UOptimusFunctionNodeGraph> *param_1)

{
  void *pvVar1;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  FSoftObjectPath::ToString((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,&local_28);
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  FGuid::NewDeterministicGuid(__return_storage_ptr__,&local_18,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return __return_storage_ptr__;
}

// GetHeaderWithGuid @ 14e1c8570

FOptimusFunctionNodeGraphHeaderWithGuid * __thiscall
UOptimusFunctionNodeGraph::GetHeaderWithGuid
          (UOptimusFunctionNodeGraph *this,
          FOptimusFunctionNodeGraphHeaderWithGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (__return_storage_ptr__->FunctionGraphGuid).A = 0;
  (__return_storage_ptr__->FunctionGraphGuid).B = 0;
  (__return_storage_ptr__->FunctionGraphGuid).C = 0;
  (__return_storage_ptr__->FunctionGraphGuid).D = 0;
  (__return_storage_ptr__->FunctionName).ComparisonIndex = 0;
  (__return_storage_ptr__->FunctionName).Number = 0;
  (__return_storage_ptr__->Category).ComparisonIndex = 0;
  (__return_storage_ptr__->Category).Number = 0;
  uVar1 = (this->Guid).B;
  uVar2 = (this->Guid).C;
  uVar3 = (this->Guid).D;
  (__return_storage_ptr__->FunctionGraphGuid).A = (this->Guid).A;
  (__return_storage_ptr__->FunctionGraphGuid).B = uVar1;
  (__return_storage_ptr__->FunctionGraphGuid).C = uVar2;
  (__return_storage_ptr__->FunctionGraphGuid).D = uVar3;
  uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (__return_storage_ptr__->FunctionName).ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&this->_padding_;
  (__return_storage_ptr__->FunctionName).Number = uVar4;
  __return_storage_ptr__->Category = this->Category;
  return __return_storage_ptr__;
}

// GetNodeName @ 14e1cafb0

FString * __thiscall
UOptimusFunctionNodeGraph::GetNodeName
          (UOptimusFunctionNodeGraph *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d5ef0

UClass * __cdecl UOptimusFunctionNodeGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusFunctionNodeGraph",
               &Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.InnerSingleton,
               StaticRegisterNativesUOptimusFunctionNodeGraph,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UOptimusFunctionNodeGraph>,
               InternalVTableHelperCtorCaller<UOptimusFunctionNodeGraph>,local_res8,
               UOptimusNodeSubGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.InnerSingleton;
}

// Init @ 14e1eb3f0

void __thiscall UOptimusFunctionNodeGraph::Init(UOptimusFunctionNodeGraph *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->Guid).A = pFVar4->A;
  (this->Guid).B = uVar1;
  (this->Guid).C = uVar2;
  (this->Guid).D = uVar3;
  return;
}

// PostLoad @ 14e1fb760

void __thiscall UOptimusFunctionNodeGraph::PostLoad(UOptimusFunctionNodeGraph *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UOptimusFunctionNodeGraph *local_res20;
  FString local_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FGuid local_88;
  TStringView<wchar_t> local_78;
  FGuid local_68;
  undefined1 local_58 [8];
  FSoftObjectPath local_50;
  
  UObject::PostLoad((UObject *)this);
  puVar5 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar1 = puVar5 + iVar4;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodeGraph>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar5 == puVar1) break;
    UObject::ConditionalPostLoad((UObject *)*puVar5);
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar1 = puVar5 + iVar4;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UOptimusNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar5 == puVar1) break;
    UObject::ConditionalPostLoad((UObject *)*puVar5);
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar1 = puVar5 + iVar4;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodeLink>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (puVar5 == puVar1) break;
    UObject::ConditionalPostLoad((UObject *)*puVar5);
    puVar5 = puVar5 + 1;
  }
  UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode
            ((UOptimusNodeGraph *)this);
  local_88 = FOptimusObjectVersion::GUID;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_88);
  if (iVar4 < 0xe) {
    if ((((this->Guid).D != 0 || (this->Guid).C != 0) || (this->Guid).B != 0) || (this->Guid).A != 0
       ) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Guid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusFunctionNodeGraph.cpp"
                         ,0x19,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOptimusFunctionNodeGraph *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_50.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.SubPathString.Data.ArrayNum = 0;
    local_50.SubPathString.Data.ArrayMax = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_50.AssetPath.AssetName.Number = 0;
    local_50.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_50.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_50.SubPathString,0);
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOptimusFunctionNodeGraph *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_58,(FObjectPtr)&local_res20);
    FSoftObjectPath::ToString(&local_50,&local_a8);
    local_98 = local_a8.Data.AllocatorInstance.Data;
    iStack_90 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iStack_90 = 0;
    }
    local_78._12_4_ = uStack_8c;
    local_78.Size = iStack_90;
    local_78.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
    FGuid::NewDeterministicGuid(&local_68,&local_78,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_50.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.SubPathString.Data.AllocatorInstance.Data);
    }
    (this->Guid).A = local_68.A;
    (this->Guid).B = local_68.B;
    (this->Guid).C = local_68.C;
    (this->Guid).D = local_68.D;
  }
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Guid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusFunctionNodeGraph.cpp"
                       ,0x1d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// StaticRegisterNativesUOptimusFunctionNodeGraph @ 14e2259f0

void __cdecl UOptimusFunctionNodeGraph::StaticRegisterNativesUOptimusFunctionNodeGraph(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAccessSpecifierOptions @ 14e23b2c0

void __cdecl
UOptimusFunctionNodeGraph::execGetAccessSpecifierOptions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType local_28;
  undefined8 local_20;
  FName local_18;
  FName FStack_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,2);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = AccessSpecifierPublicName;
  FStack_10 = AccessSpecifierPrivateName;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_28,2,(int *)((longlong)&local_20 + 4));
  *(FName *)local_28.Data = local_18;
  *(FName *)(local_28.Data + 8) = FStack_10;
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_28.Data != (FName *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

