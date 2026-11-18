// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// ExecuteStep @ 14ae70b30

void __thiscall
Metasound::FrontendQueryPrivate::FMultiMapStepExecuter::ExecuteStep
          (FMultiMapStepExecuter *this,FFrontendQueryEntry *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  ForElementType<Metasound::FFrontendQueryEntry> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  ForElementType<Metasound::FFrontendQueryEntry> FVar7;
  ForElementType<Metasound::FFrontendQueryEntry> FVar8;
  longlong lVar9;
  FFrontendQueryKey *pFVar10;
  FFrontendQueryKey *pFVar11;
  undefined1 local_res8 [8];
  FFrontendQueryKey *local_38;
  int local_30;
  
  (**(code **)(**(longlong **)&this->field_0x8 + 8))
            (*(longlong **)&this->field_0x8,&local_38,param_1);
  iVar4 = local_30;
  pFVar11 = local_38 + local_30;
  pFVar10 = local_38;
  do {
    if (local_30 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::FFrontendQueryKey,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar11) {
      DestructItems<Metasound::FFrontendQueryKey,int>(local_38,local_30);
      if (local_38 != (FFrontendQueryKey *)0x0) {
        FMemory::Free(local_38);
      }
      return;
    }
    FVar7 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(param_2,pFVar10);
    if (FVar7 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FVar7 = (ForElementType<Metasound::FFrontendQueryEntry>)
              TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
              ::Emplace<Metasound::FFrontendQueryKey>(param_2,pFVar10);
    }
    FVar1 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar7 + 0xb0);
    FVar8 = FVar7;
    if (FVar1 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FVar8 = FVar1;
    }
    if ((ulonglong)FVar8 <= param_1) {
      FVar8 = FVar7;
      if (FVar1 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar8 = FVar1;
      }
      if ((param_1 < (FFrontendQueryEntry *)
                     ((longlong)*(int *)((longlong)FVar7 + 0xbc) * 0xb0 + (longlong)FVar8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar6 = *(int *)((longlong)FVar7 + 0xb8);
    if (iVar6 == *(int *)((longlong)FVar7 + 0xbc)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                        (0x8b0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar7,
                         (int *)((longlong)FVar7 + 0xbc));
    }
    *(int *)((longlong)FVar7 + 0xb8) = iVar6 + 1;
    uVar3 = *(undefined8 *)&(param_1->ID).C;
    if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar7 + 0xb0) !=
        (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FVar7 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar7 + 0xb0);
    }
    lVar9 = (longlong)iVar6 * 0xb0;
    *(undefined8 *)(lVar9 + (longlong)FVar7) = *(undefined8 *)&param_1->ID;
    ((undefined8 *)(lVar9 + (longlong)FVar7))[1] = uVar3;
    TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
    ::
    TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
              ((TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
                *)((longlong)FVar7 + 0x10 + lVar9),&param_1->Value);
    pFVar10 = pFVar10 + 1;
    *(float *)(lVar9 + 0xa8 + (longlong)FVar7) = param_1->Score;
  } while( true );
}

