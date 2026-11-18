// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 4

// RemapFrameData @ 14d077d70

void __thiscall
FLiveLinkSkeletonRemapperWorker::RemapFrameData
          (FLiveLinkSkeletonRemapperWorker *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  FLiveLinkAnimationFrameData *pFVar7;
  FLiveLinkSkeletonStaticData *pFVar8;
  
  lVar4 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (lVar4 == 0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  lVar4 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14d077e04;
  }
  lVar4 = 0;
LAB_14d077e04:
  pUVar6 = FLiveLinkSkeletonStaticData::StaticStruct();
  if (pUVar6 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pcVar2 = *(code **)(this->_padding_ + 0x28);
      pFVar7 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                         (param_2);
      pFVar8 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                         (param_1);
      (*pcVar2)(this,pFVar8,pFVar7);
    }
  }
  return;
}

// RemapSkeletonFrameData @ 14d077e90

void __thiscall
FLiveLinkSkeletonRemapperWorker::RemapSkeletonFrameData
          (FLiveLinkSkeletonRemapperWorker *this,FLiveLinkSkeletonStaticData *param_1,
          FLiveLinkAnimationFrameData *param_2)

{
  return;
}

// RemapSkeletonStaticData @ 14d077ea0

void __thiscall
FLiveLinkSkeletonRemapperWorker::RemapSkeletonStaticData
          (FLiveLinkSkeletonRemapperWorker *this,FLiveLinkSkeletonStaticData *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  ForAnyElementType _Src_00;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  int iVar8;
  longlong lVar9;
  FName FVar10;
  uint uVar11;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (param_1->BoneNames).ArrayNum;
  lVar9 = (longlong)local_20;
  _Src = (param_1->BoneNames).AllocatorInstance.Data;
  pTVar1 = &param_1->BoneNames;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
    iVar8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar9 << 3);
    iVar8 = local_20;
  }
  uVar11 = 0;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < iVar8) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar10 = *(FName *)(local_28.Data + lVar9);
      pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       *)&this->BoneNameMap,FVar10);
      if (pFVar7 != (FName *)0x0) {
        FVar10 = *pFVar7;
      }
      uVar6 = 0;
      if ((int)uVar11 < local_20) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = uVar11 + 1;
      *(FName *)(local_28.Data + lVar9) = FVar10;
      lVar9 = lVar9 + 8;
      iVar8 = local_20;
    } while ((int)uVar11 < local_20);
  }
  _Src_00.Data = local_28.Data;
  if (pTVar1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_28) {
    iVar3 = (param_1->BoneNames).ArrayMax;
    piVar2 = &(param_1->BoneNames).ArrayMax;
    (param_1->BoneNames).ArrayNum = iVar8;
    if ((iVar8 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar8,iVar3,&pTVar1->AllocatorInstance,iVar8,piVar2);
      if (iVar8 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src_00.Data,(longlong)iVar8 << 3);
      }
    }
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// RemapStaticData @ 14d0780a0

void __thiscall
FLiveLinkSkeletonRemapperWorker::RemapStaticData
          (FLiveLinkSkeletonRemapperWorker *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  FLiveLinkSkeletonStaticData *pFVar7;
  
  lVar4 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (lVar4 == 0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  lVar4 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14d078127;
  }
  lVar4 = 0;
LAB_14d078127:
  pUVar6 = FLiveLinkSkeletonStaticData::StaticStruct();
  if (pUVar6 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pcVar2 = *(code **)(this->_padding_ + 0x20);
      pFVar7 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                         (param_1);
      (*pcVar2)(this,pFVar7);
    }
  }
  return;
}

