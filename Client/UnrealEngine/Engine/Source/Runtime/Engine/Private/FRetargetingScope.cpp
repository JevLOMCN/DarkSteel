// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FRetargetingScope @ 147531510

FRetargetingScope * __thiscall
UE::Anim::Retargeting::FRetargetingScope::FRetargetingScope
          (FRetargetingScope *this,USkeleton *param_1,FCompactPose *param_2,
          FEvaluationContext *param_3)

{
  TArray<UE::Anim::Retargeting::FRetargetTracking,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FTlsAutoCleanup *pFVar4;
  USkeleton *pUVar5;
  FRetargetingScope *pFVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  this->SourceSkeleton = param_1;
  local_10 = local_res8;
  this->RetargetPose = param_2;
  this->EvaluationContext = param_3;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  this->RetargetTracking =
       (TArray<UE::Anim::Retargeting::FRetargetTracking,TSizedDefaultAllocator<32>_> *)(pFVar4 + 2);
  if ((*(char *)(*(longlong *)&param_2->field_0x10 + 0x100) != '\0') ||
     (this->EvaluationContext->RetargetTransforms->ArrayNum == 0)) {
    pUVar5 = (USkeleton *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&param_2->field_0x10 + 0x40));
    if (this->SourceSkeleton == pUVar5) {
      bVar3 = false;
      goto LAB_147531591;
    }
  }
  bVar3 = true;
LAB_147531591:
  this->bShouldRetarget = bVar3;
  if (this->SourceSkeleton == (USkeleton *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceSkeleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequenceHelpers.cpp"
                       ,0x162,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRetargetingScope *)(*pcVar2)();
      return pFVar6;
    }
  }
  pTVar1 = this->RetargetTracking;
  pTVar1->ArrayNum = 0;
  if (pTVar1->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar1->AllocatorInstance,0,&pTVar1->ArrayMax);
  }
  return this;
}

// ~FRetargetingScope @ 147533320

void __thiscall
UE::Anim::Retargeting::FRetargetingScope::~FRetargetingScope(FRetargetingScope *this)

{
  FCompactPoseBoneIndex *pFVar1;
  int iVar2;
  FCompactPoseBoneIndex FVar3;
  FCompactPoseBoneIndex FVar4;
  TArray<UE::Anim::Retargeting::FRetargetTracking,TSizedDefaultAllocator<32>_> *pTVar5;
  FCompactPose *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FCompactPoseBoneIndex *pFVar10;
  undefined1 local_res8 [8];
  FBoneContainer *local_res10;
  
  if (this->bShouldRetarget != false) {
    pTVar5 = this->RetargetTracking;
    local_res10 = *(FBoneContainer **)&this->RetargetPose->field_0x10;
    pFVar10 = (FCompactPoseBoneIndex *)(pTVar5->AllocatorInstance).Data;
    iVar2 = pTVar5->ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 2;
    while( true ) {
      if (pTVar5->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Anim::Retargeting::FRetargetTracking,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      FVar3 = *pFVar10;
      pFVar6 = this->RetargetPose;
      FVar4 = pFVar10[1];
      uVar9 = 0;
      if ((int)FVar3 < *(int *)&pFVar6->field_0x8) {
        uVar9 = ~(uint)FVar3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FAnimationRuntime::RetargetBoneTransform
                (this->SourceSkeleton,&this->EvaluationContext->RetargetSource,
                 this->EvaluationContext->RetargetTransforms,
                 (TTransform<double> *)((longlong)(int)FVar3 * 0x60 + *(longlong *)pFVar6),
                 (int)FVar4,pFVar10,local_res10,false);
      pFVar10 = pFVar10 + 2;
    }
  }
  return;
}

// AddTrackedBone @ 147543880

void __thiscall
UE::Anim::Retargeting::FRetargetingScope::AddTrackedBone
          (FRetargetingScope *this,FCompactPoseBoneIndex param_1,int param_2)

{
  TArray<UE::Anim::Retargeting::FRetargetTracking,TSizedDefaultAllocator<32>_> *pTVar1;
  FCompactPoseBoneIndex *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCompactPoseBoneIndex local_18;
  int iStack_14;
  
  if (this->bShouldRetarget != false) {
    pTVar1 = this->RetargetTracking;
    pFVar2 = (FCompactPoseBoneIndex *)(pTVar1->AllocatorInstance).Data;
    local_18 = param_1;
    iStack_14 = param_2;
    if ((pFVar2 <= &local_18) && (&local_18 < pFVar2 + (longlong)pTVar1->ArrayMax * 2)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = pTVar1->ArrayNum;
    if (iVar5 == pTVar1->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar5 + 1;
    *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         CONCAT44(iStack_14,local_18);
  }
  return;
}

