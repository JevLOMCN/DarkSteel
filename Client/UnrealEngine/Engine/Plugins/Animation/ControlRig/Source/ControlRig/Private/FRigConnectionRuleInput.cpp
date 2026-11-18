// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// operator() @ 14a2e3210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`FRigConnectionRuleInput::FindSecondaryConnectors'::__l2::<lambda_1>::operator()
          (void *this,FRigConnectorElement *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FRigConnectorElement *local_res10;
  FRigElementKey local_res18;
  
  if (((param_1->Settings).Type == Secondary) &&
     (((param_1->Settings).bOptional != false) == (bool)*(char *)((longlong)this + 8))) {
    local_res10 = param_1;
    URigHierarchy::GetModuleFName((URigHierarchy *)**(undefined8 **)this,&local_res18);
    if (**(longlong **)(*(longlong *)this + 8) == local_res18._0_8_) {
      pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
      if ((pFVar2->Data <= (FScriptContainerElement *)&local_res10) &&
         ((FScriptContainerElement *)&local_res10 <
          pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
      iVar6 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar6 + 1;
      *(FRigConnectorElement **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10;
    }
  }
  return true;
}

// FindPrimaryConnector @ 14a306350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigConnectorElement * __thiscall
FRigConnectionRuleInput::FindPrimaryConnector(FRigConnectionRuleInput *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigConnectorElement *pFVar3;
  FText *pFVar4;
  FRigConnectorElement *local_res8;
  FRigConnectionRuleInput *local_58;
  FRigConnectorElement **local_50;
  code *local_48;
  FRigConnectionRuleInput **local_40;
  FString local_38;
  FText local_28;
  FString local_18;
  
  if ((this->Hierarchy == (URigHierarchy *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Hierarchy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                         ,0x6b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRigConnectorElement *)(*pcVar1)();
    return pFVar3;
  }
  if ((this->Module == (FRigModuleInstance *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Module",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                         ,0x6c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRigConnectorElement *)(*pcVar1)();
    return pFVar3;
  }
  local_50 = &local_res8;
  local_40 = &local_58;
  local_res8 = (FRigConnectorElement *)0x0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FRigConnectionRuleInput::FindPrimaryConnector'::__l2::<lambda_1>,bool,FRigConnectorElement_*>
             ::Call;
  local_58 = this;
  URigHierarchy::ForEach<FRigConnectorElement>
            (this->Hierarchy,(TFunctionRef<bool___cdecl(FRigConnectorElement_*)> *)&local_48);
  if ((local_res8 == (FRigConnectorElement *)0x0) && (param_1 != (FText *)0x0)) {
    ::FName::ToString(&this->Module->Name,&local_18);
    ::FString::PrintfImpl(&local_38,L"No primary connector found for module \'%s\'.");
    pFVar4 = FText::FromString(&local_28,&local_38);
    FText::operator=(param_1,pFVar4);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return local_res8;
}

// FindSecondaryConnectors @ 14a306740

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FRigConnectionRuleInput::FindSecondaryConnectors
          (FRigConnectionRuleInput *this,
          TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  code *local_38;
  FRigConnectionRuleInput **local_30;
  FRigConnectionRuleInput *local_28;
  undefined1 local_20;
  TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *local_18;
  
  if (this->Hierarchy == (URigHierarchy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Hierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                       ,0x8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->Module == (FRigModuleInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Module",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                       ,0x8e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FRigConnectionRuleInput::FindSecondaryConnectors'::__l2::<lambda_1>,bool,FRigConnectorElement_*>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  local_18 = __return_storage_ptr__;
  URigHierarchy::ForEach<FRigConnectorElement>
            (this->Hierarchy,(TFunctionRef<bool___cdecl(FRigConnectorElement_*)> *)&local_38);
  return __return_storage_ptr__;
}

// ResolveConnector @ 14a3424e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigTransformElement * __thiscall
FRigConnectionRuleInput::ResolveConnector
          (FRigConnectionRuleInput *this,FRigConnectorElement *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRigTransformElement *pFVar3;
  ForElementType<FCachedRigElement> this_00;
  FText *pFVar4;
  FString local_28;
  FText local_18;
  
  if ((this->Redirector == (FRigElementKeyRedirector *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Redirector",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                         ,0xa5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRigTransformElement *)(*pcVar1)();
    return pFVar3;
  }
  this_00 = (ForElementType<FCachedRigElement>)
            TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::Find((TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                    *)this->Redirector,(FRigElementKey *)&param_1->_padding_);
  if ((this_00 != (ForElementType<FCachedRigElement>)0x0) &&
     (*(int *)((longlong)this_00 + 0x28) != 0)) {
    if ((*(int *)((longlong)this_00 + 0x28) < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigTransformElement *)(*pcVar1)();
      return pFVar3;
    }
    if (*(ForElementType<FCachedRigElement> *)((longlong)this_00 + 0x20) !=
        (ForElementType<FCachedRigElement>)0x0) {
      this_00 = *(ForElementType<FCachedRigElement> *)((longlong)this_00 + 0x20);
    }
    bVar2 = FCachedRigElement::UpdateCache((FCachedRigElement *)this_00,this->Hierarchy);
    if (bVar2) {
      pFVar3 = *(FRigTransformElement **)((longlong)this_00 + 0x18);
      if ((pFVar3 != (FRigTransformElement *)0x0) &&
         (bVar2 = FRigBaseElement::IsA<FRigTransformElement>((FRigBaseElement *)pFVar3), bVar2)) {
        return pFVar3;
      }
      return (FRigTransformElement *)0x0;
    }
  }
  if (param_2 != (FText *)0x0) {
    FRigBaseElement::GetName((FRigBaseElement *)param_1);
    ::FString::PrintfImpl(&local_28,L"Resolved target not found for connector \'%s\'.");
    pFVar4 = FText::FromString(&local_18,&local_28);
    FText::operator=(param_2,pFVar4);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return (FRigTransformElement *)0x0;
}

// ResolvePrimaryConnector @ 14a342900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigTransformElement * __thiscall
FRigConnectionRuleInput::ResolvePrimaryConnector(FRigConnectionRuleInput *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigConnectorElement *this_00;
  FRigTransformElement *pFVar3;
  ForElementType<FCachedRigElement> this_01;
  FText *pFVar4;
  FString local_28;
  FText local_18;
  
  this_00 = FindPrimaryConnector(this,param_1);
  if (this_00 == (FRigConnectorElement *)0x0) {
    return (FRigTransformElement *)0x0;
  }
  if ((this->Redirector == (FRigElementKeyRedirector *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Redirector",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                         ,0xa5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRigTransformElement *)(*pcVar1)();
    return pFVar3;
  }
  this_01 = (ForElementType<FCachedRigElement>)
            TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::Find((TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                    *)this->Redirector,(FRigElementKey *)&this_00->_padding_);
  if ((this_01 != (ForElementType<FCachedRigElement>)0x0) &&
     (*(int *)((longlong)this_01 + 0x28) != 0)) {
    if ((*(int *)((longlong)this_01 + 0x28) < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigTransformElement *)(*pcVar1)();
      return pFVar3;
    }
    if (*(ForElementType<FCachedRigElement> *)((longlong)this_01 + 0x20) !=
        (ForElementType<FCachedRigElement>)0x0) {
      this_01 = *(ForElementType<FCachedRigElement> *)((longlong)this_01 + 0x20);
    }
    bVar2 = FCachedRigElement::UpdateCache((FCachedRigElement *)this_01,this->Hierarchy);
    if (bVar2) {
      pFVar3 = *(FRigTransformElement **)((longlong)this_01 + 0x18);
      if (pFVar3 == (FRigTransformElement *)0x0) {
        return (FRigTransformElement *)0x0;
      }
      bVar2 = FRigBaseElement::IsA<FRigTransformElement>((FRigBaseElement *)pFVar3);
      if (!bVar2) {
        return (FRigTransformElement *)0x0;
      }
      return pFVar3;
    }
  }
  if (param_1 != (FText *)0x0) {
    FRigBaseElement::GetName((FRigBaseElement *)this_00);
    ::FString::PrintfImpl(&local_28,L"Resolved target not found for connector \'%s\'.");
    pFVar4 = FText::FromString(&local_18,&local_28);
    FText::operator=(param_1,pFVar4);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return (FRigTransformElement *)0x0;
}

