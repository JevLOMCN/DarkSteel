// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a2c6540

UScriptStruct * __cdecl FRigChildOfPrimaryConnectionRule::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule,
                         (UObject *)pUVar1,L"RigChildOfPrimaryConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.OuterSingleton;
}

// GetScriptStruct @ 14a2c6640

UScriptStruct * __thiscall
FRigChildOfPrimaryConnectionRule::GetScriptStruct(FRigChildOfPrimaryConnectionRule *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule,
                         (UObject *)pUVar1,L"RigChildOfPrimaryConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.OuterSingleton;
}

// Resolve @ 14a2c66c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementResolveResult * __thiscall
FRigChildOfPrimaryConnectionRule::Resolve
          (FRigChildOfPrimaryConnectionRule *this,FRigElementResolveResult *__return_storage_ptr__,
          FRigBaseElement *param_1,FRigConnectionRuleInput *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  bool bVar5;
  FText *pFVar6;
  FRigConnectorElement *this_00;
  FRigElementResolveResult *pFVar7;
  ForElementType<FCachedRigElement> this_01;
  FRigBaseElement *pFVar8;
  FRigBaseElement *this_02;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FText local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FString local_88;
  FText local_78;
  FString local_68;
  FText local_58;
  FString local_48;
  
  pFVar6 = FText::FText(&local_c8);
  uVar3 = *(undefined3 *)&(param_1->Key).field_0x1;
  FVar4.Value = (param_1->Key).Name.ComparisonIndex.Value;
  (__return_storage_ptr__->Key).Type = (param_1->Key).Type;
  *(undefined3 *)&(__return_storage_ptr__->Key).field_0x1 = uVar3;
  (__return_storage_ptr__->Key).Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
  (__return_storage_ptr__->Key).Name.Number = (param_1->Key).Name.Number;
  __return_storage_ptr__->State = PossibleTarget;
  (__return_storage_ptr__->Message).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar6->TextData).Reference;
  (__return_storage_ptr__->Message).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  (__return_storage_ptr__->Message).Flags = pFVar6->Flags;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::FText(&local_b8);
  FRigElementResolveResult::SetPossibleTarget(__return_storage_ptr__,pFVar6);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  FText::FText(&local_118);
  this_00 = FRigConnectionRuleInput::FindPrimaryConnector(param_2,&local_118);
  if (this_00 != (FRigConnectorElement *)0x0) {
    if ((param_2->Redirector == (FRigElementKeyRedirector *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Redirector",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                           ,0xa5,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRigElementResolveResult *)(*pcVar2)();
      return pFVar7;
    }
    this_01 = (ForElementType<FCachedRigElement>)
              TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
              ::Find((TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                      *)param_2->Redirector,(FRigElementKey *)&this_00->_padding_);
    if ((this_01 == (ForElementType<FCachedRigElement>)0x0) ||
       (*(int *)((longlong)this_01 + 0x28) == 0)) {
LAB_14a2c6833:
      FRigBaseElement::GetName((FRigBaseElement *)this_00);
      ::FString::PrintfImpl(&local_108,L"Resolved target not found for connector \'%s\'.");
      pFVar6 = FText::FromString(&local_a8,&local_108);
      FText::operator=(&local_118,pFVar6);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
LAB_14a2c6893:
      this_02 = (FRigBaseElement *)0x0;
    }
    else {
      if ((*(int *)((longlong)this_01 + 0x28) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FRigElementResolveResult *)(*pcVar2)();
        return pFVar7;
      }
      if (*(ForElementType<FCachedRigElement> *)((longlong)this_01 + 0x20) !=
          (ForElementType<FCachedRigElement>)0x0) {
        this_01 = *(ForElementType<FCachedRigElement> *)((longlong)this_01 + 0x20);
      }
      bVar5 = FCachedRigElement::UpdateCache((FCachedRigElement *)this_01,param_2->Hierarchy);
      if (!bVar5) goto LAB_14a2c6833;
      this_02 = *(FRigBaseElement **)((longlong)this_01 + 0x18);
      if ((this_02 == (FRigBaseElement *)0x0) ||
         (bVar5 = FRigBaseElement::IsA<FRigTransformElement>(this_02), !bVar5)) goto LAB_14a2c6893;
    }
    if (this_02 != (FRigBaseElement *)0x0) {
      if (param_1 == this_02) {
        FRigElementKey::ToString(&param_1->Key,&local_88);
        ::FString::PrintfImpl(&local_f8,L"Target \'%s\' is already used for the primary.");
        pFVar6 = FText::FromString(&local_98,&local_f8);
        FRigElementResolveResult::SetInvalidTarget(__return_storage_ptr__,pFVar6);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        local_68.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          local_68.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((this_02->Key).Type == Last) {
          bVar5 = FRigBaseElement::IsA<FRigSingleParentElement>(this_02);
          if (bVar5) {
            pFVar8 = this_02 + 3;
          }
          else {
            bVar5 = FRigBaseElement::IsA<FRigMultiParentElement>(this_02);
            if ((!bVar5) || (*(int *)&this_02[4].CachedNameString.Data.AllocatorInstance.Data < 1))
            goto LAB_14a2c69f7;
            pFVar8 = (FRigBaseElement *)this_02[4].ComponentIndices.AllocatorInstance.Data;
            if (pFVar8 == (FRigBaseElement *)0x0) {
              pFVar8 = this_02 + 3;
            }
          }
          pFVar8 = (FRigBaseElement *)pFVar8->_padding_;
          if (((pFVar8 != (FRigBaseElement *)0x0) &&
              (bVar5 = FRigBaseElement::IsA<FRigTransformElement>(pFVar8), bVar5)) &&
             (this_02 = pFVar8, param_1 == pFVar8)) {
            FRigElementKey::ToString(&param_1->Key,&local_68);
            ::FString::PrintfImpl(&local_e8,L"Target \'%s\' is not a child of the primary.");
            pFVar6 = FText::FromString(&local_78,&local_e8);
            FRigElementResolveResult::SetInvalidTarget(__return_storage_ptr__,pFVar6);
            if (local_78.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            goto LAB_14a2c6909;
          }
        }
LAB_14a2c69f7:
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`FRigChildOfPrimaryConnectionRule::Resolve'::__l2::
                 _dynamic_atexit_destructor_for__EmptyRigDependenciesProvider__);
          _Init_thread_footer(&::_TSS0);
        }
        bVar5 = URigHierarchy::IsParentedTo
                          (param_2->Hierarchy,param_1,this_02,
                           (IRigDependenciesProvider *)&EmptyRigDependenciesProvider,
                           (TArray<TTuple<FRigHierarchyRecord,FRigHierarchyRecord>,TSizedDefaultAllocator<32>_>
                            *)0x0);
        if (bVar5) goto LAB_14a2c6af3;
        FRigElementKey::ToString(&param_1->Key,&local_48);
        ::FString::PrintfImpl(&local_d8,L"Target \'%s\' is not a child of the primary.");
        pFVar6 = FText::FromString(&local_58,&local_d8);
        FRigElementResolveResult::SetInvalidTarget(__return_storage_ptr__,pFVar6);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        }
      }
LAB_14a2c6909:
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      goto LAB_14a2c6af3;
    }
  }
  __return_storage_ptr__->State = InvalidTarget;
  pIVar1 = (__return_storage_ptr__->Message).TextData.Reference;
  if (pIVar1 != local_118.TextData.Reference) {
    (__return_storage_ptr__->Message).TextData.Reference = local_118.TextData.Reference;
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 8))
                (local_118.TextData.Reference,local_res18);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->Message).Flags = local_118.Flags;
LAB_14a2c6af3:
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// ~FRigChildOfPrimaryConnectionRule @ 14a2de8f0

void __thiscall
FRigChildOfPrimaryConnectionRule::~FRigChildOfPrimaryConnectionRule
          (FRigChildOfPrimaryConnectionRule *this)

{
  *this = (FRigChildOfPrimaryConnectionRule)&___7FRigConnectionRule__6B_;
  return;
}

