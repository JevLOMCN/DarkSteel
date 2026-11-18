// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 27

// StaticClass @ 14e11a810

UClass * __cdecl UOptimusNode_GraphTerminal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_GraphTerminal",
               &Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.InnerSingleton,
               StaticRegisterNativesUOptimusNode_GraphTerminal,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_GraphTerminal>,
               InternalVTableHelperCtorCaller<UOptimusNode_GraphTerminal>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.InnerSingleton;
}

// UOptimusNode_GraphTerminal @ 14e15bd00

UOptimusNode_GraphTerminal * __thiscall
UOptimusNode_GraphTerminal::UOptimusNode_GraphTerminal
          (UOptimusNode_GraphTerminal *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePinRouter__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusAlternativeSelectedObjectProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCopyableNode__;
  (this->DefaultComponentPin).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningGraph).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UOptimusNode_GraphTerminal @ 14e15bd70

UOptimusNode_GraphTerminal * __thiscall
UOptimusNode_GraphTerminal::UOptimusNode_GraphTerminal(UOptimusNode_GraphTerminal *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePinRouter__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusAlternativeSelectedObjectProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCopyableNode__;
  (this->DefaultComponentPin).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningGraph).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UOptimusNode_GraphTerminal @ 14e1638a0

void __thiscall
UOptimusNode_GraphTerminal::~UOptimusNode_GraphTerminal(UOptimusNode_GraphTerminal *this)

{
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&___7IOptimusNonCopyableNode__6B_;
  this->_padding_ = (longlong)&___7IOptimusNonCollapsibleNode__6B_;
  this->_padding_ = (longlong)&___7IOptimusAlternativeSelectedObjectProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodePinRouter__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// AddPinForNewBinding @ 14e177890

void __thiscall
UOptimusNode_GraphTerminal::AddPinForNewBinding(UOptimusNode_GraphTerminal *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FOptimusParameterBinding *pFVar4;
  EOptimusNodePinDirection EVar5;
  
  if ((param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) && (this->TerminalType == Entry))
  {
    pUVar3 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    EVar5 = Output;
    pUVar3 = pUVar3 + 4;
  }
  else {
    if (param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) {
      return;
    }
    if (this->TerminalType != Return) {
      return;
    }
    pUVar3 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    EVar5 = Input;
    pUVar3 = (UObject *)&pUVar3[4].field_0x10;
  }
  if (pUVar3 != (UObject *)0x0) {
    if ((*(int *)&pUVar3->field_0x8 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingArrayPtr->Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                           ,0xd8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar4 = FOptimusParameterBindingArray::Last((FOptimusParameterBindingArray *)pUVar3,0);
    UOptimusNode::AddPin((UOptimusNode *)this,pFVar4,EVar5,(UOptimusNodePin *)0x0);
  }
  return;
}

// BeginDestroy @ 14e17ec70

void __thiscall UOptimusNode_GraphTerminal::BeginDestroy(UOptimusNode_GraphTerminal *this)

{
  TWeakObjectPtr<UOptimusNodeSubGraph,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  
  UObject::BeginDestroy((UObject *)this);
  this_00 = &this->OwningGraph;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x20,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[5].field_0x18,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x10,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 8),this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[8].field_0x20,this);
  }
  return;
}

// CanUserDeleteNode @ 14e181c00

bool __thiscall UOptimusNode_GraphTerminal::CanUserDeleteNode(UOptimusNode_GraphTerminal *this)

{
  return false;
}

// ConstructNode @ 14e193a20

void __thiscall UOptimusNode_GraphTerminal::ConstructNode(UOptimusNode_GraphTerminal *this)

{
  EOptimusTerminalType EVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  UObject *pUVar5;
  FOptimusDataTypeRegistry *this_00;
  UClass *pUVar6;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar7;
  size_t _Size;
  FOptimusParameterBinding *pFVar8;
  FOptimusParameterBinding *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UOptimusNodePin *local_res18;
  undefined1 local_e8 [32];
  FUtf8String local_c8;
  undefined1 local_b8 [32];
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  TSharedPtr<FOptimusDataType_const_,1> local_88;
  FOptimusDataDomain local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    EVar1 = this->TerminalType;
    if (EVar1 == Unknown) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                         ,0x4d,L"");
      if (bVar4) goto code_r0x00014e193d25;
    }
    else if (EVar1 == Entry) {
      this_00 = FOptimusDataTypeRegistry::Get();
      pUVar6 = UOptimusComponentSourceBinding::StaticClass();
      pTVar7 = FOptimusDataTypeRegistry::FindType(this_00,&local_38,pUVar6);
      local_e8._0_4_ = 0;
      local_e8._4_4_ = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_e8._8_8_ = 0;
      local_e8._24_8_ = 0;
      local_e8._16_8_ = 0;
      FUtf8String::Reset(&local_c8,0);
      local_88.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      local_88.Object = pTVar7->Object;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_e8,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar7->SharedReferenceCount).ReferenceController);
      _Src.Data = local_c8.Data.AllocatorInstance.Data;
      _Size = (size_t)local_c8.Data.ArrayNum;
      local_b8._0_8_ = local_e8._0_8_;
      local_b8._8_8_ = local_e8._8_8_;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = local_c8.Data.ArrayNum;
      local_b8._16_8_ = local_e8._16_8_;
      local_b8._24_8_ = local_e8._24_8_;
      if (local_c8.Data.ArrayNum == 0) {
        local_8c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_c8.Data.ArrayNum,0,&local_98,local_c8.Data.ArrayNum,&local_8c);
        memcpy(local_98.Data,_Src.Data,_Size);
      }
      local_78.Type = Dimensional;
      local_78._4_4_ = 0;
      local_78.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.DimensionNames.ArrayNum = 0;
      local_78.DimensionNames.ArrayMax = 0;
      local_78.Multiplier = 0;
      local_78._28_4_ = 0;
      local_78.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Expression.Data.ArrayNum = 0;
      local_78.Expression.Data.ArrayMax = 0;
      local_78.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.LevelNames_DEPRECATED.ArrayNum = 0;
      local_78.LevelNames_DEPRECATED.ArrayMax = 0;
      FOptimusDataDomain::FOptimusDataDomain(&local_78);
      local_res18 = UOptimusNode::AddPinDirect
                              ((UOptimusNode *)this,
                               UOptimusNodeSubGraph::GraphDefaultComponentPinName,Output,&local_78,
                               (FOptimusDataTypeRef *)local_b8,(UOptimusNodePin *)0x0,
                               (UOptimusNodePin *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res18 != (UOptimusNodePin *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res18);
      }
      FWeakObjectPtr::operator=(&(this->DefaultComponentPin).WeakPtr,(FObjectPtr)&local_res18);
      if (local_78.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.LevelNames_DEPRECATED.AllocatorInstance.Data);
      }
      if (local_78.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Expression.Data.AllocatorInstance.Data);
      }
      if (local_78.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.DimensionNames.AllocatorInstance.Data);
      }
      iVar2 = *(int *)&pUVar5[4].field_0x8;
      pFVar8 = *(FOptimusParameterBinding **)(pUVar5 + 4);
      pFVar9 = pFVar8 + iVar2;
      while( true ) {
        if (*(int *)&pUVar5[4].field_0x8 != iVar2) {
          `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar8 == pFVar9) break;
        UOptimusNode::AddPinDirect((UOptimusNode *)this,pFVar8,Output,(UOptimusNodePin *)0x0);
        pFVar8 = pFVar8 + 1;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    else if (EVar1 == Return) {
      iVar2 = *(int *)&pUVar5[4].field_0x18;
      pFVar8 = *(FOptimusParameterBinding **)&pUVar5[4].field_0x10;
      pFVar9 = pFVar8 + iVar2;
      while( true ) {
        if (*(int *)&pUVar5[4].field_0x18 != iVar2) {
          `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar8 == pFVar9) break;
        UOptimusNode::AddPinDirect((UOptimusNode *)this,pFVar8,Input,(UOptimusNodePin *)0x0);
        pFVar8 = pFVar8 + 1;
      }
    }
    return;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_964655616096206803>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                     ,0x2d,"Graph");
  if (!bVar4) {
    return;
  }
code_r0x00014e193d25:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// GetBindingPins @ 14e1bbc30

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_GraphTerminal::GetBindingPins
          (UOptimusNode_GraphTerminal *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->TerminalType != Entry) {
    if (this->TerminalType != Return) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
    UOptimusNode::GetPinsByDirection((UOptimusNode *)this,__return_storage_ptr__,Input,false);
    return __return_storage_ptr__;
  }
  UOptimusNode::GetPinsByDirection((UOptimusNode *)this,&local_18,Output,false);
  if ((local_18.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  if (local_18.ArrayNum + -1 != 0) {
    memmove(local_18.AllocatorInstance.Data,local_18.AllocatorInstance.Data + 8,
            (longlong)(local_18.ArrayNum + -1) << 3);
  }
  local_18.ArrayNum = local_18.ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&local_18.AllocatorInstance,local_18.ArrayNum,&local_18.ArrayMax);
  (__return_storage_ptr__->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// GetDefaultComponentBinding @ 14e1c2dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UOptimusComponentSourceBinding * __thiscall
UOptimusNode_GraphTerminal::GetDefaultComponentBinding
          (UOptimusNode_GraphTerminal *this,FOptimusPinTraversalContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UOptimusComponentSourceBinding *pUVar3;
  UObject *pUVar4;
  UOptimusNode *this_00;
  UClass *pUVar5;
  longlong *plVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_b8 [32];
  FString local_88;
  FString local_78;
  FString local_68;
  UOptimusNodePin *local_58;
  undefined1 local_50 [32];
  void *local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar2 = FWeakObjectPtr::IsValid(&(this->DefaultComponentPin).WeakPtr);
  if (bVar2) {
    pcVar1 = *(code **)(this->_padding_ + 0x10);
    pUVar4 = FWeakObjectPtr::Get(&(this->DefaultComponentPin).WeakPtr);
    (*pcVar1)(&this->_padding_,&local_58,pUVar4,param_1);
    if (local_58 == (UOptimusNodePin *)0x0) {
      pUVar3 = (UOptimusComponentSourceBinding *)0x0;
    }
    else {
      this_00 = UOptimusNodePin::GetOwningNode(local_58);
      if (this_00 == (UOptimusNode *)0x0) {
        pFVar7 = GetTypeName<IOptimusNodeSubGraphReferencer>(&local_88);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar8);
      }
      pUVar5 = Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar5);
      if (plVar6 == (longlong *)0x0) {
        pFVar7 = GetTypeName<IOptimusNodeSubGraphReferencer>(&local_78);
        pwVar8 = L"";
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = GetFullNameForCastLogError<UOptimusNode>(&local_68,this_00);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar8,pwVar9);
      }
      pUVar3 = (UOptimusComponentSourceBinding *)(**(code **)(*plVar6 + 0x18))(plVar6,local_50);
    }
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_964655616096206720>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                       ,0x80,"DefaultComponentPin.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UOptimusComponentSourceBinding *)(*pcVar1)();
      return pUVar3;
    }
    pUVar3 = (UOptimusComponentSourceBinding *)0x0;
  }
  return pUVar3;
}

// GetDisplayName @ 14e1c4940

FText * __thiscall
UOptimusNode_GraphTerminal::GetDisplayName
          (UOptimusNode_GraphTerminal *this,FText *__return_storage_ptr__)

{
  EOptimusTerminalType EVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  
  EVar1 = this->TerminalType;
  if (EVar1 == Unknown) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    if (EVar1 == Entry) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"OptimusNodeGraphTerminal",L"TerminalType_Entry",L"Entry");
      return __return_storage_ptr__;
    }
    if (EVar1 == Return) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"OptimusNodeGraphTerminal",L"TerminalType_Return",L"Return"
                );
      return __return_storage_ptr__;
    }
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNodeCategory @ 14e1cae70

FName __thiscall UOptimusNode_GraphTerminal::GetNodeCategory(UOptimusNode_GraphTerminal *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetObjectToShowWhenSelected @ 14e1cb9f0

UObject * __thiscall
UOptimusNode_GraphTerminal::GetObjectToShowWhenSelected(UOptimusNode_GraphTerminal *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  return pUVar1;
}

// GetPinCounterpart @ 14e1ccbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOptimusRoutedNodePin * __thiscall
UOptimusNode_GraphTerminal::GetPinCounterpart
          (UOptimusNode_GraphTerminal *this,FOptimusRoutedNodePin *__return_storage_ptr__,
          UOptimusNodePin *param_1,FOptimusPinTraversalContext *param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UOptimusNode *pUVar4;
  FOptimusRoutedNodePin *pFVar5;
  UClass *pUVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ForElementType<IOptimusNodePinRouter_const_*> FVar9;
  ForElementType<IOptimusNodePinRouter_const_*> FVar10;
  undefined1 auStackY_a8 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_78;
  UOptimusNodePin *local_68;
  FOptimusPinTraversalContext local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (((param_1 == (UOptimusNodePin *)0x0) ||
      (pUVar4 = UOptimusNodePin::GetOwningNode(param_1),
      pUVar4 != (UOptimusNode *)&this[-1]._padding_)) ||
     (iVar3 = (param_2->ReferenceNesting).ArrayNum, iVar3 == 0)) {
    __return_storage_ptr__->NodePin = (UOptimusNodePin *)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayNum = 0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayMax = 4;
  }
  else {
    uVar8 = 0;
    if ((int)(iVar3 - 1U) < iVar3) {
      uVar8 = ~(iVar3 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FOptimusRoutedNodePin *)(*pcVar1)();
      return pFVar5;
    }
    FVar10 = (param_2->ReferenceNesting).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<IOptimusNodePinRouter_const_*>)param_2;
    if (FVar10 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FVar9 = FVar10;
    }
    if ((*(longlong **)
          ((int *)((longlong)FVar9 + -8) + (longlong)(param_2->ReferenceNesting).ArrayNum * 2) !=
         (longlong *)0x0) &&
       (pUVar4 = (UOptimusNode *)
                 (**(code **)(**(longlong **)
                                ((int *)((longlong)FVar9 + -8) +
                                (longlong)(param_2->ReferenceNesting).ArrayNum * 2) + 8))(),
       pUVar4 != (UOptimusNode *)0x0)) {
      pUVar6 = UOptimusNode::StaticClass();
      iVar3 = (int)pUVar6->_padding_;
      if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar6->_padding_)) {
        pTVar7 = UOptimusNodePin::GetPinNamePath(param_1,&local_78);
        local_68 = UOptimusNode::FindPinFromPath(pUVar4,pTVar7);
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        FOptimusPinTraversalContext::FOptimusPinTraversalContext(&local_60,param_2);
        if ((local_60.ReferenceNesting.ArrayNum < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FOptimusRoutedNodePin *)(*pcVar1)();
          return pFVar5;
        }
        FVar10 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_60;
        if (local_60.ReferenceNesting.AllocatorInstance.SecondaryData !=
            (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FVar10 = local_60.ReferenceNesting.AllocatorInstance.SecondaryData;
        }
        _Dst = (void *)((longlong)FVar10 + (longlong)(local_60.ReferenceNesting.ArrayNum + -1) * 8);
        iVar3 = (local_60.ReferenceNesting.ArrayNum - (local_60.ReferenceNesting.ArrayNum + -1)) +
                -1;
        if (iVar3 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar3 << 3);
        }
        local_60.ReferenceNesting.ArrayNum = local_60.ReferenceNesting.ArrayNum + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
                  (8,8,(ForElementType<IOptimusNodePinRouter_const_*> *)&local_60,
                   local_60.ReferenceNesting.ArrayNum,&local_60.ReferenceNesting.ArrayMax);
        __return_storage_ptr__->NodePin = local_68;
        FOptimusPinTraversalContext::FOptimusPinTraversalContext
                  (&__return_storage_ptr__->TraversalContext,&local_60);
        if (local_60.ReferenceNesting.AllocatorInstance.SecondaryData ==
            (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free((void *)local_60.ReferenceNesting.AllocatorInstance.SecondaryData);
        return __return_storage_ptr__;
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_964655616096206741>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                       ,0x6b,"CounterpartNode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FOptimusRoutedNodePin *)(*pcVar1)();
      return pFVar5;
    }
    __return_storage_ptr__->NodePin = (UOptimusNodePin *)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayNum = 0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayMax = 4;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d7be0

UClass * __cdecl UOptimusNode_GraphTerminal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_GraphTerminal",
               &Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.InnerSingleton,
               StaticRegisterNativesUOptimusNode_GraphTerminal,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_GraphTerminal>,
               InternalVTableHelperCtorCaller<UOptimusNode_GraphTerminal>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.InnerSingleton;
}

// InitializeTransientData @ 14e1eda20

void __thiscall
UOptimusNode_GraphTerminal::InitializeTransientData(UOptimusNode_GraphTerminal *this)

{
  TWeakObjectPtr<UOptimusNodeSubGraph,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UObject *local_res8;
  undefined1 local_a8 [24];
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong lStack_30;
  
  pUVar5 = (UObject *)this->_padding_;
  if (pUVar5 == (UObject *)0x0) {
LAB_14e1eda80:
    local_res8 = (UObject *)0x0;
  }
  else {
    pUVar4 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14e1eda80;
    pUVar4 = UOptimusNodeSubGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       (local_res8 = pUVar5,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar4->_padding_)) goto LAB_14e1eda80;
  }
  this_00 = &this->OwningGraph;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&stack0x00000008);
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_964655616096206695>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                       ,0x99,"OwningGraph.IsValid()");
    if (!bVar3) {
      return;
    }
code_r0x00014e1edb46:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[4].field_0x20,
                     this);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_964655616096206695>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                       ,0x99,"!OwningGraph->GetOnBindingArrayPasted().IsBoundToObject(this)");
    if (bVar3) goto code_r0x00014e1edb46;
  }
  else {
    local_a8._8_4_ = 0;
    local_a8._0_8_ = RecreateBindingPins;
    lStack_80 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_88 = RecreateBindingPins;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar5[4].field_0x20,(UOptimusNode_GraphTerminal *)&stack0x00000010,
               (pmf_3f6bee8b *)this);
    local_a8._8_4_ = 0;
    local_a8._0_8_ = SyncPinsToBindings;
    lStack_70 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_78 = SyncPinsToBindings;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar5[5].field_0x18,(UOptimusNode_GraphTerminal *)&stack0x00000018,
               (pmf_3f6bee8b *)this);
    local_a8._8_4_ = 0;
    local_a8._0_8_ = AddPinForNewBinding;
    lStack_60 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_68 = AddPinForNewBinding;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar5[6].field_0x10,(UOptimusNode_GraphTerminal *)&stack0x00000020,
               (pmf_3f6bee8b *)this);
    local_a8._8_4_ = 0;
    local_a8._0_8_ = RemoveStalePins;
    lStack_50 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_58 = RemoveStalePins;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar5[7].field_0x8,(UOptimusNode_GraphTerminal *)(local_a8 + 0x10),
               (pmf_3f6bee8b *)this);
    local_a8._0_8_ = RemoveStalePins;
    local_a8._8_4_ = 0;
    lStack_40 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_48 = RemoveStalePins;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               (pUVar5 + 8),(UOptimusNode_GraphTerminal *)&stack0xffffffffffffff70,
               (pmf_3f6bee8b *)this);
    local_a8._8_4_ = 0;
    local_a8._0_8_ = OnBindingMoved;
    lStack_30 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_38 = OnBindingMoved;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar5[8].field_0x20,(UOptimusNode_GraphTerminal *)local_a8,(pmf_3f6bee8b *)this);
  }
  return;
}

// OnBindingMoved @ 14e1f40e0

void __thiscall
UOptimusNode_GraphTerminal::OnBindingMoved(UOptimusNode_GraphTerminal *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UObject *pUVar6;
  int iVar7;
  UOptimusNodePin *pUVar8;
  ForAnyElementType FVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  UOptimusNodePin *pUVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  undefined8 local_88;
  undefined8 local_80;
  FName local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> local_70;
  TArray<FName,TSizedDefaultAllocator<32>_> local_60;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_50;
  
  GetBindingPins(this,&local_50);
  if ((param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) && (this->TerminalType == Entry))
  {
    pUVar6 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    pUVar6 = pUVar6 + 4;
  }
  else {
    if ((param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) ||
       (this->TerminalType != Return)) goto LAB_14e1f447f;
    pUVar6 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    pUVar6 = (UObject *)&pUVar6[4].field_0x10;
  }
  if (pUVar6 != (UObject *)0x0) {
    pUVar13 = (UOptimusNodePin *)0x0;
    iVar7 = local_50.ArrayNum;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    pFVar1 = local_50.AllocatorInstance.Data + (longlong)iVar7 * 8;
    local_60.ArrayMax = 0;
    pUVar8 = pUVar13;
    FVar9.Data = local_50.AllocatorInstance.Data;
    while( true ) {
      uVar4 = (uint)pUVar8;
      if (local_50.ArrayNum != iVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
        uVar4 = local_60.ArrayNum;
      }
      if (FVar9.Data == pFVar1) break;
      local_88 = *(undefined8 *)(*(longlong *)FVar9.Data + 0x18);
      if (((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar4 = local_60.ArrayNum, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar4 == local_60.ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      local_60.ArrayNum = uVar4 + 1;
      FVar9.Data = FVar9.Data + 8;
      *(undefined8 *)(local_60.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = local_88;
      pUVar8 = (UOptimusNodePin *)(ulonglong)(uint)local_60.ArrayNum;
    }
    iVar7 = *(int *)&pUVar6->field_0x8;
    puVar10 = *(undefined8 **)pUVar6;
    puVar11 = puVar10 + (longlong)iVar7 * 0x10;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pUVar8 = pUVar13;
    while( true ) {
      uVar4 = (uint)pUVar8;
      if (*(int *)&pUVar6->field_0x8 != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
        uVar4 = local_70.ArrayNum;
      }
      if (puVar10 == puVar11) break;
      local_80 = *puVar10;
      if (((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 <
           local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar4 = local_70.ArrayNum, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar4 == local_70.ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      local_70.ArrayNum = uVar4 + 1;
      puVar10 = puVar10 + 0x10;
      *(undefined8 *)(local_70.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = local_80;
      pUVar8 = (UOptimusNodePin *)(ulonglong)(uint)local_70.ArrayNum;
    }
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    local_78.ComparisonIndex.Value = 0;
    local_78.Number = 0;
    bVar3 = Optimus::FindMovedItemInNameArray(&local_60,&local_70,&local_res20,&local_78);
    if (bVar3) {
      for (FVar9.Data = local_50.AllocatorInstance.Data;
          FVar9.Data != local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
          FVar9.Data = FVar9.Data + 8) {
        if (*(FName *)(*(longlong *)FVar9.Data + 0x18) == local_res20) {
          uVar4 = (uint)((longlong)FVar9.Data - (longlong)local_50.AllocatorInstance.Data >> 3);
          goto LAB_14e1f43cb;
        }
      }
      uVar4 = 0xffffffff;
LAB_14e1f43cb:
      if (local_78 != (FName)0x0) {
        for (FVar9.Data = local_50.AllocatorInstance.Data;
            FVar9.Data != local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
            FVar9.Data = FVar9.Data + 8) {
          if (*(FName *)(*(longlong *)FVar9.Data + 0x18) == local_78) {
            uVar12 = (uint)((longlong)FVar9.Data - (longlong)local_50.AllocatorInstance.Data >> 3);
            if (uVar12 != 0xffffffff) {
              uVar5 = 0;
              if ((int)uVar12 < local_50.ArrayNum) {
                uVar5 = ~uVar12 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pUVar13 = *(UOptimusNodePin **)
                         (local_50.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
            }
            break;
          }
        }
      }
      uVar12 = 0;
      if ((int)uVar4 < local_50.ArrayNum) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UOptimusNode::MovePin
                ((UOptimusNode *)this,
                 *(UOptimusNodePin **)(local_50.AllocatorInstance.Data + (longlong)(int)uVar4 * 8),
                 pUVar13);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
LAB_14e1f447f:
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// RecreateBindingPins @ 14e204890

void __thiscall
UOptimusNode_GraphTerminal::RecreateBindingPins(UOptimusNode_GraphTerminal *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FName *pFVar5;
  FName *pFVar6;
  EOptimusNodePinDirection EVar7;
  undefined1 local_res10 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_68;
  undefined1 local_58 [16];
  FSoftObjectPath local_48;
  
  GetBindingPins(this,&local_68);
  if ((param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) && (this->TerminalType == Entry))
  {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    EVar7 = Output;
    pUVar2 = pUVar2 + 4;
  }
  else {
    if ((param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) ||
       (this->TerminalType != Return)) goto LAB_14e204a02;
    pUVar2 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    EVar7 = Input;
    pUVar2 = (UObject *)&pUVar2[4].field_0x10;
  }
  if (pUVar2 != (UObject *)0x0) {
    iVar3 = local_68.ArrayNum;
    pFVar1 = local_68.AllocatorInstance.Data + (longlong)iVar3 * 8;
    FVar4.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if (local_68.ArrayNum != iVar3) {
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar4.Data == pFVar1) break;
      UOptimusNode::RemovePin((UOptimusNode *)this,*(UOptimusNodePin **)FVar4.Data);
      FVar4.Data = FVar4.Data + 8;
    }
    iVar3 = *(int *)&pUVar2->field_0x8;
    pFVar5 = *(FName **)pUVar2;
    pFVar6 = pFVar5 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (*(int *)&pUVar2->field_0x8 != iVar3) {
        `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar6) break;
      local_58._0_8_ = pFVar5[1];
      local_58._8_8_ = pFVar5[2];
      FSoftObjectPath::FSoftObjectPath(&local_48,(FSoftObjectPath *)(pFVar5 + 3));
      UOptimusNode::AddPin
                ((UOptimusNode *)this,*pFVar5,EVar7,(FOptimusDataDomain *)(pFVar5 + 7),
                 (FOptimusDataTypeRef *)local_58,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
      pFVar5 = pFVar5 + 0x10;
    }
  }
LAB_14e204a02:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// RemoveStalePins @ 14e216b90

void __thiscall
UOptimusNode_GraphTerminal::RemoveStalePins(UOptimusNode_GraphTerminal *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  UOptimusNodePin *pUVar3;
  int iVar4;
  UObject *pUVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_28;
  
  GetBindingPins(this,&local_28);
  if ((param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) && (this->TerminalType == Entry))
  {
    pUVar5 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    pUVar5 = pUVar5 + 4;
  }
  else {
    if ((param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) ||
       (this->TerminalType != Return)) goto LAB_14e216ca6;
    pUVar5 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    pUVar5 = (UObject *)&pUVar5[4].field_0x10;
  }
  iVar4 = local_28.ArrayNum;
  if (pUVar5 != (UObject *)0x0) {
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar7.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar4) {
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar7.Data == pFVar1) break;
      plVar2 = *(longlong **)pUVar5;
      pUVar3 = *(UOptimusNodePin **)FVar7.Data;
      plVar6 = plVar2;
      if (plVar2 == plVar2 + (longlong)*(int *)&pUVar5->field_0x8 * 0x10) {
LAB_14e216c8b:
        UOptimusNode::RemovePin((UOptimusNode *)this,pUVar3);
LAB_14e216c96:
        FVar7.Data = FVar7.Data + 8;
      }
      else {
        do {
          if (*plVar6 == pUVar3->_padding_) {
            if ((int)((longlong)plVar6 - (longlong)plVar2 >> 7) != -1) goto LAB_14e216c96;
            goto LAB_14e216c8b;
          }
          plVar6 = plVar6 + 0x10;
        } while (plVar6 != plVar2 + (longlong)*(int *)&pUVar5->field_0x8 * 0x10);
        UOptimusNode::RemovePin((UOptimusNode *)this,pUVar3);
        FVar7.Data = FVar7.Data + 8;
      }
    }
  }
LAB_14e216ca6:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUOptimusNode_GraphTerminal @ 14e225cf0

void __cdecl UOptimusNode_GraphTerminal::StaticRegisterNativesUOptimusNode_GraphTerminal(void)

{
  return;
}

// SubscribeToOwningGraph @ 14e225fe0

void __thiscall UOptimusNode_GraphTerminal::SubscribeToOwningGraph(UOptimusNode_GraphTerminal *this)

{
  TWeakObjectPtr<UOptimusNodeSubGraph,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_a8 [32];
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong lStack_30;
  
  this_00 = &this->OwningGraph;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_964655616096206695>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                       ,0x99,"OwningGraph.IsValid()");
    if (!bVar2) {
      return;
    }
code_r0x00014e226080:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x20,
                     this);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_964655616096206695>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                       ,0x99,"!OwningGraph->GetOnBindingArrayPasted().IsBoundToObject(this)");
    if (bVar2) goto code_r0x00014e226080;
  }
  else {
    local_a8._0_8_ = RecreateBindingPins;
    local_a8._8_4_ = 0;
    lStack_80 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_88 = RecreateBindingPins;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar3[4].field_0x20,(UOptimusNode_GraphTerminal *)&stack0x00000008,
               (pmf_3f6bee8b *)this);
    local_a8._8_4_ = 0;
    local_a8._0_8_ = SyncPinsToBindings;
    lStack_70 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_78 = SyncPinsToBindings;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar3[5].field_0x18,(UOptimusNode_GraphTerminal *)&stack0x00000010,
               (pmf_3f6bee8b *)this);
    local_a8._8_4_ = 0;
    local_a8._0_8_ = AddPinForNewBinding;
    lStack_60 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_68 = AddPinForNewBinding;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar3[6].field_0x10,(UOptimusNode_GraphTerminal *)&stack0x00000018,
               (pmf_3f6bee8b *)this);
    local_a8._8_4_ = 0;
    local_a8._0_8_ = RemoveStalePins;
    lStack_50 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_58 = RemoveStalePins;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar3[7].field_0x8,(UOptimusNode_GraphTerminal *)&stack0x00000020,
               (pmf_3f6bee8b *)this);
    local_a8._0_8_ = RemoveStalePins;
    local_a8._8_4_ = 0;
    lStack_40 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_48 = RemoveStalePins;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               (pUVar3 + 8),(UOptimusNode_GraphTerminal *)(local_a8 + 0x10),(pmf_3f6bee8b *)this);
    local_a8._8_4_ = 0;
    local_a8._0_8_ = OnBindingMoved;
    lStack_30 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
    local_38 = OnBindingMoved;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<UOptimusNode_GraphTerminal>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &pUVar3[8].field_0x20,(UOptimusNode_GraphTerminal *)local_a8,(pmf_3f6bee8b *)this);
  }
  return;
}

// SyncPinsToBindings @ 14e226580

void __thiscall
UOptimusNode_GraphTerminal::SyncPinsToBindings(UOptimusNode_GraphTerminal *this,FName param_1)

{
  UOptimusNodePin *pUVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  FName *pFVar11;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_88;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  undefined1 local_58 [16];
  FSoftObjectPath local_48;
  
  GetBindingPins(this,&local_88);
  if ((param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) && (this->TerminalType == Entry))
  {
    pUVar6 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    pUVar6 = pUVar6 + 4;
  }
  else {
    if ((param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) ||
       (this->TerminalType != Return)) goto LAB_14e2267f1;
    pUVar6 = FWeakObjectPtr::Get(&(this->OwningGraph).WeakPtr);
    pUVar6 = (UObject *)&pUVar6[4].field_0x10;
  }
  if (pUVar6 != (UObject *)0x0) {
    if ((*(int *)&pUVar6->field_0x8 != local_88.ArrayNum) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingArrayPtr->Num() == BindingPins.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GraphTerminal.cpp"
                           ,0x159,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = 0;
    if (0 < *(int *)&pUVar6->field_0x8) {
      lVar9 = 0;
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < local_88.ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar1 = *(UOptimusNodePin **)(local_88.AllocatorInstance.Data + lVar10);
        uVar5 = 0;
        if ((int)uVar8 < *(int *)&pUVar6->field_0x8) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = (FName *)(*(longlong *)pUVar6 + lVar9);
        if ((FName)pUVar1->_padding_ != *pFVar11) {
          UOptimusNode::SetPinName((UOptimusNode *)this,pUVar1,*pFVar11);
        }
        pTVar7 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(pFVar11 + 1),&local_68);
        FOptimusDataTypeRef::Resolve(&pUVar1->DataType,&local_78);
        pFVar2 = pTVar7->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        if (local_78.Object != pFVar2) {
          local_58._0_8_ = pFVar11[1];
          local_58._8_8_ = pFVar11[2];
          FSoftObjectPath::FSoftObjectPath(&local_48,(FSoftObjectPath *)(pFVar11 + 3));
          UOptimusNode::SetPinDataType((UOptimusNode *)this,pUVar1,(FOptimusDataTypeRef *)local_58);
        }
        bVar4 = FOptimusDataDomain::operator==
                          (&pUVar1->DataDomain,(FOptimusDataDomain *)(pFVar11 + 7));
        if (!bVar4) {
          UOptimusNode::SetPinDataDomain
                    ((UOptimusNode *)this,pUVar1,(FOptimusDataDomain *)(pFVar11 + 7));
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 8;
        lVar9 = lVar9 + 0x80;
      } while ((int)uVar8 < *(int *)&pUVar6->field_0x8);
    }
  }
LAB_14e2267f1:
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// UnsubscribeFromOwningGraph @ 14e22b310

void __thiscall
UOptimusNode_GraphTerminal::UnsubscribeFromOwningGraph(UOptimusNode_GraphTerminal *this)

{
  TWeakObjectPtr<UOptimusNodeSubGraph,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  
  this_00 = &this->OwningGraph;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x20,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[5].field_0x18,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x10,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 8),this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[8].field_0x20,this);
  }
  return;
}

// _getUObject @ 14e238f50

UObject * __thiscall UOptimusNode_GraphTerminal::_getUObject(UOptimusNode_GraphTerminal *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e238f60

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_GraphTerminal::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_GraphTerminal::_getUObject_adjustor_8__(UOptimusNode_GraphTerminal *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_GraphTerminal *)
                       &this[-1].OwningGraph.WeakPtr.ObjectSerialNumber);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e238f70

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_GraphTerminal::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_GraphTerminal::_getUObject_adjustor_16__(UOptimusNode_GraphTerminal *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_GraphTerminal *)
                       &this[-1].DefaultComponentPin.WeakPtr.ObjectSerialNumber);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14e238f80

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_GraphTerminal::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_GraphTerminal::_getUObject_adjustor_24__(UOptimusNode_GraphTerminal *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_GraphTerminal *)&this[-1].TerminalType);
  return (UObject *)pUVar1;
}

