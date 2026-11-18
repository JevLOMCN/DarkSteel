// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FSubgraphDependencyLookup @ 14ae1c730

FSubgraphDependencyLookup * __thiscall
`Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies'::__l2::
FSubgraphDependencyLookup::FSubgraphDependencyLookup(void *this,FSubgraphDependencyLookup *param_1)

{
  undefined1 *_Src;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)&param_1->DependencyMap;
    *(undefined8 *)&param_1->DependencyMap = 0;
    *(undefined4 *)((longlong)this + 8) = *(undefined4 *)&(param_1->DependencyMap).field_0x8;
    *(undefined4 *)((longlong)this + 0xc) = *(undefined4 *)&(param_1->DependencyMap).field_0xc;
    *(undefined8 *)&(param_1->DependencyMap).field_0x8 = 0;
    _Src = &(param_1->DependencyMap).field_0x10;
    if ((undefined1 *)((longlong)this + 0x10) != _Src) {
      if (*(longlong *)&(param_1->DependencyMap).field_0x20 == 0) {
        memmove((undefined1 *)((longlong)this + 0x10),_Src,0x10);
      }
      if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)this + 0x20));
      }
      *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&(param_1->DependencyMap).field_0x20;
      *(undefined8 *)&(param_1->DependencyMap).field_0x20 = 0;
      *(undefined4 *)((longlong)this + 0x28) = *(undefined4 *)&(param_1->DependencyMap).field_0x28;
      *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)&(param_1->DependencyMap).field_0x2c;
      *(undefined8 *)&(param_1->DependencyMap).field_0x28 = 0;
    }
    *(undefined4 *)((longlong)this + 0x30) = *(undefined4 *)&(param_1->DependencyMap).field_0x30;
    *(undefined4 *)((longlong)this + 0x34) = *(undefined4 *)&(param_1->DependencyMap).field_0x34;
    *(undefined4 *)&(param_1->DependencyMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->DependencyMap).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->DependencyMap).field_0x40 == 0) {
    *(undefined4 *)((longlong)this + 0x38) = *(undefined4 *)&(param_1->DependencyMap).field_0x38;
  }
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)&(param_1->DependencyMap).field_0x40;
  *(undefined8 *)&(param_1->DependencyMap).field_0x40 = 0;
  *(undefined4 *)((longlong)this + 0x48) = *(undefined4 *)&(param_1->DependencyMap).field_0x48;
  *(undefined4 *)&(param_1->DependencyMap).field_0x48 = 0;
  return this;
}

// FSubgraphDependencyLookup @ 14ae1c850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSubgraphDependencyLookup * __thiscall
`Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies'::__l2::
FSubgraphDependencyLookup::FSubgraphDependencyLookup
          (void *this,TArrayView<FMetasoundFrontendGraphClass_const_*,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
  *pTVar3;
  bool bVar4;
  int iVar5;
  FMetasoundFrontendGraph *pFVar6;
  ulong64 uVar7;
  FSubgraphDependencyLookup *pFVar8;
  FMetasoundFrontendGraphClass **ppFVar9;
  longlong lVar10;
  FMetasoundFrontendGraphClass **ppFVar11;
  FScriptContainerElement *pFVar12;
  FGuid *pFVar13;
  FMetasoundFrontendGraphClass **ppFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  FMetasoundFrontendGraphClass **local_f0;
  TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
  *local_e8;
  undefined1 local_e0 [8];
  FMetasoundFrontendGraphClass *local_d8;
  FMetasoundFrontendGraphClass *local_d0;
  FMetasoundFrontendGraphClass **local_c8;
  longlong *local_c0;
  FMetasoundFrontendGraphClass **local_b8;
  FMetasoundFrontendGraphClass **local_b0;
  longlong local_a8;
  TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  ppFVar14 = param_1->DataPtr;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  ppFVar11 = ppFVar14 + param_1->ArrayNum;
  local_f0 = ppFVar14;
  local_e8 = this;
  local_c8 = ppFVar11;
  if (ppFVar14 != ppFVar11) {
    local_b8 = &local_d8;
    ppFVar9 = ppFVar14;
    do {
      local_d8 = *ppFVar9;
      local_c0 = &local_d8->_padding_;
      TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FMetasoundFrontendGraphClass_const_*_const_&>_>
                (&local_98,
                 (TPairInitializer<FGuid_const_&,FMetasoundFrontendGraphClass_const_*_const_&> *)
                 local_e0,(bool *)&local_c0);
      ppFVar9 = ppFVar9 + 1;
    } while (ppFVar9 != ppFVar11);
    do {
      local_d0 = *ppFVar14;
      pFVar6 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(local_d0);
      pTVar3 = local_e8;
      pFVar12 = (pFVar6->Nodes).AllocatorInstance.Data;
      iVar1 = (pFVar6->Nodes).ArrayNum;
      pFVar13 = (FGuid *)(pFVar12 + 0x10);
      pFVar15 = pFVar12 + (longlong)iVar1 * 0x88;
      while( true ) {
        if ((pFVar6->Nodes).ArrayNum != iVar1) {
          local_f8[0] = 0;
          `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_f8);
        }
        if (pFVar12 == pFVar15) break;
        uVar7 = CityHash64((char *)pFVar13,0x10);
        iVar5 = TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FGuid>(&local_98,(uint)uVar7,pFVar13);
        if (iVar5 != -1) {
          uVar7 = CityHash64((char *)pFVar13,0x10);
          iVar5 = TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FGuid>(&local_98,(uint)uVar7,pFVar13);
          if (iVar5 == -1) {
            lVar10 = 0;
LAB_14ae1c9df:
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FSubgraphDependencyLookup *)(*pcVar2)();
              return pFVar8;
            }
          }
          else {
            lVar10 = (longlong)iVar5 * 0x20 + local_98.Elements._0_8_;
            if (lVar10 == 0) goto LAB_14ae1c9df;
          }
          local_b0 = &local_d0;
          local_a8 = lVar10 + 0x10;
          TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,FMetasoundFrontendGraphClass_const_*_const_&>_>
                    (pTVar3,(TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,FMetasoundFrontendGraphClass_const_*_const_&>
                             *)(local_e0 + 4),(bool *)&local_b0);
        }
        pFVar12 = pFVar12 + 0x88;
        pFVar13 = (FGuid *)&pFVar13[8].C;
      }
      ppFVar14 = local_f0 + 1;
      local_f0 = ppFVar14;
    } while (ppFVar14 != local_c8);
  }
  pTVar3 = local_e8;
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return (FSubgraphDependencyLookup *)pTVar3;
}

