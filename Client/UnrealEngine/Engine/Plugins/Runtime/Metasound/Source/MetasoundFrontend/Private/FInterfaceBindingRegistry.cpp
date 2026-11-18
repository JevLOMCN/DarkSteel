// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FindInterfaceBindingEntries @ 14ad734f0

bool __thiscall
Metasound::Frontend::FInterfaceBindingRegistry::FindInterfaceBindingEntries
          (FInterfaceBindingRegistry *this,FMetasoundFrontendVersion *param_1,
          TArray<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  undefined8 local_48;
  TArray<TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_const_*,TSizedDefaultAllocator<32>_>
  local_40;
  FString local_30;
  
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  GetInterfaceRegistryKey(&local_30,param_1);
  TMultiMap<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>_>
  ::MultiFindPointer<TSizedDefaultAllocator<32>_>(&this->Entries,&local_30,&local_40,false);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar3 = local_40.ArrayNum;
  uVar9 = (ulonglong)local_40.ArrayNum;
  pFVar2 = local_40.AllocatorInstance.Data + uVar9 * 8;
  FVar10.Data = local_40.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar10.Data == pFVar2) break;
    local_48 = **(undefined8 **)FVar10.Data;
    pFVar4 = (param_2->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,piVar1);
    }
    FVar10.Data = FVar10.Data + 8;
    param_2->ArrayNum = iVar8 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48;
    uVar9 = local_40._8_8_ & 0xffffffff;
  }
  iVar3 = param_2->ArrayNum;
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return iVar3 != 0;
}

// RegisterInterfaceBinding @ 14ad73690

void __thiscall
Metasound::Frontend::FInterfaceBindingRegistry::RegisterInterfaceBinding
          (FInterfaceBindingRegistry *this,FMetasoundFrontendVersion *param_1,
          TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>
          *param_2)

{
  FString *local_28;
  TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>
  *local_20;
  FString local_18;
  
  GetInterfaceRegistryKey(&local_18,param_1);
  local_28 = &local_18;
  local_20 = param_2;
  TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_&&,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
              *)&this->Entries,
             (TPairInitializer<FString_&&,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_&&>
              *)&stack0x00000008,(bool *)&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UnregisterInterfaceBinding @ 14ad736f0

bool __thiscall
Metasound::Frontend::FInterfaceBindingRegistry::UnregisterInterfaceBinding
          (FInterfaceBindingRegistry *this,FMetasoundFrontendVersion *param_1,
          FMetasoundFrontendVersion *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
  *this_00;
  FString *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined1 local_res8 [8];
  TArray<TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_const_*,TSizedDefaultAllocator<32>_>
  local_70;
  FString local_60;
  TBaseKeyIterator<0> local_50;
  
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  GetInterfaceRegistryKey(&local_60,param_1);
  TMultiMap<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>_>
  ::MultiFindPointer<TSizedDefaultAllocator<32>_>(&this->Entries,&local_60,&local_70,false);
  iVar5 = local_70.ArrayNum;
  pFVar11 = local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 8;
  FVar12.Data = local_70.AllocatorInstance.Data;
  do {
    if (local_70.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_const_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar12.Data == pFVar11) {
      bVar7 = false;
LAB_14ad738a3:
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      return bVar7;
    }
    plVar2 = *(longlong **)FVar12.Data;
    lVar3 = *plVar2;
    if ((lVar3 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\Interfaces\\MetasoundFrontendInterfaceBindingRegistry.cpp"
                           ,0x42,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    if ((((*(FName *)(lVar3 + 8) == param_2->Name) &&
         (*(int *)(lVar3 + 0x10) == (param_2->Number).Major)) &&
        (*(int *)(lVar3 + 0x14) == (param_2->Number).Minor)) &&
       (TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                  (&local_50,
                   (TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
                    *)&this->Entries,&local_60), pFVar6 = local_50.Key, this_00 = local_50.Set,
       iVar13 = local_50.NextIndex, local_50.Index != -1)) {
LAB_14ad73810:
      if (*(longlong *)((longlong)local_50.Index * 0x20 + 0x10 + *(longlong *)&this_00->Elements) ==
          *plVar2) {
        TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
        ::RemoveByIndex(this_00,local_50.Index);
        bVar7 = true;
        goto LAB_14ad738a3;
      }
      iVar10 = iVar13;
      local_50.Index = iVar13;
      if (iVar13 != -1) {
        do {
          iVar9 = (pFVar6->Data).ArrayNum;
          puVar14 = (undefined8 *)((longlong)iVar10 * 0x20 + *(longlong *)&this_00->Elements);
          iVar1 = *(int *)(puVar14 + 1);
          iVar13 = *(int *)(puVar14 + 3);
          local_50.NextIndex = iVar13;
          if (iVar1 == iVar9) {
            if (iVar1 < 2) goto LAB_14ad73874;
            iVar9 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)*puVar14,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data)
            ;
            bVar7 = iVar9 == 0;
          }
          else {
            bVar7 = iVar9 + iVar1 == 1;
          }
          if ((bVar7) || (iVar10 = iVar13, iVar13 == -1)) goto LAB_14ad73874;
        } while( true );
      }
    }
LAB_14ad73885:
    FVar12.Data = FVar12.Data + 8;
  } while( true );
LAB_14ad73874:
  local_50.Index = iVar10;
  if (iVar10 == -1) goto LAB_14ad73885;
  goto LAB_14ad73810;
}

// UnregisterAllInterfaceBindings @ 14ad738f0

bool __thiscall
Metasound::Frontend::FInterfaceBindingRegistry::UnregisterAllInterfaceBindings
          (FInterfaceBindingRegistry *this,FMetasoundFrontendVersion *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FString local_18;
  
  GetInterfaceRegistryKey(&local_18,param_1);
  if (*(int *)&(this->Entries).field_0x8 == *(int *)&(this->Entries).field_0x34) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_18.Data.ArrayNum + -1;
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    iVar3 = TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
            ::RemoveImpl<FString>
                      ((TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
                        *)&this->Entries,uVar2,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return 0 < iVar3;
}

// ~FInterfaceBindingRegistry @ 14ad9e1c0

void __thiscall
Metasound::Frontend::FInterfaceBindingRegistry::~FInterfaceBindingRegistry
          (FInterfaceBindingRegistry *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Entries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  return;
}

