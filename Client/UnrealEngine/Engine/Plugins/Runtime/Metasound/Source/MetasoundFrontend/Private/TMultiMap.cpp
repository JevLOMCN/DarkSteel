// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// MultiFindPointer<TSizedDefaultAllocator<32>_> @ 14ad8d400

void __thiscall
TMultiMap<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>_>
::MultiFindPointer<TSizedDefaultAllocator<32>_>
          (TMultiMap<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>_>
           *this,FString *param_1,
          TArray<TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_const_*,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  longlong local_38;
  TBaseKeyIterator<1> local_30;
  
  TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_30,
             (TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FString_const_>)param_1);
  iVar6 = local_30.Index;
  iVar8 = local_30.NextIndex;
joined_r0x00014ad8d430:
  iVar9 = iVar8;
  local_30.Index = iVar6;
  if (local_30.Index != -1) {
    local_38 = (longlong)local_30.Index * 0x20 + *(longlong *)&(local_30.Set)->Elements + 0x10;
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38;
    local_30.Index = iVar9;
    if (iVar9 != -1) {
      do {
        iVar1 = ((local_30.Key)->Data).ArrayNum;
        puVar11 = (undefined8 *)((longlong)iVar9 * 0x20 + *(longlong *)&(local_30.Set)->Elements);
        iVar2 = *(int *)(puVar11 + 1);
        iVar8 = *(int *)(puVar11 + 3);
        local_30.NextIndex = iVar8;
        iVar6 = iVar9;
        if (iVar2 == iVar1) {
          if (iVar2 < 2) goto joined_r0x00014ad8d430;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*puVar11,
                             (wchar_t *)((local_30.Key)->Data).AllocatorInstance.Data);
          bVar7 = iVar9 == 0;
        }
        else {
          bVar7 = iVar1 + iVar2 == 1;
        }
        if ((bVar7) || (iVar9 = iVar8, iVar6 = iVar8, iVar8 == -1)) goto joined_r0x00014ad8d430;
      } while( true );
    }
  }
  if (param_3) {
    pFVar3 = (param_2->AllocatorInstance).Data;
    iVar8 = param_2->ArrayNum / 2;
    if (0 < iVar8) {
      lVar10 = 0;
      pFVar12 = pFVar3 + (longlong)(param_2->ArrayNum + -1) * 8;
      do {
        uVar4 = *(undefined8 *)(pFVar3 + lVar10 * 8);
        *(undefined8 *)(pFVar3 + lVar10 * 8) = *(undefined8 *)pFVar12;
        lVar10 = lVar10 + 1;
        *(undefined8 *)pFVar12 = uVar4;
        pFVar12 = pFVar12 + -8;
      } while (lVar10 < iVar8);
    }
  }
  return;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 14adda3a0

void __thiscall
TMultiMap<FGuid,FMetasoundFrontendEdge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FGuid,FMetasoundFrontendEdge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>_>
           *this,FGuid *param_1,TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  TBaseKeyIterator<1> local_58;
  
  TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_58,
             (TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FGuid_const_>)param_1);
  if (local_58.Index != 0xffffffff) {
    piVar1 = &param_2->ArrayMax;
    do {
      uVar11 = local_58.NextIndex;
      pTVar5 = local_58.Set;
      pFVar10 = (FScriptContainerElement *)
                (*(longlong *)&(local_58.Set)->Elements + 0x10 + (longlong)local_58.Index * 0x58);
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar10) && (pFVar10 < pFVar2 + (longlong)*piVar1 * 0x40)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x440,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar7 + 1;
      uVar4 = *(undefined8 *)(pFVar10 + 8);
      pFVar2 = (param_2->AllocatorInstance).Data;
      lVar8 = (longlong)iVar7 * 0x40;
      *(undefined8 *)(pFVar2 + lVar8) = *(undefined8 *)pFVar10;
      *(undefined8 *)(pFVar2 + lVar8 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar10 + 0x18);
      *(undefined8 *)(pFVar2 + lVar8 + 0x10) = *(undefined8 *)(pFVar10 + 0x10);
      *(undefined8 *)(pFVar2 + lVar8 + 0x10 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar10 + 0x28);
      *(undefined8 *)(pFVar2 + lVar8 + 0x20) = *(undefined8 *)(pFVar10 + 0x20);
      *(undefined8 *)(pFVar2 + lVar8 + 0x20 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar10 + 0x38);
      *(undefined8 *)(pFVar2 + lVar8 + 0x30) = *(undefined8 *)(pFVar10 + 0x30);
      *(undefined8 *)(pFVar2 + lVar8 + 0x30 + 8) = uVar4;
      local_58.Index = uVar11;
      if (uVar11 == 0xffffffff) break;
      do {
        puVar9 = (uint *)((longlong)(int)uVar11 * 0x58 + *(longlong *)&pTVar5->Elements);
        local_58.NextIndex = puVar9[0x14];
        local_58.Index = uVar11;
        if ((((local_58.Key)->B == puVar9[1] && (local_58.Key)->C == puVar9[2]) &&
            (local_58.Key)->D == puVar9[3]) && (local_58.Key)->A == *puVar9) break;
        local_58.Index = local_58.NextIndex;
        uVar11 = local_58.NextIndex;
      } while (local_58.NextIndex != 0xffffffff);
    } while (local_58.Index != 0xffffffff);
  }
  if (param_3) {
    AlgoImpl::Reverse<FMetasoundFrontendEdge>
              ((FMetasoundFrontendEdge *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  }
  return;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 14ae15160

void __thiscall
TMultiMap<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>_>
           *this,FMetasoundFrontendGraphClass *param_1,
          TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
LAB_14ae152dc:
      if (param_3) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        iVar6 = param_2->ArrayNum / 2;
        if (0 < iVar6) {
          lVar8 = 0;
          pFVar7 = pFVar1 + (longlong)(param_2->ArrayNum + -1) * 8;
          do {
            uVar2 = *(undefined8 *)(pFVar1 + lVar8 * 8);
            *(undefined8 *)(pFVar1 + lVar8 * 8) = *(undefined8 *)pFVar7;
            lVar8 = lVar8 + 1;
            *(undefined8 *)pFVar7 = uVar2;
            pFVar7 = pFVar7 + -8;
          } while (lVar8 < iVar6);
        }
      }
      return;
    }
    pFVar1 = (FScriptContainerElement *)
             (*(longlong *)&(local_38.Set)->Elements + ((longlong)local_38.Index * 3 + 1) * 8);
    pFVar7 = (param_2->AllocatorInstance).Data;
    local_38.NextIndex = iVar6;
    if (((pFVar7 <= pFVar1) && (pFVar1 < pFVar7 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1
    ;
    if (iVar6 == -1) goto LAB_14ae152dc;
    local_38.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_38.Set)->Elements + 0x10 +
                      (longlong)local_38.Index * 0x18);
      if (*(FMetasoundFrontendGraphClass **)
           (*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x18) ==
          local_38.Key) break;
      local_38.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 14ae54650

void __thiscall
TMultiMap<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>_>
           *this,FMetasoundFrontendClassName *param_1,
          TArray<Metasound::Frontend::INodeTemplate_const_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

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
  
  TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_58,
             (TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
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
                          (0x808,&param_2->AllocatorInstance,piVar1);
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

// MultiFind<TSizedDefaultAllocator<32>_> @ 14ae54890

void __thiscall
TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>
           *this,FNodeClassRegistryKey *param_1,
          TArray<TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<Metasound::Frontend::FNodeClassRegistryKey_const_>)param_1);
  if (local_38.Index != -1) {
    while( true ) {
      iVar7 = local_38.NextIndex;
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x40 + 0x28);
      pFVar9 = (param_2->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar11) && (pFVar11 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar11;
      lVar10 = *(longlong *)(pFVar11 + 8);
      *(longlong *)(pFVar9 + 8) = lVar10;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      if (iVar7 == -1) break;
      lVar10 = *(longlong *)&(local_38.Set)->Elements;
      local_38.Index = iVar7;
      while( true ) {
        lVar8 = (longlong)local_38.Index * 0x40;
        local_38.NextIndex = *(int *)(lVar8 + 0x38 + lVar10);
        if ((((*(EMetasoundFrontendClassType *)(lVar8 + lVar10) == (local_38.Key)->Type) &&
             (*(FName *)(lVar8 + 4 + lVar10) == ((local_38.Key)->ClassName).Namespace)) &&
            ((*(FName *)(lVar8 + 0xc + lVar10) == ((local_38.Key)->ClassName).Name &&
             ((*(FName *)(lVar8 + 0x14 + lVar10) == ((local_38.Key)->ClassName).Variant &&
              (*(int *)(lVar8 + 0x1c + lVar10) == ((local_38.Key)->Version).Major)))))) &&
           (*(int *)(lVar8 + 0x20 + lVar10) == ((local_38.Key)->Version).Minor)) break;
        local_38.Index = local_38.NextIndex;
        if (local_38.NextIndex == -1) goto LAB_14ae54a6a;
      }
      if (local_38.Index == -1) break;
    }
  }
LAB_14ae54a6a:
  if (param_3) {
    pFVar9 = (param_2->AllocatorInstance).Data;
    iVar7 = param_2->ArrayNum / 2;
    lVar10 = (longlong)iVar7;
    if (0 < iVar7) {
      pFVar11 = pFVar9 + (longlong)(param_2->ArrayNum + -1) * 0x10;
      do {
        uVar2 = *(undefined8 *)(pFVar11 + 8);
        uVar3 = *(undefined8 *)pFVar9;
        uVar4 = *(undefined8 *)(pFVar9 + 8);
        *(undefined8 *)pFVar9 = *(undefined8 *)pFVar11;
        *(undefined8 *)(pFVar9 + 8) = uVar2;
        pFVar9 = pFVar9 + 0x10;
        *(undefined8 *)pFVar11 = uVar3;
        *(undefined8 *)(pFVar11 + 8) = uVar4;
        lVar10 = lVar10 + -1;
        pFVar11 = pFVar11 + -0x10;
      } while (lVar10 != 0);
    }
  }
  return;
}

// RemoveSingle @ 14ae877e0

int __thiscall
TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>
::RemoveSingle(TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>
               *this,FNodeClassRegistryKey *param_1,
              TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  ForElementType<unsigned_int> FVar9;
  TBaseKeyIterator<0> local_28;
  
  TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<Metasound::Frontend::FNodeClassRegistryKey_const_>)param_1);
  if (local_28.Index == 0xffffffff) {
    return 0;
  }
  lVar7 = *(longlong *)&(local_28.Set)->Elements;
  while (iVar4 = local_28.Index,
        *(INodeClassRegistryEntry **)((longlong)local_28.Index * 0x40 + 0x28 + lVar7) !=
        param_2->Object) {
    if (local_28.NextIndex == 0xffffffff) {
      return 0;
    }
    local_28.Index = local_28.NextIndex;
    while( true ) {
      lVar5 = (longlong)local_28.Index * 0x40;
      local_28.NextIndex = *(uint *)(lVar5 + 0x38 + lVar7);
      if ((((*(EMetasoundFrontendClassType *)(lVar5 + lVar7) == (local_28.Key)->Type) &&
           (*(FName *)(lVar5 + 4 + lVar7) == ((local_28.Key)->ClassName).Namespace)) &&
          (*(FName *)(lVar5 + 0xc + lVar7) == ((local_28.Key)->ClassName).Name)) &&
         (((*(FName *)(lVar5 + 0x14 + lVar7) == ((local_28.Key)->ClassName).Variant &&
           (*(int *)(lVar5 + 0x1c + lVar7) == ((local_28.Key)->Version).Major)) &&
          (*(int *)(lVar5 + 0x20 + lVar7) == ((local_28.Key)->Version).Minor)))) break;
      local_28.Index = local_28.NextIndex;
      if (local_28.NextIndex == 0xffffffff) {
        return 0;
      }
    }
    if (local_28.Index == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < local_28.Index) && (local_28.Index < *(int *)&((local_28.Set)->Elements).field_0x28)) {
    FVar9 = *(ForElementType<unsigned_int> *)&((local_28.Set)->Elements).field_0x20;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)&((local_28.Set)->Elements).field_0x10;
    }
    if ((*(uint *)((longlong)FVar9 +
                  (longlong)((int)(local_28.Index + (local_28.Index >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (local_28.Index & 0x1fU) & 1) != 0) goto LAB_14ae8792e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14ae8792e:
  FVar6 = ((local_28.Set)->Hash).SecondaryData;
  lVar7 = (longlong)iVar4 * 0x40 + *(longlong *)&(local_28.Set)->Elements;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&(local_28.Set)->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x3c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == iVar4) {
      *puVar8 = *(uint *)(lVar7 + 0x38);
      TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&(local_28.Set)->Elements,iVar4,1);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_28.Set,iVar4,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&(local_28.Set)->Elements + 0x38 + (longlong)(int)uVar1 * 0x40);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

