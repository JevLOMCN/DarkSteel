// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 5

// FindOrAddImpl<FMetaSoundAssetKey_const_&> @ 14b311b30

TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FMetaSoundAssetKey_const_&>
          (TMapBase<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FMetaSoundAssetKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMetaSoundAssetKey *local_res20;
  
  iVar1 = TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetaSoundAssetKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> *)
           (lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMetaSoundAssetKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMetaSoundAssetKey_const_&> *)(ulonglong)param_1,(bool *)&local_res20)
  ;
  return (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x20);
}

// FindOrAddImpl<FName_const_&> @ 14b311bc0

TObjectPtr<UMetaSoundBuilderBase> * __thiscall
TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14b311c52;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14b311c52:
  return (TObjectPtr<UMetaSoundBuilderBase> *)(lVar3 + 8);
}

// Find @ 14b3a5bc0

FOutputWatcher * __thiscall
TMapBase<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
::Find(TMapBase<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
       *this,FOutputWatcherKey *param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FOutputWatcher *pFVar8;
  longlong lVar9;
  FNameEntryId local_38;
  FNameEntryId FStack_30;
  FNameEntryId local_18;
  
  FVar2 = param_1->OutputName;
  FVar3 = param_1->AnalyzerName;
  FVar1 = param_1->AnalyzerMemberName;
  local_18 = FVar1.ComparisonIndex.Value;
  uVar4 = ::GetTypeHash(local_18);
  FStack_30 = FVar3.ComparisonIndex.Value;
  uVar5 = ::GetTypeHash(FStack_30);
  local_38 = FVar2.ComparisonIndex.Value;
  uVar6 = ::GetTypeHash(local_38);
  uVar6 = FVar2.Number + uVar6;
  uVar6 = uVar6 * 0x40 + FVar3.Number + uVar5 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar6;
  iVar7 = TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey>
                    (&this->Pairs,
                     uVar6 * 0x40 + FVar1.Number + uVar4 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar6,param_1
                    );
  if (iVar7 == -1) {
    pFVar8 = (FOutputWatcher *)0x0;
  }
  else {
    lVar9 = (longlong)iVar7 * 0xb0 + *(longlong *)&(this->Pairs).Elements;
    pFVar8 = (FOutputWatcher *)0x0;
    if (lVar9 != 0) {
      pFVar8 = (FOutputWatcher *)(lVar9 + 0x18);
    }
  }
  return pFVar8;
}

// Find @ 14b3a5cb0

FOutputAudioFormatInfo * __thiscall
TMapBase<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
::Find(void *this,EMetaSoundOutputAudioFormat param_1)

{
  undefined4 uVar1;
  FOutputAudioFormatInfo *pFVar2;
  EMetaSoundOutputAudioFormat *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EMetaSoundOutputAudioFormat *)((longlong)(int)uVar1 * 0x30 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pFVar2 = (FOutputAudioFormatInfo *)0x0;
          if (pEVar3 != (EMetaSoundOutputAudioFormat *)0x0) {
            pFVar2 = (FOutputAudioFormatInfo *)(pEVar3 + 8);
          }
          return pFVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x28);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FOutputAudioFormatInfo *)0x0;
}

// FindChecked @ 14b3a6df0

FPassthroughAnalyzerInfo * __thiscall
TMapBase<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>_>
::FindChecked(TMapBase<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPassthroughAnalyzerInfo *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FPassthroughAnalyzerInfo *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[3].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FPassthroughAnalyzerInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FPassthroughAnalyzerInfo *)(*pcVar1)();
  return pFVar4;
}

