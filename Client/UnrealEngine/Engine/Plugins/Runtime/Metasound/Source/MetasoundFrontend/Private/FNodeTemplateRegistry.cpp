// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FindTemplate @ 14ae4a1e0

INodeTemplate * __thiscall
Metasound::Frontend::FNodeTemplateRegistry::FindTemplate
          (FNodeTemplateRegistry *this,FNodeClassRegistryKey *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar1 = Frontend::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
                      *)&this->Templates,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x38 + *(longlong *)&(this->Templates).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x28);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (INodeTemplate *)*puVar4;
    }
  }
  return (INodeTemplate *)0x0;
}

// FindTemplate @ 14ae4a250

INodeTemplate * __thiscall
Metasound::Frontend::FNodeTemplateRegistry::FindTemplate
          (FNodeTemplateRegistry *this,FMetasoundFrontendClassName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  INodeTemplate *pIVar5;
  FIdentityFunctor local_res8;
  TArray<Metasound::Frontend::INodeTemplate_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendClassName>
                    ((TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
                      *)&this->TemplateByClassName,uVar3,param_1);
  if (iVar4 == -1) {
    return (INodeTemplate *)0x0;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TMultiMap<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->TemplateByClassName,param_1,&local_18,false);
  AlgoImpl::
  IntroSortInternal<Metasound::Frontend::INodeTemplate_const_*,int,FIdentityFunctor,_Metasound::Frontend::FNodeTemplateRegistry::FindTemplate_::__l5::<lambda_1>_>
            ((INodeTemplate **)local_18.AllocatorInstance.Data,local_18.ArrayNum,local_res8,
             (<lambda_1>)local_res8);
  uVar3 = 0;
  if ((int)(local_18.ArrayNum - 1U) < local_18.ArrayNum) {
    uVar3 = ~(local_18.ArrayNum - 1U) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar5 = (INodeTemplate *)(*pcVar1)();
      return pIVar5;
    }
  }
  pIVar5 = *(INodeTemplate **)
            (local_18.AllocatorInstance.Data + (longlong)(local_18.ArrayNum + -1) * 8);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pIVar5;
}

// ~FNodeTemplateRegistry @ 14ae5c540

void __thiscall
Metasound::Frontend::FNodeTemplateRegistry::~FNodeTemplateRegistry(FNodeTemplateRegistry *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->TemplateByClassName).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TemplateByClassName).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TemplateByClassName);
  *(undefined4 *)&(this->Templates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Templates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Templates);
  return;
}

// Register @ 14ae7fba0

void __thiscall
Metasound::Frontend::FNodeTemplateRegistry::Register
          (FNodeTemplateRegistry *this,
          TUniquePtr<Metasound::Frontend::INodeTemplate,TDefaultDelete<Metasound::Frontend::INodeTemplate>_>
          *param_1)

{
  FMetasoundFrontendClassMetadata *this_00;
  code *pcVar1;
  bool bVar2;
  EMetasoundFrontendClassType EVar3;
  longlong lVar4;
  FMetasoundFrontendVersionNumber *pFVar5;
  undefined1 local_res10 [16];
  INodeTemplate *local_res20;
  longlong *local_68;
  EMetasoundFrontendClassType *local_60;
  INodeTemplate **local_58;
  longlong local_50;
  longlong **local_48;
  EMetasoundFrontendClassType local_40 [4];
  FMetasoundFrontendClassName local_3c;
  FMetasoundFrontendVersionNumber local_24;
  
  if (param_1->Ptr == (INodeTemplate *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4935647954091376698>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeTemplateRegistry.cpp"
                       ,0x3a,"InTemplate.IsValid()");
    if (!bVar2) {
      return;
    }
  }
  else {
    lVar4 = (**(code **)((longlong)*param_1->Ptr + 0x30))();
    this_00 = (FMetasoundFrontendClassMetadata *)(lVar4 + 0x18);
    local_40[0] = FMetasoundFrontendClassMetadata::GetType(this_00);
    local_3c.Namespace = (this_00->ClassName).Namespace;
    local_3c.Name = *(FName *)(lVar4 + 0x20);
    local_3c.Variant = *(FName *)(lVar4 + 0x28);
    pFVar5 = FMetasoundFrontendClassMetadata::GetVersion(this_00);
    local_24 = *pFVar5;
    EVar3 = FMetasoundFrontendClassMetadata::GetType(this_00);
    if (EVar3 == Graph) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                         ,0xa9,
                         L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_40[0] != Invalid) {
      bVar2 = FMetasoundFrontendClassName::IsValid(&local_3c);
      if (bVar2) {
        bVar2 = FMetasoundFrontendVersionNumber::IsValid(&local_24);
        if (bVar2) {
          local_res20 = param_1->Ptr;
          local_60 = local_40;
          param_1->Ptr = (INodeTemplate *)0x0;
          local_58 = &local_res20;
          TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_&&>_>
                    ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
                      *)&this->Templates,
                     (TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_&&>
                      *)local_res10,(bool *)&local_60);
          lVar4 = *(longlong *)&this->Templates;
          if (local_res20 != (INodeTemplate *)0x0) {
            (**(code **)((longlong)*local_res20 + 8))(local_res20,1);
          }
          local_68 = *(longlong **)(lVar4 + (longlong)(int)local_res10._0_4_ * 0x38 + 0x28);
          local_50 = (**(code **)(*local_68 + 0x30))();
          local_50 = local_50 + 0x18;
          local_48 = &local_68;
          TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FMetasoundFrontendClassName_const_&,Metasound::Frontend::INodeTemplate_const_*_&&>_>
                    ((TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
                      *)&this->TemplateByClassName,
                     (TPairInitializer<FMetasoundFrontendClassName_const_&,Metasound::Frontend::INodeTemplate_const_*_&&>
                      *)(local_res10 + 8),(bool *)&local_50);
          return;
        }
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4935647954091376701>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeTemplateRegistry.cpp"
                       ,0x3d,"Key.IsValid()");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Unregister @ 14ae8da50

void __thiscall
Metasound::Frontend::FNodeTemplateRegistry::Unregister
          (FNodeTemplateRegistry *this,FNodeClassRegistryKey *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 local_28 [2];
  
  plVar9 = (longlong *)0x0;
  uVar4 = Frontend::GetTypeHash(param_1);
  uVar4 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
                      *)&this->Templates,uVar4,param_1);
  if (uVar4 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4935647954091376712>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeTemplateRegistry.cpp"
                       ,0x48,"Templates.RemoveAndCopyValue(InKey, Removed)");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar6 = (undefined8 *)(*(longlong *)&this->Templates + 0x28 + (longlong)(int)uVar4 * 0x38);
  if (local_28 != puVar6) {
    plVar9 = (longlong *)*puVar6;
    *puVar6 = 0;
  }
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)&(this->Templates).field_0x28)) {
    puVar7 = *(undefined1 **)&(this->Templates).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Templates).field_0x10;
    }
    if ((*(uint *)(puVar7 + (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) goto LAB_14ae8db40;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ae8db40:
  puVar7 = *(undefined1 **)&(this->Templates).field_0x40;
  lVar10 = *(longlong *)&this->Templates + (longlong)(int)uVar4 * 0x38;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &(this->Templates).field_0x38;
  }
  puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar10 + 0x34) * 4);
  do {
    uVar1 = *puVar8;
    if (uVar1 == 0xffffffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (uVar1 == uVar4) {
      *puVar8 = *(uint *)(lVar10 + 0x30);
      TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&this->Templates,uVar4,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this->Templates,uVar4,1);
      lVar10 = (**(code **)(*plVar9 + 0x30))(plVar9);
      if (*(int *)&(this->TemplateByClassName).field_0x8 !=
          *(int *)&(this->TemplateByClassName).field_0x34) {
        uVar4 = ::GetTypeHash((FMetasoundFrontendClassName *)(lVar10 + 0x18));
        iVar5 = TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
                ::RemoveImpl<FMetasoundFrontendClassName>
                          ((TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
                            *)&this->TemplateByClassName,uVar4,
                           (FMetasoundFrontendClassName *)(lVar10 + 0x18));
        if (iVar5 != 0) goto LAB_14ae8dc41;
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4935647954091376714>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeTemplateRegistry.cpp"
                         ,0x4a,
                         "TemplateByClassName.Remove(Removed->GetFrontendClass().Metadata.GetClassName())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_14ae8dc41:
      if (plVar9 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar9 + 8))(plVar9,1);
      return;
    }
    puVar8 = (uint *)(*(longlong *)&this->Templates + 0x30 + (longlong)(int)uVar1 * 0x38);
  } while( true );
}

