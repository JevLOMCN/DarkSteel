// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 3

// GetFromRole @ 14d04d870

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkTransformRoleToAnimation::FLiveLinkTransformRoleToAnimationWorker::GetFromRole
          (FLiveLinkTransformRoleToAnimationWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// GetToRole @ 14d057420

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkTransformRoleToAnimation::FLiveLinkTransformRoleToAnimationWorker::GetToRole
          (FLiveLinkTransformRoleToAnimationWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// Translate @ 14d083870

bool __thiscall
ULiveLinkTransformRoleToAnimation::FLiveLinkTransformRoleToAnimationWorker::Translate
          (FLiveLinkTransformRoleToAnimationWorker *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,
          FLiveLinkSubjectFrameData *param_3)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this_00;
  FName *pFVar1;
  int *piVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  UClass *pUVar14;
  UScriptStruct *pUVar15;
  longlong *plVar16;
  FLiveLinkSkeletonStaticData *pFVar17;
  FLiveLinkAnimationFrameData *pFVar18;
  longlong lVar19;
  FWeakObjectPtr local_res10;
  undefined4 local_48 [2];
  FWeakObjectPtr local_40;
  UScriptStruct *local_38;
  UScriptStruct *local_30;
  
  lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  if (lVar12 == 0) {
    return false;
  }
  lVar12 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
  if (lVar12 == 0) {
    return false;
  }
  plVar13 = (longlong *)(**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (lVar12 == 0) {
LAB_14d08392a:
    plVar13 = (longlong *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar11 = (int)pUVar14->_padding_;
    if (((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar11) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar11 * 8)
         != &pUVar14->_padding_)) ||
       (pUVar15 = FLiveLinkTransformStaticData::StaticStruct(), pUVar15 == (UScriptStruct *)0x0))
    goto LAB_14d08392a;
    iVar11 = (int)pUVar15->_padding_;
    if ((*(int *)(lVar12 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar15->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) goto LAB_14d08392a;
  }
  plVar16 = (longlong *)(**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
  lVar12 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar12 != 0) {
    pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar11 = (int)pUVar14->_padding_;
    if (((iVar11 <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar11 * 8)
         == &pUVar14->_padding_)) &&
       (pUVar15 = FLiveLinkTransformFrameData::StaticStruct(), pUVar15 != (UScriptStruct *)0x0)) {
      iVar11 = (int)pUVar15->_padding_;
      if ((*(int *)(lVar12 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar15->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) goto LAB_14d0839a1;
    }
  }
  plVar16 = (longlong *)0x0;
LAB_14d0839a1:
  if ((plVar13 == (longlong *)0x0) || (plVar16 == (longlong *)0x0)) {
    return false;
  }
  pUVar15 = FLiveLinkSkeletonStaticData::StaticStruct();
  if ((pUVar15 == (UScriptStruct *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOtherStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                         ,0x16d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_38 = pUVar15;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_38);
  FVar8 = local_res10;
  (**(code **)((param_3->StaticData).WrappedStruct._padding_ + 0x40))(param_3);
  puVar4 = (undefined8 *)(param_3->StaticData).WrappedStruct._padding_;
  (param_3->StaticData).WrappedStruct.ScriptStruct.WeakPtr = FVar8;
  (*(code *)*puVar4)(param_3);
  this_00 = &param_3->FrameData;
  pUVar15 = FLiveLinkAnimationFrameData::StaticStruct();
  if ((pUVar15 == (UScriptStruct *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOtherStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                         ,0x16d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  local_40.ObjectIndex = 0;
  local_40.ObjectSerialNumber = 0;
  local_30 = pUVar15;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_30);
  FVar8 = local_40;
  (**(code **)((this_00->WrappedStruct)._padding_ + 0x40))(this_00);
  puVar4 = (undefined8 *)(this_00->WrappedStruct)._padding_;
  (param_3->FrameData).WrappedStruct.ScriptStruct.WeakPtr = FVar8;
  (*(code *)*puVar4)(this_00);
  pFVar17 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                      (&param_3->StaticData);
  pFVar18 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                      (this_00);
  if (((pFVar17 == (FLiveLinkSkeletonStaticData *)0x0) ||
      (pFVar18 == (FLiveLinkAnimationFrameData *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimationStaticData && AnimationFrameData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\Translator\\LiveLinkTransformRoleToAnimation.cpp"
                         ,0x30,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pFVar5 = (pFVar17->BoneNames).AllocatorInstance.Data;
  pFVar1 = &this->OutputBoneName;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)(pFVar17->BoneNames).ArrayMax * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  iVar11 = (pFVar17->BoneNames).ArrayNum;
  piVar2 = &(pFVar17->BoneNames).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&(pFVar17->BoneNames).AllocatorInstance,piVar2);
  }
  (pFVar17->BoneNames).ArrayNum = iVar11 + 1;
  local_48[0] = 0xffffffff;
  *(FName *)((pFVar17->BoneNames).AllocatorInstance.Data + (longlong)iVar11 * 8) = *pFVar1;
  pFVar5 = (pFVar17->BoneParents).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar5 + (longlong)(pFVar17->BoneParents).ArrayMax * 4)
      ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  iVar11 = (pFVar17->BoneParents).ArrayNum;
  piVar2 = &(pFVar17->BoneParents).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&(pFVar17->BoneParents).AllocatorInstance,piVar2);
  }
  (pFVar17->BoneParents).ArrayNum = iVar11 + 1;
  *(undefined4 *)((pFVar17->BoneParents).AllocatorInstance.Data + (longlong)iVar11 * 4) =
       local_48[0];
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&pFVar18->_padding_,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)(plVar16 + 2));
  lVar12 = plVar16[0xd];
  pTVar3 = &pFVar18->Transforms;
  piVar2 = &(pFVar18->Transforms).ArrayMax;
  pFVar18->_padding_ = plVar16[0xc];
  pFVar18->_padding_ = lVar12;
  lVar12 = plVar16[1];
  pFVar18->_padding_ = *plVar16;
  pFVar18->_padding_ = lVar12;
  (pFVar18->Transforms).ArrayNum = 0;
  if (*piVar2 < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,1,&pTVar3->AllocatorInstance,0,piVar2);
  }
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  pFVar5 = (FScriptContainerElement *)(plVar16 + 0x14);
  if (((pFVar6 <= pFVar5) && (pFVar5 < pFVar6 + (longlong)*piVar2 * 0x60)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  iVar11 = (pFVar18->Transforms).ArrayNum;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&pTVar3->AllocatorInstance,piVar2);
  }
  (pFVar18->Transforms).ArrayNum = iVar11 + 1;
  lVar12 = plVar16[0x15];
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  lVar19 = (longlong)iVar11 * 0x60;
  *(undefined8 *)(pFVar6 + lVar19) = *(undefined8 *)pFVar5;
  *(longlong *)(pFVar6 + lVar19 + 8) = lVar12;
  lVar12 = plVar16[0x17];
  *(longlong *)(pFVar6 + lVar19 + 0x10) = plVar16[0x16];
  *(longlong *)(pFVar6 + lVar19 + 0x10 + 8) = lVar12;
  lVar12 = plVar16[0x19];
  *(longlong *)(pFVar6 + lVar19 + 0x20) = plVar16[0x18];
  *(longlong *)(pFVar6 + lVar19 + 0x20 + 8) = lVar12;
  lVar12 = plVar16[0x1b];
  *(longlong *)(pFVar6 + lVar19 + 0x30) = plVar16[0x1a];
  *(longlong *)(pFVar6 + lVar19 + 0x30 + 8) = lVar12;
  lVar12 = plVar16[0x1d];
  *(longlong *)(pFVar6 + lVar19 + 0x40) = plVar16[0x1c];
  *(longlong *)(pFVar6 + lVar19 + 0x40 + 8) = lVar12;
  lVar12 = plVar16[0x1f];
  *(longlong *)(pFVar6 + lVar19 + 0x50) = plVar16[0x1e];
  *(longlong *)(pFVar6 + lVar19 + 0x50 + 8) = lVar12;
  return true;
}

