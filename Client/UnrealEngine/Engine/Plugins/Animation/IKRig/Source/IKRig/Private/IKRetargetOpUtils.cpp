// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// OnRetargetChainRenamed<FFloorConstraintChainSettings> @ 14df14840

void __cdecl
IKRetargetOpUtils::OnRetargetChainRenamed<FFloorConstraintChainSettings>
          (TArray<FFloorConstraintChainSettings,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FName param_3)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (FName *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFloorConstraintChainSettings,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_2) {
      *pFVar3 = param_3;
    }
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// SynchronizeChainSettingsWithIKRig<FFloorConstraintChainSettings> @ 14df15500

void __cdecl
IKRetargetOpUtils::SynchronizeChainSettingsWithIKRig<FFloorConstraintChainSettings>
          (TArray<FFloorConstraintChainSettings,TSizedDefaultAllocator<32>_> *param_1,
          FIKRetargetOpBase *param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong *plVar17;
  byte bVar18;
  ForAnyElementType FVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *local_res10;
  char local_res18;
  char local_res20;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66 [2];
  uint local_64;
  FScriptContainerElement *local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  
  if ((((param_2 != (FIKRetargetOpBase *)0x0) &&
       (local_res18 = param_3, local_res20 = param_4,
       lVar6 = (**(code **)(param_2->_padding_ + 0xb0))(param_2), lVar6 != 0)) &&
      (*(int *)(lVar6 + 0xf8) != 0)) &&
     ((plVar7 = (longlong *)(**(code **)(param_2->_padding_ + 0xb8))(param_2), !param_3 ||
      (plVar7 != (longlong *)0x0)))) {
    iVar8 = 0;
    local_50 = 0;
    FVar19.Data = (FScriptContainerElement *)0x0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_64 = *(uint *)(lVar6 + 0xf8);
    uVar9 = (ulonglong)(int)local_64;
    pFVar15 = *(FScriptContainerElement **)(lVar6 + 0xf0);
    pFVar10 = pFVar15 + uVar9 * 0x30;
    local_60 = pFVar10;
    while( true ) {
      if (*(int *)(lVar6 + 0xf8) != (int)uVar9) {
        local_res10 = (FScriptContainerElement *)((ulonglong)local_res10 & 0xffffffffffffff00);
        `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
        FVar19.Data = local_58.Data;
        iVar8 = (int)local_50;
      }
      if (pFVar15 == pFVar10) break;
      if ((param_4 == false) || (*(longlong *)(pFVar15 + 0x28) != 0)) {
        if (param_3 == false) {
          lVar2 = plVar7[1];
          plVar11 = (longlong *)*plVar7;
          lVar12 = *(longlong *)pFVar15;
          plVar17 = plVar11 + (longlong)(int)lVar2 * 2;
          while( true ) {
            if ((int)plVar7[1] != (int)lVar2) {
              local_68 = 0;
              `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_68);
            }
            if ((plVar11 == plVar17) || (*plVar11 == lVar12)) break;
            plVar11 = plVar11 + 2;
          }
          pFVar10 = local_60;
          FVar19.Data = local_58.Data;
          param_4 = (bool)local_res20;
          param_3 = (bool)local_res18;
          iVar8 = (int)local_50;
        }
        iVar5 = iVar8;
        if ((FVar19.Data <= pFVar15) && (pFVar15 < FVar19.Data + (longlong)local_50._4_4_ * 8)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar19.Data = local_58.Data;
          iVar5 = (int)local_50;
        }
        if (iVar5 == local_50._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_58,(int *)((longlong)&local_50 + 4));
          FVar19.Data = local_58.Data;
        }
        iVar8 = iVar5 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar8);
        *(longlong *)(FVar19.Data + (longlong)iVar5 * 8) = *(longlong *)pFVar15;
        FVar19.Data = local_58.Data;
      }
      uVar9 = (ulonglong)local_64;
      pFVar15 = pFVar15 + 0x30;
    }
    FVar20.Data = FVar19.Data;
    if (iVar8 != 0) {
      lVar6 = (longlong)param_1->ArrayNum;
      if (param_1->ArrayNum != 0) {
        local_res10 = (param_1->AllocatorInstance).Data;
        iVar5 = 0;
        for (pFVar15 = FVar19.Data; pFVar15 != FVar19.Data + (longlong)iVar8 * 8;
            pFVar15 = pFVar15 + 8) {
          if (*(longlong *)pFVar15 == *(longlong *)local_res10) {
            bVar18 = 1;
            goto LAB_14df1573c;
          }
        }
        bVar18 = 0;
LAB_14df1573c:
        lVar12 = 0;
        iVar13 = 0;
        do {
          lVar12 = lVar12 + 1;
          iVar14 = iVar13 + 1;
          if (lVar12 < lVar6) {
            pFVar15 = local_res10 + lVar12 * 0x20;
            do {
              if (FVar19.Data != FVar19.Data + (longlong)iVar8 * 8) {
                pFVar10 = FVar19.Data;
                do {
                  if (*(longlong *)pFVar10 == *(longlong *)pFVar15) {
                    bVar4 = 1;
                    goto LAB_14df15784;
                  }
                  pFVar10 = pFVar10 + 8;
                } while (pFVar10 != FVar19.Data + (longlong)iVar8 * 8);
              }
              bVar4 = 0;
LAB_14df15784:
              if (bVar18 != bVar4) break;
              iVar14 = iVar14 + 1;
              lVar12 = lVar12 + 1;
              pFVar15 = pFVar15 + 0x20;
            } while (lVar12 < lVar6);
          }
          if (bVar18 != 0) {
            if (iVar5 != iVar13) {
              memmove(local_res10 + (longlong)iVar5 * 0x20,local_res10 + (longlong)iVar13 * 0x20,
                      (longlong)(iVar14 - iVar13) << 5);
              FVar19.Data = local_58.Data;
              iVar8 = (int)local_50;
            }
            iVar5 = iVar5 + (iVar14 - iVar13);
          }
          bVar18 = bVar18 ^ 1;
          iVar13 = iVar14;
        } while (lVar12 < lVar6);
        param_1->ArrayNum = iVar5;
      }
      pFVar15 = FVar19.Data + (longlong)iVar8 * 8;
      iVar5 = iVar8;
      while( true ) {
        if (iVar5 != iVar8) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_67);
        }
        FVar20.Data = local_58.Data;
        if (FVar19.Data == pFVar15) break;
        lVar6 = *(longlong *)FVar19.Data;
        iVar5 = param_1->ArrayNum;
        pFVar10 = (param_1->AllocatorInstance).Data;
        pFVar16 = pFVar10 + (longlong)iVar5 * 0x20;
        while( true ) {
          if (param_1->ArrayNum != iVar5) {
            `TCheckedPointerIterator<FFloorConstraintChainSettings,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_66);
          }
          if (pFVar10 == pFVar16) break;
          if (*(longlong *)pFVar10 == lVar6) goto LAB_14df158a2;
          pFVar10 = pFVar10 + 0x20;
        }
        iVar5 = param_1->ArrayNum;
        if (iVar5 == param_1->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar5 + 1;
        pFVar10 = (param_1->AllocatorInstance).Data;
        lVar12 = (longlong)iVar5 * 0x20;
        *(longlong *)(pFVar10 + lVar12) = lVar6;
        pFVar10[lVar12 + 8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar10 + lVar12 + 0x10) = 0x3ff0000000000000;
        *(undefined8 *)(pFVar10 + lVar12 + 0x18) = 0;
LAB_14df158a2:
        FVar19.Data = FVar19.Data + 8;
        iVar5 = (int)local_50;
      }
    }
    if (FVar20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar20.Data);
    }
  }
  return;
}

