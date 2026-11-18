// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 26

// StaticClass @ 14dcf8640

UClass * __cdecl UMovieGraphModifierNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphModifierNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphModifierNode",
               &Z_Registration_Info_UClass_UMovieGraphModifierNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphModifierNode,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphModifierNode>,
               InternalVTableHelperCtorCaller<UMovieGraphModifierNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphModifierNode.InnerSingleton;
}

// UMovieGraphModifierNode @ 14dd0aca0

UMovieGraphModifierNode * __thiscall
UMovieGraphModifierNode::UMovieGraphModifierNode
          (UMovieGraphModifierNode *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->bOverride_ModifierName = '\x01';
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphSettingNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphModifierNodeInterface__;
  this->bOverride_Collections = '\x01';
  this->bOverride_DisabledCollections = '\x01';
  this->bOverride_ModifiersContainer = '\x01';
  (this->ModifierName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModifierName).Data.ArrayNum = 0;
  (this->ModifierName).Data.ArrayMax = 0;
  (this->Collections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Collections).ArrayNum = 0;
  (this->Collections).ArrayMax = 0;
  (this->ModifiersContainer).field0_0x0.DebugPtr = (UMovieGraphMergeableModifierContainer *)0x0;
  *(undefined8 *)&(this->DisabledCollections).Elements = 0;
  *(undefined8 *)&(this->DisabledCollections).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DisabledCollections).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DisabledCollections).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DisabledCollections).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DisabledCollections).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DisabledCollections).Elements.field_0x30 = 0xffffffff;
  (this->DisabledCollections).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DisabledCollections).HashSize = 0;
  return this;
}

// UMovieGraphModifierNode @ 14dd0ad50

UMovieGraphModifierNode * __thiscall
UMovieGraphModifierNode::UMovieGraphModifierNode(UMovieGraphModifierNode *this)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UMovieGraphMergeableModifierContainer *pUVar5;
  FName local_res8;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->bOverride_ModifierName = '\x01';
  this->bOverride_Collections = '\x01';
  this->bOverride_DisabledCollections = '\x01';
  this->bOverride_ModifiersContainer = '\x01';
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphSettingNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphModifierNodeInterface__;
  (this->ModifierName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModifierName).Data.ArrayNum = 0;
  (this->ModifierName).Data.ArrayMax = 0;
  (this->Collections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Collections).ArrayNum = 0;
  (this->Collections).ArrayMax = 0;
  (this->ModifiersContainer).field0_0x0.DebugPtr = (UMovieGraphMergeableModifierContainer *)0x0;
  *(undefined8 *)&(this->DisabledCollections).Elements = 0;
  *(undefined8 *)&(this->DisabledCollections).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DisabledCollections).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DisabledCollections).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DisabledCollections).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DisabledCollections).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisabledCollections).Elements.field_0x34 = 0;
  (this->DisabledCollections).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DisabledCollections).HashSize = 0;
  pFVar3 = ::FName::FName(&local_res8,L"Modifiers");
  FVar2 = *pFVar3;
  pUVar4 = UMovieGraphMergeableModifierContainer::StaticClass();
  pUVar5 = (UMovieGraphMergeableModifierContainer *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UMovieGraphMergeableModifierContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ModifiersContainer).field0_0x0.DebugPtr = pUVar5;
  if ((this->_padding_ & 0x10) == 0) {
    local_res8 = (FName)Z_Construct_UClass_UMovieGraphRenderPropertyModifier_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    AddModifier(this,(TSubclassOf<UMovieGraphCollectionModifier>)&local_res8);
    local_res8 = (FName)Z_Construct_UClass_UMovieGraphMaterialModifier_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    AddModifier(this,(TSubclassOf<UMovieGraphCollectionModifier>)&local_res8);
  }
  return this;
}

// ~UMovieGraphModifierNode @ 14dd0dc20

void __thiscall UMovieGraphModifierNode::~UMovieGraphModifierNode(UMovieGraphModifierNode *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphSettingNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphModifierNodeInterface__;
  (this->DisabledCollections).HashSize = 0;
  FVar1 = (this->DisabledCollections).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DisabledCollections).Elements);
  pFVar2 = (this->Collections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ModifierName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// operator() @ 14dd0f400

bool __thiscall
`UMovieGraphModifierNode::RemoveModifier'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UMovieGraphCollectionModifier> *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  
  if ((param_1->field0_0x0).DebugPtr == (UMovieGraphCollectionModifier *)0x0) {
    return false;
  }
  plVar2 = *(longlong **)this;
  lVar5 = *plVar2;
  if ((lVar5 != 0) &&
     (pUVar4 = Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister(),
     pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = *plVar2;
      goto LAB_14dd0f459;
    }
  }
  lVar5 = 0;
LAB_14dd0f459:
  if (((param_1->field0_0x0).DebugPtr)->_padding_ != lVar5) {
    return false;
  }
  return true;
}

// AddCollection @ 14dd12fb0

void __thiscall UMovieGraphModifierNode::AddCollection(UMovieGraphModifierNode *this,FName *param_1)

{
  if (*param_1 != (FName)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_,param_1);
    return;
  }
  return;
}

// AddModifier @ 14dd12fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphCollectionModifier * __thiscall
UMovieGraphModifierNode::AddModifier
          (UMovieGraphModifierNode *this,TSubclassOf<UMovieGraphCollectionModifier> param_1)

{
  int *piVar1;
  TObjectPtr<UMovieGraphMergeableModifierContainer>_u_0 TVar2;
  FName FVar3;
  UMovieGraphMergeableModifierContainer *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UMovieGraphCollectionModifier *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_108 [32];
  UMovieGraphCollectionModifier **local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  UMovieGraphCollectionModifier *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  TVar2 = (this->ModifiersContainer).field0_0x0;
  plVar14 = *(longlong **)((longlong)TVar2 + 0x30);
  plVar12 = plVar14 + ((TVar2.DebugPtr)->Modifiers).ArrayNum;
  for (; plVar14 != plVar12; plVar14 = plVar14 + 1) {
    if (*plVar14 != 0) {
      lVar13 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar13 == 0) ||
         (pUVar9 = Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister(),
         pUVar9 == (UClass *)0x0)) {
LAB_14dd13056:
        lVar13 = 0;
      }
      else {
        iVar8 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar13 + 0x38) < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar9->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_14dd13056;
        lVar13 = *(longlong *)param_1.Class.field0_0x0;
      }
      if (*(longlong *)(*plVar14 + 0x10) == lVar13) {
        return (UMovieGraphCollectionModifier *)0x0;
      }
    }
  }
  lVar13 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar13 == 0) ||
     (pUVar9 = Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister(),
     pUVar9 == (UClass *)0x0)) {
    return (UMovieGraphCollectionModifier *)0x0;
  }
  iVar8 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar13 + 0x38) < iVar8) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar8 * 8) !=
      &pUVar9->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) {
    return (UMovieGraphCollectionModifier *)0x0;
  }
  lVar13 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar13 == 0) {
    return (UMovieGraphCollectionModifier *)0x0;
  }
  FVar3 = *(FName *)(lVar13 + 0x18);
  pUVar9 = Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister();
  if (pUVar9 != (UClass *)0x0) {
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar13 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar9 = *(UClass **)param_1.Class.field0_0x0;
      goto LAB_14dd130f5;
    }
  }
  pUVar9 = (UClass *)0x0;
LAB_14dd130f5:
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar10 = Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister();
  CheckIsClassChildOf_Internal(pUVar10,pUVar9);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Transactional;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  local_a8._16_8_ = FVar3;
  pUVar11 = (UMovieGraphCollectionModifier *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  pUVar4 = (this->ModifiersContainer).field0_0x0.DebugPtr;
  local_b8[0] = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UMovieGraphCollectionModifier *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  pFVar5 = (pUVar4->Modifiers).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)local_b8) &&
     (lVar13 = (longlong)(pUVar4->Modifiers).ArrayMax,
     (FScriptContainerElement *)local_b8 < pFVar5 + lVar13 * 8)) {
    local_d0 = (longlong)(pUVar4->Modifiers).ArrayNum;
    local_c8 = 8;
    local_e8 = local_b8;
    local_e0 = pFVar5;
    local_d8 = lVar13;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar11 = (UMovieGraphCollectionModifier *)(*pcVar6)();
      return pUVar11;
    }
  }
  iVar8 = (pUVar4->Modifiers).ArrayNum;
  piVar1 = &(pUVar4->Modifiers).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pUVar4->Modifiers).AllocatorInstance,piVar1);
  }
  (pUVar4->Modifiers).ArrayNum = iVar8 + 1;
  *(UMovieGraphCollectionModifier **)
   ((pUVar4->Modifiers).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_b8[0];
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_b8[0] != (UMovieGraphCollectionModifier *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_b8[0]);
      return pUVar11;
    }
    return pUVar11;
  }
  return pUVar11;
}

// GetAllCollections @ 14dd22f40

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphModifierNode::GetAllCollections
          (UMovieGraphModifierNode *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (int)this->_padding_;
  _Src = (void *)this->_padding_;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetAllModifiers @ 14dd23b20

TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphModifierNode::GetAllModifiers
          (UMovieGraphModifierNode *this,
          TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  lVar3 = this->_padding_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  puVar9 = *(undefined8 **)(lVar3 + 0x30);
  iVar2 = *(int *)(lVar3 + 0x38);
  puVar1 = puVar9 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x38) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMovieGraphCollectionModifier_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar9 == puVar1) break;
    local_28[0] = *puVar9;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 <
        pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    puVar9 = puVar9 + 1;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_28[0];
  }
  return __return_storage_ptr__;
}

// GetCollections @ 14dd23fe0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphModifierNode::GetCollections(UMovieGraphModifierNode *this)

{
  return &this->Collections;
}

// GetModifier @ 14dd28e60

UMovieGraphCollectionModifier * __thiscall
UMovieGraphModifierNode::GetModifier
          (UMovieGraphModifierNode *this,TSubclassOf<UMovieGraphCollectionModifier> param_1)

{
  longlong *plVar1;
  int iVar2;
  TObjectPtr<UMovieGraphMergeableModifierContainer>_u_0 TVar3;
  UMovieGraphCollectionModifier *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  longlong *plVar8;
  
  TVar3 = (this->ModifiersContainer).field0_0x0;
  plVar8 = *(longlong **)((longlong)TVar3 + 0x30);
  plVar1 = plVar8 + ((TVar3.DebugPtr)->Modifiers).ArrayNum;
  do {
    if (plVar8 == plVar1) {
      return (UMovieGraphCollectionModifier *)0x0;
    }
    if (*plVar8 != 0) {
      lVar7 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar7 == 0) ||
         (pUVar6 = Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister(),
         pUVar6 == (UClass *)0x0)) {
LAB_14dd28ed1:
        lVar7 = 0;
      }
      else {
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar7 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_14dd28ed1;
        lVar7 = *(longlong *)param_1.Class.field0_0x0;
      }
      pUVar4 = (UMovieGraphCollectionModifier *)*plVar8;
      if (pUVar4->_padding_ == lVar7) {
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          return pUVar4;
        }
        if (pUVar4 == (UMovieGraphCollectionModifier *)0x0) {
          return (UMovieGraphCollectionModifier *)0x0;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar4);
        return pUVar4;
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}

// GetModifiers @ 14dd28fe0

TArray<UMovieGraphCollectionModifier_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphModifierNode::GetModifiers(UMovieGraphModifierNode *this)

{
  return (TArray<UMovieGraphCollectionModifier_*,TSizedDefaultAllocator<32>_> *)
         &((this->ModifiersContainer).field0_0x0.DebugPtr)->Modifiers;
}

// GetNodeInstanceName @ 14dd292d0

FString * __thiscall
UMovieGraphModifierNode::GetNodeInstanceName
          (UMovieGraphModifierNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ModifierName);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2cbb0

UClass * __cdecl UMovieGraphModifierNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphModifierNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphModifierNode",
               &Z_Registration_Info_UClass_UMovieGraphModifierNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphModifierNode,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphModifierNode>,
               InternalVTableHelperCtorCaller<UMovieGraphModifierNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphModifierNode.InnerSingleton;
}

// IsCollectionEnabled @ 14dd33730

bool __thiscall
UMovieGraphModifierNode::IsCollectionEnabled(UMovieGraphModifierNode *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar4 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar4 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)this->_padding_ - 1U & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(this->_padding_ + (longlong)iVar3 * 0x10) == FVar1) goto LAB_14dd337aa;
        iVar3 = *(int *)(this->_padding_ + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14dd337aa:
  return iVar3 == -1;
}

// RemoveCollection @ 14dd3c380

bool __thiscall
UMovieGraphModifierNode::RemoveCollection(UMovieGraphModifierNode *this,FName *param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->_padding_,*param_1)
  ;
  if (((FName *)this->_padding_ <= param_1) &&
     (param_1 < (FName *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = (int)this->_padding_;
  lVar6 = (longlong)iVar1;
  iVar10 = 0;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (FName *)this->_padding_;
    lVar7 = 0;
    bVar4 = *pFVar2 != *param_1;
    iVar10 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar8 = iVar10 + 1;
      if (lVar7 < lVar6) {
        do {
          if (bVar4 != (pFVar2[lVar7] != *param_1)) break;
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar6);
      }
      if (bVar4 != false) {
        if (iVar9 != iVar10) {
          memmove(pFVar2 + iVar9,pFVar2 + iVar10,(longlong)(iVar8 - iVar10) << 3);
        }
        iVar9 = iVar9 + (iVar8 - iVar10);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar10 = iVar8;
    } while (lVar7 < lVar6);
    iVar10 = iVar1 - iVar9;
    *(int *)&this->_padding_ = iVar9;
  }
  return 0 < iVar10;
}

// RemoveModifier @ 14dd3c510

bool __thiscall
UMovieGraphModifierNode::RemoveModifier
          (UMovieGraphModifierNode *this,TSubclassOf<UMovieGraphCollectionModifier> param_1)

{
  int iVar1;
  UMovieGraphMergeableModifierContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TObjectPtr<UClass>_u_0 local_res8;
  
  pUVar2 = (this->ModifiersContainer).field0_0x0.DebugPtr;
  iVar7 = 0;
  iVar1 = (pUVar2->Modifiers).ArrayNum;
  if (iVar1 != 0) {
    iVar8 = 0;
    pFVar3 = (pUVar2->Modifiers).AllocatorInstance.Data;
    local_res8 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
    bVar5 = `UMovieGraphModifierNode::RemoveModifier'::__l2::<lambda_1>::operator()
                      (&local_res8,(TObjectPtr<UMovieGraphCollectionModifier> *)pFVar3);
    bVar5 = !bVar5;
    do {
      iVar4 = iVar7;
      do {
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) break;
        bVar6 = `UMovieGraphModifierNode::RemoveModifier'::__l2::<lambda_1>::operator()
                          (&local_res8,
                           (TObjectPtr<UMovieGraphCollectionModifier> *)
                           (pFVar3 + (longlong)iVar4 * 8));
      } while (bVar5 == !bVar6);
      if (bVar5 != false) {
        if (iVar8 != iVar7) {
          memmove(pFVar3 + (longlong)iVar8 * 8,pFVar3 + (longlong)iVar7 * 8,
                  (longlong)(iVar4 - iVar7) << 3);
        }
        iVar8 = iVar8 + (iVar4 - iVar7);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar7 = iVar4;
    } while (iVar4 < iVar1);
    iVar7 = iVar1 - iVar8;
    (pUVar2->Modifiers).ArrayNum = iVar8;
  }
  return 0 < iVar7;
}

// SetCollectionEnabled @ 14dd40160

void __thiscall
UMovieGraphModifierNode::SetCollectionEnabled
          (UMovieGraphModifierNode *this,FName *param_1,bool param_2)

{
  FName local_res18 [2];
  
  if (param_2) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->_padding_,
               *param_1);
    return;
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->_padding_,
             local_res18,(bool *)param_1);
  return;
}

// StaticRegisterNativesUMovieGraphModifierNode @ 14dd45270

void __cdecl UMovieGraphModifierNode::StaticRegisterNativesUMovieGraphModifierNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphModifierNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsCollections @ 14dd45a30

bool __thiscall UMovieGraphModifierNode::SupportsCollections(UMovieGraphModifierNode *this)

{
  return true;
}

// _getUObject @ 14dd4dec0

UObject * __thiscall UMovieGraphModifierNode::_getUObject(UMovieGraphModifierNode *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execAddModifier @ 14dd4df90

void __cdecl
UMovieGraphModifierNode::execAddModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphCollectionModifier *pUVar2;
  UObject *local_res10;
  UObject *local_res18 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar2 = AddModifier((UMovieGraphModifierNode *)param_1,
                       (TSubclassOf<UMovieGraphCollectionModifier>)local_res18);
  *(UMovieGraphCollectionModifier **)param_3 = pUVar2;
  return;
}

// execGetCollections @ 14dd4f490

void __cdecl
UMovieGraphModifierNode::execGetCollections(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != &param_1[5].field_0x10) {
    iVar1 = *(int *)&param_1[5].field_0x18;
    _Src = *(void **)&param_1[5].field_0x10;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execGetModifier @ 14dd50eb0

void __cdecl
UMovieGraphModifierNode::execGetModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  UObject *pUVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar6 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  plVar9 = *(longlong **)(*(longlong *)&param_1[5].field_0x20 + 0x30);
  plVar1 = plVar9 + *(int *)(*(longlong *)&param_1[5].field_0x20 + 0x38);
  do {
    if (plVar9 == plVar1) {
      *(undefined8 *)param_3 = 0;
      return;
    }
    if (*plVar9 != 0) {
      if ((pUVar6 == (UObject *)0x0) ||
         (pUVar7 = Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister(),
         pUVar7 == (UClass *)0x0)) {
LAB_14dd50f93:
        pUVar8 = (UObject *)0x0;
      }
      else {
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)&pUVar6[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pUVar8 = pUVar6;
        if (!bVar5) goto LAB_14dd50f93;
      }
      pUVar4 = (UObject *)*plVar9;
      if (*(UObject **)&pUVar4->field_0x10 == pUVar8) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        *(UObject **)param_3 = pUVar4;
        return;
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}

// execGetModifiers @ 14dd50ff0

void __cdecl
UMovieGraphModifierNode::execGetModifiers(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(*(longlong *)&param_1[5].field_0x20 + 0x30);
  if (param_3 != puVar2) {
    iVar1 = *(int *)(*(longlong *)&param_1[5].field_0x20 + 0x38);
    _Src = (void *)*puVar2;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execRemoveModifier @ 14dd56260

void __cdecl
UMovieGraphModifierNode::execRemoveModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  TObjectPtr<UMovieGraphCollectionModifier> *pTVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UObject *local_res8;
  UObject **local_res10;
  void *local_res18;
  UObject *local_res20;
  
  iVar8 = 0;
  iVar9 = 0;
  local_res8 = (UObject *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  lVar3 = *(longlong *)&param_1[5].field_0x20;
  local_res10 = &local_res20;
  iVar1 = *(int *)(lVar3 + 0x38);
  if (iVar1 != 0) {
    pTVar4 = *(TObjectPtr<UMovieGraphCollectionModifier> **)(lVar3 + 0x30);
    bVar6 = `UMovieGraphModifierNode::RemoveModifier'::__l2::<lambda_1>::operator()
                      (&local_res10,pTVar4);
    bVar6 = !bVar6;
    iVar9 = iVar8;
    do {
      iVar5 = iVar9;
      do {
        iVar5 = iVar5 + 1;
        if (iVar1 <= iVar5) break;
        bVar7 = `UMovieGraphModifierNode::RemoveModifier'::__l2::<lambda_1>::operator()
                          (&local_res10,pTVar4 + iVar5);
      } while (bVar6 == !bVar7);
      if (bVar6 != false) {
        if (iVar8 != iVar9) {
          memmove(pTVar4 + iVar8,pTVar4 + iVar9,(longlong)(iVar5 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar5 - iVar9);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar9 = iVar5;
    } while (iVar5 < iVar1);
    iVar9 = iVar1 - iVar8;
    *(int *)(lVar3 + 0x38) = iVar8;
  }
  *(bool *)local_res18 = 0 < iVar9;
  return;
}

