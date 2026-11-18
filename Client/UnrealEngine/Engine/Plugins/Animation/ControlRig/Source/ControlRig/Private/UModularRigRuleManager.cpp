// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 22

// StaticClass @ 14a2bb890

UClass * __cdecl UModularRigRuleManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularRigRuleManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ModularRigRuleManager",
               &Z_Registration_Info_UClass_UModularRigRuleManager.InnerSingleton,
               StaticRegisterNativesUModularRigRuleManager,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModularRigRuleManager>,
               InternalVTableHelperCtorCaller<UModularRigRuleManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularRigRuleManager.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14a2caf40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
`UModularRigRuleManager::FilterIncompatibleTypes'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FRigElementResolveResult *param_1)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  undefined1 local_res8 [8];
  
  if ((param_1->Key).Type == Curve) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&CurveInvalidTargetMessage,L"ModularRigRuleManager",L"CannotConnectToCurves",
                   L"Cannot connect to curves.");
        atexit(``UModularRigRuleManager::FilterIncompatibleTypes'::__l2::<lambda_1>::operator()'::
               __l5::_dynamic_atexit_destructor_for__CurveInvalidTargetMessage__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    param_1->State = InvalidTarget;
    TVar2 = CurveInvalidTargetMessage.TextData;
    pIVar1 = (param_1->Message).TextData.Reference;
    if (pIVar1 != CurveInvalidTargetMessage.TextData.Reference) {
      (param_1->Message).TextData.Reference = CurveInvalidTargetMessage.TextData.Reference;
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (param_1->Message).Flags = CurveInvalidTargetMessage.Flags;
  }
  if ((param_1->Key).Type == Connector) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&CurveInvalidTargetMessage,L"ModularRigRuleManager",L"CannotConnectToConnectors",
                   L"Cannot connect to connectors.");
        atexit(``UModularRigRuleManager::FilterIncompatibleTypes'::__l2::<lambda_1>::operator()'::
               __l8::_dynamic_atexit_destructor_for__CurveInvalidTargetMessage__);
        _Init_thread_footer(&::_TSS1);
      }
    }
    param_1->State = InvalidTarget;
    TVar2 = CurveInvalidTargetMessage.TextData;
    pIVar1 = (param_1->Message).TextData.Reference;
    if (pIVar1 != CurveInvalidTargetMessage.TextData.Reference) {
      (param_1->Message).TextData.Reference = CurveInvalidTargetMessage.TextData.Reference;
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (param_1->Message).Flags = CurveInvalidTargetMessage.Flags;
  }
  return;
}

// UModularRigRuleManager @ 14a2dd230

UModularRigRuleManager * __thiscall
UModularRigRuleManager::UModularRigRuleManager(UModularRigRuleManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModularRigRuleManager__6B_;
  (this->Hierarchy).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UModularRigRuleManager @ 14a2dd260

UModularRigRuleManager * __thiscall
UModularRigRuleManager::UModularRigRuleManager
          (UModularRigRuleManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModularRigRuleManager__6B_;
  (this->Hierarchy).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UModularRigRuleManager @ 14a2defd0

void __thiscall UModularRigRuleManager::~UModularRigRuleManager(UModularRigRuleManager *this)

{
  this->_padding_ = (longlong)&___7UModularRigRuleManager__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14a2e2ce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()
          (void *this,FRigElementResolveResult *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  URigHierarchy *this_00;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FRigBaseComponent *pFVar7;
  FRigBaseElement *pFVar8;
  FText *pFVar9;
  FRigElementKey *pFVar10;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_58 [36];
  char local_34;
  
  URigHierarchy::GetModuleFName
            (*(URigHierarchy **)((longlong)this + 8),(FRigElementKey *)&local_res10);
  if (local_res10 == *(FName *)this) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&CannotConnectWithinNameSpaceMessage,L"ModularRigRuleManager",
                 L"CannotConnectWithinNameSpace",L"Cannot connect within the same namespace.");
      atexit(``UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()'::__l5::
             _dynamic_atexit_destructor_for__CannotConnectWithinNameSpaceMessage__);
      _Init_thread_footer(&::_TSS0);
    }
    param_1->State = InvalidTarget;
    TVar3 = CannotConnectWithinNameSpaceMessage.TextData;
    pIVar2 = (param_1->Message).TextData.Reference;
    if (pIVar2 != CannotConnectWithinNameSpaceMessage.TextData.Reference) {
      (param_1->Message).TextData.Reference = CannotConnectWithinNameSpaceMessage.TextData.Reference
      ;
      if (TVar3.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (param_1->Message).Flags = CannotConnectWithinNameSpaceMessage.Flags;
    return;
  }
  if (*(longlong *)((longlong)this + 0x20) == 0) {
    return;
  }
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x70) != '\x01') ||
     (lVar6 = 0xbc, *(char *)(*(longlong *)((longlong)this + 0x10) + 0x73) == '\0')) {
    lVar6 = 0xb8;
  }
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x20) + lVar6);
  this_00 = *(URigHierarchy **)((longlong)this + 8);
  local_58[0xc] = Unknown;
  local_34 = '\0';
  bVar4 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Key).Name.ComparisonIndex.Value);
  if ((((bVar4) && ((param_1->Key).Name != (FName)0x0)) && ((param_1->Key).Type != None)) &&
     (param_1 != (FRigElementResolveResult *)local_58)) {
    local_58._8_4_ = (param_1->Key).Name.Number;
    local_58[0] = (param_1->Key).Type;
    local_58._1_3_ = *(undefined3 *)&(param_1->Key).field_0x1;
    local_58._4_4_ = (param_1->Key).Name.ComparisonIndex.Value;
    local_58[0xc] = InvalidTarget;
  }
  if (local_34 == '\0') {
    if (local_58[0xc] == Unknown) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
        ::__l2::InvalidKey.Type = None;
        `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
        ::__l2::InvalidKey.Name.ComparisonIndex.Value = 0;
        `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
        ::__l2::InvalidKey.Name.Number = 0;
        _Init_thread_footer(&`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pFVar10 = &`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                 ::__l2::InvalidKey;
    }
    else {
      pFVar10 = (FRigElementKey *)local_58;
    }
    iVar5 = URigHierarchy::GetIndex(this_00,pFVar10,true);
    pFVar8 = URigHierarchy::Get(this_00,iVar5);
    if (pFVar8 != (FRigBaseElement *)0x0) {
      iVar5 = pFVar8->SpawnIndex;
      goto LAB_14a2e2eb5;
    }
  }
  else {
    iVar5 = URigHierarchy::GetComponentIndex(this_00,(FRigComponentKey *)(local_58 + 0x10),true);
    if ((iVar5 != -1) &&
       (pFVar7 = URigHierarchy::GetComponent(this_00,iVar5), pFVar7 != (FRigBaseComponent *)0x0)) {
      iVar5 = pFVar7->SpawnIndex;
      goto LAB_14a2e2eb5;
    }
  }
  iVar5 = -1;
LAB_14a2e2eb5:
  if (iVar1 == -1) {
    bVar4 = FRigModuleInstance::HasChildModule
                      (*(FRigModuleInstance **)((longlong)this + 0x20),&local_res10,true);
    if (!bVar4) {
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&CannotConnectBelowNameSpaceMessage,L"ModularRigRuleManager",
                 L"CannotConnectBelowNameSpace",
                 L"Cannot connect to element below the connector\'s namespace.");
      atexit(``UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()'::__l16::
             _dynamic_atexit_destructor_for__CannotConnectBelowNameSpaceMessage__);
      _Init_thread_footer(&::_TSS2);
    }
    pFVar9 = &CannotConnectBelowNameSpaceMessage;
  }
  else {
    if (iVar5 < iVar1) {
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&CannotConnectBelowNameSpaceMessage,L"ModularRigRuleManager",
                 L"CannotConnectLaterSpawnElement",
                 L"Cannot connect to an element spawn later than the connector\'s module.");
      atexit(``UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()'::__l13::
             _dynamic_atexit_destructor_for__CannotConnectBelowNameSpaceMessage__);
      _Init_thread_footer(&::_TSS1);
    }
    pFVar9 = &CannotConnectBelowNameSpaceMessage;
  }
  FRigElementResolveResult::SetInvalidTarget(param_1,pFVar9);
  return;
}

// operator() @ 14a2e3090

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UModularRigRuleManager::FindMatches'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  FText local_28;
  
  uVar1 = param_1->Index;
  plVar2 = *(longlong **)this;
  uVar9 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(char *)((longlong)(int)uVar1 + *plVar2) == '\0') {
    uVar1 = param_1->Index;
    plVar2 = *(longlong **)this;
    uVar9 = 0;
    if ((int)uVar1 < (int)plVar2[1]) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined1 *)((longlong)(int)uVar1 + *plVar2) = 1;
    lVar3 = *(longlong *)((longlong)this + 8);
    pFVar8 = FText::FText(&local_28);
    iVar7 = *(int *)(lVar3 + 0x18);
    if (iVar7 == *(int *)(lVar3 + 0x1c)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)(lVar3 + 0x10),(int *)(lVar3 + 0x1c));
    }
    *(int *)(lVar3 + 0x18) = iVar7 + 1;
    puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar7 * 0x20);
    *puVar10 = *(undefined8 *)&param_1->Key;
    *(uint *)(puVar10 + 1) = (param_1->Key).Name.Number;
    *(undefined1 *)((longlong)puVar10 + 0xc) = 2;
    puVar10[2] = 0;
    pIVar4 = (pFVar8->TextData).Reference;
    puVar10[2] = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
    }
    *(uint *)(puVar10 + 3) = pFVar8->Flags;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  *param_2 = true;
  return;
}

// operator() @ 14a2e6040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>::operator()
          (void *this,FRigElementResolveResult *param_1)

{
  undefined8 uVar1;
  URigHierarchy *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRigBaseElement *pFVar5;
  undefined8 *puVar6;
  undefined1 local_28 [16];
  longlong *local_18;
  
  this_00 = *(URigHierarchy **)((longlong)this + 8);
  iVar4 = URigHierarchy::GetIndex(this_00,&param_1->Key,true);
  pFVar5 = URigHierarchy::Get(this_00,iVar4);
  if (pFVar5 == (FRigBaseElement *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRigRuleManager.cpp"
                       ,0x11a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar6 = (undefined8 *)
           (**(code **)(**(longlong **)this + 0x10))
                     (*(longlong **)this,local_28,pFVar5,(longlong)this + 8);
  uVar1 = *puVar6;
  (param_1->Key).Type = (char)uVar1;
  *(int3 *)&(param_1->Key).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  (param_1->Key).Name.ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar1 >> 0x20);
  (param_1->Key).Name.Number = *(uint *)(puVar6 + 1);
  param_1->State = *(ERigElementResolveState *)((longlong)puVar6 + 0xc);
  FText::operator=(&param_1->Message,(FText *)(puVar6 + 2));
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))();
  }
  return;
}

// FilterByConnectorEvent @ 14a304010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRigRuleManager::FilterByConnectorEvent(FWorkData *param_1)

{
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  URigHierarchy *this;
  FModularRigResolveResult *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UModularRig *this_00;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_48;
  undefined4 local_40;
  FScriptContainerElement local_3c;
  longlong *local_38;
  undefined4 local_30;
  
  if ((param_1->Module != (FRigModuleInstance *)0x0) &&
     (param_1->Connector != (FRigConnectorElement *)0x0)) {
    this = param_1->Hierarchy;
    pUVar7 = Z_Construct_UClass_UModularRig_NoRegister();
    this_00 = (UModularRig *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
    if (this_00 != (UModularRig *)0x0) {
      pFVar3 = param_1->Result;
      pTVar1 = &pFVar3->Matches;
      UModularRig::ExecuteConnectorEvent
                (this_00,(FRigElementKey *)&param_1->Connector->_padding_,param_1->Module,
                 param_1->ResolvedConnectors,pTVar1);
      iVar8 = (pFVar3->Matches).ArrayNum;
      if (iVar8 != 0) {
        pFVar12 = (pTVar1->AllocatorInstance).Data;
        for (pFVar10 = pFVar12; pFVar10 != pFVar12 + (longlong)iVar8 * 0x20;
            pFVar10 = pFVar10 + 0x20) {
          if (pFVar10[0xc] == (FScriptContainerElement)0x3) {
            uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar12 >> 5);
            goto LAB_14a3040bc;
          }
        }
        uVar9 = 0xffffffff;
LAB_14a3040bc:
        if (uVar9 != 0xffffffff) {
          uVar11 = ~uVar9 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar9 < iVar8) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
          local_48 = *(undefined8 *)pFVar12;
          local_40 = *(undefined4 *)(pFVar12 + 8);
          local_3c = pFVar12[0xc];
          local_38 = *(longlong **)(pFVar12 + 0x10);
          if (local_38 != (longlong *)0x0) {
            (**(code **)(*local_38 + 8))(local_38,local_res8);
          }
          local_30 = *(undefined4 *)(pFVar12 + 0x18);
          uVar6 = 0;
          if ((int)uVar9 < (pFVar3->Matches).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
          if (*(longlong **)(pFVar12 + 0x10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pFVar12 + 0x10) + 0x10))();
          }
          iVar8 = (pFVar3->Matches).ArrayNum + ~uVar9;
          if (iVar8 != 0) {
            memmove(pFVar12,pFVar12 + 0x20,(longlong)iVar8 << 5);
          }
          piVar2 = &(pFVar3->Matches).ArrayNum;
          *piVar2 = *piVar2 + -1;
          piVar2 = &(pFVar3->Matches).ArrayMax;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&pTVar1->AllocatorInstance,(pFVar3->Matches).ArrayNum,piVar2);
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 < pFVar12 + (longlong)*piVar2 * 0x20)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (pFVar3->Matches).ArrayNum;
          if (iVar8 == *piVar2) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&pTVar1->AllocatorInstance,piVar2);
          }
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          (pFVar3->Matches).ArrayNum = iVar8 + 1;
          memmove(pFVar12 + 0x20,pFVar12,(longlong)iVar8 << 5);
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          *(undefined8 *)pFVar12 = local_48;
          *(undefined4 *)(pFVar12 + 8) = local_40;
          pFVar12[0xc] = local_3c;
          *(undefined8 *)(pFVar12 + 0x10) = 0;
          *(longlong **)(pFVar12 + 0x10) = local_38;
          if (local_38 != (longlong *)0x0) {
            (**(code **)(*local_38 + 8))(local_38,local_res10);
          }
          *(undefined4 *)(pFVar12 + 0x18) = local_30;
          if (local_38 != (longlong *)0x0) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
      }
    }
  }
  return;
}

// FilterByConnectorRules @ 14a304350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRigRuleManager::FilterByConnectorRules(FWorkData *param_1)

{
  URigHierarchy *pUVar1;
  FRigElementKeyRedirector *pFVar2;
  FRigModuleInstance *pFVar3;
  code *pcVar4;
  FRigConnectorSettings *pFVar5;
  bool bVar6;
  ulonglong uVar7;
  FRigConnectionRule *pFVar8;
  FRigConnectionRuleStash *this;
  TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *pTVar9;
  FRigConnectionRuleStash *pFVar10;
  undefined1 local_res8 [8];
  uint local_res10;
  TSharedPtr<FStructOnScope,1> local_78;
  code *local_68 [5];
  undefined8 *local_40;
  
  if ((param_1->Connector == (FRigConnectorElement *)0x0) &&
     (param_1->ModuleConnector == (FRigModuleConnector *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutWorkData.Connector != nullptr || InOutWorkData.ModuleConnector != nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRigRuleManager.cpp"
                       ,0x104,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->Connector == (FRigConnectorElement *)0x0) {
    pFVar5 = &param_1->ModuleConnector->Settings;
  }
  else {
    pFVar5 = &param_1->Connector->Settings;
  }
  pTVar9 = &pFVar5->Rules;
  local_res10 = pTVar9->ArrayNum;
  uVar7 = (ulonglong)(int)local_res10;
  this = (FRigConnectionRuleStash *)(pTVar9->AllocatorInstance).Data;
  pFVar10 = this + uVar7;
  while( true ) {
    if (pTVar9->ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FRigConnectionRuleStash_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this == pFVar10) break;
    if ((1 < (this->ScriptStructPath).Data.ArrayNum) && (1 < (this->ExportedText).Data.ArrayNum)) {
      local_78.Object = (FStructOnScope *)0x0;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar8 = FRigConnectionRuleStash::Get(this,&local_78);
      pUVar1 = param_1->Hierarchy;
      pFVar2 = param_1->ResolvedConnectors;
      pFVar3 = param_1->Module;
      local_68[0] = (code *)0x0;
      local_40 = (undefined8 *)0x0;
      local_40 = FMemory::Malloc(0x28,8);
      *local_40 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::`13'::<lambda_1>,0,1>
                   ::_vftable_;
      local_40[1] = pFVar8;
      local_40[2] = pUVar1;
      local_40[3] = pFVar3;
      local_40[4] = pFVar2;
      if (local_40 + 1 != (undefined8 *)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>,void,FRigElementResolveResult_&>
                      ::Call;
      }
      FWorkData::Filter(param_1,(TFunction<void___cdecl(FRigElementResolveResult_&)> *)local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    uVar7 = (ulonglong)local_res10;
    this = this + 1;
  }
  return;
}

// FilterIncompatibleTypes @ 14a3048c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRigRuleManager::FilterIncompatibleTypes(FWorkData *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXAEAUFRigElementResolveResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `UModularRigRuleManager::FilterIncompatibleTypes'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRigElementResolveResult_&),void,FRigElementResolveResult_&>
                ::Call;
  FWorkData::Filter(param_1,(TFunction<void___cdecl(FRigElementResolveResult_&)> *)local_38);
  return;
}

// FilterInvalidModules @ 14a304910

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRigRuleManager::FilterInvalidModules(FWorkData *param_1)

{
  URigHierarchy *pUVar1;
  FRigConnectorElement *pFVar2;
  FRigModuleConnector *pFVar3;
  FRigModuleInstance *pFVar4;
  FRigElementKeyRedirector *pFVar5;
  FModularRigResolveResult *pFVar6;
  FRigElementKey local_res8 [2];
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_1->Connector != (FRigConnectorElement *)0x0) {
    URigHierarchy::GetModuleFName(param_1->Hierarchy,local_res8);
    if (local_res8[0]._0_8_ != 0) {
      pUVar1 = param_1->Hierarchy;
      pFVar2 = param_1->Connector;
      pFVar3 = param_1->ModuleConnector;
      pFVar4 = param_1->Module;
      local_38[0] = (code *)0x0;
      pFVar5 = param_1->ResolvedConnectors;
      pFVar6 = param_1->Result;
      local_10 = FMemory::Malloc(0x40,8);
      *local_10 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_10[1] = local_res8[0]._0_8_;
      local_10[2] = pUVar1;
      local_10[3] = pFVar2;
      local_10[4] = pFVar3;
      local_10[5] = pFVar4;
      local_10[6] = pFVar5;
      local_10[7] = pFVar6;
      if (local_10 + 1 != (longlong *)0x0) {
        local_38[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>,void,FRigElementResolveResult_&>
                      ::Call;
      }
      FWorkData::Filter(param_1,(TFunction<void___cdecl(FRigElementResolveResult_&)> *)local_38);
    }
  }
  return;
}

// FindMatches @ 14a305330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModularRigResolveResult * __thiscall
UModularRigRuleManager::FindMatches
          (UModularRigRuleManager *this,FModularRigResolveResult *__return_storage_ptr__,
          FWorkData *param_1)

{
  uint uVar1;
  ITextData *pIVar2;
  code *pcVar3;
  TRefCountPtr<ITextData> TVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FModularRigResolveResult *pFVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UControlRig *this_00;
  URigHierarchy *pUVar11;
  FRigConnectorElement *pFVar12;
  TWeakObjectPtr<URigHierarchy_const_,FWeakObjectPtr> *this_01;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FRigElementKey local_98;
  uint local_88;
  undefined4 uStack_84;
  ForAnyElementType local_78;
  int local_70 [2];
  code *local_68 [2];
  undefined **local_58;
  ForAnyElementType *local_50;
  FModularRigResolveResult *local_48;
  undefined8 local_40;
  
  if ((param_1->Result == (FModularRigResolveResult *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWorkData.Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRigRuleManager.cpp"
                         ,0xd,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FModularRigResolveResult *)(*pcVar3)();
    return pFVar8;
  }
  pFVar8 = param_1->Result;
  this_01 = &this->Hierarchy;
  bVar5 = FWeakObjectPtr::IsValid(&this_01->WeakPtr);
  if (bVar5) {
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    pUVar10 = Z_Construct_UClass_UControlRig_NoRegister();
    this_00 = (UControlRig *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar9,pUVar10)
    ;
    if ((this_00 != (UControlRig *)0x0) &&
       (bVar5 = UControlRig::IsConstructionRequired(this_00), bVar5)) {
      pFVar12 = param_1->Connector;
      if (pFVar12 == (FRigConnectorElement *)0x0) {
        local_88 = local_88 & 0xffffff00;
        local_98.Name.Number = 0;
        uStack_84 = 0;
        uVar13 = (ulonglong)local_88;
      }
      else {
        uVar13 = pFVar12->_padding_;
        local_98.Name.Number = (uint)pFVar12->_padding_;
      }
      local_98._0_4_ = SUB84(uVar13,0);
      local_98.Name.ComparisonIndex.Value = (uint)(uVar13 >> 0x20);
      pcVar3 = *(code **)(this_00->_padding_ + 0x2f0);
      FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
      (*pcVar3)(this_00,local_res18);
      pUVar11 = (URigHierarchy *)FWeakObjectPtr::Get(&this_01->WeakPtr);
      iVar6 = URigHierarchy::GetIndex(pUVar11,&local_98,true);
      pFVar12 = (FRigConnectorElement *)URigHierarchy::Get(pUVar11,iVar6);
      if ((pFVar12 == (FRigConnectorElement *)0x0) ||
         (bVar5 = FRigBaseElement::IsA<FRigConnectorElement>((FRigBaseElement *)pFVar12), !bVar5)) {
        pFVar12 = (FRigConnectorElement *)0x0;
      }
      param_1->Connector = pFVar12;
      bVar5 = ::FName::IsWithinBounds(local_98.Name.ComparisonIndex);
      if ((((bVar5) && (CONCAT44(local_98.Name.Number,local_98.Name.ComparisonIndex.Value) != 0)) &&
          (local_98.Type != None)) && (param_1->Connector == (FRigConnectorElement *)0x0)) {
        FModularRigResolveResult::FModularRigResolveResult(__return_storage_ptr__,pFVar8);
        return __return_storage_ptr__;
      }
    }
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    iVar6 = *(int *)&pUVar9[6].field_0x10;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar6,&local_78,local_70,local_70 + 1);
    memset(local_78.Data + iVar7,0,(longlong)iVar6);
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    uVar1 = *(uint *)&pUVar9[6].field_0x10;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((pFVar8->Matches).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar1,&(pFVar8->Matches).AllocatorInstance,(pFVar8->Matches).ArrayNum,
                 &(pFVar8->Matches).ArrayMax);
    }
    pUVar11 = (URigHierarchy *)FWeakObjectPtr::Get(&this_01->WeakPtr);
    local_40 = 0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_50 = &local_78;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModularRigRuleManager::FindMatches'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                  ::Call;
    local_48 = pFVar8;
    URigHierarchy::Traverse
              (pUVar11,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_68,true);
    pUVar11 = (URigHierarchy *)FWeakObjectPtr::Get(&this_01->WeakPtr);
    param_1->Hierarchy = pUVar11;
    ResolveConnector(param_1);
    FModularRigResolveResult::FModularRigResolveResult(__return_storage_ptr__,pFVar8);
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&MissingHierarchyMessage,L"ModularRigRuleManager",L"MissingHierarchyMessage",
                 L"The rule manager is missing the hierarchy.");
      atexit(`UModularRigRuleManager::FindMatches'::__l12::
             _dynamic_atexit_destructor_for__MissingHierarchyMessage__);
      _Init_thread_footer(&::_TSS0);
    }
    TVar4.Reference = MissingHierarchyMessage.TextData.Reference;
    pIVar2 = (pFVar8->Message).TextData.Reference;
    if (pIVar2 != MissingHierarchyMessage.TextData.Reference) {
      (pFVar8->Message).TextData.Reference = MissingHierarchyMessage.TextData.Reference;
      if (TVar4.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (pFVar8->Message).Flags = MissingHierarchyMessage.Flags;
    pFVar8->State = Error;
    FModularRigResolveResult::FModularRigResolveResult(__return_storage_ptr__,pFVar8);
  }
  return __return_storage_ptr__;
}

// FindMatches @ 14a3056a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModularRigResolveResult * __thiscall
UModularRigRuleManager::FindMatches
          (UModularRigRuleManager *this,FModularRigResolveResult *__return_storage_ptr__,
          FRigConnectorElement *param_1,FRigModuleInstance *param_2,
          FRigElementKeyRedirector *param_3)

{
  FWorkData local_98;
  FModularRigResolveResult local_68;
  
  local_68.Connector._0_4_ = local_68.Connector._0_4_ & 0xffffff00;
  local_68.Connector.Name.ComparisonIndex.Value = 0;
  local_68.Connector.Name.Number = 0;
  local_68.Matches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Matches.ArrayNum = 0;
  local_68.Matches.ArrayMax = 0;
  local_68.Excluded.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Excluded.ArrayNum = 0;
  local_68.Excluded.ArrayMax = 0;
  local_68.State = Success;
  FText::FText(&local_68.Message);
  local_68.Connector.Name.Number = (uint)param_1->_padding_;
  local_68.Connector._0_4_ = SUB84(param_1->_padding_,0);
  local_68.Connector.Name.ComparisonIndex.Value = (uint)((ulonglong)param_1->_padding_ >> 0x20);
  local_98.ModuleConnector = (FRigModuleConnector *)0x0;
  local_98.Hierarchy = (URigHierarchy *)FWeakObjectPtr::Get(&(this->Hierarchy).WeakPtr);
  local_98.ResolvedConnectors = param_3;
  local_98.Result = &local_68;
  local_98.Connector = param_1;
  local_98.Module = param_2;
  FindMatches(this,__return_storage_ptr__,&local_98);
  if (local_68.Message.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.Message.TextData.Reference + 0x10))();
  }
  DestructItems<FRigElementResolveResult,int>
            ((FRigElementResolveResult *)local_68.Excluded.AllocatorInstance.Data,
             local_68.Excluded.ArrayNum);
  if ((FRigElementResolveResult *)local_68.Excluded.AllocatorInstance.Data !=
      (FRigElementResolveResult *)0x0) {
    FMemory::Free(local_68.Excluded.AllocatorInstance.Data);
  }
  DestructItems<FRigElementResolveResult,int>
            ((FRigElementResolveResult *)local_68.Matches.AllocatorInstance.Data,
             local_68.Matches.ArrayNum);
  if ((FRigElementResolveResult *)local_68.Matches.AllocatorInstance.Data !=
      (FRigElementResolveResult *)0x0) {
    FMemory::Free(local_68.Matches.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindMatches @ 14a3057b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModularRigResolveResult * __thiscall
UModularRigRuleManager::FindMatches
          (UModularRigRuleManager *this,FModularRigResolveResult *__return_storage_ptr__,
          FRigModuleConnector *param_1)

{
  wchar_t *pwVar1;
  FName local_res8;
  FRigElementKey local_a8;
  FModularRigResolveResult local_98;
  FWorkData local_48;
  
  local_98.Connector._0_4_ = local_98.Connector._0_4_ & 0xffffff00;
  local_98.Connector.Name.ComparisonIndex.Value = 0;
  local_98.Connector.Name.Number = 0;
  local_98.Matches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Matches.ArrayNum = 0;
  local_98.Matches.ArrayMax = 0;
  local_98.Excluded.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Excluded.ArrayNum = 0;
  local_98.Excluded.ArrayMax = 0;
  local_98.State = Success;
  FText::FText(&local_98.Message);
  if ((param_1->Name).Data.ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar1);
  local_a8.Name.ComparisonIndex = local_res8.ComparisonIndex.Value;
  local_a8.Name.Number = local_res8.Number;
  local_98.Connector.Type = Connector;
  local_98.Connector._1_3_ = local_a8._1_3_;
  local_98.Connector.Name.ComparisonIndex.Value = local_a8.Name.ComparisonIndex.Value;
  local_48.Module = (FRigModuleInstance *)0x0;
  local_48.ResolvedConnectors = (FRigElementKeyRedirector *)0x0;
  local_98.Connector.Name.Number = local_a8.Name.Number;
  local_48.Connector = (FRigConnectorElement *)0x0;
  local_48.Hierarchy = (URigHierarchy *)FWeakObjectPtr::Get(&(this->Hierarchy).WeakPtr);
  local_48.Result = &local_98;
  local_48.ModuleConnector = param_1;
  FindMatches(this,__return_storage_ptr__,&local_48);
  if (local_98.Message.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.Message.TextData.Reference + 0x10))();
  }
  DestructItems<FRigElementResolveResult,int>
            ((FRigElementResolveResult *)local_98.Excluded.AllocatorInstance.Data,
             local_98.Excluded.ArrayNum);
  if ((FRigElementResolveResult *)local_98.Excluded.AllocatorInstance.Data !=
      (FRigElementResolveResult *)0x0) {
    FMemory::Free(local_98.Excluded.AllocatorInstance.Data);
  }
  DestructItems<FRigElementResolveResult,int>
            ((FRigElementResolveResult *)local_98.Matches.AllocatorInstance.Data,
             local_98.Matches.ArrayNum);
  if ((FRigElementResolveResult *)local_98.Matches.AllocatorInstance.Data !=
      (FRigElementResolveResult *)0x0) {
    FMemory::Free(local_98.Matches.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindMatchesForOptionalConnectors @ 14a3058d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> * __thiscall
UModularRigRuleManager::FindMatchesForOptionalConnectors
          (UModularRigRuleManager *this,
          TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigModuleInstance *param_1,FRigElementKeyRedirector *param_2)

{
  undefined8 *puVar1;
  FModularRigResolveResult *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *pTVar7;
  FModularRigResolveResult *pFVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 local_res10 [8];
  FRigModuleInstance *local_res18;
  undefined8 *local_d8;
  ulonglong local_d0;
  URigHierarchy *local_c8;
  FRigModuleInstance *local_c0;
  FRigElementKeyRedirector *local_b8;
  code *local_b0;
  URigHierarchy ***local_a8;
  URigHierarchy **local_a0;
  undefined1 local_98;
  undefined8 **local_90;
  FModularRigResolveResult local_88;
  
  local_res18 = param_1;
  local_c8 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->Hierarchy).WeakPtr);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  if (local_c8 == (URigHierarchy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Hierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                       ,0x8d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if (local_c0 == (FRigModuleInstance *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Module",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                       ,0x8e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  local_a0 = &local_c8;
  local_90 = &local_d8;
  local_d8 = (undefined8 *)0x0;
  local_a8 = &local_a0;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FRigConnectionRuleInput::FindSecondaryConnectors'::__l2::<lambda_1>,bool,FRigConnectorElement_*>
             ::Call;
  local_d0 = 0;
  local_98 = 1;
  URigHierarchy::ForEach<FRigConnectorElement>
            (local_c8,(TFunctionRef<bool___cdecl(FRigConnectorElement_*)> *)&local_b0);
  iVar4 = (int)local_d0;
  uVar9 = (ulonglong)(int)local_d0;
  puVar1 = local_d8 + uVar9;
  puVar10 = local_d8;
  while( true ) {
    if ((int)uVar9 != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRigConnectorElement_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (puVar10 == puVar1) break;
    pFVar8 = FindMatches(this,&local_88,(FRigConnectorElement *)*puVar10,param_1,param_2);
    pFVar2 = (FModularRigResolveResult *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    FModularRigResolveResult::FModularRigResolveResult
              ((FModularRigResolveResult *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x48),pFVar8);
    if (local_88.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.Message.TextData.Reference + 0x10))();
    }
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)local_88.Excluded.AllocatorInstance.Data,
               local_88.Excluded.ArrayNum);
    if ((FRigElementResolveResult *)local_88.Excluded.AllocatorInstance.Data !=
        (FRigElementResolveResult *)0x0) {
      FMemory::Free(local_88.Excluded.AllocatorInstance.Data);
    }
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)local_88.Matches.AllocatorInstance.Data,
               local_88.Matches.ArrayNum);
    if ((FRigElementResolveResult *)local_88.Matches.AllocatorInstance.Data !=
        (FRigElementResolveResult *)0x0) {
      FMemory::Free(local_88.Matches.AllocatorInstance.Data);
    }
    uVar9 = local_d0 & 0xffffffff;
    puVar10 = puVar10 + 1;
    param_1 = local_res18;
  }
  if (local_d8 != (undefined8 *)0x0) {
    FMemory::Free(local_d8);
  }
  return __return_storage_ptr__;
}

// FindMatchesForPrimaryConnector @ 14a305b10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModularRigResolveResult * __thiscall
UModularRigRuleManager::FindMatchesForPrimaryConnector
          (UModularRigRuleManager *this,FModularRigResolveResult *__return_storage_ptr__,
          FRigModuleInstance *param_1)

{
  FRigConnectorElement *pFVar1;
  FModularRigResolveResult *pFVar2;
  FRigConnectionRuleInput local_68;
  FModularRigResolveResult local_50;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UModularRigRuleManager::FindMatchesForPrimaryConnector'::__l2::
             _dynamic_atexit_destructor_for__EmptyRedirector__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_68.Hierarchy = (URigHierarchy *)FWeakObjectPtr::Get(&(this->Hierarchy).WeakPtr);
  (__return_storage_ptr__->Connector).Type = None;
  (__return_storage_ptr__->Connector).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->Connector).Name.Number = 0;
  (__return_storage_ptr__->Matches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Matches).ArrayNum = 0;
  (__return_storage_ptr__->Matches).ArrayMax = 0;
  (__return_storage_ptr__->Excluded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Excluded).ArrayNum = 0;
  (__return_storage_ptr__->Excluded).ArrayMax = 0;
  __return_storage_ptr__->State = Success;
  local_68.Redirector = &EmptyRedirector;
  local_68.Module = param_1;
  FText::FText(&__return_storage_ptr__->Message);
  pFVar1 = FRigConnectionRuleInput::FindPrimaryConnector(&local_68,&__return_storage_ptr__->Message)
  ;
  if (pFVar1 == (FRigConnectorElement *)0x0) {
    __return_storage_ptr__->State = Error;
  }
  else {
    pFVar2 = FindMatches(this,&local_50,pFVar1,param_1,&EmptyRedirector);
    FModularRigResolveResult::operator=(__return_storage_ptr__,pFVar2);
    if (local_50.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.Message.TextData.Reference + 0x10))();
    }
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)local_50.Excluded.AllocatorInstance.Data,
               local_50.Excluded.ArrayNum);
    if ((FRigElementResolveResult *)local_50.Excluded.AllocatorInstance.Data !=
        (FRigElementResolveResult *)0x0) {
      FMemory::Free(local_50.Excluded.AllocatorInstance.Data);
    }
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)local_50.Matches.AllocatorInstance.Data,
               local_50.Matches.ArrayNum);
    if ((FRigElementResolveResult *)local_50.Matches.AllocatorInstance.Data !=
        (FRigElementResolveResult *)0x0) {
      FMemory::Free(local_50.Matches.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FindMatchesForSecondaryConnectors @ 14a305c90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> * __thiscall
UModularRigRuleManager::FindMatchesForSecondaryConnectors
          (UModularRigRuleManager *this,
          TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigModuleInstance *param_1,FRigElementKeyRedirector *param_2)

{
  undefined8 *puVar1;
  FModularRigResolveResult *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *pTVar7;
  FModularRigResolveResult *pFVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 local_res10 [8];
  FRigModuleInstance *local_res18;
  undefined8 *local_d8;
  ulonglong local_d0;
  URigHierarchy *local_c8;
  FRigModuleInstance *local_c0;
  FRigElementKeyRedirector *local_b8;
  code *local_b0;
  URigHierarchy ***local_a8;
  URigHierarchy **local_a0;
  undefined1 local_98;
  undefined8 **local_90;
  FModularRigResolveResult local_88;
  
  local_res18 = param_1;
  local_c8 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->Hierarchy).WeakPtr);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  if (local_c8 == (URigHierarchy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Hierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                       ,0x8d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if (local_c0 == (FRigModuleInstance *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Module",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                       ,0x8e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  local_a0 = &local_c8;
  local_90 = &local_d8;
  local_d8 = (undefined8 *)0x0;
  local_a8 = &local_a0;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FRigConnectionRuleInput::FindSecondaryConnectors'::__l2::<lambda_1>,bool,FRigConnectorElement_*>
             ::Call;
  local_d0 = 0;
  local_98 = 0;
  URigHierarchy::ForEach<FRigConnectorElement>
            (local_c8,(TFunctionRef<bool___cdecl(FRigConnectorElement_*)> *)&local_b0);
  iVar4 = (int)local_d0;
  uVar9 = (ulonglong)(int)local_d0;
  puVar1 = local_d8 + uVar9;
  puVar10 = local_d8;
  while( true ) {
    if ((int)uVar9 != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRigConnectorElement_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (puVar10 == puVar1) break;
    pFVar8 = FindMatches(this,&local_88,(FRigConnectorElement *)*puVar10,param_1,param_2);
    pFVar2 = (FModularRigResolveResult *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FModularRigResolveResult,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    FModularRigResolveResult::FModularRigResolveResult
              ((FModularRigResolveResult *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x48),pFVar8);
    if (local_88.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.Message.TextData.Reference + 0x10))();
    }
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)local_88.Excluded.AllocatorInstance.Data,
               local_88.Excluded.ArrayNum);
    if ((FRigElementResolveResult *)local_88.Excluded.AllocatorInstance.Data !=
        (FRigElementResolveResult *)0x0) {
      FMemory::Free(local_88.Excluded.AllocatorInstance.Data);
    }
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)local_88.Matches.AllocatorInstance.Data,
               local_88.Matches.ArrayNum);
    if ((FRigElementResolveResult *)local_88.Matches.AllocatorInstance.Data !=
        (FRigElementResolveResult *)0x0) {
      FMemory::Free(local_88.Matches.AllocatorInstance.Data);
    }
    uVar9 = local_d0 & 0xffffffff;
    puVar10 = puVar10 + 1;
    param_1 = local_res18;
  }
  if (local_d8 != (undefined8 *)0x0) {
    FMemory::Free(local_d8);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a3148c0

UClass * __cdecl UModularRigRuleManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularRigRuleManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ModularRigRuleManager",
               &Z_Registration_Info_UClass_UModularRigRuleManager.InnerSingleton,
               StaticRegisterNativesUModularRigRuleManager,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModularRigRuleManager>,
               InternalVTableHelperCtorCaller<UModularRigRuleManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularRigRuleManager.InnerSingleton;
}

// ResolveConnector @ 14a342650

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRigRuleManager::ResolveConnector(FWorkData *param_1)

{
  URigHierarchy *pUVar1;
  FRigElementKeyRedirector *pFVar2;
  FRigModuleInstance *pFVar3;
  code *pcVar4;
  FModularRigResolveResult *pFVar5;
  FRigConnectorSettings *pFVar6;
  bool bVar7;
  ulonglong uVar8;
  FRigConnectionRule *pFVar9;
  FRigConnectionRuleStash *pFVar10;
  TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *pTVar11;
  FRigConnectionRuleStash *this;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined1 local_res18 [16];
  TSharedPtr<FStructOnScope,1> local_138;
  longlong local_128;
  URigHierarchy *pUStack_120;
  FRigConnectorElement *pFStack_118;
  FRigModuleConnector *pFStack_110;
  FRigModuleInstance *pFStack_108;
  FRigElementKeyRedirector *local_100;
  FModularRigResolveResult *pFStack_f8;
  code *local_e8 [2];
  undefined **local_d8;
  code *local_d0;
  undefined8 local_c0;
  code *local_b8 [5];
  undefined8 *local_90;
  code *local_88 [5];
  undefined8 *local_60;
  
  local_d8 = &
             ___7__TFunction_OwnedObject_P6AXAEAUFRigElementResolveResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_c0 = 0;
  local_d0 = `UModularRigRuleManager::FilterIncompatibleTypes'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRigElementResolveResult_&),void,FRigElementResolveResult_&>
                ::Call;
  FWorkData::Filter(param_1,(TFunction<void___cdecl(FRigElementResolveResult_&)> *)local_e8);
  if (param_1->Connector != (FRigConnectorElement *)0x0) {
    URigHierarchy::GetModuleFName(param_1->Hierarchy,(FRigElementKey *)local_res18);
    if (local_res18._0_8_ != 0) {
      pUStack_120 = param_1->Hierarchy;
      pFStack_118 = param_1->Connector;
      pFStack_110 = param_1->ModuleConnector;
      pFStack_108 = param_1->Module;
      local_128 = local_res18._0_8_;
      local_100 = param_1->ResolvedConnectors;
      pFVar5 = param_1->Result;
      local_88[0] = (code *)0x0;
      pFStack_f8 = pFVar5;
      local_60 = FMemory::Malloc(0x40,8);
      *local_60 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_60[1] = local_128;
      local_60[2] = pUStack_120;
      local_60[3] = pFStack_118;
      local_60[4] = pFStack_110;
      local_60[5] = pFStack_108;
      local_60[6] = local_100;
      local_60[7] = pFVar5;
      if (local_60 + 1 != (longlong *)0x0) {
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>,void,FRigElementResolveResult_&>
                      ::Call;
      }
      FWorkData::Filter(param_1,(TFunction<void___cdecl(FRigElementResolveResult_&)> *)local_88);
    }
  }
  if ((param_1->Connector == (FRigConnectorElement *)0x0) &&
     (param_1->ModuleConnector == (FRigModuleConnector *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutWorkData.Connector != nullptr || InOutWorkData.ModuleConnector != nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRigRuleManager.cpp"
                       ,0x104,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->Connector == (FRigConnectorElement *)0x0) {
    pFVar6 = &param_1->ModuleConnector->Settings;
  }
  else {
    pFVar6 = &param_1->Connector->Settings;
  }
  pTVar11 = &pFVar6->Rules;
  local_res10 = pTVar11->ArrayNum;
  uVar8 = (ulonglong)(int)local_res10;
  this = (FRigConnectionRuleStash *)(pTVar11->AllocatorInstance).Data;
  pFVar10 = this + uVar8;
  local_res18._8_8_ = pFVar10;
  while( true ) {
    if (pTVar11->ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<FRigConnectionRuleStash_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this == pFVar10) break;
    if ((1 < (this->ScriptStructPath).Data.ArrayNum) && (1 < (this->ExportedText).Data.ArrayNum)) {
      local_138.Object = (FStructOnScope *)0x0;
      local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar9 = FRigConnectionRuleStash::Get(this,&local_138);
      pUVar1 = param_1->Hierarchy;
      pFVar2 = param_1->ResolvedConnectors;
      pFVar3 = param_1->Module;
      local_b8[0] = (code *)0x0;
      local_90 = (undefined8 *)0x0;
      local_90 = FMemory::Malloc(0x28,8);
      *local_90 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::`13'::<lambda_1>,0,1>
                   ::_vftable_;
      local_90[1] = pFVar9;
      local_90[2] = pUVar1;
      local_90[3] = pFVar3;
      local_90[4] = pFVar2;
      if (local_90 + 1 != (undefined8 *)0x0) {
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>,void,FRigElementResolveResult_&>
                      ::Call;
      }
      FWorkData::Filter(param_1,(TFunction<void___cdecl(FRigElementResolveResult_&)> *)local_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
      pFVar10 = (FRigConnectionRuleStash *)local_res18._8_8_;
    }
    uVar8 = (ulonglong)local_res10;
    this = this + 1;
  }
  FilterByConnectorEvent(param_1);
  param_1->Result->State = (param_1->Result->Matches).ArrayNum == 0;
  return;
}

// SetHierarchy @ 14a34e030

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UModularRigRuleManager::SetHierarchy(UModularRigRuleManager *this,URigHierarchy *param_1)

{
  code *pcVar1;
  bool bVar2;
  URigHierarchy *local_res8;
  
  if (param_1 == (URigHierarchy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRigRuleManager.cpp"
                       ,0xaa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (URigHierarchy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Hierarchy).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// StaticRegisterNativesUModularRigRuleManager @ 14a358eb0

void __cdecl UModularRigRuleManager::StaticRegisterNativesUModularRigRuleManager(void)

{
  return;
}

