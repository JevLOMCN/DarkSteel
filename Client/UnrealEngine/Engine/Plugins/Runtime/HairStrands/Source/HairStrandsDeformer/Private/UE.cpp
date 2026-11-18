// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 7

// HaveValidSkinnedResources<FHairGroupInstance::FStrands> @ 14e2626d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Groom::Private::HaveValidSkinnedResources<FHairGroupInstance::FStrands>
          (FStrands *param_1,int param_2)

{
  int iVar1;
  FHairStrandsDeformedRootResource *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  if ((param_1->RestRootResource != (FHairStrandsRestRootResource *)0x0) &&
     (param_1->DeformedRootResource != (FHairStrandsDeformedRootResource *)0x0)) {
    uVar8 = FHairStrandsRestRootResource::GetRootCount(param_1->RestRootResource);
    if (uVar8 != 0) {
      iVar1 = (param_1->RestRootResource->LODs).ArrayNum;
      if (((iVar1 == (param_1->DeformedRootResource->LODs).ArrayNum) && (-1 < param_2)) &&
         (param_2 < iVar1)) {
        pFVar2 = param_1->DeformedRootResource;
        lVar3 = *(longlong *)
                 ((param_1->RestRootResource->LODs).AllocatorInstance.Data + (longlong)param_2 * 8);
        uVar8 = 0;
        if (param_2 < (pFVar2->LODs).ArrayNum) {
          uVar8 = (uint)~param_2 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        lVar4 = *(longlong *)((pFVar2->LODs).AllocatorInstance.Data + (longlong)param_2 * 8);
        if (((lVar3 != 0) && (*(int *)(lVar3 + 0x60) == 2)) &&
           ((lVar4 != 0 && ((iVar1 = *(int *)(lVar4 + 0x60), iVar1 == 1 || (iVar1 == 2)))))) {
          return true;
        }
        return false;
      }
    }
  }
  return false;
}

// GetCollisionInvocationElementCounts @ 14e274110

int __cdecl
UE::Groom::Private::GetCollisionInvocationElementCounts
          (TArray<TTuple<TObjectPtr<UMeshComponent>,int>,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  UObject *pUVar3;
  UStaticMesh *this;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  UClass *pUVar13;
  FStaticMeshRenderData *this_00;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  FScriptContainerElement *local_60;
  uint local_58;
  longlong local_50;
  longlong local_48;
  FScriptContainerElement *local_40;
  
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  local_58 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_58;
  iVar7 = 0;
  pFVar19 = (param_1->AllocatorInstance).Data;
  local_40 = pFVar19 + uVar12 * 0x10;
  local_res20 = 0;
  do {
    while( true ) {
      pFVar5 = local_40;
      local_60 = pFVar19;
      if (param_1->ArrayNum != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<TObjectPtr<UMeshComponent>,int>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar19 == pFVar5) {
        return iVar7;
      }
      iVar9 = local_res20;
      if (*(longlong *)pFVar19 != 0) break;
LAB_14e2744e0:
      local_res20 = iVar9;
      pFVar19 = pFVar19 + 0x10;
      uVar12 = (ulonglong)local_58;
    }
    pUVar13 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)pFVar19,pUVar13);
    iVar9 = local_res20;
    if ((bVar6) && (lVar14 = *(longlong *)pFVar19, lVar14 != 0)) {
      if (*(longlong *)(lVar14 + 0x810) != 0) {
        iVar11 = *(int *)(lVar14 + 0x7b4);
        plVar2 = *(longlong **)(*(longlong *)(lVar14 + 0x810) + 0x48);
        if ((-1 < iVar11) && (iVar11 < (int)plVar2[1])) {
          if ((iVar11 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          lVar14 = *(longlong *)(*plVar2 + (longlong)iVar11 * 8);
          uVar16 = 0;
          lVar20 = (longlong)*(int *)(lVar14 + 0x18);
          pFVar19 = local_60;
          iVar9 = local_res20;
          if (0 < lVar20) {
            lVar18 = 0;
            do {
              if (param_2 ==
                  UOptimusGroomCollisionComponentSource::FCollisionExecutionDomains::Vertices) {
                uVar8 = 0;
                if ((int)uVar16 < *(int *)(lVar14 + 0x18)) {
                  uVar8 = ~uVar16 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                local_78 = *(undefined4 *)(*(longlong *)(lVar14 + 0x10) + 0x48 + lVar18);
                pFVar19 = (param_3->AllocatorInstance).Data;
                if (((pFVar19 <= (FScriptContainerElement *)&local_78) &&
                    ((FScriptContainerElement *)&local_78 < pFVar19 + (longlong)*piVar1 * 4)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                iVar9 = param_3->ArrayNum;
                uVar10 = local_78;
                if (iVar9 == *piVar1) {
                  iVar9 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&param_3->AllocatorInstance,piVar1);
                  uVar10 = local_78;
                }
LAB_14e274455:
                param_3->ArrayNum = iVar9 + 1;
                *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 4) = uVar10;
                uVar15 = param_3->ArrayNum - 1;
                uVar8 = 0;
                if ((int)uVar15 < param_3->ArrayNum) {
                  uVar8 = ~uVar15 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                iVar7 = iVar7 + *(int *)((param_3->AllocatorInstance).Data +
                                        (longlong)param_3->ArrayNum * 4 + -4);
              }
              else if (param_2 ==
                       UOptimusGroomCollisionComponentSource::FCollisionExecutionDomains::Triangles)
              {
                uVar8 = 0;
                if ((int)uVar16 < *(int *)(lVar14 + 0x18)) {
                  uVar8 = ~uVar16 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                local_74 = *(undefined4 *)(*(longlong *)(lVar14 + 0x10) + 8 + lVar18);
                pFVar19 = (param_3->AllocatorInstance).Data;
                if (((pFVar19 <= (FScriptContainerElement *)&local_74) &&
                    ((FScriptContainerElement *)&local_74 < pFVar19 + (longlong)*piVar1 * 4)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                iVar9 = param_3->ArrayNum;
                uVar10 = local_74;
                if (iVar9 == *piVar1) {
                  iVar9 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&param_3->AllocatorInstance,piVar1);
                  uVar10 = local_74;
                }
                goto LAB_14e274455;
              }
              uVar16 = uVar16 + 1;
              lVar18 = lVar18 + 0x118;
              lVar20 = lVar20 + -1;
              pFVar19 = local_60;
              iVar9 = iVar7;
            } while (lVar20 != 0);
          }
        }
      }
      goto LAB_14e2744e0;
    }
    if (*(longlong *)pFVar19 == 0) goto LAB_14e2744e0;
    pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)pFVar19,pUVar13);
    iVar9 = local_res20;
    if ((!bVar6) || (lVar14 = *(longlong *)pFVar19, lVar14 == 0)) goto LAB_14e2744e0;
    pUVar3 = *(UObject **)(lVar14 + 0x5a0);
    if (GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14e274544;
      goto LAB_14e2744e0;
    }
    if (pUVar3 == (UObject *)0x0) goto LAB_14e2744e0;
    GC::MarkAsReachable(pUVar3);
LAB_14e274544:
    this = *(UStaticMesh **)(lVar14 + 0x5a0);
    if ((GC::GIsIncrementalReachabilityPending != false) && (this != (UStaticMesh *)0x0)) {
      GC::MarkAsReachable((UObject *)this);
    }
    this_00 = UStaticMesh::GetRenderData(this);
    iVar9 = local_res20;
    if (this_00 == (FStaticMeshRenderData *)0x0) goto LAB_14e2744e0;
    uVar16 = 0;
    if (this_00->CurrentFirstLODIdx != 0) {
      uVar16 = (uint)this_00->CurrentFirstLODIdx;
    }
    iVar11 = FStaticMeshRenderData::GetFirstValidLODIdx(this_00,uVar16);
    iVar9 = local_res20;
    if ((iVar11 < 0) || ((this_00->LODResources).Array.ArrayNum <= iVar11)) goto LAB_14e2744e0;
    if ((iVar11 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    uVar16 = 0;
    local_68 = 0;
    lVar14 = *(longlong *)
              ((this_00->LODResources).Array.AllocatorInstance.Data + (longlong)iVar11 * 8);
    lVar20 = (longlong)*(int *)(lVar14 + 0x38);
    local_50 = lVar14;
    local_48 = lVar20;
    if (0 < lVar20) {
      lVar18 = 0;
      iVar11 = local_res20;
      do {
        if (param_2 == UOptimusGroomCollisionComponentSource::FCollisionExecutionDomains::Vertices)
        {
          uVar8 = 0;
          if ((int)uVar16 < *(int *)(lVar14 + 0x38)) {
            uVar8 = ~uVar16 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          lVar20 = lVar14 + 0x10;
          if (*(longlong *)(lVar14 + 0x30) != 0) {
            lVar20 = *(longlong *)(lVar14 + 0x30);
          }
          uVar8 = 0;
          if ((int)uVar16 < *(int *)(lVar14 + 0x38)) {
            uVar8 = ~uVar16 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          pFVar19 = (param_3->AllocatorInstance).Data;
          lVar17 = lVar14 + 0x10;
          if (*(longlong *)(lVar14 + 0x30) != 0) {
            lVar17 = *(longlong *)(lVar14 + 0x30);
          }
          local_70 = *(int *)(lVar17 + 0x10 + lVar18) - *(int *)(lVar20 + 0xc + lVar18);
          if (((pFVar19 <= (FScriptContainerElement *)&local_70) &&
              ((FScriptContainerElement *)&local_70 < pFVar19 + (longlong)*piVar1 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          iVar7 = param_3->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar7 + 1;
          *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_70;
          uVar15 = param_3->ArrayNum - 1;
          uVar8 = 0;
          if ((int)uVar15 < param_3->ArrayNum) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          iVar11 = local_res20 +
                   *(int *)((param_3->AllocatorInstance).Data + (longlong)param_3->ArrayNum * 4 + -4
                           );
          lVar14 = local_50;
          lVar20 = local_48;
          local_res20 = iVar11;
        }
        else if (param_2 ==
                 UOptimusGroomCollisionComponentSource::FCollisionExecutionDomains::Triangles) {
          uVar8 = 0;
          if ((int)uVar16 < *(int *)(lVar14 + 0x38)) {
            uVar8 = ~uVar16 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          pFVar19 = (param_3->AllocatorInstance).Data;
          lVar17 = lVar14 + 0x10;
          if (*(longlong *)(lVar14 + 0x30) != 0) {
            lVar17 = *(longlong *)(lVar14 + 0x30);
          }
          local_6c = *(undefined4 *)(lVar17 + 8 + lVar18);
          if (((pFVar19 <= (FScriptContainerElement *)&local_6c) &&
              ((FScriptContainerElement *)&local_6c < pFVar19 + (longlong)*piVar1 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          iVar7 = param_3->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar7 + 1;
          *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_6c;
          uVar15 = param_3->ArrayNum - 1;
          uVar8 = 0;
          if ((int)uVar15 < param_3->ArrayNum) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          iVar11 = iVar11 + *(int *)((param_3->AllocatorInstance).Data +
                                    (longlong)param_3->ArrayNum * 4 + -4);
          lVar14 = local_50;
          local_res20 = iVar11;
        }
        local_68 = local_68 + 1;
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 0x1c;
        pFVar19 = local_60;
        iVar7 = local_res20;
        iVar9 = local_res20;
      } while (local_68 < lVar20);
      goto LAB_14e2744e0;
    }
    pFVar19 = local_60 + 0x10;
    uVar12 = (ulonglong)local_58;
  } while( true );
}

// GetCollisionNumInvocations @ 14e2749d0

int __cdecl
UE::Groom::Private::GetCollisionNumInvocations
          (TArray<TTuple<TObjectPtr<UMeshComponent>,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  UObject *pUVar3;
  UStaticMesh *this;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  FStaticMeshRenderData *this_00;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *this_01;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  iVar6 = param_1->ArrayNum;
  iVar10 = 0;
  this_01 = (param_1->AllocatorInstance).Data;
  pFVar11 = this_01 + (longlong)iVar6 * 0x10;
LAB_14e274a00:
  do {
    if (param_1->ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<TObjectPtr<UMeshComponent>,int>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar11) {
      return iVar10;
    }
    if (*(longlong *)this_01 != 0) {
      pUVar8 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar8);
      if ((bVar5) && (lVar1 = *(longlong *)this_01, lVar1 != 0)) {
        if (*(longlong *)(lVar1 + 0x810) != 0) {
          iVar7 = *(int *)(lVar1 + 0x7b4);
          plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x810) + 0x48);
          if ((-1 < iVar7) && (iVar7 < (int)plVar2[1])) {
            if (iVar7 < 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                iVar6 = (*pcVar4)();
                return iVar6;
              }
            }
            iVar10 = iVar10 + *(int *)(*(longlong *)(*plVar2 + (longlong)iVar7 * 8) + 0x18);
            this_01 = this_01 + 0x10;
            goto LAB_14e274a00;
          }
        }
      }
      else if (*(longlong *)this_01 != 0) {
        pUVar8 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar8);
        if ((bVar5) && (lVar1 = *(longlong *)this_01, lVar1 != 0)) {
          pUVar3 = *(UObject **)(lVar1 + 0x5a0);
          if (GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar3 != (UObject *)0x0) goto LAB_14e274b25;
          }
          else if (pUVar3 != (UObject *)0x0) {
            GC::MarkAsReachable(pUVar3);
LAB_14e274b25:
            this = *(UStaticMesh **)(lVar1 + 0x5a0);
            if ((GC::GIsIncrementalReachabilityPending != false) && (this != (UStaticMesh *)0x0)) {
              GC::MarkAsReachable((UObject *)this);
            }
            this_00 = UStaticMesh::GetRenderData(this);
            if (this_00 != (FStaticMeshRenderData *)0x0) {
              uVar9 = 0;
              if (this_00->CurrentFirstLODIdx != 0) {
                uVar9 = (uint)this_00->CurrentFirstLODIdx;
              }
              iVar7 = FStaticMeshRenderData::GetFirstValidLODIdx(this_00,uVar9);
              if ((-1 < iVar7) && (iVar7 < (this_00->LODResources).Array.ArrayNum)) {
                if (iVar7 < 0) {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar5) {
                    pcVar4 = (code *)swi(3);
                    iVar6 = (*pcVar4)();
                    return iVar6;
                  }
                }
                iVar10 = iVar10 + *(int *)(*(longlong *)
                                            ((this_00->LODResources).Array.AllocatorInstance.Data +
                                            (longlong)iVar7 * 8) + 0x38);
              }
            }
          }
        }
      }
    }
    this_01 = this_01 + 0x10;
  } while( true );
}

// GetGroomGroupElementOffsets @ 14e276b40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Groom::Private::GetGroomGroupElementOffsets
          (UGroomComponent *param_1,FName param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  int iVar1;
  USkeletalMeshComponent *this;
  UGroomAsset *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  AActor *this_00;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  USkeletalMesh *pUVar10;
  USkeletalMesh *pUVar11;
  longlong lVar12;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  int local_88;
  undefined1 local_84 [4];
  uint local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  int local_68;
  uint local_64;
  UClass *local_60;
  UClass *local_58;
  undefined1 local_50 [24];
  
  if (param_1 != (UGroomComponent *)0x0) {
    uVar17 = (param_1->HairGroupInstances).ArrayNum;
    local_68 = 0;
    local_64 = uVar17;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(param_3,&local_68,uVar17 + 1);
    local_88 = 0;
    local_80 = 0;
    iVar15 = 0;
    if (uVar17 != 0) {
LAB_14e276bc0:
      uVar17 = local_80;
      uVar6 = 0;
      if ((int)local_80 < param_3->ArrayNum) {
        uVar6 = ~local_80 >> 0x1f;
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
      *(int *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) = local_88;
      if ((param_2 == UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Objects) ||
         (param_2 == UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Objects)) {
        local_88 = local_88 + 1;
      }
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
      this_00 = USceneComponent::GetAttachmentRootActor((USceneComponent *)param_1);
      if (this_00 == (AActor *)0x0) goto LAB_14e276d4e;
      pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar7);
      }
      lVar12 = local_70;
      uVar6 = local_70._4_4_;
      local_70 = (ulonglong)local_70._4_4_ << 0x20;
      if ((lVar12 < 0) && (uVar6 != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_78,0,(int *)((longlong)&local_70 + 4));
      }
      if (GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UClass *)0x0) goto LAB_14e276cb6;
LAB_14e276ce7:
        pUVar8 = (UClass *)0x0;
      }
      else {
        if (pUVar7 == (UClass *)0x0) goto LAB_14e276ce7;
        GC::MarkAsReachable((UObject *)pUVar7);
LAB_14e276cb6:
        pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar8 == (UClass *)0x0) goto LAB_14e276ce7;
        iVar15 = (int)pUVar8->_padding_;
        if (((int)pUVar7->_padding_ < iVar15) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar15 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pUVar8 = pUVar7;
        if (!bVar5) goto LAB_14e276ce7;
      }
      pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar8 == pUVar9) {
        local_60 = pUVar7;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
          GC::MarkAsReachable((UObject *)pUVar7);
        }
        AActor::
        ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_60,
                   (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_78);
      }
      else {
        local_58 = pUVar7;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
          GC::MarkAsReachable((UObject *)pUVar7);
        }
        AActor::
        ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_58,
                   (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_78);
      }
LAB_14e276d4e:
      iVar15 = (int)local_70;
      pFVar14 = local_78.Data + (longlong)(int)local_70 * 8;
      FVar16.Data = local_78.Data;
      do {
        if ((int)local_70 != iVar15) {
          local_84[0] = 0;
          `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_84);
        }
        if (FVar16.Data == pFVar14) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data);
          }
          goto LAB_14e276e4c;
        }
        this = *(USkeletalMeshComponent **)FVar16.Data;
        if (this != (USkeletalMeshComponent *)0x0) {
          pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if (((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
               &pUVar7->_padding_)) &&
             (pUVar2 = (param_1->GroomAsset).field0_0x0.DebugPtr, uVar17 = local_80,
             pUVar2 != (UGroomAsset *)0x0)) {
            pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(this);
            uVar17 = local_80;
            pUVar11 = FGroomDataflowSettings::GetSkeletalMesh(&pUVar2->DataflowSettings,local_80);
            if (pUVar10 == pUVar11) goto code_r0x00014e276ddb;
          }
        }
        FVar16.Data = FVar16.Data + 8;
      } while( true );
    }
LAB_14e276fe9:
    uVar6 = 0;
    if ((int)uVar17 < param_3->ArrayNum) {
      uVar6 = ~uVar17 >> 0x1f;
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
    *(int *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) = iVar15;
  }
  return;
code_r0x00014e276ddb:
  FGroomDataflowSettings::GetMeshLOD
            (&((param_1->GroomAsset).field0_0x0.DebugPtr)->DataflowSettings,uVar17);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  plVar3 = (longlong *)this->_padding_;
  if ((plVar3 != (longlong *)0x0) &&
     (param_2 == UOptimusGroomAssetComponentSource::FMeshesExecutionDomains::Bones)) {
    lVar12 = (**(code **)(*plVar3 + 0x68))(plVar3,local_50);
    local_88 = local_88 + *(int *)(lVar12 + 8);
  }
LAB_14e276e4c:
  pUVar2 = (param_1->GroomAsset).field0_0x0.DebugPtr;
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UGroomAsset *)0x0) goto LAB_14e276fc7;
  }
  else {
    if (pUVar2 == (UGroomAsset *)0x0) goto LAB_14e276fc7;
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  pTVar13 = UGroomAsset::GetHairGroupsPlatformData(pUVar2);
  if ((-1 < (int)uVar17) && ((int)uVar17 < pTVar13->ArrayNum)) {
    pTVar13 = UGroomAsset::GetHairGroupsPlatformData(pUVar2);
    if ((pTVar13->ArrayNum <= (int)uVar17) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar14 = (pTVar13->AllocatorInstance).Data;
    if (param_2 == UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Curves) {
      lVar12 = 0x34c;
      if (!param_4) {
        lVar12 = 0x2c8;
      }
      local_88 = local_88 + *(int *)(pFVar14 + lVar12 + (longlong)(int)uVar17 * 2000);
    }
    else if (param_2 == UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Edges) {
      if (param_4) {
        local_88 = local_88 +
                   (*(int *)(pFVar14 + (longlong)(int)uVar17 * 2000 + 0x350) -
                   *(int *)(pFVar14 + (longlong)(int)uVar17 * 2000 + 0x34c));
      }
      else {
        local_88 = local_88 +
                   (*(int *)(pFVar14 + (longlong)(int)uVar17 * 2000 + 0x2cc) -
                   *(int *)(pFVar14 + (longlong)(int)uVar17 * 2000 + 0x2c8));
      }
    }
    else {
      if (param_2 == UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Points) {
        if (param_4) {
          pFVar14 = pFVar14 + (longlong)(int)uVar17 * 2000 + 0x350;
        }
        else {
          pFVar14 = pFVar14 + (longlong)(int)uVar17 * 2000 + 0x2cc;
        }
      }
      else if (param_2 == UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Curves) {
        if (param_4) {
          pFVar14 = pFVar14 + (longlong)(int)uVar17 * 2000 + 0x8c;
        }
        else {
          pFVar14 = pFVar14 + (longlong)(int)uVar17 * 2000 + 8;
        }
      }
      else {
        if (param_2 == UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Edges) {
          if (param_4) {
            local_88 = local_88 +
                       (*(int *)(pFVar14 + (longlong)(int)uVar17 * 2000 + 0x90) -
                       *(int *)(pFVar14 + (longlong)(int)uVar17 * 2000 + 0x8c));
          }
          else {
            local_88 = local_88 +
                       (*(int *)(pFVar14 + (longlong)(int)uVar17 * 2000 + 0xc) -
                       *(int *)(pFVar14 + (longlong)(int)uVar17 * 2000 + 8));
          }
          goto LAB_14e276fc7;
        }
        if (param_2 != UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Points)
        goto LAB_14e276fc7;
        if (param_4) {
          pFVar14 = pFVar14 + (longlong)(int)uVar17 * 2000 + 0x90;
        }
        else {
          pFVar14 = pFVar14 + (longlong)(int)uVar17 * 2000 + 0xc;
        }
      }
      local_88 = local_88 + *(int *)pFVar14;
    }
  }
LAB_14e276fc7:
  local_80 = uVar17 + 1;
  uVar17 = local_64;
  iVar15 = local_88;
  if (local_64 <= local_80) goto LAB_14e276fe9;
  goto LAB_14e276bc0;
}

// GetGroomInvocationElementCounts @ 14e277080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl
UE::Groom::Private::GetGroomInvocationElementCounts
          (TArray<UGroomComponent_const_*,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int *piVar1;
  UGroomComponent *this;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint local_res18 [2];
  bool local_res20;
  int local_88;
  int local_84;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  uint local_70;
  uint local_6c;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  bVar4 = false;
  bVar3 = false;
  local_res18[0] = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_84 = 0;
  param_3->ArrayNum = 0;
  local_res20 = param_4;
  if (param_3->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  local_6c = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_6c;
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_60 = pFVar14 + uVar10 * 8;
  puVar15 = local_50;
  puVar16 = local_58;
  do {
    pFVar5 = local_60;
    local_68 = pFVar14;
    if (param_1->ArrayNum != (int)uVar10) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar14 == pFVar5) {
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      return local_84;
    }
    this = *(UGroomComponent **)pFVar14;
    iVar7 = local_84;
    if (this != (UGroomComponent *)0x0) {
      GetGroomGroupElementOffsets(this,param_2,&local_80,local_res20);
      local_70 = (this->HairGroupInstances).ArrayNum;
      uVar17 = 0;
      iVar7 = local_84;
      if (local_70 != 0) {
        do {
          bVar6 = UGroomComponent::IsDeformationEnable(this,uVar17);
          if (bVar6) {
            if (((int)uVar17 < 0) || ((this->HairGroupInstances).ArrayNum <= (int)uVar17)) {
              bVar3 = true;
              puVar13 = (undefined8 *)0x0;
              puVar15 = puVar13;
            }
            else {
              bVar4 = true;
              if (((int)uVar17 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                iVar7 = (*pcVar2)();
                return iVar7;
              }
              puVar13 = *(undefined8 **)
                         ((this->HairGroupInstances).AllocatorInstance.Data +
                         (longlong)(int)uVar17 * 8);
              puVar16 = puVar13;
              if (puVar13 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
                UNLOCK();
              }
            }
            if ((bVar3) && (bVar3 = false, puVar15 != (undefined8 *)0x0)) {
              piVar1 = (int *)(puVar15 + 1);
              LOCK();
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                puVar11 = puVar15;
                if (piVar1 == (int *)0x0) {
                  puVar11 = (undefined8 *)0x0;
                }
                if (puVar11 != (undefined8 *)0x0) {
                  (**(code **)*puVar11)(puVar11,1);
                }
              }
            }
            if ((bVar4) && (bVar4 = false, puVar16 != (undefined8 *)0x0)) {
              piVar1 = (int *)(puVar16 + 1);
              LOCK();
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                puVar11 = puVar16;
                if (piVar1 == (int *)0x0) {
                  puVar11 = (undefined8 *)0x0;
                }
                if (puVar11 != (undefined8 *)0x0) {
                  (**(code **)*puVar11)(puVar11,1);
                }
              }
            }
            if (puVar13 != (undefined8 *)0x0) {
              uVar8 = uVar17 + 1;
              uVar12 = 0;
              if ((int)uVar8 < local_80.ArrayNum) {
                uVar12 = ~uVar8 >> 0x1f;
              }
              if (uVar12 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar2 = (code *)swi(3);
                  iVar7 = (*pcVar2)();
                  return iVar7;
                }
              }
              pFVar14 = local_80.AllocatorInstance.Data + (longlong)(int)uVar8 * 4;
              uVar8 = 0;
              if ((int)uVar17 < local_80.ArrayNum) {
                uVar8 = ~uVar17 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                iVar7 = (*pcVar2)();
                return iVar7;
              }
              piVar1 = &param_3->ArrayMax;
              local_88 = *(int *)pFVar14 -
                         *(int *)(local_80.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
              pFVar14 = (param_3->AllocatorInstance).Data;
              if (((pFVar14 <= (FScriptContainerElement *)&local_88) &&
                  ((FScriptContainerElement *)&local_88 < pFVar14 + (longlong)*piVar1 * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar2 = (code *)swi(3);
                iVar7 = (*pcVar2)();
                return iVar7;
              }
              iVar9 = param_3->ArrayNum;
              if (iVar9 == *piVar1) {
                iVar9 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_3->AllocatorInstance,piVar1);
              }
              param_3->ArrayNum = iVar9 + 1;
              *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_88;
              uVar12 = param_3->ArrayNum - 1;
              uVar8 = 0;
              if ((int)uVar12 < param_3->ArrayNum) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                iVar7 = (*pcVar2)();
                return iVar7;
              }
              iVar7 = iVar7 + *(int *)((param_3->AllocatorInstance).Data +
                                      (longlong)param_3->ArrayNum * 4 + -4);
            }
          }
          uVar17 = uVar17 + 1;
          pFVar14 = local_68;
        } while (uVar17 < local_70);
      }
    }
    local_84 = iVar7;
    uVar10 = (ulonglong)local_6c;
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// HaveGuidesInstanceResources @ 14e2883e0

bool __cdecl
UE::Groom::Private::HaveGuidesInstanceResources
          (TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) {
      return true;
    }
    puVar7 = *(undefined8 **)pFVar8;
    if (puVar7 == (undefined8 *)0x0) {
      return false;
    }
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
    lVar5 = puVar7[3];
    if ((((lVar5 == 0) || (lVar6 = puVar7[4], lVar6 == 0)) || (*(int *)(lVar5 + 0x18) == -1)) ||
       (((*(char *)(lVar5 + 0x21) == '\0' || (*(int *)(lVar6 + 0x18) == -1)) ||
        (*(char *)(lVar6 + 0x21) == '\0')))) break;
    piVar1 = (int *)(puVar7 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if (piVar1 == (int *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  piVar1 = (int *)(puVar7 + 1);
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 == 1) {
    if (piVar1 == (int *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  return false;
}

// HaveGuidesSkinnedResources @ 14e2884e0

bool __cdecl
UE::Groom::Private::HaveGuidesSkinnedResources
          (TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  local_res18 = param_1->ArrayNum;
  uVar13 = (ulonglong)(int)local_res18;
  pFVar15 = (param_1->AllocatorInstance).Data;
  local_res20 = pFVar15 + uVar13 * 8;
  do {
    pFVar9 = local_res20;
    if (param_1->ArrayNum != (int)uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar9) {
      return true;
    }
    puVar3 = *(undefined8 **)pFVar15;
    if (puVar3 == (undefined8 *)0x0) {
      return false;
    }
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (puVar3[0x8c] == 0) goto LAB_14e2886d3;
    if (*(int *)((longlong)puVar3 + 0x46c) == 2) {
      uVar14 = (uint)*(float *)(puVar3[0x8c] + 0x50c);
      if ((((FHairStrandsRestRootResource *)puVar3[5] == (FHairStrandsRestRootResource *)0x0) ||
          (puVar3[6] == 0)) ||
         (uVar12 = FHairStrandsRestRootResource::GetRootCount
                             ((FHairStrandsRestRootResource *)puVar3[5]), uVar12 == 0)) {
LAB_14e2886d3:
        piVar1 = (int *)(puVar3 + 1);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
        return false;
      }
      plVar4 = (longlong *)puVar3[5];
      iVar2 = (int)plVar4[1];
      if (((iVar2 != *(int *)(puVar3[6] + 8)) || ((int)uVar14 < 0)) || (iVar2 <= (int)uVar14))
      goto LAB_14e2886d3;
      if (((int)uVar14 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      plVar5 = (longlong *)puVar3[6];
      lVar6 = *(longlong *)(*plVar4 + (longlong)(int)uVar14 * 8);
      uVar12 = 0;
      if ((int)uVar14 < (int)plVar5[1]) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      lVar7 = *(longlong *)(*plVar5 + (longlong)(int)uVar14 * 8);
      if ((((lVar6 == 0) || (*(int *)(lVar6 + 0x60) != 2)) || (lVar7 == 0)) ||
         ((iVar2 = *(int *)(lVar7 + 0x60), iVar2 != 1 && (iVar2 != 2)))) goto LAB_14e2886d3;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
    pFVar15 = pFVar15 + 8;
    uVar13 = (ulonglong)local_res18;
  } while( true );
}

