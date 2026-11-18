// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 4

// AddUniqueImpl<FString> @ 148bbd2d0

int __thiscall
TArray<FString,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<FString>
          (TArray<FString,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          FString *param_1)

{
  ForElementType<FString> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FString> FVar5;
  longlong lVar6;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<FString>)this;
    if (FVar1 != (ForElementType<FString>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= param_1) {
      FVar5 = (ForElementType<FString>)this;
      if (FVar1 != (ForElementType<FString>)0x0) {
        FVar5 = FVar1;
      }
      if ((param_1 < (FString *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FString>)0x0) {
      this = (TArray<FString,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
    }
    lVar6 = (longlong)iVar4;
    *(undefined8 *)((longlong)this + lVar6 * 0x10) = 0;
    *(FScriptContainerElement **)((longlong)this + lVar6 * 0x10) =
         (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((uchar *)((longlong)this + 8) + lVar6 * 0x10) = (param_1->Data).ArrayNum;
    *(int *)((uchar *)((longlong)this + 0xc) + lVar6 * 0x10) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  return iVar4;
}

// operator= @ 148bc41a0

TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_> *this,
          TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FBuildInstallerStat *pFVar3;
  
  if (this != param_1) {
    DestructItems<FBuildInstallerStat,int>
              ((FBuildInstallerStat *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FBuildInstallerStat *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FBuildInstallerStat,FBuildInstallerStat,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Find @ 148bc8b40

int __thiscall
TArray<FString,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Find
          (TArray<FString,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ForElementType<FString> FVar4;
  bool bVar5;
  
  FVar4 = (this->AllocatorInstance).SecondaryData;
  iVar1 = this->ArrayNum;
  if (FVar4 != (ForElementType<FString>)0x0) {
    this = (TArray<FString,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar4;
  }
  FVar4 = (ForElementType<FString>)this;
  while( true ) {
    if (FVar4 == (ForElementType<FString>)((longlong)iVar1 * 0x10 + (longlong)this)) {
      return -1;
    }
    iVar3 = *(int *)((longlong)FVar4 + 8);
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar3 == iVar2) {
      if (iVar3 < 2) break;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)FVar4,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar3 + iVar2 == 1;
    }
    if (bVar5) break;
    FVar4 = (ForElementType<FString>)((longlong)FVar4 + 0x10);
  }
  return (int)((longlong)FVar4 - (longlong)this >> 4);
}

// RemoveAtSwapImpl @ 148bd3790

void __thiscall
TArray<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  
  pFVar1 = (this->AllocatorInstance).Data;
  plVar2 = *(longlong **)(pFVar1 + (longlong)param_1 * 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 8,
            (longlong)iVar3 << 3);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

