// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 16

// StaticClass @ 14e1195e0

UClass * __cdecl UOptimusNodeSubGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeSubGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeSubGraph",
               &Z_Registration_Info_UClass_UOptimusNodeSubGraph.InnerSingleton,
               StaticRegisterNativesUOptimusNodeSubGraph,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNodeSubGraph>,
               InternalVTableHelperCtorCaller<UOptimusNodeSubGraph>,local_res8,
               UOptimusNodeGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeSubGraph.InnerSingleton;
}

// UOptimusNodeSubGraph @ 14e15ace0

UOptimusNodeSubGraph * __thiscall
UOptimusNodeSubGraph::UOptimusNodeSubGraph(UOptimusNodeSubGraph *this,FVTableHelper *param_1)

{
  UOptimusNodeGraph::UOptimusNodeGraph((UOptimusNodeGraph *)this,param_1);
  *(undefined8 *)&(this->OnBindingArrayPastedDelegate).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  this->_padding_ = (longlong)&___7UOptimusNodeSubGraph__6B_;
  (this->InputBindings).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBindings).InnerArray.ArrayNum = 0;
  (this->InputBindings).InnerArray.ArrayMax = 0;
  (this->OutputBindings).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBindings).InnerArray.ArrayNum = 0;
  (this->OutputBindings).InnerArray.ArrayMax = 0;
  *(undefined8 *)&this->OnBindingArrayPastedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayPastedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayPastedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingValueChangedDelegate = 0;
  *(undefined8 *)&(this->OnBindingValueChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingValueChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingArrayItemAddedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayItemAddedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayItemAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingArrayItemRemovedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayItemRemovedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayItemRemovedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingArrayClearedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayClearedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayClearedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingArrayItemMovedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayItemMovedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayItemMovedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnBindingValueChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnBindingArrayItemAddedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnBindingArrayItemRemovedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnBindingArrayClearedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnBindingArrayItemMovedDelegate).field_0x18 = 2;
  return this;
}

// UOptimusNodeSubGraph @ 14e15ae00

UOptimusNodeSubGraph * __thiscall
UOptimusNodeSubGraph::UOptimusNodeSubGraph(UOptimusNodeSubGraph *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UOptimusNodeGraph::UOptimusNodeGraph((UOptimusNodeGraph *)this,pFVar1);
  *(undefined8 *)&(this->OnBindingArrayPastedDelegate).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  this->_padding_ = (longlong)&___7UOptimusNodeSubGraph__6B_;
  (this->InputBindings).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBindings).InnerArray.ArrayNum = 0;
  (this->InputBindings).InnerArray.ArrayMax = 0;
  (this->OutputBindings).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBindings).InnerArray.ArrayNum = 0;
  (this->OutputBindings).InnerArray.ArrayMax = 0;
  *(undefined8 *)&this->OnBindingArrayPastedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayPastedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayPastedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingValueChangedDelegate = 0;
  *(undefined8 *)&(this->OnBindingValueChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingValueChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingArrayItemAddedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayItemAddedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayItemAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingArrayItemRemovedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayItemRemovedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayItemRemovedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingArrayClearedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayClearedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayClearedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnBindingArrayItemMovedDelegate = 0;
  *(undefined8 *)&(this->OnBindingArrayItemMovedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingArrayItemMovedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnBindingValueChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnBindingArrayItemAddedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnBindingArrayItemRemovedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnBindingArrayClearedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnBindingArrayItemMovedDelegate).field_0x18 = 2;
  return this;
}

// ~UOptimusNodeSubGraph @ 14e1630d0

void __thiscall UOptimusNodeSubGraph::~UOptimusNodeSubGraph(UOptimusNodeSubGraph *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  this->_padding_ = (longlong)&___7UOptimusNodeSubGraph__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBindingArrayItemMovedDelegate).field_0x8,
             *(int *)&(this->OnBindingArrayItemMovedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnBindingArrayItemMovedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBindingArrayItemMovedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBindingArrayClearedDelegate).field_0x8,
             *(int *)&(this->OnBindingArrayClearedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnBindingArrayClearedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBindingArrayClearedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBindingArrayItemRemovedDelegate).field_0x8,
             *(int *)&(this->OnBindingArrayItemRemovedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnBindingArrayItemRemovedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBindingArrayItemRemovedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBindingArrayItemAddedDelegate).field_0x8,
             *(int *)&(this->OnBindingArrayItemAddedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnBindingArrayItemAddedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBindingArrayItemAddedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBindingValueChangedDelegate).field_0x8,
             *(int *)&(this->OnBindingValueChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnBindingValueChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBindingValueChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBindingArrayPastedDelegate).field_0x8,
             *(int *)&(this->OnBindingArrayPastedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnBindingArrayPastedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBindingArrayPastedDelegate);
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->OutputBindings).InnerArray.AllocatorInstance.Data,
             (this->OutputBindings).InnerArray.ArrayNum);
  pFVar2 = (this->OutputBindings).InnerArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->InputBindings).InnerArray.AllocatorInstance.Data,
             (this->InputBindings).InnerArray.ArrayNum);
  pFVar2 = (this->InputBindings).InnerArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IOptimusParameterBindingProvider__6B_;
  UOptimusNodeGraph::~UOptimusNodeGraph((UOptimusNodeGraph *)this);
  return;
}

// GetBindingDeclaration @ 14e1bb9e0

FString * __thiscall
UOptimusNodeSubGraph::GetBindingDeclaration
          (UOptimusNodeSubGraph *this,FString *__return_storage_ptr__,FName param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetBindingSupportAtomicCheckBoxVisibility @ 14e1bbec0

bool __thiscall
UOptimusNodeSubGraph::GetBindingSupportAtomicCheckBoxVisibility
          (UOptimusNodeSubGraph *this,FName param_1)

{
  return false;
}

// GetBindingSupportReadCheckBoxVisibility @ 14e1bbf60

bool __thiscall
UOptimusNodeSubGraph::GetBindingSupportReadCheckBoxVisibility
          (UOptimusNodeSubGraph *this,FName param_1)

{
  return false;
}

// GetDefaultComponentBinding @ 14e1c2980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UOptimusComponentSourceBinding * __thiscall
UOptimusNodeSubGraph::GetDefaultComponentBinding
          (UOptimusNodeSubGraph *this,FOptimusPinTraversalContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UOptimusNode_GraphTerminal *pUVar3;
  UOptimusComponentSourceBinding *pUVar4;
  UObject *pUVar5;
  UOptimusNode *this_00;
  UClass *pUVar6;
  longlong *plVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 auStackY_b8 [32];
  FString local_88;
  FString local_78;
  FString local_68;
  UOptimusNodePin *local_58;
  undefined1 local_50 [32];
  void *local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pUVar3 = GetTerminalNode(this,Entry);
  if (pUVar3 == (UOptimusNode_GraphTerminal *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9090349761462009807>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeSubGraph.cpp"
                       ,0x31,"EntryNode");
    if (!bVar2) {
      return (UOptimusComponentSourceBinding *)0x0;
    }
    pcVar1 = (code *)swi(3);
    pUVar4 = (UOptimusComponentSourceBinding *)(*pcVar1)();
    return pUVar4;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(pUVar3->DefaultComponentPin).WeakPtr);
  if (bVar2) {
    pcVar1 = *(code **)(pUVar3->_padding_ + 0x10);
    pUVar5 = FWeakObjectPtr::Get(&(pUVar3->DefaultComponentPin).WeakPtr);
    (*pcVar1)(&pUVar3->_padding_,&local_58,pUVar5,param_1);
    if (local_58 != (UOptimusNodePin *)0x0) {
      this_00 = UOptimusNodePin::GetOwningNode(local_58);
      if (this_00 == (UOptimusNode *)0x0) {
        pFVar8 = GetTypeName<IOptimusNodeSubGraphReferencer>(&local_88);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar9);
      }
      pUVar6 = Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister();
      plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar6);
      if (plVar7 != (longlong *)0x0) {
        pUVar4 = (UOptimusComponentSourceBinding *)(**(code **)(*plVar7 + 0x18))(plVar7,local_50);
        if (local_30 == (void *)0x0) {
          return pUVar4;
        }
        FMemory::Free(local_30);
        return pUVar4;
      }
      pFVar8 = GetTypeName<IOptimusNodeSubGraphReferencer>(&local_78);
      pwVar9 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UOptimusNode>(&local_68,this_00);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar10);
    }
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
      return (UOptimusComponentSourceBinding *)0x0;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_964655616096206720>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                       ,0x80,"DefaultComponentPin.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UOptimusComponentSourceBinding *)(*pcVar1)();
      return pUVar4;
    }
  }
  return (UOptimusComponentSourceBinding *)0x0;
}

// GetPrivateStaticClass @ 14e1d70a0

UClass * __cdecl UOptimusNodeSubGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeSubGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeSubGraph",
               &Z_Registration_Info_UClass_UOptimusNodeSubGraph.InnerSingleton,
               StaticRegisterNativesUOptimusNodeSubGraph,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNodeSubGraph>,
               InternalVTableHelperCtorCaller<UOptimusNodeSubGraph>,local_res8,
               UOptimusNodeGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeSubGraph.InnerSingleton;
}

// GetSanitizedBindingName @ 14e1e0070

FName __thiscall
UOptimusNodeSubGraph::GetSanitizedBindingName
          (UOptimusNodeSubGraph *this,FName param_1,FName param_2)

{
  longlong lVar1;
  FName FVar2;
  FName FVar3;
  longlong in_R9;
  FName local_res10;
  
  *(FName *)param_1 = param_2;
  if (param_2 == (FName)0x0) {
    ::FName::FName(&local_res10,L"EmptyName");
    *(FName *)param_1 = local_res10;
  }
  FVar2 = Optimus::GetSanitizedNameForHlsl((FName)&local_res10);
  lVar1 = *(longlong *)FVar2;
  *(longlong *)param_1 = lVar1;
  if (lVar1 != in_R9) {
    FVar2 = (FName)GetTerminalNode(this,Entry);
    FVar3 = (FName)GetTerminalNode(this,Return);
    FVar2 = UOptimusNode::GetAvailablePinNameStable((UObject *)&local_res10,FVar2);
    *(undefined8 *)param_1 = *(undefined8 *)FVar2;
    FVar2 = UOptimusNode::GetAvailablePinNameStable((UObject *)&local_res10,FVar3);
    *(undefined8 *)param_1 = *(undefined8 *)FVar2;
  }
  return param_1;
}

// GetTerminalNode @ 14e1e6ed0

UOptimusNode_GraphTerminal * __thiscall
UOptimusNodeSubGraph::GetTerminalNode(UOptimusNodeSubGraph *this,EOptimusTerminalType param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  UOptimusNode_GraphTerminal *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  plVar6 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<UOptimusNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar6 == plVar1) break;
    pUVar4 = (UOptimusNode_GraphTerminal *)*plVar6;
    if (pUVar4 != (UOptimusNode_GraphTerminal *)0x0) {
      pUVar5 = UOptimusNode_GraphTerminal::StaticClass();
      iVar3 = (int)pUVar5->_padding_;
      if (((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar5->_padding_)) && (pUVar4->TerminalType == param_1)) {
        return pUVar4;
      }
    }
    plVar6 = plVar6 + 1;
  }
  return (UOptimusNode_GraphTerminal *)0x0;
}

// GetTypeUsageFlags @ 14e1e7de0

EOptimusDataTypeUsageFlags __thiscall
UOptimusNodeSubGraph::GetTypeUsageFlags(UOptimusNodeSubGraph *this,FOptimusDataDomain *param_1)

{
  EOptimusDataTypeUsageFlags EVar1;
  
  if ((param_1->Type != Dimensional) || (EVar1 = PinType, (param_1->DimensionNames).ArrayNum != 0))
  {
    EVar1 = Resource;
  }
  return EVar1;
}

// SanitizeBinding @ 14e21ae40

void __thiscall
UOptimusNodeSubGraph::SanitizeBinding
          (UOptimusNodeSubGraph *this,FOptimusParameterBinding *param_1,FName param_2,bool param_3)

{
  FOptimusDataType *pFVar1;
  FName FVar2;
  FName FVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  FOptimusDataTypeRegistry *this_00;
  FFieldClass *pFVar5;
  FOptimusDataDomain *pFVar6;
  FName local_res10;
  undefined1 local_78 [12];
  int iStack_6c;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  FUtf8String local_38;
  ForAnyElementType local_28;
  
  if ((param_1->Name).Name == (FName)0x0) {
    ::FName::FName(&local_res10,L"EmptyName");
  }
  FVar2 = Optimus::GetSanitizedNameForHlsl((FName)&local_res10);
  FVar2 = *(FName *)FVar2;
  if (FVar2 != param_2) {
    FVar2 = (FName)GetTerminalNode(this,Entry);
    FVar3 = (FName)GetTerminalNode(this,Return);
    UOptimusNode::GetAvailablePinNameStable((UObject *)&local_res10,FVar2);
    FVar2 = UOptimusNode::GetAvailablePinNameStable((UObject *)&local_res10,FVar3);
    FVar2 = *(FName *)FVar2;
  }
  (param_1->Name).Name = FVar2;
  pTVar4 = FOptimusDataTypeRef::Resolve
                     (&param_1->DataType,(TSharedPtr<FOptimusDataType_const_,1> *)local_78);
  pFVar1 = pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (stack0xffffffffffffff90);
  if (pFVar1 == (FOptimusDataType *)0x0) {
    this_00 = FOptimusDataTypeRegistry::Get();
    pFVar5 = FFloatProperty::StaticClass();
    pTVar4 = FOptimusDataTypeRegistry::FindType(this_00,&local_68,pFVar5);
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_58._8_8_ = (FScriptContainerElement *)0x0;
    local_40 = 0;
    local_48 = 0;
    FUtf8String::Reset(&local_38,0);
    unique0x00023d00 = (pTVar4->SharedReferenceCount).ReferenceController;
    local_78._0_8_ = pTVar4->Object;
    if (unique0x00023d00 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      unique0x00023d00->SharedReferenceCount =
           (atomic<int>)((int)unique0x00023d00->SharedReferenceCount + 1);
      UNLOCK();
    }
    FOptimusDataTypeRef::Set
              ((FOptimusDataTypeRef *)local_58,(TSharedPtr<FOptimusDataType_const_,1> *)local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar4->SharedReferenceCount).ReferenceController);
    (param_1->DataType).TypeName.ComparisonIndex = (FNameEntryId)local_58._0_4_;
    (param_1->DataType).TypeName.Number = local_58._4_4_;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&(param_1->DataType).TypeObject,
               (TPersistentObjectPtr<FSoftObjectPath> *)(local_58 + 8));
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FVar2 = UOptimusSkinnedMeshComponentSource::Domains::Vertex;
  if (((!param_3) && ((param_1->DataDomain).Type == Dimensional)) &&
     ((param_1->DataDomain).DimensionNames.ArrayNum == 0)) {
    local_78._0_8_ = (FOptimusDataType *)0x0;
    local_78._8_4_ = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,0,(ForAnyElementType *)local_78,1,&iStack_6c);
    *(FName *)local_78._0_8_ = FVar2;
    pFVar6 = FOptimusDataDomain::FOptimusDataDomain
                       ((FOptimusDataDomain *)local_58,
                        (TArray<FName,TSizedDefaultAllocator<32>_> *)local_78);
    FOptimusDataDomain::operator=(&param_1->DataDomain,pFVar6);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_58._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
  }
  return;
}

// StaticRegisterNativesUOptimusNodeSubGraph @ 14e225c00

void __cdecl UOptimusNodeSubGraph::StaticRegisterNativesUOptimusNodeSubGraph(void)

{
  return;
}

// _getUObject @ 14e238de0

UObject * __thiscall UOptimusNodeSubGraph::_getUObject(UOptimusNodeSubGraph *this)

{
  return (UObject *)&this[-1].OnBindingArrayClearedDelegate.field_0x18;
}

// _getUObject`adjustor{112}' @ 14e238dec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNodeSubGraph::_getUObject`adjustor{112}' (void)const __ptr64 */

UObject * __thiscall UOptimusNodeSubGraph::_getUObject_adjustor_112__(UOptimusNodeSubGraph *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNodeSubGraph *)&this[-1].OnBindingArrayItemAddedDelegate.field_0x10)
  ;
  return (UObject *)pUVar1;
}

