// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// Exec_Runtime @ 146d63a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNavigationSystemExec::Exec_Runtime
          (FNavigationSystemExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  AActor *this_00;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  UClass *pUVar10;
  UNavigationSystemBase *pUVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 local_res10 [8];
  wchar_t *local_res18 [2];
  
  if (param_1 == (UWorld *)0x0) {
    return false;
  }
  pUVar11 = (param_1->NavigationSystem).field0_0x0.DebugPtr;
  local_res18[0] = param_2;
  if (pUVar11 != (UNavigationSystemBase *)0x0) {
    pUVar10 = UNavigationSystemV1::StaticClass();
    iVar2 = (int)pUVar10->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar10->_padding_)) goto LAB_146d63aa8;
  }
  pUVar11 = (UNavigationSystemBase *)0x0;
LAB_146d63aa8:
  if ((pUVar11 != (UNavigationSystemBase *)0x0) && (0 < *(int *)&pUVar11[5].field_0x20)) {
    bVar6 = FParse::Command(local_res18,L"CYCLENAVDRAWN",true);
    if (bVar6) {
      iVar2 = *(int *)&pUVar11[5].field_0x20;
      iVar8 = *(int *)&pUVar11[0x21].field_0x10 + 1;
      *(int *)&pUVar11[0x21].field_0x10 = iVar8;
      if (iVar2 <= iVar8) {
        *(undefined4 *)&pUVar11[0x21].field_0x10 = 0xffffffff;
      }
      uVar13 = 0;
      if (0 < iVar2) {
        lVar12 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar13 < *(int *)&pUVar11[5].field_0x20) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          this_00 = *(AActor **)(lVar12 + *(longlong *)&pUVar11[5].field_0x18);
          if (this_00 != (AActor *)0x0) {
            if ((*(uint *)&pUVar11[0x21].field_0x10 == 0xffffffff) ||
               (uVar13 == *(uint *)&pUVar11[0x21].field_0x10)) {
              uVar9 = 1;
            }
            else {
              uVar9 = 0;
            }
            uVar3 = *(uint *)&this_00[1].AttachmentReplication.RelativeScale3D.field_0x8;
            if ((uVar3 & 1) != uVar9) {
              *(uint *)&this_00[1].AttachmentReplication.RelativeScale3D.field_0x8 =
                   uVar3 & 0xfffffffe | uVar9;
              AActor::MarkComponentsRenderStateDirty(this_00);
            }
          }
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 8;
        } while ((int)uVar13 < *(int *)&pUVar11[5].field_0x20);
      }
    }
    else {
      bVar6 = FParse::Command(local_res18,L"CountNavMem",true);
      if (bVar6) {
        if (2 < (byte)LogNavigation._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        }
        if ((*(longlong *)&pUVar11[0x16].field_0x18 != 0) && (2 < (byte)LogNavigation._0_1_)) {
          TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetSizeBytes
                    ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                     (*(longlong *)&pUVar11[0x16].field_0x18 + 0x10));
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        }
        uVar13 = 0;
        if (0 < *(int *)&pUVar11[5].field_0x20) {
          lVar12 = 0;
          do {
            uVar9 = 0;
            if ((int)uVar13 < *(int *)&pUVar11[5].field_0x20) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            plVar4 = *(longlong **)(lVar12 + *(longlong *)&pUVar11[5].field_0x18);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x840))();
            }
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 8;
          } while ((int)uVar13 < *(int *)&pUVar11[5].field_0x20);
        }
      }
      else {
        bVar6 = FParse::Command(local_res18,L"RebuildNavigation",true);
        if (bVar6) {
          (**(code **)(*(longlong *)pUVar11 + 0x408))(pUVar11);
        }
        else {
          bVar6 = FParse::Command(local_res18,L"RedrawNav",true);
          if ((bVar6) || (bVar6 = FParse::Command(local_res18,L"RedrawNavigation",true), bVar6)) {
            puVar14 = *(undefined8 **)&pUVar11[5].field_0x18;
            iVar2 = *(int *)&pUVar11[5].field_0x20;
            puVar1 = puVar14 + iVar2;
            while( true ) {
              if (*(int *)&pUVar11[5].field_0x20 != iVar2) {
                `TCheckedPointerIterator<TObjectPtr<ANavigationData>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res10);
              }
              if (puVar14 == puVar1) break;
              if ((AActor *)*puVar14 != (AActor *)0x0) {
                AActor::MarkComponentsRenderStateDirty((AActor *)*puVar14);
              }
              puVar14 = puVar14 + 1;
            }
          }
        }
      }
    }
  }
  return false;
}

