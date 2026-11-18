// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dc98820

UClass * __cdecl UMovieGraphBurnInNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBurnInNode",
               &Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphBurnInNode,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphBurnInNode>,
               InternalVTableHelperCtorCaller<UMovieGraphBurnInNode>,local_res8,
               UMovieGraphWidgetRendererBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton;
}

// UMovieGraphBurnInNode @ 14dcaeed0

UMovieGraphBurnInNode * __thiscall
UMovieGraphBurnInNode::UMovieGraphBurnInNode(UMovieGraphBurnInNode *this,FVTableHelper *param_1)

{
  UMovieGraphWidgetRendererBaseNode::UMovieGraphWidgetRendererBaseNode
            ((UMovieGraphWidgetRendererBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphBurnInNode__6B_;
  *(undefined8 *)&this->BurnInClass = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  *(undefined8 *)&this->BurnInWidgetInstances = 0;
  *(undefined8 *)&(this->BurnInWidgetInstances).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInWidgetInstances).field_0x20 = 0;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x28 = 0;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x34 = 0;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BurnInWidgetInstances).field_0x40 = 0;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x48 = 0;
  return this;
}

// UMovieGraphBurnInNode @ 14dcaef60

UMovieGraphBurnInNode * __thiscall
UMovieGraphBurnInNode::UMovieGraphBurnInNode(UMovieGraphBurnInNode *this)

{
  TStringView<wchar_t> local_18;
  
  UMovieGraphWidgetRendererBaseNode::UMovieGraphWidgetRendererBaseNode
            ((UMovieGraphWidgetRendererBaseNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphBurnInNode__6B_;
  *(undefined8 *)&(this->BurnInClass).field_0x0 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  local_18.Size = DefaultBurnInWidgetAsset.Data.ArrayNum + -1;
  if (DefaultBurnInWidgetAsset.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)DefaultBurnInWidgetAsset.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this->BurnInClass,&local_18);
  *(undefined8 *)&this->BurnInWidgetInstances = 0;
  *(undefined8 *)&(this->BurnInWidgetInstances).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInWidgetInstances).field_0x20 = 0;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x28 = 0;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x34 = 0;
  *(undefined8 *)&(this->BurnInWidgetInstances).field_0x40 = 0;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x48 = 0;
  ::FString::operator=((FString *)&this->_padding_,&RendererName);
  ::FString::operator=((FString *)&this->_padding_,L"burnin");
  return this;
}

// ~UMovieGraphBurnInNode @ 14dcb26d0

void __thiscall UMovieGraphBurnInNode::~UMovieGraphBurnInNode(UMovieGraphBurnInNode *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphBurnInNode__6B_;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BurnInWidgetInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BurnInWidgetInstances);
  pvVar1 = *(void **)&(this->BurnInClass).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMovieGraphWidgetRendererBaseNode::~UMovieGraphWidgetRendererBaseNode
            ((UMovieGraphWidgetRendererBaseNode *)this);
  return;
}

// GatherOutputPassesImpl @ 14dcc8ed0

void __thiscall
UMovieGraphBurnInNode::GatherOutputPassesImpl
          (UMovieGraphBurnInNode *this,UMovieGraphEvaluatedConfig *param_1,
          TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  plVar8 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar8 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar8 == plVar1) break;
    lVar4 = *plVar8;
    lVar5 = *(longlong *)(lVar4 + 0x98);
    if (lVar5 != 0) {
      pUVar7 = Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister();
      if (pUVar7 != (UClass *)0x0) {
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar5 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (*(longlong *)(lVar4 + 0x98) != 0)) {
          (**(code **)(*(longlong *)*plVar8 + 0x28))((longlong *)*plVar8,param_2);
        }
      }
    }
    plVar8 = plVar8 + 1;
  }
  return;
}

// GeneratePass @ 14dcca220

TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
 __thiscall UMovieGraphBurnInNode::GeneratePass(UMovieGraphBurnInNode *this)

{
  undefined8 *puVar1;
  FMovieGraphWidgetPass *in_RDX;
  
  puVar1 = ::operator_new(0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    *puVar1 = &___7FMovieGraphBurnInPass_UMovieGraphBurnInNode__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 1;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
          )in_RDX;
}

// GetOrCreateBurnInWidget @ 14dccf240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TObjectPtr<UMovieGraphBurnInWidget> __thiscall
UMovieGraphBurnInNode::GetOrCreateBurnInWidget
          (UMovieGraphBurnInNode *this,UClass *param_1,UWorld *param_2)

{
  TMap<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>_>
  *this_00;
  longlong lVar1;
  UMovieGraphBurnInWidget *pUVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  UWorld *in_R9;
  FName local_res8;
  UWorld *local_res18;
  UMovieGraphBurnInWidget *local_38;
  UWorld *local_30;
  UMovieGraphBurnInWidget **local_28;
  
  this_00 = &this->BurnInWidgetInstances;
  local_res18 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8 = (FName)param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_2 != (UWorld *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
  }
  uVar4 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                    ((TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
                      *)this_00,uVar4 >> 0x10 ^ uVar4,(TObjectPtr<UClass_const_> *)&local_res8);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18;
    puVar5 = (undefined8 *)(lVar1 + 8);
    if (lVar1 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      pUVar2 = (UMovieGraphBurnInWidget *)*puVar5;
      param_1->_padding_ = (longlong)pUVar2;
      goto joined_r0x00014dccf3b7;
    }
  }
  local_30 = local_res18;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  local_38 = CreateWidget<UMovieGraphBurnInWidget,UWorld_*>
                       (in_R9,(TSubclassOf<UUserWidget>)&local_30,local_res8);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14dccf37a:
    if (local_38 != (UMovieGraphBurnInWidget *)0x0) {
      local_30 = (UWorld *)&local_res18;
      local_28 = &local_38;
      TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UClass_*_&,TObjectPtr<UMovieGraphBurnInWidget>_&>_>
                ((TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<UClass_*_&,TObjectPtr<UMovieGraphBurnInWidget>_&> *)&local_res8,
                 (bool *)&local_30);
    }
  }
  else if (local_38 != (UMovieGraphBurnInWidget *)0x0) {
    UE::GC::MarkAsReachable((UObject *)local_38);
    goto LAB_14dccf37a;
  }
  param_1->_padding_ = (longlong)local_38;
  pUVar2 = local_38;
joined_r0x00014dccf3b7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMovieGraphBurnInWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return (TObjectPtr<UMovieGraphBurnInWidget>)(TObjectPtr<UMovieGraphBurnInWidget>_u_0)param_1;
}

// GetPrivateStaticClass @ 14dcd17f0

UClass * __cdecl UMovieGraphBurnInNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBurnInNode",
               &Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphBurnInNode,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphBurnInNode>,
               InternalVTableHelperCtorCaller<UMovieGraphBurnInNode>,local_res8,
               UMovieGraphWidgetRendererBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphBurnInNode @ 14dce6320

void __cdecl UMovieGraphBurnInNode::StaticRegisterNativesUMovieGraphBurnInNode(void)

{
  return;
}

// TeardownImpl @ 14dce6d50

void __thiscall UMovieGraphBurnInNode::TeardownImpl(UMovieGraphBurnInNode *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TMap<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>_>
  *this_00;
  
  UMovieGraphWidgetRendererBaseNode::TeardownImpl((UMovieGraphWidgetRendererBaseNode *)this);
  this_00 = &this->BurnInWidgetInstances;
  bVar3 = 1 < *(int *)&(this->BurnInWidgetInstances).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->BurnInWidgetInstances).field_0xc;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x34 = 0;
  iVar2 = *(int *)&(this->BurnInWidgetInstances).field_0x2c;
  *(undefined4 *)&(this->BurnInWidgetInstances).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->BurnInWidgetInstances).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BurnInWidgetInstances).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->BurnInWidgetInstances).field_0x48 = 1;
    TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

