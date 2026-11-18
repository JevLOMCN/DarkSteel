// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 11

// operator() @ 1463a70e0

bool __thiscall
`FBoneHierarchy::InitHierarchy'::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  int iVar1;
  FAnalyticImplicitGroup *pFVar2;
  FAnalyticImplicitGroup **ppFVar3;
  
  ppFVar3 = TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
            ::FindChecked((TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
                           *)(*(longlong *)this + 0x30),param_1);
  pFVar2 = *ppFVar3;
  ppFVar3 = TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
            ::FindChecked((TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
                           *)(*(longlong *)this + 0x30),param_2);
  iVar1 = ((*ppFVar3)->Transforms).ArrayNum;
  if ((pFVar2->Transforms).ArrayNum < 1) {
    if (0 < iVar1) {
      return false;
    }
  }
  else if (iVar1 < 1) {
    return true;
  }
  return param_1 < param_2;
}

// Add @ 1463a8be0

void __thiscall
FBoneHierarchy::Add(FBoneHierarchy *this,
                   TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_>
                   *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  FScriptContainerElement *pFVar10;
  undefined4 local_res8 [2];
  TPairInitializer<int_&&,FAnalyticImplicitGroup_*_&&> local_res10;
  undefined4 local_38 [2];
  undefined4 *local_30;
  FAnalyticImplicitGroup ***local_28;
  
  if ((param_1->Ptr->BoneIndex == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnalyticShapeGroupIn->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                         ,0x4f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->ImplicitGroups).AllocatorInstance.Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->ImplicitGroups).ArrayMax * 8)) &&
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
  uVar5 = (this->ImplicitGroups).ArrayNum;
  if (uVar5 == (this->ImplicitGroups).ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->ImplicitGroups).ArrayMax);
  }
  pFVar2 = (this->ImplicitGroups).AllocatorInstance.Data;
  (this->ImplicitGroups).ArrayNum = uVar5 + 1;
  *(FAnalyticImplicitGroup **)(pFVar2 + (longlong)(int)uVar5 * 8) = param_1->Ptr;
  param_1->Ptr = (FAnalyticImplicitGroup *)0x0;
  uVar7 = 0;
  if ((int)uVar5 < (this->ImplicitGroups).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->BoneIndices).AllocatorInstance.Data;
  pFVar10 = (this->ImplicitGroups).AllocatorInstance.Data + (longlong)(int)uVar5 * 8;
  for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)(this->BoneIndices).ArrayNum * 4;
      pFVar8 = pFVar8 + 4) {
    if (*(int *)pFVar8 == *(int *)(*(longlong *)pFVar10 + 8)) {
      if (((int)((longlong)pFVar8 - (longlong)pFVar2 >> 2) != -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoneIndices.Find(AnalyticShapeGroup->GetBoneIndex()) == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                             ,0x54,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      break;
    }
  }
  pFVar2 = (this->BoneIndices).AllocatorInstance.Data;
  local_38[0] = *(undefined4 *)(*(longlong *)pFVar10 + 8);
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->BoneIndices).ArrayMax * 4))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->BoneIndices).ArrayNum;
  piVar1 = &(this->BoneIndices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->BoneIndices).AllocatorInstance,piVar1);
  }
  (this->BoneIndices).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this->BoneIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_38[0];
  if (*(int *)&(this->BoneToShapeGroup).field_0x8 != *(int *)&(this->BoneToShapeGroup).field_0x34) {
    puVar9 = *(undefined1 **)&(this->BoneToShapeGroup).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->BoneToShapeGroup).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->BoneToShapeGroup).field_0x48 - 1U &
                              *(uint *)(*(longlong *)pFVar10 + 8)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->BoneToShapeGroup + (longlong)iVar6 * 0x18) ==
            *(uint *)(*(longlong *)pFVar10 + 8)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoneToShapeGroup.Contains(AnalyticShapeGroup->GetBoneIndex()) == false"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                             ,0x56,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)&this->BoneToShapeGroup + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  local_res10.Value = *(FAnalyticImplicitGroup ***)pFVar10;
  local_res8[0] = *(undefined4 *)(local_res10.Value + 1);
  local_30 = local_res8;
  local_28 = &local_res10.Value;
  TSet<TTuple<int,FAnalyticImplicitGroup_*>,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,FAnalyticImplicitGroup_*_&&>_>
            ((TSet<TTuple<int,FAnalyticImplicitGroup_*>,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>,FDefaultSetAllocator>
              *)&this->BoneToShapeGroup,&local_res10,(bool *)&local_30);
  if ((*(int *)&(this->BoneToShapeGroup).field_0x8 - *(int *)&(this->BoneToShapeGroup).field_0x34 !=
       (this->BoneIndices).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoneToShapeGroup.Num() == BoneIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                         ,0x58,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// GetAnimLocalDirty @ 1463b2d20

bool __thiscall FBoneHierarchy::GetAnimLocalDirty(FBoneHierarchy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->AnimDirty).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)((byte)(this->AnimDirty).AllocatorInstance.Data[param_1] & 1);
}

// InitHierarchy @ 1463b95f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBoneHierarchy::InitHierarchy(FBoneHierarchy *this)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_01;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  FAnalyticImplicitGroup *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong *plVar9;
  code *pcVar10;
  longlong *plVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FAnalyticImplicitGroup **ppFVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  longlong lVar25;
  ulong64 uVar26;
  TArray<FAnalyticImplicitGroup_*,TSizedDefaultAllocator<32>_> *pTVar27;
  int iVar28;
  longlong *plVar29;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FScriptContainerElement local_d8 [4];
  uint local_d4;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  TArray<FAnalyticImplicitGroup_*,TSizedDefaultAllocator<32>_> *local_b8;
  longlong local_b0;
  longlong local_a8;
  TArray<FAnalyticImplicitGroup_*,TSizedDefaultAllocator<32>_> *local_a0;
  longlong local_98;
  int local_90 [2];
  longlong local_88;
  undefined1 local_80 [8];
  FBoneHierarchy *local_78;
  longlong *local_70;
  undefined4 *local_68;
  uint *local_60;
  uint *local_58;
  undefined4 *local_50;
  
  local_res8 = SUB81(this,0);
  local_78 = this;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FBoneHierarchy::InitHierarchy_::__l2::<lambda_1>_>_>
            ((int *)(this->BoneIndices).AllocatorInstance.Data,(this->BoneIndices).ArrayNum,
             local_res8,(<lambda_1> *)&local_78);
  uVar26 = 0;
  pFVar22 = (this->ImplicitGroups).AllocatorInstance.Data;
  iVar14 = (this->ImplicitGroups).ArrayNum;
  pFVar23 = pFVar22 + (longlong)iVar14 * 8;
  while( true ) {
    if ((this->ImplicitGroups).ArrayNum != iVar14) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar22 == pFVar23) break;
    lVar4 = *(longlong *)pFVar22;
    *(undefined8 *)(lVar4 + 0x120) = 0;
    *(undefined4 *)(lVar4 + 0x130) = 0;
    if (*(int *)(lVar4 + 0x134) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar4 + 0x128),0,(int *)(lVar4 + 0x134));
    }
    pFVar22 = pFVar22 + 8;
  }
  pTVar27 = &this->Roots;
  piVar1 = &(this->Roots).ArrayMax;
  (this->Roots).ArrayNum = 0;
  local_b8 = pTVar27;
  if ((this->Roots).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar27->AllocatorInstance,0,piVar1);
  }
  pFVar22 = (this->ImplicitGroups).AllocatorInstance.Data;
  iVar14 = (this->ImplicitGroups).ArrayNum;
  pFVar23 = pFVar22 + (longlong)iVar14 * 8;
LAB_1463b96e0:
  do {
    if ((this->ImplicitGroups).ArrayNum != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    iVar28 = (int)uVar26;
    if (pFVar22 == pFVar23) {
      if (((this->Roots).ArrayNum == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Roots.Num() != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                              ,300,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((iVar28 != (this->ImplicitGroups).ArrayNum) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumTransforms == ImplicitGroups.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                              ,0x12d,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (4 < (byte)USkeletalMeshSimulationComponentLogging._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`protected:_void___cdecl_FBoneHierarchy::InitHierarchy(void)___ptr64'::__l51::
                    LOG_Static,(FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging);
      }
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Init
                (&this->LocalSpaceTransforms,&UE::Math::TTransform<double>::Identity,iVar28);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Init
                (&this->WorldSpaceTransforms,&UE::Math::TTransform<double>::Identity,iVar28);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Init
                (&this->PrevWorldSpaceTransforms,&UE::Math::TTransform<double>::Identity,iVar28);
      local_d8[0] = (FScriptContainerElement)0x0;
      pTVar3 = &this->AnimDirty;
      if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar26);
      }
      piVar1 = &(this->AnimDirty).ArrayMax;
      (this->AnimDirty).ArrayNum = 0;
      if (*piVar1 != iVar28) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar28,&pTVar3->AllocatorInstance,0,piVar1);
      }
      if (0 < iVar28) {
        do {
          pFVar23 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar23 <= local_d8) && (local_d8 < pFVar23 + *piVar1)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar14 = (this->AnimDirty).ArrayNum;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&pTVar3->AllocatorInstance,piVar1);
          }
          (this->AnimDirty).ArrayNum = iVar14 + 1;
          (pTVar3->AllocatorInstance).Data[iVar14] = local_d8[0];
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      local_90[0] = -1;
      TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->SocketIndices,local_90,iVar28);
      local_90[1] = 0xffffffff;
      TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->ParentIndices,local_90 + 1,iVar28);
      this_00 = &this->ChildIndices;
      piVar1 = &(this->ChildIndices).ArrayMax;
      pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this_00->AllocatorInstance).Data;
      iVar14 = (this->ChildIndices).ArrayNum;
      if ((this->ChildIndices).ArrayMax < 0) {
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar8,iVar14);
        (this->ChildIndices).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&this_00->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar8,iVar14);
        (this->ChildIndices).ArrayNum = 0;
      }
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
                (this_00,iVar28);
      uVar21 = (this->ImplicitGroups).ArrayNum;
      local_c8._0_4_ = 0;
      local_d0.Data = (FScriptContainerElement *)0x0;
      local_c8 = 0;
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      if (0 < (int)uVar21) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar21,&local_d0,0,(int *)((longlong)&local_c8 + 4));
      }
      local_a0 = &this->Roots;
      iVar14 = (int)local_c8;
      if ((local_d0.Data <= (FScriptContainerElement *)&local_a0) &&
         ((FScriptContainerElement *)&local_a0 < local_d0.Data + (longlong)local_c8._4_4_ * 8)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar14 = (int)local_c8;
      }
      if (iVar14 == local_c8._4_4_) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_d0,(int *)((longlong)&local_c8 + 4));
      }
      local_c8 = CONCAT44(local_c8._4_4_,iVar14 + 1);
      uVar21 = 0;
      *(TArray<FAnalyticImplicitGroup_*,TSizedDefaultAllocator<32>_> **)
       (local_d0.Data + (longlong)iVar14 * 8) = local_a0;
      local_d4 = 0;
      if (0 < iVar14 + 1) {
        local_88 = 0;
        do {
          lVar4 = local_88;
          uVar15 = 0;
          if ((int)uVar21 < (int)local_c8) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          plVar9 = *(longlong **)(local_d0.Data + lVar4);
          uVar19 = (ulonglong)(int)plVar9[1];
          plVar29 = (longlong *)*plVar9;
          local_b8 = (TArray<FAnalyticImplicitGroup_*,TSizedDefaultAllocator<32>_> *)
                     CONCAT44(local_b8._4_4_,(int)plVar9[1]);
          local_70 = plVar29 + uVar19;
          while( true ) {
            plVar11 = local_70;
            if ((int)plVar9[1] != (int)uVar19) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FAnalyticImplicitGroup_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            if (plVar29 == plVar11) break;
            lVar4 = *plVar29;
            this_01 = &this->BoneToTransformIndex;
            local_c0[0] = *(undefined4 *)(lVar4 + 8);
            local_68 = local_c0;
            local_60 = &local_d4;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)this_01,(TPairInitializer<int_const_&,int_const_&> *)local_80,
                       (bool *)&local_68);
            local_58 = &local_d4;
            local_50 = local_c0;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)&this->TransformToBoneIndex,
                       (TPairInitializer<int_const_&,int_const_&> *)(local_80 + 4),(bool *)&local_58
                      );
            if (*(longlong *)(lVar4 + 0x120) == 0) {
              if ((*(int *)(lVar4 + 0xc) != -1) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Group->GetParentBoneIndex() == INDEX_NONE",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                                      ,0x15c,L""), bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar23 = (this->Roots).AllocatorInstance.Data;
              for (pFVar22 = pFVar23; pFVar22 != pFVar23 + (longlong)(this->Roots).ArrayNum * 8;
                  pFVar22 = pFVar22 + 8) {
                if (*(longlong *)pFVar22 == lVar4) {
                  if ((int)((longlong)pFVar22 - (longlong)pFVar23 >> 3) != -1) goto LAB_1463ba022;
                  break;
                }
              }
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Roots.Find(Group) != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                                  ,0x15d,L"");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            else {
              uVar15 = *(uint *)(*(longlong *)(lVar4 + 0x120) + 8);
              if ((uVar15 == 0xffffffff) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ParentBoneIndex != INDEX_NONE",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                                      ,0x154,L""), bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (*(int *)&(this->BoneToTransformIndex).field_0x8 !=
                  *(int *)&(this->BoneToTransformIndex).field_0x34) {
                puVar6 = *(undefined1 **)&(this->BoneToTransformIndex).field_0x40;
                puVar20 = &(this->BoneToTransformIndex).field_0x38;
                if (puVar6 != (undefined1 *)0x0) {
                  puVar20 = puVar6;
                }
                iVar14 = *(int *)(puVar20 +
                                 (ulonglong)
                                 (*(int *)&(this->BoneToTransformIndex).field_0x48 - 1U & uVar15) *
                                 4);
                if (iVar14 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar14 * 0x10) ==
                        uVar15) goto LAB_1463b9e49;
                    iVar14 = *(int *)(*(longlong *)&this_01->field_0x0 + 8 + (longlong)iVar14 * 0x10
                                     );
                  } while (iVar14 != -1);
                }
              }
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BoneToTransformIndex.Contains(ParentBoneIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                                  ,0x155,L"");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
LAB_1463b9e49:
              puVar18 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)this_01,uVar15);
              uVar15 = *puVar18;
              uVar16 = 0;
              if ((int)uVar15 < (this->ChildIndices).ArrayNum) {
                uVar16 = ~uVar15 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar23 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x10;
              if (((*(uint **)&pFVar23->field_0x0 <= &local_d4) &&
                  (&local_d4 < *(uint **)&pFVar23->field_0x0 + *(int *)(pFVar23 + 0xc))) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar14 = *(int *)&pFVar23[8].field_0x0;
              if (iVar14 == *(int *)(pFVar23 + 0xc)) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
              }
              *(int *)&pFVar23[8].field_0x0 = iVar14 + 1;
              *(uint *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar14 * 4) = local_d4;
              lVar24 = (longlong)(int)local_d4;
              uVar16 = 0;
              if ((int)local_d4 < (this->ParentIndices).ArrayNum) {
                uVar16 = ~local_d4 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(uint *)((this->ParentIndices).AllocatorInstance.Data + lVar24 * 4) = uVar15;
            }
LAB_1463ba022:
            lVar25 = (longlong)(int)local_d4;
            lVar24 = lVar4 + 0x128;
            uVar15 = 0;
            if ((int)local_d4 < (this->ChildIndices).ArrayNum) {
              uVar15 = ~local_d4 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar15 = *(uint *)(lVar4 + 0x130);
            if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
            }
            pFVar23 = (this_00->AllocatorInstance).Data + lVar25 * 0x10;
            if (*(int *)(pFVar23 + 0xc) < (int)uVar15) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar15,(ForAnyElementType *)pFVar23,*(int *)&pFVar23[8].field_0x0,
                         (int *)(pFVar23 + 0xc));
            }
            local_d4 = local_d4 + 1;
            if (*(int *)(lVar4 + 0x130) != 0) {
              local_98 = lVar24;
              if (((local_d0.Data <= (FScriptContainerElement *)&local_98) &&
                  ((FScriptContainerElement *)&local_98 <
                   local_d0.Data + (longlong)local_c8._4_4_ * 8)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar14 = (int)local_c8;
              if ((int)local_c8 == local_c8._4_4_) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_d0,(int *)((longlong)&local_c8 + 4));
              }
              local_c8 = CONCAT44(local_c8._4_4_,iVar14 + 1);
              *(longlong *)(local_d0.Data + (longlong)iVar14 * 8) = local_98;
            }
            uVar19 = (ulonglong)local_b8 & 0xffffffff;
            plVar29 = plVar29 + 1;
          }
          uVar21 = uVar21 + 1;
          local_88 = local_88 + 8;
        } while ((int)uVar21 < (int)local_c8);
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      return;
    }
    lVar4 = *(longlong *)pFVar22;
    uVar21 = *(uint *)(lVar4 + 0xc);
    if (uVar21 == 0xffffffff) {
      pFVar5 = (pTVar27->AllocatorInstance).Data;
      local_b0 = lVar4;
      if (((pFVar5 <= (FScriptContainerElement *)&local_b0) &&
          ((FScriptContainerElement *)&local_b0 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = pTVar27->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar27->AllocatorInstance,piVar1);
      }
      uVar26 = (ulong64)(iVar28 + 1);
      pTVar27->ArrayNum = iVar13 + 1;
      pFVar22 = pFVar22 + 8;
      *(longlong *)((pTVar27->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_b0;
      goto LAB_1463b96e0;
    }
    if (*(int *)&(this->BoneToShapeGroup).field_0x8 != *(int *)&(this->BoneToShapeGroup).field_0x34)
    {
      puVar6 = *(undefined1 **)&(this->BoneToShapeGroup).field_0x40;
      puVar20 = &(this->BoneToShapeGroup).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar20 = puVar6;
      }
      iVar13 = *(int *)(puVar20 +
                       (ulonglong)(*(int *)&(this->BoneToShapeGroup).field_0x48 - 1U & uVar21) * 4);
      if (iVar13 != -1) {
        lVar4 = *(longlong *)&this->BoneToShapeGroup;
        do {
          if (*(uint *)(lVar4 + (longlong)iVar13 * 0x18) == uVar21) goto LAB_1463b981e;
          iVar13 = *(int *)(lVar4 + 0x10 + (longlong)iVar13 * 0x18);
        } while (iVar13 != -1);
      }
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("BoneToShapeGroup.Contains(ParentBoneIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                        ,0x121,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
LAB_1463b981e:
    ppFVar17 = TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
               ::FindChecked((TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
                              *)&this->BoneToShapeGroup,uVar21);
    pFVar7 = *ppFVar17;
    if ((pFVar7 == (FAnalyticImplicitGroup *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                            ,0x123,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_a8 = *(longlong *)pFVar22;
    pTVar27 = &pFVar7->Children;
    pFVar5 = (pTVar27->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar5 + (longlong)(pFVar7->Children).ArrayMax * 8))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = (pFVar7->Children).ArrayNum;
    piVar2 = &(pFVar7->Children).ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar27->AllocatorInstance,piVar2);
    }
    (pFVar7->Children).ArrayNum = iVar13 + 1;
    *(longlong *)((pTVar27->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_a8;
    *(FAnalyticImplicitGroup **)(*(longlong *)pFVar22 + 0x120) = pFVar7;
    if ((*(FAnalyticImplicitGroup **)(*(longlong *)pFVar22 + 0x120) != pFVar7) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Group->GetParent() == Parent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                            ,0x126,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar26 = (ulong64)(iVar28 + 1);
    pFVar22 = pFVar22 + 8;
    pTVar27 = local_b8;
  } while( true );
}

// PrepareAnimWorldSpaceTransforms @ 1463bd8e0

bool __thiscall FBoneHierarchy::PrepareAnimWorldSpaceTransforms(FBoneHierarchy *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint local_18 [4];
  
  PropagateAnimDirtyFlags(this);
  pTVar2 = &this->TempTargetIndices;
  piVar1 = &(this->TempTargetIndices).ArrayMax;
  (this->TempTargetIndices).ArrayNum = 0;
  if ((this->TempTargetIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_18[0] = 0;
  if (0 < (this->AnimDirty).ArrayNum) {
    do {
      uVar5 = local_18[0];
      uVar9 = 0;
      if ((int)local_18[0] < (this->AnimDirty).ArrayNum) {
        uVar9 = ~local_18[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (((byte)(this->AnimDirty).AllocatorInstance.Data[(int)uVar5] & 1) != 0) {
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar10 = (this->TempTargetIndices).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->TempTargetIndices).ArrayNum = iVar10 + 1;
        *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_18[0];
      }
      local_18[0] = local_18[0] + 1;
    } while ((int)local_18[0] < (this->AnimDirty).ArrayNum);
  }
  bVar6 = UpdateAnimWorldSpaceTransforms(this,pTVar2);
  if ((this->ActorLocalToWorldDirty != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActorLocalToWorldDirty == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                         ,0xcc,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  return bVar6;
}

// PrepareForUpdate @ 1463bdac0

void __thiscall FBoneHierarchy::PrepareForUpdate(FBoneHierarchy *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  
  uVar21 = 0;
  if (0 < (this->WorldSpaceTransforms).ArrayNum) {
    lVar20 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar21 < (this->WorldSpaceTransforms).ArrayNum) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->WorldSpaceTransforms).AllocatorInstance.Data;
      uVar8 = *(undefined8 *)(pFVar2 + lVar20 + 0x10);
      uVar9 = *(undefined8 *)(pFVar2 + lVar20 + 0x10 + 8);
      uVar10 = *(undefined8 *)(pFVar2 + lVar20 + 0x20);
      uVar11 = *(undefined8 *)(pFVar2 + lVar20 + 0x20 + 8);
      pFVar1 = pFVar2 + lVar20;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar12 = *(undefined8 *)(pFVar2 + lVar20 + 0x30);
      uVar13 = *(undefined8 *)(pFVar2 + lVar20 + 0x30 + 8);
      uVar14 = *(undefined8 *)(pFVar2 + lVar20 + 0x50);
      uVar15 = *(undefined8 *)(pFVar2 + lVar20 + 0x50 + 8);
      uVar16 = *(undefined8 *)(pFVar2 + lVar20 + 0x40);
      uVar17 = *(undefined8 *)(pFVar2 + lVar20 + 0x40 + 8);
      uVar19 = 0;
      if ((int)uVar21 < (this->PrevWorldSpaceTransforms).ArrayNum) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->PrevWorldSpaceTransforms).AllocatorInstance.Data;
      uVar21 = uVar21 + 1;
      pFVar1 = pFVar2 + lVar20;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
      *(undefined8 *)(pFVar2 + lVar20 + 0x10) = uVar8;
      *(undefined8 *)(pFVar2 + lVar20 + 0x10 + 8) = uVar9;
      *(undefined8 *)(pFVar2 + lVar20 + 0x20) = uVar10;
      *(undefined8 *)(pFVar2 + lVar20 + 0x20 + 8) = uVar11;
      *(undefined8 *)(pFVar2 + lVar20 + 0x30) = uVar12;
      *(undefined8 *)(pFVar2 + lVar20 + 0x30 + 8) = uVar13;
      *(undefined8 *)(pFVar2 + lVar20 + 0x40) = uVar16;
      *(undefined8 *)(pFVar2 + lVar20 + 0x40 + 8) = uVar17;
      *(undefined8 *)(pFVar2 + lVar20 + 0x50) = uVar14;
      *(undefined8 *)(pFVar2 + lVar20 + 0x50 + 8) = uVar15;
      lVar20 = lVar20 + 0x60;
    } while ((int)uVar21 < (this->WorldSpaceTransforms).ArrayNum);
  }
  return;
}

// PropagateAnimDirtyFlags @ 1463c10c0

void __thiscall FBoneHierarchy::PropagateAnimDirtyFlags(FBoneHierarchy *this)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  if (this->ActorLocalToWorldDirty == false) {
    uVar10 = 0;
    if (0 < (this->ChildIndices).ArrayNum) {
      lVar8 = 0;
      local_res10 = 0;
      do {
        lVar9 = local_res10;
        uVar6 = 0;
        if ((int)uVar10 < (this->AnimDirty).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((byte)(this->AnimDirty).AllocatorInstance.Data[lVar8] & 1) != 0) {
          uVar6 = 0;
          if ((int)uVar10 < (this->ChildIndices).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (this->ChildIndices).AllocatorInstance.Data + lVar9;
          puVar11 = *(uint **)pFVar12;
          iVar3 = *(int *)(pFVar12 + 8);
          puVar1 = puVar11 + iVar3;
          while( true ) {
            if (*(int *)(pFVar12 + 8) != iVar3) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            lVar9 = local_res10;
            if (puVar11 == puVar1) break;
            uVar6 = *puVar11;
            uVar7 = 0;
            if ((int)uVar6 < (this->AnimDirty).ArrayNum) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this->AnimDirty).AllocatorInstance.Data + (int)uVar6;
            *pFVar2 = (FScriptContainerElement)((byte)*pFVar2 | 1);
            puVar11 = puVar11 + 1;
          }
        }
        local_res10 = lVar9 + 0x10;
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar10 < (this->ChildIndices).ArrayNum);
    }
  }
  else {
    uVar10 = 0;
    if (0 < (this->AnimDirty).ArrayNum) {
      lVar8 = 0;
      while( true ) {
        uVar6 = 0;
        if ((int)uVar10 < (this->AnimDirty).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        uVar10 = uVar10 + 1;
        pFVar12 = (this->AnimDirty).AllocatorInstance.Data + lVar8;
        *pFVar12 = (FScriptContainerElement)((byte)*pFVar12 | 1);
        lVar8 = lVar8 + 1;
        if ((this->AnimDirty).ArrayNum <= (int)uVar10) {
          return;
        }
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// SetActorWorldSpaceTransform @ 1463c6eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBoneHierarchy::SetActorWorldSpaceTransform(FBoneHierarchy *this,TTransform<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  
  dVar4 = (this->ActorLocalToWorld).Translation.XY.m128d_f64[0] -
          (param_1->Translation).XY.m128d_f64[0];
  uVar14 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
        (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000) &&
      (dVar4 = (this->ActorLocalToWorld).Translation.XY.m128d_f64[1] -
               (param_1->Translation).XY.m128d_f64[1],
      uVar14 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar15 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
      (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) &&
     (dVar4 = (this->ActorLocalToWorld).Translation.ZW.m128d_f64[0] -
              (param_1->Translation).ZW.m128d_f64[0],
     uVar14 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar15 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
     (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) {
    dVar4 = (this->ActorLocalToWorld).Rotation.ZW.m128d_f64[0];
    dVar5 = (this->ActorLocalToWorld).Rotation.ZW.m128d_f64[1];
    dVar16 = (this->ActorLocalToWorld).Rotation.XY.m128d_f64[0];
    dVar17 = (this->ActorLocalToWorld).Rotation.XY.m128d_f64[1];
    dVar9 = (param_1->Rotation).ZW.m128d_f64[0] + dVar4;
    dVar10 = (param_1->Rotation).ZW.m128d_f64[1] + dVar5;
    dVar4 = dVar4 - (param_1->Rotation).ZW.m128d_f64[0];
    dVar5 = dVar5 - (param_1->Rotation).ZW.m128d_f64[1];
    dVar7 = (param_1->Rotation).XY.m128d_f64[0] + dVar16;
    dVar8 = (param_1->Rotation).XY.m128d_f64[1] + dVar17;
    dVar16 = dVar16 - (param_1->Rotation).XY.m128d_f64[0];
    dVar17 = dVar17 - (param_1->Rotation).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar5,0) & _UNK_15061cc88));
    auVar1._8_4_ = (int)lVar13;
    auVar1._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar12 = movmskpd((int)this,auVar1);
    lVar13 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar14 = movmskpd((int)&stack0x00000000,auVar2);
    uVar15 = iVar12 << 2 | uVar14;
    if (uVar15 != 0) {
      lVar13 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar10,0) & _UNK_15061cc88));
      auVar3._8_4_ = (int)lVar13;
      auVar3._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ));
      auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar15 = movmskpd(uVar15,auVar3);
      lVar13 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar8,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar13;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ));
      auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      iVar12 = movmskpd(uVar14,auVar6);
      if ((uVar15 & 0x3fffffff) != 0 || iVar12 != 0) goto LAB_1463c7018;
    }
    dVar4 = (this->ActorLocalToWorld).Scale3D.XY.m128d_f64[0] - (param_1->Scale3D).XY.m128d_f64[0];
    uVar14 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar15 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
          (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000) &&
        (dVar4 = (this->ActorLocalToWorld).Scale3D.XY.m128d_f64[1] -
                 (param_1->Scale3D).XY.m128d_f64[1],
        uVar14 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar15 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
        (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) &&
       (dVar4 = (this->ActorLocalToWorld).Scale3D.ZW.m128d_f64[0] -
                (param_1->Scale3D).ZW.m128d_f64[0],
       uVar14 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar15 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
       (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) {
      bVar11 = 0;
      goto LAB_1463c7023;
    }
  }
LAB_1463c7018:
  bVar11 = 1;
LAB_1463c7023:
  this->ActorLocalToWorldDirty = (bool)(this->ActorLocalToWorldDirty | bVar11);
  dVar4 = (param_1->Rotation).XY.m128d_f64[1];
  (this->ActorLocalToWorld).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->ActorLocalToWorld).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->ActorLocalToWorld).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->ActorLocalToWorld).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Translation).XY.m128d_f64[1];
  (this->ActorLocalToWorld).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->ActorLocalToWorld).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Translation).ZW.m128d_f64[1];
  (this->ActorLocalToWorld).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->ActorLocalToWorld).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->ActorLocalToWorld).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->ActorLocalToWorld).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->ActorLocalToWorld).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->ActorLocalToWorld).Scale3D.ZW.m128d_f64[1] = dVar4;
  return;
}

// SetAnimLocalDirty @ 1463c7110

void __thiscall FBoneHierarchy::SetAnimLocalDirty(FBoneHierarchy *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->AnimDirty).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->AnimDirty).AllocatorInstance.Data + param_1;
  *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 1);
  return;
}

// SetAnimLocalSpaceTransform @ 1463c7190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBoneHierarchy::SetAnimLocalSpaceTransform
          (FBoneHierarchy *this,int param_1,TTransform<double> *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  undefined7 extraout_var;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  
  if (*(int *)&(this->BoneToTransformIndex).field_0x8 !=
      *(int *)&(this->BoneToTransformIndex).field_0x34) {
    puVar19 = *(undefined1 **)&(this->BoneToTransformIndex).field_0x40;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->BoneToTransformIndex).field_0x38;
    }
    iVar18 = *(int *)(puVar19 +
                     (ulonglong)(*(int *)&(this->BoneToTransformIndex).field_0x48 - 1U & param_1) *
                     4);
    if (iVar18 != -1) {
      lVar20 = *(longlong *)&this->BoneToTransformIndex;
      do {
        if (*(int *)(lVar20 + (longlong)iVar18 * 0x10) == param_1) goto LAB_1463c721d;
        iVar18 = *(int *)(lVar20 + 8 + (longlong)iVar18 * 0x10);
      } while (iVar18 != -1);
    }
  }
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("BoneToTransformIndex.Contains(BoneIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                      ,0xa1,L"");
  if (bVar14) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1463c721d:
  puVar16 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                    FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                 *)&this->BoneToTransformIndex,param_1);
  uVar1 = *puVar16;
  uVar17 = ~uVar1 >> 0x1f;
  uVar15 = 0;
  if ((int)uVar1 < (this->LocalSpaceTransforms).ArrayNum) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
    uVar17 = 0x506106c8;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar15 = (uint)CONCAT71(extraout_var,bVar14);
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->LocalSpaceTransforms).AllocatorInstance.Data;
  lVar20 = (longlong)(int)uVar1 * 0x60;
  dVar7 = *(double *)(pFVar2 + lVar20 + 0x20) - (param_2->Translation).XY.m128d_f64[0];
  uVar22 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar23,uVar22) < __real_3e45798ee0000000 ||
        (double)CONCAT44(uVar23,uVar22) == __real_3e45798ee0000000) &&
      (dVar7 = *(double *)(pFVar2 + lVar20 + 0x20 + 8) - (param_2->Translation).XY.m128d_f64[1],
      uVar22 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar23 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar23,uVar22) < __real_3e45798ee0000000 ||
      (double)CONCAT44(uVar23,uVar22) == __real_3e45798ee0000000)) &&
     (dVar7 = *(double *)(pFVar2 + lVar20 + 0x30) - (param_2->Translation).ZW.m128d_f64[0],
     uVar22 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar23 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar23,uVar22) < __real_3e45798ee0000000 ||
     (double)CONCAT44(uVar23,uVar22) == __real_3e45798ee0000000)) {
    dVar7 = *(double *)(pFVar2 + lVar20 + 0x10);
    dVar8 = *(double *)(pFVar2 + lVar20 + 0x10 + 8);
    dVar24 = *(double *)(pFVar2 + lVar20);
    dVar25 = *(double *)(pFVar2 + lVar20 + 8);
    dVar12 = (param_2->Rotation).ZW.m128d_f64[0] + dVar7;
    dVar13 = (param_2->Rotation).ZW.m128d_f64[1] + dVar8;
    dVar7 = dVar7 - (param_2->Rotation).ZW.m128d_f64[0];
    dVar8 = dVar8 - (param_2->Rotation).ZW.m128d_f64[1];
    dVar10 = (param_2->Rotation).XY.m128d_f64[0] + dVar24;
    dVar11 = (param_2->Rotation).XY.m128d_f64[1] + dVar25;
    dVar24 = dVar24 - (param_2->Rotation).XY.m128d_f64[0];
    dVar25 = dVar25 - (param_2->Rotation).XY.m128d_f64[1];
    lVar21 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar8,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar21;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar4._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    iVar18 = movmskpd(uVar17,auVar4);
    lVar21 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar25,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar21;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    uVar15 = movmskpd(uVar15,auVar5);
    uVar17 = iVar18 << 2 | uVar15;
    if (uVar17 != 0) {
      lVar21 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar13,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar21;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar12,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      uVar17 = movmskpd(uVar17,auVar6);
      lVar21 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar11,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar21;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar10,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar18 = movmskpd(uVar15,auVar9);
      if ((uVar17 & 0x3fffffff) != 0 || iVar18 != 0) goto LAB_1463c740c;
    }
    dVar7 = *(double *)(pFVar2 + lVar20 + 0x40) - (param_2->Scale3D).XY.m128d_f64[0];
    uVar15 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar17 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar17,uVar15) < __real_3e45798ee0000000 ||
          (double)CONCAT44(uVar17,uVar15) == __real_3e45798ee0000000) &&
        (dVar7 = *(double *)(pFVar2 + lVar20 + 0x40 + 8) - (param_2->Scale3D).XY.m128d_f64[1],
        uVar15 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar17 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar17,uVar15) < __real_3e45798ee0000000 ||
        (double)CONCAT44(uVar17,uVar15) == __real_3e45798ee0000000)) &&
       (dVar7 = *(double *)(pFVar2 + lVar20 + 0x50) - (param_2->Scale3D).ZW.m128d_f64[0],
       uVar15 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar17 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar17,uVar15) < __real_3e45798ee0000000 ||
       (double)CONCAT44(uVar17,uVar15) == __real_3e45798ee0000000)) {
      return;
    }
  }
LAB_1463c740c:
  dVar7 = (param_2->Rotation).XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar20) = (param_2->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar20 + 8) = dVar7;
  dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar20 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar20 + 0x10 + 8) = dVar7;
  dVar7 = (param_2->Translation).XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar20 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar20 + 0x20 + 8) = dVar7;
  dVar7 = (param_2->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar20 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar20 + 0x30 + 8) = dVar7;
  dVar7 = (param_2->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar20 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar20 + 0x40 + 8) = dVar7;
  dVar7 = (param_2->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar20 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar20 + 0x50 + 8) = dVar7;
  SetAnimLocalDirty(this,uVar1);
  bVar14 = GetAnimLocalDirty(this,uVar1);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetAnimLocalDirty(TransformIndex) == true",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                          ,0xac,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// UpdateAnimWorldSpaceTransforms @ 1463cdbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FBoneHierarchy::UpdateAnimWorldSpaceTransforms
          (FBoneHierarchy *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  undefined1 local_128 [4];
  uint local_124;
  TTransform<double> *local_120;
  FScriptContainerElement *local_118;
  TArray<int,TSizedDefaultAllocator<32>_> *local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_124 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_124;
  local_100 = pFVar11 + uVar8 * 4;
  local_110 = param_1;
  while( true ) {
    pFVar13 = local_100;
    local_118 = pFVar11;
    if (local_110->ArrayNum != (int)uVar8) {
      local_128[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_128);
    }
    if (pFVar11 == pFVar13) {
      this->ActorLocalToWorldDirty = false;
      return 0 < local_110->ArrayNum;
    }
    uVar1 = *(uint *)pFVar11;
    lVar12 = (longlong)(int)uVar1;
    iVar2 = (this->AnimDirty).ArrayNum;
    uVar9 = ~uVar1 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar1 < iVar2) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (local_138 = lVar12, local_130 = (longlong)iVar2,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((((byte)(this->AnimDirty).AllocatorInstance.Data[lVar12] & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetAnimLocalDirty(TransformIndex) == true",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                           ,0x188,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar2 = (this->ParentIndices).ArrayNum;
    uVar6 = 0;
    if ((int)uVar1 < iVar2) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (local_138 = lVar12, local_130 = (longlong)iVar2,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar2 = (this->LocalSpaceTransforms).ArrayNum;
    uVar6 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + lVar12 * 4);
    lVar10 = (longlong)(int)uVar6;
    uVar7 = 0;
    if ((int)uVar1 < iVar2) {
      uVar7 = uVar9;
    }
    if ((uVar7 == 0) &&
       (local_138 = lVar12, local_130 = (longlong)iVar2,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar2 = (this->WorldSpaceTransforms).ArrayNum;
    local_120 = (TTransform<double> *)
                ((this->LocalSpaceTransforms).AllocatorInstance.Data + lVar12 * 0x60);
    uVar7 = 0;
    if ((int)uVar1 < iVar2) {
      uVar7 = uVar9;
    }
    if ((uVar7 == 0) &&
       (local_138 = lVar12, local_130 = (longlong)iVar2,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar13 = (this->WorldSpaceTransforms).AllocatorInstance.Data + lVar12 * 0x60;
    local_108 = pFVar13;
    if (uVar6 == 0xffffffff) {
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_f8,local_120,&this->ActorLocalToWorld);
      *(double *)pFVar13 = local_f8.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar13 + 8) = local_f8.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar13 + 0x10) = local_f8.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar13 + 0x18) = local_f8.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar13 + 0x20) = local_f8.Translation.XY.m128d_f64[0];
      *(double *)(pFVar13 + 0x28) = local_f8.Translation.XY.m128d_f64[1];
      *(double *)(pFVar13 + 0x30) = local_f8.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar13 + 0x38) = local_f8.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar13 + 0x40) = local_f8.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar13 + 0x48) = local_f8.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar13 + 0x50) = local_f8.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar13 + 0x58) = local_f8.Scale3D.ZW.m128d_f64[1];
    }
    else {
      iVar2 = (this->AnimDirty).ArrayNum;
      uVar7 = 0;
      if ((int)uVar6 < iVar2) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_138 = lVar10, local_130 = (longlong)iVar2,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((((byte)(this->AnimDirty).AllocatorInstance.Data[lVar10] & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetAnimLocalDirty(ParentTransformIndex) == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                             ,0x197,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar2 = (this->WorldSpaceTransforms).ArrayNum;
      uVar7 = 0;
      if ((int)uVar6 < iVar2) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_138 = lVar10, local_130 = (longlong)iVar2,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_98.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_98.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_98.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_98.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_98.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_98.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_98,local_120,
                 (TTransform<double> *)
                 ((this->WorldSpaceTransforms).AllocatorInstance.Data + lVar10 * 0x60));
      *(double *)local_108 = local_98.Rotation.XY.m128d_f64[0];
      *(double *)(local_108 + 8) = local_98.Rotation.XY.m128d_f64[1];
      *(double *)(local_108 + 0x10) = local_98.Rotation.ZW.m128d_f64[0];
      *(double *)(local_108 + 0x18) = local_98.Rotation.ZW.m128d_f64[1];
      *(double *)(local_108 + 0x20) = local_98.Translation.XY.m128d_f64[0];
      *(double *)(local_108 + 0x28) = local_98.Translation.XY.m128d_f64[1];
      *(double *)(local_108 + 0x30) = local_98.Translation.ZW.m128d_f64[0];
      *(double *)(local_108 + 0x38) = local_98.Translation.ZW.m128d_f64[1];
      *(double *)(local_108 + 0x40) = local_98.Scale3D.XY.m128d_f64[0];
      *(double *)(local_108 + 0x48) = local_98.Scale3D.XY.m128d_f64[1];
      *(double *)(local_108 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0];
      *(double *)(local_108 + 0x58) = local_98.Scale3D.ZW.m128d_f64[1];
      pFVar11 = local_118;
    }
    iVar2 = (this->AnimDirty).ArrayNum;
    uVar6 = 0;
    if ((int)uVar1 < iVar2) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (local_138 = lVar12, local_130 = (longlong)iVar2,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar13 = (this->AnimDirty).AllocatorInstance.Data + lVar12;
    *pFVar13 = (FScriptContainerElement)((byte)*pFVar13 & 0xe);
    iVar2 = (this->AnimDirty).ArrayNum;
    uVar6 = 0;
    if ((int)uVar1 < iVar2) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (local_138 = lVar12, local_130 = (longlong)iVar2,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((((byte)(this->AnimDirty).AllocatorInstance.Data[lVar12] & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetAnimLocalDirty(TransformIndex) == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\BoneHierarchy.h"
                           ,0x19d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar11 = pFVar11 + 4;
    uVar8 = (ulonglong)local_124;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

