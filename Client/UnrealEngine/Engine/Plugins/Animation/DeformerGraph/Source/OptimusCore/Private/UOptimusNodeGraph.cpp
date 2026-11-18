// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 158

// StaticClass @ 14e1115a0

UClass * __cdecl UOptimusNodeGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeGraph",
               &Z_Registration_Info_UClass_UOptimusNodeGraph.InnerSingleton,
               StaticRegisterNativesUOptimusNodeGraph,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNodeGraph>,
               InternalVTableHelperCtorCaller<UOptimusNodeGraph>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeGraph.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14e11fc30

bool __cdecl
`UOptimusNodeGraph::DuplicateSubGraph'::__l28::<lambda_5>::<lambda_invoker_cdecl>
          (UOptimusNode *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 14e11fc40

bool __cdecl
`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l42::<lambda_5>::<lambda_invoker_cdecl>
          (UOptimusNode *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 14e11fc50

bool __cdecl
`UOptimusNodeGraph::ConvertToFunction'::__l45::<lambda_5>::<lambda_invoker_cdecl>
          (UOptimusNode *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 14e11fc60

bool __cdecl
`UOptimusNodeGraph::ConvertToSubGraph'::__l45::<lambda_5>::<lambda_invoker_cdecl>
          (UOptimusNode *param_1)

{
  return true;
}

// <lambda_1> @ 14e14bbe0

<lambda_1> * __thiscall
`UOptimusNodeGraph::PostDuplicate'::__l17::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->NodeData).ArrayNum;
  _Src = (param_1->NodeData).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1);
  return this;
}

// <lambda_2> @ 14e14bd00

<lambda_2> * __thiscall
`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_2>::<lambda_2>
          (void *this,<lambda_2> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FOptimusParameterBinding *pFVar3;
  
  *(undefined8 *)this = 0;
  iVar2 = (param_1->InputBindings).ArrayNum;
  pFVar3 = (FOptimusParameterBinding *)(param_1->InputBindings).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar2,0,this,iVar2,(int *)((longlong)this + 0xc));
    ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
              (*(void **)this,pFVar3,iVar2);
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->OutputBindings).ArrayNum;
  pFVar3 = (FOptimusParameterBinding *)(param_1->OutputBindings).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>(pFVar1->Data,pFVar3,iVar2)
    ;
  }
  return this;
}

// UOptimusNodeGraph @ 14e15a910

UOptimusNodeGraph * __thiscall
UOptimusNodeGraph::UOptimusNodeGraph(UOptimusNodeGraph *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->GraphType = Transient;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->Links).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Links).ArrayNum = 0;
  (this->Links).ArrayMax = 0;
  (this->NodePairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePairs).ArrayNum = 0;
  (this->NodePairs).ArrayMax = 0;
  (this->SubGraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubGraphs).ArrayNum = 0;
  (this->SubGraphs).ArrayMax = 0;
  *(undefined8 *)&this->GraphNotifyDelegate = 0;
  *(undefined8 *)&(this->GraphNotifyDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->GraphNotifyDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->GraphNotifyDelegate).field_0x18 = 2;
  return this;
}

// UOptimusNodeGraph @ 14e15a990

UOptimusNodeGraph * __thiscall
UOptimusNodeGraph::UOptimusNodeGraph(UOptimusNodeGraph *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->GraphType = Transient;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->Links).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Links).ArrayNum = 0;
  (this->Links).ArrayMax = 0;
  (this->NodePairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePairs).ArrayNum = 0;
  (this->NodePairs).ArrayMax = 0;
  (this->SubGraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubGraphs).ArrayNum = 0;
  (this->SubGraphs).ArrayMax = 0;
  *(undefined8 *)&this->GraphNotifyDelegate = 0;
  *(undefined8 *)&(this->GraphNotifyDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->GraphNotifyDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->GraphNotifyDelegate).field_0x18 = 2;
  return this;
}

// ~<lambda_2> @ 14e15dc10

void __thiscall
`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_2>::~<lambda_2>(void *this)

{
  DestructItems<FOptimusParameterBinding,int>
            (*(FOptimusParameterBinding **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  DestructItems<FOptimusParameterBinding,int>
            (*(FOptimusParameterBinding **)this,*(int *)((longlong)this + 8));
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ~UOptimusNodeGraph @ 14e162f20

void __thiscall UOptimusNodeGraph::~UOptimusNodeGraph(UOptimusNodeGraph *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GraphNotifyDelegate).field_0x8,*(int *)&(this->GraphNotifyDelegate).field_0x10
            );
  pvVar1 = *(void **)&(this->GraphNotifyDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GraphNotifyDelegate);
  pFVar2 = (this->SubGraphs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NodePairs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Links).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IOptimusNodeGraphCollectionOwner__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14e166550

void __thiscall
`UOptimusNodeGraph::AddCommentNode'::__l2::<lambda_1>::operator()(void *this,UOptimusNode *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  TVector2<float>_u_0 local_res10;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UOptimusNode *)0x0) {
    pFVar5 = GetTypeName<UOptimusNode_Comment>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = UOptimusNode_Comment::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar4->_padding_)) {
    local_res10._s_0.X = (float)*(double *)((longlong)this + 0x10);
    local_res10._s_0.Y = (float)*(double *)((longlong)this + 0x18);
    UOptimusNode_Comment::SetSizeDirect
              ((UOptimusNode_Comment *)param_1,(TVector2<float> *)&local_res10._s_0);
    lVar2 = *(longlong *)this;
    lVar3 = *(longlong *)((longlong)this + 8);
    *(undefined4 *)&param_1[1]._padding_ = 0x12;
    param_1[1]._padding_ = lVar2;
    param_1[1]._padding_ = lVar3;
    ::FString::operator=((FString *)&param_1[1]._padding_,L"Comment");
    return;
  }
  pFVar5 = GetTypeName<UOptimusNode_Comment>(&local_28);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UOptimusNode>(&local_18,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// operator() @ 14e166670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UOptimusNodeGraph::AddVariableGetNode'::__l2::<lambda_1>::operator()
          (void *this,UOptimusNode *param_1)

{
  int iVar1;
  UObject *pUVar2;
  FOptimusDataType *pFVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar7;
  UObject *local_res8;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  FString local_18;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar6 = UOptimusNode_GetVariable::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_14e1666aa;
  }
  param_1 = (UOptimusNode *)0x0;
LAB_14e1666aa:
  pUVar2 = *(UObject **)this;
  if (pUVar2 == (UObject *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1212835353493241692>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GetVariable.cpp"
                       ,0xa4,"InVariableDesc");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pTVar7 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)&pUVar2[1].field_0x18,&local_38);
    pFVar3 = pTVar7->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if ((pFVar3->UsageFlags & (Property|Variable)) == None) {
      if (1 < (byte)LogOptimusCore._0_1_) {
        pTVar7 = FOptimusDataTypeRef::Resolve
                           ((FOptimusDataTypeRef *)&pUVar2[1].field_0x18,&local_28);
        pFVar3 = pTVar7->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        ::FName::ToString(&pFVar3->TypeName,&local_18);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_res8 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[1]._padding_,(FObjectPtr)&local_res8);
    }
  }
  return;
}

// operator() @ 14e167330

void __thiscall
`UOptimusNodeGraph::DoesLinkFormCycle'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar5 = pFVar7 + (longlong)iVar1 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar5) break;
    uVar2 = *(undefined4 *)pFVar7;
    puVar3 = *(undefined8 **)this;
    puVar6 = ::operator_new(0x10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = uVar2;
      puVar4 = (undefined8 *)*puVar3;
      *puVar3 = puVar6;
      *puVar4 = puVar6;
    }
    pFVar7 = pFVar7 + 4;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
    return;
  }
  return;
}

// operator() @ 14e168000

bool __thiscall
`UOptimusNodeGraph::PostDuplicate'::__l17::<lambda_1>::operator()(void *this,UOptimusNode *param_1)

{
  FArchiveState local_158;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  FObjectAndNameAsStringProxyArchive local_a8;
  
  local_158._padding_ = 0;
  local_158.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_158.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_158.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_158.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_158._40_8_ = 0;
  local_158.ArSerializingDefaults = 0;
  local_158.ArPortFlags = 0;
  local_158.ArMaxSerializeSize = 0;
  local_158.ArUEVer.FileVersionUE4 = 0;
  local_158.ArUEVer.FileVersionUE5 = 0;
  local_158.ArLicenseeUEVer = 0;
  local_158.ArEngineVer.Major = 0;
  local_158.ArEngineVer.Minor = 0;
  local_158.ArEngineVer.Patch = 0;
  local_158.ArEngineVer._6_2_ = 0;
  local_158.ArEngineVer.Changelist = 0;
  local_158.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_158.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_158.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_158.SerializedProperty = (FProperty *)0x0;
  local_158.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_158.bCustomVersionsAreReset = false;
  local_158._129_7_ = 0;
  local_158.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_158);
  local_c8 = 0;
  local_158._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_b8 = 0x7fffffffffffffff;
  local_c0 = this;
  FArchiveState::SetIsLoading(&local_158,true);
  (**(code **)(local_158._padding_ + 0x108))(&local_158,0);
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
            (&local_a8,(FArchive *)&local_158,true);
  UObject::SerializeScriptProperties((UObject *)param_1,(FArchive *)&local_a8);
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_a8);
  FArchive::~FArchive((FArchive *)&local_158);
  return true;
}

// operator() @ 14e168e60

bool __thiscall
`UOptimusNodeGraph::DuplicateNodes'::__l75::<lambda_1>::operator()(void *this,UOptimusNode *param_1)

{
  code *pcVar1;
  TVector2<double>_u_0 TVar2;
  double dVar3;
  double _X;
  double _X_00;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  TTuple<FName,FName> *pTVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar7 = UOptimusNode_SubGraphReference::StaticClass();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) {
      pTVar8 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                       *)((longlong)this + 0x20),(FName)param_1[1]._padding_);
      if (pTVar8 == (TTuple<FName,FName> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      param_1[1]._padding_ = *(longlong *)&pTVar8->field_0x8;
    }
  }
  _X_00 = *(double *)((longlong)this + 0x10) + *(double *)this;
  _X = *(double *)((longlong)this + 0x18) + *(double *)((longlong)this + 8);
  iVar6 = _finite(_X_00);
  if (iVar6 != 0) {
    iVar6 = _finite(_X);
    if (iVar6 != 0) {
      dVar3 = _X_00 - (param_1->GraphPosition).field0_0x0._s_0.X;
      uVar9 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar10 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
           (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000) ||
         (dVar3 = _X - (param_1->GraphPosition).field0_0x0._s_0.Y,
         uVar9 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar10 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
         (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000)) {
        TVar2._8_4_ = SUB84(_X,0);
        TVar2._s_0.X = _X_00;
        TVar2._12_4_ = (int)((ulonglong)_X >> 0x20);
        (param_1->GraphPosition).field0_0x0 = TVar2;
        UOptimusNode::Notify(param_1,NodePositionChanged);
        return true;
      }
    }
  }
  return false;
}

// operator() @ 14e168fa0

bool __thiscall
`UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode'::
__l13::<lambda_1>::operator()(void *this,UOptimusNode *param_1)

{
  int iVar1;
  code *pcVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UOptimusNode *pUVar5;
  UClass *local_res8;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar4 = UOptimusNode_DataInterface::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar5 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_14e168fea;
  }
  pUVar5 = (UOptimusNode *)0x0;
LAB_14e168fea:
  pcVar2 = *(code **)(pUVar5->_padding_ + 0x338);
  local_res8 = UOptimusAnimAttributeDataInterface::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  (*pcVar2)(pUVar5,&local_res8);
  (**(code **)(**(longlong **)this + 0x170))(*(longlong **)this,0,pUVar5,0x34);
  pUVar3 = *(UObject **)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)&pUVar5[1].bSendNotifications = pUVar3;
  UOptimusNode::SetGraphPositionDirect(param_1,(TVector2<double> *)((longlong)this + 8));
  return true;
}

// operator() @ 14e169080

bool __thiscall
`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_2>::operator()
          (void *this,UOptimusNode *param_1)

{
  double _X;
  double _X_00;
  int iVar1;
  UOptimusNode_LoopTerminal *pUVar2;
  double dVar3;
  
  pUVar2 = CastChecked<UOptimusNode_LoopTerminal,UOptimusNode>(param_1);
  pUVar2->TerminalType = Return;
  _X_00 = *(double *)this + __real_4072c00000000000;
  _X = *(double *)((longlong)this + 8);
  iVar1 = _finite(_X_00);
  if (((iVar1 != 0) && (iVar1 = _finite(_X), iVar1 != 0)) &&
     ((dVar3 = _X_00 - (param_1->GraphPosition).field0_0x0._s_0.X,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
      (dVar3 = _X - (param_1->GraphPosition).field0_0x0._s_0.Y,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    (param_1->GraphPosition).field0_0x0._s_0.X = _X_00;
    (param_1->GraphPosition).field0_0x0._s_0.Y = _X;
    UOptimusNode::Notify(param_1,NodePositionChanged);
    return true;
  }
  return false;
}

// operator() @ 14e169150

bool __thiscall
`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_2>::operator()
          (void *this,UOptimusNode *param_1)

{
  double _X;
  code *pcVar1;
  double _X_00;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double dVar5;
  UOptimusNode *local_res8;
  
  if (*(void **)this != (void *)0x0) {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)this);
    pcVar1 = *(code **)this;
    plVar4 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)this + 0x28);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_res8);
  }
  _X_00 = *(double *)((longlong)this + 0x30) + __real_4059000000000000;
  _X = *(double *)((longlong)this + 0x38);
  iVar2 = _finite(_X_00);
  if (iVar2 != 0) {
    iVar2 = _finite(_X);
    if (iVar2 != 0) {
      dVar5 = _X_00 - (param_1->GraphPosition).field0_0x0._s_0.X;
      if ((__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
         (dVar5 = _X - (param_1->GraphPosition).field0_0x0._s_0.Y,
         __real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        (param_1->GraphPosition).field0_0x0._s_0.X = _X_00;
        (param_1->GraphPosition).field0_0x0._s_0.Y = _X;
        UOptimusNode::Notify(param_1,NodePositionChanged);
        return true;
      }
    }
  }
  return false;
}

// operator() @ 14e16a660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e16ac6c) */
/* WARNING: Removing unreachable block (ram,0x00014e16aab3) */
/* WARNING: Removing unreachable block (ram,0x00014e16ac7b) */

void __thiscall
`UOptimusNodeGraph::ExpandCollapsedNodes'::__l19::<lambda_2>::operator()
          (void *this,UOptimusNodePin *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  UOptimusNodeGraph *this_00;
  UOptimusNodePin *pUVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  UOptimusNode *pUVar10;
  UClass *pUVar11;
  FName this_01;
  FString *pFVar12;
  TTuple<UOptimusNode_*,FName> *pTVar13;
  FString *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  UOptimusNodePin *pUVar18;
  ForAnyElementType _Src;
  longlong lVar19;
  ForAnyElementType FVar20;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188;
  undefined1 local_187 [7];
  ForAnyElementType local_180;
  undefined8 local_178;
  ForAnyElementType local_170;
  undefined8 local_168;
  ForAnyElementType local_160;
  undefined8 local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  uint local_140;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_138;
  FString local_128;
  FString local_118;
  FScriptContainerElement *local_108;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_100;
  UOptimusNodePin *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FString local_d0;
  FString local_c0;
  UOptimusNodePin *local_b0 [5];
  void *local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 4;
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x10))
            (*(longlong **)((longlong)this + 0x18),local_b0,param_1,local_78);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  UOptimusNodePin::GetConnectedPins(param_1,&local_100);
  uVar15 = (ulonglong)local_100.ArrayNum;
  local_140 = local_100.ArrayNum;
  local_e0 = local_100.AllocatorInstance.Data + uVar15 * 8;
  uVar17 = uVar15;
  FVar20.Data = local_100.AllocatorInstance.Data;
  do {
    pFVar16 = local_e0;
    local_108 = FVar20.Data;
    if ((int)uVar15 != (int)uVar17) {
      local_188 = 0;
      `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_188);
    }
    if (FVar20.Data == pFVar16) {
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      return;
    }
    local_f0 = *(UOptimusNodePin **)FVar20.Data;
    UOptimusNodePin::GetPinPath(local_f0,&local_128);
    pUVar4 = local_b0[0];
    pUVar10 = UOptimusNodePin::GetOwningNode(local_b0[0]);
    this_00 = (UOptimusNodeGraph *)pUVar10->_padding_;
    if (this_00 == (UOptimusNodeGraph *)0x0) {
LAB_14e16a783:
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7986583113880829533>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                         ,0x1a3,"Graph != nullptr");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
    }
    else {
      pUVar11 = UOptimusNodeGraph::StaticClass();
      iVar3 = (int)pUVar11->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar11->_padding_)) goto LAB_14e16a783;
      UOptimusNodeGraph::GetConnectedPins(this_00,&local_138,pUVar4);
    }
    iVar7 = local_128.Data.ArrayNum;
    iVar3 = local_138.ArrayNum;
    local_e8 = local_138.AllocatorInstance.Data + (longlong)local_138.ArrayNum * 8;
    FVar20.Data = local_138.AllocatorInstance.Data;
    while( true ) {
      pFVar16 = local_e8;
      if (local_138.ArrayNum != iVar3) {
        local_187[0] = 0;
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_187);
      }
      if (FVar20.Data == pFVar16) break;
      pUVar4 = *(UOptimusNodePin **)FVar20.Data;
      pUVar18 = pUVar4;
      while( true ) {
        plVar1 = &pUVar18->_padding_;
        pUVar18 = (UOptimusNodePin *)pUVar18->_padding_;
        if (pUVar18 == (UOptimusNodePin *)0x0) break;
        pUVar11 = UOptimusNodePin::StaticClass();
        iVar9 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar11->_padding_)) break;
      }
      pUVar10 = (UOptimusNode *)*plVar1;
      if (pUVar10 == (UOptimusNode *)0x0) {
LAB_14e16a84e:
        pUVar10 = (UOptimusNode *)0x0;
      }
      else {
        pUVar11 = UOptimusNode::StaticClass();
        iVar9 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar11->_padding_)) goto LAB_14e16a84e;
      }
      this_01 = UOptimusNodePin::GetUniqueName(pUVar4);
      pFVar12 = ::FName::ToString((FName *)this_01,&local_c0);
      pTVar13 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                        *)((longlong)this + 0x20),pUVar10);
      if ((pTVar13 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = ::FName::ToString((FName *)&pTVar13->field_0x8,&local_d0);
      UOptimusNodeGraph::ConstructPath(&local_118,(FString *)((longlong)this + 8),pFVar14,pFVar12);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      _Src.Data = local_118.Data.AllocatorInstance.Data;
      pFVar5 = *(ForAnyElementType **)this;
      if (local_f0->Direction == Output) {
        local_178 = CONCAT44(local_178._4_4_,iVar7);
        local_180.Data = (FScriptContainerElement *)0x0;
        if (iVar7 == 0) {
          local_178 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,&local_180,iVar7,(int *)((longlong)&local_178 + 4));
          memcpy(local_180.Data,local_128.Data.AllocatorInstance.Data,(longlong)iVar7 * 2);
        }
        _Src.Data = local_118.Data.AllocatorInstance.Data;
        local_170.Data = (FScriptContainerElement *)0x0;
        lVar19 = (longlong)local_118.Data.ArrayNum;
        local_168 = CONCAT44(local_168._4_4_,local_118.Data.ArrayNum);
        if (local_118.Data.ArrayNum == 0) {
          local_168 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_118.Data.ArrayNum,0,&local_170,local_118.Data.ArrayNum,
                     (int *)((longlong)&local_168 + 4));
          memcpy(local_170.Data,_Src.Data,lVar19 * 2);
        }
        if (((pFVar5->Data <= (FScriptContainerElement *)&local_180) &&
            ((FScriptContainerElement *)&local_180 <
             pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x20)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *(int *)&pFVar5[1].Data;
        piVar2 = (int *)((longlong)&pFVar5[1].Data + 4);
        if (iVar9 == *piVar2) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,pFVar5,piVar2);
          *(int *)&pFVar5[1].Data = iVar9 + 1;
        }
        else {
          *(int *)&pFVar5[1].Data = iVar9 + 1;
        }
        pFVar16 = pFVar5->Data + (longlong)iVar9 * 0x20;
        *(undefined8 *)pFVar16 = 0;
        *(FScriptContainerElement **)pFVar16 = local_180.Data;
        *(undefined4 *)(pFVar16 + 8) = (undefined4)local_178;
        *(undefined4 *)(pFVar16 + 0xc) = local_178._4_4_;
        *(undefined8 *)(pFVar16 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar16 + 0x10) = local_170.Data;
        *(undefined4 *)(pFVar16 + 0x18) = (undefined4)local_168;
        *(undefined4 *)(pFVar16 + 0x1c) = local_168._4_4_;
        local_168 = 0;
        local_170.Data = (FScriptContainerElement *)0x0;
        local_178 = 0;
        local_180.Data = (FScriptContainerElement *)0x0;
      }
      else {
        lVar19 = (longlong)local_118.Data.ArrayNum;
        local_160.Data = (FScriptContainerElement *)0x0;
        local_158 = CONCAT44(local_158._4_4_,local_118.Data.ArrayNum);
        if (local_118.Data.ArrayNum == 0) {
          local_158 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_118.Data.ArrayNum,0,&local_160,local_118.Data.ArrayNum,
                     (int *)((longlong)&local_158 + 4));
          memcpy(local_160.Data,_Src.Data,lVar19 * 2);
        }
        local_150.Data = (FScriptContainerElement *)0x0;
        local_148 = CONCAT44(local_148._4_4_,iVar7);
        if (iVar7 == 0) {
          local_148 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,&local_150,iVar7,(int *)((longlong)&local_148 + 4));
          memcpy(local_150.Data,local_128.Data.AllocatorInstance.Data,(longlong)iVar7 * 2);
        }
        if (((pFVar5->Data <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x20)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *(int *)&pFVar5[1].Data;
        piVar2 = (int *)((longlong)&pFVar5[1].Data + 4);
        if (iVar9 == *piVar2) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,pFVar5,piVar2);
          *(int *)&pFVar5[1].Data = iVar9 + 1;
        }
        else {
          *(int *)&pFVar5[1].Data = iVar9 + 1;
        }
        pFVar16 = pFVar5->Data + (longlong)iVar9 * 0x20;
        *(undefined8 *)pFVar16 = 0;
        *(FScriptContainerElement **)pFVar16 = local_160.Data;
        *(undefined4 *)(pFVar16 + 8) = (undefined4)local_158;
        *(undefined4 *)(pFVar16 + 0xc) = local_158._4_4_;
        *(undefined8 *)(pFVar16 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar16 + 0x10) = local_150.Data;
        *(undefined4 *)(pFVar16 + 0x18) = (undefined4)local_148;
        *(undefined4 *)(pFVar16 + 0x1c) = local_148._4_4_;
        local_148 = 0;
        local_150.Data = (FScriptContainerElement *)0x0;
        local_158 = 0;
        local_160.Data = (FScriptContainerElement *)0x0;
      }
      if (_Src.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src.Data);
      }
      FVar20.Data = FVar20.Data + 8;
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    uVar15 = (ulonglong)(uint)local_100.ArrayNum;
    FVar20.Data = local_108 + 8;
    uVar17 = (ulonglong)local_140;
  } while( true );
}

// operator() @ 14e16af70

bool __thiscall
`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_2>::operator()
          (void *this,UOptimusNodeGraph *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  UClass *pUVar4;
  FGuid *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FGuid local_28;
  FString local_18;
  
  if (param_1 == (UOptimusNodeGraph *)0x0) {
    pFVar6 = GetTypeName<UOptimusFunctionNodeGraph>((FString *)&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar4 = UOptimusFunctionNodeGraph::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar4->_padding_)) {
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_
               ,(TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
                (*(longlong *)this + 0xa0));
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_
               ,(TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
                (*(longlong *)this + 0xb0));
    pFVar5 = FGuid::NewGuid(&local_28);
    uVar3 = pFVar5->B;
    pFVar2 = *(FScriptContainerElement **)&pFVar5->C;
    param_1[2].NodePairs.ArrayNum = pFVar5->A;
    param_1[2].NodePairs.ArrayMax = uVar3;
    param_1[2].SubGraphs.AllocatorInstance.Data = pFVar2;
    return true;
  }
  pFVar6 = GetTypeName<UOptimusFunctionNodeGraph>((FString *)&local_28);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UOptimusNodeGraph>(&local_18,param_1);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// operator() @ 14e16bf50

bool __thiscall
`UOptimusNodeGraph::ExpandCollapsedNodes'::__l19::<lambda_3>::operator()
          (void *this,UOptimusNodeLink *param_1)

{
  int iVar1;
  UOptimusNode *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = UOptimusNodePin::GetOwningNode((param_1->NodeInputPin).field0_0x0.DebugPtr);
  if (pUVar2 != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_GraphTerminal::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return true;
    }
  }
  pUVar2 = UOptimusNodePin::GetOwningNode((param_1->NodeOutputPin).field0_0x0.DebugPtr);
  if (pUVar2 != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_GraphTerminal::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return true;
    }
  }
  return false;
}

// operator() @ 14e16bff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_3>::operator()
          (void *this,UOptimusNode *param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  double _X;
  double _X_00;
  int iVar3;
  UClass *pUVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar4 = UOptimusNode_GraphTerminal::StaticClass();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar4->_padding_)) goto LAB_14e16c034;
  }
  param_1 = (UOptimusNode *)0x0;
LAB_14e16c034:
  *(undefined4 *)&param_1[1]._padding_ = 1;
  _X_00 = *(double *)this - ___real_407c200000000000;
  _X = (*(double *)((longlong)this + 0x18) + *(double *)((longlong)this + 8)) *
       __real_3fe0000000000000;
  iVar3 = _finite(_X_00);
  if (((iVar3 != 0) && (iVar3 = _finite(_X), iVar3 != 0)) &&
     ((dVar2 = _X_00 - (param_1->GraphPosition).field0_0x0._s_0.X,
      uVar5 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000 ||
      (dVar2 = _X - (param_1->GraphPosition).field0_0x0._s_0.Y,
      uVar5 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000)))) {
    TVar1._8_4_ = SUB84(_X,0);
    TVar1._s_0.X = _X_00;
    TVar1._12_4_ = (int)((ulonglong)_X >> 0x20);
    (param_1->GraphPosition).field0_0x0 = TVar1;
    UOptimusNode::Notify(param_1,NodePositionChanged);
    return true;
  }
  return false;
}

// operator() @ 14e16c3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_4>::operator()
          (void *this,UOptimusNode *param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  double _X;
  double _X_00;
  int iVar3;
  UClass *pUVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar4 = UOptimusNode_GraphTerminal::StaticClass();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar4->_padding_)) goto LAB_14e16c434;
  }
  param_1 = (UOptimusNode *)0x0;
LAB_14e16c434:
  *(undefined4 *)&param_1[1]._padding_ = 2;
  _X_00 = *(double *)((longlong)this + 0x10) + ___real_4087700000000000;
  _X = (*(double *)((longlong)this + 0x18) + *(double *)((longlong)this + 8)) *
       __real_3fe0000000000000;
  iVar3 = _finite(_X_00);
  if (((iVar3 != 0) && (iVar3 = _finite(_X), iVar3 != 0)) &&
     ((dVar2 = _X_00 - (param_1->GraphPosition).field0_0x0._s_0.X,
      uVar5 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000 ||
      (dVar2 = _X - (param_1->GraphPosition).field0_0x0._s_0.Y,
      uVar5 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000)))) {
    TVar1._8_4_ = SUB84(_X,0);
    TVar1._s_0.X = _X_00;
    TVar1._12_4_ = (int)((ulonglong)_X >> 0x20);
    (param_1->GraphPosition).field0_0x0 = TVar1;
    UOptimusNode::Notify(param_1,NodePositionChanged);
    return true;
  }
  return false;
}

// operator() @ 14e16c5c0

bool __thiscall
`UOptimusNodeGraph::ExpandCollapsedNodes'::__l87::<lambda_4>::operator()
          (void *this,UOptimusNode *param_1)

{
  code *pcVar1;
  TVector2<double>_u_0 TVar2;
  double dVar3;
  double _X;
  double _X_00;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  TTuple<FName,FName> *pTVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar7 = UOptimusNode_SubGraphReference::StaticClass();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) {
      pTVar8 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                       *)((longlong)this + 0x30),(FName)param_1[1]._padding_);
      if (pTVar8 == (TTuple<FName,FName> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      param_1[1]._padding_ = *(longlong *)&pTVar8->field_0x8;
    }
  }
  _X_00 = (*(double *)this - *(double *)((longlong)this + 0x10)) +
          *(double *)((longlong)this + 0x20);
  _X = (*(double *)((longlong)this + 8) - *(double *)((longlong)this + 0x18)) +
       *(double *)((longlong)this + 0x28);
  iVar6 = _finite(_X_00);
  if (iVar6 != 0) {
    iVar6 = _finite(_X);
    if (iVar6 != 0) {
      dVar3 = _X_00 - (param_1->GraphPosition).field0_0x0._s_0.X;
      uVar9 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar10 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
           (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000) ||
         (dVar3 = _X - (param_1->GraphPosition).field0_0x0._s_0.Y,
         uVar9 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar10 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
         (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000)) {
        TVar2._8_4_ = SUB84(_X,0);
        TVar2._s_0.X = _X_00;
        TVar2._12_4_ = (int)((ulonglong)_X >> 0x20);
        (param_1->GraphPosition).field0_0x0 = TVar2;
        UOptimusNode::Notify(param_1,NodePositionChanged);
      }
    }
  }
  return true;
}

// operator() @ 14e16c700

bool __thiscall
`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_6>::operator()
          (void *this,UOptimusNode *param_1)

{
  int iVar1;
  UOptimusDeformer *pUVar2;
  undefined8 uVar3;
  bool bVar4;
  UClass *pUVar5;
  UOptimusFunctionNodeGraph *this_00;
  FOptimusFunctionGraphIdentifier *pFVar6;
  FOptimusFunctionGraphIdentifier local_28;
  
  if (param_1 == (UOptimusNode *)0x0) {
LAB_14e16c73d:
    param_1 = (UOptimusNode *)0x0;
  }
  else {
    pUVar5 = UOptimusNode_FunctionReference::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14e16c73d;
  }
  this_00 = (UOptimusFunctionNodeGraph *)
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x18))
                      (*(longlong **)((longlong)this + 0x20),(longlong)this + 0x10);
  if (this_00 != (UOptimusFunctionNodeGraph *)0x0) {
    pUVar5 = UOptimusFunctionNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14e16c77a;
  }
  this_00 = (UOptimusFunctionNodeGraph *)0x0;
LAB_14e16c77a:
  pFVar6 = UOptimusFunctionNodeGraph::GetGraphIdentifier(this_00,&local_28);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (pFVar6->Asset).field0_0x0.DebugPtr, pUVar2 != (UOptimusDeformer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  param_1[1]._padding_ = (longlong)(pFVar6->Asset).field0_0x0;
  uVar3 = *(undefined8 *)&(pFVar6->Guid).C;
  param_1[1]._padding_ = *(longlong *)&pFVar6->Guid;
  *(undefined8 *)&param_1[1].bSendNotifications = uVar3;
  bVar4 = UOptimusNode::SetGraphPositionDirect(param_1,this);
  return bVar4;
}

// operator() @ 14e16c7e0

bool __thiscall
`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l51::<lambda_6>::operator()
          (void *this,UOptimusNode *param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  double _X;
  double _X_00;
  int iVar3;
  UClass *pUVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar4 = UOptimusNode_SubGraphReference::StaticClass();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar4->_padding_)) goto LAB_14e16c824;
  }
  param_1 = (UOptimusNode *)0x0;
LAB_14e16c824:
  param_1[1]._padding_ = *(longlong *)((longlong)this + 0x28);
  _X_00 = (*(double *)((longlong)this + 0x10) + *(double *)this) * __real_3fe0000000000000;
  _X = (*(double *)((longlong)this + 0x18) + *(double *)((longlong)this + 8)) *
       __real_3fe0000000000000;
  iVar3 = _finite(_X_00);
  if (((iVar3 != 0) && (iVar3 = _finite(_X), iVar3 != 0)) &&
     ((dVar2 = _X_00 - (param_1->GraphPosition).field0_0x0._s_0.X,
      uVar5 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000 ||
      (dVar2 = _X - (param_1->GraphPosition).field0_0x0._s_0.Y,
      uVar5 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000)))) {
    TVar1._8_4_ = SUB84(_X,0);
    TVar1._s_0.X = _X_00;
    TVar1._12_4_ = (int)((ulonglong)_X >> 0x20);
    (param_1->GraphPosition).field0_0x0 = TVar1;
    UOptimusNode::Notify(param_1,NodePositionChanged);
    return true;
  }
  return false;
}

// AddCommentNode @ 14e1740c0

UOptimusNode * __thiscall
UOptimusNodeGraph::AddCommentNode
          (UOptimusNodeGraph *this,TVector2<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  UOptimusNode *pUVar5;
  UClass *local_res18 [2];
  uint7 uStack_47;
  code *local_38 [5];
  undefined8 *local_10;
  
  uVar1 = *(undefined8 *)&param_3->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  local_38[0] = (code *)0x0;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  local_10 = FMemory::Malloc(0x30,8);
  local_10[1] = uVar1;
  local_10[2] = uVar2;
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOptimusNodeGraph::AddCommentNode'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_10[3] = dVar3;
  local_10[4] = dVar4;
  local_10[5] = (ulonglong)uStack_47 << 8;
  if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UOptimusNodeGraph::AddCommentNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                  ::Call;
  }
  local_res18[0] = UOptimusNode_Comment::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar5 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)local_res18,param_1,
                           (TFunction<void___cdecl(UOptimusNode_*)> *)local_38);
  return pUVar5;
}

// AddCommentNode @ 14e1741a0

UOptimusNode * __thiscall
UOptimusNodeGraph::AddCommentNode
          (UOptimusNodeGraph *this,TVector2<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  UOptimusNode *pUVar5;
  UClass *local_res18 [2];
  undefined7 uStack_47;
  code *local_38 [5];
  undefined8 *local_10;
  
  uVar1 = *(undefined8 *)&param_3->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x30,8);
  local_10[1] = uVar1;
  local_10[2] = uVar2;
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOptimusNodeGraph::AddCommentNode'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_10[3] = dVar3;
  local_10[4] = dVar4;
  local_10[5] = CONCAT71(uStack_47,param_4);
  if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UOptimusNodeGraph::AddCommentNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                  ::Call;
  }
  local_res18[0] = UOptimusNode_Comment::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar5 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)local_res18,param_1,
                           (TFunction<void___cdecl(UOptimusNode_*)> *)local_38);
  return pUVar5;
}

// AddComponentBindingGetNode @ 14e174690

UOptimusNode * __thiscall
UOptimusNodeGraph::AddComponentBindingGetNode
          (UOptimusNodeGraph *this,UOptimusComponentSourceBinding *param_1,TVector2<double> *param_2
          )

{
  UOptimusNode *pUVar1;
  UClass *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  UOptimusComponentSourceBinding *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddComponentBindingGetNode'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddComponentBindingGetNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  local_20 = param_1;
  local_res10[0] = UOptimusNode_ComponentSource::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  pUVar1 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)local_res10,param_2,
                           (TFunction<void___cdecl(UOptimusNode_*)> *)local_38);
  return pUVar1;
}

// AddDataInterfaceNode @ 14e174760

UOptimusNode * __thiscall
UOptimusNodeGraph::AddDataInterfaceNode
          (UOptimusNodeGraph *this,TSubclassOf<UOptimusComputeDataInterface> param_1,
          TVector2<double> *param_2)

{
  UObject *pUVar1;
  UOptimusNode *pUVar2;
  UClass *local_res10;
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined8 local_10;
  
  pUVar1 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddDataInterfaceNode'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddDataInterfaceNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  local_res10 = UOptimusNode_DataInterface::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)&local_res10,param_2,
                           (TFunction<void___cdecl(UOptimusNode_*)> *)local_38);
  return pUVar2;
}

// AddFunctionReferenceNode @ 14e174970

UOptimusNode * __thiscall
UOptimusNodeGraph::AddFunctionReferenceNode
          (UOptimusNodeGraph *this,UOptimusFunctionNodeGraph *param_1,TVector2<double> *param_2)

{
  UOptimusNode *pUVar1;
  UClass *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  UOptimusFunctionNodeGraph *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddFunctionReferenceNode'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddFunctionReferenceNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  local_20 = param_1;
  local_res10[0] = UOptimusNode_FunctionReference::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  pUVar1 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)local_res10,param_2,
                           (TFunction<void___cdecl(UOptimusNode_*)> *)local_38);
  return pUVar1;
}

// AddGraphDirect @ 14e174b70

bool __thiscall
UOptimusNodeGraph::AddGraphDirect(UOptimusNodeGraph *this,UOptimusNodeGraph *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  TObjectPtr<UOptimusNodeGraph>_u_0 local_res10;
  
  if ((param_1 != (UOptimusNodeGraph *)0x0) && (param_1->GraphType == SubGraph)) {
    iVar2 = *(int *)&(this->Links).AllocatorInstance.Data;
    if (param_2 != -1) {
      iVar1 = iVar2;
      if (param_2 < iVar2) {
        iVar1 = param_2;
      }
      iVar2 = 0;
      if (0 < iVar1) {
        iVar2 = iVar1;
      }
    }
    local_res10.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_> *)
               &(this->Nodes).ArrayNum,(TObjectPtr<UOptimusNodeGraph> *)&local_res10.ObjectPtr,iVar2
              );
    GlobalNotify((UOptimusNodeGraph *)&this[-1].SubGraphs.ArrayNum,GraphAdded,(UObject *)param_1);
    return true;
  }
  return false;
}

// AddLink @ 14e174f10

bool __thiscall
UOptimusNodeGraph::AddLink
          (UOptimusNodeGraph *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2)

{
  atomic<int> *paVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  atomic<int> aVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FOptimusCompoundAction *pFVar10;
  FOptimusNodeGraphAction_AddRemoveLink *this_00;
  UOptimusActionStack *this_01;
  int iVar11;
  FOptimusCompoundAction *this_02;
  UOptimusNodePin *pUVar12;
  ForAnyElementType FVar13;
  uint local_res10 [4];
  UOptimusNodePin *local_res20;
  FString local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FOptimusAction,1> local_68;
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> local_58;
  TWeakPtr<FOptimusAction,1> local_48;
  
  this_02 = (FOptimusCompoundAction *)0x0;
  local_res10[0] = 0;
  if (((param_1 == (UOptimusNodePin *)0x0) || (param_2 == (UOptimusNodePin *)0x0)) ||
     (bVar7 = UOptimusNodePin::CanCannect(param_1,param_2,(FString *)0x0), !bVar7)) {
    return false;
  }
  pUVar12 = param_1;
  local_res20 = param_2;
  if (param_1->Direction != Input) {
    pUVar12 = param_2;
    local_res20 = param_1;
  }
  GetAllLinkIndexesToPin(this,&local_78,pUVar12);
  pFVar10 = ::operator_new(0x28);
  if (pFVar10 != (FOptimusCompoundAction *)0x0) {
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    (pFVar10->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->SubActions).ArrayNum = 0;
    (pFVar10->SubActions).ArrayMax = 0;
    this_02 = pFVar10;
  }
  iVar11 = local_78.ArrayNum;
  pFVar3 = local_78.AllocatorInstance.Data + (longlong)iVar11 * 4;
  FVar13.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if (local_78.ArrayNum != iVar11) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar13.Data == pFVar3) {
      this_00 = ::operator_new(0x40);
      if (this_00 == (FOptimusNodeGraphAction_AddRemoveLink *)0x0) {
        this_00 = (FOptimusNodeGraphAction_AddRemoveLink *)0x0;
      }
      else {
        FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
                  (this_00,local_res20,pUVar12,false);
        this_00->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddLink__6B_;
        ::FString::PrintfImpl(&local_88,L"Add Link");
        plVar2 = &this_00->_padding_;
        if ((FString *)plVar2 != &local_88) {
          if ((void *)*plVar2 != (void *)0x0) {
            FMemory::Free((void *)*plVar2);
          }
          *plVar2 = (longlong)local_88.Data.AllocatorInstance.Data;
          *(int *)&this_00->_padding_ = local_88.Data.ArrayNum;
          *(int *)((longlong)&this_00->_padding_ + 4) = local_88.Data.ArrayMax;
          local_88.Data.ArrayNum = 0;
          local_88.Data.ArrayMax = 0;
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      ::FString::operator=((FString *)&this_02->_padding_,(FString *)&this_00->_padding_);
      FOptimusCompoundAction::AddSubAction(this_02,&local_48,(FOptimusAction *)this_00);
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_48.WeakReferenceCount.ReferenceController,1);
        }
      }
      this_01 = GetActionStack(this);
      local_68.Object = (FOptimusAction *)this_02;
      local_68.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1
        ;
        (local_68.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        local_68.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_02;
      }
      bVar7 = UOptimusActionStack::RunAction(this_01,&local_68);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return bVar7;
    }
    uVar5 = *(uint *)FVar13.Data;
    uVar9 = 0;
    if ((int)uVar5 < (this->Links).ArrayNum) {
      uVar9 = ~uVar5 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    FOptimusCompoundAction::
    AddSubAction<FOptimusNodeGraphAction_RemoveLink,TObjectPtr<UOptimusNodeLink>_&>
              (this_02,&local_58,
               (TObjectPtr<UOptimusNodeLink> *)
               ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar5 * 8));
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    FVar13.Data = FVar13.Data + 4;
  }
  pcVar6 = (code *)swi(3);
  uVar8 = (*pcVar6)();
  return (bool)uVar8;
}

// AddLinkDirect @ 14e175210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UOptimusNodeGraph::AddLinkDirect
          (UOptimusNodeGraph *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UOptimusNode *pUVar7;
  UOptimusNode *pUVar8;
  UClass *pUVar9;
  UObject *this_00;
  char *pcVar10;
  atomic<unsigned_char> *paVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [8];
  UObject *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((param_1 == (UOptimusNodePin *)0x0) || (param_2 == (UOptimusNodePin *)0x0)) {
    pcVar10 = "NodeOutputPin != nullptr && NodeInputPin != nullptr";
    iVar6 = 0x943;
    paVar11 = &bGEnsureHasExecuted<7701470802381637955>;
  }
  else {
    if ((param_1->Direction == Output) && (param_2->Direction == Input)) {
      if (param_1 == param_2) {
        return false;
      }
      pUVar7 = UOptimusNodePin::GetOwningNode(param_1);
      pUVar8 = UOptimusNodePin::GetOwningNode(param_2);
      if (pUVar7 == pUVar8) {
        return false;
      }
      pFVar12 = (this->Links).AllocatorInstance.Data;
      iVar6 = (this->Links).ArrayNum;
      pFVar2 = pFVar12 + (longlong)iVar6 * 8;
      while( true ) {
        if ((this->Links).ArrayNum != iVar6) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UOptimusNodeLink>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_d8);
        }
        if (pFVar12 == pFVar2) break;
        if ((*(UOptimusNodePin **)(*(longlong *)pFVar12 + 0x28) == param_1) &&
           (*(UOptimusNodePin **)(*(longlong *)pFVar12 + 0x30) == param_2)) {
          return false;
        }
        pFVar12 = pFVar12 + 8;
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar9 = UOptimusNodeLink::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar9);
      local_c8._8_8_ = this;
      this_00 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar13 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      *(UOptimusNodePin **)(this_00 + 1) = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      *(UOptimusNodePin **)&this_00[1].field_0x8 = param_2;
      local_d0 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(this_00);
      }
      pFVar2 = (this->Links).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar2 + (longlong)(this->Links).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = (this->Links).ArrayNum;
      piVar1 = &(this->Links).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Links).AllocatorInstance,piVar1);
      }
      pFVar2 = (this->Links).AllocatorInstance.Data;
      (this->Links).ArrayNum = iVar6 + 1;
      *(UObject **)(pFVar2 + (longlong)iVar6 * 8) = local_d0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_d0);
      }
      Notify(this,LinkAdded,this_00);
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
      return true;
    }
    pcVar10 = 
    "NodeOutputPin->GetDirection() == EOptimusNodePinDirection::Output && NodeInputPin->GetDirection() == EOptimusNodePinDirection::Input"
    ;
    iVar6 = 0x94a;
    paVar11 = &bGEnsureHasExecuted<7701470802381637962>;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar11,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                     ,iVar6,pcVar10);
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// AddLoopTerminalNodes @ 14e1754b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::AddLoopTerminalNodes
          (UOptimusNodeGraph *this,
          TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  UObjectBaseUtility *pUVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FOptimusCompoundAction *pFVar10;
  UClass *pUVar11;
  FName *pFVar12;
  UObject *pUVar13;
  FName FVar14;
  FName FVar15;
  FOptimusNodeGraphAction_AddNode *pFVar16;
  FString *pFVar17;
  TWeakPtr<FOptimusAction,1> *pTVar18;
  FOptimusNodeGraphAction_AddNode *pFVar19;
  UOptimusActionStack *pUVar20;
  longlong *plVar21;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  FOptimusCompoundAction *pFVar25;
  FOptimusCompoundAction *this_00;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  FOptimusNodeGraphAction_AddNode *local_1a8;
  TWeakPtr<FOptimusNodeGraphAction_AddNode,1> local_1a0;
  TWeakPtr<FOptimusNodeGraphAction_AddNode,1> local_190;
  FName local_180;
  FName local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  TSharedPtr<FOptimusAction,1> local_120;
  FName local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  void *local_f0 [2];
  TWeakPtr<FOptimusAction,1> local_e0;
  void *local_d0 [2];
  TWeakPtr<FOptimusAction,1> local_c0;
  TWeakPtr<FOptimusNodeGraphAction_AddNodePair,1> local_b0;
  code *local_98 [2];
  undefined **local_88;
  double local_80;
  double dStack_78;
  undefined8 local_70;
  code *local_68 [2];
  undefined **local_58;
  double local_50;
  double dStack_48;
  undefined8 local_40;
  
  pFVar25 = (FOptimusCompoundAction *)0x0;
  pFVar10 = ::operator_new(0x28);
  this_00 = pFVar25;
  if (pFVar10 != (FOptimusCompoundAction *)0x0) {
    ::FString::FString(&local_170,L"Add Loop Nodes");
    FVar24.Data = local_170.Data.AllocatorInstance.Data;
    plVar21 = &pFVar10->_padding_;
    pFVar10->_padding_ = (longlong)&___7FOptimusAction__6B_;
    piVar1 = (int *)((longlong)&pFVar10->_padding_ + 4);
    *plVar21 = 0;
    *(int *)&pFVar10->_padding_ = local_170.Data.ArrayNum;
    if (local_170.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_170.Data.ArrayNum,0,(ForAnyElementType *)plVar21,local_170.Data.ArrayNum,
                 piVar1);
      memcpy((void *)*plVar21,FVar24.Data,(longlong)local_170.Data.ArrayNum * 2);
    }
    pFVar10->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    (pFVar10->SubActions).ArrayNum = 0;
    (pFVar10->SubActions).ArrayMax = 0;
    pFVar25 = (FOptimusCompoundAction *)&DAT_00000001;
    (pFVar10->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00 = pFVar10;
  }
  if ((pFVar25 != (FOptimusCompoundAction *)0x0) &&
     (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  pUVar11 = UOptimusNode_LoopTerminal::StaticClass();
  local_180 = (FName)pUVar11->_padding_;
  ::FName::ToString(&local_180,&local_140);
  ::FString::ConcatFC(&local_160,&local_140,L"_Entry");
  FVar24.Data = (FScriptContainerElement *)L"";
  if (local_160.Data.ArrayNum != 0) {
    FVar24.Data = local_160.Data.AllocatorInstance.Data;
  }
  pFVar12 = ::FName::FName(&local_110,(wchar_t *)FVar24.Data);
  FVar15 = *pFVar12;
  pUVar11 = Z_Construct_UClass_UObject_NoRegister();
  pUVar13 = StaticFindObjectFast(pUVar11,(UObject *)this,FVar15,None,RF_NoFlags,Borrowed);
  if (pUVar13 != (UObject *)0x0) {
    FVar14 = (FName)Z_Construct_UClass_UObject_NoRegister();
    FVar15 = MakeUniqueObjectName
                       ((UObject *)local_108,(UClass *)this,FVar14,
                        FVar15.ComparisonIndex.Value.Value);
    FVar15 = *(FName *)FVar15;
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0x90);
  if (pFVar16 == (FOptimusNodeGraphAction_AddNode *)0x0) {
    pFVar16 = (FOptimusNodeGraphAction_AddNode *)0x0;
  }
  else {
    local_80 = (param_1->field0_0x0)._s_0.X;
    dStack_78 = (param_1->field0_0x0)._s_0.Y;
    local_70 = 0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_1>,bool,UOptimusNode_*>
                  ::Call;
    pUVar11 = UOptimusNode_LoopTerminal::StaticClass();
    pFVar17 = (FString *)(**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_f0);
    pFVar16 = FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
                        (pFVar16,pFVar17,pUVar11,FVar15,
                         (TFunction<bool___cdecl(UOptimusNode_*)> *)local_98);
    if (local_f0[0] != (void *)0x0) {
      FMemory::Free(local_f0[0]);
    }
  }
  pTVar18 = FOptimusCompoundAction::AddSubAction(this_00,&local_e0,(FOptimusAction *)pFVar16);
  pTVar4 = (pTVar18->WeakReferenceCount).ReferenceController;
  local_1a0.Object = (FOptimusNodeGraphAction_AddNode *)pTVar18->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_1a0.WeakReferenceCount.ReferenceController = pTVar4;
  if (local_e0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_e0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_e0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_e0.WeakReferenceCount.ReferenceController,1);
    }
  }
  pUVar11 = UOptimusNode_LoopTerminal::StaticClass();
  local_178 = (FName)pUVar11->_padding_;
  ::FName::ToString(&local_178,&local_130);
  ::FString::ConcatFC(&local_150,&local_130,L"_Return");
  FVar24.Data = (FScriptContainerElement *)L"";
  if (local_150.Data.ArrayNum != 0) {
    FVar24.Data = local_150.Data.AllocatorInstance.Data;
  }
  pFVar12 = ::FName::FName((FName *)(local_108 + 8),(wchar_t *)FVar24.Data);
  FVar15 = *pFVar12;
  pUVar11 = Z_Construct_UClass_UObject_NoRegister();
  pUVar13 = StaticFindObjectFast(pUVar11,(UObject *)this,FVar15,None,RF_NoFlags,Borrowed);
  if (pUVar13 != (UObject *)0x0) {
    FVar14 = (FName)Z_Construct_UClass_UObject_NoRegister();
    FVar15 = MakeUniqueObjectName
                       ((UObject *)local_f8,(UClass *)this,FVar14,FVar15.ComparisonIndex.Value.Value
                       );
    FVar15 = *(FName *)FVar15;
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  local_1a8 = ::operator_new(0x90);
  if (local_1a8 == (FOptimusNodeGraphAction_AddNode *)0x0) {
    pFVar19 = (FOptimusNodeGraphAction_AddNode *)0x0;
    local_1a8 = pFVar19;
  }
  else {
    local_40 = 0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::`2'::<lambda_2>,0,0>
                ::_vftable_;
    local_50 = (param_1->field0_0x0)._s_0.X;
    dStack_48 = (param_1->field0_0x0)._s_0.Y;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_2>,bool,UOptimusNode_*>
                  ::Call;
    pUVar11 = UOptimusNode_LoopTerminal::StaticClass();
    pFVar17 = (FString *)(**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_d0);
    pFVar19 = FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
                        (local_1a8,pFVar17,pUVar11,FVar15,
                         (TFunction<bool___cdecl(UOptimusNode_*)> *)local_68);
    local_1a8 = pFVar19;
    if (local_d0[0] != (void *)0x0) {
      FMemory::Free(local_d0[0]);
    }
  }
  pTVar18 = FOptimusCompoundAction::AddSubAction(this_00,&local_c0,(FOptimusAction *)pFVar19);
  pTVar5 = (pTVar18->WeakReferenceCount).ReferenceController;
  local_190.Object = (FOptimusNodeGraphAction_AddNode *)pTVar18->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_190.WeakReferenceCount.ReferenceController = pTVar5;
  if (local_c0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_c0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakReferenceCount.ReferenceController,1);
    }
  }
  FOptimusCompoundAction::
  AddSubAction<FOptimusNodeGraphAction_AddNodePair,TWeakPtr<FOptimusNodeGraphAction_AddNode,1>_&,TWeakPtr<FOptimusNodeGraphAction_AddNode,1>_&>
            (this_00,&local_b0,&local_1a0,&local_190);
  if (local_b0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_b0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_b0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_b0.WeakReferenceCount.ReferenceController,1);
    }
  }
  pUVar20 = GetActionStack(this);
  local_120.Object = (FOptimusAction *)this_00;
  local_120.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_120.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_120.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_00;
    (local_120.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_120.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
  }
  bVar8 = UOptimusActionStack::RunAction(pUVar20,&local_120);
  if (bVar8) {
    plVar23 = (longlong *)0x0;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0 = 0;
    pUVar20 = GetActionStack(this);
    pUVar6 = (UObjectBaseUtility *)pUVar20->_padding_;
    plVar21 = plVar23;
    if (pUVar6 != (UObjectBaseUtility *)0x0) {
      pUVar11 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
      plVar21 = UObjectBaseUtility::GetInterfaceAddress(pUVar6,pUVar11);
    }
    local_1b8 = (**(code **)(*plVar21 + 0x20))(plVar21,&pFVar16->NodePath);
    if (((local_1c8.Data <= (FScriptContainerElement *)&local_1b8) &&
        ((FScriptContainerElement *)&local_1b8 < local_1c8.Data + (longlong)local_1c0._4_4_ * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar22 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
      return pTVar22;
    }
    iVar9 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0 = CONCAT44(local_1c0._4_4_,iVar9 + 1);
    *(undefined8 *)(local_1c8.Data + (longlong)iVar9 * 8) = local_1b8;
    pUVar20 = GetActionStack(this);
    pUVar6 = (UObjectBaseUtility *)pUVar20->_padding_;
    if (pUVar6 != (UObjectBaseUtility *)0x0) {
      pUVar11 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
      plVar23 = UObjectBaseUtility::GetInterfaceAddress(pUVar6,pUVar11);
    }
    local_1b0 = (**(code **)(*plVar23 + 0x20))(plVar23,&local_1a8->NodePath);
    if (((local_1c8.Data <= (FScriptContainerElement *)&local_1b0) &&
        ((FScriptContainerElement *)&local_1b0 < local_1c8.Data + (longlong)local_1c0._4_4_ * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar22 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
      return pTVar22;
    }
    iVar9 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    *(undefined8 *)(local_1c8.Data + (longlong)iVar9 * 8) = local_1b0;
    (__return_storage_ptr__->AllocatorInstance).Data = local_1c8.Data;
    __return_storage_ptr__->ArrayNum = iVar9 + 1;
    __return_storage_ptr__->ArrayMax = local_1c0._4_4_;
    local_1c0 = 0;
    local_1c8.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return __return_storage_ptr__;
}

// AddNode @ 14e175c20

UOptimusNode * __thiscall
UOptimusNodeGraph::AddNode
          (UOptimusNodeGraph *this,TSubclassOf<UOptimusNode> param_1,TVector2<double> *param_2)

{
  UOptimusNode *pUVar1;
  UObject *local_res10 [3];
  TFunction<void___cdecl(UOptimusNode_*)> local_38;
  
  local_res10[0] = *(UObject **)param_1.Class.field0_0x0;
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  pUVar1 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)local_res10,param_2,&local_38);
  return pUVar1;
}

// AddNodeDirect @ 14e175c80

bool __thiscall UOptimusNodeGraph::AddNodeDirect(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  int *piVar1;
  UOptimusNodeGraph *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UOptimusNode *local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_20;
  
  if (param_1 == (UOptimusNode *)0x0) {
LAB_14e175e21:
    bVar5 = false;
  }
  else {
    this_00 = (UOptimusNodeGraph *)param_1->_padding_;
    if (this_00 != this) {
      bVar5 = false;
      if (this_00 == (UOptimusNodeGraph *)0x0) {
LAB_14e175d06:
        bVar4 = false;
      }
      else {
        pUVar8 = StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        bVar5 = false;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) goto LAB_14e175d06;
        bVar5 = true;
        GetAllLinkIndexesToNode(this_00,&local_20,param_1,Unknown);
        if (local_20.ArrayNum == 0) goto LAB_14e175d06;
        bVar4 = true;
      }
      if ((bVar5) && (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_20.AllocatorInstance.Data);
      }
      if (bVar4) goto LAB_14e175e21;
      (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0x34);
    }
    local_28 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (this->Nodes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->Nodes).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    iVar7 = (this->Nodes).ArrayNum;
    piVar1 = &(this->Nodes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Nodes).AllocatorInstance,piVar1);
    }
    (this->Nodes).ArrayNum = iVar7 + 1;
    *(UOptimusNode **)((this->Nodes).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UOptimusNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_28);
    }
    Notify(this,NodeAdded,(UObject *)param_1);
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_1);
    bVar5 = true;
  }
  return bVar5;
}

// AddNodeInternal @ 14e175e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusNode * __thiscall
UOptimusNodeGraph::AddNodeInternal
          (UOptimusNodeGraph *this,TSubclassOf<UOptimusNode> param_1,TVector2<double> *param_2,
          TFunction<void___cdecl(UOptimusNode_*)> *param_3)

{
  int iVar1;
  longlong lVar2;
  UObjectBaseUtility *this_00;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FName FVar7;
  FName FVar8;
  FOptimusNodeGraphAction_AddNode *this_01;
  FString *pFVar9;
  UOptimusActionStack *pUVar10;
  UClass *pUVar11;
  UOptimusNode *pUVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 auStackY_108 [32];
  TSharedPtr<FOptimusAction,1> local_d8;
  undefined1 local_c8 [16];
  code *local_b8 [5];
  undefined8 *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  double local_58;
  FScriptContainerElement *pFStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pUVar11 = (UClass *)0x0;
  local_c8._0_4_ = 0;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar5 = pUVar11;
  local_d8.Object = (FOptimusAction *)param_2;
  if ((lVar2 != 0) && (pUVar4 = UOptimusNode::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  FVar8 = (FName)(((FString *)&pUVar5->_padding_)->Data).AllocatorInstance.Data;
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  pUVar6 = StaticFindObjectFast(pUVar5,(UObject *)this,FVar8,None,RF_NoFlags,Borrowed);
  if (pUVar6 != (UObject *)0x0) {
    FVar7 = (FName)Z_Construct_UClass_UObject_NoRegister();
    FVar8 = MakeUniqueObjectName
                      ((UObject *)local_c8,(UClass *)this,FVar7,FVar8.ComparisonIndex.Value.Value);
    FVar8 = *(FName *)FVar8;
  }
  this_01 = ::operator_new(0x90);
  pUVar5 = pUVar11;
  pUVar4 = pUVar11;
  if (this_01 != (FOptimusNodeGraphAction_AddNode *)0x0) {
    local_88 = *(longlong *)param_3;
    local_60 = (longlong *)0x0;
    if (local_88 != 0) {
      puVar14 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar14 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar14)(puVar14,&local_78);
    }
    local_b8[0] = (code *)0x0;
    local_58 = (((TVector2<double>_u_0 *)&(local_d8.Object)->_padding_)->_s_0).X;
    pFStack_50 = ((local_d8.Object)->Title).Data.AllocatorInstance.Data;
    local_90 = FMemory::Malloc(0x50,0x10);
    *local_90 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::AddNodeInternal'::`2'::<lambda_1>,0,1>::
                 _vftable_;
    plVar13 = local_90 + 2;
    *plVar13 = local_88;
    local_90[7] = local_60;
    local_60 = (longlong *)0x0;
    local_90[4] = local_78;
    local_90[5] = uStack_70;
    local_90[6] = local_68;
    if (*plVar13 != 0) {
      local_88 = 0;
    }
    local_90[8] = local_58;
    local_90[9] = pFStack_50;
    if (plVar13 != (longlong *)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UOptimusNodeGraph::AddNodeInternal'::__l2::<lambda_1>,bool,UOptimusNode_*>
                    ::Call;
    }
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar2 != 0) && (pUVar4 = UOptimusNode::StaticClass(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar5 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_c8);
    pUVar5 = (UClass *)
             FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
                       (this_01,pFVar9,pUVar5,FVar8,
                        (TFunction<bool___cdecl(UOptimusNode_*)> *)local_b8);
    pUVar4 = (UClass *)&DAT_00000003;
  }
  if (((ulonglong)pUVar4 & 2) != 0) {
    pUVar4 = (UClass *)(ulonglong)((uint)pUVar4 & 0xfffffffd);
    if ((void *)CONCAT44(local_c8._4_4_,local_c8._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_c8._4_4_,local_c8._0_4_));
    }
  }
  if ((((ulonglong)pUVar4 & 1) != 0) && (local_88 != 0)) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  pUVar10 = GetActionStack(this);
  local_d8.Object = (FOptimusAction *)pUVar5;
  pUVar4 = ::operator_new(0x18);
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar11;
  if (pUVar4 != (UClass *)0x0) {
    *(undefined4 *)&pUVar4->_padding_ = 1;
    pUVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pUVar4->_padding_ + 4) = 1;
    pUVar4->_padding_ = (longlong)pUVar5;
    local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar4;
  }
  bVar3 = UOptimusActionStack::RunAction(pUVar10,&local_d8);
  if (bVar3) {
    pUVar10 = GetActionStack(this);
    this_00 = (UObjectBaseUtility *)pUVar10->_padding_;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar11 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
      pUVar11 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar11);
    }
    pUVar12 = (UOptimusNode *)
              (**(code **)(pUVar11->_padding_ + 0x20))(pUVar11,(FString *)&pUVar5->_padding_);
    if (*(longlong *)param_3 != 0) {
      plVar13 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar13 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  else {
    if (*(longlong *)param_3 != 0) {
      plVar13 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar13 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    pUVar12 = (UOptimusNode *)0x0;
  }
  return pUVar12;
}

// AddNodePairDirect @ 14e1761f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UOptimusNodeGraph::AddNodePairDirect
          (UOptimusNodeGraph *this,UOptimusNode *param_1,UOptimusNode *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  void *pvVar8;
  UObject *pUVar9;
  longlong *plVar10;
  longlong *plVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 auStackY_148 [32];
  UObject *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar7 = Z_Construct_UClass_UOptimusNodePairProvider_NoRegister();
    pvVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar7);
    if ((pvVar8 != (void *)0x0) && (param_2 != (UOptimusNode *)0x0)) {
      pUVar7 = Z_Construct_UClass_UOptimusNodePairProvider_NoRegister();
      pvVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar7);
      if (pvVar8 != (void *)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar7 = UOptimusNodePair::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_a8,pUVar7);
        local_a8._8_8_ = this;
        pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
        if (local_a8._64_8_ != 0) {
          plVar10 = (longlong *)(local_a8 + 0x50);
          if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_a8._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        *(UOptimusNode **)(pUVar9 + 1) = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        *(UOptimusNode **)&pUVar9[1].field_0x8 = param_2;
        local_f8 = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        pFVar2 = (this->NodePairs).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 <
             pFVar2 + (longlong)(this->NodePairs).ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar6 = (this->NodePairs).ArrayNum;
        piVar1 = &(this->NodePairs).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->NodePairs).AllocatorInstance,piVar1);
        }
        (this->NodePairs).ArrayNum = iVar6 + 1;
        *(UObject **)((this->NodePairs).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_f8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_f8);
        }
        pUVar7 = Z_Construct_UClass_UOptimusNodePairProvider_NoRegister();
        plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar7);
        if (plVar10 != (longlong *)0x0) {
          pUVar7 = Z_Construct_UClass_UOptimusNodePairProvider_NoRegister();
          plVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar7);
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,plVar11);
            (**(code **)(*plVar11 + 0x10))(plVar11,plVar10);
            return true;
          }
          pFVar12 = GetTypeName<IOptimusNodePairProvider>(&local_d0);
          pwVar13 = L"";
          if ((pFVar12->Data).ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
          pFVar12 = GetFullNameForCastLogError<UOptimusNode>(&local_c0,param_2);
          if ((pFVar12->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar13,pwVar14);
        }
        pFVar12 = GetTypeName<IOptimusNodePairProvider>(&local_f0);
        pwVar13 = L"";
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        pFVar12 = GetFullNameForCastLogError<UOptimusNode>(&local_e0,param_1);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar13,pwVar14);
      }
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7701470802381637911>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                     ,0x917,
                     "Cast<IOptimusNodePairProvider>(InFirstNode) && Cast<IOptimusNodePairProvider>(InSecondNode)"
                    );
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// AddNodePairInternal @ 14e1764f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::AddNodePairInternal
          (UOptimusNodeGraph *this,
          TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UOptimusNode> param_1,TVector2<double> *param_2,
          TFunction<void___cdecl(UOptimusNode_*)> *param_3,
          TFunction<void___cdecl(UOptimusNode_*)> *param_4)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  longlong lVar4;
  UObjectBaseUtility *pUVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FOptimusAction *pFVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  FOptimusCompoundAction *pFVar13;
  FName *pFVar14;
  UObject *pUVar15;
  FName FVar16;
  FName FVar17;
  FOptimusCompoundAction *pFVar18;
  FOptimusNodeGraphAction_AddNode *pFVar19;
  FString *pFVar20;
  longlong lVar21;
  UOptimusActionStack *pUVar22;
  TReferenceControllerBase<1> *pTVar23;
  UClass *pUVar24;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar25;
  TReferenceControllerBase<1> *pTVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  ForAnyElementType FVar29;
  FOptimusCompoundAction *this_00;
  undefined1 auStackY_288 [32];
  ForAnyElementType local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  FOptimusNodeGraphAction_AddNode *local_218;
  TFunction<void___cdecl(UOptimusNode_*)> *local_210;
  TFunction<void___cdecl(UOptimusNode_*)> *local_208;
  TWeakPtr<FOptimusAction,1> local_200;
  TSharedPtr<FOptimusAction,1> local_1f0;
  FName local_1e0;
  FName local_1d8;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FName local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [8];
  void *local_160 [2];
  TWeakPtr<FOptimusAction,1> local_150;
  void *local_140 [3];
  code *local_128 [5];
  undefined8 *local_100;
  code *local_f8 [5];
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  double local_98;
  FScriptContainerElement *pFStack_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  double local_58;
  FScriptContainerElement *pFStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  lVar21 = *(longlong *)param_1.Class.field0_0x0;
  this_00 = (FOptimusCompoundAction *)0x0;
  local_208 = param_4;
  local_210 = param_3;
  local_218 = (FOptimusNodeGraphAction_AddNode *)((ulonglong)local_218 & 0xffffffff00000000);
  pFVar13 = this_00;
  local_200.Object = (FOptimusAction *)this;
  local_1f0.Object = (FOptimusAction *)param_2;
  if ((lVar21 != 0) && (pUVar12 = UOptimusNode::StaticClass(), pUVar12 != (UClass *)0x0)) {
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar21 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      pFVar13 = *(FOptimusCompoundAction **)param_1.Class.field0_0x0;
    }
  }
  local_1e0 = (FName)(pFVar13->SubActions).AllocatorInstance.Data;
  ::FName::ToString(&local_1e0,&local_1a0);
  ::FString::ConcatFC(&local_1d0,&local_1a0,L"_Entry");
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_1d0.Data.ArrayNum != 0) {
    FVar29.Data = local_1d0.Data.AllocatorInstance.Data;
  }
  pFVar14 = ::FName::FName(&local_180,(wchar_t *)FVar29.Data);
  FVar17 = *pFVar14;
  pUVar12 = Z_Construct_UClass_UObject_NoRegister();
  pUVar15 = StaticFindObjectFast(pUVar12,(UObject *)this,FVar17,None,RF_NoFlags,Borrowed);
  if (pUVar15 != (UObject *)0x0) {
    FVar16 = (FName)Z_Construct_UClass_UObject_NoRegister();
    FVar17 = MakeUniqueObjectName
                       ((UObject *)local_178,(UClass *)this,FVar16,
                        FVar17.ComparisonIndex.Value.Value);
    FVar17 = *(FName *)FVar17;
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  pFVar18 = ::operator_new(0x28);
  pFVar13 = this_00;
  if (pFVar18 != (FOptimusCompoundAction *)0x0) {
    ::FString::FString(&local_1c0,L"Add Loop Nodes");
    FVar29.Data = local_1c0.Data.AllocatorInstance.Data;
    plVar28 = &pFVar18->_padding_;
    pFVar18->_padding_ = (longlong)&___7FOptimusAction__6B_;
    piVar1 = (int *)((longlong)&pFVar18->_padding_ + 4);
    *plVar28 = 0;
    *(int *)&pFVar18->_padding_ = local_1c0.Data.ArrayNum;
    if (local_1c0.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1c0.Data.ArrayNum,0,(ForAnyElementType *)plVar28,local_1c0.Data.ArrayNum,
                 piVar1);
      memcpy((void *)*plVar28,FVar29.Data,(longlong)local_1c0.Data.ArrayNum * 2);
    }
    pFVar18->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    (pFVar18->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar18->SubActions).ArrayNum = 0;
    (pFVar18->SubActions).ArrayMax = 0;
    this_00 = pFVar18;
    pFVar13 = (FOptimusCompoundAction *)&DAT_00000001;
    param_3 = local_210;
  }
  if ((pFVar13 != (FOptimusCompoundAction *)0x0) &&
     (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  bVar8 = false;
  bVar10 = false;
  pFVar19 = ::operator_new(0x90);
  if (pFVar19 == (FOptimusNodeGraphAction_AddNode *)0x0) {
    pFVar19 = (FOptimusNodeGraphAction_AddNode *)0x0;
  }
  else {
    local_c8 = *(longlong *)param_3;
    local_a0 = (longlong *)0x0;
    if (local_c8 != 0) {
      puVar27 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar27 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar27)(puVar27,&local_b8);
    }
    local_128[0] = (code *)0x0;
    local_98 = (((TVector2<double>_u_0 *)&(local_1f0.Object)->_padding_)->_s_0).X;
    pFStack_90 = ((local_1f0.Object)->Title).Data.AllocatorInstance.Data;
    local_100 = FMemory::Malloc(0x50,0x10);
    *local_100 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::`2'::<lambda_1>,0,1>
                  ::_vftable_;
    plVar28 = local_100 + 2;
    *plVar28 = local_c8;
    local_100[7] = local_a0;
    local_a0 = (longlong *)0x0;
    local_100[4] = local_b8;
    local_100[5] = uStack_b0;
    local_100[6] = local_a8;
    if (*plVar28 != 0) {
      local_c8 = 0;
    }
    local_100[8] = local_98;
    local_100[9] = pFStack_90;
    if (plVar28 != (longlong *)0x0) {
      local_128[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_1>,bool,UOptimusNode_*>
                     ::Call;
    }
    lVar21 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar21 == 0) || (pUVar12 = UOptimusNode::StaticClass(), pUVar12 == (UClass *)0x0)) {
LAB_14e17681c:
      pUVar12 = (UClass *)0x0;
    }
    else {
      iVar11 = (int)pUVar12->_padding_;
      if ((*(int *)(lVar21 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar12->_padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) goto LAB_14e17681c;
      pUVar12 = *(UClass **)param_1.Class.field0_0x0;
    }
    bVar8 = true;
    bVar10 = true;
    pFVar20 = (FString *)
              (**(code **)(*(longlong *)((longlong)local_200.Object + 0x28) + 0x20))
                        ((longlong *)((longlong)local_200.Object + 0x28),local_160);
    pFVar19 = FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
                        (pFVar19,pFVar20,pUVar12,FVar17,
                         (TFunction<bool___cdecl(UOptimusNode_*)> *)local_128);
  }
  lVar21 = 0;
  local_218 = pFVar19;
  if ((bVar10) && (local_160[0] != (void *)0x0)) {
    FMemory::Free(local_160[0]);
  }
  if ((bVar8) && (local_c8 != 0)) {
    plVar28 = &local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar28 = local_a0;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  bVar8 = false;
  bVar10 = false;
  FOptimusCompoundAction::AddSubAction(this_00,&local_150,(FOptimusAction *)pFVar19);
  if (local_150.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_150.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_150.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_150.WeakReferenceCount.ReferenceController,1);
    }
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar4 != 0) && (pUVar12 = UOptimusNode::StaticClass(), pUVar12 != (UClass *)0x0)) {
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      lVar21 = *(longlong *)param_1.Class.field0_0x0;
    }
  }
  local_1d8 = *(FName *)(lVar21 + 0x18);
  ::FName::ToString(&local_1d8,&local_190);
  ::FString::ConcatFC(&local_1b0,&local_190,L"_Exit");
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_1b0.Data.ArrayNum != 0) {
    FVar29.Data = local_1b0.Data.AllocatorInstance.Data;
  }
  pFVar14 = ::FName::FName((FName *)(local_178 + 8),(wchar_t *)FVar29.Data);
  FVar17 = *pFVar14;
  pUVar12 = Z_Construct_UClass_UObject_NoRegister();
  pFVar9 = local_200.Object;
  pUVar15 = StaticFindObjectFast
                      (pUVar12,(UObject *)local_200.Object,FVar17,None,RF_NoFlags,Borrowed);
  if (pUVar15 != (UObject *)0x0) {
    FVar16 = (FName)Z_Construct_UClass_UObject_NoRegister();
    FVar17 = MakeUniqueObjectName
                       ((UObject *)local_168,(UClass *)pFVar9,FVar16,
                        FVar17.ComparisonIndex.Value.Value);
    FVar17 = *(FName *)FVar17;
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  pFVar19 = ::operator_new(0x90);
  if (pFVar19 == (FOptimusNodeGraphAction_AddNode *)0x0) {
    pFVar19 = (FOptimusNodeGraphAction_AddNode *)0x0;
    pUVar12 = (UClass *)local_200.Object;
    goto LAB_14e176b2f;
  }
  local_60 = (longlong *)0x0;
  local_88 = *(longlong *)local_208;
  if (local_88 != 0) {
    puVar27 = (undefined8 *)&local_208->field_0x10;
    if (*(undefined8 **)&local_208->field_0x28 != (undefined8 *)0x0) {
      puVar27 = *(undefined8 **)&local_208->field_0x28;
    }
    (**(code **)*puVar27)(puVar27,&local_78);
  }
  local_f8[0] = (code *)0x0;
  local_58 = (((TVector2<double>_u_0 *)&(local_1f0.Object)->_padding_)->_s_0).X;
  pFStack_50 = ((local_1f0.Object)->Title).Data.AllocatorInstance.Data;
  local_d0 = FMemory::Malloc(0x50,0x10);
  *local_d0 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::`2'::<lambda_2>,0,1>
               ::_vftable_;
  plVar28 = local_d0 + 2;
  *plVar28 = local_88;
  local_d0[7] = local_60;
  local_60 = (longlong *)0x0;
  local_d0[4] = local_78;
  local_d0[5] = uStack_70;
  local_d0[6] = local_68;
  if (*plVar28 != 0) {
    local_88 = 0;
  }
  local_d0[8] = local_58;
  local_d0[9] = pFStack_50;
  if (plVar28 != (longlong *)0x0) {
    local_f8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_2>,bool,UOptimusNode_*>
                  ::Call;
  }
  lVar21 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar21 == 0) || (pUVar12 = UOptimusNode::StaticClass(), pUVar12 == (UClass *)0x0)) {
LAB_14e176ae7:
    pUVar24 = (UClass *)0x0;
  }
  else {
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar21 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_14e176ae7;
    pUVar24 = *(UClass **)param_1.Class.field0_0x0;
  }
  pUVar12 = (UClass *)local_200.Object;
  bVar8 = true;
  bVar10 = true;
  pFVar20 = (FString *)
            (**(code **)(*(longlong *)((longlong)local_200.Object + 0x28) + 0x20))
                      ((longlong *)((longlong)local_200.Object + 0x28),local_140);
  pFVar19 = FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
                      (pFVar19,pFVar20,pUVar24,FVar17,
                       (TFunction<bool___cdecl(UOptimusNode_*)> *)local_f8);
LAB_14e176b2f:
  pTVar26 = (TReferenceControllerBase<1> *)0x0;
  if ((bVar10) && (local_140[0] != (void *)0x0)) {
    FMemory::Free(local_140[0]);
  }
  if ((bVar8) && (local_88 != 0)) {
    plVar28 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar28 = local_60;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  FOptimusCompoundAction::AddSubAction(this_00,&local_200,(FOptimusAction *)pFVar19);
  if (local_200.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_200.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_200.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_200.WeakReferenceCount.ReferenceController,1);
    }
  }
  pUVar22 = GetActionStack((UOptimusNodeGraph *)pUVar12);
  local_1f0.Object = (FOptimusAction *)this_00;
  pTVar23 = ::operator_new(0x18);
  local_1f0.SharedReferenceCount.ReferenceController = pTVar26;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    pTVar23->SharedReferenceCount = (atomic<int>)0x1;
    pTVar23->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar23->WeakReferenceCount = (atomic<int>)0x1;
    pTVar23[1]._padding_ = (longlong)this_00;
    local_1f0.SharedReferenceCount.ReferenceController = pTVar23;
  }
  bVar10 = UOptimusActionStack::RunAction(pUVar22,&local_1f0);
  if (bVar10) {
    local_238.Data = (FScriptContainerElement *)0x0;
    local_230 = 0;
    pUVar22 = GetActionStack((UOptimusNodeGraph *)pUVar12);
    pUVar5 = (UObjectBaseUtility *)pUVar22->_padding_;
    pTVar23 = pTVar26;
    if (pUVar5 != (UObjectBaseUtility *)0x0) {
      pUVar24 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
      pTVar23 = UObjectBaseUtility::GetInterfaceAddress(pUVar5,pUVar24);
    }
    local_228 = (**(code **)(pTVar23->_padding_ + 0x20))(pTVar23,&local_218->NodePath);
    if (((local_238.Data <= (FScriptContainerElement *)&local_228) &&
        ((FScriptContainerElement *)&local_228 < local_238.Data + (longlong)local_230._4_4_ * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar25 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar25;
    }
    iVar11 = (int)local_230;
    if ((int)local_230 == local_230._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_238,(int *)((longlong)&local_230 + 4));
    }
    local_230 = CONCAT44(local_230._4_4_,iVar11 + 1);
    *(undefined8 *)(local_238.Data + (longlong)iVar11 * 8) = local_228;
    pUVar22 = GetActionStack((UOptimusNodeGraph *)pUVar12);
    pUVar5 = (UObjectBaseUtility *)pUVar22->_padding_;
    if (pUVar5 != (UObjectBaseUtility *)0x0) {
      pUVar12 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
      pTVar26 = UObjectBaseUtility::GetInterfaceAddress(pUVar5,pUVar12);
    }
    local_220 = (**(code **)(pTVar26->_padding_ + 0x20))(pTVar26,&pFVar19->NodePath);
    if (((local_238.Data <= (FScriptContainerElement *)&local_220) &&
        ((FScriptContainerElement *)&local_220 < local_238.Data + (longlong)local_230._4_4_ * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar25 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar25;
    }
    iVar11 = (int)local_230;
    if ((int)local_230 == local_230._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_238,(int *)((longlong)&local_230 + 4));
    }
    *(undefined8 *)(local_238.Data + (longlong)iVar11 * 8) = local_220;
    (__return_storage_ptr__->AllocatorInstance).Data = local_238.Data;
    __return_storage_ptr__->ArrayNum = iVar11 + 1;
    __return_storage_ptr__->ArrayMax = local_230._4_4_;
    local_238.Data = (FScriptContainerElement *)0x0;
    local_230 = 0;
    if (*(longlong *)local_210 != 0) {
      plVar28 = (longlong *)&local_210->field_0x10;
      if (*(longlong **)&local_210->field_0x28 != (longlong *)0x0) {
        plVar28 = *(longlong **)&local_210->field_0x28;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    if (*(longlong *)local_208 != 0) {
      plVar28 = (longlong *)&local_208->field_0x10;
      if (*(longlong **)&local_208->field_0x28 != (longlong *)0x0) {
        plVar28 = *(longlong **)&local_208->field_0x28;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (*(longlong *)local_210 != 0) {
      plVar28 = (longlong *)&local_210->field_0x10;
      if (*(longlong **)&local_210->field_0x28 != (longlong *)0x0) {
        plVar28 = *(longlong **)&local_210->field_0x28;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    if (*(longlong *)local_208 != 0) {
      plVar28 = (longlong *)&local_208->field_0x10;
      if (*(longlong **)&local_208->field_0x28 != (longlong *)0x0) {
        plVar28 = *(longlong **)&local_208->field_0x28;
      }
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
  }
  return __return_storage_ptr__;
}

// AddResourceGetNode @ 14e178f60

UOptimusNode * __thiscall
UOptimusNodeGraph::AddResourceGetNode
          (UOptimusNodeGraph *this,UOptimusResourceDescription *param_1,TVector2<double> *param_2)

{
  UOptimusNode *pUVar1;
  UClass *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  UOptimusResourceDescription *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceGetNode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddResourceGetNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  local_20 = param_1;
  local_res10[0] = UOptimusNode_GetResource::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  pUVar1 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)local_res10,param_2,
                           (TFunction<void___cdecl(UOptimusNode_*)> *)local_38);
  return pUVar1;
}

// AddResourceNode @ 14e178fe0

UOptimusNode * __thiscall
UOptimusNodeGraph::AddResourceNode
          (UOptimusNodeGraph *this,UOptimusResourceDescription *param_1,TVector2<double> *param_2)

{
  UOptimusNode *pUVar1;
  UClass *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  UOptimusResourceDescription *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceNode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddResourceNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  local_20 = param_1;
  local_res10[0] = UOptimusNode_Resource::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  pUVar1 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)local_res10,param_2,
                           (TFunction<void___cdecl(UOptimusNode_*)> *)local_38);
  return pUVar1;
}

// AddResourceSetNode @ 14e179060

UOptimusNode * __thiscall
UOptimusNodeGraph::AddResourceSetNode
          (UOptimusNodeGraph *this,UOptimusResourceDescription *param_1,TVector2<double> *param_2)

{
  UOptimusNode *pUVar1;
  UClass *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  UOptimusResourceDescription *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceSetNode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddResourceSetNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  local_20 = param_1;
  local_res10[0] = UOptimusNode_SetResource::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  pUVar1 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)local_res10,param_2,
                           (TFunction<void___cdecl(UOptimusNode_*)> *)local_38);
  return pUVar1;
}

// AddValueNode @ 14e179780

UOptimusNode * __thiscall
UOptimusNodeGraph::AddValueNode
          (UOptimusNodeGraph *this,FOptimusDataTypeRef *param_1,TVector2<double> *param_2)

{
  void *pvVar1;
  UPackage *pUVar2;
  UOptimusNode *pUVar3;
  UClass *local_res10;
  undefined1 local_68 [48];
  TFunction<void___cdecl(UOptimusNode_*)> local_38;
  
  local_68._0_8_ = param_1->TypeName;
  local_68._8_8_ = *(undefined8 *)&(param_1->TypeObject).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_68 + 0x10),
             (FSoftObjectPath *)&(param_1->TypeObject).SoftObjectPtr.field_0x8);
  pUVar2 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  local_res10 = UOptimusNode_ConstantValueGeneratorClass::GetClassForType
                          (pUVar2,(FOptimusDataTypeRef *)local_68);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar3 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)&local_res10,param_2,&local_38);
  pvVar1 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return pUVar3;
}

// AddVariableGetNode @ 14e179ce0

UOptimusNode * __thiscall
UOptimusNodeGraph::AddVariableGetNode
          (UOptimusNodeGraph *this,UOptimusVariableDescription *param_1,TVector2<double> *param_2)

{
  UOptimusNode *pUVar1;
  UClass *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  UOptimusVariableDescription *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddVariableGetNode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddVariableGetNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  local_20 = param_1;
  local_res10[0] = UOptimusNode_GetVariable::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  pUVar1 = AddNodeInternal(this,(TSubclassOf<UOptimusNode>)local_res10,param_2,
                           (TFunction<void___cdecl(UOptimusNode_*)> *)local_38);
  return pUVar1;
}

// CollapseNodesToFunction @ 14e1833a0

UOptimusNode * __thiscall
UOptimusNodeGraph::CollapseNodesToFunction
          (UOptimusNodeGraph *this,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return (UOptimusNode *)0x0;
}

// CollapseNodesToSubGraph @ 14e1833b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e1849a6) */
/* WARNING: Removing unreachable block (ram,0x00014e1849b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UOptimusNode * __thiscall
UOptimusNodeGraph::CollapseNodesToSubGraph
          (UOptimusNodeGraph *this,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  int iVar4;
  int iVar5;
  UOptimusNodeSubGraph *pUVar6;
  UOptimusNodeLink *pUVar7;
  UOptimusNodePin *pUVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  FOptimusAction *pFVar12;
  FNameEntryId FVar13;
  FOptimusNodeGraphAction_AddNode *pFVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FOptimusNodeGraphAction_AddNode *pFVar17;
  bool bVar18;
  int iVar19;
  UClass *pUVar20;
  void *pvVar21;
  UOptimusNode *pUVar22;
  FOptimusNodeGraphAction_AddGraph *this_00;
  FString *pFVar23;
  FOptimusNodeGraphAction_AddGraph *pFVar24;
  UOptimusActionStack *pUVar25;
  UOptimusActionStack *pUVar26;
  UOptimusActionStack *pUVar27;
  FOptimusCompoundAction *pFVar28;
  TWeakPtr<FOptimusNodeGraphAction_AddNode,1> *pTVar29;
  TSharedPtr<FOptimusAction,1> *pTVar30;
  FName FVar31;
  FName *pFVar32;
  FName FVar33;
  longlong *plVar34;
  UOptimusDeformer *pUVar35;
  UOptimusActionStack *pUVar36;
  UObjectBaseUtility *pUVar37;
  int iVar38;
  longlong lVar39;
  ulonglong uVar40;
  uint uVar41;
  ForElementType<FSetElementId> FVar42;
  FScriptContainerElement *pFVar43;
  int iVar44;
  ForAnyElementType FVar45;
  FOptimusNodeGraphAction_AddNode *pFVar46;
  ulonglong uVar47;
  ForAnyElementType FVar48;
  FOptimusNodeGraphAction_AddNode *pFVar49;
  uint uVar50;
  TTuple<FString,FString> *pTVar51;
  FOptimusCompoundAction *this_01;
  UOptimusNodePin *pUVar52;
  FScriptContainerElement *pFVar53;
  longlong *plVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auStackY_a68 [32];
  longlong local_a18;
  uint local_a10;
  undefined1 local_a0c;
  undefined1 local_a0b;
  undefined1 local_a0a;
  undefined1 local_a09;
  undefined1 local_a08;
  undefined1 local_a07;
  undefined1 local_a06;
  undefined1 local_a05;
  undefined1 local_a04;
  undefined1 local_a03 [3];
  FName local_a00;
  ForAnyElementType local_9f8;
  undefined8 local_9f0;
  ForAnyElementType local_9e8;
  undefined8 local_9e0;
  ForAnyElementType local_9d8;
  undefined8 local_9d0;
  FString local_9c8;
  ForAnyElementType local_9b8;
  undefined8 local_9b0;
  ForAnyElementType local_9a8;
  undefined8 local_9a0;
  ForAnyElementType local_998;
  undefined8 local_990;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_988;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_978;
  UObjectBaseUtility *local_968;
  FName local_960;
  FName local_958;
  FOptimusNodeGraphAction_AddNode *local_950;
  FString local_948;
  FString local_938;
  FScriptContainerElement *local_928;
  int iStack_920;
  undefined4 uStack_91c;
  undefined1 local_918 [16];
  FString local_908;
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> local_8f8;
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> local_8e8;
  undefined1 local_8d8 [8];
  FName local_8d0;
  FName local_8c8;
  FName local_8c0;
  FOptimusNodeGraphAction_AddNode *local_8b8;
  FName local_8b0;
  FString local_8a8;
  FString local_898;
  TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> local_888;
  TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> local_878;
  FString local_868;
  FString local_858;
  undefined1 local_848 [12];
  undefined4 uStack_83c;
  undefined1 local_838 [12];
  undefined4 uStack_82c;
  undefined8 local_828;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  undefined1 local_7e0 [8];
  undefined1 local_7d8 [16];
  longlong *local_7c8;
  FName local_7c0;
  longlong *local_7b8;
  FName local_7b0;
  FName local_7a8;
  UClass *local_7a0;
  FName local_798;
  FName local_790;
  FName local_788;
  FName local_780;
  FOptimusActionScope local_778;
  FString local_770;
  TSharedPtr<FOptimusAction,1> local_760;
  TSharedPtr<FOptimusAction,1> local_750;
  TSharedPtr<FOptimusAction,1> local_740;
  TSharedPtr<FOptimusAction,1> local_730;
  TSharedPtr<FOptimusAction,1> local_720;
  TWeakPtr<FOptimusNodeGraphAction_AddNode,1> local_710;
  FString local_700;
  FString local_6f0;
  TSharedPtr<FOptimusAction,1> local_6e0;
  FString local_6d0;
  TSharedPtr<FOptimusAction,1> local_6c0;
  TSharedPtr<FOptimusAction,1> local_6b0;
  undefined1 local_698 [56];
  FOptimusDataDomain local_660;
  undefined2 local_620;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  undefined1 local_5a8 [56];
  FOptimusDataDomain local_570;
  undefined2 local_530;
  TArrayView<UOptimusNode_*_const,int> local_518;
  TSharedPtr<FOptimusDataType_const_,1> local_508;
  TSharedPtr<FOptimusDataType_const_,1> local_4f8;
  TSharedPtr<FOptimusDataType_const_,1> local_4e8;
  TSharedPtr<FOptimusDataType_const_,1> local_4d8;
  TSharedPtr<FOptimusDataType_const_,1> local_4c8;
  void *local_4b8 [2];
  FString local_4a8;
  TWeakPtr<FOptimusNodeGraphAction_AddNode,1> local_498;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  void *local_430 [2];
  FString local_420;
  FString local_410;
  FString local_400;
  void *local_3f0 [2];
  FString local_3e0;
  FString local_3d0;
  undefined1 local_3c0 [24];
  undefined1 local_3a8 [24];
  code *local_390;
  undefined8 local_380;
  void *local_378 [2];
  undefined1 local_368 [8];
  <lambda_6> local_360;
  undefined1 local_330 [48];
  undefined1 local_300 [56];
  code *local_2c8 [5];
  undefined8 *local_2a0;
  code *local_298 [5];
  undefined8 *local_270;
  code *local_268 [5];
  undefined8 *local_240;
  undefined1 local_238 [60];
  undefined4 local_1fc;
  undefined1 local_1f8 [16];
  TSharedPtr<FOptimusAction,1> local_1e8;
  TSet<UOptimusNode_*,DefaultKeyFuncs<UOptimusNode_*,0>,FDefaultSetAllocator> local_1d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_188;
  TSet<TTuple<UOptimusNodeLink_const_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>,FDefaultSetAllocator>
  local_138;
  TSet<TTuple<UOptimusNodeLink_const_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>,FDefaultSetAllocator>
  local_e8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_a68;
  pFVar43 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  local_a10 = 0;
  local_988.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar53 = pFVar43 + (longlong)iVar4 * 8;
  local_988.ArrayNum = 0;
  local_988.ArrayMax = 0;
  local_a00 = (FName)this;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_a03[0] = 0;
      `TCheckedPointerIterator<UOptimusNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_a03);
    }
    if (pFVar43 == pFVar53) break;
    pUVar37 = *(UObjectBaseUtility **)pFVar43;
    local_968 = pUVar37;
    if (pUVar37 == (UObjectBaseUtility *)0x0) {
LAB_14e18346a:
      if (((local_988.AllocatorInstance.Data <= (FScriptContainerElement *)&local_968) &&
          ((FScriptContainerElement *)&local_968 <
           local_988.AllocatorInstance.Data + (longlong)local_988.ArrayMax * 8)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar9 = (code *)swi(3);
        pUVar22 = (UOptimusNode *)(*pcVar9)();
        return pUVar22;
      }
      if (local_988.ArrayNum == local_988.ArrayMax) {
        local_988.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_988.AllocatorInstance,&local_988.ArrayMax);
      }
      lVar39 = (longlong)local_988.ArrayNum;
      local_988.ArrayNum = local_988.ArrayNum + 1;
      *(UObjectBaseUtility **)(local_988.AllocatorInstance.Data + lVar39 * 8) = local_968;
    }
    else {
      pUVar20 = UOptimusNonCollapsibleNode::GetPrivateStaticClass();
      pvVar21 = UObjectBaseUtility::GetInterfaceAddress(pUVar37,pUVar20);
      if (pvVar21 == (void *)0x0) goto LAB_14e18346a;
    }
    pFVar43 = pFVar43 + 8;
  }
  local_978.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.ArrayNum = 0;
  local_978.ArrayMax = 0;
  local_888.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_888.ArrayNum = 0;
  local_888.ArrayMax = 0;
  local_878.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_878.ArrayNum = 0;
  local_878.ArrayMax = 0;
  GatherRelatedObjects(&local_988,&local_978,&local_888,&local_878);
  local_928 = local_978.AllocatorInstance.Data;
  iStack_920 = local_978.ArrayNum;
  if ((local_978.ArrayNum < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    pUVar22 = (UOptimusNode *)(*pcVar9)();
    return pUVar22;
  }
  uStack_91c = local_1fc;
  local_518._12_4_ = local_1fc;
  local_518.ArrayNum = iStack_920;
  local_518.DataPtr = (UOptimusNode **)local_928;
  local_1d8.Elements._0_8_ = 0;
  local_1d8.Elements._8_8_ = 0;
  local_1d8.Elements._32_8_ = 0;
  local_1d8.Elements._40_4_ = 0;
  local_1d8.Elements._44_4_ = 0x80;
  local_1d8.Elements._48_4_ = 0xffffffff;
  local_1d8.Elements._52_4_ = 0;
  local_1d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1d8.HashSize = 0;
  TSet<UOptimusNode_*,DefaultKeyFuncs<UOptimusNode_*,0>,FDefaultSetAllocator>::Append
            (&local_1d8,&local_518);
  local_998.Data = (FScriptContainerElement *)0x0;
  local_990 = 0;
  local_9a8.Data = (FScriptContainerElement *)0x0;
  local_9a0 = 0;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  local_9b8.Data = (FScriptContainerElement *)0x0;
  local_9b0 = 0;
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  local_9e8.Data = (FScriptContainerElement *)0x0;
  local_9e0 = 0;
  local_9d8.Data = (FScriptContainerElement *)0x0;
  local_9d0 = 0;
  local_188.Elements._0_8_ = 0;
  local_188.Elements._8_8_ = 0;
  local_188.Elements._32_8_ = 0;
  local_188.Elements._40_4_ = 0;
  local_188.Elements._44_4_ = 0x80;
  local_188.Elements._48_4_ = 0xffffffff;
  local_188.Elements._52_4_ = 0;
  local_188.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_188.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&local_188,(FName *)local_7e0,
             (bool *)&UOptimusNodeSubGraph::GraphDefaultComponentPinName);
  pFVar53 = (((TArray<TObjectPtr<UOptimusNodeLink>,TSizedDefaultAllocator<32>_> *)
             ((longlong)local_a00 + 0x48))->AllocatorInstance).Data;
  iVar4 = *(int *)((longlong)local_a00 + 0x50);
  local_950 = (FOptimusNodeGraphAction_AddNode *)(pFVar53 + (longlong)iVar4 * 8);
  FVar33 = local_a00;
  while( true ) {
    pFVar46 = local_950;
    pFVar24 = (FOptimusNodeGraphAction_AddGraph *)0x0;
    if (*(int *)((longlong)FVar33 + 0x50) != iVar4) {
      local_a0c = 0;
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodeLink>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a0c);
    }
    iVar19 = -1;
    if ((FOptimusNodeGraphAction_AddNode *)pFVar53 == pFVar46) break;
    local_a18 = *(longlong *)pFVar53;
    pUVar22 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(local_a18 + 0x30));
    uVar41 = ((uint)((ulonglong)pUVar22 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar22 >> 4)) *
             -0x7a143595;
    uVar41 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
    iVar44 = iVar19;
    if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
      FVar42 = (ForElementType<FSetElementId>)&local_1d8.Hash;
      if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar42 = local_1d8.Hash.SecondaryData;
      }
      iVar38 = *(int *)((longlong)FVar42 +
                       (ulonglong)(local_1d8.HashSize - 1U & (uVar41 >> 0x10 ^ uVar41)) * 4);
      while ((iVar44 = iVar19, iVar38 != -1 &&
             (iVar44 = iVar38,
             *(UOptimusNode **)(local_1d8.Elements._0_8_ + (longlong)iVar38 * 0x10) != pUVar22))) {
        iVar38 = *(int *)(local_1d8.Elements._0_8_ + 8 + (longlong)iVar38 * 0x10);
      }
    }
    pUVar22 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(local_a18 + 0x28));
    uVar41 = ((uint)((ulonglong)pUVar22 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar22 >> 4)) *
             -0x7a143595;
    uVar41 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
    iVar38 = iVar19;
    if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
      FVar42 = (ForElementType<FSetElementId>)&local_1d8.Hash;
      if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar42 = local_1d8.Hash.SecondaryData;
      }
      iVar5 = *(int *)((longlong)FVar42 +
                      (ulonglong)(local_1d8.HashSize - 1U & (uVar41 >> 0x10 ^ uVar41)) * 4);
      while ((iVar38 = iVar19, iVar5 != -1 &&
             (iVar38 = iVar5,
             *(UOptimusNode **)(local_1d8.Elements._0_8_ + (longlong)iVar5 * 0x10) != pUVar22))) {
        iVar5 = *(int *)(local_1d8.Elements._0_8_ + 8 + (longlong)iVar5 * 0x10);
      }
    }
    if (iVar44 == -1) {
      if (iVar38 != -1) {
        if (((local_9b8.Data <= (FScriptContainerElement *)&local_a18) &&
            ((FScriptContainerElement *)&local_a18 < local_9b8.Data + (longlong)local_9b0._4_4_ * 8)
            ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
          pcVar9 = (code *)swi(3);
          pUVar22 = (UOptimusNode *)(*pcVar9)();
          return pUVar22;
        }
        iVar19 = (uint)local_9b0;
        if ((uint)local_9b0 == local_9b0._4_4_) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_9b8,(int *)((longlong)&local_9b0 + 4));
        }
        local_9b0 = CONCAT44(local_9b0._4_4_,iVar19 + 1);
        local_4d8.Object = (FOptimusDataType *)0x0;
        local_4d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        *(longlong *)(local_9b8.Data + (longlong)iVar19 * 8) = local_a18;
        lVar39 = *(longlong *)(local_a18 + 0x28);
        local_5a8._0_4_ = 0;
        local_5a8._4_4_ = 0;
        FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)(local_5a8 + 8),&local_4d8);
        FOptimusDataDomain::FOptimusDataDomain(&local_570);
        local_530._0_1_ = false;
        local_530._1_1_ = false;
        FVar33 = *(FName *)(lVar39 + 0x18);
        local_8c8.ComparisonIndex = FVar33.ComparisonIndex.Value;
        FVar13.Value = local_8c8.ComparisonIndex.Value;
        uVar47 = (ulonglong)FVar33 >> 0x20;
        local_8c8 = FVar33;
        local_8c0 = FVar33;
        uVar41 = ::GetTypeHash(FVar13);
        iVar19 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FindIndexByHash<FName>
                           (&local_188,FVar33.Number + uVar41,&local_8c0);
        while (iVar19 != -1) {
          uVar50 = (int)uVar47 + 1;
          local_8c8.Number = uVar50;
          FVar33 = local_8c8;
          uVar47 = (ulonglong)uVar50;
          local_8c0 = local_8c8;
          uVar41 = ::GetTypeHash(FVar13);
          iVar19 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FindIndexByHash<FName>
                             (&local_188,uVar50 + uVar41,&local_8c0);
        }
        local_5a8._0_8_ = FVar33;
        FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(lVar39 + 0x70),&local_4c8);
        FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_300,&local_4c8);
        local_5a8._8_8_ = local_300._0_8_;
        TPersistentObjectPtr<FSoftObjectPath>::operator=
                  ((TPersistentObjectPtr<FSoftObjectPath> *)(local_5a8 + 0x10),
                   (TPersistentObjectPtr<FSoftObjectPath> *)(local_300 + 8));
        if ((void *)local_300._32_8_ != (void *)0x0) {
          FMemory::Free((void *)local_300._32_8_);
        }
        local_570.Type = *(EOptimusDataDomainType *)(lVar39 + 0x30);
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&local_570.DimensionNames,
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar39 + 0x38));
        local_570.Multiplier = *(int *)(lVar39 + 0x48);
        ::FString::operator=(&local_570.Expression,(FString *)(lVar39 + 0x50));
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&local_570.LevelNames_DEPRECATED,
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar39 + 0x60));
        if (((local_9d8.Data <= (FOptimusParameterBinding *)local_5a8) &&
            ((FScriptContainerElement *)local_5a8 <
             local_9d8.Data + (longlong)local_9d0._4_4_ * 0x80)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          pUVar22 = (UOptimusNode *)(*pcVar9)();
          return pUVar22;
        }
        iVar19 = (int)local_9d0;
        if ((int)local_9d0 == local_9d0._4_4_) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,&local_9d8,(int *)((longlong)&local_9d0 + 4));
        }
        local_9d0 = CONCAT44(local_9d0._4_4_,iVar19 + 1);
        FOptimusParameterBinding::FOptimusParameterBinding
                  ((FOptimusParameterBinding *)(local_9d8.Data + (longlong)iVar19 * 0x80),
                   (FOptimusParameterBinding *)local_5a8);
        local_7c0.ComparisonIndex.Value = local_5a8._0_4_;
        local_7c0.Number = local_5a8._4_4_;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (&local_188,(FName *)local_7d8,(bool *)&local_7c0);
        uVar15 = local_5a8._0_8_;
        local_7b8 = &local_a18;
        TSet<TTuple<UOptimusNodeLink_const_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<UOptimusNodeLink_const_*_const_&>_>
                  (&local_138,(TKeyInitializer<UOptimusNodeLink_const_*_const_&> *)(local_8d8 + 4),
                   (bool *)&local_7b8);
        uVar16 = local_5a8._0_8_;
        pFVar32 = (FName *)(local_138.Elements._0_8_ + 8 + (longlong)(int)local_8d8._4_4_ * 0x18);
        local_5a8._0_4_ = (undefined4)uVar15;
        local_5a8._4_4_ = SUB84(uVar15,4);
        pFVar32->ComparisonIndex = (FNameEntryId)local_5a8._0_4_;
        pFVar32->Number = local_5a8._4_4_;
        local_5a8._0_8_ = uVar16;
        FOptimusDataDomain::~FOptimusDataDomain(&local_570);
        pvVar21 = (void *)local_5a8._40_8_;
        goto LAB_14e184027;
      }
LAB_14e18403e:
      pFVar53 = pFVar53 + 8;
    }
    else {
      if (iVar38 == -1) {
        if (((local_9a8.Data <= (FScriptContainerElement *)&local_a18) &&
            ((FScriptContainerElement *)&local_a18 < local_9a8.Data + (longlong)local_9a0._4_4_ * 8)
            ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
          pcVar9 = (code *)swi(3);
          pUVar22 = (UOptimusNode *)(*pcVar9)();
          return pUVar22;
        }
        iVar19 = (uint)local_9a0;
        if ((uint)local_9a0 == local_9a0._4_4_) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_9a8,(int *)((longlong)&local_9a0 + 4));
        }
        local_9a0 = CONCAT44(local_9a0._4_4_,iVar19 + 1);
        local_508.Object = (FOptimusDataType *)0x0;
        local_508.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        *(longlong *)(local_9a8.Data + (longlong)iVar19 * 8) = local_a18;
        lVar39 = *(longlong *)(local_a18 + 0x30);
        local_698._0_4_ = 0;
        local_698._4_4_ = 0;
        FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)(local_698 + 8),&local_508);
        FOptimusDataDomain::FOptimusDataDomain(&local_660);
        local_620._0_1_ = false;
        local_620._1_1_ = false;
        FVar33 = *(FName *)(lVar39 + 0x18);
        local_8d0.ComparisonIndex = FVar33.ComparisonIndex.Value;
        FVar13.Value = local_8d0.ComparisonIndex.Value;
        uVar47 = (ulonglong)FVar33 >> 0x20;
        local_8d0 = FVar33;
        local_8b0 = FVar33;
        uVar41 = ::GetTypeHash(FVar13);
        iVar19 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FindIndexByHash<FName>
                           (&local_188,FVar33.Number + uVar41,&local_8b0);
        while (iVar19 != -1) {
          uVar50 = (int)uVar47 + 1;
          local_8d0.Number = uVar50;
          FVar33 = local_8d0;
          uVar47 = (ulonglong)uVar50;
          local_8b0 = local_8d0;
          uVar41 = ::GetTypeHash(FVar13);
          iVar19 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FindIndexByHash<FName>
                             (&local_188,uVar50 + uVar41,&local_8b0);
        }
        local_698._0_8_ = FVar33;
        if (*(char *)(lVar39 + 0x28) == '\0') {
          FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(lVar39 + 0x70),&local_4f8);
          FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_330,&local_4f8);
          local_698._8_8_ = local_330._0_8_;
          TPersistentObjectPtr<FSoftObjectPath>::operator=
                    ((TPersistentObjectPtr<FSoftObjectPath> *)(local_698 + 0x10),
                     (TPersistentObjectPtr<FSoftObjectPath> *)(local_330 + 8));
          if ((void *)local_330._32_8_ != (void *)0x0) {
            FMemory::Free((void *)local_330._32_8_);
          }
        }
        else {
          FOptimusDataTypeRef::Resolve
                    ((FOptimusDataTypeRef *)(*(longlong *)(local_a18 + 0x28) + 0x70),&local_4e8);
          FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_238,&local_4e8);
          local_698._8_8_ = local_238._0_8_;
          TPersistentObjectPtr<FSoftObjectPath>::operator=
                    ((TPersistentObjectPtr<FSoftObjectPath> *)(local_698 + 0x10),
                     (TPersistentObjectPtr<FSoftObjectPath> *)(local_238 + 8));
          if ((void *)local_238._32_8_ != (void *)0x0) {
            FMemory::Free((void *)local_238._32_8_);
          }
          lVar39 = *(longlong *)(local_a18 + 0x28);
        }
        local_660.Type = *(EOptimusDataDomainType *)(lVar39 + 0x30);
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&local_660.DimensionNames,
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar39 + 0x38));
        local_660.Multiplier = *(int *)(lVar39 + 0x48);
        ::FString::operator=(&local_660.Expression,(FString *)(lVar39 + 0x50));
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&local_660.LevelNames_DEPRECATED,
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar39 + 0x60));
        if (((local_9e8.Data <= (FOptimusParameterBinding *)local_698) &&
            ((FScriptContainerElement *)local_698 <
             local_9e8.Data + (longlong)local_9e0._4_4_ * 0x80)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          pUVar22 = (UOptimusNode *)(*pcVar9)();
          return pUVar22;
        }
        iVar19 = (int)local_9e0;
        if ((int)local_9e0 == local_9e0._4_4_) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,&local_9e8,(int *)((longlong)&local_9e0 + 4));
        }
        local_9e0 = CONCAT44(local_9e0._4_4_,iVar19 + 1);
        FOptimusParameterBinding::FOptimusParameterBinding
                  ((FOptimusParameterBinding *)(local_9e8.Data + (longlong)iVar19 * 0x80),
                   (FOptimusParameterBinding *)local_698);
        local_7d8._4_8_ = local_698._0_8_;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (&local_188,(FName *)(local_7e0 + 4),(bool *)(local_7d8 + 4));
        uVar15 = local_698._0_8_;
        local_7c8 = &local_a18;
        TSet<TTuple<UOptimusNodeLink_const_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<UOptimusNodeLink_const_*_const_&>_>
                  (&local_e8,(TKeyInitializer<UOptimusNodeLink_const_*_const_&> *)local_8d8,
                   (bool *)&local_7c8);
        uVar16 = local_698._0_8_;
        pFVar32 = (FName *)(local_e8.Elements._0_8_ + 8 + (longlong)(int)local_8d8._0_4_ * 0x18);
        local_698._0_4_ = (undefined4)uVar15;
        local_698._4_4_ = SUB84(uVar15,4);
        pFVar32->ComparisonIndex = (FNameEntryId)local_698._0_4_;
        pFVar32->Number = local_698._4_4_;
        local_698._0_8_ = uVar16;
        FOptimusDataDomain::~FOptimusDataDomain(&local_660);
        pvVar21 = (void *)local_698._40_8_;
LAB_14e184027:
        FVar33 = local_a00;
        if (pvVar21 != (void *)0x0) {
          FMemory::Free(pvVar21);
          FVar33 = local_a00;
        }
        goto LAB_14e18403e;
      }
      if (((local_998.Data <= (FScriptContainerElement *)&local_a18) &&
          ((FScriptContainerElement *)&local_a18 < local_998.Data + (longlong)local_990._4_4_ * 8))
         && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar18)) {
        pcVar9 = (code *)swi(3);
        pUVar22 = (UOptimusNode *)(*pcVar9)();
        return pUVar22;
      }
      iVar19 = (int)local_990;
      if ((int)local_990 == local_990._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_998,(int *)((longlong)&local_990 + 4));
      }
      local_990 = CONCAT44(local_990._4_4_,iVar19 + 1);
      pFVar53 = pFVar53 + 8;
      *(longlong *)(local_998.Data + (longlong)iVar19 * 8) = local_a18;
    }
  }
  local_710.Object = (FOptimusNodeGraphAction_AddNode *)0x0;
  local_710.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_5e8,L"Collapse Nodes to Sub-graph");
  local_778.ActionStack = GetActionStack((UOptimusNodeGraph *)FVar33);
  UOptimusActionStack::OpenActionScope(local_778.ActionStack,&local_5e8);
  if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
  }
  local_960 = DefaultSubGraphName;
  local_960 = Optimus::GetUniqueNameForScope((UObject *)local_3c0,FVar33);
  local_960 = *(FName *)local_960;
  this_00 = ::operator_new(0x80);
  uVar41 = local_a10;
  if (this_00 != (FOptimusNodeGraphAction_AddGraph *)0x0) {
    local_8f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<FOptimusParameterBinding,int>
              (&local_8f8,(FOptimusParameterBinding *)local_9e8.Data,(int)local_9e0,0);
    local_8e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<FOptimusParameterBinding,int>
              (&local_8e8,(FOptimusParameterBinding *)local_9d8.Data,(int)local_9d0,0);
    local_2c8[0] = (code *)0x0;
    local_2a0 = FMemory::Malloc(0x28,8);
    FVar31 = local_960;
    local_2a0[1] = 0;
    *local_2a0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::`30'::<lambda_2>,0,1>
                  ::_vftable_;
    local_2a0[1] = local_8f8.AllocatorInstance.Data;
    local_8f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_2a0 + 2) = local_8f8.ArrayNum;
    *(int *)((longlong)local_2a0 + 0x14) = local_8f8.ArrayMax;
    local_8f8.ArrayNum = 0;
    local_8f8.ArrayMax = 0;
    local_2a0[3] = 0;
    local_2a0[3] = local_8e8.AllocatorInstance.Data;
    local_8e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_2a0 + 4) = local_8e8.ArrayNum;
    *(int *)((longlong)local_2a0 + 0x24) = local_8e8.ArrayMax;
    local_8e8.ArrayNum = 0;
    local_8e8.ArrayMax = 0;
    if (local_2a0 + 1 != (undefined8 *)0x0) {
      local_2c8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_2>,bool,UOptimusNodeGraph_*>
                     ::Call;
    }
    local_a10 = 3;
    pFVar23 = (FString *)
              (**(code **)(*(longlong *)((longlong)FVar33 + 0x28) + 0x20))
                        ((longlong)FVar33 + 0x28,local_4b8);
    pFVar24 = FOptimusNodeGraphAction_AddGraph::FOptimusNodeGraphAction_AddGraph
                        (this_00,pFVar23,SubGraph,FVar31,-1,
                         (TFunction<bool___cdecl(UOptimusNodeGraph_*)> *)local_2c8);
    uVar41 = 3;
  }
  if (((uVar41 & 2) != 0) &&
     (uVar41 = uVar41 & 0xfffffffd, local_a10 = uVar41, local_4b8[0] != (void *)0x0)) {
    FMemory::Free(local_4b8[0]);
  }
  if ((uVar41 & 1) != 0) {
    local_a10 = uVar41 & 0xfffffffe;
    `UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_2>::~<lambda_2>(&local_8f8);
  }
  pUVar25 = GetActionStack((UOptimusNodeGraph *)FVar33);
  UOptimusActionStack::RunAction(pUVar25,(FOptimusAction *)pFVar24);
  pFVar23 = ::FName::ToString(&local_960,&local_4a8);
  ConstructSubGraphPath((UOptimusNodeGraph *)FVar33,&local_9c8,pFVar23);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  iVar4 = local_978.ArrayNum;
  uVar47 = (ulonglong)local_978.ArrayNum;
  local_828 = 0;
  _local_848 = ZEXT816(0);
  pFVar53 = local_978.AllocatorInstance.Data + uVar47 * 8;
  bVar18 = false;
  auVar57 = ZEXT816(0);
  _local_838 = ZEXT816(0);
  FVar45.Data = local_978.AllocatorInstance.Data;
  uVar55 = 0;
  uVar56 = 0;
  uVar59 = 0;
  uVar60 = 0;
  uVar61 = 0;
  uVar62 = 0;
  uVar63 = 0;
  uVar64 = 0;
  while( true ) {
    if ((int)uVar47 != iVar4) {
      local_a0b = 0;
      `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_a0b);
      uVar47 = local_978._8_8_ & 0xffffffff;
    }
    if (FVar45.Data == pFVar53) break;
    local_1f8 = *(undefined1 (*) [16])(*(longlong *)FVar45.Data + 0x40);
    local_838._0_4_ = local_1f8._0_4_;
    local_838._4_4_ = local_1f8._4_4_;
    uVar55 = local_1f8._8_4_;
    uVar56 = local_1f8._12_4_;
    dVar10 = local_1f8._8_8_;
    if (bVar18 == false) {
      auVar11._4_8_ = auVar57._8_8_;
      auVar11._0_4_ = local_838._4_4_;
      auVar58._0_8_ = auVar11._0_8_ << 0x20;
      auVar58._8_4_ = uVar55;
      auVar58._12_4_ = uVar56;
      auVar57._8_8_ = dVar10;
      auVar57._0_8_ = auVar58._8_8_;
      bVar18 = true;
      FVar45.Data = FVar45.Data + 8;
      uVar59 = uVar55;
      uVar60 = uVar56;
      uVar61 = local_838._0_4_;
      uVar62 = local_838._4_4_;
      uVar63 = local_838._0_4_;
      uVar64 = local_838._4_4_;
      _local_848 = local_1f8;
      _local_838 = local_1f8;
    }
    else {
      local_848._0_4_ = local_838._0_4_;
      local_848._4_4_ = local_838._4_4_;
      if ((double)CONCAT44(uVar64,uVar63) <= local_1f8._0_8_) {
        local_848._0_4_ = uVar63;
        local_848._4_4_ = uVar64;
      }
      if (local_1f8._0_8_ <= (double)CONCAT44(uVar62,uVar61)) {
        local_838._0_4_ = uVar61;
        local_838._4_4_ = uVar62;
      }
      FVar45.Data = FVar45.Data + 8;
      local_848._8_4_ = uVar55;
      uStack_83c = uVar56;
      if ((double)CONCAT44(uVar60,uVar59) <= dVar10) {
        local_848._8_4_ = uVar59;
        uStack_83c = uVar60;
      }
      local_838._8_4_ = uVar55;
      uStack_82c = uVar56;
      if (dVar10 <= auVar57._0_8_) {
        local_838._8_4_ = auVar57._0_4_;
        uStack_82c = auVar57._4_4_;
      }
      auVar57._4_4_ = uStack_82c;
      auVar57._0_4_ = local_838._8_4_;
      auVar57._8_4_ = uVar55;
      auVar57._12_4_ = uVar56;
      uVar55 = local_838._8_4_;
      uVar56 = uStack_82c;
      uVar59 = local_848._8_4_;
      uVar60 = uStack_83c;
      uVar61 = local_838._0_4_;
      uVar62 = local_838._4_4_;
      uVar63 = local_848._0_4_;
      uVar64 = local_848._4_4_;
    }
  }
  local_828._0_1_ = bVar18;
  pUVar26 = GetActionStack((UOptimusNodeGraph *)FVar33);
  pUVar20 = UOptimusNode_GraphTerminal::StaticClass();
  pUVar27 = ::operator_new(0xa0);
  pUVar25 = _UNK_150651568;
  pFVar12 = ___xmm_00000000000000000000000000000010;
  if (pUVar27 == (UOptimusActionStack *)0x0) {
    pUVar27 = (UOptimusActionStack *)0x0;
    local_740.Object = ___xmm_00000000000000000000000000000010;
    local_740.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(atomic<int> *)&pUVar27->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pUVar27->_padding_)[1] = (atomic<int>)0x1;
    pUVar27->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_298[0] = (code *)0x0;
    local_270 = FMemory::Malloc(0x30,8);
    *(undefined4 *)(local_270 + 1) = uVar63;
    *(undefined4 *)((longlong)local_270 + 0xc) = uVar64;
    *(undefined4 *)(local_270 + 2) = uVar59;
    *(undefined4 *)((longlong)local_270 + 0x14) = uVar60;
    *local_270 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::`30'::<lambda_3>,0,1>
                  ::_vftable_;
    *(undefined4 *)(local_270 + 3) = uVar61;
    *(undefined4 *)((longlong)local_270 + 0x1c) = uVar62;
    *(undefined4 *)(local_270 + 4) = uVar55;
    *(undefined4 *)((longlong)local_270 + 0x24) = uVar56;
    local_270[5] = local_828;
    if (local_270 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_298[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_3>,bool,UOptimusNode_*>
                     ::Call;
    }
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)&pUVar27->_padding_,&local_9c8,pUVar20,
               UOptimusNode_GraphTerminal::EntryNodeName,
               (TFunction<bool___cdecl(UOptimusNode_*)> *)local_298);
    local_740.Object = (FOptimusAction *)&pUVar27->_padding_;
    if ((local_740.Object == (FOptimusAction *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar18)) {
      pcVar9 = (code *)swi(3);
      pUVar22 = (UOptimusNode *)(*pcVar9)();
      return pUVar22;
    }
    LOCK();
    *(atomic<int> *)&pUVar27->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pUVar27->_padding_ + 1);
    UNLOCK();
    local_740.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar27;
  }
  UOptimusActionStack::RunAction(pUVar26,&local_740);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar27);
  pUVar26 = GetActionStack((UOptimusNodeGraph *)FVar33);
  pUVar20 = UOptimusNode_GraphTerminal::StaticClass();
  pUVar27 = ::operator_new(0xa0);
  if (pUVar27 == (UOptimusActionStack *)0x0) {
    pUVar27 = (UOptimusActionStack *)0x0;
    local_730.Object = pFVar12;
    local_730.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar25;
  }
  else {
    *(atomic<int> *)&pUVar27->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pUVar27->_padding_)[1] = (atomic<int>)0x1;
    pUVar27->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_268[0] = (code *)0x0;
    local_240 = FMemory::Malloc(0x30,8);
    *(undefined4 *)(local_240 + 1) = uVar63;
    *(undefined4 *)((longlong)local_240 + 0xc) = uVar64;
    *(undefined4 *)(local_240 + 2) = uVar59;
    *(undefined4 *)((longlong)local_240 + 0x14) = uVar60;
    *local_240 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::`30'::<lambda_4>,0,1>
                  ::_vftable_;
    *(undefined4 *)(local_240 + 3) = uVar61;
    *(undefined4 *)((longlong)local_240 + 0x1c) = uVar62;
    *(undefined4 *)(local_240 + 4) = uVar55;
    *(undefined4 *)((longlong)local_240 + 0x24) = uVar56;
    local_240[5] = local_828;
    if (local_240 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_268[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_4>,bool,UOptimusNode_*>
                     ::Call;
    }
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)&pUVar27->_padding_,&local_9c8,pUVar20,
               UOptimusNode_GraphTerminal::ReturnNodeName,
               (TFunction<bool___cdecl(UOptimusNode_*)> *)local_268);
    local_730.Object = (FOptimusAction *)&pUVar27->_padding_;
    if ((local_730.Object == (FOptimusAction *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar18)) {
      pcVar9 = (code *)swi(3);
      pUVar22 = (UOptimusNode *)(*pcVar9)();
      return pUVar22;
    }
    LOCK();
    *(atomic<int> *)&pUVar27->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pUVar27->_padding_ + 1);
    UNLOCK();
    local_730.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar27;
  }
  UOptimusActionStack::RunAction(pUVar26,&local_730);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar27);
  FVar33 = local_a00;
  iVar4 = local_878.ArrayNum;
  uVar47 = (ulonglong)local_878.ArrayNum;
  pFVar53 = local_878.AllocatorInstance.Data + uVar47 * 8;
  FVar45.Data = local_878.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar47 != iVar4) {
      local_a0a = 0;
      `TCheckedPointerIterator<UOptimusNodeSubGraph_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a0a);
    }
    if (FVar45.Data == pFVar53) break;
    pUVar6 = *(UOptimusNodeSubGraph **)FVar45.Data;
    FVar31 = (FName)pUVar6->_padding_;
    pUVar26 = GetActionStack((UOptimusNodeGraph *)FVar33);
    DuplicateSubGraph(pUVar26,&local_9c8,pUVar6,FVar31);
    uVar47 = local_878._8_8_ & 0xffffffff;
    FVar45.Data = FVar45.Data + 8;
  }
  iVar4 = local_978.ArrayNum;
  uVar47 = (ulonglong)local_978.ArrayNum;
  pFVar53 = local_978.AllocatorInstance.Data + uVar47 * 8;
  FVar45.Data = local_978.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar47 != iVar4) {
      local_a09 = 0;
      `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_a09);
    }
    if (FVar45.Data == pFVar53) break;
    pUVar22 = *(UOptimusNode **)FVar45.Data;
    pUVar26 = GetActionStack((UOptimusNodeGraph *)local_a00);
    FVar33 = (FName)pUVar22->_padding_;
    pUVar27 = ::operator_new(0xb0);
    if (pUVar27 == (UOptimusActionStack *)0x0) {
      pUVar27 = (UOptimusActionStack *)0x0;
      local_720.Object = pFVar12;
      local_720.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar25;
    }
    else {
      *(atomic<int> *)&pUVar27->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pUVar27->_padding_)[1] = (atomic<int>)0x1;
      pUVar27->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_DuplicateNode___00_SharedPointerInternals__6B_
      ;
      local_380 = 0;
      local_3a8._16_8_ =
           &
           ___7__TFunction_OwnedObject_P6A_NPEAVUOptimusNode___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_390 = `UOptimusNodeGraph::CollapseNodesToSubGraph'::__l42::<lambda_5>::
                  <lambda_invoker_cdecl>;
      local_3a8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UOptimusNode_*),bool,UOptimusNode_*>::Call;
      FOptimusNodeGraphAction_DuplicateNode::FOptimusNodeGraphAction_DuplicateNode
                ((FOptimusNodeGraphAction_DuplicateNode *)&pUVar27->_padding_,&local_9c8,pUVar22,
                 FVar33,(TFunction<bool___cdecl(UOptimusNode_*)> *)local_3a8);
      if ((&pUVar27->_padding_ == (longlong *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        pUVar22 = (UOptimusNode *)(*pcVar9)();
        return pUVar22;
      }
      LOCK();
      *(atomic<int> *)&pUVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar27->_padding_ + 1);
      UNLOCK();
      local_720.Object = (FOptimusAction *)&pUVar27->_padding_;
      local_720.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar27;
    }
    UOptimusActionStack::RunAction(pUVar26,&local_720);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar27);
    uVar47 = local_978._8_8_ & 0xffffffff;
    FVar45.Data = FVar45.Data + 8;
  }
  iVar4 = local_888.ArrayNum;
  uVar47 = (ulonglong)local_888.ArrayNum;
  this_01 = (FOptimusCompoundAction *)0x0;
  local_9f8.Data = (FScriptContainerElement *)0x0;
  local_9f0 = 0;
  pFVar53 = local_888.AllocatorInstance.Data + uVar47 * 8;
  FVar45.Data = local_888.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar47 != iVar4) {
      local_a04 = 0;
      `TCheckedPointerIterator<UOptimusNodePair_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_a04);
    }
    FVar33 = local_a00;
    if (FVar45.Data == pFVar53) break;
    local_800.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_800.Data.ArrayNum = 0;
    local_800.Data.ArrayMax = 0;
    lVar39 = *(longlong *)(*(longlong *)FVar45.Data + 0x30);
    local_7b0 = *(FName *)(*(longlong *)(*(longlong *)FVar45.Data + 0x28) + 0x18);
    ::FName::ToString(&local_7b0,&local_5d8);
    ConstructPath(&local_618,&local_9c8,&local_5d8,&local_800);
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
    if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_800.Data.AllocatorInstance.Data);
    }
    local_7a8 = *(FName *)(lVar39 + 0x18);
    local_7f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7f0.Data.ArrayNum = 0;
    local_7f0.Data.ArrayMax = 0;
    ::FName::ToString(&local_7a8,&local_5c8);
    ConstructPath(&local_5b8,&local_9c8,&local_5c8,&local_7f0);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
    if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
    }
    ::FString::FString((FString *)local_918,&local_618);
    ::FString::FString(&local_908,&local_5b8);
    if (((local_9f8.Data <= (TTuple<FString,FString> *)local_918) &&
        ((FScriptContainerElement *)local_918 < local_9f8.Data + (longlong)local_9f0._4_4_ * 0x20))
       && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar18)) {
      pcVar9 = (code *)swi(3);
      pUVar22 = (UOptimusNode *)(*pcVar9)();
      return pUVar22;
    }
    if ((int)local_9f0 == local_9f0._4_4_) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_9f8,(int *)((longlong)&local_9f0 + 4));
      pFVar43 = local_9f8.Data + (longlong)iVar19 * 0x20;
      local_9f0 = CONCAT44(local_9f0._4_4_,iVar19 + 1);
    }
    else {
      pFVar43 = local_9f8.Data + (longlong)(int)local_9f0 * 0x20;
      local_9f0 = CONCAT44(local_9f0._4_4_,(int)local_9f0 + 1);
    }
    *(undefined8 *)pFVar43 = 0;
    *(undefined8 *)pFVar43 = local_918._0_8_;
    *(undefined4 *)(pFVar43 + 8) = local_918._8_4_;
    *(undefined4 *)(pFVar43 + 0xc) = local_918._12_4_;
    *(undefined8 *)(pFVar43 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar43 + 0x10) = local_908.Data.AllocatorInstance.Data;
    *(int *)(pFVar43 + 0x18) = local_908.Data.ArrayNum;
    *(int *)(pFVar43 + 0x1c) = local_908.Data.ArrayMax;
    local_908.Data.ArrayNum = 0;
    local_908.Data.ArrayMax = 0;
    local_908.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_918._8_8_ = 0;
    local_918._0_8_ = (FScriptContainerElement *)0x0;
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
    if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.Data.AllocatorInstance.Data);
    }
    uVar47 = local_888._8_8_ & 0xffffffff;
    FVar45.Data = FVar45.Data + 8;
  }
  iVar4 = (int)local_9f0;
  pTVar51 = (TTuple<FString,FString> *)(local_9f8.Data + (longlong)(int)local_9f0 * 0x20);
  FVar45.Data = local_9f8.Data;
  while( true ) {
    if ((int)local_9f0 != iVar4) {
      local_a08 = 0;
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a08);
    }
    if ((TTuple<FString,FString> *)FVar45.Data == pTVar51) break;
    pUVar26 = GetActionStack((UOptimusNodeGraph *)FVar33);
    UOptimusActionStack::
    RunAction<FOptimusNodeGraphAction_AddNodePair,FString_const_&,FString_const_&>
              (pUVar26,(FString *)FVar45.Data,
               (FString *)&((TTuple<FString,FString> *)FVar45.Data)->field_0x10);
    FVar45.Data = FVar45.Data + 0x20;
  }
  local_958 = DefaultSubGraphRefNodeName;
  local_958 = Optimus::GetUniqueNameForScope((UObject *)local_368,FVar33);
  local_958 = *(FName *)local_958;
  pFVar28 = ::operator_new(0x28);
  if (pFVar28 != (FOptimusCompoundAction *)0x0) {
    pFVar28->_padding_ = (longlong)&___7FOptimusAction__6B_;
    pFVar28->_padding_ = 0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar28->_padding_,(wchar_t *)0x0,0,0
              );
    pFVar28->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    (pFVar28->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->SubActions).ArrayNum = 0;
    (pFVar28->SubActions).ArrayMax = 0;
    this_01 = pFVar28;
  }
  local_360.SubGraphName = local_960;
  local_360.NodeBox.Min.field0_0x0._s_0.X = (double)local_848._0_8_;
  local_360.NodeBox.Min.field0_0x0._s_0.Y = stack0xfffffffffffff7c0;
  local_360.NodeBox.bIsValid = local_828._0_1_;
  local_360.NodeBox._33_7_ = local_828._1_7_;
  local_360.NodeBox.Max.field0_0x0._s_0.X = (double)local_838._0_8_;
  local_360.NodeBox.Max.field0_0x0._s_0.Y = stack0xfffffffffffff7d0;
  local_7a0 = UOptimusNode_SubGraphReference::StaticClass();
  pFVar23 = (FString *)
            (**(code **)(*(longlong *)((longlong)FVar33 + 0x28) + 0x20))
                      ((longlong *)((longlong)FVar33 + 0x28),local_378);
  pTVar29 = FOptimusCompoundAction::
            AddSubAction<FOptimusNodeGraphAction_AddNode,FString,UClass_*,FName_&,_UOptimusNodeGraph::CollapseNodesToSubGraph_::__l51::<lambda_6>_>
                      (this_01,&local_498,pFVar23,&local_7a0,&local_958,&local_360);
  if (&local_710 == pTVar29) {
    local_950 = local_710.Object;
    local_8b8 = (FOptimusNodeGraphAction_AddNode *)local_710.WeakReferenceCount.ReferenceController;
  }
  else {
    local_950 = pTVar29->Object;
    local_8b8 = (FOptimusNodeGraphAction_AddNode *)(pTVar29->WeakReferenceCount).ReferenceController
    ;
    pTVar29->Object = (FOptimusNodeGraphAction_AddNode *)0x0;
    (pTVar29->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  if (local_498.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_498.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar3 == (atomic<int>)0x1) &&
       (local_498.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)((local_498.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_498.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_378[0] != (void *)0x0) {
    FMemory::Free(local_378[0]);
  }
  pUVar26 = GetActionStack((UOptimusNodeGraph *)FVar33);
  pTVar30 = TSharedPtr<FOptimusAction,1>::TSharedPtr<FOptimusAction,1><FOptimusAction>
                      (&local_1e8,(FOptimusAction *)this_01);
  UOptimusActionStack::RunAction(pUVar26,pTVar30);
  RemoveNodesAndCount((UOptimusNodeGraph *)FVar33,&local_978);
  iVar4 = (int)local_990;
  uVar47 = (ulonglong)(int)local_990;
  pFVar53 = local_998.Data + uVar47 * 8;
  FVar45.Data = local_998.Data;
  while( true ) {
    if ((int)uVar47 != iVar4) {
      local_a07 = 0;
      `TCheckedPointerIterator<UOptimusNodeLink_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a07);
    }
    if (FVar45.Data == pFVar53) break;
    lVar39 = *(longlong *)FVar45.Data;
    FVar31 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar39 + 0x28));
    ::FName::ToString((FName *)FVar31,&local_480);
    pUVar22 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar39 + 0x28));
    local_798 = (FName)pUVar22->_padding_;
    ::FName::ToString(&local_798,&local_700);
    ::FString::PrintfImpl(&local_5f8,L"%s/%s.%s");
    if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_700.Data.AllocatorInstance.Data);
    }
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
    FVar31 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar39 + 0x30));
    ::FName::ToString((FName *)FVar31,&local_470);
    pUVar22 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar39 + 0x30));
    local_790 = (FName)pUVar22->_padding_;
    ::FName::ToString(&local_790,&local_6f0);
    ::FString::PrintfImpl(&local_608,L"%s/%s.%s");
    if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
    }
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
    pUVar26 = GetActionStack((UOptimusNodeGraph *)FVar33);
    pUVar27 = ::operator_new(0x50);
    if (pUVar27 == (UOptimusActionStack *)0x0) {
      pUVar27 = (UOptimusActionStack *)0x0;
      local_6e0.Object = pFVar12;
      local_6e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar25;
    }
    else {
      *(atomic<int> *)&pUVar27->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pUVar27->_padding_)[1] = (atomic<int>)0x1;
      pUVar27->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddLink___00_SharedPointerInternals__6B_
      ;
      FOptimusNodeGraphAction_AddLink::FOptimusNodeGraphAction_AddLink
                ((FOptimusNodeGraphAction_AddLink *)&pUVar27->_padding_,&local_5f8,&local_608,false)
      ;
      if ((&pUVar27->_padding_ == (longlong *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        pUVar22 = (UOptimusNode *)(*pcVar9)();
        return pUVar22;
      }
      LOCK();
      *(atomic<int> *)&pUVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar27->_padding_ + 1);
      UNLOCK();
      local_6e0.Object = (FOptimusAction *)&pUVar27->_padding_;
      local_6e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar27;
    }
    UOptimusActionStack::RunAction(pUVar26,&local_6e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar27);
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
    uVar47 = local_990 & 0xffffffff;
    FVar45.Data = FVar45.Data + 8;
    FVar33 = local_a00;
  }
  uVar40 = (ulonglong)(int)(uint)local_9a0;
  plVar54 = (longlong *)((longlong)FVar33 + 0x28);
  local_a10 = (uint)local_9a0;
  local_928 = local_9a8.Data + uVar40 * 8;
  uVar47 = uVar40;
  FVar45.Data = local_9a8.Data;
  while( true ) {
    pFVar53 = local_928;
    if ((int)uVar40 != (int)uVar47) {
      local_a06 = 0;
      `TCheckedPointerIterator<UOptimusNodeLink_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a06);
    }
    if (FVar45.Data == pFVar53) break;
    pUVar7 = *(UOptimusNodeLink **)FVar45.Data;
    pFVar32 = TMapBase<UOptimusNodeLink_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>_>
              ::FindChecked((TMapBase<UOptimusNodeLink_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>_>
                             *)&local_e8,pUVar7);
    ::FName::ToString(pFVar32,&local_820);
    pFVar23 = ::FName::ToString(&UOptimusNode_GraphTerminal::EntryNodeName,&local_460);
    ConstructPath(&local_948,&local_9c8,pFVar23,&local_820);
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    FVar33 = UOptimusNodePin::GetUniqueName((pUVar7->NodeInputPin).field0_0x0.DebugPtr);
    ::FName::ToString((FName *)FVar33,&local_450);
    pUVar8 = (pUVar7->NodeInputPin).field0_0x0.DebugPtr;
    while (pUVar52 = pUVar8, pUVar8 = (UOptimusNodePin *)pUVar52->_padding_,
          pUVar8 != (UOptimusNodePin *)0x0) {
      pUVar20 = UOptimusNodePin::StaticClass();
      iVar4 = (int)pUVar20->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar20->_padding_)) break;
    }
    pUVar37 = (UObjectBaseUtility *)pUVar52->_padding_;
    if ((pUVar37 == (UObjectBaseUtility *)0x0) ||
       (bVar18 = UObjectBaseUtility::IsA<UOptimusNode>(pUVar37), !bVar18)) {
      pUVar37 = (UObjectBaseUtility *)0x0;
    }
    local_788.ComparisonIndex.Value = *(uint *)&pUVar37->field_0x18;
    local_788.Number = *(uint *)&pUVar37->field_0x1c;
    ::FName::ToString(&local_788,&local_6d0);
    ::FString::PrintfImpl(&local_8a8,L"%s/%s.%s");
    if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
    }
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
    plVar34 = (longlong *)(**(code **)(*plVar54 + 0x18))(plVar54);
    if ((plVar34 == (longlong *)0x0) ||
       (pUVar35 = (UOptimusDeformer *)(**(code **)(*plVar34 + 8))(plVar34),
       pUVar35 == (UOptimusDeformer *)0x0)) {
LAB_14e185049:
      pUVar26 = (UOptimusActionStack *)0x0;
    }
    else {
      pUVar20 = UOptimusDeformer::StaticClass();
      iVar4 = (int)pUVar20->_padding_;
      if ((*(int *)(pUVar35->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar35->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar20->_padding_)) goto LAB_14e185049;
      pUVar26 = UOptimusDeformer::GetActionStack(pUVar35);
    }
    pUVar27 = ::operator_new(0x50);
    if (pUVar27 == (UOptimusActionStack *)0x0) {
      pUVar27 = (UOptimusActionStack *)0x0;
      local_6c0.Object = pFVar12;
      local_6c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar25;
    }
    else {
      *(atomic<int> *)&pUVar27->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pUVar27->_padding_)[1] = (atomic<int>)0x1;
      pUVar27->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddLink___00_SharedPointerInternals__6B_
      ;
      FOptimusNodeGraphAction_AddLink::FOptimusNodeGraphAction_AddLink
                ((FOptimusNodeGraphAction_AddLink *)&pUVar27->_padding_,&local_948,&local_8a8,false)
      ;
      if ((&pUVar27->_padding_ == (longlong *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        pUVar22 = (UOptimusNode *)(*pcVar9)();
        return pUVar22;
      }
      LOCK();
      *(atomic<int> *)&pUVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar27->_padding_ + 1);
      UNLOCK();
      local_6c0.Object = (FOptimusAction *)&pUVar27->_padding_;
      local_6c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar27;
    }
    UOptimusActionStack::RunAction(pUVar26,&local_6c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar27);
    pFVar23 = UOptimusNodePin::GetPinPath((pUVar7->NodeOutputPin).field0_0x0.DebugPtr,&local_440);
    if (&local_948 != pFVar23) {
      if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_948.Data.AllocatorInstance.Data);
      }
      local_948.Data.AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
      (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_948.Data.ArrayNum = (pFVar23->Data).ArrayNum;
      local_948.Data.ArrayMax = (pFVar23->Data).ArrayMax;
      (pFVar23->Data).ArrayNum = 0;
      (pFVar23->Data).ArrayMax = 0;
    }
    FVar48.Data = local_948.Data.AllocatorInstance.Data;
    pUVar26 = (UOptimusActionStack *)0x0;
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
    ::FName::ToString(&local_958,&local_420);
    (**(code **)(*plVar54 + 0x20))(plVar54,local_430);
    ::FString::PrintfImpl(&local_868,L"%s/%s.%s");
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
    local_8a8.Data.AllocatorInstance.Data = local_868.Data.AllocatorInstance.Data;
    local_8a8.Data.ArrayNum = local_868.Data.ArrayNum;
    local_8a8.Data.ArrayMax = local_868.Data.ArrayMax;
    local_868.Data.ArrayNum = 0;
    local_868.Data.ArrayMax = 0;
    local_868.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_430[0] != (void *)0x0) {
      FMemory::Free(local_430[0]);
    }
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    plVar34 = (longlong *)(**(code **)(*plVar54 + 0x18))(plVar54);
    pUVar27 = pUVar26;
    if ((plVar34 != (longlong *)0x0) &&
       (pUVar35 = (UOptimusDeformer *)(**(code **)(*plVar34 + 8))(plVar34),
       pUVar35 != (UOptimusDeformer *)0x0)) {
      pUVar20 = UOptimusDeformer::StaticClass();
      iVar4 = (int)pUVar20->_padding_;
      if ((iVar4 <= *(int *)(pUVar35->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar35->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar20->_padding_)) {
        pUVar27 = UOptimusDeformer::GetActionStack(pUVar35);
      }
    }
    pUVar36 = ::operator_new(0x50);
    if (pUVar36 == (UOptimusActionStack *)0x0) {
      local_6b0.Object = pFVar12;
      local_6b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar25;
    }
    else {
      *(atomic<int> *)&pUVar36->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pUVar36->_padding_)[1] = (atomic<int>)0x1;
      pUVar36->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddLink___00_SharedPointerInternals__6B_
      ;
      FOptimusNodeGraphAction_AddLink::FOptimusNodeGraphAction_AddLink
                ((FOptimusNodeGraphAction_AddLink *)&pUVar36->_padding_,&local_948,&local_8a8,false)
      ;
      if ((&pUVar36->_padding_ == (longlong *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        pUVar22 = (UOptimusNode *)(*pcVar9)();
        return pUVar22;
      }
      LOCK();
      *(atomic<int> *)&pUVar36->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar36->_padding_ + 1);
      UNLOCK();
      FVar48.Data = local_948.Data.AllocatorInstance.Data;
      pUVar26 = pUVar36;
      local_6b0.Object = (FOptimusAction *)&pUVar36->_padding_;
      local_6b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar36;
    }
    UOptimusActionStack::RunAction(pUVar27,&local_6b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar26);
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
    if (FVar48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar48.Data);
    }
    if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.Data.AllocatorInstance.Data);
    }
    uVar40 = local_9a0 & 0xffffffff;
    FVar45.Data = FVar45.Data + 8;
    uVar47 = (ulonglong)local_a10;
  }
  uVar40 = (ulonglong)(int)(uint)local_9b0;
  local_a10 = (uint)local_9b0;
  local_928 = local_9b8.Data + uVar40 * 8;
  plVar54 = (longlong *)((longlong)local_a00 + 0x28);
  uVar47 = uVar40;
  FVar45.Data = local_9b8.Data;
  while( true ) {
    pFVar53 = local_928;
    if ((int)uVar40 != (int)uVar47) {
      local_a05 = 0;
      `TCheckedPointerIterator<UOptimusNodeLink_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a05);
    }
    if (FVar45.Data == pFVar53) break;
    pUVar7 = *(UOptimusNodeLink **)FVar45.Data;
    pFVar32 = TMapBase<UOptimusNodeLink_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>_>
              ::FindChecked((TMapBase<UOptimusNodeLink_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>_>
                             *)&local_138,pUVar7);
    ::FName::ToString(pFVar32,&local_810);
    FVar33 = UOptimusNodePin::GetUniqueName((pUVar7->NodeOutputPin).field0_0x0.DebugPtr);
    ::FName::ToString((FName *)FVar33,&local_410);
    pUVar8 = (pUVar7->NodeOutputPin).field0_0x0.DebugPtr;
    while (pUVar52 = pUVar8, pUVar8 = (UOptimusNodePin *)pUVar52->_padding_,
          pUVar8 != (UOptimusNodePin *)0x0) {
      pUVar20 = UOptimusNodePin::StaticClass();
      iVar4 = (int)pUVar20->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar20->_padding_)) break;
    }
    lVar39 = pUVar52->_padding_;
    if (lVar39 == 0) {
LAB_14e18547d:
      lVar39 = 0;
    }
    else {
      pUVar20 = UOptimusNode::StaticClass();
      iVar4 = (int)pUVar20->_padding_;
      if ((*(int *)(*(longlong *)(lVar39 + 0x10) + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar39 + 0x10) + 0x30) + (longlong)iVar4 * 8)
          != &pUVar20->_padding_)) goto LAB_14e18547d;
    }
    local_780 = *(FName *)(lVar39 + 0x18);
    ::FName::ToString(&local_780,&local_770);
    ::FString::PrintfImpl(&local_898,L"%s/%s.%s");
    if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_770.Data.AllocatorInstance.Data);
    }
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
    pFVar23 = ::FName::ToString(&UOptimusNode_GraphTerminal::ReturnNodeName,&local_400);
    ConstructPath(&local_938,&local_9c8,pFVar23,&local_810);
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
    plVar34 = (longlong *)(**(code **)(*plVar54 + 0x18))(plVar54);
    if ((plVar34 == (longlong *)0x0) ||
       (pUVar35 = (UOptimusDeformer *)(**(code **)(*plVar34 + 8))(plVar34),
       pUVar35 == (UOptimusDeformer *)0x0)) {
LAB_14e18558b:
      pUVar26 = (UOptimusActionStack *)0x0;
    }
    else {
      pUVar20 = UOptimusDeformer::StaticClass();
      iVar4 = (int)pUVar20->_padding_;
      if ((*(int *)(pUVar35->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar35->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar20->_padding_)) goto LAB_14e18558b;
      pUVar26 = UOptimusDeformer::GetActionStack(pUVar35);
    }
    pUVar27 = ::operator_new(0x50);
    if (pUVar27 == (UOptimusActionStack *)0x0) {
      pUVar27 = (UOptimusActionStack *)0x0;
      local_760.Object = pFVar12;
      local_760.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar25;
    }
    else {
      *(atomic<int> *)&pUVar27->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pUVar27->_padding_)[1] = (atomic<int>)0x1;
      pUVar27->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddLink___00_SharedPointerInternals__6B_
      ;
      FOptimusNodeGraphAction_AddLink::FOptimusNodeGraphAction_AddLink
                ((FOptimusNodeGraphAction_AddLink *)&pUVar27->_padding_,&local_898,&local_938,false)
      ;
      if ((&pUVar27->_padding_ == (longlong *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        pUVar22 = (UOptimusNode *)(*pcVar9)();
        return pUVar22;
      }
      LOCK();
      *(atomic<int> *)&pUVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar27->_padding_ + 1);
      UNLOCK();
      local_760.Object = (FOptimusAction *)&pUVar27->_padding_;
      local_760.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar27;
    }
    UOptimusActionStack::RunAction(pUVar26,&local_760);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar27);
    ::FName::ToString(&local_958,&local_3e0);
    (**(code **)(*plVar54 + 0x20))(plVar54,local_3f0);
    ::FString::PrintfImpl(&local_858,L"%s/%s.%s");
    if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898.Data.AllocatorInstance.Data);
    }
    local_898.Data.AllocatorInstance.Data = local_858.Data.AllocatorInstance.Data;
    local_898.Data.ArrayNum = local_858.Data.ArrayNum;
    local_898.Data.ArrayMax = local_858.Data.ArrayMax;
    local_858.Data.ArrayNum = 0;
    local_858.Data.ArrayMax = 0;
    local_858.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_3f0[0] != (void *)0x0) {
      FMemory::Free(local_3f0[0]);
    }
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    pFVar23 = UOptimusNodePin::GetPinPath((pUVar7->NodeInputPin).field0_0x0.DebugPtr,&local_3d0);
    if (&local_938 != pFVar23) {
      if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.Data.AllocatorInstance.Data);
      }
      local_938.Data.AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
      (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_938.Data.ArrayNum = (pFVar23->Data).ArrayNum;
      local_938.Data.ArrayMax = (pFVar23->Data).ArrayMax;
      (pFVar23->Data).ArrayNum = 0;
      (pFVar23->Data).ArrayMax = 0;
    }
    FVar48.Data = local_938.Data.AllocatorInstance.Data;
    pUVar26 = (UOptimusActionStack *)0x0;
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
    plVar34 = (longlong *)(**(code **)(*plVar54 + 0x18))(plVar54);
    pUVar27 = pUVar26;
    if ((plVar34 != (longlong *)0x0) &&
       (pUVar35 = (UOptimusDeformer *)(**(code **)(*plVar34 + 8))(plVar34),
       pUVar35 != (UOptimusDeformer *)0x0)) {
      pUVar20 = UOptimusDeformer::StaticClass();
      iVar4 = (int)pUVar20->_padding_;
      if ((iVar4 <= *(int *)(pUVar35->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar35->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar20->_padding_)) {
        pUVar27 = UOptimusDeformer::GetActionStack(pUVar35);
      }
    }
    pUVar36 = ::operator_new(0x50);
    if (pUVar36 == (UOptimusActionStack *)0x0) {
      local_750.Object = pFVar12;
      local_750.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar25;
    }
    else {
      *(atomic<int> *)&pUVar36->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pUVar36->_padding_)[1] = (atomic<int>)0x1;
      pUVar36->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddLink___00_SharedPointerInternals__6B_
      ;
      FOptimusNodeGraphAction_AddLink::FOptimusNodeGraphAction_AddLink
                ((FOptimusNodeGraphAction_AddLink *)&pUVar36->_padding_,&local_898,&local_938,false)
      ;
      if ((&pUVar36->_padding_ == (longlong *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        pUVar22 = (UOptimusNode *)(*pcVar9)();
        return pUVar22;
      }
      LOCK();
      *(atomic<int> *)&pUVar36->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar36->_padding_ + 1);
      UNLOCK();
      FVar48.Data = local_938.Data.AllocatorInstance.Data;
      pUVar26 = pUVar36;
      local_750.Object = (FOptimusAction *)&pUVar36->_padding_;
      local_750.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar36;
    }
    UOptimusActionStack::RunAction(pUVar27,&local_750);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar26);
    if (FVar48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar48.Data);
    }
    if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898.Data.AllocatorInstance.Data);
    }
    if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_810.Data.AllocatorInstance.Data);
    }
    uVar40 = local_9b0 & 0xffffffff;
    FVar45.Data = FVar45.Data + 8;
    uVar47 = (ulonglong)local_a10;
  }
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)local_9f8.Data,(int)local_9f0);
  if ((TTuple<FString,FString> *)local_9f8.Data != (TTuple<FString,FString> *)0x0) {
    FMemory::Free(local_9f8.Data);
  }
  if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
  }
  FOptimusActionScope::~FOptimusActionScope(&local_778);
  pFVar14 = local_8b8;
  pFVar46 = local_950;
  if (((local_950 == (FOptimusNodeGraphAction_AddNode *)0x0) ||
      (local_8b8 == (FOptimusNodeGraphAction_AddNode *)0x0)) || (*(int *)&local_8b8->field_0x8 < 1))
  {
    pUVar22 = (UOptimusNode *)0x0;
    goto LAB_14e1859e5;
  }
  plVar54 = (longlong *)
            (**(code **)(*(longlong *)((longlong)local_a00 + 0x28) + 0x18))
                      ((longlong *)((longlong)local_a00 + 0x28));
  if ((plVar54 == (longlong *)0x0) ||
     (pUVar37 = (UObjectBaseUtility *)(**(code **)(*plVar54 + 8))(plVar54),
     pUVar37 == (UObjectBaseUtility *)0x0)) {
    plVar54 = (longlong *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
    plVar54 = UObjectBaseUtility::GetInterfaceAddress(pUVar37,pUVar20);
  }
  pFVar49 = (FOptimusNodeGraphAction_AddNode *)0x0;
  iVar4 = *(int *)&pFVar14->field_0x8;
  do {
    pFVar17 = pFVar49;
    if (iVar4 == 0) goto LAB_14e185992;
    LOCK();
    iVar19 = *(int *)&pFVar14->field_0x8;
    bVar18 = iVar4 == iVar19;
    if (bVar18) {
      *(int *)&pFVar14->field_0x8 = iVar4 + 1;
      iVar19 = iVar4;
    }
    UNLOCK();
    iVar4 = iVar19;
  } while (!bVar18);
  pFVar17 = pFVar46;
  pFVar49 = pFVar14;
  if (pFVar46 == (FOptimusNodeGraphAction_AddNode *)0x0) goto LAB_14e185992;
LAB_14e1859b8:
  pUVar22 = (UOptimusNode *)(**(code **)(*plVar54 + 0x20))(plVar54,&pFVar46->NodePath);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar49);
LAB_14e1859e5:
  if (pFVar14 != (FOptimusNodeGraphAction_AddNode *)0x0) {
    LOCK();
    puVar2 = &pFVar14->field_0xc;
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*(longlong *)pFVar14 + 8))(pFVar14,1);
    }
  }
  local_188.HashSize = 0;
  if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_188.Elements);
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)local_9d8.Data,(int)local_9d0);
  if ((FOptimusParameterBinding *)local_9d8.Data != (FOptimusParameterBinding *)0x0) {
    FMemory::Free(local_9d8.Data);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)local_9e8.Data,(int)local_9e0);
  if ((FOptimusParameterBinding *)local_9e8.Data != (FOptimusParameterBinding *)0x0) {
    FMemory::Free(local_9e8.Data);
  }
  local_138.HashSize = 0;
  if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UOptimusNodeLink_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodeLink_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138.Elements);
  if (local_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b8.Data);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UOptimusNodeLink_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodeLink_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  if (local_9a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.Data);
  }
  if (local_998.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_998.Data);
  }
  local_1d8.HashSize = 0;
  if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UOptimusNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UOptimusNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1d8.Elements);
  if (local_878.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.AllocatorInstance.Data);
  }
  if (local_888.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.AllocatorInstance.Data);
  }
  if (local_978.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.AllocatorInstance.Data);
  }
  if (local_988.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.AllocatorInstance.Data);
  }
  return pUVar22;
LAB_14e185992:
  pFVar46 = pFVar17;
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar18) {
    pcVar9 = (code *)swi(3);
    pUVar22 = (UOptimusNode *)(*pcVar9)();
    return pUVar22;
  }
  goto LAB_14e1859b8;
}

// ConnectAdderPin @ 14e1926f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UOptimusNodeGraph::ConnectAdderPin
          (UOptimusNodeGraph *this,IOptimusNodeAdderPinProvider *param_1,FAdderPinAction *param_2,
          UOptimusNodePin *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObjectBaseUtility *this_00;
  UClass *pUVar4;
  IOptimusNodeAdderPinProvider *pIVar5;
  UOptimusActionStack *this_01;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TRefCountPtr<ITextData> TVar8;
  undefined1 local_res10 [8];
  TSharedPtr<FOptimusAction,1> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  FAdderPinAction local_48;
  
  if ((param_1 != (IOptimusNodeAdderPinProvider *)0x0) &&
     (this_00 = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 8))(param_1),
     this_00 != (UObjectBaseUtility *)0x0)) {
    pUVar4 = Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister();
    pIVar5 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar4);
    if ((pIVar5 != (IOptimusNodeAdderPinProvider *)0x0) &&
       ((param_3 != (UOptimusNodePin *)0x0 && (param_3->Direction != Unknown)))) {
      local_48.DisplayName = param_2->DisplayName;
      TVar8.Reference = (param_2->ToolTip).TextData.Reference;
      local_48.Key = param_2->Key;
      local_48.NewPinDirection = param_2->NewPinDirection;
      local_48.ToolTip.TextData.Reference = TVar8.Reference;
      if (TVar8.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar8.Reference + 8))(TVar8.Reference,local_res10);
      }
      local_48.ToolTip.Flags = (param_2->ToolTip).Flags;
      uVar3 = param_2->bCanAutoLink;
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_48.bCanAutoLink = (bool)uVar3;
      if (param_3->Direction == Input) {
        GetAllLinkIndexesToPin(this,&local_58,param_3);
        if (0 < local_58.ArrayNum) {
          uVar3 = 0;
        }
        local_48.bCanAutoLink = (bool)uVar3;
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
      this_01 = GetActionStack(this);
      pTVar6 = ::operator_new(0xb0);
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        local_68.Object = ___xmm_00000000000000000000000000000010;
        local_68.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_ConnectAdderPin___00_SharedPointerInternals__6B_
        ;
        FOptimusNodeGraphAction_ConnectAdderPin::FOptimusNodeGraphAction_ConnectAdderPin
                  ((FOptimusNodeGraphAction_ConnectAdderPin *)(pTVar6 + 1),pIVar5,&local_48,param_3)
        ;
        local_68.Object = (FOptimusAction *)(pTVar6 + 1);
        if ((local_68.Object == (FOptimusAction *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        pTVar7 = pTVar6;
        TVar8.Reference = local_48.ToolTip.TextData.Reference;
        local_68.SharedReferenceCount.ReferenceController = pTVar6;
      }
      bVar2 = UOptimusActionStack::RunAction(this_01,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (TVar8.Reference == (ITextData *)0x0) {
        return bVar2;
      }
      (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
      return bVar2;
    }
  }
  return false;
}

// ConstructPath @ 14e194620

FString * __cdecl
UOptimusNodeGraph::ConstructPath
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong lVar4;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_68.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar4 = (longlong)local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum < 2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7701470802381635792>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                       ,0xd0,"!NodeName.IsEmpty()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    if (1 < (param_1->Data).ArrayNum) {
      ::FString::ConcatFC(&local_38,param_1,L"/");
      ::FString::ConcatFF(&local_58,&local_38,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      local_68.Data.ArrayNum = local_58.Data.ArrayNum;
      local_68.Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (param_3->Data).ArrayNum) {
      ::FString::ConcatFC(&local_28,&local_68,L".");
      ::FString::ConcatFF(&local_48,&local_28,param_3);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      local_68.Data.ArrayNum = local_48.Data.ArrayNum;
      local_68.Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConstructSubGraphPath @ 14e1947f0

FString * __thiscall
UOptimusNodeGraph::ConstructSubGraphPath
          (UOptimusNodeGraph *this,FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  FString local_28;
  void *local_18 [2];
  
  pFVar1 = (FString *)(**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_18);
  ::FString::ConcatFC(&local_28,pFVar1,L"/");
  ::FString::ConcatFF(__return_storage_ptr__,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// ConstructSubGraphPath @ 14e194870

FString * __cdecl
UOptimusNodeGraph::ConstructSubGraphPath
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FString local_18;
  
  ::FString::ConcatFC(&local_18,param_1,L"/");
  ::FString::ConcatFF(__return_storage_ptr__,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertCustomKernelToFunction @ 14e194980

/* WARNING: Enum "Type": Some values do not have unique names */

UOptimusNode * __thiscall
UOptimusNodeGraph::ConvertCustomKernelToFunction(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  uint uVar4;
  UOptimusNodeLink *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  FOptimusNodeGraphAction_AddLink *pFVar7;
  UObjectBaseUtility *this_00;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  UOptimusNode *pUVar13;
  UOptimusNode *pUVar14;
  FString *pFVar15;
  FString *pFVar16;
  FOptimusNodeGraphAction_PackageKernelFunction *this_01;
  UOptimusNode *pUVar17;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> *pTVar18;
  longlong *plVar19;
  UOptimusDeformer *this_02;
  UOptimusActionStack *pUVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  UOptimusNode *this_03;
  TTuple<FString,FString> *pTVar24;
  ForAnyElementType FVar25;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_158;
  undefined8 local_150;
  FOptimusNodeGraphAction_AddLink *local_148;
  TReferenceControllerBase<1> *local_140;
  UOptimusNode *local_138;
  UOptimusNodeLink *local_130;
  UOptimusNode_CustomComputeKernel *local_128;
  TArray<int,TSizedDefaultAllocator<32>_> local_120;
  FName local_110;
  FName local_108;
  FName local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> local_b8;
  TSharedPtr<FOptimusAction,1> local_a8;
  FString local_98;
  FString local_88;
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> local_78;
  TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> local_68;
  TWeakPtr<FOptimusAction,1> local_58;
  
  pUVar14 = (UOptimusNode *)0x0;
  local_res10[0] = 0;
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar12 = UOptimusNode_CustomComputeKernel::StaticClass();
    iVar11 = (int)pUVar12->_padding_;
    if ((iVar11 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar12->_padding_)) {
      local_128 = (UOptimusNode_CustomComputeKernel *)param_1;
      if ((*(int *)&param_1[1].ExpandedPins.Hash.SecondaryData == 0) ||
         (iVar11._0_1_ = param_1[1].DiagnosticLevel, iVar11._1_1_ = param_1[1].bDynamicPins,
         iVar11._2_1_ = param_1[1].bConstructingNode, iVar11._3_1_ = param_1[1].field_0xb3,
         iVar11 == 0)) {
        if ((byte)LogOptimusCore._0_1_ < 2) {
          return (UOptimusNode *)0x0;
        }
        local_108 = (FName)param_1->_padding_;
        ::FName::ToString(&local_108,&local_d8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        local_f8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      }
      else {
        if (param_1->DiagnosticLevel != Error) {
          pUVar13 = ::operator_new(0x28);
          this_03 = pUVar14;
          pUVar17 = pUVar14;
          if (pUVar13 != (UOptimusNode *)0x0) {
            ::FString::FString(&local_e8,L"Create Kernel Function");
            FVar25.Data = local_e8.Data.AllocatorInstance.Data;
            plVar19 = &pUVar13->_padding_;
            pUVar13->_padding_ = (longlong)&___7FOptimusAction__6B_;
            piVar1 = (int *)((longlong)&pUVar13->_padding_ + 4);
            *plVar19 = 0;
            *(int *)&pUVar13->_padding_ = local_e8.Data.ArrayNum;
            if (local_e8.Data.ArrayNum == 0) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)plVar19,
                         local_e8.Data.ArrayNum,piVar1);
              memcpy((void *)*plVar19,FVar25.Data,(longlong)local_e8.Data.ArrayNum * 2);
            }
            pUVar13->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
            (((FString *)&pUVar13->_padding_)->Data).AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            pUVar13->_padding_ = 0;
            this_03 = pUVar13;
            pUVar17 = (UOptimusNode *)&DAT_00000001;
          }
          if ((pUVar17 != (UOptimusNode *)0x0) &&
             (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          local_158.Data = (FScriptContainerElement *)0x0;
          local_150 = 0;
          GetAllLinkIndexesToNode(this,&local_120,param_1,Unknown);
          uVar21 = (ulonglong)local_120.ArrayNum;
          local_res20 = local_120.ArrayNum;
          local_138 = (UOptimusNode *)(local_120.AllocatorInstance.Data + uVar21 * 4);
          uVar22 = uVar21;
          FVar25.Data = local_120.AllocatorInstance.Data;
          while( true ) {
            pUVar17 = local_138;
            if ((int)uVar21 != (int)uVar22) {
              local_res10[0] = local_res10[0] & 0xffffff00;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
            }
            if ((UOptimusNode *)FVar25.Data == pUVar17) break;
            uVar4 = *(uint *)FVar25.Data;
            uVar10 = 0;
            if ((int)uVar4 < (this->Links).ArrayNum) {
              uVar10 = ~uVar4 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              pUVar14 = (UOptimusNode *)(*pcVar8)();
              return pUVar14;
            }
            pUVar5 = *(UOptimusNodeLink **)
                      ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
            uVar10 = 0;
            if ((int)uVar4 < (this->Links).ArrayNum) {
              uVar10 = ~uVar4 >> 0x1f;
            }
            local_130 = pUVar5;
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              pUVar14 = (UOptimusNode *)(*pcVar8)();
              return pUVar14;
            }
            pFVar15 = UOptimusNodePin::GetPinPath
                                (*(UOptimusNodePin **)
                                  (*(longlong *)
                                    ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar4 * 8
                                    ) + 0x30),&local_88);
            pFVar16 = UOptimusNodePin::GetPinPath
                                ((pUVar5->NodeOutputPin).field0_0x0.DebugPtr,&local_98);
            iVar11 = (uint)local_150;
            if ((uint)local_150 == local_150._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_158,(int *)((longlong)&local_150 + 4));
              local_150 = CONCAT44(local_150._4_4_,iVar11 + 1);
            }
            else {
              local_150 = CONCAT44(local_150._4_4_,(uint)local_150 + 1);
            }
            pFVar23 = local_158.Data + (longlong)iVar11 * 0x20;
            *(undefined8 *)pFVar23 = 0;
            *(FScriptContainerElement **)pFVar23 = (pFVar16->Data).AllocatorInstance.Data;
            (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar23 + 8) = (pFVar16->Data).ArrayNum;
            *(int *)(pFVar23 + 0xc) = (pFVar16->Data).ArrayMax;
            (pFVar16->Data).ArrayNum = 0;
            (pFVar16->Data).ArrayMax = 0;
            *(undefined8 *)(pFVar23 + 0x10) = 0;
            *(FScriptContainerElement **)(pFVar23 + 0x10) = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar23 + 0x18) = (pFVar15->Data).ArrayNum;
            *(int *)(pFVar23 + 0x1c) = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            FOptimusCompoundAction::
            AddSubAction<FOptimusNodeGraphAction_RemoveLink,UOptimusNodeLink_*_&>
                      ((FOptimusCompoundAction *)this_03,&local_78,&local_130);
            if (local_78.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar3 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                          (local_78.WeakReferenceCount.ReferenceController,1);
              }
            }
            uVar21 = (ulonglong)(uint)local_120.ArrayNum;
            FVar25.Data = FVar25.Data + 4;
            uVar22 = (ulonglong)local_res20;
          }
          if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.AllocatorInstance.Data);
          }
          FOptimusCompoundAction::
          AddSubAction<FOptimusNodeGraphAction_RemoveNode,UOptimusNode_CustomComputeKernel_*_&>
                    ((FOptimusCompoundAction *)this_03,&local_68,&local_128);
          if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            paVar2 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_68.WeakReferenceCount.ReferenceController,1);
            }
          }
          this_01 = ::operator_new(0xb0);
          pUVar17 = pUVar14;
          if (this_01 != (FOptimusNodeGraphAction_PackageKernelFunction *)0x0) {
            pUVar17 = (UOptimusNode *)
                      FOptimusNodeGraphAction_PackageKernelFunction::
                      FOptimusNodeGraphAction_PackageKernelFunction
                                (this_01,local_128,(FName)local_128->_padding_);
          }
          local_138 = pUVar17;
          FOptimusCompoundAction::AddSubAction
                    ((FOptimusCompoundAction *)this_03,&local_58,(FOptimusAction *)pUVar17);
          if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            paVar2 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_58.WeakReferenceCount.ReferenceController,1);
            }
          }
          uVar21 = (ulonglong)(int)(uint)local_150;
          pTVar24 = (TTuple<FString,FString> *)(local_158.Data + uVar21 * 0x20);
          local_res20 = (uint)local_150;
          uVar22 = uVar21;
          FVar25.Data = local_158.Data;
          do {
            while( true ) {
              if ((int)uVar21 != (int)uVar22) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res18);
              }
              if ((TTuple<FString,FString> *)FVar25.Data == pTVar24) {
                plVar19 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
                pUVar17 = pUVar14;
                if ((plVar19 != (longlong *)0x0) &&
                   (this_02 = (UOptimusDeformer *)(**(code **)(*plVar19 + 8))(plVar19),
                   this_02 != (UOptimusDeformer *)0x0)) {
                  pUVar12 = UOptimusDeformer::StaticClass();
                  iVar11 = (int)pUVar12->_padding_;
                  if ((iVar11 <= *(int *)(this_02->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
                      &pUVar12->_padding_)) {
                    pUVar17 = (UOptimusNode *)UOptimusDeformer::GetActionStack(this_02);
                  }
                }
                local_a8.Object = (FOptimusAction *)this_03;
                pUVar13 = ::operator_new(0x18);
                local_a8.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)pUVar14;
                if (pUVar13 != (UOptimusNode *)0x0) {
                  *(undefined4 *)&pUVar13->_padding_ = 1;
                  pUVar13->_padding_ =
                       (longlong)
                       &
                       ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
                  ;
                  *(undefined4 *)((longlong)&pUVar13->_padding_ + 4) = 1;
                  pUVar13->_padding_ = (longlong)this_03;
                  local_a8.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)pUVar13;
                }
                bVar9 = UOptimusActionStack::RunAction((UOptimusActionStack *)pUVar17,&local_a8);
                if (bVar9) {
                  pUVar20 = GetActionStack(this);
                  this_00 = (UObjectBaseUtility *)pUVar20->_padding_;
                  if (this_00 != (UObjectBaseUtility *)0x0) {
                    pUVar12 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
                    pUVar14 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar12);
                  }
                  pUVar14 = (UOptimusNode *)
                            (**(code **)(pUVar14->_padding_ + 0x20))
                                      (pUVar14,&(local_138->ExpandedPins).Hash.SecondaryData);
                }
                DestructItems<TTuple<FString,FString>,int>
                          ((TTuple<FString,FString> *)local_158.Data,(uint)local_150);
                if ((TTuple<FString,FString> *)local_158.Data != (TTuple<FString,FString> *)0x0) {
                  FMemory::Free(local_158.Data);
                }
                return pUVar14;
              }
              pTVar18 = MakeShared<FOptimusNodeGraphAction_AddLink,1,FString_const_&,FString_const_&>
                                  (&local_b8,(FString *)FVar25.Data,
                                   (FString *)&((TTuple<FString,FString> *)FVar25.Data)->field_0x10)
              ;
              pTVar6 = (pTVar18->SharedReferenceCount).ReferenceController;
              pFVar7 = pTVar18->Object;
              if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_b8.SharedReferenceCount.ReferenceController);
              }
              else {
                LOCK();
                pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
                UNLOCK();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_b8.SharedReferenceCount.ReferenceController);
                LOCK();
                pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar23 = (((FString *)&this_03->_padding_)->Data).AllocatorInstance.Data;
              local_148 = pFVar7;
              local_140 = pTVar6;
              if (((pFVar23 <= (FScriptContainerElement *)&local_148) &&
                  ((FScriptContainerElement *)&local_148 <
                   pFVar23 + (longlong)*(int *)((longlong)&this_03->_padding_ + 4) * 0x10)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar8 = (code *)swi(3);
                pUVar14 = (UOptimusNode *)(*pcVar8)();
                return pUVar14;
              }
              iVar11 = (int)this_03->_padding_;
              piVar1 = (int *)((longlong)&this_03->_padding_ + 4);
              if (iVar11 == *piVar1) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)&this_03->_padding_,piVar1);
              }
              *(int *)&this_03->_padding_ = iVar11 + 1;
              pFVar23 = (((FString *)&this_03->_padding_)->Data).AllocatorInstance.Data +
                        (longlong)iVar11 * 0x10;
              *(FOptimusNodeGraphAction_AddLink **)pFVar23 = local_148;
              *(TReferenceControllerBase<1> **)(pFVar23 + 8) = local_140;
              local_140 = (TReferenceControllerBase<1> *)0x0;
              local_148 = (FOptimusNodeGraphAction_AddLink *)0x0;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              if (pTVar6 != (TReferenceControllerBase<1> *)0x0) break;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
LAB_14e194f75:
              uVar21 = local_150 & 0xffffffff;
              FVar25.Data = FVar25.Data + 0x20;
              uVar22 = (ulonglong)local_res20;
            }
            LOCK();
            pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            LOCK();
            paVar2 = &pTVar6->WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 != (atomic<int>)0x1) goto LAB_14e194f75;
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
            uVar21 = local_150 & 0xffffffff;
            FVar25.Data = FVar25.Data + 0x20;
            uVar22 = (ulonglong)local_res20;
          } while( true );
        }
        if ((byte)LogOptimusCore._0_1_ < 2) {
          return (UOptimusNode *)0x0;
        }
        local_110 = (FName)param_1->_padding_;
        ::FName::ToString(&local_110,&local_f8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      }
      goto LAB_14e19513e;
    }
  }
  if ((byte)LogOptimusCore._0_1_ < 2) {
    return (UOptimusNode *)0x0;
  }
  local_100 = (FName)param_1->_padding_;
  ::FName::ToString(&local_100,&local_c8);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
  local_f8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
LAB_14e19513e:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return (UOptimusNode *)0x0;
}

// ConvertFunctionToCustomKernel @ 14e1952a0

/* WARNING: Enum "Type": Some values do not have unique names */

UOptimusNode * __thiscall
UOptimusNodeGraph::ConvertFunctionToCustomKernel(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  uint uVar4;
  UOptimusNodeLink *pUVar5;
  FName FVar6;
  FOptimusNodeGraphAction_AddLink *pFVar7;
  UObjectBaseUtility *this_00;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  UOptimusNode *pUVar13;
  UOptimusNode *pUVar14;
  FString *pFVar15;
  FString *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  FOptimusNodeGraphAction_UnpackageKernelFunction *this_01;
  UOptimusNode *pUVar18;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> *pTVar19;
  longlong *plVar20;
  UOptimusDeformer *pUVar21;
  UOptimusNode *pUVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  ForAnyElementType FVar26;
  TTuple<FString,FString> *pTVar27;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_128;
  undefined8 local_120;
  TReferenceControllerBase<1> *local_118;
  TReferenceControllerBase<1> *local_110;
  FOptimusNodeGraphAction_AddLink *local_108;
  TReferenceControllerBase<1> *local_100;
  UOptimusNode *local_f8;
  UOptimusNode_ComputeKernelFunction *local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> local_b0;
  TSharedPtr<FOptimusAction,1> local_a0;
  FString local_90;
  FString local_80;
  TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> local_70;
  TWeakPtr<FOptimusAction,1> local_60 [2];
  
  pUVar14 = (UOptimusNode *)0x0;
  local_res10[0] = 0;
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar12 = UOptimusNode_ComputeKernelFunction::StaticClass();
    iVar11 = (int)pUVar12->_padding_;
    if ((iVar11 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar12->_padding_)) {
      local_f0 = (UOptimusNode_ComputeKernelFunction *)param_1;
      pUVar13 = ::operator_new(0x28);
      pUVar22 = pUVar14;
      pUVar18 = pUVar14;
      if (pUVar13 != (UOptimusNode *)0x0) {
        ::FString::FString(&local_d0,L"Unpack Kernel Function");
        FVar26.Data = local_d0.Data.AllocatorInstance.Data;
        plVar20 = &pUVar13->_padding_;
        pUVar13->_padding_ = (longlong)&___7FOptimusAction__6B_;
        piVar1 = (int *)((longlong)&pUVar13->_padding_ + 4);
        *plVar20 = 0;
        *(int *)&pUVar13->_padding_ = local_d0.Data.ArrayNum;
        if (local_d0.Data.ArrayNum == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)plVar20,
                     local_d0.Data.ArrayNum,piVar1);
          memcpy((void *)*plVar20,FVar26.Data,(longlong)local_d0.Data.ArrayNum * 2);
        }
        pUVar13->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
        (((FString *)&pUVar13->_padding_)->Data).AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        pUVar13->_padding_ = 0;
        pUVar22 = pUVar13;
        pUVar18 = (UOptimusNode *)&DAT_00000001;
      }
      if ((pUVar18 != (UOptimusNode *)0x0) &&
         (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      local_128.Data = (FScriptContainerElement *)0x0;
      local_120 = 0;
      GetAllLinkIndexesToNode(this,&local_e8,param_1,Unknown);
      uVar23 = (ulonglong)local_e8.ArrayNum;
      local_res20 = local_e8.ArrayNum;
      local_f8 = (UOptimusNode *)(local_e8.AllocatorInstance.Data + uVar23 * 4);
      uVar24 = uVar23;
      FVar26.Data = local_e8.AllocatorInstance.Data;
      while( true ) {
        pUVar18 = local_f8;
        if ((int)uVar23 != (int)uVar24) {
          local_res10[0] = local_res10[0] & 0xffffff00;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if ((UOptimusNode *)FVar26.Data == pUVar18) break;
        uVar4 = *(uint *)FVar26.Data;
        uVar10 = 0;
        if ((int)uVar4 < (this->Links).ArrayNum) {
          uVar10 = ~uVar4 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pUVar14 = (UOptimusNode *)(*pcVar8)();
          return pUVar14;
        }
        pUVar5 = *(UOptimusNodeLink **)
                  ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
        uVar10 = 0;
        if ((int)uVar4 < (this->Links).ArrayNum) {
          uVar10 = ~uVar4 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pUVar14 = (UOptimusNode *)(*pcVar8)();
          return pUVar14;
        }
        pFVar15 = UOptimusNodePin::GetPinPath
                            (*(UOptimusNodePin **)
                              (*(longlong *)
                                ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) +
                              0x30),&local_80);
        pFVar16 = UOptimusNodePin::GetPinPath((pUVar5->NodeOutputPin).field0_0x0.DebugPtr,&local_90)
        ;
        iVar11 = (uint)local_120;
        if ((uint)local_120 == local_120._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_128,(int *)((longlong)&local_120 + 4));
          local_120 = CONCAT44(local_120._4_4_,iVar11 + 1);
        }
        else {
          local_120 = CONCAT44(local_120._4_4_,(uint)local_120 + 1);
        }
        pFVar25 = local_128.Data + (longlong)iVar11 * 0x20;
        *(undefined8 *)pFVar25 = 0;
        *(FScriptContainerElement **)pFVar25 = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar25 + 8) = (pFVar16->Data).ArrayNum;
        *(int *)(pFVar25 + 0xc) = (pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        *(undefined8 *)(pFVar25 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar25 + 0x10) = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar25 + 0x18) = (pFVar15->Data).ArrayNum;
        *(int *)(pFVar25 + 0x1c) = (pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        pTVar17 = ::operator_new(0x50);
        if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_118 = (TReferenceControllerBase<1> *)&DAT_00000010;
          local_110 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar17->SharedReferenceCount = (atomic<int>)0x1;
          pTVar17->WeakReferenceCount = (atomic<int>)0x1;
          pTVar17->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveLink___00_SharedPointerInternals__6B_
          ;
          FOptimusNodeGraphAction_RemoveLink::FOptimusNodeGraphAction_RemoveLink
                    ((FOptimusNodeGraphAction_RemoveLink *)(pTVar17 + 1),pUVar5);
          if ((pTVar17 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            pUVar14 = (UOptimusNode *)(*pcVar8)();
            return pUVar14;
          }
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
          local_118 = pTVar17 + 1;
          local_110 = pTVar17;
        }
        pTVar17 = local_110;
        pFVar15 = (FString *)&pUVar22->_padding_;
        pFVar25 = (pFVar15->Data).AllocatorInstance.Data;
        if (((pFVar25 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 <
             pFVar25 + (longlong)*(int *)((longlong)&pUVar22->_padding_ + 4) * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pUVar14 = (UOptimusNode *)(*pcVar8)();
          return pUVar14;
        }
        iVar11 = (int)pUVar22->_padding_;
        piVar1 = (int *)((longlong)&pUVar22->_padding_ + 4);
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pFVar15,piVar1);
        }
        *(int *)&pUVar22->_padding_ = iVar11 + 1;
        pFVar25 = (pFVar15->Data).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
        *(TReferenceControllerBase<1> **)pFVar25 = local_118;
        *(TReferenceControllerBase<1> **)(pFVar25 + 8) = local_110;
        local_110 = (TReferenceControllerBase<1> *)0x0;
        local_118 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
          LOCK();
          paVar2 = &pTVar17->WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
          }
        }
        uVar23 = (ulonglong)(uint)local_e8.ArrayNum;
        FVar26.Data = FVar26.Data + 4;
        uVar24 = (ulonglong)local_res20;
      }
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      FOptimusCompoundAction::
      AddSubAction<FOptimusNodeGraphAction_RemoveNode,UOptimusNode_ComputeKernelFunction_*_&>
                ((FOptimusCompoundAction *)pUVar22,&local_70,&local_f0);
      if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_70.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_70.WeakReferenceCount.ReferenceController,1);
        }
      }
      this_01 = ::operator_new(0x60);
      pUVar18 = pUVar14;
      if (this_01 != (FOptimusNodeGraphAction_UnpackageKernelFunction *)0x0) {
        FVar6.ComparisonIndex.Value = *(uint *)&local_f0->field_0x18;
        FVar6.Number = *(uint *)&local_f0->field_0x1c;
        pUVar18 = (UOptimusNode *)
                  FOptimusNodeGraphAction_UnpackageKernelFunction::
                  FOptimusNodeGraphAction_UnpackageKernelFunction(this_01,local_f0,FVar6);
      }
      local_f8 = pUVar18;
      FOptimusCompoundAction::AddSubAction
                ((FOptimusCompoundAction *)pUVar22,local_60,(FOptimusAction *)pUVar18);
      if (local_60[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        paVar2 = &(local_60[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_60[0].WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_60[0].WeakReferenceCount.ReferenceController,1);
        }
      }
      uVar23 = (ulonglong)(int)(uint)local_120;
      pTVar27 = (TTuple<FString,FString> *)(local_128.Data + uVar23 * 0x20);
      local_res20 = (uint)local_120;
      uVar24 = uVar23;
      FVar26.Data = local_128.Data;
      do {
        while( true ) {
          if ((int)uVar23 != (int)uVar24) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if ((TTuple<FString,FString> *)FVar26.Data == pTVar27) {
            plVar20 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
            pUVar18 = pUVar14;
            if ((plVar20 != (longlong *)0x0) &&
               (pUVar21 = (UOptimusDeformer *)(**(code **)(*plVar20 + 8))(plVar20),
               pUVar21 != (UOptimusDeformer *)0x0)) {
              pUVar12 = UOptimusDeformer::StaticClass();
              iVar11 = (int)pUVar12->_padding_;
              if ((iVar11 <= *(int *)(pUVar21->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar11 * 8)
                  == &pUVar12->_padding_)) {
                pUVar18 = (UOptimusNode *)UOptimusDeformer::GetActionStack(pUVar21);
              }
            }
            local_a0.Object = (FOptimusAction *)pUVar22;
            pUVar13 = ::operator_new(0x18);
            local_a0.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pUVar14;
            if (pUVar13 != (UOptimusNode *)0x0) {
              *(undefined4 *)&pUVar13->_padding_ = 1;
              pUVar13->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              *(undefined4 *)((longlong)&pUVar13->_padding_ + 4) = 1;
              pUVar13->_padding_ = (longlong)pUVar22;
              local_a0.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pUVar13;
            }
            bVar9 = UOptimusActionStack::RunAction((UOptimusActionStack *)pUVar18,&local_a0);
            if (bVar9) {
              plVar20 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
              pUVar22 = pUVar14;
              if ((plVar20 != (longlong *)0x0) &&
                 (pUVar21 = (UOptimusDeformer *)(**(code **)(*plVar20 + 8))(plVar20),
                 pUVar21 != (UOptimusDeformer *)0x0)) {
                pUVar12 = UOptimusDeformer::StaticClass();
                iVar11 = (int)pUVar12->_padding_;
                if ((iVar11 <= *(int *)(pUVar21->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
                    &pUVar12->_padding_)) {
                  pUVar22 = (UOptimusNode *)UOptimusDeformer::GetActionStack(pUVar21);
                }
              }
              this_00 = (UObjectBaseUtility *)pUVar22->_padding_;
              if (this_00 != (UObjectBaseUtility *)0x0) {
                pUVar12 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
                pUVar14 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar12);
              }
              pUVar14 = (UOptimusNode *)
                        (**(code **)(pUVar14->_padding_ + 0x20))(pUVar14,&local_f8->Pins);
            }
            DestructItems<TTuple<FString,FString>,int>
                      ((TTuple<FString,FString> *)local_128.Data,(uint)local_120);
            if ((TTuple<FString,FString> *)local_128.Data != (TTuple<FString,FString> *)0x0) {
              FMemory::Free(local_128.Data);
            }
            return pUVar14;
          }
          pTVar19 = MakeShared<FOptimusNodeGraphAction_AddLink,1,FString_const_&,FString_const_&>
                              (&local_b0,(FString *)FVar26.Data,
                               (FString *)&((TTuple<FString,FString> *)FVar26.Data)->field_0x10);
          pTVar17 = (pTVar19->SharedReferenceCount).ReferenceController;
          pFVar7 = pTVar19->Object;
          if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b0.SharedReferenceCount.ReferenceController);
          }
          else {
            LOCK();
            pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b0.SharedReferenceCount.ReferenceController);
            LOCK();
            pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar25 = (((FString *)&pUVar22->_padding_)->Data).AllocatorInstance.Data;
          local_108 = pFVar7;
          local_100 = pTVar17;
          if (((pFVar25 <= (FScriptContainerElement *)&local_108) &&
              ((FScriptContainerElement *)&local_108 <
               pFVar25 + (longlong)*(int *)((longlong)&pUVar22->_padding_ + 4) * 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            pUVar14 = (UOptimusNode *)(*pcVar8)();
            return pUVar14;
          }
          iVar11 = (int)pUVar22->_padding_;
          piVar1 = (int *)((longlong)&pUVar22->_padding_ + 4);
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)&pUVar22->_padding_,piVar1);
          }
          *(int *)&pUVar22->_padding_ = iVar11 + 1;
          pFVar25 = (((FString *)&pUVar22->_padding_)->Data).AllocatorInstance.Data +
                    (longlong)iVar11 * 0x10;
          *(FOptimusNodeGraphAction_AddLink **)pFVar25 = local_108;
          *(TReferenceControllerBase<1> **)(pFVar25 + 8) = local_100;
          local_100 = (TReferenceControllerBase<1> *)0x0;
          local_108 = (FOptimusNodeGraphAction_AddLink *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          if (pTVar17 != (TReferenceControllerBase<1> *)0x0) break;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
LAB_14e195984:
          uVar23 = local_120 & 0xffffffff;
          FVar26.Data = FVar26.Data + 0x20;
          uVar24 = (ulonglong)local_res20;
        }
        LOCK();
        pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        LOCK();
        paVar2 = &pTVar17->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 != (atomic<int>)0x1) goto LAB_14e195984;
        (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
        uVar23 = local_120 & 0xffffffff;
        FVar26.Data = FVar26.Data + 0x20;
        uVar24 = (ulonglong)local_res20;
      } while( true );
    }
  }
  if (1 < (byte)LogOptimusCore._0_1_) {
    local_d8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_d8,&local_c0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  return (UOptimusNode *)0x0;
}

// ConvertToFunction @ 14e195e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e196d39) */
/* WARNING: Removing unreachable block (ram,0x00014e196d47) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UOptimusNodeGraph::ConvertToFunction(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  atomic<int> *paVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  FOptimusAction *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  UOptimusNodeGraph *this_00;
  undefined8 uVar14;
  UOptimusNode_GraphTerminal *pUVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  UClass *pUVar20;
  UOptimusNode_SubGraphReference *pUVar21;
  UOptimusNodeSubGraph *pUVar22;
  IOptimusNodeGraphCollectionOwner *pIVar23;
  FName FVar24;
  FString *pFVar25;
  UOptimusNode_GraphTerminal *pUVar26;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar27;
  UOptimusNode_GraphTerminal *pUVar28;
  FString *pFVar29;
  UOptimusNode *pUVar30;
  UOptimusActionStack *pUVar31;
  TReferenceControllerBase<1> *pTVar32;
  TReferenceControllerBase<1> *pTVar33;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar34;
  longlong *plVar35;
  UOptimusDeformer *pUVar36;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> *pTVar37;
  undefined8 *puVar38;
  byte bVar39;
  ulonglong uVar40;
  wchar_t *pwVar41;
  FScriptContainerElement *pFVar42;
  ForAnyElementType FVar43;
  FScriptContainerElement *pFVar44;
  longlong *plVar45;
  uint uVar46;
  wchar_t *pwVar47;
  int iVar48;
  uint *puVar49;
  uint uVar50;
  atomic<int> aVar51;
  TTuple<FString,FString> *pTVar52;
  undefined1 auStackY_828 [32];
  undefined1 local_7d8;
  undefined1 local_7d7;
  undefined1 local_7d6;
  undefined1 local_7d5;
  undefined1 local_7d4;
  undefined1 local_7d3;
  undefined1 local_7d2;
  undefined1 local_7d1;
  undefined8 local_7d0;
  ForAnyElementType local_7c8;
  undefined8 local_7c0;
  <lambda_1> local_7b8;
  undefined1 local_7b7;
  undefined1 local_7b6 [6];
  FString local_7b0;
  UOptimusNodeGraph *local_7a0;
  FName local_798;
  undefined1 local_790 [16];
  FString local_780;
  FString local_770;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_760;
  UOptimusNodeSubGraph *local_750;
  longlong *local_748;
  longlong *local_740;
  undefined8 uStack_738;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  int local_718;
  undefined4 uStack_714;
  TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> local_710;
  TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> local_700;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_6f0;
  undefined1 local_6e0 [16];
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  longlong local_600;
  longlong lStack_5f8;
  FString local_5f0;
  IOptimusPathResolver *local_5e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5d8;
  int local_5b8;
  UOptimusNode_GraphTerminal *local_5b0;
  UOptimusNode_GraphTerminal *local_5a8;
  FName local_5a0;
  FName local_598;
  FName local_590;
  FName local_588;
  FName local_580;
  FName local_578;
  FOptimusActionScope local_570;
  FName local_568;
  IOptimusPathResolver *local_560;
  UOptimusNode_SubGraphReference *local_558;
  TSharedPtr<FOptimusAction,1> local_550;
  TSharedPtr<FOptimusAction,1> local_540;
  FString local_530;
  FString local_520;
  TSharedPtr<FOptimusAction,1> local_510;
  TSharedPtr<FOptimusAction,1> local_500;
  TSharedPtr<FOptimusAction,1> local_4f0;
  TSharedPtr<FOptimusAction,1> local_4e0;
  longlong *local_4d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4c8;
  undefined8 uStack_4a8;
  longlong *local_4a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_498;
  undefined8 uStack_478;
  FString local_470;
  FString local_460;
  TSharedPtr<FOptimusAction,1> local_450;
  TSharedPtr<FOptimusAction,1> local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  undefined1 local_3c0 [32];
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  void *local_2f8 [2];
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> local_2e8;
  void *local_2d8 [2];
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> local_2c8;
  FString local_2b8 [4];
  code *local_278 [2];
  undefined **local_268;
  code *local_260;
  undefined8 local_250;
  code *local_248 [2];
  undefined **local_238;
  UOptimusNodeSubGraph *local_230;
  undefined8 local_220;
  code *local_218 [2];
  undefined **local_208;
  longlong local_200;
  longlong lStack_1f8;
  undefined8 local_1f0;
  code *local_1e8 [2];
  undefined **local_1d8;
  longlong local_1d0;
  longlong lStack_1c8;
  undefined8 local_1c0;
  code *local_1b8 [5];
  undefined8 *local_190;
  FString local_188;
  FString local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  undefined4 local_12c;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_828;
  if (param_1 == (UOptimusNode *)0x0) {
    return false;
  }
  local_7a0 = this;
  pUVar20 = UOptimusNode_SubGraphReference::StaticClass();
  iVar48 = (int)pUVar20->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar48) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar48 * 8)
      != &pUVar20->_padding_) {
    return false;
  }
  pUVar21 = Cast<UOptimusNode_SubGraphReference,UOptimusNode>(param_1);
  local_6e0._8_8_ = pUVar21;
  if (pUVar21 == (UOptimusNode_SubGraphReference *)0x0) {
    pFVar25 = GetTypeName<UOptimusNode_SubGraphReference>(&local_178);
    pwVar41 = L"";
    if ((pFVar25->Data).ArrayNum == 0) {
      pwVar47 = L"";
    }
    else {
      pwVar47 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
    pFVar25 = GetFullNameForCastLogError<UOptimusNode>(&local_188,param_1);
    if ((pFVar25->Data).ArrayNum != 0) {
      pwVar41 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar41,pwVar47);
  }
  pUVar22 = (UOptimusNodeSubGraph *)(**(code **)(pUVar21->_padding_ + 0x10))();
  plVar35 = &this->_padding_;
  local_750 = pUVar22;
  local_748 = plVar35;
  pIVar23 = (IOptimusNodeGraphCollectionOwner *)(**(code **)(this->_padding_ + 0x18))(plVar35);
  FVar24 = (FName)Cast<UOptimusDeformer,IOptimusNodeGraphCollectionOwner>(pIVar23);
  local_568 = FVar24;
  if (FVar24 == (FName)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7701470802381637311>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                        ,0x6bf,"Deformer");
    if (!bVar16) {
      return false;
    }
    pcVar5 = (code *)swi(3);
    uVar17 = (*pcVar5)();
    return (bool)uVar17;
  }
  local_560 = GetPathResolver(this);
  ::FName::FName(&local_798,L"NewFunction");
  local_798 = Optimus::GetUniqueNameForScope((UObject *)local_3c0,FVar24);
  local_798 = *(FName *)local_798;
  pFVar25 = ::FName::ToString(&local_798,&local_3a0);
  ::FString::FString(&local_7b0,pFVar25);
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  local_7d0 = 1;
  pUVar26 = UOptimusNodeSubGraph::GetTerminalNode(pUVar22,Entry);
  local_5a8 = pUVar26;
  local_5b0 = UOptimusNodeSubGraph::GetTerminalNode(pUVar22,Return);
  lVar4 = pUVar26->_padding_;
  lVar6 = pUVar26->_padding_;
  lVar7 = pUVar21->_padding_;
  lVar8 = pUVar21->_padding_;
  lVar9 = local_5b0->_padding_;
  lVar10 = local_5b0->_padding_;
  ::FName::FName((FName *)(local_3c0 + 8),L"FunctionReferenceNode");
  Optimus::GetUniqueNameForScope((UObject *)local_6e0,(FName)this);
  ::FName::ToString((FName *)local_6e0,&local_520);
  (**(code **)(*plVar35 + 0x20))(plVar35,&local_530);
  uVar14 = local_6e0._8_8_;
  pFVar42 = (this->Links).AllocatorInstance.Data;
  iVar48 = (this->Links).ArrayNum;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  pFVar44 = pFVar42 + (longlong)iVar48 * 8;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  while( true ) {
    if ((this->Links).ArrayNum != iVar48) {
      local_7d8 = 0;
      `TCheckedPointerIterator<UOptimusNodeLink_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_7d8);
    }
    pUVar15 = local_5a8;
    pUVar26 = local_5b0;
    if (pFVar42 == pFVar44) break;
    lVar2 = *(longlong *)pFVar42;
    pUVar21 = (UOptimusNode_SubGraphReference *)
              UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x30));
    if (pUVar21 == (UOptimusNode_SubGraphReference *)uVar14) {
      FVar24 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x30));
      pFVar25 = ::FName::ToString((FName *)FVar24,&local_390);
      ConstructPath(&local_6d0,&local_530,&local_520,pFVar25);
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
      UOptimusNodePin::GetPinPath(*(UOptimusNodePin **)(lVar2 + 0x28),&local_630);
      pwVar41 = L"";
      if (local_630.Data.ArrayNum == 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_630.Data.ArrayNum + -1;
        pwVar41 = (wchar_t *)local_630.Data.AllocatorInstance.Data;
      }
      uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar41);
      pTVar27 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                            *)local_128,uVar18,&local_630);
      pFVar3 = (pTVar27->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_6d0) &&
          ((FScriptContainerElement *)&local_6d0 < pFVar3 + (longlong)pTVar27->ArrayMax * 0x10)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      iVar19 = pTVar27->ArrayNum;
      if (iVar19 == pTVar27->ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar27->AllocatorInstance,&pTVar27->ArrayMax);
      }
      pTVar27->ArrayNum = iVar19 + 1;
      ::FString::FString((FString *)((pTVar27->AllocatorInstance).Data + (longlong)iVar19 * 0x10),
                         &local_6d0);
      FVar43.Data = local_6d0.Data.AllocatorInstance.Data;
      if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_630.Data.AllocatorInstance.Data);
        FVar43.Data = local_6d0.Data.AllocatorInstance.Data;
      }
LAB_14e1963e1:
      if (FVar43.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar43.Data);
      }
    }
    else {
      pUVar21 = (UOptimusNode_SubGraphReference *)
                UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x28));
      if (pUVar21 == (UOptimusNode_SubGraphReference *)uVar14) {
        FVar24 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x28));
        pFVar25 = ::FName::ToString((FName *)FVar24,&local_380);
        ConstructPath(&local_620,&local_530,&local_520,pFVar25);
        if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data.AllocatorInstance.Data);
        }
        UOptimusNodePin::GetPinPath(*(UOptimusNodePin **)(lVar2 + 0x30),&local_6c0);
        pwVar41 = L"";
        if (local_620.Data.ArrayNum == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = local_620.Data.ArrayNum + -1;
          pwVar41 = (wchar_t *)local_620.Data.AllocatorInstance.Data;
        }
        uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar41);
        pTVar27 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)local_128,uVar18,&local_620);
        pFVar3 = (pTVar27->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_6c0) &&
            ((FScriptContainerElement *)&local_6c0 < pFVar3 + (longlong)pTVar27->ArrayMax * 0x10))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar5 = (code *)swi(3);
          uVar17 = (*pcVar5)();
          return (bool)uVar17;
        }
        iVar19 = pTVar27->ArrayNum;
        if (iVar19 == pTVar27->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar27->AllocatorInstance,&pTVar27->ArrayMax);
        }
        pTVar27->ArrayNum = iVar19 + 1;
        ::FString::FString((FString *)((pTVar27->AllocatorInstance).Data + (longlong)iVar19 * 0x10),
                           &local_6c0);
        FVar43.Data = local_620.Data.AllocatorInstance.Data;
        if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
          FVar43.Data = local_620.Data.AllocatorInstance.Data;
        }
        goto LAB_14e1963e1;
      }
    }
    pFVar42 = pFVar42 + 8;
  }
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  plVar45 = (longlong *)local_750->_padding_;
  iVar48 = (int)local_750->_padding_;
  plVar35 = plVar45 + iVar48;
  while( true ) {
    pUVar22 = local_750;
    if ((int)local_750->_padding_ != iVar48) {
      local_7d7 = 0;
      `TCheckedPointerIterator<UOptimusNodeLink_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_7d7);
    }
    if (plVar45 == plVar35) break;
    lVar2 = *plVar45;
    pUVar28 = (UOptimusNode_GraphTerminal *)
              UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x30));
    if (pUVar28 == pUVar26) {
      FVar24 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x30));
      pFVar25 = ::FName::ToString((FName *)FVar24,&local_368);
      pFVar29 = ::FName::ToString(&UOptimusNode_GraphTerminal::ReturnNodeName,local_2b8);
      ConstructPath(&local_6b0,&local_7b0,pFVar29,pFVar25);
      if (local_2b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8[0].Data.AllocatorInstance.Data);
      }
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      FVar24 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x28));
      pFVar25 = ::FName::ToString((FName *)FVar24,&local_358);
      pUVar30 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x28));
      local_5a0 = (FName)pUVar30->_padding_;
      ::FName::ToString(&local_5a0,&local_430);
      ConstructPath(&local_610,&local_7b0,&local_430,pFVar25);
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      pwVar41 = L"";
      if (local_610.Data.ArrayNum == 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_610.Data.ArrayNum + -1;
        pwVar41 = (wchar_t *)local_610.Data.AllocatorInstance.Data;
      }
      uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar41);
      pTVar27 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                            *)local_d8,uVar18,&local_610);
      pFVar44 = (pTVar27->AllocatorInstance).Data;
      if (((pFVar44 <= (FScriptContainerElement *)&local_6b0) &&
          ((FScriptContainerElement *)&local_6b0 < pFVar44 + (longlong)pTVar27->ArrayMax * 0x10)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      iVar19 = pTVar27->ArrayNum;
      if (iVar19 == pTVar27->ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar27->AllocatorInstance,&pTVar27->ArrayMax);
      }
      pTVar27->ArrayNum = iVar19 + 1;
      ::FString::FString((FString *)((pTVar27->AllocatorInstance).Data + (longlong)iVar19 * 0x10),
                         &local_6b0);
      FVar43.Data = local_6b0.Data.AllocatorInstance.Data;
      if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_610.Data.AllocatorInstance.Data);
        FVar43.Data = local_6b0.Data.AllocatorInstance.Data;
      }
    }
    else {
      pUVar28 = (UOptimusNode_GraphTerminal *)
                UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x28));
      if (pUVar28 == pUVar15) {
        FVar24 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x28));
        pFVar25 = ::FName::ToString((FName *)FVar24,&local_338);
        pFVar29 = ::FName::ToString(&UOptimusNode_GraphTerminal::EntryNodeName,&local_348);
        ConstructPath(&local_680,&local_7b0,pFVar29,pFVar25);
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        FVar24 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x30));
        pFVar25 = ::FName::ToString((FName *)FVar24,&local_328);
        pUVar30 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x30));
        local_598 = (FName)pUVar30->_padding_;
        ::FName::ToString(&local_598,&local_420);
        ConstructPath(&local_6a0,&local_7b0,&local_420,pFVar25);
        if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_420.Data.AllocatorInstance.Data);
        }
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        pwVar41 = L"";
        if (local_680.Data.ArrayNum == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = local_680.Data.ArrayNum + -1;
          pwVar41 = (wchar_t *)local_680.Data.AllocatorInstance.Data;
        }
        uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar41);
        pTVar27 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)local_d8,uVar18,&local_680);
        pFVar44 = (pTVar27->AllocatorInstance).Data;
        if (((pFVar44 <= (FScriptContainerElement *)&local_6a0) &&
            ((FScriptContainerElement *)&local_6a0 < pFVar44 + (longlong)pTVar27->ArrayMax * 0x10))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar5 = (code *)swi(3);
          uVar17 = (*pcVar5)();
          return (bool)uVar17;
        }
        iVar19 = pTVar27->ArrayNum;
        if (iVar19 == pTVar27->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar27->AllocatorInstance,&pTVar27->ArrayMax);
        }
        pTVar27->ArrayNum = iVar19 + 1;
        ::FString::FString((FString *)((pTVar27->AllocatorInstance).Data + (longlong)iVar19 * 0x10),
                           &local_6a0);
        FVar43.Data = local_680.Data.AllocatorInstance.Data;
        if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
          FVar43.Data = local_680.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar24 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x28));
        pFVar25 = ::FName::ToString((FName *)FVar24,&local_318);
        pUVar30 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x28));
        local_590 = (FName)pUVar30->_padding_;
        ::FName::ToString(&local_590,&local_410);
        ConstructPath(&local_670,&local_7b0,&local_410,pFVar25);
        if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_410.Data.AllocatorInstance.Data);
        }
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        FVar24 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x30));
        pFVar25 = ::FName::ToString((FName *)FVar24,&local_308);
        pUVar30 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x30));
        local_588 = (FName)pUVar30->_padding_;
        ::FName::ToString(&local_588,&local_400);
        ConstructPath(&local_690,&local_7b0,&local_400,pFVar25);
        if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Data.AllocatorInstance.Data);
        }
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        pwVar41 = L"";
        if (local_670.Data.ArrayNum == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = local_670.Data.ArrayNum + -1;
          pwVar41 = (wchar_t *)local_670.Data.AllocatorInstance.Data;
        }
        uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar41);
        pTVar27 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)local_d8,uVar18,&local_670);
        pFVar44 = (pTVar27->AllocatorInstance).Data;
        if (((pFVar44 <= (FScriptContainerElement *)&local_690) &&
            ((FScriptContainerElement *)&local_690 < pFVar44 + (longlong)pTVar27->ArrayMax * 0x10))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar5 = (code *)swi(3);
          uVar17 = (*pcVar5)();
          return (bool)uVar17;
        }
        iVar19 = pTVar27->ArrayNum;
        if (iVar19 == pTVar27->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar27->AllocatorInstance,&pTVar27->ArrayMax);
        }
        pTVar27->ArrayNum = iVar19 + 1;
        ::FString::FString((FString *)((pTVar27->AllocatorInstance).Data + (longlong)iVar19 * 0x10),
                           &local_690);
        FVar43.Data = local_670.Data.AllocatorInstance.Data;
        if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_690.Data.AllocatorInstance.Data);
          FVar43.Data = local_670.Data.AllocatorInstance.Data;
        }
      }
    }
    if (FVar43.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar43.Data);
    }
    plVar45 = plVar45 + 1;
  }
  pTVar33 = (TReferenceControllerBase<1> *)0x0;
  local_640.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::CopyToEmpty<UOptimusNode_*,int>
            (&local_640,(UOptimusNode **)pUVar22->_padding_,(int)pUVar22->_padding_,0);
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UOptimusNodeGraph::ConvertToFunction_::__l2::<lambda_1>_>(&local_640,&local_7b8);
  local_760.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_760.ArrayNum = 0;
  local_760.ArrayMax = 0;
  local_700.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_700.ArrayNum = 0;
  local_700.ArrayMax = 0;
  local_710.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_710.ArrayNum = 0;
  local_710.ArrayMax = 0;
  GatherRelatedObjects(&local_640,&local_760,&local_700,&local_710);
  iVar48 = local_700.ArrayNum;
  uVar40 = (ulonglong)local_700.ArrayNum;
  local_7c8.Data = (FScriptContainerElement *)0x0;
  local_7c0 = 0;
  pFVar44 = local_700.AllocatorInstance.Data + uVar40 * 8;
  FVar43.Data = local_700.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar40 != iVar48) {
      local_7d6 = 0;
      `TCheckedPointerIterator<UOptimusNodePair_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_7d6);
    }
    if (FVar43.Data == pFVar44) break;
    local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_660.Data.ArrayNum = 0;
    local_660.Data.ArrayMax = 0;
    lVar2 = *(longlong *)(*(longlong *)FVar43.Data + 0x30);
    local_580 = *(FName *)(*(longlong *)(*(longlong *)FVar43.Data + 0x28) + 0x18);
    ::FName::ToString(&local_580,&local_3f0);
    ConstructPath(&local_470,&local_7b0,&local_3f0,&local_660);
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
    if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_660.Data.AllocatorInstance.Data);
    }
    local_578 = *(FName *)(lVar2 + 0x18);
    local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_650.Data.ArrayNum = 0;
    local_650.Data.ArrayMax = 0;
    ::FName::ToString(&local_578,&local_3e0);
    ConstructPath(&local_3d0,&local_7b0,&local_3e0,&local_650);
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_650.Data.AllocatorInstance.Data);
    }
    ::FString::FString((FString *)local_790,&local_470);
    ::FString::FString(&local_780,&local_3d0);
    if (((local_7c8.Data <= (TTuple<FString,FString> *)local_790) &&
        ((FScriptContainerElement *)local_790 < local_7c8.Data + (longlong)local_7c0._4_4_ * 0x20))
       && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    if ((int)local_7c0 == local_7c0._4_4_) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_7c8,(int *)((longlong)&local_7c0 + 4));
      pFVar42 = local_7c8.Data + (longlong)iVar19 * 0x20;
      local_7c0 = CONCAT44(local_7c0._4_4_,iVar19 + 1);
    }
    else {
      pFVar42 = local_7c8.Data + (longlong)(int)local_7c0 * 0x20;
      local_7c0 = CONCAT44(local_7c0._4_4_,(int)local_7c0 + 1);
    }
    *(undefined8 *)pFVar42 = 0;
    *(undefined8 *)pFVar42 = local_790._0_8_;
    *(undefined4 *)(pFVar42 + 8) = local_790._8_4_;
    *(undefined4 *)(pFVar42 + 0xc) = local_790._12_4_;
    *(undefined8 *)(pFVar42 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar42 + 0x10) = local_780.Data.AllocatorInstance.Data;
    *(int *)(pFVar42 + 0x18) = local_780.Data.ArrayNum;
    *(int *)(pFVar42 + 0x1c) = local_780.Data.ArrayMax;
    local_780.Data.ArrayNum = 0;
    local_780.Data.ArrayMax = 0;
    local_780.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_790._8_8_ = 0;
    local_790._0_8_ = (FScriptContainerElement *)0x0;
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
    uVar40 = local_700._8_8_ & 0xffffffff;
    FVar43.Data = FVar43.Data + 8;
  }
  ::FString::FString(&local_460,L"Convert To Function");
  this_00 = local_7a0;
  local_570.ActionStack = GetActionStack(local_7a0);
  UOptimusActionStack::OpenActionScope(local_570.ActionStack,&local_460);
  FOptimusActionScope::~FOptimusActionScope(&local_570);
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  pUVar31 = GetActionStack(this_00);
  pFVar25 = (FString *)
            (**(code **)(*(longlong *)((longlong)local_568 + 0x38) + 0x20))
                      ((longlong)local_568 + 0x38,local_2f8);
  pTVar32 = ::operator_new(0x90);
  pTVar13 = _UNK_150651568;
  pFVar12 = ___xmm_00000000000000000000000000000010;
  aVar51 = SUB84(local_7d0,0);
  if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
    local_510.Object = ___xmm_00000000000000000000000000000010;
    local_510.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pTVar32 = pTVar33;
  }
  else {
    pTVar32->SharedReferenceCount = aVar51;
    pTVar32->WeakReferenceCount = aVar51;
    local_220 = 0;
    pTVar32->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddGraph___00_SharedPointerInternals__6B_
    ;
    local_238 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::`37'::<lambda_2>,0,0>
                 ::_vftable_;
    local_230 = local_750;
    local_248[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_2>,bool,UOptimusNodeGraph_*>
                   ::Call;
    FOptimusNodeGraphAction_AddGraph::FOptimusNodeGraphAction_AddGraph
              ((FOptimusNodeGraphAction_AddGraph *)(pTVar32 + 1),pFVar25,Function,local_798,-1,
               (TFunction<bool___cdecl(UOptimusNodeGraph_*)> *)local_248);
    local_510.Object = (FOptimusAction *)(pTVar32 + 1);
    if ((local_510.Object == (FOptimusAction *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
    local_510.SharedReferenceCount.ReferenceController = pTVar32;
  }
  UOptimusActionStack::RunAction(pUVar31,&local_510);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  if (local_2f8[0] != (void *)0x0) {
    FMemory::Free(local_2f8[0]);
  }
  pUVar31 = GetActionStack(this_00);
  pUVar20 = UOptimusNode_GraphTerminal::StaticClass();
  pTVar32 = ::operator_new(0xa0);
  if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
    local_500.Object = pFVar12;
    local_500.SharedReferenceCount.ReferenceController = pTVar13;
    pTVar32 = pTVar33;
  }
  else {
    pTVar32->SharedReferenceCount = aVar51;
    pTVar32->WeakReferenceCount = aVar51;
    pTVar32->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_208 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::`37'::<lambda_3>,0,0>
                 ::_vftable_;
    local_218[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_3>,bool,UOptimusNode_*>
                   ::Call;
    local_1f0 = 0;
    local_200 = lVar4;
    lStack_1f8 = lVar6;
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)(pTVar32 + 1),&local_7b0,pUVar20,
               UOptimusNode_GraphTerminal::EntryNodeName,
               (TFunction<bool___cdecl(UOptimusNode_*)> *)local_218);
    local_500.Object = (FOptimusAction *)(pTVar32 + 1);
    if ((local_500.Object == (FOptimusAction *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
    local_500.SharedReferenceCount.ReferenceController = pTVar32;
  }
  UOptimusActionStack::RunAction(pUVar31,&local_500);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  pUVar31 = GetActionStack(this_00);
  pUVar20 = UOptimusNode_GraphTerminal::StaticClass();
  pTVar32 = ::operator_new(0xa0);
  if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
    local_4f0.Object = pFVar12;
    local_4f0.SharedReferenceCount.ReferenceController = pTVar13;
  }
  else {
    pTVar32->SharedReferenceCount = aVar51;
    pTVar32->WeakReferenceCount = aVar51;
    pTVar32->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_1d8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::`37'::<lambda_4>,0,0>
                 ::_vftable_;
    local_1e8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_4>,bool,UOptimusNode_*>
                   ::Call;
    local_1c0 = 0;
    local_1d0 = lVar9;
    lStack_1c8 = lVar10;
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)(pTVar32 + 1),&local_7b0,pUVar20,
               UOptimusNode_GraphTerminal::ReturnNodeName,
               (TFunction<bool___cdecl(UOptimusNode_*)> *)local_1e8);
    local_4f0.Object = (FOptimusAction *)(pTVar32 + 1);
    if ((local_4f0.Object == (FOptimusAction *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
    pTVar33 = pTVar32;
    local_4f0.SharedReferenceCount.ReferenceController = pTVar32;
  }
  UOptimusActionStack::RunAction(pUVar31,&local_4f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  iVar48 = local_710.ArrayNum;
  uVar40 = (ulonglong)local_710.ArrayNum;
  pFVar44 = local_710.AllocatorInstance.Data + uVar40 * 8;
  FVar43.Data = local_710.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar40 != iVar48) {
      local_7d5 = 0;
      `TCheckedPointerIterator<UOptimusNodeSubGraph_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_7d5);
    }
    if (FVar43.Data == pFVar44) break;
    pUVar22 = *(UOptimusNodeSubGraph **)FVar43.Data;
    FVar24 = (FName)pUVar22->_padding_;
    pUVar31 = GetActionStack(this_00);
    DuplicateSubGraph(pUVar31,&local_7b0,pUVar22,FVar24);
    uVar40 = local_710._8_8_ & 0xffffffff;
    FVar43.Data = FVar43.Data + 8;
  }
  iVar48 = local_760.ArrayNum;
  uVar40 = (ulonglong)local_760.ArrayNum;
  pFVar44 = local_760.AllocatorInstance.Data + uVar40 * 8;
  FVar43.Data = local_760.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar40 != iVar48) {
      local_7d4 = 0;
      `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_7d4);
    }
    if (FVar43.Data == pFVar44) break;
    pUVar30 = *(UOptimusNode **)FVar43.Data;
    pUVar31 = GetActionStack(local_7a0);
    FVar24 = (FName)pUVar30->_padding_;
    pTVar33 = ::operator_new(0xb0);
    if (pTVar33 == (TReferenceControllerBase<1> *)0x0) {
      pTVar33 = (TReferenceControllerBase<1> *)0x0;
      local_4e0.Object = pFVar12;
      local_4e0.SharedReferenceCount.ReferenceController = pTVar13;
    }
    else {
      pTVar33->SharedReferenceCount = SUB84(local_7d0,0);
      pTVar33->WeakReferenceCount = SUB84(local_7d0,0);
      pTVar33->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_DuplicateNode___00_SharedPointerInternals__6B_
      ;
      local_250 = 0;
      local_268 = &
                  ___7__TFunction_OwnedObject_P6A_NPEAVUOptimusNode___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_260 = `UOptimusNodeGraph::ConvertToFunction'::__l45::<lambda_5>::<lambda_invoker_cdecl>;
      local_278[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(UOptimusNode_*),bool,UOptimusNode_*>::Call;
      FOptimusNodeGraphAction_DuplicateNode::FOptimusNodeGraphAction_DuplicateNode
                ((FOptimusNodeGraphAction_DuplicateNode *)(pTVar33 + 1),&local_7b0,pUVar30,FVar24,
                 (TFunction<bool___cdecl(UOptimusNode_*)> *)local_278);
      if (((FOptimusAction *)(pTVar33 + 1) == (FOptimusAction *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      local_4e0.Object = (FOptimusAction *)(pTVar33 + 1);
      local_4e0.SharedReferenceCount.ReferenceController = pTVar33;
    }
    UOptimusActionStack::RunAction(pUVar31,&local_4e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
    uVar40 = local_760._8_8_ & 0xffffffff;
    FVar43.Data = FVar43.Data + 8;
  }
  iVar48 = (int)local_7c0;
  uVar40 = (ulonglong)(int)local_7c0;
  pTVar52 = (TTuple<FString,FString> *)(local_7c8.Data + uVar40 * 0x20);
  FVar43.Data = local_7c8.Data;
  while( true ) {
    if ((int)uVar40 != iVar48) {
      local_7d3 = 0;
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_7d3);
    }
    if ((TTuple<FString,FString> *)FVar43.Data == pTVar52) break;
    pUVar31 = GetActionStack(local_7a0);
    pTVar33 = ::operator_new(0x68);
    if (pTVar33 == (TReferenceControllerBase<1> *)0x0) {
      pTVar33 = (TReferenceControllerBase<1> *)0x0;
      local_550.Object = pFVar12;
      local_550.SharedReferenceCount.ReferenceController = pTVar13;
    }
    else {
      paVar1 = &pTVar33[1].SharedReferenceCount;
      pTVar33->SharedReferenceCount = SUB84(local_7d0,0);
      pTVar33->WeakReferenceCount = SUB84(local_7d0,0);
      pTVar33->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNodePair___00_SharedPointerInternals__6B_
      ;
      pTVar33[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar33[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar33[2]._padding_ = 0;
      pTVar33[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
      pTVar33[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar33[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar33[3]._padding_ = 0;
      pTVar33[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar33[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar33[4]._padding_ = 0;
      ::FString::operator=((FString *)&pTVar33[2].SharedReferenceCount,(FString *)FVar43.Data);
      ::FString::operator=
                ((FString *)&pTVar33[3].SharedReferenceCount,
                 (FString *)&((TTuple<FString,FString> *)FVar43.Data)->field_0x10);
      pTVar33[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddNodePair__6B_;
      pTVar33[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar33[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar33[5]._padding_ = 0;
      pTVar33[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar33[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar33[6]._padding_ = 0;
      ::FString::PrintfImpl(&local_770,L"Add Node Pair");
      if (paVar1 == (atomic<int> *)&local_770) {
        if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_770.Data.AllocatorInstance.Data);
        }
      }
      else {
        if (*(void **)paVar1 != (void *)0x0) {
          FMemory::Free(*(void **)paVar1);
        }
        *(FScriptContainerElement **)paVar1 = local_770.Data.AllocatorInstance.Data;
        *(int *)&pTVar33[2]._padding_ = local_770.Data.ArrayNum;
        *(int *)((longlong)&pTVar33[2]._padding_ + 4) = local_770.Data.ArrayMax;
        local_770.Data.ArrayNum = 0;
        local_770.Data.ArrayMax = 0;
        local_770.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (((FOptimusAction *)(pTVar33 + 1) == (FOptimusAction *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      local_550.Object = (FOptimusAction *)(pTVar33 + 1);
      local_550.SharedReferenceCount.ReferenceController = pTVar33;
    }
    UOptimusActionStack::RunAction(pUVar31,&local_550);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
    uVar40 = local_7c0 & 0xffffffff;
    FVar43.Data = FVar43.Data + 0x20;
  }
  local_5d8._padding_._4_4_ = (undefined4)local_7d0;
  local_5d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  local_5d8._padding_._0_4_ = 0;
  local_5d8.UnvisitedBitMask = 0xffffffff;
  local_5d8.CurrentBitIndex = 0;
  local_5d8.BaseBitIndex = 0;
  if (local_b0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5d8);
  }
  uStack_738 = CONCAT44(local_5d8._padding_._4_4_,(undefined4)local_5d8._padding_);
  local_740 = (longlong *)local_d8;
  uStack_728._4_4_ = local_5d8.CurrentBitIndex;
  uStack_728._0_4_ = local_5d8.UnvisitedBitMask;
  uStack_720._4_4_ = local_5d8._28_4_;
  uStack_720._0_4_ = local_5d8.BaseBitIndex;
  local_718 = local_d8._8_4_ - local_a4;
  pTStack_730 = local_5d8.Array;
  uStack_478 = CONCAT44(uStack_714,local_718);
  TStack_498.Array = local_5d8.Array;
  local_4a0 = local_740;
  TStack_498._padding_ = uStack_738;
  TStack_498._16_8_ = uStack_728;
  TStack_498._24_8_ = uStack_720;
  pTVar34 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_168,(TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),local_b0
                      );
  uStack_738 = pTVar34->_padding_;
  pTVar11 = pTVar34->Array;
  uStack_728._0_4_ = pTVar34->UnvisitedBitMask;
  uStack_728._4_4_ = pTVar34->CurrentBitIndex;
  uStack_720 = *(undefined8 *)&pTVar34->BaseBitIndex;
  pTStack_730 = pTVar11;
  while( true ) {
    plVar35 = local_4a0;
    iVar48 = uStack_728._4_4_;
    if ((int)local_4a0[1] - *(int *)((longlong)local_4a0 + 0x34) != (int)uStack_478) {
      local_7d2 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7d2);
    }
    plVar45 = local_748;
    if (((TStack_498.CurrentBitIndex == iVar48) && (TStack_498.Array == pTVar11)) &&
       (plVar35 == (longlong *)local_d8)) break;
    lVar4 = *plVar35;
    iVar48 = *(int *)(lVar4 + 0x18 + (longlong)TStack_498.CurrentBitIndex * 0x28);
    pFVar25 = (FString *)(lVar4 + (longlong)TStack_498.CurrentBitIndex * 0x28);
    pFVar44 = pFVar25[1].Data.AllocatorInstance.Data;
    pFVar42 = pFVar44 + (longlong)iVar48 * 0x10;
    while( true ) {
      if (pFVar25[1].Data.ArrayNum != iVar48) {
        local_7d1 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_7d1);
      }
      if (pFVar44 == pFVar42) break;
      plVar35 = (longlong *)(**(code **)(*plVar45 + 0x18))(plVar45);
      if ((plVar35 == (longlong *)0x0) ||
         (pUVar36 = (UOptimusDeformer *)(**(code **)(*plVar35 + 8))(plVar35),
         pUVar36 == (UOptimusDeformer *)0x0)) {
LAB_14e1975b1:
        pUVar31 = (UOptimusActionStack *)0x0;
      }
      else {
        pUVar20 = UOptimusDeformer::StaticClass();
        iVar19 = (int)pUVar20->_padding_;
        if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar19) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
            &pUVar20->_padding_)) goto LAB_14e1975b1;
        pUVar31 = UOptimusDeformer::GetActionStack(pUVar36);
      }
      pTVar37 = MakeShared<FOptimusNodeGraphAction_AddLink,1,FString_const_&,FString_const_&>
                          (&local_2e8,pFVar25,(FString *)pFVar44);
      local_450.Object = (FOptimusAction *)pTVar37->Object;
      local_450.SharedReferenceCount.ReferenceController =
           (pTVar37->SharedReferenceCount).ReferenceController;
      if (local_450.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_450.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_450.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UOptimusActionStack::RunAction(pUVar31,&local_450);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
      pFVar44 = pFVar44 + 0x10;
    }
    TStack_498.UnvisitedBitMask = TStack_498.UnvisitedBitMask & ~TStack_498._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_498);
  }
  plVar35 = (longlong *)(**(code **)(*local_748 + 0x18))(local_748);
  if ((plVar35 != (longlong *)0x0) &&
     (pUVar36 = (UOptimusDeformer *)(**(code **)(*plVar35 + 8))(plVar35),
     pUVar36 != (UOptimusDeformer *)0x0)) {
    pUVar20 = UOptimusDeformer::StaticClass();
    iVar48 = (int)pUVar20->_padding_;
    if ((iVar48 <= *(int *)(pUVar36->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar48 * 8) ==
        &pUVar20->_padding_)) {
      pUVar31 = UOptimusDeformer::GetActionStack(pUVar36);
      goto LAB_14e19768b;
    }
  }
  pUVar31 = (UOptimusActionStack *)0x0;
LAB_14e19768b:
  FVar43.Data = local_7b0.Data.AllocatorInstance.Data;
  local_5f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5f0.Data.ArrayNum = local_7b0.Data.ArrayNum;
  local_600 = lVar7;
  lStack_5f8 = lVar8;
  if (local_7b0.Data.ArrayNum == 0) {
    local_5f0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_7b0.Data.ArrayNum,0,(ForAnyElementType *)&local_5f0,local_7b0.Data.ArrayNum
               ,&local_5f0.Data.ArrayMax);
    memcpy(local_5f0.Data.AllocatorInstance.Data,FVar43.Data,(longlong)local_7b0.Data.ArrayNum * 2);
  }
  local_5e0 = local_560;
  pUVar20 = UOptimusNode_FunctionReference::StaticClass();
  pFVar25 = (FString *)(**(code **)(*plVar45 + 0x20))(plVar45,local_2d8);
  pTVar33 = ::operator_new(0xa0);
  if (pTVar33 == (TReferenceControllerBase<1> *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)0x0;
    local_540.Object = pFVar12;
    local_540.SharedReferenceCount.ReferenceController = pTVar13;
  }
  else {
    pTVar33->SharedReferenceCount = SUB84(local_7d0,0);
    pTVar33->WeakReferenceCount = SUB84(local_7d0,0);
    pTVar33->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_1b8[0] = (code *)0x0;
    puVar38 = FMemory::Malloc(0x30,8);
    *puVar38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::`37'::<lambda_6>,0,1>
                ::_vftable_;
    puVar38[1] = local_600;
    puVar38[2] = lStack_5f8;
    local_190 = puVar38;
    ::FString::FString((FString *)(puVar38 + 3),&local_5f0);
    puVar38[5] = local_5e0;
    if (puVar38 + 1 != (longlong *)0x0) {
      local_1b8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_6>,bool,UOptimusNode_*>
                     ::Call;
    }
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)(pTVar33 + 1),pFVar25,pUVar20,
               (FName)local_6e0._0_8_,(TFunction<bool___cdecl(UOptimusNode_*)> *)local_1b8);
    local_540.Object = (FOptimusAction *)(pTVar33 + 1);
    if ((local_540.Object == (FOptimusAction *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
    local_540.SharedReferenceCount.ReferenceController = pTVar33;
  }
  UOptimusActionStack::RunAction(pUVar31,&local_540);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  if (local_2d8[0] != (void *)0x0) {
    FMemory::Free(local_2d8[0]);
  }
  if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
  }
  uVar18 = (uint)local_7d0;
  local_558 = (UOptimusNode_SubGraphReference *)local_6e0._8_8_;
  local_6f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6f0.ArrayNum = uVar18;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,uVar18,0,&local_6f0.AllocatorInstance,uVar18,&local_6f0.ArrayMax);
  *(UOptimusNode_SubGraphReference **)local_6f0.AllocatorInstance.Data = local_558;
  RemoveNodesAndCount(local_7a0,&local_6f0);
  if (local_6f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f0.AllocatorInstance.Data);
  }
  uVar50 = local_100;
  iVar48 = 0;
  uStack_720._0_4_ = 0;
  uStack_728._4_4_ = 0;
  if (local_100 != 0) {
    puVar49 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar49 = local_108;
    }
    uVar46 = *puVar49;
    while (uVar46 == 0) {
      iVar48 = iVar48 + 1;
      uStack_720._0_4_ = (int)uStack_720 + 0x20;
      uStack_728._4_4_ = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar48)
      goto LAB_14e197963;
      uVar46 = puVar49[iVar48];
    }
    uVar18 = ~(uVar46 - 1) & uVar46;
    uVar40 = (ulonglong)uVar18 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_5b8 = (int)lVar4;
    uStack_728._4_4_ = (int)uStack_720 + -1 + local_5b8;
    if ((int)local_100 < (int)uStack_728._4_4_) {
      uStack_728._4_4_ = local_100;
    }
  }
LAB_14e197963:
  local_740 = (longlong *)local_128;
  uVar46 = local_100 & 0xffffffe0;
  pTStack_730 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  local_718 = local_128._8_4_ - local_f4;
  uStack_728._0_4_ = 0xffffffff;
  uStack_738 = CONCAT44(uVar18,iVar48);
  uStack_720._4_4_ = local_12c;
  TStack_4c8._padding_ = uStack_738;
  iVar48 = (int)local_100 >> 5;
  uStack_4a8 = CONCAT44(uStack_714,local_718);
  bVar39 = (byte)local_100;
  local_7d0._0_4_ = local_100;
  TStack_4c8.BaseBitIndex = (int)uStack_720;
  TStack_4c8._28_4_ = local_12c;
  TStack_4c8.UnvisitedBitMask = 0xffffffff;
  TStack_4c8.CurrentBitIndex = uStack_728._4_4_;
  local_4d0 = local_740;
  TStack_4c8.Array = pTStack_730;
  if (((int)local_100 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    uVar17 = (*pcVar5)();
    return (bool)uVar17;
  }
  if (uVar50 != local_100) {
    puVar49 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar49 = local_108;
    }
    uVar18 = -1 << (bVar39 & 0x1f) & puVar49[iVar48];
    while (uVar18 == 0) {
      iVar48 = iVar48 + 1;
      uVar46 = uVar46 + 0x20;
      if ((int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5 < iVar48) {
        local_7d0._0_4_ = local_100;
        uVar50 = local_100;
        goto LAB_14e197a90;
      }
      uVar18 = puVar49[iVar48];
    }
    uVar40 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar50 = (int)lVar4 + -1 + uVar46;
    local_7d0._0_4_ = uVar50;
    if ((int)local_100 < (int)uVar50) {
      uVar50 = local_100;
      local_7d0._0_4_ = local_100;
    }
  }
LAB_14e197a90:
  do {
    plVar35 = local_4d0;
    if ((int)local_4d0[1] - *(int *)((longlong)local_4d0 + 0x34) != (int)uStack_4a8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7b7);
    }
    plVar45 = local_748;
    if (((TStack_4c8.CurrentBitIndex == uVar50) &&
        (TStack_4c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar35 == (longlong *)local_128)) {
      DestructItems<TTuple<FString,FString>,int>
                ((TTuple<FString,FString> *)local_7c8.Data,(int)local_7c0);
      if ((TTuple<FString,FString> *)local_7c8.Data != (TTuple<FString,FString> *)0x0) {
        FMemory::Free(local_7c8.Data);
      }
      if (local_710.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_710.AllocatorInstance.Data);
      }
      if (local_700.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_700.AllocatorInstance.Data);
      }
      if (local_760.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_760.AllocatorInstance.Data);
      }
      if (local_640.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_640.AllocatorInstance.Data);
      }
      local_90 = 0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      local_e0 = 0;
      if (local_e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_128);
      if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data.AllocatorInstance.Data);
      }
      if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_520.Data.AllocatorInstance.Data);
      }
      if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
      }
      return true;
    }
    lVar4 = *plVar35;
    iVar48 = *(int *)(lVar4 + 0x18 + (longlong)TStack_4c8.CurrentBitIndex * 0x28);
    pFVar25 = (FString *)(lVar4 + (longlong)TStack_4c8.CurrentBitIndex * 0x28);
    pFVar44 = pFVar25[1].Data.AllocatorInstance.Data;
    pFVar42 = pFVar44 + (longlong)iVar48 * 0x10;
    while( true ) {
      if (pFVar25[1].Data.ArrayNum != iVar48) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_7b6);
      }
      if (pFVar44 == pFVar42) break;
      plVar35 = (longlong *)(**(code **)(*plVar45 + 0x18))(plVar45);
      if ((plVar35 == (longlong *)0x0) ||
         (pUVar36 = (UOptimusDeformer *)(**(code **)(*plVar35 + 8))(plVar35),
         pUVar36 == (UOptimusDeformer *)0x0)) {
LAB_14e197b81:
        pUVar31 = (UOptimusActionStack *)0x0;
      }
      else {
        pUVar20 = UOptimusDeformer::StaticClass();
        iVar19 = (int)pUVar20->_padding_;
        if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar19) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
            &pUVar20->_padding_)) goto LAB_14e197b81;
        pUVar31 = UOptimusDeformer::GetActionStack(pUVar36);
      }
      pTVar37 = MakeShared<FOptimusNodeGraphAction_AddLink,1,FString_const_&,FString_const_&>
                          (&local_2c8,pFVar25,(FString *)pFVar44);
      local_440.Object = (FOptimusAction *)pTVar37->Object;
      local_440.SharedReferenceCount.ReferenceController =
           (pTVar37->SharedReferenceCount).ReferenceController;
      if (local_440.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_440.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_440.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UOptimusActionStack::RunAction(pUVar31,&local_440);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
      pFVar44 = pFVar44 + 0x10;
    }
    TStack_4c8.UnvisitedBitMask = TStack_4c8.UnvisitedBitMask & ~TStack_4c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4c8);
    uVar50 = (uint)local_7d0;
  } while( true );
}

// ConvertToSubGraph @ 14e197d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e198b89) */
/* WARNING: Removing unreachable block (ram,0x00014e198b97) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UOptimusNodeGraph::ConvertToSubGraph(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  atomic<int> *paVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  FOptimusAction *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  UOptimusNodeGraph *this_00;
  UOptimusNode_GraphTerminal *pUVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  atomic<int> aVar18;
  UClass *pUVar19;
  UOptimusNode_FunctionReference *pUVar20;
  UOptimusNodeSubGraph *pUVar21;
  FString *pFVar22;
  UOptimusNode_GraphTerminal *pUVar23;
  UOptimusNode_FunctionReference *pUVar24;
  FName FVar25;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar26;
  UOptimusNode_GraphTerminal *pUVar27;
  FString *pFVar28;
  UOptimusNode *pUVar29;
  UOptimusActionStack *pUVar30;
  TReferenceControllerBase<1> *pTVar31;
  TReferenceControllerBase<1> *pTVar32;
  longlong *plVar33;
  UOptimusDeformer *pUVar34;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> *pTVar35;
  byte bVar36;
  ulonglong uVar37;
  wchar_t *pwVar38;
  FScriptContainerElement *pFVar39;
  ForAnyElementType FVar40;
  TReferenceControllerBase<1> *pTVar41;
  FScriptContainerElement *pFVar42;
  longlong *plVar43;
  uint uVar44;
  int iVar45;
  uint *puVar46;
  TBitArray<FDefaultBitArrayAllocator> *pTVar47;
  TTuple<FString,FString> *pTVar48;
  undefined1 auStackY_7d8 [32];
  undefined1 local_788;
  undefined1 local_787;
  undefined1 local_786;
  undefined1 local_785;
  undefined1 local_784;
  undefined1 local_783;
  undefined1 local_782;
  undefined1 local_781;
  undefined8 local_780;
  ForAnyElementType local_778;
  undefined8 local_770;
  <lambda_1> local_768;
  undefined1 local_767;
  undefined1 local_766 [6];
  FString local_760;
  FName local_750;
  UOptimusNodeGraph *local_748;
  longlong *local_740;
  UOptimusNodeSubGraph *local_738;
  undefined1 local_730 [16];
  FString local_720;
  FString local_710;
  TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> local_700;
  TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> local_6f0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_6e0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_6d0;
  longlong *local_6c0;
  undefined8 uStack_6b8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6b0;
  uint uStack_6a8;
  uint uStack_6a4;
  int iStack_6a0;
  undefined4 uStack_69c;
  int local_698;
  undefined4 uStack_694;
  UOptimusNode_FunctionReference *local_690;
  FString local_688;
  FString local_678;
  undefined1 local_668 [8];
  FString local_660;
  FString local_650;
  FString local_640;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_630;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_590;
  int local_570;
  UOptimusNode_GraphTerminal *local_568;
  UOptimusNode_GraphTerminal *local_560;
  FName local_558;
  FName local_550;
  FName local_548;
  FName local_540;
  FName local_538;
  FName local_530;
  FOptimusActionScope local_528;
  UOptimusNode_FunctionReference *local_520;
  TSharedPtr<FOptimusAction,1> local_518;
  FString local_508;
  FString local_4f8;
  TSharedPtr<FOptimusAction,1> local_4e8;
  TSharedPtr<FOptimusAction,1> local_4d8;
  TSharedPtr<FOptimusAction,1> local_4c8;
  TSharedPtr<FOptimusAction,1> local_4b8;
  TSharedPtr<FOptimusAction,1> local_4a8;
  longlong *local_498;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_490;
  undefined8 uStack_470;
  longlong *local_468;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_460;
  undefined8 uStack_440;
  FString local_438;
  TSharedPtr<FOptimusAction,1> local_428;
  TSharedPtr<FOptimusAction,1> local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  undefined1 local_388 [24];
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  void *local_2c8 [2];
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> local_2b8;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> local_2a0;
  longlong local_290;
  longlong lStack_288;
  FName local_280;
  FString local_278 [2];
  void *local_250 [3];
  code *local_238 [2];
  undefined **local_228;
  code *local_220;
  undefined8 local_210;
  code *local_208 [2];
  undefined **local_1f8;
  UOptimusNodeSubGraph *local_1f0;
  undefined8 local_1e0;
  code *local_1d8 [2];
  undefined **local_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  undefined8 local_1b0;
  code *local_1a8 [2];
  undefined **local_198;
  longlong local_190;
  longlong lStack_188;
  undefined8 local_180;
  code *local_178 [5];
  undefined8 *local_150;
  undefined4 local_12c;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  if (param_1 == (UOptimusNode *)0x0) {
    return false;
  }
  local_748 = this;
  pUVar19 = UOptimusNode_FunctionReference::StaticClass();
  iVar45 = (int)pUVar19->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar45) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar45 * 8)
      != &pUVar19->_padding_) {
    return false;
  }
  pUVar20 = CastChecked<UOptimusNode_FunctionReference,UOptimusNode>(param_1);
  local_690 = pUVar20;
  pUVar21 = (UOptimusNodeSubGraph *)(**(code **)(pUVar20->_padding_ + 0x10))(&pUVar20->_padding_);
  if (pUVar21 == (UOptimusNodeSubGraph *)0x0) {
    return false;
  }
  local_738 = pUVar21;
  bVar14 = UObjectBaseUtility::IsA<UOptimusFunctionNodeGraph>((UObjectBaseUtility *)pUVar21);
  if (!bVar14) {
    return false;
  }
  GetPathResolver(this);
  local_750 = DefaultSubGraphName;
  local_750 = Optimus::GetUniqueNameForScope((UObject *)local_388,(FName)this);
  local_750 = *(FName *)local_750;
  pFVar22 = ::FName::ToString(&local_750,&local_370);
  ConstructSubGraphPath(this,&local_760,pFVar22);
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
  local_780 = 1;
  pUVar23 = UOptimusNodeSubGraph::GetTerminalNode(pUVar21,Entry);
  local_560 = pUVar23;
  local_568 = UOptimusNodeSubGraph::GetTerminalNode(pUVar21,Return);
  lVar4 = pUVar23->_padding_;
  lVar6 = pUVar23->_padding_;
  lVar7 = local_568->_padding_;
  lVar8 = local_568->_padding_;
  lVar9 = pUVar20->_padding_;
  lVar10 = pUVar20->_padding_;
  Optimus::GetUniqueNameForScope((UObject *)local_668,(FName)this);
  ::FName::ToString((FName *)local_668,&local_4f8);
  local_740 = &this->_padding_;
  (**(code **)(this->_padding_ + 0x20))(local_740,&local_508);
  pUVar20 = local_690;
  pFVar39 = (this->Links).AllocatorInstance.Data;
  iVar45 = (this->Links).ArrayNum;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  pFVar42 = pFVar39 + (longlong)iVar45 * 8;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  while( true ) {
    if ((this->Links).ArrayNum != iVar45) {
      local_788 = 0;
      `TCheckedPointerIterator<UOptimusNodeLink_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_788);
    }
    pUVar13 = local_560;
    pUVar23 = local_568;
    if (pFVar39 == pFVar42) break;
    lVar2 = *(longlong *)pFVar39;
    pUVar24 = (UOptimusNode_FunctionReference *)
              UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x30));
    if (pUVar24 == pUVar20) {
      FVar25 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x30));
      pFVar22 = ::FName::ToString((FName *)FVar25,&local_360);
      ConstructPath(&local_660,&local_508,&local_4f8,pFVar22);
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
      UOptimusNodePin::GetPinPath(*(UOptimusNodePin **)(lVar2 + 0x28),&local_600);
      pwVar38 = L"";
      if (local_600.Data.ArrayNum == 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = local_600.Data.ArrayNum + -1;
        pwVar38 = (wchar_t *)local_600.Data.AllocatorInstance.Data;
      }
      uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar38);
      pTVar26 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                            *)local_128,uVar16,&local_600);
      pFVar3 = (pTVar26->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_660) &&
          ((FScriptContainerElement *)&local_660 < pFVar3 + (longlong)pTVar26->ArrayMax * 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
      iVar17 = pTVar26->ArrayNum;
      if (iVar17 == pTVar26->ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar26->AllocatorInstance,&pTVar26->ArrayMax);
      }
      pTVar26->ArrayNum = iVar17 + 1;
      ::FString::FString((FString *)((pTVar26->AllocatorInstance).Data + (longlong)iVar17 * 0x10),
                         &local_660);
      FVar40.Data = local_660.Data.AllocatorInstance.Data;
      if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_600.Data.AllocatorInstance.Data);
        FVar40.Data = local_660.Data.AllocatorInstance.Data;
      }
LAB_14e198234:
      if (FVar40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar40.Data);
      }
    }
    else {
      pUVar24 = (UOptimusNode_FunctionReference *)
                UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x28));
      if (pUVar24 == pUVar20) {
        FVar25 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x28));
        pFVar22 = ::FName::ToString((FName *)FVar25,&local_350);
        ConstructPath(&local_5f0,&local_508,&local_4f8,pFVar22);
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
        UOptimusNodePin::GetPinPath(*(UOptimusNodePin **)(lVar2 + 0x30),&local_650);
        pwVar38 = L"";
        if (local_5f0.Data.ArrayNum == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = local_5f0.Data.ArrayNum + -1;
          pwVar38 = (wchar_t *)local_5f0.Data.AllocatorInstance.Data;
        }
        uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar38);
        pTVar26 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)local_128,uVar16,&local_5f0);
        pFVar3 = (pTVar26->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_650) &&
            ((FScriptContainerElement *)&local_650 < pFVar3 + (longlong)pTVar26->ArrayMax * 0x10))
           && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)) {
          pcVar5 = (code *)swi(3);
          uVar15 = (*pcVar5)();
          return (bool)uVar15;
        }
        iVar17 = pTVar26->ArrayNum;
        if (iVar17 == pTVar26->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar26->AllocatorInstance,&pTVar26->ArrayMax);
        }
        pTVar26->ArrayNum = iVar17 + 1;
        ::FString::FString((FString *)((pTVar26->AllocatorInstance).Data + (longlong)iVar17 * 0x10),
                           &local_650);
        FVar40.Data = local_5f0.Data.AllocatorInstance.Data;
        if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_650.Data.AllocatorInstance.Data);
          FVar40.Data = local_5f0.Data.AllocatorInstance.Data;
        }
        goto LAB_14e198234;
      }
    }
    pFVar39 = pFVar39 + 8;
  }
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  plVar43 = (longlong *)local_738->_padding_;
  iVar45 = (int)local_738->_padding_;
  plVar33 = plVar43 + iVar45;
  while( true ) {
    if ((int)local_738->_padding_ != iVar45) {
      local_787 = 0;
      `TCheckedPointerIterator<UOptimusNodeLink_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_787);
    }
    if (plVar43 == plVar33) break;
    lVar2 = *plVar43;
    pUVar27 = (UOptimusNode_GraphTerminal *)
              UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x30));
    if (pUVar27 == pUVar23) {
      FVar25 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x30));
      pFVar22 = ::FName::ToString((FName *)FVar25,&local_338);
      pFVar28 = ::FName::ToString(&UOptimusNode_GraphTerminal::ReturnNodeName,local_278);
      ConstructPath(&local_640,&local_760,pFVar28,pFVar22);
      if (local_278[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278[0].Data.AllocatorInstance.Data);
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      FVar25 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x28));
      pFVar22 = ::FName::ToString((FName *)FVar25,&local_328);
      pUVar29 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x28));
      local_558 = (FName)pUVar29->_padding_;
      ::FName::ToString(&local_558,&local_408);
      ConstructPath(&local_5e0,&local_760,&local_408,pFVar22);
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      pwVar38 = L"";
      if (local_5e0.Data.ArrayNum == 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = local_5e0.Data.ArrayNum + -1;
        pwVar38 = (wchar_t *)local_5e0.Data.AllocatorInstance.Data;
      }
      uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar38);
      pTVar26 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                            *)local_d8,uVar16,&local_5e0);
      pFVar42 = (pTVar26->AllocatorInstance).Data;
      if (((pFVar42 <= (FScriptContainerElement *)&local_640) &&
          ((FScriptContainerElement *)&local_640 < pFVar42 + (longlong)pTVar26->ArrayMax * 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
      iVar17 = pTVar26->ArrayNum;
      if (iVar17 == pTVar26->ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar26->AllocatorInstance,&pTVar26->ArrayMax);
      }
      pTVar26->ArrayNum = iVar17 + 1;
      ::FString::FString((FString *)((pTVar26->AllocatorInstance).Data + (longlong)iVar17 * 0x10),
                         &local_640);
      FVar40.Data = local_640.Data.AllocatorInstance.Data;
      if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
        FVar40.Data = local_640.Data.AllocatorInstance.Data;
      }
    }
    else {
      pUVar27 = (UOptimusNode_GraphTerminal *)
                UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x28));
      if (pUVar27 == pUVar13) {
        FVar25 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x28));
        pFVar22 = ::FName::ToString((FName *)FVar25,&local_308);
        pFVar28 = ::FName::ToString(&UOptimusNode_GraphTerminal::EntryNodeName,&local_318);
        ConstructPath(&local_5d0,&local_760,pFVar28,pFVar22);
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        FVar25 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x30));
        pFVar22 = ::FName::ToString((FName *)FVar25,&local_2f8);
        pUVar29 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x30));
        local_550 = (FName)pUVar29->_padding_;
        ::FName::ToString(&local_550,&local_3f8);
        ConstructPath(&local_678,&local_760,&local_3f8,pFVar22);
        if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
        }
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        pwVar38 = L"";
        if (local_5d0.Data.ArrayNum == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = local_5d0.Data.ArrayNum + -1;
          pwVar38 = (wchar_t *)local_5d0.Data.AllocatorInstance.Data;
        }
        uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar38);
        pTVar26 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)local_d8,uVar16,&local_5d0);
        pFVar42 = (pTVar26->AllocatorInstance).Data;
        if (((pFVar42 <= (FScriptContainerElement *)&local_678) &&
            ((FScriptContainerElement *)&local_678 < pFVar42 + (longlong)pTVar26->ArrayMax * 0x10))
           && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)) {
          pcVar5 = (code *)swi(3);
          uVar15 = (*pcVar5)();
          return (bool)uVar15;
        }
        iVar17 = pTVar26->ArrayNum;
        if (iVar17 == pTVar26->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar26->AllocatorInstance,&pTVar26->ArrayMax);
        }
        pTVar26->ArrayNum = iVar17 + 1;
        ::FString::FString((FString *)((pTVar26->AllocatorInstance).Data + (longlong)iVar17 * 0x10),
                           &local_678);
        FVar40.Data = local_5d0.Data.AllocatorInstance.Data;
        if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_678.Data.AllocatorInstance.Data);
          FVar40.Data = local_5d0.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar25 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x28));
        pFVar22 = ::FName::ToString((FName *)FVar25,&local_2e8);
        pUVar29 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x28));
        local_548 = (FName)pUVar29->_padding_;
        ::FName::ToString(&local_548,&local_3e8);
        ConstructPath(&local_5c0,&local_760,&local_3e8,pFVar22);
        if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
        }
        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
        FVar25 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar2 + 0x30));
        pFVar22 = ::FName::ToString((FName *)FVar25,&local_2d8);
        pUVar29 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar2 + 0x30));
        local_540 = (FName)pUVar29->_padding_;
        ::FName::ToString(&local_540,&local_3d8);
        ConstructPath(&local_688,&local_760,&local_3d8,pFVar22);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        pwVar38 = L"";
        if (local_5c0.Data.ArrayNum == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = local_5c0.Data.ArrayNum + -1;
          pwVar38 = (wchar_t *)local_5c0.Data.AllocatorInstance.Data;
        }
        uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar38);
        pTVar26 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)local_d8,uVar16,&local_5c0);
        pFVar42 = (pTVar26->AllocatorInstance).Data;
        if (((pFVar42 <= (FScriptContainerElement *)&local_688) &&
            ((FScriptContainerElement *)&local_688 < pFVar42 + (longlong)pTVar26->ArrayMax * 0x10))
           && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)) {
          pcVar5 = (code *)swi(3);
          uVar15 = (*pcVar5)();
          return (bool)uVar15;
        }
        iVar17 = pTVar26->ArrayNum;
        if (iVar17 == pTVar26->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar26->AllocatorInstance,&pTVar26->ArrayMax);
        }
        pTVar26->ArrayNum = iVar17 + 1;
        ::FString::FString((FString *)((pTVar26->AllocatorInstance).Data + (longlong)iVar17 * 0x10),
                           &local_688);
        FVar40.Data = local_5c0.Data.AllocatorInstance.Data;
        if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_688.Data.AllocatorInstance.Data);
          FVar40.Data = local_5c0.Data.AllocatorInstance.Data;
        }
      }
    }
    if (FVar40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar40.Data);
    }
    plVar43 = plVar43 + 1;
  }
  pTVar32 = (TReferenceControllerBase<1> *)0x0;
  local_610.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::CopyToEmpty<UOptimusNode_*,int>
            (&local_610,(UOptimusNode **)local_738->_padding_,(int)local_738->_padding_,0);
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UOptimusNodeGraph::ConvertToSubGraph_::__l2::<lambda_1>_>(&local_610,&local_768);
  local_6e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e0.ArrayNum = 0;
  local_6e0.ArrayMax = 0;
  local_6f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6f0.ArrayNum = 0;
  local_6f0.ArrayMax = 0;
  local_700.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_700.ArrayNum = 0;
  local_700.ArrayMax = 0;
  GatherRelatedObjects(&local_610,&local_6e0,&local_6f0,&local_700);
  plVar33 = local_740;
  iVar45 = local_6f0.ArrayNum;
  uVar37 = (ulonglong)local_6f0.ArrayNum;
  local_778.Data = (FScriptContainerElement *)0x0;
  local_770 = 0;
  pFVar42 = local_6f0.AllocatorInstance.Data + uVar37 * 8;
  FVar40.Data = local_6f0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar37 != iVar45) {
      local_786 = 0;
      `TCheckedPointerIterator<UOptimusNodePair_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_786);
    }
    if (FVar40.Data == pFVar42) break;
    local_5b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5b0.Data.ArrayNum = 0;
    local_5b0.Data.ArrayMax = 0;
    lVar2 = *(longlong *)(*(longlong *)FVar40.Data + 0x30);
    local_538 = *(FName *)(*(longlong *)(*(longlong *)FVar40.Data + 0x28) + 0x18);
    ::FName::ToString(&local_538,&local_3c8);
    ConstructPath(&local_398,&local_760,&local_3c8,&local_5b0);
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
    }
    local_530 = *(FName *)(lVar2 + 0x18);
    local_5a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5a0.Data.ArrayNum = 0;
    local_5a0.Data.ArrayMax = 0;
    ::FName::ToString(&local_530,&local_3b8);
    ConstructPath(&local_3a8,&local_760,&local_3b8,&local_5a0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
    }
    ::FString::FString((FString *)local_730,&local_398);
    ::FString::FString(&local_720,&local_3a8);
    if (((local_778.Data <= (TTuple<FString,FString> *)local_730) &&
        ((FScriptContainerElement *)local_730 < local_778.Data + (longlong)local_770._4_4_ * 0x20))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    if ((int)local_770 == local_770._4_4_) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_778,(int *)((longlong)&local_770 + 4));
      pFVar39 = local_778.Data + (longlong)iVar17 * 0x20;
      local_770 = CONCAT44(local_770._4_4_,iVar17 + 1);
    }
    else {
      pFVar39 = local_778.Data + (longlong)(int)local_770 * 0x20;
      local_770 = CONCAT44(local_770._4_4_,(int)local_770 + 1);
    }
    *(undefined8 *)pFVar39 = 0;
    *(undefined8 *)pFVar39 = local_730._0_8_;
    *(undefined4 *)(pFVar39 + 8) = local_730._8_4_;
    *(undefined4 *)(pFVar39 + 0xc) = local_730._12_4_;
    *(undefined8 *)(pFVar39 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar39 + 0x10) = local_720.Data.AllocatorInstance.Data;
    *(int *)(pFVar39 + 0x18) = local_720.Data.ArrayNum;
    *(int *)(pFVar39 + 0x1c) = local_720.Data.ArrayMax;
    local_720.Data.ArrayNum = 0;
    local_720.Data.ArrayMax = 0;
    local_720.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_730._8_8_ = 0;
    local_730._0_8_ = (FScriptContainerElement *)0x0;
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    uVar37 = local_6f0._8_8_ & 0xffffffff;
    FVar40.Data = FVar40.Data + 8;
  }
  ::FString::FString(&local_438,L"Convert To SubGraph");
  this_00 = local_748;
  local_528.ActionStack = GetActionStack(local_748);
  UOptimusActionStack::OpenActionScope(local_528.ActionStack,&local_438);
  FOptimusActionScope::~FOptimusActionScope(&local_528);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  pUVar30 = GetActionStack(this_00);
  pFVar22 = (FString *)(**(code **)(*plVar33 + 0x20))(plVar33,local_2c8);
  pTVar31 = ::operator_new(0x90);
  pTVar12 = _UNK_150651568;
  pFVar11 = ___xmm_00000000000000000000000000000010;
  pTVar41 = (TReferenceControllerBase<1> *)0x0;
  aVar18 = SUB84(local_780,0);
  if (pTVar31 == (TReferenceControllerBase<1> *)0x0) {
    local_4e8.Object = ___xmm_00000000000000000000000000000010;
    local_4e8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar31->SharedReferenceCount = aVar18;
    pTVar31->WeakReferenceCount = aVar18;
    pTVar31->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddGraph___00_SharedPointerInternals__6B_
    ;
    local_1f8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::`37'::<lambda_2>,0,0>
                 ::_vftable_;
    local_208[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_2>,bool,UOptimusNodeGraph_*>
                   ::Call;
    local_1e0 = 0;
    local_1f0 = local_738;
    FOptimusNodeGraphAction_AddGraph::FOptimusNodeGraphAction_AddGraph
              ((FOptimusNodeGraphAction_AddGraph *)(pTVar31 + 1),pFVar22,SubGraph,local_750,-1,
               (TFunction<bool___cdecl(UOptimusNodeGraph_*)> *)local_208);
    local_4e8.Object = (FOptimusAction *)(pTVar31 + 1);
    if ((local_4e8.Object == (FOptimusAction *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
    pTVar32 = pTVar31;
    local_4e8.SharedReferenceCount.ReferenceController = pTVar31;
  }
  UOptimusActionStack::RunAction(pUVar30,&local_4e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  if (local_2c8[0] != (void *)0x0) {
    FMemory::Free(local_2c8[0]);
  }
  pUVar30 = GetActionStack(this_00);
  pUVar19 = UOptimusNode_GraphTerminal::StaticClass();
  pTVar32 = ::operator_new(0xa0);
  if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
    local_4d8.Object = pFVar11;
    local_4d8.SharedReferenceCount.ReferenceController = pTVar12;
    pTVar32 = pTVar41;
  }
  else {
    pTVar32->SharedReferenceCount = aVar18;
    pTVar32->WeakReferenceCount = aVar18;
    pTVar32->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_1c8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::`37'::<lambda_3>,0,0>
                 ::_vftable_;
    local_1d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_3>,bool,UOptimusNode_*>
                   ::Call;
    local_1b0 = 0;
    local_1c0 = lVar4;
    lStack_1b8 = lVar6;
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)(pTVar32 + 1),&local_760,pUVar19,
               UOptimusNode_GraphTerminal::EntryNodeName,
               (TFunction<bool___cdecl(UOptimusNode_*)> *)local_1d8);
    local_4d8.Object = (FOptimusAction *)(pTVar32 + 1);
    if ((local_4d8.Object == (FOptimusAction *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
    local_4d8.SharedReferenceCount.ReferenceController = pTVar32;
  }
  UOptimusActionStack::RunAction(pUVar30,&local_4d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  pUVar30 = GetActionStack(this_00);
  pUVar19 = UOptimusNode_GraphTerminal::StaticClass();
  pTVar32 = ::operator_new(0xa0);
  if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
    local_4c8.Object = pFVar11;
    local_4c8.SharedReferenceCount.ReferenceController = pTVar12;
  }
  else {
    pTVar32->SharedReferenceCount = aVar18;
    pTVar32->WeakReferenceCount = aVar18;
    pTVar32->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_198 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::`37'::<lambda_4>,0,0>
                 ::_vftable_;
    local_1a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_4>,bool,UOptimusNode_*>
                   ::Call;
    local_180 = 0;
    local_190 = lVar7;
    lStack_188 = lVar8;
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)(pTVar32 + 1),&local_760,pUVar19,
               UOptimusNode_GraphTerminal::ReturnNodeName,
               (TFunction<bool___cdecl(UOptimusNode_*)> *)local_1a8);
    local_4c8.Object = (FOptimusAction *)(pTVar32 + 1);
    if ((local_4c8.Object == (FOptimusAction *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
    pTVar41 = pTVar32;
    local_4c8.SharedReferenceCount.ReferenceController = pTVar32;
  }
  UOptimusActionStack::RunAction(pUVar30,&local_4c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar41);
  iVar45 = local_700.ArrayNum;
  uVar37 = (ulonglong)local_700.ArrayNum;
  pFVar42 = local_700.AllocatorInstance.Data + uVar37 * 8;
  FVar40.Data = local_700.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar37 != iVar45) {
      local_785 = 0;
      `TCheckedPointerIterator<UOptimusNodeSubGraph_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_785);
    }
    if (FVar40.Data == pFVar42) break;
    pUVar21 = *(UOptimusNodeSubGraph **)FVar40.Data;
    FVar25 = (FName)pUVar21->_padding_;
    pUVar30 = GetActionStack(this_00);
    DuplicateSubGraph(pUVar30,&local_760,pUVar21,FVar25);
    uVar37 = local_700._8_8_ & 0xffffffff;
    FVar40.Data = FVar40.Data + 8;
  }
  iVar45 = local_6e0.ArrayNum;
  uVar37 = (ulonglong)local_6e0.ArrayNum;
  pFVar42 = local_6e0.AllocatorInstance.Data + uVar37 * 8;
  FVar40.Data = local_6e0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar37 != iVar45) {
      local_784 = 0;
      `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_784);
    }
    if (FVar40.Data == pFVar42) break;
    pUVar29 = *(UOptimusNode **)FVar40.Data;
    pUVar30 = GetActionStack(local_748);
    FVar25 = (FName)pUVar29->_padding_;
    pTVar32 = ::operator_new(0xb0);
    if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
      pTVar32 = (TReferenceControllerBase<1> *)0x0;
      local_4b8.Object = pFVar11;
      local_4b8.SharedReferenceCount.ReferenceController = pTVar12;
    }
    else {
      pTVar32->SharedReferenceCount = SUB84(local_780,0);
      pTVar32->WeakReferenceCount = SUB84(local_780,0);
      pTVar32->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_DuplicateNode___00_SharedPointerInternals__6B_
      ;
      local_210 = 0;
      local_228 = &
                  ___7__TFunction_OwnedObject_P6A_NPEAVUOptimusNode___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_220 = `UOptimusNodeGraph::ConvertToSubGraph'::__l45::<lambda_5>::<lambda_invoker_cdecl>;
      local_238[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(UOptimusNode_*),bool,UOptimusNode_*>::Call;
      FOptimusNodeGraphAction_DuplicateNode::FOptimusNodeGraphAction_DuplicateNode
                ((FOptimusNodeGraphAction_DuplicateNode *)(pTVar32 + 1),&local_760,pUVar29,FVar25,
                 (TFunction<bool___cdecl(UOptimusNode_*)> *)local_238);
      if (((FOptimusAction *)(pTVar32 + 1) == (FOptimusAction *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
      local_4b8.Object = (FOptimusAction *)(pTVar32 + 1);
      local_4b8.SharedReferenceCount.ReferenceController = pTVar32;
    }
    UOptimusActionStack::RunAction(pUVar30,&local_4b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
    uVar37 = local_6e0._8_8_ & 0xffffffff;
    FVar40.Data = FVar40.Data + 8;
  }
  iVar45 = (int)local_770;
  uVar37 = (ulonglong)(int)local_770;
  pTVar48 = (TTuple<FString,FString> *)(local_778.Data + uVar37 * 0x20);
  FVar40.Data = local_778.Data;
  while( true ) {
    if ((int)uVar37 != iVar45) {
      local_783 = 0;
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_783);
    }
    if ((TTuple<FString,FString> *)FVar40.Data == pTVar48) break;
    pUVar30 = GetActionStack(local_748);
    pTVar32 = ::operator_new(0x68);
    if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
      pTVar32 = (TReferenceControllerBase<1> *)0x0;
      local_4a8.Object = pFVar11;
      local_4a8.SharedReferenceCount.ReferenceController = pTVar12;
    }
    else {
      paVar1 = &pTVar32[1].SharedReferenceCount;
      pTVar32->SharedReferenceCount = SUB84(local_780,0);
      pTVar32->WeakReferenceCount = SUB84(local_780,0);
      pTVar32->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNodePair___00_SharedPointerInternals__6B_
      ;
      pTVar32[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar32[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar32[2]._padding_ = 0;
      pTVar32[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
      pTVar32[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar32[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar32[3]._padding_ = 0;
      pTVar32[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar32[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar32[4]._padding_ = 0;
      ::FString::operator=((FString *)&pTVar32[2].SharedReferenceCount,(FString *)FVar40.Data);
      ::FString::operator=
                ((FString *)&pTVar32[3].SharedReferenceCount,
                 (FString *)&((TTuple<FString,FString> *)FVar40.Data)->field_0x10);
      pTVar32[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddNodePair__6B_;
      pTVar32[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar32[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar32[5]._padding_ = 0;
      pTVar32[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar32[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar32[6]._padding_ = 0;
      ::FString::PrintfImpl(&local_710,L"Add Node Pair");
      if (paVar1 == (atomic<int> *)&local_710) {
        if (local_710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_710.Data.AllocatorInstance.Data);
        }
      }
      else {
        if (*(void **)paVar1 != (void *)0x0) {
          FMemory::Free(*(void **)paVar1);
        }
        *(FScriptContainerElement **)paVar1 = local_710.Data.AllocatorInstance.Data;
        *(int *)&pTVar32[2]._padding_ = local_710.Data.ArrayNum;
        *(int *)((longlong)&pTVar32[2]._padding_ + 4) = local_710.Data.ArrayMax;
        local_710.Data.ArrayNum = 0;
        local_710.Data.ArrayMax = 0;
        local_710.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (((FOptimusAction *)(pTVar32 + 1) == (FOptimusAction *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
      local_4a8.Object = (FOptimusAction *)(pTVar32 + 1);
      local_4a8.SharedReferenceCount.ReferenceController = pTVar32;
    }
    UOptimusActionStack::RunAction(pUVar30,&local_4a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
    uVar37 = local_770 & 0xffffffff;
    FVar40.Data = FVar40.Data + 0x20;
  }
  local_590.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  local_590._padding_._0_4_ = 0;
  iVar45 = (int)local_780;
  local_590.UnvisitedBitMask = 0xffffffff;
  local_590.CurrentBitIndex = 0;
  local_590.BaseBitIndex = 0;
  local_590._padding_._4_4_ = iVar45;
  if (local_b0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_590);
  }
  uVar16 = local_b0;
  uStack_6b8 = CONCAT44(local_590._padding_._4_4_,(undefined4)local_590._padding_);
  local_6c0 = (longlong *)local_d8;
  uStack_6a4 = local_590.CurrentBitIndex;
  uStack_6a8 = local_590.UnvisitedBitMask;
  uStack_69c = local_590._28_4_;
  iStack_6a0 = local_590.BaseBitIndex;
  pTVar47 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  bVar36 = (byte)local_b0 & 0x1f;
  local_698 = local_d8._8_4_ - local_a4;
  local_630._padding_._0_4_ = (int)local_b0 >> 5;
  local_630._padding_._4_4_ = iVar45 << bVar36;
  local_630.UnvisitedBitMask = -1 << bVar36;
  pTStack_6b0 = local_590.Array;
  local_630.BaseBitIndex = local_b0 & 0xffffffe0;
  local_630.CurrentBitIndex = local_b0;
  uStack_440 = CONCAT44(uStack_694,local_698);
  TStack_460.Array = local_590.Array;
  local_630.Array = pTVar47;
  local_468 = local_6c0;
  TStack_460._padding_ = uStack_6b8;
  TStack_460._16_8_ = _uStack_6a8;
  TStack_460._24_8_ = _iStack_6a0;
  if (((int)local_b0 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  if (uVar16 != local_b0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_630);
    pTVar47 = local_630.Array;
  }
  while( true ) {
    plVar33 = local_468;
    iVar45 = local_630.CurrentBitIndex;
    if ((int)local_468[1] - *(int *)((longlong)local_468 + 0x34) != (int)uStack_440) {
      local_782 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_782);
    }
    plVar43 = local_740;
    if (((TStack_460.CurrentBitIndex == iVar45) && (TStack_460.Array == pTVar47)) &&
       (plVar33 == (longlong *)local_d8)) break;
    lVar4 = *plVar33;
    iVar45 = *(int *)(lVar4 + 0x18 + (longlong)TStack_460.CurrentBitIndex * 0x28);
    pFVar22 = (FString *)(lVar4 + (longlong)TStack_460.CurrentBitIndex * 0x28);
    pFVar42 = pFVar22[1].Data.AllocatorInstance.Data;
    pFVar39 = pFVar42 + (longlong)iVar45 * 0x10;
    while( true ) {
      if (pFVar22[1].Data.ArrayNum != iVar45) {
        local_781 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_781);
      }
      if (pFVar42 == pFVar39) break;
      plVar33 = (longlong *)(**(code **)(*plVar43 + 0x18))(plVar43);
      if ((plVar33 == (longlong *)0x0) ||
         (pUVar34 = (UOptimusDeformer *)(**(code **)(*plVar33 + 8))(plVar33),
         pUVar34 == (UOptimusDeformer *)0x0)) {
LAB_14e199465:
        pUVar30 = (UOptimusActionStack *)0x0;
      }
      else {
        pUVar19 = UOptimusDeformer::StaticClass();
        iVar17 = (int)pUVar19->_padding_;
        if ((*(int *)(pUVar34->_padding_ + 0x38) < iVar17) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar34->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
            &pUVar19->_padding_)) goto LAB_14e199465;
        pUVar30 = UOptimusDeformer::GetActionStack(pUVar34);
      }
      pTVar35 = MakeShared<FOptimusNodeGraphAction_AddLink,1,FString_const_&,FString_const_&>
                          (&local_2b8,pFVar22,(FString *)pFVar42);
      local_428.Object = (FOptimusAction *)pTVar35->Object;
      local_428.SharedReferenceCount.ReferenceController =
           (pTVar35->SharedReferenceCount).ReferenceController;
      if (local_428.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UOptimusActionStack::RunAction(pUVar30,&local_428);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b8.SharedReferenceCount.ReferenceController);
      pFVar42 = pFVar42 + 0x10;
    }
    TStack_460.UnvisitedBitMask = TStack_460.UnvisitedBitMask & ~TStack_460._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_460);
  }
  plVar33 = (longlong *)(**(code **)(*local_740 + 0x18))(local_740);
  if ((plVar33 != (longlong *)0x0) &&
     (pUVar34 = (UOptimusDeformer *)(**(code **)(*plVar33 + 8))(plVar33),
     pUVar34 != (UOptimusDeformer *)0x0)) {
    pUVar19 = UOptimusDeformer::StaticClass();
    iVar45 = (int)pUVar19->_padding_;
    if ((iVar45 <= *(int *)(pUVar34->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar34->_padding_ + 0x30) + (longlong)iVar45 * 8) ==
        &pUVar19->_padding_)) {
      pUVar30 = UOptimusDeformer::GetActionStack(pUVar34);
      goto LAB_14e19953a;
    }
  }
  pUVar30 = (UOptimusActionStack *)0x0;
LAB_14e19953a:
  local_280 = local_750;
  local_290 = lVar9;
  lStack_288 = lVar10;
  pUVar19 = UOptimusNode_SubGraphReference::StaticClass();
  pFVar22 = (FString *)(**(code **)(*plVar43 + 0x20))(plVar43,local_250);
  pTVar32 = ::operator_new(0xa0);
  aVar18 = SUB84(local_780,0);
  if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
    pTVar32 = (TReferenceControllerBase<1> *)0x0;
    local_518.Object = pFVar11;
    local_518.SharedReferenceCount.ReferenceController = pTVar12;
  }
  else {
    pTVar32->SharedReferenceCount = aVar18;
    pTVar32->WeakReferenceCount = aVar18;
    local_178[0] = (code *)0x0;
    pTVar32->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_150 = FMemory::Malloc(0x20,8);
    local_150[1] = lVar9;
    local_150[2] = lVar10;
    *local_150 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::`37'::<lambda_6>,0,1>
                  ::_vftable_;
    *(FName *)(local_150 + 3) = local_280;
    if (local_150 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_178[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_6>,bool,UOptimusNode_*>
                     ::Call;
    }
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)(pTVar32 + 1),pFVar22,pUVar19,(FName)local_668,
               (TFunction<bool___cdecl(UOptimusNode_*)> *)local_178);
    local_518.Object = (FOptimusAction *)(pTVar32 + 1);
    if ((local_518.Object == (FOptimusAction *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
    local_518.SharedReferenceCount.ReferenceController = pTVar32;
  }
  UOptimusActionStack::RunAction(pUVar30,&local_518);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  if (local_250[0] != (void *)0x0) {
    FMemory::Free(local_250[0]);
  }
  local_520 = local_690;
  local_6d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6d0.ArrayNum = (int)aVar18;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(int)aVar18,0,&local_6d0.AllocatorInstance,(int)aVar18,&local_6d0.ArrayMax);
  *(UOptimusNode_FunctionReference **)local_6d0.AllocatorInstance.Data = local_520;
  RemoveNodesAndCount(local_748,&local_6d0);
  if (local_6d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.AllocatorInstance.Data);
  }
  uVar16 = local_100;
  iVar45 = 0;
  iStack_6a0 = 0;
  uStack_6a4 = 0;
  if (local_100 != 0) {
    puVar46 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar46 = local_108;
    }
    uVar44 = *puVar46;
    while (uVar44 == 0) {
      iVar45 = iVar45 + 1;
      iStack_6a0 = iStack_6a0 + 0x20;
      uStack_6a4 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar45)
      goto LAB_14e199784;
      uVar44 = puVar46[iVar45];
    }
    aVar18 = (atomic<int>)(~(uVar44 - 1) & uVar44);
    uVar37 = (ulonglong)(uint)aVar18 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_570 = (int)lVar4;
    uStack_6a4 = iStack_6a0 + -1 + local_570;
    if ((int)local_100 < (int)uStack_6a4) {
      uStack_6a4 = local_100;
    }
  }
LAB_14e199784:
  local_6c0 = (longlong *)local_128;
  pTStack_6b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  uVar44 = local_100 & 0xffffffe0;
  local_698 = local_128._8_4_ - local_f4;
  uStack_6a8 = 0xffffffff;
  uStack_6b8 = CONCAT44(aVar18,iVar45);
  uStack_69c = local_12c;
  TStack_490._padding_ = uStack_6b8;
  iVar45 = (int)local_100 >> 5;
  uStack_470 = CONCAT44(uStack_694,local_698);
  bVar36 = (byte)local_100;
  local_780._0_4_ = local_100;
  TStack_490.BaseBitIndex = iStack_6a0;
  TStack_490._28_4_ = local_12c;
  TStack_490.UnvisitedBitMask = 0xffffffff;
  TStack_490.CurrentBitIndex = uStack_6a4;
  local_498 = local_6c0;
  TStack_490.Array = pTStack_6b0;
  if (((int)local_100 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  if (uVar16 != local_100) {
    puVar46 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar46 = local_108;
    }
    uVar16 = -1 << (bVar36 & 0x1f) & puVar46[iVar45];
    while (uVar16 == 0) {
      iVar45 = iVar45 + 1;
      uVar44 = uVar44 + 0x20;
      if ((int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5 < iVar45) {
        local_780._0_4_ = local_100;
        uVar16 = local_100;
        goto LAB_14e1998b0;
      }
      uVar16 = puVar46[iVar45];
    }
    uVar37 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar16 = (uVar44 - 1) + (int)lVar4;
    local_780._0_4_ = uVar16;
    if ((int)local_100 < (int)uVar16) {
      uVar16 = local_100;
      local_780._0_4_ = local_100;
    }
  }
LAB_14e1998b0:
  do {
    plVar33 = local_498;
    if ((int)local_498[1] - *(int *)((longlong)local_498 + 0x34) != (int)uStack_470) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_767);
    }
    plVar43 = local_740;
    if (((TStack_490.CurrentBitIndex == uVar16) &&
        (TStack_490.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar33 == (longlong *)local_128)) {
      DestructItems<TTuple<FString,FString>,int>
                ((TTuple<FString,FString> *)local_778.Data,(int)local_770);
      if ((TTuple<FString,FString> *)local_778.Data != (TTuple<FString,FString> *)0x0) {
        FMemory::Free(local_778.Data);
      }
      if (local_700.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_700.AllocatorInstance.Data);
      }
      if (local_6f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f0.AllocatorInstance.Data);
      }
      if (local_6e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e0.AllocatorInstance.Data);
      }
      if (local_610.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_610.AllocatorInstance.Data);
      }
      local_90 = 0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      local_e0 = 0;
      if (local_e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_128);
      if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.Data.AllocatorInstance.Data);
      }
      if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
      }
      if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_760.Data.AllocatorInstance.Data);
      }
      return true;
    }
    lVar4 = *plVar33;
    iVar45 = *(int *)(lVar4 + 0x18 + (longlong)TStack_490.CurrentBitIndex * 0x28);
    pFVar22 = (FString *)(lVar4 + (longlong)TStack_490.CurrentBitIndex * 0x28);
    pFVar42 = pFVar22[1].Data.AllocatorInstance.Data;
    pFVar39 = pFVar42 + (longlong)iVar45 * 0x10;
    while( true ) {
      if (pFVar22[1].Data.ArrayNum != iVar45) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_766);
      }
      if (pFVar42 == pFVar39) break;
      plVar33 = (longlong *)(**(code **)(*plVar43 + 0x18))(plVar43);
      if ((plVar33 == (longlong *)0x0) ||
         (pUVar34 = (UOptimusDeformer *)(**(code **)(*plVar33 + 8))(plVar33),
         pUVar34 == (UOptimusDeformer *)0x0)) {
LAB_14e1999a1:
        pUVar30 = (UOptimusActionStack *)0x0;
      }
      else {
        pUVar19 = UOptimusDeformer::StaticClass();
        iVar17 = (int)pUVar19->_padding_;
        if ((*(int *)(pUVar34->_padding_ + 0x38) < iVar17) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar34->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
            &pUVar19->_padding_)) goto LAB_14e1999a1;
        pUVar30 = UOptimusDeformer::GetActionStack(pUVar34);
      }
      pTVar35 = MakeShared<FOptimusNodeGraphAction_AddLink,1,FString_const_&,FString_const_&>
                          (&local_2a0,pFVar22,(FString *)pFVar42);
      local_418.Object = (FOptimusAction *)pTVar35->Object;
      local_418.SharedReferenceCount.ReferenceController =
           (pTVar35->SharedReferenceCount).ReferenceController;
      if (local_418.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UOptimusActionStack::RunAction(pUVar30,&local_418);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.SharedReferenceCount.ReferenceController);
      pFVar42 = pFVar42 + 0x10;
    }
    TStack_490.UnvisitedBitMask = TStack_490.UnvisitedBitMask & ~TStack_490._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_490);
    uVar16 = (uint)local_780;
  } while( true );
}

// CreateGraphDirect @ 14e19df20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusNodeGraph * __thiscall
UOptimusNodeGraph::CreateGraphDirect
          (UOptimusNodeGraph *this,EOptimusNodeGraphType param_1,FName param_2,
          TOptional<int> param_3)

{
  int *piVar1;
  char cVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UOptimusNodeGraph *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == SubGraph) {
    pUVar3 = UOptimusNodeSubGraph::StaticClass();
    piVar1 = &this[-1].SubGraphs.ArrayNum;
    if (param_2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)piVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = UOptimusNodeSubGraph::StaticClass();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_Transactional;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = piVar1;
    local_a8._16_8_ = param_2;
    pUVar5 = (UOptimusNodeGraph *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    pUVar5->GraphType = SubGraph;
    if ((*(char *)((longlong)param_3 + 4) != '\0') &&
       (cVar2 = (**(code **)(this->_padding_ + 0x40))(this,pUVar5,*(undefined4 *)param_3),
       cVar2 == '\0')) {
      Optimus::RemoveObject((UObject *)pUVar5);
      pUVar5 = (UOptimusNodeGraph *)0x0;
    }
  }
  else {
    if (2 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    }
    pUVar5 = (UOptimusNodeGraph *)0x0;
  }
  return pUVar5;
}

// CreateNodeDirect @ 14e19e750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusNode * __thiscall
UOptimusNodeGraph::CreateNodeDirect
          (UOptimusNodeGraph *this,UClass *param_1,FName param_2,
          TFunction<bool___cdecl(UOptimusNode_*)> *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>_>
  *this_00;
  int iVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  UClass *pUVar8;
  UOptimusNode *pUVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pUVar8 = UOptimusNode::StaticClass();
  if (pUVar8 != (UClass *)0x0) {
    iVar3 = (int)pUVar8->_padding_;
    if (((int)param_1->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar3 * 8) != &pUVar8->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14e19e7d1;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("InNodeClass->IsChildOf(UOptimusNode::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                     ,0x8b7,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pUVar9 = (UOptimusNode *)(*pcVar5)();
    return pUVar9;
  }
LAB_14e19e7d1:
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = UOptimusNode::StaticClass();
  CheckIsClassChildOf_Internal(pUVar8,param_1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_1);
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_c8._24_4_ = RF_Transactional;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._8_8_ = this;
  local_c8._16_8_ = param_2;
  pUVar9 = (UOptimusNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar11 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (*(longlong *)param_3 != 0) {
    bVar6 = pUVar9->bSendNotifications;
    pUVar9->bSendNotifications = false;
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar5 = *(code **)param_3;
    plVar11 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_3->field_0x28;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar5)(uVar10);
    if (cVar7 == '\0') {
      Optimus::RemoveObject((UObject *)pUVar9);
      pUVar9->bSendNotifications = bVar6;
      if (*(longlong *)param_3 != 0) {
        plVar11 = (longlong *)&param_3->field_0x10;
        if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
          plVar11 = *(longlong **)&param_3->field_0x28;
        }
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      return (UOptimusNode *)0x0;
    }
    pUVar9->bSendNotifications = bVar6;
  }
  bVar6 = pUVar9->bConstructingNode;
  pUVar9->bConstructingNode = true;
  (**(code **)(pUVar9->_padding_ + 0x2f8))(pUVar9);
  this_00 = &pUVar9->CachedPinLookup;
  bVar4 = 1 < *(int *)&(pUVar9->CachedPinLookup).field_0x48;
  if (!bVar4) {
    TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(pUVar9->CachedPinLookup).field_0x8);
  puVar1 = &(pUVar9->CachedPinLookup).field_0xc;
  *(undefined4 *)&(pUVar9->CachedPinLookup).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(pUVar9->CachedPinLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pUVar9->CachedPinLookup).field_0x34 = 0;
  iVar3 = *(int *)&(pUVar9->CachedPinLookup).field_0x2c;
  *(undefined4 *)&(pUVar9->CachedPinLookup).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(pUVar9->CachedPinLookup).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pUVar9->CachedPinLookup).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(pUVar9->CachedPinLookup).field_0x48 = 1;
    TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar2 = &(pUVar9->Pins).ArrayMax;
  (pUVar9->Pins).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(pUVar9->Pins).AllocatorInstance,0,piVar2);
  }
  (**(code **)(pUVar9->_padding_ + 0x2f0))(pUVar9);
  (**(code **)(pUVar9->_padding_ + 0x300))(pUVar9);
  pUVar9->bConstructingNode = bVar6;
  AddNodeDirect(this,pUVar9);
  if (*(longlong *)param_3 != 0) {
    plVar11 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return pUVar9;
}

// DoesLinkFormCycle @ 14e1a40f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UOptimusNodeGraph::DoesLinkFormCycle
          (UOptimusNodeGraph *this,UOptimusNode *param_1,UOptimusNode *param_2)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  UOptimusNode *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  ulonglong *puVar19;
  undefined1 auStackY_178 [32];
  ulonglong *local_148;
  ulonglong *local_140;
  undefined4 local_138;
  uint local_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_128;
  undefined4 local_120;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  UOptimusNode *local_110;
  ulonglong **local_108;
  int local_100;
  UOptimusNode *local_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  FSparseArrayAllocationInfo local_c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((param_1 == (UOptimusNode *)0x0) || (param_2 == (UOptimusNode *)0x0)) {
    return false;
  }
  if (param_1 == param_2) {
    return true;
  }
  puVar19 = (ulonglong *)0x0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_110 = param_1;
  puVar9 = ::operator_new(0x10);
  local_148 = puVar19;
  if (puVar9 != (ulonglong *)0x0) {
    *puVar9 = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    local_148 = puVar9;
  }
  local_108 = &local_148;
  local_140 = local_148;
  pTVar10 = GetAllLinkIndexesToNode(this,&local_b8,param_2,Output);
  `UOptimusNodeGraph::DoesLinkFormCycle'::__l2::<lambda_1>::operator()(&local_108,pTVar10);
  if (local_64 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                       (int *)(local_98 + 0xc));
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
    FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_78;
    }
    uVar12 = iVar8 >> 0x1f & 0x1f;
    iVar8 = iVar8 + uVar12;
    puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar8 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar8 & 0x1f) - (char)uVar12 & 0x1f));
    iVar8 = local_68;
  }
  else {
    local_64 = local_64 + -1;
    iVar8 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
    iVar7 = local_68;
    if (local_64 != 0) {
      *(undefined4 *)(local_98._0_8_ + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  local_68 = iVar8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_c8,iVar7);
  if (local_c8.Pointer != (ulonglong *)0x0) {
    *(UOptimusNode **)local_c8.Pointer = param_2;
    *(undefined4 *)((longlong)local_c8.Pointer + 8) = 0xffffffff;
    puVar19 = local_c8.Pointer;
  }
  uVar14 = *puVar19;
  uVar12 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
    FVar13.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar13.Data = local_58.Data;
    }
    for (iVar7 = *(int *)(FVar13.Data + (ulonglong)(local_50 - 1 & uVar12) * 4); iVar7 != -1;
        iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
      if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x10) == uVar14) {
        if (iVar7 != -1) {
          *(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x10) = uVar14;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98,local_c8.Index,1);
          goto LAB_14e1a45f1;
        }
        break;
      }
    }
  }
  uVar14 = 0;
  uVar18 = local_98._8_4_ - local_64;
  uVar16 = 1;
  if (3 < uVar18) {
    uVar16 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_138 = (undefined4)lVar2;
    uVar16 = (ulonglong)(uint)(1 << ((byte)lVar2 & 0x1f));
  }
  if (((int)uVar18 < 1) || (uVar18 = (uint)uVar16, (int)uVar18 <= (int)local_50)) {
    uVar12 = local_50 - 1 & uVar12;
    *(uint *)((longlong)puVar19 + 0xc) = uVar12;
    FVar13.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar13.Data = local_58.Data;
    }
    uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
    *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(FVar13.Data + uVar14 * 4);
    *(int *)(FVar13.Data + uVar14 * 4) = local_c8.Index;
    goto LAB_14e1a45f1;
  }
  local_50 = uVar18;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar18 != 0) {
    uVar12 = uVar18;
    if (uVar18 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14e1a43f5;
      }
    }
    else {
LAB_14e1a43f5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar18) {
      uVar15 = uVar14;
      do {
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar11 = uVar15 & (longlong)(int)uVar18 - 1U;
        uVar15 = uVar15 + 1;
        *(undefined4 *)(FVar13.Data + uVar11 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_130 = 0;
    uStack_12c = 1;
    uStack_11c = 0;
    uStack_118 = 0;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar12 = *(uint *)FVar17;
      uVar16 = uVar14;
      while (uVar12 == 0) {
        uStack_118 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_118;
        iVar7 = (int)uVar14;
        local_130 = iVar7 + 1;
        uVar14 = (ulonglong)local_130;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_130)
        goto LAB_14e1a4503;
        uVar12 = ((uint *)((longlong)FVar17 + 4))[iVar7];
      }
      uStack_12c = -uVar12 & uVar12;
      uVar14 = (ulonglong)uStack_12c * 2 + 1;
      lVar2 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_100 = (int)lVar2;
      uStack_11c = local_100 + -1 + (int)uVar16;
      uVar14 = (ulonglong)uStack_11c;
      if ((int)local_70 < (int)uStack_11c) {
LAB_14e1a4503:
        uVar14 = (ulonglong)local_70;
        uStack_11c = local_70;
      }
    }
    local_120 = 0xffffffff;
    local_f0 = (longlong *)local_98;
    local_e8._padding_ = CONCAT44(uStack_12c,local_130);
    local_e8.CurrentBitIndex = uStack_11c;
    local_e8.UnvisitedBitMask = 0xffffffff;
    local_e8._28_4_ = uStack_114;
    local_e8.BaseBitIndex = uStack_118;
    local_e8.Array = pTStack_128;
    if ((int)uVar14 < (int)local_70) {
      do {
        puVar19 = (ulonglong *)((longlong)(int)uVar14 * 0x10 + *local_f0);
        uVar12 = ((uint)(*puVar19 >> 0x14) & 0xffff ^ (uint)(*puVar19 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_50 - 1;
        *(uint *)((longlong)puVar19 + 0xc) = uVar12;
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(FVar13.Data + uVar16 * 4);
        *(int *)(FVar13.Data + uVar16 * 4) = (int)uVar14;
        local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
        uVar14 = (ulonglong)(uint)local_e8.CurrentBitIndex;
      } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
    }
  }
LAB_14e1a45f1:
  pUVar4 = local_110;
LAB_14e1a4610:
  do {
    puVar9 = local_140;
    puVar19 = (ulonglong *)*local_140;
    if (puVar19 == (ulonglong *)0x0) {
      bVar5 = false;
      puVar19 = local_140;
joined_r0x00014e1a4765:
      while (puVar19 != (ulonglong *)0x0) {
        local_140 = (ulonglong *)*puVar19;
        ::operator_delete(puVar19,0x10);
        puVar19 = local_140;
      }
      local_50 = 0;
      local_140 = puVar19;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      iVar7 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_64 = 0;
      local_70 = 0;
      local_68 = -1;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return bVar5;
    }
    uVar12 = (uint)puVar19[1];
    *(undefined4 *)(puVar19 + 1) = 0;
    local_140 = puVar19;
    ::operator_delete(puVar9,0x10);
    uVar18 = 0;
    if ((int)uVar12 < (this->Links).ArrayNum) {
      uVar18 = ~uVar12 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_f8 = UOptimusNodePin::GetOwningNode
                         (*(UOptimusNodePin **)
                           (*(longlong *)
                             ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar12 * 8) +
                           0x30));
    if (local_f8 == pUVar4) {
      bVar5 = true;
      puVar19 = local_140;
      goto joined_r0x00014e1a4765;
    }
    uVar12 = ((uint)((ulonglong)local_f8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_f8 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    if (local_98._8_4_ != local_64) {
      FVar13.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar13.Data = local_58.Data;
      }
      for (iVar7 = *(int *)(FVar13.Data + (ulonglong)(local_50 - 1 & (uVar12 >> 0x10 ^ uVar12)) * 4)
          ; iVar7 != -1; iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
        if (*(UOptimusNode **)(local_98._0_8_ + (longlong)iVar7 * 0x10) == local_f8)
        goto LAB_14e1a4610;
      }
    }
    pTVar10 = GetAllLinkIndexesToNode(this,&local_a8,local_f8,Output);
    `UOptimusNodeGraph::DoesLinkFormCycle'::__l2::<lambda_1>::operator()(&local_108,pTVar10);
    TSet<UOptimusNode_const_*,DefaultKeyFuncs<UOptimusNode_const_*,0>,FDefaultSetAllocator>::
    Emplace<UOptimusNode_const_*_const_&>
              ((TSet<UOptimusNode_const_*,DefaultKeyFuncs<UOptimusNode_const_*,0>,FDefaultSetAllocator>
                *)local_98,&local_110,(bool *)&local_f8);
  } while( true );
}

// DoesNodeHaveMutableInput @ 14e1a4840

bool __thiscall
UOptimusNodeGraph::DoesNodeHaveMutableInput
          (UOptimusNodeGraph *this,UOptimusNode *param_1,FOptimusPinTraversalContext *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res20 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_28;
  
  UOptimusNode::GetPinsByDirection(param_1,&local_28,Input,true);
  iVar3 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar4.Data == pFVar1) break;
    bVar2 = IsPinMutable(this,*(UOptimusNodePin **)FVar4.Data,param_2);
    if (bVar2) {
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return true;
    }
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return false;
}

// DuplicateNode @ 14e1a4bd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusNode * __thiscall
UOptimusNodeGraph::DuplicateNode
          (UOptimusNodeGraph *this,UOptimusNode *param_1,TVector2<double> *param_2)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UOptimusNode *pUVar5;
  UObject *pUVar6;
  FName FVar7;
  FName FVar8;
  FOptimusNodeGraphAction_DuplicateNode *this_01;
  FString *pFVar9;
  FOptimusNodeGraphAction_DuplicateNode *pFVar10;
  UOptimusActionStack *pUVar11;
  FOptimusNodeGraphAction_DuplicateNode *pFVar12;
  undefined4 local_res10;
  void *local_58 [2];
  code *local_48 [2];
  undefined **local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  pFVar12 = (FOptimusNodeGraphAction_DuplicateNode *)0x0;
  local_res10 = 0;
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar4 = UOptimusNode_LoopTerminal::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      FVar8 = (FName)param_1->_padding_;
      pUVar4 = Z_Construct_UClass_UObject_NoRegister();
      pUVar6 = StaticFindObjectFast(pUVar4,(UObject *)this,FVar8,None,RF_NoFlags,Borrowed);
      if (pUVar6 != (UObject *)0x0) {
        FVar7 = (FName)Z_Construct_UClass_UObject_NoRegister();
        FVar8 = MakeUniqueObjectName
                          ((UObject *)&local_res10,(UClass *)this,FVar7,
                           FVar8.ComparisonIndex.Value.Value);
        FVar8 = *(FName *)FVar8;
      }
      this_01 = ::operator_new(0xa0);
      pFVar10 = pFVar12;
      if (this_01 != (FOptimusNodeGraphAction_DuplicateNode *)0x0) {
        local_30 = *(undefined4 *)&param_2->field0_0x0;
        uStack_2c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
        uStack_28 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
        uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
        local_20 = 0;
        local_38 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNode'::`2'::<lambda_1>,0,0>::
                    _vftable_;
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UOptimusNodeGraph::DuplicateNode'::__l2::<lambda_1>,bool,UOptimusNode_*>
                      ::Call;
        pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_58);
        pFVar10 = FOptimusNodeGraphAction_DuplicateNode::FOptimusNodeGraphAction_DuplicateNode
                            (this_01,pFVar9,param_1,FVar8,
                             (TFunction<bool___cdecl(UOptimusNode_*)> *)local_48);
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
      }
      pUVar11 = GetActionStack(this);
      bVar3 = UOptimusActionStack::RunAction(pUVar11,(FOptimusAction *)pFVar10);
      if (bVar3) {
        pUVar11 = GetActionStack(this);
        this_00 = (UObjectBaseUtility *)pUVar11->_padding_;
        if (this_00 != (UObjectBaseUtility *)0x0) {
          pUVar4 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
          pFVar12 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar4);
        }
        pUVar5 = (UOptimusNode *)
                 (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12,&pFVar10->NodePath);
        return pUVar5;
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7701470802381636375>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                         ,0x317,"!Cast<UOptimusNode_LoopTerminal>(InNode)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UOptimusNode *)(*pcVar2)();
        return pUVar5;
      }
    }
  }
  return (UOptimusNode *)0x0;
}

// DuplicateNodes @ 14e1a4da0

bool __thiscall
UOptimusNodeGraph::DuplicateNodes
          (UOptimusNodeGraph *this,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2)

{
  bool bVar1;
  FString local_18;
  
  ::FString::FString(&local_18,L"Duplicate");
  bVar1 = DuplicateNodes(this,param_1,param_2,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// DuplicateNodes @ 14e1a4e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e1a596f) */
/* WARNING: Removing unreachable block (ram,0x00014e1a5427) */
/* WARNING: Removing unreachable block (ram,0x00014e1a597d) */
/* WARNING: Removing unreachable block (ram,0x00014e1a5435) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusNodeGraph::DuplicateNodes
          (UOptimusNodeGraph *this,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,FString *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  UObjectBaseUtility *this_00;
  longlong lVar5;
  longlong lVar6;
  UOptimusNodeSubGraph *pUVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  UOptimusNodeGraph *pUVar11;
  UOptimusNodeGraph *pUVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  TTuple<UOptimusNode_*,FName> *pTVar16;
  FString *pFVar17;
  UClass *pUVar18;
  UOptimusNode *pUVar19;
  FName FVar20;
  FString *pFVar21;
  TTuple<FName,FName> *pTVar22;
  longlong *plVar23;
  UOptimusDeformer *pUVar24;
  UOptimusActionStack *pUVar25;
  FOptimusAction *pFVar26;
  longlong *plVar27;
  TReferenceControllerBase<1> *pTVar28;
  TReferenceControllerBase<1> *pTVar29;
  FOptimusNodeGraphAction_DuplicateNode *pFVar30;
  ulonglong uVar31;
  UOptimusActionStack *pUVar32;
  UOptimusActionStack *pUVar33;
  UOptimusActionStack *pUVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  FScriptContainerElement *pFVar38;
  ForElementType<FSetElementId> FVar39;
  FScriptContainerElement *pFVar40;
  ForAnyElementType FVar41;
  UOptimusNode *pUVar42;
  longlong lVar43;
  TTuple<FString,FString> *pTVar44;
  UObjectBaseUtility *pUVar45;
  bool bVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auStackY_4a8 [32];
  undefined1 local_454;
  undefined1 local_453;
  undefined1 local_452;
  undefined1 local_451;
  undefined1 local_450;
  undefined1 local_44f;
  undefined1 local_44e;
  undefined1 local_44d;
  undefined1 local_44c;
  undefined1 local_44b [3];
  ForAnyElementType local_448;
  undefined8 local_440;
  ForAnyElementType local_438;
  undefined8 local_430;
  UOptimusNodeGraph *local_428;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_420;
  TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> local_410;
  UObjectBaseUtility *local_400;
  undefined1 local_3f8 [16];
  FString local_3e8;
  undefined1 local_3d8 [16];
  FString local_3c8;
  FString local_3b8;
  FScriptContainerElement *local_3a8;
  FString local_3a0;
  TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FUniqueNameGenerator local_330;
  FOptimusActionScope local_318;
  TSharedPtr<FOptimusAction,1> local_310;
  undefined1 local_300 [8];
  TSharedPtr<FOptimusAction,1> local_2f8;
  longlong local_2e8;
  UOptimusNode *local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  FName local_2c8;
  FString local_2c0;
  FString local_2b0;
  undefined8 *local_2a0;
  FName local_298;
  FString local_290;
  FString local_280;
  TSharedPtr<FOptimusAction,1> local_270;
  double local_260;
  double dStack_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  void *local_1e8 [2];
  void *local_1d8 [3];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [16];
  code *local_1a8 [5];
  undefined8 *local_180;
  TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
  local_178;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [32];
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> local_b8
  ;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  pFVar38 = (param_1->AllocatorInstance).Data;
  pUVar45 = (UObjectBaseUtility *)0x0;
  iVar4 = param_1->ArrayNum;
  pFVar40 = pFVar38 + (longlong)iVar4 * 8;
  local_400 = (UObjectBaseUtility *)0x0;
  local_428 = this;
  local_3a8 = (FScriptContainerElement *)param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_454 = 0;
      `TCheckedPointerIterator<UOptimusNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_454);
    }
    if (pFVar38 == pFVar40) break;
    this_00 = *(UObjectBaseUtility **)(*(longlong *)pFVar38 + 0x20);
    if (pUVar45 == (UObjectBaseUtility *)0x0) {
      if ((this_00 != (UObjectBaseUtility *)0x0) &&
         (local_400 = this_00, bVar13 = UObjectBaseUtility::IsA<UOptimusNodeGraph>(this_00),
         pUVar45 = this_00, bVar13)) goto LAB_14e1a4ed1;
      pUVar45 = (UObjectBaseUtility *)0x0;
      local_400 = (UObjectBaseUtility *)0x0;
      pFVar38 = pFVar38 + 8;
    }
    else {
      if (((this_00 == (UObjectBaseUtility *)0x0) ||
          (bVar13 = UObjectBaseUtility::IsA<UOptimusNodeGraph>(this_00), !bVar13)) ||
         (pUVar45 != this_00)) {
        if (2 < (byte)LogOptimusCore._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        }
        return false;
      }
LAB_14e1a4ed1:
      pFVar38 = pFVar38 + 8;
    }
  }
  if (pUVar45 == (UObjectBaseUtility *)0x0) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7701470802381636426>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                        ,0x34a,"SourceGraph != nullptr");
    if (!bVar13) {
      return false;
    }
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_420.ArrayNum = 0;
  local_420.ArrayMax = 0;
  local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.ArrayNum = 0;
  local_390.ArrayMax = 0;
  local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_410.ArrayNum = 0;
  local_410.ArrayMax = 0;
  GatherRelatedObjects(param_1,&local_420,&local_390,&local_410);
  pUVar11 = local_428;
  iVar4 = local_420.ArrayNum;
  uVar36 = (ulonglong)local_420.ArrayNum;
  local_330.GeneratedName.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.GeneratedName.ArrayNum = 0;
  local_330.GeneratedName.ArrayMax = 0;
  local_178.Elements._0_8_ = 0;
  local_178.Elements._8_8_ = 0;
  local_178.Elements._32_8_ = 0;
  local_178.Elements._40_4_ = 0;
  local_178.Elements._52_4_ = 0;
  local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_178.HashSize = 0;
  local_330.ScopeObject = (UObject *)local_428;
  local_178.Elements._44_4_ = 0x80;
  local_178.Elements._48_4_ = 0xffffffff;
  pFVar40 = local_420.AllocatorInstance.Data + uVar36 * 8;
  FVar41.Data = local_420.AllocatorInstance.Data;
  uVar52 = SUB84(__real_7fefffffffffffff,0);
  uVar53 = (int)((ulonglong)__real_7fefffffffffffff >> 0x20);
  dVar51 = __real_7fefffffffffffff;
  while( true ) {
    if ((int)uVar36 != iVar4) {
      local_453 = 0;
      `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_453);
    }
    if (FVar41.Data == pFVar40) break;
    local_2e8 = *(longlong *)FVar41.Data;
    local_2d0 = &local_2e8;
    dVar2 = *(double *)(local_2e8 + 0x40);
    uVar47 = SUB84(dVar2,0);
    uVar48 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = *(double *)(local_2e8 + 0x48);
    if (dVar51 <= dVar2) {
      uVar47 = SUB84(dVar51,0);
      uVar48 = (undefined4)((ulonglong)dVar51 >> 0x20);
    }
    uVar49 = SUB84(dVar3,0);
    uVar50 = (int)((ulonglong)dVar3 >> 0x20);
    if ((double)CONCAT44(uVar53,uVar52) <= dVar3) {
      uVar49 = uVar52;
      uVar50 = uVar53;
    }
    dVar51 = (double)CONCAT44(uVar48,uVar47);
    local_2c8 = Optimus::FUniqueNameGenerator::GetUniqueName(&local_330,(FName)local_1b8);
    TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UOptimusNode_*_const_&,FName_&&>_>
              (&local_178,(TPairInitializer<UOptimusNode_*_const_&,FName_&&> *)local_300,
               (bool *)&local_2d0);
    uVar36 = local_420._8_8_ & 0xffffffff;
    FVar41.Data = FVar41.Data + 8;
    uVar52 = uVar49;
    uVar53 = uVar50;
  }
  local_260 = (param_2->field0_0x0)._s_0.X - dVar51;
  dStack_258 = (param_2->field0_0x0)._s_0.Y - (double)CONCAT44(uVar53,uVar52);
  (**(code **)(pUVar11->_padding_ + 0x20))();
  iVar4 = local_390.ArrayNum;
  uVar36 = (ulonglong)local_390.ArrayNum;
  local_438.Data = (FScriptContainerElement *)0x0;
  local_430 = 0;
  pFVar40 = local_390.AllocatorInstance.Data + uVar36 * 8;
  FVar41.Data = local_390.AllocatorInstance.Data;
LAB_14e1a50d0:
  if ((int)uVar36 != iVar4) {
    local_452 = 0;
    `TCheckedPointerIterator<UOptimusNodePair_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_452);
  }
  pUVar45 = local_400;
  if (FVar41.Data != pFVar40) {
    pUVar42 = *(UOptimusNode **)(*(longlong *)FVar41.Data + 0x28);
    pUVar19 = *(UOptimusNode **)(*(longlong *)FVar41.Data + 0x30);
    uVar35 = ((uint)((ulonglong)pUVar42 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar42 >> 4)) *
             -0x7a143595;
    uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
    if (local_178.Elements._8_4_ != local_178.Elements._52_4_) {
      FVar39 = (ForElementType<FSetElementId>)&local_178.Hash;
      if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar39 = local_178.Hash.SecondaryData;
      }
      for (iVar15 = *(int *)((longlong)FVar39 +
                            (ulonglong)(local_178.HashSize - 1U & (uVar35 >> 0x10 ^ uVar35)) * 4);
          iVar15 != -1; iVar15 = *(int *)(local_178.Elements._0_8_ + 0x10 + (longlong)iVar15 * 0x18)
          ) {
        if (*(UOptimusNode **)(local_178.Elements._0_8_ + (longlong)iVar15 * 0x18) == pUVar42) {
          uVar35 = ((uint)((ulonglong)pUVar19 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar19 >> 4)) *
                   -0x7a143595;
          uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
          local_2e0 = pUVar19;
          iVar15 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<UOptimusNode_const_*>
                             (&local_178,uVar35 >> 0x10 ^ uVar35,&local_2e0);
          if (iVar15 != -1) {
            local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_350.Data.ArrayNum = 0;
            local_350.Data.ArrayMax = 0;
            pTVar16 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                      ::Find(&local_178,pUVar42);
            if ((pTVar16 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            pFVar17 = ::FName::ToString((FName *)&pTVar16->field_0x8,&local_248);
            ConstructPath(&local_2b0,&local_360,pFVar17,&local_350);
            if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.Data.AllocatorInstance.Data);
            }
            if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_350.Data.AllocatorInstance.Data);
            }
            local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_340.Data.ArrayNum = 0;
            local_340.Data.ArrayMax = 0;
            pTVar16 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                      ::Find(&local_178,pUVar19);
            if ((pTVar16 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            pFVar17 = ::FName::ToString((FName *)&pTVar16->field_0x8,&local_238);
            ConstructPath(&local_2c0,&local_360,pFVar17,&local_340);
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_340.Data.AllocatorInstance.Data);
            }
            ::FString::FString((FString *)local_3f8,&local_2b0);
            ::FString::FString(&local_3e8,&local_2c0);
            if (((local_438.Data <= (TTuple<FString,FString> *)local_3f8) &&
                ((FScriptContainerElement *)local_3f8 <
                 local_438.Data + (longlong)local_430._4_4_ * 0x20)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            if ((int)local_430 == local_430._4_4_) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_438,(int *)((longlong)&local_430 + 4));
              pFVar38 = local_438.Data + (longlong)iVar15 * 0x20;
              local_430 = CONCAT44(local_430._4_4_,iVar15 + 1);
            }
            else {
              pFVar38 = local_438.Data + (longlong)(int)local_430 * 0x20;
              local_430 = CONCAT44(local_430._4_4_,(int)local_430 + 1);
            }
            *(undefined8 *)pFVar38 = 0;
            *(undefined8 *)pFVar38 = local_3f8._0_8_;
            *(undefined4 *)(pFVar38 + 8) = local_3f8._8_4_;
            *(undefined4 *)(pFVar38 + 0xc) = local_3f8._12_4_;
            *(undefined8 *)(pFVar38 + 0x10) = 0;
            *(FScriptContainerElement **)(pFVar38 + 0x10) = local_3e8.Data.AllocatorInstance.Data;
            *(int *)(pFVar38 + 0x18) = local_3e8.Data.ArrayNum;
            *(int *)(pFVar38 + 0x1c) = local_3e8.Data.ArrayMax;
            local_3e8.Data.ArrayNum = 0;
            local_3e8.Data.ArrayMax = 0;
            local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3f8._8_8_ = 0;
            local_3f8._0_8_ = (FScriptContainerElement *)0x0;
            if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
            }
            if (local_2b0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
            goto LAB_14e1a519e;
            FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
            uVar36 = local_390._8_8_ & 0xffffffff;
            FVar41.Data = FVar41.Data + 8;
            goto LAB_14e1a50d0;
          }
          break;
        }
      }
    }
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7701470802381636459>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                        ,0x36b,
                        "NewNodeNameMap.Contains(FirstNode) && NewNodeNameMap.Contains(SecondNode)")
    ;
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
LAB_14e1a519e:
    uVar36 = local_390._8_8_ & 0xffffffff;
    FVar41.Data = FVar41.Data + 8;
    goto LAB_14e1a50d0;
  }
  iVar4 = local_410.ArrayNum;
  uVar36 = (ulonglong)local_410.ArrayNum;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  pFVar40 = local_410.AllocatorInstance.Data + uVar36 * 8;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  FVar41.Data = local_410.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar36 != iVar4) {
      local_451 = 0;
      `TCheckedPointerIterator<UOptimusNodeSubGraph_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_451);
    }
    if (FVar41.Data == pFVar40) break;
    lVar5 = *(longlong *)FVar41.Data;
    local_298 = Optimus::FUniqueNameGenerator::GetUniqueName(&local_330,(FName)local_1c0);
    local_2d8 = *(undefined8 *)(lVar5 + 0x18);
    local_2a0 = &local_2d8;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_&&,FName_&&>_>
              (&local_b8,(TPairInitializer<FName_&&,FName_&&> *)(local_300 + 4),(bool *)&local_2a0);
    uVar36 = local_410._8_8_ & 0xffffffff;
    FVar41.Data = FVar41.Data + 8;
  }
  local_448.Data = (FScriptContainerElement *)0x0;
  local_440 = 0;
  plVar23 = *(longlong **)&pUVar45[1].field_0x20;
  iVar4 = *(int *)(pUVar45 + 2);
  plVar27 = plVar23 + iVar4;
LAB_14e1a5551:
  if (*(int *)(local_400 + 2) != iVar4) {
    local_450 = 0;
    `TCheckedPointerIterator<UOptimusNodeLink_*_const,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_450);
  }
  if (plVar23 == plVar27) {
    if (local_420.ArrayNum == 1) {
      ::FString::PrintfImpl(&local_370,L"%s Node");
      local_3a0.Data.AllocatorInstance.Data = local_370.Data.AllocatorInstance.Data;
      local_3a0.Data.ArrayNum = local_370.Data.ArrayNum;
      local_3a0.Data.ArrayMax = local_370.Data.ArrayMax;
      local_370.Data.ArrayNum = 0;
      local_370.Data.ArrayMax = 0;
      local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      ::FString::PrintfImpl(&local_380,L"%s %d Nodes");
      local_3a0.Data.AllocatorInstance.Data = local_380.Data.AllocatorInstance.Data;
      local_3a0.Data.ArrayNum = local_380.Data.ArrayNum;
      local_3a0.Data.ArrayMax = local_380.Data.ArrayMax;
      local_380.Data.ArrayNum = 0;
      local_380.Data.ArrayMax = 0;
      local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    pUVar11 = local_428;
    local_318.ActionStack = GetActionStack(local_428);
    UOptimusActionStack::OpenActionScope(local_318.ActionStack,&local_3a0);
    iVar4 = local_410.ArrayNum;
    uVar36 = (ulonglong)local_410.ArrayNum;
    plVar27 = &pUVar11->_padding_;
    local_3a8 = local_410.AllocatorInstance.Data + uVar36 * 8;
    FVar41.Data = local_410.AllocatorInstance.Data;
    do {
      pFVar40 = local_3a8;
      if ((int)uVar36 != iVar4) {
        local_44f = 0;
        `TCheckedPointerIterator<UOptimusNodeSubGraph_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_44f);
      }
      if (FVar41.Data == pFVar40) {
        pFVar26 = ::operator_new(0x28);
        pUVar11 = local_428;
        if (pFVar26 == (FOptimusAction *)0x0) {
          pFVar26 = (FOptimusAction *)0x0;
        }
        else {
          (pFVar26->Title).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar26->Title).Data.ArrayNum = 0;
          (pFVar26->Title).Data.ArrayMax = 0;
          pFVar26->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
          pFVar26[1]._padding_ = 0;
          pFVar26[1].Title.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        bVar10 = false;
        bVar13 = false;
        iVar4 = local_420.ArrayNum;
        uVar36 = (ulonglong)local_420.ArrayNum;
        pFVar40 = local_420.AllocatorInstance.Data + uVar36 * 8;
        FVar41.Data = local_420.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar36 != iVar4) {
            local_44e = 0;
            `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_44e);
          }
          if (FVar41.Data == pFVar40) break;
          (**(code **)(**(longlong **)FVar41.Data + 0x318))(*(longlong **)FVar41.Data,pUVar11);
          uVar36 = local_420._8_8_ & 0xffffffff;
          FVar41.Data = FVar41.Data + 8;
        }
        plVar27 = (longlong *)(**(code **)(pUVar11->_padding_ + 0x18))(&pUVar11->_padding_);
        if ((plVar27 == (longlong *)0x0) ||
           (pUVar24 = (UOptimusDeformer *)(**(code **)(*plVar27 + 8))(plVar27),
           pUVar24 == (UOptimusDeformer *)0x0)) {
LAB_14e1a5c5b:
          pUVar25 = (UOptimusActionStack *)0x0;
        }
        else {
          pUVar18 = UOptimusDeformer::StaticClass();
          iVar4 = (int)pUVar18->_padding_;
          if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar18->_padding_)) goto LAB_14e1a5c5b;
          pUVar25 = UOptimusDeformer::GetActionStack(pUVar24);
        }
        pTVar29 = (TReferenceControllerBase<1> *)0x0;
        local_270.Object = pFVar26;
        pTVar28 = ::operator_new(0x18);
        if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
          pTVar28->SharedReferenceCount = (atomic<int>)0x1;
          pTVar28->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          pTVar28->WeakReferenceCount = (atomic<int>)0x1;
          pTVar28[1]._padding_ = (longlong)pFVar26;
          pTVar29 = pTVar28;
        }
        local_270.SharedReferenceCount.ReferenceController = pTVar29;
        UOptimusActionStack::RunAction(pUVar25,&local_270);
        dVar2 = dStack_258;
        dVar51 = local_260;
        pUVar11 = local_428;
        iVar4 = local_420.ArrayNum;
        uVar36 = (ulonglong)local_420.ArrayNum;
        pFVar40 = local_420.AllocatorInstance.Data + uVar36 * 8;
        FVar41.Data = local_420.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar36 != iVar4) {
            local_44d = 0;
            `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_44d);
          }
          uVar36 = local_430;
          pUVar25 = _UNK_150651568;
          pFVar26 = ___xmm_00000000000000000000000000000010;
          if (FVar41.Data == pFVar40) break;
          pUVar42 = *(UOptimusNode **)FVar41.Data;
          pFVar30 = ::operator_new(0xa0);
          if (pFVar30 == (FOptimusNodeGraphAction_DuplicateNode *)0x0) {
            pFVar30 = (FOptimusNodeGraphAction_DuplicateNode *)0x0;
          }
          else {
            local_128 = (pUVar42->GraphPosition).field0_0x0._s_0.X;
            dStack_120 = (pUVar42->GraphPosition).field0_0x0._s_0.Y;
            local_118 = dVar51;
            dStack_110 = dVar2;
            local_108._0_8_ = (FScriptContainerElement *)0x0;
            local_108._8_8_ = 0;
            local_e8 = (void *)0x0;
            local_e0 = 0;
            local_dc = 0x80;
            local_d8 = 0xffffffff;
            local_d4 = 0;
            local_c8 = (ForElementType<FSetElementId>)0x0;
            local_c0 = 0;
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                         *)local_108,&local_b8);
            local_1a8[0] = (code *)0x0;
            local_180 = (undefined8 *)0x0;
            local_180 = FMemory::Malloc(0x78,8);
            *local_180 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNodes'::`75'::<lambda_1>,0,1>
                          ::_vftable_;
            pdVar1 = (double *)(local_180 + 1);
            *pdVar1 = local_128;
            local_180[2] = dStack_120;
            local_180[3] = local_118;
            local_180[4] = dStack_110;
            TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
            TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                      ((TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        *)(local_180 + 5),
                       (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        *)local_108);
            if (pdVar1 != (double *)0x0) {
              local_1a8[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`UOptimusNodeGraph::DuplicateNodes'::__l75::<lambda_1>,bool,UOptimusNode_*>
                             ::Call;
            }
            pTVar16 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                      ::Find(&local_178,pUVar42);
            if ((pTVar16 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            FVar20.ComparisonIndex.Value = *(uint *)&pTVar16->field_0x8;
            FVar20.Number = *(uint *)&pTVar16->field_0xc;
            bVar10 = true;
            bVar13 = true;
            pFVar17 = (FString *)
                      (**(code **)(pUVar11->_padding_ + 0x20))(&pUVar11->_padding_,local_1d8);
            pFVar30 = FOptimusNodeGraphAction_DuplicateNode::FOptimusNodeGraphAction_DuplicateNode
                                (pFVar30,pFVar17,pUVar42,FVar20,
                                 (TFunction<bool___cdecl(UOptimusNode_*)> *)local_1a8);
          }
          if ((bVar13) && (bVar13 = false, local_1d8[0] != (void *)0x0)) {
            FMemory::Free(local_1d8[0]);
          }
          if (bVar10) {
            bVar10 = false;
            local_c0 = 0;
            if (local_c8 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_c8);
            }
            bVar46 = local_108._12_4_ != 0;
            local_108._8_8_ = (ulonglong)(uint)local_108._12_4_ << 0x20;
            if (bVar46) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,4,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
            }
            local_d8 = 0xffffffff;
            local_d4 = 0;
            local_e0 = 0;
            if (0x80 < local_dc) {
              local_dc = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
            }
            if (local_e8 != (void *)0x0) {
              FMemory::Free(local_e8);
            }
            if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_108._0_8_);
            }
          }
          pUVar25 = GetActionStack(pUVar11);
          UOptimusActionStack::RunAction(pUVar25,(FOptimusAction *)pFVar30);
          uVar36 = local_420._8_8_ & 0xffffffff;
          FVar41.Data = FVar41.Data + 8;
        }
        uVar31 = (ulonglong)(int)local_430;
        pTVar44 = (TTuple<FString,FString> *)(local_438.Data + uVar31 * 0x20);
        uVar37 = uVar31;
        FVar41.Data = local_438.Data;
        while( true ) {
          pUVar34 = (UOptimusActionStack *)0x0;
          if ((int)uVar31 != (int)uVar37) {
            local_44c = 0;
            `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_44c);
          }
          pUVar12 = local_428;
          uVar37 = local_440;
          if ((TTuple<FString,FString> *)FVar41.Data == pTVar44) break;
          plVar27 = (longlong *)(**(code **)(pUVar11->_padding_ + 0x18))(&pUVar11->_padding_);
          pUVar32 = pUVar34;
          if ((plVar27 != (longlong *)0x0) &&
             (pUVar24 = (UOptimusDeformer *)(**(code **)(*plVar27 + 8))(plVar27),
             pUVar24 != (UOptimusDeformer *)0x0)) {
            pUVar18 = UOptimusDeformer::StaticClass();
            iVar4 = (int)pUVar18->_padding_;
            if ((iVar4 <= *(int *)(pUVar24->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                &pUVar18->_padding_)) {
              pUVar32 = UOptimusDeformer::GetActionStack(pUVar24);
            }
          }
          pUVar33 = ::operator_new(0x68);
          if (pUVar33 == (UOptimusActionStack *)0x0) {
            local_2f8.Object = pFVar26;
            local_2f8.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pUVar25;
          }
          else {
            *(atomic<int> *)&pUVar33->_padding_ = (atomic<int>)0x1;
            plVar27 = &pUVar33->_padding_;
            ((atomic<int> *)&pUVar33->_padding_)[1] = (atomic<int>)0x1;
            pUVar33->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNodePair___00_SharedPointerInternals__6B_
            ;
            *plVar27 = 0;
            pUVar33->_padding_ = 0;
            pUVar33->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
            pUVar33->TransactedActionIndex = 0;
            pUVar33->CurrentActionIndex = 0;
            *(undefined8 *)&pUVar33->bIsRunningAction = 0;
            (pUVar33->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pUVar33->Actions).ArrayNum = 0;
            (pUVar33->Actions).ArrayMax = 0;
            ::FString::operator=((FString *)&pUVar33->TransactedActionIndex,(FString *)FVar41.Data);
            ::FString::operator=
                      ((FString *)&pUVar33->Actions,
                       (FString *)&((TTuple<FString,FString> *)FVar41.Data)->field_0x10);
            pUVar33->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddNodePair__6B_;
            (pUVar33->ActionScopes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pUVar33->ActionScopes).ArrayNum = 0;
            (pUVar33->ActionScopes).ArrayMax = 0;
            pUVar33->_padding_ = 0;
            *(undefined8 *)&(pUVar33->BeginScopeFunc).field_0x0 = 0;
            ::FString::PrintfImpl(&local_3b8,L"Add Node Pair");
            if ((FString *)plVar27 == &local_3b8) {
              if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
              }
            }
            else {
              if ((void *)*plVar27 != (void *)0x0) {
                FMemory::Free((void *)*plVar27);
              }
              *plVar27 = (longlong)local_3b8.Data.AllocatorInstance.Data;
              *(int *)&pUVar33->_padding_ = local_3b8.Data.ArrayNum;
              *(int *)((longlong)&pUVar33->_padding_ + 4) = local_3b8.Data.ArrayMax;
              local_3b8.Data.ArrayNum = 0;
              local_3b8.Data.ArrayMax = 0;
              local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if ((&pUVar33->_padding_ == (longlong *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            LOCK();
            *(atomic<int> *)&pUVar33->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pUVar33->_padding_ + 1);
            UNLOCK();
            pUVar34 = pUVar33;
            local_2f8.Object = (FOptimusAction *)&pUVar33->_padding_;
            local_2f8.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pUVar33;
          }
          UOptimusActionStack::RunAction(pUVar32,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pUVar34);
          uVar31 = local_430 & 0xffffffff;
          FVar41.Data = FVar41.Data + 0x20;
          uVar37 = uVar36 & 0xffffffff;
        }
        uVar31 = (ulonglong)(int)local_440;
        pTVar44 = (TTuple<FString,FString> *)(local_448.Data + uVar31 * 0x20);
        uVar36 = uVar31;
        FVar41.Data = local_448.Data;
        do {
          if ((int)uVar31 != (int)uVar36) {
            local_44b[0] = 0;
            `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_44b);
          }
          if ((TTuple<FString,FString> *)FVar41.Data == pTVar44) {
            FOptimusActionScope::~FOptimusActionScope(&local_318);
            if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
            }
            DestructItems<TTuple<FString,FString>,int>
                      ((TTuple<FString,FString> *)local_448.Data,(int)local_440);
            if ((TTuple<FString,FString> *)local_448.Data != (TTuple<FString,FString> *)0x0) {
              FMemory::Free(local_448.Data);
            }
            local_b8.HashSize = 0;
            if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_b8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_b8.Elements);
            DestructItems<TTuple<FString,FString>,int>
                      ((TTuple<FString,FString> *)local_438.Data,(int)local_430);
            if ((TTuple<FString,FString> *)local_438.Data != (TTuple<FString,FString> *)0x0) {
              FMemory::Free(local_438.Data);
            }
            if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_360.Data.AllocatorInstance.Data);
            }
            local_178.HashSize = 0;
            if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_178.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<UOptimusNode_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UOptimusNode_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_178.Elements);
            if (local_330.GeneratedName.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_330.GeneratedName.AllocatorInstance.Data);
            }
            if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_410.AllocatorInstance.Data);
            }
            if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_390.AllocatorInstance.Data);
            }
            if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_420.AllocatorInstance.Data);
            }
            return true;
          }
          plVar27 = (longlong *)(**(code **)(pUVar12->_padding_ + 0x18))(&pUVar12->_padding_);
          if ((plVar27 == (longlong *)0x0) ||
             (pUVar24 = (UOptimusDeformer *)(**(code **)(*plVar27 + 8))(plVar27),
             pUVar24 == (UOptimusDeformer *)0x0)) {
LAB_14e1a61e4:
            pUVar34 = (UOptimusActionStack *)0x0;
          }
          else {
            pUVar18 = UOptimusDeformer::StaticClass();
            iVar4 = (int)pUVar18->_padding_;
            if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar18->_padding_)) goto LAB_14e1a61e4;
            pUVar34 = UOptimusDeformer::GetActionStack(pUVar24);
          }
          pUVar32 = ::operator_new(0x50);
          if (pUVar32 == (UOptimusActionStack *)0x0) {
            pUVar32 = (UOptimusActionStack *)0x0;
            local_310.Object = pFVar26;
            local_310.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pUVar25;
          }
          else {
            *(atomic<int> *)&pUVar32->_padding_ = (atomic<int>)0x1;
            ((atomic<int> *)&pUVar32->_padding_)[1] = (atomic<int>)0x1;
            pUVar32->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddLink___00_SharedPointerInternals__6B_
            ;
            FOptimusNodeGraphAction_AddLink::FOptimusNodeGraphAction_AddLink
                      ((FOptimusNodeGraphAction_AddLink *)&pUVar32->_padding_,(FString *)FVar41.Data
                       ,(FString *)&((TTuple<FString,FString> *)FVar41.Data)->field_0x10,true);
            if ((&pUVar32->_padding_ == (longlong *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            LOCK();
            *(atomic<int> *)&pUVar32->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pUVar32->_padding_ + 1);
            UNLOCK();
            local_310.Object = (FOptimusAction *)&pUVar32->_padding_;
            local_310.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pUVar32;
          }
          UOptimusActionStack::RunAction(pUVar34,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pUVar32);
          uVar31 = local_440 & 0xffffffff;
          FVar41.Data = FVar41.Data + 0x20;
          uVar36 = uVar37 & 0xffffffff;
        } while( true );
      }
      pUVar7 = *(UOptimusNodeSubGraph **)FVar41.Data;
      pTVar22 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                ::Find(&local_b8,(FName)pUVar7->_padding_);
      if ((pTVar22 == (TTuple<FName,FName> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      FVar8.ComparisonIndex.Value = *(uint *)&pTVar22->field_0x8;
      FVar8.Number = *(uint *)&pTVar22->field_0xc;
      pFVar17 = (FString *)(**(code **)(*plVar27 + 0x20))(plVar27,local_1e8);
      plVar23 = (longlong *)(**(code **)(*plVar27 + 0x18))(plVar27);
      if ((plVar23 == (longlong *)0x0) ||
         (pUVar24 = (UOptimusDeformer *)(**(code **)(*plVar23 + 8))(plVar23),
         pUVar24 == (UOptimusDeformer *)0x0)) {
LAB_14e1a5b3b:
        pUVar25 = (UOptimusActionStack *)0x0;
      }
      else {
        pUVar18 = UOptimusDeformer::StaticClass();
        iVar15 = (int)pUVar18->_padding_;
        if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar15) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
            &pUVar18->_padding_)) goto LAB_14e1a5b3b;
        pUVar25 = UOptimusDeformer::GetActionStack(pUVar24);
      }
      DuplicateSubGraph(pUVar25,pFVar17,pUVar7,FVar8);
      if (local_1e8[0] != (void *)0x0) {
        FMemory::Free(local_1e8[0]);
      }
      uVar36 = local_410._8_8_ & 0xffffffff;
      FVar41.Data = FVar41.Data + 8;
    } while( true );
  }
  lVar5 = *plVar23;
  lVar6 = *(longlong *)(lVar5 + 0x28);
  while (lVar43 = lVar6, lVar6 = *(longlong *)(lVar43 + 0x20), lVar6 != 0) {
    pUVar18 = UOptimusNodePin::StaticClass();
    iVar15 = (int)pUVar18->_padding_;
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar15 * 8)
        != &pUVar18->_padding_)) break;
  }
  pUVar42 = *(UOptimusNode **)(lVar43 + 0x20);
  if (pUVar42 == (UOptimusNode *)0x0) {
LAB_14e1a55e1:
    pUVar42 = (UOptimusNode *)0x0;
  }
  else {
    pUVar18 = UOptimusNode::StaticClass();
    iVar15 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar42->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar42->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar18->_padding_)) goto LAB_14e1a55e1;
  }
  pUVar19 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar5 + 0x30));
  uVar35 = ((uint)((ulonglong)pUVar42 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar42 >> 4)) *
           -0x7a143595;
  uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
  if (local_178.Elements._8_4_ != local_178.Elements._52_4_) {
    FVar39 = (ForElementType<FSetElementId>)&local_178.Hash;
    if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar39 = local_178.Hash.SecondaryData;
    }
    iVar15 = *(int *)((longlong)FVar39 +
                     (ulonglong)(local_178.HashSize - 1U & (uVar35 >> 0x10 ^ uVar35)) * 4);
    if (iVar15 != -1) {
      do {
        if (*(UOptimusNode **)(local_178.Elements._0_8_ + (longlong)iVar15 * 0x18) == pUVar42) {
          uVar35 = ((uint)((ulonglong)pUVar19 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar19 >> 4)) *
                   -0x7a143595;
          uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
          FVar39 = (ForElementType<FSetElementId>)&local_178.Hash;
          if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar39 = local_178.Hash.SecondaryData;
          }
          iVar15 = *(int *)((longlong)FVar39 +
                           (ulonglong)(local_178.HashSize - 1U & (uVar35 >> 0x10 ^ uVar35)) * 4);
          if (iVar15 != -1) goto LAB_14e1a56e0;
          goto LAB_14e1a59a4;
        }
        iVar15 = *(int *)(local_178.Elements._0_8_ + 0x10 + (longlong)iVar15 * 0x18);
      } while (iVar15 != -1);
      plVar23 = plVar23 + 1;
      goto LAB_14e1a5551;
    }
  }
LAB_14e1a59a4:
  plVar23 = plVar23 + 1;
  goto LAB_14e1a5551;
  while (iVar15 = *(int *)(local_178.Elements._0_8_ + 0x10 + (longlong)iVar15 * 0x18), iVar15 != -1)
  {
LAB_14e1a56e0:
    if (*(UOptimusNode **)(local_178.Elements._0_8_ + (longlong)iVar15 * 0x18) == pUVar19) {
      FVar20 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar5 + 0x28));
      pFVar17 = ::FName::ToString((FName *)FVar20,&local_218);
      pTVar16 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                ::Find(&local_178,pUVar42);
      if ((pTVar16 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar21 = ::FName::ToString((FName *)&pTVar16->field_0x8,&local_228);
      ConstructPath(&local_280,&local_360,pFVar21,pFVar17);
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      FVar20 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar5 + 0x30));
      pFVar17 = ::FName::ToString((FName *)FVar20,&local_1f8);
      pTVar16 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                ::Find(&local_178,pUVar19);
      if ((pTVar16 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar21 = ::FName::ToString((FName *)&pTVar16->field_0x8,&local_208);
      ConstructPath(&local_290,&local_360,pFVar21,pFVar17);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      ::FString::FString((FString *)local_3d8,&local_280);
      ::FString::FString(&local_3c8,&local_290);
      if (((local_448.Data <= (TTuple<FString,FString> *)local_3d8) &&
          ((FScriptContainerElement *)local_3d8 < local_448.Data + (longlong)local_440._4_4_ * 0x20)
          ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      if ((int)local_440 == local_440._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_448,(int *)((longlong)&local_440 + 4));
        pFVar40 = local_448.Data + (longlong)iVar15 * 0x20;
        local_440 = CONCAT44(local_440._4_4_,iVar15 + 1);
      }
      else {
        pFVar40 = local_448.Data + (longlong)(int)local_440 * 0x20;
        local_440 = CONCAT44(local_440._4_4_,(int)local_440 + 1);
      }
      *(undefined8 *)pFVar40 = 0;
      *(undefined8 *)pFVar40 = local_3d8._0_8_;
      *(undefined4 *)(pFVar40 + 8) = local_3d8._8_4_;
      *(undefined4 *)(pFVar40 + 0xc) = local_3d8._12_4_;
      *(undefined8 *)(pFVar40 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar40 + 0x10) = local_3c8.Data.AllocatorInstance.Data;
      *(int *)(pFVar40 + 0x18) = local_3c8.Data.ArrayNum;
      *(int *)(pFVar40 + 0x1c) = local_3c8.Data.ArrayMax;
      local_3c8.Data.ArrayNum = 0;
      local_3c8.Data.ArrayMax = 0;
      local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3d8._8_8_ = 0;
      local_3d8._0_8_ = (FScriptContainerElement *)0x0;
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      goto LAB_14e1a59a4;
    }
  }
  plVar23 = plVar23 + 1;
  goto LAB_14e1a5551;
}

// DuplicateSubGraph @ 14e1a63c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e1a6ee8) */
/* WARNING: Removing unreachable block (ram,0x00014e1a6ef6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UOptimusNodeGraph::DuplicateSubGraph
          (UOptimusActionStack *param_1,FString *param_2,UOptimusNodeSubGraph *param_3,FName param_4
          )

{
  atomic<int> *paVar1;
  longlong *plVar2;
  void *_Src;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  FOptimusAction *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  UOptimusNodeSubGraph *pUVar9;
  UOptimusActionStack *this;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  FString *pFVar14;
  UOptimusNode_GraphTerminal *pUVar15;
  UOptimusNode_GraphTerminal *pUVar16;
  UOptimusNode_GraphTerminal *pUVar17;
  FName FVar18;
  FString *pFVar19;
  UOptimusNode *pUVar20;
  TReferenceControllerBase<1> *pTVar21;
  UClass *pUVar22;
  TReferenceControllerBase<1> *pTVar23;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> *pTVar24;
  byte bVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  ForAnyElementType FVar31;
  FScriptContainerElement *pFVar32;
  uint uVar33;
  longlong *plVar34;
  uint *puVar35;
  atomic<int> aVar36;
  TTuple<FString,FString> *pTVar37;
  undefined1 auStackY_5f8 [32];
  undefined1 local_5a8;
  undefined1 local_5a7;
  undefined1 local_5a6;
  undefined1 local_5a5;
  undefined1 local_5a4 [4];
  ForAnyElementType local_5a0;
  undefined8 local_598;
  <lambda_1> local_590;
  undefined1 local_58f;
  undefined1 local_58e [6];
  undefined8 local_588;
  FString local_580;
  FOptimusParameterBindingArray local_570;
  FOptimusParameterBindingArray local_560;
  undefined1 local_550 [16];
  FString local_540;
  FString local_530;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_520;
  int local_510;
  int local_50c;
  int local_508 [2];
  TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> local_500;
  TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> local_4f0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_4e0;
  FString local_4d0;
  UOptimusNodeSubGraph *local_4c0;
  FName local_4b8;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString *local_440;
  FName local_438;
  FString *local_430;
  FName local_428;
  FName local_420;
  FString *local_418;
  UOptimusActionStack *local_410;
  FName local_408;
  FName local_400;
  FOptimusActionScope local_3f8;
  FString *local_3f0;
  TSharedPtr<FOptimusAction,1> local_3e8;
  TSharedPtr<FOptimusAction,1> local_3d8;
  TSharedPtr<FOptimusAction,1> local_3c8;
  TSharedPtr<FOptimusAction,1> local_3b8;
  TSharedPtr<FOptimusAction,1> local_3a8;
  int local_398;
  FName local_394;
  longlong *local_388;
  uint uStack_380;
  uint uStack_37c;
  TBitArray<FDefaultBitArrayAllocator> *local_378;
  undefined4 uStack_370;
  uint uStack_36c;
  uint local_368;
  undefined4 uStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  longlong *local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_350;
  undefined8 uStack_330;
  FString local_328;
  FString local_318;
  TSharedPtr<FOptimusAction,1> local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288 [2];
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> local_1d8 [3];
  code *local_1a8 [2];
  undefined **local_198;
  longlong local_190;
  longlong lStack_188;
  undefined8 local_180;
  code *local_178 [2];
  undefined **local_168;
  longlong local_160;
  longlong lStack_158;
  undefined8 local_150;
  code *local_148 [2];
  undefined **local_138;
  code *local_130;
  undefined8 local_120;
  code *local_118 [5];
  undefined8 *local_f0;
  undefined4 local_cc;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  local_4c0 = param_3;
  local_4b8 = param_4;
  local_410 = param_1;
  local_3f0 = param_2;
  pFVar14 = ::FName::ToString(&local_4b8,&local_268);
  ::FString::ConcatFC(&local_2f8,param_2,L"/");
  ::FString::ConcatFF(&local_580,&local_2f8,pFVar14);
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  local_588 = 1;
  pUVar15 = UOptimusNodeSubGraph::GetTerminalNode(param_3,Entry);
  pUVar16 = UOptimusNodeSubGraph::GetTerminalNode(param_3,Return);
  lVar28 = pUVar15->_padding_;
  lVar4 = pUVar15->_padding_;
  plVar34 = (longlong *)param_3->_padding_;
  iVar29 = (int)param_3->_padding_;
  lVar5 = pUVar16->_padding_;
  lVar6 = pUVar16->_padding_;
  local_9c = 0x80;
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  plVar2 = plVar34 + iVar29;
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_98 = 0xffffffff;
  while( true ) {
    if ((int)param_3->_padding_ != iVar29) {
      local_5a8 = 0;
      `TCheckedPointerIterator<UOptimusNodeLink_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_5a8);
    }
    if (plVar34 == plVar2) break;
    lVar30 = *plVar34;
    pUVar17 = (UOptimusNode_GraphTerminal *)
              UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar30 + 0x30));
    if (pUVar17 == pUVar16) {
      FVar18 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar30 + 0x30));
      pFVar14 = ::FName::ToString((FName *)FVar18,&local_248);
      pFVar19 = ::FName::ToString(&UOptimusNode_GraphTerminal::ReturnNodeName,&local_258);
      ConstructPath(&local_470,&local_580,pFVar19,pFVar14);
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FVar18 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar30 + 0x28));
      pFVar14 = ::FName::ToString((FName *)FVar18,&local_238);
      pUVar20 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar30 + 0x28));
      local_394 = (FName)pUVar20->_padding_;
      ::FName::ToString(&local_394,&local_2e8);
      ConstructPath(&local_480,&local_580,&local_2e8,pFVar14);
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      iVar13 = local_480.Data.ArrayNum + -1;
      FVar31.Data = local_480.Data.AllocatorInstance.Data;
      if (local_480.Data.ArrayNum == 0) {
        iVar13 = 0;
        FVar31.Data = (FScriptContainerElement *)L"";
      }
      uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar31.Data);
      iVar13 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           *)local_c8,uVar12,&local_480);
      if ((iVar13 == -1) || (lVar30 = local_c8._0_8_ + (longlong)iVar13 * 0x28, lVar30 == 0)) {
        local_440 = &local_480;
        TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_c8,(uint)&local_510,
                   (TKeyInitializer<FString_const_&> *)(ulonglong)uVar12,(bool *)&local_440);
        lVar30 = local_c8._0_8_ + (longlong)local_510 * 0x28;
      }
      if (((*(FString **)(lVar30 + 0x10) <= &local_470) &&
          (&local_470 < *(FString **)(lVar30 + 0x10) + *(int *)(lVar30 + 0x1c))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      iVar13 = *(int *)(lVar30 + 0x18);
      if (iVar13 == *(int *)(lVar30 + 0x1c)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(lVar30 + 0x10),(int *)(lVar30 + 0x1c));
      }
      *(int *)(lVar30 + 0x18) = iVar13 + 1;
      ::FString::FString((FString *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar30 + 0x10)),
                         &local_470);
      FVar31.Data = local_470.Data.AllocatorInstance.Data;
      if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480.Data.AllocatorInstance.Data);
        FVar31.Data = local_470.Data.AllocatorInstance.Data;
      }
    }
    else {
      pUVar17 = (UOptimusNode_GraphTerminal *)
                UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar30 + 0x28));
      if (pUVar17 == pUVar15) {
        FVar18 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar30 + 0x28));
        pFVar14 = ::FName::ToString((FName *)FVar18,&local_218);
        pFVar19 = ::FName::ToString(&UOptimusNode_GraphTerminal::EntryNodeName,&local_228);
        ConstructPath(&local_4a0,&local_580,pFVar19,pFVar14);
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        FVar18 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar30 + 0x30));
        pFVar14 = ::FName::ToString((FName *)FVar18,&local_208);
        pUVar20 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar30 + 0x30));
        local_438 = (FName)pUVar20->_padding_;
        ::FName::ToString(&local_438,&local_2d8);
        ConstructPath(&local_490,&local_580,&local_2d8,pFVar14);
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        iVar13 = local_4a0.Data.ArrayNum + -1;
        FVar31.Data = local_4a0.Data.AllocatorInstance.Data;
        if (local_4a0.Data.ArrayNum == 0) {
          iVar13 = 0;
          FVar31.Data = (FScriptContainerElement *)L"";
        }
        uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar31.Data);
        iVar13 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)local_c8,uVar12,&local_4a0);
        if ((iVar13 == -1) || (lVar30 = local_c8._0_8_ + (longlong)iVar13 * 0x28, lVar30 == 0)) {
          local_430 = &local_4a0;
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_c8,(uint)&local_50c,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar12,(bool *)&local_430);
          lVar30 = local_c8._0_8_ + (longlong)local_50c * 0x28;
        }
        if (((*(FString **)(lVar30 + 0x10) <= &local_490) &&
            (&local_490 < *(FString **)(lVar30 + 0x10) + *(int *)(lVar30 + 0x1c))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        iVar13 = *(int *)(lVar30 + 0x18);
        if (iVar13 == *(int *)(lVar30 + 0x1c)) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)(lVar30 + 0x10),(int *)(lVar30 + 0x1c));
        }
        *(int *)(lVar30 + 0x18) = iVar13 + 1;
        ::FString::FString((FString *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar30 + 0x10)),
                           &local_490);
        FVar31.Data = local_4a0.Data.AllocatorInstance.Data;
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
          FVar31.Data = local_4a0.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar18 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar30 + 0x28));
        pFVar14 = ::FName::ToString((FName *)FVar18,&local_1f8);
        pUVar20 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar30 + 0x28));
        local_428 = (FName)pUVar20->_padding_;
        ::FName::ToString(&local_428,&local_2c8);
        ConstructPath(&local_4d0,&local_580,&local_2c8,pFVar14);
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        FVar18 = UOptimusNodePin::GetUniqueName(*(UOptimusNodePin **)(lVar30 + 0x30));
        pFVar14 = ::FName::ToString((FName *)FVar18,&local_1e8);
        pUVar20 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar30 + 0x30));
        local_420 = (FName)pUVar20->_padding_;
        ::FName::ToString(&local_420,&local_2b8);
        ConstructPath(&local_4b0,&local_580,&local_2b8,pFVar14);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        iVar13 = local_4d0.Data.ArrayNum + -1;
        FVar31.Data = local_4d0.Data.AllocatorInstance.Data;
        if (local_4d0.Data.ArrayNum == 0) {
          iVar13 = 0;
          FVar31.Data = (FScriptContainerElement *)L"";
        }
        uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar31.Data);
        iVar13 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)local_c8,uVar12,&local_4d0);
        if ((iVar13 == -1) || (lVar30 = local_c8._0_8_ + (longlong)iVar13 * 0x28, lVar30 == 0)) {
          local_418 = &local_4d0;
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_c8,(uint)local_508,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar12,(bool *)&local_418);
          lVar30 = local_c8._0_8_ + (longlong)local_508[0] * 0x28;
        }
        if (((*(FString **)(lVar30 + 0x10) <= &local_4b0) &&
            (&local_4b0 < *(FString **)(lVar30 + 0x10) + *(int *)(lVar30 + 0x1c))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        iVar13 = *(int *)(lVar30 + 0x18);
        if (iVar13 == *(int *)(lVar30 + 0x1c)) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)(lVar30 + 0x10),(int *)(lVar30 + 0x1c));
        }
        *(int *)(lVar30 + 0x18) = iVar13 + 1;
        ::FString::FString((FString *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar30 + 0x10)),
                           &local_4b0);
        FVar31.Data = local_4d0.Data.AllocatorInstance.Data;
        if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
          FVar31.Data = local_4d0.Data.AllocatorInstance.Data;
        }
      }
    }
    if (FVar31.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar31.Data);
    }
    plVar34 = plVar34 + 1;
    param_3 = local_4c0;
  }
  local_520.ArrayNum = (int)param_3->_padding_;
  lVar30 = (longlong)local_520.ArrayNum;
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
  _Src = (void *)param_3->_padding_;
  local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_520.ArrayNum == 0) {
    local_520.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_520.ArrayNum,0,&local_520.AllocatorInstance,local_520.ArrayNum,
               &local_520.ArrayMax);
    memcpy(local_520.AllocatorInstance.Data,_Src,lVar30 << 3);
  }
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UOptimusNodeGraph::DuplicateSubGraph_::__l2::<lambda_1>_>(&local_520,&local_590);
  local_4e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4e0.ArrayNum = 0;
  local_4e0.ArrayMax = 0;
  local_4f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f0.ArrayNum = 0;
  local_4f0.ArrayMax = 0;
  local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.ArrayNum = 0;
  local_500.ArrayMax = 0;
  GatherRelatedObjects(&local_520,&local_4e0,&local_4f0,&local_500);
  this = local_410;
  iVar29 = local_4f0.ArrayNum;
  uVar26 = (ulonglong)local_4f0.ArrayNum;
  local_5a0.Data = (FScriptContainerElement *)0x0;
  local_598 = 0;
  pFVar32 = local_4f0.AllocatorInstance.Data + uVar26 * 8;
  FVar31.Data = local_4f0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar26 != iVar29) {
      local_5a7 = 0;
      `TCheckedPointerIterator<UOptimusNodePair_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_5a7);
    }
    if (FVar31.Data == pFVar32) break;
    local_450.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_450.Data.ArrayNum = 0;
    local_450.Data.ArrayMax = 0;
    lVar30 = *(longlong *)(*(longlong *)FVar31.Data + 0x30);
    local_408 = *(FName *)(*(longlong *)(*(longlong *)FVar31.Data + 0x28) + 0x18);
    ::FName::ToString(&local_408,&local_2a8);
    ConstructPath(&local_328,&local_580,&local_2a8,&local_450);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
    local_400 = *(FName *)(lVar30 + 0x18);
    local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_460.Data.ArrayNum = 0;
    local_460.Data.ArrayMax = 0;
    ::FName::ToString(&local_400,&local_298);
    ConstructPath(local_288,&local_580,&local_298,&local_460);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    ::FString::FString((FString *)local_550,&local_328);
    ::FString::FString(&local_540,local_288);
    if (((local_5a0.Data <= (TTuple<FString,FString> *)local_550) &&
        ((FScriptContainerElement *)local_550 < local_5a0.Data + (longlong)local_598._4_4_ * 0x20))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    iVar13 = (int)local_598;
    if ((int)local_598 == local_598._4_4_) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_5a0,(int *)((longlong)&local_598 + 4));
    }
    local_598 = CONCAT44(local_598._4_4_,iVar13 + 1);
    pFVar27 = local_5a0.Data + (longlong)iVar13 * 0x20;
    *(undefined8 *)pFVar27 = 0;
    *(undefined8 *)pFVar27 = local_550._0_8_;
    *(undefined4 *)(pFVar27 + 8) = local_550._8_4_;
    *(undefined4 *)(pFVar27 + 0xc) = local_550._12_4_;
    *(undefined8 *)(pFVar27 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar27 + 0x10) = local_540.Data.AllocatorInstance.Data;
    *(int *)(pFVar27 + 0x18) = local_540.Data.ArrayNum;
    *(int *)(pFVar27 + 0x1c) = local_540.Data.ArrayMax;
    local_540.Data.ArrayNum = 0;
    local_540.Data.ArrayMax = 0;
    local_540.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_550._8_8_ = 0;
    local_550._0_8_ = (FScriptContainerElement *)0x0;
    if (local_288[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288[0].Data.AllocatorInstance.Data);
    }
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    uVar26 = local_4f0._8_8_ & 0xffffffff;
    FVar31.Data = FVar31.Data + 8;
  }
  ::FString::FString(&local_318,L"Duplicate SubGraph");
  local_3f8.ActionStack = this;
  UOptimusActionStack::OpenActionScope(this,&local_318);
  FOptimusActionScope::~FOptimusActionScope(&local_3f8);
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  pUVar9 = local_4c0;
  FOptimusParameterBindingArray::FOptimusParameterBindingArray(&local_570,&local_4c0->InputBindings)
  ;
  FOptimusParameterBindingArray::FOptimusParameterBindingArray(&local_560,&pUVar9->OutputBindings);
  pTVar21 = ::operator_new(0x90);
  pTVar8 = _UNK_150651568;
  pFVar7 = ___xmm_00000000000000000000000000000010;
  aVar36 = SUB84(local_588,0);
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    local_3d8.Object = ___xmm_00000000000000000000000000000010;
    local_3d8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pTVar21 = pTVar23;
  }
  else {
    pTVar21->SharedReferenceCount = aVar36;
    pTVar21->WeakReferenceCount = aVar36;
    local_118[0] = (code *)0x0;
    pTVar21->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddGraph___00_SharedPointerInternals__6B_
    ;
    local_f0 = FMemory::Malloc(0x28,8);
    local_f0[1] = 0;
    *local_f0 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::`20'::<lambda_2>,0,1>
                 ::_vftable_;
    local_f0[1] = local_570.InnerArray.AllocatorInstance.Data;
    local_570.InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_f0 + 2) = local_570.InnerArray.ArrayNum;
    *(int *)((longlong)local_f0 + 0x14) = local_570.InnerArray.ArrayMax;
    local_570.InnerArray.ArrayNum = 0;
    local_570.InnerArray.ArrayMax = 0;
    local_f0[3] = 0;
    local_f0[3] = local_560.InnerArray.AllocatorInstance.Data;
    local_560.InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_f0 + 4) = local_560.InnerArray.ArrayNum;
    *(int *)((longlong)local_f0 + 0x24) = local_560.InnerArray.ArrayMax;
    local_560.InnerArray.ArrayNum = 0;
    local_560.InnerArray.ArrayMax = 0;
    if (local_f0 + 1 != (undefined8 *)0x0) {
      local_118[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_2>,bool,UOptimusNodeGraph_*>
                     ::Call;
    }
    FOptimusNodeGraphAction_AddGraph::FOptimusNodeGraphAction_AddGraph
              ((FOptimusNodeGraphAction_AddGraph *)(pTVar21 + 1),local_3f0,SubGraph,local_4b8,-1,
               (TFunction<bool___cdecl(UOptimusNodeGraph_*)> *)local_118);
    local_3d8.Object = (FOptimusAction *)(pTVar21 + 1);
    if ((local_3d8.Object == (FOptimusAction *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    local_3d8.SharedReferenceCount.ReferenceController = pTVar21;
  }
  UOptimusActionStack::RunAction(this,&local_3d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)local_560.InnerArray.AllocatorInstance.Data,
             local_560.InnerArray.ArrayNum);
  if ((FOptimusParameterBinding *)local_560.InnerArray.AllocatorInstance.Data !=
      (FOptimusParameterBinding *)0x0) {
    FMemory::Free(local_560.InnerArray.AllocatorInstance.Data);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)local_570.InnerArray.AllocatorInstance.Data,
             local_570.InnerArray.ArrayNum);
  if ((FOptimusParameterBinding *)local_570.InnerArray.AllocatorInstance.Data !=
      (FOptimusParameterBinding *)0x0) {
    FMemory::Free(local_570.InnerArray.AllocatorInstance.Data);
  }
  pUVar22 = UOptimusNode_GraphTerminal::StaticClass();
  pTVar21 = ::operator_new(0xa0);
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    local_3c8.Object = pFVar7;
    local_3c8.SharedReferenceCount.ReferenceController = pTVar8;
    pTVar21 = pTVar23;
  }
  else {
    pTVar21->SharedReferenceCount = aVar36;
    pTVar21->WeakReferenceCount = aVar36;
    pTVar21->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_198 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::`20'::<lambda_3>,0,0>
                 ::_vftable_;
    local_1a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_3>,bool,UOptimusNode_*>
                   ::Call;
    local_180 = 0;
    local_190 = lVar28;
    lStack_188 = lVar4;
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)(pTVar21 + 1),&local_580,pUVar22,
               UOptimusNode_GraphTerminal::EntryNodeName,
               (TFunction<bool___cdecl(UOptimusNode_*)> *)local_1a8);
    local_3c8.Object = (FOptimusAction *)(pTVar21 + 1);
    if ((local_3c8.Object == (FOptimusAction *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    local_3c8.SharedReferenceCount.ReferenceController = pTVar21;
  }
  UOptimusActionStack::RunAction(this,&local_3c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  pUVar22 = UOptimusNode_GraphTerminal::StaticClass();
  pTVar21 = ::operator_new(0xa0);
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    local_3b8.Object = pFVar7;
    local_3b8.SharedReferenceCount.ReferenceController = pTVar8;
  }
  else {
    pTVar21->SharedReferenceCount = aVar36;
    pTVar21->WeakReferenceCount = aVar36;
    pTVar21->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNode___00_SharedPointerInternals__6B_
    ;
    local_168 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::`20'::<lambda_4>,0,0>
                 ::_vftable_;
    local_178[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_4>,bool,UOptimusNode_*>
                   ::Call;
    local_150 = 0;
    local_160 = lVar5;
    lStack_158 = lVar6;
    FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
              ((FOptimusNodeGraphAction_AddNode *)(pTVar21 + 1),&local_580,pUVar22,
               UOptimusNode_GraphTerminal::ReturnNodeName,
               (TFunction<bool___cdecl(UOptimusNode_*)> *)local_178);
    local_3b8.Object = (FOptimusAction *)(pTVar21 + 1);
    if ((local_3b8.Object == (FOptimusAction *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    pTVar23 = pTVar21;
    local_3b8.SharedReferenceCount.ReferenceController = pTVar21;
  }
  UOptimusActionStack::RunAction(this,&local_3b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  iVar29 = local_500.ArrayNum;
  uVar26 = (ulonglong)local_500.ArrayNum;
  pFVar32 = local_500.AllocatorInstance.Data + uVar26 * 8;
  FVar31.Data = local_500.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar26 != iVar29) {
      local_5a6 = 0;
      `TCheckedPointerIterator<UOptimusNodeSubGraph_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_5a6);
    }
    if (FVar31.Data == pFVar32) break;
    DuplicateSubGraph(this,&local_580,*(UOptimusNodeSubGraph **)FVar31.Data,
                      (FName)(*(UOptimusNodeSubGraph **)FVar31.Data)->_padding_);
    uVar26 = local_500._8_8_ & 0xffffffff;
    FVar31.Data = FVar31.Data + 8;
  }
  iVar29 = local_4e0.ArrayNum;
  uVar26 = (ulonglong)local_4e0.ArrayNum;
  pFVar32 = local_4e0.AllocatorInstance.Data + uVar26 * 8;
  FVar31.Data = local_4e0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar26 != iVar29) {
      local_5a5 = 0;
      `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_5a5);
    }
    if (FVar31.Data == pFVar32) break;
    pUVar20 = *(UOptimusNode **)FVar31.Data;
    FVar18 = (FName)pUVar20->_padding_;
    pTVar23 = ::operator_new(0xb0);
    if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
      local_3a8.Object = pFVar7;
      local_3a8.SharedReferenceCount.ReferenceController = pTVar8;
    }
    else {
      pTVar23->SharedReferenceCount = SUB84(local_588,0);
      pTVar23->WeakReferenceCount = SUB84(local_588,0);
      pTVar23->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_DuplicateNode___00_SharedPointerInternals__6B_
      ;
      local_120 = 0;
      local_138 = &
                  ___7__TFunction_OwnedObject_P6A_NPEAVUOptimusNode___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_130 = `UOptimusNodeGraph::DuplicateSubGraph'::__l28::<lambda_5>::<lambda_invoker_cdecl>;
      local_148[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(UOptimusNode_*),bool,UOptimusNode_*>::Call;
      FOptimusNodeGraphAction_DuplicateNode::FOptimusNodeGraphAction_DuplicateNode
                ((FOptimusNodeGraphAction_DuplicateNode *)(pTVar23 + 1),&local_580,pUVar20,FVar18,
                 (TFunction<bool___cdecl(UOptimusNode_*)> *)local_148);
      if (((FOptimusAction *)(pTVar23 + 1) == (FOptimusAction *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      local_3a8.Object = (FOptimusAction *)(pTVar23 + 1);
      local_3a8.SharedReferenceCount.ReferenceController = pTVar23;
    }
    UOptimusActionStack::RunAction(this,&local_3a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    uVar26 = local_4e0._8_8_ & 0xffffffff;
    FVar31.Data = FVar31.Data + 8;
  }
  iVar29 = (int)local_598;
  uVar26 = (ulonglong)(int)local_598;
  pTVar37 = (TTuple<FString,FString> *)(local_5a0.Data + uVar26 * 0x20);
  FVar31.Data = local_5a0.Data;
  while( true ) {
    if ((int)uVar26 != iVar29) {
      local_5a4[0] = 0;
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_5a4);
    }
    uVar12 = local_a0;
    if ((TTuple<FString,FString> *)FVar31.Data == pTVar37) break;
    pTVar23 = ::operator_new(0x68);
    if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
      local_3e8.Object = pFVar7;
      local_3e8.SharedReferenceCount.ReferenceController = pTVar8;
    }
    else {
      pTVar23->SharedReferenceCount = SUB84(local_588,0);
      pTVar23->WeakReferenceCount = SUB84(local_588,0);
      pTVar23->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNodePair___00_SharedPointerInternals__6B_
      ;
      pTVar23[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar23[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar23[2]._padding_ = 0;
      pTVar23[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
      pTVar23[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar23[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar23[3]._padding_ = 0;
      pTVar23[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar23[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar23[4]._padding_ = 0;
      ::FString::operator=((FString *)&pTVar23[2].SharedReferenceCount,(FString *)FVar31.Data);
      ::FString::operator=
                ((FString *)&pTVar23[3].SharedReferenceCount,
                 (FString *)&((TTuple<FString,FString> *)FVar31.Data)->field_0x10);
      pTVar23[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddNodePair__6B_;
      pTVar23[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar23[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar23[5]._padding_ = 0;
      pTVar23[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar23[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar23[6]._padding_ = 0;
      ::FString::PrintfImpl(&local_530,L"Add Node Pair");
      paVar1 = &pTVar23[1].SharedReferenceCount;
      if (paVar1 != (atomic<int> *)&local_530) {
        if (*(void **)paVar1 != (void *)0x0) {
          FMemory::Free(*(void **)paVar1);
        }
        *(FScriptContainerElement **)paVar1 = local_530.Data.AllocatorInstance.Data;
        *(int *)&pTVar23[2]._padding_ = local_530.Data.ArrayNum;
        *(int *)((longlong)&pTVar23[2]._padding_ + 4) = local_530.Data.ArrayMax;
        local_530.Data.ArrayNum = 0;
        local_530.Data.ArrayMax = 0;
        local_530.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data.AllocatorInstance.Data);
      }
      if (((FOptimusAction *)(pTVar23 + 1) == (FOptimusAction *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      local_3e8.Object = (FOptimusAction *)(pTVar23 + 1);
      local_3e8.SharedReferenceCount.ReferenceController = pTVar23;
    }
    UOptimusActionStack::RunAction(this,&local_3e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    uVar26 = local_598 & 0xffffffff;
    FVar31.Data = FVar31.Data + 0x20;
  }
  uStack_380 = 0;
  uStack_36c = uStack_380;
  local_368 = uStack_380;
  if (local_a0 == 0) {
LAB_14e1a7654:
    uStack_37c = (uint)local_588;
  }
  else {
    puVar35 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar35 = local_a8;
    }
    uStack_37c = *puVar35;
    while (uStack_37c == 0) {
      lVar28 = (longlong)(int)uStack_380;
      local_368 = local_368 + 0x20;
      uStack_380 = uStack_380 + 1;
      uStack_36c = local_a0;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_380)
      goto LAB_14e1a7654;
      uStack_37c = puVar35[lVar28 + 1];
    }
    uStack_37c = -uStack_37c & uStack_37c;
    uVar26 = (ulonglong)uStack_37c * 2 + 1;
    lVar28 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_398 = (int)lVar28;
    uStack_36c = (local_368 - 1) + local_398;
    if ((int)local_a0 < (int)uStack_36c) {
      uStack_36c = local_a0;
    }
  }
  local_388 = (longlong *)local_c8;
  uStack_364 = local_cc;
  local_378 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
  iStack_360 = local_c8._8_4_ - local_94;
  uVar33 = local_a0 & 0xffffffe0;
  uStack_370 = 0xffffffff;
  TStack_350.CurrentBitIndex = uStack_36c;
  TStack_350.UnvisitedBitMask = 0xffffffff;
  TStack_350._padding_ = CONCAT44(uStack_37c,uStack_380);
  iVar29 = (int)local_a0 >> 5;
  TStack_350._28_4_ = local_cc;
  TStack_350.BaseBitIndex = local_368;
  uStack_330 = CONCAT44(uStack_35c,iStack_360);
  bVar25 = (byte)local_a0;
  local_358 = local_388;
  TStack_350.Array = local_378;
  if (((int)local_a0 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  if (uVar12 != local_a0) {
    puVar35 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar35 = local_a8;
    }
    uVar12 = -1 << (bVar25 & 0x1f) & puVar35[iVar29];
    while (uVar12 == 0) {
      lVar28 = (longlong)iVar29;
      uVar33 = uVar33 + 0x20;
      iVar29 = iVar29 + 1;
      uVar12 = local_a0;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_14e1a779d;
      uVar12 = puVar35[lVar28 + 1];
    }
    uVar26 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar12 = (uVar33 - 1) + (int)lVar28;
    if ((int)local_a0 < (int)uVar12) {
      uVar12 = local_a0;
    }
  }
LAB_14e1a779d:
  while( true ) {
    plVar2 = local_358;
    if ((int)local_358[1] - *(int *)((longlong)local_358 + 0x34) != (int)uStack_330) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_58f);
    }
    if (((TStack_350.CurrentBitIndex == uVar12) &&
        (TStack_350.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
       (plVar2 == (longlong *)local_c8)) break;
    lVar28 = *plVar2;
    iVar29 = *(int *)(lVar28 + 0x18 + (longlong)TStack_350.CurrentBitIndex * 0x28);
    pFVar14 = (FString *)(lVar28 + (longlong)TStack_350.CurrentBitIndex * 0x28);
    pFVar32 = pFVar14[1].Data.AllocatorInstance.Data;
    pFVar27 = pFVar32 + (longlong)iVar29 * 0x10;
    while( true ) {
      if (pFVar14[1].Data.ArrayNum != iVar29) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_58e);
      }
      if (pFVar32 == pFVar27) break;
      pTVar24 = MakeShared<FOptimusNodeGraphAction_AddLink,1,FString_const_&,FString_const_&>
                          (local_1d8,pFVar14,(FString *)pFVar32);
      local_308.Object = (FOptimusAction *)pTVar24->Object;
      local_308.SharedReferenceCount.ReferenceController =
           (pTVar24->SharedReferenceCount).ReferenceController;
      if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UOptimusActionStack::RunAction(this,&local_308);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8[0].SharedReferenceCount.ReferenceController);
      pFVar32 = pFVar32 + 0x10;
    }
    TStack_350.UnvisitedBitMask = TStack_350.UnvisitedBitMask & ~TStack_350._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_350);
  }
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)local_5a0.Data,(int)local_598);
  if ((TTuple<FString,FString> *)local_5a0.Data != (TTuple<FString,FString> *)0x0) {
    FMemory::Free(local_5a0.Data);
  }
  if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.AllocatorInstance.Data);
  }
  if (local_4f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.AllocatorInstance.Data);
  }
  if (local_4e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.AllocatorInstance.Data);
  }
  if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.AllocatorInstance.Data);
  }
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExpandCollapsedNodes @ 14e1acb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e1addcb) */
/* WARNING: Removing unreachable block (ram,0x00014e1addd9) */
/* WARNING: Removing unreachable block (ram,0x00014e1ad9c4) */
/* WARNING: Removing unreachable block (ram,0x00014e1ad9d2) */
/* WARNING: Removing unreachable block (ram,0x00014e1ad49b) */
/* WARNING: Removing unreachable block (ram,0x00014e1ad4a9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::ExpandCollapsedNodes
          (UOptimusNodeGraph *this,
          TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusNode *param_1)

{
  double *pdVar1;
  atomic<int> *paVar2;
  undefined8 *puVar3;
  double dVar4;
  UOptimusNodePin *this_00;
  UOptimusNodeSubGraph *pUVar5;
  FName FVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FOptimusAction *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  UOptimusNodeGraph *pUVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  UClass *pUVar19;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar20;
  FScriptContainerElement *pFVar21;
  void *pvVar22;
  TTuple<UOptimusNode_*,FName> *pTVar23;
  FString *pFVar24;
  UOptimusNodePin *pUVar25;
  longlong *plVar26;
  FName FVar27;
  FString *pFVar28;
  UOptimusNode *pUVar29;
  UOptimusNode *pUVar30;
  FString *pFVar31;
  UOptimusActionStack *pUVar32;
  TReferenceControllerBase<1> *pTVar33;
  TTuple<FName,FName> *pTVar34;
  FOptimusAction *pFVar35;
  longlong *plVar36;
  UOptimusDeformer *pUVar37;
  TReferenceControllerBase<1> *pTVar38;
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> *pTVar39;
  uint uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  FScriptContainerElement *pFVar43;
  UOptimusNodePin **ppUVar44;
  longlong lVar45;
  UOptimusNodeGraph *pUVar46;
  int iVar47;
  undefined8 *puVar48;
  longlong lVar49;
  int iVar50;
  ForAnyElementType FVar51;
  TTuple<FString,FString> *pTVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auStackY_768 [32];
  ForAnyElementType local_718;
  undefined8 local_710;
  undefined1 local_708;
  undefined1 local_707;
  undefined1 local_706;
  undefined1 local_705;
  undefined1 local_704;
  undefined1 local_703;
  undefined1 local_702;
  undefined1 local_701;
  undefined1 local_700;
  undefined1 local_6ff;
  undefined1 local_6fe;
  undefined1 local_6fd;
  undefined1 local_6fc;
  undefined1 local_6fb [3];
  uint local_6f8;
  ForAnyElementType local_6f0;
  undefined8 local_6e8;
  FScriptContainerElement *local_6e0;
  ForAnyElementType local_6d8;
  uint local_6d0;
  uint local_6cc;
  <lambda_1> local_6c8;
  undefined1 local_6c7 [7];
  ForAnyElementType local_6c0;
  undefined8 local_6b8;
  longlong *local_6b0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_6a8;
  undefined1 local_698 [16];
  undefined8 local_688;
  undefined8 local_680;
  FScriptContainerElement *local_678;
  ForAnyElementType local_670;
  int local_668;
  int local_664;
  UOptimusNodeGraph *local_660;
  TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> local_658;
  undefined8 local_648;
  undefined1 local_640 [16];
  FString local_630;
  undefined1 local_620 [16];
  FString local_610;
  FString local_600;
  FString local_5f0;
  TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> local_5e0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_5d0;
  UOptimusNode *local_5c0;
  FString local_5b8;
  undefined8 *local_5a8;
  uint local_5a0;
  FString local_598;
  FString local_588;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_578;
  TArray<int,TSizedDefaultAllocator<32>_> local_568;
  UOptimusNode *local_558;
  undefined1 auStack_550 [16];
  FUniqueNameGenerator local_540;
  UOptimusNode *local_528;
  undefined8 local_520;
  UOptimusNode *local_518;
  UOptimusNode *local_510;
  longlong local_508;
  undefined1 local_500 [8];
  TSharedPtr<FOptimusAction,1> local_4f8;
  TSharedPtr<FOptimusAction,1> local_4e8;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_4d8;
  FOptimusActionScope local_4c8;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *local_4c0;
  TSharedPtr<FOptimusAction,1> local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  TVector2<double>_u_0 local_478;
  TSharedPtr<FOptimusAction,1> local_468;
  double local_458;
  double dStack_450;
  TSharedPtr<FOptimusAction,1> local_448;
  FString local_438;
  longlong *local_428;
  FName local_420;
  FString local_418;
  undefined8 *local_408;
  FName local_400;
  TArrayView<UOptimusNodePin_*_const,int> local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  void *local_348 [2];
  TSharedRef<FOptimusNodeGraphAction_AddLink,1> local_338;
  undefined1 local_320 [24];
  undefined1 local_308 [16];
  code *local_2f8 [5];
  undefined8 *local_2d0;
  UOptimusNode *local_2c8;
  UOptimusNode *pUStack_2c0;
  UOptimusNode *local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
  local_278;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [32];
  void *local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
  local_1a8;
  ForAnyElementType *local_158;
  FString local_150;
  void *local_140;
  TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
  local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_768;
  local_6f8 = 0;
  local_660 = this;
  local_5c0 = param_1;
  local_4c0 = __return_storage_ptr__;
  if (param_1 == (UOptimusNode *)0x0) {
LAB_14e1acbdb:
    bVar14 = false;
    if (param_1 != (UOptimusNode *)0x0) goto LAB_14e1acbe3;
  }
  else {
    pUVar19 = UOptimusNode_FunctionReference::StaticClass();
    iVar18 = (int)pUVar19->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar19->_padding_)) goto LAB_14e1acbdb;
    bVar14 = true;
LAB_14e1acbe3:
    pUVar19 = UOptimusNode_SubGraphReference::StaticClass();
    iVar18 = (int)pUVar19->_padding_;
    if ((iVar18 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar29 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar18 * 8)
       == &pUVar19->_padding_)) goto LAB_14e1acc0c;
  }
  pUVar29 = (UOptimusNode *)0x0;
LAB_14e1acc0c:
  if ((bVar14) || (pUVar29 != (UOptimusNode *)0x0)) {
    local_6c0.Data = (FScriptContainerElement *)0x0;
    local_6b8 = 0;
    GetAllLinkIndexesToNode(this,&local_568,param_1,Unknown);
    iVar18 = local_568.ArrayNum;
    uVar41 = (ulonglong)local_568.ArrayNum;
    pFVar21 = local_568.AllocatorInstance.Data + uVar41 * 4;
    FVar51.Data = local_568.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar41 != iVar18) {
        local_708 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_708);
      }
      if (FVar51.Data == pFVar21) break;
      uVar40 = *(uint *)FVar51.Data;
      uVar17 = 0;
      if ((int)uVar40 < (this->Links).ArrayNum) {
        uVar17 = ~uVar40 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar20;
      }
      local_648 = *(undefined8 *)((this->Links).AllocatorInstance.Data + (longlong)(int)uVar40 * 8);
      if (((local_6c0.Data <= (FScriptContainerElement *)&local_648) &&
          ((FScriptContainerElement *)&local_648 < local_6c0.Data + (longlong)local_6b8._4_4_ * 8))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar14)) {
        pcVar7 = (code *)swi(3);
        pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar20;
      }
      iVar16 = (int)local_6b8;
      if ((int)local_6b8 == local_6b8._4_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_6c0,(int *)((longlong)&local_6b8 + 4));
      }
      FVar51.Data = FVar51.Data + 4;
      local_6b8 = CONCAT44(local_6b8._4_4_,iVar16 + 1);
      *(undefined8 *)(local_6c0.Data + (longlong)iVar16 * 8) = local_648;
      uVar41 = (ulonglong)(uint)local_568.ArrayNum;
    }
    if (local_568.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.AllocatorInstance.Data);
    }
    pFVar43 = (this->Nodes).AllocatorInstance.Data;
    uVar40 = 0;
    iVar18 = (this->Nodes).ArrayNum;
    dVar9 = (param_1->GraphPosition).field0_0x0._s_0.X;
    dVar10 = (param_1->GraphPosition).field0_0x0._s_0.Y;
    local_6d8.Data = (FScriptContainerElement *)0x0;
    local_6d0 = 0;
    pFVar21 = pFVar43 + (longlong)iVar18 * 8;
    local_6cc = 0;
    while( true ) {
      if ((this->Nodes).ArrayNum != iVar18) {
        local_707 = 0;
        `TCheckedPointerIterator<TObjectPtr<UOptimusNode>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_707);
        uVar40 = local_6d0;
      }
      if (pFVar43 == pFVar21) break;
      pUVar29 = *(UOptimusNode **)pFVar43;
      if (pUVar29 != param_1) {
        local_2b0 = (pUVar29->GraphPosition).field0_0x0._s_0.X;
        dStack_2a8 = (pUVar29->GraphPosition).field0_0x0._s_0.Y;
        local_2a0 = (param_1->GraphPosition).field0_0x0._s_0.X;
        dStack_298 = (param_1->GraphPosition).field0_0x0._s_0.Y;
        auStack_550._8_4_ = SUB84(dStack_2a8 - dStack_298,0);
        auStack_550._0_8_ = local_2b0 - local_2a0;
        auStack_550._12_4_ = (int)((ulonglong)(dStack_2a8 - dStack_298) >> 0x20);
        uVar17 = uVar40;
        local_558 = pUVar29;
        if (((local_6d8.Data <= (FScriptContainerElement *)&local_558) &&
            ((FScriptContainerElement *)&local_558 <
             local_6d8.Data + (longlong)(int)local_6cc * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar17 = local_6d0, bVar14)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar20;
        }
        if (uVar17 == local_6cc) {
          uVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_6d8,(int *)&local_6cc);
        }
        uVar40 = uVar17 + 1;
        *(UOptimusNode **)(local_6d8.Data + (longlong)(int)uVar17 * 0x18) = local_558;
        *(undefined8 *)(local_6d8.Data + (longlong)(int)uVar17 * 0x18 + 8) = auStack_550._0_8_;
        *(undefined8 *)(local_6d8.Data + (longlong)(int)uVar17 * 0x18 + 0x10) = auStack_550._8_8_;
        local_6d0 = uVar40;
      }
      pFVar43 = pFVar43 + 8;
    }
    pUVar19 = Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister();
    pFVar21 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar19);
    local_6e0 = pFVar21;
    pUVar19 = UOptimusNodePinRouter::GetPrivateStaticClass();
    pvVar22 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar19);
    if ((pFVar21 != (FScriptContainerElement *)0x0) && (pvVar22 != (void *)0x0)) {
      local_6b0 = (longlong *)(**(code **)(*(longlong *)pFVar21 + 0x10))(pFVar21);
      local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::CopyToEmpty<UOptimusNode_*,int>
                (&local_578,*(UOptimusNode ***)((longlong)local_6b0 + 0x38),
                 *(int *)((longlong)local_6b0 + 0x40),0);
      TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::
      RemoveAll<_UOptimusNodeGraph::ExpandCollapsedNodes_::__l19::<lambda_1>_>
                (&local_578,&local_6c8);
      local_6a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a8.ArrayNum = 0;
      local_6a8.ArrayMax = 0;
      local_5e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5e0.ArrayNum = 0;
      local_5e0.ArrayMax = 0;
      local_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_658.ArrayNum = 0;
      local_658.ArrayMax = 0;
      GatherRelatedObjects(&local_578,&local_6a8,&local_5e0,&local_658);
      iVar18 = local_6a8.ArrayNum;
      uVar41 = (ulonglong)local_6a8.ArrayNum;
      uVar54 = (undefined4)__real_7fefffffffffffff;
      uVar56 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
      uVar53 = (undefined4)__real_ffefffffffffffff;
      uVar55 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
      local_540.GeneratedName.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar21 = local_6a8.AllocatorInstance.Data + uVar41 * 8;
      local_540.GeneratedName.ArrayNum = 0;
      local_540.GeneratedName.ArrayMax = 0;
      local_278.Elements._0_8_ = 0;
      local_278.Elements._8_8_ = 0;
      local_278.Elements._32_8_ = 0;
      local_278.Elements._40_4_ = 0;
      local_278.Elements._44_4_ = 0x80;
      local_278.Elements._48_4_ = 0xffffffff;
      local_278.Elements._52_4_ = 0;
      local_278.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_278.HashSize = 0;
      FVar51.Data = local_6a8.AllocatorInstance.Data;
      uVar57 = uVar53;
      uVar58 = uVar55;
      uVar59 = uVar54;
      uVar60 = uVar56;
      local_540.ScopeObject = (UObject *)this;
      while( true ) {
        if ((int)uVar41 != iVar18) {
          local_706 = 0;
          `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_706);
        }
        if (FVar51.Data == pFVar21) break;
        local_508 = *(longlong *)FVar51.Data;
        local_428 = &local_508;
        dVar4 = *(double *)(local_508 + 0x40);
        if (dVar4 <= (double)CONCAT44(uVar56,uVar54)) {
          uVar54 = SUB84(dVar4,0);
          uVar56 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        dVar4 = *(double *)(local_508 + 0x48);
        if (dVar4 <= (double)CONCAT44(uVar60,uVar59)) {
          uVar59 = SUB84(dVar4,0);
          uVar60 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        dVar4 = *(double *)(local_508 + 0x40);
        if ((double)CONCAT44(uVar55,uVar53) <= dVar4) {
          uVar53 = SUB84(dVar4,0);
          uVar55 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        dVar4 = *(double *)(local_508 + 0x48);
        if ((double)CONCAT44(uVar58,uVar57) <= dVar4) {
          uVar57 = SUB84(dVar4,0);
          uVar58 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        local_420 = Optimus::FUniqueNameGenerator::GetUniqueName(&local_540,(FName)local_320);
        TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UOptimusNode_*_const_&,FName_&&>_>
                  (&local_278,(TPairInitializer<UOptimusNode_*_const_&,FName_&&> *)(local_500 + 4),
                   (bool *)&local_428);
        uVar41 = local_6a8._8_8_ & 0xffffffff;
        FVar51.Data = FVar51.Data + 8;
      }
      local_458 = ((double)CONCAT44(uVar55,uVar53) + (double)CONCAT44(uVar56,uVar54)) *
                  __real_3fe0000000000000;
      dVar4 = ((double)CONCAT44(uVar58,uVar57) - (double)CONCAT44(uVar60,uVar59)) *
              __real_3fe0000000000000 + __real_4059000000000000;
      dVar8 = ((double)CONCAT44(uVar55,uVar53) - (double)CONCAT44(uVar56,uVar54)) *
              __real_3fe0000000000000 + __real_4059000000000000;
      dStack_450 = ((double)CONCAT44(uVar58,uVar57) + (double)CONCAT44(uVar60,uVar59)) *
                   __real_3fe0000000000000;
      (**(code **)(this->_padding_ + 0x20))(&this->_padding_,&local_5f0);
      iVar18 = local_5e0.ArrayNum;
      uVar41 = (ulonglong)local_5e0.ArrayNum;
      local_6f0.Data = (FScriptContainerElement *)0x0;
      local_6e8 = 0;
      pFVar21 = local_5e0.AllocatorInstance.Data + uVar41 * 8;
      FVar51.Data = local_5e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar41 != iVar18) {
          local_705 = 0;
          `TCheckedPointerIterator<UOptimusNodePair_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_705);
        }
        pFVar43 = local_6e0;
        if (FVar51.Data == pFVar21) break;
        pUVar29 = *(UOptimusNode **)(*(longlong *)FVar51.Data + 0x28);
        pUVar30 = *(UOptimusNode **)(*(longlong *)FVar51.Data + 0x30);
        uVar40 = ((uint)((ulonglong)pUVar29 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar29 >> 4)) *
                 -0x7a143595;
        uVar40 = (uVar40 >> 0xd ^ uVar40) * -0x3d4d51cb;
        local_510 = pUVar29;
        iVar16 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<UOptimusNode_const_*>
                           (&local_278,uVar40 >> 0x10 ^ uVar40,&local_510);
        if ((iVar16 == -1) ||
           (uVar40 = ((uint)((ulonglong)pUVar30 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar30 >> 4))
                     * -0x7a143595, uVar40 = (uVar40 >> 0xd ^ uVar40) * -0x3d4d51cb,
           local_518 = pUVar30,
           iVar16 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<UOptimusNode_const_*>
                              (&local_278,uVar40 >> 0x10 ^ uVar40,&local_518), iVar16 == -1)) {
          bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7701470802381637144>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                              ,0x618,
                              "NewNodeNameMap.Contains(FirstNode) && NewNodeNameMap.Contains(SecondNode)"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar20;
          }
LAB_14e1ad507:
          uVar41 = local_5e0._8_8_ & 0xffffffff;
          FVar51.Data = FVar51.Data + 8;
        }
        else {
          local_588.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_588.Data.ArrayNum = 0;
          local_588.Data.ArrayMax = 0;
          pTVar23 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                    ::Find(&local_278,pUVar29);
          if ((pTVar23 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar20;
          }
          pFVar24 = ::FName::ToString((FName *)&pTVar23->field_0x8,&local_3e8);
          ConstructPath(&local_438,&local_5f0,pFVar24,&local_588);
          if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
          }
          if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_588.Data.AllocatorInstance.Data);
          }
          local_598.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_598.Data.ArrayNum = 0;
          local_598.Data.ArrayMax = 0;
          pTVar23 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                    ::Find(&local_278,pUVar30);
          if ((pTVar23 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar20;
          }
          pFVar24 = ::FName::ToString((FName *)&pTVar23->field_0x8,&local_3d8);
          ConstructPath(&local_418,&local_5f0,pFVar24,&local_598);
          if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
          }
          if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_598.Data.AllocatorInstance.Data);
          }
          ::FString::FString((FString *)local_620,&local_438);
          ::FString::FString(&local_610,&local_418);
          if (((local_6f0.Data <= (TTuple<FString,FString> *)local_620) &&
              ((FScriptContainerElement *)local_620 <
               local_6f0.Data + (longlong)local_6e8._4_4_ * 0x20)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar7 = (code *)swi(3);
            pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar20;
          }
          if ((uint)local_6e8 == local_6e8._4_4_) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&local_6f0,(int *)((longlong)&local_6e8 + 4));
            pFVar43 = local_6f0.Data + (longlong)iVar16 * 0x20;
            local_6e8 = CONCAT44(local_6e8._4_4_,iVar16 + 1);
          }
          else {
            pFVar43 = local_6f0.Data + (longlong)(int)(uint)local_6e8 * 0x20;
            local_6e8 = CONCAT44(local_6e8._4_4_,(uint)local_6e8 + 1);
          }
          *(undefined8 *)pFVar43 = 0;
          *(undefined8 *)pFVar43 = local_620._0_8_;
          *(undefined4 *)(pFVar43 + 8) = local_620._8_4_;
          *(undefined4 *)(pFVar43 + 0xc) = local_620._12_4_;
          *(undefined8 *)(pFVar43 + 0x10) = 0;
          *(FScriptContainerElement **)(pFVar43 + 0x10) = local_610.Data.AllocatorInstance.Data;
          *(int *)(pFVar43 + 0x18) = local_610.Data.ArrayNum;
          *(int *)(pFVar43 + 0x1c) = local_610.Data.ArrayMax;
          local_610.Data.ArrayNum = 0;
          local_610.Data.ArrayMax = 0;
          local_610.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_620._8_8_ = 0;
          local_620._0_8_ = (FScriptContainerElement *)0x0;
          if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_418.Data.AllocatorInstance.Data);
          }
          if (local_438.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_14e1ad507;
          FMemory::Free(local_438.Data.AllocatorInstance.Data);
          uVar41 = local_5e0._8_8_ & 0xffffffff;
          FVar51.Data = FVar51.Data + 8;
        }
      }
      iVar18 = local_658.ArrayNum;
      uVar41 = (ulonglong)local_658.ArrayNum;
      local_1a8.Elements._0_8_ = 0;
      local_1a8.Elements._8_8_ = 0;
      pFVar21 = local_658.AllocatorInstance.Data + uVar41 * 8;
      local_1a8.Elements._32_8_ = 0;
      local_1a8.Elements._40_4_ = 0;
      local_1a8.Elements._44_4_ = 0x80;
      local_1a8.Elements._48_4_ = 0xffffffff;
      local_1a8.Elements._52_4_ = 0;
      local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_1a8.HashSize = 0;
      FVar51.Data = local_658.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar41 != iVar18) {
          local_704 = 0;
          `TCheckedPointerIterator<UOptimusNodeSubGraph_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_704);
        }
        if (FVar51.Data == pFVar21) break;
        lVar49 = *(longlong *)FVar51.Data;
        local_400 = Optimus::FUniqueNameGenerator::GetUniqueName(&local_540,(FName)local_308);
        local_520 = *(undefined8 *)(lVar49 + 0x18);
        local_408 = &local_520;
        TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_&&,FName_&&>_>
                  (&local_1a8,(TPairInitializer<FName_&&,FName_&&> *)local_500,(bool *)&local_408);
        uVar41 = local_658._8_8_ & 0xffffffff;
        FVar51.Data = FVar51.Data + 8;
      }
      local_158 = &local_718;
      local_718.Data = (FScriptContainerElement *)0x0;
      local_710 = 0;
      ::FString::FString(&local_150,&local_5f0);
      local_138.Elements._0_8_ = 0;
      local_138.Elements._8_8_ = 0;
      local_138.Elements._32_8_ = 0;
      local_138.Elements._40_4_ = 0;
      local_138.Elements._44_4_ = 0x80;
      local_138.Elements._48_4_ = 0xffffffff;
      local_138.Elements._52_4_ = 0;
      local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_138.HashSize = 0;
      local_140 = pvVar22;
      TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
      ::operator=(&local_138,&local_278);
      UOptimusNode::GetPins(local_5c0,&local_3f8);
      for (ppUVar44 = local_3f8.DataPtr; ppUVar44 != local_3f8.DataPtr + local_3f8.ArrayNum;
          ppUVar44 = ppUVar44 + 1) {
        `UOptimusNodeGraph::ExpandCollapsedNodes'::__l19::<lambda_2>::operator()
                  (&local_158,*ppUVar44);
      }
      pUVar25 = (UOptimusNodePin *)(**(code **)(*(longlong *)pFVar43 + 0x20))(pFVar43);
      UOptimusNodePin::GetConnectedPins(pUVar25,&local_4d8);
      plVar36 = local_6b0;
      if (0 < local_4d8.ArrayNum) {
        pUVar25 = *(UOptimusNodePin **)local_4d8.AllocatorInstance.Data;
        if ((pUVar25->Direction != Output) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ExternalComponentPin->GetDirection() == EOptimusNodePinDirection::Output"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                                ,0x64e,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar20;
        }
        UOptimusNodePin::GetPinPath(pUVar25,&local_498);
        uVar41 = (ulonglong)*(int *)((longlong)local_6b0 + 0x40);
        pFVar21 = *(FScriptContainerElement **)((longlong)local_6b0 + 0x38);
        local_678 = (FScriptContainerElement *)
                    CONCAT44(local_678._4_4_,*(int *)((longlong)local_6b0 + 0x40));
        pFVar43 = pFVar21 + uVar41 * 8;
        plVar36 = local_6b0;
        local_6e0 = pFVar43;
        while( true ) {
          if (*(int *)((longlong)plVar36 + 0x40) != (int)uVar41) {
            local_703 = 0;
            `TCheckedPointerIterator<TObjectPtr<UOptimusNode>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_703);
          }
          if (pFVar21 == pFVar43) break;
          pUVar29 = *(UOptimusNode **)pFVar21;
          if (pUVar29 != (UOptimusNode *)0x0) {
            pUVar19 = UOptimusComponentBindingReceiver::StaticClass();
            plVar26 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar29,pUVar19)
            ;
            if (plVar26 != (longlong *)0x0) {
              (**(code **)(*plVar26 + 0x10))(plVar26,&local_5a8);
              uVar40 = local_5a0;
              uVar41 = (ulonglong)(int)local_5a0;
              puVar3 = local_5a8 + uVar41;
              puVar48 = local_5a8;
              while( true ) {
                if ((uint)uVar41 != uVar40) {
                  local_702 = 0;
                  `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_702);
                }
                if (puVar48 == puVar3) break;
                pUVar25 = (UOptimusNodePin *)*puVar48;
                if ((pUVar25->Direction != Input) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InternalPin->GetDirection() ==EOptimusNodePinDirection::Input"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                                        ,0x659,L""), bVar14)) {
                  pcVar7 = (code *)swi(3);
                  pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
                  return pTVar20;
                }
                FVar27 = UOptimusNodePin::GetUniqueName(pUVar25);
                pFVar24 = ::FName::ToString((FName *)FVar27,&local_3b8);
                pTVar23 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                          ::Find(&local_278,pUVar29);
                if ((pTVar23 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar14)) {
                  pcVar7 = (code *)swi(3);
                  pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
                  return pTVar20;
                }
                pFVar28 = ::FName::ToString((FName *)&pTVar23->field_0x8,&local_3c8);
                ConstructPath(&local_4a8,&local_5f0,pFVar28,pFVar24);
                if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
                }
                if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                }
                ::FString::FString((FString *)local_640,&local_498);
                ::FString::FString(&local_630,&local_4a8);
                if (((local_718.Data <= (TTuple<FString,FString> *)local_640) &&
                    ((FScriptContainerElement *)local_640 <
                     local_718.Data + (longlong)local_710._4_4_ * 0x20)) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar14)) {
                  pcVar7 = (code *)swi(3);
                  pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
                  return pTVar20;
                }
                if ((int)local_710 == local_710._4_4_) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&local_718,(int *)((longlong)&local_710 + 4));
                  pFVar43 = local_718.Data + (longlong)iVar18 * 0x20;
                  local_710 = CONCAT44(local_710._4_4_,iVar18 + 1);
                }
                else {
                  pFVar43 = local_718.Data + (longlong)(int)local_710 * 0x20;
                  local_710 = CONCAT44(local_710._4_4_,(int)local_710 + 1);
                }
                *(undefined8 *)pFVar43 = 0;
                *(undefined8 *)pFVar43 = local_640._0_8_;
                *(undefined4 *)(pFVar43 + 8) = local_640._8_4_;
                *(undefined4 *)(pFVar43 + 0xc) = local_640._12_4_;
                *(undefined8 *)(pFVar43 + 0x10) = 0;
                *(FScriptContainerElement **)(pFVar43 + 0x10) =
                     local_630.Data.AllocatorInstance.Data;
                *(int *)(pFVar43 + 0x18) = local_630.Data.ArrayNum;
                *(int *)(pFVar43 + 0x1c) = local_630.Data.ArrayMax;
                local_630.Data.ArrayNum = 0;
                local_630.Data.ArrayMax = 0;
                local_630.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_640._8_8_ = 0;
                local_640._0_8_ = (FScriptContainerElement *)0x0;
                if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
                }
                uVar41 = (ulonglong)local_5a0;
                puVar48 = puVar48 + 1;
              }
              pFVar43 = local_6e0;
              plVar36 = local_6b0;
              if (local_5a8 != (undefined8 *)0x0) {
                FMemory::Free(local_5a8);
                pFVar43 = local_6e0;
                plVar36 = local_6b0;
              }
            }
          }
          uVar41 = (ulonglong)local_678 & 0xffffffff;
          pFVar21 = pFVar21 + 8;
        }
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
      }
      iVar18 = 0;
      local_670.Data = (FScriptContainerElement *)0x0;
      local_668 = *(int *)((longlong)plVar36 + 0x50);
      lVar49 = (longlong)local_668;
      pvVar22 = *(void **)((longlong)plVar36 + 0x48);
      if (local_668 == 0) {
        local_664 = 0;
        iVar16 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_668,0,&local_670,local_668,&local_664);
        memcpy(local_670.Data,pvVar22,lVar49 << 3);
        iVar16 = local_668;
      }
      FVar51.Data = local_670.Data;
      lVar49 = (longlong)iVar16;
      iVar47 = 0;
      iVar50 = local_668;
      if (iVar16 != 0) {
        bVar14 = `UOptimusNodeGraph::ExpandCollapsedNodes'::__l19::<lambda_3>::operator()
                           (&local_701,*(UOptimusNodeLink **)local_670.Data);
        bVar14 = !bVar14;
        lVar45 = 0;
        iVar47 = iVar18;
        do {
          lVar45 = lVar45 + 1;
          iVar50 = iVar18 + 1;
          local_678 = (FScriptContainerElement *)CONCAT44(local_678._4_4_,iVar18);
          iVar16 = iVar18;
          iVar18 = iVar50;
          if (lVar45 < lVar49) {
            do {
              bVar15 = `UOptimusNodeGraph::ExpandCollapsedNodes'::__l19::<lambda_3>::operator()
                                 (&local_701,*(UOptimusNodeLink **)(FVar51.Data + lVar45 * 8));
              if (bVar14 != !bVar15) break;
              iVar18 = iVar18 + 1;
              lVar45 = lVar45 + 1;
            } while (lVar45 < lVar49);
            iVar16 = (int)local_678;
          }
          if (bVar14 != false) {
            if (iVar47 != iVar16) {
              memmove(FVar51.Data + (longlong)iVar47 * 8,FVar51.Data + (longlong)iVar16 * 8,
                      (longlong)(iVar18 - iVar16) << 3);
            }
            iVar47 = iVar47 + (iVar18 - iVar16);
          }
          bVar14 = (bool)(bVar14 ^ 1);
          iVar50 = iVar47;
        } while (lVar45 < lVar49);
      }
      local_668 = iVar50;
      local_6e0 = local_670.Data + (longlong)iVar47 * 8;
      FVar51.Data = local_670.Data;
      iVar18 = iVar47;
      while( true ) {
        pFVar21 = local_6e0;
        if (iVar18 != iVar47) {
          local_700 = 0;
          `TCheckedPointerIterator<UOptimusNodeLink_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_700);
        }
        if (FVar51.Data == pFVar21) break;
        lVar49 = *(longlong *)FVar51.Data;
        pUVar25 = *(UOptimusNodePin **)(lVar49 + 0x28);
        pUVar29 = UOptimusNodePin::GetOwningNode(pUVar25);
        this_00 = *(UOptimusNodePin **)(lVar49 + 0x30);
        pUVar30 = UOptimusNodePin::GetOwningNode(this_00);
        FVar27 = UOptimusNodePin::GetUniqueName(pUVar25);
        pFVar24 = ::FName::ToString((FName *)FVar27,&local_358);
        pTVar23 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                  ::Find(&local_278,pUVar29);
        if ((pTVar23 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar20;
        }
        pFVar28 = ::FName::ToString((FName *)&pTVar23->field_0x8,&local_368);
        pFVar24 = ConstructPath(&local_378,&local_5f0,pFVar28,pFVar24);
        FVar27 = UOptimusNodePin::GetUniqueName(this_00);
        pFVar28 = ::FName::ToString((FName *)FVar27,&local_388);
        pTVar23 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                  ::Find(&local_278,pUVar30);
        if ((pTVar23 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar20;
        }
        pFVar31 = ::FName::ToString((FName *)&pTVar23->field_0x8,&local_398);
        pFVar28 = ConstructPath(&local_3a8,&local_5f0,pFVar31,pFVar28);
        local_698._0_8_ = (pFVar24->Data).AllocatorInstance.Data;
        (pFVar24->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_698._8_4_ = (pFVar24->Data).ArrayNum;
        local_698._12_4_ = (pFVar24->Data).ArrayMax;
        (pFVar24->Data).ArrayNum = 0;
        (pFVar24->Data).ArrayMax = 0;
        local_688 = (pFVar28->Data).AllocatorInstance.Data;
        (pFVar28->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_680._0_4_ = (pFVar28->Data).ArrayNum;
        local_680._4_4_ = (pFVar28->Data).ArrayMax;
        (pFVar28->Data).ArrayNum = 0;
        (pFVar28->Data).ArrayMax = 0;
        if (((local_718.Data <= (TTuple<FString,FString> *)local_698) &&
            ((FScriptContainerElement *)local_698 <
             local_718.Data + (longlong)local_710._4_4_ * 0x20)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar20;
        }
        if ((int)local_710 == local_710._4_4_) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_718,(int *)((longlong)&local_710 + 4));
          pFVar21 = local_718.Data + (longlong)iVar18 * 0x20;
          local_710 = CONCAT44(local_710._4_4_,iVar18 + 1);
        }
        else {
          pFVar21 = local_718.Data + (longlong)(int)local_710 * 0x20;
          local_710 = CONCAT44(local_710._4_4_,(int)local_710 + 1);
        }
        *(undefined8 *)pFVar21 = 0;
        *(undefined8 *)pFVar21 = local_698._0_8_;
        *(undefined4 *)(pFVar21 + 8) = local_698._8_4_;
        *(undefined4 *)(pFVar21 + 0xc) = local_698._12_4_;
        *(undefined8 *)(pFVar21 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar21 + 0x10) = local_688;
        *(undefined4 *)(pFVar21 + 0x18) = (undefined4)local_680;
        *(undefined4 *)(pFVar21 + 0x1c) = local_680._4_4_;
        local_680 = 0;
        local_688 = (FScriptContainerElement *)0x0;
        local_698._8_8_ = 0;
        local_698._0_8_ = 0;
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
        if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_388.Data.AllocatorInstance.Data);
        }
        if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
        }
        if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_368.Data.AllocatorInstance.Data);
        }
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
        FVar51.Data = FVar51.Data + 8;
        iVar18 = local_668;
      }
      ::FString::FString(&local_488,L"Expand Collapsed Nodes");
      pUVar46 = local_660;
      local_4c8.ActionStack = GetActionStack(local_660);
      UOptimusActionStack::OpenActionScope(local_4c8.ActionStack,&local_488);
      if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_488.Data.AllocatorInstance.Data);
      }
      uVar40 = local_6d0;
      pTVar12 = _UNK_150651568;
      pFVar11 = ___xmm_00000000000000000000000000000010;
      uVar41 = (ulonglong)(int)local_6d0;
      uVar57 = (undefined4)__real_3ff0000000000000;
      uVar58 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar59 = (undefined4)__real_bff0000000000000;
      uVar60 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      pFVar21 = local_6d8.Data + uVar41 * 0x18;
      FVar51.Data = local_6d8.Data;
      while( true ) {
        pTVar38 = (TReferenceControllerBase<1> *)0x0;
        if ((uint)uVar41 != uVar40) {
          local_6ff = 0;
          `TCheckedPointerIterator<TTuple<UOptimusNode_*,UE::Math::TVector2<double>_>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_6ff);
        }
        pUVar13 = local_660;
        if (FVar51.Data == pFVar21) break;
        local_2b8 = *(UOptimusNode **)(FVar51.Data + 0x10);
        pUVar29 = *(UOptimusNode **)FVar51.Data;
        pUStack_2c0 = *(UOptimusNode **)(FVar51.Data + 8);
        uVar53 = uVar59;
        uVar55 = uVar60;
        if (0.0 <= (double)local_2b8) {
          uVar53 = uVar57;
          uVar55 = uVar58;
        }
        uVar54 = uVar59;
        uVar56 = uVar60;
        if (0.0 <= (double)pUStack_2c0) {
          uVar54 = uVar57;
          uVar56 = uVar58;
        }
        local_2c8 = pUVar29;
        pUVar32 = GetActionStack(pUVar46);
        local_290 = (pUVar29->GraphPosition).field0_0x0._s_0.X;
        dStack_288 = (pUVar29->GraphPosition).field0_0x0._s_0.Y;
        local_478._s_0.X = (double)CONCAT44(uVar56,uVar54) * dVar8 + local_290;
        local_478._s_0.Y = dVar4 * (double)CONCAT44(uVar55,uVar53) + dStack_288;
        pTVar33 = ::operator_new(0x48);
        if (pTVar33 == (TReferenceControllerBase<1> *)0x0) {
          local_4f8.Object = pFVar11;
          local_4f8.SharedReferenceCount.ReferenceController = pTVar12;
        }
        else {
          pTVar33->SharedReferenceCount = (atomic<int>)0x1;
          pTVar33->WeakReferenceCount = (atomic<int>)0x1;
          pTVar33->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFOptimusNodeAction_MoveNode___00_SharedPointerInternals__6B_
          ;
          FOptimusNodeAction_MoveNode::FOptimusNodeAction_MoveNode
                    ((FOptimusNodeAction_MoveNode *)(pTVar33 + 1),pUVar29,
                     (TVector2<double> *)&local_478._s_0);
          if (((FOptimusAction *)(pTVar33 + 1) == (FOptimusAction *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar20;
          }
          LOCK();
          pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
          UNLOCK();
          pTVar38 = pTVar33;
          local_4f8.Object = (FOptimusAction *)(pTVar33 + 1);
          local_4f8.SharedReferenceCount.ReferenceController = pTVar33;
        }
        UOptimusActionStack::RunAction(pUVar32,&local_4f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38)
        ;
        uVar41 = (ulonglong)local_6d0;
        FVar51.Data = FVar51.Data + 0x18;
        pUVar46 = local_660;
      }
      iVar18 = local_658.ArrayNum;
      uVar41 = (ulonglong)local_658.ArrayNum;
      pFVar21 = local_658.AllocatorInstance.Data + uVar41 * 8;
      FVar51.Data = local_658.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar41 != iVar18) {
          local_6fe = 0;
          `TCheckedPointerIterator<UOptimusNodeSubGraph_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_6fe);
        }
        if (FVar51.Data == pFVar21) break;
        pUVar5 = *(UOptimusNodeSubGraph **)FVar51.Data;
        pTVar34 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                  ::Find(&local_1a8,(FName)pUVar5->_padding_);
        if ((pTVar34 == (TTuple<FName,FName> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar20;
        }
        FVar6.ComparisonIndex.Value = *(uint *)&pTVar34->field_0x8;
        FVar6.Number = *(uint *)&pTVar34->field_0xc;
        pUVar32 = GetActionStack(pUVar13);
        DuplicateSubGraph(pUVar32,&local_5f0,pUVar5,FVar6);
        uVar41 = local_658._8_8_ & 0xffffffff;
        FVar51.Data = FVar51.Data + 8;
      }
      pFVar35 = ::operator_new(0x28);
      if (pFVar35 == (FOptimusAction *)0x0) {
        pFVar35 = (FOptimusAction *)0x0;
      }
      else {
        local_5b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5b8.Data.ArrayNum = 0;
        local_5b8.Data.ArrayMax = 0;
        pFVar35->_padding_ = (longlong)&___7FOptimusAction__6B_;
        ::FString::FString(&pFVar35->Title,&local_5b8);
        pFVar35->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
        pFVar35[1]._padding_ = 0;
        pFVar35[1].Title.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
        }
      }
      iVar18 = local_6a8.ArrayNum;
      uVar41 = (ulonglong)local_6a8.ArrayNum;
      pFVar21 = local_6a8.AllocatorInstance.Data + uVar41 * 8;
      FVar51.Data = local_6a8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar41 != iVar18) {
          local_6fd = 0;
          `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_6fd);
        }
        if (FVar51.Data == pFVar21) break;
        (**(code **)(**(longlong **)FVar51.Data + 0x318))(*(longlong **)FVar51.Data,pUVar13);
        uVar41 = local_6a8._8_8_ & 0xffffffff;
        FVar51.Data = FVar51.Data + 8;
      }
      plVar36 = (longlong *)(**(code **)(pUVar13->_padding_ + 0x18))(&pUVar13->_padding_);
      if ((plVar36 == (longlong *)0x0) ||
         (pUVar37 = (UOptimusDeformer *)(**(code **)(*plVar36 + 8))(plVar36),
         pUVar37 == (UOptimusDeformer *)0x0)) {
LAB_14e1ae20e:
        pUVar32 = (UOptimusActionStack *)0x0;
      }
      else {
        pUVar19 = UOptimusDeformer::StaticClass();
        iVar18 = (int)pUVar19->_padding_;
        if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar18) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
            &pUVar19->_padding_)) goto LAB_14e1ae20e;
        pUVar32 = UOptimusDeformer::GetActionStack(pUVar37);
      }
      pTVar38 = (TReferenceControllerBase<1> *)0x0;
      local_468.Object = pFVar35;
      pTVar33 = ::operator_new(0x18);
      if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
        pTVar33->SharedReferenceCount = (atomic<int>)0x1;
        pTVar33->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar33->WeakReferenceCount = (atomic<int>)0x1;
        pTVar33[1]._padding_ = (longlong)pFVar35;
        pTVar38 = pTVar33;
      }
      local_468.SharedReferenceCount.ReferenceController = pTVar38;
      UOptimusActionStack::RunAction(pUVar32,&local_468);
      dVar8 = dStack_450;
      dVar4 = local_458;
      uVar42 = (ulonglong)local_6a8.ArrayNum;
      local_6b0 = &pUVar13->_padding_;
      local_6f8 = local_6a8.ArrayNum;
      local_678 = local_6a8.AllocatorInstance.Data + uVar42 * 8;
      uVar41 = uVar42;
      FVar51.Data = local_6a8.AllocatorInstance.Data;
      while( true ) {
        pFVar21 = local_678;
        plVar36 = local_6b0;
        pUVar32 = (UOptimusActionStack *)0x0;
        local_6e0 = FVar51.Data;
        if ((int)uVar42 != (int)uVar41) {
          local_6fc = 0;
          `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_6fc);
        }
        if (FVar51.Data == pFVar21) break;
        pUVar29 = *(UOptimusNode **)FVar51.Data;
        plVar26 = (longlong *)(**(code **)(*plVar36 + 0x18))(plVar36);
        if ((plVar26 != (longlong *)0x0) &&
           (pUVar37 = (UOptimusDeformer *)(**(code **)(*plVar26 + 8))(plVar26),
           pUVar37 != (UOptimusDeformer *)0x0)) {
          pUVar19 = UOptimusDeformer::StaticClass();
          iVar18 = (int)pUVar19->_padding_;
          if ((iVar18 <= *(int *)(pUVar37->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
              &pUVar19->_padding_)) {
            pUVar32 = UOptimusDeformer::GetActionStack(pUVar37);
          }
        }
        local_228 = (pUVar29->GraphPosition).field0_0x0._s_0.X;
        dStack_220 = (pUVar29->GraphPosition).field0_0x0._s_0.Y;
        local_1f8._0_8_ = (FScriptContainerElement *)0x0;
        local_218 = dVar4;
        dStack_210 = dVar8;
        local_1f8._8_8_ = 0;
        local_1d8 = (void *)0x0;
        local_1d0 = 0;
        local_1cc = 0x80;
        local_1c8 = 0xffffffff;
        local_1c4 = 0;
        local_1b8 = (ForElementType<FSetElementId>)0x0;
        local_1b0 = 0;
        local_208 = dVar9;
        dStack_200 = dVar10;
        TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
        operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                   *)local_1f8,&local_1a8);
        pTVar23 = TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                  ::Find(&local_278,pUVar29);
        if ((pTVar23 == (TTuple<UOptimusNode_*,FName> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar20;
        }
        pFVar24 = (FString *)(**(code **)(*plVar36 + 0x20))(plVar36,local_348);
        pTVar38 = ::operator_new(0xb0);
        if (pTVar38 == (TReferenceControllerBase<1> *)0x0) {
          pTVar38 = (TReferenceControllerBase<1> *)0x0;
          local_4b8.Object = pFVar11;
          local_4b8.SharedReferenceCount.ReferenceController = pTVar12;
        }
        else {
          pTVar38->SharedReferenceCount = (atomic<int>)0x1;
          pTVar38->WeakReferenceCount = (atomic<int>)0x1;
          pTVar38->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_DuplicateNode___00_SharedPointerInternals__6B_
          ;
          local_2f8[0] = (code *)0x0;
          local_2d0 = (undefined8 *)0x0;
          local_2d0 = FMemory::Malloc(0x88,8);
          *local_2d0 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`UOptimusNodeGraph::ExpandCollapsedNodes'::`87'::<lambda_4>,0,1>
                        ::_vftable_;
          pdVar1 = (double *)(local_2d0 + 1);
          *pdVar1 = local_228;
          local_2d0[2] = dStack_220;
          local_2d0[3] = local_218;
          local_2d0[4] = dStack_210;
          local_2d0[5] = local_208;
          local_2d0[6] = dStack_200;
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                    ((TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                      *)(local_2d0 + 7),
                     (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                      *)local_1f8);
          if (pdVar1 != (double *)0x0) {
            local_2f8[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`UOptimusNodeGraph::ExpandCollapsedNodes'::__l87::<lambda_4>,bool,UOptimusNode_*>
                           ::Call;
          }
          FVar27.ComparisonIndex.Value = *(uint *)&pTVar23->field_0x8;
          FVar27.Number = *(uint *)&pTVar23->field_0xc;
          FOptimusNodeGraphAction_DuplicateNode::FOptimusNodeGraphAction_DuplicateNode
                    ((FOptimusNodeGraphAction_DuplicateNode *)(pTVar38 + 1),pFVar24,pUVar29,FVar27,
                     (TFunction<bool___cdecl(UOptimusNode_*)> *)local_2f8);
          if (((FOptimusAction *)(pTVar38 + 1) == (FOptimusAction *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar20;
          }
          LOCK();
          pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
          UNLOCK();
          FVar51.Data = local_6e0;
          local_4b8.Object = (FOptimusAction *)(pTVar38 + 1);
          local_4b8.SharedReferenceCount.ReferenceController = pTVar38;
        }
        UOptimusActionStack::RunAction(pUVar32,&local_4b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38)
        ;
        if (local_348[0] != (void *)0x0) {
          FMemory::Free(local_348[0]);
        }
        local_1b0 = 0;
        if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1b8);
        }
        bVar14 = local_1f8._12_4_ != 0;
        local_1f8._8_8_ = (ulonglong)(uint)local_1f8._12_4_ << 0x20;
        if (bVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,0,(ForAnyElementType *)local_1f8,0,(int *)(local_1f8 + 0xc));
        }
        local_1c8 = 0xffffffff;
        local_1c4 = 0;
        local_1d0 = 0;
        if (0x80 < local_1cc) {
          local_1cc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10),0);
        }
        if (local_1d8 != (void *)0x0) {
          FMemory::Free(local_1d8);
        }
        if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1f8._0_8_);
        }
        uVar42 = local_6a8._8_8_ & 0xffffffff;
        FVar51.Data = FVar51.Data + 8;
        uVar41 = (ulonglong)local_6f8;
      }
      local_528 = local_5c0;
      local_5d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5d0.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_5d0.AllocatorInstance,1,&local_5d0.ArrayMax);
      pUVar46 = local_660;
      *(UOptimusNode **)local_5d0.AllocatorInstance.Data = local_528;
      RemoveNodesAndCount(local_660,&local_5d0);
      if (local_5d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d0.AllocatorInstance.Data);
      }
      uVar42 = (ulonglong)(int)(uint)local_6e8;
      local_6f8 = (uint)local_6e8;
      pTVar52 = (TTuple<FString,FString> *)(local_6f0.Data + uVar42 * 0x20);
      uVar41 = uVar42;
      FVar51.Data = local_6f0.Data;
      while( true ) {
        if ((int)uVar42 != (int)uVar41) {
          local_6fb[0] = 0;
          `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_6fb);
        }
        pUVar13 = local_660;
        if ((TTuple<FString,FString> *)FVar51.Data == pTVar52) break;
        plVar36 = (longlong *)(**(code **)(pUVar46->_padding_ + 0x18))(&pUVar46->_padding_);
        if ((plVar36 == (longlong *)0x0) ||
           (pUVar37 = (UOptimusDeformer *)(**(code **)(*plVar36 + 8))(plVar36),
           pUVar37 == (UOptimusDeformer *)0x0)) {
LAB_14e1ae703:
          pUVar32 = (UOptimusActionStack *)0x0;
        }
        else {
          pUVar19 = UOptimusDeformer::StaticClass();
          iVar18 = (int)pUVar19->_padding_;
          if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar18) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
              &pUVar19->_padding_)) goto LAB_14e1ae703;
          pUVar32 = UOptimusDeformer::GetActionStack(pUVar37);
        }
        pTVar38 = ::operator_new(0x68);
        if (pTVar38 == (TReferenceControllerBase<1> *)0x0) {
          pTVar38 = (TReferenceControllerBase<1> *)0x0;
          local_4e8.Object = pFVar11;
          local_4e8.SharedReferenceCount.ReferenceController = pTVar12;
        }
        else {
          pTVar38->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNodePair___00_SharedPointerInternals__6B_
          ;
          pTVar38->SharedReferenceCount = (atomic<int>)0x1;
          paVar2 = &pTVar38[1].SharedReferenceCount;
          pTVar38->WeakReferenceCount = (atomic<int>)0x1;
          pTVar38[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar38[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar38[2]._padding_ = 0;
          pTVar38[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
          pTVar38[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar38[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar38[3]._padding_ = 0;
          pTVar38[3].SharedReferenceCount = (atomic<int>)0x0;
          pTVar38[3].WeakReferenceCount = (atomic<int>)0x0;
          pTVar38[4]._padding_ = 0;
          ::FString::operator=((FString *)&pTVar38[2].SharedReferenceCount,(FString *)FVar51.Data);
          ::FString::operator=
                    ((FString *)&pTVar38[3].SharedReferenceCount,
                     (FString *)&((TTuple<FString,FString> *)FVar51.Data)->field_0x10);
          pTVar38[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddNodePair__6B_;
          pTVar38[4].SharedReferenceCount = (atomic<int>)0x0;
          pTVar38[4].WeakReferenceCount = (atomic<int>)0x0;
          pTVar38[5]._padding_ = 0;
          pTVar38[5].SharedReferenceCount = (atomic<int>)0x0;
          pTVar38[5].WeakReferenceCount = (atomic<int>)0x0;
          pTVar38[6]._padding_ = 0;
          ::FString::PrintfImpl(&local_600,L"Add Node Pair");
          if (paVar2 == (atomic<int> *)&local_600) {
            if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_600.Data.AllocatorInstance.Data);
            }
          }
          else {
            if (*(void **)paVar2 != (void *)0x0) {
              FMemory::Free(*(void **)paVar2);
            }
            *(FScriptContainerElement **)paVar2 = local_600.Data.AllocatorInstance.Data;
            *(int *)&pTVar38[2]._padding_ = local_600.Data.ArrayNum;
            *(int *)((longlong)&pTVar38[2]._padding_ + 4) = local_600.Data.ArrayMax;
            local_600.Data.ArrayNum = 0;
            local_600.Data.ArrayMax = 0;
            local_600.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (((FOptimusAction *)(pTVar38 + 1) == (FOptimusAction *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            pTVar20 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar20;
          }
          LOCK();
          pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
          UNLOCK();
          local_4e8.Object = (FOptimusAction *)(pTVar38 + 1);
          local_4e8.SharedReferenceCount.ReferenceController = pTVar38;
        }
        UOptimusActionStack::RunAction(pUVar32,&local_4e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38)
        ;
        uVar42 = local_6e8 & 0xffffffff;
        FVar51.Data = FVar51.Data + 0x20;
        uVar41 = (ulonglong)local_6f8;
      }
      iVar18 = (int)local_710;
      uVar41 = (ulonglong)(int)local_710;
      pTVar52 = (TTuple<FString,FString> *)(local_718.Data + uVar41 * 0x20);
      FVar51.Data = local_718.Data;
      while( true ) {
        if ((int)uVar41 != iVar18) {
          `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_6c7);
        }
        if ((TTuple<FString,FString> *)FVar51.Data == pTVar52) break;
        plVar36 = (longlong *)(**(code **)(pUVar13->_padding_ + 0x18))(&pUVar13->_padding_);
        if ((plVar36 == (longlong *)0x0) ||
           (pUVar37 = (UOptimusDeformer *)(**(code **)(*plVar36 + 8))(plVar36),
           pUVar37 == (UOptimusDeformer *)0x0)) {
LAB_14e1ae8eb:
          pUVar32 = (UOptimusActionStack *)0x0;
        }
        else {
          pUVar19 = UOptimusDeformer::StaticClass();
          iVar16 = (int)pUVar19->_padding_;
          if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar16) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
              &pUVar19->_padding_)) goto LAB_14e1ae8eb;
          pUVar32 = UOptimusDeformer::GetActionStack(pUVar37);
        }
        pTVar39 = MakeShared<FOptimusNodeGraphAction_AddLink,1,FString_const_&,FString_const_&>
                            (&local_338,(FString *)FVar51.Data,
                             (FString *)&((TTuple<FString,FString> *)FVar51.Data)->field_0x10);
        local_448.Object = (FOptimusAction *)pTVar39->Object;
        local_448.SharedReferenceCount.ReferenceController =
             (pTVar39->SharedReferenceCount).ReferenceController;
        if (local_448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UOptimusActionStack::RunAction(pUVar32,&local_448);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_338.SharedReferenceCount.ReferenceController);
        uVar41 = local_710 & 0xffffffff;
        FVar51.Data = FVar51.Data + 0x20;
      }
      FOptimusActionScope::~FOptimusActionScope(&local_4c8);
      if (local_670.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_670.Data);
      }
      if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.AllocatorInstance.Data);
      }
      local_138.HashSize = 0;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<UOptimusNode_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UOptimusNode_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FString,FString>,int>
                ((TTuple<FString,FString> *)local_718.Data,(int)local_710);
      if ((TTuple<FString,FString> *)local_718.Data != (TTuple<FString,FString> *)0x0) {
        FMemory::Free(local_718.Data);
      }
      local_1a8.HashSize = 0;
      if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1a8.Elements);
      DestructItems<TTuple<FString,FString>,int>
                ((TTuple<FString,FString> *)local_6f0.Data,(uint)local_6e8);
      if ((TTuple<FString,FString> *)local_6f0.Data != (TTuple<FString,FString> *)0x0) {
        FMemory::Free(local_6f0.Data);
      }
      if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
      }
      local_278.HashSize = 0;
      if (local_278.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_278.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<UOptimusNode_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UOptimusNode_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_278.Elements);
      if (local_540.GeneratedName.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_540.GeneratedName.AllocatorInstance.Data);
      }
      if (local_658.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_658.AllocatorInstance.Data);
      }
      if (local_5e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e0.AllocatorInstance.Data);
      }
      if (local_6a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.AllocatorInstance.Data);
      }
      if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__ = local_4c0;
    (local_4c0->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_4c0->ArrayNum = 0;
    local_4c0->ArrayMax = 0;
    if (local_6d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data);
    }
    if (local_6c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c0.Data);
    }
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// FindGraphByName @ 14e1b1450

UOptimusNodeGraph * __thiscall
UOptimusNodeGraph::FindGraphByName(UOptimusNodeGraph *this,FName param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x28))();
  plVar4 = (longlong *)*plVar3;
  lVar2 = plVar3[1];
  plVar1 = plVar4 + (int)lVar2;
  while( true ) {
    if ((int)plVar3[1] != (int)lVar2) {
      `TCheckedPointerIterator<UOptimusNodeGraph_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    if ((FName)((UOptimusNodeGraph *)*plVar4)->_padding_ == param_1) {
      return (UOptimusNodeGraph *)*plVar4;
    }
    plVar4 = plVar4 + 1;
  }
  return (UOptimusNodeGraph *)0x0;
}

// GatherRelatedObjects @ 14e1b6db0

void __cdecl
UOptimusNodeGraph::GatherRelatedObjects
          (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UOptimusNode *this;
  UOptimusNodePair *pUVar4;
  UOptimusNode *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  void *pvVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> *local_res20;
  UOptimusNodePair *local_68;
  TObjectPtr<UOptimusNode>_u_0 local_60;
  UOptimusNodeSubGraph *local_58 [3];
  
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 != param_1) {
    iVar2 = param_1->ArrayNum;
    piVar1 = &param_2->ArrayMax;
    pFVar12 = (param_1->AllocatorInstance).Data;
    param_2->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,*piVar1,&param_2->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((param_2->AllocatorInstance).Data,pFVar12,(longlong)iVar2 << 3);
      }
    }
  }
  pFVar15 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar12 = pFVar15 + (longlong)iVar2 * 8;
  local_res10 = pFVar12;
  do {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UOptimusNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar12) {
      return;
    }
    this = *(UOptimusNode **)pFVar15;
    if (this != (UOptimusNode *)0x0) {
      pUVar9 = Z_Construct_UClass_UOptimusNodePairProvider_NoRegister();
      pvVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar9);
      if (pvVar10 != (void *)0x0) {
        lVar13 = this->_padding_;
        if (lVar13 == 0) {
LAB_14e1b6eb5:
          lVar13 = 0;
        }
        else {
          pUVar9 = StaticClass();
          iVar3 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar9->_padding_)) goto LAB_14e1b6eb5;
        }
        uVar11 = 0;
        if (0 < *(int *)(lVar13 + 0x60)) {
          lVar14 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar11 < *(int *)(lVar13 + 0x60)) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pUVar4 = *(UOptimusNodePair **)(lVar14 + *(longlong *)(lVar13 + 0x58));
            pUVar5 = (pUVar4->First).field0_0x0.DebugPtr;
            if (((pUVar5 != (UOptimusNode *)0x0) && (pUVar5 == this)) ||
               ((pUVar5 = (pUVar4->Second).field0_0x0.DebugPtr, pUVar5 != (UOptimusNode *)0x0 &&
                (pUVar5 == this)))) {
              local_68 = pUVar4;
              if (pUVar4 == (UOptimusNodePair *)0x0) goto LAB_14e1b6f67;
              local_60 = (TObjectPtr<UOptimusNode>_u_0)(pUVar4->First).field0_0x0.DebugPtr;
              if ((local_60.DebugPtr == (UOptimusNode *)0x0) || (local_60.DebugPtr != this)) {
                pUVar5 = (pUVar4->Second).field0_0x0.DebugPtr;
                if ((pUVar5 == (UOptimusNode *)0x0) || (pUVar5 != this)) {
                  local_60.DebugPtr = (UOptimusNode *)0x0;
                }
              }
              else {
                local_60 = (pUVar4->Second).field0_0x0;
              }
              TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UOptimusNode_*>
                        (param_2,&local_60.DebugPtr);
              TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<UOptimusNodePair_*_const_&>(local_res18,&local_68);
              pFVar12 = local_res10;
              param_4 = local_res20;
              goto LAB_14e1b6fa4;
            }
            uVar11 = uVar11 + 1;
            lVar14 = lVar14 + 8;
          } while ((int)uVar11 < *(int *)(lVar13 + 0x60));
        }
        local_68 = (UOptimusNodePair *)0x0;
LAB_14e1b6f67:
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7701470802381635927>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                           ,0x157,"NodePair");
        pFVar12 = local_res10;
        param_4 = local_res20;
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
LAB_14e1b6fa4:
      pUVar9 = UOptimusNode_SubGraphReference::StaticClass();
      iVar3 = (int)pUVar9->_padding_;
      if ((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8)
          == &pUVar9->_padding_)) {
        local_58[0] = (UOptimusNodeSubGraph *)(**(code **)(this[1]._padding_ + 0x10))();
        TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<UOptimusNodeSubGraph_*>(param_4,local_58);
      }
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// GetActionStack @ 14e1b7960

UOptimusActionStack * __thiscall UOptimusNodeGraph::GetActionStack(UOptimusNodeGraph *this)

{
  int iVar1;
  longlong *plVar2;
  UOptimusDeformer *this_00;
  UClass *pUVar3;
  UOptimusActionStack *pUVar4;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (plVar2 != (longlong *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)(*plVar2 + 8))(plVar2);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar3 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        pUVar4 = UOptimusDeformer::GetActionStack(this_00);
        return pUVar4;
      }
    }
  }
  return (UOptimusActionStack *)0x0;
}

// GetAllLinkIndexesToNode @ 14e1b8990

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::GetAllLinkIndexesToNode
          (UOptimusNodeGraph *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusNode *param_1)

{
  GetAllLinkIndexesToNode(this,__return_storage_ptr__,param_1,Unknown);
  return __return_storage_ptr__;
}

// GetAllLinkIndexesToNode @ 14e1b89b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::GetAllLinkIndexesToNode
          (UOptimusNodeGraph *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusNode *param_1,EOptimusNodePinDirection param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  UOptimusNode *pUVar9;
  uint local_38 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_38[0] = 0;
  if (0 < (this->Links).ArrayNum) {
    do {
      uVar4 = local_38[0];
      uVar6 = 0;
      if ((int)local_38[0] < (this->Links).ArrayNum) {
        uVar6 = ~local_38[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      lVar1 = *(longlong *)((this->Links).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
      if ((lVar1 == 0) || (*(UOptimusNodePin **)(lVar1 + 0x28) == (UOptimusNodePin *)0x0)) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7701470802381638622>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                           ,0xbde,"Link != nullptr && Link->GetNodeOutputPin() != nullptr");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      else {
        pUVar9 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar1 + 0x28));
        if (((pUVar9 == param_1) && (param_2 != Input)) ||
           ((pUVar9 = UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)(lVar1 + 0x30)),
            pUVar9 == param_1 && (param_2 != Output)))) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar8;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
               local_38[0];
        }
      }
      local_38[0] = local_38[0] + 1;
    } while ((int)local_38[0] < (this->Links).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetAllLinkIndexesToPin @ 14e1b8ba0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::GetAllLinkIndexesToPin
          (UOptimusNodeGraph *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusNodePin *param_1)

{
  longlong lVar1;
  UOptimusNodePin *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint local_28 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_28[0] = 0;
  if (0 < (this->Links).ArrayNum) {
    do {
      uVar5 = local_28[0];
      uVar7 = 0;
      if ((int)local_28[0] < (this->Links).ArrayNum) {
        uVar7 = ~local_28[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      lVar1 = *(longlong *)((this->Links).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
      if (param_1->Direction == Input) {
        pUVar2 = *(UOptimusNodePin **)(lVar1 + 0x30);
joined_r0x00014e1b8c54:
        if (pUVar2 == param_1) {
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 <
               pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
               local_28[0];
        }
      }
      else if (param_1->Direction == Output) {
        pUVar2 = *(UOptimusNodePin **)(lVar1 + 0x28);
        goto joined_r0x00014e1b8c54;
      }
      local_28[0] = local_28[0] + 1;
    } while ((int)local_28[0] < (this->Links).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetCollectionOwner @ 14e1bce40

IOptimusNodeGraphCollectionOwner * __thiscall
UOptimusNodeGraph::GetCollectionOwner(UOptimusNodeGraph *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  IOptimusNodeGraphCollectionOwner *pIVar2;
  
  this_00 = *(UObjectBaseUtility **)&this[-1].GraphNotifyDelegate.field_0x18;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    return pIVar2;
  }
  return (IOptimusNodeGraphCollectionOwner *)0x0;
}

// GetCollectionPath @ 14e1bcea0

FString * __thiscall
UOptimusNodeGraph::GetCollectionPath(UOptimusNodeGraph *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  longlong *plVar2;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  lVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x10))(this);
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_38);
    if (1 < local_38.Data.ArrayNum) {
      local_res8.ComparisonIndex.Value = *(uint *)&this[-1].GraphNotifyDelegate.field_0x10;
      local_res8.Number = *(uint *)&this[-1].GraphNotifyDelegate.field_0x14;
      ::FName::ToString(&local_res8,&local_18);
      ::FString::ConcatFC(&local_28,&local_38,L"/");
      ::FString::ConcatFF(__return_storage_ptr__,&local_28,&local_18);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  local_res8.ComparisonIndex.Value = *(uint *)&this[-1].GraphNotifyDelegate.field_0x10;
  local_res8.Number = *(uint *)&this[-1].GraphNotifyDelegate.field_0x14;
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCollectionRoot @ 14e1bcfc0

IOptimusNodeGraphCollectionOwner * __thiscall
UOptimusNodeGraph::GetCollectionRoot(UOptimusNodeGraph *this)

{
  longlong lVar1;
  longlong *plVar2;
  IOptimusNodeGraphCollectionOwner *pIVar3;
  
  lVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x10))(this);
                    /* WARNING: Could not recover jumptable at 0x00014e1bcfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar3 = (IOptimusNodeGraphCollectionOwner *)
             (**(code **)(*plVar2 + 0x18))(plVar2,*(code **)(*plVar2 + 0x18));
    return pIVar3;
  }
  return (IOptimusNodeGraphCollectionOwner *)0x0;
}

// GetComponentSourceBindingsForPin @ 14e1bec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
* __thiscall
UOptimusNodeGraph::GetComponentSourceBindingsForPin
          (UOptimusNodeGraph *this,
          TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,UOptimusNodePin *param_1,FOptimusPinTraversalContext *param_2)

{
  FOptimusPinTraversalContext *_Src;
  uint *puVar1;
  longlong *plVar2;
  TObjectPtr<UOptimusNodePin> *pTVar3;
  UOptimusNodePin *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  UObjectBaseUtility *this_00;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  *pTVar12;
  UClass *pUVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  UOptimusNode *pUVar17;
  undefined8 *puVar18;
  byte bVar19;
  uint uVar20;
  ForElementType<IOptimusNodePinRouter_const_*> FVar21;
  FScriptContainerElement *_Buf1;
  ForElementType<unsigned_int> FVar22;
  longlong lVar23;
  ForElementType<FSetElementId> FVar24;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  uint uVar25;
  UOptimusNodeGraph *this_01;
  ForElementType<IOptimusNodePinRouter_const_*> FVar26;
  ForAnyElementType FVar27;
  UOptimusNodePin *pUVar28;
  ulonglong uVar29;
  ulonglong *puVar30;
  uint uVar31;
  FOptimusRoutedNodePin *pFVar32;
  undefined1 auStackY_308 [32];
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a7 [7];
  undefined8 *local_2a0;
  uint local_298;
  longlong local_290;
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_288;
  longlong local_278;
  uint local_270;
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_268;
  int local_258;
  uint uStack_254;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_250;
  undefined4 local_248;
  undefined8 uStack_244;
  undefined4 uStack_23c;
  FScriptContainerElement *local_238;
  undefined8 *local_228;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  undefined4 local_1f0;
  int local_1ec;
  undefined1 local_1e8 [16];
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  *local_1d8;
  FSparseArrayAllocationInfo local_1d0;
  ForElementType<IOptimusNodePinRouter_const_*> local_1c0;
  FOptimusPinTraversalContext local_1b8;
  UObjectBaseUtility *local_188;
  FOptimusPinTraversalContext local_180;
  UOptimusNode *local_150;
  FOptimusPinTraversalContext local_148;
  undefined1 local_118 [32];
  ForElementType<unsigned_int> local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  FScriptContainerElement local_e0 [8];
  ForAnyElementType local_d8;
  uint local_d0;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [8];
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined8 local_78;
  FOptimusPinTraversalContext local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_308;
  puVar18 = (undefined8 *)0x0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (ForElementType<unsigned_int>)0x0;
  local_f0 = 0;
  local_e4 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_ec = 0x80;
  local_e8 = -1;
  local_1d8 = __return_storage_ptr__;
  puVar11 = ::operator_new(0x40);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[6] = 0;
    *(undefined4 *)(puVar11 + 7) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = 4;
    puVar18 = puVar11;
  }
  local_228 = puVar18;
  GetConnectedPinsWithRouting(this,&local_288,param_1,param_2,Upstream);
  if (local_288.ArrayNum == 0) {
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
    (__return_storage_ptr__->Hash).InlineData[0] = '\0';
    (__return_storage_ptr__->Hash).InlineData[1] = '\0';
    (__return_storage_ptr__->Hash).InlineData[2] = '\0';
    (__return_storage_ptr__->Hash).InlineData[3] = '\0';
    (__return_storage_ptr__->Hash)._padding_ = 0;
    *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
    *(undefined8 *)&__return_storage_ptr__->Elements = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
    (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    DestructItems<FOptimusRoutedNodePin,int>
              ((FOptimusRoutedNodePin *)local_288.AllocatorInstance.Data,0);
    if ((FOptimusRoutedNodePin *)local_288.AllocatorInstance.Data != (FOptimusRoutedNodePin *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
    while (puVar11 = puVar18, puVar11 != (undefined8 *)0x0) {
      puVar18 = (undefined8 *)*puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        if ((void *)puVar11[6] != (void *)0x0) {
          FMemory::Free((void *)puVar11[6]);
        }
        ::operator_delete(puVar11,0x40);
      }
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_118,0);
    if (local_f8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._0_8_);
    }
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88);
    }
    TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_c8,0,local_c8._8_4_);
    iVar9 = SUB84(local_c8._8_8_,4);
    local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
    }
    local_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
  }
  else {
    if ((local_288.ArrayNum != 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ConnectedPins.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                           ,0xa41,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                 *)(*pcVar5)();
      return pTVar12;
    }
    if ((local_288.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                 *)(*pcVar5)();
      return pTVar12;
    }
    local_150 = UOptimusNodePin::GetOwningNode
                          (*(UOptimusNodePin **)local_288.AllocatorInstance.Data);
    if ((local_288.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                 *)(*pcVar5)();
      return pTVar12;
    }
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&local_148,(FOptimusPinTraversalContext *)(local_288.AllocatorInstance.Data + 8));
    puVar11 = ::operator_new(0x40);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = 0;
      puVar11[1] = local_150;
      FOptimusPinTraversalContext::FOptimusPinTraversalContext
                ((FOptimusPinTraversalContext *)(puVar11 + 2),&local_148);
      *local_228 = puVar11;
      local_228 = puVar11;
    }
    if (local_148.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)local_148.ReferenceNesting.AllocatorInstance.SecondaryData);
    }
    local_188 = (UObjectBaseUtility *)0x0;
    local_180.ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    local_180.ReferenceNesting.ArrayNum = 0;
    local_180.ReferenceNesting.ArrayMax = 4;
    while (__return_storage_ptr__ = local_1d8, puVar11 = (undefined8 *)*puVar18,
          puVar11 != (undefined8 *)0x0) {
      local_188 = (UObjectBaseUtility *)puVar11[1];
      _Src = (FOptimusPinTraversalContext *)(puVar11 + 2);
      if (&local_180 != _Src) {
        if (puVar11[6] == 0) {
          memmove(&local_180,_Src,0x20);
        }
        if (local_180.ReferenceNesting.AllocatorInstance.SecondaryData !=
            (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)local_180.ReferenceNesting.AllocatorInstance.SecondaryData);
        }
        local_180.ReferenceNesting.AllocatorInstance.SecondaryData =
             *(ForElementType<IOptimusNodePinRouter_const_*> *)(puVar11 + 6);
        puVar11[6] = 0;
        local_180.ReferenceNesting.ArrayNum = *(int *)(puVar11 + 7);
        local_180.ReferenceNesting.ArrayMax = *(int *)((longlong)puVar11 + 0x3c);
        *(undefined4 *)(puVar11 + 7) = 0;
        *(undefined4 *)((longlong)puVar11 + 0x3c) = 4;
      }
      local_78 = 0;
      local_70.ReferenceNesting.AllocatorInstance.SecondaryData =
           (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
      local_70.ReferenceNesting.ArrayNum = 0;
      local_70.ReferenceNesting.ArrayMax = 4;
      puVar11[1] = 0;
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[1] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[2] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[3] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[4] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[5] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[6] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[7] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[8] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[9] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[10] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xb] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xc] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xd] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xe] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xf] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x10] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x11] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x12] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x13] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x14] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x15] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x16] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x17] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x18] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x19] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1a] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1b] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1c] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1d] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1e] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1f] = '\0';
      local_2a0 = puVar11;
      if (_Src != &local_70) {
        (_Src->ReferenceNesting).AllocatorInstance.InlineData[0] = '\0';
        (_Src->ReferenceNesting).AllocatorInstance.InlineData[1] = '\0';
        (_Src->ReferenceNesting).AllocatorInstance.InlineData[2] = '\0';
        (_Src->ReferenceNesting).AllocatorInstance.InlineData[3] = '\0';
        (_Src->ReferenceNesting).AllocatorInstance.InlineData[4] = '\0';
        (_Src->ReferenceNesting).AllocatorInstance.InlineData[5] = '\0';
        (_Src->ReferenceNesting).AllocatorInstance.InlineData[6] = '\0';
        (_Src->ReferenceNesting).AllocatorInstance.InlineData[7] = '\0';
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        if ((void *)puVar11[6] != (void *)0x0) {
          FMemory::Free((void *)puVar11[6]);
        }
        puVar11[6] = 0;
        *(undefined4 *)(puVar11 + 7) = 0;
        *(undefined4 *)((longlong)puVar11 + 0x3c) = 4;
      }
      if (puVar18 != (undefined8 *)0x0) {
        if ((void *)puVar18[6] != (void *)0x0) {
          FMemory::Free((void *)puVar18[6]);
        }
        ::operator_delete(puVar18,0x40);
      }
      this_00 = local_188;
      local_2b8.Data = (FScriptContainerElement *)0x0;
      local_2b0 = 0;
      if (local_188 == (UObjectBaseUtility *)0x0) {
LAB_14e1bf7ea:
        plVar14 = *(longlong **)(this_00 + 2);
        iVar9 = *(int *)&this_00[2].field_0x8;
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                     *)(*pcVar5)();
          return pTVar12;
        }
        plVar2 = plVar14 + iVar9;
        for (; plVar14 != plVar2; plVar14 = plVar14 + 1) {
          local_278 = *plVar14;
          if (*(char *)(local_278 + 0x29) == '\x01') {
            if (((local_2b8.Data <= (FScriptContainerElement *)&local_278) &&
                (local_2b0._4_4_ = (int)((ulonglong)local_2b0 >> 0x20),
                lVar23 = (longlong)local_2b0._4_4_,
                (FScriptContainerElement *)&local_278 < local_2b8.Data + lVar23 * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              pTVar12 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                         *)(*pcVar5)();
              return pTVar12;
            }
            if ((uint)local_2b0 == local_2b0._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_2b8,(int *)((longlong)&local_2b0 + 4));
              local_2b0 = CONCAT44(local_2b0._4_4_,iVar9);
            }
            lVar23 = (longlong)(int)(uint)local_2b0;
            local_2b0 = CONCAT44(local_2b0._4_4_,(uint)local_2b0 + 1);
            *(longlong *)(local_2b8.Data + lVar23 * 8) = local_278;
          }
        }
LAB_14e1bf8f8:
        uVar15 = (ulonglong)(int)(uint)local_2b0;
        local_298 = (uint)local_2b0;
        local_1e8._8_8_ = local_2b8.Data + uVar15 * 8;
        FVar27.Data = local_2b8.Data;
        while( true ) {
          uVar6 = local_1e8._8_8_;
          local_238 = FVar27.Data;
          if ((uint)local_2b0 != (int)uVar15) {
            local_2a8 = 0;
            `TCheckedPointerIterator<UOptimusNodePin_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_2a8);
          }
          puVar18 = local_2a0;
          if (FVar27.Data == (FScriptContainerElement *)uVar6) break;
          pUVar4 = *(UOptimusNodePin **)FVar27.Data;
          pUVar17 = UOptimusNodePin::GetOwningNode(pUVar4);
          this_01 = (UOptimusNodeGraph *)pUVar17->_padding_;
          if (this_01 == (UOptimusNodeGraph *)0x0) {
LAB_14e1bf967:
            this_01 = (UOptimusNodeGraph *)0x0;
          }
          else {
            pUVar13 = StaticClass();
            iVar9 = (int)pUVar13->_padding_;
            if ((*(int *)(this_01->_padding_ + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar13->_padding_)) goto LAB_14e1bf967;
          }
          GetConnectedPinsWithRouting(this_01,&local_268,pUVar4,&local_180);
          uVar15 = (ulonglong)local_268.ArrayNum;
          local_270 = local_268.ArrayNum;
          pFVar32 = (FOptimusRoutedNodePin *)(local_268.AllocatorInstance.Data + uVar15 * 0x38);
          FVar27.Data = local_268.AllocatorInstance.Data;
          while( true ) {
            if (local_268.ArrayNum != (uint)uVar15) {
              local_2a7[0] = 0;
              `TCheckedPointerIterator<FOptimusRoutedNodePin,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_2a7);
            }
            if ((FOptimusRoutedNodePin *)FVar27.Data == pFVar32) break;
            pUVar4 = ((FOptimusRoutedNodePin *)FVar27.Data)->NodePin;
            if (((FOptimusRoutedNodePin *)FVar27.Data)->NodePin == (UOptimusNodePin *)0x0) {
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7701470802381638253>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                                 ,0xa6d,"ConnectedPin.NodePin != nullptr");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                pTVar12 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                           *)(*pcVar5)();
                return pTVar12;
              }
            }
            else {
              while (pUVar28 = pUVar4, pUVar4 = (UOptimusNodePin *)pUVar28->_padding_,
                    pUVar4 != (UOptimusNodePin *)0x0) {
                pUVar13 = UOptimusNodePin::StaticClass();
                iVar9 = (int)pUVar13->_padding_;
                if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar9) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar13->_padding_)) break;
              }
              FVar21 = (ForElementType<IOptimusNodePinRouter_const_*>)pUVar28->_padding_;
              if (FVar21 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
LAB_14e1bfa4d:
                FVar21 = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
              }
              else {
                pUVar13 = UOptimusNode::StaticClass();
                iVar9 = (int)pUVar13->_padding_;
                if ((*(int *)(*(longlong *)((longlong)FVar21 + 0x10) + 0x38) < iVar9) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)((longlong)FVar21 + 0x10) + 0x30) +
                     (longlong)iVar9 * 8) != &pUVar13->_padding_)) goto LAB_14e1bfa4d;
              }
              FVar26 = (((FOptimusRoutedNodePin *)FVar27.Data)->TraversalContext).ReferenceNesting.
                       AllocatorInstance.SecondaryData;
              local_1b8.ReferenceNesting.ArrayNum =
                   (((FOptimusRoutedNodePin *)FVar27.Data)->TraversalContext).ReferenceNesting.
                   ArrayNum;
              lVar23 = (longlong)local_1b8.ReferenceNesting.ArrayNum;
              if (FVar26 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                FVar26 = (ForElementType<IOptimusNodePinRouter_const_*>)
                         &((FOptimusRoutedNodePin *)FVar27.Data)->TraversalContext;
              }
              local_1b8.ReferenceNesting.AllocatorInstance.SecondaryData =
                   (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
              local_1c0 = FVar21;
              if (local_1b8.ReferenceNesting.ArrayNum == 0) {
                local_1b8.ReferenceNesting.ArrayMax = 4;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
                          (8,8,local_1b8.ReferenceNesting.ArrayNum,0,
                           (ForElementType<IOptimusNodePinRouter_const_*> *)&local_1b8,
                           local_1b8.ReferenceNesting.ArrayNum,&local_1b8.ReferenceNesting.ArrayMax)
                ;
                FVar21 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_1b8;
                if (local_1b8.ReferenceNesting.AllocatorInstance.SecondaryData !=
                    (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                  FVar21 = local_1b8.ReferenceNesting.AllocatorInstance.SecondaryData;
                }
                memcpy((void *)FVar21,(void *)FVar26,lVar23 << 3);
              }
              uVar20 = ((uint)((ulonglong)local_1c0 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_1c0 >> 4)) * -0x7a143595;
              uVar25 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
              uVar25 = uVar25 >> 0x10 ^ uVar25;
              uVar20 = ::GetTypeHash(&local_1b8);
              uVar6 = local_c8._0_8_;
              iVar9 = local_1b8.ReferenceNesting.ArrayNum;
              FVar26 = local_1b8.ReferenceNesting.AllocatorInstance.SecondaryData;
              FVar21 = local_1c0;
              if (local_c8._8_4_ != local_94) {
                FVar24 = (ForElementType<FSetElementId>)local_90;
                if (local_88 != (ForElementType<FSetElementId>)0x0) {
                  FVar24 = local_88;
                }
                for (iVar8 = *(int *)((longlong)FVar24 +
                                     (ulonglong)
                                     (local_80 - 1U &
                                     (uVar25 * 0x40 + (uVar25 >> 2) + uVar20 + 0x9e3779b9 ^ uVar25))
                                     * 4); iVar8 != -1;
                    iVar8 = *(int *)(uVar6 + (longlong)iVar8 * 0x40 + 0x38)) {
                  if (*(ForElementType<IOptimusNodePinRouter_const_*> *)
                       (uVar6 + (longlong)iVar8 * 0x40) == FVar21) {
                    _Buf1 = (FScriptContainerElement *)(uVar6 + (longlong)iVar8 * 0x40 + 8);
                    iVar10 = *(int *)(_Buf1 + 0x28);
                    if (iVar10 == iVar9) {
                      _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_1b8;
                      if (FVar26 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                        _Buf2 = FVar26;
                      }
                      if (*(FScriptContainerElement **)(_Buf1 + 0x20) !=
                          (FScriptContainerElement *)0x0) {
                        _Buf1 = *(FScriptContainerElement **)(_Buf1 + 0x20);
                      }
                      if ((iVar10 == 0) ||
                         (iVar10 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar10 << 3), iVar10 == 0))
                      {
                        if (iVar8 != -1) goto LAB_14e1bfc16;
                        break;
                      }
                    }
                  }
                }
              }
              TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
              ::Emplace<FOptimusRoutedConstNode_const_&>
                        ((TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                          *)local_c8,(FOptimusRoutedConstNode *)local_1e8,(bool *)&local_1c0);
              puVar18 = ::operator_new(0x40);
              FVar26 = local_1b8.ReferenceNesting.AllocatorInstance.SecondaryData;
              if (puVar18 != (undefined8 *)0x0) {
                *puVar18 = 0;
                *(ForElementType<IOptimusNodePinRouter_const_*> *)(puVar18 + 1) = local_1c0;
                FOptimusPinTraversalContext::FOptimusPinTraversalContext
                          ((FOptimusPinTraversalContext *)(puVar18 + 2),&local_1b8);
                *local_228 = puVar18;
                FVar26 = local_1b8.ReferenceNesting.AllocatorInstance.SecondaryData;
                local_228 = puVar18;
              }
LAB_14e1bfc16:
              if (FVar26 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                FMemory::Free((void *)FVar26);
              }
            }
            uVar15 = (ulonglong)local_270;
            FVar27.Data = FVar27.Data + 0x38;
          }
          DestructItems<FOptimusRoutedNodePin,int>
                    ((FOptimusRoutedNodePin *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
          if ((FOptimusRoutedNodePin *)local_268.AllocatorInstance.Data !=
              (FOptimusRoutedNodePin *)0x0) {
            FMemory::Free(local_268.AllocatorInstance.Data);
          }
          uVar15 = (ulonglong)local_298;
          FVar27.Data = local_238 + 8;
        }
        if (local_2b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data);
        }
      }
      else {
        pUVar13 = UOptimusComponentBindingProvider::GetPrivateStaticClass();
        plVar14 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar13);
        if (plVar14 == (longlong *)0x0) {
          pUVar13 = Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister();
          plVar14 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar13);
          if (plVar14 == (longlong *)0x0) goto LAB_14e1bf7ea;
          local_290 = (**(code **)(*plVar14 + 0x20))(plVar14);
          if (((local_2b8.Data <= (FScriptContainerElement *)&local_290) &&
              ((FScriptContainerElement *)&local_290 <
               local_2b8.Data + (longlong)local_2b0._4_4_ * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                       *)(*pcVar5)();
            return pTVar12;
          }
          iVar9 = (uint)local_2b0;
          if ((uint)local_2b0 == local_2b0._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_2b8,(int *)((longlong)&local_2b0 + 4));
          }
          local_2b0 = CONCAT44(local_2b0._4_4_,iVar9 + 1);
          *(longlong *)(local_2b8.Data + (longlong)iVar9 * 8) = local_290;
          iVar9 = *(int *)(local_290 + 0xa8);
          pTVar3 = *(TObjectPtr<UOptimusNodePin> **)(local_290 + 0xa0);
          if (iVar9 < 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              pTVar12 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                         *)(*pcVar5)();
              return pTVar12;
            }
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9a9,L"Invalid range size: %lld");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              pTVar12 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                         *)(*pcVar5)();
              return pTVar12;
            }
          }
          else if (iVar9 == 0) goto LAB_14e1bf8f8;
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar9,&local_2b8,(int *)&local_2b0,
                             (int *)((longlong)&local_2b0 + 4));
          ConstructItems<UOptimusNodePin_const_*,TObjectPtr<UOptimusNodePin>,int>
                    (local_2b8.Data + (longlong)iVar8 * 8,pTVar3,iVar9);
          goto LAB_14e1bf8f8;
        }
        uVar15 = (**(code **)(*plVar14 + 0x10))(plVar14,&local_180);
        puVar18 = puVar11;
        if (uVar15 != 0) {
          if (local_e4 == 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,1,(ForAnyElementType *)local_118,(int *)(local_118 + 8),
                               (int *)(local_118 + 0xc));
            iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),1);
            FVar22 = (ForElementType<unsigned_int>)((longlong)local_118 + 0x10);
            if (local_f8 != (ForElementType<unsigned_int>)0x0) {
              FVar22 = local_f8;
            }
            bVar19 = (byte)iVar8 & 0x1f;
            if (iVar8 < 0) {
              iVar8 = iVar8 + 0x1f;
              bVar19 = bVar19 - 0x20;
            }
            puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar8 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar19 & 0x1f));
            iVar8 = local_e8;
          }
          else {
            local_e4 = local_e4 + -1;
            iVar8 = *(int *)(local_118._0_8_ + (longlong)local_e8 * 0x10 + 4);
            iVar9 = local_e8;
            if (local_e4 != 0) {
              *(undefined4 *)(local_118._0_8_ + (longlong)iVar8 * 0x10) = 0xffffffff;
            }
          }
          local_e8 = iVar8;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_118,&local_1d0,iVar9);
          if (local_1d0.Pointer != (ulonglong *)0x0) {
            *(ulonglong *)local_1d0.Pointer = uVar15;
            *(undefined4 *)((longlong)local_1d0.Pointer + 8) = 0xffffffff;
          }
          uVar15 = *(ulonglong *)local_1d0.Pointer;
          uVar20 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
          uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
          uVar20 = uVar20 >> 0x10 ^ uVar20;
          if ((local_118._8_4_ - local_e4 != 1) && (local_118._8_4_ != local_e4)) {
            FVar27.Data = local_e0;
            if (local_d8.Data != (FScriptContainerElement *)0x0) {
              FVar27.Data = local_d8.Data;
            }
            for (iVar9 = *(int *)(FVar27.Data + (ulonglong)(local_d0 - 1 & uVar20) * 4); iVar9 != -1
                ; iVar9 = *(int *)(local_118._0_8_ + (longlong)iVar9 * 0x10 + 8)) {
              if (*(ulonglong *)(local_118._0_8_ + (longlong)iVar9 * 0x10) == uVar15) {
                if (iVar9 != -1) {
                  *(ulonglong *)(local_118._0_8_ + (longlong)iVar9 * 0x10) = uVar15;
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_118,local_1d0.Index,1);
                  puVar18 = local_2a0;
                  goto LAB_14e1bf64a;
                }
                break;
              }
            }
          }
          uVar31 = local_118._8_4_ - local_e4;
          uVar25 = 1;
          if (3 < uVar31) {
            uVar15 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
            lVar23 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_1f0 = (undefined4)lVar23;
            uVar25 = 1 << ((byte)lVar23 & 0x1f);
          }
          if (((int)uVar31 < 1) || ((int)uVar25 <= (int)local_d0)) {
            uVar20 = local_d0 - 1 & uVar20;
            *(uint *)((longlong)local_1d0.Pointer + 0xc) = uVar20;
            FVar27.Data = local_e0;
            if (local_d8.Data != (FScriptContainerElement *)0x0) {
              FVar27.Data = local_d8.Data;
            }
            lVar23 = (longlong)(int)(local_d0 - 1 & uVar20);
            *(undefined4 *)((longlong)local_1d0.Pointer + 8) =
                 *(undefined4 *)(FVar27.Data + lVar23 * 4);
            *(int *)(FVar27.Data + lVar23 * 4) = local_1d0.Index;
            puVar18 = local_2a0;
          }
          else {
            local_d0 = uVar25;
            if (local_d8.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,4);
            }
            if (uVar25 != 0) {
              uVar20 = uVar25;
              if (uVar25 < 2) {
                if (local_d8.Data != (FScriptContainerElement *)0x0) {
                  uVar20 = 0;
                  goto LAB_14e1bf410;
                }
              }
              else {
LAB_14e1bf410:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_d8,0,uVar20,4);
              }
              if (0 < (int)uVar25) {
                uVar15 = 0;
                uVar29 = (ulonglong)uVar25;
                do {
                  FVar27.Data = local_e0;
                  if (local_d8.Data != (FScriptContainerElement *)0x0) {
                    FVar27.Data = local_d8.Data;
                  }
                  uVar16 = (longlong)(int)uVar25 - 1U & uVar15;
                  uVar15 = uVar15 + 1;
                  *(undefined4 *)(FVar27.Data + uVar16 * 4) = 0xffffffff;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            puVar18 = local_2a0;
            if (local_d0 != 0) {
              pTStack_250 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
              uStack_254 = 1;
              uVar20 = 0;
              local_258 = 0;
              uStack_244 = 0;
              if (local_f0 != 0) {
                FVar22 = (ForElementType<unsigned_int>)((longlong)local_118 + 0x10);
                if (local_f8 != (ForElementType<unsigned_int>)0x0) {
                  FVar22 = local_f8;
                }
                uVar25 = *(uint *)FVar22;
                local_258 = 0;
                while (uVar25 == 0) {
                  uVar20 = uVar20 + 0x20;
                  lVar23 = (longlong)local_258;
                  local_258 = local_258 + 1;
                  uStack_244 = (ulonglong)uVar20 << 0x20;
                  if ((int)(local_f0 + -1 + (local_f0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_258) {
                    uStack_244 = CONCAT44(uVar20,local_f0);
                    goto LAB_14e1bf530;
                  }
                  uVar25 = ((uint *)((longlong)FVar22 + 4))[lVar23];
                }
                uStack_254 = -uVar25 & uVar25;
                uVar15 = (ulonglong)uStack_254 * 2 + 1;
                lVar23 = 0x3f;
                if (uVar15 != 0) {
                  for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                  }
                }
                local_1ec = (int)lVar23;
                iVar9 = local_1ec + -1 + uVar20;
                if (local_f0 < iVar9) {
                  iVar9 = local_f0;
                }
                uStack_244._4_4_ = (int)((ulonglong)uStack_244 >> 0x20);
                uStack_244 = CONCAT44(uStack_244._4_4_,iVar9);
              }
LAB_14e1bf530:
              local_248 = 0xffffffff;
              local_218 = (longlong *)local_118;
              local_210._padding_ = CONCAT44(uStack_254,local_258);
              local_210.UnvisitedBitMask = 0xffffffff;
              local_210.CurrentBitIndex = (int)uStack_244;
              local_210.BaseBitIndex = uStack_244._4_4_;
              local_210._28_4_ = uStack_23c;
              local_210.Array = pTStack_250;
              if ((int)uStack_244 < local_f0) {
                do {
                  puVar30 = (ulonglong *)((longlong)local_210.CurrentBitIndex * 0x10 + *local_218);
                  uVar20 = ((uint)(*puVar30 >> 0x14) & 0xffff ^ (uint)(*puVar30 >> 4)) * -0x7a143595
                  ;
                  uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
                  uVar20 = (uVar20 >> 0x10 ^ uVar20) & local_d0 - 1;
                  *(uint *)((longlong)puVar30 + 0xc) = uVar20;
                  FVar27.Data = local_e0;
                  if (local_d8.Data != (FScriptContainerElement *)0x0) {
                    FVar27.Data = local_d8.Data;
                  }
                  lVar23 = (longlong)(int)(local_d0 - 1 & uVar20);
                  *(undefined4 *)(puVar30 + 1) = *(undefined4 *)(FVar27.Data + lVar23 * 4);
                  *(int *)(FVar27.Data + lVar23 * 4) = local_210.CurrentBitIndex;
                  local_210.UnvisitedBitMask =
                       local_210.UnvisitedBitMask & ~local_210._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
                  puVar18 = local_2a0;
                } while (local_210.CurrentBitIndex < (local_210.Array)->NumBits);
              }
            }
          }
        }
LAB_14e1bf64a:
        if (local_2b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data);
        }
      }
    }
    TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
    ::
    TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
              (local_1d8,
               (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                *)local_118);
    if (local_180.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)local_180.ReferenceNesting.AllocatorInstance.SecondaryData);
    }
    DestructItems<FOptimusRoutedNodePin,int>
              ((FOptimusRoutedNodePin *)local_288.AllocatorInstance.Data,local_288.ArrayNum);
    if ((FOptimusRoutedNodePin *)local_288.AllocatorInstance.Data != (FOptimusRoutedNodePin *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
    do {
      puVar11 = (undefined8 *)*puVar18;
      if (puVar18 != (undefined8 *)0x0) {
        if ((void *)puVar18[6] != (void *)0x0) {
          FMemory::Free((void *)puVar18[6]);
        }
        ::operator_delete(puVar18,0x40);
      }
      puVar18 = puVar11;
    } while (puVar11 != (undefined8 *)0x0);
    local_d0 = 0;
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_118);
    local_80 = 0;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88);
    }
    TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_c8);
  }
  return __return_storage_ptr__;
}

// GetConnectedPins @ 14e1c0120

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::GetConnectedPins
          (UOptimusNodeGraph *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusNodePin *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  UOptimusNodePin *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar11;
  ForAnyElementType FVar12;
  undefined1 local_res10 [8];
  undefined8 local_48;
  UOptimusNodePin *local_40;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetAllLinkIndexesToPin(this,&local_38,param_1);
  iVar7 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 4;
  FVar12.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar12.Data == pFVar1) break;
    uVar2 = *(uint *)FVar12.Data;
    uVar9 = 0;
    if ((int)uVar2 < (this->Links).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
    }
    lVar3 = *(longlong *)((this->Links).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
    pUVar4 = *(UOptimusNodePin **)(lVar3 + 0x30);
    if (pUVar4 == param_1) {
      local_48 = *(undefined8 *)(lVar3 + 0x28);
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == __return_storage_ptr__->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      FVar12.Data = FVar12.Data + 4;
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           local_48;
    }
    else {
      if (*(UOptimusNodePin **)(lVar3 + 0x28) == param_1) {
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_40 = pUVar4;
        if ((pFVar5 <= (FScriptContainerElement *)&local_40) &&
           ((FScriptContainerElement *)&local_40 <
            pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            pTVar11 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar11;
          }
        }
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == __return_storage_ptr__->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        *(UOptimusNodePin **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_40;
      }
      FVar12.Data = FVar12.Data + 4;
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConnectedPinsWithRouting @ 14e1c0470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::GetConnectedPinsWithRouting
          (UOptimusNodeGraph *this,
          TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusNodePin *param_1,FOptimusPinTraversalContext *param_2)

{
  longlong *_Src;
  UOptimusNodeGraph *this_00;
  UObjectBaseUtility *this_01;
  code *pcVar1;
  UOptimusNodePin *pUVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  UOptimusNode *pUVar6;
  UClass *pUVar7;
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong *plVar9;
  ForElementType<IOptimusNodePinRouter_const_*> FVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [8];
  FScriptContainerElement *local_1a0;
  uint local_198;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_190;
  longlong *local_178;
  longlong *local_168;
  longlong local_160;
  ForElementType<IOptimusNodePinRouter_const_*> local_158;
  int local_130;
  int local_12c;
  UOptimusNodePin *local_128;
  ForElementType<IOptimusNodePinRouter_const_*> local_120;
  int local_f8;
  int local_f4;
  UOptimusNodePin *local_f0;
  longlong local_e8 [4];
  longlong *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8;
  FOptimusPinTraversalContext local_b0;
  undefined8 local_80;
  longlong local_78 [5];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  plVar5 = ::operator_new(0x40);
  plVar16 = (longlong *)0x0;
  plVar9 = plVar16;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[6] = 0;
    *(undefined4 *)(plVar5 + 7) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x3c) = 4;
    plVar9 = plVar5;
  }
  FVar10 = (param_2->ReferenceNesting).AllocatorInstance.SecondaryData;
  local_f8 = (param_2->ReferenceNesting).ArrayNum;
  lVar14 = (longlong)local_f8;
  if (FVar10 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    param_2 = (FOptimusPinTraversalContext *)FVar10;
  }
  local_120.SecondaryData = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_178 = plVar9;
  local_128 = param_1;
  if (local_f8 == 0) {
    local_f4 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
              (8,8,local_f8,0,&local_120,local_f8,&local_f4);
    FVar10 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_120;
    if (local_120.SecondaryData != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FVar10 = local_120.SecondaryData;
    }
    memcpy((void *)FVar10,param_2,lVar14 << 3);
  }
  plVar5 = ::operator_new(0x40);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = (longlong)local_128;
    plVar5[6] = 0;
    if (local_120.SecondaryData == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      memmove(plVar5 + 2,&local_120,0x20);
    }
    if ((void *)plVar5[6] != (void *)0x0) {
      FMemory::Free((void *)plVar5[6]);
    }
    *(ForElementType<IOptimusNodePinRouter_const_*> *)(plVar5 + 6) = local_120.SecondaryData;
    local_120.SecondaryData = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    *(int *)(plVar5 + 7) = local_f8;
    *(int *)((longlong)plVar5 + 0x3c) = local_f4;
    local_f8 = 0;
    local_f4 = 4;
    *local_178 = (longlong)plVar5;
    local_178 = plVar5;
  }
  if (local_120.SecondaryData != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)local_120.SecondaryData);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_f0 = (UOptimusNodePin *)0x0;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_bc = 4;
  do {
    plVar5 = (longlong *)*plVar9;
    if (plVar5 == (longlong *)0x0) {
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
      do {
        plVar5 = (longlong *)*plVar9;
        if (plVar9 != (longlong *)0x0) {
          if ((void *)plVar9[6] != (void *)0x0) {
            FMemory::Free((void *)plVar9[6]);
          }
          ::operator_delete(plVar9,0x40);
        }
        plVar9 = plVar5;
      } while (plVar5 != (longlong *)0x0);
      return __return_storage_ptr__;
    }
    local_f0 = (UOptimusNodePin *)plVar5[1];
    _Src = plVar5 + 2;
    if (local_e8 != _Src) {
      if (plVar5[6] == 0) {
        memmove(local_e8,_Src,0x20);
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
      local_c8 = (longlong *)plVar5[6];
      plVar5[6] = 0;
      local_c0 = (int)plVar5[7];
      local_bc = *(undefined4 *)((longlong)plVar5 + 0x3c);
      *(undefined4 *)(plVar5 + 7) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x3c) = 4;
    }
    local_80 = 0;
    local_78[4] = 0;
    local_50 = 0;
    local_4c = 4;
    plVar5[1] = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_168 = plVar5;
    if (_Src != local_78) {
      *_Src = 0;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      if ((void *)plVar5[6] != (void *)0x0) {
        FMemory::Free((void *)plVar5[6]);
      }
      plVar5[6] = 0;
      *(undefined4 *)(plVar5 + 7) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x3c) = 4;
    }
    if (plVar9 != (longlong *)0x0) {
      if ((void *)plVar9[6] != (void *)0x0) {
        FMemory::Free((void *)plVar9[6]);
      }
      ::operator_delete(plVar9,0x40);
    }
    pUVar2 = local_f0;
    pUVar6 = UOptimusNodePin::GetOwningNode(local_f0);
    this_00 = (UOptimusNodeGraph *)pUVar6->_padding_;
    if (this_00 == (UOptimusNodeGraph *)0x0) {
LAB_14e1c0759:
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7986583113880829533>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                         ,0x1a3,"Graph != nullptr");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar8;
      }
      local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.ArrayNum = 0;
      local_190.ArrayMax = 0;
    }
    else {
      pUVar7 = StaticClass();
      iVar4 = (int)pUVar7->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar7->_padding_)) goto LAB_14e1c0759;
      GetConnectedPins(this_00,&local_190,pUVar2);
    }
    uVar11 = (ulonglong)local_190.ArrayNum;
    pFVar12 = local_190.AllocatorInstance.Data + uVar11 * 8;
    FVar17.Data = local_190.AllocatorInstance.Data;
    local_1a0 = pFVar12;
    local_198 = local_190.ArrayNum;
    while( true ) {
      if (local_190.ArrayNum != (uint)uVar11) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1a8);
      }
      plVar9 = local_168;
      if (FVar17.Data == pFVar12) break;
      lVar14 = *(longlong *)FVar17.Data;
      lVar13 = lVar14;
      if (lVar14 == 0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7701470802381638110>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                           ,0x9de,"ConnectedPin != nullptr");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar8 = (TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar8;
        }
      }
      else {
        while (lVar15 = lVar13, lVar13 = *(longlong *)(lVar15 + 0x20), lVar13 != 0) {
          pUVar7 = UOptimusNodePin::StaticClass();
          iVar4 = (int)pUVar7->_padding_;
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar7->_padding_)) break;
        }
        this_01 = *(UObjectBaseUtility **)(lVar15 + 0x20);
        plVar9 = plVar16;
        if (this_01 != (UObjectBaseUtility *)0x0) {
          pUVar7 = UOptimusNode::StaticClass();
          iVar4 = (int)pUVar7->_padding_;
          if ((iVar4 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar7->_padding_)) {
            pUVar7 = UOptimusNodePinRouter::GetPrivateStaticClass();
            plVar9 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar7);
          }
        }
        if (plVar9 == (longlong *)0x0) {
          lVar13 = (longlong)local_c0;
          plVar9 = local_e8;
          if (local_c8 != (longlong *)0x0) {
            plVar9 = local_c8;
          }
          local_158.SecondaryData = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
          local_130 = local_c0;
          local_160 = lVar14;
          if (local_c0 == 0) {
            local_12c = 4;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
                      (8,8,local_c0,0,&local_158,local_c0,&local_12c);
            FVar10 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_158;
            if (local_158.SecondaryData != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              FVar10 = local_158.SecondaryData;
            }
            memcpy((void *)FVar10,plVar9,lVar13 << 3);
          }
          pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_160) &&
              ((FScriptContainerElement *)&local_160 <
               pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 0x38)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar8 = (TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar8;
          }
          iVar4 = __return_storage_ptr__->ArrayNum;
          if (iVar4 == __return_storage_ptr__->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x838,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar4 + 1;
          pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x38;
          *(longlong *)pFVar12 = local_160;
          *(longlong *)(pFVar12 + 0x28) = 0;
          if (local_158.SecondaryData == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
            memmove(pFVar12 + 8,&local_158,0x20);
          }
          if (*(void **)(pFVar12 + 0x28) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar12 + 0x28));
          }
          *(ForElementType<IOptimusNodePinRouter_const_*> *)(pFVar12 + 0x28) =
               local_158.SecondaryData;
          local_158.SecondaryData = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
          *(int *)(pFVar12 + 0x30) = local_130;
          *(int *)(pFVar12 + 0x34) = local_12c;
          local_130 = 0;
          local_12c = 4;
          FVar10 = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
        }
        else {
          (**(code **)(*plVar9 + 0x10))(plVar9,&local_b8,lVar14);
          FVar10 = local_b0.ReferenceNesting.AllocatorInstance.SecondaryData;
          if ((local_b8 != 0) &&
             (plVar9 = ::operator_new(0x40),
             FVar10 = local_b0.ReferenceNesting.AllocatorInstance.SecondaryData,
             plVar9 != (longlong *)0x0)) {
            *plVar9 = 0;
            plVar9[1] = local_b8;
            FOptimusPinTraversalContext::FOptimusPinTraversalContext
                      ((FOptimusPinTraversalContext *)(plVar9 + 2),&local_b0);
            *local_178 = (longlong)plVar9;
            FVar10 = local_b0.ReferenceNesting.AllocatorInstance.SecondaryData;
            local_178 = plVar9;
          }
        }
        pFVar12 = local_1a0;
        if (FVar10 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)FVar10);
          pFVar12 = local_1a0;
        }
      }
      FVar17.Data = FVar17.Data + 8;
      uVar11 = (ulonglong)local_198;
    }
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
  } while( true );
}

// GetConnectedPinsWithRouting @ 14e1c0b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::GetConnectedPinsWithRouting
          (UOptimusNodeGraph *this,
          TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusNodePin *param_1,FOptimusPinTraversalContext *param_2,
          EOptimusNodePinTraversalDirection param_3)

{
  UOptimusNode *this_00;
  UClass *pUVar1;
  longlong *plVar2;
  FOptimusRoutedNodePin *pFVar3;
  undefined1 auStack_e8 [32];
  initializer_list<FOptimusRoutedNodePin> local_c8;
  FOptimusRoutedNodePin local_b8;
  FOptimusRoutedNodePin local_80;
  UOptimusNodePin *local_48;
  
  local_48 = (UOptimusNodePin *)(__security_cookie.value ^ (ulonglong)auStack_e8);
  if (param_3 == Default) {
    GetConnectedPinsWithRouting(this,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  this_00 = UOptimusNodePin::GetOwningNode(param_1);
  plVar2 = (longlong *)0x0;
  local_b8.TraversalContext.ReferenceNesting.ArrayMax = 4;
  local_b8.NodePin = (UOptimusNodePin *)0x0;
  local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_b8.TraversalContext.ReferenceNesting.ArrayNum = 0;
  if (param_3 == Upstream) {
    if (param_1->Direction != Output) goto LAB_14e1c0c49;
    if (this_00 != (UOptimusNode *)0x0) {
      pUVar1 = UOptimusNodePinRouter::GetPrivateStaticClass();
      plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    }
    if (plVar2 == (longlong *)0x0) goto LAB_14e1c0bc2;
LAB_14e1c0c1d:
    pFVar3 = (FOptimusRoutedNodePin *)
             (**(code **)(*plVar2 + 0x10))(plVar2,&local_80,param_1,param_2);
    FOptimusRoutedNodePin::operator=(&local_b8,pFVar3);
    if (local_80.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)local_80.TraversalContext.ReferenceNesting.AllocatorInstance.
                            SecondaryData);
    }
  }
  else {
    if (param_1->Direction == Input) {
      if (this_00 != (UOptimusNode *)0x0) {
        pUVar1 = UOptimusNodePinRouter::GetPrivateStaticClass();
        plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
      }
      if (plVar2 != (longlong *)0x0) goto LAB_14e1c0c1d;
LAB_14e1c0bc2:
      local_80.NodePin = param_1;
      FOptimusPinTraversalContext::FOptimusPinTraversalContext(&local_80.TraversalContext,param_2);
      local_c8._First = &local_80;
      local_c8._Last = (FOptimusRoutedNodePin *)&local_48;
      TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_>::
      TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_c8);
      goto LAB_14e1c0caf;
    }
LAB_14e1c0c49:
    local_80.NodePin = param_1;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext(&local_80.TraversalContext,param_2);
    local_b8.NodePin = local_80.NodePin;
    if (local_80.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData ==
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[1] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[1];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[2] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[2];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[3] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[3];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[4] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[4];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[5] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[5];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[6] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[6];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[7] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[7];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[8] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[8];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[9] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[9];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[10] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[10];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xb] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xb];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xc] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xc];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xd] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xd];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xe] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xe];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xf] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0xf];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x10] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x10];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x11] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x11];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x12] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x12];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x13] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x13];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x14] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x14];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x15] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x15];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x16] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x16];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x17] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x17];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x18] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x18];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x19] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x19];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1a] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1a];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1b] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1b];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1c] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1c];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1d] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1d];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1e] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1e];
      local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1f] =
           local_80.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData[0x1f];
    }
    local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData =
         local_80.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
    local_b8.TraversalContext.ReferenceNesting.ArrayNum =
         local_80.TraversalContext.ReferenceNesting.ArrayNum;
    local_b8.TraversalContext.ReferenceNesting.ArrayMax =
         local_80.TraversalContext.ReferenceNesting.ArrayMax;
  }
  if (local_b8.NodePin == (UOptimusNodePin *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    local_80.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData =
         local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
  }
  else {
    GetConnectedPinsWithRouting
              (this,__return_storage_ptr__,local_b8.NodePin,&local_b8.TraversalContext);
    local_80.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData =
         local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
  }
LAB_14e1c0caf:
  if (local_80.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData !=
      (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)local_80.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData
                 );
  }
  return __return_storage_ptr__;
}

// GetFunctionGraphCollectionPath @ 14e1c5420

FString * __cdecl
UOptimusNodeGraph::GetFunctionGraphCollectionPath(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetGraphIndex @ 14e1c5830

int __thiscall UOptimusNodeGraph::GetGraphIndex(UOptimusNodeGraph *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1);
  plVar1 = (longlong *)*plVar2;
  plVar3 = plVar1;
  while( true ) {
    if (plVar3 == plVar1 + (int)plVar2[1]) {
      return -1;
    }
    if ((UOptimusNodeGraph *)*plVar3 == this) break;
    plVar3 = plVar3 + 1;
  }
  return (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
}

// GetGraphs @ 14e1c58a0

TArray<UOptimusNodeGraph_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::GetGraphs(UOptimusNodeGraph *this)

{
  return (TArray<UOptimusNodeGraph_*,TSizedDefaultAllocator<32>_> *)&(this->Nodes).ArrayNum;
}

// GetLoopEntryTerminalForNode @ 14e1c9260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator> *
__thiscall
UOptimusNodeGraph::GetLoopEntryTerminalForNode
          (UOptimusNodeGraph *this,
          TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,UOptimusNode *param_1,FOptimusPinTraversalContext *param_2)

{
  FScriptContainerElement *pFVar1;
  TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
  *pTVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_b0;
  TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  UOptimusNode::GetPinsByDirection(param_1,&local_b0,Input,true);
  iVar3 = local_b0.ArrayNum;
  pFVar1 = local_b0.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = local_b0.AllocatorInstance.Data;
  while( true ) {
    if (local_b0.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_b8);
    }
    if (FVar4.Data == pFVar1) break;
    pTVar2 = GetLoopEntryTerminalForPin(this,&local_98,*(UOptimusNodePin **)FVar4.Data,param_2);
    TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::
    Append<FDefaultSetAllocator>(__return_storage_ptr__,pTVar2);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLoopEntryTerminalForPin @ 14e1c9380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator> *
__thiscall
UOptimusNodeGraph::GetLoopEntryTerminalForPin
          (UOptimusNodeGraph *this,
          TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,UOptimusNodePin *param_1,FOptimusPinTraversalContext *param_2)

{
  FOptimusPinTraversalContext *pFVar1;
  uchar *puVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<IOptimusNodePinRouter_const_*> FVar5;
  void *pvVar6;
  TObjectPtr<UOptimusNodePin> *pTVar7;
  UOptimusNodePin *pUVar8;
  code *pcVar9;
  undefined8 uVar10;
  void *_Src;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ForElementType<IOptimusNodePinRouter_const_*> FVar15;
  TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
  *pTVar16;
  UClass *pUVar17;
  ulonglong uVar18;
  longlong *plVar19;
  UOptimusNode *pUVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  ForElementType<unsigned_int> FVar26;
  ForAnyElementType FVar27;
  ulonglong *_Buf2;
  ulonglong uVar28;
  ForElementType<FSetElementId> FVar29;
  FOptimusRoutedConstNode *pFVar30;
  UOptimusNodeGraph *this_00;
  ForElementType<IOptimusNodePinRouter_const_*> FVar31;
  ForAnyElementType FVar32;
  UOptimusNodePin *pUVar33;
  ulonglong uVar34;
  FOptimusRoutedNodePin *pFVar35;
  undefined1 auStackY_358 [32];
  undefined1 local_308;
  undefined1 local_307 [3];
  uint local_304;
  ForAnyElementType local_300;
  undefined8 local_2f8;
  uint local_2f0;
  TQueue<FOptimusRoutedConstNode,1> local_2e8;
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_2d8;
  longlong local_2c8;
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_2c0;
  FScriptContainerElement *local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a8;
  longlong *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_280;
  undefined4 local_260;
  undefined1 local_25c [20];
  FSparseArrayAllocationInfo local_248;
  UOptimusNode *local_238;
  FOptimusPinTraversalContext local_230;
  UOptimusNode *local_200;
  FOptimusPinTraversalContext local_1f8;
  UOptimusNode *local_1c8;
  FOptimusPinTraversalContext local_1c0;
  FOptimusRoutedConstNode local_190;
  undefined1 local_158 [32];
  ForElementType<unsigned_int> local_138;
  int local_130;
  uint local_12c;
  int local_128;
  uint local_124;
  FScriptContainerElement local_120 [8];
  ForAnyElementType local_118;
  uint local_110;
  undefined1 local_108 [32];
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined1 local_d0 [8];
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  FOptimusRoutedConstNode local_b8;
  undefined8 local_80;
  FOptimusPinTraversalContext local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d4 = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  local_158._0_8_ = (FScriptContainerElement *)0x0;
  local_158._8_8_ = 0;
  local_138 = (ForElementType<unsigned_int>)0x0;
  local_130 = 0;
  local_124 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_dc = 0x80;
  local_d8 = 0xffffffff;
  local_12c = 0x80;
  local_128 = -1;
  local_25c._12_8_ = __return_storage_ptr__;
  FVar15 = (ForElementType<IOptimusNodePinRouter_const_*>)::operator_new(0x40);
  FVar31 = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  if (FVar15 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    *(undefined8 *)FVar15 = 0;
    *(undefined8 *)((longlong)FVar15 + 8) = 0;
    *(undefined8 *)((longlong)FVar15 + 0x10) = 0;
    *(undefined8 *)((longlong)FVar15 + 0x18) = 0;
    *(undefined8 *)((longlong)FVar15 + 0x20) = 0;
    *(undefined8 *)((longlong)FVar15 + 0x28) = 0;
    *(undefined8 *)((longlong)FVar15 + 0x30) = 0;
    *(undefined8 *)((longlong)FVar15 + 0x38) = 0;
    *(undefined8 *)FVar15 = 0;
    *(undefined8 *)((longlong)FVar15 + 8) = 0;
    *(undefined8 *)((longlong)FVar15 + 0x30) = 0;
    *(undefined4 *)((longlong)FVar15 + 0x38) = 0;
    *(undefined4 *)((longlong)FVar15 + 0x3c) = 4;
    FVar31 = FVar15;
  }
  local_b8.Node = (UOptimusNode *)0x0;
  local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_b8.TraversalContext.ReferenceNesting.ArrayNum = 0;
  local_b8.TraversalContext.ReferenceNesting.ArrayMax = 4;
  local_2e8.Head = (TNode *)FVar31;
  local_2e8.Tail = (TNode *)FVar31;
  if (param_1->Direction == Input) {
    GetConnectedPinsWithRouting(this,&local_2d8,param_1,param_2);
    if (local_2d8.ArrayNum == 0) {
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
      (__return_storage_ptr__->Hash).InlineData[0] = '\0';
      (__return_storage_ptr__->Hash).InlineData[1] = '\0';
      (__return_storage_ptr__->Hash).InlineData[2] = '\0';
      (__return_storage_ptr__->Hash).InlineData[3] = '\0';
      (__return_storage_ptr__->Hash)._padding_ = 0;
      *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
      *(undefined8 *)&__return_storage_ptr__->Elements = 0;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
      (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      DestructItems<FOptimusRoutedNodePin,int>
                ((FOptimusRoutedNodePin *)local_2d8.AllocatorInstance.Data,0);
      if ((FOptimusRoutedNodePin *)local_2d8.AllocatorInstance.Data != (FOptimusRoutedNodePin *)0x0)
      {
        FMemory::Free(local_2d8.AllocatorInstance.Data);
      }
      TQueue<FOptimusRoutedConstNode,1>::~TQueue<FOptimusRoutedConstNode,1>(&local_2e8);
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_158,0,local_158._8_4_);
      iVar12 = SUB84(local_158._8_8_,4);
      local_158._8_8_ = local_158._8_8_ & 0xffffffff00000000;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
      }
      local_128 = -1;
      local_124 = 0;
      local_130 = 0;
      if (0x80 < local_12c) {
        local_12c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
      }
      if (local_138 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_138);
      }
      if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_158._0_8_);
      }
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c8);
      }
      TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_108,0,local_108._8_4_);
      iVar12 = SUB84(local_108._8_8_,4);
      local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
      }
      local_d8 = 0xffffffff;
      local_d4 = 0;
      local_e0 = 0;
      if (0x80 < local_dc) {
        local_dc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      if ((FScriptContainerElement *)local_108._0_8_ == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free((void *)local_108._0_8_);
      return __return_storage_ptr__;
    }
    if ((local_2d8.ArrayNum != 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RoutedPins.Num() == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                            ,0xafd,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar16 = (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                 *)(*pcVar9)();
      return pTVar16;
    }
    if ((local_2d8.ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar16 = (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                 *)(*pcVar9)();
      return pTVar16;
    }
    local_190.Node =
         UOptimusNodePin::GetOwningNode(*(UOptimusNodePin **)local_2d8.AllocatorInstance.Data);
    if ((local_2d8.ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar16 = (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                 *)(*pcVar9)();
      return pTVar16;
    }
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&local_190.TraversalContext,
               (FOptimusPinTraversalContext *)(local_2d8.AllocatorInstance.Data + 8));
    FOptimusRoutedConstNode::operator=(&local_b8,&local_190);
    if (local_190.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)local_190.TraversalContext.ReferenceNesting.AllocatorInstance.
                            SecondaryData);
    }
    DestructItems<FOptimusRoutedNodePin,int>
              ((FOptimusRoutedNodePin *)local_2d8.AllocatorInstance.Data,local_2d8.ArrayNum);
  }
  else {
    local_1c8 = UOptimusNodePin::GetOwningNode(param_1);
    FOptimusPinTraversalContext::FOptimusPinTraversalContext(&local_1c0,param_2);
    local_b8.Node = local_1c8;
    FOptimusPinTraversalContext::operator=(&local_b8.TraversalContext,&local_1c0);
    local_2d8.AllocatorInstance.Data =
         (FScriptContainerElement *)local_1c0.ReferenceNesting.AllocatorInstance.SecondaryData;
  }
  if ((ForElementType<IOptimusNodePinRouter_const_*>)local_2d8.AllocatorInstance.Data !=
      (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free(local_2d8.AllocatorInstance.Data);
  }
  FVar15 = (ForElementType<IOptimusNodePinRouter_const_*>)::operator_new(0x40);
  if (FVar15 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    ((FOptimusRoutedConstNode *)((longlong)FVar15 + 8))->Node = local_b8.Node;
    *(undefined8 *)FVar15 = 0;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)FVar15 + 0x10),&local_b8.TraversalContext);
    *(ForElementType<IOptimusNodePinRouter_const_*> *)local_2e8.Head = FVar15;
    local_2e8.Head = (TNode *)FVar15;
  }
  local_200 = (UOptimusNode *)0x0;
  local_1f8.ReferenceNesting.AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_1f8.ReferenceNesting.ArrayNum = 0;
  local_1f8.ReferenceNesting.ArrayMax = 4;
  FVar15 = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  do {
    while( true ) {
      uVar10 = local_25c._12_8_;
      FVar5 = *(ForElementType<IOptimusNodePinRouter_const_*> *)FVar31;
      if (FVar5 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
        TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
        ::
        TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                  ((TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                    *)local_25c._12_8_,
                   (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                    *)local_158);
        if (FVar15 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)FVar15);
        }
        if (local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData !=
            (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)local_b8.TraversalContext.ReferenceNesting.AllocatorInstance.
                                SecondaryData);
        }
        do {
          FVar15 = *(ForElementType<IOptimusNodePinRouter_const_*> *)FVar31;
          if (FVar31 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
            if (*(ForElementType<IOptimusNodePinRouter_const_*> *)((longlong)FVar31 + 0x30) !=
                (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              FMemory::Free((void *)*(ForElementType<IOptimusNodePinRouter_const_*> *)
                                     ((longlong)FVar31 + 0x30));
            }
            ::operator_delete((void *)FVar31,0x40);
          }
          FVar31 = FVar15;
        } while (FVar15 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0);
        local_110 = 0;
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
        TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_158);
        local_c0 = 0;
        if (local_c8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_c8);
        }
        TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_108);
        return (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                *)uVar10;
      }
      pUVar20 = ((FOptimusRoutedConstNode *)((longlong)FVar5 + 8))->Node;
      pFVar1 = (FOptimusPinTraversalContext *)((longlong)FVar5 + 0x10);
      local_200 = pUVar20;
      if (&local_1f8 != pFVar1) {
        if (*(ForElementType<IOptimusNodePinRouter_const_*> *)((longlong)FVar5 + 0x30) ==
            (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          local_1f8.ReferenceNesting.AllocatorInstance.InlineData._0_8_ =
               *(undefined8 *)(pFVar1->ReferenceNesting).AllocatorInstance.InlineData;
          local_1f8.ReferenceNesting.AllocatorInstance.InlineData._8_8_ =
               *(undefined8 *)((longlong)FVar5 + 0x18);
          local_1f8.ReferenceNesting.AllocatorInstance.InlineData._16_8_ =
               *(undefined8 *)((longlong)FVar5 + 0x20);
          local_1f8.ReferenceNesting.AllocatorInstance.InlineData._24_8_ =
               *(undefined8 *)((longlong)FVar5 + 0x28);
        }
        if (FVar15 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)FVar15);
        }
        local_1f8.ReferenceNesting.AllocatorInstance.SecondaryData =
             *(ForElementType<IOptimusNodePinRouter_const_*> *)((longlong)FVar5 + 0x30);
        *(ForElementType<IOptimusNodePinRouter_const_*> *)((longlong)FVar5 + 0x30) =
             (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
        local_1f8.ReferenceNesting.ArrayNum = *(int *)((longlong)FVar5 + 0x38);
        local_1f8.ReferenceNesting.ArrayMax = *(int *)((longlong)FVar5 + 0x3c);
        *(int *)((longlong)FVar5 + 0x3c) = 4;
        *(int *)((longlong)FVar5 + 0x38) = 0;
      }
      local_80 = 0;
      local_78.ReferenceNesting.AllocatorInstance.SecondaryData =
           (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
      local_78.ReferenceNesting.ArrayNum = 0;
      local_78.ReferenceNesting.ArrayMax = 4;
      ((FOptimusRoutedConstNode *)((longlong)FVar5 + 8))->Node = (UOptimusNode *)0x0;
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[1] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[2] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[3] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[4] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[5] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[6] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[7] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[8] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[9] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[10] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0xb] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0xc] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0xd] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0xe] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0xf] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x10] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x11] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x12] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x13] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x14] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x15] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x16] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x17] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x18] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x19] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x1a] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x1b] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x1c] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x1d] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x1e] = '\0';
      local_78.ReferenceNesting.AllocatorInstance.InlineData[0x1f] = '\0';
      local_2e8.Tail = (TNode *)FVar5;
      if (pFVar1 != &local_78) {
        (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = '\0';
        (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = '\0';
        (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = '\0';
        (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = '\0';
        (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[4] = '\0';
        (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[5] = '\0';
        (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[6] = '\0';
        (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[7] = '\0';
        puVar2 = (uchar *)((longlong)FVar5 + 0x18);
        puVar2[0] = '\0';
        puVar2[1] = '\0';
        puVar2[2] = '\0';
        puVar2[3] = '\0';
        puVar2[4] = '\0';
        puVar2[5] = '\0';
        puVar2[6] = '\0';
        puVar2[7] = '\0';
        puVar2 = (uchar *)((longlong)FVar5 + 0x20);
        puVar2[0] = '\0';
        puVar2[1] = '\0';
        puVar2[2] = '\0';
        puVar2[3] = '\0';
        puVar2[4] = '\0';
        puVar2[5] = '\0';
        puVar2[6] = '\0';
        puVar2[7] = '\0';
        puVar2 = (uchar *)((longlong)FVar5 + 0x28);
        puVar2[0] = '\0';
        puVar2[1] = '\0';
        puVar2[2] = '\0';
        puVar2[3] = '\0';
        puVar2[4] = '\0';
        puVar2[5] = '\0';
        puVar2[6] = '\0';
        puVar2[7] = '\0';
        if (*(ForElementType<IOptimusNodePinRouter_const_*> *)((longlong)FVar5 + 0x30) !=
            (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<IOptimusNodePinRouter_const_*> *)
                                 ((longlong)FVar5 + 0x30));
        }
        *(ForElementType<IOptimusNodePinRouter_const_*> *)((longlong)FVar5 + 0x30) =
             (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
        *(int *)((longlong)FVar5 + 0x38) = 0;
        *(int *)((longlong)FVar5 + 0x3c) = 4;
      }
      if (FVar31 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
        if (*(ForElementType<IOptimusNodePinRouter_const_*> *)((longlong)FVar31 + 0x30) !=
            (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<IOptimusNodePinRouter_const_*> *)
                                 ((longlong)FVar31 + 0x30));
        }
        ::operator_delete((void *)FVar31,0x40);
      }
      local_300.Data = (FScriptContainerElement *)0x0;
      local_2f8 = 0;
      if (pUVar20 == (UOptimusNode *)0x0) goto LAB_14e1c9f82;
      pUVar17 = UOptimusNode_LoopTerminal::StaticClass();
      iVar12 = (int)pUVar17->_padding_;
      if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar12) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
          &pUVar17->_padding_)) break;
      if (pUVar20 == (UOptimusNode *)0x0) goto LAB_14e1c9f82;
      if (*(int *)&pUVar20[1].bSendNotifications == 1) {
        if (local_124 == 0) {
          iVar12 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40,8,1,(ForAnyElementType *)local_158,(int *)(local_158 + 8),
                              (int *)(local_158 + 0xc));
          iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),1);
          FVar26 = (ForElementType<unsigned_int>)((longlong)local_158 + 0x10);
          if (local_138 != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_138;
          }
          bVar21 = (byte)iVar13 & 0x1f;
          if (iVar13 < 0) {
            iVar13 = iVar13 + 0x1f;
            bVar21 = bVar21 - 0x20;
          }
          puVar3 = (uint *)((longlong)FVar26 + (longlong)(iVar13 >> 5) * 4);
          *puVar3 = *puVar3 & ~(1 << (bVar21 & 0x1f));
          iVar13 = local_128;
        }
        else {
          local_124 = local_124 - 1;
          iVar13 = *(int *)(local_158._0_8_ + (longlong)local_128 * 0x40 + 4);
          iVar12 = local_128;
          if (local_124 != 0) {
            *(undefined4 *)(local_158._0_8_ + (longlong)iVar13 * 0x40) = 0xffffffff;
          }
        }
        local_128 = iVar13;
        TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_158,&local_248,iVar12);
        _Src = local_248.Pointer;
        if (local_248.Pointer != (ulonglong *)0x0) {
          *(UOptimusNode **)local_248.Pointer = pUVar20;
          FOptimusPinTraversalContext::FOptimusPinTraversalContext
                    ((FOptimusPinTraversalContext *)((longlong)local_248.Pointer + 8),&local_1f8);
          *(undefined4 *)((longlong)_Src + 0x38) = 0xffffffff;
        }
        uVar22 = ((uint)(*(ulonglong *)_Src >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)_Src >> 4)) *
                 -0x7a143595;
        uVar23 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar23 = uVar23 >> 0x10 ^ uVar23;
        uVar22 = ::GetTypeHash((FOptimusPinTraversalContext *)((longlong)_Src + 8));
        FVar32.Data = local_118.Data;
        uVar10 = local_158._0_8_;
        local_2f0 = local_158._8_4_;
        local_304 = uVar23 * 0x40 + -0x61c88647 + (uVar23 >> 2) + uVar22 ^ uVar23;
        if ((local_158._8_4_ - local_124 != 1) && (local_158._8_4_ != local_124)) {
          FVar27.Data = local_120;
          if (local_118.Data != (FScriptContainerElement *)0x0) {
            FVar27.Data = local_118.Data;
          }
          iVar12 = *(int *)(FVar27.Data + (ulonglong)(local_110 - 1 & local_304) * 4);
          if (iVar12 != -1) {
            uVar28 = *(ulonglong *)_Src;
            do {
              if (*(ulonglong *)(uVar10 + (longlong)iVar12 * 0x40) == uVar28) {
                pFVar24 = (FScriptContainerElement *)(uVar10 + (longlong)iVar12 * 0x40 + 8);
                iVar13 = *(int *)(pFVar24 + 0x28);
                if (iVar13 == (int)*(ulonglong *)((longlong)_Src + 0x30)) {
                  _Buf2 = (ulonglong *)((longlong)_Src + 8);
                  if (*(ulonglong **)((longlong)_Src + 0x28) != (ulonglong *)0x0) {
                    _Buf2 = *(ulonglong **)((longlong)_Src + 0x28);
                  }
                  if (*(FScriptContainerElement **)(pFVar24 + 0x20) !=
                      (FScriptContainerElement *)0x0) {
                    pFVar24 = *(FScriptContainerElement **)(pFVar24 + 0x20);
                  }
                  if ((iVar13 == 0) ||
                     (iVar13 = memcmp(pFVar24,_Buf2,(longlong)iVar13 << 3), iVar13 == 0)) {
                    if (iVar12 != -1) {
                      pvVar6 = *(void **)((FScriptContainerElement *)
                                          (uVar10 + (longlong)iVar12 * 0x40) + 0x28);
                      if (pvVar6 != (void *)0x0) {
                        FMemory::Free(pvVar6);
                      }
                      memmove((FScriptContainerElement *)(uVar10 + (longlong)iVar12 * 0x40),_Src,
                              0x38);
                      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::RemoveAtUninitialized
                                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)local_158,local_248.Index,1);
                      goto LAB_14e1c9e86;
                    }
                    break;
                  }
                }
              }
              iVar12 = *(int *)(uVar10 + (longlong)iVar12 * 0x40 + 0x38);
            } while (iVar12 != -1);
          }
        }
        uVar23 = local_2f0 - local_124;
        uVar22 = 1;
        if (3 < uVar23) {
          uVar28 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
          lVar25 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_260 = (undefined4)lVar25;
          uVar22 = 1 << ((byte)lVar25 & 0x1f);
        }
        if (((int)uVar23 < 1) || ((int)uVar22 <= (int)local_110)) {
          uVar22 = local_110 - 1 & local_304;
          *(uint *)((longlong)_Src + 0x3c) = uVar22;
          FVar32.Data = local_120;
          if (local_118.Data != (FScriptContainerElement *)0x0) {
            FVar32.Data = local_118.Data;
          }
          lVar25 = (longlong)(int)(local_110 - 1 & uVar22);
          *(undefined4 *)((longlong)_Src + 0x38) = *(undefined4 *)(FVar32.Data + lVar25 * 4);
          *(int *)(FVar32.Data + lVar25 * 4) = local_248.Index;
        }
        else {
          local_110 = uVar22;
          if (FVar32.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,0,4);
            FVar32.Data = local_118.Data;
          }
          if (uVar22 != 0) {
            uVar23 = uVar22;
            if (uVar22 < 2) {
              FVar27.Data = (FScriptContainerElement *)0x0;
              if (FVar32.Data != (FScriptContainerElement *)0x0) {
                uVar23 = 0;
                goto LAB_14e1c9ced;
              }
            }
            else {
LAB_14e1c9ced:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_118,0,uVar23,4);
              FVar27.Data = local_118.Data;
            }
            uVar28 = 0;
            if (0 < (int)uVar22) {
              uVar34 = (ulonglong)uVar22;
              do {
                pFVar24 = local_120;
                if (FVar27.Data != (FScriptContainerElement *)0x0) {
                  pFVar24 = FVar27.Data;
                }
                uVar18 = (longlong)(int)uVar22 - 1U & uVar28;
                uVar28 = uVar28 + 1;
                *(undefined4 *)(pFVar24 + uVar18 * 4) = 0xffffffff;
                uVar34 = uVar34 - 1;
                FVar27.Data = local_118.Data;
              } while (uVar34 != 0);
            }
          }
          if (local_110 != 0) {
            local_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10);
            local_2a8._padding_._0_4_ = 0;
            local_2a8._padding_._4_4_ = 1;
            local_2a8.UnvisitedBitMask = 0xffffffff;
            local_2a8.CurrentBitIndex = 0;
            local_2a8.BaseBitIndex = 0;
            if (local_130 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a8);
            }
            local_288 = (longlong *)local_158;
            local_280._padding_ =
                 CONCAT44(local_2a8._padding_._4_4_,(undefined4)local_2a8._padding_);
            local_280.Array = local_2a8.Array;
            local_280.UnvisitedBitMask = local_2a8.UnvisitedBitMask;
            local_280.CurrentBitIndex = local_2a8.CurrentBitIndex;
            local_280.BaseBitIndex = local_2a8.BaseBitIndex;
            local_280._28_4_ = local_2a8._28_4_;
            if (local_2a8.CurrentBitIndex < (local_2a8.Array)->NumBits) {
              do {
                iVar12 = local_280.CurrentBitIndex;
                pFVar30 = (FOptimusRoutedConstNode *)
                          ((longlong)local_280.CurrentBitIndex * 0x40 + *local_288);
                uVar22 = ::GetTypeHash(pFVar30);
                uVar22 = local_110 - 1 & uVar22;
                *(uint *)((longlong)&pFVar30[1].Node + 4) = uVar22;
                FVar32.Data = local_120;
                if (local_118.Data != (FScriptContainerElement *)0x0) {
                  FVar32.Data = local_118.Data;
                }
                lVar25 = (longlong)(int)(local_110 - 1 & uVar22);
                *(undefined4 *)&pFVar30[1].Node = *(undefined4 *)(FVar32.Data + lVar25 * 4);
                *(int *)(FVar32.Data + lVar25 * 4) = iVar12;
                local_280.UnvisitedBitMask = local_280.UnvisitedBitMask & ~local_280._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_280);
              } while (local_280.CurrentBitIndex < (local_280.Array)->NumBits);
            }
          }
        }
      }
LAB_14e1c9e86:
      FVar15 = local_1f8.ReferenceNesting.AllocatorInstance.SecondaryData;
      FVar31 = FVar5;
      if (local_300.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data);
      }
    }
    if (pUVar20 == (UOptimusNode *)0x0) {
LAB_14e1c9f82:
      pFVar24 = (pUVar20->Pins).AllocatorInstance.Data;
      iVar12 = (pUVar20->Pins).ArrayNum;
      if ((iVar12 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar16 = (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                   *)(*pcVar9)();
        return pTVar16;
      }
      pFVar4 = pFVar24 + (longlong)iVar12 * 8;
      for (; pFVar24 != pFVar4; pFVar24 = pFVar24 + 8) {
        local_2c8 = *(longlong *)pFVar24;
        if (*(char *)(local_2c8 + 0x29) == '\x01') {
          if (((local_300.Data <= (FScriptContainerElement *)&local_2c8) &&
              (local_2f8._4_4_ = (int)((ulonglong)local_2f8 >> 0x20),
              lVar25 = (longlong)local_2f8._4_4_,
              (FScriptContainerElement *)&local_2c8 < local_300.Data + lVar25 * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar16 = (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                       *)(*pcVar9)();
            return pTVar16;
          }
          if ((uint)local_2f8 == local_2f8._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_300,(int *)((longlong)&local_2f8 + 4));
            local_2f8 = CONCAT44(local_2f8._4_4_,iVar12);
          }
          lVar25 = (longlong)(int)(uint)local_2f8;
          local_2f8 = CONCAT44(local_2f8._4_4_,(uint)local_2f8 + 1);
          *(longlong *)(local_300.Data + lVar25 * 8) = local_2c8;
        }
      }
    }
    else {
      pUVar17 = Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister();
      plVar19 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar20,pUVar17);
      if (plVar19 == (longlong *)0x0) goto LAB_14e1c9f82;
      lVar25 = (**(code **)(*plVar19 + 0x20))(plVar19);
      iVar12 = *(int *)(lVar25 + 0xa8);
      pTVar7 = *(TObjectPtr<UOptimusNodePin> **)(lVar25 + 0xa0);
      if (iVar12 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                     *)(*pcVar9)();
          return pTVar16;
        }
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x9a9,L"Invalid range size: %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                     *)(*pcVar9)();
          return pTVar16;
        }
LAB_14e1c9f3e:
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar12,&local_300,(int *)&local_2f8,
                            (int *)((longlong)&local_2f8 + 4));
        ConstructItems<UOptimusNodePin_const_*,TObjectPtr<UOptimusNodePin>,int>
                  (local_300.Data + (longlong)iVar13 * 8,pTVar7,iVar12);
      }
      else if (iVar12 != 0) goto LAB_14e1c9f3e;
    }
    uVar28 = (ulonglong)(int)(uint)local_2f8;
    local_2f0 = (uint)local_2f8;
    local_25c._4_8_ = local_300.Data + uVar28 * 8;
    FVar32.Data = local_300.Data;
    while( true ) {
      uVar10 = local_25c._4_8_;
      local_2b0 = FVar32.Data;
      if ((uint)local_2f8 != (int)uVar28) {
        local_308 = 0;
        `TCheckedPointerIterator<UOptimusNodePin_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_308);
      }
      if (FVar32.Data == (FScriptContainerElement *)uVar10) break;
      pUVar8 = *(UOptimusNodePin **)FVar32.Data;
      pUVar20 = UOptimusNodePin::GetOwningNode(pUVar8);
      this_00 = (UOptimusNodeGraph *)pUVar20->_padding_;
      if (this_00 == (UOptimusNodeGraph *)0x0) {
LAB_14e1ca0f8:
        this_00 = (UOptimusNodeGraph *)0x0;
      }
      else {
        pUVar17 = StaticClass();
        iVar12 = (int)pUVar17->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar12) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar17->_padding_)) goto LAB_14e1ca0f8;
      }
      GetConnectedPinsWithRouting(this_00,&local_2c0,pUVar8,&local_1f8);
      uVar28 = (ulonglong)local_2c0.ArrayNum;
      local_304 = local_2c0.ArrayNum;
      pFVar35 = (FOptimusRoutedNodePin *)(local_2c0.AllocatorInstance.Data + uVar28 * 0x38);
      FVar32.Data = local_2c0.AllocatorInstance.Data;
      while( true ) {
        if (local_2c0.ArrayNum != (uint)uVar28) {
          local_307[0] = 0;
          `TCheckedPointerIterator<FOptimusRoutedNodePin,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_307);
        }
        if ((FOptimusRoutedNodePin *)FVar32.Data == pFVar35) break;
        pUVar8 = ((FOptimusRoutedNodePin *)FVar32.Data)->NodePin;
        if (((FOptimusRoutedNodePin *)FVar32.Data)->NodePin == (UOptimusNodePin *)0x0) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7701470802381638445>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                              ,0xb2d,"ConnectedPin.NodePin != nullptr");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            pTVar16 = (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                       *)(*pcVar9)();
            return pTVar16;
          }
        }
        else {
          while (pUVar33 = pUVar8, pUVar8 = (UOptimusNodePin *)pUVar33->_padding_,
                pUVar8 != (UOptimusNodePin *)0x0) {
            pUVar17 = UOptimusNodePin::StaticClass();
            iVar12 = (int)pUVar17->_padding_;
            if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar12) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
                &pUVar17->_padding_)) break;
          }
          pUVar20 = (UOptimusNode *)pUVar33->_padding_;
          if (pUVar20 == (UOptimusNode *)0x0) {
LAB_14e1ca1de:
            pUVar20 = (UOptimusNode *)0x0;
          }
          else {
            pUVar17 = UOptimusNode::StaticClass();
            iVar12 = (int)pUVar17->_padding_;
            if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar12) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
                &pUVar17->_padding_)) goto LAB_14e1ca1de;
          }
          FVar31 = (((FOptimusRoutedNodePin *)FVar32.Data)->TraversalContext).ReferenceNesting.
                   AllocatorInstance.SecondaryData;
          local_230.ReferenceNesting.ArrayNum =
               (((FOptimusRoutedNodePin *)FVar32.Data)->TraversalContext).ReferenceNesting.ArrayNum;
          lVar25 = (longlong)local_230.ReferenceNesting.ArrayNum;
          if (FVar31 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
            FVar31 = (ForElementType<IOptimusNodePinRouter_const_*>)
                     &((FOptimusRoutedNodePin *)FVar32.Data)->TraversalContext;
          }
          local_230.ReferenceNesting.AllocatorInstance.SecondaryData =
               (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
          local_238 = pUVar20;
          if (local_230.ReferenceNesting.ArrayNum == 0) {
            local_230.ReferenceNesting.ArrayMax = 4;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
                      (8,8,local_230.ReferenceNesting.ArrayNum,0,
                       (ForElementType<IOptimusNodePinRouter_const_*> *)&local_230,
                       local_230.ReferenceNesting.ArrayNum,&local_230.ReferenceNesting.ArrayMax);
            FVar15 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_230;
            if (local_230.ReferenceNesting.AllocatorInstance.SecondaryData !=
                (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              FVar15 = local_230.ReferenceNesting.AllocatorInstance.SecondaryData;
            }
            memcpy((void *)FVar15,(void *)FVar31,lVar25 << 3);
          }
          uVar22 = ((uint)((ulonglong)local_238 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_238 >> 4)) * -0x7a143595;
          uVar23 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
          uVar23 = uVar23 >> 0x10 ^ uVar23;
          uVar22 = ::GetTypeHash(&local_230);
          uVar10 = local_108._0_8_;
          iVar12 = local_230.ReferenceNesting.ArrayNum;
          FVar31 = local_230.ReferenceNesting.AllocatorInstance.SecondaryData;
          pUVar20 = local_238;
          if (local_108._8_4_ != local_d4) {
            FVar29 = (ForElementType<FSetElementId>)local_d0;
            if (local_c8 != (ForElementType<FSetElementId>)0x0) {
              FVar29 = local_c8;
            }
            for (iVar13 = *(int *)((longlong)FVar29 +
                                  (ulonglong)
                                  (local_c0 - 1U &
                                  (uVar23 * 0x40 + (uVar23 >> 2) + uVar22 + 0x9e3779b9 ^ uVar23)) *
                                  4); iVar13 != -1;
                iVar13 = *(int *)(uVar10 + (longlong)iVar13 * 0x40 + 0x38)) {
              if (*(UOptimusNode **)(uVar10 + (longlong)iVar13 * 0x40) == pUVar20) {
                pFVar24 = (FScriptContainerElement *)(uVar10 + (longlong)iVar13 * 0x40 + 8);
                iVar14 = *(int *)(pFVar24 + 0x28);
                if (iVar14 == iVar12) {
                  FVar15 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_230;
                  if (FVar31 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                    FVar15 = FVar31;
                  }
                  if (*(FScriptContainerElement **)(pFVar24 + 0x20) !=
                      (FScriptContainerElement *)0x0) {
                    pFVar24 = *(FScriptContainerElement **)(pFVar24 + 0x20);
                  }
                  if ((iVar14 == 0) ||
                     (iVar14 = memcmp(pFVar24,(void *)FVar15,(longlong)iVar14 << 3), iVar14 == 0)) {
                    if (iVar13 != -1) goto LAB_14e1ca3b5;
                    break;
                  }
                }
              }
            }
          }
          TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
          ::Emplace<FOptimusRoutedConstNode_const_&>
                    ((TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                      *)local_108,(FOptimusRoutedConstNode *)local_25c,(bool *)&local_238);
          FVar15 = (ForElementType<IOptimusNodePinRouter_const_*>)::operator_new(0x40);
          FVar31 = local_230.ReferenceNesting.AllocatorInstance.SecondaryData;
          if (FVar15 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
            *(undefined8 *)FVar15 = 0;
            ((FOptimusRoutedConstNode *)((longlong)FVar15 + 8))->Node = local_238;
            FOptimusPinTraversalContext::FOptimusPinTraversalContext
                      ((FOptimusPinTraversalContext *)((longlong)FVar15 + 0x10),&local_230);
            *(ForElementType<IOptimusNodePinRouter_const_*> *)local_2e8.Head = FVar15;
            FVar31 = local_230.ReferenceNesting.AllocatorInstance.SecondaryData;
            local_2e8.Head = (TNode *)FVar15;
          }
LAB_14e1ca3b5:
          if (FVar31 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
            FMemory::Free((void *)FVar31);
          }
        }
        uVar28 = (ulonglong)local_304;
        FVar32.Data = FVar32.Data + 0x38;
      }
      DestructItems<FOptimusRoutedNodePin,int>
                ((FOptimusRoutedNodePin *)local_2c0.AllocatorInstance.Data,local_2c0.ArrayNum);
      if ((FOptimusRoutedNodePin *)local_2c0.AllocatorInstance.Data != (FOptimusRoutedNodePin *)0x0)
      {
        FMemory::Free(local_2c0.AllocatorInstance.Data);
      }
      uVar28 = (ulonglong)local_2f0;
      FVar32.Data = local_2b0 + 8;
    }
    FVar31 = (ForElementType<IOptimusNodePinRouter_const_*>)local_2e8.Tail;
    FVar15 = local_1f8.ReferenceNesting.AllocatorInstance.SecondaryData;
    if (local_300.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data);
      FVar31 = (ForElementType<IOptimusNodePinRouter_const_*>)local_2e8.Tail;
      FVar15 = local_1f8.ReferenceNesting.AllocatorInstance.SecondaryData;
    }
  } while( true );
}

// GetNodeCounterpart @ 14e1caec0

UOptimusNode * __thiscall
UOptimusNodeGraph::GetNodeCounterpart(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  UOptimusNode *pUVar1;
  UOptimusNodePair *pUVar2;
  UOptimusNode *pUVar3;
  UOptimusNode *pUVar4;
  bool bVar5;
  
  pUVar2 = GetNodePair(this,param_1);
  if (pUVar2 == (UOptimusNodePair *)0x0) {
    return (UOptimusNode *)0x0;
  }
  pUVar1 = (pUVar2->First).field0_0x0.DebugPtr;
  if (pUVar1 == (UOptimusNode *)0x0) {
    bVar5 = param_1 == (UOptimusNode *)0x0;
  }
  else {
    bVar5 = pUVar1 == param_1;
  }
  if (bVar5) {
    return (pUVar2->Second).field0_0x0.DebugPtr;
  }
  pUVar3 = (pUVar2->Second).field0_0x0.DebugPtr;
  if (pUVar3 == (UOptimusNode *)0x0) {
    pUVar3 = (UOptimusNode *)0x0;
    if (param_1 == (UOptimusNode *)0x0) {
      pUVar3 = pUVar1;
    }
    return pUVar3;
  }
  pUVar4 = (UOptimusNode *)0x0;
  if (pUVar3 == param_1) {
    pUVar4 = pUVar1;
  }
  return pUVar4;
}

// GetNodePair @ 14e1cb000

UOptimusNodePair * __thiscall
UOptimusNodeGraph::GetNodePair(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  UOptimusNode *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UOptimusNodePair *pUVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->NodePairs).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->NodePairs).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UOptimusNodePair *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UOptimusNodePair **)((this->NodePairs).AllocatorInstance.Data + lVar7);
      pUVar1 = (pUVar5->First).field0_0x0.DebugPtr;
      if (pUVar1 == (UOptimusNode *)0x0) {
        bVar3 = param_1 == (UOptimusNode *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_1;
      }
      if (bVar3) {
        return pUVar5;
      }
      pUVar1 = (pUVar5->Second).field0_0x0.DebugPtr;
      if (pUVar1 == (UOptimusNode *)0x0) {
        bVar3 = param_1 == (UOptimusNode *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_1;
      }
      if (bVar3) {
        return pUVar5;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->NodePairs).ArrayNum);
  }
  return (UOptimusNodePair *)0x0;
}

// GetNotifyDelegate @ 14e1cb8c0

TMulticastDelegate<void___cdecl(EOptimusGraphNotifyType,UOptimusNodeGraph_*,UObject_*),FDefaultDelegateUserPolicy>
* __thiscall UOptimusNodeGraph::GetNotifyDelegate(UOptimusNodeGraph *this)

{
  return &this->GraphNotifyDelegate;
}

// GetParentGraph @ 14e1cc270

UOptimusNodeGraph * __thiscall UOptimusNodeGraph::GetParentGraph(UOptimusNodeGraph *this)

{
  int iVar1;
  UOptimusNodeGraph *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UOptimusNodeGraph *)this->_padding_;
  if (pUVar2 != (UOptimusNodeGraph *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UOptimusNodeGraph *)0x0;
}

// GetPathResolver @ 14e1cc360

IOptimusPathResolver * __thiscall UOptimusNodeGraph::GetPathResolver(UOptimusNodeGraph *this)

{
  longlong *plVar1;
  UObjectBaseUtility *this_00;
  UClass *pUVar2;
  IOptimusPathResolver *pIVar3;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (plVar1 != (longlong *)0x0) {
    this_00 = (UObjectBaseUtility *)(**(code **)(*plVar1 + 8))(plVar1);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar2 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
      pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
      return pIVar3;
    }
  }
  return (IOptimusPathResolver *)0x0;
}

// GetPinLinks @ 14e1d34c0

TArray<UOptimusNodeLink_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodeGraph::GetPinLinks
          (UOptimusNodeGraph *this,
          TArray<UOptimusNodeLink_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusNodePin *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<UOptimusNodeLink_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  longlong local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetAllLinkIndexesToPin(this,&local_40,param_1);
  iVar5 = local_40.ArrayNum;
  pFVar1 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 4;
  FVar10.Data = local_40.AllocatorInstance.Data;
  while( true ) {
    if (local_40.ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar10.Data == pFVar1) break;
    uVar2 = *(uint *)FVar10.Data;
    uVar7 = 0;
    if ((int)uVar2 < (this->Links).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<UOptimusNodeLink_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
    }
    local_48 = *(longlong *)((this->Links).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
    if ((*(UOptimusNodePin **)(local_48 + 0x30) == param_1) ||
       (*(UOptimusNodePin **)(local_48 + 0x28) == param_1)) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UOptimusNodeLink_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_48;
    }
    FVar10.Data = FVar10.Data + 4;
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d6ae0

UClass * __cdecl UOptimusNodeGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeGraph",
               &Z_Registration_Info_UClass_UOptimusNodeGraph.InnerSingleton,
               StaticRegisterNativesUOptimusNodeGraph,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNodeGraph>,
               InternalVTableHelperCtorCaller<UOptimusNodeGraph>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeGraph.InnerSingleton;
}

// GlobalNotify @ 14e1e99b0

void __thiscall
UOptimusNodeGraph::GlobalNotify
          (UOptimusNodeGraph *this,EOptimusGlobalNotifyType param_1,UObject *param_2)

{
  int iVar1;
  longlong *plVar2;
  UOptimusDeformer *this_00;
  UClass *pUVar3;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if ((plVar2 != (longlong *)0x0) &&
     (this_00 = (UOptimusDeformer *)(**(code **)(*plVar2 + 8))(plVar2),
     this_00 != (UOptimusDeformer *)0x0)) {
    pUVar3 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      UOptimusDeformer::Notify(this_00,param_1,param_2);
    }
  }
  return;
}

// IsCustomKernel @ 14e1eec20

bool __thiscall UOptimusNodeGraph::IsCustomKernel(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar2 = UOptimusNode_CustomComputeKernel::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14e1eec53;
  }
  param_1 = (UOptimusNode *)0x0;
LAB_14e1eec53:
  return param_1 != (UOptimusNode *)0x0;
}

// IsFunctionReference @ 14e1ef000

bool __thiscall
UOptimusNodeGraph::IsFunctionReference(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar2 = UOptimusNode_FunctionReference::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14e1ef033;
  }
  param_1 = (UOptimusNode *)0x0;
LAB_14e1ef033:
  return param_1 != (UOptimusNode *)0x0;
}

// IsKernelFunction @ 14e1ef070

bool __thiscall UOptimusNodeGraph::IsKernelFunction(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar2 = UOptimusNode_ComputeKernelFunction::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14e1ef0a3;
  }
  param_1 = (UOptimusNode *)0x0;
LAB_14e1ef0a3:
  return param_1 != (UOptimusNode *)0x0;
}

// IsPinMutable @ 14e1ef130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UOptimusNodeGraph::IsPinMutable
          (UOptimusNodeGraph *this,UOptimusNodePin *param_1,FOptimusPinTraversalContext *param_2)

{
  FOptimusPinTraversalContext *pFVar1;
  int iVar2;
  UOptimusNodePin *pUVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ForElementType<IOptimusNodePinRouter_const_*> FVar12;
  UOptimusNode_LoopTerminal *pUVar13;
  UClass *pUVar14;
  longlong *plVar15;
  UOptimusNode *pUVar16;
  ForElementType<IOptimusNodePinRouter_const_*> FVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  void *pvVar22;
  ForElementType<IOptimusNodePinRouter_const_*> FVar23;
  ForElementType<FSetElementId> FVar24;
  UOptimusNodeGraph *this_00;
  longlong lVar25;
  ForAnyElementType FVar26;
  FOptimusRoutedNodePin *pFVar27;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298;
  undefined1 local_297;
  undefined2 local_296 [3];
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_290;
  ForElementType<IOptimusNodePinRouter_const_*> local_280;
  uint local_278;
  uint local_274;
  UOptimusNodePin *local_270;
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_268;
  ForElementType<IOptimusNodePinRouter_const_*> local_258;
  FScriptContainerElement *local_248;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_240;
  undefined1 local_230 [8];
  FScriptContainerElement *local_228;
  UOptimusNode_LoopTerminal *local_220;
  UOptimusNodePin *local_218;
  FOptimusPinTraversalContext local_210;
  UOptimusNodePin *local_1e0;
  undefined1 local_1d8 [32];
  ForElementType<IOptimusNodePinRouter_const_*> local_1b8;
  int local_1b0;
  int local_1ac;
  UOptimusNodePin *local_1a8;
  FOptimusPinTraversalContext local_1a0;
  UOptimusNodePin *local_170;
  FOptimusPinTraversalContext local_168;
  UOptimusNodePin *local_138;
  FOptimusPinTraversalContext local_130;
  FOptimusPinTraversalContext local_100;
  TSet<FOptimusRoutedConstNodePin,DefaultKeyFuncs<FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
  local_c8;
  undefined8 local_78;
  FOptimusPinTraversalContext local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  FVar12 = (ForElementType<IOptimusNodePinRouter_const_*>)::operator_new(0x40);
  FVar17 = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  if (FVar12 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    *(undefined8 *)FVar12 = 0;
    *(undefined8 *)((longlong)FVar12 + 8) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x10) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x18) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x20) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x28) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x30) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x38) = 0;
    *(undefined8 *)FVar12 = 0;
    *(undefined8 *)((longlong)FVar12 + 8) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x30) = 0;
    *(undefined4 *)((longlong)FVar12 + 0x38) = 0;
    *(undefined4 *)((longlong)FVar12 + 0x3c) = 4;
    FVar17 = FVar12;
  }
  local_100.ReferenceNesting.AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_100.ReferenceNesting.ArrayNum = 0;
  local_100.ReferenceNesting.ArrayMax = 4;
  local_258 = FVar17;
  if (param_1->Direction == Input) {
    GetConnectedPinsWithRouting(this,&local_290,param_1,param_2);
    if (local_290.ArrayNum == 0) {
      DestructItems<FOptimusRoutedNodePin,int>
                ((FOptimusRoutedNodePin *)local_290.AllocatorInstance.Data,0);
      if ((FOptimusRoutedNodePin *)local_290.AllocatorInstance.Data != (FOptimusRoutedNodePin *)0x0)
      {
        FMemory::Free(local_290.AllocatorInstance.Data);
      }
      bVar7 = false;
      goto LAB_14e1efcf1;
    }
    if ((local_290.ArrayNum != 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RoutedPins.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                           ,0xa91,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    if ((local_290.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    param_1 = *(UOptimusNodePin **)local_290.AllocatorInstance.Data;
    if ((local_290.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    FOptimusPinTraversalContext::operator=
              (&local_100,(FOptimusPinTraversalContext *)(local_290.AllocatorInstance.Data + 8));
    DestructItems<FOptimusRoutedNodePin,int>
              ((FOptimusRoutedNodePin *)local_290.AllocatorInstance.Data,local_290.ArrayNum);
    if ((FOptimusRoutedNodePin *)local_290.AllocatorInstance.Data != (FOptimusRoutedNodePin *)0x0) {
      FMemory::Free(local_290.AllocatorInstance.Data);
    }
  }
  else if (&local_100 != param_2) {
    iVar9 = (param_2->ReferenceNesting).ArrayNum;
    FVar12 = (param_2->ReferenceNesting).AllocatorInstance.SecondaryData;
    if (FVar12 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      param_2 = (FOptimusPinTraversalContext *)FVar12;
    }
    local_100.ReferenceNesting.ArrayNum = iVar9;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
              (8,8,iVar9,4,(ForElementType<IOptimusNodePinRouter_const_*> *)&local_100,iVar9,
               &local_100.ReferenceNesting.ArrayMax);
    FVar12 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_100;
    if (local_100.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FVar12 = local_100.ReferenceNesting.AllocatorInstance.SecondaryData;
    }
    if (iVar9 != 0) {
      memcpy((void *)FVar12,param_2,(longlong)iVar9 << 3);
    }
  }
  iVar9 = local_100.ReferenceNesting.ArrayNum;
  FVar12 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_100;
  if (local_100.ReferenceNesting.AllocatorInstance.SecondaryData !=
      (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FVar12 = local_100.ReferenceNesting.AllocatorInstance.SecondaryData;
  }
  local_1b8 = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_1e0 = param_1;
  local_1b0 = local_100.ReferenceNesting.ArrayNum;
  if (local_100.ReferenceNesting.ArrayNum == 0) {
    local_1ac = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
              (8,8,local_100.ReferenceNesting.ArrayNum,0,
               (ForElementType<IOptimusNodePinRouter_const_*> *)local_1d8,
               local_100.ReferenceNesting.ArrayNum,&local_1ac);
    FVar23 = (ForElementType<IOptimusNodePinRouter_const_*>)local_1d8;
    if (local_1b8 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FVar23 = local_1b8;
    }
    memcpy((void *)FVar23,(void *)FVar12,(longlong)iVar9 << 3);
  }
  FVar12 = (ForElementType<IOptimusNodePinRouter_const_*>)::operator_new(0x40);
  if (FVar12 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    *(undefined8 *)FVar12 = 0;
    *(UOptimusNodePin **)((longlong)FVar12 + 8) = local_1e0;
    *(undefined8 *)((longlong)FVar12 + 0x30) = 0;
    if (local_1b8 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      memmove((undefined8 *)((longlong)FVar12 + 0x10),local_1d8,0x20);
    }
    if (*(void **)((longlong)FVar12 + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)FVar12 + 0x30));
    }
    *(ForElementType<IOptimusNodePinRouter_const_*> *)((longlong)FVar12 + 0x30) = local_1b8;
    local_1b8 = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    *(int *)((longlong)FVar12 + 0x38) = local_1b0;
    *(int *)((longlong)FVar12 + 0x3c) = local_1ac;
    local_1b0 = 0;
    local_1ac = 4;
    *(ForElementType<IOptimusNodePinRouter_const_*> *)local_258 = FVar12;
    local_258 = FVar12;
  }
  if (local_1b8 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)local_1b8);
  }
  local_1a8 = (UOptimusNodePin *)0x0;
  local_1a0.ReferenceNesting.AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_1a0.ReferenceNesting.ArrayNum = 0;
  local_1a0.ReferenceNesting.ArrayMax = 4;
  FVar12 = (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  do {
    while( true ) {
      FVar23 = *(ForElementType<IOptimusNodePinRouter_const_*> *)FVar17;
      if (FVar23 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
        bVar7 = false;
        goto LAB_14e1efcdc;
      }
      pUVar3 = *(UOptimusNodePin **)((longlong)FVar23 + 8);
      pFVar1 = (FOptimusPinTraversalContext *)((longlong)FVar23 + 0x10);
      local_270 = pUVar3;
      local_1a8 = pUVar3;
      if (&local_1a0 != pFVar1) {
        if (*(undefined8 *)((longlong)FVar23 + 0x30) == 0) {
          local_1a0.ReferenceNesting.AllocatorInstance.InlineData._0_8_ =
               *(undefined8 *)&pFVar1->ReferenceNesting;
          local_1a0.ReferenceNesting.AllocatorInstance.InlineData._8_8_ =
               *(undefined8 *)((longlong)FVar23 + 0x18);
          local_1a0.ReferenceNesting.AllocatorInstance.InlineData._16_8_ =
               *(undefined8 *)((longlong)FVar23 + 0x20);
          local_1a0.ReferenceNesting.AllocatorInstance.InlineData._24_8_ =
               *(undefined8 *)((longlong)FVar23 + 0x28);
        }
        if (FVar12 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)FVar12);
        }
        FVar12 = *(ForElementType<IOptimusNodePinRouter_const_*> *)((longlong)FVar23 + 0x30);
        *(undefined8 *)((longlong)FVar23 + 0x30) = 0;
        local_1a0.ReferenceNesting.ArrayNum = *(int *)((longlong)FVar23 + 0x38);
        local_1a0.ReferenceNesting.ArrayMax = *(int *)((longlong)FVar23 + 0x3c);
        *(undefined4 *)((longlong)FVar23 + 0x3c) = 4;
        *(undefined4 *)((longlong)FVar23 + 0x38) = 0;
        local_1a0.ReferenceNesting.AllocatorInstance.SecondaryData = FVar12;
      }
      local_78 = 0;
      local_70.ReferenceNesting.AllocatorInstance.SecondaryData =
           (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
      local_70.ReferenceNesting.ArrayNum = 0;
      local_70.ReferenceNesting.ArrayMax = 4;
      *(undefined8 *)((longlong)FVar23 + 8) = 0;
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[1] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[2] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[3] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[4] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[5] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[6] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[7] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[8] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[9] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[10] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xb] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xc] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xd] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xe] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0xf] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x10] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x11] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x12] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x13] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x14] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x15] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x16] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x17] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x18] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x19] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1a] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1b] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1c] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1d] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1e] = '\0';
      local_70.ReferenceNesting.AllocatorInstance.InlineData[0x1f] = '\0';
      local_280 = FVar23;
      if (pFVar1 != &local_70) {
        *(undefined8 *)&pFVar1->ReferenceNesting = 0;
        *(undefined8 *)((longlong)FVar23 + 0x18) = 0;
        *(undefined8 *)((longlong)FVar23 + 0x20) = 0;
        *(undefined8 *)((longlong)FVar23 + 0x28) = 0;
        if (*(void **)((longlong)FVar23 + 0x30) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)FVar23 + 0x30));
        }
        *(undefined8 *)((longlong)FVar23 + 0x30) = 0;
        *(undefined4 *)((longlong)FVar23 + 0x38) = 0;
        *(undefined4 *)((longlong)FVar23 + 0x3c) = 4;
      }
      if (FVar17 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
        if (*(void **)((longlong)FVar17 + 0x30) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)FVar17 + 0x30));
        }
        ::operator_delete((void *)FVar17,0x40);
      }
      pUVar13 = (UOptimusNode_LoopTerminal *)UOptimusNodePin::GetOwningNode(pUVar3);
      local_220 = pUVar13;
      if (pUVar13 != (UOptimusNode_LoopTerminal *)0x0) break;
LAB_14e1ef62f:
      UOptimusNode::GetPinsByDirection((UOptimusNode *)pUVar13,&local_240,Input,true);
      uVar20 = (ulonglong)local_240.ArrayNum;
      local_274 = local_240.ArrayNum;
      local_228 = local_240.AllocatorInstance.Data + uVar20 * 8;
      uVar21 = uVar20;
      FVar26.Data = local_240.AllocatorInstance.Data;
      while( true ) {
        pFVar5 = local_228;
        local_248 = FVar26.Data;
        if ((int)uVar20 != (int)uVar21) {
          local_298 = 0;
          `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_298);
        }
        if (FVar26.Data == pFVar5) break;
        pUVar3 = *(UOptimusNodePin **)FVar26.Data;
        pUVar16 = UOptimusNodePin::GetOwningNode(pUVar3);
        this_00 = (UOptimusNodeGraph *)pUVar16->_padding_;
        if (this_00 == (UOptimusNodeGraph *)0x0) {
LAB_14e1ef6b0:
          this_00 = (UOptimusNodeGraph *)0x0;
        }
        else {
          pUVar14 = StaticClass();
          iVar9 = (int)pUVar14->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar14->_padding_)) goto LAB_14e1ef6b0;
        }
        GetConnectedPinsWithRouting(this_00,&local_268,pUVar3,&local_1a0);
        uVar21 = (ulonglong)local_268.ArrayNum;
        local_278 = local_268.ArrayNum;
        pFVar27 = (FOptimusRoutedNodePin *)(local_268.AllocatorInstance.Data + uVar21 * 0x38);
        FVar26.Data = local_268.AllocatorInstance.Data;
        while( true ) {
          if (local_268.ArrayNum != (uint)uVar21) {
            local_297 = 0;
            `TCheckedPointerIterator<FOptimusRoutedNodePin,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_297);
          }
          if ((FOptimusRoutedNodePin *)FVar26.Data == pFVar27) break;
          pUVar3 = ((FOptimusRoutedNodePin *)FVar26.Data)->NodePin;
          if (pUVar3 == (UOptimusNodePin *)0x0) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7701470802381638330>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                               ,0xaba,"ConnectedPin.NodePin != nullptr");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
          }
          else {
            FVar17 = (((FOptimusRoutedNodePin *)FVar26.Data)->TraversalContext).ReferenceNesting.
                     AllocatorInstance.SecondaryData;
            local_210.ReferenceNesting.ArrayNum =
                 (((FOptimusRoutedNodePin *)FVar26.Data)->TraversalContext).ReferenceNesting.
                 ArrayNum;
            lVar25 = (longlong)local_210.ReferenceNesting.ArrayNum;
            if (FVar17 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              FVar17 = (ForElementType<IOptimusNodePinRouter_const_*>)
                       &((FOptimusRoutedNodePin *)FVar26.Data)->TraversalContext;
            }
            local_210.ReferenceNesting.AllocatorInstance.SecondaryData =
                 (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
            local_218 = pUVar3;
            if (local_210.ReferenceNesting.ArrayNum == 0) {
              local_210.ReferenceNesting.ArrayMax = 4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
                        (8,8,local_210.ReferenceNesting.ArrayNum,0,
                         (ForElementType<IOptimusNodePinRouter_const_*> *)&local_210,
                         local_210.ReferenceNesting.ArrayNum,&local_210.ReferenceNesting.ArrayMax);
              FVar12 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_210;
              if (local_210.ReferenceNesting.AllocatorInstance.SecondaryData !=
                  (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                FVar12 = local_210.ReferenceNesting.AllocatorInstance.SecondaryData;
              }
              memcpy((void *)FVar12,(void *)FVar17,lVar25 << 3);
            }
            uVar18 = ((uint)((ulonglong)local_218 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_218 >> 4)) * -0x7a143595;
            uVar19 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
            uVar19 = uVar19 >> 0x10 ^ uVar19;
            uVar18 = ::GetTypeHash(&local_210);
            uVar6 = local_c8.Elements._0_8_;
            iVar9 = local_210.ReferenceNesting.ArrayNum;
            FVar17 = local_210.ReferenceNesting.AllocatorInstance.SecondaryData;
            pUVar3 = local_218;
            if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
              FVar24 = (ForElementType<FSetElementId>)&local_c8.Hash;
              if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar24 = local_c8.Hash.SecondaryData;
              }
              for (iVar2 = *(int *)((longlong)FVar24 +
                                   (ulonglong)
                                   (local_c8.HashSize - 1U &
                                   (uVar19 * 0x40 + (uVar19 >> 2) + uVar18 + 0x9e3779b9 ^ uVar19)) *
                                   4); iVar2 != -1;
                  iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + uVar6)) {
                if (*(UOptimusNodePin **)((longlong)iVar2 * 0x40 + uVar6) == pUVar3) {
                  pvVar22 = (void *)(uVar6 + 8 + (longlong)iVar2 * 0x40);
                  iVar10 = *(int *)((longlong)pvVar22 + 0x28);
                  if (iVar10 == iVar9) {
                    FVar12 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_210;
                    if (FVar17 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                      FVar12 = FVar17;
                    }
                    if (*(void **)((longlong)pvVar22 + 0x20) != (void *)0x0) {
                      pvVar22 = *(void **)((longlong)pvVar22 + 0x20);
                    }
                    if ((iVar10 == 0) ||
                       (iVar10 = memcmp(pvVar22,(void *)FVar12,(longlong)iVar10 << 3), iVar10 == 0))
                    {
                      if (iVar2 != -1) goto LAB_14e1ef913;
                      break;
                    }
                  }
                }
              }
            }
            TSet<FOptimusRoutedConstNodePin,DefaultKeyFuncs<FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
            ::Emplace<FOptimusRoutedConstNodePin_const_&>
                      (&local_c8,(FOptimusRoutedConstNodePin *)local_230,(bool *)&local_218);
            FVar12 = (ForElementType<IOptimusNodePinRouter_const_*>)::operator_new(0x40);
            FVar17 = local_210.ReferenceNesting.AllocatorInstance.SecondaryData;
            if (FVar12 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              *(undefined8 *)FVar12 = 0;
              *(UOptimusNodePin **)((longlong)FVar12 + 8) = local_218;
              FOptimusPinTraversalContext::FOptimusPinTraversalContext
                        ((FOptimusPinTraversalContext *)((longlong)FVar12 + 0x10),&local_210);
              *(ForElementType<IOptimusNodePinRouter_const_*> *)local_258 = FVar12;
              FVar17 = local_210.ReferenceNesting.AllocatorInstance.SecondaryData;
              local_258 = FVar12;
            }
LAB_14e1ef913:
            if (FVar17 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              FMemory::Free((void *)FVar17);
            }
          }
          uVar21 = (ulonglong)local_278;
          FVar26.Data = FVar26.Data + 0x38;
        }
        DestructItems<FOptimusRoutedNodePin,int>
                  ((FOptimusRoutedNodePin *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
        if ((FOptimusRoutedNodePin *)local_268.AllocatorInstance.Data !=
            (FOptimusRoutedNodePin *)0x0) {
          FMemory::Free(local_268.AllocatorInstance.Data);
        }
        uVar20 = (ulonglong)(uint)local_240.ArrayNum;
        FVar26.Data = local_248 + 8;
        uVar21 = (ulonglong)local_274;
      }
      if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.AllocatorInstance.Data);
      }
      pUVar13 = local_220;
      FVar17 = local_280;
      FVar12 = local_1a0.ReferenceNesting.AllocatorInstance.SecondaryData;
      if (local_220 != (UOptimusNode_LoopTerminal *)0x0) {
        pUVar14 = UOptimusNode_LoopTerminal::StaticClass();
        iVar9 = (int)pUVar14->_padding_;
        FVar17 = local_280;
        FVar12 = local_1a0.ReferenceNesting.AllocatorInstance.SecondaryData;
        if (((iVar9 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
             &pUVar14->_padding_)) && (pUVar13->TerminalType == Entry)) {
          if (((local_270->DataDomain).Type == Dimensional) &&
             ((local_270->DataDomain).DimensionNames.ArrayNum == 0)) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7701470802381638345>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                               ,0xac9,"!NodePin->GetDataDomain().IsSingleton()");
            FVar17 = local_280;
            FVar12 = local_1a0.ReferenceNesting.AllocatorInstance.SecondaryData;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
          }
          else {
            local_296[0] = 0x102;
            local_270 = UOptimusNode_LoopTerminal::GetPinCounterpart
                                  (pUVar13,local_270,Return,SUB82(local_296,0));
            iVar9 = local_1a0.ReferenceNesting.ArrayNum;
            FVar12 = local_1a0.ReferenceNesting.AllocatorInstance.SecondaryData;
            lVar25 = (longlong)local_1a0.ReferenceNesting.ArrayNum;
            FVar17 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_1a0;
            if (local_1a0.ReferenceNesting.AllocatorInstance.SecondaryData !=
                (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              FVar17 = local_1a0.ReferenceNesting.AllocatorInstance.SecondaryData;
            }
            local_168.ReferenceNesting.AllocatorInstance.SecondaryData =
                 (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
            local_168.ReferenceNesting.ArrayNum = local_1a0.ReferenceNesting.ArrayNum;
            local_170 = local_270;
            if (local_1a0.ReferenceNesting.ArrayNum == 0) {
              local_168.ReferenceNesting.ArrayMax = 4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
                        (8,8,local_1a0.ReferenceNesting.ArrayNum,0,
                         (ForElementType<IOptimusNodePinRouter_const_*> *)&local_168,
                         local_1a0.ReferenceNesting.ArrayNum,&local_168.ReferenceNesting.ArrayMax);
              FVar23 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_168;
              if (local_168.ReferenceNesting.AllocatorInstance.SecondaryData !=
                  (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                FVar23 = local_168.ReferenceNesting.AllocatorInstance.SecondaryData;
              }
              memcpy((void *)FVar23,(void *)FVar17,lVar25 << 3);
            }
            uVar18 = ((uint)((ulonglong)local_170 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_170 >> 4)) * -0x7a143595;
            uVar19 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
            uVar19 = uVar19 >> 0x10 ^ uVar19;
            uVar18 = ::GetTypeHash(&local_168);
            uVar6 = local_c8.Elements._0_8_;
            iVar2 = local_168.ReferenceNesting.ArrayNum;
            FVar23 = local_168.ReferenceNesting.AllocatorInstance.SecondaryData;
            pUVar3 = local_170;
            if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
              FVar24 = (ForElementType<FSetElementId>)&local_c8.Hash;
              if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar24 = local_c8.Hash.SecondaryData;
              }
              for (iVar10 = *(int *)((longlong)FVar24 +
                                    (ulonglong)
                                    (local_c8.HashSize - 1U &
                                    (uVar19 * 0x40 + (uVar19 >> 2) + uVar18 + 0x9e3779b9 ^ uVar19))
                                    * 4); iVar10 != -1;
                  iVar10 = *(int *)((longlong)iVar10 * 0x40 + 0x38 + uVar6)) {
                if (*(UOptimusNodePin **)((longlong)iVar10 * 0x40 + uVar6) == pUVar3) {
                  pvVar22 = (void *)(uVar6 + 8 + (longlong)iVar10 * 0x40);
                  iVar11 = *(int *)((longlong)pvVar22 + 0x28);
                  if (iVar11 == iVar2) {
                    FVar17 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_168;
                    if (FVar23 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                      FVar17 = FVar23;
                    }
                    if (*(void **)((longlong)pvVar22 + 0x20) != (void *)0x0) {
                      pvVar22 = *(void **)((longlong)pvVar22 + 0x20);
                    }
                    if ((iVar11 == 0) ||
                       (iVar11 = memcmp(pvVar22,(void *)FVar17,(longlong)iVar11 << 3), iVar11 == 0))
                    {
                      if (iVar10 != -1) goto LAB_14e1efcbe;
                      break;
                    }
                  }
                }
              }
            }
            TSet<FOptimusRoutedConstNodePin,DefaultKeyFuncs<FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
            ::Emplace<FOptimusRoutedConstNodePin_const_&>
                      (&local_c8,(FOptimusRoutedConstNodePin *)(local_230 + 4),(bool *)&local_170);
            local_138 = local_270;
            local_130.ReferenceNesting.AllocatorInstance.SecondaryData =
                 (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
            FVar17 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_1a0;
            if (FVar12 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              FVar17 = FVar12;
            }
            local_130.ReferenceNesting.ArrayNum = iVar9;
            if (iVar9 == 0) {
              local_130.ReferenceNesting.ArrayMax = 4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
                        (8,8,iVar9,0,(ForElementType<IOptimusNodePinRouter_const_*> *)&local_130,
                         iVar9,&local_130.ReferenceNesting.ArrayMax);
              FVar23 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_130;
              if (local_130.ReferenceNesting.AllocatorInstance.SecondaryData !=
                  (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                FVar23 = local_130.ReferenceNesting.AllocatorInstance.SecondaryData;
              }
              memcpy((void *)FVar23,(void *)FVar17,lVar25 << 3);
            }
            FVar17 = (ForElementType<IOptimusNodePinRouter_const_*>)::operator_new(0x40);
            if (FVar17 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              *(undefined8 *)FVar17 = 0;
              *(UOptimusNodePin **)((longlong)FVar17 + 8) = local_138;
              FOptimusPinTraversalContext::FOptimusPinTraversalContext
                        ((FOptimusPinTraversalContext *)((longlong)FVar17 + 0x10),&local_130);
              *(ForElementType<IOptimusNodePinRouter_const_*> *)local_258 = FVar17;
              local_258 = FVar17;
            }
            FVar23 = local_168.ReferenceNesting.AllocatorInstance.SecondaryData;
            if (local_130.ReferenceNesting.AllocatorInstance.SecondaryData !=
                (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              FMemory::Free((void *)local_130.ReferenceNesting.AllocatorInstance.SecondaryData);
              FVar23 = local_168.ReferenceNesting.AllocatorInstance.SecondaryData;
            }
LAB_14e1efcbe:
            FVar17 = local_280;
            if (FVar23 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              FMemory::Free((void *)FVar23);
            }
          }
        }
      }
    }
    pUVar14 = UOptimusPinMutabilityDefiner::GetPrivateStaticClass();
    plVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar13,pUVar14);
    if ((plVar15 == (longlong *)0x0) ||
       (iVar9 = (**(code **)(*plVar15 + 0x10))(plVar15,pUVar3), iVar9 == 0)) goto LAB_14e1ef62f;
    FVar17 = FVar23;
  } while (iVar9 != 2);
  bVar7 = true;
LAB_14e1efcdc:
  if (FVar12 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_14e1efcf1:
  if (local_100.ReferenceNesting.AllocatorInstance.SecondaryData !=
      (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)local_100.ReferenceNesting.AllocatorInstance.SecondaryData);
  }
  while (FVar12 = FVar17, FVar12 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FVar17 = *(ForElementType<IOptimusNodePinRouter_const_*> *)FVar12;
    if (FVar12 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      if (*(void **)((longlong)FVar12 + 0x30) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)FVar12 + 0x30));
      }
      ::operator_delete((void *)FVar12,0x40);
    }
  }
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FOptimusRoutedConstNodePin>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FOptimusRoutedConstNodePin>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  return bVar7;
}

// IsReadOnly @ 14e1efdf0

bool __thiscall UOptimusNodeGraph::IsReadOnly(UOptimusNodeGraph *this)

{
  EOptimusNodeGraphType EVar1;
  int iVar2;
  longlong *plVar3;
  UClass *pUVar4;
  
  EVar1 = this->GraphType;
  while( true ) {
    if (EVar1 == Function) {
      return true;
    }
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x10))(&this->_padding_);
    if ((plVar3 == (longlong *)0x0) ||
       (this = (UOptimusNodeGraph *)(**(code **)(*plVar3 + 8))(plVar3),
       this == (UOptimusNodeGraph *)0x0)) {
      return false;
    }
    pUVar4 = StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar2) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_) break;
    EVar1 = this->GraphType;
  }
  return false;
}

// IsSubGraphReference @ 14e1f0290

bool __thiscall
UOptimusNodeGraph::IsSubGraphReference(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar2 = UOptimusNode_SubGraphReference::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14e1f02c3;
  }
  param_1 = (UOptimusNode *)0x0;
LAB_14e1f02c3:
  return param_1 != (UOptimusNode *)0x0;
}

// IsValidUserGraphName @ 14e1f0de0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl UOptimusNodeGraph::IsValidUserGraphName(FString *param_1,FText *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  bool bVar9;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar5 = ::FName::ToString(&SetupGraphName,(FString *)&local_38);
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (pFVar5->Data).ArrayNum;
  if (iVar4 == iVar1) {
    if (1 < iVar4) {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
      bVar9 = iVar4 == 0;
      goto LAB_14e1f0e32;
    }
    bVar3 = false;
LAB_14e1f0e90:
    bVar9 = true;
    bVar2 = true;
    if (!bVar3) goto LAB_14e1f0ea6;
  }
  else {
    bVar9 = iVar1 + iVar4 == 1;
LAB_14e1f0e32:
    bVar3 = false;
    if (bVar9) goto LAB_14e1f0e90;
    pFVar5 = ::FName::ToString(&UpdateGraphName,(FString *)&local_48);
    iVar4 = (param_1->Data).ArrayNum;
    iVar1 = (pFVar5->Data).ArrayNum;
    if (iVar4 == iVar1) {
      if (iVar4 < 2) {
        bVar3 = true;
        goto LAB_14e1f0e90;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
      bVar9 = iVar4 == 0;
    }
    else {
      bVar9 = iVar1 + iVar4 == 1;
    }
    bVar3 = true;
    if (bVar9) goto LAB_14e1f0e90;
    bVar2 = false;
  }
  bVar9 = bVar2;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_48.TextData.Reference);
  }
LAB_14e1f0ea6:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (bVar9) {
    if (param_2 != (FText *)0x0) {
      pFVar6 = FText::FromString(&local_28,param_1);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"OptimusNodeGraph",L"ReservedName",
                          L"\'{}\' is a reserved name.");
      pFVar8 = FTextFormat::FTextFormat(&local_18,pFVar7,Default);
      pFVar6 = FText::Format<FText>(&local_38,pFVar8,pFVar6);
      FText::operator=(param_2,pFVar6);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
    return false;
  }
  ::FString::FString((FString *)&local_48,L"./$");
  bVar3 = ::FName::IsValidXName(param_1,(FString *)&local_48,param_2,(FText *)0x0);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_48.TextData.Reference);
  }
  return bVar3;
}

// MoveGraphDirect @ 14e1f2080

bool __thiscall
UOptimusNodeGraph::MoveGraphDirect(UOptimusNodeGraph *this,UOptimusNodeGraph *param_1,int param_2)

{
  return false;
}

// Notify @ 14e1f3a10

void __thiscall
UOptimusNodeGraph::Notify(UOptimusNodeGraph *this,EOptimusGraphNotifyType param_1,UObject *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  int iVar11;
  FDestructionSentinel local_48;
  
  if (param_1 != NodeDiagnosticLevelChanged) {
    if ((((param_1 != NodePositionChanged) && (param_1 != PinExpansionChanged)) &&
        (plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_),
        plVar7 != (longlong *)0x0)) && (lVar8 = (**(code **)(*plVar7 + 8))(plVar7), lVar8 != 0)) {
      pUVar9 = UOptimusDeformer::StaticClass();
      iVar11 = (int)pUVar9->_padding_;
      if (((iVar11 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar11 * 8) ==
           &pUVar9->_padding_)) && (*(int *)(lVar8 + 0x110) != 3)) {
        *(undefined4 *)(lVar8 + 0x110) = 2;
      }
    }
    goto LAB_14e1f3b5f;
  }
  plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if ((plVar7 == (longlong *)0x0) || (lVar8 = (**(code **)(*plVar7 + 8))(plVar7), lVar8 == 0))
  goto LAB_14e1f3b5f;
  pUVar9 = UOptimusDeformer::StaticClass();
  iVar11 = (int)pUVar9->_padding_;
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar11) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar11 * 8) !=
      &pUVar9->_padding_)) goto LAB_14e1f3b5f;
  if (param_2 == (UObject *)0x0) {
LAB_14e1f3ac2:
    pUVar10 = (UObject *)0x0;
  }
  else {
    pUVar9 = UOptimusNode::StaticClass();
    iVar11 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar11) ||
       (pUVar10 = param_2,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
       &pUVar9->_padding_)) goto LAB_14e1f3ac2;
  }
  if (pUVar10[4].field_0x10 == '\x03') {
    *(undefined4 *)(lVar8 + 0x110) = 3;
  }
  else if ((pUVar10[4].field_0x10 == '\x02') && (*(int *)(lVar8 + 0x110) == 0)) {
    *(undefined4 *)(lVar8 + 0x110) = 1;
  }
LAB_14e1f3b5f:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GraphNotifyDelegate,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->GraphNotifyDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar4 = false;
  iVar11 = *(int *)&(this->GraphNotifyDelegate).field_0x10 + -1;
  if (-1 < iVar11) {
    lVar8 = (longlong)iVar11 << 4;
    bVar4 = false;
    do {
      if ((*(int *)&(this->GraphNotifyDelegate).field_0x10 <= iVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)&(this->GraphNotifyDelegate).field_0x8;
      if (((*(int *)(lVar8 + 8 + lVar2) == 0) ||
          (plVar7 = *(longlong **)(lVar8 + lVar2), plVar7 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar7 + 0x68))(plVar7,param_1,this,param_2), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar8 = lVar8 + -0x10;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  puVar1 = &(this->GraphNotifyDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->GraphNotifyDelegate,
               false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// PostDuplicate @ 14e1f9c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UOptimusNodeGraph::PostDuplicate(UOptimusNodeGraph *this,Type param_1)

{
  undefined8 *puVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  UOptimusNodePin *pUVar3;
  UOptimusNodeGraph *this_01;
  FName FVar4;
  code *pcVar5;
  void *_Src;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  UPackage *pUVar10;
  UPackage *pUVar11;
  UOptimusNode *pUVar12;
  UClass *pUVar13;
  UOptimusNode *pUVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar17;
  undefined8 *puVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  size_t _Size;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_328 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6 [6];
  ForAnyElementType local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  ForAnyElementType local_2b8;
  int local_2b0;
  int local_2ac;
  uint local_2a8;
  void *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  FScriptContainerElement *local_288;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_280;
  FName local_270;
  UOptimusNodeGraph *local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  code *local_248 [2];
  undefined **local_238;
  ForAnyElementType local_230;
  int local_228;
  int local_224 [3];
  FArchiveState local_218;
  undefined8 local_188;
  void **local_180;
  undefined8 local_178;
  undefined1 local_168 [48];
  FObjectAndNameAsStringProxyArchive local_138;
  TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_268 = this;
  (**(code **)(this->_padding_ + 0xf8))
            (this,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),param_1 == PIE));
  pFVar20 = (this->Nodes).AllocatorInstance.Data;
  iVar2 = (this->Nodes).ArrayNum;
  local_2d0.Data = (FScriptContainerElement *)0x0;
  local_2c8 = 0;
  pFVar21 = pFVar20 + (longlong)iVar2 * 8;
LAB_14e1f9c91:
  do {
    if ((this->Nodes).ArrayNum != iVar2) {
      local_2d8 = 0;
      `TCheckedPointerIterator<TObjectPtr<UOptimusNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2d8);
    }
    if (pFVar20 == pFVar21) {
      uVar16 = (ulonglong)(int)(uint)local_2c8;
      local_2a8 = (uint)local_2c8;
      local_258 = local_2d0.Data + uVar16 * 8;
      FVar19.Data = local_2d0.Data;
      break;
    }
    lVar15 = *(longlong *)pFVar20;
    if (lVar15 == 0) {
LAB_14e1f9db8:
      local_2c0 = 0;
    }
    else {
      pUVar9 = UOptimusNode_ConstantValue::StaticClass();
      this_00 = *(UObjectBaseUtility **)(lVar15 + 0x10);
      iVar7 = (int)pUVar9->_padding_;
      if ((*(int *)&this_00[1].field_0x10 < iVar7) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&this_00[1].field_0x8 + (longlong)iVar7 * 8) !=
          &pUVar9->_padding_)) goto LAB_14e1f9db8;
      local_2c0 = lVar15;
      pUVar10 = UObjectBaseUtility::GetPackage(this_00);
      pUVar11 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
      if (pUVar10 != pUVar11) {
        if (((local_2d0.Data <= (FScriptContainerElement *)&local_2c0) &&
            ((FScriptContainerElement *)&local_2c0 < local_2d0.Data + (longlong)local_2c8._4_4_ * 8)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (uint)local_2c8;
        if ((uint)local_2c8 == local_2c8._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_2d0,(int *)((longlong)&local_2c8 + 4));
        }
        pFVar20 = pFVar20 + 8;
        local_2c8 = CONCAT44(local_2c8._4_4_,iVar7 + 1);
        *(longlong *)(local_2d0.Data + (longlong)iVar7 * 8) = local_2c0;
        goto LAB_14e1f9c91;
      }
    }
    pFVar20 = pFVar20 + 8;
  } while( true );
LAB_14e1f9ddd:
  pFVar21 = local_258;
  local_288 = FVar19.Data;
  if ((uint)local_2c8 != (int)uVar16) {
    local_2d7 = 0;
    `TCheckedPointerIterator<UOptimusNode_ConstantValue_*,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_2d7);
  }
  if (FVar19.Data == pFVar21) {
    if (local_2d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data);
    }
    return;
  }
  pUVar14 = *(UOptimusNode **)FVar19.Data;
  lVar15 = pUVar14->_padding_;
  if (lVar15 == 0) {
LAB_14e1f9e35:
    lVar15 = 0;
  }
  else {
    pUVar9 = UOptimusNode_ConstantValueGeneratorClass::StaticClass();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar2 * 8)
        != &pUVar9->_padding_)) goto LAB_14e1f9e35;
  }
  local_168._0_8_ = *(FName *)(lVar15 + 0x208);
  local_168._8_8_ = *(undefined8 *)(lVar15 + 0x210);
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_168 + 0x10),(FSoftObjectPath *)(lVar15 + 0x218));
  pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  pUVar9 = UOptimusNode_ConstantValueGeneratorClass::GetClassForType
                     (pUVar10,(FOptimusDataTypeRef *)local_168);
  local_2a0 = (void *)0x0;
  local_298 = 0;
  local_218._padding_ = 0;
  local_218.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_290 = 0;
  local_218.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_218.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_218.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_218._40_8_ = 0;
  local_218.ArSerializingDefaults = 0;
  local_218.ArPortFlags = 0;
  local_218.ArMaxSerializeSize = 0;
  local_218.ArUEVer.FileVersionUE4 = 0;
  local_218.ArUEVer.FileVersionUE5 = 0;
  local_218.ArLicenseeUEVer = 0;
  local_218.ArEngineVer.Major = 0;
  local_218.ArEngineVer.Minor = 0;
  local_218.ArEngineVer.Patch = 0;
  local_218.ArEngineVer._6_2_ = 0;
  local_218.ArEngineVer.Changelist = 0;
  local_218.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_218.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_218.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_218.SerializedProperty = (FProperty *)0x0;
  local_218.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_218.bCustomVersionsAreReset = false;
  local_218._129_7_ = 0;
  local_218.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_218);
  local_180 = &local_2a0;
  local_188 = 0;
  local_178 = local_290;
  local_218._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  FArchiveState::SetIsSaving(&local_218,true);
  (**(code **)(local_218._padding_ + 0x108))(&local_218,0);
  local_218._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
            (&local_138,(FArchive *)&local_218,false);
  UObject::SerializeScriptProperties((UObject *)pUVar14,(FArchive *)&local_138);
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_138);
  FArchive::~FArchive((FArchive *)&local_218);
  iVar2 = (pUVar14->Pins).ArrayNum;
  pFVar21 = (pUVar14->Pins).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar20 = pFVar21 + (longlong)iVar2 * 8;
  local_98.Pairs.Elements._0_8_ = 0;
  local_98.Pairs.Elements._8_8_ = 0;
  local_98.Pairs.Elements._32_8_ = 0;
  local_98.Pairs.Elements._40_4_ = 0;
  local_98.Pairs.Elements._44_4_ = 0x80;
  local_98.Pairs.Elements._48_4_ = 0xffffffff;
  local_98.Pairs.Elements._52_4_ = 0;
  local_98.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Pairs.HashSize = 0;
  for (; pFVar21 != pFVar20; pFVar21 = pFVar21 + 8) {
    pUVar3 = *(UOptimusNodePin **)pFVar21;
    pUVar12 = UOptimusNodePin::GetOwningNode(pUVar3);
    this_01 = (UOptimusNodeGraph *)pUVar12->_padding_;
    if (this_01 == (UOptimusNodeGraph *)0x0) {
LAB_14e1fa01d:
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7986583113880829533>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                         ,0x1a3,"Graph != nullptr");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.ArrayNum = 0;
      local_280.ArrayMax = 0;
    }
    else {
      pUVar13 = StaticClass();
      iVar2 = (int)pUVar13->_padding_;
      if ((*(int *)(this_01->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar13->_padding_)) goto LAB_14e1fa01d;
      GetConnectedPins(this_01,&local_280,pUVar3);
    }
    local_270 = (FName)pUVar3->_padding_;
    TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
    ::Emplace<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>
              (&local_98,&local_270,&local_280);
    if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.AllocatorInstance.Data);
    }
    this = local_268;
  }
  FVar4 = (FName)pUVar14->_padding_;
  RemoveNodeDirect(this,pUVar14,false);
  _Src = local_2a0;
  _Size = (size_t)(int)local_298;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0 = (int)local_298;
  if ((int)local_298 == 0) {
    local_2ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_298,0,&local_2b8,(int)local_298,&local_2ac);
    memcpy(local_2b8.Data,_Src,_Size);
  }
  iVar2 = local_2b0;
  FVar19.Data = local_2b8.Data;
  local_248[0] = (code *)0x0;
  local_238 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOptimusNodeGraph::PostDuplicate'::`17'::<lambda_1>,0,0>::
               _vftable_;
  local_224[1] = 0;
  local_224[2] = 0;
  local_230.Data = (FScriptContainerElement *)0x0;
  local_228 = local_2b0;
  if (local_2b0 == 0) {
    local_224[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_2b0,0,&local_230,local_2b0,local_224);
    memcpy(local_230.Data,FVar19.Data,(longlong)iVar2);
  }
  local_248[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UOptimusNodeGraph::PostDuplicate'::__l17::<lambda_1>,bool,UOptimusNode_*>
                 ::Call;
  pUVar14 = CreateNodeDirect(this,pUVar9,FVar4,(TFunction<bool___cdecl(UOptimusNode_*)> *)local_248)
  ;
  iVar2 = (pUVar14->Pins).ArrayNum;
  pFVar21 = (pUVar14->Pins).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar20 = pFVar21 + (longlong)iVar2 * 8;
  local_260 = pFVar20;
  if (pFVar21 != pFVar20) {
    do {
      pUVar3 = *(UOptimusNodePin **)pFVar21;
      lVar15 = pUVar3->_padding_;
      uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
      if (local_98.Pairs.Elements._8_4_ != local_98.Pairs.Elements._52_4_) {
        FVar17 = (ForElementType<FSetElementId>)&local_98.Pairs.Hash;
        if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar17 = local_98.Pairs.Hash.SecondaryData;
        }
        for (iVar2 = *(int *)((longlong)FVar17 +
                             (ulonglong)
                             (local_98.Pairs.HashSize - 1U &
                             (int)((ulonglong)lVar15 >> 0x20) + uVar8) * 4); iVar2 != -1;
            iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + local_98.Pairs.Elements._0_8_)) {
          if (*(longlong *)((longlong)iVar2 * 0x20 + local_98.Pairs.Elements._0_8_) == lVar15) {
            if (((iVar2 != -1) &&
                (lVar15 = (longlong)iVar2 * 0x20 + local_98.Pairs.Elements._0_8_, lVar15 != 0)) &&
               ((longlong *)(lVar15 + 8) != (longlong *)0x0)) {
              puVar18 = *(undefined8 **)(lVar15 + 8);
              iVar2 = *(int *)(lVar15 + 0x10);
              puVar1 = puVar18 + iVar2;
              while( true ) {
                if (*(int *)(lVar15 + 0x10) != iVar2) {
                  local_2d6[0] = 0;
                  `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_2d6);
                }
                pFVar20 = local_260;
                if (puVar18 == puVar1) break;
                if (pUVar3->Direction == Input) {
                  AddLinkDirect(this,(UOptimusNodePin *)*puVar18,pUVar3);
                  puVar18 = puVar18 + 1;
                }
                else {
                  if (pUVar3->Direction == Output) {
                    AddLinkDirect(this,pUVar3,(UOptimusNodePin *)*puVar18);
                  }
                  puVar18 = puVar18 + 1;
                }
              }
            }
            break;
          }
        }
      }
      pFVar21 = pFVar21 + 8;
    } while (pFVar21 != pFVar20);
  }
  if (local_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data);
  }
  local_98.Pairs.HashSize = 0;
  if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  if (local_2a0 != (void *)0x0) {
    FMemory::Free(local_2a0);
  }
  uVar16 = (ulonglong)local_2a8;
  FVar19.Data = local_288 + 8;
  goto LAB_14e1f9ddd;
}

// PostLoad @ 14e1fbc70

void __thiscall UOptimusNodeGraph::PostLoad(UOptimusNodeGraph *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  pFVar3 = (this->SubGraphs).AllocatorInstance.Data;
  iVar2 = (this->SubGraphs).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubGraphs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodeGraph>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = (this->Nodes).AllocatorInstance.Data;
  iVar2 = (this->Nodes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Nodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UOptimusNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = (this->Links).AllocatorInstance.Data;
  iVar2 = (this->Links).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Links).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodeLink>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode(this);
  return;
}

// PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode @ 14e1ffe10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode
          (UOptimusNodeGraph *this)

{
  undefined8 *puVar1;
  int iVar2;
  UOptimusNodePin *pUVar3;
  UOptimusNodeGraph *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  UOptimusNode *pUVar9;
  undefined8 uVar10;
  UObject *pUVar11;
  FName FVar12;
  FName FVar13;
  UOptimusNode *pUVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<FSetElementId> FVar17;
  FScriptContainerElement *pFVar18;
  undefined8 *puVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_1c8 [32];
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [6];
  ForAnyElementType local_150;
  undefined8 local_148;
  longlong local_140;
  uint local_138;
  FScriptContainerElement *local_130;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_128;
  FScriptContainerElement *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  FName local_108;
  UClass *local_100;
  FUObjectCppClassStaticFunctions local_f8;
  FUObjectCppClassStaticFunctions local_f0;
  FScriptContainerElement *local_e8;
  undefined1 local_e0 [40];
  code *local_b8 [5];
  undefined8 *local_90;
  TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar18 = (this->Nodes).AllocatorInstance.Data;
  iVar2 = (this->Nodes).ArrayNum;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  pFVar21 = pFVar18 + (longlong)iVar2 * 8;
  local_100 = (UClass *)this;
LAB_14e1ffe67:
  do {
    if ((this->Nodes).ArrayNum != iVar2) {
      local_158 = 0;
      `TCheckedPointerIterator<TObjectPtr<UOptimusNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_158);
    }
    if (pFVar18 == pFVar21) {
      uVar15 = (ulonglong)(int)(uint)local_148;
      local_138 = (uint)local_148;
      local_e8 = local_150.Data + uVar15 * 8;
      FVar20.Data = local_150.Data;
      do {
        pFVar21 = local_e8;
        local_130 = FVar20.Data;
        if ((uint)local_148 != (int)uVar15) {
          local_157 = 0;
          `TCheckedPointerIterator<UOptimusNode_AnimAttributeDataInterface_*,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_157);
        }
        if (FVar20.Data == pFVar21) {
          if (local_150.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data);
          }
          return;
        }
        pUVar14 = *(UOptimusNode **)FVar20.Data;
        iVar2 = (pUVar14->Pins).ArrayNum;
        pFVar21 = (pUVar14->Pins).AllocatorInstance.Data;
        if ((iVar2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar18 = pFVar21 + (longlong)iVar2 * 8;
        local_88.Pairs.Elements._0_8_ = 0;
        local_88.Pairs.Elements._8_8_ = 0;
        local_88.Pairs.Elements._32_8_ = 0;
        local_88.Pairs.Elements._40_4_ = 0;
        local_88.Pairs.Elements._44_4_ = 0x80;
        local_88.Pairs.Elements._48_4_ = 0xffffffff;
        local_88.Pairs.Elements._52_4_ = 0;
        local_88.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_88.Pairs.HashSize = 0;
        for (; pFVar21 != pFVar18; pFVar21 = pFVar21 + 8) {
          pUVar3 = *(UOptimusNodePin **)pFVar21;
          pUVar9 = UOptimusNodePin::GetOwningNode(pUVar3);
          this_00 = (UOptimusNodeGraph *)pUVar9->_padding_;
          if (this_00 == (UOptimusNodeGraph *)0x0) {
LAB_14e200078:
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7986583113880829533>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                               ,0x1a3,"Graph != nullptr");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.ArrayNum = 0;
            local_128.ArrayMax = 0;
          }
          else {
            pUVar8 = StaticClass();
            iVar2 = (int)pUVar8->_padding_;
            if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar8->_padding_)) goto LAB_14e200078;
            GetConnectedPins(this_00,&local_128,pUVar3);
          }
          local_108 = (FName)pUVar3->_padding_;
          TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
          ::Emplace<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>
                    (&local_88,&local_108,&local_128);
          if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
          this = (UOptimusNodeGraph *)local_100;
        }
        local_118 = (FScriptContainerElement *)(pUVar14->GraphPosition).field0_0x0._s_0.X;
        uStack_110 = *(undefined4 *)((longlong)&(pUVar14->GraphPosition).field0_0x0 + 8);
        uStack_10c = *(undefined4 *)((longlong)&(pUVar14->GraphPosition).field0_0x0 + 0xc);
        uVar10 = (**(code **)(pUVar14[1]._padding_ + 0x10))(pUVar14 + 1,this);
        RemoveNodeDirect(this,pUVar14,false);
        local_e0._28_4_ = uStack_10c;
        local_e0._24_4_ = uStack_110;
        local_e0._16_8_ = local_118;
        local_e0._8_8_ = uVar10;
        if (Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton == (UClass *)0x0) {
          local_f8.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/OptimusCore",L"OptimusNode_DataInterface",
                     &Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton,
                     UOptimusNode_DataInterface::StaticRegisterNativesUOptimusNode_DataInterface,
                     0x138,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
                     InternalConstructor<UOptimusNode_DataInterface>,
                     InternalVTableHelperCtorCaller<UOptimusNode_DataInterface>,&local_f8,
                     UOptimusNode::StaticClass,UObject::StaticClass);
        }
        FVar13 = (FName)(Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton)->
                        _padding_;
        pUVar8 = Z_Construct_UClass_UObject_NoRegister();
        pUVar11 = StaticFindObjectFast(pUVar8,(UObject *)this,FVar13,None,RF_NoFlags,Borrowed);
        if (pUVar11 != (UObject *)0x0) {
          FVar12 = (FName)Z_Construct_UClass_UObject_NoRegister();
          FVar13 = MakeUniqueObjectName
                             ((UObject *)local_e0,(UClass *)this,FVar12,
                              FVar13.ComparisonIndex.Value.Value);
          FVar13 = *(FName *)FVar13;
        }
        local_b8[0] = (code *)0x0;
        local_90 = (undefined8 *)0x0;
        local_90 = FMemory::Malloc(0x20,8);
        local_90[1] = local_e0._8_8_;
        local_90[2] = local_e0._16_8_;
        *local_90 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode'::`13'::<lambda_1>,0,1>
                     ::_vftable_;
        local_90[3] = CONCAT44(uStack_10c,uStack_110);
        if (local_90 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_b8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode'::__l13::<lambda_1>,bool,UOptimusNode_*>
                        ::Call;
        }
        if (Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton == (UClass *)0x0) {
          local_f0.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/OptimusCore",L"OptimusNode_DataInterface",
                     &Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton,
                     UOptimusNode_DataInterface::StaticRegisterNativesUOptimusNode_DataInterface,
                     0x138,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
                     InternalConstructor<UOptimusNode_DataInterface>,
                     InternalVTableHelperCtorCaller<UOptimusNode_DataInterface>,&local_f0,
                     UOptimusNode::StaticClass,UObject::StaticClass);
        }
        pUVar14 = CreateNodeDirect(this,Z_Registration_Info_UClass_UOptimusNode_DataInterface.
                                        InnerSingleton,FVar13,
                                   (TFunction<bool___cdecl(UOptimusNode_*)> *)local_b8);
        iVar2 = (pUVar14->Pins).ArrayNum;
        pFVar21 = (pUVar14->Pins).AllocatorInstance.Data;
        if ((iVar2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar18 = pFVar21 + (longlong)iVar2 * 8;
        local_118 = pFVar18;
        if (pFVar21 != pFVar18) {
          do {
            pUVar3 = *(UOptimusNodePin **)pFVar21;
            lVar16 = pUVar3->_padding_;
            uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar16);
            if (local_88.Pairs.Elements._8_4_ != local_88.Pairs.Elements._52_4_) {
              FVar17 = (ForElementType<FSetElementId>)&local_88.Pairs.Hash;
              if (local_88.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar17 = local_88.Pairs.Hash.SecondaryData;
              }
              for (iVar2 = *(int *)((longlong)FVar17 +
                                   (ulonglong)
                                   (local_88.Pairs.HashSize - 1U &
                                   (int)((ulonglong)lVar16 >> 0x20) + uVar7) * 4); iVar2 != -1;
                  iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + local_88.Pairs.Elements._0_8_)) {
                if (*(longlong *)((longlong)iVar2 * 0x20 + local_88.Pairs.Elements._0_8_) == lVar16)
                {
                  if (((iVar2 != -1) &&
                      (lVar16 = (longlong)iVar2 * 0x20 + local_88.Pairs.Elements._0_8_, lVar16 != 0)
                      ) && ((longlong *)(lVar16 + 8) != (longlong *)0x0)) {
                    puVar19 = *(undefined8 **)(lVar16 + 8);
                    iVar2 = *(int *)(lVar16 + 0x10);
                    puVar1 = puVar19 + iVar2;
                    while( true ) {
                      if (*(int *)(lVar16 + 0x10) != iVar2) {
                        local_156[0] = 0;
                        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::
                        <lambda_1>::operator()(local_156);
                      }
                      pFVar18 = local_118;
                      if (puVar19 == puVar1) break;
                      if (pUVar3->Direction == Input) {
                        AddLinkDirect(this,(UOptimusNodePin *)*puVar19,pUVar3);
                        puVar19 = puVar19 + 1;
                      }
                      else {
                        if (pUVar3->Direction == Output) {
                          AddLinkDirect(this,pUVar3,(UOptimusNodePin *)*puVar19);
                        }
                        puVar19 = puVar19 + 1;
                      }
                    }
                  }
                  break;
                }
              }
            }
            pFVar21 = pFVar21 + 8;
          } while (pFVar21 != pFVar18);
        }
        local_88.Pairs.HashSize = 0;
        if (local_88.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_88.Pairs.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&local_88);
        uVar15 = (ulonglong)local_138;
        FVar20.Data = local_130 + 8;
      } while( true );
    }
    lVar16 = *(longlong *)pFVar18;
    if (lVar16 != 0) {
      pUVar8 = UOptimusNode_AnimAttributeDataInterface::StaticClass();
      iVar6 = (int)pUVar8->_padding_;
      if ((iVar6 <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar6 * 8)
          == &pUVar8->_padding_)) {
        local_140 = lVar16;
        if (((local_150.Data <= (FScriptContainerElement *)&local_140) &&
            ((FScriptContainerElement *)&local_140 < local_150.Data + (longlong)local_148._4_4_ * 8)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (uint)local_148;
        if ((uint)local_148 == local_148._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_150,(int *)((longlong)&local_148 + 4));
        }
        pFVar18 = pFVar18 + 8;
        local_148 = CONCAT44(local_148._4_4_,iVar6 + 1);
        *(longlong *)(local_150.Data + (longlong)iVar6 * 8) = local_140;
        goto LAB_14e1ffe67;
      }
    }
    local_140 = 0;
    pFVar18 = pFVar18 + 8;
  } while( true );
}

// RemoveAllLinks @ 14e212010

bool __thiscall UOptimusNodeGraph::RemoveAllLinks(UOptimusNodeGraph *this,UOptimusNodePin *param_1)

{
  FString *pFVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  uint uVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  FOptimusNodeGraphAction_RemoveLink *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  FOptimusAction *pFVar14;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> *pTVar15;
  longlong *plVar16;
  UOptimusDeformer *this_00;
  UClass *pUVar17;
  UOptimusActionStack *this_01;
  UOptimusActionStack *pUVar18;
  UOptimusActionStack *pUVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  FOptimusAction *this_02;
  ForAnyElementType FVar22;
  uint local_res10 [2];
  FScriptContainerElement *local_res18;
  FOptimusNodeGraphAction_RemoveLink *local_88;
  TReferenceControllerBase<1> *local_80;
  FString local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> local_58;
  TSharedPtr<FOptimusAction,1> local_48;
  
  this_02 = (FOptimusAction *)0x0;
  local_res10[0] = 0;
  if (param_1 == (UOptimusNodePin *)0x0) {
    return false;
  }
  GetAllLinkIndexesToPin(this,&local_68,param_1);
  if (local_68.ArrayNum == 0) {
    bVar10 = false;
  }
  else {
    pFVar14 = ::operator_new(0x28);
    if (pFVar14 != (FOptimusAction *)0x0) {
      (pFVar14->Title).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar14->Title).Data.ArrayNum = 0;
      (pFVar14->Title).Data.ArrayMax = 0;
      pFVar14->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
      pFVar14[1]._padding_ = 0;
      pFVar14[1].Title.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_02 = pFVar14;
    }
    if (local_68.ArrayNum == 1) {
      FOptimusAction::SetTitlef<>(this_02,(TCheckedFormatStringPrivate<wchar_t>)0x152e07b70);
    }
    else {
      ::FString::PrintfImpl(&local_78,L"Remove %d Links");
      pFVar1 = &this_02->Title;
      if (pFVar1 != &local_78) {
        pFVar21 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar21 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar21);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        (this_02->Title).Data.ArrayNum = local_78.Data.ArrayNum;
        (this_02->Title).Data.ArrayMax = local_78.Data.ArrayMax;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    iVar6 = local_68.ArrayNum;
    uVar20 = (ulonglong)local_68.ArrayNum;
    local_res18 = local_68.AllocatorInstance.Data + uVar20 * 4;
    FVar22.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      pFVar21 = local_res18;
      pUVar19 = (UOptimusActionStack *)0x0;
      if ((uint)uVar20 != iVar6) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar22.Data == pFVar21) break;
      uVar5 = *(uint *)FVar22.Data;
      uVar12 = 0;
      if ((int)uVar5 < (this->Links).ArrayNum) {
        uVar12 = ~uVar5 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      pTVar15 = MakeShared<FOptimusNodeGraphAction_RemoveLink,1,TObjectPtr<UOptimusNodeLink>_&>
                          (&local_58,
                           (TObjectPtr<UOptimusNodeLink> *)
                           ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar5 * 8));
      pTVar7 = (pTVar15->SharedReferenceCount).ReferenceController;
      pFVar8 = pTVar15->Object;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_88 = pFVar8;
      local_80 = pTVar7;
      if ((((FOptimusNodeGraphAction_RemoveLink **)this_02[1]._padding_ <= &local_88) &&
          (&local_88 <
           (FOptimusNodeGraphAction_RemoveLink **)this_02[1]._padding_ +
           (longlong)*(int *)((longlong)&this_02[1].Title.Data.AllocatorInstance.Data + 4) * 2)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      iVar13 = *(int *)&this_02[1].Title.Data.AllocatorInstance.Data;
      piVar2 = (int *)((longlong)&this_02[1].Title.Data.AllocatorInstance.Data + 4);
      if (iVar13 == *piVar2) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(this_02 + 1),piVar2);
        *(int *)&this_02[1].Title.Data.AllocatorInstance.Data = iVar13;
      }
      *(int *)&this_02[1].Title.Data.AllocatorInstance.Data = iVar13 + 1;
      pFVar21 = (FScriptContainerElement *)this_02[1]._padding_ + (longlong)iVar13 * 0x10;
      *(FOptimusNodeGraphAction_RemoveLink **)pFVar21 = local_88;
      *(TReferenceControllerBase<1> **)(pFVar21 + 8) = local_80;
      local_80 = (TReferenceControllerBase<1> *)0x0;
      local_88 = (FOptimusNodeGraphAction_RemoveLink *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
LAB_14e2122e4:
        uVar20 = (ulonglong)(uint)local_68.ArrayNum;
        FVar22.Data = FVar22.Data + 4;
      }
      else {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        LOCK();
        paVar3 = &pTVar7->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 != (atomic<int>)0x1) goto LAB_14e2122e4;
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
        uVar20 = (ulonglong)(uint)local_68.ArrayNum;
        FVar22.Data = FVar22.Data + 4;
      }
    }
    plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
    this_01 = pUVar19;
    if ((plVar16 != (longlong *)0x0) &&
       (this_00 = (UOptimusDeformer *)(**(code **)(*plVar16 + 8))(plVar16),
       this_00 != (UOptimusDeformer *)0x0)) {
      pUVar17 = UOptimusDeformer::StaticClass();
      iVar6 = (int)pUVar17->_padding_;
      if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
          &pUVar17->_padding_)) {
        this_01 = UOptimusDeformer::GetActionStack(this_00);
      }
    }
    local_48.Object = this_02;
    pUVar18 = ::operator_new(0x18);
    if (pUVar18 != (UOptimusActionStack *)0x0) {
      *(undefined4 *)&pUVar18->_padding_ = 1;
      pUVar18->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&pUVar18->_padding_ + 4) = 1;
      pUVar18->_padding_ = (longlong)this_02;
      pUVar19 = pUVar18;
    }
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar19;
    bVar10 = UOptimusActionStack::RunAction(this_01,&local_48);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar10;
}

// RemoveAllLinksToNodeDirect @ 14e2123e0

bool __thiscall
UOptimusNodeGraph::RemoveAllLinksToNodeDirect(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == (UOptimusNode *)0x0) {
    return false;
  }
  GetAllLinkIndexesToNode(this,&local_18,param_1,Unknown);
  iVar5 = local_18.ArrayNum;
  if (iVar5 == 0) {
    bVar2 = false;
  }
  else {
    uVar7 = (ulonglong)iVar5;
    if (0 < iVar5) {
      lVar8 = uVar7 << 2;
      do {
        lVar8 = lVar8 + -4;
        iVar5 = (int)uVar7;
        uVar6 = iVar5 - 1;
        uVar7 = (ulonglong)uVar6;
        uVar4 = 0;
        if ((int)uVar6 < local_18.ArrayNum) {
          uVar4 = (uint)-iVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        RemoveLinkByIndex(this,*(int *)(local_18.AllocatorInstance.Data + lVar8));
      } while (0 < (int)uVar6);
    }
    bVar2 = true;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar2;
}

// RemoveAllLinksToPinDirect @ 14e2124d0

bool __thiscall
UOptimusNodeGraph::RemoveAllLinksToPinDirect(UOptimusNodeGraph *this,UOptimusNodePin *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == (UOptimusNodePin *)0x0) {
    return false;
  }
  GetAllLinkIndexesToPin(this,&local_18,param_1);
  iVar5 = local_18.ArrayNum;
  if (iVar5 == 0) {
    bVar2 = false;
  }
  else {
    uVar7 = (ulonglong)iVar5;
    if (0 < iVar5) {
      lVar8 = uVar7 << 2;
      do {
        lVar8 = lVar8 + -4;
        iVar5 = (int)uVar7;
        uVar6 = iVar5 - 1;
        uVar7 = (ulonglong)uVar6;
        uVar4 = 0;
        if ((int)uVar6 < local_18.ArrayNum) {
          uVar4 = (uint)-iVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        RemoveLinkByIndex(this,*(int *)(local_18.AllocatorInstance.Data + lVar8));
      } while (0 < (int)uVar6);
    }
    bVar2 = true;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar2;
}

// RemoveGraph @ 14e213310

void __thiscall UOptimusNodeGraph::RemoveGraph(UOptimusNodeGraph *this,UOptimusNodeGraph *param_1)

{
  UOptimusActionStack *this_00;
  UOptimusNodeGraph *local_res10;
  FOptimusActionScope local_res18 [2];
  FString local_18;
  
  if (param_1 != (UOptimusNodeGraph *)0x0) {
    local_res10 = param_1;
    ::FString::FString(&local_18,L"Remove Graph");
    local_res18[0].ActionStack = GetActionStack(this);
    UOptimusActionStack::OpenActionScope(local_res18[0].ActionStack,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    RemoveNodesAndCount(param_1,(TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)
                                &param_1->Nodes);
    this_00 = GetActionStack(this);
    UOptimusActionStack::RunAction<FOptimusNodeGraphAction_RemoveGraph,UOptimusNodeGraph_*_&>
              (this_00,&local_res10);
    FOptimusActionScope::~FOptimusActionScope(local_res18);
  }
  return;
}

// RemoveGraphDirect @ 14e2135e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UOptimusNodeGraph::RemoveGraphDirect
          (UOptimusNodeGraph *this,UOptimusNodeGraph *param_1,bool param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)&(this->Nodes).ArrayNum;
  plVar3 = plVar1;
  while( true ) {
    if (plVar3 == plVar1 + *(int *)&(this->Links).AllocatorInstance.Data) {
      return false;
    }
    if ((UOptimusNodeGraph *)*plVar3 == (UOptimusNodeGraph *)0x0) {
      bVar4 = param_1 == (UOptimusNodeGraph *)0x0;
    }
    else {
      bVar4 = (UOptimusNodeGraph *)*plVar3 == param_1;
    }
    if (bVar4) break;
    plVar3 = plVar3 + 1;
  }
  iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
  if (iVar2 == -1) {
    return false;
  }
  if (param_1->GraphType == Update) {
    return false;
  }
  TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_> *)
             &(this->Nodes).ArrayNum,iVar2,Default);
  GlobalNotify((UOptimusNodeGraph *)&this[-1].SubGraphs.ArrayNum,GraphRemoved,(UObject *)param_1);
  if (param_2) {
    Optimus::RemoveObject((UObject *)param_1);
  }
  return true;
}

// RemoveLink @ 14e213850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UOptimusNodeGraph::RemoveLink
          (UOptimusNodeGraph *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UOptimusNodeLink *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UOptimusActionStack *this_00;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  UOptimusNodePin *pUVar9;
  undefined1 local_res10 [8];
  TSharedPtr<FOptimusAction,1> local_38;
  
  if ((param_1 != (UOptimusNodePin *)0x0) && (param_2 != (UOptimusNodePin *)0x0)) {
    if (param_1->Direction == param_2->Direction) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7701470802381636611>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                         ,0x403,"InNodeOutputPin->GetDirection() != InNodeInputPin->GetDirection()")
      ;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else {
      pFVar8 = (this->Links).AllocatorInstance.Data;
      iVar2 = (this->Links).ArrayNum;
      pUVar9 = param_1;
      if (param_1->Direction != Input) {
        pUVar9 = param_2;
        param_2 = param_1;
      }
      pFVar1 = pFVar8 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Links).ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UOptimusNodeLink>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar8 == pFVar1) break;
        pUVar3 = *(UOptimusNodeLink **)pFVar8;
        if (((pUVar3->NodeOutputPin).field0_0x0.DebugPtr == param_2) &&
           ((pUVar3->NodeInputPin).field0_0x0.DebugPtr == pUVar9)) {
          this_00 = GetActionStack(this);
          pTVar7 = ::operator_new(0x50);
          if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            local_38.Object = ___xmm_00000000000000000000000000000010;
            local_38.SharedReferenceCount.ReferenceController = _UNK_150651568;
          }
          else {
            pTVar7->SharedReferenceCount = (atomic<int>)0x1;
            pTVar7->WeakReferenceCount = (atomic<int>)0x1;
            pTVar7->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveLink___00_SharedPointerInternals__6B_
            ;
            FOptimusNodeGraphAction_RemoveLink::FOptimusNodeGraphAction_RemoveLink
                      ((FOptimusNodeGraphAction_RemoveLink *)(pTVar7 + 1),pUVar3);
            local_38.Object = (FOptimusAction *)(pTVar7 + 1);
            if ((local_38.Object == (FOptimusAction *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
            local_38.SharedReferenceCount.ReferenceController = pTVar7;
          }
          bVar5 = UOptimusActionStack::RunAction(this_00,&local_38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          return bVar5;
        }
        pFVar8 = pFVar8 + 8;
      }
    }
  }
  return false;
}

// RemoveLinkByIndex @ 14e2139d0

void __thiscall UOptimusNodeGraph::RemoveLinkByIndex(UOptimusNodeGraph *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (this->Links).ArrayNum) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = *(UObject **)((this->Links).AllocatorInstance.Data + (longlong)param_1 * 8);
  uVar5 = 0;
  if (param_1 < (this->Links).ArrayNum) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  _Dst = (this->Links).AllocatorInstance.Data + (longlong)param_1 * 8;
  iVar6 = (this->Links).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
  }
  piVar1 = &(this->Links).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->Links).AllocatorInstance,(this->Links).ArrayNum,&(this->Links).ArrayMax);
  Notify(this,LinkRemoved,pUVar2);
  Optimus::RemoveObject(pUVar2);
  return;
}

// RemoveLinkDirect @ 14e213b10

bool __thiscall
UOptimusNodeGraph::RemoveLinkDirect
          (UOptimusNodeGraph *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((param_1 != (UOptimusNodePin *)0x0) && (param_2 != (UOptimusNodePin *)0x0)) {
    if ((param_1->Direction != Output) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNodeOutputPin->GetDirection() == EOptimusNodePinDirection::Output",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                           ,0x971,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((param_2->Direction != Input) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNodeInputPin->GetDirection() == EOptimusNodePinDirection::Input",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                           ,0x972,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (((param_1->Direction == Output) && (param_2->Direction == Input)) &&
       (uVar6 = 0, 0 < (this->Links).ArrayNum)) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Links).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar1 = *(longlong *)((this->Links).AllocatorInstance.Data + lVar7);
        if ((*(UOptimusNodePin **)(lVar1 + 0x28) == param_1) &&
           (*(UOptimusNodePin **)(lVar1 + 0x30) == param_2)) {
          RemoveLinkByIndex(this,uVar6);
          return true;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->Links).ArrayNum);
    }
  }
  return false;
}

// RemoveNode @ 14e213c50

bool __thiscall UOptimusNodeGraph::RemoveNode(UOptimusNodeGraph *this,UOptimusNode *param_1)

{
  int iVar1;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == (UOptimusNode *)0x0) {
    return false;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(UOptimusNode **)local_18.AllocatorInstance.Data = param_1;
  iVar1 = RemoveNodesAndCount(this,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return 0 < iVar1;
}

// RemoveNodeDirect @ 14e213d00

bool __thiscall
UOptimusNodeGraph::RemoveNodeDirect(UOptimusNodeGraph *this,UOptimusNode *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == pFVar2 + (longlong)(this->Nodes).ArrayNum * 8) {
LAB_14e213d50:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeIndex != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                          ,0x8f7,L"");
      if (!bVar12) {
        return false;
      }
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return (bool)uVar4;
    }
    if (*(UOptimusNode **)pFVar8 == (UOptimusNode *)0x0) {
      bVar12 = param_1 == (UOptimusNode *)0x0;
    }
    else {
      bVar12 = *(UOptimusNode **)pFVar8 == param_1;
    }
    if (bVar12) {
      uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
      if (uVar7 != 0xffffffff) {
        if (param_2) {
          GetAllLinkIndexesToNode(this,&local_38,param_1,Unknown);
          if (local_38.ArrayNum != 0) {
            if (local_38.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return false;
            }
            FMemory::Free(local_38.AllocatorInstance.Data);
            return false;
          }
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
        }
        else if (param_1 != (UOptimusNode *)0x0) {
          GetAllLinkIndexesToNode(this,&local_48,param_1,Unknown);
          iVar6 = local_48.ArrayNum;
          if ((iVar6 != 0) && (uVar10 = (ulonglong)iVar6, 0 < iVar6)) {
            lVar11 = uVar10 << 2;
            do {
              iVar6 = (int)uVar10;
              lVar11 = lVar11 + -4;
              uVar9 = iVar6 - 1;
              uVar10 = (ulonglong)uVar9;
              uVar5 = 0;
              if ((int)uVar9 < local_48.ArrayNum) {
                uVar5 = (uint)-iVar6 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar3 = (code *)swi(3);
                uVar4 = (*pcVar3)();
                return (bool)uVar4;
              }
              RemoveLinkByIndex(this,*(int *)(local_48.AllocatorInstance.Data + lVar11));
            } while (0 < (int)uVar9);
          }
          if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.AllocatorInstance.Data);
          }
        }
        uVar5 = 0;
        if ((int)uVar7 < (this->Nodes).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          uVar4 = (*pcVar3)();
          return (bool)uVar4;
        }
        pFVar2 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
        iVar6 = (this->Nodes).ArrayNum + ~uVar7;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + 8,(longlong)iVar6 << 3);
        }
        piVar1 = &(this->Nodes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Nodes).AllocatorInstance,(this->Nodes).ArrayNum,
                   &(this->Nodes).ArrayMax);
        Notify(this,NodeRemoved,(UObject *)param_1);
        Optimus::RemoveObject((UObject *)param_1);
        return true;
      }
      goto LAB_14e213d50;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// RemoveNodePairByIndex @ 14e214000

void __thiscall UOptimusNodeGraph::RemoveNodePairByIndex(UOptimusNodeGraph *this,int param_1)

{
  TArray<TObjectPtr<UOptimusNodePair>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  pTVar1 = &this->NodePairs;
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->NodePairs).ArrayNum) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar3 = *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 8);
  uVar6 = 0;
  if (param_1 < (this->NodePairs).ArrayNum) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar7 = (this->NodePairs).ArrayNum + ~param_1;
  if (iVar7 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
  }
  piVar2 = &(this->NodePairs).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar1->AllocatorInstance,(this->NodePairs).ArrayNum,&(this->NodePairs).ArrayMax);
  Optimus::RemoveObject(pUVar3);
  return;
}

// RemoveNodePairDirect @ 14e214130

bool __thiscall
UOptimusNodeGraph::RemoveNodePairDirect
          (UOptimusNodeGraph *this,UOptimusNode *param_1,UOptimusNode *param_2)

{
  FScriptContainerElement *_Dst;
  longlong lVar1;
  UOptimusNode *pUVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UClass *pUVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar8 = Z_Construct_UClass_UOptimusNodePairProvider_NoRegister();
    pvVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar8);
    if ((pvVar9 != (void *)0x0) && (param_2 != (UOptimusNode *)0x0)) {
      pUVar8 = Z_Construct_UClass_UOptimusNodePairProvider_NoRegister();
      pvVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar8);
      if (pvVar9 != (void *)0x0) {
        uVar11 = 0;
        if ((this->NodePairs).ArrayNum < 1) {
          return false;
        }
        lVar12 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar11 < (this->NodePairs).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar1 = *(longlong *)((this->NodePairs).AllocatorInstance.Data + lVar12);
          pUVar2 = *(UOptimusNode **)(lVar1 + 0x28);
          if (pUVar2 != (UOptimusNode *)0x0) {
            if (pUVar2 == param_1) {
              if ((*(UOptimusNode **)(lVar1 + 0x30) != (UOptimusNode *)0x0) &&
                 (*(UOptimusNode **)(lVar1 + 0x30) == param_2)) goto LAB_14e214238;
            }
            else if (pUVar2 == (UOptimusNode *)0x0) goto LAB_14e21434b;
            if (((pUVar2 == param_2) && (*(UOptimusNode **)(lVar1 + 0x30) != (UOptimusNode *)0x0))
               && (*(UOptimusNode **)(lVar1 + 0x30) == param_1)) {
LAB_14e214238:
              uVar7 = 0;
              if ((int)uVar11 < (this->NodePairs).ArrayNum) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              pUVar3 = *(UObject **)
                        ((this->NodePairs).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
              uVar7 = 0;
              if ((int)uVar11 < (this->NodePairs).ArrayNum) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              _Dst = (this->NodePairs).AllocatorInstance.Data + (longlong)(int)uVar11 * 8;
              iVar10 = (this->NodePairs).ArrayNum + ~uVar11;
              if (iVar10 != 0) {
                memmove(_Dst,_Dst + 8,(longlong)iVar10 << 3);
              }
              iVar10 = (this->NodePairs).ArrayNum + -1;
              (this->NodePairs).ArrayNum = iVar10;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&(this->NodePairs).AllocatorInstance,iVar10,&(this->NodePairs).ArrayMax
                        );
              Optimus::RemoveObject(pUVar3);
              return true;
            }
          }
LAB_14e21434b:
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 8;
          if ((this->NodePairs).ArrayNum <= (int)uVar11) {
            return false;
          }
        } while( true );
      }
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7701470802381637933>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                     ,0x92d,
                     "Cast<IOptimusNodePairProvider>(InFirstNode) && Cast<IOptimusNodePairProvider>(InSecondNode)"
                    );
  if (!bVar5) {
    return false;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// RemoveNodes @ 14e2143b0

bool __thiscall
UOptimusNodeGraph::RemoveNodes
          (UOptimusNodeGraph *this,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  iVar1 = RemoveNodesAndCount(this,param_1);
  return 0 < iVar1;
}

// RemoveNodesAndCount @ 14e2143d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UOptimusNodeGraph::RemoveNodesAndCount
          (UOptimusNodeGraph *this,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  UOptimusNode *pUVar3;
  longlong lVar4;
  code *pcVar5;
  FOptimusAction *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UOptimusNodeGraph *this_00;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FString *pFVar15;
  longlong *plVar16;
  UOptimusDeformer *pUVar17;
  UClass *pUVar18;
  UOptimusActionStack *pUVar19;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  FString *pFVar22;
  byte bVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  UOptimusNodeGraph *pUVar28;
  ForAnyElementType FVar29;
  ForAnyElementType FVar30;
  ulonglong uVar31;
  ForElementType<unsigned_int> FVar32;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5;
  undefined1 local_2d4;
  undefined1 local_2d3 [3];
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_2d0;
  undefined1 local_2c0 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_2b8;
  FString local_2a8;
  undefined4 local_298;
  TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> local_290;
  TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> local_280;
  UOptimusNodeGraph *local_270;
  FScriptContainerElement *local_268;
  uint local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  undefined4 local_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_240;
  undefined8 uStack_220;
  int local_218;
  undefined4 uStack_214;
  FString local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_200;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  int local_1b8;
  int local_1b4;
  UOptimusNodeGraph *local_1b0;
  FOptimusActionScope local_1a8;
  FOptimusActionScope local_1a0;
  TSharedPtr<FOptimusAction,1> local_198;
  TSharedPtr<FOptimusAction,1> local_188;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FString local_148;
  TSharedPtr<FOptimusAction,1> local_138;
  FString local_128;
  FString local_118;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> local_108;
  FString local_f8;
  FString local_e8;
  longlong local_d0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_c8;
  uint local_c0;
  int iStack_bc;
  ulonglong uStack_b8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  iVar12 = 0;
  local_298 = 0;
  if (param_1->ArrayNum == 0) {
    return 0;
  }
  local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.ArrayNum = 0;
  local_2d0.ArrayMax = 0;
  local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.ArrayNum = 0;
  local_290.ArrayMax = 0;
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  local_270 = this;
  GatherRelatedObjects(param_1,&local_2d0,&local_290,&local_280);
  iVar11 = local_2d0.ArrayNum;
  pFVar2 = local_2d0.AllocatorInstance.Data + (longlong)local_2d0.ArrayNum * 8;
  FVar30.Data = local_2d0.AllocatorInstance.Data;
  while( true ) {
    if (local_2d0.ArrayNum != iVar11) {
      local_2d8 = 0;
      `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_2d8);
    }
    if (FVar30.Data == pFVar2) {
      iVar12 = local_2d0.ArrayNum;
      local_a8._0_8_ = (FScriptContainerElement *)0x0;
      local_a8._8_8_ = 0;
      local_88 = (ForElementType<unsigned_int>)0x0;
      local_268 = local_2d0.AllocatorInstance.Data + (longlong)local_2d0.ArrayNum * 8;
      local_80 = 0;
      local_7c = 0x80;
      local_78 = -1;
      local_74 = 0;
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = 0;
      FVar30.Data = local_2d0.AllocatorInstance.Data;
      goto LAB_14e214528;
    }
    if (*(longlong *)FVar30.Data == 0) break;
    pUVar28 = *(UOptimusNodeGraph **)(*(longlong *)FVar30.Data + 0x20);
    if ((pUVar28 == (UOptimusNodeGraph *)0x0) ||
       (bVar10 = UObjectBaseUtility::IsA<UOptimusNodeGraph>((UObjectBaseUtility *)pUVar28), !bVar10)
       ) {
      pUVar28 = (UOptimusNodeGraph *)0x0;
    }
    if (pUVar28 != this) break;
    FVar30.Data = FVar30.Data + 8;
  }
LAB_14e214fe3:
  if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.AllocatorInstance.Data);
  }
  if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.AllocatorInstance.Data);
  }
  return iVar12;
LAB_14e214528:
  pFVar2 = local_268;
  uVar25 = 0;
  if (local_2d0.ArrayNum != iVar12) {
    local_2d7 = 0;
    `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_2d7);
  }
  if (FVar30.Data == pFVar2) goto LAB_14e214864;
  GetAllLinkIndexesToNode(this,&local_2b8,*(UOptimusNode **)FVar30.Data,Unknown);
  uVar27 = local_2b8.ArrayNum + (local_a8._8_4_ - local_74);
  if ((uint)(local_a8._8_4_ - local_74) < uVar27) {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar27);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8,uVar27);
    if (uVar27 < 4) {
      uVar27 = 1;
    }
    else {
      uVar26 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_298 = (undefined4)lVar4;
      uVar27 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((local_60 == 0) || ((int)local_60 < (int)uVar27)) {
      local_60 = uVar27;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar27 != 0) {
        uVar13 = uVar27;
        if (uVar27 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_14e21460a;
          }
        }
        else {
LAB_14e21460a:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar13,4)
          ;
        }
        if (0 < (int)uVar27) {
          uVar31 = (ulonglong)uVar27;
          uVar26 = uVar25;
          do {
            FVar29.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar29.Data = local_68.Data;
            }
            uVar14 = (longlong)(int)uVar27 - 1U & uVar26;
            uVar26 = uVar26 + 1;
            *(undefined4 *)(FVar29.Data + uVar14 * 4) = 0xffffffff;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
      }
      if (local_60 != 0) {
        pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
        local_260 = 0;
        uStack_25c = 1;
        uStack_24c = 0;
        if (local_80 != 0) {
          FVar32 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
          if (local_88 != (ForElementType<unsigned_int>)0x0) {
            FVar32 = local_88;
          }
          uVar27 = *(uint *)FVar32;
          uVar26 = uVar25;
          while (uVar27 == 0) {
            uVar27 = (int)uVar26 + 0x20;
            uVar26 = (ulonglong)uVar27;
            iVar11 = (int)uVar25;
            local_260 = iVar11 + 1;
            uVar25 = (ulonglong)local_260;
            uStack_24c = (ulonglong)uVar27 << 0x20;
            if ((int)(local_80 + -1 + (local_80 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_260) {
              uStack_24c = CONCAT44(uVar27,local_80);
              goto LAB_14e21471c;
            }
            uVar27 = ((uint *)((longlong)FVar32 + 4))[iVar11];
          }
          uStack_25c = -uVar27 & uVar27;
          uVar25 = (ulonglong)uStack_25c * 2 + 1;
          lVar4 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_1b8 = (int)lVar4;
          iVar11 = local_1b8 + -1 + (int)uVar26;
          if (local_80 < iVar11) {
            iVar11 = local_80;
          }
          uStack_24c._4_4_ = (int)((ulonglong)uStack_24c >> 0x20);
          uStack_24c = CONCAT44(uStack_24c._4_4_,iVar11);
        }
LAB_14e21471c:
        local_250 = 0xffffffff;
        local_1e0 = (longlong *)local_a8;
        local_1d8._padding_ = CONCAT44(uStack_25c,local_260);
        local_1d8.UnvisitedBitMask = 0xffffffff;
        local_1d8.CurrentBitIndex = (int)uStack_24c;
        local_1d8.BaseBitIndex = uStack_24c._4_4_;
        local_1d8._28_4_ = uStack_244;
        local_1d8.Array = pTStack_258;
        if ((int)uStack_24c < local_80) {
          do {
            uVar27 = local_60 - 1 &
                     *(uint *)(*local_1e0 + (longlong)local_1d8.CurrentBitIndex * 0xc);
            lVar4 = *local_1e0 + (longlong)local_1d8.CurrentBitIndex * 0xc;
            *(uint *)(lVar4 + 8) = uVar27;
            FVar29.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar29.Data = local_68.Data;
            }
            lVar24 = (longlong)(int)(local_60 - 1 & uVar27);
            *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(FVar29.Data + lVar24 * 4);
            *(int *)(FVar29.Data + lVar24 * 4) = local_1d8.CurrentBitIndex;
            local_1d8.UnvisitedBitMask = local_1d8.UnvisitedBitMask & ~local_1d8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d8);
          } while (local_1d8.CurrentBitIndex < (local_1d8.Array)->NumBits);
        }
      }
    }
  }
  iVar11 = local_2b8.ArrayNum;
  pFVar2 = local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayNum * 4;
  FVar29.Data = local_2b8.AllocatorInstance.Data;
  while( true ) {
    if (local_2b8.ArrayNum != iVar11) {
      local_2d6 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2d6);
    }
    if (FVar29.Data == pFVar2) break;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8,&local_1b4,
               (bool *)FVar29.Data);
    FVar29.Data = FVar29.Data + 4;
  }
  local_2b8.ArrayNum = 0;
  if ((local_2b8.ArrayMax < 0) && (local_2b8.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_2b8.AllocatorInstance,0,&local_2b8.ArrayMax);
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  FVar30.Data = FVar30.Data + 8;
  goto LAB_14e214528;
LAB_14e214864:
  bVar10 = local_2d0.ArrayNum != 1;
  if (bVar10) {
    ::FString::PrintfImpl(&local_148,L"Remove %d Nodes");
    pFVar15 = &local_148;
  }
  else {
    pFVar15 = ::FString::FString(&local_118,L"Remove Node");
  }
  local_210.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
  (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Data.ArrayNum = (pFVar15->Data).ArrayNum;
  local_210.Data.ArrayMax = (pFVar15->Data).ArrayMax;
  (pFVar15->Data).ArrayNum = 0;
  (pFVar15->Data).ArrayMax = 0;
  if ((bVar10) && (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if ((!bVar10) && (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_1a0.ActionStack = GetActionStack(this);
  UOptimusActionStack::OpenActionScope(local_1a0.ActionStack,&local_210);
  local_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  local_200._padding_._0_4_ = 0;
  local_200._padding_._4_4_ = 1;
  local_200.UnvisitedBitMask = 0xffffffff;
  local_200.CurrentBitIndex = 0;
  local_200.BaseBitIndex = 0;
  if (local_80 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_200);
  }
  iVar12 = local_80;
  TStack_170._padding_ = CONCAT44(local_200._padding_._4_4_,(undefined4)local_200._padding_);
  local_178 = (longlong *)local_a8;
  TStack_170.CurrentBitIndex = local_200.CurrentBitIndex;
  TStack_170.UnvisitedBitMask = local_200.UnvisitedBitMask;
  uStack_220._4_4_ = local_200._28_4_;
  uStack_220._0_4_ = local_200.BaseBitIndex;
  local_240.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  bVar23 = (byte)local_80 & 0x1f;
  local_218 = local_a8._8_4_ - local_74;
  local_240._padding_ = CONCAT44(1 << bVar23,local_80 >> 5);
  local_240.CurrentBitIndex = local_80;
  local_240.UnvisitedBitMask = -1 << bVar23;
  local_240._24_8_ = CONCAT44(local_200.CurrentBitIndex,local_80) & 0xffffffffffffffe0;
  uStack_150 = CONCAT44(uStack_214,local_218);
  TStack_170.Array = local_200.Array;
  TStack_170._24_8_ = uStack_220;
  if ((local_80 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar12 = (*pcVar5)();
    return iVar12;
  }
  if (iVar12 != local_80) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_240);
  }
  pTVar8 = local_240.Array;
  local_d0 = local_240._padding_;
  pTStack_c8 = local_240.Array;
  local_c0 = local_240.UnvisitedBitMask;
  iStack_bc = local_240.CurrentBitIndex;
  uVar9 = _local_c0;
  uStack_b8 = local_240._24_8_;
  iStack_bc = local_240.CurrentBitIndex;
  iVar12 = iStack_bc;
  _local_c0 = uVar9;
  while( true ) {
    plVar16 = local_178;
    if ((int)local_178[1] - *(int *)((longlong)local_178 + 0x34) != (int)uStack_150) {
      local_2d5 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d5);
    }
    pTVar7 = _UNK_150651568;
    pFVar6 = ___xmm_00000000000000000000000000000010;
    if (((TStack_170.CurrentBitIndex == iVar12) && (TStack_170.Array == pTVar8)) &&
       (plVar16 == (longlong *)local_a8)) break;
    uVar27 = *(uint *)(*plVar16 + (longlong)TStack_170.CurrentBitIndex * 0xc);
    plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x18))();
    if ((plVar16 == (longlong *)0x0) ||
       (pUVar17 = (UOptimusDeformer *)(**(code **)(*plVar16 + 8))(plVar16),
       pUVar17 == (UOptimusDeformer *)0x0)) {
LAB_14e214ad7:
      pUVar19 = (UOptimusActionStack *)0x0;
    }
    else {
      pUVar18 = UOptimusDeformer::StaticClass();
      iVar11 = (int)pUVar18->_padding_;
      if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar11) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar18->_padding_)) goto LAB_14e214ad7;
      pUVar19 = UOptimusDeformer::GetActionStack(pUVar17);
    }
    uVar13 = 0;
    if ((int)uVar27 < (this->Links).ArrayNum) {
      uVar13 = ~uVar27 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar12 = (*pcVar5)();
      return iVar12;
    }
    pTVar20 = MakeShared<FOptimusNodeGraphAction_RemoveLink,1,TObjectPtr<UOptimusNodeLink>_&>
                        (&local_108,
                         (TObjectPtr<UOptimusNodeLink> *)
                         ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar27 * 8));
    local_138.Object = (FOptimusAction *)pTVar20->Object;
    local_138.SharedReferenceCount.ReferenceController =
         (pTVar20->SharedReferenceCount).ReferenceController;
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UOptimusActionStack::RunAction(pUVar19,&local_138);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  iVar12 = local_290.ArrayNum;
  uVar25 = (ulonglong)local_290.ArrayNum;
  local_268 = local_290.AllocatorInstance.Data + uVar25 * 8;
  FVar30.Data = local_290.AllocatorInstance.Data;
  while( true ) {
    pFVar2 = local_268;
    if ((int)uVar25 != iVar12) {
      local_2d4 = 0;
      `TCheckedPointerIterator<UOptimusNodePair_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_2d4);
    }
    if (FVar30.Data == pFVar2) break;
    lVar4 = *(longlong *)FVar30.Data;
    plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
    if ((plVar16 == (longlong *)0x0) ||
       (pUVar17 = (UOptimusDeformer *)(**(code **)(*plVar16 + 8))(plVar16),
       pUVar17 == (UOptimusDeformer *)0x0)) {
LAB_14e214c26:
      pUVar19 = (UOptimusActionStack *)0x0;
    }
    else {
      pUVar18 = UOptimusDeformer::StaticClass();
      iVar11 = (int)pUVar18->_padding_;
      if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar11) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar18->_padding_)) goto LAB_14e214c26;
      pUVar19 = UOptimusDeformer::GetActionStack(pUVar17);
    }
    pTVar21 = ::operator_new(0x48);
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      pTVar21 = (TReferenceControllerBase<1> *)0x0;
      local_198.Object = pFVar6;
      local_198.SharedReferenceCount.ReferenceController = pTVar7;
    }
    else {
      pTVar21->SharedReferenceCount = (atomic<int>)0x1;
      pTVar21->WeakReferenceCount = (atomic<int>)0x1;
      pTVar21->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveNodePair___00_SharedPointerInternals__6B_
      ;
      pFVar15 = UOptimusNode::GetNodePath(*(UOptimusNode **)(lVar4 + 0x30),&local_e8);
      pFVar22 = UOptimusNode::GetNodePath(*(UOptimusNode **)(lVar4 + 0x28),&local_f8);
      paVar1 = &pTVar21[1].SharedReferenceCount;
      pTVar21[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar21[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar21[2]._padding_ = 0;
      pTVar21[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
      pTVar21[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar21[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar21[3]._padding_ = 0;
      pTVar21[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar21[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar21[4]._padding_ = 0;
      ::FString::operator=((FString *)&pTVar21[2].SharedReferenceCount,pFVar22);
      ::FString::operator=((FString *)&pTVar21[3].SharedReferenceCount,pFVar15);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      pTVar21[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_RemoveNodePair__6B_;
      ::FString::PrintfImpl(&local_2a8,L"Remove Node Pair");
      if (paVar1 == (atomic<int> *)&local_2a8) {
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
      }
      else {
        if (*(void **)paVar1 != (void *)0x0) {
          FMemory::Free(*(void **)paVar1);
        }
        *(FScriptContainerElement **)paVar1 = local_2a8.Data.AllocatorInstance.Data;
        *(int *)&pTVar21[2]._padding_ = local_2a8.Data.ArrayNum;
        *(int *)((longlong)&pTVar21[2]._padding_ + 4) = local_2a8.Data.ArrayMax;
        local_2a8.Data.ArrayNum = 0;
        local_2a8.Data.ArrayMax = 0;
        local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (((FOptimusAction *)(pTVar21 + 1) == (FOptimusAction *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar12 = (*pcVar5)();
        return iVar12;
      }
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      local_198.Object = (FOptimusAction *)(pTVar21 + 1);
      local_198.SharedReferenceCount.ReferenceController = pTVar21;
    }
    UOptimusActionStack::RunAction(pUVar19,&local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    uVar25 = local_290._8_8_ & 0xffffffff;
    FVar30.Data = FVar30.Data + 8;
    this = local_270;
  }
  iVar12 = local_2d0.ArrayNum;
  uVar25 = (ulonglong)local_2d0.ArrayNum;
  pFVar2 = local_2d0.AllocatorInstance.Data + uVar25 * 8;
  FVar30.Data = local_2d0.AllocatorInstance.Data;
  do {
    if ((int)uVar25 != iVar12) {
      local_2d3[0] = 0;
      `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2d3);
    }
    if (FVar30.Data == pFVar2) {
      iVar12 = local_280.ArrayNum;
      pFVar2 = local_280.AllocatorInstance.Data + (longlong)local_280.ArrayNum * 8;
      FVar30.Data = local_280.AllocatorInstance.Data;
      while( true ) {
        if (local_280.ArrayNum != iVar12) {
          `TCheckedPointerIterator<UOptimusNodeSubGraph_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2c0);
        }
        if (FVar30.Data == pFVar2) break;
        pUVar28 = *(UOptimusNodeGraph **)FVar30.Data;
        local_1b0 = pUVar28;
        if (pUVar28 != (UOptimusNodeGraph *)0x0) {
          ::FString::FString(&local_128,L"Remove Graph");
          this_00 = local_270;
          local_1a8.ActionStack = GetActionStack(local_270);
          UOptimusActionStack::OpenActionScope(local_1a8.ActionStack,&local_128);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          RemoveNodesAndCount(pUVar28,(TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)
                                      &pUVar28->Nodes);
          pUVar19 = GetActionStack(this_00);
          UOptimusActionStack::RunAction<FOptimusNodeGraphAction_RemoveGraph,UOptimusNodeGraph_*_&>
                    (pUVar19,&local_1b0);
          FOptimusActionScope::~FOptimusActionScope(&local_1a8);
        }
        FVar30.Data = FVar30.Data + 8;
      }
      iVar12 = local_2d0.ArrayNum;
      FOptimusActionScope::~FOptimusActionScope(&local_1a0);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      goto LAB_14e214fe3;
    }
    pUVar3 = *(UOptimusNode **)FVar30.Data;
    plVar16 = (longlong *)(**(code **)(local_270->_padding_ + 0x18))();
    if ((plVar16 == (longlong *)0x0) ||
       (pUVar17 = (UOptimusDeformer *)(**(code **)(*plVar16 + 8))(plVar16),
       pUVar17 == (UOptimusDeformer *)0x0)) {
LAB_14e214e47:
      pUVar19 = (UOptimusActionStack *)0x0;
    }
    else {
      pUVar18 = UOptimusDeformer::StaticClass();
      iVar11 = (int)pUVar18->_padding_;
      if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar11) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar18->_padding_)) goto LAB_14e214e47;
      pUVar19 = UOptimusDeformer::GetActionStack(pUVar17);
    }
    pTVar21 = ::operator_new(0x70);
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      pTVar21 = (TReferenceControllerBase<1> *)0x0;
      local_188.Object = pFVar6;
      local_188.SharedReferenceCount.ReferenceController = pTVar7;
    }
    else {
      pTVar21->SharedReferenceCount = (atomic<int>)0x1;
      pTVar21->WeakReferenceCount = (atomic<int>)0x1;
      pTVar21->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveNode___00_SharedPointerInternals__6B_
      ;
      FOptimusNodeGraphAction_RemoveNode::FOptimusNodeGraphAction_RemoveNode
                ((FOptimusNodeGraphAction_RemoveNode *)(pTVar21 + 1),pUVar3);
      if (((FOptimusAction *)(pTVar21 + 1) == (FOptimusAction *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar12 = (*pcVar5)();
        return iVar12;
      }
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      local_188.Object = (FOptimusAction *)(pTVar21 + 1);
      local_188.SharedReferenceCount.ReferenceController = pTVar21;
    }
    UOptimusActionStack::RunAction(pUVar19,&local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    uVar25 = local_2d0._8_8_ & 0xffffffff;
    FVar30.Data = FVar30.Data + 8;
  } while( true );
}

// RenameGraph @ 14e217b10

bool __thiscall
UOptimusNodeGraph::RenameGraph(UOptimusNodeGraph *this,UOptimusNodeGraph *param_1,FString *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  UOptimusActionStack *this_00;
  FName *pFVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FName local_res8;
  UOptimusNodeGraph *local_res10;
  
  plVar1 = *(longlong **)&(this->Nodes).ArrayNum;
  plVar2 = plVar1;
  while( true ) {
    if (plVar2 == plVar1 + *(int *)&(this->Links).AllocatorInstance.Data) {
      return false;
    }
    if ((UOptimusNodeGraph *)*plVar2 == (UOptimusNodeGraph *)0x0) {
      bVar5 = param_1 == (UOptimusNodeGraph *)0x0;
    }
    else {
      bVar5 = (UOptimusNodeGraph *)*plVar2 == param_1;
    }
    if (bVar5) break;
    plVar2 = plVar2 + 1;
  }
  if ((int)((longlong)plVar2 - (longlong)plVar1 >> 3) == -1) {
    return false;
  }
  local_res10 = param_1;
  bVar5 = IsValidUserGraphName(param_2,(FText *)0x0);
  if (!bVar5) {
    return false;
  }
  this_00 = GetActionStack((UOptimusNodeGraph *)&this[-1].SubGraphs.ArrayNum);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res8,pwVar4);
  bVar5 = UOptimusActionStack::
          RunAction<FOptimusNodeGraphAction_RenameGraph,UOptimusNodeGraph_*_&,FName>
                    (this_00,&local_res10,pFVar3);
  return bVar5;
}

// RenameGraphDirect @ 14e217dc0

bool __thiscall
UOptimusNodeGraph::RenameGraphDirect
          (UOptimusNodeGraph *this,UOptimusNodeGraph *param_1,FString *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  UClass *pUVar11;
  UOptimusNodeGraph *pUVar12;
  UObject *pUVar13;
  longlong *plVar14;
  UOptimusDeformer *this_00;
  FString *pFVar15;
  int iVar16;
  undefined8 *puVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  undefined1 local_res10 [8];
  FString local_68;
  FString local_58;
  FDestructionSentinel local_48;
  
  pwVar20 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  cVar8 = (**(code **)(param_1->_padding_ + 0x170))(param_1,pwVar18,0,0x34);
  if (cVar8 == '\0') {
    return false;
  }
  if (param_1->GraphType == SubGraph) {
    puVar17 = (undefined8 *)this->_padding_;
    iVar16 = (int)this->_padding_;
    puVar2 = puVar17 + iVar16;
    do {
      if ((int)this->_padding_ != iVar16) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UOptimusNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar17 == puVar2) break;
      pUVar4 = (UObject *)*puVar17;
      if (pUVar4 != (UObject *)0x0) {
        pUVar11 = UOptimusNode_SubGraphReference::StaticClass();
        iVar3 = (int)pUVar11->_padding_;
        if (((iVar3 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar11->_padding_)) &&
           (pUVar12 = (UOptimusNodeGraph *)(**(code **)(*(longlong *)(pUVar4 + 7) + 0x10))(),
           pUVar12 == param_1)) goto LAB_14e217e99;
      }
      puVar17 = puVar17 + 1;
    } while( true );
  }
LAB_14e217ec6:
  plVar14 = (longlong *)(**(code **)(this->_padding_ + 0x18))(this);
  if ((plVar14 != (longlong *)0x0) &&
     (this_00 = (UOptimusDeformer *)(**(code **)(*plVar14 + 8))(plVar14),
     this_00 != (UOptimusDeformer *)0x0)) {
    pUVar11 = UOptimusDeformer::StaticClass();
    iVar16 = (int)pUVar11->_padding_;
    if ((iVar16 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
        &pUVar11->_padding_)) {
      pUVar11 = StaticClass();
      iVar16 = (int)pUVar11->_padding_;
      if (((*(int *)(param_1->_padding_ + 0x38) < iVar16) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
           &pUVar11->_padding_)) || (param_1 == (UOptimusNodeGraph *)0x0)) {
        pFVar15 = GetTypeName<UOptimusNodeGraph>(&local_68);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        pFVar15 = GetFullNameForCastLogError<UObject>(&local_58,(UObject *)param_1);
        if ((pFVar15->Data).ArrayNum != 0) {
          pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar20,pwVar18);
      }
      UOptimusDeformer::OnGraphRenamedOrRemoved(this_00,param_1);
      if (this_00->Status != HasErrors) {
        this_00->Status = Modified;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this_00->GlobalNotifyDelegate,(FWriteAccessScope *)&local_48);
      puVar1 = &(this_00->GlobalNotifyDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar7 = false;
      iVar16 = *(int *)&(this_00->GlobalNotifyDelegate).field_0x10 + -1;
      if (-1 < iVar16) {
        lVar19 = (longlong)iVar16 << 4;
        bVar7 = false;
        do {
          if ((*(int *)&(this_00->GlobalNotifyDelegate).field_0x10 <= iVar16) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          lVar5 = *(longlong *)&(this_00->GlobalNotifyDelegate).field_0x8;
          if (((*(int *)(lVar19 + 8 + lVar5) == 0) ||
              (plVar14 = *(longlong **)(lVar19 + lVar5), plVar14 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar14 + 0x68))(plVar14,3,param_1), cVar8 == '\0')) {
            bVar7 = true;
          }
          lVar19 = lVar19 + -0x10;
          iVar16 = iVar16 + -1;
        } while (-1 < iVar16);
      }
      puVar1 = &(this_00->GlobalNotifyDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this_00->GlobalNotifyDelegate,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
  }
  return true;
LAB_14e217e99:
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[7].field_0x18);
  *(undefined8 *)&pUVar4[7].field_0x8 = *(undefined8 *)&pUVar13->field_0x18;
  Notify((UOptimusNodeGraph *)&this[-1].SubGraphs.ArrayNum,NodeDisplayNameChanged,pUVar4);
  goto LAB_14e217ec6;
}

// StaticRegisterNativesUOptimusNodeGraph @ 14e225b50

void __cdecl UOptimusNodeGraph::StaticRegisterNativesUOptimusNodeGraph(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x25;
  local_18.DataPtr = Z_Construct_UClass_UOptimusNodeGraph_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14e238dd0

UObject * __thiscall UOptimusNodeGraph::_getUObject(UOptimusNodeGraph *this)

{
  return (UObject *)&this[-1].SubGraphs.ArrayNum;
}

// execAddCommentNode @ 14e2390c0

void __cdecl UOptimusNodeGraph::execAddCommentNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector2<double> *pTVar1;
  FProperty *pFVar2;
  UOptimusNode *pUVar3;
  uchar *puVar4;
  uchar *puVar5;
  TVector2<double> *pTVar6;
  UClass *local_res10;
  TVector2<double> local_c8;
  uchar local_b8 [16];
  uchar local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78 [5];
  undefined8 *local_50;
  undefined1 local_28;
  undefined7 uStack_27;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pTVar1 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar6 = &local_c8;
  if (pTVar1 != (TVector2<double> *)0x0) {
    pTVar6 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar5 = local_b8;
  if (puVar4 != (uchar *)0x0) {
    puVar5 = puVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_28 = 0;
  local_78[0] = (code *)0x0;
  puVar4 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = *(undefined8 *)puVar4;
  uStack_90 = *(undefined8 *)(puVar4 + 8);
  local_88 = *(undefined8 *)puVar5;
  uStack_80 = *(undefined8 *)(puVar5 + 8);
  local_50 = FMemory::Malloc(0x30,8);
  local_50[1] = local_98;
  local_50[2] = uStack_90;
  *local_50 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOptimusNodeGraph::AddCommentNode'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_50[3] = local_88;
  local_50[4] = uStack_80;
  local_50[5] = CONCAT71(uStack_27,local_28);
  if (local_50 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UOptimusNodeGraph::AddCommentNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                  ::Call;
  }
  local_res10 = UOptimusNode_Comment::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar3 = AddNodeInternal((UOptimusNodeGraph *)param_1,(TSubclassOf<UOptimusNode>)&local_res10,
                           pTVar6,(TFunction<void___cdecl(UOptimusNode_*)> *)local_78);
  *(UOptimusNode **)param_3 = pUVar3;
  return;
}

// execAddComponentBindingGetNode @ 14e2392c0

void __cdecl
UOptimusNodeGraph::execAddComponentBindingGetNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UOptimusNode *pUVar2;
  TVector2<double> *pTVar3;
  UOptimusComponentSourceBinding *local_res10;
  TVector2<double> local_18;
  
  local_res10 = (UOptimusComponentSourceBinding *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = AddComponentBindingGetNode((UOptimusNodeGraph *)param_1,local_res10,pTVar3);
  *(UOptimusNode **)param_3 = pUVar2;
  return;
}

// execAddDataInterfaceNode @ 14e2393b0

void __cdecl
UOptimusNodeGraph::execAddDataInterfaceNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UOptimusNode *pUVar3;
  TVector2<double> *pTVar4;
  UObject *local_res10;
  UClass *local_res18;
  TVector2<double> local_58;
  code *local_48 [2];
  undefined **local_38;
  UObject *local_30;
  undefined8 local_20;
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pUVar2 = local_res10;
  pTVar4 = &local_58;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar4 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res10 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res10);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddDataInterfaceNode'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddDataInterfaceNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  local_res18 = UOptimusNode_DataInterface::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar3 = AddNodeInternal((UOptimusNodeGraph *)param_1,(TSubclassOf<UOptimusNode>)&local_res18,
                           pTVar4,(TFunction<void___cdecl(UOptimusNode_*)> *)local_48);
  *(UOptimusNode **)param_3 = pUVar3;
  return;
}

// execAddFunctionReferenceNode @ 14e239550

void __cdecl
UOptimusNodeGraph::execAddFunctionReferenceNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UOptimusNode *pUVar2;
  TVector2<double> *pTVar3;
  undefined8 local_res10;
  UClass *local_res18;
  TVector2<double> local_58;
  code *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_20 = 0;
  pTVar3 = &local_58;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddFunctionReferenceNode'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_res10;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddFunctionReferenceNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = UOptimusNode_FunctionReference::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar2 = AddNodeInternal((UOptimusNodeGraph *)param_1,(TSubclassOf<UOptimusNode>)&local_res18,
                           pTVar3,(TFunction<void___cdecl(UOptimusNode_*)> *)local_48);
  *(UOptimusNode **)param_3 = pUVar2;
  return;
}

// execAddLink @ 14e2396a0

void __cdecl UOptimusNodeGraph::execAddLink(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int *piVar2;
  FOptimusAction *pFVar3;
  FScriptContainerElement *pFVar4;
  atomic<int> aVar5;
  uint uVar6;
  FProperty *pFVar7;
  FOptimusDataType *pFVar8;
  code *pcVar9;
  UOptimusNodePin *pUVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  UOptimusNode *pUVar16;
  FOptimusDataType *pFVar17;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar18;
  FOptimusDataTypeRegistry *this;
  UClass *pUVar19;
  FOptimusCompoundAction *pFVar20;
  FOptimusAction *pFVar21;
  UOptimusNode *pUVar22;
  UOptimusNodeGraph *pUVar23;
  UOptimusNodeGraph *pUVar24;
  FOptimusAction *pFVar25;
  FString *pFVar26;
  UOptimusActionStack *this_00;
  int iVar27;
  ForAnyElementType FVar28;
  UOptimusNodePin *this_01;
  atomic<int> *paVar29;
  FOptimusCompoundAction *this_02;
  UOptimusNodePin *pUVar30;
  UOptimusNodePin *pUVar31;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  UOptimusNodePin *local_res20;
  FString local_198;
  UOptimusNodePin *local_188;
  UOptimusNodePin *local_180;
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  undefined1 local_168 [16];
  FSoftObjectPath local_158;
  TSharedPtr<FOptimusDataType_const_,1> local_138;
  TSharedPtr<FOptimusAction,1> local_128;
  TSharedPtr<FOptimusDataType_const_,1> local_118;
  TSharedPtr<FOptimusDataType_const_,1> local_108;
  TSharedPtr<FOptimusDataType_const_,1> local_f8;
  TSharedPtr<FOptimusDataType_const_,1> local_e8;
  TSharedPtr<FOptimusDataType_const_,1> local_d8;
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> local_c8;
  FString local_b8;
  FString local_a8;
  TWeakPtr<FOptimusAction,1> local_98;
  undefined1 local_88 [32];
  void *local_68;
  
  local_188 = (UOptimusNodePin *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_res20 = (UOptimusNodePin *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar10 = local_188;
  this_01 = local_res20;
  local_180 = local_188;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_188 == (UOptimusNodePin *)0x0) || (local_res20 == (UOptimusNodePin *)0x0)) {
    *local_res18 = 0;
    return;
  }
  pUVar16 = UOptimusNodePin::GetOwningNode(local_188);
  bVar13 = UOptimusNode::CanConnectPinToPin(pUVar16,pUVar10,this_01,(FString *)0x0);
  if (!bVar13) goto LAB_14e2398a3;
  pUVar16 = UOptimusNodePin::GetOwningNode(this_01);
  bVar13 = UOptimusNode::CanConnectPinToPin(pUVar16,this_01,pUVar10,(FString *)0x0);
  if (!bVar13) goto LAB_14e2398a3;
  if ((pUVar10->bIsGroupingPin == false) && (this_01->bIsGroupingPin == false)) {
    pUVar31 = this_01;
    if (pUVar10->Direction == Output) {
      pUVar31 = pUVar10;
    }
    pUVar30 = this_01;
    if (pUVar10->Direction == Input) {
      pUVar30 = pUVar10;
    }
    pFVar17 = FOptimusDataTypeRef::operator->(&pUVar10->DataType);
    if ((pFVar17->ShaderValueType).ValueTypePtr == (FShaderValueType *)0x0) {
LAB_14e239869:
      if (((pUVar10->DataType).TypeName != (this_01->DataType).TypeName) ||
         (bVar13 = FSoftObjectPath::operator==
                             ((FSoftObjectPath *)
                              &(pUVar10->DataType).TypeObject.SoftObjectPtr.field_0x8,
                              (FSoftObjectPath *)
                              &(this_01->DataType).TypeObject.SoftObjectPtr.field_0x8), !bVar13))
      goto LAB_14e2398a3;
    }
    else {
      pTVar18 = FOptimusDataTypeRef::Resolve(&this_01->DataType,&local_118);
      pFVar17 = pTVar18->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      if ((pFVar17->ShaderValueType).ValueTypePtr == (FShaderValueType *)0x0) goto LAB_14e239869;
      pTVar18 = FOptimusDataTypeRef::Resolve(&pUVar10->DataType,&local_108);
      pFVar17 = pTVar18->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
      pTVar18 = FOptimusDataTypeRef::Resolve(&this_01->DataType,&local_f8);
      pFVar8 = pTVar18->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      if ((pFVar17->ShaderValueType).ValueTypePtr != (pFVar8->ShaderValueType).ValueTypePtr)
      goto LAB_14e239869;
    }
    bVar14 = FOptimusDataDomain::AreCompatible
                       (&pUVar31->DataDomain,&pUVar30->DataDomain,(FString *)0x0);
  }
  else {
    this = FOptimusDataTypeRegistry::Get();
    pUVar19 = UOptimusComponentSourceBinding::StaticClass();
    FOptimusDataTypeRegistry::FindType(this,&local_138,pUVar19);
    FVar11.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
    if (local_138.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar29 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar29 = &(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar29 = (atomic<int>)((int)*paVar29 + 1);
      UNLOCK();
    }
    local_168._0_4_ = 0;
    local_168._4_4_ = 0;
    local_158.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.SubPathString.Data.ArrayNum = 0;
    local_158.SubPathString.Data.ArrayMax = 0;
    local_168._8_8_ = 0;
    local_158.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_158.AssetPath.AssetName.Number = 0;
    local_158.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_158.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_158.SubPathString,0);
    local_e8.Object = local_138.Object;
    local_e8.SharedReferenceCount.ReferenceController =
         local_138.SharedReferenceCount.ReferenceController;
    if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar29 = (atomic<int>)((int)*paVar29 + 1);
      UNLOCK();
    }
    FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_168,&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
    if (((pUVar10->DataType).TypeName == (FName)local_168._0_8_) &&
       (bVar13 = FSoftObjectPath::operator==
                           ((FSoftObjectPath *)
                            &(pUVar10->DataType).TypeObject.SoftObjectPtr.field_0x8,&local_158),
       bVar13)) {
      bVar13 = false;
LAB_14e2399b3:
      bVar14 = true;
      bVar12 = true;
      if (bVar13) goto LAB_14e2399bf;
    }
    else {
      local_d8.Object = local_138.Object;
      local_d8.SharedReferenceCount.ReferenceController =
           local_138.SharedReferenceCount.ReferenceController;
      if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar11.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_88,&local_d8);
      if (((this_01->DataType).TypeName == (FName)local_88._0_8_) &&
         (bVar13 = FSoftObjectPath::operator==
                             ((FSoftObjectPath *)
                              &(this_01->DataType).TypeObject.SoftObjectPtr.field_0x8,
                              (FSoftObjectPath *)(local_88 + 0x10)), bVar13)) {
        bVar13 = true;
        goto LAB_14e2399b3;
      }
      bVar12 = false;
LAB_14e2399bf:
      bVar14 = bVar12;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
    }
    if (local_158.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.SubPathString.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
  }
  if (!bVar14) {
LAB_14e2398a3:
    *local_res18 = 0;
    return;
  }
  this_02 = (FOptimusCompoundAction *)0x0;
  if (pUVar10->Direction == Input) {
    local_180 = this_01;
    this_01 = pUVar10;
  }
  GetAllLinkIndexesToPin((UOptimusNodeGraph *)param_1,&local_178,this_01);
  pFVar20 = ::operator_new(0x28);
  if (pFVar20 != (FOptimusCompoundAction *)0x0) {
    pFVar20->_padding_ = 0;
    pFVar20->_padding_ = 0;
    pFVar20->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    (pFVar20->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->SubActions).ArrayNum = 0;
    (pFVar20->SubActions).ArrayMax = 0;
    this_02 = pFVar20;
  }
  iVar27 = local_178.ArrayNum;
  pFVar4 = local_178.AllocatorInstance.Data + (longlong)iVar27 * 4;
  FVar28.Data = local_178.AllocatorInstance.Data;
  while( true ) {
    if (local_178.ArrayNum != iVar27) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar28.Data == pFVar4) break;
    uVar6 = *(uint *)FVar28.Data;
    uVar15 = 0;
    if ((int)uVar6 < *(int *)(param_1 + 2)) {
      uVar15 = ~uVar6 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FOptimusCompoundAction::
    AddSubAction<FOptimusNodeGraphAction_RemoveLink,TObjectPtr<UOptimusNodeLink>_&>
              (this_02,&local_c8,
               (TObjectPtr<UOptimusNodeLink> *)
               (*(longlong *)&param_1[1].field_0x20 + (longlong)(int)uVar6 * 8));
    if (local_c8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar29 = &(local_c8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar5 = *paVar29;
      *paVar29 = (atomic<int>)((int)*paVar29 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)((local_c8.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
      }
    }
    FVar28.Data = FVar28.Data + 4;
  }
  pFVar21 = ::operator_new(0x40);
  pUVar10 = local_180;
  if (pFVar21 == (FOptimusAction *)0x0) {
    pFVar21 = (FOptimusAction *)0x0;
  }
  else {
    pFVar1 = &pFVar21->Title;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    piVar2 = &pFVar21[1].Title.Data.ArrayNum;
    (pFVar21->Title).Data.ArrayNum = 0;
    (pFVar21->Title).Data.ArrayMax = 0;
    pFVar21->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveLink__6B_;
    pFVar21[1]._padding_ = 0;
    pFVar21[1].Title.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar21[1].Title.Data.ArrayNum = 0;
    pFVar21[1].Title.Data.ArrayMax = 0;
    pFVar21[2]._padding_ = 0;
    *(undefined1 *)&pFVar21[2].Title.Data.AllocatorInstance.Data = 0;
    if (local_180->Direction == Output) {
      if (this_01->Direction == Input) {
        pUVar16 = UOptimusNodePin::GetOwningNode(local_180);
        pUVar22 = UOptimusNodePin::GetOwningNode(this_01);
        if (pUVar16 == pUVar22) {
          bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5689001813563409008>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                              ,0x270,
                              "InNodeOutputPin->GetOwningNode() != InNodeInputPin->GetOwningNode()")
          ;
          if (bVar13) goto code_r0x00014e239c91;
        }
        else {
          pUVar16 = UOptimusNodePin::GetOwningNode(pUVar10);
          pUVar23 = UOptimusNode::GetOwningGraph(pUVar16);
          pUVar16 = UOptimusNodePin::GetOwningNode(this_01);
          pUVar24 = UOptimusNode::GetOwningGraph(pUVar16);
          if (pUVar23 == pUVar24) {
            pFVar25 = (FOptimusAction *)UOptimusNodePin::GetPinPath(pUVar10,&local_b8);
            pFVar3 = pFVar21 + 1;
            if (pFVar3 != pFVar25) {
              pFVar4 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3->_padding_)->
                       AllocatorInstance).Data;
              if (pFVar4 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar4);
              }
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3->_padding_)->
              AllocatorInstance).Data =
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar25->_padding_)->
                   AllocatorInstance).Data;
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar25->_padding_)->
              AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              *(int *)&pFVar21[1].Title.Data.AllocatorInstance.Data =
                   *(int *)&(pFVar25->Title).Data.AllocatorInstance.Data;
              *(int *)((longlong)&pFVar21[1].Title.Data.AllocatorInstance.Data + 4) =
                   *(int *)((longlong)&(pFVar25->Title).Data.AllocatorInstance.Data + 4);
              (pFVar25->Title).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            pFVar26 = UOptimusNodePin::GetPinPath(this_01,&local_a8);
            if ((FString *)piVar2 != pFVar26) {
              if (*(void **)piVar2 != (void *)0x0) {
                FMemory::Free(*(void **)piVar2);
              }
              *(FScriptContainerElement **)piVar2 = (pFVar26->Data).AllocatorInstance.Data;
              (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)&pFVar21[2]._padding_ = (pFVar26->Data).ArrayNum;
              *(int *)((longlong)&pFVar21[2]._padding_ + 4) = (pFVar26->Data).ArrayMax;
              (pFVar26->Data).ArrayNum = 0;
              (pFVar26->Data).ArrayMax = 0;
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            *(undefined1 *)&pFVar21[2].Title.Data.AllocatorInstance.Data = 0;
          }
          else {
            bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5689001813563409009>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                                ,0x271,
                                "InNodeOutputPin->GetOwningNode()->GetOwningGraph() == InNodeInputPin->GetOwningNode()->GetOwningGraph()"
                               );
            if (bVar13) goto code_r0x00014e239c91;
          }
        }
      }
      else {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5689001813563409007>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                            ,0x26f,
                            "InNodeInputPin->GetDirection() == EOptimusNodePinDirection::Input");
        if (bVar13) goto code_r0x00014e239c91;
      }
    }
    else {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5689001813563409006>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                          ,0x26e,
                          "InNodeOutputPin->GetDirection() == EOptimusNodePinDirection::Output");
      if (bVar13) {
code_r0x00014e239c91:
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar21->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddLink__6B_;
    ::FString::PrintfImpl(&local_198,L"Add Link");
    if (pFVar1 != &local_198) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
      (pFVar21->Title).Data.ArrayNum = local_198.Data.ArrayNum;
      (pFVar21->Title).Data.ArrayMax = local_198.Data.ArrayMax;
      local_198.Data.ArrayNum = 0;
      local_198.Data.ArrayMax = 0;
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  ::FString::operator=((FString *)&this_02->_padding_,&pFVar21->Title);
  FOptimusCompoundAction::AddSubAction(this_02,&local_98,pFVar21);
  if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar29 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar29;
    *paVar29 = (atomic<int>)((int)*paVar29 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_98.WeakReferenceCount.ReferenceController,1);
    }
  }
  this_00 = GetActionStack((UOptimusNodeGraph *)param_1);
  local_128.Object = (FOptimusAction *)this_02;
  local_128.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_128.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_128.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_128.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_02;
  }
  bVar13 = UOptimusActionStack::RunAction(this_00,&local_128);
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  *local_res18 = bVar13;
  return;
}

// execAddLoopTerminalNodes @ 14e239e80

void __cdecl
UOptimusNodeGraph::execAddLoopTerminalNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TVector2<double> *pTVar3;
  TVector2<double> local_28;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = AddLoopTerminalNodes((UOptimusNodeGraph *)param_1,&local_18,pTVar3);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execAddNode @ 14e239f70

void __cdecl UOptimusNodeGraph::execAddNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UOptimusNode *pUVar3;
  TVector2<double> *pTVar4;
  UObject *local_res10;
  UObject *local_res18;
  TVector2<double> local_58;
  TFunction<void___cdecl(UOptimusNode_*)> local_48;
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pUVar2 = local_res10;
  pTVar4 = &local_58;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar4 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  local_res18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar3 = AddNodeInternal((UOptimusNodeGraph *)param_1,(TSubclassOf<UOptimusNode>)&local_res18,
                           pTVar4,&local_48);
  *(UOptimusNode **)param_3 = pUVar3;
  return;
}

// execAddResourceGetNode @ 14e23a0c0

void __cdecl
UOptimusNodeGraph::execAddResourceGetNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UOptimusNode *pUVar2;
  TVector2<double> *pTVar3;
  undefined8 local_res10;
  UClass *local_res18;
  TVector2<double> local_58;
  code *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_20 = 0;
  pTVar3 = &local_58;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceGetNode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_30 = local_res10;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddResourceGetNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = UOptimusNode_GetResource::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar2 = AddNodeInternal((UOptimusNodeGraph *)param_1,(TSubclassOf<UOptimusNode>)&local_res18,
                           pTVar3,(TFunction<void___cdecl(UOptimusNode_*)> *)local_48);
  *(UOptimusNode **)param_3 = pUVar2;
  return;
}

// execAddResourceNode @ 14e23a210

void __cdecl UOptimusNodeGraph::execAddResourceNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UOptimusNode *pUVar2;
  TVector2<double> *pTVar3;
  undefined8 local_res10;
  UClass *local_res18;
  TVector2<double> local_58;
  code *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_20 = 0;
  pTVar3 = &local_58;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceNode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_30 = local_res10;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddResourceNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = UOptimusNode_Resource::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar2 = AddNodeInternal((UOptimusNodeGraph *)param_1,(TSubclassOf<UOptimusNode>)&local_res18,
                           pTVar3,(TFunction<void___cdecl(UOptimusNode_*)> *)local_48);
  *(UOptimusNode **)param_3 = pUVar2;
  return;
}

// execAddResourceSetNode @ 14e23a360

void __cdecl
UOptimusNodeGraph::execAddResourceSetNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UOptimusNode *pUVar2;
  TVector2<double> *pTVar3;
  undefined8 local_res10;
  UClass *local_res18;
  TVector2<double> local_58;
  code *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_20 = 0;
  pTVar3 = &local_58;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceSetNode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_30 = local_res10;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddResourceSetNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = UOptimusNode_SetResource::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar2 = AddNodeInternal((UOptimusNodeGraph *)param_1,(TSubclassOf<UOptimusNode>)&local_res18,
                           pTVar3,(TFunction<void___cdecl(UOptimusNode_*)> *)local_48);
  *(UOptimusNode **)param_3 = pUVar2;
  return;
}

// execAddValueNode @ 14e23a4b0

void __cdecl UOptimusNodeGraph::execAddValueNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  UPackage *pUVar4;
  UOptimusNode *pUVar5;
  size_t _Size;
  TVector2<double> *pTVar6;
  UClass *local_res10;
  FName local_f8;
  undefined1 local_f0 [24];
  FUtf8String local_d8;
  FName local_c8;
  undefined1 local_c0 [24];
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  undefined1 local_98 [32];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  TVector2<double> local_68;
  TFunction<void___cdecl(UOptimusNode_*)> local_58;
  
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_f0._0_8_ = 0;
  local_f0._16_8_ = 0;
  local_f0._8_8_ = 0;
  FUtf8String::Reset(&local_d8,0);
  local_res10 = (UClass *)0x0;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_f0._0_8_ = 0;
  local_f0._16_8_ = 0;
  local_f0._8_8_ = 0;
  FUtf8String::Reset(&local_d8,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FVar2.Data = local_d8.Data.AllocatorInstance.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  pTVar6 = &local_68;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar6 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  local_c0._8_4_ = local_f0._8_4_;
  local_c0._12_4_ = local_f0._12_4_;
  local_c0._16_4_ = local_f0._16_4_;
  local_c0._20_4_ = local_f0._20_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_d8.Data.ArrayNum;
  local_c8 = local_f8;
  local_c0._0_8_ = local_f0._0_8_;
  local_a0 = local_d8.Data.ArrayNum;
  if (local_d8.Data.ArrayNum == 0) {
    local_9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_d8.Data.ArrayNum,0,&local_a8,local_d8.Data.ArrayNum,&local_9c);
    memcpy(local_a8.Data,FVar2.Data,_Size);
  }
  iVar3 = local_a0;
  FVar2.Data = local_a8.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_98._0_8_ = local_c8;
  local_98._8_8_ = local_c0._0_8_;
  local_98._16_4_ = local_c0._8_4_;
  local_98._20_4_ = local_c0._12_4_;
  local_98._24_4_ = local_c0._16_4_;
  local_98._28_4_ = local_c0._20_4_;
  local_70 = local_a0;
  if (local_a0 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_a0,0,&local_78,local_a0,&local_6c);
    memcpy(local_78.Data,FVar2.Data,(longlong)iVar3);
  }
  pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  local_res10 = UOptimusNode_ConstantValueGeneratorClass::GetClassForType
                          (pUVar4,(FOptimusDataTypeRef *)local_98);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar5 = AddNodeInternal((UOptimusNodeGraph *)param_1,(TSubclassOf<UOptimusNode>)&local_res10,
                           pTVar6,&local_58);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  *(UOptimusNode **)param_3 = pUVar5;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddVariableGetNode @ 14e23a750

void __cdecl
UOptimusNodeGraph::execAddVariableGetNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UOptimusNode *pUVar2;
  TVector2<double> *pTVar3;
  undefined8 local_res10;
  UClass *local_res18;
  TVector2<double> local_58;
  code *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_20 = 0;
  pTVar3 = &local_58;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOptimusNodeGraph::AddVariableGetNode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_30 = local_res10;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UOptimusNodeGraph::AddVariableGetNode'::__l2::<lambda_1>,void,UOptimusNode_*>
                ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = UOptimusNode_GetVariable::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar2 = AddNodeInternal((UOptimusNodeGraph *)param_1,(TSubclassOf<UOptimusNode>)&local_res18,
                           pTVar3,(TFunction<void___cdecl(UOptimusNode_*)> *)local_48);
  *(UOptimusNode **)param_3 = pUVar2;
  return;
}

// execCollapseNodesToFunction @ 14e23a8a0

void __cdecl
UOptimusNodeGraph::execCollapseNodesToFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execCollapseNodesToSubGraph @ 14e23a940

void __cdecl
UOptimusNodeGraph::execCollapseNodesToSubGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UOptimusNode *pUVar2;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CollapseNodesToSubGraph((UOptimusNodeGraph *)param_1,pTVar3);
  *(UOptimusNode **)param_3 = pUVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execConvertCustomKernelToFunction @ 14e23aa00

void __cdecl
UOptimusNodeGraph::execConvertCustomKernelToFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UOptimusNode *pUVar2;
  UOptimusNode *local_res10;
  
  local_res10 = (UOptimusNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = ConvertCustomKernelToFunction((UOptimusNodeGraph *)param_1,local_res10);
  *(UOptimusNode **)param_3 = pUVar2;
  return;
}

// execConvertFunctionToCustomKernel @ 14e23aaa0

void __cdecl
UOptimusNodeGraph::execConvertFunctionToCustomKernel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UOptimusNode *pUVar2;
  UOptimusNode *local_res10;
  
  local_res10 = (UOptimusNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = ConvertFunctionToCustomKernel((UOptimusNodeGraph *)param_1,local_res10);
  *(UOptimusNode **)param_3 = pUVar2;
  return;
}

// execConvertToFunction @ 14e23ab40

void __cdecl
UOptimusNodeGraph::execConvertToFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UOptimusNode *local_res10;
  
  local_res10 = (UOptimusNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConvertToFunction((UOptimusNodeGraph *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execConvertToSubGraph @ 14e23abe0

void __cdecl
UOptimusNodeGraph::execConvertToSubGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UOptimusNode *local_res10;
  
  local_res10 = (UOptimusNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConvertToSubGraph((UOptimusNodeGraph *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execDuplicateNode @ 14e23ac80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UOptimusNodeGraph::execDuplicateNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObjectBaseUtility *this;
  code *pcVar3;
  UOptimusNode *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FName FVar8;
  FName FVar9;
  FOptimusNodeGraphAction_DuplicateNode *this_00;
  FString *pFVar10;
  FOptimusNodeGraphAction_DuplicateNode *pFVar11;
  UOptimusActionStack *pUVar12;
  FOptimusNodeGraphAction_DuplicateNode *pFVar13;
  undefined8 uVar14;
  uchar *puVar15;
  UOptimusNode *local_res10 [2];
  uchar local_78 [16];
  void *local_68 [2];
  code *local_58 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  pFVar13 = (FOptimusNodeGraphAction_DuplicateNode *)0x0;
  local_res10[0] = (UOptimusNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pUVar4 = local_res10[0];
  puVar15 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UOptimusNode *)0x0) {
    pUVar6 = UOptimusNode_LoopTerminal::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      FVar9 = (FName)pUVar4->_padding_;
      pUVar6 = Z_Construct_UClass_UObject_NoRegister();
      pUVar7 = StaticFindObjectFast(pUVar6,param_1,FVar9,None,RF_NoFlags,Borrowed);
      if (pUVar7 != (UObject *)0x0) {
        FVar8 = (FName)Z_Construct_UClass_UObject_NoRegister();
        FVar9 = MakeUniqueObjectName
                          ((UObject *)(local_res10 + 1),(UClass *)param_1,FVar8,
                           FVar9.ComparisonIndex.Value.Value);
        FVar9 = *(FName *)FVar9;
      }
      this_00 = ::operator_new(0xa0);
      pFVar11 = pFVar13;
      if (this_00 != (FOptimusNodeGraphAction_DuplicateNode *)0x0) {
        local_40._0_1_ = puVar15[0];
        local_40._1_1_ = puVar15[1];
        local_40._2_1_ = puVar15[2];
        local_40._3_1_ = puVar15[3];
        uStack_3c._0_1_ = puVar15[4];
        uStack_3c._1_1_ = puVar15[5];
        uStack_3c._2_1_ = puVar15[6];
        uStack_3c._3_1_ = puVar15[7];
        uStack_38._0_1_ = puVar15[8];
        uStack_38._1_1_ = puVar15[9];
        uStack_38._2_1_ = puVar15[10];
        uStack_38._3_1_ = puVar15[0xb];
        uStack_34._0_1_ = puVar15[0xc];
        uStack_34._1_1_ = puVar15[0xd];
        uStack_34._2_1_ = puVar15[0xe];
        uStack_34._3_1_ = puVar15[0xf];
        local_30 = 0;
        local_48 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNode'::`2'::<lambda_1>,0,0>::
                    _vftable_;
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UOptimusNodeGraph::DuplicateNode'::__l2::<lambda_1>,bool,UOptimusNode_*>
                      ::Call;
        pFVar10 = (FString *)(**(code **)(*(longlong *)(param_1 + 1) + 0x20))(param_1 + 1,local_68);
        pFVar11 = FOptimusNodeGraphAction_DuplicateNode::FOptimusNodeGraphAction_DuplicateNode
                            (this_00,pFVar10,pUVar4,FVar9,
                             (TFunction<bool___cdecl(UOptimusNode_*)> *)local_58);
        if (local_68[0] != (void *)0x0) {
          FMemory::Free(local_68[0]);
        }
      }
      pUVar12 = GetActionStack((UOptimusNodeGraph *)param_1);
      bVar5 = UOptimusActionStack::RunAction(pUVar12,(FOptimusAction *)pFVar11);
      if (bVar5) {
        pUVar12 = GetActionStack((UOptimusNodeGraph *)param_1);
        this = (UObjectBaseUtility *)pUVar12->_padding_;
        if (this != (UObjectBaseUtility *)0x0) {
          pUVar6 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
          pFVar13 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar6);
        }
        uVar14 = (**(code **)(pFVar13->_padding_ + 0x20))(pFVar13,&pFVar11->NodePath);
        *(undefined8 *)param_3 = uVar14;
        return;
      }
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7701470802381636375>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                         ,0x317,"!Cast<UOptimusNode_LoopTerminal>(InNode)");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execDuplicateNodes @ 14e23af00

void __cdecl UOptimusNodeGraph::execDuplicateNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_48;
  TVector2<double> local_38;
  FString local_28;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar1 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_48;
  if (pTVar1 != (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar4 = &local_38;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar4 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::FString(&local_28,L"Duplicate");
  bVar3 = DuplicateNodes((UOptimusNodeGraph *)param_1,pTVar5,pTVar4,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// execExpandCollapsedNodes @ 14e23b1e0

void __cdecl
UOptimusNodeGraph::execExpandCollapsedNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UOptimusNode *local_res10;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = (UOptimusNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = ExpandCollapsedNodes((UOptimusNodeGraph *)param_1,&local_18,local_res10);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetGraphIndex @ 14e23b4b0

void __cdecl UOptimusNodeGraph::execGetGraphIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 1) + 0x10))();
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1);
  plVar1 = (longlong *)*plVar2;
  plVar3 = plVar1;
  while( true ) {
    if (plVar3 == plVar1 + (int)plVar2[1]) {
      *(undefined4 *)param_3 = 0xffffffff;
      return;
    }
    if ((UObject *)*plVar3 == param_1) break;
    plVar3 = plVar3 + 1;
  }
  *(int *)param_3 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
  return;
}

// execGetGraphType @ 14e23b570

void __cdecl UOptimusNodeGraph::execGetGraphType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x8;
  return;
}

// execGetGraphs @ 14e23b5a0

void __cdecl UOptimusNodeGraph::execGetGraphs(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 1) + 0x28))();
  if (param_3 != puVar2) {
    iVar1 = *(int *)(puVar2 + 1);
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

// execIsCustomKernel @ 14e23b860

void __cdecl UOptimusNodeGraph::execIsCustomKernel(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    pUVar3 = UOptimusNode_CustomComputeKernel::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e23b8f6;
  }
  lVar4 = 0;
LAB_14e23b8f6:
  *(bool *)param_3 = lVar4 != 0;
  return;
}

// execIsExecutionGraph @ 14e23b910

void __cdecl UOptimusNodeGraph::execIsExecutionGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(int *)&param_1[1].field_0x8 != 0) && (1 < *(int *)&param_1[1].field_0x8 - 1U)) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsFunctionGraph @ 14e23b950

void __cdecl UOptimusNodeGraph::execIsFunctionGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(int *)&param_1[1].field_0x8 == 3;
  return;
}

// execIsFunctionReference @ 14e23b980

void __cdecl
UOptimusNodeGraph::execIsFunctionReference(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    pUVar3 = UOptimusNode_FunctionReference::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e23ba16;
  }
  lVar4 = 0;
LAB_14e23ba16:
  *(bool *)param_3 = lVar4 != 0;
  return;
}

// execIsKernelFunction @ 14e23ba30

void __cdecl UOptimusNodeGraph::execIsKernelFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    pUVar3 = UOptimusNode_ComputeKernelFunction::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e23bac6;
  }
  lVar4 = 0;
LAB_14e23bac6:
  *(bool *)param_3 = lVar4 != 0;
  return;
}

// execIsSubGraphReference @ 14e23bae0

void __cdecl
UOptimusNodeGraph::execIsSubGraphReference(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    pUVar3 = UOptimusNode_SubGraphReference::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e23bb76;
  }
  lVar4 = 0;
LAB_14e23bb76:
  *(bool *)param_3 = lVar4 != 0;
  return;
}

// execMoveGraphDirect @ 14e23bb90

void __cdecl UOptimusNodeGraph::execMoveGraphDirect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 1) + 0x50))(param_1 + 1,local_res10,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execRemoveAllLinks @ 14e23bc60

void __cdecl UOptimusNodeGraph::execRemoveAllLinks(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int *piVar2;
  atomic<int> *paVar3;
  FScriptContainerElement *pFVar4;
  atomic<int> aVar5;
  uint uVar6;
  int iVar7;
  FProperty *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FOptimusNodeGraphAction_RemoveLink *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FOptimusAction *pFVar15;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> *pTVar16;
  longlong *plVar17;
  UOptimusDeformer *this;
  UClass *pUVar18;
  UOptimusActionStack *this_00;
  UOptimusActionStack *pUVar19;
  UOptimusActionStack *pUVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  FOptimusAction *this_01;
  ForAnyElementType FVar23;
  uint local_res10 [2];
  void *local_res18;
  UOptimusNodePin *local_res20;
  FOptimusNodeGraphAction_RemoveLink *local_90;
  TReferenceControllerBase<1> *local_88;
  FString local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> local_60;
  TSharedPtr<FOptimusAction,1> local_50;
  
  this_01 = (FOptimusAction *)0x0;
  local_res10[0] = 0;
  local_res20 = (UOptimusNodePin *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar8 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar8->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar8);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UOptimusNodePin *)0x0) {
    GetAllLinkIndexesToPin((UOptimusNodeGraph *)param_1,&local_70,local_res20);
    if (local_70.ArrayNum != 0) {
      pFVar15 = ::operator_new(0x28);
      if (pFVar15 != (FOptimusAction *)0x0) {
        (pFVar15->Title).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar15->Title).Data.ArrayNum = 0;
        (pFVar15->Title).Data.ArrayMax = 0;
        pFVar15->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
        pFVar15[1]._padding_ = 0;
        pFVar15[1].Title.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this_01 = pFVar15;
      }
      if (local_70.ArrayNum == 1) {
        FOptimusAction::SetTitlef<>(this_01,(TCheckedFormatStringPrivate<wchar_t>)0x152e07b70);
      }
      else {
        ::FString::PrintfImpl(&local_80,L"Remove %d Links");
        pFVar1 = &this_01->Title;
        if (pFVar1 != &local_80) {
          pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
          (this_01->Title).Data.ArrayNum = local_80.Data.ArrayNum;
          (this_01->Title).Data.ArrayMax = local_80.Data.ArrayMax;
          local_80.Data.ArrayNum = 0;
          local_80.Data.ArrayMax = 0;
          local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      iVar7 = local_70.ArrayNum;
      uVar21 = (ulonglong)local_70.ArrayNum;
      pFVar4 = local_70.AllocatorInstance.Data + uVar21 * 4;
      FVar23.Data = local_70.AllocatorInstance.Data;
      do {
        while( true ) {
          pUVar20 = (UOptimusActionStack *)0x0;
          if ((uint)uVar21 != iVar7) {
            local_res10[0] = local_res10[0] & 0xffffff00;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar23.Data == pFVar4) {
            plVar17 = (longlong *)(**(code **)(*(longlong *)(param_1 + 1) + 0x18))(param_1 + 1);
            this_00 = pUVar20;
            if ((plVar17 != (longlong *)0x0) &&
               (this = (UOptimusDeformer *)(**(code **)(*plVar17 + 8))(plVar17),
               this != (UOptimusDeformer *)0x0)) {
              pUVar18 = UOptimusDeformer::StaticClass();
              iVar7 = (int)pUVar18->_padding_;
              if ((iVar7 <= *(int *)(this->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
                  &pUVar18->_padding_)) {
                this_00 = UOptimusDeformer::GetActionStack(this);
              }
            }
            local_50.Object = this_01;
            pUVar19 = ::operator_new(0x18);
            if (pUVar19 != (UOptimusActionStack *)0x0) {
              *(undefined4 *)&pUVar19->_padding_ = 1;
              pUVar19->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              *(undefined4 *)((longlong)&pUVar19->_padding_ + 4) = 1;
              pUVar19->_padding_ = (longlong)this_01;
              pUVar20 = pUVar19;
            }
            local_50.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pUVar20;
            bVar12 = UOptimusActionStack::RunAction(this_00,&local_50);
            if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.AllocatorInstance.Data);
            }
            *(bool *)local_res18 = bVar12;
            return;
          }
          uVar6 = *(uint *)FVar23.Data;
          uVar13 = 0;
          if ((int)uVar6 < *(int *)(param_1 + 2)) {
            uVar13 = ~uVar6 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar16 = MakeShared<FOptimusNodeGraphAction_RemoveLink,1,TObjectPtr<UOptimusNodeLink>_&>
                              (&local_60,
                               (TObjectPtr<UOptimusNodeLink> *)
                               (*(longlong *)&param_1[1].field_0x20 + (longlong)(int)uVar6 * 8));
          pTVar9 = (pTVar16->SharedReferenceCount).ReferenceController;
          pFVar10 = pTVar16->Object;
          if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_60.SharedReferenceCount.ReferenceController);
          }
          else {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_60.SharedReferenceCount.ReferenceController);
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_90 = pFVar10;
          local_88 = pTVar9;
          if ((((FOptimusNodeGraphAction_RemoveLink **)this_01[1]._padding_ <= &local_90) &&
              (&local_90 <
               (FOptimusNodeGraphAction_RemoveLink **)this_01[1]._padding_ +
               (longlong)*(int *)((longlong)&this_01[1].Title.Data.AllocatorInstance.Data + 4) * 2))
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar14 = *(int *)&this_01[1].Title.Data.AllocatorInstance.Data;
          piVar2 = (int *)((longlong)&this_01[1].Title.Data.AllocatorInstance.Data + 4);
          if (iVar14 == *piVar2) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)(this_01 + 1),piVar2);
            *(int *)&this_01[1].Title.Data.AllocatorInstance.Data = iVar14;
          }
          *(int *)&this_01[1].Title.Data.AllocatorInstance.Data = iVar14 + 1;
          pFVar22 = (FScriptContainerElement *)this_01[1]._padding_ + (longlong)iVar14 * 0x10;
          *(FOptimusNodeGraphAction_RemoveLink **)pFVar22 = local_90;
          *(TReferenceControllerBase<1> **)(pFVar22 + 8) = local_88;
          local_88 = (TReferenceControllerBase<1> *)0x0;
          local_90 = (FOptimusNodeGraphAction_RemoveLink *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) break;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
LAB_14e23bf93:
          uVar21 = (ulonglong)(uint)local_70.ArrayNum;
          FVar23.Data = FVar23.Data + 4;
        }
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        LOCK();
        paVar3 = &pTVar9->WeakReferenceCount;
        aVar5 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar5 != (atomic<int>)0x1) goto LAB_14e23bf93;
        (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
        uVar21 = (ulonglong)(uint)local_70.ArrayNum;
        FVar23.Data = FVar23.Data + 4;
      } while( true );
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveLink @ 14e23c090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UOptimusNodeGraph::execRemoveLink(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UOptimusNodeLink *pUVar3;
  code *pcVar4;
  TObjectPtr<UOptimusNodePin>_u_0 TVar5;
  FOptimusAction *pFVar6;
  bool bVar7;
  UOptimusActionStack *this;
  TReferenceControllerBase<1> *pTVar8;
  FOptimusAction *pFVar9;
  TObjectPtr<UOptimusNodePin>_u_0 TVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 local_res10 [8];
  TObjectPtr<UOptimusNodePin>_u_0 local_res18;
  TObjectPtr<UOptimusNodePin>_u_0 local_res20;
  TSharedPtr<FOptimusAction,1> local_48;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_res18.DebugPtr = (UOptimusNodePin *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20.DebugPtr = (UOptimusNodePin *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res18.DebugPtr != (UOptimusNodePin *)0x0) &&
     (local_res20.DebugPtr != (UOptimusNodePin *)0x0)) {
    if ((local_res18.DebugPtr)->Direction != (local_res20.DebugPtr)->Direction) {
      pFVar9 = *(FOptimusAction **)&param_1[1].field_0x20;
      iVar1 = *(int *)(param_1 + 2);
      TVar10 = local_res18;
      TVar5 = local_res20;
      if ((local_res18.DebugPtr)->Direction != Input) {
        TVar10 = local_res20;
        TVar5 = local_res18;
      }
      local_48.Object = (FOptimusAction *)(&pFVar9->_padding_ + iVar1);
      while( true ) {
        pFVar6 = local_48.Object;
        if (*(int *)(param_1 + 2) != iVar1) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UOptimusNodeLink>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar9 == pFVar6) break;
        pUVar3 = (UOptimusNodeLink *)pFVar9->_padding_;
        if (((pUVar3->NodeOutputPin).field0_0x0.DebugPtr == TVar5.DebugPtr) &&
           ((pUVar3->NodeInputPin).field0_0x0.DebugPtr == TVar10.DebugPtr)) {
          this = GetActionStack((UOptimusNodeGraph *)param_1);
          pTVar8 = ::operator_new(0x50);
          if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
            local_48.Object = ___xmm_00000000000000000000000000000010;
            local_48.SharedReferenceCount.ReferenceController = _UNK_150651568;
          }
          else {
            pTVar8->SharedReferenceCount = (atomic<int>)0x1;
            pTVar8->WeakReferenceCount = (atomic<int>)0x1;
            pTVar8->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveLink___00_SharedPointerInternals__6B_
            ;
            FOptimusNodeGraphAction_RemoveLink::FOptimusNodeGraphAction_RemoveLink
                      ((FOptimusNodeGraphAction_RemoveLink *)(pTVar8 + 1),pUVar3);
            if (((FOptimusAction *)(pTVar8 + 1) == (FOptimusAction *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
            pTVar11 = pTVar8;
            local_48.Object = (FOptimusAction *)(pTVar8 + 1);
            local_48.SharedReferenceCount.ReferenceController = pTVar8;
          }
          bVar7 = UOptimusActionStack::RunAction(this,&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          *(bool *)param_3 = bVar7;
          return;
        }
        pFVar9 = (FOptimusAction *)&pFVar9->Title;
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7701470802381636611>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                       ,0x403,"InNodeOutputPin->GetDirection() != InNodeInputPin->GetDirection()");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveNode @ 14e23c2f0

void __cdecl UOptimusNodeGraph::execRemoveNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  longlong local_res10 [2];
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(longlong *)local_18.AllocatorInstance.Data = lVar2;
  iVar3 = RemoveNodesAndCount((UOptimusNodeGraph *)param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  *(bool *)param_3 = 0 < iVar3;
  return;
}

// execRemoveNodes @ 14e23c400

void __cdecl UOptimusNodeGraph::execRemoveNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = RemoveNodesAndCount((UOptimusNodeGraph *)param_1,pTVar3);
  *(bool *)param_3 = 0 < iVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execRenameGraph @ 14e23c4d0

void __cdecl UOptimusNodeGraph::execRenameGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  void *local_18;
  undefined8 local_10;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 1) + 0x60))(param_1 + 1,local_res8,&local_18);
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execRenameGraphDirect @ 14e23c5d0

void __cdecl
UOptimusNodeGraph::execRenameGraphDirect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  void *local_18;
  undefined8 local_10;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 1) + 0x58))(param_1 + 1,local_res8,&local_18);
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

