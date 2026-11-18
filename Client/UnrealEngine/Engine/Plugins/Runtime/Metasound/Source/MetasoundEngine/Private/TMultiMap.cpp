// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// MultiFind<TSizedDefaultAllocator<32>_> @ 14b324e70

void __thiscall
TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
           *this,FMetasoundFrontendClassName *param_1,
          TArray<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  TBaseKeyIterator<1> local_58;
  
  TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_58,
             (TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FMetasoundFrontendClassName_const_>)param_1);
  if (local_58.Index != -1) {
    piVar1 = &param_2->ArrayMax;
    do {
      iVar7 = local_58.NextIndex;
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(local_58.Set)->Elements + ((longlong)local_58.Index * 5 + 3) * 8);
      pFVar10 = (param_2->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar2) && (pFVar2 < pFVar10 + (longlong)*piVar1 * 8)) &&
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
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           *(undefined8 *)pFVar2;
      if (iVar7 == -1) break;
      lVar9 = *(longlong *)&(local_58.Set)->Elements;
      do {
        lVar8 = (longlong)iVar7;
        local_58.NextIndex = *(int *)(lVar9 + 0x20 + lVar8 * 0x28);
        if (((*(FName *)(lVar9 + lVar8 * 0x28) == (local_58.Key)->Namespace) &&
            (*(FName *)(lVar9 + 8 + lVar8 * 0x28) == (local_58.Key)->Name)) &&
           (local_58.Index = iVar7,
           *(FName *)(lVar9 + 0x10 + lVar8 * 0x28) == (local_58.Key)->Variant)) break;
        local_58.Index = local_58.NextIndex;
        iVar7 = local_58.NextIndex;
      } while (local_58.NextIndex != -1);
    } while (local_58.Index != -1);
  }
  if (param_3) {
    pFVar2 = (param_2->AllocatorInstance).Data;
    iVar7 = param_2->ArrayNum / 2;
    if (0 < iVar7) {
      lVar9 = 0;
      pFVar10 = pFVar2 + (longlong)(param_2->ArrayNum + -1) * 8;
      do {
        uVar3 = *(undefined8 *)(pFVar2 + lVar9 * 8);
        *(undefined8 *)(pFVar2 + lVar9 * 8) = *(undefined8 *)pFVar10;
        lVar9 = lVar9 + 1;
        *(undefined8 *)pFVar10 = uVar3;
        pFVar10 = pFVar10 + -8;
      } while (lVar9 < iVar7);
    }
  }
  return;
}

