// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dcf5540

UClass * __cdecl UMovieGraphSetMetadataAttributesNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSetMetadataAttributesNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSetMetadataAttributesNode",
               &Z_Registration_Info_UClass_UMovieGraphSetMetadataAttributesNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSetMetadataAttributesNode,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSetMetadataAttributesNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSetMetadataAttributesNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSetMetadataAttributesNode.InnerSingleton;
}

// UMovieGraphSetMetadataAttributesNode @ 14dd0b480

UMovieGraphSetMetadataAttributesNode * __thiscall
UMovieGraphSetMetadataAttributesNode::UMovieGraphSetMetadataAttributesNode
          (UMovieGraphSetMetadataAttributesNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->bOverride_MetadataAttributeCollection = '\x01';
  this->_padding_ = (longlong)&___7UMovieGraphSetMetadataAttributesNode__6B_;
  (this->MetadataAttributeCollection).field0_0x0.DebugPtr =
       (UMovieGraphMetadataAttributeCollection *)0x0;
  return this;
}

// UMovieGraphSetMetadataAttributesNode @ 14dd0b4c0

UMovieGraphSetMetadataAttributesNode * __thiscall
UMovieGraphSetMetadataAttributesNode::UMovieGraphSetMetadataAttributesNode
          (UMovieGraphSetMetadataAttributesNode *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieGraphMetadataAttributeCollection *pUVar4;
  FName local_res8;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->bOverride_MetadataAttributeCollection = '\x01';
  this->_padding_ = (longlong)&___7UMovieGraphSetMetadataAttributesNode__6B_;
  (this->MetadataAttributeCollection).field0_0x0.DebugPtr =
       (UMovieGraphMetadataAttributeCollection *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"Metadata Attributes");
  FVar1 = *pFVar2;
  pUVar3 = UMovieGraphMetadataAttributeCollection::StaticClass();
  pUVar4 = (UMovieGraphMetadataAttributeCollection *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMovieGraphMetadataAttributeCollection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->MetadataAttributeCollection).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UMovieGraphSetMetadataAttributesNode @ 14dd0de30

void __thiscall
UMovieGraphSetMetadataAttributesNode::~UMovieGraphSetMetadataAttributesNode
          (UMovieGraphSetMetadataAttributesNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphSetMetadataAttributesNode__6B_;
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GetFormatResolveArgs @ 14dd26160

void __thiscall
UMovieGraphSetMetadataAttributesNode::GetFormatResolveArgs
          (UMovieGraphSetMetadataAttributesNode *this,FMovieGraphResolveArgs *param_1,
          FMovieGraphRenderDataIdentifier *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphMetadataAttributeCollection *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->MetadataAttributeCollection).field0_0x0.DebugPtr;
  iVar2 = (pUVar3->MetadataAttributes).ArrayNum;
  pFVar4 = (pUVar3->MetadataAttributes).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((pUVar3->MetadataAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMovieGraphMetadataAttribute,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((pFVar4[0x20].field_0x0 != '\0') && (1 < *(int *)(pFVar4 + 8))) {
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString_const_&,FString_const_&>
                ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)&param_1->FileMetadata,(FString *)pFVar4,(FString *)(pFVar4 + 0x10));
    }
    pFVar4 = pFVar4 + 0x28;
  }
  return;
}

// GetPrivateStaticClass @ 14dd2d320

UClass * __cdecl UMovieGraphSetMetadataAttributesNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSetMetadataAttributesNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSetMetadataAttributesNode",
               &Z_Registration_Info_UClass_UMovieGraphSetMetadataAttributesNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSetMetadataAttributesNode,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSetMetadataAttributesNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSetMetadataAttributesNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSetMetadataAttributesNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphSetMetadataAttributesNode @ 14dd453d0

void __cdecl
UMovieGraphSetMetadataAttributesNode::StaticRegisterNativesUMovieGraphSetMetadataAttributesNode
          (void)

{
  return;
}

