// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// FAnimContextInfoVisitor @ 14a918850

FAnimContextInfoVisitor * __thiscall
`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FAnimContextInfoVisitor::
FAnimContextInfoVisitor
          (void *this,FAnimContextInfos *param_1,
          TFunctionRef<void___cdecl(UE::PoseSearch::FAnimContextInfo_const_&)> *param_2,
          TFunctionRef<void___cdecl(void)> *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  code *pcVar3;
  ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *pFVar4;
  FAnimContextInfo *pFVar5;
  bool bVar6;
  longlong lVar7;
  FAnimContextInfoVisitor *pFVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong uVar11;
  TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
  *pTVar12;
  FAnimContextInfo *pFVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  FAnimContextInfo *pFVar17;
  undefined1 local_res8 [8];
  FAnimContextInfos *local_res10;
  TFunctionRef<void___cdecl(UE::PoseSearch::FAnimContextInfo_const_&)> *local_res18;
  TFunctionRef<void___cdecl(void)> *local_res20;
  bool local_88 [4];
  uint local_84;
  FAnimContextInfo *local_80;
  int *local_78;
  FAnimContextInfo *local_70 [2];
  FAnimContextInfo *local_60;
  code *local_58 [3];
  
  *(undefined8 *)((longlong)this + 0x200) = 0;
  *(undefined4 *)((longlong)this + 0x208) = 0;
  *(undefined4 *)((longlong)this + 0x20c) = 0x20;
  *(undefined8 *)((longlong)this + 0x218) = 0;
  *(undefined4 *)((longlong)this + 0x220) = 0;
  *(undefined4 *)((longlong)this + 0x224) = 0x20;
  *(undefined4 *)((longlong)this + 0x228) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x22c) = 0;
  *(undefined8 *)((longlong)this + 0x270) = 0;
  *(undefined4 *)((longlong)this + 0x278) = 0;
  local_84 = *(uint *)&param_1->field_0x8;
  uVar11 = (ulonglong)(int)local_84;
  pFVar13 = *(FAnimContextInfo **)param_1;
  piVar15 = &(pFVar13->NearbyAnimContextInfos).ArrayNum;
  pFVar17 = pFVar13 + uVar11;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_60 = pFVar17;
  do {
    local_80 = pFVar13;
    local_78 = piVar15;
    if (*(int *)&local_res10->field_0x8 != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FAnimContextInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar17) {
      return this;
    }
    uVar10 = ((uint)((ulonglong)pFVar13 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar13 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar10 = uVar10 >> 0x10 ^ uVar10;
    piVar14 = piVar15;
    if (*piVar15 == 0) {
      if (*(int *)((longlong)this + 0x208) != *(int *)((longlong)this + 0x22c)) {
        lVar7 = (longlong)this + 0x230;
        if (*(longlong *)((longlong)this + 0x270) != 0) {
          lVar7 = *(longlong *)((longlong)this + 0x270);
        }
        iVar16 = *(int *)(lVar7 + (ulonglong)(*(int *)((longlong)this + 0x278) - 1U & uVar10) * 4);
        if (iVar16 != -1) {
          pvVar1 = *(void **)((longlong)this + 0x200);
          do {
            pvVar9 = this;
            if (pvVar1 != (void *)0x0) {
              pvVar9 = pvVar1;
            }
            lVar7 = (longlong)iVar16 * 0x10;
            if (*(FAnimContextInfo **)(lVar7 + (longlong)pvVar9) == pFVar13) {
              if (iVar16 != -1) {
                pvVar9 = this;
                if (pvVar1 != (void *)0x0) {
                  pvVar9 = pvVar1;
                }
                if (((void *)((longlong)pvVar9 + lVar7) != (void *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("!VisitedAnimContextInfos.Find(&AnimContextInfo)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                       ,0x2a8,L""), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  pFVar8 = (FAnimContextInfoVisitor *)(*pcVar3)();
                  return pFVar8;
                }
              }
              goto LAB_14a918a08;
            }
            pvVar9 = this;
            if (pvVar1 != (void *)0x0) {
              pvVar9 = pvVar1;
            }
            iVar16 = *(int *)(lVar7 + 8 + (longlong)pvVar9);
          } while (iVar16 != -1);
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar13);
          goto LAB_14a918b7a;
        }
      }
LAB_14a918a08:
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar13);
    }
    else {
      if (*(int *)((longlong)this + 0x208) != *(int *)((longlong)this + 0x22c)) {
        lVar7 = (longlong)this + 0x230;
        if (*(longlong *)((longlong)this + 0x270) != 0) {
          lVar7 = *(longlong *)((longlong)this + 0x270);
        }
        iVar16 = *(int *)(lVar7 + (ulonglong)(*(int *)((longlong)this + 0x278) - 1U & uVar10) * 4);
        if (iVar16 != -1) {
          pvVar1 = *(void **)((longlong)this + 0x200);
          do {
            pvVar9 = this;
            if (pvVar1 != (void *)0x0) {
              pvVar9 = pvVar1;
            }
            lVar7 = (longlong)iVar16 * 0x10;
            if (*(FAnimContextInfo **)(lVar7 + (longlong)pvVar9) == pFVar13) {
              if (iVar16 != -1) {
                pvVar9 = this;
                if (pvVar1 != (void *)0x0) {
                  pvVar9 = pvVar1;
                }
                if ((void *)((longlong)pvVar9 + lVar7) != (void *)0x0) goto LAB_14a918b83;
              }
              break;
            }
            pvVar9 = this;
            if (pvVar1 != (void *)0x0) {
              pvVar9 = pvVar1;
            }
            iVar16 = *(int *)((longlong)pvVar9 + lVar7 + 8);
          } while (iVar16 != -1);
        }
      }
      uVar2 = *(undefined8 *)&param_2->field_0x8;
      pcVar3 = *(code **)param_2;
      local_70[0] = pFVar13;
      local_70[1] = (FAnimContextInfo *)uVar2;
      TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::FindOrAddByHash<UE::PoseSearch::FAnimContextInfo_const_*>(this,uVar10,local_70,local_88);
      param_3 = local_res20;
      if (local_88[0] == false) {
        (*pcVar3)(uVar2,pFVar13);
        pFVar5 = local_70[1];
        pTVar12 = (TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
                   *)((ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *)(piVar15 + -2))->
                     Data;
        iVar16 = *piVar15;
        if (pTVar12 ==
            (TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
             *)0x0) {
          pTVar12 = (TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
                     *)(piVar15 + -0x12);
        }
        pFVar4 = &pTVar12->AllocatorInstance;
        while( true ) {
          if (*piVar15 != iVar16) {
            local_88[1] = false;
            `TCheckedPointerIterator<UE::PoseSearch::FAnimContextInfo_const_*_const,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_88 + 1);
          }
          pFVar13 = local_80;
          piVar14 = local_78;
          param_3 = local_res20;
          param_2 = local_res18;
          pFVar17 = local_60;
          if (pTVar12 ==
              (TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
               *)(pFVar4->InlineData + (longlong)iVar16 * 8)) break;
          pFVar13 = *(FAnimContextInfo **)(pTVar12->AllocatorInstance).InlineData;
          if ((pFVar13 == (FAnimContextInfo *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NearbyAnimContextInfo",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                 ,0x2c7,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FAnimContextInfoVisitor *)(*pcVar3)();
            return pFVar8;
          }
          local_58[1] = (code *)pFVar5;
          local_58[0] = pcVar3;
          VisitRecursively(this,pFVar13,
                           (TFunctionRef<void___cdecl(UE::PoseSearch::FAnimContextInfo_const_&)> *)
                           local_58);
          pTVar12 = (TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
                     *)((pTVar12->AllocatorInstance).InlineData + 8);
        }
      }
    }
LAB_14a918b7a:
    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
    piVar15 = piVar14;
LAB_14a918b83:
    pFVar13 = pFVar13 + 1;
    uVar11 = (ulonglong)local_84;
    piVar15 = piVar15 + 0x1e;
  } while( true );
}

// VisitRecursively @ 14a947250

void __thiscall
`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FAnimContextInfoVisitor::
VisitRecursively(void *this,FAnimContextInfo *param_1,
                TFunctionRef<void___cdecl(UE::PoseSearch::FAnimContextInfo_const_&)> *param_2)

{
  int iVar1;
  FAnimContextInfo *pFVar2;
  code *pcVar3;
  ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *pFVar4;
  bool bVar5;
  uint uVar6;
  TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
  *pTVar7;
  bool local_res8 [8];
  undefined1 local_res10 [16];
  FAnimContextInfo *local_res20;
  TFunctionRef<void___cdecl(UE::PoseSearch::FAnimContextInfo_const_&)> local_48;
  
  if (((param_1->NearbyAnimContextInfos).ArrayNum == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AnimContextInfoToVisit.NearbyAnimContextInfos.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                         ,700,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_res20 = param_1;
  TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  ::FindOrAddByHash<UE::PoseSearch::FAnimContextInfo_const_*>
            (this,uVar6 >> 0x10 ^ uVar6,&local_res20,local_res8);
  if (local_res8[0] == false) {
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
    iVar1 = (param_1->NearbyAnimContextInfos).ArrayNum;
    pTVar7 = (TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
              *)(param_1->NearbyAnimContextInfos).AllocatorInstance.SecondaryData.Data;
    if (pTVar7 == (TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
                   *)0x0) {
      pTVar7 = &param_1->NearbyAnimContextInfos;
    }
    pFVar4 = &pTVar7->AllocatorInstance;
    while( true ) {
      if ((param_1->NearbyAnimContextInfos).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FAnimContextInfo_const_*_const,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pTVar7 == (TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
                     *)(pFVar4->InlineData + (longlong)iVar1 * 8)) break;
      pFVar2 = *(FAnimContextInfo **)(pTVar7->AllocatorInstance).InlineData;
      if ((pFVar2 == (FAnimContextInfo *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NearbyAnimContextInfo",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                             ,0x2c7,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_48._0_8_ = *(undefined8 *)param_2;
      local_48._8_8_ = *(undefined8 *)&param_2->field_0x8;
      VisitRecursively(this,pFVar2,&local_48);
      pTVar7 = (TArray<UE::PoseSearch::FAnimContextInfo_const_*,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
                *)((pTVar7->AllocatorInstance).InlineData + 8);
    }
  }
  return;
}

