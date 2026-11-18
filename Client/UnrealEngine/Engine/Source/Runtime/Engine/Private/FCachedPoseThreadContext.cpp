// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AddCachedPose @ 1474b9080

FCachedPose * __thiscall
UE::Anim::FCachedPoseThreadContext::AddCachedPose
          (FCachedPoseThreadContext *this,FAnimNode_SaveCachedPose *param_1,FCompactPose *param_2,
          FBlendedCurve *param_3,FStackAttributeContainer *param_4)

{
  FStackAttributeContainer *pFVar1;
  TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FCachedPose *pFVar6;
  uint uVar7;
  ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal> FVar8;
  TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  TKeyInitializer<FAnimNode_SaveCachedPose_const_*_const_&> local_res8;
  FAnimNode_SaveCachedPose *local_res10;
  FAnimNode_SaveCachedPose **local_res18;
  
  local_res10 = param_1;
  if ((this->Scopes).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scopes.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_SaveCachedPose.cpp"
                       ,0x24,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FCachedPose *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar2 = (this->Scopes).ArrayNum;
  uVar7 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar2) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FCachedPose *)(*pcVar3)();
      return pFVar6;
    }
  }
  FVar8 = (this->Scopes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>)0x0) {
    FVar8 = (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>)
            &this->Scopes;
  }
  local_res18 = &local_res10;
  lVar10 = (longlong)(this->Scopes).ArrayNum * 0x1180 + (longlong)FVar8;
  this_00 = (TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             *)(lVar10 + -0x1180);
  TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Emplace<TKeyInitializer<FAnimNode_SaveCachedPose_const_*_const_&>_>
            (this_00,&local_res8,(bool *)&local_res18);
  pTVar9 = *(TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             **)(lVar10 + -0x80);
  if (pTVar9 == (TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *)0x0) {
    pTVar9 = this_00;
  }
  pFVar6 = (FCachedPose *)(&(pTVar9->Elements).field_0x8 + (longlong)(int)local_res8.Key * 0x88);
  if (pFVar6 != (FCachedPose *)param_2) {
    *(undefined8 *)&pFVar6->Pose = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = 0;
    *(undefined4 *)&(pFVar6->Pose).field_0x8 = *(undefined4 *)&param_2->field_0x8;
    *(undefined4 *)&(pFVar6->Pose).field_0xc = *(undefined4 *)&param_2->field_0xc;
    *(undefined8 *)&param_2->field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Pose).field_0x10 = *(undefined8 *)&param_2->field_0x10;
    *(undefined8 *)&param_2->field_0x10 = 0;
  }
  if (&pFVar6->Curve != param_3) {
    *(undefined8 *)&pFVar6->Curve = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)&(pFVar6->Curve).field_0x8 = *(undefined4 *)&param_3->field_0x8;
    *(undefined4 *)&(pFVar6->Curve).field_0xc = *(undefined4 *)&param_3->field_0xc;
    *(undefined8 *)&param_3->field_0x8 = 0;
  }
  pFVar1 = &pFVar6->Attributes;
  (pFVar6->Curve).field_0x10 = param_3->field_0x10;
  param_3->field_0x10 = 0;
  puVar11 = &(pFVar6->Attributes).field_0x10;
  puVar12 = &param_4->field_0x10;
  if (puVar11 != puVar12) {
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar11,
               *(int *)&(pFVar6->Attributes).field_0x18);
    if (*(void **)puVar11 != (void *)0x0) {
      FMemory::Free(*(void **)puVar11);
    }
    *(undefined8 *)puVar11 = *(undefined8 *)puVar12;
    *(undefined8 *)puVar12 = 0;
    *(undefined4 *)&(pFVar6->Attributes).field_0x18 = *(undefined4 *)&param_4->field_0x18;
    *(undefined4 *)&(pFVar6->Attributes).field_0x1c = *(undefined4 *)&param_4->field_0x1c;
    *(undefined8 *)&param_4->field_0x18 = 0;
  }
  if (pFVar1 != param_4) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<int,TSizedDefaultAllocator<32>_> **)pFVar1,
               *(int *)&(pFVar6->Attributes).field_0x8);
    if (*(void **)pFVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar1);
    }
    *(undefined8 *)pFVar1 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = 0;
    *(undefined4 *)&(pFVar6->Attributes).field_0x8 = *(undefined4 *)&param_4->field_0x8;
    *(undefined4 *)&(pFVar6->Attributes).field_0xc = *(undefined4 *)&param_4->field_0xc;
    *(undefined8 *)&param_4->field_0x8 = 0;
  }
  puVar11 = &param_4->field_0x20;
  puVar12 = &(pFVar6->Attributes).field_0x20;
  if (puVar12 != puVar11) {
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 **)puVar12,*(int *)&(pFVar6->Attributes).field_0x28);
    if (*(void **)puVar12 != (void *)0x0) {
      FMemory::Free(*(void **)puVar12);
    }
    *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
    *(undefined8 *)puVar11 = 0;
    *(undefined4 *)&(pFVar6->Attributes).field_0x28 = *(undefined4 *)&param_4->field_0x28;
    *(undefined4 *)&(pFVar6->Attributes).field_0x2c = *(undefined4 *)&param_4->field_0x2c;
    *(undefined8 *)&param_4->field_0x28 = 0;
  }
  puVar12 = &param_4->field_0x30;
  puVar11 = &(pFVar6->Attributes).field_0x30;
  if (puVar11 != puVar12) {
    if (*(void **)puVar11 != (void *)0x0) {
      FMemory::Free(*(void **)puVar11);
    }
    *(undefined8 *)puVar11 = *(undefined8 *)puVar12;
    *(undefined8 *)puVar12 = 0;
    *(undefined4 *)&(pFVar6->Attributes).field_0x38 = *(undefined4 *)&param_4->field_0x38;
    *(undefined4 *)&(pFVar6->Attributes).field_0x3c = *(undefined4 *)&param_4->field_0x3c;
    *(undefined8 *)&param_4->field_0x38 = 0;
  }
  return pFVar6;
}

